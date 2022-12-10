#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rectpacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_boundbox.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hittest.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontglyphpacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

bool Scaleform::GFx::IsEqualGeometry(const Scaleform::Render::ShapeDataInterface & a, const Scaleform::Render::ShapeDataInterface & b); // 0x1403E51A0
unsigned long Scaleform::GFx::ComputeGeometryHash(const Scaleform::Render::ShapeDataInterface & sh); // 0x1403E4D10
Scaleform::GFx::FontGlyphPacker::FontGlyphPacker(Scaleform::GFx::FontPackParams * params, Scaleform::GFx::ImageCreator * pimageCreator, Scaleform::Log * plog, Scaleform::GFx::ResourceId * ptextureIdGen, Scaleform::MemoryHeap * fontHeap, bool threadedLoading); // 0x1403E4910
Scaleform::GFx::FontGlyphPacker::~FontGlyphPacker(); // 0x1403E4A50
void Scaleform::GFx::FontGlyphPacker::generateGlyphInfo(Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> * glyphs, Scaleform::GFx::FontResource * font); // 0x1403E5590
unsigned long Scaleform::GFx::FontGlyphPacker::packGlyphRects(Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> * glyphs, unsigned long start, unsigned long end, unsigned long texIdx); // 0x1403E6220
unsigned long Scaleform::GFx::FontGlyphPacker::packGlyphRects(Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> * glyphs); // 0x1403E5EB0
void Scaleform::GFx::FontGlyphPacker::rasterizeGlyph(Scaleform::Render::RawImage * texImage, Scaleform::GFx::FontGlyphPacker::GlyphInfo * gi); // 0x1403E64C0
void Scaleform::GFx::FontGlyphPacker::generateTextures(Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> * glyphs, unsigned long numTextures); // 0x1403E5960
void Scaleform::GFx::FontGlyphPacker::GenerateFontBitmaps(const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> & fonts); // 0x1403E4FA0
void Scaleform::GFx::GFx_GenerateFontBitmaps(Scaleform::GFx::FontPackParams * params, const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> & fonts, Scaleform::GFx::ImageCreator * pimageCreator, Scaleform::Log * plog, Scaleform::GFx::ResourceId * pidGenerator, Scaleform::MemoryHeap * fontHeap, bool threadedLoading); // 0x1403E4EF0
class Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker>
{
protected:
	Scaleform::GFx::FontGlyphPacker * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontGlyphPacker>(const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> &);
	Ptr<Scaleform::GFx::FontGlyphPacker>(Scaleform::GFx::FontGlyphPacker *);
	Ptr<Scaleform::GFx::FontGlyphPacker>(Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontGlyphPacker>(Scaleform::Pickable<Scaleform::GFx::FontGlyphPacker>);
	Ptr<Scaleform::GFx::FontGlyphPacker>(Scaleform::GFx::FontGlyphPacker &);
	Ptr<Scaleform::GFx::FontGlyphPacker>();
	~Ptr<Scaleform::GFx::FontGlyphPacker>();
	bool operator==(Scaleform::GFx::FontGlyphPacker *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> &);
	bool operator!=(Scaleform::GFx::FontGlyphPacker *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> &);
	Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & operator=(Scaleform::Pickable<Scaleform::GFx::FontGlyphPacker>);
	const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & operator=(Scaleform::GFx::FontGlyphPacker &);
	const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & operator=(Scaleform::GFx::FontGlyphPacker *);
	const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> &);
	Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontGlyphPacker>);
	Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & SetPtr(Scaleform::GFx::FontGlyphPacker &);
	Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & SetPtr(Scaleform::GFx::FontGlyphPacker *);
	Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontGlyphPacker * & GetRawRef();
	Scaleform::GFx::FontGlyphPacker * GetPtr();
	Scaleform::GFx::FontGlyphPacker & operator*();
	Scaleform::GFx::FontGlyphPacker * operator->();
	Scaleform::GFx::FontGlyphPacker * operator class Scaleform::GFx::FontGlyphPacker *();
	Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & Pick(Scaleform::GFx::FontGlyphPacker *);
	Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & Pick(Scaleform::Pickable<Scaleform::GFx::FontGlyphPacker>);
	Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> & Pick(Scaleform::Ptr<Scaleform::GFx::FontGlyphPacker> &);
};
const float Scaleform::GFx::FontPackParams::GlyphBoundBox; // 0x14074EC34//decompilation failure at 14074EC34!
void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *pTable; // r10
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *v9; // r9
  unsigned __int64 EntryCount; // r11
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 SizeMask; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType v14; // xmm1
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *i; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = &this->pTable[3 * v7];
  EntryCount = v9[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v9[1].EntryCount = -1i64;
    v9[1].SizeMask = 0i64;
    v9[2] = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)&key->First.pFont;
    v9[3].EntryCount = *(_QWORD *)&key->First.Hash;
    LODWORD(v9[3].SizeMask) = key->Second;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( pTable[3 * v11 + 1].EntryCount != -2i64 );
    v12 = (__int64)&pTable[3 * v11 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v12 )
      {
        *(_QWORD *)v12 = EntryCount;
        *(_QWORD *)(v12 + 8) = v9[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)(v12 + 16) = v9[2];
        *(_QWORD *)(v12 + 32) = v9[3].EntryCount;
        *(_DWORD *)(v12 + 40) = v9[3].SizeMask;
      }
      v9[2] = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)&key->First.pFont;
      v14 = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)&key->First.Hash;
      v9[1].EntryCount = v11;
    }
    else
    {
      for ( i = &pTable[3 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[3 * i->EntryCount + 1] )
        ;
      if ( v12 )
      {
        *(_QWORD *)v12 = EntryCount;
        *(_QWORD *)(v12 + 8) = v9[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)(v12 + 16) = v9[2];
        *(_QWORD *)(v12 + 32) = v9[3].EntryCount;
        *(_DWORD *)(v12 + 40) = v9[3].SizeMask;
      }
      i->EntryCount = v11;
      v9[2] = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)&key->First.pFont;
      v14 = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)&key->First.Hash;
      v9[1].EntryCount = -1i64;
    }
    v9[3] = v14;
  }
  v9[1].SizeMask = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *v11; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *v12; // r8
  unsigned __int64 EntryCount; // r11
  const Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey *pFirst; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  const Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey *v18; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *i; // rcx
  const Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey *v20; // rax

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[3 * v10];
  EntryCount = v12[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    pFirst = key->pFirst;
    v12[2] = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)&key->pFirst->pFont;
    v12[3].EntryCount = *(_QWORD *)&pFirst->Hash;
    LODWORD(v12[3].SizeMask) = *key->pSecond;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( v11[3 * v15 + 1].EntryCount != -2i64 );
    v16 = (__int64)&v11[3 * v15 + 1];
    v17 = v12[1].SizeMask;
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *(_QWORD *)v16 = EntryCount;
        *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)(v16 + 16) = v12[2];
        *(_QWORD *)(v16 + 32) = v12[3].EntryCount;
        *(_DWORD *)(v16 + 40) = v12[3].SizeMask;
      }
      v18 = key->pFirst;
      v12[2] = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)&key->pFirst->pFont;
      v12[3].EntryCount = *(_QWORD *)&v18->Hash;
      LODWORD(v12[3].SizeMask) = *key->pSecond;
      v12[1].EntryCount = v15;
    }
    else
    {
      for ( i = &v11[3 * v17 + 1]; i->EntryCount != v10; i = &v11[3 * i->EntryCount + 1] )
        ;
      if ( v16 )
      {
        *(_QWORD *)v16 = EntryCount;
        *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)(v16 + 16) = v12[2];
        *(_QWORD *)(v16 + 32) = v12[3].EntryCount;
        *(_DWORD *)(v16 + 40) = v12[3].SizeMask;
      }
      i->EntryCount = v15;
      v20 = key->pFirst;
      v12[2] = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)&key->pFirst->pFont;
      v12[3].EntryCount = *(_QWORD *)&v20->Hash;
      LODWORD(v12[3].SizeMask) = *key->pSecond;
      v12[1].EntryCount = -1i64;
    }
  }
  v12[1].SizeMask = v10;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::findIndexCore<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > *this,
        const Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *v3; // rbx
  unsigned __int64 EntryCount; // rdi

  v3 = &this->pTable[3 * hashValue + 1];
  EntryCount = hashValue;
  if ( v3->EntryCount == -2i64 || v3->SizeMask != hashValue )
    return -1i64;
  while ( v3->SizeMask != hashValue
       || (const Scaleform::GFx::FontResource *)v3[1].EntryCount != key->pFont
       || !Scaleform::GFx::IsEqualGeometry((const Scaleform::Render::ShapeDataInterface *)v3[1].SizeMask, key->pShape) )
  {
    EntryCount = v3->EntryCount;
    if ( v3->EntryCount == -1i64 )
      return -1i64;
    v3 = &this->pTable[3 * EntryCount + 1];
  }
  return EntryCount;
}

