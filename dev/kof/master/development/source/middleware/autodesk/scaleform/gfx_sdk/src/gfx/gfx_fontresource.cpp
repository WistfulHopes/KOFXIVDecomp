#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"

Scaleform::GFx::TextureGlyphData::TextureGlyphData(const Scaleform::GFx::TextureGlyphData & orig); // 0x1403D4190
const Scaleform::Render::TextureGlyph & Scaleform::GFx::TextureGlyphData::GetTextureGlyph(unsigned long glyphIndex); // 0x1403D6F00
void Scaleform::GFx::TextureGlyphData::AddTextureGlyph(unsigned long glyphIndex, const Scaleform::Render::TextureGlyph & glyph); // 0x1403D5190
void Scaleform::GFx::TextureGlyphData::AddTexture(Scaleform::GFx::ResourceId textureId, Scaleform::GFx::ImageResource * pimageRes); // 0x1403D5120
void Scaleform::GFx::TextureGlyphData::AddTexture(Scaleform::GFx::ResourceId textureId, const Scaleform::GFx::ResourceHandle & rh); // 0x1403D5070
const Scaleform::Render::TextureGlyph * Scaleform::GFx::FontData::GetTextureGlyph(unsigned long glyphIndex); // 0x1403D6EE0
float Scaleform::GFx::FontData::GetTextureGlyphHeight(); // 0x1403D6FA0
Scaleform::GFx::FontData::FontData(); // 0x1403D3C90
Scaleform::GFx::FontData::FontData(const char * name, unsigned long fontFlags); // 0x1403D3BA0
Scaleform::GFx::FontData::~FontData(); // 0x1403D4390
void Scaleform::GFx::FontData::Read(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x1403D7050
class Scaleform::Array<int,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<int,Scaleform::AllocatorGH<int,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<int,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<int,2,Scaleform::ArrayDefaultPolicy> &);
	Array<int,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<int,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<int,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<int,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<int,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<int,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles>
{
protected:
	Scaleform::GFx::ConstShapeNoStyles * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ConstShapeNoStyles>(const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> &);
	Ptr<Scaleform::GFx::ConstShapeNoStyles>(Scaleform::GFx::ConstShapeNoStyles *);
	Ptr<Scaleform::GFx::ConstShapeNoStyles>(Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ConstShapeNoStyles>(Scaleform::Pickable<Scaleform::GFx::ConstShapeNoStyles>);
	Ptr<Scaleform::GFx::ConstShapeNoStyles>(Scaleform::GFx::ConstShapeNoStyles &);
	Ptr<Scaleform::GFx::ConstShapeNoStyles>();
	~Ptr<Scaleform::GFx::ConstShapeNoStyles>();
	bool operator==(Scaleform::GFx::ConstShapeNoStyles *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> &);
	bool operator!=(Scaleform::GFx::ConstShapeNoStyles *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> &);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & operator=(Scaleform::Pickable<Scaleform::GFx::ConstShapeNoStyles>);
	const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & operator=(Scaleform::GFx::ConstShapeNoStyles &);
	const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & operator=(Scaleform::GFx::ConstShapeNoStyles *);
	const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & operator=(const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> &);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ConstShapeNoStyles>);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & SetPtr(Scaleform::GFx::ConstShapeNoStyles &);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & SetPtr(Scaleform::GFx::ConstShapeNoStyles *);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ConstShapeNoStyles * & GetRawRef();
	Scaleform::GFx::ConstShapeNoStyles * GetPtr();
	Scaleform::GFx::ConstShapeNoStyles & operator*();
	Scaleform::GFx::ConstShapeNoStyles * operator->();
	Scaleform::GFx::ConstShapeNoStyles * operator class Scaleform::GFx::ConstShapeNoStyles *();
	Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & Pick(Scaleform::GFx::ConstShapeNoStyles *);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & Pick(Scaleform::Pickable<Scaleform::GFx::ConstShapeNoStyles>);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> & Pick(Scaleform::Ptr<Scaleform::GFx::ConstShapeNoStyles> &);
};
Scaleform::GFx::GFxSystemFontResourceKeyInterface Scaleform::GFx::GFxSystemFontResourceKeyInterface_Instance; // 0x1409F9FE0
void(*Scaleform::GFx::GFxSystemFontResourceKeyInterface_Instance$initializer$)(); // 0x140739D68
typedef Scaleform::GFx::`anonymous-namespace'::RangeLess Scaleform::GFx::?A0x3efcfb7d::RangeLess;
typedef Scaleform::GFx::`anonymous-namespace'::Range Scaleform::GFx::?A0x3efcfb7d::Range;
const unsigned char Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::Sizes[16]; // 0x14074DBA8
const unsigned char Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::Sizes[16]; // 0x14074DD28
void Scaleform::GFx::FontData::ReadFontInfo(Scaleform::GFx::Stream * in, Scaleform::GFx::TagType tagType); // 0x1403DA3B0
void Scaleform::GFx::FontData::ReadCodeTable(Scaleform::GFx::Stream * in); // 0x1403D95B0
long Scaleform::GFx::FontData::GetGlyphIndex(unsigned short code); // 0x1403D65B0
long Scaleform::GFx::FontData::GetCharValue(unsigned long glyphIndex); // 0x1403D5C60
const Scaleform::Render::ShapeDataInterface * Scaleform::GFx::FontData::GetPermanentGlyphShape(unsigned long glyphIndex); // 0x1403D6E70
float Scaleform::GFx::FontData::GetAdvance(unsigned long glyphIndex); // 0x1403D5880
float Scaleform::GFx::FontData::GetGlyphWidth(unsigned long glyphIndex); // 0x1403D6940
float Scaleform::GFx::FontData::GetGlyphHeight(unsigned long glyphIndex); // 0x1403D6370
Scaleform::Render::Rect<float> & Scaleform::GFx::FontData::GetGlyphBounds(unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x1403D6040
float Scaleform::GFx::FontData::GetKerningAdjustment(unsigned long LastCode, unsigned long code); // 0x1403D6CB0
struct Scaleform::GFx::`anonymous-namespace'::Range
{
	unsigned short start; // 0x0
	unsigned short end; // 0x2
};
struct Scaleform::GFx::`anonymous-namespace'::RangeLess
{
	bool operator()(const Scaleform::GFx::`anonymous-namespace'::Range &, const Scaleform::GFx::`anonymous-namespace'::Range &);
};
class Scaleform::Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::String Scaleform::GFx::FontData::GetCharRanges(); // 0x1403D59E0
struct Scaleform::GFx::Normalizer
{
	enum <unnamed-enum-FontHeight>
	{
		FontHeight = 1024,
	};
	Normalizer(unsigned long);
	unsigned long NominalSize; // 0x0
};
bool Scaleform::GFx::GetGlyphShape<Scaleform::GFx::FontDataCompactedGfx>(const Scaleform::GFx::FontDataCompactedGfx & font, unsigned long glyphIndex, Scaleform::Render::GlyphShape * shape); // 0x1403D21F0
bool Scaleform::GFx::GetGlyphShape<Scaleform::GFx::FontDataCompactedSwf>(const Scaleform::GFx::FontDataCompactedSwf & font, unsigned long glyphIndex, Scaleform::Render::GlyphShape * shape); // 0x1403D27B0
Scaleform::Render::Rect<float> & Scaleform::GFx::GetGlyphBounds<Scaleform::GFx::FontDataCompactedGfx>(const Scaleform::GFx::FontDataCompactedGfx & font, unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x1403D20B0
Scaleform::Render::Rect<float> & Scaleform::GFx::GetGlyphBounds<Scaleform::GFx::FontDataCompactedSwf>(const Scaleform::GFx::FontDataCompactedSwf & font, unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x1403D2150
Scaleform::String Scaleform::GFx::GetCharRanges<Scaleform::GFx::FontDataCompactedGfx>(const Scaleform::GFx::FontDataCompactedGfx & font); // 0x1403D1BF0
Scaleform::String Scaleform::GFx::GetCharRanges<Scaleform::GFx::FontDataCompactedSwf>(const Scaleform::GFx::FontDataCompactedSwf & font); // 0x1403D1E10
Scaleform::GFx::FontDataCompactedSwf::FontDataCompactedSwf(); // 0x1403D3EC0
Scaleform::GFx::FontDataCompactedSwf::~FontDataCompactedSwf(); // 0x1403D4590
Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> > & Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::operator=(const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> > & __that); // 0x14033DCB0
Scaleform::Render::TextureGlyph & Scaleform::Render::TextureGlyph::operator=(const Scaleform::Render::TextureGlyph & __that); // 0x1403D4600
void Scaleform::GFx::FontDataCompactedSwf::Read(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x1403D8330
long Scaleform::GFx::FontDataCompactedSwf::GetGlyphIndex(unsigned short code); // 0x1403D6660
long Scaleform::GFx::FontDataCompactedSwf::GetCharValue(unsigned long glyphIndex); // 0x1403D5D60
bool Scaleform::GFx::FontDataCompactedSwf::GetTemporaryGlyphShape(unsigned long glyphIndex, unsigned long hintedSize, Scaleform::Render::GlyphShape * shape); // 0x1403D6ED0
float Scaleform::GFx::FontDataCompactedSwf::GetAdvance(unsigned long glyphIndex); // 0x1403D5950
float Scaleform::GFx::FontDataCompactedSwf::GetKerningAdjustment(unsigned long lastCode, unsigned long thisCode); // 0x1403D6DD0
unsigned long Scaleform::GFx::FontDataCompactedSwf::GetGlyphShapeCount(); // 0x1403D6740
float Scaleform::GFx::FontDataCompactedSwf::GetGlyphWidth(unsigned long glyphIndex); // 0x1403D69F0
float Scaleform::GFx::FontDataCompactedSwf::GetGlyphHeight(unsigned long glyphIndex); // 0x1403D6420
Scaleform::Render::Rect<float> & Scaleform::GFx::FontDataCompactedSwf::GetGlyphBounds(unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x1403D61F0
const char * Scaleform::GFx::FontDataCompactedSwf::GetName(); // 0x1403D6E40
Scaleform::String Scaleform::GFx::FontDataCompactedSwf::GetCharRanges(); // 0x1403D5C40
bool Scaleform::GFx::FontDataCompactedSwf::HasVectorOrRasterGlyphs(); // 0x1403D7020
Scaleform::GFx::FontDataCompactedGfx::FontDataCompactedGfx(); // 0x1403D3E40
Scaleform::GFx::FontDataCompactedGfx::~FontDataCompactedGfx(); // 0x1403D4520
void Scaleform::GFx::FontDataCompactedGfx::Read(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x1403D8160
class Scaleform::ArrayUnsafePOD<unsigned char,2> :
	Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	class BaseType;
	class SelfType;
public:
	ArrayUnsafePOD<unsigned char,2>(const Scaleform::ArrayUnsafePOD<unsigned char,2> &);
	ArrayUnsafePOD<unsigned char,2>(unsigned long long);
	ArrayUnsafePOD<unsigned char,2>();
	const Scaleform::ArrayUnsafePOD<unsigned char,2> & operator=(const Scaleform::ArrayUnsafePOD<unsigned char,2> &);
	~ArrayUnsafePOD<unsigned char,2>();
};
long Scaleform::GFx::FontDataCompactedGfx::GetGlyphIndex(unsigned short code); // 0x1403D6650
long Scaleform::GFx::FontDataCompactedGfx::GetCharValue(unsigned long glyphIndex); // 0x1403D5D30
bool Scaleform::GFx::FontDataCompactedGfx::GetTemporaryGlyphShape(unsigned long glyphIndex, unsigned long hintedSize, Scaleform::Render::GlyphShape * shape); // 0x1403D6EC0
float Scaleform::GFx::FontDataCompactedGfx::GetAdvance(unsigned long glyphIndex); // 0x1403D58F0
float Scaleform::GFx::FontDataCompactedGfx::GetKerningAdjustment(unsigned long lastCode, unsigned long thisCode); // 0x1403D6D90
unsigned long Scaleform::GFx::FontDataCompactedGfx::GetGlyphShapeCount(); // 0x140270B60
float Scaleform::GFx::FontDataCompactedGfx::GetGlyphWidth(unsigned long glyphIndex); // 0x1403D69A0
float Scaleform::GFx::FontDataCompactedGfx::GetGlyphHeight(unsigned long glyphIndex); // 0x1403D63D0
Scaleform::Render::Rect<float> & Scaleform::GFx::FontDataCompactedGfx::GetGlyphBounds(unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x1403D61E0
const char * Scaleform::GFx::FontDataCompactedGfx::GetName(); // 0x14012A880
Scaleform::String Scaleform::GFx::FontDataCompactedGfx::GetCharRanges(); // 0x1403D5C20
bool Scaleform::GFx::FontDataCompactedGfx::HasVectorOrRasterGlyphs(); // 0x1403D7010
struct Scaleform::GFx::TextureGlyphBinder :
	Scaleform::GFx::TextureGlyphData::TextureGlyphVisitor
{
	Scaleform::GFx::ResourceBinding * ResBinding; // 0x8
	TextureGlyphBinder(Scaleform::GFx::TextureGlyphBinder &);
	TextureGlyphBinder(const Scaleform::GFx::TextureGlyphBinder &);
	TextureGlyphBinder(Scaleform::GFx::ResourceBinding *);
	virtual void Visit(unsigned long, Scaleform::Render::TextureGlyph *);
	virtual ~TextureGlyphBinder();
	Scaleform::GFx::TextureGlyphBinder & operator=(Scaleform::GFx::TextureGlyphBinder &);
	Scaleform::GFx::TextureGlyphBinder & operator=(const Scaleform::GFx::TextureGlyphBinder &);
};
void Scaleform::GFx::TextureGlyphBinder::Visit(unsigned long __formal, Scaleform::Render::TextureGlyph * ptextureGlyph); // 0x1403DAD10
Scaleform::GFx::FontDataBound::FontDataBound(Scaleform::Render::Font * pfont, Scaleform::GFx::ResourceBinding * pbinding); // 0x1403D3D00
Scaleform::GFx::FontResource::FontResource(Scaleform::Render::Font * pfont, Scaleform::GFx::ResourceBinding * pbinding); // 0x1403D4000
Scaleform::GFx::FontResource::FontResource(Scaleform::Render::Font * pfont, const Scaleform::GFx::ResourceKey & key); // 0x1403D3F50
class Scaleform::GFx::GFxSystemFontResourceKey :
	Scaleform::RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261>
{
private:
	Scaleform::Ptr<Scaleform::GFx::FontProvider> pFontProvider; // 0x10
	Scaleform::String FontName; // 0x18
	unsigned long CreateFontFlags; // 0x20
public:
	GFxSystemFontResourceKey(Scaleform::GFx::GFxSystemFontResourceKey &);
	GFxSystemFontResourceKey(const Scaleform::GFx::GFxSystemFontResourceKey &);
	GFxSystemFontResourceKey(const char *, unsigned long, Scaleform::GFx::FontProvider *);
	bool operator==(Scaleform::GFx::GFxSystemFontResourceKey &);
	unsigned long long GetHashCode();
	virtual ~GFxSystemFontResourceKey();
	Scaleform::GFx::GFxSystemFontResourceKey & operator=(Scaleform::GFx::GFxSystemFontResourceKey &);
	Scaleform::GFx::GFxSystemFontResourceKey & operator=(const Scaleform::GFx::GFxSystemFontResourceKey &);
};
class Scaleform::RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,261>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 261,
	};
public:
	RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261>(Scaleform::RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261> &);
	RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261>(const Scaleform::RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261> &);
	RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261>();
	virtual ~RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261>();
	Scaleform::RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261> & operator=(Scaleform::RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261> &);
	Scaleform::RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::GFxSystemFontResourceKey,261> &);
};
Scaleform::GFx::GFxSystemFontResourceKey::GFxSystemFontResourceKey(const char * pname, unsigned long fontFlags, Scaleform::GFx::FontProvider * pfontProvider); // 0x1403D4080
class Scaleform::GFx::GFxSystemFontResourceKeyInterface :
	Scaleform::GFx::ResourceKey::KeyInterface
{
	typedef void *KeyHandle;
public:
	virtual void AddRef(void *);
	virtual void Release(void *);
	virtual Scaleform::GFx::ResourceKey::KeyType GetKeyType(void *);
	virtual unsigned long long GetHashCode(void *);
	virtual bool KeyEquals(void *, const Scaleform::GFx::ResourceKey &);
	GFxSystemFontResourceKeyInterface(Scaleform::GFx::GFxSystemFontResourceKeyInterface &);
	GFxSystemFontResourceKeyInterface(const Scaleform::GFx::GFxSystemFontResourceKeyInterface &);
	GFxSystemFontResourceKeyInterface();
	virtual ~GFxSystemFontResourceKeyInterface();
	Scaleform::GFx::GFxSystemFontResourceKeyInterface & operator=(Scaleform::GFx::GFxSystemFontResourceKeyInterface &);
	Scaleform::GFx::GFxSystemFontResourceKeyInterface & operator=(const Scaleform::GFx::GFxSystemFontResourceKeyInterface &);
};
void Scaleform::GFx::GFxSystemFontResourceKeyInterface::AddRef(void * hdata); // 0x140345150
void Scaleform::GFx::GFxSystemFontResourceKeyInterface::Release(void * hdata); // 0x140345160
unsigned long long Scaleform::GFx::GFxSystemFontResourceKeyInterface::GetHashCode(void * hdata); // 0x1403D1A40
bool Scaleform::GFx::GFxSystemFontResourceKeyInterface::KeyEquals(void * hdata, const Scaleform::GFx::ResourceKey & other); // 0x1403D1A90
class Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey>
{
protected:
	Scaleform::GFx::GFxSystemFontResourceKey * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::GFxSystemFontResourceKey>(const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> &);
	Ptr<Scaleform::GFx::GFxSystemFontResourceKey>(Scaleform::GFx::GFxSystemFontResourceKey *);
	Ptr<Scaleform::GFx::GFxSystemFontResourceKey>(Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::GFxSystemFontResourceKey>(Scaleform::Pickable<Scaleform::GFx::GFxSystemFontResourceKey>);
	Ptr<Scaleform::GFx::GFxSystemFontResourceKey>(Scaleform::GFx::GFxSystemFontResourceKey &);
	Ptr<Scaleform::GFx::GFxSystemFontResourceKey>();
	~Ptr<Scaleform::GFx::GFxSystemFontResourceKey>();
	bool operator==(Scaleform::GFx::GFxSystemFontResourceKey *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> &);
	bool operator!=(Scaleform::GFx::GFxSystemFontResourceKey *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> &);
	Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & operator=(Scaleform::Pickable<Scaleform::GFx::GFxSystemFontResourceKey>);
	const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & operator=(Scaleform::GFx::GFxSystemFontResourceKey &);
	const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & operator=(Scaleform::GFx::GFxSystemFontResourceKey *);
	const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & operator=(const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> &);
	Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & SetPtr(Scaleform::Pickable<Scaleform::GFx::GFxSystemFontResourceKey>);
	Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & SetPtr(Scaleform::GFx::GFxSystemFontResourceKey &);
	Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & SetPtr(Scaleform::GFx::GFxSystemFontResourceKey *);
	Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::GFxSystemFontResourceKey * & GetRawRef();
	Scaleform::GFx::GFxSystemFontResourceKey * GetPtr();
	Scaleform::GFx::GFxSystemFontResourceKey & operator*();
	Scaleform::GFx::GFxSystemFontResourceKey * operator->();
	Scaleform::GFx::GFxSystemFontResourceKey * operator class Scaleform::GFx::GFxSystemFontResourceKey *();
	Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & Pick(Scaleform::GFx::GFxSystemFontResourceKey *);
	Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & Pick(Scaleform::Pickable<Scaleform::GFx::GFxSystemFontResourceKey>);
	Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> & Pick(Scaleform::Ptr<Scaleform::GFx::GFxSystemFontResourceKey> &);
};
Scaleform::GFx::FontResource * Scaleform::GFx::FontResource::CreateFontResource(const char * pname, unsigned long fontFlags, Scaleform::GFx::FontProvider * pprovider, Scaleform::GFx::ResourceWeakLib * plib); // 0x1403D5700
void Scaleform::GFx::FontResource::ResolveTextureGlyphs(); // 0x1403DAC50//decompilation failure at 1409F9FE0!
//decompilation failure at 140739D68!
//decompilation failure at 14074DBA8!
//decompilation failure at 14074DD28!
void __fastcall Scaleform::MsgFormat::FormatD1<unsigned short>(Scaleform::MsgFormat *this, const unsigned __int16 *v)
{
  Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> *p_MemPool; // rdi
  char *BuffPtr; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Formatter *v9; // rax

  if ( Scaleform::MsgFormat::NextFormatter(this) )
  {
    p_MemPool = &this->MemPool;
    do
    {
      if ( this->MemPool.BuffSize < 0x60 )
      {
        pHeap = p_MemPool->pHeap;
        if ( !p_MemPool->pHeap )
          pHeap = Scaleform::Memory::pGlobalHeap;
        BuffPtr = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))pHeap->Alloc)(
                            pHeap,
                            96i64,
                            8i64);
      }
      else
      {
        BuffPtr = this->MemPool.BuffPtr;
        this->MemPool.BuffPtr = (char *)(((unsigned __int64)(BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
        v6 = ((unsigned __int64)(BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) - (_QWORD)p_MemPool;
        v7 = 512 - v6;
        if ( v6 >= 0x200 )
          v7 = 0i64;
        this->MemPool.BuffSize = v7;
      }
      if ( BuffPtr )
        Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)BuffPtr, this, *v);
      else
        v9 = 0i64;
      Scaleform::MsgFormat::Bind(this, v9, 1);
    }
    while ( Scaleform::MsgFormat::NextFormatter(this) );
  }
  ++this->FirstArgNum;
}

Scaleform::String *__fastcall Scaleform::GFx::GetCharRanges_Scaleform::GFx::FontDataCompactedGfx_(
        Scaleform::String *result,
        const Scaleform::GFx::FontDataCompactedGfx *font)
{
  char v2; // bl
  unsigned __int64 v3; // rdi
  unsigned __int64 Capacity; // rsi
  Scaleform::GFx::FontDataCompactedGfx_vtbl *v6; // rax
  __int16 v7; // r12
  unsigned __int16 v8; // r15
  int v9; // er13
  __int64 v10; // r8
  unsigned __int8 *Data; // rdx
  __int64 v12; // rax
  int v13; // ecx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  unsigned int *v18; // rcx
  unsigned int *v19; // rcx
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+20h]
  unsigned int v24; // [rsp+88h] [rbp+20h]
  unsigned int v25; // [rsp+90h] [rbp+28h]

  v2 = 0;
  v3 = 0i64;
  Capacity = 0i64;
  v6 = font->__vftable;
  v7 = 0;
  memset(&pheapAddr, 0, sizeof(pheapAddr));
  v8 = 0;
  v23 = 0;
  if ( !v6->GetGlyphShapeCount(&font->Scaleform::Render::Font) )
    goto LABEL_26;
  v9 = 0;
  do
  {
    v10 = v9 + font->CompactedFontValue.GlyphInfoTablePos;
    Data = font->CompactedFontValue.Decoder.Data->Data;
    v12 = (unsigned int)(v10 + 1);
    v13 = Data[v10];
    if ( !v2 )
    {
      v2 = 1;
      v7 = v13 | (Data[v12] << 8);
LABEL_5:
      ++v23;
      v8 = font->CompactedFontValue.Decoder.Data->Data[v9 + font->CompactedFontValue.GlyphInfoTablePos] | (font->CompactedFontValue.Decoder.Data->Data[v9 + font->CompactedFontValue.GlyphInfoTablePos + 1] << 8);
      v9 += 8;
      continue;
    }
    if ( v8 == (v13 | (Data[v12] << 8)) - 1 )
      goto LABEL_5;
    v16 = v3 + 1;
    LOWORD(v25) = v7;
    HIWORD(v25) = v8;
    if ( v3 + 1 >= v3 )
    {
      if ( v16 > Capacity )
      {
        v17 = v16 + (v16 >> 2);
        goto LABEL_17;
      }
    }
    else if ( v16 < Capacity >> 1 )
    {
      v17 = v3 + 1;
LABEL_17:
      Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pheapAddr,
        &pheapAddr,
        v17);
      Capacity = pheapAddr.Policy.Capacity;
    }
    ++v3;
    pheapAddr.Size = v16;
    v18 = &pheapAddr.Data[v16 - 1];
    if ( v18 )
      *v18 = v25;
    v2 = 0;
  }
  while ( v23 < font->GetGlyphShapeCount((Scaleform::Render::Font *)font) );
  if ( v2 )
  {
    v14 = v3 + 1;
    LOWORD(v24) = v7;
    HIWORD(v24) = v8;
    if ( v3 + 1 >= v3 )
    {
      if ( v14 > Capacity )
      {
        v15 = v14 + (v14 >> 2);
LABEL_23:
        Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &pheapAddr,
          &pheapAddr,
          v15);
      }
    }
    else if ( v14 < Capacity >> 1 )
    {
      v15 = v3 + 1;
      goto LABEL_23;
    }
    ++v3;
    pheapAddr.Size = v14;
    v19 = &pheapAddr.Data[v14 - 1];
    if ( v19 )
      *v19 = v24;
  }
LABEL_26:
  Scaleform::Alg::QuickSortSliced<Scaleform::Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy>,Scaleform::GFx::`anonymous namespace'::RangeLess>(
    (Scaleform::Array<Scaleform::GFx::Range,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr,
    0i64,
    v3,
    (Scaleform::GFx::RangeLess)result);
  Scaleform::GFx::BuildStringFromRanges(
    result,
    (const Scaleform::Array<Scaleform::GFx::Range,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr);
  if ( pheapAddr.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  return result;
}

Scaleform::String *__fastcall Scaleform::GFx::GetCharRanges_Scaleform::GFx::FontDataCompactedSwf_(
        Scaleform::String *result,
        const Scaleform::GFx::FontDataCompactedSwf *font)
{
  char v2; // bl
  unsigned __int64 v3; // rdi
  unsigned __int64 Capacity; // rsi
  Scaleform::GFx::FontDataCompactedSwf_vtbl *v6; // rax
  __int16 v7; // r12
  unsigned __int16 v8; // r15
  int v9; // er13
  unsigned int v10; // eax
  unsigned int GlyphInfoTablePos; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned int *v16; // rcx
  unsigned int *v17; // rcx
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+20h]
  unsigned int v22; // [rsp+88h] [rbp+20h]
  unsigned int v23; // [rsp+90h] [rbp+28h]

  v2 = 0;
  v3 = 0i64;
  Capacity = 0i64;
  v6 = font->__vftable;
  v7 = 0;
  memset(&pheapAddr, 0, sizeof(pheapAddr));
  v8 = 0;
  v21 = 0;
  if ( !v6->GetGlyphShapeCount(&font->Scaleform::Render::Font) )
    goto LABEL_26;
  v9 = 0;
  do
  {
    v10 = v9 + font->CompactedFontValue.GlyphInfoTablePos;
    if ( !v2 )
    {
      v2 = 1;
      v7 = font->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)v10 >> 12][v10 & 0xFFF] | (font->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)(v10 + 1) >> 12][((_WORD)v10 + 1) & 0xFFF] << 8);
LABEL_5:
      GlyphInfoTablePos = font->CompactedFontValue.GlyphInfoTablePos;
      ++v21;
      v8 = font->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)(v9 + GlyphInfoTablePos) >> 12][((_WORD)v9 + (_WORD)GlyphInfoTablePos) & 0xFFF] | (font->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)(v9 + GlyphInfoTablePos + 1) >> 12][(v9 + GlyphInfoTablePos + 1) & 0xFFF] << 8);
      v9 += 8;
      continue;
    }
    if ( v8 == (font->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)v10 >> 12][v10 & 0xFFF] | (font->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)(v10 + 1) >> 12][((_WORD)v10 + 1) & 0xFFF] << 8))
             - 1 )
      goto LABEL_5;
    v14 = v3 + 1;
    LOWORD(v23) = v7;
    HIWORD(v23) = v8;
    if ( v3 + 1 >= v3 )
    {
      if ( v14 > Capacity )
      {
        v15 = v14 + (v14 >> 2);
        goto LABEL_17;
      }
    }
    else if ( v14 < Capacity >> 1 )
    {
      v15 = v3 + 1;
LABEL_17:
      Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pheapAddr,
        &pheapAddr,
        v15);
      Capacity = pheapAddr.Policy.Capacity;
    }
    ++v3;
    pheapAddr.Size = v14;
    v16 = &pheapAddr.Data[v14 - 1];
    if ( v16 )
      *v16 = v23;
    v2 = 0;
  }
  while ( v21 < font->GetGlyphShapeCount((Scaleform::Render::Font *)font) );
  if ( v2 )
  {
    v12 = v3 + 1;
    LOWORD(v22) = v7;
    HIWORD(v22) = v8;
    if ( v3 + 1 >= v3 )
    {
      if ( v12 > Capacity )
      {
        v13 = v12 + (v12 >> 2);
LABEL_23:
        Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &pheapAddr,
          &pheapAddr,
          v13);
      }
    }
    else if ( v12 < Capacity >> 1 )
    {
      v13 = v3 + 1;
      goto LABEL_23;
    }
    ++v3;
    pheapAddr.Size = v12;
    v17 = &pheapAddr.Data[v12 - 1];
    if ( v17 )
      *v17 = v22;
  }
LABEL_26:
  Scaleform::Alg::QuickSortSliced<Scaleform::Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy>,Scaleform::GFx::`anonymous namespace'::RangeLess>(
    (Scaleform::Array<Scaleform::GFx::Range,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr,
    0i64,
    v3,
    (Scaleform::GFx::RangeLess)result);
  Scaleform::GFx::BuildStringFromRanges(
    result,
    (const Scaleform::Array<Scaleform::GFx::Range,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr);
  if ( pheapAddr.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::GetGlyphBounds_Scaleform::GFx::FontDataCompactedGfx_(
        const Scaleform::GFx::FontDataCompactedGfx *font,
        unsigned int glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  double v5; // xmm0_8
  float v6; // xmm6_4
  __m128 v7; // xmm3
  Scaleform::Render::Rect<float> *result; // rax

  if ( (_WORD)glyphIndex == 0xFFFF || glyphIndex >= font->CompactedFontValue.NumGlyphs )
  {
    *(_QWORD *)&prect->x1 = 0i64;
    v5 = ((double (__fastcall *)(const Scaleform::GFx::FontDataCompactedGfx *))font->GetNominalGlyphHeight)(font);
    v6 = *(float *)&v5;
    *(float *)&v5 = font->GetNominalGlyphWidth((Scaleform::Render::Font *)font);
    prect->y2 = v6;
    prect->x2 = *(float *)&v5;
    *(_QWORD *)&prect->x1 = 0i64;
  }
  else
  {
    Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphBounds(
      &font->CompactedFontValue,
      glyphIndex,
      prect);
  }
  v7 = 0i64;
  v7.m128_f32[0] = (float)(int)font->CompactedFontValue.NominalSize;
  result = prect;
  *(__m128 *)prect = _mm_div_ps(_mm_mul_ps(*(__m128 *)prect, (__m128)_xmm), _mm_shuffle_ps(v7, v7, 0));
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::GetGlyphBounds_Scaleform::GFx::FontDataCompactedSwf_(
        const Scaleform::GFx::FontDataCompactedSwf *font,
        unsigned int glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  double v5; // xmm0_8
  float v6; // xmm6_4
  __m128 v7; // xmm3
  Scaleform::Render::Rect<float> *result; // rax

  if ( (_WORD)glyphIndex == 0xFFFF || glyphIndex >= font->CompactedFontValue.NumGlyphs )
  {
    *(_QWORD *)&prect->x1 = 0i64;
    v5 = ((double (__fastcall *)(const Scaleform::GFx::FontDataCompactedSwf *))font->GetNominalGlyphHeight)(font);
    v6 = *(float *)&v5;
    *(float *)&v5 = font->GetNominalGlyphWidth((Scaleform::Render::Font *)font);
    prect->y2 = v6;
    prect->x2 = *(float *)&v5;
    *(_QWORD *)&prect->x1 = 0i64;
  }
  else
  {
    Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetGlyphBounds(
      &font->CompactedFontValue,
      glyphIndex,
      prect);
  }
  v7 = 0i64;
  v7.m128_f32[0] = (float)(int)font->CompactedFontValue.NominalSize;
  result = prect;
  *(__m128 *)prect = _mm_div_ps(_mm_mul_ps(*(__m128 *)prect, (__m128)_xmm), _mm_shuffle_ps(v7, v7, 0));
  return result;
}

char __fastcall Scaleform::GFx::GetGlyphShape_Scaleform::GFx::FontDataCompactedGfx_(
        const Scaleform::GFx::FontDataCompactedGfx *font,
        unsigned int glyphIndex,
        Scaleform::Render::GlyphShape *shape)
{
  Scaleform::Render::GlyphShape *v3; // r13
  bool v5; // zf
  signed int NominalSize; // ebx
  float v7; // xmm9_4
  int MoveY; // er14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rdi
  float Multiplier; // xmm7_4
  int MoveX; // er15
  float v12; // xmm8_4
  float v13; // xmm6_4
  unsigned __int64 Size; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int8 *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r8
  unsigned __int8 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r8
  unsigned __int8 *v25; // rax
  int v26; // edi
  unsigned int NumEdges; // er12
  unsigned int Pos; // er13
  unsigned int EdgePos; // ebx
  unsigned int v30; // eax
  int v31; // er8
  int v32; // ecx
  int v33; // edx
  float v34; // xmm1_4
  int v35; // edi
  float v36; // xmm0_4
  int v37; // esi
  int v38; // edx
  int v39; // ecx
  float v40; // xmm2_4
  int v41; // esi
  int ay; // edi
  float v43; // xmm0_4
  int v44; // eax
  int v45; // edx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v46; // rsi
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // r8
  unsigned __int8 *v49; // rax
  int data; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh]
  int v53; // [rsp+38h] [rbp-C8h]
  int v54; // [rsp+3Ch] [rbp-C4h]
  int v55; // [rsp+40h] [rbp-C0h]
  int v56; // [rsp+48h] [rbp-B8h]
  int v57; // [rsp+4Ch] [rbp-B4h]
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > glyph; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v59; // [rsp+80h] [rbp-80h] BYREF
  float v60; // [rsp+88h] [rbp-78h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v61; // [rsp+90h] [rbp-70h] BYREF
  float v62; // [rsp+98h] [rbp-68h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v63; // [rsp+A0h] [rbp-60h] BYREF
  float v64; // [rsp+A8h] [rbp-58h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v65; // [rsp+B0h] [rbp-50h] BYREF
  float v66; // [rsp+B8h] [rbp-48h]
  int v67; // [rsp+160h] [rbp+60h]
  int v68; // [rsp+168h] [rbp+68h]
  int v70; // [rsp+178h] [rbp+78h]

  v3 = shape;
  if ( glyphIndex >= font->CompactedFontValue.NumGlyphs )
    return 0;
  glyph.Data.Data = &font->Container;
  Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphShape(
    &font->CompactedFontValue,
    glyphIndex,
    &glyph);
  v5 = v3->Data.Data.Size == 0;
  NominalSize = font->CompactedFontValue.NominalSize;
  v57 = NominalSize;
  if ( !v5 && (v3->Data.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v3->Data.Data,
      &v3->Data,
      0i64);
  v5 = glyph.NumContours == 0;
  v3->Data.Data.Size = 0i64;
  if ( v5 )
    goto LABEL_69;
  v7 = (float)NominalSize;
  do
  {
    MoveY = glyph.MoveY;
    pContainer = v3->pContainer;
    Multiplier = v3->Multiplier;
    MoveX = glyph.MoveX;
    v60 = Multiplier;
    v59.Data = pContainer;
    v12 = (float)((glyph.MoveY << 10) / NominalSize);
    v13 = (float)((float)glyph.MoveX * 1024.0) / v7;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
      &v59,
      1u);
    Size = pContainer->Data.Size;
    v15 = Size + 1;
    if ( Size + 1 >= Size )
    {
      if ( v15 <= pContainer->Data.Policy.Capacity )
        goto LABEL_13;
      v16 = v15 + (v15 >> 2);
    }
    else
    {
      if ( v15 >= pContainer->Data.Policy.Capacity >> 1 )
        goto LABEL_13;
      v16 = Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &pContainer->Data,
      pContainer,
      v16);
LABEL_13:
    v17 = pContainer->Data.Data;
    pContainer->Data.Size = v15;
    v17[v15 - 1] = 4;
    v18 = pContainer->Data.Size;
    v19 = v18 + 1;
    if ( v18 + 1 >= v18 )
    {
      if ( v19 <= pContainer->Data.Policy.Capacity )
        goto LABEL_19;
      v20 = v19 + (v19 >> 2);
    }
    else
    {
      if ( v19 >= pContainer->Data.Policy.Capacity >> 1 )
        goto LABEL_19;
      v20 = v18 + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &pContainer->Data,
      pContainer,
      v20);
LABEL_19:
    v21 = pContainer->Data.Data;
    pContainer->Data.Size = v19;
    v21[v19 - 1] = 0;
    v22 = pContainer->Data.Size;
    v23 = v22 + 1;
    if ( v22 + 1 >= v22 )
    {
      if ( v23 > pContainer->Data.Policy.Capacity )
      {
        v24 = v23 + (v23 >> 2);
        goto LABEL_24;
      }
    }
    else if ( v23 < pContainer->Data.Policy.Capacity >> 1 )
    {
      v24 = v22 + 1;
LABEL_24:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pContainer->Data,
        pContainer,
        v24);
    }
    v25 = pContainer->Data.Data;
    pContainer->Data.Size = v23;
    v25[v23 - 1] = 0;
    v26 = (int)(float)(Multiplier * v13);
    v68 = v26;
    v56 = v26;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
      &v59,
      v26);
    v67 = (int)(float)(Multiplier * v12);
    v70 = v67;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
      &v59,
      v67);
    NumEdges = glyph.NumEdges;
    if ( !glyph.NumEdges )
      goto LABEL_68;
    Pos = glyph.Pos;
    EdgePos = glyph.EdgePos;
    while ( 1 )
    {
      v30 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::ReadEdge(
              &glyph.Data,
              EdgePos,
              &data);
      v31 = data;
      EdgePos += v30;
      glyph.EdgePos = EdgePos;
      switch ( data )
      {
        case 0:
          MoveX += v52;
          v31 = 2;
          data = 2;
LABEL_37:
          v33 = MoveY;
          v32 = MoveX;
LABEL_38:
          glyph.MoveX = MoveX;
          goto LABEL_39;
        case 1:
          MoveY += v52;
          v31 = 2;
          glyph.MoveY = MoveY;
          v33 = MoveY;
          data = 2;
          v32 = MoveX;
LABEL_39:
          v53 = v33;
          v52 = v32;
          goto LABEL_40;
        case 2:
          MoveX += v52;
          MoveY += v53;
          glyph.MoveY = MoveY;
          goto LABEL_37;
        case 3:
          v32 = v52 + MoveX;
          MoveX = v54 + v32;
          v33 = v53 + MoveY;
          MoveY = v55 + v33;
          glyph.MoveY = v55 + v33;
          v55 += v33;
          v54 += v32;
          goto LABEL_38;
      }
      v33 = v53;
      v32 = v52;
LABEL_40:
      if ( !NumEdges || (v5 = NumEdges == 1, --NumEdges, glyph.NumEdges = NumEdges, v5) )
      {
        if ( glyph.JumpToPos )
          Pos = EdgePos;
        glyph.Pos = Pos;
      }
      if ( v31 == 2 )
      {
        v34 = shape->Multiplier;
        v61.Data = shape->pContainer;
        v62 = v34;
        v35 = (int)(float)((float)((float)((float)v32 * 1024.0) / v7) * v34) - v68;
        v36 = (float)((float)((float)v33 * 1024.0) / v7) * v34;
        v37 = (int)v36 - v67;
        if ( (int)v36 == v67 )
        {
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
            &v61,
            v35);
          v38 = v35 + v68;
          v39 = (int)v36;
        }
        else
        {
          if ( v35 )
          {
            Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
              &v61,
              v35,
              v37);
            v38 = v35 + v68;
          }
          else
          {
            Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
              &v61,
              v37);
            v38 = v68;
          }
          v39 = (int)v36;
        }
      }
      else
      {
        v40 = shape->Multiplier;
        v65.Data = shape->pContainer;
        v41 = (int)(float)((float)((float)((float)v54 * 1024.0) / v7) * v40) - v26;
        v66 = v40;
        ay = (int)(float)((float)((float)((float)v55 * 1024.0) / v7) * v40) - v67;
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteQuad(
          &v65,
          (int)(float)((float)((float)((float)v32 * 1024.0) / v7) * v40) - v68,
          (int)(float)((float)((float)((float)v33 * 1024.0) / v7) * v40) - v67,
          v41,
          ay);
        v38 = v41 + v68;
        v39 = ay + v67;
      }
      v67 = v39;
      v68 = v38;
      if ( !NumEdges )
        break;
      v26 = v38;
    }
    v3 = shape;
    NominalSize = v57;
    v43 = shape->Multiplier;
    v63.Data = shape->pContainer;
    v64 = v43;
    if ( v38 != v56 || v39 != v70 )
    {
      v44 = v56 - v38;
      v45 = v70 - v39;
      if ( v70 == v39 )
      {
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
          &v63,
          v44);
      }
      else if ( v44 )
      {
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
          &v63,
          v44,
          v45);
      }
      else
      {
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
          &v63,
          v45);
      }
    }
    v46 = shape->pContainer;
    v47 = v46->Data.Size + 1;
    if ( v47 >= v46->Data.Size )
    {
      if ( v47 > v46->Data.Policy.Capacity )
      {
        v48 = v47 + (v47 >> 2);
LABEL_66:
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &shape->pContainer->Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::Data,
          shape->pContainer,
          v48);
      }
    }
    else if ( v47 < v46->Data.Policy.Capacity >> 1 )
    {
      v48 = v46->Data.Size + 1;
      goto LABEL_66;
    }
    v49 = v46->Data.Data;
    v46->Data.Size = v47;
    v49[v47 - 1] = 15;
