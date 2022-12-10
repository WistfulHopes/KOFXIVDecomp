#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_morphcharacter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"

Scaleform::GFx::MorphCharacterDef::MorphCharacterDef(); // 0x1403FAE00
void Scaleform::GFx::MorphCharacterDef::ReadMorphFillStyle(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType, Scaleform::Render::FillStyleType & fs1, Scaleform::Render::FillStyleType & fs2, bool * needResolve); // 0x1403FBDC0
void Scaleform::GFx::MorphCharacterDef::Read(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo, bool withStyle); // 0x1403FB210
class Scaleform::Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::Render::Rect<float> Scaleform::GFx::MorphCharacterDef::GetBoundsLocal(float morphRatio); // 0x1403FB130
bool Scaleform::GFx::MorphCharacterDef::DefPointTestLocal(const Scaleform::Render::Point<float> & pt, bool testShape, const Scaleform::GFx::DisplayObjectBase * pinst); // 0x1403FAFB0
class Scaleform::Ptr<Scaleform::Render::Scale9GridInfo>
{
protected:
	Scaleform::Render::Scale9GridInfo * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Scale9GridInfo>(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::Scale9GridInfo *);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::Scale9GridInfo &);
	Ptr<Scaleform::Render::Scale9GridInfo>();
	~Ptr<Scaleform::Render::Scale9GridInfo>();
	bool operator==(Scaleform::Render::Scale9GridInfo *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	bool operator!=(Scaleform::Render::Scale9GridInfo *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Render::Scale9GridInfo &);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Render::Scale9GridInfo *);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Render::Scale9GridInfo &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Render::Scale9GridInfo *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Scale9GridInfo * & GetRawRef();
	Scaleform::Render::Scale9GridInfo * GetPtr();
	Scaleform::Render::Scale9GridInfo & operator*();
	Scaleform::Render::Scale9GridInfo * operator->();
	Scaleform::Render::Scale9GridInfo * operator struct Scaleform::Render::Scale9GridInfo *();
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Render::Scale9GridInfo *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
};
bool Scaleform::GFx::MorphCharacterDef::IsEqualGeometry(const Scaleform::GFx::ShapeBaseCharacterDef & cmpWith); // 0x1403FB1C0
Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> Scaleform::GFx::MorphCharacterDef::BindResourcesInStyles(const Scaleform::GFx::ResourceBinding & resourceBinding); // 0x1403FAEF0void __fastcall Scaleform::GFx::MorphCharacterDef::MorphCharacterDef(Scaleform::GFx::MorphCharacterDef *this)
{
  this->__vftable = (Scaleform::GFx::MorphCharacterDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->pLib = 0i64;
  this->Id.Id = 0x40000;
  this->pShapeMeshProvider.pObject = 0i64;
  this->__vftable = (Scaleform::GFx::MorphCharacterDef_vtbl *)&Scaleform::GFx::MorphCharacterDef::`vftable';
  this->pShape1.pObject = 0i64;
  this->pShape2.pObject = 0i64;
}

Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *__fastcall Scaleform::GFx::MorphCharacterDef::BindResourcesInStyles(
        Scaleform::GFx::MorphCharacterDef *this,
        Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *result,
        const Scaleform::GFx::ResourceBinding *resourceBinding)
{
  Scaleform::GFx::ShapeDataBase *v6; // rbx
  Scaleform::GFx::ShapeDataBase *v7; // rdi
  Scaleform::Render::ShapeMeshProvider *v8; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = this->pShape1.pObject->Clone(this->pShape1.pObject);
  v7 = this->pShape2.pObject->Clone(this->pShape2.pObject);
  v6->BindResourcesInStyles(v6, resourceBinding);
  v7->BindResourcesInStyles(v7, resourceBinding);
  v10 = 2;
  v8 = (Scaleform::Render::ShapeMeshProvider *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 144i64,
                                                 &v10);
  if ( v8 )
    Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(v8, v6, v7);
  result->pObject = v8;
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v6);
  return result;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

_BOOL8 __fastcall Scaleform::GFx::MorphCharacterDef::DefPointTestLocal(
        Scaleform::GFx::MorphCharacterDef *this,
        const Scaleform::Render::Point<float> *pt,
        bool testShape,
        const Scaleform::GFx::DisplayObjectBase *pinst)
{
  Scaleform::Render::Scale9GridInfo *s9g; // rbx
  Scaleform::Render::Rect<float> *v9; // rax
  float y2; // xmm2_4
  float x2; // xmm4_4
  float y1; // xmm1_4
  float x1; // xmm3_4
  float y; // xmm0_4
  bool v15; // di
  Scaleform::Render::ShapeMeshProvider *pObject; // rdi
  float morphRatio; // xmm0_4
  Scaleform::Render::Rect<float> bounds; // [rsp+40h] [rbp-68h] BYREF
  Scaleform::Render::Matrix2x4<float> result; // [rsp+50h] [rbp-58h] BYREF

  s9g = 0i64;
  if ( pinst && (pinst->Flags & 1) != 0 )
    s9g = Scaleform::GFx::DisplayObjectBase::CreateScale9Grid((Scaleform::GFx::DisplayObjectBase *)pinst);
  *(_OWORD *)&result.M[0][0] = _xmm;
  *(_OWORD *)&result.M[1][0] = _xmm;
  if ( testShape )
  {
    pObject = this->pShapeMeshProvider.pObject;
    morphRatio = pinst->GetRatio((Scaleform::GFx::DisplayObjectBase *)pinst);
    v15 = Scaleform::Render::ShapeMeshProvider::HitTestShape(
            pObject,
            &result,
            pt->x,
            pt->y,
            morphRatio,
            0i64,
            0i64,
            s9g);
  }
  else
  {
    ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::Render::Rect<float> *, Scaleform::Render::Matrix2x4<float> *))this->pShapeMeshProvider.pObject->GetCorrectBounds)(
      &this->pShapeMeshProvider.pObject->Scaleform::Render::MeshProvider,
      &bounds,
      &result);
    if ( s9g )
    {
      v9 = Scaleform::Render::Scale9GridInfo::AdjustBounds(s9g, (Scaleform::Render::Rect<float> *)&result, &bounds);
      y2 = v9->y2;
      x2 = v9->x2;
      y1 = v9->y1;
      x1 = v9->x1;
    }
    else
    {
      y2 = bounds.y2;
      x2 = bounds.x2;
      y1 = bounds.y1;
      x1 = bounds.x1;
    }
    v15 = 0;
    if ( x2 >= pt->x && pt->x >= x1 )
    {
      y = pt->y;
      if ( y2 >= y && y >= y1 )
        v15 = 1;
    }
  }
  if ( s9g )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)s9g);
  return v15;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::MorphCharacterDef::GetBoundsLocal(
        Scaleform::GFx::MorphCharacterDef *this,
        Scaleform::Render::Rect<float> *result,
        float morphRatio)
{
  Scaleform::Render::MeshProvider *v3; // rcx
  __int128 v6[2]; // [rsp+30h] [rbp-38h] BYREF

  v3 = &this->pShapeMeshProvider.pObject->Scaleform::Render::MeshProvider;
  v6[0] = _xmm;
  v6[1] = _xmm;
  ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::Render::Rect<float> *, __int128 *))v3->GetCorrectBounds)(
    v3,
    result,
    v6);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::MorphCharacterDef::GetRectBoundsLocal(
        Scaleform::GFx::MorphCharacterDef *this,
        Scaleform::Render::Rect<float> *result,
        float morphRatio)
{
  ((void (__fastcall *)(Scaleform::GFx::MorphCharacterDef *))this->GetBoundsLocal)(this);
  return result;
}

Scaleform::GFx::AS3::VMAppDomain *__fastcall Scaleform::GFx::FontManagerStates::GetStateBagImpl(
        Scaleform::GFx::AS3::VMAppDomain *this)
{
  return this->ParentDomain;
}

bool __fastcall Scaleform::GFx::MorphCharacterDef::IsEqualGeometry(
        Scaleform::GFx::SwfShapeCharacterDef *this,
        const Scaleform::GFx::ShapeBaseCharacterDef *cmpWith)
{
  return 0;
}

bool __fastcall Scaleform::GFx::MorphCharacterDef::NeedsResolving(Scaleform::GFx::MorphCharacterDef *this)
{
  return (this->pShape1.pObject->Flags & 4) != 0 || (this->pShape2.pObject->Flags & 4) != 0;
}

void __fastcall Scaleform::GFx::MorphCharacterDef::Read(
        Scaleform::GFx::MorphCharacterDef *this,
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo,
        bool withStyle)
{
  Scaleform::Render::StrokeStyleType *pAltStream; // rbx
  Scaleform::GFx::MorphCharacterDef *v6; // r14
  int v7; // eax
  Scaleform::Render::ShapeMeshProvider *v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r9
  __int64 pObject_high; // rax
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // er8
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  bool v22; // r13
  const Scaleform::GFx::TagInfo *v23; // r13
  Scaleform::GFx::MorphCharacterDef *v24; // rbx
  __int64 v25; // r12
  Scaleform::GFx::TagType TagType; // er8
  Scaleform::RefCountVImpl *pObject; // r14
  Scaleform::Render::FillStyleType *v28; // rsi
  Scaleform::RefCountVImpl *v29; // rsi
  Scaleform::Render::FillStyleType *v30; // r15
  int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // ecx
  unsigned int v34; // esi
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r12
  Scaleform::Render::StrokeStyleType *v38; // r15
  Scaleform::Ptr<Scaleform::Render::DashArray> *p_pDashes; // rcx
  __int64 v40; // rdx
  Scaleform::Ptr<Scaleform::Render::DashArray> *v41; // rcx
  __int64 v42; // rdx
  unsigned int *p_Flags; // rsi
  char *v44; // r13
  signed __int64 v45; // r15
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // edx
  char *v53; // rax
  Scaleform::GFx::TagType *p_TagType; // r13
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // ecx
  unsigned int v59; // eax
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // edx
  float v64; // xmm0_4
  Scaleform::GFx::TagType v65; // er8
  Scaleform::Render::ComplexFill *v66; // r13
  Scaleform::RefCountVImpl *v67; // rcx
  Scaleform::Render::ComplexFill *v68; // r14
  unsigned int Color; // eax
  Scaleform::RefCountVImpl *v70; // rcx
  Scaleform::Render::GradientData *v71; // rax
  Scaleform::Render::GradientData *v72; // rax
  unsigned int v73; // er14
  int v74; // er12
  Scaleform::GFx::ConstShapeWithStyles *v75; // rsi
  Scaleform::GFx::MorphCharacterDef *v76; // rax
  Scaleform::RefCountVImpl *v77; // rcx
  Scaleform::GFx::LoadProcess *v78; // rdx
  __int64 v79; // r9
  Scaleform::GFx::MorphCharacterDef *v80; // rsi
  const Scaleform::GFx::TagInfo *v81; // r14
  Scaleform::GFx::ConstShapeWithStyles *v82; // rax
  Scaleform::GFx::ConstShapeWithStyles *v83; // rbx
  Scaleform::RefCountVImpl *v84; // rcx
  Scaleform::GFx::LoadProcess *v85; // rdx
  Scaleform::Render::FillStyleType *v86; // r15
  Scaleform::Render::StrokeStyleType *v87; // r14
  Scaleform::GFx::ShapeDataBase *v88; // rax
  Scaleform::GFx::ConstShapeWithStyles *v89; // rbx
  Scaleform::RefCountVImpl *v90; // rcx
  Scaleform::GFx::ShapeDataBase *v91; // rax
  Scaleform::GFx::ConstShapeWithStyles *v92; // rbx
  Scaleform::RefCountVImpl *v93; // rcx
  Scaleform::Render::ShapeMeshProvider *v94; // rax
  Scaleform::Render::ShapeMeshProvider *v95; // rax
  Scaleform::Render::ShapeMeshProvider *v96; // rcx
  unsigned __int64 v97; // rdi
  Scaleform::RefCountVImpl **v98; // rbx
  Scaleform::RefCountVImpl *v99; // rcx
  unsigned __int64 v100; // rdi
  Scaleform::Ptr<Scaleform::Render::ComplexFill> *p_pFill; // rbx
  Scaleform::RefCountVImpl *v102; // rcx
  unsigned __int64 v103; // rdi
  Scaleform::RefCountVImpl **v104; // rbx
  unsigned __int64 v105; // rdi
  Scaleform::RefCountVImpl **v106; // rbx
  BOOL fs2; // [rsp+28h] [rbp-E0h]
  BOOL fs2a; // [rsp+28h] [rbp-E0h]
  bool needResolve[8]; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::GFx::MorphCharacterDef *v110; // [rsp+40h] [rbp-C8h]
  unsigned int strokeStyleCount; // [rsp+48h] [rbp-C0h]
  unsigned int fillStyleCount; // [rsp+4Ch] [rbp-BCh]
  int v113; // [rsp+50h] [rbp-B8h] BYREF
  int v114; // [rsp+54h] [rbp-B4h] BYREF
  Scaleform::Render::StrokeStyleType *strokeStyles; // [rsp+58h] [rbp-B0h]
  Scaleform::GFx::LoadProcess *pa; // [rsp+60h] [rbp-A8h]
  Scaleform::Render::FillStyleType *fillStyles; // [rsp+68h] [rbp-A0h]
  Scaleform::Render::Color pc; // [rsp+70h] [rbp-98h] BYREF
  Scaleform::Render::Color v119; // [rsp+74h] [rbp-94h] BYREF
  int v120; // [rsp+78h] [rbp-90h] BYREF
  int v121; // [rsp+7Ch] [rbp-8Ch] BYREF
  char *v122; // [rsp+80h] [rbp-88h] BYREF
  const Scaleform::GFx::TagInfo *v123; // [rsp+88h] [rbp-80h]
  Scaleform::Render::StrokeStyleType *v124; // [rsp+90h] [rbp-78h]
  Scaleform::Render::FillStyleType *Data; // [rsp+98h] [rbp-70h]
  unsigned __int64 v126; // [rsp+A0h] [rbp-68h]
  unsigned __int64 Size; // [rsp+A8h] [rbp-60h]
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+B0h] [rbp-58h] BYREF
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> v129; // [rsp+C8h] [rbp-40h] BYREF
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy> v130; // [rsp+E0h] [rbp-28h] BYREF
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy> v131; // [rsp+F8h] [rbp-10h] BYREF
  Scaleform::Render::FillStyleType fs1; // [rsp+110h] [rbp+8h] BYREF
  Scaleform::Render::FillStyleType v133; // [rsp+120h] [rbp+18h] BYREF
  Scaleform::Render::FillStyleType v134; // [rsp+130h] [rbp+28h] BYREF
  Scaleform::Render::FillStyleType v135; // [rsp+140h] [rbp+38h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+158h] [rbp+50h] BYREF
  Scaleform::Render::Rect<float> v137; // [rsp+168h] [rbp+60h] BYREF
  Scaleform::Render::Rect<float> v138; // [rsp+178h] [rbp+70h] BYREF
  Scaleform::Render::Rect<float> v139; // [rsp+188h] [rbp+80h] BYREF

  pAltStream = (Scaleform::Render::StrokeStyleType *)p->pAltStream;
  v6 = this;
  v123 = tagInfo;
  pa = p;
  v110 = this;
  strokeStyles = pAltStream;
  if ( !pAltStream )
  {
    pAltStream = (Scaleform::Render::StrokeStyleType *)&p->ProcessInfo;
    strokeStyles = (Scaleform::Render::StrokeStyleType *)&p->ProcessInfo;
  }
  pr = 0i64;
  v138 = 0i64;
  v137 = 0i64;
  v139 = 0i64;
  Scaleform::GFx::Stream::ReadRect((Scaleform::GFx::Stream *)pAltStream, &pr);
  Scaleform::GFx::Stream::ReadRect((Scaleform::GFx::Stream *)pAltStream, &v138);
  if ( tagInfo->TagType == Tag_DefineShapeMorph2 )
  {
    Scaleform::GFx::Stream::ReadRect((Scaleform::GFx::Stream *)pAltStream, &v137);
    Scaleform::GFx::Stream::ReadRect((Scaleform::GFx::Stream *)pAltStream, &v139);
    v7 = LODWORD(pAltStream[2].Width) - HIDWORD(pAltStream[1].pDashes.pObject);
    BYTE1(pAltStream[1].Width) = 0;
    if ( v7 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1((Scaleform::GFx::Stream *)pAltStream);
    ++HIDWORD(pAltStream[1].pDashes.pObject);
  }
  else
  {
    v137 = pr;
    v139 = v138;
  }
  v8 = 0i64;
  Size = 0i64;
  fillStyles = 0i64;
  v9 = 0i64;
  pheapAddr.Data = 0i64;
  v10 = 0i64;
  Data = 0i64;
  v129.Data = 0i64;
  BYTE1(pAltStream[1].Width) = 0;
  v11 = LODWORD(pAltStream[2].Width) - HIDWORD(pAltStream[1].pDashes.pObject);
  pheapAddr.Size = 0i64;
  pheapAddr.Policy.Capacity = 0i64;
  v126 = 0i64;
  v129.Size = 0i64;
  v129.Policy.Capacity = 0i64;
  if ( v11 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer((Scaleform::GFx::Stream *)pAltStream, 4);
  v12 = *(_QWORD *)&pAltStream[2].Color;
  pObject_high = HIDWORD(pAltStream[1].pDashes.pObject);
  v14 = ((*(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 1) + v12) | ((*(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 2) + v12) | (*(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 3) + v12) << 8)) << 8)) << 8) | *(unsigned __int8 *)(pObject_high + v12);
  BYTE1(pAltStream[1].Width) = 0;
  v114 = v14;
  v15 = pObject_high + 4;
  *(float *)&pObject_high = pAltStream[2].Width;
  HIDWORD(pAltStream[1].pDashes.pObject) = v15;
  v113 = LODWORD(pAltStream[2].Units) + v15 - pObject_high;
  if ( (int)pObject_high - v15 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1((Scaleform::GFx::Stream *)pAltStream);
  v16 = HIDWORD(pAltStream[1].pDashes.pObject);
  v17 = v16 + 1;
  v18 = *(unsigned __int8 *)(v16 + *(_QWORD *)&pAltStream[2].Color);
  HIDWORD(pAltStream[1].pDashes.pObject) = v16 + 1;
  v19 = v18;
  fillStyleCount = v18;
  if ( v18 == 255 )
  {
    v20 = LODWORD(pAltStream[2].Width) - v17;
    BYTE1(pAltStream[1].Width) = 0;
    if ( v20 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer((Scaleform::GFx::Stream *)pAltStream, 2);
    v21 = HIDWORD(pAltStream[1].pDashes.pObject);
    v19 = *(unsigned __int8 *)(v21 + *(_QWORD *)&pAltStream[2].Color) | (*(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 1)
                                                                                            + *(_QWORD *)&pAltStream[2].Color) << 8);
    HIDWORD(pAltStream[1].pDashes.pObject) = v21 + 2;
    fillStyleCount = v19;
  }
  v22 = 0;
  needResolve[0] = 0;
  if ( v19 )
  {
    v23 = v123;
    v24 = v6;
    v25 = v19;
    do
    {
      TagType = v23->TagType;
      fs1.pFill.pObject = 0i64;
      v133.pFill.pObject = 0i64;
      Scaleform::GFx::MorphCharacterDef::ReadMorphFillStyle(v24, pa, TagType, &fs1, &v133, needResolve);
      Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &pheapAddr,
        &pheapAddr,
        v9 + 1);
      pObject = (Scaleform::RefCountVImpl *)fs1.pFill.pObject;
      Size = pheapAddr.Size;
      fillStyles = pheapAddr.Data;
      v28 = &pheapAddr.Data[pheapAddr.Size - 1];
      if ( v28 )
      {
        v28->Color = fs1.Color;
        if ( pObject )
          Scaleform::Render::RenderBuffer::AddRef(pObject);
        v28->pFill.pObject = (Scaleform::Render::ComplexFill *)pObject;
      }
      Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &v129,
        &v129,
        v10 + 1);
      v29 = (Scaleform::RefCountVImpl *)v133.pFill.pObject;
      v126 = v129.Size;
      Data = v129.Data;
      v30 = &v129.Data[v129.Size - 1];
      if ( v30 )
      {
        v30->Color = v133.Color;
        if ( v29 )
          Scaleform::Render::RenderBuffer::AddRef(v29);
        v30->pFill.pObject = (Scaleform::Render::ComplexFill *)v29;
      }
      if ( v29 )
        Scaleform::RefCountImpl::Release(v29);
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      v10 = v126;
      v9 = Size;
      --v25;
    }
    while ( v25 );
    v22 = needResolve[0];
    pAltStream = strokeStyles;
    v6 = v110;
  }
  v31 = LODWORD(pAltStream[2].Width) - HIDWORD(pAltStream[1].pDashes.pObject);
  memset(&v131, 0, sizeof(v131));
  memset(&v130, 0, sizeof(v130));
  BYTE1(pAltStream[1].Width) = 0;
  if ( v31 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1((Scaleform::GFx::Stream *)pAltStream);
  v32 = HIDWORD(pAltStream[1].pDashes.pObject);
  v33 = *(unsigned __int8 *)(v32 + *(_QWORD *)&pAltStream[2].Color);
  HIDWORD(pAltStream[1].pDashes.pObject) = v32 + 1;
  v34 = v33;
  strokeStyleCount = v33;
  if ( v33 == 255 )
  {
    v35 = LODWORD(pAltStream[2].Width) - (v32 + 1);
    BYTE1(pAltStream[1].Width) = 0;
    if ( v35 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer((Scaleform::GFx::Stream *)pAltStream, 2);
    v36 = HIDWORD(pAltStream[1].pDashes.pObject);
    v34 = *(unsigned __int8 *)(v36 + *(_QWORD *)&pAltStream[2].Color) | (*(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 1)
                                                                                            + *(_QWORD *)&pAltStream[2].Color) << 8);
    HIDWORD(pAltStream[1].pDashes.pObject) = v36 + 2;
    strokeStyleCount = v34;
  }
  v37 = v34;
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &v131,
    &v131,
    v34);
  v38 = v131.Data;
  strokeStyles = v131.Data;
  if ( v34 )
  {
    p_pDashes = &v131.Data->pDashes;
    v40 = v34;
    do
    {
      if ( p_pDashes != (Scaleform::Ptr<Scaleform::Render::DashArray> *)32 )
      {
        p_pDashes[-1].pObject = 0i64;
        p_pDashes->pObject = 0i64;
      }
      p_pDashes += 5;
      --v40;
    }
    while ( v40 );
  }
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &v130,
    &v130,
    v34);
  v124 = v130.Data;
  if ( v34 )
  {
    v41 = &v130.Data->pDashes;
    v42 = v34;
    do
    {
      if ( v41 != (Scaleform::Ptr<Scaleform::Render::DashArray> *)32 )
      {
        v41[-1].pObject = 0i64;
        v41->pObject = 0i64;
      }
      v41 += 5;
      --v42;
    }
    while ( v42 );
    p_Flags = &v124->Flags;
    v44 = (char *)((char *)v124 - (char *)v38);
    v122 = (char *)((char *)v124 - (char *)v38);
    v45 = (char *)v38 - (char *)v124;
    do
    {
      v46 = LODWORD(pAltStream[2].Width) - HIDWORD(pAltStream[1].pDashes.pObject);
      BYTE1(pAltStream[1].Width) = 0;
      if ( v46 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer((Scaleform::GFx::Stream *)pAltStream, 2);
      v47 = *(_QWORD *)&pAltStream[2].Color;
      v48 = HIDWORD(pAltStream[1].pDashes.pObject);
      v49 = *(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 1) + v47) << 8;
      LODWORD(v47) = *(unsigned __int8 *)(v48 + v47);
      HIDWORD(pAltStream[1].pDashes.pObject) = v48 + 2;
      *(float *)((char *)p_Flags + v45 - 8) = (float)(int)(v47 | v49);
      LODWORD(v48) = LODWORD(pAltStream[2].Width) - HIDWORD(pAltStream[1].pDashes.pObject);
      BYTE1(pAltStream[1].Width) = 0;
      if ( (int)v48 < 2 )
        Scaleform::GFx::Stream::PopulateBuffer((Scaleform::GFx::Stream *)pAltStream, 2);
      v50 = *(_QWORD *)&pAltStream[2].Color;
      v51 = HIDWORD(pAltStream[1].pDashes.pObject);
      v52 = *(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 1) + v50) << 8;
      LODWORD(v50) = *(unsigned __int8 *)(v51 + v50);
      HIDWORD(pAltStream[1].pDashes.pObject) = v51 + 2;
      *p_Flags = 0;
      v53 = (char *)p_Flags + v45;
      *((float *)p_Flags - 2) = (float)(int)(v50 | v52);
      *(unsigned int *)((char *)p_Flags + v45) = 0;
      *(_DWORD *)&v44[(_QWORD)v53 - 4] = 1028443341;
      p_TagType = &v123->TagType;
      *((_DWORD *)v53 - 1) = 1028443341;
      p_Flags[1] = 1077936128;
      *(unsigned int *)((char *)p_Flags + v45 + 4) = 1077936128;
      if ( *p_TagType == Tag_DefineShapeMorph2 )
      {
        v55 = LODWORD(pAltStream[2].Width) - HIDWORD(pAltStream[1].pDashes.pObject);
        BYTE1(pAltStream[1].Width) = 0;
        if ( v55 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer((Scaleform::GFx::Stream *)pAltStream, 2);
        v56 = *(_QWORD *)&pAltStream[2].Color;
        v57 = HIDWORD(pAltStream[1].pDashes.pObject);
        v58 = *(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 1) + v56) << 8;
        LODWORD(v56) = *(unsigned __int8 *)(v57 + v56);
        HIDWORD(pAltStream[1].pDashes.pObject) = v57 + 2;
        v59 = Scaleform::GFx::ConvertSwfLineStyles(v56 | v58);
        *p_Flags = v59;
        *(unsigned int *)((char *)p_Flags + v45) = v59;
        if ( (v59 & 0x20) != 0 )
        {
          v60 = LODWORD(pAltStream[2].Width) - HIDWORD(pAltStream[1].pDashes.pObject);
          BYTE1(pAltStream[1].Width) = 0;
          if ( v60 < 2 )
            Scaleform::GFx::Stream::PopulateBuffer((Scaleform::GFx::Stream *)pAltStream, 2);
          v61 = *(_QWORD *)&pAltStream[2].Color;
          v62 = HIDWORD(pAltStream[1].pDashes.pObject);
          v63 = *(unsigned __int8 *)((unsigned int)(HIDWORD(pAltStream[1].pDashes.pObject) + 1) + v61) << 8;
          LODWORD(v61) = *(unsigned __int8 *)(v62 + v61);
          HIDWORD(pAltStream[1].pDashes.pObject) = v62 + 2;
          v64 = (float)(int)(v61 | v63) * 0.00390625;
          *((float *)p_Flags + 1) = v64;
          *(float *)((char *)p_Flags + v45 + 4) = v64;
        }
      }
      v65 = *p_TagType;
      if ( (*((_BYTE *)p_Flags + v45) & 8) != 0 )
      {
        v134.pFill.pObject = 0i64;
        v135.pFill.pObject = 0i64;
        Scaleform::GFx::MorphCharacterDef::ReadMorphFillStyle(v6, pa, v65, &v134, &v135, needResolve);
        v66 = v134.pFill.pObject;
        *(unsigned int *)((char *)p_Flags + v45 + 8) = v134.Color;
        if ( v66 )
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v66);
        v67 = *(Scaleform::RefCountVImpl **)((char *)p_Flags + v45 + 16);
        if ( v67 )
          Scaleform::RefCountImpl::Release(v67);
        v68 = v135.pFill.pObject;
        Color = v135.Color;
        *(_QWORD *)((char *)p_Flags + v45 + 16) = v66;
        p_Flags[2] = Color;
        if ( v68 )
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v68);
        v70 = (Scaleform::RefCountVImpl *)*((_QWORD *)p_Flags + 2);
        if ( v70 )
          Scaleform::RefCountImpl::Release(v70);
        *((_QWORD *)p_Flags + 2) = v68;
        v71 = v66->pGradient.pObject;
        if ( v71 && v71->RecordCount )
          *(unsigned int *)((char *)p_Flags + v45 + 8) = v71->pRecords->ColorV.Raw;
        v72 = v68->pGradient.pObject;
        if ( v72 && v72->RecordCount )
          p_Flags[2] = v72->pRecords->ColorV.Raw;
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v68);
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v66);
      }
      else
      {
        Scaleform::GFx::LoadProcess::ReadRgbaTag(pa, &pc, v65);
        Scaleform::GFx::LoadProcess::ReadRgbaTag(pa, &v119, *p_TagType);
        *(unsigned int *)((char *)p_Flags + v45 + 8) = pc.Raw;
        p_Flags[2] = v119.Raw;
      }
      v6 = v110;
      p_Flags += 10;
      v44 = v122;
      --v37;
    }
    while ( v37 );
    v22 = needResolve[0];
  }
  v73 = LODWORD(pAltStream[2].Units) + HIDWORD(pAltStream[1].pDashes.pObject) - LODWORD(pAltStream[2].Width);
  v74 = v113 + v114;
  if ( v113 + v114 < v73 )
  {
    v80 = v110;
    v120 = 71;
    v88 = (Scaleform::GFx::ShapeDataBase *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                             Scaleform::Memory::pGlobalHeap,
                                             v110,
                                             80i64,
                                             &v120);
    v89 = (Scaleform::GFx::ConstShapeWithStyles *)v88;
    if ( v88 )
    {
      Scaleform::GFx::ShapeDataBase::ShapeDataBase(v88, Empty_Shape);
      v89->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::GFx::ConstShapeWithStyles::`vftable';
      v89->Styles = 0i64;
      *(_QWORD *)&v89->FillStylesNum = 0i64;
      *(_QWORD *)&v89->Bound.x1 = 0i64;
      *(_QWORD *)&v89->Bound.x2 = 0i64;
      *(_QWORD *)&v89->RectBound.x1 = 0i64;
      *(_QWORD *)&v89->RectBound.x2 = 0i64;
    }
    else
    {
      v89 = 0i64;
    }
    v90 = (Scaleform::RefCountVImpl *)v80->pShape1.pObject;
    if ( v90 )
      Scaleform::RefCountImpl::Release(v90);
    v80->pShape1.pObject = v89;
    v121 = 71;
    v91 = (Scaleform::GFx::ShapeDataBase *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                             Scaleform::Memory::pGlobalHeap,
                                             v80,
                                             80i64,
                                             &v121);
    v92 = (Scaleform::GFx::ConstShapeWithStyles *)v91;
    if ( v91 )
    {
      Scaleform::GFx::ShapeDataBase::ShapeDataBase(v91, Empty_Shape);
      v92->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::GFx::ConstShapeWithStyles::`vftable';
      v92->Styles = 0i64;
      *(_QWORD *)&v92->FillStylesNum = 0i64;
      *(_QWORD *)&v92->Bound.x1 = 0i64;
      *(_QWORD *)&v92->Bound.x2 = 0i64;
      *(_QWORD *)&v92->RectBound.x1 = 0i64;
      *(_QWORD *)&v92->RectBound.x2 = 0i64;
    }
    else
    {
      v92 = 0i64;
    }
    v93 = (Scaleform::RefCountVImpl *)v80->pShape2.pObject;
    if ( v93 )
      Scaleform::RefCountImpl::Release(v93);
    v87 = v124;
    v86 = Data;
    v80->pShape2.pObject = v92;
  }
  else
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "MorphCharacterDef, first shape:\n");
    v114 = 71;
    v75 = (Scaleform::GFx::ConstShapeWithStyles *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    v110,
                                                    80i64,
                                                    &v114);
    if ( v75 )
    {
      v75->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::RefCountImplCore::`vftable';
      v75->RefCount = 1;
      v75->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::GFx::ConstShapeWithStyles::`vftable';
      v75->Paths = 0i64;
      v75->Flags = 0;
      v75->Styles = 0i64;
      *(_QWORD *)&v75->FillStylesNum = 0i64;
      *(_QWORD *)&v75->Bound.x1 = 0i64;
      *(_QWORD *)&v75->Bound.x2 = 0i64;
      *(_QWORD *)&v75->RectBound.x1 = 0i64;
      *(_QWORD *)&v75->RectBound.x2 = 0i64;
    }
    else
    {
      v75 = 0i64;
    }
    v76 = v110;
    v77 = (Scaleform::RefCountVImpl *)v110->pShape1.pObject;
    if ( v77 )
    {
      Scaleform::RefCountImpl::Release(v77);
      v76 = v110;
    }
    v78 = pa;
    v76->pShape1.pObject = v75;
    v79 = v74 - v73;
    v80 = v110;
    v81 = v123;
    LOBYTE(fs2) = 0;
    v110->pShape1.pObject->Read(v110->pShape1.pObject, v78, v123->TagType, v79, fs2);
    Scaleform::GFx::ConstShapeWithStyles::SetStyles(
      v80->pShape1.pObject,
      fillStyleCount,
      fillStyles,
      strokeStyleCount,
      strokeStyles);
    if ( v22 )
      v80->pShape1.pObject->Flags |= 4u;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "MorphCharacterDef, second shape:\n");
    Scaleform::GFx::Stream::SetPosition((Scaleform::GFx::Stream *)pAltStream, v74);
    v113 = 71;
    v82 = (Scaleform::GFx::ConstShapeWithStyles *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    v80,
                                                    80i64,
                                                    &v113);
    v83 = v82;
    if ( v82 )
    {
      v82->Paths = 0i64;
      v82->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::RefCountImplCore::`vftable';
      v82->RefCount = 1;
      v82->__vftable = (Scaleform::GFx::ConstShapeWithStyles_vtbl *)&Scaleform::GFx::ConstShapeWithStyles::`vftable';
      v82->Flags = 0;
      v82->Styles = 0i64;
      *(_QWORD *)&v82->FillStylesNum = 0i64;
      *(_QWORD *)&v82->Bound.x1 = 0i64;
      *(_QWORD *)&v82->Bound.x2 = 0i64;
      *(_QWORD *)&v82->RectBound.x1 = 0i64;
      *(_QWORD *)&v82->RectBound.x2 = 0i64;
    }
    else
    {
      v83 = 0i64;
    }
    v84 = (Scaleform::RefCountVImpl *)v80->pShape2.pObject;
    if ( v84 )
      Scaleform::RefCountImpl::Release(v84);
    v85 = pa;
    v80->pShape2.pObject = v83;
    LOBYTE(fs2a) = 0;
    v83->Read(v83, v85, v81->TagType, v81->TagLength + v81->TagDataOffset - v74, fs2a);
    v86 = Data;
    v87 = v124;
    Scaleform::GFx::ConstShapeWithStyles::SetStyles(v80->pShape2.pObject, fillStyleCount, Data, strokeStyleCount, v124);
    if ( v22 )
      v80->pShape2.pObject->Flags |= 4u;
  }
  LODWORD(v122) = 2;
  v94 = (Scaleform::Render::ShapeMeshProvider *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  v80,
                                                  144i64,
                                                  &v122);
  if ( v94 )
  {
    Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(v94, v80->pShape1.pObject, v80->pShape2.pObject);
    v8 = v95;
  }
  v96 = v80->pShapeMeshProvider.pObject;
  if ( v96 )
    v96->Release(&v96->Scaleform::Render::MeshProvider);
  v80->pShapeMeshProvider.pObject = v8;
  v97 = v130.Size;
  if ( v130.Size )
  {
    v98 = (Scaleform::RefCountVImpl **)((char *)v87 + 32 * v130.Size + 8 * v130.Size - 16);
    do
    {
      v99 = v98[1];
      if ( v99 )
        Scaleform::RefCountImpl::Release(v99);
      if ( *v98 )
        Scaleform::RefCountImpl::Release(*v98);
      v98 -= 5;
      --v97;
    }
    while ( v97 );
  }
  if ( v87 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v87);
  v100 = v131.Size;
  if ( v131.Size )
  {
    p_pFill = &strokeStyles[v131.Size - 1].pFill;
    do
    {
      v102 = (Scaleform::RefCountVImpl *)p_pFill[1].pObject;
      if ( v102 )
        Scaleform::RefCountImpl::Release(v102);
      if ( p_pFill->pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p_pFill->pObject);
      p_pFill -= 5;
      --v100;
    }
    while ( v100 );
  }
  if ( strokeStyles )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v103 = v126;
  if ( v126 )
  {
    v104 = (Scaleform::RefCountVImpl **)&v86[v126 - 1].pFill;
    do
    {
      if ( *v104 )
        Scaleform::RefCountImpl::Release(*v104);
      v104 -= 2;
      --v103;
    }
    while ( v103 );
  }
  if ( v86 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v86);
  v105 = Size;
  if ( Size )
  {
    v106 = (Scaleform::RefCountVImpl **)&fillStyles[Size - 1].pFill;
    do
    {
      if ( *v106 )
        Scaleform::RefCountImpl::Release(*v106);
      v106 -= 2;
      --v105;
    }
    while ( v105 );
  }
  if ( fillStyles )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::GFx::MorphCharacterDef::ReadMorphFillStyle(
        Scaleform::GFx::MorphCharacterDef *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType,
        Scaleform::Render::FillStyleType *fs1,
        Scaleform::Render::FillStyleType *fs2,
        bool *needResolve)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rsi
  int v10; // eax
  __int64 Pos; // rcx
  int v12; // ebx
  int v13; // er14
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm13_4
  float v17; // xmm14_4
  float v18; // xmm11_4
  float v19; // xmm9_4
  float v20; // xmm15_4
  float v21; // xmm3_4
  int v22; // eax
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm12_4
  float v27; // xmm10_4
  __int64 v28; // rcx
  unsigned __int8 v29; // dl
  __int64 v30; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 v32; // rax
  Scaleform::Render::ComplexFill *v33; // rbx
  Scaleform::RefCountVImpl *v34; // rcx
  int v35; // er14
  int v36; // er14
  Scaleform::Render::GradientType v37; // ebx
  Scaleform::Render::GradientData *v38; // rax
  __int64 v39; // rax
  Scaleform::RefCountVImpl **p_pGradient; // rax
  Scaleform::Render::GradientData *v41; // rax
  Scaleform::Render::GradientData *v42; // rax
  Scaleform::Render::GradientData *v43; // r14
  Scaleform::Render::ComplexFill *v44; // rbx
  Scaleform::RefCountVImpl *v45; // rcx
  Scaleform::GFx::TagType v46; // esi
  Scaleform::GFx::SWFProcessInfo *v47; // r14
  int v48; // eax
  __int64 v49; // rcx
  unsigned __int8 v50; // bl
  __int64 v51; // r8
  Scaleform::GFx::SWFProcessInfo *v52; // r14
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int8 v55; // bl
  __int64 v56; // r8
  bool v57; // zf
  int v58; // eax
  __int64 v59; // r9
  __int16 v60; // r8
  int v61; // eax
  __int64 v62; // r9
  __int16 v63; // r8
  Scaleform::Render::ComplexFill *v64; // rax
  float v65; // xmm1_4
  float v66; // xmm0_4
  float v67; // xmm1_4
  Scaleform::Render::ComplexFill *v68; // rax
  float v69; // xmm0_4
  int v70; // eax
  __int64 v71; // r9
  int v72; // edx
  Scaleform::GFx::Resource *pResource; // rdi
  char *v74; // rbx
  Scaleform::RefCountVImpl *v75; // rcx
  __int128 v76; // xmm0
  int v77; // er14
  int v78; // er14
  int v79; // er14
  __int64 v80; // rax
  __int64 v81; // rbx
  Scaleform::RefCountVImpl *v82; // rcx
  __int128 v83; // xmm0
  Scaleform::Render::ComplexFill *v84; // rax
  Scaleform::Render::ComplexFill *v85; // rcx
  float v86; // ebx
  Scaleform::Render::Image *v87; // rbx
  Scaleform::Render::ComplexFill *v88; // rdi
  Scaleform::Render::Image *v89; // rcx
  Scaleform::Render::ComplexFill *v90; // rdi
  Scaleform::Render::Image *v91; // rcx
  Scaleform::RefCountVImpl *v92; // rcx
  Scaleform::RefCountVImpl *v93; // rcx
  unsigned __int8 v94; // [rsp+20h] [rbp-E0h]
  bool v95; // [rsp+21h] [rbp-DFh]
  char v96; // [rsp+22h] [rbp-DEh]
  Scaleform::LogMessageId id[2]; // [rsp+28h] [rbp-D8h] BYREF
  Scaleform::Render::Color v98; // [rsp+30h] [rbp-D0h] BYREF
  float v99; // [rsp+34h] [rbp-CCh]
  Scaleform::GFx::ResourceId rid[2]; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::GFx::ResourceHandle phandle; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Color pc; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::Color v103; // [rsp+54h] [rbp-ACh] BYREF
  Scaleform::GFx::TagType tagTypea; // [rsp+58h] [rbp-A8h]
  float v105; // [rsp+60h] [rbp-A0h]
  float v106; // [rsp+70h] [rbp-90h]
  float v107; // [rsp+80h] [rbp-80h]
  bool *v108; // [rsp+90h] [rbp-70h]
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // [rsp+98h] [rbp-68h]
  Scaleform::Render::Matrix2x4<float> v110; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::Matrix2x4<float> v111; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::Render::Matrix2x4<float> v112; // [rsp+E0h] [rbp-20h] BYREF
  Scaleform::Render::Matrix2x4<float> v113; // [rsp+100h] [rbp+0h] BYREF
  float v114; // [rsp+120h] [rbp+20h]
  float v115; // [rsp+124h] [rbp+24h]
  int v116; // [rsp+128h] [rbp+28h]
  float v117; // [rsp+12Ch] [rbp+2Ch]
  float v118; // [rsp+130h] [rbp+30h]
  float v119; // [rsp+134h] [rbp+34h]
  int v120; // [rsp+138h] [rbp+38h]
  float v121; // [rsp+13Ch] [rbp+3Ch]
  float v122; // [rsp+140h] [rbp+40h]
  int v123; // [rsp+144h] [rbp+44h]
  int v124; // [rsp+148h] [rbp+48h]
  float v125; // [rsp+14Ch] [rbp+4Ch]
  float v126; // [rsp+150h] [rbp+50h]
  float v127; // [rsp+154h] [rbp+54h]
  int v128; // [rsp+158h] [rbp+58h]
  float v129; // [rsp+15Ch] [rbp+5Ch]
  __int128 v130; // [rsp+160h] [rbp+60h]
  int v131; // [rsp+170h] [rbp+70h]
  __int64 v132; // [rsp+174h] [rbp+74h]
  float v133; // [rsp+17Ch] [rbp+7Ch]
  __int128 v134; // [rsp+180h] [rbp+80h]
  int v135; // [rsp+190h] [rbp+90h]
  __int64 v136; // [rsp+194h] [rbp+94h]
  float v137; // [rsp+19Ch] [rbp+9Ch]
  Scaleform::Render::Matrix2x4<float> pm; // [rsp+1A0h] [rbp+A0h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+1C0h] [rbp+C0h] BYREF
  Scaleform::Render::Matrix2x4<float> v140; // [rsp+1E0h] [rbp+E0h] BYREF
  Scaleform::Render::Matrix2x4<float> v141; // [rsp+200h] [rbp+100h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  tagTypea = tagType;
  v108 = needResolve;
  p_ProcessInfo = pAltStream;
  if ( !pAltStream )
  {
    pAltStream = &p->ProcessInfo;
    p_ProcessInfo = &p->ProcessInfo;
  }
  v10 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v10 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  Pos = pAltStream->Stream.Pos;
  v12 = pAltStream->Stream.pBuffer[Pos];
  pAltStream->Stream.Pos = Pos + 1;
  v96 = v12;
  v13 = v12;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "morph fill style type = 0x%X\n");
  if ( !(_BYTE)v12 )
  {
    Scaleform::GFx::Stream::ReadRgba(&pAltStream->Stream, &pc);
    Scaleform::GFx::Stream::ReadRgba(&pAltStream->Stream, &v103);
    fs1->Color = pc.Raw;
    fs2->Color = v103.Raw;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "morph fill style begin color: ");
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "morph fill style end color: ");
    return;
  }
  if ( (v12 & 0x10) != 0 )
  {
    *(_OWORD *)&pm.M[0][0] = _xmm;
    *(_OWORD *)&pm.M[1][0] = _xmm;
    *(_OWORD *)&m.M[0][0] = _xmm;
    *(_OWORD *)&m.M[1][0] = _xmm;
    Scaleform::GFx::Stream::ReadMatrix(&pAltStream->Stream, &pm);
    Scaleform::GFx::Stream::ReadMatrix(&pAltStream->Stream, &m);
    if ( (_BYTE)v12 == 16 )
    {
      v14 = 0.0;
      v15 = 0.0;
    }
    else
    {
      v14 = FLOAT_0_5;
      v15 = FLOAT_0_5;
    }
    *(_OWORD *)&v112.M[0][0] = _xmm;
    *(_OWORD *)&v112.M[1][0] = _xmm;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v112, &pm);
    v130 = _xmm;
    v131 = 0;
    v132 = 939524096i64;
    v120 = 0;
    v116 = 0;
    v133 = v14;
    v16 = (float)(v112.M[1][0] * 0.000030517578) + (float)(v112.M[0][0] * 0.0);
    v105 = (float)(v112.M[1][0] * 0.0) + (float)(v112.M[0][0] * 0.000030517578);
    v114 = v105;
    v118 = v16;
    v17 = (float)(v112.M[1][1] * 0.000030517578) + (float)(v112.M[0][1] * 0.0);
    v106 = (float)(v112.M[1][1] * 0.0) + (float)(v112.M[0][1] * 0.000030517578);
    v115 = v106;
    v119 = v17;
    *(_OWORD *)&v113.M[0][0] = _xmm;
    *(_OWORD *)&v113.M[1][0] = _xmm;
    v18 = (float)((float)(v112.M[1][3] * 0.0) + (float)(v112.M[0][3] * 0.000030517578)) + 0.5;
    v19 = v14 + (float)((float)(v112.M[1][3] * 0.000030517578) + (float)(v112.M[0][3] * 0.0));
    v117 = v18;
    v121 = v19;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v113, &m);
    v134 = _xmm;
    v135 = 0;
    v136 = 939524096i64;
    v137 = v15;
    v20 = (float)(v113.M[1][0] * 0.000030517578) + (float)(v113.M[0][0] * 0.0);
    v107 = (float)(v113.M[1][0] * 0.0) + (float)(v113.M[0][0] * 0.000030517578);
    v122 = v107;
    v126 = v20;
    v21 = v113.M[1][1];
    v22 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    v23 = v113.M[0][1] * 0.0;
    v128 = 0;
    v24 = v113.M[1][1] * 0.000030517578;
    v124 = 0;
    v25 = v113.M[0][1] * 0.000030517578;
    pAltStream->Stream.UnusedBits = 0;
    v99 = v24 + v23;
    v127 = v24 + v23;
    *(float *)&v108 = (float)(v21 * 0.0) + v25;
    v123 = (int)v108;
    v26 = (float)((float)(v113.M[1][3] * 0.0) + (float)(v113.M[0][3] * 0.000030517578)) + 0.5;
    v27 = v15 + (float)((float)(v113.M[1][3] * 0.000030517578) + (float)(v113.M[0][3] * 0.0));
    v125 = v26;
    v129 = v27;
    if ( v22 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
    v28 = pAltStream->Stream.Pos;
    v95 = 0;
    v29 = pAltStream->Stream.pBuffer[v28];
    pAltStream->Stream.Pos = v28 + 1;
    v94 = v29;
    if ( tagType == Tag_DefineShapeMorph2 || (_BYTE)v12 == 19 )
    {
      v95 = (v29 & 0x10) != 0;
      v94 = v29 & 0xF;
    }
    v30 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            80i64);
    if ( v30 )
    {
      *(_QWORD *)v30 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v30 + 8) = 1;
      *(_QWORD *)v30 = &Scaleform::Render::ComplexFill::`vftable';
      *(_QWORD *)(v30 + 16) = 0i64;
      *(_QWORD *)(v30 + 24) = 0i64;
      *(_QWORD *)(v30 + 32) = 1065353216i64;
      *(_QWORD *)(v30 + 40) = 0i64;
      *(_DWORD *)(v30 + 48) = 0;
      *(_QWORD *)(v30 + 52) = 1065353216i64;
      *(_DWORD *)(v30 + 60) = 0;
      *(_BYTE *)(v30 + 64) = 0;
      *(_DWORD *)(v30 + 68) = -1;
    }
    else
    {
      v30 = 0i64;
    }
    pObject = (Scaleform::RefCountVImpl *)fs1->pFill.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    fs1->pFill.pObject = (Scaleform::Render::ComplexFill *)v30;
    v32 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            80i64);
    v33 = (Scaleform::Render::ComplexFill *)v32;
    if ( v32 )
    {
      *(_QWORD *)v32 = &Scaleform::RefCountImplCore::`vftable';
      *(_QWORD *)v32 = &Scaleform::Render::ComplexFill::`vftable';
      *(_DWORD *)(v32 + 8) = 1;
      *(_QWORD *)(v32 + 16) = 0i64;
      *(_QWORD *)(v32 + 24) = 0i64;
      *(_QWORD *)(v32 + 32) = 1065353216i64;
      *(_QWORD *)(v32 + 40) = 0i64;
      *(_DWORD *)(v32 + 48) = 0;
      *(_QWORD *)(v32 + 52) = 1065353216i64;
      *(_DWORD *)(v32 + 60) = 0;
      *(_BYTE *)(v32 + 64) = 0;
      *(_DWORD *)(v32 + 68) = -1;
    }
    else
    {
      v33 = 0i64;
    }
    v34 = (Scaleform::RefCountVImpl *)fs2->pFill.pObject;
    if ( v34 )
      Scaleform::RefCountImpl::Release(v34);
    fs2->pFill.pObject = v33;
    v35 = v13 - 16;
    if ( v35 )
    {
      v36 = v35 - 2;
      if ( !v36 )
      {
        v37 = GradientRadial;
        goto LABEL_32;
      }
      if ( v36 == 1 )
      {
        v37 = GradientFocalPoint;
LABEL_32:
        v38 = (Scaleform::Render::GradientData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   48i64);
        if ( v38 )
        {
          Scaleform::Render::GradientData::GradientData(v38, v37, v94, v95);
          *(_QWORD *)&id[0].Id = v39;
        }
        else
        {
          *(_QWORD *)&id[0].Id = 0i64;
        }
        p_pGradient = (Scaleform::RefCountVImpl **)&fs1->pFill.pObject->pGradient;
        *(_QWORD *)&rid[0].Id = p_pGradient;
        if ( *p_pGradient )
        {
          Scaleform::RefCountImpl::Release(*p_pGradient);
          p_pGradient = *(Scaleform::RefCountVImpl ***)&rid[0].Id;
        }
        *p_pGradient = *(Scaleform::RefCountVImpl **)&id[0].Id;
        v41 = (Scaleform::Render::GradientData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   48i64);
        if ( v41 )
        {
          Scaleform::Render::GradientData::GradientData(v41, v37, v94, v95);
          v43 = v42;
        }
        else
        {
          v43 = 0i64;
        }
        v44 = fs2->pFill.pObject;
        v45 = (Scaleform::RefCountVImpl *)v44->pGradient.pObject;
        if ( v45 )
          Scaleform::RefCountImpl::Release(v45);
        v44->pGradient.pObject = v43;
        if ( v94 )
        {
          v46 = tagTypea;
          *(_QWORD *)&id[0].Id = 0i64;
          *(_QWORD *)&rid[0].Id = v94;
          do
          {
            v47 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
            if ( !v47 )
              v47 = &p->ProcessInfo;
            v48 = v47->Stream.DataSize - v47->Stream.Pos;
            v47->Stream.UnusedBits = 0;
            if ( v48 < 1 )
              Scaleform::GFx::Stream::PopulateBuffer1(&v47->Stream);
            v49 = v47->Stream.Pos;
            v50 = v47->Stream.pBuffer[v49];
            v47->Stream.Pos = v49 + 1;
            Scaleform::GFx::LoadProcess::ReadRgbaTag(p, &v98, v46);
            v51 = *(_QWORD *)&id[0].Id;
            *(Scaleform::Render::Color *)((char *)&fs1->pFill.pObject->pGradient.pObject->pRecords->ColorV
                                        + *(_QWORD *)&id[0].Id) = v98;
            *(&fs1->pFill.pObject->pGradient.pObject->pRecords->Ratio + v51) = v50;
            v52 = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
            if ( !v52 )
              v52 = &p->ProcessInfo;
            v53 = v52->Stream.DataSize - v52->Stream.Pos;
            v52->Stream.UnusedBits = 0;
            if ( v53 < 1 )
              Scaleform::GFx::Stream::PopulateBuffer1(&v52->Stream);
            v54 = v52->Stream.Pos;
            v55 = v52->Stream.pBuffer[v54];
            v52->Stream.Pos = v54 + 1;
            Scaleform::GFx::LoadProcess::ReadRgbaTag(p, &v98, v46);
            v56 = *(_QWORD *)&id[0].Id;
            *(Scaleform::Render::Color *)((char *)&fs2->pFill.pObject->pGradient.pObject->pRecords->ColorV
                                        + *(_QWORD *)&id[0].Id) = v98;
            *(&fs2->pFill.pObject->pGradient.pObject->pRecords->Ratio + v56) = v55;
            v57 = (*(_QWORD *)&rid[0].Id)-- == 1i64;
            *(_QWORD *)&id[0].Id = v56 + 8;
          }
          while ( !v57 );
          pAltStream = p_ProcessInfo;
        }
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "morph fsr: numGradients = %d\n");
        if ( v96 == 19 )
        {
          v58 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
          pAltStream->Stream.UnusedBits = 0;
          if ( v58 < 2 )
            Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
          v59 = pAltStream->Stream.Pos;
          v60 = pAltStream->Stream.pBuffer[v59] | (pAltStream->Stream.pBuffer[(unsigned int)(v59 + 1)] << 8);
          pAltStream->Stream.Pos = v59 + 2;
          fs1->pFill.pObject->pGradient.pObject->FocalRatio = (float)v60 * 0.00390625;
          v61 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
          pAltStream->Stream.UnusedBits = 0;
          if ( v61 < 2 )
            Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
          v62 = pAltStream->Stream.Pos;
          v63 = pAltStream->Stream.pBuffer[v62] | (pAltStream->Stream.pBuffer[(unsigned int)(v62 + 1)] << 8);
          pAltStream->Stream.Pos = v62 + 2;
          fs2->pFill.pObject->pGradient.pObject->FocalRatio = (float)v63 * 0.00390625;
        }
        v64 = fs1->pFill.pObject;
        v65 = v106;
        v64->ImageMatrix.M[0][0] = v105;
        v66 = v107;
        v64->ImageMatrix.M[0][1] = v65;
        v67 = *(float *)&v108;
        v64->ImageMatrix.M[0][2] = 0.0;
        v64->ImageMatrix.M[0][3] = v18;
        v64->ImageMatrix.M[1][0] = v16;
        v64->ImageMatrix.M[1][1] = v17;
        v64->ImageMatrix.M[1][2] = 0.0;
        v64->ImageMatrix.M[1][3] = v19;
        v68 = fs2->pFill.pObject;
        v68->ImageMatrix.M[0][0] = v66;
        v69 = v99;
        v68->ImageMatrix.M[0][1] = v67;
        v68->ImageMatrix.M[0][2] = 0.0;
        v68->ImageMatrix.M[0][3] = v26;
        v68->ImageMatrix.M[1][0] = v20;
        v68->ImageMatrix.M[1][1] = v69;
        v68->ImageMatrix.M[1][2] = 0.0;
        v68->ImageMatrix.M[1][3] = v27;
        return;
      }
    }
    v37 = GradientLinear;
    goto LABEL_32;
  }
  if ( (v12 & 0x40) != 0 )
  {
    v70 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v70 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    v71 = pAltStream->Stream.Pos;
    v72 = pAltStream->Stream.pBuffer[v71] | (pAltStream->Stream.pBuffer[(unsigned int)(v71 + 1)] << 8);
    pAltStream->Stream.Pos = v71 + 2;
    v99 = *(float *)&v72;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "morph fsr BitmapChar = %d\n");
    *(_OWORD *)&v140.M[0][0] = _xmm;
    *(_OWORD *)&v140.M[1][0] = _xmm;
    *(_OWORD *)&v141.M[0][0] = _xmm;
    *(_OWORD *)&v141.M[1][0] = _xmm;
    Scaleform::GFx::Stream::ReadMatrix(&pAltStream->Stream, &v140);
    Scaleform::GFx::Stream::ReadMatrix(&pAltStream->Stream, &v141);
    pResource = 0i64;
    *(_OWORD *)&v110.M[0][0] = _xmm;
    *(_OWORD *)&v110.M[1][0] = _xmm;
    phandle.HType = RH_Pointer;
    phandle.pResource = 0i64;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v110, &v140);
    *(_OWORD *)&v111.M[0][0] = _xmm;
    *(_OWORD *)&v111.M[1][0] = _xmm;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v111, &v141);
    v74 = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 80i64, 0i64);
    if ( v74 )
    {
      *(_QWORD *)v74 = &Scaleform::RefCountImplCore::`vftable';
      *((_DWORD *)v74 + 2) = 1;
      *(_QWORD *)v74 = &Scaleform::Render::ComplexFill::`vftable';
      *((_QWORD *)v74 + 2) = 0i64;
      *((_QWORD *)v74 + 3) = 0i64;
      *((_QWORD *)v74 + 4) = 1065353216i64;
      *((_QWORD *)v74 + 5) = 0i64;
      *((_DWORD *)v74 + 12) = 0;
      *(_QWORD *)(v74 + 52) = 1065353216i64;
      *((_DWORD *)v74 + 15) = 0;
      v74[64] = 0;
      *((_DWORD *)v74 + 17) = -1;
    }
    else
    {
      v74 = 0i64;
    }
    v75 = (Scaleform::RefCountVImpl *)fs1->pFill.pObject;
    if ( v75 )
      Scaleform::RefCountImpl::Release(v75);
    v76 = *(_OWORD *)&v110.M[0][0];
    fs1->pFill.pObject = (Scaleform::Render::ComplexFill *)v74;
    *((_OWORD *)v74 + 2) = v76;
    *((_OWORD *)v74 + 3) = *(_OWORD *)&v110.M[1][0];
    v77 = v13 - 64;
    if ( v77 )
    {
      v78 = v77 - 1;
      if ( v78 )
      {
        v79 = v78 - 1;
        if ( v79 )
        {
          if ( v79 == 1 )
            fs1->pFill.pObject->FillMode.Fill = 1;
        }
        else
        {
          fs1->pFill.pObject->FillMode.Fill = 0;
        }
      }
      else
      {
        fs1->pFill.pObject->FillMode.Fill = 3;
      }
    }
    else
    {
      fs1->pFill.pObject->FillMode.Fill = 2;
    }
    v80 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            80i64);
    v81 = v80;
    if ( v80 )
    {
      *(_QWORD *)v80 = &Scaleform::RefCountImplCore::`vftable';
      *(_QWORD *)v80 = &Scaleform::Render::ComplexFill::`vftable';
      *(_DWORD *)(v80 + 8) = 1;
      *(_QWORD *)(v80 + 16) = 0i64;
      *(_QWORD *)(v80 + 24) = 0i64;
      *(_QWORD *)(v80 + 32) = 1065353216i64;
      *(_QWORD *)(v80 + 40) = 0i64;
      *(_DWORD *)(v80 + 48) = 0;
      *(_QWORD *)(v80 + 52) = 1065353216i64;
      *(_DWORD *)(v80 + 60) = 0;
      *(_BYTE *)(v80 + 64) = 0;
      *(_DWORD *)(v80 + 68) = -1;
    }
    else
    {
      v81 = 0i64;
    }
    v82 = (Scaleform::RefCountVImpl *)fs2->pFill.pObject;
    if ( v82 )
      Scaleform::RefCountImpl::Release(v82);
    v83 = *(_OWORD *)&v111.M[0][0];
    fs2->pFill.pObject = (Scaleform::Render::ComplexFill *)v81;
    *(_OWORD *)(v81 + 32) = v83;
    *(_OWORD *)(v81 + 48) = *(_OWORD *)&v111.M[1][0];
    v84 = fs1->pFill.pObject;
    v85 = fs2->pFill.pObject;
    v86 = v99;
    rid[0] = LODWORD(v99);
    v85->FillMode.Fill = v84->FillMode.Fill;
    if ( Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(
           p->pLoadData.pObject,
           &phandle,
           (Scaleform::GFx::ResourceId)rid)
      && phandle.HType == RH_Pointer
      && phandle.pResource )
    {
      if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))phandle.pResource->GetResourceTypeCode)(phandle.pResource) & 0xFF00) == 256 )
      {
        if ( phandle.HType == RH_Pointer )
          pResource = phandle.pResource;
        v87 = (Scaleform::Render::Image *)pResource[1].__vftable;
        v88 = fs1->pFill.pObject;
        if ( v87 )
          v87->AddRef(v87);
        v89 = v88->pImage.pObject;
        if ( v89 )
          v89->Release(v89);
        v88->pImage.pObject = v87;
        v90 = fs2->pFill.pObject;
        if ( v87 )
          v87->AddRef(v87);
        v91 = v90->pImage.pObject;
        if ( v91 )
          v91->Release(v91);
        v90->pImage.pObject = v87;
      }
    }
    else
    {
      fs2->Color = -5776071;
      fs1->Color = -5776071;
      if ( phandle.HType == RH_Index )
      {
        fs1->pFill.pObject->BindIndex = phandle.BindIndex;
        fs2->pFill.pObject->BindIndex = phandle.BindIndex;
        *v108 = 1;
      }
      else
      {
        v92 = (Scaleform::RefCountVImpl *)fs2->pFill.pObject;
        if ( v92 )
          Scaleform::RefCountImpl::Release(v92);
        fs2->pFill.pObject = 0i64;
        v93 = (Scaleform::RefCountVImpl *)fs1->pFill.pObject;
        if ( v93 )
          Scaleform::RefCountImpl::Release(v93);
        fs1->pFill.pObject = fs2->pFill.pObject;
        if ( LODWORD(v86) != 0xFFFF )
        {
          id[0].Id = 135168;
          Scaleform::LogDebugMessage(
            (Scaleform::LogMessageId)id,
            "An image with resource id %d is not found in resource table.",
            v86);
        }
      }
    }
    if ( phandle.HType == RH_Pointer && phandle.pResource )
      Scaleform::GFx::Resource::Release(phandle.pResource);
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::TextKeyMap::KeyMapEntry *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::TextKeyMap::KeyMapEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          Data,
                                                          16 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::GFx::TextKeyMap::KeyMapEntry *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                16 * v5,
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::StrokeStyleType *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Render::StrokeStyleType *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Render::StrokeStyleType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     Data,
                                                     40 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::Render::StrokeStyleType *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           40 * v5,
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::RefCountVImpl **p_pFill; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy> *)this,
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
      p_pFill = (Scaleform::RefCountVImpl **)&this->Data[v7 - 1 + newSize].pFill;
      do
      {
        if ( *p_pFill )
          Scaleform::RefCountImpl::Release(*p_pFill);
        p_pFill -= 2;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::Render::ComplexFill> *p_pFill; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
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
        pObject = (Scaleform::RefCountVImpl *)p_pFill[1].pObject;
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
        if ( p_pFill->pObject )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p_pFill->pObject);
        p_pFill -= 5;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