void __fastcall Scaleform::GFx::FontGlyphPacker::FontGlyphPacker(
        Scaleform::GFx::FontGlyphPacker *this,
        Scaleform::GFx::FontPackParams *params,
        Scaleform::GFx::ImageCreator *pimageCreator,
        Scaleform::Log *plog,
        Scaleform::GFx::ResourceId *ptextureIdGen,
        Scaleform::MemoryHeap *fontHeap,
        bool threadedLoading)
{
  Scaleform::GFx::FontPackParams *pFontPackParams; // rax

  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontGlyphPacker_vtbl *)&Scaleform::GFx::FontGlyphPacker::`vftable';
  this->pFontPackParams = params;
  this->PackTextureConfig.NominalSize = 48;
  this->PackTextureConfig.PadPixels = 3;
  this->PackTextureConfig.TextureWidth = 1024;
  this->PackTextureConfig.TextureHeight = 1024;
  this->pTextureIdGen = ptextureIdGen;
  if ( pimageCreator )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pimageCreator);
  this->pImageCreator.pObject = pimageCreator;
  if ( plog )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)plog);
  this->pLog.pObject = plog;
  this->pFontHeap = fontHeap;
  Scaleform::Render::RectPacker::RectPacker(&this->Packer);
  Scaleform::Render::Rasterizer::Rasterizer(&this->Ras, Scaleform::Memory::pGlobalHeap);
  this->GlyphGeometryHash.mHash.pTable = 0i64;
  this->ThreadedLoading = threadedLoading;
  pFontPackParams = this->pFontPackParams;
  if ( pFontPackParams )
    this->PackTextureConfig = pFontPackParams->PackTextureConfig;
  this->Packer.Width = this->PackTextureConfig.TextureWidth;
  this->Packer.Height = this->PackTextureConfig.TextureHeight;
}

void __fastcall Scaleform::GFx::TextureGlyphData::TextureGlyphData(
        Scaleform::GFx::TextureGlyphData *this,
        unsigned int glyphCount,
        bool isLoadedFromFile)
{
  Scaleform::ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy> *p_TextureGlyphs; // rcx

  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::TextureGlyphData_vtbl *)&Scaleform::GFx::TextureGlyphData::`vftable';
  this->PackTextureConfig.NominalSize = 48;
  this->PackTextureConfig.PadPixels = 3;
  this->PackTextureConfig.TextureWidth = 1024;
  this->PackTextureConfig.TextureHeight = 1024;
  p_TextureGlyphs = &this->TextureGlyphs;
  p_TextureGlyphs->Data.Data = 0i64;
  p_TextureGlyphs->Data.Size = 0i64;
  p_TextureGlyphs->Data.Policy.Capacity = 0i64;
  this->GlyphsTextures.mHash.pTable = 0i64;
  this->FileCreation = isLoadedFromFile;
  Scaleform::ArrayData<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::Resize(
    &p_TextureGlyphs->Data,
    glyphCount);
}

void __fastcall Scaleform::GFx::FontGlyphPacker::~FontGlyphPacker(Scaleform::GFx::FontGlyphPacker *this)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *pTable; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *v5; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  this->__vftable = (Scaleform::GFx::FontGlyphPacker_vtbl *)&Scaleform::GFx::FontGlyphPacker::`vftable';
  pTable = this->GlyphGeometryHash.mHash.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->GlyphGeometryHash.mHash.pTable;
      if ( v5[v3 + 1].EntryCount != -2i64 )
        v5[v3 + 1].EntryCount = -2i64;
      v3 += 3i64;
      --v4;
    }
    while ( v4 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->GlyphGeometryHash.mHash.pTable);
    this->GlyphGeometryHash.mHash.pTable = 0i64;
  }
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->Ras.LHeap);
  this->Ras.__vftable = (Scaleform::Render::Rasterizer_vtbl *)&Scaleform::Render::TessBase::`vftable';
  Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> > *)&this->Packer.Failed);
  Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> > *)&this->Packer.PackTree);
  Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> > *)&this->Packer.Packs);
  Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> > *)&this->Packer.PackedRects);
  Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> > *)&this->Packer.SrcRects);
  pObject = (Scaleform::RefCountVImpl *)this->pLog.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v7 = (Scaleform::RefCountVImpl *)this->pImageCreator.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