LABEL_68:
    --glyph.NumContours;
    Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::readPathHeader(&glyph);
  }
  while ( glyph.NumContours );
LABEL_69:
  if ( !v3->IsEmpty(v3) )
  {
    Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(v3);
    return 1;
  }
  return 0;
}

char __fastcall Scaleform::GFx::GetGlyphShape_Scaleform::GFx::FontDataCompactedSwf_(
        const Scaleform::GFx::FontDataCompactedSwf *font,
        unsigned int glyphIndex,
        Scaleform::Render::GlyphShape *shape)
{
  Scaleform::Render::GlyphShape *v3; // rsi
  unsigned int v5; // er11
  unsigned __int8 **Pages; // r10
  unsigned __int8 **v7; // rdx
  unsigned int v8; // er8
  int v9; // eax
  bool v10; // zf
  signed int NominalSize; // ebx
  float v12; // xmm8_4
  int MoveY; // er14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rdi
  float Multiplier; // xmm7_4
  int MoveX; // er15
  float v17; // xmm10_4
  float v18; // xmm6_4
  unsigned __int64 Size; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int8 *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r8
  unsigned __int8 *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r8
  unsigned __int8 *v30; // rax
  int v31; // er13
  unsigned int NumEdges; // er12
  unsigned int Pos; // edi
  int v34; // ebx
  unsigned int EdgePos; // esi
  unsigned int v36; // eax
  int v37; // er8
  unsigned int v38; // esi
  int v39; // ecx
  int v40; // edx
  float v41; // xmm1_4
  int v42; // edi
  float v43; // xmm0_4
  int v44; // esi
  float v45; // xmm2_4
  int v46; // esi
  int ay; // edi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v48; // rax
  int v49; // ecx
  int v50; // eax
  int data; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+34h] [rbp-CCh]
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+3Ch] [rbp-C4h]
  int v56; // [rsp+40h] [rbp-C0h]
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > v57; // [rsp+48h] [rbp-B8h] BYREF
  int v58; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+7Ch] [rbp-84h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v60; // [rsp+80h] [rbp-80h] BYREF
  float v61; // [rsp+88h] [rbp-78h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v62; // [rsp+90h] [rbp-70h] BYREF
  float v63; // [rsp+98h] [rbp-68h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v64; // [rsp+A0h] [rbp-60h] BYREF
  float v65; // [rsp+A8h] [rbp-58h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v66; // [rsp+B0h] [rbp-50h] BYREF
  float v67; // [rsp+B8h] [rbp-48h]
  unsigned int v68; // [rsp+160h] [rbp+60h]
  int v69; // [rsp+168h] [rbp+68h]
  int v71; // [rsp+178h] [rbp+78h]

  v3 = shape;
  if ( glyphIndex >= font->CompactedFontValue.NumGlyphs )
    return 0;
  v57.Data.Data = &font->Container;
  v5 = font->CompactedFontValue.GlyphInfoTablePos + 8 * glyphIndex + 4;
  Pages = font->CompactedFontValue.Decoder.Data->Pages;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadBounds(
    &v57,
    Pages[(unsigned __int64)v5 >> 12][v5 & 0xFFF] | ((Pages[(unsigned __int64)(v5 + 1) >> 12][(v5 + 1) & 0xFFF] | (((Pages[(unsigned __int64)(v5 + 3) >> 12][(v5 + 3) & 0xFFF] << 8) | Pages[(unsigned __int64)(v5 + 2) >> 12][(v5 + 2) & 0xFFF]) << 8)) << 8));
  v7 = v57.Data.Data->Pages;
  v8 = v7[(unsigned __int64)v57.Pos >> 12][v57.Pos & 0xFFF];
  if ( (v8 & 1) != 0 )
  {
    v9 = 2;
    v57.NumContours = (v8 >> 1) | (v7[(unsigned __int64)(v57.Pos + 1) >> 12][(LOWORD(v57.Pos) + 1) & 0xFFF] << 7);
  }
  else
  {
    v9 = 1;
    v57.NumContours = v8 >> 1;
  }
  v57.Pos += v9;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::readPathHeader(&v57);
  v10 = v3->Data.Data.Size == 0;
  NominalSize = font->CompactedFontValue.NominalSize;
  v59 = NominalSize;
  if ( !v10 && (v3->Data.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v3->Data.Data,
      &v3->Data,
      0i64);
  v10 = v57.NumContours == 0;
  v3->Data.Data.Size = 0i64;
  if ( v10 )
    goto LABEL_66;
  v12 = (float)NominalSize;
  do
  {
    MoveY = v57.MoveY;
    pContainer = v3->pContainer;
    Multiplier = v3->Multiplier;
    MoveX = v57.MoveX;
    v61 = Multiplier;
    v60.Data = pContainer;
    v17 = (float)((v57.MoveY << 10) / NominalSize);
    v18 = (float)((float)v57.MoveX * 1024.0) / v12;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
      &v60,
      1u);
    Size = pContainer->Data.Size;
    v20 = Size + 1;
    if ( Size + 1 >= Size )
    {
      if ( v20 <= pContainer->Data.Policy.Capacity )
        goto LABEL_16;
      v21 = v20 + (v20 >> 2);
    }
    else
    {
      if ( v20 >= pContainer->Data.Policy.Capacity >> 1 )
        goto LABEL_16;
      v21 = Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &pContainer->Data,
      pContainer,
      v21);
LABEL_16:
    v22 = pContainer->Data.Data;
    pContainer->Data.Size = v20;
    v22[v20 - 1] = 4;
    v23 = pContainer->Data.Size;
    v24 = v23 + 1;
    if ( v23 + 1 >= v23 )
    {
      if ( v24 <= pContainer->Data.Policy.Capacity )
        goto LABEL_22;
      v25 = v24 + (v24 >> 2);
    }
    else
    {
      if ( v24 >= pContainer->Data.Policy.Capacity >> 1 )
        goto LABEL_22;
      v25 = v23 + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &pContainer->Data,
      pContainer,
      v25);
LABEL_22:
    v26 = pContainer->Data.Data;
    pContainer->Data.Size = v24;
    v26[v24 - 1] = 0;
    v27 = pContainer->Data.Size;
    v28 = v27 + 1;
    if ( v27 + 1 >= v27 )
    {
      if ( v28 > pContainer->Data.Policy.Capacity )
      {
        v29 = v28 + (v28 >> 2);
        goto LABEL_27;
      }
    }
    else if ( v28 < pContainer->Data.Policy.Capacity >> 1 )
    {
      v29 = v27 + 1;
LABEL_27:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pContainer->Data,
        pContainer,
        v29);
    }
    v30 = pContainer->Data.Data;
    pContainer->Data.Size = v28;
    v30[v28 - 1] = 0;
    v58 = (int)(float)(Multiplier * v18);
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
      &v60,
      v58);
    v31 = (int)(float)(Multiplier * v17);
    v71 = v31;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
      &v60,
      v31);
    NumEdges = v57.NumEdges;
    if ( !v57.NumEdges )
    {
      v3 = shape;
      goto LABEL_65;
    }
    Pos = v57.Pos;
    v34 = (int)(float)(Multiplier * v18);
    v68 = v57.Pos;
    do
    {
      EdgePos = v57.EdgePos;
      v36 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadEdge(
              &v57.Data,
              v57.EdgePos,
              &data);
      v37 = data;
      v38 = v36 + EdgePos;
      v57.EdgePos = v38;
      switch ( data )
      {
        case 0:
          MoveX += v53;
          v37 = 2;
          data = 2;
LABEL_39:
          v40 = MoveY;
          v39 = MoveX;
LABEL_40:
          v57.MoveX = MoveX;
          goto LABEL_41;
        case 1:
          MoveY += v53;
          v37 = 2;
          v57.MoveY = MoveY;
          v40 = MoveY;
          data = 2;
          v39 = MoveX;
LABEL_41:
          v54 = v40;
          v53 = v39;
          goto LABEL_42;
        case 2:
          MoveX += v53;
          MoveY += v54;
          v57.MoveY = MoveY;
          goto LABEL_39;
        case 3:
          v39 = v53 + MoveX;
          MoveX = v55 + v39;
          v40 = v54 + MoveY;
          MoveY = v56 + v40;
          v57.MoveY = v56 + v40;
          v56 += v40;
          v55 += v39;
          goto LABEL_40;
      }
      v40 = v54;
      v39 = v53;
LABEL_42:
      if ( !NumEdges || (v10 = NumEdges == 1, --NumEdges, v57.NumEdges = NumEdges, v10) )
      {
        if ( v57.JumpToPos )
          Pos = v38;
        v68 = Pos;
        v57.Pos = Pos;
      }
      if ( v37 == 2 )
      {
        v41 = shape->Multiplier;
        v62.Data = shape->pContainer;
        v63 = v41;
        v42 = (int)(float)((float)((float)((float)v39 * 1024.0) / v12) * v41) - v34;
        v43 = (float)((float)((float)v40 * 1024.0) / v12) * v41;
        v44 = (int)v43 - v31;
        if ( (int)v43 == v31 )
        {
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
            &v62,
            v42);
          v34 += v42;
          v31 = (int)v43;
        }
        else
        {
          if ( v42 )
          {
            Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
              &v62,
              v42,
              v44);
            v34 += v42;
          }
          else
          {
            Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
              &v62,
              v44);
          }
          v31 = (int)v43;
        }
      }
      else
      {
        v45 = shape->Multiplier;
        v66.Data = shape->pContainer;
        v46 = (int)(float)((float)((float)((float)v55 * 1024.0) / v12) * v45) - v34;
        v67 = v45;
        ay = (int)(float)((float)((float)((float)v56 * 1024.0) / v12) * v45) - v31;
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteQuad(
          &v66,
          (int)(float)((float)((float)((float)v39 * 1024.0) / v12) * v45) - v34,
          (int)(float)((float)((float)((float)v40 * 1024.0) / v12) * v45) - v31,
          v46,
          ay);
        v34 += v46;
        v31 += ay;
      }
      Pos = v68;
    }
    while ( NumEdges );
    v3 = shape;
    v10 = v34 == v58;
    v69 = v34;
    NominalSize = v59;
    v48 = shape->pContainer;
    v65 = shape->Multiplier;
    v64.Data = v48;
    if ( !v10 || v31 != v71 )
    {
      v49 = v58 - v69;
      v50 = v71 - v31;
      if ( v71 == v31 )
      {
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
          &v64,
          v49);
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(shape);
        goto LABEL_65;
      }
      if ( !v49 )
      {
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
          &v64,
          v50);
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(shape);
        goto LABEL_65;
      }
      Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
        &v64,
        v49,
        v50);
    }
    Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(shape);
LABEL_65:
    --v57.NumContours;
    Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::readPathHeader(&v57);
  }
  while ( v57.NumContours );
LABEL_66:
  if ( !v3->IsEmpty(v3) )
  {
    Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(v3);
    return 1;
  }
  return 0;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef *key)
{
  const Scaleform::GFx::ResourceId *pFirst; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned __int64 *v15; // rcx
  char *v16; // rbx
  const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> *pSecond; // rdi
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::Resource *v19; // rcx

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
    goto LABEL_18;
  v11 = v8 & pTable->SizeMask;
  v12 = v11;
  v13 = v11 + 4 * v11 + 2;
  v14 = *(&pTable->EntryCount + v13) == -2i64;
  v15 = &pTable->EntryCount + v13;
  if ( v14 || v15[1] != v11 )
    goto LABEL_18;
  while ( v15[1] != v11 || *((_DWORD *)v15 + 4) != pFirst->Id )
  {
    v12 = *v15;
    if ( *v15 == -1i64 )
      goto LABEL_18;
    v15 = &pTable[2 * v12 + 1].EntryCount + v12;
  }
  if ( v12 >= 0 )
  {
    v16 = (char *)pTable + 40 * v12;
    *((Scaleform::GFx::ResourceId *)v16 + 8) = (Scaleform::GFx::ResourceId)pFirst->Id;
    pSecond = key->pSecond;
    if ( pSecond->HType == RH_Pointer )
    {
      pResource = (Scaleform::RefCountVImpl *)pSecond->pResource;
      if ( pResource )
        Scaleform::Render::RenderBuffer::AddRef(pResource);
    }
    if ( !*((_DWORD *)v16 + 10) )
    {
      v19 = (Scaleform::GFx::Resource *)*((_QWORD *)v16 + 6);
      if ( v19 )
        Scaleform::GFx::Resource::Release(v19);
    }
    *((_DWORD *)v16 + 10) = pSecond->HType;
    *((_QWORD *)v16 + 6) = pSecond->pResource;
  }
  else
  {
LABEL_18:
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> > *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v11; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v12; // r8
  unsigned __int64 EntryCount; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v17; // r10
  Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> > v18; // eax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *i; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[v10 + 1];
  EntryCount = v12->EntryCount;
  if ( v12->EntryCount == -2i64 )
  {
    v12->EntryCount = -1i64;
    LOWORD(v12->SizeMask) = key->First;
    WORD1(v12->SizeMask) = key->Second;
  }
  else
  {
    v14 = v11->SizeMask;
    v15 = v10;
    do
      v15 = v14 & (v15 + 1);
    while ( v11[v15 + 1].EntryCount != -2i64 );
    v16 = v14 & LOWORD(v12->SizeMask);
    v17 = &v11[v15 + 1];
    if ( v16 == v10 )
    {
      if ( v17 )
      {
        v17->EntryCount = EntryCount;
        LOWORD(v17->SizeMask) = v12->SizeMask;
        WORD1(v17->SizeMask) = WORD1(v12->SizeMask);
      }
      v18 = *key;
      v12->EntryCount = v15;
    }
    else
    {
      for ( i = &v11[v16 + 1]; i->EntryCount != v10; i = &v11[i->EntryCount + 1] )
        ;
      if ( v17 )
      {
        v17->EntryCount = EntryCount;
        LOWORD(v17->SizeMask) = v12->SizeMask;
        WORD1(v17->SizeMask) = WORD1(v12->SizeMask);
      }
      i->EntryCount = v15;
      v18 = *key;
      v12->EntryCount = -1i64;
    }
    LODWORD(v12->SizeMask) = v18;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *pTable; // rdx
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  unsigned __int64 *v11; // r9
  __int64 v12; // rax
  Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> > v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  unsigned __int64 *i; // rcx
  __int64 v17; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 3 * v7);
  if ( v9 == -2i64 )
  {
    *(&pTable[1].EntryCount + 3 * v7) = -1i64;
    *(&pTable[1].SizeMask + 3 * v7) = 0i64;
    *((_DWORD *)&pTable[2].EntryCount + 6 * v7) = key->First;
    *((_DWORD *)&pTable[2].EntryCount + 6 * v7 + 1) = LODWORD(key->Second);
  }
  else
  {
    v10 = v7;
    do
      v10 = pTable->SizeMask & (v10 + 1);
    while ( *(&pTable[1].EntryCount + 3 * v10) != -2i64 );
    v11 = &pTable[v10 + 1].EntryCount + v10;
    v12 = *(&pTable[1].SizeMask + 3 * v7);
    if ( v12 == v7 )
    {
      if ( v11 )
      {
        *v11 = v9;
        v11[1] = *(&pTable[1].SizeMask + 3 * v7);
        *((_DWORD *)v11 + 4) = *((_DWORD *)&pTable[2].EntryCount + 6 * v7);
        *((_DWORD *)v11 + 5) = *((_DWORD *)&pTable[2].EntryCount + 6 * v7 + 1);
      }
      v13 = *key;
      *(&pTable[1].EntryCount + 3 * v7) = v10;
    }
    else
    {
      v14 = v12 + 2 * (v12 + 1);
      v15 = *(&pTable->EntryCount + v14) == v7;
      for ( i = &pTable->EntryCount + v14; !v15; i = &pTable->EntryCount + v17 )
      {
        v17 = *i + 2 * (*i + 1);
        v15 = *(&pTable->EntryCount + v17) == v7;
      }
      if ( v11 )
      {
        *v11 = v9;
        v11[1] = *(&pTable[1].SizeMask + 3 * v7);
        *((_DWORD *)v11 + 4) = *((_DWORD *)&pTable[2].EntryCount + 6 * v7);
        *((_DWORD *)v11 + 5) = *((_DWORD *)&pTable[2].EntryCount + 6 * v7 + 1);
      }
      *i = v10;
      v13 = *key;
      *(&pTable[1].EntryCount + 3 * v7) = -1i64;
    }
    *((Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> > *)&pTable[2].EntryCount
    + 3 * v7) = v13;
  }
  *(&pTable[1].SizeMask + 3 * v7) = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // rdx
  unsigned __int64 v9; // r9
  char *v10; // rbx
  Scaleform::GFx::ResourceHandle::HandleType HType; // eax
  Scaleform::RefCountVImpl *pResource; // rcx
  __int64 v13; // rdi
  unsigned __int64 *v14; // r8
  __int64 v15; // rax
  int v16; // eax
  Scaleform::RefCountVImpl *v17; // rcx
  __int64 v18; // r14
  bool v19; // zf
  unsigned __int64 *i; // r14
  __int64 v21; // r14
  int v22; // eax
  Scaleform::RefCountVImpl *v23; // rcx
  Scaleform::RefCountVImpl *v24; // rcx
  Scaleform::GFx::Resource *v25; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::CheckExpand(
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
    *((_DWORD *)v10 + 8) = key->First.Id;
    HType = key->Second.HType;
    *((_DWORD *)v10 + 10) = HType;
    pResource = (Scaleform::RefCountVImpl *)key->Second.pResource;
    *((_QWORD *)v10 + 6) = pResource;
    if ( HType == RH_Pointer && pResource )
      Scaleform::Render::RenderBuffer::AddRef(pResource);
  }
  else
  {
    v13 = v7;
    do
      v13 = pTable->SizeMask & (v13 + 1);
    while ( *(&pTable[1].EntryCount + 5 * v13) != -2i64 );
    v14 = &pTable[2 * v13 + 1].EntryCount + v13;
    v15 = *((_QWORD *)v10 + 3);
    if ( v15 == v7 )
    {
      if ( v14 )
      {
        *v14 = v9;
        v14[1] = *((_QWORD *)v10 + 3);
        *((_DWORD *)v14 + 4) = *((_DWORD *)v10 + 8);
        v16 = *((_DWORD *)v10 + 10);
        *((_DWORD *)v14 + 6) = v16;
        v17 = (Scaleform::RefCountVImpl *)*((_QWORD *)v10 + 6);
        v14[4] = (unsigned __int64)v17;
        if ( !v16 )
        {
          if ( v17 )
            Scaleform::Render::RenderBuffer::AddRef(v17);
        }
      }
      Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::operator=(
        (Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *)(v10 + 32),
        (const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *)key);
      *((_QWORD *)v10 + 2) = v13;
    }
    else
    {
      v18 = v15 + 4 * v15 + 2;
      v19 = *(&pTable->EntryCount + v18) == v7;
      for ( i = &pTable->EntryCount + v18; !v19; i = &pTable->EntryCount + v21 )
      {
        v21 = *i + 4 * *i + 2;
        v19 = *(&pTable->EntryCount + v21) == v7;
      }
      if ( v14 )
      {
        *v14 = v9;
        v14[1] = *((_QWORD *)v10 + 3);
        *((_DWORD *)v14 + 4) = *((_DWORD *)v10 + 8);
        v22 = *((_DWORD *)v10 + 10);
        *((_DWORD *)v14 + 6) = v22;
        v23 = (Scaleform::RefCountVImpl *)*((_QWORD *)v10 + 6);
        v14[4] = (unsigned __int64)v23;
        if ( !v22 )
        {
          if ( v23 )
            Scaleform::Render::RenderBuffer::AddRef(v23);
        }
      }
      *i = v13;
      *((_DWORD *)v10 + 8) = key->First.Id;
      if ( key->Second.HType == RH_Pointer )
      {
        v24 = (Scaleform::RefCountVImpl *)key->Second.pResource;
        if ( v24 )
          Scaleform::Render::RenderBuffer::AddRef(v24);
      }
      if ( !*((_DWORD *)v10 + 10) )
      {
        v25 = (Scaleform::GFx::Resource *)*((_QWORD *)v10 + 6);
        if ( v25 )
          Scaleform::GFx::Resource::Release(v25);
      }
      *((_DWORD *)v10 + 10) = key->Second.HType;
      *((_QWORD *)v10 + 6) = key->Second.pResource;
      *((_QWORD *)v10 + 2) = -1i64;
    }
  }
  *((_QWORD *)v10 + 3) = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v11; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v12; // r8
  unsigned __int64 EntryCount; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v17; // r10
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *i; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[v10 + 1];
  EntryCount = v12->EntryCount;
  if ( v12->EntryCount == -2i64 )
  {
    v12->EntryCount = -1i64;
    LOWORD(v12->SizeMask) = *key->pFirst;
    WORD1(v12->SizeMask) = *key->pSecond;
  }
  else
  {
    v14 = v11->SizeMask;
    v15 = v10;
    do
      v15 = v14 & (v15 + 1);
    while ( v11[v15 + 1].EntryCount != -2i64 );
    v16 = v14 & LOWORD(v12->SizeMask);
    v17 = &v11[v15 + 1];
    if ( v16 == v10 )
    {
      if ( v17 )
      {
        v17->EntryCount = EntryCount;
        LOWORD(v17->SizeMask) = v12->SizeMask;
        WORD1(v17->SizeMask) = WORD1(v12->SizeMask);
      }
      LOWORD(v12->SizeMask) = *key->pFirst;
      WORD1(v12->SizeMask) = *key->pSecond;
      v12->EntryCount = v15;
    }
    else
    {
      for ( i = &v11[v16 + 1]; i->EntryCount != v10; i = &v11[i->EntryCount + 1] )
        ;
      if ( v17 )
      {
        v17->EntryCount = EntryCount;
        LOWORD(v17->SizeMask) = v12->SizeMask;
        WORD1(v17->SizeMask) = WORD1(v12->SizeMask);
      }
      i->EntryCount = v15;
      LOWORD(v12->SizeMask) = *key->pFirst;
      WORD1(v12->SizeMask) = *key->pSecond;
      v12->EntryCount = -1i64;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *v11; // rdx
  unsigned __int64 v12; // r11
  __int64 v13; // r8
  unsigned __int64 *v14; // r10
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  unsigned __int64 *i; // rcx
  __int64 v19; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  if ( v12 == -2i64 )
  {
    *(&v11[1].EntryCount + 3 * v10) = -1i64;
    *(&v11[1].SizeMask + 3 * v10) = 0i64;
    *((_DWORD *)&v11[2].EntryCount + 6 * v10) = *key->pFirst;
    *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1) = *(_DWORD *)key->pSecond;
  }
  else
  {
    v13 = v10;
    do
      v13 = v11->SizeMask & (v13 + 1);
    while ( *(&v11[1].EntryCount + 3 * v13) != -2i64 );
    v14 = &v11[v13 + 1].EntryCount + v13;
    v15 = *(&v11[1].SizeMask + 3 * v10);
    if ( v15 == v10 )
    {
      if ( v14 )
      {
        *v14 = v12;
        v14[1] = *(&v11[1].SizeMask + 3 * v10);
        *((_DWORD *)v14 + 4) = *((_DWORD *)&v11[2].EntryCount + 6 * v10);
        *((_DWORD *)v14 + 5) = *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1);
      }
      *((_DWORD *)&v11[2].EntryCount + 6 * v10) = *key->pFirst;
      *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1) = *(_DWORD *)key->pSecond;
      *(&v11[1].EntryCount + 3 * v10) = v13;
    }
    else
    {
      v16 = v15 + 2 * (v15 + 1);
      v17 = *(&v11->EntryCount + v16) == v10;
      for ( i = &v11->EntryCount + v16; !v17; i = &v11->EntryCount + v19 )
      {
        v19 = *i + 2 * (*i + 1);
        v17 = *(&v11->EntryCount + v19) == v10;
      }
      if ( v14 )
      {
        *v14 = v12;
        v14[1] = *(&v11[1].SizeMask + 3 * v10);
        *((_DWORD *)v14 + 4) = *((_DWORD *)&v11[2].EntryCount + 6 * v10);
        *((_DWORD *)v14 + 5) = *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1);
      }
      *i = v13;
      *((_DWORD *)&v11[2].EntryCount + 6 * v10) = *key->pFirst;
      *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1) = *(_DWORD *)key->pSecond;
      *(&v11[1].EntryCount + 3 * v10) = -1i64;
    }
  }
  *(&v11[1].SizeMask + 3 * v10) = v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *v11; // rdx
  unsigned __int64 v12; // r9
  char *v13; // rbx
  const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> *pSecond; // rax
  Scaleform::GFx::ResourceHandle::HandleType HType; // edx
  Scaleform::RefCountVImpl *pResource; // rcx
  __int64 v17; // rdi
  unsigned __int64 *v18; // r8
  __int64 v19; // rax
  int v20; // eax
  Scaleform::RefCountVImpl *v21; // rcx
  __int64 v22; // r14
  bool v23; // zf
  unsigned __int64 *i; // r14
  __int64 v25; // r14
  int v26; // eax
  Scaleform::RefCountVImpl *v27; // rcx
  const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> *v28; // rdi
  Scaleform::RefCountVImpl *v29; // rcx
  Scaleform::GFx::Resource *v30; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::setRawCapacity(
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
    *((_DWORD *)v13 + 8) = key->pFirst->Id;
    pSecond = key->pSecond;
    HType = pSecond->HType;
    *((_DWORD *)v13 + 10) = pSecond->HType;
    pResource = (Scaleform::RefCountVImpl *)pSecond->pResource;
    *((_QWORD *)v13 + 6) = pResource;
    if ( HType == RH_Pointer && pResource )
      Scaleform::Render::RenderBuffer::AddRef(pResource);
  }
  else
  {
    v17 = v10;
    do
      v17 = v11->SizeMask & (v17 + 1);
    while ( *(&v11[1].EntryCount + 5 * v17) != -2i64 );
    v18 = &v11[2 * v17 + 1].EntryCount + v17;
    v19 = *((_QWORD *)v13 + 3);
    if ( v19 == v10 )
    {
      if ( v18 )
      {
        *v18 = v12;
        v18[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v18 + 4) = *((_DWORD *)v13 + 8);
        v20 = *((_DWORD *)v13 + 10);
        *((_DWORD *)v18 + 6) = v20;
        v21 = (Scaleform::RefCountVImpl *)*((_QWORD *)v13 + 6);
        v18[4] = (unsigned __int64)v21;
        if ( !v20 )
        {
          if ( v21 )
            Scaleform::Render::RenderBuffer::AddRef(v21);
        }
      }
      Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::operator=(
        (Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *)(v13 + 32),
        (const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeRef *)key);
      *((_QWORD *)v13 + 2) = v17;
    }
    else
    {
      v22 = v19 + 4 * v19 + 2;
      v23 = *(&v11->EntryCount + v22) == v10;
      for ( i = &v11->EntryCount + v22; !v23; i = &v11->EntryCount + v25 )
      {
        v25 = *i + 4 * *i + 2;
        v23 = *(&v11->EntryCount + v25) == v10;
      }
      if ( v18 )
      {
        *v18 = v12;
        v18[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v18 + 4) = *((_DWORD *)v13 + 8);
        v26 = *((_DWORD *)v13 + 10);
        *((_DWORD *)v18 + 6) = v26;
        v27 = (Scaleform::RefCountVImpl *)*((_QWORD *)v13 + 6);
        v18[4] = (unsigned __int64)v27;
        if ( !v26 )
        {
          if ( v27 )
            Scaleform::Render::RenderBuffer::AddRef(v27);
        }
      }
      *i = v17;
      *((_DWORD *)v13 + 8) = key->pFirst->Id;
      v28 = key->pSecond;
      if ( v28->HType == RH_Pointer )
      {
        v29 = (Scaleform::RefCountVImpl *)v28->pResource;
        if ( v29 )
          Scaleform::Render::RenderBuffer::AddRef(v29);
      }
      if ( !*((_DWORD *)v13 + 10) )
      {
        v30 = (Scaleform::GFx::Resource *)*((_QWORD *)v13 + 6);
        if ( v30 )
          Scaleform::GFx::Resource::Release(v30);
      }
      *((_DWORD *)v13 + 10) = v28->HType;
      *((_QWORD *)v13 + 6) = v28->pResource;
      *((_QWORD *)v13 + 2) = -1i64;
    }
  }
  *((_QWORD *)v13 + 3) = v10;
}

void __fastcall Scaleform::GFx::FontData::FontData(
        Scaleform::GFx::FontData *this,
        const char *name,
        unsigned int fontFlags)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  char *v7; // rax

  this->__vftable = (Scaleform::GFx::FontData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontData_vtbl *)&Scaleform::Render::Font::`vftable';
  *(_QWORD *)&this->Ascent = 0i64;
  this->Leading = 0.0;
  v5 = -1i64;
  *(_DWORD *)&this->LowerCaseTop = 0;
  v6 = -1i64;
  this->Flags = fontFlags;
  this->hRef.pManager.Value = 0i64;
  this->hRef.pFontHandle = 0i64;
  this->__vftable = (Scaleform::GFx::FontData_vtbl *)&Scaleform::GFx::FontData::`vftable';
  this->Name = 0i64;
  this->pTGData.pObject = 0i64;
  this->Glyphs.Data.Data = 0i64;
  this->Glyphs.Data.Size = 0i64;
  this->Glyphs.Data.Policy.Capacity = 0i64;
  this->CodeTable.mHash.pTable = 0i64;
  this->AdvanceTable.Data.Data = 0i64;
  this->AdvanceTable.Data.Size = 0i64;
  this->AdvanceTable.Data.Policy.Capacity = 0i64;
  this->KerningPairs.mHash.pTable = 0i64;
  do
    ++v6;
  while ( name[v6] );
  v7 = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, v6 + 1, 0i64);
  this->Name = v7;
  if ( v7 )
  {
    while ( name[++v5] != 0 )
      ;
    strcpy_s(v7, v5 + 1, name);
  }
  this->Flags |= 0x2000u;
}

void __fastcall Scaleform::GFx::FontData::FontData(Scaleform::GFx::FontData *this)
{
  this->__vftable = (Scaleform::GFx::FontData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::FontData_vtbl *)&Scaleform::Render::Font::`vftable';
  this->RefCount = 1;
  *(_QWORD *)&this->Ascent = 0i64;
  *(_QWORD *)&this->Leading = 0i64;
  *(_DWORD *)&this->LowerCaseTop = 0;
  this->hRef.pManager.Value = 0i64;
  this->hRef.pFontHandle = 0i64;
  this->__vftable = (Scaleform::GFx::FontData_vtbl *)&Scaleform::GFx::FontData::`vftable';
  this->Name = 0i64;
  this->pTGData.pObject = 0i64;
  this->Glyphs.Data.Data = 0i64;
  this->Glyphs.Data.Size = 0i64;
  this->Glyphs.Data.Policy.Capacity = 0i64;
  this->CodeTable.mHash.pTable = 0i64;
  this->AdvanceTable.Data.Data = 0i64;
  this->AdvanceTable.Data.Size = 0i64;
  this->AdvanceTable.Data.Policy.Capacity = 0i64;
  this->KerningPairs.mHash.pTable = 0i64;
}

void __fastcall Scaleform::GFx::FontDataBound::FontDataBound(
        Scaleform::GFx::FontDataBound *this,
        Scaleform::Render::Font *pfont,
        Scaleform::GFx::ResourceBinding *pbinding)
{
  unsigned __int64 v3; // rdi
  const Scaleform::GFx::TextureGlyphData *v7; // rax
  const Scaleform::GFx::TextureGlyphData *v8; // rbx
  Scaleform::GFx::TextureGlyphData *v9; // rax
  Scaleform::GFx::TextureGlyphData *v10; // rax
  Scaleform::GFx::TextureGlyphData *v11; // rbx
  Scaleform::GFx::TextureGlyphData *pObject; // rcx
  void **v13; // r9
  Scaleform::GFx::TextureGlyphData *v14; // rbp
  unsigned __int64 Size; // r14
  __int64 v16; // rbx
  __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0i64;
  this->__vftable = (Scaleform::GFx::FontDataBound_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontDataBound_vtbl *)&Scaleform::Render::Font::`vftable';
  this->Ascent = pfont->Ascent;
  this->Descent = pfont->Descent;
  this->Leading = pfont->Leading;
  this->Flags = pfont->Flags;
  this->LowerCaseTop = pfont->LowerCaseTop;
  this->UpperCaseTop = pfont->UpperCaseTop;
  this->hRef.pManager.Value = 0i64;
  this->hRef.pFontHandle = 0i64;
  this->__vftable = (Scaleform::GFx::FontDataBound_vtbl *)&Scaleform::GFx::FontDataBound::`vftable';
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfont);
  this->pFont.pObject = pfont;
  this->pTGData.pObject = 0i64;
  v7 = (const Scaleform::GFx::TextureGlyphData *)pfont->GetTextureGlyphData(pfont);
  v18 = 261;
  v8 = v7;
  v9 = (Scaleform::GFx::TextureGlyphData *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                             Scaleform::Memory::pGlobalHeap,
                                             this,
                                             72i64,
                                             &v18);
  if ( v9 )
  {
    Scaleform::GFx::TextureGlyphData::TextureGlyphData(v9, v8);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  pObject = this->pTGData.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  v17[1] = (__int64)pbinding;
  v13 = &Scaleform::GFx::TextureGlyphBinder::`vftable';
  v17[0] = (__int64)&Scaleform::GFx::TextureGlyphBinder::`vftable';
  v14 = v11;
  this->pTGData.pObject = v11;
  Size = v11->TextureGlyphs.Data.Size;
  if ( Size )
  {
    v16 = 0i64;
    while ( 1 )
    {
      ((void (__fastcall *)(__int64 *, _QWORD, Scaleform::Render::TextureGlyph *))v13[1])(
        v17,
        (unsigned int)v3++,
        &v14->TextureGlyphs.Data.Data[v16++]);
      if ( v3 >= Size )
        break;
      v13 = (void **)v17[0];
    }
  }
}

void __fastcall Scaleform::GFx::FontDataCompactedGfx::FontDataCompactedGfx(Scaleform::GFx::FontDataCompactedGfx *this)
{
  this->__vftable = (Scaleform::GFx::FontDataCompactedGfx_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontDataCompactedGfx_vtbl *)&Scaleform::Render::Font::`vftable';
  *(_QWORD *)&this->Ascent = 0i64;
  *(_QWORD *)&this->Leading = 0i64;
  *(_DWORD *)&this->LowerCaseTop = 0;
  this->hRef.pManager.Value = 0i64;
  this->hRef.pFontHandle = 0i64;
  this->__vftable = (Scaleform::GFx::FontDataCompactedGfx_vtbl *)&Scaleform::GFx::FontDataCompactedGfx::`vftable';
  this->Container.Data = 0i64;
  this->Container.Size = 0i64;
  this->Container.Capacity = 0i64;
  this->CompactedFontValue.RefCount = 1;
  this->CompactedFontValue.__vftable = (Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >_vtbl *)&Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::`vftable';
  this->CompactedFontValue.Decoder.Data = &this->Container;
  this->CompactedFontValue.Name.Data = 0i64;
  this->CompactedFontValue.Name.Size = 0i64;
  this->CompactedFontValue.Name.Capacity = 0i64;
}

void __fastcall Scaleform::GFx::FontDataCompactedSwf::FontDataCompactedSwf(Scaleform::GFx::FontDataCompactedSwf *this)
{
  this->__vftable = (Scaleform::GFx::FontDataCompactedSwf_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontDataCompactedSwf_vtbl *)&Scaleform::Render::Font::`vftable';
  *(_QWORD *)&this->Ascent = 0i64;
  *(_QWORD *)&this->Leading = 0i64;
  *(_DWORD *)&this->LowerCaseTop = 0;
  this->hRef.pManager.Value = 0i64;
  this->hRef.pFontHandle = 0i64;
  this->__vftable = (Scaleform::GFx::FontDataCompactedSwf_vtbl *)&Scaleform::GFx::FontDataCompactedSwf::`vftable';
  *(_QWORD *)&this->Container.gap0 = 0i64;
  this->Container.Size = 0i64;
  this->Container.NumPages = 0i64;
  this->Container.MaxPages = 0i64;
  this->Container.Pages = 0i64;
  this->CompactedFontValue.__vftable = (Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >_vtbl *)&Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::`vftable';
  this->CompactedFontValue.RefCount = 1;
  this->CompactedFontValue.Decoder.Data = &this->Container;
  this->CompactedFontValue.Name.Data = 0i64;
  this->CompactedFontValue.Name.Size = 0i64;
  this->CompactedFontValue.Name.Capacity = 0i64;
  this->NumGlyphs = 0;
}

void __fastcall Scaleform::GFx::FontResource::FontResource(
        Scaleform::GFx::FontResource *this,
        Scaleform::Render::Font *pfont,
        const Scaleform::GFx::ResourceKey *key)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::GFx::FontResource_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->__vftable = (Scaleform::GFx::FontResource_vtbl *)&Scaleform::GFx::FontResource::`vftable';
  this->pLib = 0i64;
  this->pFont.pObject = 0i64;
  this->pBinding = 0i64;
  AgPointer<AgController>::AgPointer<AgController>((AgPointer<AgMemoryStream> *)&this->FontKey);
  if ( pfont )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfont);
  pObject = (Scaleform::RefCountVImpl *)this->pFont.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFont.pObject = pfont;
  Scaleform::GFx::ResourceKey::operator=(&this->FontKey, key);
  *(_DWORD *)&this->LowerCaseTop = 0;
}

void __fastcall Scaleform::GFx::FontResource::FontResource(
        Scaleform::GFx::FontResource *this,
        Scaleform::Render::Font *pfont,
        Scaleform::GFx::ResourceBinding *pbinding)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::GFx::FontResource_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->__vftable = (Scaleform::GFx::FontResource_vtbl *)&Scaleform::GFx::FontResource::`vftable';
  this->pLib = 0i64;
  this->pFont.pObject = 0i64;
  this->pBinding = pbinding;
  AgPointer<AgController>::AgPointer<AgController>((AgPointer<AgMemoryStream> *)&this->FontKey);
  if ( pfont )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfont);
  pObject = (Scaleform::RefCountVImpl *)this->pFont.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFont.pObject = pfont;
  *(_DWORD *)&this->LowerCaseTop = 0;
}

void __fastcall Scaleform::GFx::GFxSystemFontResourceKey::GFxSystemFontResourceKey(
        Scaleform::GFx::GFxSystemFontResourceKey *this,
        const char *pname,
        unsigned int fontFlags,
        Scaleform::GFx::FontProvider *pfontProvider)
{
  char v6; // r14
  Scaleform::String *v8; // rax
  const Scaleform::String *v9; // rax
  void *v10; // rbx
  void *v11; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::String result; // [rsp+40h] [rbp+8h] BYREF
  Scaleform::String v14; // [rsp+58h] [rbp+20h] BYREF

  this->__vftable = (Scaleform::GFx::GFxSystemFontResourceKey_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::GFxSystemFontResourceKey_vtbl *)&Scaleform::GFx::GFxSystemFontResourceKey::`vftable';
  v6 = fontFlags;
  this->pFontProvider.pObject = 0i64;
  Scaleform::String::String(&this->FontName);
  Scaleform::String::String(&v14, pname);
  v9 = Scaleform::String::ToLower(v8, &result);
  Scaleform::String::operator=(&this->FontName, v9);
  v10 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v10);
  v11 = (void *)(v14.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v14.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
  this->CreateFontFlags = v6 & 3;
  if ( pfontProvider )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfontProvider);
  pObject = (Scaleform::RefCountVImpl *)this->pFontProvider.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFontProvider.pObject = pfontProvider;
}

void __fastcall Scaleform::GFx::TextureGlyphData::TextureGlyphData(
        Scaleform::GFx::TextureGlyphData *this,
        const Scaleform::GFx::TextureGlyphData *orig)
{
  Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *p_GlyphsTextures; // rsi
  const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> *v3; // rdi
  unsigned __int64 Size; // r13
  __int64 v7; // rbx
  Scaleform::Render::TextureGlyph *Data; // rbp
  Scaleform::Render::TextureGlyph *v9; // rsi
  Scaleform::Render::Image *pObject; // rcx
  Scaleform::Render::Image *v11; // rcx
  float x1; // eax
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x; // eax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // rax
  Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *v17; // r14
  Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef si128; // xmm0
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *v20; // rax
  __int64 pSecond; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef key; // [rsp+20h] [rbp-38h] BYREF

  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::TextureGlyphData_vtbl *)&Scaleform::GFx::TextureGlyphData::`vftable';
  p_GlyphsTextures = &this->GlyphsTextures;
  v3 = 0i64;
  this->PackTextureConfig = orig->PackTextureConfig;
  this->TextureGlyphs.Data.Data = 0i64;
  this->TextureGlyphs.Data.Size = 0i64;
  this->TextureGlyphs.Data.Policy.Capacity = 0i64;
  this->GlyphsTextures.mHash.pTable = 0i64;
  this->FileCreation = orig->FileCreation;
  Scaleform::ArrayData<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->TextureGlyphs.Data,
    orig->TextureGlyphs.Data.Size);
  Size = orig->TextureGlyphs.Data.Size;
  if ( Size )
  {
    v7 = 0i64;
    do
    {
      Data = orig->TextureGlyphs.Data.Data;
      v9 = this->TextureGlyphs.Data.Data;
      pObject = Data[v7].pImage.pObject;
      if ( pObject )
        pObject->AddRef(pObject);
      v11 = v9[v7].pImage.pObject;
      if ( v11 )
        v11->Release(v11);
      v9[v7].pImage.pObject = Data[v7].pImage.pObject;
      x1 = Data[v7].UvBounds.x1;
      y2 = Data[v7].UvBounds.y2;
      x2 = Data[v7].UvBounds.x2;
      v9[v7].UvBounds.y1 = Data[v7].UvBounds.y1;
      v9[v7].UvBounds.x2 = x2;
      v9[v7].UvBounds.y2 = y2;
      v9[v7].UvBounds.x1 = x1;
      x = Data[v7].UvOrigin.x;
      v9[v7].UvOrigin.y = Data[v7].UvOrigin.y;
      v9[v7].UvOrigin.x = x;
      v9[v7].BindIndex = Data[v7].BindIndex;
      ++v7;
      --Size;
    }
    while ( Size );
    p_GlyphsTextures = &this->GlyphsTextures;
  }
  pTable = orig->GlyphsTextures.mHash.pTable;
  v17 = &orig->GlyphsTextures;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v20 = pTable + 1;
    do
    {
      if ( v20->EntryCount != -2i64 )
        break;
      v3 = (const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> *)((char *)v3 + 1);
      v20 = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *)((char *)v20 + 40);
    }
    while ( (unsigned __int64)v3 <= SizeMask );
    key.pFirst = (const Scaleform::GFx::ResourceId *)v17;
    key.pSecond = v3;
    si128 = (Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef)_mm_load_si128((const __m128i *)&key);
  }
  else
  {
    si128 = 0i64;
  }
  key = si128;
  pSecond = (__int64)si128.pSecond;
  while ( si128.pFirst )
  {
    v22 = *(_QWORD *)&si128.pFirst->Id;
    if ( !*(_QWORD *)si128.pFirst || pSecond > *(_QWORD *)(v22 + 8) )
      break;
    key.pFirst = (const Scaleform::GFx::ResourceId *)(v22 + 32 + 40 * pSecond);
    key.pSecond = (const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> *)(v22 + 8 * (5 * pSecond + 5));
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
      &p_GlyphsTextures->mHash,
      p_GlyphsTextures,
      &key);
    v23 = *(_QWORD *)(*(_QWORD *)si128.pFirst + 8i64);
    if ( pSecond <= (__int64)v23 && ++pSecond <= v23 )
    {
      v24 = (_QWORD *)(*(_QWORD *)si128.pFirst + 40 * pSecond + 16);
      do
      {
        if ( *v24 != -2i64 )
          break;
        ++pSecond;
        v24 += 5;
      }
      while ( pSecond <= v23 );
    }
  }
}

void __fastcall Scaleform::GFx::FontData::~FontData(Scaleform::GFx::FontData *this)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *pTable; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *v5; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v9; // rax
  unsigned __int64 Size; // rsi
  Scaleform::RefCountVImpl **i; // rbx
  Scaleform::GFx::TextureGlyphData *pObject; // rcx

  this->__vftable = (Scaleform::GFx::FontData_vtbl *)&Scaleform::GFx::FontData::`vftable';
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Glyphs.Data,
    &this->Glyphs,
    0i64);
  if ( this->Name )
  {
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->Name = 0i64;
  }
  pTable = this->KerningPairs.mHash.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->KerningPairs.mHash.pTable;
      if ( *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) = -2i64;
      v3 += 24i64;
      --v4;
    }
    while ( v4 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->KerningPairs.mHash.pTable);
    this->KerningPairs.mHash.pTable = 0i64;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->AdvanceTable.Data.Data);
  v6 = this->CodeTable.mHash.pTable;
  if ( v6 )
  {
    v7 = 0i64;
    v8 = v6->SizeMask + 1;
    do
    {
      v9 = this->CodeTable.mHash.pTable;
      if ( v9[v7 + 1].EntryCount != -2i64 )
        v9[v7 + 1].EntryCount = -2i64;
      ++v7;
      --v8;
    }
    while ( v8 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->CodeTable.mHash.pTable);
    this->CodeTable.mHash.pTable = 0i64;
  }
  Size = this->Glyphs.Data.Size;
  for ( i = (Scaleform::RefCountVImpl **)&this->Glyphs.Data.Data[Size - 1]; Size; --Size )
  {
    if ( *i )
      Scaleform::RefCountImpl::Release(*i);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Glyphs.Data.Data);
  pObject = this->pTGData.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->__vftable = (Scaleform::GFx::FontData_vtbl *)&Scaleform::Render::Font::`vftable';
  Scaleform::Render::FontCacheHandleRef::releaseFont(&this->hRef);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::FontDataCompactedGfx::~FontDataCompactedGfx(Scaleform::GFx::FontDataCompactedGfx *this)
{
  this->__vftable = (Scaleform::GFx::FontDataCompactedGfx_vtbl *)&Scaleform::GFx::FontDataCompactedGfx::`vftable';
  if ( this->CompactedFontValue.Name.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&this->CompactedFontValue);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Container.Data);
  this->__vftable = (Scaleform::GFx::FontDataCompactedGfx_vtbl *)&Scaleform::Render::Font::`vftable';
  Scaleform::Render::FontCacheHandleRef::releaseFont(&this->hRef);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::FontDataCompactedSwf::~FontDataCompactedSwf(Scaleform::GFx::FontDataCompactedSwf *this)
{
  this->__vftable = (Scaleform::GFx::FontDataCompactedSwf_vtbl *)&Scaleform::GFx::FontDataCompactedSwf::`vftable';
  if ( this->CompactedFontValue.Name.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&this->CompactedFontValue);
  Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> > *)&this->Container);
  this->__vftable = (Scaleform::GFx::FontDataCompactedSwf_vtbl *)&Scaleform::Render::Font::`vftable';
  Scaleform::Render::FontCacheHandleRef::releaseFont(&this->hRef);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *__fastcall Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::operator=(
        Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *this,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *__that)
{
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::Resource *v5; // rcx

  this->First.Id = __that->First.Id;
  if ( __that->Second.HType == RH_Pointer )
  {
    pResource = (Scaleform::RefCountVImpl *)__that->Second.pResource;
    if ( pResource )
      Scaleform::Render::RenderBuffer::AddRef(pResource);
  }
  if ( this->Second.HType == RH_Pointer )
  {
    v5 = this->Second.pResource;
    if ( v5 )
      Scaleform::GFx::Resource::Release(v5);
  }
  this->Second.HType = __that->Second.HType;
  this->Second.pResource = __that->Second.pResource;
  return this;
}

void __fastcall Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::operator=(
        Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *this,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeRef *src)
{
  const Scaleform::GFx::ResourceHandle *pSecond; // rdi
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::Resource *v5; // rcx

  this->First.Id = src->pFirst->Id;
  pSecond = src->pSecond;
  if ( pSecond->HType == RH_Pointer )
  {
    pResource = (Scaleform::RefCountVImpl *)pSecond->pResource;
    if ( pResource )
      Scaleform::Render::RenderBuffer::AddRef(pResource);
  }
  if ( this->Second.HType == RH_Pointer )
  {
    v5 = this->Second.pResource;
    if ( v5 )
      Scaleform::GFx::Resource::Release(v5);
  }
  this->Second.HType = pSecond->HType;
  this->Second.pResource = pSecond->pResource;
}

Scaleform::Render::TextureGlyph *__fastcall Scaleform::Render::TextureGlyph::operator=(
        Scaleform::Render::TextureGlyph *this,
        const Scaleform::Render::TextureGlyph *__that)
{
  Scaleform::Render::Image *pObject; // rcx
  Scaleform::Render::Image *v5; // rcx
  float y1; // xmm0_4
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y; // xmm0_4

  pObject = __that->pImage.pObject;
  if ( pObject )
    pObject->AddRef(pObject);
  v5 = this->pImage.pObject;
  if ( v5 )
    v5->Release(v5);
  this->pImage.pObject = __that->pImage.pObject;
  y1 = __that->UvBounds.y1;
  y2 = __that->UvBounds.y2;
  x2 = __that->UvBounds.x2;
  this->UvBounds.x1 = __that->UvBounds.x1;
  this->UvBounds.y1 = y1;
  this->UvBounds.x2 = x2;
  this->UvBounds.y2 = y2;
  y = __that->UvOrigin.y;
  this->UvOrigin.x = __that->UvOrigin.x;
  this->UvOrigin.y = y;
  this->BindIndex = __that->BindIndex;
  return this;
}

__int64 __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::AcquireFont(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int startPos)
{
  const Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // r9
  unsigned int v4; // er14
  unsigned __int8 **Pages; // r9
  unsigned int v7; // edi
  int i; // er8
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned __int8 **v13; // r8
  int v14; // edx
  __int64 v15; // r9
  unsigned __int8 **v16; // r8
  int v17; // edx
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  unsigned __int8 **v24; // r9
  int v25; // ebx
  unsigned __int64 v26; // rax
  int v27; // ebx
  unsigned __int8 **v28; // r10
  unsigned int v29; // edi
  unsigned int KerningTableSize; // eax

  Data = this->Decoder.Data;
  v4 = startPos;
  if ( LODWORD(Data->Size) < startPos + 15 )
    return 0i64;
  Pages = Data->Pages;
  v7 = 0;
  for ( i = 0; Pages[(unsigned __int64)startPos >> 12][startPos & 0xFFF]; ++i )
    ++startPos;
  v9 = (unsigned int)(i + 1);
  Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2>>::Reserve(&this->Name, v9, 0i64);
  this->Name.Size = v9;
  if ( v9 )
  {
    v10 = 0i64;
    do
    {
      v11 = v7 + v4;
      ++v7;
      this->Name.Data[v10] = this->Decoder.Data->Pages[(unsigned __int64)v11 >> 12][v11 & 0xFFF];
      v10 = v7;
    }
    while ( v7 < this->Name.Size );
  }
  v12 = v4 + LODWORD(this->Name.Size);
  v13 = this->Decoder.Data->Pages;
  v14 = v13[(unsigned __int64)(v12 + 1) >> 12][(v12 + 1) & 0xFFF] << 8;
  v12 += 2;
  this->Flags = v13[(unsigned __int64)(v4 + LODWORD(this->Name.Size)) >> 12][((_WORD)v4 + LOWORD(this->Name.Size)) & 0xFFF] | v14;
  v15 = v12 & 0xFFF;
  v16 = this->Decoder.Data->Pages;
  v17 = v16[(unsigned __int64)(v12 + 1) >> 12][(v12 + 1) & 0xFFF] << 8;
  v18 = v12;
  v12 += 2;
  this->NominalSize = v16[v18 >> 12][v15] | v17;
  v19 = v12 & 0xFFF;
  LOWORD(v17) = this->Decoder.Data->Pages[(unsigned __int64)(v12 + 1) >> 12][(v12 + 1) & 0xFFF] << 8;
  v20 = v12;
  v12 += 2;
  this->Ascent = (float)(__int16)(v17 | this->Decoder.Data->Pages[v20 >> 12][v19]);
  LODWORD(v20) = (__int16)((this->Decoder.Data->Pages[(unsigned __int64)(v12 + 1) >> 12][(v12 + 1) & 0xFFF] << 8) | this->Decoder.Data->Pages[(unsigned __int64)v12 >> 12][v12 & 0xFFF]);
  v12 += 2;
  this->Descent = (float)(int)v20;
  v21 = v12 & 0xFFF;
  LOWORD(v17) = this->Decoder.Data->Pages[(unsigned __int64)(v12 + 1) >> 12][(v12 + 1) & 0xFFF] << 8;
  v22 = v12;
  v12 += 2;
  v23 = v12 & 0xFFF;
  this->Leading = (float)(__int16)(v17 | this->Decoder.Data->Pages[v22 >> 12][v21]);
  v24 = this->Decoder.Data->Pages;
  v25 = v24[(unsigned __int64)(v12 + 1) >> 12][(v12 + 1) & 0xFFF] | ((v24[(unsigned __int64)(v12 + 2) >> 12][(v12 + 2) & 0xFFF] | (v24[(unsigned __int64)(v12 + 3) >> 12][(v12 + 3) & 0xFFF] << 8)) << 8);
  v26 = (unsigned __int64)v12 >> 12;
  v12 += 4;
  v27 = v24[v26][v23] | (v25 << 8);
  this->NumGlyphs = v27;
  v28 = this->Decoder.Data->Pages;
  LODWORD(v26) = v12
               + 4
               + (((v28[(unsigned __int64)(v12 + 1) >> 12][(v12 + 1) & 0xFFF] | ((v28[(unsigned __int64)(v12 + 2) >> 12][(v12 + 2) & 0xFFF] | (v28[(unsigned __int64)(v12 + 3) >> 12][(v12 + 3) & 0xFFF] << 8)) << 8)) << 8) | v28[(unsigned __int64)v12 >> 12][v12 & 0xFFF]);
  this->GlyphInfoTablePos = v26;
  v29 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadUInt30(
          (Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *)&this->Decoder,
          v26 + 8 * v27,
          &this->KerningTableSize)
      + v26
      + 8 * v27;
  KerningTableSize = this->KerningTableSize;
  this->KerningTablePos = v29;
  return v29 + 6 * KerningTableSize - v4;
}

__int64 __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::AcquireFont(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
        unsigned int startPos)
{
  const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> *Data; // r8
  __int64 v4; // r14
  unsigned __int8 *v6; // r8
  unsigned int v7; // edi
  int v8; // edx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r10
  unsigned __int8 *v14; // rdx
  int v15; // er8
  int v16; // ecx
  __int64 v17; // r10
  unsigned __int8 *v18; // rdx
  int v19; // er8
  int v20; // ecx
  __int64 v21; // r10
  unsigned __int8 *v22; // rdx
  __int16 v23; // ax
  __int64 v24; // r10
  unsigned __int8 *v25; // rdx
  __int16 v26; // ax
  __int64 v27; // r10
  unsigned __int8 *v28; // rdx
  __int16 v29; // ax
  __int64 v30; // r10
  unsigned __int8 *v31; // rdx
  int v32; // ecx
  int v33; // er9
  int v34; // eax
  __int64 v35; // r10
  int v36; // er9
  unsigned __int8 *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // r10
  unsigned __int8 *v40; // r9
  unsigned int v41; // er8
  unsigned int v42; // er8
  int v43; // eax
  int v44; // edx
  unsigned int v45; // er10
  unsigned int KerningTableSize; // eax

  Data = this->Decoder.Data;
  v4 = startPos;
  if ( LODWORD(Data->Size) < startPos + 15 )
    return 0i64;
  v6 = Data->Data;
  v7 = 0;
  v8 = 0;
  if ( v6[v4] )
  {
    LODWORD(v9) = v4;
    do
    {
      ++v8;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( v6[v9] );
  }
  v10 = (unsigned int)(v8 + 1);
  Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2>>::Reserve(&this->Name, v10, 0i64);
  this->Name.Size = v10;
  if ( this->Name.Size )
  {
    v11 = 0i64;
    do
    {
      v12 = v7 + (unsigned int)v4;
      ++v7;
      this->Name.Data[v11] = this->Decoder.Data->Data[v12];
      v11 = v7;
    }
    while ( v7 < this->Name.Size );
  }
  v13 = (unsigned int)(v4 + LODWORD(this->Name.Size));
  v14 = this->Decoder.Data->Data;
  v15 = v14[(unsigned int)(v13 + 1)];
  v16 = v14[v13];
  v17 = (unsigned int)(v13 + 2);
  this->Flags = v16 | (v15 << 8);
  v18 = this->Decoder.Data->Data;
  v19 = v18[(unsigned int)(v17 + 1)];
  v20 = v18[v17];
  v21 = (unsigned int)(v17 + 2);
  this->NominalSize = v20 | (v19 << 8);
  v22 = this->Decoder.Data->Data;
  LOWORD(v19) = v22[(unsigned int)(v21 + 1)];
  v23 = v22[v21];
  v24 = (unsigned int)(v21 + 2);
  this->Ascent = (float)(__int16)(((_WORD)v19 << 8) | v23);
  v25 = this->Decoder.Data->Data;
  LOWORD(v19) = v25[(unsigned int)(v24 + 1)];
  v26 = v25[v24];
  v27 = (unsigned int)(v24 + 2);
  this->Descent = (float)(__int16)(((_WORD)v19 << 8) | v26);
  v28 = this->Decoder.Data->Data;
  LOWORD(v19) = v28[(unsigned int)(v27 + 1)];
  v29 = v28[v27];
  v30 = (unsigned int)(v27 + 2);
  this->Leading = (float)(__int16)(((_WORD)v19 << 8) | v29);
  v31 = this->Decoder.Data->Data;
  v32 = v31[v30];
  v33 = v31[(unsigned int)(v30 + 2)] | (v31[(unsigned int)(v30 + 3)] << 8);
  v34 = v31[(unsigned int)(v30 + 1)];
  v35 = (unsigned int)(v30 + 4);
  v36 = v32 | ((v34 | (v33 << 8)) << 8);
  this->NumGlyphs = v36;
  v37 = this->Decoder.Data->Data;
  v38 = v35
      + 4
      + (((v37[(unsigned int)(v35 + 1)] | ((v37[(unsigned int)(v35 + 2)] | (v37[(unsigned int)(v35 + 3)] << 8)) << 8)) << 8) | v37[v35]);
  this->GlyphInfoTablePos = v38;
  v39 = v38 + 8 * v36;
  v40 = this->Decoder.Data->Data;
  v41 = v40[v39];
  if ( (v40[v39] & 3) != 0 )
  {
    if ( (v40[v39] & 3) == 1 )
    {
      this->KerningTableSize = (v41 >> 2) | (v40[(unsigned int)(v39 + 1)] << 6);
      v43 = 2;
    }
    else
    {
      v42 = v41 >> 2;
      if ( (v40[v39] & 3) == 2 )
      {
        v43 = 3;
        v44 = v42 | ((v40[(unsigned int)(v39 + 1)] | (v40[(unsigned int)(v39 + 2)] << 8)) << 6);
      }
      else
      {
        v43 = 4;
        v44 = v42 | ((v40[(unsigned int)(v39 + 1)] | ((v40[(unsigned int)(v39 + 2)] | (v40[(unsigned int)(v39 + 3)] << 8)) << 8)) << 6);
      }
      this->KerningTableSize = v44;
    }
  }
  else
  {
    v43 = 1;
    this->KerningTableSize = v41 >> 2;
  }
  v45 = v43 + v39;
  KerningTableSize = this->KerningTableSize;
  this->KerningTablePos = v45;
  return v45 + 6 * KerningTableSize - (_DWORD)v4;
}

void __fastcall Scaleform::GFx::ImageFileKeyInterface::AddRef(
        Scaleform::Render::StateData::Interface_RefCountImpl *this,
        void *data,
        Scaleform::Render::StateData::Interface::RefBehaviour __formal)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)data);
}