void __fastcall Scaleform::Render::RectPacker::AddRect(
        Scaleform::Render::RectPacker *this,
        unsigned int w,
        unsigned int h,
        unsigned int id)
{
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // [rsp+20h] [rbp-18h]

  if ( w && h && w <= this->Width && h <= this->Height )
  {
    v5 = &this->SrcRects.gap0;
    v6 = this->SrcRects.Size >> 8;
    v10 = __PAIR64__(h, w);
    if ( v6 >= this->SrcRects.NumPages )
      Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::RectType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::RectType,2>>::allocatePage(
        &this->SrcRects,
        v6);
    v7 = 3i64 * *((unsigned __int8 *)v5 + 8);
    v8 = *(_QWORD *)(v5[4] + 8 * v6);
    *(_QWORD *)(v8 + 4 * v7) = v10;
    *(_DWORD *)(v8 + 4 * v7 + 8) = id;
  }
  else
  {
    v5 = &this->Failed.gap0;
    v9 = this->Failed.Size >> 6;
    if ( v9 >= this->Failed.NumPages )
      Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::allocatePage(
        &this->Failed,
        this->Failed.Size >> 6);
    *(_DWORD *)(*(_QWORD *)(v5[4] + 8 * v9) + 4i64 * (v5[1] & 0x3F)) = id;
  }
  ++v5[1];
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
        this->pTable[v2 + 1].EntryCount = -2i64;
      v2 += 3i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
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

__int64 __fastcall Scaleform::GFx::ComputeGeometryHash(const Scaleform::Render::ShapeDataInterface *sh)
{
  unsigned int v3; // ebx
  char v4; // si
  Scaleform::Render::ShapePathType i; // eax
  char *v6; // rdx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  char *v10; // rdx
  int v11; // eax
  Scaleform::Render::PathEdgeType j; // eax
  int v13; // ecx
  char *v14; // rdx
  int v15; // eax
  int v16; // ecx
  char *v17; // rdx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-19h] BYREF
  __int64 v20; // [rsp+24h] [rbp-15h]
  __int64 v21; // [rsp+2Ch] [rbp-Dh]
  __int64 v22; // [rsp+34h] [rbp-5h]
  __int64 v23; // [rsp+3Ch] [rbp+3h]
  __int64 v24; // [rsp+44h] [rbp+Bh]
  int v25; // [rsp+4Ch] [rbp+13h]
  Tween::EasingType v26; // [rsp+50h] [rbp+17h]
  char v27; // [rsp+54h] [rbp+1Bh]
  int v28[3]; // [rsp+58h] [rbp+1Fh] BYREF
  char v29; // [rsp+64h] [rbp+2Bh] BYREF
  char v30[8]; // [rsp+68h] [rbp+2Fh] BYREF
  char v31; // [rsp+70h] [rbp+37h] BYREF
  char v32; // [rsp+78h] [rbp+3Fh] BYREF

  if ( sh->IsEmpty((Scaleform::Render::ShapeDataInterface *)sh) )
    return 0i64;
  v3 = 5381;
  v19 = sh->GetStartingPos((Scaleform::Render::ShapeDataInterface *)sh);
  v26 = FLOAT_1_0;
  v20 = 0i64;
  v21 = 0i64;
  v22 = 0i64;
  v4 = 1;
  v23 = 0i64;
  v24 = 0i64;
  v25 = 0;
  v27 = 0;
  for ( i = sh->ReadPathInfo(
              (Scaleform::Render::ShapeDataInterface *)sh,
              (Scaleform::Render::ShapePosInfo *)&v19,
              (float *)v30,
              (unsigned int *)v28);
        i;
        i = sh->ReadPathInfo(
              (Scaleform::Render::ShapeDataInterface *)sh,
              (Scaleform::Render::ShapePosInfo *)&v19,
              (float *)v30,
              (unsigned int *)v28) )
  {
    if ( !v4 && i == Shape_NewLayer )
      break;
    v4 = 0;
    v6 = &v29;
    v7 = 12;
    do
    {
      v8 = (unsigned __int8)*--v6;
      v3 = v8 ^ (33 * v3);
      --v7;
    }
    while ( v7 );
    if ( v28[0] == v28[1] )
    {
      sh->SkipPathData((Scaleform::Render::ShapeDataInterface *)sh, (Scaleform::Render::ShapePosInfo *)&v19);
    }
    else
    {
      v9 = 8;
      v10 = &v31;
      do
      {
        v11 = (unsigned __int8)*--v10;
        v3 = v11 ^ (33 * v3);
        --v9;
      }
      while ( v9 );
      for ( j = sh->ReadEdge(
                  (Scaleform::Render::ShapeDataInterface *)sh,
                  (Scaleform::Render::ShapePosInfo *)&v19,
                  (float *)v30);
            j;
            j = sh->ReadEdge(
                  (Scaleform::Render::ShapeDataInterface *)sh,
                  (Scaleform::Render::ShapePosInfo *)&v19,
                  (float *)v30) )
      {
        if ( j == Edge_LineTo )
        {
          v13 = 8;
          v14 = &v31;
          do
          {
            v15 = (unsigned __int8)*--v14;
            v3 = v15 ^ (33 * v3);
            --v13;
          }
          while ( v13 );
        }
        else
        {
          v16 = 16;
          v17 = &v32;
          do
          {
            v18 = (unsigned __int8)*--v17;
            v3 = v18 ^ (33 * v3);
            --v16;
          }
          while ( v16 );
        }
      }
    }
  }
  return v3;
}

void __fastcall Scaleform::GFx::GFx_GenerateFontBitmaps(
        Scaleform::GFx::FontPackParams *params,
        const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> *fonts,
        Scaleform::GFx::ImageCreator *pimageCreator,
        Scaleform::Log *plog,
        Scaleform::GFx::ResourceId *pidGenerator,
        Scaleform::MemoryHeap *fontHeap,
        bool threadedLoading)
{
  Scaleform::GFx::FontGlyphPacker *v11; // rax
  Scaleform::GFx::FontGlyphPacker *v12; // rax
  Scaleform::GFx::FontGlyphPacker *v13; // rbx

  if ( params && pimageCreator )
  {
    v11 = (Scaleform::GFx::FontGlyphPacker *)Scaleform::Memory::pGlobalHeap->Alloc(
                                               Scaleform::Memory::pGlobalHeap,
                                               1032i64,
                                               0i64);
    if ( v11 )
    {
      Scaleform::GFx::FontGlyphPacker::FontGlyphPacker(
        v11,
        params,
        pimageCreator,
        plog,
        pidGenerator,
        fontHeap,
        threadedLoading);
      v13 = v12;
    }
    else
    {
      v13 = 0i64;
    }
    Scaleform::GFx::FontGlyphPacker::GenerateFontBitmaps(v13, fonts);
    if ( v13 )
      Scaleform::RefCountNTSImpl::Release(v13);
  }
}

void __fastcall Scaleform::GFx::FontGlyphPacker::GenerateFontBitmaps(
        Scaleform::GFx::FontGlyphPacker *this,
        const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> *fonts)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // er12
  __int64 v7; // rax
  __int64 v8; // r15
  Scaleform::Render::Font *pObject; // rcx
  int GlyphCountLimit; // er14
  Scaleform::Render::Font *v11; // rcx
  Scaleform::Render::Font *v12; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *pTable; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  Scaleform::Render::Font *v19; // rcx
  int v20; // ebp
  Scaleform::Render::Font *v21; // rcx
  unsigned int v22; // eax
  Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( fonts->Data.Size )
  {
    v7 = 0i64;
    do
    {
      v8 = v7;
      pObject = fonts->Data.Data[v7]->pFont.pObject;
      if ( !pObject->GetTextureGlyphData(pObject) )
      {
        GlyphCountLimit = this->pFontPackParams->GlyphCountLimit;
        if ( !GlyphCountLimit
          || (v11 = fonts->Data.Data[v8]->pFont.pObject, (int)v11->GetGlyphShapeCount(v11) <= GlyphCountLimit) )
        {
          v12 = fonts->Data.Data[v8]->pFont.pObject;
          v6 += v12->GetGlyphShapeCount(v12);
        }
      }
      v7 = ++v5;
    }
    while ( v5 < fonts->Data.Size );
  }
  memset(&pheapAddr, 0, sizeof(pheapAddr));
  if ( v6 )
    Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &pheapAddr,
      &pheapAddr,
      v6);
  pTable = this->GlyphGeometryHash.mHash.pTable;
  if ( pTable )
  {
    v14 = 0i64;
    v15 = pTable->SizeMask + 1;
    do
    {
      v16 = this->GlyphGeometryHash.mHash.pTable;
      if ( v16[v14 + 1].EntryCount != -2i64 )
        v16[v14 + 1].EntryCount = -2i64;
      v14 += 3i64;
      --v15;
    }
    while ( v15 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->GlyphGeometryHash.mHash.pTable);
    this->GlyphGeometryHash.mHash.pTable = 0i64;
  }
  if ( fonts->Data.Size )
  {
    v17 = 0i64;
    do
    {
      v18 = v17;
      v19 = fonts->Data.Data[v17]->pFont.pObject;
      if ( !v19->GetTextureGlyphData(v19) )
      {
        v20 = this->pFontPackParams->GlyphCountLimit;
        if ( !v20 || (v21 = fonts->Data.Data[v18]->pFont.pObject, (int)v21->GetGlyphShapeCount(v21) <= v20) )
          Scaleform::GFx::FontGlyphPacker::generateGlyphInfo(
            this,
            (Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr,
            fonts->Data.Data[v18]);
      }
      v17 = ++v4;
    }
    while ( v4 < fonts->Data.Size );
  }
  v22 = Scaleform::GFx::FontGlyphPacker::packGlyphRects(
          this,
          (Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr);
  Scaleform::GFx::FontGlyphPacker::generateTextures(
    this,
    (Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr,
    v22);
  if ( pheapAddr.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

bool __fastcall Scaleform::GFx::IsEqualGeometry(
        const Scaleform::Render::ShapeDataInterface *a,
        const Scaleform::Render::ShapeDataInterface *b)
{
  char v4; // bl
  char v5; // al
  unsigned int v6; // ebx
  unsigned int v7; // eax
  Scaleform::Render::ShapeDataInterface_vtbl *v8; // rax
  char v9; // r14
  Scaleform::Render::ShapePathType v10; // ebx
  Scaleform::Render::PathEdgeType v11; // ebx
  __int64 v12; // r8
  unsigned int v14; // [rsp+20h] [rbp-99h] BYREF
  __int64 v15; // [rsp+24h] [rbp-95h]
  __int64 v16; // [rsp+2Ch] [rbp-8Dh]
  __int64 v17; // [rsp+34h] [rbp-85h]
  __int64 v18; // [rsp+3Ch] [rbp-7Dh]
  __int64 v19; // [rsp+44h] [rbp-75h]
  int v20; // [rsp+4Ch] [rbp-6Dh]
  int v21; // [rsp+50h] [rbp-69h]
  char v22; // [rsp+54h] [rbp-65h]
  unsigned int v23; // [rsp+58h] [rbp-61h] BYREF
  __int64 v24; // [rsp+5Ch] [rbp-5Dh]
  __int64 v25; // [rsp+64h] [rbp-55h]
  __int64 v26; // [rsp+6Ch] [rbp-4Dh]
  __int64 v27; // [rsp+74h] [rbp-45h]
  __int64 v28; // [rsp+7Ch] [rbp-3Dh]
  int v29; // [rsp+84h] [rbp-35h]
  int v30; // [rsp+88h] [rbp-31h]
  char v31; // [rsp+8Ch] [rbp-2Dh]
  __int64 v32; // [rsp+90h] [rbp-29h] BYREF
  int v33; // [rsp+98h] [rbp-21h]
  __int64 v34; // [rsp+A0h] [rbp-19h] BYREF
  int v35; // [rsp+A8h] [rbp-11h]
  __int64 Buf1[3]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 Buf2[3]; // [rsp+C8h] [rbp+Fh] BYREF

  v4 = a->IsEmpty((Scaleform::Render::ShapeDataInterface *)a);
  v5 = b->IsEmpty((Scaleform::Render::ShapeDataInterface *)b);
  if ( v4 || v5 )
    return v4 == v5;
  v6 = a->GetStartingPos((Scaleform::Render::ShapeDataInterface *)a);
  v7 = b->GetStartingPos((Scaleform::Render::ShapeDataInterface *)b);
  v14 = v6;
  v23 = v7;
  v8 = a->__vftable;
  v15 = 0i64;
  v16 = 0i64;
  v9 = 1;
  v17 = 0i64;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0;
  v22 = 0;
  v24 = 0i64;
  v25 = 0i64;
  v26 = 0i64;
  v27 = 0i64;
  v28 = 0i64;
  v29 = 0;
  v31 = 0;
  v21 = 1065353216;
  v30 = 1065353216;
  v10 = v8->ReadPathInfo(
          (Scaleform::Render::ShapeDataInterface *)a,
          (Scaleform::Render::ShapePosInfo *)&v14,
          (float *)Buf1,
          (unsigned int *)&v32);
  if ( v10 != b->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)b,
                (Scaleform::Render::ShapePosInfo *)&v23,
                (float *)Buf2,
                (unsigned int *)&v34) )
    return 0;
LABEL_4:
  if ( v10 )
  {
    if ( v10 == Shape_NewLayer || v9 )
      v9 = 0;
    if ( v32 == v34 && v33 == v35 && Buf1[0] == Buf2[0] )
    {
      while ( 1 )
      {
        v11 = a->ReadEdge(
                (Scaleform::Render::ShapeDataInterface *)a,
                (Scaleform::Render::ShapePosInfo *)&v14,
                (float *)Buf1);
        if ( v11 != b->ReadEdge(
                      (Scaleform::Render::ShapeDataInterface *)b,
                      (Scaleform::Render::ShapePosInfo *)&v23,
                      (float *)Buf2) )
          break;
        if ( v11 == Edge_EndPath )
        {
          v10 = a->ReadPathInfo(
                  (Scaleform::Render::ShapeDataInterface *)a,
                  (Scaleform::Render::ShapePosInfo *)&v14,
                  (float *)Buf1,
                  (unsigned int *)&v32);
          if ( v10 == b->ReadPathInfo(
                        (Scaleform::Render::ShapeDataInterface *)b,
                        (Scaleform::Render::ShapePosInfo *)&v23,
                        (float *)Buf2,
                        (unsigned int *)&v34) )
            goto LABEL_4;
          return 0;
        }
        v12 = 2i64;
        if ( v11 == Edge_QuadTo )
          v12 = 4i64;
        if ( memcmp(Buf1, Buf2, 4 * v12) )
          return 0;
      }
    }
    return 0;
  }
  return 1;
}

void __fastcall Scaleform::ArrayData<Scaleform::GFx::FontGlyphPacker::GlyphInfo,Scaleform::AllocatorGH<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
        Scaleform::ArrayData<Scaleform::GFx::FontGlyphPacker::GlyphInfo,Scaleform::AllocatorGH<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2>,Scaleform::ArrayDefaultPolicy> *this,
        const Scaleform::GFx::FontGlyphPacker::GlyphInfo *val)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r8
  Scaleform::GFx::FontGlyphPacker::GlyphInfo *Data; // rcx
  __int64 v7; // rcx
  float x1; // eax
  float y2; // xmm2_4
  float x2; // xmm1_4

  v3 = this->Size + 1;
  if ( v3 >= this->Size )
  {
    if ( v3 <= this->Policy.Capacity )
      goto LABEL_7;
    v5 = v3 + (v3 >> 2);
  }
  else
  {
    if ( v3 >= this->Policy.Capacity >> 1 )
      goto LABEL_7;
    v5 = this->Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *)this,
    this,
    v5);