void __fastcall Scaleform::GFx::TextureGlyphData::AddTexture(
        Scaleform::GFx::TextureGlyphData *this,
        const Scaleform::GFx::ResourceId *textureId,
        const Scaleform::GFx::ResourceHandle *rh)
{
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::ResourceHandle::HandleType HType; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::GFx::Resource *v8; // [rsp+28h] [rbp-20h]
  Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef key; // [rsp+30h] [rbp-18h] BYREF

  HType = RH_Pointer;
  v8 = 0i64;
  if ( rh->HType == RH_Pointer )
  {
    pResource = (Scaleform::RefCountVImpl *)rh->pResource;
    if ( pResource )
      Scaleform::Render::RenderBuffer::AddRef(pResource);
  }
  HType = rh->HType;
  v8 = rh->pResource;
  key.pSecond = (const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> *)&HType;
  key.pFirst = textureId;
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
    &this->GlyphsTextures.mHash,
    &this->GlyphsTextures,
    &key);
  if ( HType == RH_Pointer )
  {
    if ( v8 )
      Scaleform::GFx::Resource::Release(v8);
  }
}

void __fastcall Scaleform::GFx::TextureGlyphData::AddTexture(
        Scaleform::GFx::TextureGlyphData *this,
        const Scaleform::GFx::ResourceId *textureId,
        Scaleform::GFx::ImageResource *pimageRes)
{
  int v5; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::GFx::Resource *v6; // [rsp+28h] [rbp-20h]
  Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef key; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v6 = pimageRes;
  if ( pimageRes )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pimageRes);
  key.pFirst = textureId;
  key.pSecond = (const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> *)&v5;
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
    &this->GlyphsTextures.mHash,
    &this->GlyphsTextures,
    &key);
  if ( !v5 )
  {
    if ( v6 )
      Scaleform::GFx::Resource::Release(v6);
  }
}

void __fastcall Scaleform::GFx::TextureGlyphData::AddTextureGlyph(
        Scaleform::GFx::TextureGlyphData *this,
        unsigned int glyphIndex,
        const Scaleform::Render::TextureGlyph *glyph)
{
  unsigned __int64 v3; // rbx

  v3 = glyphIndex;
  if ( this->TextureGlyphs.Data.Size > glyphIndex
    || (Scaleform::ArrayData<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy>::Resize(
          &this->TextureGlyphs.Data,
          glyphIndex + 1),
        this->TextureGlyphs.Data.Size > v3) )
  {
    Scaleform::Render::TextureGlyph::operator=(&this->TextureGlyphs.Data.Data[v3], glyph);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl::Namespace *,2>,Scaleform::HashsetEntry<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc> > *this)
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
      ++v2;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear(
        Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *this)
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
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  char *v4; // rbx
  Scaleform::GFx::Resource *v5; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      v4 = (char *)this->pTable + v2;
      if ( *((_QWORD *)v4 + 2) != -2i64 )
      {
        if ( !*((_DWORD *)v4 + 10) )
        {
          v5 = (Scaleform::GFx::Resource *)*((_QWORD *)v4 + 6);
          if ( v5 )
            Scaleform::GFx::Resource::Release(v5);
        }
        *((_QWORD *)v4 + 2) = -2i64;
      }
      v2 += 40i64;
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

Scaleform::GFx::Resource *__fastcall Scaleform::GFx::FontResource::CreateFontResource(
        const char *pname,
        unsigned int fontFlags,
        Scaleform::GFx::FontProvider *pprovider,
        Scaleform::GFx::ResourceWeakLib *plib)
{
  Scaleform::GFx::GFxSystemFontResourceKey *v8; // rax
  Scaleform::GFx::Resource *v9; // rdi
  Scaleform::RefCountVImpl *v10; // rax
  Scaleform::RefCountVImpl *v11; // rbx
  Scaleform::Render::Font *v12; // rbx
  Scaleform::GFx::FontResource *v13; // rax
  Scaleform::GFx::Resource *v14; // rax
  Scaleform::GFx::ResourceLib::BindHandle phandle; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceKey k; // [rsp+30h] [rbp-28h] BYREF

  v8 = (Scaleform::GFx::GFxSystemFontResourceKey *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     40i64);
  v9 = 0i64;
  if ( v8 )
  {
    Scaleform::GFx::GFxSystemFontResourceKey::GFxSystemFontResourceKey(v8, pname, fontFlags, pprovider);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  Scaleform::GFx::ResourceKey::ResourceKey(&k, &Scaleform::GFx::GFxSystemFontResourceKeyInterface_Instance, v11);
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  phandle.State = RS_Unbound;
  phandle.pResource = 0i64;
  if ( Scaleform::GFx::ResourceWeakLib::BindResourceKey(plib, &phandle, &k) == RS_NeedsResolve )
  {
    v12 = pprovider->CreateFont(pprovider, pname, fontFlags);
    if ( v12
      && (v13 = (Scaleform::GFx::FontResource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  64i64)) != 0i64
      && (Scaleform::GFx::FontResource::FontResource(v13, v12, &k), (v9 = v14) != 0i64) )
    {
      Scaleform::GFx::ResourceLib::ResourceSlot::Resolve(phandle.pSlot, v14);
    }
    else
    {
      Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(phandle.pSlot, &pnewText);
    }
    if ( v12 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
  }
  else
  {
    v9 = Scaleform::GFx::ResourceLib::BindHandle::WaitForResolve(&phandle);
  }
  if ( phandle.State == RS_Available )
  {
    Scaleform::GFx::Resource::Release(phandle.pResource);
  }
  else if ( phandle.State >= RS_WaitingResolve )
  {
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)phandle.pResource);
  }
  if ( k.pKeyInterface )
    k.pKeyInterface->Release(k.pKeyInterface, k.hKeyData);
  return v9;
}

float __fastcall Scaleform::GFx::FontData::GetAdvance(Scaleform::GFx::FontData *this, __int64 glyphIndex)
{
  unsigned __int64 Size; // rcx
  char v4; // cl
  Scaleform::GFx::FontData_vtbl *v5; // rax
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    ((void (__fastcall *)(Scaleform::GFx::FontData *, __int64, Scaleform::GFx::FontData *))this->GetNominalGlyphWidth)(
      this,
      glyphIndex,
      this);
  }
  else
  {
    Size = this->AdvanceTable.Data.Size;
    if ( Size )
    {
      if ( (unsigned int)glyphIndex >= Size )
        return 0.0;
      else
        return this->AdvanceTable.Data.Data[(unsigned int)glyphIndex].Advance;
    }
    else
    {
      v4 = Logged;
      v5 = this->__vftable;
      if ( !Logged )
        v4 = 1;
      Logged = v4;
      v5->GetNominalGlyphWidth(this);
    }
  }
  return result;
}

void __fastcall Scaleform::GFx::FontDataBound::GetAdvance(Scaleform::GFx::FontDataBound *this, __int64 glyphIndex)
{
  this->pFont.pObject->GetAdvance(this->pFont.pObject, glyphIndex);
}

float __fastcall Scaleform::GFx::FontDataCompactedGfx::GetAdvance(
        Scaleform::GFx::FontDataCompactedGfx *this,
        unsigned int glyphIndex)
{
  __int64 v2; // r9
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    this->GetNominalGlyphWidth(this);
  }
  else
  {
    v2 = this->CompactedFontValue.GlyphInfoTablePos + 8 * glyphIndex + 2;
    return (float)((float)((__int16)(this->CompactedFontValue.Decoder.Data->Data[(unsigned int)(v2 + 1)] << 8) | this->CompactedFontValue.Decoder.Data->Data[v2])
                 * 1024.0)
         / (float)(int)this->CompactedFontValue.NominalSize;
  }
  return result;
}

float __fastcall Scaleform::GFx::FontDataCompactedSwf::GetAdvance(
        Scaleform::GFx::FontDataCompactedSwf *this,
        unsigned int glyphIndex)
{
  unsigned int v3; // er9
  unsigned int v4; // ecx
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF || glyphIndex >= this->CompactedFontValue.NumGlyphs )
  {
    this->GetNominalGlyphWidth(this);
  }
  else
  {
    v3 = this->CompactedFontValue.GlyphInfoTablePos + 8 * glyphIndex + 2;
    v4 = this->CompactedFontValue.GlyphInfoTablePos + 8 * glyphIndex + 3;
    return (float)((float)((__int16)(this->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)v4 >> 12][v4 & 0xFFF] << 8) | this->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)v3 >> 12][v3 & 0xFFF])
                 * 1024.0)
         / (float)(int)this->CompactedFontValue.NominalSize;
  }
  return result;
}

Scaleform::String *__fastcall Scaleform::GFx::FontData::GetCharRanges(
        Scaleform::GFx::FontData *this,
        Scaleform::String *result)
{
  unsigned __int64 v2; // r10
  Scaleform::HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> > *p_CodeTable; // r8
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rcx
  unsigned __int64 Capacity; // r11
  __m128i v7; // xmm0
  unsigned __int64 SizeMask; // rdx
  unsigned __int64 v9; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v10; // rcx
  __int16 v11; // r14
  unsigned __int16 v12; // si
  unsigned __int64 v13; // rbx
  char v14; // di
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  int v17; // er9
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r8
  unsigned int *v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r8
  unsigned int *v24; // rcx
  __m128i v26; // [rsp+20h] [rbp-30h] BYREF
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+30h]

  v2 = 0i64;
  p_CodeTable = &this->CodeTable;
  pTable = this->CodeTable.mHash.pTable;
  memset(&pheapAddr, 0, sizeof(pheapAddr));
  Capacity = 0i64;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v9 = 0i64;
    v10 = pTable + 1;
    do
    {
      if ( v10->EntryCount != -2i64 )
        break;
      ++v9;
      ++v10;
    }
    while ( v9 <= SizeMask );
    v26.m128i_i64[0] = (__int64)p_CodeTable;
    v26.m128i_i64[1] = v9;
    v7 = _mm_load_si128(&v26);
  }
  else
  {
    v7 = 0i64;
  }
  v26 = v7;
  v11 = 0;
  v12 = 0;
  v13 = v7.m128i_u64[1];
LABEL_8:
  v14 = 0;
  while ( v7.m128i_i64[0] )
  {
    v15 = *(_QWORD *)v7.m128i_i64[0];
    if ( !*(_QWORD *)v7.m128i_i64[0] )
      break;
    v16 = *(_QWORD *)(v15 + 8);
    if ( (__int64)v13 > (__int64)v16 )
      break;
    if ( v14 )
    {
      v17 = *(unsigned __int16 *)(v15 + 16 * v13 + 24);
      if ( v12 != v17 - 1 )
      {
        v19 = v2 + 1;
        LOWORD(v28) = v11;
        HIWORD(v28) = v12;
        if ( v2 + 1 >= v2 )
        {
          if ( v19 > Capacity )
          {
            v20 = v19 + (v19 >> 2);
LABEL_25:
            Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
              &pheapAddr,
              &pheapAddr,
              v20);
            Capacity = pheapAddr.Policy.Capacity;
          }
        }
        else if ( v19 < Capacity >> 1 )
        {
          v20 = v2 + 1;
          goto LABEL_25;
        }
        v2 = v19;
        pheapAddr.Size = v19;
        v21 = &pheapAddr.Data[v19 - 1];
        if ( v21 )
          *v21 = v28;
        goto LABEL_8;
      }
    }
    else
    {
      LOWORD(v17) = *(_WORD *)(v15 + 16 * v13 + 24);
      v14 = 1;
      v11 = v17;
    }
    ++v13;
    v12 = v17;
    if ( v13 <= v16 )
    {
      v18 = (_QWORD *)(v15 + 16 * (v13 + 1));
      do
      {
        if ( *v18 != -2i64 )
          break;
        ++v13;
        v18 += 2;
      }
      while ( v13 <= v16 );
    }
  }
  if ( v14 )
  {
    v22 = v2 + 1;
    LOWORD(v28) = v11;
    HIWORD(v28) = v12;
    if ( v2 + 1 >= v2 )
    {
      if ( v22 <= Capacity )
        goto LABEL_35;
      v23 = v22 + (v22 >> 2);
    }
    else
    {
      if ( v22 >= Capacity >> 1 )
        goto LABEL_35;
      v23 = v2 + 1;
    }
    Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &pheapAddr,
      &pheapAddr,
      v23);
LABEL_35:
    v2 = v22;
    pheapAddr.Size = v22;
    v24 = &pheapAddr.Data[v22 - 1];
    if ( v24 )
      *v24 = v28;
  }
  Scaleform::Alg::QuickSortSliced<Scaleform::Array<Scaleform::GFx::`anonymous namespace'::Range,2,Scaleform::ArrayDefaultPolicy>,Scaleform::GFx::`anonymous namespace'::RangeLess>(
    (Scaleform::Array<Scaleform::GFx::Range,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr,
    0i64,
    v2,
    (Scaleform::GFx::RangeLess)v28);
  Scaleform::GFx::BuildStringFromRanges(
    result,
    (const Scaleform::Array<Scaleform::GFx::Range,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr);
  if ( pheapAddr.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  return result;
}

Scaleform::String *__fastcall Scaleform::GFx::FontDataBound::GetCharRanges(
        Scaleform::GFx::FontDataBound *this,
        Scaleform::String *result)
{
  ((void (__fastcall *)(Scaleform::Render::Font *))this->pFont.pObject->GetCharRanges)(this->pFont.pObject);
  return result;
}

Scaleform::String *__fastcall Scaleform::GFx::FontDataCompactedGfx::GetCharRanges(
        Scaleform::GFx::FontDataCompactedGfx *this,
        Scaleform::String *result)
{
  Scaleform::GFx::GetCharRanges_Scaleform::GFx::FontDataCompactedGfx_(result, this);
  return result;
}

Scaleform::String *__fastcall Scaleform::GFx::FontDataCompactedSwf::GetCharRanges(
        Scaleform::GFx::FontDataCompactedSwf *this,
        Scaleform::String *result)
{
  Scaleform::GFx::GetCharRanges_Scaleform::GFx::FontDataCompactedSwf_(result, this);
  return result;
}

__int64 __fastcall Scaleform::GFx::FontData::GetCharValue(Scaleform::GFx::FontData *this, unsigned int glyphIndex)
{
  Scaleform::HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> > *p_CodeTable; // r8
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rcx
  __m128i v5; // xmm0
  unsigned __int64 SizeMask; // rdx
  unsigned __int64 v7; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  __m128i v14; // [rsp+0h] [rbp-18h] BYREF

  p_CodeTable = &this->CodeTable;
  pTable = this->CodeTable.mHash.pTable;
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
      ++v8;
    }
    while ( v7 <= SizeMask );
    v14.m128i_i64[0] = (__int64)p_CodeTable;
    v14.m128i_i64[1] = v7;
    v5 = _mm_load_si128(&v14);
  }
  else
  {
    v5 = 0i64;
  }
  v14 = v5;
  v9 = v5.m128i_i64[1];
  while ( v5.m128i_i64[0] )
  {
    v10 = *(_QWORD *)v5.m128i_i64[0];
    if ( !*(_QWORD *)v5.m128i_i64[0] )
      break;
    v11 = *(_QWORD *)(v10 + 8);
    if ( v9 > (__int64)v11 )
      break;
    if ( *(unsigned __int16 *)(v10 + 16 * v9 + 26) == glyphIndex )
      return *(unsigned __int16 *)(v10 + 16 * v9 + 24);
    if ( ++v9 <= v11 )
    {
      v12 = (_QWORD *)(v10 + 16 * (v9 + 1));
      do
      {
        if ( *v12 != -2i64 )
          break;
        ++v9;
        v12 += 2;
      }
      while ( v9 <= v11 );
    }
  }
  return 0xFFFFFFFFi64;
}

__int64 __fastcall Scaleform::GFx::FontDataBound::GetCharValue(Scaleform::GFx::FontDataBound *this, __int64 glyphIndex)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Font *, __int64))this->pFont.pObject->GetCharValue)(
           this->pFont.pObject,
           glyphIndex);
}

__int64 __fastcall Scaleform::GFx::FontDataCompactedGfx::GetCharValue(
        Scaleform::GFx::FontDataCompactedGfx *this,
        unsigned int glyphIndex)
{
  __int64 v2; // r8

  if ( glyphIndex >= this->CompactedFontValue.NumGlyphs )
    return 0xFFFFFFFFi64;
  v2 = this->CompactedFontValue.GlyphInfoTablePos + 8 * glyphIndex;
  return this->CompactedFontValue.Decoder.Data->Data[v2] | (this->CompactedFontValue.Decoder.Data->Data[(unsigned int)(v2 + 1)] << 8);
}

__int64 __fastcall Scaleform::GFx::FontDataCompactedSwf::GetCharValue(
        Scaleform::GFx::FontDataCompactedSwf *this,
        unsigned int glyphIndex)
{
  unsigned int v2; // er9

  if ( glyphIndex >= this->CompactedFontValue.NumGlyphs )
    return 0xFFFFFFFFi64;
  v2 = this->CompactedFontValue.GlyphInfoTablePos + 8 * glyphIndex;
  return this->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)v2 >> 12][v2 & 0xFFF] | (this->CompactedFontValue.Decoder.Data->Pages[(unsigned __int64)(v2 + 1) >> 12][(v2 + 1) & 0xFFF] << 8);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetGlyphBounds(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  unsigned int v5; // esi
  unsigned __int8 **Pages; // r10
  __int16 XMin; // r11
  __int16 XMax; // dx
  __int16 YMin; // r10
  __int16 YMax; // r9
  Scaleform::Render::Rect<float> *result; // rax
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > v12; // [rsp+20h] [rbp-38h] BYREF

  v12.Data.Data = this->Decoder.Data;
  v5 = this->GlyphInfoTablePos + 8 * glyphIndex;
  Pages = this->Decoder.Data->Pages;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadBounds(
    &v12,
    Pages[(unsigned __int64)(v5 + 4) >> 12][(v5 + 4) & 0xFFF] | ((Pages[(unsigned __int64)(v5 + 5) >> 12][(v5 + 5) & 0xFFF] | ((Pages[(unsigned __int64)(v5 + 6) >> 12][(v5 + 6) & 0xFFF] | (Pages[(unsigned __int64)(v5 + 7) >> 12][(v5 + 7) & 0xFFF] << 8)) << 8)) << 8));
  XMin = v12.XMin;
  XMax = v12.XMax;
  if ( v12.XMin >= v12.XMax || (YMin = v12.YMin, YMax = v12.YMax, v12.YMin >= v12.YMax) )
  {
    YMax = 0;
    YMin = 0;
    XMin = 0;
    XMax = this->Decoder.Data->Pages[(unsigned __int64)(v5 + 2) >> 12][(v5 + 2) & 0xFFF] | (this->Decoder.Data->Pages[(unsigned __int64)(v5 + 3) >> 12][(v5 + 3) & 0xFFF] << 8);
  }
  prect->x1 = (float)XMin;
  prect->x2 = (float)XMax;
  result = prect;
  prect->y1 = (float)YMin;
  prect->y2 = (float)YMax;
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphBounds(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
        unsigned int glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  unsigned int v5; // ebp
  unsigned __int8 *Data; // r9
  __int16 XMax; // r10
  __int16 XMin; // di
  __int16 YMin; // r11
  __int16 YMax; // r9
  Scaleform::Render::Rect<float> *result; // rax
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > v12; // [rsp+20h] [rbp-38h] BYREF

  v12.Data.Data = this->Decoder.Data;
  v5 = this->GlyphInfoTablePos + 8 * glyphIndex;
  Data = this->Decoder.Data->Data;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::ReadBounds(
    &v12,
    Data[v5 + 4] | ((Data[v5 + 5] | ((Data[v5 + 6] | (Data[v5 + 7] << 8)) << 8)) << 8));
  XMax = v12.XMax;
  XMin = v12.XMin;
  if ( v12.XMin >= v12.XMax || (YMin = v12.YMin, YMax = v12.YMax, v12.YMin >= v12.YMax) )
  {
    YMax = 0;
    YMin = 0;
    XMin = 0;
    XMax = this->Decoder.Data->Data[v5 + 2] | (this->Decoder.Data->Data[v5 + 3] << 8);
  }
  prect->x1 = (float)XMin;
  prect->x2 = (float)XMax;
  result = prect;
  prect->y1 = (float)YMin;
  prect->y2 = (float)YMax;
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::FontData::GetGlyphBounds(
        Scaleform::GFx::FontData *this,
        unsigned int glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  Scaleform::Render::Rect<float> *result; // rax
  Scaleform::GFx::FontData::AdvanceEntry *Data; // rcx
  float Advance; // xmm3_4
  float Height; // xmm2_4
  float v10; // xmm1_4
  float Top; // xmm0_4
  float v12; // xmm0_4
  Scaleform::GFx::ShapeDataBase *pObject; // rcx
  float x2; // xmm1_4
  float x1; // xmm3_4
  float y2; // xmm0_4
  float y1; // xmm2_4
  Scaleform::Render::Rect<float> r; // [rsp+20h] [rbp-38h] BYREF

  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    *(_QWORD *)&prect->x1 = 0i64;
    prect->x2 = this->GetGlyphWidth(this, glyphIndex) + prect->x1;
    prect->y2 = this->GetGlyphHeight(this, glyphIndex) + prect->y1;
    return prect;
  }
  if ( glyphIndex < this->AdvanceTable.Data.Size )
  {
    Data = this->AdvanceTable.Data.Data;
    Advance = (float)Data[glyphIndex].Width / 20.0;
    if ( Advance == 0.0 )
      Advance = Data[glyphIndex].Advance;
    Height = (float)Data[glyphIndex].Height;
    v10 = (float)Data[glyphIndex].Left / 20.0;
    prect->x1 = v10;
    Top = (float)Data[glyphIndex].Top;
    prect->x2 = Advance + v10;
    v12 = Top / 20.0;
    prect->y1 = v12;
    prect->y2 = (float)(Height / 20.0) + v12;
    return prect;
  }
  *(_QWORD *)&prect->x1 = 0i64;
  *(_QWORD *)&prect->x2 = 0i64;
  if ( glyphIndex >= this->Glyphs.Data.Size )
    return prect;
  pObject = this->Glyphs.Data.Data[glyphIndex].pObject;
  if ( !pObject )
    return prect;
  r = 0i64;
  Scaleform::GFx::ShapeDataBase::ComputeBound(pObject, &r);
  x2 = r.x2;
  x1 = r.x1;
  if ( r.x2 < r.x1 )
    return prect;
  y2 = r.y2;
  result = prect;
  y1 = r.y1;
  if ( r.y2 >= r.y1 )
  {
    prect->x1 = r.x1;
    prect->y1 = y1;
    prect->x2 = (float)(x2 - x1) + x1;
    prect->y2 = (float)(y2 - y1) + y1;
  }
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::FontDataBound::GetGlyphBounds(
        Scaleform::GFx::FontDataBound *this,
        __int64 glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  return this->pFont.pObject->GetGlyphBounds(this->pFont.pObject, glyphIndex, prect);
}

// attributes: thunk
Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::FontDataCompactedGfx::GetGlyphBounds(
        Scaleform::GFx::FontDataCompactedGfx *this,
        unsigned int glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  return Scaleform::GFx::GetGlyphBounds_Scaleform::GFx::FontDataCompactedGfx_(this, glyphIndex, prect);
}

// attributes: thunk
Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::FontDataCompactedSwf::GetGlyphBounds(
        Scaleform::GFx::FontDataCompactedSwf *this,
        unsigned int glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  return Scaleform::GFx::GetGlyphBounds_Scaleform::GFx::FontDataCompactedSwf_(this, glyphIndex, prect);
}

float __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetGlyphHeight(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int glyphIndex)
{
  unsigned int v2; // er8
  unsigned int v3; // er11
  unsigned int v4; // er10
  unsigned int v5; // er9
  unsigned int v6; // edx
  unsigned __int8 **Pages; // r8
  __int16 YMin; // dx
  __int16 YMax; // ax
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > v11; // [rsp+20h] [rbp-38h] BYREF

  v2 = this->GlyphInfoTablePos + 8 * glyphIndex + 4;
  v11.Data.Data = this->Decoder.Data;
  v3 = v2;
  v4 = v2 + 1;
  v5 = v2 + 2;
  v6 = v2 + 3;
  Pages = v11.Data.Data->Pages;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadBounds(
    &v11,
    Pages[(unsigned __int64)v3 >> 12][v3 & 0xFFF] | ((Pages[(unsigned __int64)v4 >> 12][v4 & 0xFFF] | ((Pages[(unsigned __int64)v5 >> 12][v5 & 0xFFF] | (Pages[(unsigned __int64)v6 >> 12][v6 & 0xFFF] << 8)) << 8)) << 8));
  if ( v11.XMin >= v11.XMax || (YMin = v11.YMin, YMax = v11.YMax, v11.YMin >= v11.YMax) )
  {
    YMax = 0;
    YMin = 0;
  }
  return (float)(YMax - YMin);
}

float __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphHeight(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
        unsigned int glyphIndex)
{
  __int64 v2; // r9
  __int16 YMin; // dx
  __int16 YMax; // ax
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > v6; // [rsp+20h] [rbp-38h] BYREF

  v2 = this->GlyphInfoTablePos + 8 * glyphIndex + 4;
  v6.Data.Data = this->Decoder.Data;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::ReadBounds(
    &v6,
    v6.Data.Data->Data[v2] | ((v6.Data.Data->Data[(unsigned int)(v2 + 1)] | ((v6.Data.Data->Data[(unsigned int)(v2 + 2)] | (v6.Data.Data->Data[(unsigned int)(v2 + 3)] << 8)) << 8)) << 8));
  if ( v6.XMin >= v6.XMax || (YMin = v6.YMin, YMax = v6.YMax, v6.YMin >= v6.YMax) )
  {
    YMax = 0;
    YMin = 0;
  }
  return (float)(YMax - YMin);
}

float __fastcall Scaleform::GFx::FontData::GetGlyphHeight(Scaleform::GFx::FontData *this, __int64 glyphIndex)
{
  unsigned __int64 Size; // rax
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF || (Size = this->AdvanceTable.Data.Size) == 0 )
  {
    ((void (__fastcall *)(Scaleform::GFx::FontData *, __int64, Scaleform::GFx::FontData *))this->GetNominalGlyphHeight)(
      this,
      glyphIndex,
      this);
  }
  else if ( (unsigned int)glyphIndex >= Size )
  {
    return 0.0;
  }
  else
  {
    return (float)this->AdvanceTable.Data.Data[(unsigned int)glyphIndex].Height / 20.0;
  }
  return result;
}

void __fastcall Scaleform::GFx::FontDataBound::GetGlyphHeight(Scaleform::GFx::FontDataBound *this, __int64 glyphIndex)
{
  this->pFont.pObject->GetGlyphHeight(this->pFont.pObject, glyphIndex);
}

float __fastcall Scaleform::GFx::FontDataCompactedGfx::GetGlyphHeight(
        Scaleform::GFx::FontDataCompactedGfx *this,
        unsigned int glyphIndex)
{
  float NominalSize; // xmm1_4
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    this->GetNominalGlyphHeight(this);
  }
  else
  {
    NominalSize = (float)(int)this->CompactedFontValue.NominalSize;
    return (float)(Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphHeight(
                     &this->CompactedFontValue,
                     (unsigned __int16)glyphIndex)
                 * 1024.0)
         / NominalSize;
  }
  return result;
}

float __fastcall Scaleform::GFx::FontDataCompactedSwf::GetGlyphHeight(
        Scaleform::GFx::FontDataCompactedSwf *this,
        unsigned int glyphIndex)
{
  signed int NominalSize; // ebx
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF || glyphIndex >= this->CompactedFontValue.NumGlyphs )
  {
    this->GetNominalGlyphHeight(this);
  }
  else
  {
    NominalSize = this->CompactedFontValue.NominalSize;
    return (float)(Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetGlyphHeight(
                     &this->CompactedFontValue,
                     glyphIndex)
                 * 1024.0)
         / (float)NominalSize;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetGlyphIndex(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned __int16 code)
{
  signed int v2; // er11
  signed int v3; // er8
  unsigned int GlyphInfoTablePos; // esi
  unsigned int v5; // ebx
  unsigned int v6; // er10
  unsigned int v7; // edx

  v2 = 0;
  v3 = this->NumGlyphs - 1;
  if ( v3 < 0 )
    return 0xFFFFFFFFi64;
  v5 = code;
  while ( 1 )
  {
    v6 = (v2 + v3) / 2;
    GlyphInfoTablePos = this->GlyphInfoTablePos;
    v7 = this->Decoder.Data->Pages[(unsigned __int64)(GlyphInfoTablePos + 8 * v6) >> 12][(GlyphInfoTablePos + 8 * v6) & 0xFFF] | (this->Decoder.Data->Pages[(unsigned __int64)(GlyphInfoTablePos + 8 * v6 + 1) >> 12][((_WORD)GlyphInfoTablePos + 8 * (_WORD)v6 + 1) & 0xFFF] << 8);
    if ( v7 == v5 )
      break;
    if ( v5 >= v7 )
      v2 = v6 + 1;
    else
      v3 = v6 - 1;
    if ( v2 > v3 )
      return 0xFFFFFFFFi64;
  }
  return v6;
}

__int64 __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphIndex(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
        unsigned __int16 code)
{
  int v2; // er11
  signed int v3; // er8
  __int64 result; // rax
  unsigned int v5; // er10

  v2 = 0;
  v3 = this->NumGlyphs - 1;
  if ( v3 < 0 )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    result = (unsigned int)((v2 + v3) / 2);
    v5 = this->Decoder.Data->Data[(unsigned int)(this->GlyphInfoTablePos + 8 * result)] | (this->Decoder.Data->Data[(unsigned int)(this->GlyphInfoTablePos + 8 * result + 1)] << 8);
    if ( v5 == code )
      break;
    if ( code >= v5 )
      v2 = result + 1;
    else
      v3 = result - 1;
    if ( v2 > v3 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::FontData::GetGlyphIndex(Scaleform::GFx::FontData *this, unsigned __int16 code)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // r9
  unsigned __int64 SizeMask; // rdx
  __int64 v5; // r10
  __int64 EntryCount; // r8
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v7; // rcx
  __int64 p_SizeMask; // rax

  pTable = this->CodeTable.mHash.pTable;
  if ( !pTable )
    return 0xFFFFFFFFi64;
  SizeMask = pTable->SizeMask;
  v5 = SizeMask & code;
  EntryCount = v5;
  v7 = &pTable[v5 + 1];
  if ( v7->EntryCount == -2i64 || (SizeMask & LOWORD(v7->SizeMask)) != v5 )
    return 0xFFFFFFFFi64;
  while ( (pTable->SizeMask & LOWORD(v7->SizeMask)) != v5 || LOWORD(v7->SizeMask) != code )
  {
    EntryCount = v7->EntryCount;
    if ( v7->EntryCount == -1i64 )
      return 0xFFFFFFFFi64;
    v7 = &pTable[EntryCount + 1];
  }
  if ( EntryCount >= 0 && (p_SizeMask = (__int64)&pTable[EntryCount + 1].SizeMask) != 0 )
    return *(unsigned __int16 *)(p_SizeMask + 2);
  else
    return 0xFFFFFFFFi64;
}

__int64 __fastcall Scaleform::GFx::FontDataBound::GetGlyphIndex(Scaleform::GFx::FontDataBound *this, __int64 code)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Font *, __int64))this->pFont.pObject->GetGlyphIndex)(
           this->pFont.pObject,
           code);
}

__int64 __fastcall Scaleform::GFx::FontDataCompactedGfx::GetGlyphIndex(
        Scaleform::GFx::FontDataCompactedGfx *this,
        unsigned __int16 code)
{
  return Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphIndex(
           &this->CompactedFontValue,
           code);
}

__int64 __fastcall Scaleform::GFx::FontDataCompactedSwf::GetGlyphIndex(
        Scaleform::GFx::FontDataCompactedSwf *this,
        unsigned __int16 code)
{
  return Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetGlyphIndex(
           &this->CompactedFontValue,
           code);
}

__int64 __fastcall Scaleform::GFx::FontDataBound::GetGlyphRaster(
        Scaleform::GFx::FontDataBound *this,
        __int64 glyphIndex,
        __int64 hintedSize,
        Scaleform::Render::GlyphRaster *raster)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Font *, __int64, __int64, Scaleform::Render::GlyphRaster *))this->pFont.pObject->GetGlyphRaster)(
           this->pFont.pObject,
           glyphIndex,
           hintedSize,
           raster);
}

void __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphShape(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
        unsigned int glyphIndex,
        Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *glyph)
{
  __int64 v3; // r10
  unsigned __int8 *Data; // r9
  __int64 Pos; // rcx
  unsigned __int8 *v7; // r8
  unsigned int v8; // edx

  v3 = this->GlyphInfoTablePos + 8 * glyphIndex + 4;
  Data = this->Decoder.Data->Data;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::ReadBounds(
    glyph,
    Data[v3] | ((Data[(unsigned int)(v3 + 1)] | ((Data[(unsigned int)(v3 + 2)] | (Data[(unsigned int)(v3 + 3)] << 8)) << 8)) << 8));
  Pos = glyph->Pos;
  v7 = glyph->Data.Data->Data;
  v8 = v7[Pos];
  if ( (v8 & 1) != 0 )
  {
    glyph->NumContours = (v8 >> 1) | (v7[(unsigned int)(Pos + 1)] << 7);
    glyph->Pos += 2;
  }
  else
  {
    glyph->NumContours = v8 >> 1;
    ++glyph->Pos;
  }
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::readPathHeader(glyph);
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Concurrency::details::VirtualProcessorRoot *this)
{
  return this->m_executionResource.m_nodeId;
}

__int64 __fastcall Scaleform::GFx::FontDataBound::GetGlyphShapeCount(Scaleform::GFx::FontDataBound *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Font *))this->pFont.pObject->GetGlyphShapeCount)(this->pFont.pObject);
}

__int64 __fastcall Scaleform::GFx::FontDataCompactedGfx::GetGlyphShapeCount(Scaleform::GFx::AS3::IntervalTimer *this)
{
  return (unsigned int)this->Id;
}

__int64 __fastcall Scaleform::GFx::FontDataCompactedSwf::GetGlyphShapeCount(Scaleform::GFx::FontDataCompactedSwf *this)
{
  return this->NumGlyphs;
}

float __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetGlyphWidth(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int glyphIndex)
{
  unsigned int v3; // edi
  unsigned __int8 **Pages; // r10
  __int16 XMin; // r10
  __int16 XMax; // r9
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > v8; // [rsp+20h] [rbp-38h] BYREF

  v8.Data.Data = this->Decoder.Data;
  v3 = this->GlyphInfoTablePos + 8 * glyphIndex;
  Pages = this->Decoder.Data->Pages;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadBounds(
    &v8,
    Pages[(unsigned __int64)(v3 + 4) >> 12][(v3 + 4) & 0xFFF] | ((Pages[(unsigned __int64)(v3 + 5) >> 12][(v3 + 5) & 0xFFF] | ((Pages[(unsigned __int64)(v3 + 6) >> 12][(v3 + 6) & 0xFFF] | (Pages[(unsigned __int64)(v3 + 7) >> 12][(v3 + 7) & 0xFFF] << 8)) << 8)) << 8));
  XMin = v8.XMin;
  XMax = v8.XMax;
  if ( v8.XMin >= v8.XMax || v8.YMin >= v8.YMax )
  {
    XMin = 0;
    XMax = this->Decoder.Data->Pages[(unsigned __int64)(v3 + 2) >> 12][(v3 + 2) & 0xFFF] | (this->Decoder.Data->Pages[(unsigned __int64)(v3 + 3) >> 12][(v3 + 3) & 0xFFF] << 8);
  }
  return (float)(XMax - XMin);
}

float __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphWidth(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
        unsigned int glyphIndex)
{
  unsigned int v3; // edi
  unsigned __int8 *Data; // r8
  __int16 XMin; // r10
  __int16 XMax; // r9
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > v8; // [rsp+20h] [rbp-38h] BYREF

  v8.Data.Data = this->Decoder.Data;
  v3 = this->GlyphInfoTablePos + 8 * glyphIndex;
  Data = this->Decoder.Data->Data;
  Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::ReadBounds(
    &v8,
    Data[v3 + 4] | ((Data[v3 + 5] | ((Data[v3 + 6] | (Data[v3 + 7] << 8)) << 8)) << 8));
  XMin = v8.XMin;
  XMax = v8.XMax;
  if ( v8.XMin >= v8.XMax || v8.YMin >= v8.YMax )
  {
    XMin = 0;
    XMax = this->Decoder.Data->Data[v3 + 2] | (this->Decoder.Data->Data[v3 + 3] << 8);
  }
  return (float)(XMax - XMin);
}

float __fastcall Scaleform::GFx::FontData::GetGlyphWidth(Scaleform::GFx::FontData *this, __int64 glyphIndex)
{
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    ((void (__fastcall *)(Scaleform::GFx::FontData *, __int64, Scaleform::GFx::FontData *))this->GetNominalGlyphWidth)(
      this,
      glyphIndex,
      this);
  }
  else if ( (unsigned int)glyphIndex >= this->AdvanceTable.Data.Size
         || (result = (float)this->AdvanceTable.Data.Data[(unsigned int)glyphIndex].Width / 20.0, result == 0.0) )
  {
    ((void (__fastcall *)(Scaleform::GFx::FontData *))this->GetAdvance)(this);
  }
  return result;
}

void __fastcall Scaleform::GFx::FontDataBound::GetGlyphWidth(Scaleform::GFx::FontDataBound *this, __int64 glyphIndex)
{
  this->pFont.pObject->GetGlyphWidth(this->pFont.pObject, glyphIndex);
}

float __fastcall Scaleform::GFx::FontDataCompactedGfx::GetGlyphWidth(
        Scaleform::GFx::FontDataCompactedGfx *this,
        unsigned int glyphIndex)
{
  float NominalSize; // xmm1_4
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    this->GetNominalGlyphWidth(this);
  }
  else
  {
    NominalSize = (float)(int)this->CompactedFontValue.NominalSize;
    return (float)(Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetGlyphWidth(
                     &this->CompactedFontValue,
                     (unsigned __int16)glyphIndex)
                 * 1024.0)
         / NominalSize;
  }
  return result;
}

float __fastcall Scaleform::GFx::FontDataCompactedSwf::GetGlyphWidth(
        Scaleform::GFx::FontDataCompactedSwf *this,
        unsigned int glyphIndex)
{
  signed int NominalSize; // ebx
  float result; // xmm0_4

  if ( (_WORD)glyphIndex == 0xFFFF || glyphIndex >= this->CompactedFontValue.NumGlyphs )
  {
    this->GetNominalGlyphWidth(this);
  }
  else
  {
    NominalSize = this->CompactedFontValue.NominalSize;
    return (float)(Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetGlyphWidth(
                     &this->CompactedFontValue,
                     glyphIndex)
                 * 1024.0)
         / (float)NominalSize;
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::GFx::GFxSystemFontResourceKeyInterface::GetHashCode(
        Scaleform::GFx::GFxSystemFontResourceKeyInterface *this,
        void *hdata)
{
  return Scaleform::String::BernsteinHashFunctionCIS(
           (const void *)((*((_QWORD *)hdata + 3) & 0xFFFFFFFFFFFFFFFCui64) + 12),
           *(_QWORD *)(*((_QWORD *)hdata + 3) & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
           0x1505ui64) ^ *((_QWORD *)hdata + 2) ^ (*((_QWORD *)hdata + 2) >> 7) ^ *((unsigned int *)hdata + 8);
}

float __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetKerningAdjustment(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int lastCode,
        unsigned int thisCode)
{
  signed int v4; // er10
  int v5; // er11
  unsigned int KerningTablePos; // er13
  int v7; // ebx
  unsigned int v8; // er15
  unsigned int v9; // esi
  unsigned int v10; // er8
  bool v11; // cf

  v4 = this->KerningTableSize - 1;
  v5 = 0;
  if ( v4 < 0 )
    return 0.0;
  KerningTablePos = this->KerningTablePos;
  while ( 1 )
  {
    v7 = (v5 + v4) / 2;
    v8 = KerningTablePos + 6 * v7;
    v9 = this->Decoder.Data->Pages[(unsigned __int64)v8 >> 12][((_WORD)KerningTablePos + 6 * (_WORD)v7) & 0xFFF] | (this->Decoder.Data->Pages[(unsigned __int64)(v8 + 1) >> 12][(v8 + 1) & 0xFFF] << 8);
    v10 = this->Decoder.Data->Pages[(unsigned __int64)(v8 + 2) >> 12][(v8 + 2) & 0xFFF] | (this->Decoder.Data->Pages[(unsigned __int64)(v8 + 3) >> 12][((_WORD)KerningTablePos + 6 * (_WORD)v7 + 3) & 0xFFF] << 8);
    v11 = lastCode < v9;
    if ( lastCode == v9 )
      break;
LABEL_6:
    if ( v11 )
      v4 = v7 - 1;
    else
      v5 = v7 + 1;
    if ( v5 > v4 )
      return 0.0;
  }
  if ( v10 != thisCode )
  {
    v11 = thisCode < v10;
    goto LABEL_6;
  }
  return (float)(__int16)((this->Decoder.Data->Pages[(unsigned __int64)(v8 + 5) >> 12][(v8 + 5) & 0xFFF] << 8) | this->Decoder.Data->Pages[(unsigned __int64)(v8 + 4) >> 12][(v8 + 4) & 0xFFF]);
}

float __fastcall Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetKerningAdjustment(
        Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
        unsigned int lastCode,
        unsigned int thisCode)
{
  signed int v4; // er9
  int v5; // er11
  int v6; // er10
  __int64 v7; // r14
  unsigned int v8; // ebx
  unsigned int v9; // er8
  bool v10; // cf

  v4 = this->KerningTableSize - 1;
  v5 = 0;
  if ( v4 < 0 )
    return 0.0;
  while ( 1 )
  {
    v6 = (v5 + v4) / 2;
    v7 = this->KerningTablePos + 6 * v6;
    v8 = this->Decoder.Data->Data[v7] | (this->Decoder.Data->Data[(unsigned int)(v7 + 1)] << 8);
    v9 = this->Decoder.Data->Data[(unsigned int)(v7 + 2)] | (this->Decoder.Data->Data[(unsigned int)(v7 + 3)] << 8);
    v10 = lastCode < v8;
    if ( lastCode == v8 )
      break;
LABEL_5:
    if ( v10 )
      v4 = v6 - 1;
    else
      v5 = v6 + 1;
    if ( v5 > v4 )
      return 0.0;
  }
  if ( v9 != thisCode )
  {
    v10 = thisCode < v9;
    goto LABEL_5;
  }
  return (float)(__int16)((this->Decoder.Data->Data[(unsigned int)(v7 + 5)] << 8) | this->Decoder.Data->Data[(unsigned int)(v7 + 4)]);
}

float __fastcall Scaleform::GFx::FontData::GetKerningAdjustment(
        Scaleform::GFx::FontData *this,
        unsigned int LastCode,
        unsigned int code)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *pTable; // r10
  __int16 v4; // r11
  __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  unsigned __int64 *v14; // rcx
  float *v15; // rcx
  __int64 v17; // [rsp+8h] [rbp+8h]
  __int16 v18; // [rsp+10h] [rbp+10h]
  __int16 v19; // [rsp+12h] [rbp+12h]

  pTable = this->KerningPairs.mHash.pTable;
  v4 = code;
  v19 = code;
  v5 = LastCode;
  v18 = LastCode;
  if ( !pTable )
    return 0.0;
  v6 = 5381i64;
  v7 = 4i64;
  do
  {
    v8 = *((unsigned __int8 *)&v17 + v7-- + 7);
    v9 = 65599 * v6 + v8;
    v6 = v9;
  }
  while ( v7 );
  v10 = v9 & pTable->SizeMask;
  v11 = v10;
  v12 = v10 + 2 * (v10 + 1);
  v13 = *(&pTable->EntryCount + v12) == -2i64;
  v14 = &pTable->EntryCount + v12;
  if ( v13 || v14[1] != v10 )
    return 0.0;
  while ( v14[1] != v10 || *((_WORD *)v14 + 8) != v5 || *((_WORD *)v14 + 9) != v4 )
  {
    v11 = *v14;
    if ( *v14 == -1i64 )
      return 0.0;
    v14 = &pTable[v11 + 1].EntryCount + v11;
  }
  if ( v11 >= 0 && (v15 = (float *)(&pTable[v11 + 2].EntryCount + v11)) != 0i64 )
    return v15[1];
  else
    return 0.0;
}

void __fastcall Scaleform::GFx::FontDataBound::GetKerningAdjustment(
        Scaleform::GFx::FontDataBound *this,
        __int64 lastCode,
        __int64 thisCode)
{
  this->pFont.pObject->GetKerningAdjustment(this->pFont.pObject, lastCode, thisCode);
}

float __fastcall Scaleform::GFx::FontDataCompactedGfx::GetKerningAdjustment(
        Scaleform::GFx::FontDataCompactedGfx *this,
        unsigned int lastCode,
        unsigned int thisCode)
{
  return (float)(Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::GetKerningAdjustment(
                   &this->CompactedFontValue,
                   lastCode,
                   thisCode)
               * 1024.0)
       / (float)(int)this->CompactedFontValue.NominalSize;
}

float __fastcall Scaleform::GFx::FontDataCompactedSwf::GetKerningAdjustment(
        Scaleform::GFx::FontDataCompactedSwf *this,
        unsigned int lastCode,
        unsigned int thisCode)
{
  return (float)(Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::GetKerningAdjustment(
                   &this->CompactedFontValue,
                   lastCode,
                   thisCode)
               * 1024.0)
       / (float)(int)this->CompactedFontValue.NominalSize;
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::FontResource::GetKey(
        Scaleform::GFx::MovieDataDef *this,
        Scaleform::GFx::ResourceKey *result)
{
  Scaleform::GFx::ResourceKey::ResourceKey(result, &this->mResourceKey);
  return result;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

Concurrency::details::SchedulerBase *__fastcall Scaleform::GFx::AS3::XMLSupportImpl::GetClassTraitsXML(
        Concurrency::details::ContextBase *this)
{
  return this->m_pScheduler;
}

const char *__fastcall Scaleform::GFx::FontDataBound::GetName(Scaleform::GFx::FontDataBound *this)
{
  return this->pFont.pObject->GetName(this->pFont.pObject);
}

char *__fastcall Scaleform::GFx::FontDataCompactedGfx::GetName(Scaleform::GFx::FontDataCompactedGfx *this)
{
  return this->CompactedFontValue.Name.Data;
}

Scaleform::GFx::DisplayObject *__fastcall Scaleform::GFx::FontDataCompactedSwf::GetName(
        Scaleform::GFx::AS3::Instances::fl_display::DisplayObject *this)
{
  return this->pDispObj.pObject;
}

void __fastcall Scaleform::GFx::FontDataBound::GetNominalGlyphHeight(Scaleform::GFx::FontDataBound *this)
{
  this->pFont.pObject->GetNominalGlyphHeight(this->pFont.pObject);
}

void __fastcall Scaleform::GFx::FontDataBound::GetNominalGlyphWidth(Scaleform::GFx::FontDataBound *this)
{
  this->pFont.pObject->GetNominalGlyphWidth(this->pFont.pObject);
}

Scaleform::GFx::ShapeDataBase *__fastcall Scaleform::GFx::FontData::GetPermanentGlyphShape(
        Scaleform::GFx::FontData *this,
        unsigned int glyphIndex)
{
  if ( glyphIndex >= this->Glyphs.Data.Size )
    return 0i64;
  else
    return this->Glyphs.Data.Data[glyphIndex].pObject;
}

const Scaleform::Render::ShapeDataInterface *__fastcall Scaleform::GFx::FontDataBound::GetPermanentGlyphShape(
        Scaleform::GFx::FontDataBound *this,
        __int64 glyphIndex)
{
  return this->pFont.pObject->GetPermanentGlyphShape(this->pFont.pObject, glyphIndex);
}

__int64 __fastcall Scaleform::GFx::FontResource::GetResourceTypeCode(Scaleform::GFx::FontResource *this)
{
  return 512i64;
}

__int64 __fastcall Scaleform::GFx::FontDataBound::GetTemporaryGlyphShape(
        Scaleform::GFx::FontDataBound *this,
        __int64 glyphIndex,
        __int64 hintedSize,
        Scaleform::Render::GlyphShape *shape)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Font *, __int64, __int64, Scaleform::Render::GlyphShape *))this->pFont.pObject->GetTemporaryGlyphShape)(
           this->pFont.pObject,
           glyphIndex,
           hintedSize,
           shape);
}

char __fastcall Scaleform::GFx::FontDataCompactedGfx::GetTemporaryGlyphShape(
        Scaleform::GFx::FontDataCompactedGfx *this,
        unsigned int glyphIndex,
        unsigned int hintedSize,
        Scaleform::Render::GlyphShape *shape)
{
  return Scaleform::GFx::GetGlyphShape_Scaleform::GFx::FontDataCompactedGfx_(this, glyphIndex, shape);
}

char __fastcall Scaleform::GFx::FontDataCompactedSwf::GetTemporaryGlyphShape(
        Scaleform::GFx::FontDataCompactedSwf *this,
        unsigned int glyphIndex,
        unsigned int hintedSize,
        Scaleform::Render::GlyphShape *shape)
{
  return Scaleform::GFx::GetGlyphShape_Scaleform::GFx::FontDataCompactedSwf_(this, glyphIndex, shape);
}

const Scaleform::Render::TextureGlyph *__fastcall Scaleform::GFx::FontDataBound::GetTextureGlyph(
        Scaleform::GFx::FontDataBound *this,
        unsigned int glyphIndex)
{
  Scaleform::GFx::TextureGlyphData *pObject; // rcx

  pObject = this->pTGData.pObject;
  if ( pObject && glyphIndex < LODWORD(pObject->TextureGlyphs.Data.Size) )
    return Scaleform::GFx::TextureGlyphData::GetTextureGlyph(pObject, glyphIndex);
  else
    return 0i64;
}