LABEL_7:
  Data = this->Data;
  this->Size = v3;
  v7 = (__int64)&Data[v3 - 1];
  if ( v7 )
  {
    *(_QWORD *)v7 = val->pFont;
    *(_DWORD *)(v7 + 8) = val->GlyphIndex;
    *(_DWORD *)(v7 + 12) = val->GlyphReuse;
    *(_DWORD *)(v7 + 16) = val->TextureIdx;
    x1 = val->Bounds.x1;
    y2 = val->Bounds.y2;
    x2 = val->Bounds.x2;
    *(float *)(v7 + 36) = val->Bounds.y1;
    *(float *)(v7 + 40) = x2;
    *(float *)(v7 + 44) = y2;
    *(float *)(v7 + 32) = x1;
    *(Scaleform::Render::Point<float> *)(v7 + 48) = val->Origin;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::Text::HighlightDesc *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Render::Text::HighlightDesc *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Render::Text::HighlightDesc *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Data,
                                                         v5 << 6);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::Render::Text::HighlightDesc *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               v5 << 6,
                                                               &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

void __fastcall Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::allocatePage(
        Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2> > *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // r8
  unsigned int **Pages; // rdx
  unsigned int **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    Pages = this->Pages;
    if ( Pages )
    {
      v6 = (unsigned int **)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              Pages,
                              8 * MaxPages + 512);
    }
    else
    {
      v7 = 2;
      v6 = (unsigned int **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                              Scaleform::Memory::pGlobalHeap,
                              this,
                              512i64,
                              &v7);
    }
    this->MaxPages += 64i64;
    this->Pages = v6;
  }
  v7 = 2;
  this->Pages[nb] = (unsigned int *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                      Scaleform::Memory::pGlobalHeap,
                                      this,
                                      256i64,
                                      &v7);
  ++this->NumPages;
}

void __fastcall Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::RectType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::RectType,2>>::allocatePage(
        Scaleform::ArrayPagedBase<Scaleform::Render::RectPacker::RectType,8,64,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::RectPacker::RectType,2> > *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // r8
  Scaleform::Render::RectPacker::RectType **Pages; // rdx
  Scaleform::Render::RectPacker::RectType **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    Pages = this->Pages;
    if ( Pages )
    {
      v6 = (Scaleform::Render::RectPacker::RectType **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Pages,
                                                         8 * MaxPages + 512);
    }
    else
    {
      v7 = 2;
      v6 = (Scaleform::Render::RectPacker::RectType **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         this,
                                                         512i64,
                                                         &v7);
    }
    this->MaxPages += 64i64;
    this->Pages = v6;
  }
  v7 = 2;
  this->Pages[nb] = (Scaleform::Render::RectPacker::RectType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                 Scaleform::Memory::pGlobalHeap,
                                                                 this,
                                                                 3072i64,
                                                                 &v7);
  ++this->NumPages;
}