Scaleform::Render::TextureGlyph *__fastcall Scaleform::GFx::TextureGlyphData::GetTextureGlyph(
        Scaleform::GFx::TextureGlyphData *this,
        unsigned int glyphIndex)
{
  if ( glyphIndex < this->TextureGlyphs.Data.Size )
    return &this->TextureGlyphs.Data.Data[(unsigned __int64)glyphIndex];
  if ( dword_140A736F4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A736F4);
    if ( dword_140A736F4 == -1 )
    {
      dummyTextureGlyph.__vftable = (Scaleform::Render::TextureGlyph_vtbl *)&Scaleform::Render::TextureGlyph::`vftable';
      atexit(Scaleform::GFx::TextureGlyphData::GetTextureGlyph_::_5_::_dynamic_atexit_destructor_for__dummyTextureGlyph__);
      Init_thread_footer(&dword_140A736F4);
    }
  }
  return &dummyTextureGlyph;
}

Scaleform::GFx::AS3::ClassTraits::fl::XMLList *__fastcall Scaleform::GFx::MovieImpl::GetHeap(
        Scaleform::GFx::AS3::XMLSupportImpl *this)
{
  return this->TraitsXMLList.pObject;
}

float __fastcall Scaleform::GFx::FontData::GetTextureGlyphHeight(Scaleform::GFx::FontData *this)
{
  Scaleform::GFx::TextureGlyphData *pObject; // rax

  pObject = this->pTGData.pObject;
  if ( pObject )
    return (double)pObject->PackTextureConfig.NominalSize * 1024.0 / 1536.0;
  else
    return 0.0;
}

void __fastcall Scaleform::GFx::FontDataBound::GetTextureGlyphHeight(Scaleform::GFx::FontDataBound *this)
{
  this->pFont.pObject->GetTextureGlyphHeight(this->pFont.pObject);
}

bool __fastcall Scaleform::GFx::FontData::HasVectorOrRasterGlyphs(Scaleform::GFx::FontData *this)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rax

  pTable = this->CodeTable.mHash.pTable;
  return pTable && pTable->EntryCount != 0;
}

__int64 __fastcall Scaleform::GFx::FontDataBound::HasVectorOrRasterGlyphs(Scaleform::GFx::FontDataBound *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Font *))this->pFont.pObject->HasVectorOrRasterGlyphs)(this->pFont.pObject);
}

bool __fastcall Scaleform::GFx::FontDataCompactedGfx::HasVectorOrRasterGlyphs(
        Scaleform::GFx::FontDataCompactedGfx *this)
{
  return this->CompactedFontValue.NumGlyphs != 0;
}

bool __fastcall Scaleform::GFx::FontDataCompactedSwf::HasVectorOrRasterGlyphs(
        Scaleform::GFx::FontDataCompactedSwf *this)
{
  return this->NumGlyphs != 0;
}

__int64 __fastcall Scaleform::GFx::FontDataBound::IsHintedRasterGlyph(
        Scaleform::GFx::FontDataBound *this,
        __int64 glyphIndex,
        __int64 hintedSize)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Font *, __int64, __int64))this->pFont.pObject->IsHintedRasterGlyph)(
           this->pFont.pObject,
           glyphIndex,
           hintedSize);
}

__int64 __fastcall Scaleform::GFx::FontDataBound::IsHintedVectorGlyph(
        Scaleform::GFx::FontDataBound *this,
        __int64 glyphIndex,
        __int64 hintedSize)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Font *, __int64, __int64))this->pFont.pObject->IsHintedVectorGlyph)(
           this->pFont.pObject,
           glyphIndex,
           hintedSize);
}

bool __fastcall Scaleform::GFx::GFxSystemFontResourceKeyInterface::KeyEquals(
        Scaleform::GFx::GFxSystemFontResourceKeyInterface *this,
        void *hdata,
        const Scaleform::GFx::ResourceKey *other)
{
  _QWORD *hKeyData; // r10
  unsigned __int8 *v6; // rax
  unsigned __int64 v7; // r8
  int v8; // ecx
  int v9; // edx

  if ( this != other->pKeyInterface )
    return 0;
  hKeyData = other->hKeyData;
  v6 = (unsigned __int8 *)((*((_QWORD *)hdata + 3) & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v7 = (hKeyData[3] & 0xFFFFFFFFFFFFFFFCui64) - (*((_QWORD *)hdata + 3) & 0xFFFFFFFFFFFFFFFCui64);
  do
  {
    v8 = v6[v7];
    v9 = *v6 - v8;
    if ( v9 )
      break;
    ++v6;
  }
  while ( v8 );
  return !v9 && *((_QWORD *)hdata + 2) == hKeyData[2] && *((_DWORD *)hdata + 8) == *((_DWORD *)hKeyData + 8);
}

void __fastcall Scaleform::GFx::FontData::Read(
        Scaleform::GFx::FontData *this,
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  Scaleform::GFx::TagType TagType; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  __int64 v10; // r9
  int v11; // ebx
  unsigned int *v12; // r15
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  signed __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int16 v18; // r8
  unsigned __int64 v19; // rbx
  int v20; // ecx
  unsigned __int64 v21; // r8
  int *v22; // rax
  unsigned __int64 v23; // r13
  Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // er12
  int v28; // ebx
  int v29; // eax
  unsigned int v30; // er13
  __int64 v31; // rax
  Scaleform::RefCountVImpl *v32; // rbx
  __int64 v33; // r13
  Scaleform::RefCountVImpl *v34; // rcx
  unsigned int UInt; // eax
  bool v36; // r15
  bool v37; // bl
  bool v38; // r14
  bool v39; // al
  int v40; // eax
  __int64 Pos; // rcx
  unsigned __int8 v42; // bl
  int v43; // eax
  __int64 v44; // rax
  unsigned int v45; // er12
  char *Name; // r8
  unsigned int v47; // eax
  const char *v48; // r9
  unsigned int DataSize; // eax
  unsigned int *Data; // r13
  unsigned int v51; // ecx
  unsigned int v52; // edx
  unsigned __int64 v53; // r15
  int v54; // eax
  unsigned __int8 *pBuffer; // r9
  __int64 v56; // rax
  int v57; // ebx
  unsigned int v58; // eax
  unsigned __int8 *v59; // rcx
  __int64 v60; // rax
  int v61; // ebx
  int v62; // eax
  unsigned __int64 v63; // rbx
  unsigned __int8 *v64; // r9
  __int64 v65; // rax
  int v66; // er12
  unsigned __int64 v67; // r8
  int *v68; // rax
  int v69; // eax
  unsigned __int8 *v70; // r9
  __int64 v71; // rax
  int v72; // er12
  unsigned int v73; // eax
  int v74; // eax
  unsigned __int64 v75; // rbx
  __int64 v76; // rax
  int v77; // er12
  unsigned __int64 v78; // r8
  int *v79; // rax
  int v80; // eax
  unsigned __int8 *v81; // rcx
  __int64 v82; // rax
  int v83; // er12
  unsigned __int64 Size; // rbx
  unsigned __int64 v85; // rdx
  Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *v86; // rcx
  unsigned __int64 v87; // rax
  unsigned int v88; // eax
  signed __int64 v89; // r15
  int v90; // ebx
  __int64 v91; // r12
  int v92; // eax
  __int64 v93; // rax
  Scaleform::RefCountVImpl *v94; // rbx
  __int64 v95; // rax
  Scaleform::RefCountVImpl *v96; // rcx
  float x2; // xmm2_4
  float x1; // xmm3_4
  Scaleform::GFx::FontData::AdvanceEntry *v99; // rcx
  float y2; // xmm0_4
  float y1; // xmm1_4
  Scaleform::ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy> *p_AdvanceTable; // rsi
  unsigned __int64 v103; // rdi
  unsigned __int64 v104; // r8
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy> *v105; // r15
  unsigned __int64 v106; // rsi
  Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *v107; // rcx
  unsigned __int64 i; // rdi
  Tween::EasingType v109; // xmm6_4
  int v110; // eax
  __int64 v111; // r8
  __int16 v112; // dx
  int v113; // eax
  __int64 v114; // r8
  __int16 v115; // dx
  int v116; // eax
  unsigned __int8 *v117; // rcx
  __int64 v118; // r8
  __int16 v119; // dx
  __int16 v120; // ax
  unsigned __int64 v121; // rdx
  unsigned __int64 v122; // r15
  __int64 v123; // rbx
  int v124; // eax
  Scaleform::GFx::FontData::AdvanceEntry *v125; // r12
  unsigned __int8 *v126; // rcx
  __int64 v127; // rax
  int v128; // edx
  unsigned __int64 v129; // rbx
  int v130; // eax
  __int64 v131; // rax
  unsigned int v132; // ebx
  int v133; // er12
  unsigned int v134; // edx
  unsigned int v135; // er8
  int v136; // edx
  unsigned int v137; // eax
  __int64 v138; // rdx
  unsigned __int16 v139; // r15
  int v140; // eax
  __int64 v141; // rdx
  unsigned __int16 v142; // bx
  unsigned int v143; // eax
  __int64 v144; // rdx
  int v145; // eax
  __int64 v146; // rdx
  int v147; // eax
  unsigned __int8 *v148; // rcx
  __int64 v149; // r8
  __int16 v150; // dx
  __int16 v151; // ax
  __int64 v152; // r8
  unsigned __int64 v153; // r9
  __int64 v154; // rdx
  char *v155; // r9
  unsigned __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // [rsp+20h] [rbp-E0h]
  char v159; // [rsp+30h] [rbp-D0h]
  bool v160; // [rsp+31h] [rbp-CFh]
  bool v161; // [rsp+32h] [rbp-CEh]
  int newSize; // [rsp+34h] [rbp-CCh]
  unsigned int newSize_4; // [rsp+38h] [rbp-C8h]
  int v164; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v165; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v166; // [rsp+48h] [rbp-B8h]
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> v167; // [rsp+50h] [rbp-B0h] BYREF
  int v168; // [rsp+68h] [rbp-98h]
  int v169; // [rsp+6Ch] [rbp-94h]
  unsigned int v170; // [rsp+70h] [rbp-90h]
  __int64 p_Glyphs; // [rsp+78h] [rbp-88h]
  float v172; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+88h] [rbp-78h] BYREF
  const Scaleform::GFx::TagInfo *v174; // [rsp+A0h] [rbp-60h]
  Scaleform::MemoryHeap *pHeap; // [rsp+A8h] [rbp-58h]
  Scaleform::GFx::LoadProcess *v176; // [rsp+B0h] [rbp-50h]
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy> *p_Data; // [rsp+B8h] [rbp-48h]
  Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeRef key; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::Render::Rect<float> r; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+E0h] [rbp-20h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  v174 = tagInfo;
  v176 = p;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  TagType = tagInfo->TagType;
  v159 = 1;
  pHeap = p->pLoadData.pObject->pHeap;
  if ( TagType != Tag_DefineFont )
  {
    if ( TagType == Tag_DefineFont2 )
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "reading DefineFont2: ");
    }
    else
    {
      if ( TagType != Tag_DefineFont3 )
        return;
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "reading DefineFont3: ");
    }
    UInt = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u);
    v36 = UInt != 0;
    v160 = UInt != 0;
    if ( UInt )
      this->Flags |= 0x2000u;
    else
      this->Flags &= ~0x2000u;
    v37 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
    v38 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
    v39 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
    if ( v37 )
    {
      this->Flags &= ~0x100u;
      this->Flags |= 0x200u;
    }
    else if ( v39 )
    {
      this->Flags &= ~0x200u;
      this->Flags |= 0x100u;
    }
    else
    {
      this->Flags &= 0xFFFFFCFF;
    }
    if ( v38 )
      this->Flags |= 0x8000u;
    else
      this->Flags &= ~0x8000u;
    v161 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
    if ( Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
      this->Flags |= 0x4000u;
    else
      this->Flags &= ~0x4000u;
    if ( Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
      this->Flags |= 1u;
    else
      this->Flags &= ~1u;
    if ( Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
      this->Flags |= 2u;
    else
      this->Flags &= ~2u;
    v40 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v40 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
    Pos = pAltStream->Stream.Pos;
    v42 = pAltStream->Stream.pBuffer[Pos];
    pAltStream->Stream.Pos = Pos + 1;
    this->Name = Scaleform::GFx::Stream::ReadStringWithLength(&pAltStream->Stream, p->pLoadData.pObject->pHeap);
    v43 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v43 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    v44 = pAltStream->Stream.Pos;
    v45 = pAltStream->Stream.pBuffer[v44] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
    pAltStream->Stream.Pos = v44 + 2;
    newSize = v45;
    if ( Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
    {
      Name = "(none)";
      if ( this->Name )
        Name = this->Name;
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  Name = %s, %d glyphs\n",
        Name,
        v45);
      v47 = this->Flags & 0x300;
      if ( v47 == 512 )
      {
        v48 = "ShiftJIS";
      }
      else
      {
        v48 = "ANSI";
        if ( v47 != 256 )
          v48 = "Unicode";
      }
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  HasLayout = %d, CodePage = %s, Italic = %d, Bold = %d\n",
        v36,
        v48,
        this->Flags & 1,
        (this->Flags >> 1) & 1);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  LangCode = %d\n",
        v42);
    }
    DataSize = pAltStream->Stream.DataSize;
    Data = 0i64;
    v51 = pAltStream->Stream.Pos;
    v52 = v51 + pAltStream->Stream.FilePos - DataSize;
    memset(&v167, 0, sizeof(v167));
    newSize_4 = v52;
    v53 = 0i64;
    if ( v45 )
    {
      v54 = DataSize - v51;
      pAltStream->Stream.UnusedBits = 0;
      if ( v161 )
      {
        if ( v54 < 4 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
        pBuffer = pAltStream->Stream.pBuffer;
        v56 = pAltStream->Stream.Pos;
        v57 = ((pBuffer[pAltStream->Stream.Pos + 1] | ((pBuffer[pAltStream->Stream.Pos + 2] | (pBuffer[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8) | pBuffer[v56];
        v58 = v56 + 4;
      }
      else
      {
        if ( v54 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v59 = pAltStream->Stream.pBuffer;
        v60 = pAltStream->Stream.Pos;
        v61 = v59[pAltStream->Stream.Pos + 1] << 8;
        LODWORD(v59) = v59[v60];
        v58 = v60 + 2;
        v57 = (unsigned int)v59 | v61;
      }
      pAltStream->Stream.Pos = v58;
      if ( v57 )
      {
        Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &v167,
          &v167,
          1ui64);
        Data = v167.Data;
        v53 = 1i64;
        v167.Size = 1i64;
        if ( v167.Data )
          *v167.Data = v57;
      }
      else
      {
        v159 = 0;
        v45 = 0;
      }
    }
    if ( v161 )
    {
      if ( v45 > 1 )
      {
        v166 = v45 - 1;
        do
        {
          v62 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
          pAltStream->Stream.UnusedBits = 0;
          if ( v62 < 4 )
            Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
          v63 = v53 + 1;
          v64 = pAltStream->Stream.pBuffer;
          v65 = pAltStream->Stream.Pos;
          v66 = ((v64[pAltStream->Stream.Pos + 1] | ((v64[pAltStream->Stream.Pos + 2] | (v64[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8) | v64[v65];
          pAltStream->Stream.Pos = v65 + 4;
          if ( v53 + 1 >= v53 )
          {
            if ( v63 > v167.Policy.Capacity )
            {
              v67 = v63 + (v63 >> 2);
              goto LABEL_102;
            }
          }
          else if ( v63 < v167.Policy.Capacity >> 1 )
          {
            v67 = v53 + 1;
LABEL_102:
            Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
              &v167,
              &v167,
              v67);
            Data = v167.Data;
          }
          v167.Size = ++v53;
          v68 = (int *)&Data[v63 - 1];
          if ( v68 )
            *v68 = v66;
          --v166;
        }
        while ( v166 );
      }
      v69 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v69 < 4 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
      v70 = pAltStream->Stream.pBuffer;
      v71 = pAltStream->Stream.Pos;
      v72 = ((v70[pAltStream->Stream.Pos + 1] | ((v70[pAltStream->Stream.Pos + 2] | (v70[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8) | v70[v71];
      v73 = v71 + 4;
LABEL_125:
      pAltStream->Stream.Pos = v73;
      Size = this->Glyphs.Data.Size;
      v169 = v72;
      v166 = (unsigned int)newSize;
      p_Data = &this->Glyphs.Data;
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &this->Glyphs.Data,
        &this->Glyphs,
        (unsigned int)newSize);
      v85 = (unsigned int)newSize;
      if ( (unsigned int)newSize > Size )
      {
        v86 = &this->Glyphs.Data.Data[Size];
        v87 = v166 - Size;
        if ( v166 != Size )
        {
          do
          {
            if ( v86 )
              v86->pObject = 0i64;
            ++v86;
            --v87;
          }
          while ( v87 );
        }
      }
      if ( v159 )
      {
        v88 = v174->TagType;
        if ( v174->TagType == Tag_DefineFont2 )
          v88 = 22;
        v170 = v88;
        if ( v160 )
        {
          Scaleform::ArrayData<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy>::Resize(
            &this->AdvanceTable.Data,
            (unsigned int)newSize);
          v85 = v166;
        }
        v168 = 0;
        v89 = 0i64;
        if ( v85 )
        {
          v90 = 1;
          v165 = 1;
          v91 = 0i64;
          while ( 1 )
          {
            Scaleform::GFx::Stream::SetPosition(&pAltStream->Stream, Data[v89] + newSize_4);
            v92 = v90 >= newSize ? v169 : Data[v89 + 1];
            p_Glyphs = (int)(v92 - Data[v89]);
            v93 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pHeap->Alloc)(pHeap, 32i64);
            v94 = (Scaleform::RefCountVImpl *)v93;
            if ( v93 )
            {
              *(_QWORD *)(v93 + 16) = 0i64;
              *(_QWORD *)v93 = &Scaleform::RefCountImplCore::`vftable';
              *(_QWORD *)v93 = &Scaleform::GFx::ConstShapeNoStyles::`vftable';
              *(_DWORD *)(v93 + 8) = 1;
              *(_BYTE *)(v93 + 24) = 0;
            }
            else
            {
              v94 = 0i64;
            }
            LOBYTE(v158) = 0;
            if ( !((unsigned __int8 (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::LoadProcess *, _QWORD, _QWORD, _DWORD))v94->__vftable[5].~RefCountImplCore)(
                    v94,
                    v176,
                    v170,
                    (unsigned int)p_Glyphs,
                    v158) )
              break;
            p_Glyphs = (__int64)this->Glyphs.Data.Data;
            Scaleform::Render::RenderBuffer::AddRef(v94);
            v95 = p_Glyphs;
            v96 = *(Scaleform::RefCountVImpl **)(p_Glyphs + 8 * v89);
            if ( v96 )
            {
              Scaleform::RefCountImpl::Release(v96);
              v95 = p_Glyphs;
            }
            *(_QWORD *)(v95 + 8 * v89) = v94;
            if ( v160 )
            {
              r = 0i64;
              Scaleform::GFx::ShapeDataBase::ComputeBound((Scaleform::GFx::ShapeDataBase *)v94, &r);
              x2 = r.x2;
              x1 = r.x1;
              v99 = this->AdvanceTable.Data.Data;
              if ( r.x2 < r.x1 || (y2 = r.y2, y1 = r.y1, r.y2 < r.y1) )
              {
                *(_QWORD *)&v99[v91].Left = 0i64;
              }
              else
              {
                v99[v91].Left = (int)(float)(r.x1 * 20.0);
                v99[v91].Top = (int)(float)(y1 * 20.0);
                v99[v91].Width = (int)(float)((float)(x2 - x1) * 20.0);
                v99[v91].Height = (int)(float)((float)(y2 - y1) * 20.0);
              }
            }
            Scaleform::RefCountImpl::Release(v94);
            ++v89;
            ++v168;
            v90 = v165 + 1;
            ++v91;
            ++v165;
            if ( v89 >= (__int64)v166 )
              goto LABEL_152;
          }
          p_AdvanceTable = &this->AdvanceTable;
          v103 = v168;
          if ( v168 >= p_AdvanceTable->Data.Size )
          {
            if ( v168 <= p_AdvanceTable->Data.Policy.Capacity )
              goto LABEL_160;
            v104 = v168 + ((unsigned __int64)v168 >> 2);
          }
          else
          {
            if ( v168 >= p_AdvanceTable->Data.Policy.Capacity >> 1 )
              goto LABEL_160;
            v104 = v168;
          }
          Scaleform::ArrayDataBase<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &p_AdvanceTable->Data,
            p_AdvanceTable,
            v104);
LABEL_160:
          v105 = p_Data;
          p_AdvanceTable->Data.Size = v103;
          v106 = v105->Size;
          Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
            v105,
            v105,
            v103);
          if ( v103 > v106 )
          {
            v107 = &v105->Data[v106];
            for ( i = v103 - v106; i; --i )
            {
              if ( v107 )
                v107->pObject = 0i64;
              ++v107;
            }
          }
          if ( v94 )
            Scaleform::RefCountImpl::Release(v94);
          goto LABEL_222;
        }
LABEL_152:
        if ( newSize_4 + v169 != pAltStream->Stream.Pos + pAltStream->Stream.FilePos - pAltStream->Stream.DataSize )
        {
LABEL_222:
          if ( Data )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
          return;
        }
      }
      else
      {
        if ( (int)(v72 + newSize_4) >= Scaleform::GFx::Stream::GetTagEndPosition(&pAltStream->Stream) )
          goto LABEL_222;
        Scaleform::GFx::Stream::SetPosition(&pAltStream->Stream, v72 + newSize_4);
        this->Flags |= 0x1000u;
      }
      Scaleform::GFx::FontData::ReadCodeTable(this, &pAltStream->Stream);
      if ( v160 )
      {
        if ( v174->TagType == Tag_DefineFont3 )
          v109 = FLOAT_0_050000001;
        else
          v109 = FLOAT_1_0;
        v110 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v110 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v111 = pAltStream->Stream.Pos;
        v112 = pAltStream->Stream.pBuffer[v111] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
        pAltStream->Stream.Pos = v111 + 2;
        this->Ascent = (float)v112 * *(float *)&v109;
        v113 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v113 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v114 = pAltStream->Stream.Pos;
        v115 = pAltStream->Stream.pBuffer[v114] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
        pAltStream->Stream.Pos = v114 + 2;
        this->Descent = (float)v115 * *(float *)&v109;
        v116 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v116 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v117 = pAltStream->Stream.pBuffer;
        v118 = pAltStream->Stream.Pos;
        v119 = v117[pAltStream->Stream.Pos + 1];
        v120 = v117[v118];
        pAltStream->Stream.Pos = v118 + 2;
        this->Leading = (float)(__int16)(v120 | (v119 << 8)) * *(float *)&v109;
        if ( Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
        {
          LODWORD(v158) = (int)this->Leading;
          Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
            (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
            "  Ascent = %d, Descent = %d, Leading = %d\n",
            (unsigned int)(int)this->Ascent,
            (unsigned int)(int)this->Descent,
            v158);
        }
        v121 = this->Glyphs.Data.Size;
        if ( this->AdvanceTable.Data.Size != v121 )
          Scaleform::ArrayData<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy>::Resize(
            &this->AdvanceTable.Data,
            v121);
        v122 = this->AdvanceTable.Data.Size;
        if ( v122 )
        {
          v123 = 0i64;
          do
          {
            v124 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
            v125 = this->AdvanceTable.Data.Data;
            pAltStream->Stream.UnusedBits = 0;
            if ( v124 < 2 )
              Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
            v126 = pAltStream->Stream.pBuffer;
            v127 = pAltStream->Stream.Pos;
            v128 = v126[pAltStream->Stream.Pos + 1] << 8;
            LODWORD(v126) = v126[v127];
            pAltStream->Stream.Pos = v127 + 2;
            v125[v123++].Advance = (float)(int)((unsigned int)v126 | v128) * *(float *)&v109;
            --v122;
          }
          while ( v122 );
        }
        v129 = this->Glyphs.Data.Size;
        for ( pr = 0i64; v129; --v129 )
          Scaleform::GFx::Stream::ReadRect(&pAltStream->Stream, &pr);
        v130 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v130 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v131 = pAltStream->Stream.Pos;
        v132 = pAltStream->Stream.pBuffer[v131] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
        pAltStream->Stream.Pos = v131 + 2;
        v170 = v132;
        if ( Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
          Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
            (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
            "  KerningCount = %d\n",
            v132);
        v133 = 0;
        if ( v132 )
        {
          while ( 1 )
          {
            v134 = pAltStream->Stream.DataSize;
            v135 = pAltStream->Stream.Pos;
            if ( (int)(v135 + pAltStream->Stream.FilePos - v134) >= v174->TagLength + v174->TagDataOffset )
              break;
            v136 = v134 - v135;
            v137 = this->Flags >> 14;
            pAltStream->Stream.UnusedBits = 0;
            if ( (v137 & 1) != 0 )
            {
              if ( v136 < 2 )
                Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
              v138 = pAltStream->Stream.Pos;
              v139 = pAltStream->Stream.pBuffer[v138] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
              pAltStream->Stream.Pos = v138 + 2;
              v140 = pAltStream->Stream.DataSize - (v138 + 2);
              pAltStream->Stream.UnusedBits = 0;
              if ( v140 < 2 )
                Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
              v141 = pAltStream->Stream.Pos;
              v142 = pAltStream->Stream.pBuffer[v141] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
              v143 = v141 + 2;
            }
            else
            {
              if ( v136 < 1 )
                Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
              v144 = pAltStream->Stream.Pos;
              v139 = pAltStream->Stream.pBuffer[v144];
              v145 = pAltStream->Stream.DataSize - (v144 + 1);
              pAltStream->Stream.Pos = v144 + 1;
              pAltStream->Stream.UnusedBits = 0;
              if ( v145 < 1 )
                Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
              v146 = pAltStream->Stream.Pos;
              v142 = pAltStream->Stream.pBuffer[v146];
              v143 = v146 + 1;
            }
            pAltStream->Stream.Pos = v143;
            v147 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
            pAltStream->Stream.UnusedBits = 0;
            if ( v147 < 2 )
              Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
            v148 = pAltStream->Stream.pBuffer;
            v149 = pAltStream->Stream.Pos;
            v150 = v148[pAltStream->Stream.Pos + 1];
            v151 = v148[v149];
            LOWORD(v164) = v139;
            HIWORD(v164) = v142;
            pAltStream->Stream.Pos = v149 + 2;
            v172 = (float)(__int16)(v151 | (v150 << 8)) * *(float *)&v109;
            if ( Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
            {
              LODWORD(v158) = (int)v172;
              Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
                (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
                "     Pair: %d - %d,\tadj = %d\n",
                v139,
                v142,
                v158);
            }
            v152 = 4i64;
            key.pFirst = (const Scaleform::GFx::FontData::KerningPair *)&v164;
            v153 = 5381i64;
            key.pSecond = &v172;
            do
            {
              v154 = *((unsigned __int8 *)&newSize_4 + v152-- + 3);
              v153 = v154 + 65599 * v153;
            }
            while ( v152 );
            Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeRef>(
              &this->KerningPairs.mHash,
              &this->KerningPairs,
              &key,
              v153);
            if ( ++v133 >= (int)v170 )
              goto LABEL_218;
          }
          v155 = "<noname>";
          if ( this->Name )
            v155 = this->Name;
          Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogError(
            &pAltStream->Stream,
            "Corrupted file %s, kerning table of the font '%s' is longer than tagLength.",
            (pAltStream->Stream.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
            v155);
        }
      }
LABEL_218:
      if ( !v159 )
      {
        v156 = this->AdvanceTable.Data.Size;
        if ( v156 )
        {
          v157 = 0i64;
          do
          {
            *(_QWORD *)&this->AdvanceTable.Data.Data[v157++].Left = 0i64;
            --v156;
          }
          while ( v156 );
        }
      }
      goto LABEL_222;
    }
    if ( v45 <= 1 )
    {
LABEL_122:
      v80 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v80 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v81 = pAltStream->Stream.pBuffer;
      v82 = pAltStream->Stream.Pos;
      v83 = v81[pAltStream->Stream.Pos + 1] << 8;
      LODWORD(v81) = v81[v82];
      v73 = v82 + 2;
      v72 = (unsigned int)v81 | v83;
      goto LABEL_125;
    }
    v166 = v45 - 1;
    while ( 1 )
    {
      v74 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v74 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v75 = v53 + 1;
      v76 = pAltStream->Stream.Pos;
      v77 = pAltStream->Stream.pBuffer[v76] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
      pAltStream->Stream.Pos = v76 + 2;
      if ( v53 + 1 >= v53 )
      {
        if ( v75 > v167.Policy.Capacity )
        {
          v78 = v75 + (v75 >> 2);
          goto LABEL_118;
        }
      }
      else if ( v75 < v167.Policy.Capacity >> 1 )
      {
        v78 = v53 + 1;
LABEL_118:
        Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &v167,
          &v167,
          v78);
        Data = v167.Data;
      }
      v167.Size = ++v53;
      v79 = (int *)&Data[v75 - 1];
      if ( v79 )
        *v79 = v77;
      if ( !--v166 )
        goto LABEL_122;
    }
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "reading DefineFont\n");
  v7 = pAltStream->Stream.DataSize;
  v8 = pAltStream->Stream.FilePos - v7;
  memset(&pheapAddr, 0, sizeof(pheapAddr));
  v9 = v7 - pAltStream->Stream.Pos;
  v165 = pAltStream->Stream.Pos + v8;
  pAltStream->Stream.UnusedBits = 0;
  if ( v9 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v10 = pAltStream->Stream.Pos;
  v11 = pAltStream->Stream.pBuffer[v10] | (pAltStream->Stream.pBuffer[(unsigned int)(v10 + 1)] << 8);
  pAltStream->Stream.Pos = v10 + 2;
  Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &pheapAddr,
    &pheapAddr,
    1ui64);
  v12 = pheapAddr.Data;
  v13 = 1i64;
  pheapAddr.Size = 1i64;
  if ( pheapAddr.Data )
    *pheapAddr.Data = v11;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "offset[0] = %d\n",
    *v12);
  v14 = 1i64;
  newSize = (int)*v12 >> 1;
  v15 = newSize;
  newSize_4 = 1;
  if ( newSize > 1i64 )
  {
    do
    {
      v16 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v16 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v17 = pAltStream->Stream.Pos;
      v18 = pAltStream->Stream.pBuffer[v17] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
      pAltStream->Stream.Pos = v17 + 2;
      if ( !v18 )
      {
        v159 = 0;
        break;
      }
      v19 = v13 + 1;
      v20 = v18;
      v164 = v18;
      if ( v13 + 1 >= v13 )
      {
        if ( v19 > pheapAddr.Policy.Capacity )
        {
          v21 = v19 + (v19 >> 2);
          goto LABEL_17;
        }
      }
      else if ( v19 < pheapAddr.Policy.Capacity >> 1 )
      {
        v21 = v13 + 1;
LABEL_17:
        Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &pheapAddr,
          &pheapAddr,
          v21);
        v20 = v164;
        v12 = pheapAddr.Data;
      }
      pheapAddr.Size = v13 + 1;
      v22 = (int *)&v12[v13++];
      if ( v22 )
        *v22 = v20;
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "offset[%d] = %d\n",
        newSize_4++,
        v12[v14++]);
      v15 = newSize;
    }
    while ( v14 < newSize );
  }
  v23 = this->Glyphs.Data.Size;
  p_Glyphs = (__int64)&this->Glyphs;
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Glyphs.Data,
    &this->Glyphs,
    v15);
  if ( v15 > v23 )
  {
    v24 = &this->Glyphs.Data.Data[v23];
    v25 = v15 - v23;
    if ( v15 != v23 )
    {
      do
      {
        if ( v24 )
          v24->pObject = 0i64;
        ++v24;
        --v25;
      }
      while ( v25 );
    }
  }
  if ( v159 )
  {
    v26 = 0i64;
    if ( v15 > 0 )
    {
      v27 = 1;
      do
      {
        v28 = v12[v26] + v165;
        Scaleform::GFx::Stream::SetPosition(&pAltStream->Stream, v28);
        if ( v27 >= newSize )
          v29 = v174->TagLength + v174->TagDataOffset - v28;
        else
          v29 = v12[v26 + 1] - v12[v26];
        v30 = v29;
        v31 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pHeap->Alloc)(pHeap, 32i64);
        v32 = (Scaleform::RefCountVImpl *)v31;
        if ( v31 )
        {
          *(_QWORD *)(v31 + 16) = 0i64;
          *(_QWORD *)v31 = &Scaleform::RefCountImplCore::`vftable';
          *(_QWORD *)v31 = &Scaleform::GFx::ConstShapeNoStyles::`vftable';
          *(_DWORD *)(v31 + 8) = 1;
          *(_BYTE *)(v31 + 24) = 0;
        }
        else
        {
          v32 = 0i64;
        }
        LOBYTE(v158) = 0;
        ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::LoadProcess *, __int64, _QWORD, _DWORD))v32->__vftable[5].~RefCountImplCore)(
          v32,
          v176,
          2i64,
          v30,
          v158);
        v33 = *(_QWORD *)p_Glyphs;
        Scaleform::Render::RenderBuffer::AddRef(v32);
        v34 = *(Scaleform::RefCountVImpl **)(v33 + 8 * v26);
        if ( v34 )
          Scaleform::RefCountImpl::Release(v34);
        *(_QWORD *)(v33 + 8 * v26) = v32;
        Scaleform::RefCountImpl::Release(v32);
        ++v27;
        ++v26;
      }
      while ( v26 < newSize );
    }
  }
  else
  {
    this->Flags |= 0x1000u;
  }
  if ( v12 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
}

void __fastcall Scaleform::GFx::FontDataCompactedGfx::Read(
        Scaleform::GFx::FontDataCompactedGfx *this,
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // r15
  int TagLength; // er12
  int v7; // er12
  unsigned __int8 *v8; // rsi
  int v9; // ebp
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r10
  unsigned __int64 Size; // rdx
  unsigned __int8 *Data; // rcx
  unsigned __int8 v16; // al
  signed int NominalSize; // eax
  const char *v18; // rax
  float v19; // xmm0_4
  Scaleform::GFx::FontDataCompactedGfx_vtbl *v20; // rax
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  const char *v25; // rax
  int v26; // [rsp+50h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "reading DefineCompactedFont:\n");
  TagLength = tagInfo->TagLength;
  v26 = 2;
  v7 = TagLength - 2;
  v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 4096i64, &v26);
  Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261>>::Reserve(
    &this->Container,
    v7,
    0i64);
  v9 = 0;
  while ( 1 )
  {
    v10 = v7 - v9;
    if ( v7 - v9 > 4096 )
      v10 = 4096;
    v11 = Scaleform::GFx::Stream::ReadToBuffer(&pAltStream->Stream, v8, v10);
    v13 = v11;
    v9 += v11;
    if ( v11 > 0 )
    {
      v12 = 0i64;
      do
      {
        Size = this->Container.Size;
        Data = this->Container.Data;
        this->Container.Size = Size + 1;
        v16 = v8[v12++];
        Data[Size] = v16;
      }
      while ( v12 < v13 );
    }
    if ( (_DWORD)v13 != v10 )
      break;
    if ( v9 >= v7 )
      goto LABEL_13;
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogError(
    &pAltStream->Stream,
    "Could not read tag DefineCompactedFont. Broken gfx file.",
    v12);
LABEL_13:
  Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::AcquireFont(
    &this->CompactedFontValue,
    0);
  NominalSize = this->CompactedFontValue.NominalSize;
  if ( NominalSize )
  {
    v19 = (float)NominalSize;
    v20 = this->__vftable;
    v21 = 1024.0 / v19;
    v22 = (float)(1024.0 / v19) * this->CompactedFontValue.Leading;
    v23 = (float)(1024.0 / v19) * this->CompactedFontValue.Ascent;
    v24 = v21 * this->CompactedFontValue.Descent;
    this->Leading = v22;
    this->Ascent = v23;
    this->Descent = v24;
    v25 = v20->GetName(this);
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "read font \"%s\"\n",
      v25);
    this->Flags = this->CompactedFontValue.Flags;
  }
  else
  {
    v18 = this->GetName(this);
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogError(
      &pAltStream->Stream,
      "Invalid nominal size for DefineCompactedFont, font %s. Broken gfx file.",
      v18);
    *(_QWORD *)&this->Descent = 1115684864i64;
    this->Ascent = 960.0;
  }
  if ( v8 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
}

void __fastcall Scaleform::GFx::FontDataCompactedSwf::Read(
        Scaleform::GFx::FontDataCompactedSwf *this,
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  char v6; // r12
  Scaleform::GFx::LoadStates *pObject; // rax
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *p_Container; // rdx
  Scaleform::GFx::FontCompactorParams *v9; // rax
  unsigned int v10; // ecx
  const char *v11; // rdx
  unsigned int UInt; // eax
  bool v13; // si
  bool v14; // bl
  bool v15; // al
  bool v16; // r15
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int8 v19; // bl
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  const char *v23; // r8
  unsigned int v24; // eax
  const char *v25; // r9
  unsigned int v26; // ecx
  unsigned int DataSize; // eax
  signed int NumGlyphs; // er14
  unsigned __int64 v29; // rsi
  int v30; // eax
  unsigned __int8 *pBuffer; // r9
  __int64 v32; // rax
  int v33; // ebx
  unsigned int v34; // eax
  unsigned __int8 *v35; // rcx
  __int64 v36; // rax
  int v37; // ebx
  __int64 i; // r14
  int v39; // eax
  unsigned __int64 v40; // rbx
  unsigned __int8 *v41; // r9
  __int64 v42; // rax
  int v43; // er15
  unsigned __int64 v44; // r8
  unsigned int *v45; // rdx
  int *v46; // rax
  int v47; // eax
  unsigned __int8 *v48; // r9
  __int64 v49; // rax
  int v50; // ebx
  unsigned int v51; // eax
  __int64 v52; // r15
  int v53; // eax
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  int v56; // er14
  unsigned __int64 v57; // r8
  unsigned int *v58; // rdx
  int *v59; // rax
  int v60; // eax
  unsigned __int8 *v61; // rcx
  __int64 v62; // rax
  int v63; // ebx
  unsigned int v64; // er15
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rdx
  Tween::EasingType v67; // xmm8_4
  Scaleform::GFx::TagType v68; // eax
  Scaleform::GFx::PathAllocator *v69; // rax
  Scaleform::GFx::PathAllocator *v70; // rax
  Scaleform::GFx::PathAllocator *v71; // rbx
  __int64 v72; // r15
  int v73; // er12
  __int64 v74; // rbx
  unsigned int v75; // ebx
  Scaleform::Render::ShapePathType v76; // eax
  signed int v77; // er12
  float v78; // xmm6_4
  Scaleform::Render::PathEdgeType j; // eax
  int v80; // ebx
  unsigned __int64 v81; // rbx
  int v82; // eax
  unsigned __int8 *v83; // rcx
  __int64 v84; // rax
  int v85; // er8
  int v86; // eax
  __int64 v87; // rdx
  unsigned int v88; // er8
  int v89; // eax
  __int64 v90; // r8
  __int16 v91; // dx
  int v92; // eax
  __int64 v93; // r8
  __int16 v94; // dx
  int v95; // eax
  __int64 v96; // r8
  unsigned __int8 *v97; // rcx
  __int16 v98; // dx
  __int16 v99; // ax
  float v100; // xmm0_4
  __int64 v101; // kr00_8
  unsigned __int64 v102; // rbx
  int v103; // eax
  __int64 v104; // rax
  int v105; // edx
  __int64 v106; // rbx
  int v107; // eax
  __int64 v108; // rax
  unsigned int v109; // ebx
  __int64 v110; // r14
  bool v111; // zf
  unsigned int v112; // eax
  __int64 v113; // rdx
  unsigned __int16 v114; // si
  int v115; // eax
  __int64 v116; // rdx
  unsigned __int16 v117; // bx
  unsigned int v118; // eax
  __int64 v119; // rdx
  int v120; // eax
  __int64 v121; // rdx
  int v122; // eax
  unsigned __int8 *v123; // rcx
  __int64 v124; // r8
  __int16 v125; // dx
  __int16 v126; // ax
  float v127; // xmm6_4
  void *v128; // rbx
  __int64 ascent; // [rsp+20h] [rbp-E0h]
  bool v130; // [rsp+40h] [rbp-C0h]
  bool v131; // [rsp+41h] [rbp-BFh]
  unsigned int *Data; // [rsp+48h] [rbp-B8h]
  int v133; // [rsp+50h] [rbp-B0h]
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int nominalSize; // [rsp+70h] [rbp-90h]
  unsigned int v136; // [rsp+74h] [rbp-8Ch]
  Scaleform::String pstr; // [rsp+78h] [rbp-88h] BYREF
  int v138; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::GFx::TagType tagType; // [rsp+84h] [rbp-7Ch]
  Scaleform::GFx::PathAllocator *v140; // [rsp+88h] [rbp-78h]
  const Scaleform::GFx::TagInfo *v141; // [rsp+90h] [rbp-70h]
  Scaleform::GFx::ConstShapeNoStyles v142; // [rsp+98h] [rbp-68h] BYREF
  Scaleform::Render::ShapePosInfo pos; // [rsp+B8h] [rbp-48h] BYREF
  Scaleform::GFx::LoadProcess *pa; // [rsp+F0h] [rbp-10h]
  Scaleform::GFx::FontCompactor v145; // [rsp+100h] [rbp+0h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+210h] [rbp+110h] BYREF
  float coord; // [rsp+220h] [rbp+120h] BYREF
  float v148; // [rsp+224h] [rbp+124h]
  float v149; // [rsp+228h] [rbp+128h]
  float v150; // [rsp+22Ch] [rbp+12Ch]
  unsigned int styles[4]; // [rsp+238h] [rbp+138h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  v141 = tagInfo;
  pa = p;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v6 = 1;
  if ( tagInfo->TagType == Tag_DefineFont2 || tagInfo->TagType == Tag_DefineFont3 )
  {
    pObject = p->pLoadStates.pObject;
    p_Container = &this->Container;
    v9 = pObject->pBindStates.pObject->pFontCompactorParams.pObject;
    v10 = v9->NominalSize;
    LOBYTE(v9) = v9->MergeContours;
    nominalSize = v10;
    v130 = (char)v9;
    Scaleform::GFx::FontCompactor::FontCompactor(&v145, p_Container);
    v11 = "reading DefineFont2: ";
    if ( tagInfo->TagType != Tag_DefineFont2 )
      v11 = "reading DefineFont3: ";
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      v11);
    UInt = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u);
    v13 = UInt != 0;
    v131 = UInt != 0;
    if ( UInt )
      this->Flags |= 0x2000u;
    else
      this->Flags &= ~0x2000u;
    v14 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
    Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u);
    v15 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
    if ( v14 )
    {
      this->Flags &= ~0x100u;
      this->Flags |= 0x200u;
    }
    else if ( v15 )
    {
      this->Flags &= ~0x200u;
      this->Flags |= 0x100u;
    }
    else
    {
      this->Flags &= 0xFFFFFCFF;
    }
    v16 = Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
    if ( Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
      this->Flags |= 0x4000u;
    else
      this->Flags &= ~0x4000u;
    if ( Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
      this->Flags |= 1u;
    else
      this->Flags &= ~1u;
    if ( Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
      this->Flags |= 2u;
    else
      this->Flags &= ~2u;
    v17 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v17 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
    v18 = pAltStream->Stream.Pos;
    v19 = pAltStream->Stream.pBuffer[v18];
    pAltStream->Stream.Pos = v18 + 1;
    Scaleform::String::String(&pstr);
    Scaleform::GFx::Stream::ReadStringWithLength(&pAltStream->Stream, &pstr);
    v20 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v20 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    v21 = pAltStream->Stream.Pos;
    v22 = pAltStream->Stream.pBuffer[v21] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
    pAltStream->Stream.Pos = v21 + 2;
    this->NumGlyphs = v22;
    if ( Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
    {
      v23 = "(none)";
      if ( (pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) != -12i64 )
        v23 = (const char *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  Name = %s, %d glyphs\n",
        v23,
        this->NumGlyphs);
      v24 = this->Flags & 0x300;
      if ( v24 == 512 )
      {
        v25 = "ShiftJIS";
      }
      else
      {
        v25 = "ANSI";
        if ( v24 != 256 )
          v25 = "Unicode";
      }
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  HasLayout = %d, CodePage = %s, Italic = %d, Bold = %d\n",
        v13,
        v25,
        this->Flags & 1,
        (this->Flags >> 1) & 1);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  LangCode = %d\n",
        v19);
    }
    v26 = pAltStream->Stream.Pos;
    DataSize = pAltStream->Stream.DataSize;
    NumGlyphs = this->NumGlyphs;
    v29 = 0i64;
    v136 = pAltStream->Stream.FilePos + v26 - DataSize;
    Data = 0i64;
    memset(&pheapAddr, 0, sizeof(pheapAddr));
    if ( NumGlyphs )
    {
      v30 = DataSize - v26;
      pAltStream->Stream.UnusedBits = 0;
      if ( v16 )
      {
        if ( v30 < 4 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
        pBuffer = pAltStream->Stream.pBuffer;
        v32 = pAltStream->Stream.Pos;
        v33 = ((pBuffer[pAltStream->Stream.Pos + 1] | ((pBuffer[pAltStream->Stream.Pos + 2] | (pBuffer[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8) | pBuffer[v32];
        v34 = v32 + 4;
      }
      else
      {
        if ( v30 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v35 = pAltStream->Stream.pBuffer;
        v36 = pAltStream->Stream.Pos;
        v37 = v35[pAltStream->Stream.Pos + 1] << 8;
        LODWORD(v35) = v35[v36];
        v34 = v36 + 2;
        v33 = (unsigned int)v35 | v37;
      }
      pAltStream->Stream.Pos = v34;
      if ( v33 )
      {
        Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &pheapAddr,
          &pheapAddr,
          1ui64);
        v29 = 1i64;
        pheapAddr.Size = 1i64;
        Data = pheapAddr.Data;
        if ( pheapAddr.Data )
          *pheapAddr.Data = v33;
      }
      else
      {
        v6 = 0;
        NumGlyphs = 0;
      }
    }
    if ( v16 )
    {
      if ( NumGlyphs > 1 )
      {
        for ( i = (unsigned int)(NumGlyphs - 1); i; --i )
        {
          v39 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
          pAltStream->Stream.UnusedBits = 0;
          if ( v39 < 4 )
            Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
          v40 = v29 + 1;
          v41 = pAltStream->Stream.pBuffer;
          v42 = pAltStream->Stream.Pos;
          v43 = ((v41[pAltStream->Stream.Pos + 1] | ((v41[pAltStream->Stream.Pos + 2] | (v41[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8) | v41[v42];
          pAltStream->Stream.Pos = v42 + 4;
          if ( v29 + 1 >= v29 )
          {
            if ( v40 <= pheapAddr.Policy.Capacity )
            {
LABEL_59:
              v45 = Data;
              goto LABEL_60;
            }
            v44 = v40 + (v40 >> 2);
          }
          else
          {
            if ( v40 >= pheapAddr.Policy.Capacity >> 1 )
              goto LABEL_59;
            v44 = v29 + 1;
          }
          Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &pheapAddr,
            &pheapAddr,
            v44);
          v45 = pheapAddr.Data;
          Data = pheapAddr.Data;
LABEL_60:
          pheapAddr.Size = v29 + 1;
          v46 = (int *)&v45[v29++];
          if ( v46 )
            *v46 = v43;
        }
      }
      v47 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v47 < 4 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 4);
      v48 = pAltStream->Stream.pBuffer;
      v49 = pAltStream->Stream.Pos;
      v50 = ((v48[pAltStream->Stream.Pos + 1] | ((v48[pAltStream->Stream.Pos + 2] | (v48[pAltStream->Stream.Pos + 3] << 8)) << 8)) << 8) | v48[v49];
      v51 = v49 + 4;
LABEL_83:
      v64 = nominalSize;
      v65 = 0i64;
      v66 = pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
      pAltStream->Stream.Pos = v51;
      v133 = v50;
      Scaleform::GFx::FontCompactor::StartFont(&v145, (const char *)(v66 + 12), this->Flags, v64, 0, 0, 0);
      v67 = FLOAT_1_0;
      if ( v6 )
      {
        v138 = 258;
        v68 = v141->TagType;
        if ( v141->TagType == Tag_DefineFont2 )
          v68 = Tag_DefineShape2;
        tagType = v68;
        v69 = (Scaleform::GFx::PathAllocator *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 24i64,
                                                 &v138);
        if ( v69 )
        {
          Scaleform::GFx::PathAllocator::PathAllocator(v69, 0x2000u);
          v71 = v70;
        }
        else
        {
          v71 = 0i64;
        }
        LODWORD(v72) = 0;
        v73 = v133;
        v140 = v71;
        if ( this->NumGlyphs )
        {
          do
          {
            v74 = (unsigned int)v72;
            Scaleform::GFx::Stream::SetPosition(&pAltStream->Stream, Data[(unsigned int)v72] + v136);
            v72 = (unsigned int)(v72 + 1);
            if ( (unsigned int)v72 >= this->NumGlyphs )
              v75 = v73 - Data[v74];
            else
              v75 = Data[v72] - Data[v74];
            Scaleform::GFx::FontCompactor::StartGlyph(&v145);
            v142.RefCount = 1;
            v142.__vftable = (Scaleform::GFx::ConstShapeNoStyles_vtbl *)&Scaleform::GFx::ConstShapeNoStyles::`vftable';
            v142.Paths = 0i64;
            v142.Flags = 0;
            Scaleform::GFx::ConstShapeNoStyles::Read(&v142, pa, tagType, v75, 0);
            memset(&pos, 0, 48);
            pos.Sfactor = 1.0;
            pos.Initialized = 0;
            v76 = Scaleform::GFx::ShapeDataBase::ReadPathInfo(&v142, &pos, &coord, styles);
            if ( v76 )
            {
              v77 = nominalSize;
              do
              {
                if ( v76 != Shape_NewLayer )
                {
                  v78 = (float)v77;
                  Scaleform::GFx::FontCompactor::MoveTo(
                    &v145,
                    (int)(float)((float)((float)v77 * coord) * 0.0009765625),
                    (int)(float)((float)((float)v77 * v148) * 0.0009765625));
                  for ( j = Scaleform::GFx::ShapeDataBase::ReadEdge(&v142, &pos, &coord);
                        j;
                        j = Scaleform::GFx::ShapeDataBase::ReadEdge(&v142, &pos, &coord) )
                  {
                    if ( j == Edge_LineTo )
                    {
                      Scaleform::GFx::FontCompactor::LineTo(
                        &v145,
                        (int)(float)((float)(v78 * coord) * 0.0009765625),
                        (int)(float)((float)(v78 * v148) * 0.0009765625));
                    }
                    else if ( j == Edge_QuadTo )
                    {
                      Scaleform::GFx::FontCompactor::QuadTo(
                        &v145,
                        (int)(float)((float)(v78 * coord) * 0.0009765625),
                        (int)(float)((float)(v78 * v148) * 0.0009765625),
                        (int)(float)((float)(v78 * v149) * 0.0009765625),
                        (int)(float)((float)(v78 * v150) * 0.0009765625));
                    }
                  }
                }
                v76 = Scaleform::GFx::ShapeDataBase::ReadPathInfo(&v142, &pos, &coord, styles);
              }
              while ( v76 );
              v73 = v133;
            }
            Scaleform::GFx::FontCompactor::EndGlyph(&v145, v130);
            v71 = v140;
            Scaleform::GFx::PathAllocator::Clear(v140);
            Scaleform::RefCountImplCore::~RefCountImplCore(&v142);
          }
          while ( (unsigned int)v72 < this->NumGlyphs );
        }
        if ( v71 )
        {
          Scaleform::GFx::PathAllocator::Clear(v71);
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v71);
        }
        if ( v73 + v136 != pAltStream->Stream.FilePos + pAltStream->Stream.Pos - pAltStream->Stream.DataSize )
          goto LABEL_161;
        v64 = nominalSize;
      }
      else
      {
        v80 = v136 + v50;
        if ( v80 >= Scaleform::GFx::Stream::GetTagEndPosition(&pAltStream->Stream) )
        {
LABEL_161:
          if ( Data )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          v128 = (void *)(pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                 (volatile int *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                 -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v128);
          Scaleform::GFx::FontCompactor::~FontCompactor(&v145);
          return;
        }
        Scaleform::GFx::Stream::SetPosition(&pAltStream->Stream, v80);
        this->Flags |= 0x1000u;
      }
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "reading code table at offset %d\n",
        pAltStream->Stream.FilePos + pAltStream->Stream.Pos - pAltStream->Stream.DataSize);
      v81 = 0i64;
      if ( (this->Flags & 0x4000) != 0 )
      {
        if ( this->NumGlyphs )
        {
          do
          {
            v82 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
            pAltStream->Stream.UnusedBits = 0;
            if ( v82 < 2 )
              Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
            v83 = pAltStream->Stream.pBuffer;
            v84 = pAltStream->Stream.Pos;
            v85 = v83[pAltStream->Stream.Pos + 1] << 8;
            LODWORD(v83) = v83[v84];
            pAltStream->Stream.Pos = v84 + 2;
            Scaleform::GFx::FontCompactor::AssignGlyphCode(&v145, v81++, (unsigned int)v83 | v85);
          }
          while ( v81 < this->NumGlyphs );
        }
      }
      else if ( this->NumGlyphs )
      {
        do
        {
          v86 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
          pAltStream->Stream.UnusedBits = 0;
          if ( v86 < 1 )
            Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
          v87 = pAltStream->Stream.Pos;
          v88 = pAltStream->Stream.pBuffer[v87];
          pAltStream->Stream.Pos = v87 + 1;
          Scaleform::GFx::FontCompactor::AssignGlyphCode(&v145, v81++, v88);
        }
        while ( v81 < this->NumGlyphs );
      }
      if ( v131 )
      {
        if ( v141->TagType == Tag_DefineFont3 )
          v67 = FLOAT_0_050000001;
        v89 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v89 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v90 = pAltStream->Stream.Pos;
        v91 = pAltStream->Stream.pBuffer[v90] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
        pAltStream->Stream.Pos = v90 + 2;
        this->Ascent = (float)v91 * *(float *)&v67;
        v92 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v92 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v93 = pAltStream->Stream.Pos;
        v94 = pAltStream->Stream.pBuffer[v93] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
        pAltStream->Stream.Pos = v93 + 2;
        this->Descent = (float)v94 * *(float *)&v67;
        v95 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v95 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v96 = pAltStream->Stream.Pos;
        v97 = pAltStream->Stream.pBuffer;
        v98 = v97[pAltStream->Stream.Pos + 1];
        v99 = v97[v96];
        pAltStream->Stream.Pos = v96 + 2;
        v100 = (float)(__int16)(v99 | (v98 << 8)) * *(float *)&v67;
        this->Leading = v100;
        v101 = (int)(v64 * (int)this->Descent);
        Scaleform::GFx::FontCompactor::UpdateMetrics(
          &v145,
          (int)(v64 * (int)this->Ascent) / 1024,
          ((WORD2(v101) & 0x3FF) + (int)v101) >> 10,
          (int)(v64 * (int)v100) / 1024);
        if ( Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
        {
          LODWORD(ascent) = (int)this->Leading;
          Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
            (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
            "  Ascent = %d, Descent = %d, Leading = %d\n",
            (unsigned int)(int)this->Ascent,
            (unsigned int)(int)this->Descent,
            ascent);
        }
        v102 = this->NumGlyphs;
        if ( this->NumGlyphs )
        {
          do
          {
            v103 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
            pAltStream->Stream.UnusedBits = 0;
            if ( v103 < 2 )
              Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
            v104 = pAltStream->Stream.Pos;
            v105 = pAltStream->Stream.pBuffer[v104] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
            pAltStream->Stream.Pos = v104 + 2;
            Scaleform::GFx::FontCompactor::AssignGlyphAdvance(
              &v145,
              v65++,
              (int)(v64 * (int)(float)((float)v105 * *(float *)&v67)) / 1024);
          }
          while ( v65 < v102 );
        }
        v106 = this->NumGlyphs;
        for ( pr = 0i64; v106; --v106 )
          Scaleform::GFx::Stream::ReadRect(&pAltStream->Stream, &pr);
        v107 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v107 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v108 = pAltStream->Stream.Pos;
        v109 = pAltStream->Stream.pBuffer[v108] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
        pAltStream->Stream.Pos = v108 + 2;
        if ( Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
          Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
            (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
            "  KerningCount = %d\n",
            v109);
        if ( v109 )
        {
          v110 = v109;
          do
          {
            v111 = (this->Flags & 0x4000) == 0;
            pAltStream->Stream.UnusedBits = 0;
            v112 = pAltStream->Stream.DataSize;
            if ( v111 )
            {
              if ( (int)(v112 - pAltStream->Stream.Pos) < 1 )
                Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
              v119 = pAltStream->Stream.Pos;
              v114 = pAltStream->Stream.pBuffer[v119];
              v120 = pAltStream->Stream.DataSize - (v119 + 1);
              pAltStream->Stream.Pos = v119 + 1;
              pAltStream->Stream.UnusedBits = 0;
              if ( v120 < 1 )
                Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
              v121 = pAltStream->Stream.Pos;
              v117 = pAltStream->Stream.pBuffer[v121];
              v118 = v121 + 1;
            }
            else
            {
              if ( (int)(v112 - pAltStream->Stream.Pos) < 2 )
                Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
              v113 = pAltStream->Stream.Pos;
              v114 = pAltStream->Stream.pBuffer[v113] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
              pAltStream->Stream.Pos = v113 + 2;
              v115 = pAltStream->Stream.DataSize - (v113 + 2);
              pAltStream->Stream.UnusedBits = 0;
              if ( v115 < 2 )
                Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
              v116 = pAltStream->Stream.Pos;
              v117 = pAltStream->Stream.pBuffer[v116] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
              v118 = v116 + 2;
            }
            pAltStream->Stream.Pos = v118;
            v122 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
            pAltStream->Stream.UnusedBits = 0;
            if ( v122 < 2 )
              Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
            v123 = pAltStream->Stream.pBuffer;
            v124 = pAltStream->Stream.Pos;
            v125 = v123[pAltStream->Stream.Pos + 1];
            v126 = v123[v124];
            pAltStream->Stream.Pos = v124 + 2;
            v127 = (float)(__int16)(v126 | (v125 << 8)) * *(float *)&v67;
            if ( Scaleform::GFx::Stream::IsVerboseParse(&pAltStream->Stream) )
            {
              LODWORD(ascent) = (int)v127;
              Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
                (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
                "     Pair: %d - %d,\tadj = %d\n",
                v114,
                v117,
                ascent);
            }
            Scaleform::GFx::FontCompactor::AddKerningPair(&v145, v114, v117, (int)(v64 * (int)v127) / 1024);
            --v110;
          }
          while ( v110 );
        }
      }
      Scaleform::GFx::FontCompactor::EndFont(&v145);
      Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::AcquireFont(
        &this->CompactedFontValue,
        0);
      goto LABEL_161;
    }
    if ( NumGlyphs <= 1 )
    {
LABEL_80:
      v60 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v60 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v61 = pAltStream->Stream.pBuffer;
      v62 = pAltStream->Stream.Pos;
      v63 = v61[pAltStream->Stream.Pos + 1] << 8;
      LODWORD(v61) = v61[v62];
      v51 = v62 + 2;
      v50 = (unsigned int)v61 | v63;
      goto LABEL_83;
    }
    v52 = (unsigned int)(NumGlyphs - 1);
    while ( 1 )
    {
      v53 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
      pAltStream->Stream.UnusedBits = 0;
      if ( v53 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
      v54 = v29 + 1;
      v55 = pAltStream->Stream.Pos;
      v56 = pAltStream->Stream.pBuffer[v55] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
      pAltStream->Stream.Pos = v55 + 2;
      if ( v29 + 1 >= v29 )
      {
        if ( v54 <= pheapAddr.Policy.Capacity )
        {
LABEL_76:
          v58 = Data;
          goto LABEL_77;
        }
        v57 = v54 + (v54 >> 2);
      }
      else
      {
        if ( v54 >= pheapAddr.Policy.Capacity >> 1 )
          goto LABEL_76;
        v57 = v29 + 1;
      }
      Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pheapAddr,
        &pheapAddr,
        v57);
      v58 = pheapAddr.Data;
      Data = pheapAddr.Data;
LABEL_77:
      pheapAddr.Size = v29 + 1;
      v59 = (int *)&v58[v29++];
      if ( v59 )
        *v59 = v56;
      if ( !--v52 )
        goto LABEL_80;
    }
  }
}

void __fastcall Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadBounds(
        Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int pos)
{
  __int64 v4; // r8
  unsigned __int8 **Pages; // rdx
  unsigned __int8 *v6; // rax
  int v7; // er10
  int v8; // er10
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned __int8 **v12; // rdx
  unsigned __int8 *v13; // rax
  int v14; // er8
  int v15; // er8
  int v16; // eax
  unsigned int v17; // er10
  __int64 v18; // rcx
  unsigned __int8 **v19; // rdx
  unsigned __int8 *v20; // rax
  int v21; // er8
  int v22; // er8
  int v23; // eax
  unsigned int v24; // er10
  __int64 v25; // rcx
  unsigned __int8 **v26; // rdx
  unsigned __int8 *v27; // rax
  int v28; // er8
  int v29; // er8
  unsigned int v30; // eax

  this->Pos = pos;
  v4 = pos & 0xFFF;
  Pages = this->Data.Data->Pages;
  v6 = Pages[(unsigned __int64)pos >> 12];
  v7 = (char)v6[v4];
  if ( (v6[v4] & 1) != 0 )
  {
    v8 = (v7 >> 1) & 0x7F | ((char)Pages[(unsigned __int64)(pos + 1) >> 12][((_WORD)pos + 1) & 0xFFF] << 7);
    v9 = 2;
  }
  else
  {
    v8 = v7 >> 1;
    v9 = 1;
  }
  v10 = v9 + pos;
  this->XMin = v8;
  this->Pos = v10;
  v11 = v10 & 0xFFF;
  v12 = this->Data.Data->Pages;
  v13 = v12[(unsigned __int64)v10 >> 12];
  v14 = (char)v13[v11];
  if ( (v13[v11] & 1) != 0 )
  {
    v15 = (v14 >> 1) & 0x7F | ((char)v12[(unsigned __int64)(v10 + 1) >> 12][((_WORD)v10 + 1) & 0xFFF] << 7);
    v16 = 2;
  }
  else
  {
    v15 = v14 >> 1;
    v16 = 1;
  }
  v17 = v10 + v16;
  this->YMin = v15;
  this->Pos = v10 + v16;
  v18 = ((_WORD)v10 + (_WORD)v16) & 0xFFF;
  v19 = this->Data.Data->Pages;
  v20 = v19[(unsigned __int64)(v10 + v16) >> 12];
  v21 = (char)v20[v18];
  if ( (v20[v18] & 1) != 0 )
  {
    v22 = (v21 >> 1) & 0x7F | ((char)v19[(unsigned __int64)(v17 + 1) >> 12][((_WORD)v17 + 1) & 0xFFF] << 7);
    v23 = 2;
  }
  else
  {
    v22 = v21 >> 1;
    v23 = 1;
  }
  v24 = v23 + v17;
  this->XMax = v22;
  this->Pos = v24;
  v25 = v24 & 0xFFF;
  v26 = this->Data.Data->Pages;
  v27 = v26[(unsigned __int64)v24 >> 12];
  v28 = (char)v27[v25];
  if ( (v27[v25] & 1) != 0 )
  {
    v29 = (v28 >> 1) & 0x7F | ((char)v26[(unsigned __int64)(v24 + 1) >> 12][((_WORD)v24 + 1) & 0xFFF] << 7);
    v30 = v24 + 2;
  }
  else
  {
    v29 = v28 >> 1;
    v30 = v24 + 1;
  }
  this->Pos = v30;
  this->YMax = v29;
}

void __fastcall Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::ReadBounds(
        Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
        unsigned int pos)
{
  __int64 v2; // r11
  unsigned __int8 *Data; // rdx
  int v4; // er9
  int v5; // er9
  int v6; // eax
  __int64 v7; // r11
  unsigned __int8 *v8; // rdx
  int v9; // er9
  int v10; // er9
  int v11; // eax
  __int64 v12; // r11
  unsigned __int8 *v13; // rdx
  int v14; // er9
  int v15; // er9
  int v16; // eax
  __int64 v17; // r11
  unsigned __int8 *v18; // rdx
  int v19; // er9

  v2 = pos;
  this->Pos = pos;
  Data = this->Data.Data->Data;
  v4 = (char)Data[v2];
  if ( (Data[v2] & 1) != 0 )
  {
    v5 = (v4 >> 1) & 0x7F | ((char)Data[(unsigned int)(v2 + 1)] << 7);
    v6 = 2;
  }
  else
  {
    v5 = v4 >> 1;
    v6 = 1;
  }
  v7 = (unsigned int)(v6 + v2);
  this->XMin = v5;
  this->Pos = v7;
  v8 = this->Data.Data->Data;
  v9 = (char)v8[v7];
  if ( (v8[v7] & 1) != 0 )
  {
    v10 = (v9 >> 1) & 0x7F | ((char)v8[(unsigned int)(v7 + 1)] << 7);
    v11 = 2;
  }
  else
  {
    v10 = v9 >> 1;
    v11 = 1;
  }
  v12 = (unsigned int)(v11 + v7);
  this->YMin = v10;
  this->Pos = v12;
  v13 = this->Data.Data->Data;
  v14 = (char)v13[v12];
  if ( (v13[v12] & 1) != 0 )
  {
    v15 = (v14 >> 1) & 0x7F | ((char)v13[(unsigned int)(v12 + 1)] << 7);
    v16 = 2;
  }
  else
  {
    v15 = v14 >> 1;
    v16 = 1;
  }
  v17 = (unsigned int)(v16 + v12);
  this->XMax = v15;
  this->Pos = v17;
  v18 = this->Data.Data->Data;
  v19 = (char)v18[v17];
  if ( (v18[v17] & 1) != 0 )
  {
    this->YMax = (v19 >> 1) & 0x7F | ((char)v18[(unsigned int)(v17 + 1)] << 7);
    this->Pos = v17 + 2;
  }
  else
  {
    this->Pos = v17 + 1;
    this->YMax = v19 >> 1;
  }
}

void __fastcall Scaleform::GFx::FontData::ReadCodeTable(Scaleform::GFx::FontData *this, Scaleform::GFx::Stream *in)
{
  Scaleform::HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> > *p_CodeTable; // rsi
  unsigned __int64 v5; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 EntryCount; // rax
  unsigned int Flags; // eax
  unsigned __int64 Size; // rbp
  signed int v11; // eax
  __int64 Pos; // r9
  unsigned __int16 v13; // r8
  signed int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeRef key; // [rsp+20h] [rbp-28h] BYREF
  __int16 v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 v19; // [rsp+58h] [rbp+10h] BYREF

  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)in,
    "reading code table at offset %d\n",
    in->Pos + in->FilePos - in->DataSize);
  p_CodeTable = &this->CodeTable;
  v5 = 0i64;
  pTable = this->CodeTable.mHash.pTable;
  v7 = (5 * this->Glyphs.Data.Size) >> 2;
  if ( pTable )
    EntryCount = pTable->EntryCount;
  else
    EntryCount = 0i64;
  if ( v7 > EntryCount )
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::setRawCapacity(
      &this->CodeTable.mHash,
      &this->CodeTable,
      v7);
  Flags = this->Flags;
  Size = this->Glyphs.Data.Size;
  if ( (Flags & 0x4000) != 0 )
  {
    if ( Size )
    {
      key.pFirst = &v19;
      key.pSecond = (const unsigned __int16 *)&v18;
      do
      {
        v11 = in->DataSize - in->Pos;
        v18 = v5;
        in->UnusedBits = 0;
        if ( v11 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(in, 2);
        Pos = in->Pos;
        v19 = in->pBuffer[Pos] | (in->pBuffer[(unsigned int)(Pos + 1)] << 8);
        v13 = v19;
        in->Pos = Pos + 2;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeRef>(
          &p_CodeTable->mHash,
          p_CodeTable,
          &key,
          v13);
        ++v5;
      }
      while ( v5 < Size );
    }
  }
  else if ( Size )
  {
    key.pFirst = &v19;
    key.pSecond = (const unsigned __int16 *)&v18;
    do
    {
      v14 = in->DataSize - in->Pos;
      v18 = v5;
      in->UnusedBits = 0;
      if ( v14 < 1 )
        Scaleform::GFx::Stream::PopulateBuffer1(in);
      v15 = in->Pos;
      v16 = in->pBuffer[v15];
      in->Pos = v15 + 1;
      v19 = v16;
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeRef>(
        &p_CodeTable->mHash,
        p_CodeTable,
        &key,
        v16);
      ++v5;
    }
    while ( v5 < Size );
  }
}