void __fastcall Scaleform::GFx::FontGlyphPacker::generateGlyphInfo(
        Scaleform::GFx::FontGlyphPacker *this,
        Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *glyphs,
        Scaleform::GFx::FontResource *font)
{
  unsigned int v6; // edi
  Scaleform::GFx::TextureGlyphData *v7; // rbx
  unsigned int v8; // eax
  Scaleform::GFx::TextureGlyphData *v9; // rax
  Scaleform::GFx::TextureGlyphData *v10; // r14
  float v11; // xmm7_4
  unsigned int v12; // er12
  const Scaleform::Render::ShapeDataInterface *v13; // rax
  const Scaleform::Render::ShapeDataInterface *v14; // rbx
  Scaleform::Render::ShapeDataInterface_vtbl *v15; // rdx
  unsigned int v16; // eax
  float PadPixels; // xmm0_4
  unsigned int v18; // eax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *pTable; // rdx
  Scaleform::GFx::FontResource *pFont; // rcx
  signed __int64 v21; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *v22; // rdx
  unsigned int *p_SizeMask; // rax
  Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey bounds; // [rsp+30h] [rbp-D0h] BYREF
  int Size; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::GFx::FontGlyphPacker::GlyphInfo pos; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeRef key; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::Matrix2x4<float> trans; // [rsp+B0h] [rbp-50h] BYREF
  int v29[4]; // [rsp+D0h] [rbp-30h] BYREF
  float coord[6]; // [rsp+E0h] [rbp-20h] BYREF

  if ( font->pFont.pObject->GetGlyphShapeCount(font->pFont.pObject) )
  {
    v6 = 0;
    v7 = (Scaleform::GFx::TextureGlyphData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pFontHeap->Alloc)(
                                               this->pFontHeap,
                                               72i64);
    if ( v7 )
    {
      v8 = font->pFont.pObject->GetGlyphShapeCount(font->pFont.pObject);
      Scaleform::GFx::TextureGlyphData::TextureGlyphData(v7, v8, 0);
      v10 = v9;
    }
    else
    {
      v10 = 0i64;
    }
    v10->PackTextureConfig = this->PackTextureConfig;
    font->pFont.pObject->SetTextureGlyphData(font->pFont.pObject, v10);
    v11 = (float)this->PackTextureConfig.NominalSize / 1536.0;
    v12 = font->pFont.pObject->GetGlyphShapeCount(font->pFont.pObject);
    if ( v12 )
    {
      while ( 1 )
      {
        if ( Scaleform::GFx::TextureGlyphData::GetTextureGlyph(v10, v6)->pImage.pObject )
          goto LABEL_28;
        v13 = font->pFont.pObject->GetPermanentGlyphShape(font->pFont.pObject, v6);
        v14 = v13;
        if ( !v13 )
          goto LABEL_28;
        v15 = v13->__vftable;
        *(_OWORD *)&trans.M[0][0] = _xmm;
        *(_OWORD *)&bounds.pFont = _xmm_f149f2caf149f2ca7149f2ca7149f2ca;
        *(_OWORD *)&trans.M[1][0] = _xmm;
        v16 = v15->GetStartingPos((Scaleform::Render::ShapeDataInterface *)v13);
        pos.Origin.x = 1.0;
        LODWORD(pos.pFont) = v16;
        memset((char *)&pos.pFont + 4, 0, 44);
        LOBYTE(pos.Origin.y) = 0;
        while ( v14->ReadPathInfo(
                  (Scaleform::Render::ShapeDataInterface *)v14,
                  (Scaleform::Render::ShapePosInfo *)&pos,
                  coord,
                  (unsigned int *)v29) )
        {
          if ( v29[0] == v29[1] )
            v14->SkipPathData((Scaleform::Render::ShapeDataInterface *)v14, (Scaleform::Render::ShapePosInfo *)&pos);
          else
            Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(
              v14,
              &trans,
              (Scaleform::Render::ShapePosInfo *)&pos,
              coord,
              (Scaleform::Render::Rect<float> *)&bounds);
        }
        if ( (float)(*(float *)&bounds.pShape - *(float *)&bounds.pFont) <= 0.0 )
          goto LABEL_28;
        if ( (float)(*((float *)&bounds.pShape + 1) - *((float *)&bounds.pFont + 1)) <= 0.0 )
          goto LABEL_28;
        PadPixels = (float)this->PackTextureConfig.PadPixels;
        pos.Origin = 0i64;
        pos.Bounds.x2 = (float)(*(float *)&bounds.pShape * v11) + PadPixels;
        pos.Bounds.x1 = (float)(*(float *)&bounds.pFont * v11) - PadPixels;
        pos.Bounds.y1 = (float)(*((float *)&bounds.pFont + 1) * v11) - PadPixels;
        pos.Bounds.y2 = (float)(*((float *)&bounds.pShape + 1) * v11) + PadPixels;
        if ( (float)(pos.Bounds.x2 - pos.Bounds.x1) <= 0.0
          || (float)((float)((float)(*((float *)&bounds.pShape + 1) * v11) + PadPixels)
                   - (float)((float)(*((float *)&bounds.pFont + 1) * v11) - PadPixels)) <= 0.0 )
        {
          goto LABEL_28;
        }
        pos.pFont = font;
        pos.GlyphIndex = v6;
        *(_QWORD *)&pos.GlyphReuse = -1i64;
        v18 = Scaleform::GFx::ComputeGeometryHash(v14);
        pTable = this->GlyphGeometryHash.mHash.pTable;
        pFont = font;
        bounds.pFont = font;
        bounds.pShape = v14;
        bounds.Hash = v18;
        if ( !pTable )
          goto LABEL_21;
        v21 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::findIndexCore<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>(
                &this->GlyphGeometryHash.mHash,
                &bounds,
                pTable->SizeMask & ((unsigned __int64)font ^ v18 ^ ((unsigned __int64)font >> 6)));
        if ( v21 < 0 )
          break;
        v22 = &this->GlyphGeometryHash.mHash.pTable[3 * v21 + 2];
        pFont = (Scaleform::GFx::FontResource *)bounds.pFont;
LABEL_22:
        p_SizeMask = (unsigned int *)&v22[1].SizeMask;
        if ( !v22 )
          p_SizeMask = 0i64;
        if ( p_SizeMask )
        {
          pos.GlyphReuse = *p_SizeMask;
        }
        else
        {
          Size = glyphs->Data.Size;
          key.pFirst = &bounds;
          key.pSecond = (const unsigned int *)&Size;
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeRef>(
            &this->GlyphGeometryHash.mHash,
            &this->GlyphGeometryHash,
            &key,
            (unsigned __int64)pFont ^ bounds.Hash ^ ((unsigned __int64)pFont >> 6));
        }
        Scaleform::ArrayData<Scaleform::GFx::FontGlyphPacker::GlyphInfo,Scaleform::AllocatorGH<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
          &glyphs->Data,
          &pos);
LABEL_28:
        if ( ++v6 >= v12 )
          goto LABEL_29;
      }
      pFont = (Scaleform::GFx::FontResource *)bounds.pFont;
LABEL_21:
      v22 = 0i64;
      goto LABEL_22;
    }
LABEL_29:
    Scaleform::RefCountNTSImpl::Release(v10);
  }
}