__int64 __fastcall Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadEdge(
        Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int pos,
        int *data)
{
  __int64 v4; // r9
  unsigned __int8 *v5; // r8
  unsigned __int8 **Pages; // r11
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
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
  unsigned int v34; // er9
  int v35; // edx
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // er8
  unsigned int v39; // er9
  int v40; // edx
  unsigned int v41; // edx
  char v42; // al
  int v43; // ecx
  int v44; // eax
  unsigned int v45; // er8
  unsigned int v46; // er9
  int v47; // edx
  unsigned int v48; // edx
  unsigned __int8 v49; // al
  int v50; // ecx
  int v51; // eax
  unsigned int v52; // er8
  unsigned int v53; // er9
  int v54; // edx
  int v55; // ecx
  unsigned int v56; // edx
  unsigned __int8 v57; // al
  int v58; // ecx
  int v59; // eax
  unsigned int v60; // er8
  unsigned int v61; // er9
  int v62; // edx
  int v63; // ecx
  unsigned int v64; // edx
  unsigned __int8 v65; // al
  int v66; // ecx
  int v67; // eax
  unsigned int v68; // er8
  char v69; // cl
  unsigned int v70; // edx
  unsigned int v71; // eax
  unsigned int v72; // er8
  int v73; // ecx
  int v74; // ecx
  unsigned int v75; // eax
  int v76; // edx
  unsigned __int8 v78; // [rsp+0h] [rbp-20h]
  unsigned __int8 v79; // [rsp+1h] [rbp-1Fh] BYREF
  unsigned __int8 v80; // [rsp+2h] [rbp-1Eh]
  unsigned __int8 v81; // [rsp+3h] [rbp-1Dh]
  unsigned __int8 v82; // [rsp+4h] [rbp-1Ch]
  unsigned __int8 v83; // [rsp+5h] [rbp-1Bh]
  unsigned __int8 v84; // [rsp+6h] [rbp-1Ah]
  unsigned __int8 v85; // [rsp+7h] [rbp-19h]
  unsigned __int8 v86; // [rsp+8h] [rbp-18h]
  char v87; // [rsp+9h] [rbp-17h]

  v4 = pos & 0xFFF;
  v5 = &v79;
  Pages = this->Data->Pages;
  v7 = (unsigned __int64)pos >> 12;
  v8 = pos + 1;
  v9 = Pages[v7][v4];
  v78 = v9;
  v10 = v9 & 0xF;
  v11 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v10];
  if ( Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v10] )
  {
    v12 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v10];
    do
    {
      ++v5;
      v13 = v8 & 0xFFF;
      v14 = (unsigned __int64)v8++ >> 12;
      *(v5 - 1) = Pages[v14][v13];
      --v12;
    }
    while ( v12 );
    v9 = v78;
  }
  v15 = v9;
  switch ( v9 & 0xF )
  {
    case 0:
      *data = 0;
      goto LABEL_7;
    case 1:
      *data = 0;
      goto LABEL_9;
    case 2:
      *data = 1;
LABEL_7:
      data[1] = (16 * (char)v79) | (v9 >> 4);
      return (unsigned int)(v11 + 1);
    case 3:
      *data = 1;
LABEL_9:
      data[1] = (v9 >> 4) | (16 * (v79 | ((char)v80 << 8)));
      break;
    case 4:
      v16 = (char)v79;
      v17 = (char)(v79 << 6);
      *data = 2;
      data[1] = (v17 | (v9 >> 2)) >> 2;
      data[2] = v16 >> 2;
      break;
    case 5:
      v18 = (v9 >> 4) | (4 * (char)(4 * v79));
      v19 = (4 * (char)v80) | (v79 >> 6);
      *data = 2;
      data[2] = v19;
      data[1] = v18;
      break;
    case 6:
      v20 = v80;
      v21 = v79 | (4 * (char)(v80 << 6));
      *data = 2;
      v22 = (char)v81 << 6;
      data[1] = (v9 >> 4) | (16 * v21);
      data[2] = v22 | (v20 >> 2);
      break;
    case 7:
      v23 = v80;
      v24 = v79 | ((char)(4 * v80) << 6);
      *data = 2;
      v25 = v81 | ((char)v82 << 8);
      data[1] = (v15 >> 4) | (16 * v24);
      data[2] = (v23 >> 6) | (4 * v25);
      break;
    case 8:
      v26 = v79;
      v27 = (char)(v79 << 7) | (v9 >> 1);
      *data = 3;
      v28 = (char)v80;
      data[1] = v27 >> 3;
      data[2] = (char)(4 * v26) >> 3;
      data[4] = v28 >> 3;
      data[3] = (int)((char)(32 * v28) | (v26 >> 3)) >> 3;
      break;
    case 9:
      v29 = v79 >> 2;
      v30 = v80;
      data[1] = ((char)(32 * v79) | (v9 >> 3)) >> 1;
      v31 = ((char)((_BYTE)v30 << 6) | v29) >> 1;
      v32 = (int)((char)(v81 << 7) | (v30 >> 1)) >> 1;
      data[4] = (char)v81 >> 1;
      *data = 3;
      data[2] = v31;
      data[3] = v32;
      break;
    case 0xA:
      v33 = v79;
      v34 = v80;
      v35 = 2 * (char)(8 * v79);
      *data = 3;
      data[1] = (v9 >> 4) | v35;
      v36 = v81;
      data[2] = (v33 >> 5) | (2 * (char)(4 * v34));
      v37 = (char)v82;
      data[3] = (v34 >> 6) | (2 * (char)(2 * v36));
      data[4] = (2 * v37) | (v36 >> 7);
      break;
    case 0xB:
      v38 = v79;
      v39 = v81;
      v40 = (v9 >> 4) | (8 * (char)(2 * v79));
      *data = 3;
      data[1] = v40;
      v41 = v82;
      v42 = 8 * v82;
      data[2] = (v38 >> 7) | (2 * (v80 | (4 * (char)((_BYTE)v39 << 6))));
      v43 = (v39 >> 2) | (8 * v42);
      v44 = (char)v83;
      data[3] = v43;
      data[4] = (8 * v44) | (v41 >> 5);
      break;
    case 0xC:
      v45 = v80;
      v46 = v81;
      v47 = (v9 >> 4) | (16 * (v79 | (2 * (char)(v80 << 7))));
      *data = 3;
      data[1] = v47;
      v48 = v83;
      v49 = v83;
      data[2] = (v45 >> 1) | (32 * (char)(4 * v46));
      v50 = (v46 >> 6) | (4 * (v82 | (8 * (char)(32 * v49))));
      v51 = (char)v84;
      data[3] = v50;
      data[4] = (32 * v51) | (v48 >> 3);
      break;
    case 0xD:
      v52 = v80;
      v53 = v82;
      v54 = v79 | (8 * (char)(32 * v80));
      *data = 3;
      v55 = v81 | (4 * (char)((_BYTE)v53 << 6));
      data[1] = (v15 >> 4) | (16 * v54);
      v56 = v84;
      v57 = v84;
      data[2] = (v52 >> 3) | (32 * v55);
      v58 = (v53 >> 2) | ((v83 | (2 * (char)(v57 << 7))) << 6);
      v59 = (char)v85;
      data[3] = v58;
      data[4] = (v59 << 7) | (v56 >> 1);
      break;
    case 0xE:
      v60 = v80;
      v61 = v82;
      v62 = v79 | (32 * (char)(8 * v80));
      *data = 3;
      v63 = v81 | ((char)(4 * v61) << 6);
      data[1] = (v15 >> 4) | (16 * v62);
      v64 = v84;
      v65 = v84;
      data[2] = (v60 >> 5) | (8 * v63);
      v66 = (v61 >> 6) | (4 * (v83 | ((char)(2 * v65) << 7)));
      v67 = v85;
      data[3] = v66;
      data[4] = (v64 >> 7) | (2 * (v67 | ((char)v86 << 8)));
      break;
    case 0xF:
      v68 = v80;
      v69 = 2 * v80;
      *data = 3;
      data[1] = (v15 >> 4) | (16 * (v79 | (v69 << 7)));
      v70 = v83;
      v71 = v68;
      v72 = v85;
      v73 = (v71 >> 7) | (2 * (v81 | ((v82 | (4 * (char)(v83 << 6))) << 8)));
      LOBYTE(v71) = v85;
      data[2] = v73;
      v74 = v84 | (32 * (char)(8 * v71));
      v75 = v70;
      v76 = v87 << 8;
      data[3] = (v75 >> 2) | (v74 << 6);
      data[4] = (v72 >> 5) | (8 * (v86 | v76));
      break;
  }
  return (unsigned int)(v11 + 1);
}

__int64 __fastcall Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::ReadEdge(
        Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this,
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
  int v14; // er8
  int v15; // edx
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // er8
  int v19; // edx
  int v20; // eax
  unsigned int v21; // er8
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // er8
  int v25; // eax
  int v26; // edx
  int v27; // er9
  unsigned int v28; // er8
  int v29; // er9
  int v30; // er8
  unsigned int v31; // er8
  unsigned int v32; // er9
  int v33; // edx
  unsigned int v34; // edx
  int v35; // eax
  unsigned int v36; // er8
  unsigned int v37; // er9
  int v38; // edx
  unsigned int v39; // edx
  char v40; // al
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // er8
  unsigned int v44; // er9
  int v45; // edx
  unsigned int v46; // edx
  unsigned __int8 v47; // al
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // er8
  unsigned int v51; // er9
  int v52; // edx
  int v53; // ecx
  unsigned int v54; // edx
  unsigned __int8 v55; // al
  int v56; // ecx
  int v57; // eax
  unsigned int v58; // er8
  unsigned int v59; // er9
  int v60; // edx
  int v61; // ecx
  unsigned int v62; // edx
  unsigned __int8 v63; // al
  int v64; // ecx
  int v65; // eax
  unsigned int v66; // er8
  char v67; // cl
  unsigned int v68; // edx
  unsigned int v69; // eax
  unsigned int v70; // er8
  int v71; // ecx
  int v72; // ecx
  unsigned int v73; // eax
  int v74; // edx
  unsigned __int8 v76; // [rsp+0h] [rbp-20h]
  unsigned __int8 v77; // [rsp+1h] [rbp-1Fh] BYREF
  unsigned __int8 v78; // [rsp+2h] [rbp-1Eh]
  unsigned __int8 v79; // [rsp+3h] [rbp-1Dh]
  unsigned __int8 v80; // [rsp+4h] [rbp-1Ch]
  unsigned __int8 v81; // [rsp+5h] [rbp-1Bh]
  unsigned __int8 v82; // [rsp+6h] [rbp-1Ah]
  unsigned __int8 v83; // [rsp+7h] [rbp-19h]
  unsigned __int8 v84; // [rsp+8h] [rbp-18h]
  char v85; // [rsp+9h] [rbp-17h]

  v3 = pos;
  v5 = pos + 1;
  v6 = &v77;
  v7 = this->Data->Data;
  v76 = v7[v3];
  v8 = v76;
  v9 = v76 & 0xF;
  v10 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::Sizes[v9];
  if ( Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::Sizes[v9] )
  {
    v11 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::Sizes[v9];
    do
    {
      v12 = v7[v5];
      v5 = (unsigned int)(v5 + 1);
      *v6++ = v12;
      --v11;
    }
    while ( v11 );
    v8 = v76;
  }
  v13 = v8;
  switch ( v8 & 0xF )
  {
    case 0:
      *data = 0;
      goto LABEL_7;
    case 1:
      *data = 0;
      goto LABEL_9;
    case 2:
      *data = 1;
LABEL_7:
      data[1] = (16 * (char)v77) | (v8 >> 4);
      return (unsigned int)(v10 + 1);
    case 3:
      *data = 1;
LABEL_9:
      data[1] = (v8 >> 4) | (16 * (v77 | ((char)v78 << 8)));
      break;
    case 4:
      v14 = (char)v77;
      v15 = (char)(v77 << 6);
      *data = 2;
      data[1] = (v15 | (v8 >> 2)) >> 2;
      data[2] = v14 >> 2;
      break;
    case 5:
      v16 = (v8 >> 4) | (4 * (char)(4 * v77));
      v17 = (4 * (char)v78) | (v77 >> 6);
      *data = 2;
      data[2] = v17;
      data[1] = v16;
      break;
    case 6:
      v18 = v78;
      v19 = v77 | (4 * (char)(v78 << 6));
      *data = 2;
      v20 = (char)v79 << 6;
      data[1] = (v8 >> 4) | (16 * v19);
      data[2] = v20 | (v18 >> 2);
      break;
    case 7:
      v21 = v78;
      v22 = v77 | ((char)(4 * v78) << 6);
      *data = 2;
      v23 = v79 | ((char)v80 << 8);
      data[1] = (v13 >> 4) | (16 * v22);
      data[2] = (v21 >> 6) | (4 * v23);
      break;
    case 8:
      v24 = v77;
      v25 = (char)(v77 << 7) | (v8 >> 1);
      *data = 3;
      v26 = (char)v78;
      data[1] = v25 >> 3;
      data[2] = (char)(4 * v24) >> 3;
      data[4] = v26 >> 3;
      data[3] = (int)((char)(32 * v26) | (v24 >> 3)) >> 3;
      break;
    case 9:
      v27 = v77 >> 2;
      v28 = v78;
      data[1] = ((char)(32 * v77) | (v8 >> 3)) >> 1;
      v29 = ((char)((_BYTE)v28 << 6) | v27) >> 1;
      v30 = (int)((char)(v79 << 7) | (v28 >> 1)) >> 1;
      data[4] = (char)v79 >> 1;
      *data = 3;
      data[2] = v29;
      data[3] = v30;
      break;
    case 0xA:
      v31 = v77;
      v32 = v78;
      v33 = 2 * (char)(8 * v77);
      *data = 3;
      data[1] = (v8 >> 4) | v33;
      v34 = v79;
      data[2] = (v31 >> 5) | (2 * (char)(4 * v32));
      v35 = (char)v80;
      data[3] = (v32 >> 6) | (2 * (char)(2 * v34));
      data[4] = (2 * v35) | (v34 >> 7);
      break;
    case 0xB:
      v36 = v77;
      v37 = v79;
      v38 = (v8 >> 4) | (8 * (char)(2 * v77));
      *data = 3;
      data[1] = v38;
      v39 = v80;
      v40 = 8 * v80;
      data[2] = (v36 >> 7) | (2 * (v78 | (4 * (char)((_BYTE)v37 << 6))));
      v41 = (v37 >> 2) | (8 * v40);
      v42 = (char)v81;
      data[3] = v41;
      data[4] = (8 * v42) | (v39 >> 5);
      break;
    case 0xC:
      v43 = v78;
      v44 = v79;
      v45 = (v8 >> 4) | (16 * (v77 | (2 * (char)(v78 << 7))));
      *data = 3;
      data[1] = v45;
      v46 = v81;
      v47 = v81;
      data[2] = (v43 >> 1) | (32 * (char)(4 * v44));
      v48 = (v44 >> 6) | (4 * (v80 | (8 * (char)(32 * v47))));
      v49 = (char)v82;
      data[3] = v48;
      data[4] = (32 * v49) | (v46 >> 3);
      break;
    case 0xD:
      v50 = v78;
      v51 = v80;
      v52 = v77 | (8 * (char)(32 * v78));
      *data = 3;
      v53 = v79 | (4 * (char)((_BYTE)v51 << 6));
      data[1] = (v13 >> 4) | (16 * v52);
      v54 = v82;
      v55 = v82;
      data[2] = (v50 >> 3) | (32 * v53);
      v56 = (v51 >> 2) | ((v81 | (2 * (char)(v55 << 7))) << 6);
      v57 = (char)v83;
      data[3] = v56;
      data[4] = (v57 << 7) | (v54 >> 1);
      break;
    case 0xE:
      v58 = v78;
      v59 = v80;
      v60 = v77 | (32 * (char)(8 * v78));
      *data = 3;
      v61 = v79 | ((char)(4 * v59) << 6);
      data[1] = (v13 >> 4) | (16 * v60);
      v62 = v82;
      v63 = v82;
      data[2] = (v58 >> 5) | (8 * v61);
      v64 = (v59 >> 6) | (4 * (v81 | ((char)(2 * v63) << 7)));
      v65 = v83;
      data[3] = v64;
      data[4] = (v62 >> 7) | (2 * (v65 | ((char)v84 << 8)));
      break;
    case 0xF:
      v66 = v78;
      v67 = 2 * v78;
      *data = 3;
      data[1] = (v13 >> 4) | (16 * (v77 | (v67 << 7)));
      v68 = v81;
      v69 = v66;
      v70 = v83;
      v71 = (v69 >> 7) | (2 * (v79 | ((v80 | (4 * (char)(v81 << 6))) << 8)));
      LOBYTE(v69) = v83;
      data[2] = v71;
      v72 = v82 | (32 * (char)(8 * v69));
      v73 = v68;
      v74 = v85 << 8;
      data[3] = (v73 >> 2) | (v72 << 6);
      data[4] = (v70 >> 5) | (8 * (v84 | v74));
      break;
  }
  return (unsigned int)(v10 + 1);
}

void __fastcall Scaleform::GFx::FontData::ReadFontInfo(
        Scaleform::GFx::FontData *this,
        Scaleform::GFx::Stream *in,
        Scaleform::GFx::TagType tagType)
{
  signed int v6; // eax
  __int64 Pos; // rcx
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // si
  int v10; // eax
  __int64 v11; // rcx
  const char *v12; // rdx
  char *Name; // r8
  unsigned int v14; // ecx
  const char *v15; // r8

  if ( this->Name )
  {
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->Name = 0i64;
  }
  this->Name = Scaleform::GFx::Stream::ReadStringWithLength(in, in->FileName.pHeap);
  v6 = in->DataSize - in->Pos;
  in->UnusedBits = 0;
  if ( v6 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(in);
  Pos = in->Pos;
  v8 = 0;
  v9 = in->pBuffer[Pos];
  in->Pos = Pos + 1;
  if ( tagType == Tag_DefineFontInfo2 )
  {
    v10 = in->DataSize - (Pos + 1);
    in->UnusedBits = 0;
    if ( v10 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(in);
    v11 = in->Pos;
    v8 = in->pBuffer[v11];
    in->Pos = v11 + 1;
  }
  if ( (v9 & 0x10) != 0 )
  {
    this->Flags &= ~0x100u;
    this->Flags |= 0x200u;
  }
  else if ( (v9 & 8) != 0 )
  {
    this->Flags &= ~0x200u;
    this->Flags |= 0x100u;
  }
  else
  {
    this->Flags &= 0xFFFFFCFF;
  }
  if ( (v9 & 4) != 0 )
    this->Flags |= 1u;
  else
    this->Flags &= ~1u;
  if ( (v9 & 2) != 0 )
    this->Flags |= 2u;
  else
    this->Flags &= ~2u;
  if ( (v9 & 1) != 0 )
    this->Flags |= 0x4000u;
  else
    this->Flags &= ~0x4000u;
  if ( Scaleform::GFx::Stream::IsVerboseParse(in) )
  {
    v12 = "reading DefineFontInfo\n";
    if ( tagType != Tag_DefineFontInfo )
      v12 = "reading DefineFontInfo2\n";
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)in,
      v12);
    Name = "(none)";
    if ( this->Name )
      Name = this->Name;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)in,
      "  Name = %s\n",
      Name);
    v14 = this->Flags & 0x300;
    if ( v14 == 512 )
    {
      v15 = "ShiftJIS";
    }
    else
    {
      v15 = "ANSI";
      if ( v14 != 256 )
        v15 = "Unicode";
    }
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)in,
      "  CodePage = %s, Italic = %d, Bold = %d\n",
      v15,
      this->Flags & 1,
      (this->Flags >> 1) & 1);
    if ( tagType == Tag_DefineFontInfo2 )
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)in,
        "  LangCode = %d\n",
        v8);
  }
  Scaleform::GFx::FontData::ReadCodeTable(this, in);
}

__int64 __fastcall Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadUInt30(
        Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int pos,
        unsigned int *v)
{
  __int64 v4; // r9
  unsigned __int8 **Pages; // rbx
  unsigned int v6; // er10
  unsigned int v7; // er10
  __int64 result; // rax
  int v9; // er8

  v4 = pos & 0xFFF;
  Pages = this->Data->Pages;
  v6 = Pages[(unsigned __int64)pos >> 12][v4];
  if ( (Pages[(unsigned __int64)pos >> 12][v4] & 3) != 0 )
  {
    if ( (Pages[(unsigned __int64)pos >> 12][v4] & 3) == 1 )
    {
      result = 2i64;
      *v = (v6 >> 2) | (Pages[(unsigned __int64)(pos + 1) >> 12][((_WORD)pos + 1) & 0xFFF] << 6);
    }
    else
    {
      v7 = v6 >> 2;
      if ( (Pages[(unsigned __int64)pos >> 12][v4] & 3) == 2 )
      {
        result = 3i64;
        v9 = v7 | ((Pages[(unsigned __int64)(pos + 1) >> 12][(pos + 1) & 0xFFF] | (Pages[(unsigned __int64)(pos + 2) >> 12][((_WORD)pos + 2) & 0xFFF] << 8)) << 6);
      }
      else
      {
        result = 4i64;
        v9 = v7 | ((Pages[(unsigned __int64)(pos + 1) >> 12][(pos + 1) & 0xFFF] | ((Pages[(unsigned __int64)(pos + 2) >> 12][(pos + 2) & 0xFFF] | (Pages[(unsigned __int64)(pos + 3) >> 12][((_WORD)pos + 3) & 0xFFF] << 8)) << 8)) << 6);
      }
      *v = v9;
    }
  }
  else
  {
    result = 1i64;
    *v = v6 >> 2;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
        Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int pos,
        unsigned int *v)
{
  unsigned __int8 *Data; // r11
  unsigned int v4; // er9
  unsigned int v5; // er9
  __int64 result; // rax
  int v7; // edx

  Data = this->Data->Data.Data;
  v4 = Data[pos];
  if ( (Data[pos] & 3) != 0 )
  {
    if ( (Data[pos] & 3) == 1 )
    {
      *v = (v4 >> 2) | (Data[pos + 1] << 6);
      return 2i64;
    }
    else
    {
      v5 = v4 >> 2;
      if ( (Data[pos] & 3) == 2 )
      {
        result = 3i64;
        v7 = v5 | ((Data[pos + 1] | (Data[pos + 2] << 8)) << 6);
      }
      else
      {
        result = 4i64;
        v7 = v5 | ((Data[pos + 1] | ((Data[pos + 2] | (Data[pos + 3] << 8)) << 8)) << 6);
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

void __fastcall Scaleform::GFx::GFxSystemFontResourceKeyInterface::Release(
        Scaleform::GFx::GFxMovieDefImplKeyInterface *this,
        void *hdata)
{
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)hdata);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned int *Data; // rdx
  unsigned __int64 v5; // rdi
  unsigned int *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, 4 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (unsigned int *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 4 * v5, &v7);
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::FontData::AdvanceEntry *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::FontData::AdvanceEntry *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 12 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::FontData::AdvanceEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Data,
                                                         v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 261;
      this->Data = (Scaleform::GFx::FontData::AdvanceEntry *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *v8; // rax
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
        v8 = (Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                Data,
                                                                v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 261;
      this->Data = (Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2>>::Reserve(
        Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> > *this,
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
    if ( this->Data )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->Capacity = cap + extraTail;
    if ( cap + extraTail )
    {
      v6 = 2;
      this->Data = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, cap + extraTail, &v6);
    }
    else
    {
      this->Data = 0i64;
    }
    this->Size = 0i64;
  }
}

void __fastcall Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261>>::Reserve(
        Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> > *this,
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
      v6 = 261;
      this->Data = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        this,
                                        cap + extraTail,
                                        &v6);
    }
    else
    {
      this->Data = 0i64;
    }
    this->Size = 0i64;
  }
}

void __fastcall Scaleform::ArrayData<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::RefCountVImpl **i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = (Scaleform::RefCountVImpl **)&this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( *i )
        Scaleform::RefCountImpl::Release(*i);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::FontResource::ResolveTextureGlyphs(Scaleform::GFx::FontResource *this)
{
  Scaleform::GFx::FontDataBound *v2; // rax
  Scaleform::Render::Font *v3; // rax
  Scaleform::Render::Font *v4; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( this->pFont.pObject->GetTextureGlyphData(this->pFont.pObject) )
  {
    v6 = 75;
    v2 = (Scaleform::GFx::FontDataBound *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                            Scaleform::Memory::pGlobalHeap,
                                            this,
                                            72i64,
                                            &v6);
    if ( v2 )
    {
      Scaleform::GFx::FontDataBound::FontDataBound(v2, this->pFont.pObject, this->pBinding);
      v4 = v3;
    }
    else
    {
      v4 = 0i64;
    }
    pObject = (Scaleform::RefCountVImpl *)this->pFont.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFont.pObject = v4;
  }
}

void __fastcall Scaleform::GFx::FontData::SetTextureGlyphData(Scaleform::GFx::FontData *this, void *pvdata)
{
  Scaleform::GFx::TextureGlyphData *pObject; // rcx

  if ( pvdata )
    ++*((_DWORD *)pvdata + 2);
  pObject = this->pTGData.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->pTGData.pObject = (Scaleform::GFx::TextureGlyphData *)pvdata;
}

void __fastcall Scaleform::GFx::TextureGlyphBinder::Visit(
        Scaleform::GFx::TextureGlyphBinder *this,
        __int64 __formal,
        Scaleform::Render::TextureGlyph *ptextureGlyph)
{
  unsigned int BindIndex; // er8
  Scaleform::GFx::ResourceBinding *ResBinding; // rcx
  Scaleform::RefCountVImpl **v6; // rdi
  void *pObject; // rcx
  Scaleform::Render::Image *v8; // rdi
  Scaleform::Render::Image *v9; // rcx
  Scaleform::GFx::ResourceBindData pdata; // [rsp+20h] [rbp-18h] BYREF

  if ( !ptextureGlyph->pImage.pObject )
  {
    BindIndex = ptextureGlyph->BindIndex;
    if ( BindIndex != -1 )
    {
      ResBinding = this->ResBinding;
      pdata = 0i64;
      if ( ResBinding->Frozen && BindIndex < ResBinding->ResourceCount )
      {
        v6 = (Scaleform::RefCountVImpl **)&ResBinding->pResources[BindIndex];
        if ( *v6 )
        {
          Scaleform::Render::RenderBuffer::AddRef(*v6);
          if ( pdata.pResource.pObject )
            Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
        }
        pObject = *v6;
        pdata = *(Scaleform::GFx::ResourceBindData *)v6;
      }
      else
      {
        Scaleform::GFx::ResourceBinding::GetResourceData_Locked(ResBinding, &pdata, BindIndex);
        pObject = pdata.pResource.pObject;
      }
      if ( pObject )
      {
        if ( ((*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)pObject + 16i64))(pObject, __formal) & 0xFF00) == 256 )
        {
          v8 = (Scaleform::Render::Image *)pdata.pResource.pObject[1].__vftable;
          if ( v8 )
            v8->AddRef((Scaleform::RefCountVImpl *)pdata.pResource.pObject[1].__vftable);
          v9 = ptextureGlyph->pImage.pObject;
          if ( v9 )
            v9->Release(v9);
          ptextureGlyph->pImage.pObject = v8;
          ptextureGlyph->BindIndex = -1;
        }
        if ( pdata.pResource.pObject )
          Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
      }
    }
  }
}

void __fastcall Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::readPathHeader(
        Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this)
{
  const Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rax
  int v3; // er9
  unsigned int Pos; // ecx
  __int64 v5; // rdx
  unsigned __int8 **Pages; // r10
  unsigned __int8 *v7; // rax
  int v8; // er8
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int8 **v11; // r10
  unsigned __int8 *v12; // rax
  int v13; // er8
  unsigned int NumEdges; // edx
  unsigned int v15; // edx

  if ( this->NumContours )
  {
    Data = this->Data.Data;
    v3 = 1;
    Pos = this->Pos;
    v5 = Pos & 0xFFF;
    Pages = Data->Pages;
    v7 = Pages[(unsigned __int64)Pos >> 12];
    v8 = (char)v7[v5];
    if ( (v7[v5] & 1) != 0 )
    {
      v9 = 2;
      this->MoveX = (v8 >> 1) & 0x7F | ((char)Pages[(unsigned __int64)(Pos + 1) >> 12][((_WORD)Pos + 1) & 0xFFF] << 7);
    }
    else
    {
      v9 = 1;
      this->MoveX = v8 >> 1;
    }
    this->Pos += v9;
    v10 = this->Pos & 0xFFF;
    v11 = this->Data.Data->Pages;
    v12 = v11[(unsigned __int64)this->Pos >> 12];
    v13 = (char)v12[v10];
    if ( (v12[v10] & 1) != 0 )
    {
      v3 = 2;
      this->MoveY = (v13 >> 1) & 0x7F | ((char)v11[(unsigned __int64)(this->Pos + 1) >> 12][((unsigned __int16)this->Pos
                                                                                           + 1) & 0xFFF] << 7);
    }
    else
    {
      this->MoveY = v13 >> 1;
    }
    this->Pos += v3;
    this->Pos += Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadUInt30(
                   &this->Data,
                   this->Pos,
                   &this->NumEdges);
    NumEdges = this->NumEdges;
    this->EdgePos = this->Pos;
    this->JumpToPos = 1;
    if ( (NumEdges & 1) != 0 )
    {
      v15 = NumEdges >> 1;
      this->EdgePos = v15;
      this->EdgePos += Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadUInt30(
                         &this->Data,
                         v15,
                         &this->NumEdges);
      this->JumpToPos = 0;
    }
    this->NumEdges >>= 1;
  }
}

void __fastcall Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261>>::readPathHeader(
        Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *this)
{
  const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> *Data; // rax
  int v3; // er8
  __int64 Pos; // rcx
  int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int8 *v8; // r9
  int v9; // edx
  unsigned int NumEdges; // edx
  unsigned int v11; // edx

  if ( this->NumContours )
  {
    Data = this->Data.Data;
    v3 = 1;
    Pos = this->Pos;
    v5 = (char)Data->Data[Pos];
    if ( (Data->Data[Pos] & 1) != 0 )
    {
      this->MoveX = (v5 >> 1) & 0x7F | ((char)Data->Data[(unsigned int)(Pos + 1)] << 7);
      v6 = 2;
    }
    else
    {
      v6 = 1;
      this->MoveX = v5 >> 1;
    }
    this->Pos += v6;
    v7 = this->Pos;
    v8 = this->Data.Data->Data;
    v9 = (char)v8[v7];
    if ( (v8[v7] & 1) != 0 )
    {
      v3 = 2;
      this->MoveY = (v9 >> 1) & 0x7F | ((char)v8[(unsigned int)(v7 + 1)] << 7);
    }
    else
    {
      this->MoveY = v9 >> 1;
    }
    this->Pos += v3;
    this->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
                   (Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *)this,
                   this->Pos,
                   &this->NumEdges);
    NumEdges = this->NumEdges;
    this->EdgePos = this->Pos;
    this->JumpToPos = 1;
    if ( (NumEdges & 1) != 0 )
    {
      v11 = NumEdges >> 1;
      this->EdgePos = v11;
      this->EdgePos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
                         (Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *)this,
                         v11,
                         &this->NumEdges);
      this->JumpToPos = 0;
    }
    this->NumEdges >>= 1;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rdi
  int v10; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > v11; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v10 = 261;
    v6 = 0i64;
    v11.pTable = 0i64;
    v11.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 16 * (v5 + 1), &v10);
    v11.pTable->EntryCount = 0i64;
    v11.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v11.pTable[++v7].EntryCount = -2i64;
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
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>>(
            &v11,
            pheapAddr,
            (const Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short> > *)&pTable[v6 + 1].SizeMask,
            LOWORD(pTable[v6 + 1].SizeMask));
          pTable[v6 + 1].EntryCount = -2i64;
        }
        ++v6;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v11.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::Clear((Scaleform::HashSetBase<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl::Namespace *,2>,Scaleform::HashsetEntry<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc> > *)this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *pTable; // rbx
  __int64 v10; // rax
  const Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> > *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > v15; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 261;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v14);
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
          v11 = (const Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> > *)((char *)&pTable[2] + v6);
          v12 = 5381i64;
          do
          {
            v13 = *((unsigned __int8 *)v11 + --v10);
            v12 = v13 + 65599 * v12;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>>>(
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
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear((Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *)this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  char *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  Scaleform::GFx::Resource *v13; // rcx
  int v14; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > v15; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 261;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 40 * v5 + 16, &v14);
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
        v9 = (char *)this->pTable + v6;
        if ( *((_QWORD *)v9 + 2) != -2i64 )
        {
          v10 = 4i64;
          v11 = 5381i64;
          do
          {
            v12 = (unsigned __int8)v9[v10 + 31];
            --v10;
            v11 = v12 + 65599 * v11;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>>(
            &v15,
            pheapAddr,
            (const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> > *)(v9 + 32),
            v11);
          if ( !*((_DWORD *)v9 + 10) )
          {
            v13 = (Scaleform::GFx::Resource *)*((_QWORD *)v9 + 6);
            if ( v13 )
              Scaleform::GFx::Resource::Release(v13);
          }
          *((_QWORD *)v9 + 2) = -2i64;
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
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Clear(this);
  }
}