void __fastcall Scaleform::GFx::FontGlyphPacker::generateTextures(
        Scaleform::GFx::FontGlyphPacker *this,
        Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *glyphs,
        unsigned int numTextures)
{
  unsigned int v3; // er13
  unsigned __int64 v5; // r15
  unsigned int v6; // esi
  unsigned int v7; // er14
  unsigned int v8; // edi
  __int64 v9; // rbx
  Scaleform::GFx::FontGlyphPacker::GlyphInfo *v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int TextureWidth; // er15
  unsigned int TextureHeight; // edi
  Scaleform::GFx::FontGlyphPacker *v15; // rsi
  unsigned int v16; // er14
  Scaleform::Render::RawImage *v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rax
  Scaleform::GFx::FontGlyphPacker::GlyphInfo *v20; // rax
  unsigned int *p_Id; // rcx
  unsigned int v22; // edi
  float v23; // xmm12_4
  float v24; // xmm0_4
  float v25; // xmm13_4
  Scaleform::GFx::ImageResource *v26; // rax
  Scaleform::GFx::ImageResource *v27; // rax
  __int64 v28; // rax
  Scaleform::GFx::FontGlyphPacker::GlyphInfo *Data; // r8
  Scaleform::GFx::FontGlyphPacker::GlyphInfo *v30; // rax
  unsigned int GlyphReuse; // edx
  Scaleform::GFx::FontResource *pFont; // rsi
  float x1; // xmm6_4
  float y1; // xmm7_4
  float x2; // xmm8_4
  float y2; // xmm9_4
  float x; // xmm10_4
  float y; // xmm11_4
  unsigned int GlyphIndex; // er15
  int TextureIdx; // ecx
  Scaleform::GFx::FontGlyphPacker::GlyphInfo *v41; // rax
  Scaleform::GFx::TextureGlyphData *v42; // rsi
  Scaleform::Render::Palette *pObject; // rdi
  Scaleform::GFx::ResourceId textureId[2]; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::GFx::ImageResource *pimageRes; // [rsp+40h] [rbp-C8h]
  Scaleform::GFx::FontGlyphPacker *v46; // [rsp+48h] [rbp-C0h]
  Scaleform::Render::Size<unsigned long> size; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v48[2]; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::GFx::FontResource *v49; // [rsp+68h] [rbp-A0h]
  unsigned int v50; // [rsp+70h] [rbp-98h]
  unsigned int v51; // [rsp+74h] [rbp-94h]
  int v52; // [rsp+78h] [rbp-90h]
  float v53; // [rsp+88h] [rbp-80h]
  float v54; // [rsp+8Ch] [rbp-7Ch]
  float v55; // [rsp+90h] [rbp-78h]
  float v56; // [rsp+94h] [rbp-74h]
  float v57; // [rsp+98h] [rbp-70h]
  float v58; // [rsp+9Ch] [rbp-6Ch]
  Scaleform::Render::ImageData pdata; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::Render::TextureGlyph glyph; // [rsp+E8h] [rbp-20h] BYREF

  if ( numTextures )
  {
    v3 = 0;
    v46 = this;
    textureId[1].Id = numTextures;
    do
    {
      v5 = glyphs->Data.Size;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      if ( v5 )
      {
        v9 = 0i64;
        do
        {
          v10 = &glyphs->Data.Data[v9];
          if ( v10->TextureIdx == v3 )
          {
            v11 = (int)ceilf(v10->Bounds.x2);
            if ( v11 > (int)v6 )
              v6 = v11;
            v12 = (int)ceilf(v10->Bounds.y2);
            if ( v12 > (int)v7 )
              v7 = v12;
          }
          v9 = ++v8;
        }
        while ( v8 < v5 );
      }
      TextureWidth = v46->PackTextureConfig.TextureWidth;
      TextureHeight = v46->PackTextureConfig.TextureHeight;
      if ( v6 <= TextureWidth >> 1 )
      {
        for ( TextureWidth = 1; TextureWidth < v6; TextureWidth *= 2 )
          ;
      }
      if ( v7 <= TextureHeight >> 1 )
      {
        for ( TextureHeight = 1; TextureHeight < v7; TextureHeight *= 2 )
          ;
      }
      v15 = v46;
      v16 = 0;
      size.Width = TextureWidth;
      size.Height = TextureHeight;
      v17 = Scaleform::Render::RawImage::Create(Image_A8, 1u, &size, 2u, v46->pFontHeap, 0i64);
      *(_QWORD *)&pdata.Format = 0i64;
      *(_DWORD *)&pdata.Flags = 0x10000;
      pdata.pPlanes = &pdata.Plane0;
      memset(&pdata.pPalette, 0, 40);
      Scaleform::Render::RawImage::GetImageData(v17, &pdata);
      memset(pdata.pPlanes->pData, 0, TextureWidth * TextureHeight);
      v18 = 0;
      if ( glyphs->Data.Size )
      {
        v19 = 0i64;
        do
        {
          v20 = &glyphs->Data.Data[v19];
          if ( v20->TextureIdx == v3 )
            Scaleform::GFx::FontGlyphPacker::rasterizeGlyph(v15, v17, v20);
          v19 = ++v18;
        }
        while ( v18 < glyphs->Data.Size );
      }
      v17->GetSize(v17, (Scaleform::Render::Size<unsigned long> *)v48);
      p_Id = &v15->pTextureIdGen->Id;
      v22 = *p_Id;
      v23 = 1.0 / (float)v48[0];
      v24 = (float)v48[1];
      ++*p_Id;
      v25 = 1.0 / v24;
      v26 = (Scaleform::GFx::ImageResource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v15->pFontHeap->Alloc)(
                                               v15->pFontHeap,
                                               104i64);
      if ( v26 )
      {
        Scaleform::GFx::ImageResource::ImageResource(v26, v17, Use_FontTexture);
        pimageRes = v27;
      }
      else
      {
        pimageRes = 0i64;
      }
      if ( glyphs->Data.Size )
      {
        v28 = 0i64;
        do
        {
          Data = glyphs->Data.Data;
          v30 = &glyphs->Data.Data[v28];
          GlyphReuse = v30->GlyphReuse;
          pFont = v30->pFont;
          x1 = v30->Bounds.x1;
          y1 = v30->Bounds.y1;
          x2 = v30->Bounds.x2;
          y2 = v30->Bounds.y2;
          x = v30->Origin.x;
          y = v30->Origin.y;
          GlyphIndex = v30->GlyphIndex;
          TextureIdx = v30->TextureIdx;
          v53 = x1;
          v54 = y1;
          v55 = x2;
          v56 = y2;
          v57 = x;
          v58 = y;
          v49 = pFont;
          v50 = GlyphIndex;
          v51 = GlyphReuse;
          v52 = TextureIdx;
          if ( GlyphReuse != -1 )
          {
            v41 = &Data[(unsigned __int64)GlyphReuse];
            x1 = v41->Bounds.x1;
            y1 = v41->Bounds.y1;
            x2 = v41->Bounds.x2;
            y2 = v41->Bounds.y2;
            x = v41->Origin.x;
            y = v41->Origin.y;
            TextureIdx = v41->TextureIdx;
            v53 = x1;
            v54 = y1;
            v55 = x2;
            v56 = y2;
            v57 = x;
            v58 = y;
            v52 = TextureIdx;
          }
          if ( TextureIdx == v3 )
          {
            glyph.pImage.pObject = 0i64;
            glyph.UvBounds = 0i64;
            glyph.RefCount = 1;
            glyph.BindIndex = -1;
            glyph.__vftable = (Scaleform::Render::TextureGlyph_vtbl *)&Scaleform::Render::TextureGlyph::`vftable';
            v17->AddRef(v17);
            if ( glyph.pImage.pObject )
              glyph.pImage.pObject->Release(glyph.pImage.pObject);
            glyph.pImage.pObject = v17;
            glyph.BindIndex = -1;
            glyph.UvBounds.x1 = x1 * v23;
            glyph.UvBounds.y1 = y1 * v25;
            glyph.UvBounds.x2 = x2 * v23;
            glyph.UvBounds.y2 = y2 * v25;
            glyph.UvOrigin.x = x * v23;
            glyph.UvOrigin.y = y * v25;
            v42 = (Scaleform::GFx::TextureGlyphData *)pFont->pFont.pObject->GetTextureGlyphData(pFont->pFont.pObject);
            Scaleform::GFx::TextureGlyphData::AddTextureGlyph(v42, GlyphIndex, &glyph);
            textureId[0].Id = v22;
            Scaleform::GFx::TextureGlyphData::AddTexture(v42, (Scaleform::GFx::ResourceId)textureId, pimageRes);
            if ( glyph.pImage.pObject )
              glyph.pImage.pObject->Release(glyph.pImage.pObject);
            Scaleform::RefCountImplCore::~RefCountImplCore(&glyph);
          }
          v28 = ++v16;
        }
        while ( v16 < glyphs->Data.Size );
      }
      if ( pimageRes )
        Scaleform::GFx::Resource::Release(pimageRes);
      Scaleform::Render::ImageData::freePlanes(&pdata);
      pObject = pdata.pPalette.pObject;
      if ( pdata.pPalette.pObject )
      {
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pdata.pPalette.pObject->RefCount.Value, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
      v17->Release(v17);
      ++v3;
    }
    while ( v3 < textureId[1].Id );
  }
}

unsigned int __fastcall Scaleform::GFx::FontGlyphPacker::packGlyphRects(
        Scaleform::GFx::FontGlyphPacker *this,
        Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *glyphs)
{
  unsigned int texIdx; // edi
  Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *v3; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // er12
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  Scaleform::GFx::FontGlyphPacker::GlyphInfo *Data; // rsi
  float v10; // xmm6_4
  unsigned int v11; // ebx
  float v12; // xmm6_4
  float v13; // xmm0_4
  unsigned int v14; // er15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // r14
  Scaleform::Render::RectPacker::PackType *v18; // r12
  unsigned int v19; // ecx
  unsigned int v20; // eax
  Scaleform::Render::RectPacker::RectType *v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rbp
  float v24; // xmm8_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm7_4
  int v28; // ebx
  float v29; // xmm6_4
  float v30; // xmm6_4
  int v31; // eax
  unsigned int y; // eax
  unsigned int v34; // [rsp+B0h] [rbp+8h]
  unsigned int i; // [rsp+C0h] [rbp+18h]
  int v37; // [rsp+C8h] [rbp+20h]

  texIdx = 0;
  v3 = glyphs;
  v34 = 0;
  if ( !this->pFontPackParams->SeparateTextures )
    return Scaleform::GFx::FontGlyphPacker::packGlyphRects(this, glyphs, 0, glyphs->Data.Size, 0);
  v5 = 0;
  v6 = 1;
  v37 = 1;
  if ( glyphs->Data.Size > 1 )
  {
    v7 = 1i64;
    do
    {
      if ( v3->Data.Data[(unsigned __int64)(v6 - 1)].pFont != v3->Data.Data[v7].pFont )
      {
        this->Packer.SrcRects.Size = 0i64;
        this->Packer.PackedRects.Size = 0i64;
        this->Packer.Packs.Size = 0i64;
        this->Packer.PackTree.Size = 0i64;
        this->Packer.Failed.Size = 0i64;
        if ( v5 < v6 )
        {
          v8 = (unsigned __int64)v5 << 6;
          do
          {
            Data = v3->Data.Data;
            if ( *(unsigned int *)((char *)&v3->Data.Data->GlyphReuse + v8) == -1 )
            {
              v10 = ceilf(*(float *)((char *)&Data->Bounds.y2 + v8));
              v11 = (int)(float)(v10 - floorf(*(float *)((char *)&Data->Bounds.y1 + v8)));
              v12 = ceilf(*(float *)((char *)&Data->Bounds.x2 + v8));
              v13 = floorf(*(float *)((char *)&Data->Bounds.x1 + v8));
              Scaleform::Render::RectPacker::AddRect(&this->Packer, (int)(float)(v12 - v13), v11, v5);
              v3 = glyphs;
            }
            ++v5;
            v8 += 64i64;
          }
          while ( v5 < v6 );
          texIdx = v34;
        }
        Scaleform::Render::RectPacker::Pack(&this->Packer);
        v14 = 0;
        if ( this->Packer.Packs.Size )
        {
          v15 = 0i64;
          do
          {
            v16 = v15 >> 4;
            v17 = v15 & 0xF;
            v18 = this->Packer.Packs.Pages[v16];
            v19 = 0;
            for ( i = 0; i < v18[v17].NumRects; *(float *)(v23 + 44) = (float)(int)((int)v30 + y) )
            {
              v20 = v19 + v18[v17].StartRect;
              v21 = this->Packer.PackedRects.Pages[(unsigned __int64)v20 >> 8];
              v22 = (unsigned __int8)v20;
              v23 = (unsigned __int64)&v3->Data.Data[(unsigned __int64)v21[(unsigned __int8)v20].Id];
              v24 = *(float *)(v23 + 32);
              v25 = ceilf(*(float *)(v23 + 40));
              v26 = floorf(v24);
              v27 = *(float *)(v23 + 36);
              v28 = (int)(float)(v25 - v26);
              v29 = ceilf(*(float *)(v23 + 44));
              v30 = v29 - floorf(v27);
              *(float *)(v23 + 48) = (float)(int)v21[v22].x - v24;
              *(float *)(v23 + 52) = (float)(int)v21[v22].y - v27;
              *(float *)(v23 + 32) = (float)(int)v21[v22].x;
              *(float *)(v23 + 36) = (float)(int)v21[v22].y;
              v31 = v28 + v21[v22].x;
              v3 = glyphs;
              *(float *)(v23 + 40) = (float)v31;
              y = v21[v22].y;
              texIdx = v34;
              v19 = ++i;
              *(_DWORD *)(v23 + 16) = v14 + v34;
            }
            v3 = glyphs;
            v15 = ++v14;
          }
          while ( v14 < this->Packer.Packs.Size );
          v6 = v37;
        }
        texIdx += LODWORD(this->Packer.Packs.Size);
        v5 = v6;
        v3 = glyphs;
        v34 = texIdx;
      }
      v7 = ++v6;
      v37 = v6;
    }
    while ( v6 < v3->Data.Size );
  }
  return Scaleform::GFx::FontGlyphPacker::packGlyphRects(this, v3, v5, v3->Data.Size, texIdx);
}

__int64 __fastcall Scaleform::GFx::FontGlyphPacker::packGlyphRects(
        Scaleform::GFx::FontGlyphPacker *this,
        Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *glyphs,
        unsigned int start,
        unsigned int end,
        unsigned int texIdx)
{
  unsigned int v6; // ebp
  Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *v7; // rbx
  unsigned __int64 v9; // rdi
  Scaleform::GFx::FontGlyphPacker::GlyphInfo *Data; // rsi
  float v11; // xmm6_4
  unsigned int v12; // ebx
  float v13; // xmm6_4
  float v14; // xmm0_4
  unsigned int v15; // er15
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  Scaleform::Render::RectPacker::PackType *v19; // r12
  unsigned int v20; // ecx
  unsigned int v21; // eax
  Scaleform::Render::RectPacker::RectType *v22; // rdi
  __int64 v23; // rsi
  unsigned __int64 v24; // rbp
  float v25; // xmm8_4
  float v26; // xmm6_4
  float v27; // xmm0_4
  float v28; // xmm7_4
  int v29; // ebx
  float v30; // xmm6_4
  float v31; // xmm6_4
  int v32; // eax
  float v33; // xmm0_4
  unsigned int i; // [rsp+A0h] [rbp+18h]

  v6 = start;
  v7 = glyphs;
  this->Packer.SrcRects.Size = 0i64;
  this->Packer.PackedRects.Size = 0i64;
  this->Packer.Packs.Size = 0i64;
  this->Packer.PackTree.Size = 0i64;
  this->Packer.Failed.Size = 0i64;
  if ( start < end )
  {
    v9 = (unsigned __int64)start << 6;
    do
    {
      Data = v7->Data.Data;
      if ( *(unsigned int *)((char *)&v7->Data.Data->GlyphReuse + v9) == -1 )
      {
        v11 = ceilf(*(float *)((char *)&Data->Bounds.y2 + v9));
        v12 = (int)(float)(v11 - floorf(*(float *)((char *)&Data->Bounds.y1 + v9)));
        v13 = ceilf(*(float *)((char *)&Data->Bounds.x2 + v9));
        v14 = floorf(*(float *)((char *)&Data->Bounds.x1 + v9));
        Scaleform::Render::RectPacker::AddRect(&this->Packer, (int)(float)(v13 - v14), v12, v6);
        v7 = glyphs;
      }
      ++v6;
      v9 += 64i64;
    }
    while ( v6 < end );
  }
  Scaleform::Render::RectPacker::Pack(&this->Packer);
  v15 = 0;
  if ( this->Packer.Packs.Size )
  {
    v16 = 0i64;
    do
    {
      v17 = v16 >> 4;
      v18 = v16 & 0xF;
      v19 = this->Packer.Packs.Pages[v17];
      v20 = 0;
      for ( i = 0; i < v19[v18].NumRects; *(float *)(v24 + 44) = v33 )
      {
        v21 = v20 + v19[v18].StartRect;
        v22 = this->Packer.PackedRects.Pages[(unsigned __int64)v21 >> 8];
        v23 = (unsigned __int8)v21;
        v24 = (unsigned __int64)&v7->Data.Data[(unsigned __int64)v22[(unsigned __int8)v21].Id];
        v25 = *(float *)(v24 + 32);
        v26 = ceilf(*(float *)(v24 + 40));
        v27 = floorf(v25);
        v28 = *(float *)(v24 + 36);
        v29 = (int)(float)(v26 - v27);
        v30 = ceilf(*(float *)(v24 + 44));
        v31 = v30 - floorf(v28);
        *(float *)(v24 + 48) = (float)(int)v22[v23].x - v25;
        *(float *)(v24 + 52) = (float)(int)v22[v23].y - v28;
        *(float *)(v24 + 32) = (float)(int)v22[v23].x;
        *(float *)(v24 + 36) = (float)(int)v22[v23].y;
        v32 = v29 + v22[v23].x;
        v7 = glyphs;
        *(float *)(v24 + 40) = (float)v32;
        v20 = ++i;
        v33 = (float)((int)v31 + v22[v23].y);
        *(_DWORD *)(v24 + 16) = v15 + texIdx;
      }
      v7 = glyphs;
      v16 = ++v15;
    }
    while ( v15 < this->Packer.Packs.Size );
  }
  return texIdx + LODWORD(this->Packer.Packs.Size);
}

void __fastcall Scaleform::GFx::FontGlyphPacker::rasterizeGlyph(
        Scaleform::GFx::FontGlyphPacker *this,
        Scaleform::Render::RawImage *texImage,
        Scaleform::GFx::FontGlyphPacker::GlyphInfo *gi)
{
  const Scaleform::Render::ShapeDataInterface *v6; // rax
  const Scaleform::Render::ShapeDataInterface *v7; // rbx
  Scaleform::Render::ShapeDataInterface_vtbl *v8; // rax
  __m128 v9; // xmm6
  __m128 v10; // xmm7
  Scaleform::Render::Rasterizer *p_Ras; // rdi
  Scaleform::Render::Rasterizer_vtbl *v12; // rax
  char v13; // si
  Scaleform::Render::ShapePathType i; // eax
  Scaleform::Render::PathEdgeType j; // eax
  Scaleform::Render::Rasterizer *v16; // rcx
  __m128 v17; // xmm2
  int v18; // esi
  int PadPixels; // ebx
  int v20; // er14
  int v21; // er15
  unsigned int v22; // ebx
  unsigned int v23; // esi
  Scaleform::Render::Palette *pObject; // rbx
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+34h] [rbp-CCh]
  __int64 v27; // [rsp+3Ch] [rbp-C4h]
  __int64 v28; // [rsp+44h] [rbp-BCh]
  __int64 v29; // [rsp+4Ch] [rbp-B4h]
  __int64 v30; // [rsp+54h] [rbp-ACh]
  int v31; // [rsp+5Ch] [rbp-A4h]
  Tween::EasingType v32; // [rsp+60h] [rbp-A0h]
  char v33; // [rsp+64h] [rbp-9Ch]
  Scaleform::Render::ImageData pdata; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::ToleranceParams param; // [rsp+B0h] [rbp-50h] BYREF
  __m128 v36; // [rsp+100h] [rbp+0h] BYREF
  int v37[4]; // [rsp+118h] [rbp+18h] BYREF

  v6 = gi->pFont->pFont.pObject->GetPermanentGlyphShape(gi->pFont->pFont.pObject, gi->GlyphIndex);
  v7 = v6;
  if ( v6 && !v6->IsEmpty((Scaleform::Render::ShapeDataInterface *)v6) )
  {
    v8 = v7->__vftable;
    v9 = (__m128)COERCE_UNSIGNED_INT((float)this->PackTextureConfig.NominalSize);
    param.CurveRecursionLimit = 12;
    *(_OWORD *)&param.Epsilon = _xmm;
    v9.m128_f32[0] = v9.m128_f32[0] / 1536.0;
    *(_OWORD *)&param.FillLowerScale = _xmm;
    *(_OWORD *)&param.StrokeLowerScale = _xmm;
    *(_OWORD *)&param.Scale9LowerScale = _xmm;
    v10 = _mm_shuffle_ps(v9, v9, 0);
    param.MinDet3D = FLOAT_0_001;
    LODWORD(param.MinScale3D) = FLOAT_0_050000001;
    p_Ras = &this->Ras;
    v25 = v8->GetStartingPos((Scaleform::Render::ShapeDataInterface *)v7);
    v12 = this->Ras.__vftable;
    v32 = FLOAT_1_0;
    v13 = 1;
    v26 = 0i64;
    v27 = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    v30 = 0i64;
    v31 = 0;
    v33 = 0;
    v12->Clear(&this->Ras);
    for ( i = v7->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)v7,
                (Scaleform::Render::ShapePosInfo *)&v25,
                v36.m128_f32,
                (unsigned int *)v37);
          i;
          i = v7->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)v7,
                (Scaleform::Render::ShapePosInfo *)&v25,
                v36.m128_f32,
                (unsigned int *)v37) )
    {
      if ( !v13 && i == Shape_NewLayer )
        break;
      v13 = 0;
      if ( v37[0] == v37[1] )
      {
        v7->SkipPathData((Scaleform::Render::ShapeDataInterface *)v7, (Scaleform::Render::ShapePosInfo *)&v25);
      }
      else
      {
        v36.m128_f32[0] = v36.m128_f32[0] * v9.m128_f32[0];
        v36.m128_f32[1] = v36.m128_f32[1] * v9.m128_f32[0];
        Scaleform::Render::Rasterizer::MoveTo(&this->Ras, v36.m128_f32[0], v36.m128_f32[1]);
        for ( j = v7->ReadEdge(
                    (Scaleform::Render::ShapeDataInterface *)v7,
                    (Scaleform::Render::ShapePosInfo *)&v25,
                    v36.m128_f32);
              j;
              j = v7->ReadEdge(
                    (Scaleform::Render::ShapeDataInterface *)v7,
                    (Scaleform::Render::ShapePosInfo *)&v25,
                    v36.m128_f32) )
        {
          v16 = &this->Ras;
          if ( j == Edge_LineTo )
          {
            v36.m128_f32[0] = v36.m128_f32[0] * v9.m128_f32[0];
            v36.m128_f32[1] = v36.m128_f32[1] * v9.m128_f32[0];
            Scaleform::Render::Rasterizer::LineTo(v16, v36.m128_f32[0], v36.m128_f32[1]);
          }
          else
          {
            v17 = _mm_mul_ps(v36, v10);
            v36.m128_u64[1] = v17.m128_u64[1];
            v36.m128_i32[0] = v17.m128_i32[0];
            v36.m128_i32[1] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
            Scaleform::Render::TessellateQuadCurve(
              v16,
              &param,
              v17.m128_f32[0],
              v36.m128_f32[1],
              _mm_shuffle_ps(v17, v17, 170).m128_f32[0],
              _mm_shuffle_ps(v17, v17, 255).m128_f32[0]);
          }
        }
        p_Ras->ClosePath(&this->Ras);
      }
    }
    if ( Scaleform::Render::Rasterizer::SortCells(&this->Ras) )
    {
      *(_QWORD *)&pdata.Format = 0i64;
      pdata.pPlanes = &pdata.Plane0;
      *(_DWORD *)&pdata.Flags = 0x10000;
      memset(&pdata.pPalette, 0, 40);
      Scaleform::Render::RawImage::GetImageData(texImage, &pdata);
      v18 = this->Ras.MaxY - this->Ras.MinY;
      PadPixels = this->PackTextureConfig.PadPixels;
      v20 = PadPixels + (int)floorf(gi->Bounds.x1);
      v21 = PadPixels + (int)floorf(gi->Bounds.y1);
      v22 = 0;
      v23 = v18 + 1;
      if ( v23 )
      {
        do
        {
          Scaleform::Render::Rasterizer::SweepScanline(
            p_Ras,
            v22,
            &pdata.pPlanes->pData[pdata.pPlanes->Pitch * (v22 + v21) + v20],
            1u,
            0);
          ++v22;
        }
        while ( v22 < v23 );
      }
      Scaleform::Render::ImageData::freePlanes(&pdata);
      pObject = pdata.pPalette.pObject;
      if ( pdata.pPalette.pObject )
      {
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pdata.pPalette.pObject->RefCount.Value, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    p_Ras->Clear(p_Ras);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *pTable; // rdi
  int v10; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > v11; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v10 = 2;
    v6 = 0i64;
    v11.pTable = 0i64;
    v11.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 48 * v5 + 16, &v10);
    v11.pTable->EntryCount = 0i64;
    v11.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 3i64;
        v11.pTable[v7 - 2].EntryCount = -2i64;
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
        if ( this->pTable[v6 + 1].EntryCount != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>>(
            &v11,
            pheapAddr,
            (const Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey> *)&pTable[v6 + 2],
            pTable[v6 + 2].EntryCount ^ (pTable[v6 + 2].EntryCount >> 6) ^ LODWORD(pTable[v6 + 3].EntryCount));
          pTable[v6 + 1].EntryCount = -2i64;
        }
        v6 += 3i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v11.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>>::Clear(this);
  }
}

