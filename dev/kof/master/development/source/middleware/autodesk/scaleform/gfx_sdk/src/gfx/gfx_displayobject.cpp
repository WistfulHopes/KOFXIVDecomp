#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"

Scaleform::GFx::DisplayObjectBase::~DisplayObjectBase(); // 0x140332580
Scaleform::Render::ContextImpl::Context & Scaleform::GFx::DisplayObjectBase::GetRenderContext(); // 0x1403343D0
Scaleform::Render::TreeNode * Scaleform::GFx::DisplayObjectBase::GetRenderNode(); // 0x1403343E0
Scaleform::Render::TreeContainer * Scaleform::GFx::DisplayObjectBase::ConvertToTreeContainer(); // 0x140332AD0
class Scaleform::Ptr<Scaleform::GFx::DisplayObject>
{
protected:
	Scaleform::GFx::DisplayObject * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DisplayObject>(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	Ptr<Scaleform::GFx::DisplayObject>(Scaleform::GFx::DisplayObject *);
	Ptr<Scaleform::GFx::DisplayObject>(Scaleform::Ptr<Scaleform::GFx::DisplayObject> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DisplayObject>(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	Ptr<Scaleform::GFx::DisplayObject>(Scaleform::GFx::DisplayObject &);
	Ptr<Scaleform::GFx::DisplayObject>();
	~Ptr<Scaleform::GFx::DisplayObject>();
	bool operator==(Scaleform::GFx::DisplayObject *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	bool operator!=(Scaleform::GFx::DisplayObject *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::GFx::DisplayObject &);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObject> & operator=(Scaleform::GFx::DisplayObject *);
	const Scaleform::Ptr<Scaleform::GFx::DisplayObject> & operator=(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & SetPtr(Scaleform::GFx::DisplayObject &);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & SetPtr(Scaleform::GFx::DisplayObject *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DisplayObject * & GetRawRef();
	Scaleform::GFx::DisplayObject * GetPtr();
	Scaleform::GFx::DisplayObject & operator*();
	Scaleform::GFx::DisplayObject * operator->();
	Scaleform::GFx::DisplayObject * operator class Scaleform::GFx::DisplayObject *();
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::GFx::DisplayObject *);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::Pickable<Scaleform::GFx::DisplayObject>);
	Scaleform::Ptr<Scaleform::GFx::DisplayObject> & Pick(Scaleform::Ptr<Scaleform::GFx::DisplayObject> &);
};
const Scaleform::Render::Matrix2x4<float> & Scaleform::GFx::DisplayObjectBase::GetMatrix(); // 0x140333F20
void Scaleform::GFx::DisplayObjectBase::SetMatrix(const Scaleform::Render::Matrix2x4<float> & m); // 0x1403370A0
const Scaleform::Render::Matrix3x4<float> & Scaleform::GFx::DisplayObjectBase::GetMatrix3D(); // 0x140333E50
void Scaleform::GFx::DisplayObjectBase::SetMatrix3D(const Scaleform::Render::Matrix3x4<float> & m); // 0x140336E30
bool Scaleform::GFx::DisplayObjectBase::GetViewMatrix3D(Scaleform::Render::Matrix3x4<float> * m, bool bInherit); // 0x1403347B0
void Scaleform::GFx::DisplayObjectBase::SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> & m); // 0x140337D30
void Scaleform::GFx::DisplayObjectBase::ClearViewMatrix3D(); // 0x140332AB0
bool Scaleform::GFx::DisplayObjectBase::GetProjectionMatrix3D(Scaleform::Render::Matrix4x4<float> * m, bool bInherit); // 0x1403342A0
void Scaleform::GFx::DisplayObjectBase::SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> & m); // 0x1403373D0
void Scaleform::GFx::DisplayObjectBase::ClearProjectionMatrix3D(); // 0x140332A90
void Scaleform::GFx::DisplayObjectBase::UpdateViewAndPerspective(); // 0x140339A30
void Scaleform::GFx::DisplayObjectBase::SetFOV(double fovdeg); // 0x140336050
double Scaleform::GFx::DisplayObjectBase::GetFOV(); // 0x140333A00
void Scaleform::GFx::DisplayObjectBase::SetFocalLength(double focalLength); // 0x140336160
double Scaleform::GFx::DisplayObjectBase::GetFocalLength(); // 0x140333A70
void Scaleform::GFx::DisplayObjectBase::SetProjectionCenter(Scaleform::Render::Point<float> projCenter); // 0x140337280
Scaleform::Render::Point<float> Scaleform::GFx::DisplayObjectBase::GetProjectionCenter(); // 0x140334250
const Scaleform::Render::Cxform & Scaleform::GFx::DisplayObjectBase::GetCxform(); // 0x1403339B0
void Scaleform::GFx::DisplayObjectBase::SetCxform(const Scaleform::Render::Cxform & cx); // 0x140336020
void Scaleform::GFx::DisplayObjectBase::SetBlendMode(Scaleform::Render::BlendMode blend); // 0x140335EF0
Scaleform::Render::BlendMode Scaleform::GFx::DisplayObjectBase::GetBlendMode(); // 0x1403335C0
bool Scaleform::GFx::DisplayObjectBase::GetCacheAsBitmap(); // 0x1403338C0
void Scaleform::GFx::DisplayObjectBase::SetCacheAsBitmap(bool enable); // 0x140335F40
void Scaleform::GFx::DisplayObjectBase::SetFilters(const Scaleform::Render::FilterSet * filters); // 0x140336120
const Scaleform::Render::FilterSet * Scaleform::GFx::DisplayObjectBase::GetFilters(); // 0x140333A20
void Scaleform::GFx::DisplayObjectBase::BindAvmObj(Scaleform::GFx::AvmDisplayObjBase * p); // 0x1403328C0
void Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(Scaleform::Render::Matrix2x4<float> * pmat); // 0x140334A30
void Scaleform::GFx::DisplayObjectBase::GetWorldMatrix3D(Scaleform::Render::Matrix3x4<float> * pmat); // 0x140334990
void Scaleform::GFx::DisplayObjectBase::Clear3D(bool bInherit); // 0x140332A00
bool Scaleform::GFx::DisplayObjectBase::Is3D(bool bInherit); // 0x1403350F0
void Scaleform::GFx::DisplayObjectBase::GetLevelMatrix(Scaleform::Render::Matrix2x4<float> * pmat); // 0x140333D10
Scaleform::Render::Point<float> Scaleform::GFx::DisplayObjectBase::Local3DToGlobal(const Scaleform::Render::Point3<float> & ptIn); // 0x140335450
Scaleform::Render::Point<float> Scaleform::GFx::DisplayObjectBase::GlobalToLocal(const Scaleform::Render::Point<float> & ptIn); // 0x140334FB0
Scaleform::Render::Point3<float> Scaleform::GFx::DisplayObjectBase::GlobalToLocal3D(const Scaleform::Render::Point<float> & ptIn); // 0x140334F70
void Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(Scaleform::Render::Point<float> * p, const Scaleform::Render::Point<float> & pt, bool bPtInParentSpace, const Scaleform::Render::Matrix2x4<float> * mat); // 0x140339070
Scaleform::Log * Scaleform::GFx::DisplayObjectBase::GetLog(); // 0x140333D80
bool Scaleform::GFx::DisplayObjectBase::IsVerboseAction(); // 0x1403353C0
bool Scaleform::GFx::DisplayObjectBase::IsVerboseActionErrors(); // 0x140335400
void Scaleform::GFx::DisplayObjectBase::OnEventUnload(); // 0x140335A60
void Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(); // 0x140335080
Scaleform::GFx::DisplayObjectBase::GeomDataType & Scaleform::GFx::DisplayObjectBase::GetGeomData(Scaleform::GFx::DisplayObjectBase::GeomDataType & geomData); // 0x140333AB0
void Scaleform::GFx::DisplayObjectBase::SetGeomData(const Scaleform::GFx::DisplayObjectBase::GeomDataType & gd); // 0x140336230
void Scaleform::GFx::DisplayObjectBase::EnsureGeomDataCreated(); // 0x140333470
void Scaleform::GFx::ASCharacter_MatrixScaleAndRotate2x2(Scaleform::Render::Matrix2x4<float> & m, float sx, float sy, float radians); // 0x140332730
void Scaleform::GFx::DisplayObjectBase::SetX(double x); // 0x140338430
void Scaleform::GFx::DisplayObjectBase::SetY(double y); // 0x140338990
void Scaleform::GFx::DisplayObjectBase::SetZ(double z); // 0x140338EF0
void Scaleform::GFx::DisplayObjectBase::SetXScale(double xscale); // 0x1403386F0
void Scaleform::GFx::DisplayObjectBase::SetYScale(double yscale); // 0x140338C50
void Scaleform::GFx::DisplayObjectBase::SetZScale(double zscale); // 0x140338FB0
void Scaleform::GFx::DisplayObjectBase::SetRotation(double rotation); // 0x140337590
void Scaleform::GFx::DisplayObjectBase::SetXRotation(double rotation); // 0x140338600
void Scaleform::GFx::DisplayObjectBase::SetYRotation(double rotation); // 0x140338B60
void Scaleform::GFx::DisplayObjectBase::SetWidth(double width); // 0x140338020
void Scaleform::GFx::DisplayObjectBase::SetHeight(double height); // 0x140336390
void Scaleform::GFx::DisplayObjectBase::SetAlpha(double alpha); // 0x140335E00
double Scaleform::GFx::DisplayObjectBase::GetX(); // 0x140334BF0
double Scaleform::GFx::DisplayObjectBase::GetY(); // 0x140334D40
double Scaleform::GFx::DisplayObjectBase::GetZ(); // 0x140334E90
double Scaleform::GFx::DisplayObjectBase::GetXScale(); // 0x140334CD0
double Scaleform::GFx::DisplayObjectBase::GetYScale(); // 0x140334E20
double Scaleform::GFx::DisplayObjectBase::GetZScale(); // 0x140334F00
double Scaleform::GFx::DisplayObjectBase::GetRotation(); // 0x140334550
double Scaleform::GFx::DisplayObjectBase::GetXRotation(); // 0x140334C60
double Scaleform::GFx::DisplayObjectBase::GetYRotation(); // 0x140334DB0
double Scaleform::GFx::DisplayObjectBase::GetWidth(); // 0x1403348C0
double Scaleform::GFx::DisplayObjectBase::GetHeight(); // 0x140333C40
Scaleform::Render::Rect<float> Scaleform::GFx::DisplayObjectBase::GetBoundsIn3D(); // 0x140333610
double Scaleform::GFx::DisplayObjectBase::GetAlpha(); // 0x140333550
Scaleform::GFx::MovieImpl * Scaleform::GFx::DisplayObjectBase::FindMovieImpl(); // 0x1403334F0
Scaleform::GFx::InteractiveObject * Scaleform::GFx::DisplayObjectBase::GetTopMostMouseEntityDef(Scaleform::GFx::CharacterDef * pdef, const Scaleform::Render::Point<float> & pt, bool testAll, const Scaleform::GFx::InteractiveObject * ignoreMC); // 0x140334650
bool Scaleform::GFx::DisplayObjectBase::IsAncestor(Scaleform::GFx::DisplayObjectBase * ch); // 0x140335170
void Scaleform::GFx::DisplayObjectBase::UpdateTransform3D(); // 0x1403395B0
Scaleform::Ptr<Scaleform::Render::TreeNode> Scaleform::GFx::DisplayObjectBase::SetIndirectTransform(Scaleform::Render::TreeNode * newParent); // 0x1403367B0
void Scaleform::GFx::DisplayObjectBase::RemoveIndirectTransform(bool readdToDisplayList); // 0x140335AF0
void Scaleform::GFx::DisplayObjectBase::SetScale9Grid(const Scaleform::Render::Rect<float> & gr); // 0x1403378D0
Scaleform::Render::Rect<float> Scaleform::GFx::DisplayObjectBase::GetScale9Grid(); // 0x1403345C0
Scaleform::Render::Scale9GridInfo * Scaleform::GFx::DisplayObjectBase::CreateScale9Grid(); // 0x140333240
void Scaleform::GFx::DisplayObjectBase::SetRendererString(const char * str); // 0x140337540
void Scaleform::GFx::DisplayObjectBase::SetRendererFloat(float fl); // 0x1403374F0
const char * Scaleform::GFx::DisplayObjectBase::GetRendererString(); // 0x1403344E0
float Scaleform::GFx::DisplayObjectBase::GetRendererFloat(); // 0x140334490
void Scaleform::GFx::DisplayObjectBase::DisableBatching(bool b); // 0x140333420
bool Scaleform::GFx::DisplayObjectBase::IsBatchingDisabled(); // 0x1403351A0
Scaleform::GFx::DisplayObject::DisplayObject(Scaleform::GFx::ASMovieRootBase * pasRoot, Scaleform::GFx::InteractiveObject * pparent, Scaleform::GFx::ResourceId id); // 0x1403322E0
Scaleform::GFx::DisplayObject::~DisplayObject(); // 0x140332460
void Scaleform::GFx::DisplayObject::OnEventLoad(); // 0x1403359E0
void Scaleform::GFx::DisplayObject::OnEventUnload(); // 0x140335A10
Scaleform::GFx::ASString Scaleform::GFx::DisplayObject::CreateNewInstanceName(); // 0x140333200
Scaleform::GFx::CharacterHandle * Scaleform::GFx::DisplayObject::CreateCharacterHandle(); // 0x140333030
double Scaleform::GFx::DisplayObject::GetMouseX(); // 0x140333F80
double Scaleform::GFx::DisplayObject::GetMouseY(); // 0x140334070
void Scaleform::GFx::DisplayObject::SetName(const Scaleform::GFx::ASString & name); // 0x140337130
void Scaleform::GFx::DisplayObject::SetOriginalName(const Scaleform::GFx::ASString & name); // 0x140337220
Scaleform::GFx::ASString Scaleform::GFx::DisplayObject::GetOriginalName(); // 0x1403341D0
Scaleform::GFx::ASString Scaleform::GFx::DisplayObject::GetName(); // 0x140334170
const char * Scaleform::GFx::DisplayObject::GetAbsolutePath(Scaleform::String * ppath); // 0x140333520
void Scaleform::GFx::DisplayObject::SetAcceptAnimMoves(bool accept); // 0x140335D00
void Scaleform::GFx::DisplayObject::ResetClipDepth(); // 0x140335C20
void Scaleform::GFx::DisplayObject::SetMask(Scaleform::GFx::DisplayObject * pmaskSprite, bool readdMaskToDisplayList); // 0x1403369A0
Scaleform::GFx::DisplayObject * Scaleform::GFx::DisplayObject::GetMask(); // 0x140333DB0
void Scaleform::GFx::DisplayObject::SetMaskOwner(Scaleform::GFx::DisplayObject * pmaskOwner); // 0x140336BB0
const Scaleform::Render::Matrix2x4<float> & Scaleform::GFx::DisplayObject::GetMatrix(); // 0x140333EB0
void Scaleform::GFx::DisplayObject::SetMatrix(const Scaleform::Render::Matrix2x4<float> & mt); // 0x140336EB0
const Scaleform::Render::Matrix3x4<float> & Scaleform::GFx::DisplayObject::GetMatrix3D(); // 0x140333DE0
void Scaleform::GFx::DisplayObject::SetMatrix3D(const Scaleform::Render::Matrix3x4<float> & mt); // 0x140336C20
void Scaleform::GFx::DisplayObject::GetWorldMatrixWithScroll(Scaleform::Render::Matrix2x4<float> * m); // 0x140334AB0
void Scaleform::GFx::DisplayObject::SetScrollRect(const Scaleform::Render::Rect<double> * r); // 0x1403378F0
bool Scaleform::GFx::DisplayObject::OnEvent(const Scaleform::GFx::EventId & id); // 0x1403359C0
bool Scaleform::GFx::DisplayObject::TransformPointToLocalAndCheckBounds(Scaleform::Render::Point<float> * p, const Scaleform::Render::Point<float> & pt, bool bPtInParentSpace, const Scaleform::Render::Matrix2x4<float> * mat); // 0x1403394E0
Scaleform::GFx::CharacterHandle::CharacterHandle(const Scaleform::GFx::ASString & name, Scaleform::GFx::DisplayObject * pparent, Scaleform::GFx::DisplayObject * pcharacter); // 0x140332190
Scaleform::GFx::CharacterHandle::~CharacterHandle(); // 0x140332410
void Scaleform::GFx::CharacterHandle::ChangeName(const Scaleform::GFx::ASString & name, Scaleform::GFx::DisplayObject * pparent); // 0x1403328D0
Scaleform::GFx::DisplayObject * Scaleform::GFx::CharacterHandle::ResolveCharacter(Scaleform::GFx::MovieImpl * proot); // 0x140335CE0void __fastcall Scaleform::GFx::CharacterHandle::CharacterHandle(
        Scaleform::GFx::CharacterHandle *this,
        const Scaleform::GFx::ASString *name,
        Scaleform::GFx::DisplayObject *pparent,
        Scaleform::GFx::DisplayObject *pcharacter)
{
  Scaleform::GFx::ASStringNode *pNode; // rax
  Scaleform::GFx::ASStringNode *p_EmptyStringNode; // r9
  Scaleform::GFx::ASStringNode *v10; // rax
  unsigned __int8 AvmObjOffset; // al
  Scaleform::GFx::ASStringNode *StringNode; // rbx
  Scaleform::GFx::ASStringNode *v13; // rcx
  bool v14; // zf
  void *v15; // rbx
  Scaleform::String v16; // [rsp+30h] [rbp+8h] BYREF

  pNode = name->pNode;
  this->Name = (Scaleform::GFx::ASString)name->pNode;
  ++pNode->RefCount;
  p_EmptyStringNode = &name->pNode->pManager->EmptyStringNode;
  this->NamePath.pNode = p_EmptyStringNode;
  ++p_EmptyStringNode->RefCount;
  v10 = name->pNode;
  this->OriginalName = (Scaleform::GFx::ASString)name->pNode;
  ++v10->RefCount;
  this->RefCount = 1;
  this->pCharacter = pcharacter;
  if ( pcharacter && pcharacter->pASRoot->AVMVersion == 1 )
  {
    Scaleform::String::String(&v16);
    if ( pparent )
    {
      AvmObjOffset = pparent->AvmObjOffset;
      if ( AvmObjOffset )
        ((void (__fastcall *)(char *, Scaleform::String *))(*(Scaleform::GFx::DisplayObject_vtbl **)((char *)&pparent->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable + 4 * AvmObjOffset))->GetProjectionMatrix3D)(
          (char *)pparent + 4 * AvmObjOffset,
          &v16);
      Scaleform::String::AppendString(&v16, ".", -1i64);
    }
    Scaleform::String::AppendString(&v16, this->Name.pNode->pData, -1i64);
    StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                   name->pNode->pManager,
                   (const char *)((v16.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                   *(_QWORD *)(v16.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
    StringNode->RefCount += 2;
    v13 = this->NamePath.pNode;
    v14 = v13->RefCount-- == 1;
    if ( v14 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v13);
    this->NamePath.pNode = StringNode;
    v14 = StringNode->RefCount-- == 1;
    if ( v14 )
      Scaleform::GFx::ASStringNode::ReleaseNode(StringNode);
    v15 = (void *)(v16.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v16.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
  }
}

void __fastcall Scaleform::GFx::DisplayObject::DisplayObject(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::GFx::ASMovieRootBase *pasRoot,
        Scaleform::GFx::InteractiveObject *pparent,
        unsigned int *id)
{
  unsigned int v4; // eax

  v4 = *id;
  this->RefCount = 1;
  this->pWeakProxy = 0i64;
  this->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::DisplayObject_vtbl *)&Scaleform::GFx::DisplayObjectBase::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::DisplayObjectBase::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  this->pASRoot = pasRoot;
  this->Id.Id = v4;
  this->Depth = -1;
  this->CreateFrame = 0;
  this->pParent = pparent;
  this->pRenNode.pObject = 0i64;
  this->pGeomData = 0i64;
  this->pPerspectiveData = 0i64;
  this->pIndXFormData = 0i64;
  *(_DWORD *)&this->ClipDepth = 0x40000000;
  *(_WORD *)&this->BlendMode = 0;
  this->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::DisplayObject_vtbl *)&Scaleform::GFx::DisplayObject::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::DisplayObject::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  this->pNameHandle.pObject = 0i64;
  this->Flags |= 0x100u;
  this->DOFlags = 10;
  this->pScrollRect = 0i64;
  this->pMaskCharacter = 0i64;
}

void __fastcall Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(
        Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4

  this->FieldOfView = 0.0;
  this->FocalLength = 0.0;
  *(_OWORD *)&this->ViewMatrix3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->ViewMatrix3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->ViewMatrix3D.M[2][0] = 0ui64;
  this->ViewMatrix3D.M[0][0] = 1.0;
  this->ViewMatrix3D.M[1][1] = 1.0;
  this->ViewMatrix3D.M[2][2] = 1.0;
  v2 = Scaleform::GFx::NumberUtil::NaN();
  this->ProjectionCenter.x = v2;
  v3 = Scaleform::GFx::NumberUtil::NaN();
  this->ProjectionCenter.y = v3;
}

void __fastcall Scaleform::GFx::CharacterHandle::~CharacterHandle(Scaleform::GFx::CharacterHandle *this)
{
  Scaleform::GFx::ASStringNode *pNode; // rcx
  bool v3; // zf
  Scaleform::GFx::ASStringNode *v4; // rcx
  Scaleform::GFx::ASStringNode *v5; // rcx

  pNode = this->OriginalName.pNode;
  v3 = pNode->RefCount-- == 1;
  if ( v3 )
    Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
  v4 = this->NamePath.pNode;
  v3 = v4->RefCount-- == 1;
  if ( v3 )
    Scaleform::GFx::ASStringNode::ReleaseNode(v4);
  v5 = this->Name.pNode;
  v3 = v5->RefCount-- == 1;
  if ( v3 )
    Scaleform::GFx::ASStringNode::ReleaseNode(v5);
}

void __fastcall Scaleform::GFx::DisplayObject::~DisplayObject(Scaleform::GFx::DisplayObject *this)
{
  Scaleform::GFx::DisplayObject::ScrollRectInfo *pScrollRect; // rdi
  Scaleform::RefCountNTSImpl *pObject; // rcx
  Scaleform::GFx::DisplayObject *pMaskCharacter; // rcx
  Scaleform::GFx::CharacterHandle *v5; // rax
  Scaleform::GFx::CharacterHandle *v6; // rdi
  Scaleform::GFx::ASStringNode *pNode; // rcx
  bool v8; // zf
  Scaleform::GFx::ASStringNode *v9; // rcx
  Scaleform::GFx::ASStringNode *v10; // rcx

  pScrollRect = this->pScrollRect;
  this->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::DisplayObject_vtbl *)&Scaleform::GFx::DisplayObject::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::DisplayObject::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  if ( pScrollRect )
  {
    pObject = pScrollRect->Mask.pObject;
    if ( pObject )
      Scaleform::RefCountNTSImpl::Release(pObject);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pScrollRect);
  }
  if ( this->pMaskCharacter )
  {
    if ( !this->IsUsedAsMask(this) )
    {
      if ( !this->pMaskCharacter )
        goto LABEL_13;
      Scaleform::GFx::DisplayObject::SetMask(this, 0i64, this->ClipDepth != 0);
    }
    if ( this->pMaskCharacter )
    {
      if ( this->IsUsedAsMask(this) )
      {
        pMaskCharacter = this->pMaskCharacter;
        if ( pMaskCharacter )
          Scaleform::GFx::DisplayObject::SetMask(pMaskCharacter, 0i64, 1);
      }
    }
  }
LABEL_13:
  v5 = this->pNameHandle.pObject;
  if ( v5 )
    v5->pCharacter = 0i64;
  v6 = this->pNameHandle.pObject;
  if ( v6 )
  {
    if ( --v6->RefCount <= 0 )
    {
      pNode = v6->OriginalName.pNode;
      v8 = pNode->RefCount-- == 1;
      if ( v8 )
        Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
      v9 = v6->NamePath.pNode;
      v8 = v9->RefCount-- == 1;
      if ( v8 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v9);
      v10 = v6->Name.pNode;
      v8 = v10->RefCount-- == 1;
      if ( v8 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v10);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
    }
  }
  Scaleform::GFx::DisplayObjectBase::~DisplayObjectBase(this);
}

void __fastcall Scaleform::GFx::DisplayObjectBase::~DisplayObjectBase(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rdx
  unsigned __int8 AvmObjOffset; // al
  Scaleform::Render::TreeNode *pObject; // rcx

  pGeomData = this->pGeomData;
  this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::DisplayObjectBase_vtbl *)&Scaleform::GFx::DisplayObjectBase::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::DisplayObjectBase::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  if ( pGeomData )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  if ( this->pPerspectiveData )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  if ( this->pIndXFormData )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
    (**(void (__fastcall ***)(char *, _QWORD))((char *)&this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                             + 4 * AvmObjOffset))(
      (char *)this + 4 * AvmObjOffset,
      0i64);
  pObject = this->pRenNode.pObject;
  if ( pObject )
  {
    if ( pObject->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
  }
  this->Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::`vftable';
  Scaleform::RefCountWeakSupportImpl::~RefCountWeakSupportImpl(this);
}

void __fastcall Scaleform::GFx::ASCharacter_MatrixScaleAndRotate2x2(
        Scaleform::Render::Matrix2x4<float> *m,
        float sx,
        float sy,
        float radians)
{
  float v7; // xmm9_4
  float v8; // xmm6_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4

  v7 = cosf(radians);
  v8 = sinf(radians);
  v9 = m->M[1][1];
  v10 = m->M[0][0] * v8;
  v11 = (float)(m->M[0][0] * v7) - (float)(m->M[1][0] * v8);
  v12 = m->M[0][1];
  v13 = m->M[1][0] * v7;
  m->M[1][1] = (float)((float)(v12 * v8) + (float)(v9 * v7)) * sy;
  m->M[0][1] = (float)((float)(v12 * v7) - (float)(v9 * v8)) * sy;
  m->M[0][0] = v11 * sx;
  m->M[1][0] = (float)(v10 + v13) * sx;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::Matrix2x4<float>::AppendRotation(
        Scaleform::Render::Matrix2x4<float> *this,
        float radians)
{
  float v3; // xmm7_4
  float v4; // xmm0_4
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-58h] BYREF

  v3 = cosf(radians);
  v4 = sinf(radians);
  m.M[0][0] = v3;
  LODWORD(m.M[0][1]) = LODWORD(v4) ^ _xmm;
  *(_OWORD *)&m.M[1][0] = __PAIR64__(LODWORD(v3), LODWORD(v4));
  *(_QWORD *)&m.M[0][2] = 0i64;
  return Scaleform::Render::Matrix2x4<float>::Append(this, &m);
}

void __fastcall Scaleform::GFx::DisplayObjectBase::BindAvmObj(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::GFx::AvmDisplayObjBase *p)
{
  this->AvmObjOffset = (unsigned __int64)((char *)p - (char *)this + 3) >> 2;
}

void __fastcall Scaleform::GFx::CharacterHandle::ChangeName(
        Scaleform::GFx::CharacterHandle *this,
        const Scaleform::GFx::ASString *name,
        Scaleform::GFx::DisplayObject *pparent)
{
  Scaleform::GFx::ASStringNode *pNode; // rsi
  Scaleform::GFx::ASStringNode *v7; // rcx
  bool v8; // zf
  unsigned __int8 AvmObjOffset; // al
  Scaleform::GFx::ASStringNode *StringNode; // rbx
  Scaleform::GFx::ASStringNode *v11; // rcx
  void *v12; // rbx
  Scaleform::String v13; // [rsp+30h] [rbp+8h] BYREF

  pNode = name->pNode;
  ++name->pNode->RefCount;
  v7 = this->Name.pNode;
  v8 = v7->RefCount-- == 1;
  if ( v8 )
    Scaleform::GFx::ASStringNode::ReleaseNode(v7);
  this->Name.pNode = pNode;
  if ( pparent && pparent->pASRoot->AVMVersion == 1 )
  {
    Scaleform::String::String(&v13);
    AvmObjOffset = pparent->AvmObjOffset;
    if ( AvmObjOffset )
      ((void (__fastcall *)(char *, Scaleform::String *))(*(Scaleform::GFx::DisplayObject_vtbl **)((char *)&pparent->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                                 + 4 * AvmObjOffset))->GetProjectionMatrix3D)(
        (char *)pparent + 4 * AvmObjOffset,
        &v13);
    Scaleform::String::AppendString(&v13, ".", -1i64);
    Scaleform::String::AppendString(&v13, this->Name.pNode->pData, -1i64);
    StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                   name->pNode->pManager,
                   (const char *)((v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                   *(_QWORD *)(v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
    StringNode->RefCount += 2;
    v11 = this->NamePath.pNode;
    v8 = v11->RefCount-- == 1;
    if ( v8 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v11);
    this->NamePath.pNode = StringNode;
    v8 = StringNode->RefCount-- == 1;
    if ( v8 )
      Scaleform::GFx::ASStringNode::ReleaseNode(StringNode);
    v12 = (void *)(v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::Clear3D(Scaleform::GFx::DisplayObjectBase *this, bool bInherit)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  Scaleform::Render::TreeNode *pObject; // rcx
  Scaleform::GFx::DisplayObjectBase::GeomDataType gd; // [rsp+20h] [rbp-68h] BYREF

  if ( bInherit )
  {
    pParent = this->pParent;
    if ( pParent )
      Scaleform::GFx::DisplayObjectBase::Clear3D(pParent, bInherit);
  }
  *(_OWORD *)&gd.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&gd.XScale = _xmm;
  *(_QWORD *)&gd.X = 0i64;
  *(_OWORD *)&gd.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&gd.Z = _xmm;
  gd.Rotation = 0.0;
  *(_OWORD *)&gd.XRotation = 0i64;
  Scaleform::GFx::DisplayObjectBase::SetGeomData(this, &gd);
  pObject = this->pRenNode.pObject;
  if ( pObject )
    Scaleform::Render::TreeNode::Clear3D(pObject);
  this->UpdateViewAndPerspective(this);
}

void __fastcall Scaleform::GFx::DisplayObjectBase::ClearProjectionMatrix3D(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *RenderNode; // rax

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeNode::ClearProjectionMatrix3D(RenderNode);
}

void __fastcall Scaleform::GFx::DisplayObjectBase::ClearViewMatrix3D(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *RenderNode; // rax

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeNode::ClearViewMatrix3D(RenderNode);
}

Scaleform::Render::TreeContainer *__fastcall Scaleform::GFx::DisplayObjectBase::ConvertToTreeContainer(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeContainer *pParent; // r15
  Scaleform::GFx::MovieImpl *pMovieImpl; // rsi
  Scaleform::Render::TreeNode::NodeData *v4; // rax
  Scaleform::Render::TreeNode *v5; // r14
  Scaleform::Render::TreeNode::NodeData *v6; // rbx
  Scaleform::Render::TreeContainer *EntryHelper; // rbx
  Scaleform::Render::TreeNode *pObject; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 Size; // r9
  _QWORD *v11; // rcx
  Scaleform::Render::TreeNode *v12; // rcx
  const Scaleform::Render::Matrix3x4<float> *v13; // rax
  Scaleform::GFx::DisplayObjectBase_vtbl *v14; // rax
  Scaleform::GFx::DisplayObjectBase_vtbl *v15; // rax
  const Scaleform::Render::Matrix2x4<float> *v16; // rax
  Scaleform::Render::TreeNode *v17; // rcx
  Scaleform::Render::Cxform *v18; // rsi
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::ContextImpl::EntryData *v20; // rax
  bool v21; // al
  const Scaleform::Render::State *State; // rax
  Scaleform::Render::BlendMode pData; // edx
  const Scaleform::Render::State *v24; // rax
  Scaleform::Render::Rect<float> v25; // xmm0
  Scaleform::Render::TreeNode *v26; // rcx
  const Scaleform::Render::State *v27; // rax
  bool v28; // zf
  Scaleform::Render::TreeNode *v29; // rcx
  Scaleform::Render::Rect<float> v31; // [rsp+28h] [rbp-69h] BYREF
  Scaleform::Render::Rect<float> rect; // [rsp+38h] [rbp-59h] BYREF
  Scaleform::Render::Matrix3x4<float> v33; // [rsp+48h] [rbp-49h] BYREF
  Scaleform::Render::Matrix4x4<float> mat3D; // [rsp+78h] [rbp-19h] BYREF

  if ( !this->pRenNode.pObject )
    Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  pParent = (Scaleform::Render::TreeContainer *)this->pRenNode.pObject->pParent;
  pMovieImpl = this->pASRoot->pMovieImpl;
  v4 = (Scaleform::Render::TreeNode::NodeData *)pMovieImpl->RenderContext.pHeap->Alloc(
                                                  pMovieImpl->RenderContext.pHeap,
                                                  160ui64,
                                                  0i64);
  v5 = 0i64;
  v6 = v4;
  if ( v4 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(v4, ET_Container);
    v6->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeContainer::NodeData::`vftable';
    *(_QWORD *)&v6[1].Type = 0i64;
    v6[1].__vftable = 0i64;
  }
  EntryHelper = (Scaleform::Render::TreeContainer *)Scaleform::Render::ContextImpl::Context::createEntryHelper(
                                                      &pMovieImpl->RenderContext,
                                                      v6);
  if ( pParent )
  {
    pObject = this->pRenNode.pObject;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                               + 8i64
                               * (unsigned int)((int)(LODWORD(this->pRenNode.pObject)
                                                    - ((unsigned int)pObject & 0xFFFFF000)
                                                    - 56)
                                              / 56)
                               + 40)
                   + 10i64) & 0x20) != 0 )
    {
      Scaleform::Render::TreeNode::SetMaskNode(pParent, 0i64);
      Scaleform::Render::TreeNode::SetMaskNode(pParent, EntryHelper);
    }
    else
    {
      v9 = 0i64;
      Size = Scaleform::Render::TreeContainer::GetSize(pParent);
      if ( Size )
      {
        do
        {
          v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pParent & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                     + 8i64
                                     * (unsigned int)((__int64)((__int64)&pParent[-1]
                                                              - ((unsigned __int64)pParent & 0xFFFFFFFFFFFFF000ui64))
                                                    / 56)
                                     + 40)
                         + 144i64);
          if ( (*(_BYTE *)v11 & 1) != 0 )
            v11 = (_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFFEui64) + 16);
          if ( (Scaleform::Render::TreeNode *)v11[v9] == pObject )
            break;
          ++v9;
        }
        while ( v9 < Size );
      }
      Scaleform::Render::TreeContainer::Remove(pParent, v9, 1ui64);
      Scaleform::Render::TreeContainer::Insert(pParent, v9, EntryHelper);
    }
  }
  v12 = this->pRenNode.pObject;
  if ( v12
    && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)v12 - ((unsigned int)v12 & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x200) != 0 )
  {
    v13 = this->GetMatrix3D(this);
    Scaleform::Render::TreeNode::SetMatrix3D(EntryHelper, v13);
    memset(&mat3D, 0, sizeof(mat3D));
    v14 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    mat3D.M[0][0] = 1.0;
    mat3D.M[1][1] = 1.0;
    mat3D.M[2][2] = 1.0;
    mat3D.M[3][3] = 1.0;
    if ( v14->GetProjectionMatrix3D(this, &mat3D, 0) )
      Scaleform::Render::TreeNode::SetProjectionMatrix3D(EntryHelper, &mat3D);
    memset(&v33, 0, sizeof(v33));
    v15 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v33.M[0][0] = 1.0;
    v33.M[1][1] = 1.0;
    v33.M[2][2] = 1.0;
    if ( v15->GetViewMatrix3D(this, &v33, 0) )
      Scaleform::Render::TreeNode::SetViewMatrix3D(EntryHelper, &v33);
    Scaleform::Render::TreeNode::SetMatrix3D(this->pRenNode.pObject, &Scaleform::Render::Matrix3x4<float>::Identity);
  }
  else
  {
    v16 = this->GetMatrix(this);
    Scaleform::Render::TreeNode::SetMatrix(EntryHelper, v16);
    Scaleform::Render::TreeNode::SetMatrix(
      this->pRenNode.pObject,
      (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  }
  v17 = this->pRenNode.pObject;
  if ( v17 )
    v18 = (Scaleform::Render::Cxform *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                                  + 8i64
                                                  * (unsigned int)((int)((_DWORD)v17
                                                                       - ((unsigned int)v17 & 0xFFFFF000)
                                                                       - 56)
                                                                 / 56)
                                                  + 40)
                                      + 80i64);
  else
    v18 = &Scaleform::Render::Cxform::Identity;
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(EntryHelper, 2u);
  WritableData[5] = *(Scaleform::Render::ContextImpl::EntryData *)&v18->M[0][0];
  WritableData[6] = *(Scaleform::Render::ContextImpl::EntryData *)&v18->M[1][0];
  v20 = Scaleform::Render::ContextImpl::Entry::getWritableData(this->pRenNode.pObject, 2u);
  v20[5] = *(Scaleform::Render::ContextImpl::EntryData *)&Scaleform::Render::Cxform::Identity.M[0][0];
  v20[6] = *(Scaleform::Render::ContextImpl::EntryData *)&Scaleform::Render::Cxform::Identity.M[1][0];
  v21 = this->GetVisible(this);
  Scaleform::Render::TreeNode::SetVisible(EntryHelper, v21);
  Scaleform::Render::TreeNode::SetVisible(this->pRenNode.pObject, 1);
  State = Scaleform::Render::TreeNode::GetState(this->pRenNode.pObject, State_BlendMode);
  if ( State )
    pData = (Scaleform::Render::BlendMode)State->pData;
  else
    pData = Blend_None;
  Scaleform::Render::TreeNode::SetBlendMode(EntryHelper, pData);
  Scaleform::Render::TreeNode::SetBlendMode(this->pRenNode.pObject, Blend_None);
  v24 = Scaleform::Render::TreeNode::GetState(this->pRenNode.pObject, State_Scale9);
  if ( v24 )
    v25 = *(Scaleform::Render::Rect<float> *)(v24->DataValue + 16);
  else
    v25 = 0i64;
  v31 = v25;
  rect = v25;
  if ( v31.x1 < v31.x2 && v31.y1 < v31.y2 )
  {
    Scaleform::Render::TreeNode::SetScale9Grid(EntryHelper, &rect);
    v26 = this->pRenNode.pObject;
    v31 = 0i64;
    Scaleform::Render::TreeNode::SetScale9Grid(v26, &v31);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pRenNode.pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64
                             * (unsigned int)((int)(LODWORD(this->pRenNode.pObject)
                                                  - ((__int64)this->pRenNode.pObject & 0xFFFFF000)
                                                  - 56)
                                            / 56)
                             + 40)
                 + 10i64) & 0x10) != 0 )
  {
    v27 = Scaleform::Render::TreeNode::GetState(this->pRenNode.pObject, State_MaskNode);
    if ( v27 )
    {
      v5 = (Scaleform::Render::TreeNode *)v27->pData;
      if ( v5 )
        ++v5->RefCount;
    }
    Scaleform::Render::TreeNode::SetMaskNode(this->pRenNode.pObject, 0i64);
    Scaleform::Render::TreeNode::SetMaskNode(EntryHelper, v5);
    if ( v5 )
    {
      v28 = v5->RefCount-- == 1;
      if ( v28 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v5);
    }
  }
  Scaleform::Render::TreeContainer::Add(EntryHelper, this->pRenNode.pObject);
  if ( EntryHelper )
    ++EntryHelper->RefCount;
  v29 = this->pRenNode.pObject;
  if ( v29 )
  {
    v28 = v29->RefCount-- == 1;
    if ( v28 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v29);
  }
  this->pRenNode.pObject = EntryHelper;
  if ( EntryHelper )
  {
    v28 = EntryHelper->RefCount-- == 1;
    if ( v28 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(EntryHelper);
  }
  return EntryHelper;
}

Scaleform::GFx::CharacterHandle *__fastcall Scaleform::GFx::DisplayObject::CreateCharacterHandle(
        Scaleform::GFx::DisplayObject *this)
{
  Scaleform::GFx::CharacterHandle *v1; // rbp
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdi
  Scaleform::GFx::CharacterHandle *v4; // r14
  __int64 v5; // rax
  Scaleform::GFx::ASStringNode *v6; // rsi
  __int64 v7; // rax
  Scaleform::GFx::CharacterHandle *v8; // rdi
  Scaleform::GFx::ASStringNode *v9; // rcx
  bool v10; // zf
  Scaleform::GFx::ASStringNode *v11; // rcx
  Scaleform::GFx::ASStringNode *v12; // rcx
  Scaleform::GFx::CharacterHandle *v14; // rax
  Scaleform::GFx::CharacterHandle *v15; // rax
  Scaleform::GFx::CharacterHandle *pObject; // rdi
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::GFx::ASStringNode *v18; // rcx
  Scaleform::GFx::ASStringNode *v19; // rcx
  Scaleform::GFx::ASStringNode *v20; // rcx
  Scaleform::GFx::ASString name; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0i64;
  LODWORD(name.pNode) = 0;
  if ( this->pNameHandle.pObject )
    return this->pNameHandle.pObject;
  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( (this->Flags & 0x10) == 0 )
  {
    this->CreateNewInstanceName(this, &name);
    v14 = (Scaleform::GFx::CharacterHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pMovieImpl->pHeap->Alloc)(
                                               pMovieImpl->pHeap,
                                               40i64);
    if ( v14 )
    {
      Scaleform::GFx::CharacterHandle::CharacterHandle(v14, &name, this->pParent, this);
      v1 = v15;
    }
    pObject = this->pNameHandle.pObject;
    if ( pObject )
    {
      if ( --pObject->RefCount <= 0 )
      {
        pNode = pObject->OriginalName.pNode;
        v10 = pNode->RefCount-- == 1;
        if ( v10 )
          Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
        v18 = pObject->NamePath.pNode;
        v10 = v18->RefCount-- == 1;
        if ( v10 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v18);
        v19 = pObject->Name.pNode;
        v10 = v19->RefCount-- == 1;
        if ( v10 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v19);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    v20 = name.pNode;
    this->pNameHandle.pObject = v1;
    v10 = v20->RefCount-- == 1;
    if ( v10 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v20);
    return this->pNameHandle.pObject;
  }
  v4 = (Scaleform::GFx::CharacterHandle *)pMovieImpl->pHeap->Alloc(pMovieImpl->pHeap, 40ui64, 0i64);
  if ( v4 )
  {
    v5 = (__int64)pMovieImpl->pASMovieRoot.pObject->GetStringManager(pMovieImpl->pASMovieRoot.pObject);
    ++*(_DWORD *)(v5 + 96);
    v6 = (Scaleform::GFx::ASStringNode *)(v5 + 72);
    v4->Name.pNode = (Scaleform::GFx::ASStringNode *)(v5 + 72);
    ++*(_DWORD *)(v5 + 96);
    v7 = *(_QWORD *)(v5 + 80) + 72i64;
    v4->NamePath.pNode = (Scaleform::GFx::ASStringNode *)v7;
    ++*(_DWORD *)(v7 + 24);
    v4->OriginalName.pNode = v6;
    ++v6->RefCount;
    v4->pCharacter = 0i64;
    LOBYTE(v1) = 1;
    v4->RefCount = 1;
  }
  else
  {
    v6 = name.pNode;
    v4 = 0i64;
  }
  v8 = this->pNameHandle.pObject;
  if ( v8 )
  {
    if ( --v8->RefCount <= 0 )
    {
      v9 = v8->OriginalName.pNode;
      v10 = v9->RefCount-- == 1;
      if ( v10 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v9);
      v11 = v8->NamePath.pNode;
      v10 = v11->RefCount-- == 1;
      if ( v10 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v11);
      v12 = v8->Name.pNode;
      v10 = v12->RefCount-- == 1;
      if ( v10 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v12);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
    }
  }
  this->pNameHandle.pObject = v4;
  if ( ((unsigned __int8)v1 & 1) != 0 )
  {
    v10 = v6->RefCount-- == 1;
    if ( v10 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v6);
  }
  return this->pNameHandle.pObject;
}

Scaleform::GFx::ASString *__fastcall Scaleform::GFx::DisplayObject::CreateNewInstanceName(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::GFx::ASString *result)
{
  Scaleform::GFx::ASString *v3; // rax
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::GFx::ASStringNode *v5; // rcx
  Scaleform::GFx::ASString resulta; // [rsp+30h] [rbp+8h] BYREF

  v3 = Scaleform::GFx::MovieImpl::CreateNewInstanceName(this->pASRoot->pMovieImpl, &resulta);
  pNode = v3->pNode;
  result->pNode = v3->pNode;
  ++pNode->RefCount;
  v5 = resulta.pNode;
  if ( resulta.pNode->RefCount-- == 1 )
    Scaleform::GFx::ASStringNode::ReleaseNode(v5);
  return result;
}

Scaleform::Render::Scale9GridInfo *__fastcall Scaleform::GFx::DisplayObjectBase::CreateScale9Grid(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::InteractiveObject *pParent; // rbx
  __int64 v3; // rdi
  Scaleform::Render::TreeNode *RenderNode; // rax
  const Scaleform::Render::State *State; // rax
  __int128 v6; // xmm0
  Scaleform::Render::Rect<float> *p_s9Rect; // rax
  bool v8; // cf
  char v9; // al
  bool v10; // zf
  Scaleform::GFx::InteractiveObject_vtbl *v11; // rax
  const Scaleform::Render::Matrix2x4<float> *v12; // rax
  Scaleform::Render::Scale9GridInfo *v14; // rsi
  Scaleform::Render::TreeNode *v15; // rax
  const Scaleform::Render::State *v16; // rax
  Scaleform::Render::Rect<float> v17; // xmm0
  Scaleform::GFx::InteractiveObject_vtbl *v18; // rax
  const Scaleform::Render::Matrix2x4<float> *v19; // rax
  __int64 v20; // rax
  int v21[4]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h] BYREF
  Scaleform::Render::Rect<float> s9Rect; // [rsp+50h] [rbp-19h] BYREF
  Scaleform::Render::Matrix2x4<float> shapeMtx; // [rsp+60h] [rbp-9h] BYREF
  Scaleform::Render::Rect<float> bounds; // [rsp+80h] [rbp+17h] BYREF
  __int128 v26[2]; // [rsp+90h] [rbp+27h] BYREF

  pParent = this->pParent;
  shapeMtx = *this->GetMatrix(this);
  if ( !pParent )
    return 0i64;
  v3 = 0i64;
  while ( 1 )
  {
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(pParent);
    State = Scaleform::Render::TreeNode::GetState(RenderNode, State_Scale9);
    if ( State )
    {
      v6 = *(_OWORD *)(State->DataValue + 16);
      p_s9Rect = (Scaleform::Render::Rect<float> *)&v22;
      v22 = v6;
    }
    else
    {
      p_s9Rect = &s9Rect;
      s9Rect = 0i64;
    }
    if ( p_s9Rect->x1 >= p_s9Rect->x2 || (v8 = p_s9Rect->y1 < p_s9Rect->y2, v9 = 0, !v8) )
      v9 = 1;
    v10 = v9 == 0;
    v11 = pParent->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    if ( v10 )
      break;
    v12 = v11->GetMatrix(pParent);
    Scaleform::Render::Matrix2x4<float>::Append(&shapeMtx, v12);
    pParent = pParent->pParent;
    if ( !pParent )
      return 0i64;
  }
  v26[0] = _xmm;
  v26[1] = _xmm;
  v11->GetRectBounds(pParent, &bounds, (const Scaleform::Render::Matrix2x4<float> *)v26);
  v21[0] = 71;
  v14 = (Scaleform::Render::Scale9GridInfo *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                               Scaleform::Memory::pGlobalHeap,
                                               this,
                                               448i64,
                                               v21);
  if ( v14 )
  {
    v15 = Scaleform::GFx::DisplayObjectBase::GetRenderNode(pParent);
    v16 = Scaleform::Render::TreeNode::GetState(v15, State_Scale9);
    if ( v16 )
      v17 = *(Scaleform::Render::Rect<float> *)(v16->DataValue + 16);
    else
      v17 = 0i64;
    v22 = (__int128)v17;
    v18 = pParent->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    s9Rect = v17;
    v19 = v18->GetMatrix(pParent);
    Scaleform::Render::Scale9GridInfo::Scale9GridInfo(v14, &s9Rect, v19, &shapeMtx, &bounds);
    return (Scaleform::Render::Scale9GridInfo *)v20;
  }
  return (Scaleform::Render::Scale9GridInfo *)v3;
}

void __fastcall Scaleform::GFx::DisplayObjectBase::DisableBatching(Scaleform::GFx::DisplayObjectBase *this, bool b)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::Entry *v4; // rbx

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  v4 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  Scaleform::Render::TreeNode::DisableBatching(RenderNode, b);
  if ( v4 )
  {
    if ( v4->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v4);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::EnsureGeomDataCreated(Scaleform::GFx::DisplayObjectBase *this)
{
  const Scaleform::GFx::DisplayObjectBase::GeomDataType *v2; // rax
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  if ( !this->pGeomData )
  {
    *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
    *(_OWORD *)&geomData.XScale = _xmm;
    *(_QWORD *)&geomData.X = 0i64;
    *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
    *(_OWORD *)&geomData.Z = _xmm;
    geomData.Rotation = 0.0;
    *(_OWORD *)&geomData.XRotation = 0i64;
    v2 = Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData);
    Scaleform::GFx::DisplayObjectBase::SetGeomData(this, v2);
  }
}

Scaleform::GFx::MovieImpl *__fastcall Scaleform::GFx::DisplayObjectBase::FindMovieImpl(
        Scaleform::GFx::DisplayObjectBase *this)
{
  if ( !this )
    return 0i64;
  while ( SLOBYTE(this->Flags) >= 0 )
  {
    this = this->pParent;
    if ( !this )
      return 0i64;
  }
  return this->pASRoot->pMovieImpl;
}

const char *__fastcall Scaleform::GFx::DisplayObject::GetAbsolutePath(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::String *ppath)
{
  unsigned __int8 AvmObjOffset; // al

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
    return (const char *)((__int64 (__fastcall *)(char *, Scaleform::String *))(*(Scaleform::GFx::DisplayObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable + 4 * AvmObjOffset))->GetProjectionMatrix3D)(
                           (char *)this + 4 * AvmObjOffset,
                           ppath);
  else
    return &pnewText;
}

__int64 __fastcall Scaleform::GFx::DisplayObject::GetAcceptAnimMoves(Scaleform::GFx::DisplayObject *this)
{
  return (this->DOFlags >> 3) & 1;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetAlpha(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *pObject; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  float v4; // xmm0_4

  pObject = this->pRenNode.pObject;
  if ( pObject )
  {
    v2 = *(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20);
    v3 = (__int64)((unsigned __int128)((__int64)((__int64)&pObject[-1]
                                               - ((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64))
                                     * (__int128)0x4924924924924925i64) >> 64) >> 4;
    v4 = *(float *)(*(_QWORD *)(v2 + 8 * ((unsigned int)v3 + (v3 >> 63)) + 40) + 92i64);
  }
  else
  {
    v4 = Scaleform::Render::Cxform::Identity.M[0][3];
  }
  return (float)(v4 * 100.0);
}

const Scaleform::Render::State *__fastcall Scaleform::GFx::DisplayObjectBase::GetBlendMode(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  const Scaleform::Render::State *result; // rax

  if ( !Scaleform::GFx::DisplayObjectBase::GetRenderNode(this) )
    return (const Scaleform::Render::State *)this->BlendMode;
  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  result = Scaleform::Render::TreeNode::GetState(RenderNode, State_BlendMode);
  if ( result )
    return (const Scaleform::Render::State *)LODWORD(result->DataValue);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Formatter::GetPrevStr(
        Scaleform::Render::MeshProvider *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m,
        float morphRatio)
{
  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::DisplayObjectBase::GetBoundsIn3D(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdx
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  Scaleform::GFx::InteractiveObject *v9; // rcx
  float x; // xmm6_4
  float y; // xmm7_4
  Scaleform::GFx::MovieImpl *v12; // rdx
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  Scaleform::Render::Rect<float> *v18; // rax
  Scaleform::Render::Point3<float> ptIn; // [rsp+38h] [rbp-29h] BYREF
  Scaleform::Render::Point<float> resulta; // [rsp+48h] [rbp-19h] BYREF
  Scaleform::Render::Point<float> pt; // [rsp+50h] [rbp-11h] BYREF
  int v22[4]; // [rsp+58h] [rbp-9h] BYREF

  this->GetBounds(
    this,
    (Scaleform::Render::Rect<float> *)v22,
    (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  LODWORD(ptIn.x) = v22[0];
  LODWORD(ptIn.y) = v22[1];
  ptIn.z = 0.0;
  Scaleform::GFx::DisplayObjectBase::Local3DToGlobal(this, &resulta, &ptIn);
  LODWORD(ptIn.x) = v22[2];
  LODWORD(ptIn.y) = v22[3];
  ptIn.z = 0.0;
  Scaleform::GFx::DisplayObjectBase::Local3DToGlobal(this, &pt, &ptIn);
  pParent = this->pParent;
  if ( pParent )
  {
    pMovieImpl = pParent->pASRoot->pMovieImpl;
    if ( pMovieImpl )
    {
      v6 = (float)(resulta.y - (float)(pMovieImpl->ViewOffsetY * 20.0))
         / (float)(pMovieImpl->VisibleFrameRect.y2 - pMovieImpl->VisibleFrameRect.y1);
      v7 = pMovieImpl->VisibleFrameRect.x2 - pMovieImpl->VisibleFrameRect.x1;
      v8 = (float)((float)((float)(resulta.x - (float)(pMovieImpl->ViewOffsetX * 20.0)) / v7)
                 + (float)((float)(resulta.x - (float)(pMovieImpl->ViewOffsetX * 20.0)) / v7))
         - 1.0;
      LODWORD(pMovieImpl->ScreenToWorld.Sy) = COERCE_UNSIGNED_INT((float)(v6 + v6) - 1.0) ^ _xmm;
      pMovieImpl->ScreenToWorld.Sx = v8;
      Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(
        pParent,
        (Scaleform::Render::Point<float> *)&ptIn,
        &resulta,
        0,
        0i64);
    }
    v9 = this->pParent;
    x = ptIn.x;
    y = ptIn.y;
    v12 = v9->pASRoot->pMovieImpl;
    if ( v12 )
    {
      v13 = (float)(pt.y - (float)(v12->ViewOffsetY * 20.0))
          / (float)(v12->VisibleFrameRect.y2 - v12->VisibleFrameRect.y1);
      v14 = v12->VisibleFrameRect.x2 - v12->VisibleFrameRect.x1;
      v15 = (float)((float)((float)(pt.x - (float)(v12->ViewOffsetX * 20.0)) / v14)
                  + (float)((float)(pt.x - (float)(v12->ViewOffsetX * 20.0)) / v14))
          - 1.0;
      LODWORD(v12->ScreenToWorld.Sy) = COERCE_UNSIGNED_INT((float)(v13 + v13) - 1.0) ^ _xmm;
      v12->ScreenToWorld.Sx = v15;
      Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(
        v9,
        (Scaleform::Render::Point<float> *)&ptIn,
        &pt,
        0,
        0i64);
    }
    v16 = ptIn.x;
    v17 = ptIn.y;
  }
  else
  {
    y = resulta.y;
    x = resulta.x;
    v17 = pt.y;
    v16 = pt.x;
  }
  result->x1 = x;
  result->y1 = y;
  v18 = result;
  result->x2 = (float)(v16 - x) + x;
  result->y2 = (float)(v17 - y) + y;
  return v18;
}

bool __fastcall Scaleform::GFx::DisplayObjectBase::GetCacheAsBitmap(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  AgDisplay *State; // rax
  Scaleform::Render::FilterSet *Log; // rax
  bool result; // al

  result = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this)
        && (RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this),
            (State = (AgDisplay *)Scaleform::Render::TreeNode::GetState(RenderNode, State_Filter)) != 0i64)
        && (Log = (Scaleform::Render::FilterSet *)Scaleform::GFx::Stream::GetLog(State)) != 0i64
        && Scaleform::Render::FilterSet::GetCacheAsBitmap(Log);
  return result;
}

Scaleform::Log *__fastcall Scaleform::GFx::MovieImpl::GetCachedLog(Scaleform::GFx::MovieImpl *this)
{
  Scaleform::RefCountVImpl **Log; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Log *v4; // rax
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::Ptr<Scaleform::Log> result; // [rsp+30h] [rbp+8h] BYREF

  if ( (this->Flags & 2) != 0 )
    return this->pCachedLog.pObject;
  Log = (Scaleform::RefCountVImpl **)Scaleform::GFx::StateBag::GetLog(&this->Scaleform::GFx::StateBag, &result);
  if ( *Log )
    Scaleform::Render::RenderBuffer::AddRef(*Log);
  pObject = (Scaleform::RefCountVImpl *)this->pCachedLog.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v4 = (Scaleform::Log *)*Log;
  v5 = (Scaleform::RefCountVImpl *)result.pObject;
  this->pCachedLog.pObject = (Scaleform::Log *)*Log;
  if ( v5 )
  {
    Scaleform::RefCountImpl::Release(v5);
    return this->pCachedLog.pObject;
  }
  return v4;
}

__int64 __fastcall Scaleform::GFx::DisplayObject::GetContinueAnimationFlag(Scaleform::GFx::DisplayObject *this)
{
  return (this->DOFlags >> 4) & 1;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

Scaleform::Render::Cxform *__fastcall Scaleform::GFx::DisplayObjectBase::GetCxform(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *pObject; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  pObject = this->pRenNode.pObject;
  if ( !pObject )
    return &Scaleform::Render::Cxform::Identity;
  v2 = (unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64;
  v3 = (__int64)((unsigned __int128)((__int64)((__int64)&pObject[-1]
                                             - ((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64))
                                   * (__int128)0x4924924924924925i64) >> 64) >> 4;
  return (Scaleform::Render::Cxform *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * ((unsigned int)v3 + (v3 >> 63)) + 40)
                                     + 80i64);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

double __fastcall Scaleform::GFx::DisplayObjectBase::GetFOV(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *pPerspectiveData; // rax

  pPerspectiveData = this->pPerspectiveData;
  if ( pPerspectiveData )
    return pPerspectiveData->FieldOfView;
  else
    return 0.0;
}

AgDisplayPlatformImplementation *__fastcall Scaleform::GFx::DisplayObjectBase::GetFilters(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  AgDisplay *State; // rax

  if ( Scaleform::GFx::DisplayObjectBase::GetRenderNode(this)
    && (RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this),
        (State = (AgDisplay *)Scaleform::Render::TreeNode::GetState(RenderNode, State_Filter)) != 0i64) )
  {
    return Scaleform::GFx::Stream::GetLog(State);
  }
  else
  {
    return 0i64;
  }
}

double __fastcall Scaleform::GFx::DisplayObjectBase::GetFocalLength(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *pPerspectiveData; // rax

  pPerspectiveData = this->pPerspectiveData;
  if ( pPerspectiveData )
    return pPerspectiveData->FocalLength;
  else
    return 0.0;
}

Scaleform::GFx::FontManager *__fastcall Scaleform::GFx::DisplayObjectBase::GetFontManager(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx

  pParent = this->pParent;
  if ( pParent )
    return pParent->GetFontManager(pParent);
  else
    return 0i64;
}

Scaleform::GFx::DisplayObjectBase::GeomDataType *__fastcall Scaleform::GFx::DisplayObjectBase::GetGeomData(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::GFx::DisplayObjectBase::GeomDataType *geomData)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rdx
  float *v5; // rbx
  float *v6; // rax

  pGeomData = this->pGeomData;
  if ( pGeomData )
  {
    geomData->X = pGeomData->X;
    geomData->Y = pGeomData->Y;
    geomData->XScale = pGeomData->XScale;
    geomData->YScale = pGeomData->YScale;
    geomData->Rotation = pGeomData->Rotation;
    geomData->OrigMatrix.M[0][0] = pGeomData->OrigMatrix.M[0][0];
    geomData->OrigMatrix.M[0][1] = pGeomData->OrigMatrix.M[0][1];
    geomData->OrigMatrix.M[0][2] = pGeomData->OrigMatrix.M[0][2];
    geomData->OrigMatrix.M[0][3] = pGeomData->OrigMatrix.M[0][3];
    geomData->OrigMatrix.M[1][0] = pGeomData->OrigMatrix.M[1][0];
    geomData->OrigMatrix.M[1][1] = pGeomData->OrigMatrix.M[1][1];
    geomData->OrigMatrix.M[1][2] = pGeomData->OrigMatrix.M[1][2];
    geomData->OrigMatrix.M[1][3] = pGeomData->OrigMatrix.M[1][3];
    geomData->Z = pGeomData->Z;
    geomData->ZScale = pGeomData->ZScale;
    geomData->XRotation = pGeomData->XRotation;
    geomData->YRotation = pGeomData->YRotation;
  }
  else
  {
    v5 = (float *)((__int64 (*)(void))this->GetMatrix)();
    geomData->X = (int)v5[3];
    geomData->Y = (int)v5[7];
    geomData->XScale = sqrt(*v5 * *v5 + v5[4] * v5[4]) * 100.0;
    geomData->YScale = sqrt(v5[1] * v5[1] + v5[5] * v5[5]) * 100.0;
    geomData->Rotation = atan2(v5[4], *v5) * 180.0 / 3.141592653589793;
    v6 = (float *)this->GetMatrix(this);
    geomData->OrigMatrix.M[0][0] = *v6;
    geomData->OrigMatrix.M[0][1] = v6[1];
    geomData->OrigMatrix.M[0][2] = v6[2];
    geomData->OrigMatrix.M[0][3] = v6[3];
    geomData->OrigMatrix.M[1][0] = v6[4];
    geomData->OrigMatrix.M[1][1] = v6[5];
    geomData->OrigMatrix.M[1][2] = v6[6];
    geomData->OrigMatrix.M[1][3] = v6[7];
  }
  return geomData;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetHeight(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  Scaleform::Render::Rect<float> *BoundsIn3D; // rax
  Scaleform::GFx::DisplayObjectBase_vtbl *v4; // rbx
  const Scaleform::Render::Matrix2x4<float> *v5; // rax
  Scaleform::Render::Rect<float> result; // [rsp+20h] [rbp-28h] BYREF

  pObject = this->pRenNode.pObject;
  if ( pObject
    && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64
                             * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x200) != 0 )
  {
    BoundsIn3D = Scaleform::GFx::DisplayObjectBase::GetBoundsIn3D(this, &result);
  }
  else
  {
    v4 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v5 = this->GetMatrix(this);
    BoundsIn3D = v4->GetBounds(this, &result, v5);
  }
  return floor((float)(BoundsIn3D->y2 - BoundsIn3D->y1) + 0.5) * 0.05;
}

void __fastcall Scaleform::GFx::DisplayObjectBase::GetLevelMatrix(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Matrix2x4<float> *pmat)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  const Scaleform::Render::Matrix2x4<float> *v5; // rax

  pParent = this->pParent;
  if ( pParent )
  {
    Scaleform::GFx::DisplayObjectBase::GetLevelMatrix(pParent, pmat);
    v5 = this->GetMatrix(this);
    Scaleform::Render::Matrix2x4<float>::Prepend(pmat, v5);
  }
  else
  {
    *(_OWORD *)&pmat->M[0][0] = 0x3F800000ui64;
    pmat->M[1][0] = 0.0;
    *(_QWORD *)&pmat->M[1][1] = 1065353216i64;
    pmat->M[1][3] = 0.0;
  }
}

Scaleform::Log *__fastcall Scaleform::GFx::DisplayObjectBase::GetLog(Scaleform::GFx::DisplayObjectBase *this)
{
  if ( !this )
    return Scaleform::GFx::MovieImpl::GetCachedLog(0i64);
  while ( SLOBYTE(this->Flags) >= 0 )
  {
    this = this->pParent;
    if ( !this )
      return Scaleform::GFx::MovieImpl::GetCachedLog(0i64);
  }
  return Scaleform::GFx::MovieImpl::GetCachedLog(this->pASRoot->pMovieImpl);
}

Scaleform::GFx::DisplayObject *__fastcall Scaleform::GFx::DisplayObject::GetMask(Scaleform::GFx::DisplayObject *this)
{
  if ( !this->pMaskCharacter || this->IsUsedAsMask(this) )
    return 0i64;
  else
    return this->pMaskCharacter;
}

Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *__fastcall Scaleform::GFx::DisplayObject::GetMatrix3D(
        Scaleform::GFx::DisplayObject *this)
{
  Scaleform::GFx::DisplayObject::ScrollRectInfo *pScrollRect; // rax
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *result; // rax
  Scaleform::Render::TreeNode *pObject; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx

  pScrollRect = this->pScrollRect;
  if ( pScrollRect )
    return (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)&pScrollRect->OrigTransformMatrix;
  result = this->pIndXFormData;
  if ( !result )
  {
    pObject = this->pRenNode.pObject;
    if ( pObject )
    {
      v4 = (unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64;
      v5 = (__int64)((unsigned __int128)((__int64)((__int64)&pObject[-1]
                                                 - ((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64))
                                       * (__int128)0x4924924924924925i64) >> 64) >> 4;
      return (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)(*(_QWORD *)(*(_QWORD *)(v4 + 32)
                                                                                        + 8
                                                                                        * ((unsigned int)v5 + (v5 >> 63))
                                                                                        + 40)
                                                                            + 16i64);
    }
    else
    {
      return (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)&Scaleform::Render::Matrix3x4<float>::Identity;
    }
  }
  return result;
}

Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *__fastcall Scaleform::GFx::DisplayObjectBase::GetMatrix3D(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *result; // rax
  Scaleform::Render::TreeNode *pObject; // rcx

  result = this->pIndXFormData;
  if ( !result )
  {
    pObject = this->pRenNode.pObject;
    if ( pObject )
      return (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                                                                        + 8i64
                                                                                        * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                                                                                        + 40)
                                                                            + 16i64);
    else
      return (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)&Scaleform::Render::Matrix3x4<float>::Identity;
  }
  return result;
}

Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *__fastcall Scaleform::GFx::DisplayObject::GetMatrix(
        Scaleform::GFx::DisplayObject *this)
{
  Scaleform::GFx::DisplayObject::ScrollRectInfo *pScrollRect; // rax
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *result; // rax
  Scaleform::Render::TreeNode *pObject; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx

  pScrollRect = this->pScrollRect;
  if ( pScrollRect )
    return (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)&pScrollRect->OrigTransformMatrix;
  result = this->pIndXFormData;
  if ( !result )
  {
    pObject = this->pRenNode.pObject;
    if ( pObject )
    {
      v4 = *(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20);
      v5 = (__int64)((unsigned __int128)((__int64)((__int64)&pObject[-1]
                                                 - ((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64))
                                       * (__int128)0x4924924924924925i64) >> 64) >> 4;
      return (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)Scaleform::Render::TreeNode::NodeData::M2D(*(Scaleform::Render::TreeNode::NodeData **)(v4 + 8 * ((unsigned int)v5 + (v5 >> 63)) + 40));
    }
    else
    {
      return (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
    }
  }
  return result;
}

const Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::GFx::DisplayObjectBase::GetMatrix(
        Scaleform::GFx::DisplayObjectBase *this)
{
  const Scaleform::Render::Matrix2x4<float> *result; // rax
  Scaleform::Render::TreeNode *pObject; // rcx

  result = (const Scaleform::Render::Matrix2x4<float> *)this->pIndXFormData;
  if ( !result )
  {
    pObject = this->pRenNode.pObject;
    if ( pObject )
      return Scaleform::Render::TreeNode::NodeData::M2D(*(Scaleform::Render::TreeNode::NodeData **)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                                                                                  + 8i64 * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                                                                                                  + 40));
    else
      return (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
  }
  return result;
}

long double __fastcall Scaleform::GFx::DisplayObject::GetMouseX(Scaleform::GFx::DisplayObject *this)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdx
  float v2; // xmm0_4
  float x; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  Scaleform::Render::Point<float> pt; // [rsp+40h] [rbp+8h] BYREF
  Scaleform::Render::Point<float> p; // [rsp+48h] [rbp+10h] BYREF

  pMovieImpl = this->pASRoot->pMovieImpl;
  v2 = pMovieImpl->ViewOffsetY * 20.0;
  x = pMovieImpl->mMouseState[0].LastPosition.x;
  v4 = pMovieImpl->VisibleFrameRect.x2 - pMovieImpl->VisibleFrameRect.x1;
  pt.y = pMovieImpl->mMouseState[0].LastPosition.y;
  v5 = pt.y - v2;
  v6 = pMovieImpl->VisibleFrameRect.y2 - pMovieImpl->VisibleFrameRect.y1;
  pt.x = x;
  v7 = v5 / v6;
  v8 = pMovieImpl->ViewOffsetX * 20.0;
  LODWORD(pMovieImpl->ScreenToWorld.Sy) = COERCE_UNSIGNED_INT((float)(v7 + v7) - 1.0) ^ _xmm;
  pMovieImpl->ScreenToWorld.Sx = (float)((float)((float)(x - v8) / v4) + (float)((float)(x - v8) / v4)) - 1.0;
  Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(this, &p, &pt, 0, 0i64);
  return floor(p.x + 0.5) * 0.05;
}

// attributes: thunk
long double __fastcall Scaleform::GFx::DisplayObjectBase::GetMouseX(Scaleform::GFx::DisplayObjectBase *this)
{
  return Scaleform::GFx::NumberUtil::NaN();
}

long double __fastcall Scaleform::GFx::DisplayObject::GetMouseY(Scaleform::GFx::DisplayObject *this)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdx
  float v2; // xmm0_4
  float x; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  Scaleform::Render::Point<float> pt; // [rsp+40h] [rbp+8h] BYREF
  Scaleform::Render::Point<float> p; // [rsp+48h] [rbp+10h] BYREF

  pMovieImpl = this->pASRoot->pMovieImpl;
  v2 = pMovieImpl->ViewOffsetY * 20.0;
  x = pMovieImpl->mMouseState[0].LastPosition.x;
  v4 = pMovieImpl->VisibleFrameRect.x2 - pMovieImpl->VisibleFrameRect.x1;
  pt.y = pMovieImpl->mMouseState[0].LastPosition.y;
  v5 = pt.y - v2;
  v6 = pMovieImpl->VisibleFrameRect.y2 - pMovieImpl->VisibleFrameRect.y1;
  pt.x = x;
  v7 = v5 / v6;
  v8 = pMovieImpl->ViewOffsetX * 20.0;
  LODWORD(pMovieImpl->ScreenToWorld.Sy) = COERCE_UNSIGNED_INT((float)(v7 + v7) - 1.0) ^ _xmm;
  pMovieImpl->ScreenToWorld.Sx = (float)((float)((float)(x - v8) / v4) + (float)((float)(x - v8) / v4)) - 1.0;
  Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(this, &p, &pt, 0, 0i64);
  return floor(p.y + 0.5) * 0.05;
}

Scaleform::GFx::ASString *__fastcall Scaleform::GFx::DisplayObject::GetName(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::GFx::ASString *result)
{
  Scaleform::GFx::CharacterHandle *pObject; // rax
  Scaleform::GFx::ASStringNode *pNode; // rax
  Scaleform::GFx::ASMovieRootBase *v6; // rcx

  pObject = this->pNameHandle.pObject;
  if ( pObject || (pObject = Scaleform::GFx::DisplayObject::CreateCharacterHandle(this)) != 0i64 )
  {
    pNode = pObject->Name.pNode;
  }
  else
  {
    v6 = this->pASRoot->pMovieImpl->pASMovieRoot.pObject;
    pNode = &v6->GetStringManager(v6)->EmptyStringNode;
  }
  ++pNode->RefCount;
  result->pNode = pNode;
  return result;
}

Scaleform::GFx::ASString *__fastcall Scaleform::GFx::DisplayObject::GetOriginalName(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::GFx::ASString *result)
{
  Scaleform::GFx::CharacterHandle *pObject; // rax
  Scaleform::GFx::ASStringNode *pNode; // rax
  Scaleform::GFx::CharacterHandle *CharacterHandle; // rax
  Scaleform::GFx::ASMovieRootBase *v7; // rcx

  pObject = this->pNameHandle.pObject;
  if ( pObject || (pObject = Scaleform::GFx::DisplayObject::CreateCharacterHandle(this)) != 0i64 )
  {
    pNode = pObject->OriginalName.pNode;
  }
  else
  {
    CharacterHandle = this->pNameHandle.pObject;
    if ( CharacterHandle || (CharacterHandle = Scaleform::GFx::DisplayObject::CreateCharacterHandle(this)) != 0i64 )
    {
      pNode = CharacterHandle->Name.pNode;
    }
    else
    {
      v7 = this->pASRoot->pMovieImpl->pASMovieRoot.pObject;
      pNode = &v7->GetStringManager(v7)->EmptyStringNode;
    }
  }
  ++pNode->RefCount;
  result->pNode = pNode;
  return result;
}

Scaleform::Render::Point<float> *__fastcall Scaleform::GFx::DisplayObjectBase::GetProjectionCenter(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Point<float> *result)
{
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *pPerspectiveData; // rax
  Scaleform::Render::Point<float> ProjectionCenter; // [rsp+8h] [rbp+8h]

  pPerspectiveData = this->pPerspectiveData;
  if ( pPerspectiveData )
    ProjectionCenter = pPerspectiveData->ProjectionCenter;
  else
    ProjectionCenter = 0i64;
  *result = ProjectionCenter;
  return result;
}

char __fastcall Scaleform::GFx::DisplayObjectBase::GetProjectionMatrix3D(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Matrix4x4<float> *m,
        bool bInherit)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  const Scaleform::Render::State *State; // rax
  __int128 *v8; // rax
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  char result; // al
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rcx

  pObject = this->pRenNode.pObject;
  if ( pObject )
  {
    State = Scaleform::Render::TreeNode::GetState(pObject, State_ProjectionMatrix3D);
    if ( State )
    {
      v8 = (__int128 *)(State->DataValue + 16);
      v9 = *v8;
      v10 = v8[1];
      v11 = v8[2];
      v12 = v8[3];
      result = 1;
      *(_OWORD *)&m->M[0][0] = v9;
      *(_OWORD *)&m->M[1][0] = v10;
      *(_OWORD *)&m->M[2][0] = v11;
      *(_OWORD *)&m->M[3][0] = v12;
      return result;
    }
  }
  if ( !bInherit )
    return 0;
  pParent = this->pParent;
  if ( pParent )
    return pParent->GetProjectionMatrix3D(pParent, m, bInherit);
  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( !pMovieImpl )
    return 0;
  return Scaleform::Render::TreeNode::GetProjectionMatrix3D(pMovieImpl->pRenderRoot.pObject, m);
}

bool __fastcall Scaleform::Render::TreeNode::GetProjectionMatrix3D(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::Matrix4x4<float> *mat)
{
  const Scaleform::Render::State *State; // rax
  Scaleform::Render::State v4; // xmm2
  Scaleform::Render::State v5; // xmm3
  Scaleform::Render::State v6; // xmm0
  Scaleform::Render::State v7; // xmm1

  State = Scaleform::Render::TreeNode::GetState(this, State_ProjectionMatrix3D);
  if ( State )
  {
    State = (const Scaleform::Render::State *)(State->DataValue + 16);
    v4 = *State;
    v5 = State[1];
    v6 = State[2];
    v7 = State[3];
    LOBYTE(State) = 1;
    *(Scaleform::Render::State *)&mat->M[0][0] = v4;
    *(Scaleform::Render::State *)&mat->M[1][0] = v5;
    *(Scaleform::Render::State *)&mat->M[2][0] = v6;
    *(Scaleform::Render::State *)&mat->M[3][0] = v7;
  }
  return (char)State;
}

float __fastcall Scaleform::GFx::DisplayObjectBase::GetRatio(Scaleform::GFx::DisplayObjectBase *this)
{
  return 0.0;
}

Scaleform::Render::ContextImpl::Context *__fastcall Scaleform::GFx::DisplayObjectBase::GetRenderContext(
        Scaleform::GFx::DisplayObjectBase *this)
{
  return &this->pASRoot->pMovieImpl->RenderContext;
}

Scaleform::Render::TreeNode *__fastcall Scaleform::GFx::DisplayObjectBase::GetRenderNode(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Ptr<Scaleform::Render::TreeNode> *v2; // rdi
  Scaleform::Render::TreeNode *pObject; // rcx
  bool v4; // zf
  Scaleform::Render::ContextImpl::Entry *v5; // rcx
  Scaleform::Render::ContextImpl::Entry *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( this->pRenNode.pObject )
    return this->pRenNode.pObject;
  v2 = this->CreateRenderNode(this, &v7, &this->pASRoot->pMovieImpl->RenderContext);
  if ( v2->pObject )
    ++v2->pObject->RefCount;
  pObject = this->pRenNode.pObject;
  if ( pObject )
  {
    v4 = pObject->RefCount-- == 1;
    if ( v4 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
  }
  v5 = v7;
  this->pRenNode = (Scaleform::Ptr<Scaleform::Render::TreeNode>)v2->pObject;
  if ( v5 )
  {
    v4 = v5->RefCount-- == 1;
    if ( v4 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v5);
  }
  Scaleform::Render::TreeNode::SetVisible(this->pRenNode.pObject, (this->Flags & 0x4000) != 0);
  return this->pRenNode.pObject;
}

float __fastcall Scaleform::GFx::DisplayObjectBase::GetRendererFloat(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::Entry *v2; // rbx
  float result; // xmm0_4

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  v2 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  result = Scaleform::Render::TreeNode::GetRendererFloat(RenderNode);
  if ( v2 )
  {
    if ( v2->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v2);
  }
  return result;
}

const char *__fastcall Scaleform::GFx::DisplayObjectBase::GetRendererString(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::Entry *v2; // rbx
  const char *result; // rax
  const char *v4; // rdi

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  v2 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  result = Scaleform::Render::TreeNode::GetRendererString(RenderNode);
  v4 = result;
  if ( v2 )
  {
    if ( v2->RefCount-- == 1 )
    {
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v2);
      return v4;
    }
  }
  return result;
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::DisplayObjectBase::GetResourceMovieDef(
        Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx

  pParent = this->pParent;
  if ( pParent )
    return pParent->GetResourceMovieDef(pParent);
  else
    return 0i64;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetRotation(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->Rotation;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::DisplayObjectBase::GetScale9Grid(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  const Scaleform::Render::State *State; // rax
  unsigned __int128 v5; // xmm0
  Scaleform::Render::Rect<float> *v6; // rax

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  State = Scaleform::Render::TreeNode::GetState(RenderNode, State_Scale9);
  if ( State )
    v5 = *(_OWORD *)(State->DataValue + 16);
  else
    v5 = 0i64;
  LODWORD(result->x1) = v5;
  *(_QWORD *)&result->y1 = v5 >> 32;
  v6 = result;
  result->y2 = *((float *)&v5 + 3);
  return v6;
}

__int64 __fastcall Scaleform::GFx::DisplayObjectBase::GetTopMostMouseEntity(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::Render::Point<float> *pt,
        Scaleform::GFx::DisplayObjectBase::TopMostDescr *pdescr)
{
  pdescr->pResult = 0i64;
  return 2i64;
}

Scaleform::GFx::InteractiveObject *__fastcall Scaleform::GFx::DisplayObjectBase::GetTopMostMouseEntityDef(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::GFx::CharacterDef *pdef,
        const Scaleform::Render::Point<float> *pt,
        bool testAll,
        const Scaleform::GFx::InteractiveObject *ignoreMC)
{
  _BOOL8 v9; // r8
  Scaleform::GFx::InteractiveObject *pParent; // rbx
  const Scaleform::GFx::InteractiveObject *v11; // rdi
  unsigned __int8 AvmObjOffset; // al
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 v15; // cl
  __int64 v16; // rax
  Scaleform::Render::Point<float> p; // [rsp+40h] [rbp+8h] BYREF

  if ( this->GetVisible(this) )
  {
    Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(this, &p, pt, 1, 0i64);
    if ( !this->ClipDepth )
    {
      LOBYTE(v9) = 1;
      if ( pdef->DefPointTestLocal(pdef, &p, v9, this) )
      {
        pParent = this->pParent;
        if ( pParent )
        {
          v11 = ignoreMC;
          while ( (pParent->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x400) != 0 )
          {
            if ( testAll
              || (AvmObjOffset = pParent->AvmObjOffset) != 0
              && (v13 = ((__int64 (__fastcall *)(__int64))(*(Scaleform::GFx::InteractiveObject_vtbl **)((char *)&pParent->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable + 4 * AvmObjOffset))->CreateRenderNode)((__int64)pParent + 4 * AvmObjOffset),
                  (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 96i64))(v13))
              || ((__int64 (__fastcall *)(Scaleform::GFx::InteractiveObject *))pParent->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].SetMatrix)(pParent)
              && (v14 = ((__int64 (__fastcall *)(Scaleform::GFx::InteractiveObject *))pParent->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].SetMatrix)(pParent),
                  (v15 = *(_BYTE *)(v14 + 109)) != 0)
              && (v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 4i64 * v15) + 8i64))(v14 + 4i64 * v15),
                  (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96i64))(v16)) )
            {
              if ( !v11 || v11 != pParent )
                return pParent;
            }
            pParent = pParent->pParent;
            if ( !pParent )
              return 0i64;
          }
        }
      }
    }
  }
  return 0i64;
}

Scaleform::GFx::InteractiveObject *__fastcall Scaleform::GFx::DisplayObjectBase::GetTopParent(
        Scaleform::GFx::DisplayObjectBase *this,
        _BOOL8 ignoreLockRoot)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx

  pParent = this->pParent;
  if ( pParent )
    return pParent->GetTopParent(pParent, ignoreLockRoot);
  else
    return 0i64;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

char __fastcall Scaleform::GFx::DisplayObjectBase::GetViewMatrix3D(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Matrix3x4<float> *m,
        bool bInherit)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  Scaleform::Render::Matrix3x4<float> *p_ViewMatrix3D; // rax
  __int128 v6; // xmm0
  char result; // al
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rcx

  pObject = this->pRenNode.pObject;
  if ( pObject
    && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64
                             * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x800) != 0 )
  {
    p_ViewMatrix3D = &this->pPerspectiveData->ViewMatrix3D;
    *(_OWORD *)&m->M[0][0] = *(_OWORD *)&p_ViewMatrix3D->M[0][0];
    *(_OWORD *)&m->M[1][0] = *(_OWORD *)&p_ViewMatrix3D->M[1][0];
    v6 = *(_OWORD *)&p_ViewMatrix3D->M[2][0];
    result = 1;
    *(_OWORD *)&m->M[2][0] = v6;
    return result;
  }
  if ( !bInherit )
    return 0;
  pParent = this->pParent;
  if ( pParent )
    return ((__int64 (__fastcall *)(Scaleform::GFx::InteractiveObject *, Scaleform::Render::Matrix3x4<float> *))pParent->GetViewMatrix3D)(
             pParent,
             m);
  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( !pMovieImpl )
    return 0;
  return Scaleform::Render::TreeNode::GetViewMatrix3D(pMovieImpl->pRenderRoot.pObject, m);
}

bool __fastcall Scaleform::Render::TreeNode::GetViewMatrix3D(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::Matrix3x4<float> *mat)
{
  const Scaleform::Render::State *State; // rax
  Scaleform::Render::State v4; // xmm2
  Scaleform::Render::State v5; // xmm1
  Scaleform::Render::State v6; // xmm0

  State = Scaleform::Render::TreeNode::GetState(this, State_ViewMatrix3D);
  if ( State )
  {
    State = (const Scaleform::Render::State *)(State->DataValue + 16);
    v4 = *State;
    v5 = State[1];
    v6 = State[2];
    LOBYTE(State) = 1;
    *(Scaleform::Render::State *)&mat->M[0][0] = v4;
    *(Scaleform::Render::State *)&mat->M[1][0] = v5;
    *(Scaleform::Render::State *)&mat->M[2][0] = v6;
  }
  return (char)State;
}

__int64 __fastcall Scaleform::GFx::DisplayObjectBase::GetVisible(Scaleform::GFx::DisplayObjectBase *this)
{
  return (this->Flags >> 14) & 1;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetWidth(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  Scaleform::Render::Rect<float> *BoundsIn3D; // rax
  Scaleform::GFx::DisplayObjectBase_vtbl *v4; // rbx
  const Scaleform::Render::Matrix2x4<float> *v5; // rax
  Scaleform::Render::Rect<float> result; // [rsp+20h] [rbp-28h] BYREF

  pObject = this->pRenNode.pObject;
  if ( pObject
    && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64
                             * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x200) != 0 )
  {
    BoundsIn3D = Scaleform::GFx::DisplayObjectBase::GetBoundsIn3D(this, &result);
  }
  else
  {
    v4 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v5 = this->GetMatrix(this);
    BoundsIn3D = v4->GetBounds(this, &result, v5);
  }
  return floor((float)(BoundsIn3D->x2 - BoundsIn3D->x1) + 0.5) * 0.05;
}

void __fastcall Scaleform::GFx::DisplayObjectBase::GetWorldMatrix3D(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Matrix3x4<float> *pmat)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  const Scaleform::Render::Matrix3x4<float> *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  const Scaleform::Render::Matrix3x4<float> *v8; // rax
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+20h] [rbp-48h] BYREF

  pParent = this->pParent;
  if ( pParent )
  {
    Scaleform::GFx::DisplayObjectBase::GetWorldMatrix3D(pParent, pmat);
    v5 = this->GetMatrix3D(this);
    v6 = *(_OWORD *)&pmat->M[1][0];
    *(_OWORD *)&m1.M[0][0] = *(_OWORD *)&pmat->M[0][0];
    v7 = *(_OWORD *)&pmat->M[2][0];
    *(_OWORD *)&m1.M[1][0] = v6;
    *(_OWORD *)&m1.M[2][0] = v7;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(pmat, &m1, v5);
  }
  else
  {
    v8 = this->GetMatrix3D(this);
    *(_OWORD *)&pmat->M[0][0] = *(_OWORD *)&v8->M[0][0];
    *(_OWORD *)&pmat->M[1][0] = *(_OWORD *)&v8->M[1][0];
    *(_OWORD *)&pmat->M[2][0] = *(_OWORD *)&v8->M[2][0];
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Matrix2x4<float> *pmat)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  const Scaleform::Render::Matrix2x4<float> *v5; // rax
  float *v6; // rax

  pParent = this->pParent;
  if ( pParent )
  {
    Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(pParent, pmat);
    v5 = this->GetMatrix(this);
    Scaleform::Render::Matrix2x4<float>::Prepend(pmat, v5);
  }
  else
  {
    v6 = (float *)this->GetMatrix(this);
    pmat->M[0][0] = *v6;
    pmat->M[0][1] = v6[1];
    pmat->M[0][2] = v6[2];
    pmat->M[0][3] = v6[3];
    pmat->M[1][0] = v6[4];
    pmat->M[1][1] = v6[5];
    pmat->M[1][2] = v6[6];
    pmat->M[1][3] = v6[7];
  }
}

void __fastcall Scaleform::GFx::DisplayObject::GetWorldMatrixWithScroll(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::Render::Matrix2x4<float> *m)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *pIndXFormData; // r8
  Scaleform::Render::TreeNode *pObject; // rcx
  const Scaleform::Render::Matrix2x4<float> *v7; // rax
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *v8; // r8
  Scaleform::Render::TreeNode *v9; // rcx

  pParent = this->pParent;
  if ( pParent )
  {
    Scaleform::GFx::DisplayObject::GetWorldMatrixWithScroll(pParent, m);
    pIndXFormData = this->pIndXFormData;
    if ( !pIndXFormData )
    {
      pObject = this->pRenNode.pObject;
      if ( pObject )
      {
        v7 = Scaleform::Render::TreeNode::NodeData::M2D(*(Scaleform::Render::TreeNode::NodeData **)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                                                                                  + 8i64 * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                                                                                                  + 40));
        Scaleform::Render::Matrix2x4<float>::Prepend(m, v7);
        return;
      }
      pIndXFormData = (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
    }
    Scaleform::Render::Matrix2x4<float>::Prepend(m, (const Scaleform::Render::Matrix2x4<float> *)pIndXFormData);
  }
  else
  {
    v8 = this->pIndXFormData;
    if ( !v8 )
    {
      v9 = this->pRenNode.pObject;
      if ( v9 )
        v8 = (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)Scaleform::Render::TreeNode::NodeData::M2D(*(Scaleform::Render::TreeNode::NodeData **)(*(_QWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFF000ui64) + 0x20) + 8i64 * (unsigned int)((int)((_DWORD)v9 - ((unsigned int)v9 & 0xFFFFF000) - 56) / 56) + 40));
      else
        v8 = (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
    }
    m->M[0][0] = v8->OrigTransformMatrix.M[0][0];
    m->M[0][1] = v8->OrigTransformMatrix.M[0][1];
    m->M[0][2] = v8->OrigTransformMatrix.M[0][2];
    m->M[0][3] = v8->OrigTransformMatrix.M[0][3];
    m->M[1][0] = v8->OrigTransformMatrix.M[1][0];
    m->M[1][1] = v8->OrigTransformMatrix.M[1][1];
    m->M[1][2] = v8->OrigTransformMatrix.M[1][2];
    m->M[1][3] = v8->OrigTransformMatrix.M[1][3];
  }
}

double __fastcall Scaleform::GFx::DisplayObjectBase::GetX(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return (double)Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->X * 0.05;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetXRotation(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->XRotation;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetXScale(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->XScale;
}

double __fastcall Scaleform::GFx::DisplayObjectBase::GetY(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return (double)Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->Y * 0.05;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetYRotation(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->YRotation;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetYScale(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->YScale;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetZ(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->Z;
}

long double __fastcall Scaleform::GFx::DisplayObjectBase::GetZScale(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType geomData; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)&geomData.OrigMatrix.M[0][0] = _xmm;
  *(_OWORD *)&geomData.XScale = _xmm;
  *(_QWORD *)&geomData.X = 0i64;
  *(_OWORD *)&geomData.OrigMatrix.M[1][0] = _xmm;
  *(_OWORD *)&geomData.Z = _xmm;
  geomData.Rotation = 0.0;
  *(_OWORD *)&geomData.XRotation = 0i64;
  return Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &geomData)->ZScale;
}

Scaleform::Render::Point3<float> *__fastcall Scaleform::GFx::DisplayObjectBase::GlobalToLocal3D(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Point3<float> *result,
        const Scaleform::Render::Point<float> *ptIn)
{
  Scaleform::Render::Point3<float> *v4; // rax
  float y; // xmm1_4
  Scaleform::Render::Point<float> resulta; // [rsp+38h] [rbp+10h] BYREF

  Scaleform::GFx::DisplayObjectBase::GlobalToLocal(this, &resulta, ptIn);
  v4 = result;
  y = resulta.y;
  result->x = resulta.x;
  result->y = y;
  result->z = 0.0;
  return v4;
}

Scaleform::Render::Point<float> *__fastcall Scaleform::GFx::DisplayObjectBase::GlobalToLocal(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Point<float> *result,
        const Scaleform::Render::Point<float> *ptIn)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // r9
  float v5; // xmm1_4
  float x; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm0_4

  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( pMovieImpl )
  {
    v5 = pMovieImpl->VisibleFrameRect.x2 - pMovieImpl->VisibleFrameRect.x1;
    x = ptIn->x;
    v7 = (float)(ptIn->y - (float)(pMovieImpl->ViewOffsetY * 20.0))
       / (float)(pMovieImpl->VisibleFrameRect.y2 - pMovieImpl->VisibleFrameRect.y1);
    v8 = pMovieImpl->ViewOffsetX * 20.0;
    LODWORD(pMovieImpl->ScreenToWorld.Sy) = COERCE_UNSIGNED_INT((float)(v7 + v7) - 1.0) ^ _xmm;
    pMovieImpl->ScreenToWorld.Sx = (float)((float)((float)(x - v8) / v5) + (float)((float)(x - v8) / v5)) - 1.0;
    Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(this, result, ptIn, 0, 0i64);
  }
  return result;
}

bool __fastcall Scaleform::GFx::DisplayObjectBase::Has3D(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *pObject; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  bool result; // al

  pObject = this->pRenNode.pObject;
  result = 0;
  if ( pObject )
  {
    v2 = (unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64;
    v3 = (__int64)((unsigned __int128)((__int64)((__int64)&pObject[-1]
                                               - ((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64))
                                     * (__int128)0x4924924924924925i64) >> 64) >> 4;
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * ((unsigned int)v3 + (v3 >> 63)) + 40) + 10i64) & 0x200) != 0 )
      return 1;
  }
  return result;
}

void __fastcall Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(Scaleform::GFx::DisplayObjectBase *this)
{
  this->Flags &= 0xFFF3u;
}

bool __fastcall Scaleform::GFx::DisplayObjectBase::Is3D(Scaleform::GFx::DisplayObjectBase *this, bool bInherit)
{
  Scaleform::Render::TreeNode *pObject; // r9
  bool result; // al

  do
  {
    pObject = this->pRenNode.pObject;
    result = pObject
          && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                   + 8i64
                                   * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56)
                                                  / 56)
                                   + 40)
                       + 10i64) & 0x200) != 0;
    if ( !bInherit )
      break;
    if ( result )
      return 1;
    this = this->pParent;
  }
  while ( this );
  return result;
}

char __fastcall Scaleform::GFx::DisplayObjectBase::IsAncestor(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::GFx::DisplayObjectBase *ch)
{
  Scaleform::GFx::InteractiveObject *pParent; // rax

  pParent = ch->pParent;
  if ( !pParent )
    return 0;
  while ( pParent != this )
  {
    pParent = pParent->pParent;
    if ( !pParent )
      return 0;
  }
  return 1;
}

_BOOL8 __fastcall Scaleform::GFx::DisplayObjectBase::IsBatchingDisabled(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::Entry *v2; // rbx
  bool IsBatchingDisabled; // di

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  v2 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  IsBatchingDisabled = Scaleform::Render::TreeNode::IsBatchingDisabled(RenderNode);
  if ( v2 )
  {
    if ( v2->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v2);
  }
  return IsBatchingDisabled;
}

bool __fastcall Scaleform::GFx::NumberUtil::IsNaN(long double v)
{
  return (*(_QWORD *)&v & 0x7FF0000000000000i64) == 0x7FF0000000000000i64 && (*(_QWORD *)&v & 0xFFFFFFFFFFFFFi64) != 0;
}

__int64 __fastcall Scaleform::GFx::DisplayObject::IsUsedAsMask(Scaleform::GFx::DisplayObject *this)
{
  return (this->DOFlags >> 2) & 1;
}

bool __fastcall Scaleform::Render::Matrix2x4<float>::IsValid(Scaleform::Render::Matrix2x4<float> *this)
{
  float v1; // xmm2_4
  float v2; // xmm2_4
  float v3; // xmm2_4
  float v4; // xmm2_4
  float v5; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm2_4
  bool result; // al

  result = 0;
  if ( this->M[0][0] >= -3.4028235e38 && this->M[0][0] <= 3.4028235e38 )
  {
    v1 = this->M[0][1];
    if ( v1 >= -3.4028235e38 && v1 <= 3.4028235e38 )
    {
      v2 = this->M[0][2];
      if ( v2 >= -3.4028235e38 && v2 <= 3.4028235e38 )
      {
        v3 = this->M[0][3];
        if ( v3 >= -3.4028235e38 && v3 <= 3.4028235e38 )
        {
          v4 = this->M[1][0];
          if ( v4 >= -3.4028235e38 && v4 <= 3.4028235e38 )
          {
            v5 = this->M[1][1];
            if ( v5 >= -3.4028235e38 && v5 <= 3.4028235e38 )
            {
              v6 = this->M[1][2];
              if ( v6 >= -3.4028235e38 && v6 <= 3.4028235e38 )
              {
                v7 = this->M[1][3];
                if ( v7 >= -3.4028235e38 && v7 <= 3.4028235e38 )
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

bool __fastcall Scaleform::Render::Matrix3x4<float>::IsValid(Scaleform::Render::Matrix3x4<float> *this)
{
  float v1; // xmm2_4
  float v2; // xmm2_4
  float v3; // xmm2_4
  float v4; // xmm2_4
  float v5; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm2_4
  float v8; // xmm2_4
  float v9; // xmm2_4
  float v10; // xmm2_4
  float v11; // xmm2_4

  if ( this->M[0][0] < -3.4028235e38 )
    return 0;
  if ( this->M[0][0] > 3.4028235e38 )
    return 0;
  v1 = this->M[0][1];
  if ( v1 < -3.4028235e38 )
    return 0;
  if ( v1 > 3.4028235e38 )
    return 0;
  v2 = this->M[0][2];
  if ( v2 < -3.4028235e38 )
    return 0;
  if ( v2 > 3.4028235e38 )
    return 0;
  v3 = this->M[0][3];
  if ( v3 < -3.4028235e38 )
    return 0;
  if ( v3 > 3.4028235e38 )
    return 0;
  v4 = this->M[1][0];
  if ( v4 < -3.4028235e38 )
    return 0;
  if ( v4 > 3.4028235e38 )
    return 0;
  v5 = this->M[1][1];
  if ( v5 < -3.4028235e38 )
    return 0;
  if ( v5 > 3.4028235e38 )
    return 0;
  v6 = this->M[1][2];
  if ( v6 < -3.4028235e38 )
    return 0;
  if ( v6 > 3.4028235e38 )
    return 0;
  v7 = this->M[1][3];
  if ( v7 < -3.4028235e38 )
    return 0;
  if ( v7 > 3.4028235e38 )
    return 0;
  v8 = this->M[2][0];
  if ( v8 < -3.4028235e38 )
    return 0;
  if ( v8 > 3.4028235e38 )
    return 0;
  v9 = this->M[2][1];
  if ( v9 < -3.4028235e38 )
    return 0;
  if ( v9 > 3.4028235e38 )
    return 0;
  v10 = this->M[2][2];
  if ( v10 < -3.4028235e38 )
    return 0;
  if ( v10 > 3.4028235e38 )
    return 0;
  v11 = this->M[2][3];
  return v11 >= -3.4028235e38 && v11 <= 3.4028235e38;
}

__int64 __fastcall Scaleform::GFx::DisplayObjectBase::IsVerboseAction(Scaleform::GFx::DisplayObjectBase *this)
{
  if ( !this )
    return (MEMORY[0x52E0] >> 2) & 1;
  while ( SLOBYTE(this->Flags) >= 0 )
  {
    this = this->pParent;
    if ( !this )
      return (MEMORY[0x52E0] >> 2) & 1;
  }
  return (this->pASRoot->pMovieImpl->Flags >> 2) & 1;
}

bool __fastcall Scaleform::GFx::DisplayObjectBase::IsVerboseActionErrors(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType **p_pPerspectiveData; // rax

  p_pPerspectiveData = &this[-1].pPerspectiveData;
  if ( this == (Scaleform::GFx::DisplayObjectBase *)24 )
    return (MEMORY[0x52E0] & 0x40) == 0;
  while ( *((char *)p_pPerspectiveData + 106) >= 0 )
  {
    p_pPerspectiveData = (Scaleform::GFx::DisplayObjectBase::PerspectiveDataType **)p_pPerspectiveData[7];
    if ( !p_pPerspectiveData )
      return (MEMORY[0x52E0] & 0x40) == 0;
  }
  return (*(_DWORD *)(*(_QWORD *)&p_pPerspectiveData[4]->ProjectionCenter + 21216i64) & 0x40) == 0;
}

Scaleform::Render::Point<float> *__fastcall Scaleform::GFx::DisplayObjectBase::Local3DToGlobal(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Point<float> *result,
        const Scaleform::Render::Point3<float> *ptIn)
{
  const Scaleform::Render::Point3<float> *v4; // r14
  Scaleform::Render::TreeNode *pObject; // rcx
  Scaleform::GFx::InteractiveObject *v7; // rsi
  Scaleform::GFx::DisplayObjectBase_vtbl *v8; // rax
  _BOOL8 v9; // r8
  Scaleform::GFx::DisplayObjectBase_vtbl *v10; // rax
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  const Scaleform::Render::Matrix3x4<float> *v12; // rax
  const Scaleform::Render::Matrix3x4<float> *v13; // rax
  float y; // xmm4_4
  float x; // xmm3_4
  float z; // xmm5_4
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rax
  float v18; // xmm2_4
  float v19; // xmm8_4
  float v20; // xmm6_4
  Scaleform::GFx::MovieImpl *pMovieImpl; // rcx
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm9_4
  float v25; // xmm10_4
  float *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm3_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  const Scaleform::Render::Matrix2x4<float> *v38; // rax
  __int64 v40[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-D0h]
  __int64 v42; // [rsp+40h] [rbp-C8h]
  __int64 v43; // [rsp+48h] [rbp-C0h]
  int v44; // [rsp+50h] [rbp-B8h]
  int v45; // [rsp+54h] [rbp-B4h]
  int v46; // [rsp+58h] [rbp-B0h]
  _QWORD pmat[7]; // [rsp+60h] [rbp-A8h] BYREF
  Scaleform::Render::Matrix3x4<float> m2; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::Render::Matrix4x4<float> v49; // [rsp+C8h] [rbp-40h] BYREF
  Scaleform::Render::Matrix4x4<float> v50; // [rsp+108h] [rbp+0h] BYREF
  Scaleform::Render::Matrix4x4<float> m1; // [rsp+148h] [rbp+40h] BYREF

  v4 = ptIn;
  pObject = this->pRenNode.pObject;
  if ( pObject
    && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64
                             * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x200) != 0
    || (v7 = this->pParent) != 0i64 && Scaleform::GFx::DisplayObjectBase::Is3D(this->pParent, 1) )
  {
    LOBYTE(ptIn) = 1;
    memset(&m2, 0, sizeof(m2));
    v8 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    m2.M[0][0] = 1.0;
    m2.M[1][1] = 1.0;
    m2.M[2][2] = 1.0;
    v8->GetViewMatrix3D(this, &m2, (bool)ptIn);
    memset(&v49, 0, sizeof(v49));
    LOBYTE(v9) = 1;
    v10 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v49.M[0][0] = 1.0;
    v49.M[1][1] = 1.0;
    v49.M[2][2] = 1.0;
    v49.M[3][3] = 1.0;
    v10->GetProjectionMatrix3D(this, &v49, v9);
    pParent = this->pParent;
    pmat[3] = 0x3F80000000000000i64;
    *(_OWORD *)&pmat[1] = 0x3F800000ui64;
    pmat[6] = 1065353216i64;
    *(_OWORD *)&pmat[4] = 0ui64;
    if ( pParent )
    {
      Scaleform::GFx::DisplayObjectBase::GetWorldMatrix3D(pParent, (Scaleform::Render::Matrix3x4<float> *)&pmat[1]);
      v12 = this->GetMatrix3D(this);
      *(_OWORD *)&m1.M[0][0] = *(_OWORD *)&pmat[1];
      *(_OWORD *)&m1.M[2][0] = *(_OWORD *)&pmat[5];
      *(_OWORD *)&m1.M[1][0] = *(_OWORD *)&pmat[3];
      Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(
        (Scaleform::Render::Matrix3x4<float> *)&pmat[1],
        (const Scaleform::Render::Matrix3x4<float> *)&m1,
        v12);
    }
    else
    {
      v13 = this->GetMatrix3D(this);
      *(_OWORD *)&pmat[1] = *(_OWORD *)&v13->M[0][0];
      *(_OWORD *)&pmat[3] = *(_OWORD *)&v13->M[1][0];
      *(_OWORD *)&pmat[5] = *(_OWORD *)&v13->M[2][0];
    }
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&m1, &v49, &m2);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(
      &v50,
      &m1,
      (const Scaleform::Render::Matrix3x4<float> *)&pmat[1]);
    y = v4->y;
    x = v4->x;
    z = v4->z;
    v40[0] = 0i64;
    v40[1] = 0i64;
    v43 = 0i64;
    v42 = 0i64;
    v44 = 0;
    pASRoot = this->pASRoot;
    v41 = 0x100000001i64;
    v46 = 1065353216;
    v45 = 1065353216;
    v18 = (float)((float)((float)(v50.M[3][0] * x) + (float)(v50.M[3][1] * y)) + (float)(v50.M[3][2] * z)) + v50.M[3][3];
    v19 = (float)((float)((float)((float)(v50.M[0][0] * x) + (float)(v50.M[0][1] * y)) + (float)(v50.M[0][2] * z))
                + v50.M[0][3])
        / v18;
    v20 = (float)((float)((float)((float)(v50.M[1][0] * x) + (float)(v50.M[1][1] * y)) + (float)(v50.M[1][2] * z))
                + v50.M[1][3])
        / v18;
    pASRoot->pMovieImpl->GetViewport(pASRoot->pMovieImpl, (Scaleform::GFx::Viewport *)v40);
    pMovieImpl = this->pASRoot->pMovieImpl;
    v22 = (float)((float)(v19 + 1.0) * (float)(int)v41) * 0.5;
    v23 = (float)((float)(1.0 - v20) * (float)SHIDWORD(v41)) * 0.5;
    if ( pMovieImpl )
    {
      v22 = (float)((float)(v22 * pMovieImpl->ViewScaleX) + pMovieImpl->ViewOffsetX) * 20.0;
      v23 = (float)((float)(v23 * pMovieImpl->ViewScaleY) + pMovieImpl->ViewOffsetY) * 20.0;
    }
    result->x = v22;
    result->y = v23;
  }
  else
  {
    v24 = v4->x;
    v25 = v4->y;
    *(_OWORD *)&pmat[1] = _xmm;
    *(_OWORD *)&pmat[3] = _xmm;
    if ( v7 )
    {
      Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(v7, (Scaleform::Render::Matrix2x4<float> *)&pmat[1]);
      v26 = (float *)this->GetMatrix(this);
      v27 = *((float *)&pmat[1] + 1);
      v28 = *(float *)&pmat[1];
      v29 = *(float *)&pmat[3];
      v30 = *(float *)&pmat[1];
      v31 = *((float *)&pmat[3] + 1);
      v32 = (float)(*((float *)&pmat[1] + 1) * v26[4]) + (float)(*(float *)&pmat[1] * *v26);
      *(float *)&pmat[1] = v32;
      v33 = (float)(*((float *)&pmat[3] + 1) * v26[4]) + (float)(*(float *)&pmat[3] * *v26);
      *(float *)&pmat[3] = v33;
      v34 = (float)(v30 * v26[1]) + (float)(*((float *)&pmat[1] + 1) * v26[5]);
      *(_QWORD *)((char *)&pmat[1] + 4) = LODWORD(v34);
      v35 = (float)(v29 * v26[1]) + (float)(*((float *)&pmat[3] + 1) * v26[5]);
      *(_QWORD *)((char *)&pmat[3] + 4) = LODWORD(v35);
      v36 = *((float *)&pmat[2] + 1) + (float)((float)(v28 * v26[3]) + (float)(v27 * v26[7]));
      *((float *)&pmat[2] + 1) = v36;
      v37 = *((float *)&pmat[4] + 1) + (float)((float)(v29 * v26[3]) + (float)(v31 * v26[7]));
    }
    else
    {
      v38 = this->GetMatrix(this);
      v32 = v38->M[0][0];
      *(float *)&pmat[1] = v38->M[0][0];
      v34 = v38->M[0][1];
      *((float *)&pmat[1] + 1) = v34;
      *(float *)&pmat[2] = v38->M[0][2];
      v36 = v38->M[0][3];
      *((float *)&pmat[2] + 1) = v36;
      v33 = v38->M[1][0];
      *(float *)&pmat[3] = v33;
      v35 = v38->M[1][1];
      *((float *)&pmat[3] + 1) = v35;
      *(float *)&pmat[4] = v38->M[1][2];
      v37 = v38->M[1][3];
    }
    result->x = (float)((float)(v34 * v25) + (float)(v32 * v24)) + v36;
    result->y = (float)((float)(v35 * v25) + (float)(v33 * v24)) + v37;
  }
  return result;
}

bool __fastcall Scaleform::GFx::DisplayObject::OnEvent(
        Scaleform::GFx::DisplayObject *this,
        const Scaleform::GFx::EventId *id)
{
  unsigned __int8 AvmObjOffset; // al

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
    return ((__int64 (__fastcall *)(char *, const Scaleform::GFx::EventId *))(*(Scaleform::GFx::DisplayObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable + 4 * AvmObjOffset))->ClearProjectionMatrix3D)(
             (char *)this + 4 * AvmObjOffset,
             id);
  else
    return 0;
}

void __fastcall Scaleform::GFx::DisplayObject::OnEventLoad(Scaleform::GFx::DisplayObject *this)
{
  unsigned __int8 AvmObjOffset; // al

  this->Flags |= 0x2000u;
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
    ((void (__fastcall *)(char *))(*(Scaleform::GFx::DisplayObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                          + 4 * AvmObjOffset))->GetViewMatrix3D)((char *)this + 4 * AvmObjOffset);
}

void __fastcall Scaleform::GFx::DisplayObjectBase::OnEventLoad(Scaleform::GFx::DisplayObjectBase *this)
{
  this->Flags |= 0x2000u;
}

void __fastcall Scaleform::GFx::DisplayObject::OnEventUnload(Scaleform::GFx::DisplayObject *this)
{
  Scaleform::GFx::CharacterHandle *pObject; // rax
  unsigned __int8 AvmObjOffset; // al

  Scaleform::GFx::DisplayObjectBase::OnEventUnload(this);
  pObject = this->pNameHandle.pObject;
  if ( pObject )
    pObject->pCharacter = 0i64;
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
    ((void (__fastcall *)(char *))(*(Scaleform::GFx::DisplayObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                          + 4 * AvmObjOffset))->SetViewMatrix3D)((char *)this + 4 * AvmObjOffset);
}

void __fastcall Scaleform::GFx::DisplayObjectBase::OnEventUnload(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase *pParent; // rdx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rcx
  Scaleform::GFx::DisplayObjectBase_vtbl *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+2Ch] [rbp-1Ch]
  int v8; // [rsp+30h] [rbp-18h]

  this->Flags |= 0x1000u;
  if ( (this->Flags & 2) != 0 )
  {
    pParent = this;
    while ( SLOBYTE(pParent->Flags) >= 0 )
    {
      pParent = pParent->pParent;
      if ( !pParent )
      {
        pMovieImpl = 0i64;
        goto LABEL_7;
      }
    }
    pMovieImpl = pParent->pASRoot->pMovieImpl;
LABEL_7:
    Scaleform::GFx::MovieImpl::RemoveTopmostLevelCharacter(pMovieImpl, this);
  }
  if ( (this->Flags & 0x10) == 0 )
  {
    v4 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v5 = 4i64;
    v6 = 0;
    v7 = 0;
    v8 = 65280;
    v4->OnEvent(this, (const Scaleform::GFx::EventId *)&v5);
    this->Flags |= 0x10u;
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::RemoveIndirectTransform(
        Scaleform::GFx::DisplayObjectBase *this,
        bool readdToDisplayList)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::TreeNode *v5; // rbx
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *pIndXFormData; // rdx
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rcx
  Scaleform::GFx::DisplayList *p_mDisplayList; // rsi
  unsigned __int64 DisplayIndex; // rax
  Scaleform::Render::TreeNode *pObject; // rcx
  bool v11; // zf
  Scaleform::GFx::MovieImpl::IndirectTransPair result; // [rsp+20h] [rbp-28h] BYREF

  if ( (this->Flags & 0x8000u) != 0 )
  {
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    v5 = RenderNode;
    if ( RenderNode )
      ++RenderNode->RefCount;
    pIndXFormData = this->pIndXFormData;
    if ( pIndXFormData->IsOrig3D )
    {
      Scaleform::Render::TreeNode::SetMatrix3D(RenderNode, &pIndXFormData->OrigTransformMatrix);
    }
    else
    {
      Scaleform::Render::TreeNode::Clear3D(RenderNode);
      Scaleform::Render::TreeNode::SetMatrix(v5, (const Scaleform::Render::Matrix2x4<float> *)this->pIndXFormData);
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pIndXFormData);
    pASRoot = this->pASRoot;
    this->pIndXFormData = 0i64;
    this->Flags &= ~0x8000u;
    Scaleform::GFx::MovieImpl::RemoveIndirectTransformPair(pASRoot->pMovieImpl, &result, this);
    if ( readdToDisplayList )
    {
      if ( result.OriginalParent.pObject )
      {
        p_mDisplayList = &result.OriginalParent.pObject->mDisplayList;
        DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(&result.OriginalParent.pObject->mDisplayList, this);
        if ( DisplayIndex != -1i64 )
          Scaleform::GFx::DisplayList::InsertIntoRenderTree(p_mDisplayList, result.OriginalParent.pObject, DisplayIndex);
      }
    }
    Scaleform::Render::TreeNode::SetOrigScale9Parent(v5, 0i64);
    if ( result.OriginalParent.pObject )
      Scaleform::RefCountNTSImpl::Release(result.OriginalParent.pObject);
    if ( result.Obj.pObject )
      Scaleform::RefCountNTSImpl::Release(result.Obj.pObject);
    pObject = result.TransformParent.pObject;
    if ( result.TransformParent.pObject )
    {
      v11 = result.TransformParent.pObject->RefCount-- == 1;
      if ( v11 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
    }
    if ( v5 )
    {
      v11 = v5->RefCount-- == 1;
      if ( v11 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v5);
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObject::ResetClipDepth(Scaleform::GFx::DisplayObject *this)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  Scaleform::GFx::InteractiveObject *v3; // rbp
  unsigned __int64 DisplayIndex; // rbx

  if ( this->ClipDepth )
  {
    pParent = this->pParent;
    if ( !pParent )
      goto LABEL_7;
    v3 = 0i64;
    if ( (pParent->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x200) != 0 )
      v3 = pParent;
    if ( v3 )
    {
      DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex((Scaleform::GFx::DisplayList *)&v3[1], this);
      Scaleform::GFx::DisplayList::RemoveFromRenderTree((Scaleform::GFx::DisplayList *)&v3[1], v3, DisplayIndex);
      this->ClipDepth = 0;
      Scaleform::GFx::DisplayList::InsertIntoRenderTree((Scaleform::GFx::DisplayList *)&v3[1], v3, DisplayIndex);
    }
    else
    {
LABEL_7:
      this->ClipDepth = 0;
    }
  }
}

Scaleform::GFx::InteractiveObject *__fastcall Scaleform::GFx::CharacterHandle::ResolveCharacter(
        Scaleform::GFx::CharacterHandle *this,
        Scaleform::GFx::MovieImpl *proot)
{
  Scaleform::GFx::InteractiveObject *result; // rax

  result = (Scaleform::GFx::InteractiveObject *)this->pCharacter;
  if ( !result )
    return proot->pASMovieRoot.pObject->FindTarget(proot->pASMovieRoot.pObject, &this->NamePath);
  return result;
}

void __fastcall Scaleform::GFx::DisplayObject::SetAcceptAnimMoves(Scaleform::GFx::DisplayObject *this, bool accept)
{
  const Scaleform::GFx::DisplayObjectBase::GeomDataType *GeomData; // rax
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rdx
  Scaleform::GFx::DisplayObjectBase::GeomDataType v6; // [rsp+20h] [rbp-68h] BYREF

  if ( !this->pGeomData )
  {
    *(_OWORD *)&v6.OrigMatrix.M[0][0] = _xmm;
    *(_OWORD *)&v6.XScale = _xmm;
    *(_QWORD *)&v6.X = 0i64;
    *(_OWORD *)&v6.OrigMatrix.M[1][0] = _xmm;
    *(_OWORD *)&v6.Z = _xmm;
    v6.Rotation = 0.0;
    *(_OWORD *)&v6.XRotation = 0i64;
    GeomData = Scaleform::GFx::DisplayObjectBase::GetGeomData(this, &v6);
    Scaleform::GFx::DisplayObjectBase::SetGeomData(this, GeomData);
  }
  if ( accept )
    this->DOFlags |= 8u;
  else
    this->DOFlags &= ~8u;
  pASRoot = this->pASRoot;
  if ( (pASRoot->pMovieImpl->Flags & 0x2000) != 0 )
    this->DOFlags |= 0x10u;
  else
    this->DOFlags &= ~0x10u;
  if ( (pASRoot->pMovieImpl->Flags & 0x2000) != 0 && accept )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pGeomData);
    this->pGeomData = 0i64;
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetAlpha(Scaleform::GFx::DisplayObjectBase *this, long double alpha)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  Scaleform::Render::Cxform *v4; // rdx
  Scaleform::Render::ContextImpl::EntryData v5; // xmm6
  float v6; // xmm0_4
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::ContextImpl::EntryData v9; // [rsp+20h] [rbp-38h]

  if ( (*(_QWORD *)&alpha & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (*(_QWORD *)&alpha & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    pObject = this->pRenNode.pObject;
    if ( pObject )
      v4 = (Scaleform::Render::Cxform *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64)
                                                               + 0x20)
                                                   + 8i64
                                                   * (unsigned int)((int)((_DWORD)pObject
                                                                        - ((unsigned int)pObject & 0xFFFFF000)
                                                                        - 56)
                                                                  / 56)
                                                   + 40)
                                       + 80i64);
    else
      v4 = &Scaleform::Render::Cxform::Identity;
    v5 = *(Scaleform::Render::ContextImpl::EntryData *)&v4->M[1][0];
    v9 = *(Scaleform::Render::ContextImpl::EntryData *)&v4->M[0][0];
    v6 = alpha / 100.0;
    *(float *)(&v9.Flags + 1) = v6;
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(RenderNode, 2u);
    WritableData[5] = v9;
    WritableData[6] = v5;
    this->SetAcceptAnimMoves(this, 0);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetBlendMode(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::BlendMode blend)
{
  Scaleform::Render::BlendMode v2; // ebx
  unsigned __int8 v3; // si
  Scaleform::Render::TreeNode *RenderNode; // rax

  v2 = blend;
  v3 = blend;
  if ( blend == Blend_Normal )
    v2 = Blend_None;
  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeNode::SetBlendMode(RenderNode, v2);
  this->BlendMode = v3;
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetCacheAsBitmap(
        Scaleform::GFx::DisplayObjectBase *this,
        bool enable)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  AgDisplay *State; // rax
  Scaleform::Render::FilterSet *Log; // rax
  Scaleform::Render::FilterSet *v7; // rbx
  Scaleform::Render::FilterSet *v8; // rbx
  bool v9; // dl
  Scaleform::Render::FilterSet *v10; // rcx
  Scaleform::Render::FilterSet *v11; // rax
  Scaleform::Render::FilterSet *v12; // rax

  if ( Scaleform::GFx::DisplayObjectBase::GetRenderNode(this) )
  {
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    State = (AgDisplay *)Scaleform::Render::TreeNode::GetState(RenderNode, State_Filter);
    if ( State && (Log = (Scaleform::Render::FilterSet *)Scaleform::GFx::Stream::GetLog(State), (v7 = Log) != 0i64) )
    {
      if ( enable == Scaleform::Render::FilterSet::GetCacheAsBitmap(Log) )
        return;
      v8 = Scaleform::Render::FilterSet::Clone(v7, 0, 0i64);
      v9 = enable;
      v10 = v8;
    }
    else
    {
      if ( !enable )
        return;
      v11 = (Scaleform::Render::FilterSet *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                              Scaleform::Memory::pGlobalHeap,
                                              56i64);
      if ( v11 )
      {
        Scaleform::Render::FilterSet::FilterSet(v11, 0i64);
        v8 = v12;
      }
      else
      {
        v8 = 0i64;
      }
      v9 = 1;
      v10 = v8;
    }
    Scaleform::Render::FilterSet::SetCacheAsBitmap(v10, v9);
    this->SetFilters(this, v8);
    if ( v8 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetCxform(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::Render::Cxform *cx)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(RenderNode, 2u);
  WritableData[5] = *(Scaleform::Render::ContextImpl::EntryData *)&cx->M[0][0];
  WritableData[6] = *(Scaleform::Render::ContextImpl::EntryData *)&cx->M[1][0];
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetFOV(Scaleform::GFx::DisplayObjectBase *this, long double fovdeg)
{
  double v3; // xmm6_8
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *v4; // rax
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *pPerspectiveData; // rax
  long double v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = fovdeg;
  v3 = fovdeg;
  if ( (*(_QWORD *)&fovdeg & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (*(_QWORD *)&fovdeg & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    v6 = fovdeg;
    if ( fovdeg == -INFINITY || (v6 = fovdeg, fovdeg == INFINITY) )
      v3 = 0.0;
    if ( !this->pPerspectiveData )
    {
      LODWORD(v6) = 322;
      v4 = (Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                       Scaleform::Memory::pGlobalHeap,
                                                                       this,
                                                                       80i64,
                                                                       &v6);
      if ( v4 )
        Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(v4);
      this->pPerspectiveData = v4;
    }
    pPerspectiveData = this->pPerspectiveData;
    if ( pPerspectiveData->FieldOfView != v3 )
    {
      pPerspectiveData->FieldOfView = v3;
      Scaleform::GFx::DisplayObjectBase::UpdateViewAndPerspective(this);
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetFilters(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::Render::FilterSet *filters)
{
  Scaleform::Render::TreeNode *RenderNode; // rax

  if ( Scaleform::GFx::DisplayObjectBase::GetRenderNode(this) )
  {
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeNode::SetFilters(RenderNode, filters);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetFocalLength(
        Scaleform::GFx::DisplayObjectBase *this,
        long double focalLength)
{
  double v3; // xmm6_8
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *v4; // rax
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *pPerspectiveData; // rax
  long double v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = focalLength;
  v3 = focalLength;
  if ( (*(_QWORD *)&focalLength & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (*(_QWORD *)&focalLength & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    v6 = focalLength;
    if ( focalLength == -INFINITY || (v6 = focalLength, focalLength == INFINITY) )
      v3 = 0.0;
    if ( !this->pPerspectiveData )
    {
      LODWORD(v6) = 322;
      v4 = (Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                       Scaleform::Memory::pGlobalHeap,
                                                                       this,
                                                                       80i64,
                                                                       &v6);
      if ( v4 )
        Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(v4);
      this->pPerspectiveData = v4;
    }
    pPerspectiveData = this->pPerspectiveData;
    if ( pPerspectiveData->FocalLength != v3 )
    {
      pPerspectiveData->FocalLength = v3;
      Scaleform::GFx::DisplayObjectBase::UpdateViewAndPerspective(this);
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetGeomData(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::GFx::DisplayObjectBase::GeomDataType *gd)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rdx
  Scaleform::GFx::DisplayObjectBase::GeomDataType *v5; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  pGeomData = this->pGeomData;
  if ( pGeomData )
  {
    pGeomData->X = gd->X;
    pGeomData->Y = gd->Y;
    pGeomData->XScale = gd->XScale;
    pGeomData->YScale = gd->YScale;
    pGeomData->Rotation = gd->Rotation;
    pGeomData->OrigMatrix.M[0][0] = gd->OrigMatrix.M[0][0];
    pGeomData->OrigMatrix.M[0][1] = gd->OrigMatrix.M[0][1];
    pGeomData->OrigMatrix.M[0][2] = gd->OrigMatrix.M[0][2];
    pGeomData->OrigMatrix.M[0][3] = gd->OrigMatrix.M[0][3];
    pGeomData->OrigMatrix.M[1][0] = gd->OrigMatrix.M[1][0];
    pGeomData->OrigMatrix.M[1][1] = gd->OrigMatrix.M[1][1];
    pGeomData->OrigMatrix.M[1][2] = gd->OrigMatrix.M[1][2];
    pGeomData->OrigMatrix.M[1][3] = gd->OrigMatrix.M[1][3];
    pGeomData->Z = gd->Z;
    pGeomData->ZScale = gd->ZScale;
    pGeomData->XRotation = gd->XRotation;
    pGeomData->YRotation = gd->YRotation;
  }
  else
  {
    v6 = 322;
    v5 = (Scaleform::GFx::DisplayObjectBase::GeomDataType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                              Scaleform::Memory::pGlobalHeap,
                                                              this,
                                                              96i64,
                                                              &v6);
    if ( v5 )
    {
      v5->X = gd->X;
      v5->Y = gd->Y;
      v5->XScale = gd->XScale;
      v5->YScale = gd->YScale;
      v5->Rotation = gd->Rotation;
      v5->OrigMatrix.M[0][0] = gd->OrigMatrix.M[0][0];
      v5->OrigMatrix.M[0][1] = gd->OrigMatrix.M[0][1];
      v5->OrigMatrix.M[0][2] = gd->OrigMatrix.M[0][2];
      v5->OrigMatrix.M[0][3] = gd->OrigMatrix.M[0][3];
      v5->OrigMatrix.M[1][0] = gd->OrigMatrix.M[1][0];
      v5->OrigMatrix.M[1][1] = gd->OrigMatrix.M[1][1];
      v5->OrigMatrix.M[1][2] = gd->OrigMatrix.M[1][2];
      v5->OrigMatrix.M[1][3] = gd->OrigMatrix.M[1][3];
      v5->Z = gd->Z;
      v5->ZScale = gd->ZScale;
      v5->XRotation = gd->XRotation;
      v5->YRotation = gd->YRotation;
      this->pGeomData = v5;
    }
    else
    {
      this->pGeomData = 0i64;
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetHeight(
        Scaleform::GFx::DisplayObjectBase *this,
        long double height)
{
  double v3; // xmm7_8
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rax
  float v5; // xmm1_4
  Scaleform::GFx::DisplayObjectBase_vtbl *v6; // rax
  __int64 v7; // rax
  float v8; // xmm4_4
  Scaleform::GFx::DisplayObjectBase::GeomDataType *v9; // rax
  long double v10; // xmm6_8
  long double v11; // xmm0_8
  Scaleform::Render::Rect<float> *v12; // rax
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  double v16; // xmm11_8
  double v17; // xmm10_8
  Scaleform::GFx::DisplayObjectBase::GeomDataType *v18; // rbx
  double Rotation; // xmm6_8
  float v20; // xmm7_4
  long double v21; // xmm0_8
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-79h] BYREF
  long double v23[2]; // [rsp+40h] [rbp-59h] BYREF
  Scaleform::Render::Matrix2x4<float> v24; // [rsp+50h] [rbp-49h] BYREF

  v23[0] = height;
  v3 = height;
  if ( (*(_QWORD *)&height & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (*(_QWORD *)&height & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    v23[0] = height;
    if ( height != -INFINITY )
    {
      v23[0] = height;
      if ( height == INFINITY )
        v3 = 0.0;
      this->SetAcceptAnimMoves(this, 0);
      pGeomData = this->pGeomData;
      *(_OWORD *)&m.M[0][0] = *(_OWORD *)&pGeomData->OrigMatrix.M[0][0];
      *(_QWORD *)&m.M[1][0] = *(_QWORD *)&pGeomData->OrigMatrix.M[1][0];
      m.M[1][2] = pGeomData->OrigMatrix.M[1][2];
      v5 = pGeomData->OrigMatrix.M[1][3];
      v6 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
      m.M[1][3] = v5;
      v7 = (__int64)v6->GetMatrix(this);
      m.M[0][3] = *(float *)(v7 + 12);
      v8 = *(float *)(v7 + 28);
      v9 = this->pGeomData;
      *(_QWORD *)&v24.M[1][2] = __PAIR64__(LODWORD(v8), LODWORD(m.M[1][2]));
      m.M[1][3] = v8;
      *(_OWORD *)&v24.M[0][0] = *(_OWORD *)&m.M[0][0];
      *(_QWORD *)&v24.M[1][0] = *(_QWORD *)&m.M[1][0];
      v10 = v9->Rotation * 3.141592653589793 / 180.0;
      v11 = atan2(m.M[1][0], m.M[0][0]);
      Scaleform::Render::Matrix2x4<float>::AppendRotation(&v24, v10 - v11);
      v12 = this->GetBounds(this, v23, &v24);
      v13 = 0.0;
      v14 = v12->y2 - v12->y1;
      *(float *)&v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm);
      if ( *(float *)&v11 > 0.000001 )
      {
        v15 = v3 * 20.0;
        v13 = v15 / v14;
      }
      v16 = sqrt(m.M[1][1] * m.M[1][1] + m.M[0][1] * m.M[0][1]);
      v17 = v13 * v16 * 100.0;
      this->pGeomData->YScale = v17;
      if ( v16 == 0.0 )
      {
        v16 = DOUBLE_1_0;
        v17 = 0.0;
      }
      v18 = this->pGeomData;
      Rotation = v18->Rotation;
      v20 = Rotation * 3.141592653589793 / 180.0 - atan2(m.M[1][0], m.M[0][0]);
      *(float *)&Rotation = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17 / (v16 * 100.0)) & _xmm);
      v21 = sqrt(m.M[0][0] * m.M[0][0] + m.M[1][0] * m.M[1][0]);
      Scaleform::GFx::ASCharacter_MatrixScaleAndRotate2x2(
        &m,
        COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18->XScale / (v21 * 100.0)) & _xmm),
        *(float *)&Rotation,
        v20);
      *(_QWORD *)&v18->XScale &= _xmm;
      *(_QWORD *)&this->pGeomData->YScale &= _xmm;
      if ( m.M[0][0] >= -3.4028235e38
        && m.M[0][0] <= 3.4028235e38
        && m.M[0][1] >= -3.4028235e38
        && m.M[0][1] <= 3.4028235e38
        && m.M[0][2] >= -3.4028235e38
        && m.M[0][2] <= 3.4028235e38
        && m.M[0][3] >= -3.4028235e38
        && m.M[0][3] <= 3.4028235e38
        && m.M[1][0] >= -3.4028235e38
        && m.M[1][0] <= 3.4028235e38
        && m.M[1][1] >= -3.4028235e38
        && m.M[1][1] <= 3.4028235e38
        && m.M[1][2] >= -3.4028235e38
        && m.M[1][2] <= 3.4028235e38
        && m.M[1][3] >= -3.4028235e38
        && m.M[1][3] <= 3.4028235e38 )
      {
        this->SetMatrix(this, &m);
      }
    }
  }
}

Scaleform::Ptr<Scaleform::Render::TreeNode> *__fastcall Scaleform::GFx::DisplayObjectBase::SetIndirectTransform(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Ptr<Scaleform::Render::TreeNode> *result,
        Scaleform::Render::TreeNode *newParent)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::TreeNode *v7; // rdi
  Scaleform::Render::TreeNode *pParent; // r15
  Scaleform::GFx::InteractiveObject *v9; // rcx
  Scaleform::GFx::DisplayObjContainer *v10; // rbp
  unsigned __int64 DisplayIndex; // rax
  _QWORD *v12; // rax
  bool v13; // zf
  unsigned int v14; // er9
  _OWORD *v15; // r8
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *pIndXFormData; // rcx
  Scaleform::Render::ContextImpl::Entry *pNext; // rax
  int v19; // [rsp+50h] [rbp+18h] BYREF

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  v7 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  pParent = (Scaleform::Render::TreeNode *)RenderNode->pParent;
  Scaleform::Render::TreeNode::SetOrigScale9Parent(RenderNode, pParent);
  if ( newParent )
  {
    while ( newParent != v7 )
    {
      newParent = (Scaleform::Render::TreeNode *)newParent->pParent;
      if ( !newParent )
        goto LABEL_6;
    }
    v13 = v7->RefCount-- == 1;
    result->pObject = 0i64;
  }
  else
  {
LABEL_6:
    v9 = this->pParent;
    v10 = 0i64;
    if ( v9 )
    {
      if ( (v9->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x200) != 0 )
        v10 = (Scaleform::GFx::DisplayObjContainer *)this->pParent;
      if ( v10 )
      {
        DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(&v10->mDisplayList, this);
        Scaleform::GFx::DisplayList::RemoveFromRenderTree(&v10->mDisplayList, v10, DisplayIndex);
      }
    }
    Scaleform::GFx::MovieImpl::AddIndirectTransformPair(this->pASRoot->pMovieImpl, v10, pParent, this);
    if ( !this->pIndXFormData )
    {
      v19 = 322;
      v12 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 64i64, &v19);
      if ( v12 )
      {
        *v12 = 0i64;
        v12[1] = 0i64;
        v12[2] = 0i64;
        v12[3] = 0i64;
        v12[4] = 0i64;
        v12[5] = 0i64;
        *(_DWORD *)v12 = 1065353216;
        *((_DWORD *)v12 + 5) = 1065353216;
        *((_DWORD *)v12 + 10) = 1065353216;
      }
      this->pIndXFormData = (Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *)v12;
    }
    result->pObject = v7;
    v14 = (_DWORD)v7 - ((unsigned int)v7 & 0xFFFFF000);
    v15 = *(_OWORD **)(*(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                     + 8i64 * (unsigned int)((int)(v14 - 56) / 56)
                     + 40);
    pIndXFormData = this->pIndXFormData;
    *(_OWORD *)&pIndXFormData->OrigTransformMatrix.M[0][0] = v15[1];
    *(_OWORD *)&pIndXFormData->OrigTransformMatrix.M[1][0] = v15[2];
    *(_OWORD *)&pIndXFormData->OrigTransformMatrix.M[2][0] = v15[3];
    this->pIndXFormData->IsOrig3D = (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000ui64)
                                                                      + 0x20)
                                                          + 8i64 * (unsigned int)((int)(v14 - 56) / 56)
                                                          + 40)
                                              + 10i64) & 0x200) != 0;
    this->Flags |= 0x8000u;
    pNext = v7->pNext;
    v7->RefCount = (unsigned __int64)pNext;
    v13 = pNext == 0i64;
  }
  if ( v13 )
    Scaleform::Render::ContextImpl::Entry::destroyHelper(v7);
  return result;
}

void __fastcall Scaleform::GFx::DisplayObject::SetMask(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::GFx::DisplayObject *pmaskSprite,
        bool readdMaskToDisplayList)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::TreeNode *v6; // rbp
  Scaleform::GFx::DisplayObject *pMaskCharacter; // rbx
  Scaleform::GFx::DisplayObject *v8; // rcx
  Scaleform::GFx::DisplayObject *v9; // rcx
  Scaleform::Render::TreeNode *v10; // rbx
  Scaleform::Ptr<Scaleform::Render::TreeNode> *v11; // rax
  Scaleform::Render::TreeNode *pObject; // rcx
  bool v13; // zf
  Scaleform::Ptr<Scaleform::Render::TreeNode> result; // [rsp+40h] [rbp+8h] BYREF
  bool v15; // [rsp+50h] [rbp+18h]

  v15 = readdMaskToDisplayList;
  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  v6 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  Scaleform::GFx::DisplayObject::ResetClipDepth(this);
  if ( pmaskSprite )
  {
    if ( this->pScrollRect )
      Scaleform::GFx::DisplayObject::SetScrollRect(this, 0i64);
    Scaleform::GFx::DisplayObject::ResetClipDepth(pmaskSprite);
  }
  if ( this->pMaskCharacter )
  {
    if ( !this->IsUsedAsMask(this) )
    {
      pMaskCharacter = this->pMaskCharacter;
      if ( pMaskCharacter )
      {
        if ( pMaskCharacter->pMaskCharacter
          && !pMaskCharacter->IsUsedAsMask(this->pMaskCharacter)
          && pMaskCharacter->pMaskCharacter )
        {
          Scaleform::GFx::DisplayObject::SetMask(pMaskCharacter, 0i64, 1);
        }
        pMaskCharacter->pMaskCharacter = 0i64;
        pMaskCharacter->DOFlags &= ~4u;
        Scaleform::Render::TreeNode::SetMaskNode(v6, 0i64);
        Scaleform::GFx::DisplayObjectBase::RemoveIndirectTransform(pMaskCharacter, v15);
      }
    }
    if ( this->pMaskCharacter )
    {
      if ( this->IsUsedAsMask(this) )
      {
        v8 = this->pMaskCharacter;
        if ( v8 )
          Scaleform::GFx::DisplayObject::SetMask(v8, 0i64, 1);
      }
    }
  }
  if ( pmaskSprite
    && pmaskSprite->pMaskCharacter
    && pmaskSprite->IsUsedAsMask(pmaskSprite)
    && pmaskSprite->pMaskCharacter )
  {
    if ( pmaskSprite->IsUsedAsMask(pmaskSprite) )
      v9 = pmaskSprite->pMaskCharacter;
    else
      v9 = 0i64;
    Scaleform::GFx::DisplayObject::SetMask(v9, 0i64, 1);
  }
  if ( this->pMaskCharacter && !this->IsUsedAsMask(this) )
    Scaleform::RefCountNTSImpl::Release(this->pMaskCharacter);
  v10 = 0i64;
  if ( pmaskSprite )
  {
    v11 = Scaleform::GFx::DisplayObjectBase::SetIndirectTransform(pmaskSprite, &result, v6);
    if ( v11->pObject )
      ++v11->pObject->RefCount;
    pObject = result.pObject;
    v10 = v11->pObject;
    if ( result.pObject )
    {
      v13 = result.pObject->RefCount-- == 1;
      if ( v13 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
    }
  }
  Scaleform::Render::TreeNode::SetMaskNode(v6, v10);
  this->DOFlags &= ~4u;
  if ( v10 )
  {
    this->pMaskCharacter = pmaskSprite;
    if ( pmaskSprite )
    {
      ++pmaskSprite->RefCount;
      Scaleform::GFx::DisplayObject::SetMaskOwner(pmaskSprite, this);
    }
    v13 = v10->RefCount-- == 1;
    if ( v13 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v10);
  }
  else
  {
    this->pMaskCharacter = 0i64;
  }
  if ( v6 )
  {
    v13 = v6->RefCount-- == 1;
    if ( v13 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v6);
  }
}

void __fastcall Scaleform::GFx::DisplayObject::SetMaskOwner(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::GFx::DisplayObject *pmaskOwner)
{
  if ( this->pMaskCharacter && !this->IsUsedAsMask(this) && this->pMaskCharacter )
    Scaleform::GFx::DisplayObject::SetMask(this, 0i64, 1);
  this->pMaskCharacter = pmaskOwner;
  if ( pmaskOwner )
    this->DOFlags |= 4u;
  else
    this->DOFlags &= ~4u;
}

void __fastcall Scaleform::GFx::DisplayObject::SetMatrix3D(
        Scaleform::GFx::DisplayObject *this,
        const Scaleform::Render::Matrix3x4<float> *mt)
{
  Scaleform::GFx::DisplayObject::ScrollRectInfo *pScrollRect; // rax
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v4; // rax
  __int128 v5; // xmm5
  __int128 v6; // xmm4
  double v7; // xmm0_8
  float v8; // xmm3_4
  float v9; // xmm1_4
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v11; // rax
  double y1; // xmm1_8
  Scaleform::Render::Matrix3x4<float> v13; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix3x4<float> m2; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::Matrix3x4<float> v15; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Matrix3x4<float> m; // [rsp+E0h] [rbp-20h] BYREF

  pScrollRect = this->pScrollRect;
  if ( pScrollRect )
  {
    pScrollRect->OrigTransformMatrix = *mt;
    this->pScrollRect->IsOrig3D = 1;
    v4 = this->pScrollRect;
    *(_OWORD *)&m.M[0][0] = *(_OWORD *)&v4->OrigTransformMatrix.M[0][0];
    v5 = *(_OWORD *)&v4->OrigTransformMatrix.M[1][0];
    *(_OWORD *)&m1.M[0][0] = *(_OWORD *)&m.M[0][0];
    *(_OWORD *)&m.M[1][0] = v5;
    v6 = *(_OWORD *)&v4->OrigTransformMatrix.M[2][0];
    *(_OWORD *)&m1.M[1][0] = v5;
    *(_OWORD *)&m.M[2][0] = v6;
    *(_QWORD *)&v7 = *(_QWORD *)&v4->Rectangle.x1 ^ _xmm;
    v8 = COERCE_DOUBLE(*(_QWORD *)&v4->Rectangle.y1 ^ _xmm);
    m2.M[0][2] = 0.0;
    m2.M[1][0] = 0.0;
    *(_QWORD *)&m2.M[2][0] = 0i64;
    v9 = v7;
    *(_QWORD *)&m2.M[0][0] = 1065353216i64;
    *(_QWORD *)&m2.M[1][1] = 1065353216i64;
    *(_QWORD *)&m2.M[2][2] = 1065353216i64;
    m2.M[1][3] = v8;
    m2.M[0][3] = v9;
    *(_OWORD *)&m1.M[2][0] = v6;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&m, &m1, &m2);
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeNode::SetMatrix3D(RenderNode, &m);
    memset(&v13, 0, sizeof(v13));
    v11 = this->pScrollRect;
    v13.M[0][0] = 1.0;
    v13.M[1][1] = 1.0;
    v13.M[2][2] = 1.0;
    y1 = v11->Rectangle.y1;
    *(float *)&v7 = v11->Rectangle.x1;
    *(_QWORD *)&v15.M[0][1] = 0i64;
    v15.M[1][0] = 0.0;
    *(_QWORD *)&v15.M[2][0] = 0i64;
    *(float *)&y1 = y1;
    v15.M[0][0] = 1.0;
    *(_QWORD *)&v15.M[1][1] = 1065353216i64;
    *(_QWORD *)&v15.M[2][2] = 1065353216i64;
    v15.M[0][3] = *(float *)&v7;
    m1 = v13;
    v15.M[1][3] = *(float *)&y1;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v13, &m1, &v15);
    Scaleform::Render::TreeNode::SetMatrix3D(this->pScrollRect->Mask.pObject->pTreeContainer.pObject, &v13);
  }
  else
  {
    Scaleform::GFx::DisplayObjectBase::SetMatrix3D(this, mt);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetMatrix3D(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::Render::Matrix3x4<float> *m)
{
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *pIndXFormData; // rax
  Scaleform::Render::TreeNode *v5; // rax
  Scaleform::Render::TreeNode *RenderNode; // rax

  pIndXFormData = this->pIndXFormData;
  if ( pIndXFormData )
  {
    pIndXFormData->OrigTransformMatrix = *m;
    this->pIndXFormData->IsOrig3D = 1;
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::ContextImpl::Entry::getWritableData(RenderNode, 1u);
  }
  else
  {
    v5 = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeNode::SetMatrix3D(v5, m);
  }
  Scaleform::GFx::DisplayObjectBase::UpdateViewAndPerspective(this);
}

void __fastcall Scaleform::GFx::DisplayObject::SetMatrix(
        Scaleform::GFx::DisplayObject *this,
        const Scaleform::Render::Matrix2x4<float> *mt)
{
  Scaleform::GFx::DisplayObject::ScrollRectInfo *pScrollRect; // rax
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v4; // rax
  float v5; // xmm3_4
  float v6; // xmm2_4
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v8; // rcx
  float x1; // xmm3_4
  float y1; // xmm2_4
  __int128 v11; // [rsp+30h] [rbp-59h]
  Scaleform::Render::Matrix2x4<float> m; // [rsp+50h] [rbp-39h] BYREF
  Scaleform::Render::Matrix2x4<float> v13; // [rsp+70h] [rbp-19h] BYREF

  pScrollRect = this->pScrollRect;
  if ( pScrollRect )
  {
    v11 = *(_OWORD *)&mt->M[1][0];
    *(_OWORD *)&pScrollRect->OrigTransformMatrix.M[0][0] = *(_OWORD *)&mt->M[0][0];
    *(_OWORD *)&pScrollRect->OrigTransformMatrix.M[1][0] = v11;
    *(_OWORD *)&pScrollRect->OrigTransformMatrix.M[2][0] = _xmm;
    v4 = this->pScrollRect;
    *(_OWORD *)&m.M[0][0] = *(_OWORD *)&v4->OrigTransformMatrix.M[0][0];
    *(_OWORD *)&m.M[1][0] = *(_OWORD *)&v4->OrigTransformMatrix.M[1][0];
    v5 = COERCE_DOUBLE(*(_QWORD *)&v4->Rectangle.y1 ^ _xmm);
    v6 = COERCE_DOUBLE(*(_QWORD *)&v4->Rectangle.x1 ^ _xmm);
    m.M[0][3] = m.M[0][3] + (float)((float)(m.M[0][1] * v5) + (float)(m.M[0][0] * v6));
    m.M[1][3] = m.M[1][3] + (float)((float)(m.M[1][1] * v5) + (float)(m.M[1][0] * v6));
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeNode::SetMatrix(RenderNode, &m);
    v8 = this->pScrollRect;
    *(_OWORD *)&v13.M[0][0] = _xmm;
    *(_OWORD *)&v13.M[1][0] = _xmm;
    x1 = v8->Rectangle.x1;
    y1 = v8->Rectangle.y1;
    v13.M[0][3] = (float)((float)(y1 * 0.0) + x1) + 0.0;
    v13.M[1][3] = (float)((float)(x1 * 0.0) + y1) + 0.0;
    Scaleform::Render::TreeNode::SetMatrix(v8->Mask.pObject->pTreeContainer.pObject, &v13);
  }
  else
  {
    Scaleform::GFx::DisplayObjectBase::SetMatrix(this, mt);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetMatrix(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType *pIndXFormData; // rax
  Scaleform::Render::TreeNode *v5; // rax
  __int128 v6; // xmm1
  Scaleform::Render::TreeNode *RenderNode; // rax

  pIndXFormData = this->pIndXFormData;
  if ( pIndXFormData )
  {
    v6 = *(_OWORD *)&m->M[1][0];
    *(_OWORD *)&pIndXFormData->OrigTransformMatrix.M[0][0] = *(_OWORD *)&m->M[0][0];
    *(_OWORD *)&pIndXFormData->OrigTransformMatrix.M[1][0] = v6;
    *(_OWORD *)&pIndXFormData->OrigTransformMatrix.M[2][0] = _xmm;
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::ContextImpl::Entry::getWritableData(RenderNode, 1u);
  }
  else
  {
    v5 = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeNode::SetMatrix(v5, m);
  }
  Scaleform::GFx::DisplayObjectBase::UpdateViewAndPerspective(this);
}

void __fastcall Scaleform::GFx::DisplayObject::SetName(
        Scaleform::GFx::DisplayObject *this,
        const Scaleform::GFx::ASString *name)
{
  Scaleform::GFx::CharacterHandle *pObject; // rcx
  Scaleform::GFx::CharacterHandle *v5; // rax
  Scaleform::GFx::CharacterHandle *v6; // rax
  Scaleform::GFx::CharacterHandle *v7; // rsi
  Scaleform::GFx::CharacterHandle *v8; // rbx
  Scaleform::GFx::ASStringNode *pNode; // rcx
  bool v10; // zf
  Scaleform::GFx::ASStringNode *v11; // rcx
  Scaleform::GFx::ASStringNode *v12; // rcx
  int v13; // [rsp+30h] [rbp+8h] BYREF

  if ( name->pNode->Size )
    this->DOFlags &= ~2u;
  pObject = this->pNameHandle.pObject;
  if ( pObject )
  {
    Scaleform::GFx::CharacterHandle::ChangeName(pObject, name, this->pParent);
  }
  else
  {
    v13 = 322;
    v5 = (Scaleform::GFx::CharacterHandle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              this,
                                              40i64,
                                              &v13);
    if ( v5 )
    {
      Scaleform::GFx::CharacterHandle::CharacterHandle(v5, name, this->pParent, this);
      v7 = v6;
    }
    else
    {
      v7 = 0i64;
    }
    v8 = this->pNameHandle.pObject;
    if ( v8 )
    {
      if ( --v8->RefCount <= 0 )
      {
        pNode = v8->OriginalName.pNode;
        v10 = pNode->RefCount-- == 1;
        if ( v10 )
          Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
        v11 = v8->NamePath.pNode;
        v10 = v11->RefCount-- == 1;
        if ( v10 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v11);
        v12 = v8->Name.pNode;
        v10 = v12->RefCount-- == 1;
        if ( v10 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v12);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
      }
    }
    this->pNameHandle.pObject = v7;
  }
}

void __fastcall Scaleform::GFx::DisplayObject::SetOriginalName(
        Scaleform::GFx::DisplayObject *this,
        const Scaleform::GFx::ASString *name)
{
  Scaleform::GFx::CharacterHandle *pObject; // rbx
  Scaleform::GFx::ASStringNode *pNode; // rdi
  Scaleform::GFx::ASStringNode *v6; // rcx

  Scaleform::GFx::DisplayObject::SetName(this, name);
  pObject = this->pNameHandle.pObject;
  if ( pObject || (pObject = Scaleform::GFx::DisplayObject::CreateCharacterHandle(this)) != 0i64 )
  {
    pNode = name->pNode;
    ++name->pNode->RefCount;
    v6 = pObject->OriginalName.pNode;
    if ( v6->RefCount-- == 1 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v6);
    pObject->OriginalName.pNode = pNode;
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetProjectionCenter(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Point<float> projCenter)
{
  float v2; // xmm2_4
  float v5; // xmm1_4
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *v6; // rdi
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *v7; // rax
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *v8; // rax
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *pPerspectiveData; // rax
  float v10; // xmm1_4
  double v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = **(float **)&projCenter;
  v11 = **(float **)&projCenter;
  if ( (COERCE_UNSIGNED_INT64(v2) & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (COERCE_UNSIGNED_INT64(v2) & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    v5 = *(float *)(*(_QWORD *)&projCenter + 4i64);
    v11 = v5;
    if ( (COERCE_UNSIGNED_INT64(v5) & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
      || (COERCE_UNSIGNED_INT64(v5) & 0xFFFFFFFFFFFFFi64) == 0 )
    {
      v6 = 0i64;
      if ( COERCE__INT64(v2) == 0xFFF0000000000000ui64 || COERCE__INT64(v2) == 0x7FF0000000000000i64 )
        **(_DWORD **)&projCenter = 0;
      v11 = v5;
      if ( COERCE__INT64(v5) == 0xFFF0000000000000ui64 || (v11 = v5, COERCE__INT64(v5) == 0x7FF0000000000000i64) )
        *(_DWORD *)(*(_QWORD *)&projCenter + 4i64) = 0;
      if ( !this->pPerspectiveData )
      {
        LODWORD(v11) = 322;
        v7 = (Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                         Scaleform::Memory::pGlobalHeap,
                                                                         this,
                                                                         80i64,
                                                                         &v11);
        if ( v7 )
        {
          Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(v7);
          v6 = v8;
        }
        this->pPerspectiveData = v6;
      }
      pPerspectiveData = this->pPerspectiveData;
      v10 = **(float **)&projCenter;
      if ( pPerspectiveData->ProjectionCenter.x != **(float **)&projCenter
        || pPerspectiveData->ProjectionCenter.y != *(float *)(*(_QWORD *)&projCenter + 4i64) )
      {
        pPerspectiveData->ProjectionCenter.y = *(float *)(*(_QWORD *)&projCenter + 4i64);
        pPerspectiveData->ProjectionCenter.x = v10;
        Scaleform::GFx::DisplayObjectBase::UpdateViewAndPerspective(this);
      }
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetProjectionMatrix3D(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::Render::Matrix4x4<float> *m)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  bool v5; // r10
  Scaleform::GFx::InteractiveObject *pParent; // r9
  Scaleform::Render::TreeNode *v7; // rcx
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdi

  pObject = this->pRenNode.pObject;
  v5 = pObject
    && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64
                             * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x1000) != 0;
  pParent = this->pParent;
  if ( !pParent
    || (v7 = pParent->pRenNode.pObject) == 0i64
    || (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)v7 - ((unsigned int)v7 & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x200) == 0
    || pParent->pPerspectiveData
    || v5 )
  {
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeNode::SetProjectionMatrix3D(RenderNode, m);
    pMovieImpl = this->pASRoot->pMovieImpl;
    if ( pMovieImpl )
    {
      if ( pMovieImpl->MovieLevels.Data.Data->pSprite.pObject == this )
      {
        Scaleform::Render::TreeNode::SetProjectionMatrix3D(pMovieImpl->pRenderRoot.pObject, m);
        Scaleform::Render::TreeNode::SetProjectionMatrix3D(pMovieImpl->pTopMostRoot.pObject, m);
      }
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetRendererFloat(Scaleform::GFx::DisplayObjectBase *this, float fl)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::Entry *v3; // rbx

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  v3 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  Scaleform::Render::TreeNode::SetRendererFloat(RenderNode, fl);
  if ( v3 )
  {
    if ( v3->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v3);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetRendererString(
        Scaleform::GFx::DisplayObjectBase *this,
        const char *str)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::ContextImpl::Entry *v4; // rbx

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  v4 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  Scaleform::Render::TreeNode::SetRendererString(RenderNode, str);
  if ( v4 )
  {
    if ( v4->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v4);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetRotation(
        Scaleform::GFx::DisplayObjectBase *this,
        long double rotation)
{
  double v3; // xmm0_8
  double v4; // xmm8_8
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rax
  Scaleform::Render::TreeNode *pObject; // rcx
  const Scaleform::Render::Matrix2x4<float> *v7; // rax
  Scaleform::GFx::DisplayObjectBase::GeomDataType *v8; // rbx
  float v9; // xmm8_4
  long double v10; // xmm1_8
  long double v11; // xmm0_8
  Scaleform::Render::Matrix2x4<float> m; // [rsp+30h] [rbp-88h] BYREF

  if ( (*(_QWORD *)&rotation & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (*(_QWORD *)&rotation & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    this->SetAcceptAnimMoves(this, 0);
    v3 = fmod(rotation, 360.0);
    v4 = v3;
    if ( v3 <= 180.0 )
    {
      if ( v3 < -180.0 )
        v4 = v3 + 360.0;
    }
    else
    {
      v4 = v3 + -360.0;
    }
    pGeomData = this->pGeomData;
    if ( this->pASRoot->AVMVersion == 1 )
      pGeomData->Rotation = v4;
    else
      pGeomData->Rotation = rotation;
    pObject = this->pRenNode.pObject;
    if ( pObject
      && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                               + 8i64
                               * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                               + 40)
                   + 10i64) & 0x200) != 0 )
    {
      this->UpdateTransform3D(this);
    }
    else
    {
      v7 = this->GetMatrix(this);
      v8 = this->pGeomData;
      m = v8->OrigMatrix;
      m.M[0][3] = v7->M[0][3];
      m.M[1][3] = v7->M[1][3];
      v9 = v4 * 3.141592653589793 / 180.0 - atan2(m.M[1][0], m.M[0][0]);
      v10 = v8->YScale / (sqrt(m.M[1][1] * m.M[1][1] + m.M[0][1] * m.M[0][1]) * 100.0);
      v11 = sqrt(m.M[0][0] * m.M[0][0] + m.M[1][0] * m.M[1][0]);
      Scaleform::GFx::ASCharacter_MatrixScaleAndRotate2x2(&m, v8->XScale / (v11 * 100.0), v10, v9);
      if ( m.M[0][0] >= -3.4028235e38
        && m.M[0][0] <= 3.4028235e38
        && m.M[0][1] >= -3.4028235e38
        && m.M[0][1] <= 3.4028235e38
        && m.M[0][2] >= -3.4028235e38
        && m.M[0][2] <= 3.4028235e38
        && m.M[0][3] >= -3.4028235e38
        && m.M[0][3] <= 3.4028235e38
        && m.M[1][0] >= -3.4028235e38
        && m.M[1][0] <= 3.4028235e38
        && m.M[1][1] >= -3.4028235e38
        && m.M[1][1] <= 3.4028235e38
        && m.M[1][2] >= -3.4028235e38
        && m.M[1][2] <= 3.4028235e38
        && m.M[1][3] >= -3.4028235e38
        && m.M[1][3] <= 3.4028235e38 )
      {
        this->SetMatrix(this, &m);
      }
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetScale9Grid(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::Render::Rect<float> *gr)
{
  Scaleform::Render::TreeNode *RenderNode; // rax

  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TreeNode::SetScale9Grid(RenderNode, gr);
}

void __fastcall Scaleform::GFx::DisplayObject::SetScrollRect(
        Scaleform::GFx::DisplayObject *this,
        const Scaleform::Render::Rect<double> *r)
{
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::TreeNode *v5; // rdi
  Scaleform::GFx::DisplayObject::ScrollRectInfo *pScrollRect; // rdx
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v7; // rdi
  Scaleform::RefCountNTSImpl *v8; // rcx
  char *v9; // r15
  __int64 v10; // rsi
  _QWORD *v11; // rax
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v12; // rdx
  __int128 v13; // xmm0
  long double y2; // xmm2_8
  _OWORD *v15; // rdx
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v16; // rax
  Scaleform::GFx::DrawingContext *DrawingContext; // rax
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v18; // r15
  Scaleform::GFx::DrawingContext *v19; // r12
  Scaleform::RefCountNTSImpl *pObject; // rcx
  float v21; // xmm7_4
  float v22; // xmm6_4
  __int64 v23; // rax
  const Scaleform::Render::Matrix2x4<float> *v24; // rax
  int v25[4]; // [rsp+20h] [rbp-88h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+30h] [rbp-78h] BYREF

  if ( !r )
    goto LABEL_7;
  if ( this->pMaskCharacter && !this->IsUsedAsMask(this) && this->pMaskCharacter )
    Scaleform::GFx::DisplayObject::SetMask(this, 0i64, 1);
  if ( (this->Flags & 0x8000u) == 0 )
  {
LABEL_7:
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    v5 = RenderNode;
    if ( this->pScrollRect )
    {
      Scaleform::Render::TreeNode::SetMaskNode(RenderNode, 0i64);
      pScrollRect = this->pScrollRect;
      if ( pScrollRect->IsOrig3D )
      {
        Scaleform::Render::TreeNode::SetMatrix3D(v5, &pScrollRect->OrigTransformMatrix);
      }
      else
      {
        m = *(Scaleform::Render::Matrix2x4<float> *)&pScrollRect->OrigTransformMatrix.M[0][0];
        Scaleform::Render::TreeNode::SetMatrix(v5, &m);
      }
    }
    if ( r )
    {
      v9 = (char *)v5 - ((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000ui64);
      v10 = (__int64)(v9 - 56) / 56;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                 + 8i64 * (unsigned int)v10
                                 + 40)
                     + 10i64) & 0x10) != 0 )
        Scaleform::Render::TreeNode::SetMaskNode(v5, 0i64);
      if ( !this->pScrollRect )
      {
        v25[0] = 322;
        v11 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 112i64, v25);
        if ( v11 )
        {
          *v11 = 0i64;
          v11[1] = 0i64;
          v11[2] = 0i64;
          v11[3] = 0i64;
          v11[4] = 0i64;
          v11[6] = 0i64;
          v11[7] = 0i64;
          v11[8] = 0i64;
          v11[9] = 0i64;
          v11[10] = 0i64;
          v11[11] = 0i64;
          *((_DWORD *)v11 + 12) = 1065353216;
          *((_DWORD *)v11 + 17) = 1065353216;
          *((_DWORD *)v11 + 22) = 1065353216;
        }
        else
        {
          v11 = 0i64;
        }
        this->pScrollRect = (Scaleform::GFx::DisplayObject::ScrollRectInfo *)v11;
      }
      v12 = this->pScrollRect;
      v13 = *(_OWORD *)&r->y1;
      y2 = r->y2;
      v12->Rectangle.x1 = r->x1;
      v12->Rectangle.y2 = y2;
      *(_OWORD *)&v12->Rectangle.y1 = v13;
      v15 = *(_OWORD **)(*(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                       + 8i64 * (unsigned int)(((int)v9 - 56) / 56)
                       + 40);
      v16 = this->pScrollRect;
      *(_OWORD *)&v16->OrigTransformMatrix.M[0][0] = v15[1];
      *(_OWORD *)&v16->OrigTransformMatrix.M[1][0] = v15[2];
      *(_OWORD *)&v16->OrigTransformMatrix.M[2][0] = v15[3];
      this->pScrollRect->IsOrig3D = (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000ui64)
                                                                      + 0x20)
                                                          + 8i64 * (unsigned int)v10
                                                          + 40)
                                              + 10i64) & 0x200) != 0;
      DrawingContext = Scaleform::GFx::MovieImpl::CreateDrawingContext(this->pASRoot->pMovieImpl);
      v18 = this->pScrollRect;
      v19 = DrawingContext;
      pObject = v18->Mask.pObject;
      if ( pObject )
        Scaleform::RefCountNTSImpl::Release(pObject);
      v18->Mask.pObject = v19;
      Scaleform::GFx::DrawingContext::BeginSolidFill(this->pScrollRect->Mask.pObject, 0xFFFFFFFF);
      v21 = r->y2 - r->y1;
      v22 = r->x2 - r->x1;
      Scaleform::GFx::DrawingContext::MoveTo(this->pScrollRect->Mask.pObject, 0.0, 0.0);
      Scaleform::GFx::DrawingContext::LineTo(this->pScrollRect->Mask.pObject, v22, 0.0);
      Scaleform::GFx::DrawingContext::LineTo(this->pScrollRect->Mask.pObject, v22, v21);
      Scaleform::GFx::DrawingContext::LineTo(this->pScrollRect->Mask.pObject, 0.0, v21);
      Scaleform::GFx::DrawingContext::EndFill(this->pScrollRect->Mask.pObject);
      Scaleform::GFx::DrawingContext::UpdateRenderNode(this->pScrollRect->Mask.pObject);
      v23 = *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000ui64) + 0x20);
      if ( this->pScrollRect->IsOrig3D )
      {
        this->SetMatrix3D(
          this,
          (const Scaleform::Render::Matrix3x4<float> *)(*(_QWORD *)(v23 + 8i64 * (unsigned int)v10 + 40) + 16i64));
      }
      else
      {
        v24 = Scaleform::Render::TreeNode::NodeData::M2D(*(Scaleform::Render::TreeNode::NodeData **)(v23 + 8i64 * (unsigned int)v10 + 40));
        this->SetMatrix(this, v24);
      }
      Scaleform::Render::TreeNode::SetMaskNode(v5, this->pScrollRect->Mask.pObject->pTreeContainer.pObject);
    }
    else
    {
      v7 = this->pScrollRect;
      if ( v7 )
      {
        v8 = v7->Mask.pObject;
        if ( v8 )
          Scaleform::RefCountNTSImpl::Release(v8);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
      }
      this->pScrollRect = 0i64;
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetViewMatrix3D(
        Scaleform::GFx::DisplayObjectBase *this,
        const Scaleform::Render::Matrix3x4<float> *m)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  bool v5; // r10
  Scaleform::GFx::InteractiveObject *pParent; // r9
  Scaleform::Render::TreeNode *v7; // rcx
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *v8; // rax
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *pPerspectiveData; // rax
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdi
  float v11; // xmm0_4
  float Width; // xmm2_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float Height; // xmm2_4
  float y1; // xmm1_4
  Scaleform::Render::TreeNode *RenderNode; // rax
  int v19[4]; // [rsp+20h] [rbp-99h] BYREF
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+30h] [rbp-89h] BYREF
  Scaleform::Render::Matrix3x4<float> m2; // [rsp+60h] [rbp-59h] BYREF
  Scaleform::Render::Matrix3x4<float> mat3D; // [rsp+90h] [rbp-29h] BYREF
  Scaleform::Render::Matrix3x4<float> v23; // [rsp+C0h] [rbp+7h] BYREF

  pObject = this->pRenNode.pObject;
  v5 = pObject
    && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64
                             * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x800) != 0;
  pParent = this->pParent;
  if ( !pParent
    || (v7 = pParent->pRenNode.pObject) == 0i64
    || (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)v7 - ((unsigned int)v7 & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x200) == 0
    || pParent->pPerspectiveData
    || v5 )
  {
    if ( !this->pPerspectiveData )
    {
      v19[0] = 322;
      v8 = (Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                       Scaleform::Memory::pGlobalHeap,
                                                                       this,
                                                                       80i64,
                                                                       v19);
      if ( v8 )
        Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(v8);
      this->pPerspectiveData = v8;
    }
    pPerspectiveData = this->pPerspectiveData;
    *(_OWORD *)&pPerspectiveData->ViewMatrix3D.M[0][0] = *(_OWORD *)&m->M[0][0];
    *(_OWORD *)&pPerspectiveData->ViewMatrix3D.M[1][0] = *(_OWORD *)&m->M[1][0];
    *(_OWORD *)&pPerspectiveData->ViewMatrix3D.M[2][0] = *(_OWORD *)&m->M[2][0];
    pMovieImpl = this->pASRoot->pMovieImpl;
    if ( pMovieImpl )
    {
      v11 = pMovieImpl->VisibleFrameRect.x2 - pMovieImpl->VisibleFrameRect.x1;
      Width = (float)pMovieImpl->mViewport.Width;
      memset(&m2, 0, 40);
      v13 = Width / v11;
      *(_OWORD *)&m1.M[1][0] = 0x3F80000000000000ui64;
      *(_QWORD *)&m2.M[2][2] = 1065353216i64;
      *(_QWORD *)&m1.M[2][0] = 0i64;
      *(_OWORD *)&m1.M[0][0] = 0x3F800000ui64;
      *(_QWORD *)&m1.M[2][2] = 1065353216i64;
      v14 = pMovieImpl->VisibleFrameRect.y2 - pMovieImpl->VisibleFrameRect.y1;
      v15 = 1.0 / v13;
      Height = (float)pMovieImpl->mViewport.Height;
      m2.M[0][0] = v15;
      y1 = pMovieImpl->VisibleFrameRect.y1;
      m1.M[0][3] = pMovieImpl->VisibleFrameRect.x1;
      m2.M[1][1] = 1.0 / (float)(Height / v14);
      m1.M[1][3] = y1;
      Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v23, &m1, &m2);
      Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&mat3D, m, &v23);
      RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
      Scaleform::Render::TreeNode::SetViewMatrix3D(RenderNode, &mat3D);
      if ( pMovieImpl->MovieLevels.Data.Data->pSprite.pObject == this )
      {
        Scaleform::Render::TreeNode::SetViewMatrix3D(pMovieImpl->pRenderRoot.pObject, &mat3D);
        Scaleform::Render::TreeNode::SetViewMatrix3D(pMovieImpl->pTopMostRoot.pObject, &mat3D);
      }
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetVisible(Scaleform::GFx::DisplayObjectBase *this, bool v)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  Scaleform::Render::TreeNode *RenderNode; // rcx

  if ( v )
  {
    this->Flags |= 0x4000u;
    pObject = this->pRenNode.pObject;
    if ( pObject )
      Scaleform::Render::TreeNode::SetVisible(pObject, v);
  }
  else
  {
    this->Flags &= ~0x4000u;
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
    Scaleform::Render::TreeNode::SetVisible(RenderNode, 0);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetWidth(Scaleform::GFx::DisplayObjectBase *this, long double width)
{
  double v3; // xmm7_8
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rax
  float v5; // xmm1_4
  Scaleform::GFx::DisplayObjectBase_vtbl *v6; // rax
  __int64 v7; // rax
  float v8; // xmm4_4
  Scaleform::GFx::DisplayObjectBase::GeomDataType *v9; // rax
  long double v10; // xmm6_8
  long double v11; // xmm0_8
  Scaleform::Render::Rect<float> *v12; // rax
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  double v16; // xmm10_8
  double v17; // xmm9_8
  Scaleform::GFx::DisplayObjectBase::GeomDataType *v18; // rbx
  double Rotation; // xmm6_8
  long double v20; // xmm6_8
  long double v21; // xmm0_8
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-69h] BYREF
  long double v23[2]; // [rsp+40h] [rbp-49h] BYREF
  Scaleform::Render::Matrix2x4<float> v24; // [rsp+50h] [rbp-39h] BYREF

  v23[0] = width;
  v3 = width;
  if ( (*(_QWORD *)&width & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (*(_QWORD *)&width & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    v23[0] = width;
    if ( width != -INFINITY )
    {
      v23[0] = width;
      if ( width == INFINITY )
        v3 = 0.0;
      this->SetAcceptAnimMoves(this, 0);
      pGeomData = this->pGeomData;
      *(_OWORD *)&m.M[0][0] = *(_OWORD *)&pGeomData->OrigMatrix.M[0][0];
      *(_QWORD *)&m.M[1][0] = *(_QWORD *)&pGeomData->OrigMatrix.M[1][0];
      m.M[1][2] = pGeomData->OrigMatrix.M[1][2];
      v5 = pGeomData->OrigMatrix.M[1][3];
      v6 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
      m.M[1][3] = v5;
      v7 = (__int64)v6->GetMatrix(this);
      m.M[0][3] = *(float *)(v7 + 12);
      v8 = *(float *)(v7 + 28);
      v9 = this->pGeomData;
      *(_QWORD *)&v24.M[1][2] = __PAIR64__(LODWORD(v8), LODWORD(m.M[1][2]));
      m.M[1][3] = v8;
      *(_OWORD *)&v24.M[0][0] = *(_OWORD *)&m.M[0][0];
      *(_QWORD *)&v24.M[1][0] = *(_QWORD *)&m.M[1][0];
      v10 = v9->Rotation * 3.141592653589793 / 180.0;
      v11 = atan2(m.M[1][0], m.M[0][0]);
      Scaleform::Render::Matrix2x4<float>::AppendRotation(&v24, v10 - v11);
      v12 = this->GetBounds(this, v23, &v24);
      v13 = 0.0;
      v14 = v12->x2 - v12->x1;
      *(float *)&v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm);
      if ( *(float *)&v11 > 0.000001 )
      {
        v15 = v3 * 20.0;
        v13 = v15 / v14;
      }
      v16 = sqrt(m.M[0][0] * m.M[0][0] + m.M[1][0] * m.M[1][0]);
      v17 = v13 * v16 * 100.0;
      this->pGeomData->XScale = v17;
      if ( v16 == 0.0 )
      {
        v16 = DOUBLE_1_0;
        v17 = 0.0;
      }
      v18 = this->pGeomData;
      Rotation = v18->Rotation;
      v20 = Rotation * 3.141592653589793 / 180.0 - atan2(m.M[1][0], m.M[0][0]);
      v21 = sqrt(m.M[1][1] * m.M[1][1] + m.M[0][1] * m.M[0][1]);
      Scaleform::GFx::ASCharacter_MatrixScaleAndRotate2x2(
        &m,
        COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17 / (v16 * 100.0)) & _xmm),
        COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18->YScale / (v21 * 100.0)) & _xmm),
        v20);
      *(_QWORD *)&v18->XScale &= _xmm;
      *(_QWORD *)&this->pGeomData->YScale &= _xmm;
      if ( m.M[0][0] >= -3.4028235e38
        && m.M[0][0] <= 3.4028235e38
        && m.M[0][1] >= -3.4028235e38
        && m.M[0][1] <= 3.4028235e38
        && m.M[0][2] >= -3.4028235e38
        && m.M[0][2] <= 3.4028235e38
        && m.M[0][3] >= -3.4028235e38
        && m.M[0][3] <= 3.4028235e38
        && m.M[1][0] >= -3.4028235e38
        && m.M[1][0] <= 3.4028235e38
        && m.M[1][1] >= -3.4028235e38
        && m.M[1][1] <= 3.4028235e38
        && m.M[1][2] >= -3.4028235e38
        && m.M[1][2] <= 3.4028235e38
        && m.M[1][3] >= -3.4028235e38
        && m.M[1][3] <= 3.4028235e38 )
      {
        this->SetMatrix(this, &m);
      }
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetX(Scaleform::GFx::DisplayObjectBase *this, long double x)
{
  double v3; // xmm6_8
  int *v4; // rax
  float v5; // xmm3_4
  float v6; // [rsp+30h] [rbp-48h] BYREF
  float v7; // [rsp+34h] [rbp-44h]
  float v8; // [rsp+38h] [rbp-40h]
  float v9; // [rsp+3Ch] [rbp-3Ch]
  float v10; // [rsp+40h] [rbp-38h]
  float v11; // [rsp+44h] [rbp-34h]
  float v12; // [rsp+48h] [rbp-30h]
  float v13; // [rsp+4Ch] [rbp-2Ch]

  v3 = x;
  if ( (*(_QWORD *)&x & 0x7FF0000000000000i64) != 0x7FF0000000000000i64 || (*(_QWORD *)&x & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    if ( x == -INFINITY || x == INFINITY )
      v3 = 0.0;
    this->SetAcceptAnimMoves(this, 0);
    v4 = (int *)this->GetMatrix(this);
    v6 = *(float *)v4;
    v7 = *((float *)v4 + 1);
    v8 = *((float *)v4 + 2);
    v9 = *((float *)v4 + 3);
    v10 = *((float *)v4 + 4);
    v11 = *((float *)v4 + 5);
    v12 = *((float *)v4 + 6);
    v13 = *((float *)v4 + 7);
    this->pGeomData->X = (int)floor(v3 * 20.0);
    v5 = (float)this->pGeomData->X;
    v9 = v5;
    if ( v6 >= -3.4028235e38
      && v6 <= 3.4028235e38
      && v7 >= -3.4028235e38
      && v7 <= 3.4028235e38
      && v8 >= -3.4028235e38
      && v8 <= 3.4028235e38
      && v5 >= -3.4028235e38
      && v5 <= 3.4028235e38
      && v10 >= -3.4028235e38
      && v10 <= 3.4028235e38
      && v11 >= -3.4028235e38
      && v11 <= 3.4028235e38
      && v12 >= -3.4028235e38
      && v12 <= 3.4028235e38
      && v13 >= -3.4028235e38
      && v13 <= 3.4028235e38 )
    {
      this->SetMatrix(this, (const Scaleform::Render::Matrix2x4<float> *)&v6);
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetXRotation(
        Scaleform::GFx::DisplayObjectBase *this,
        long double rotation)
{
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rcx
  double v4; // xmm0_8
  double v5; // xmm1_8

  if ( (*(_QWORD *)&rotation & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (*(_QWORD *)&rotation & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    pASRoot = this->pASRoot;
    if ( pASRoot && pASRoot->pMovieImpl->AcceptAnimMovesWith3D(pASRoot->pMovieImpl) )
      Scaleform::GFx::DisplayObjectBase::EnsureGeomDataCreated(this);
    else
      this->SetAcceptAnimMoves(this, 0);
    if ( this->pASRoot->AVMVersion == 1 )
    {
      v4 = fmod(rotation, 360.0);
      v5 = v4;
      if ( v4 <= 180.0 )
      {
        if ( v4 < -180.0 )
          v5 = v4 + 360.0;
        this->pGeomData->XRotation = v5;
      }
      else
      {
        this->pGeomData->XRotation = v4 + -360.0;
      }
    }
    else
    {
      this->pGeomData->XRotation = rotation;
    }
    this->UpdateTransform3D(this);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetXScale(
        Scaleform::GFx::DisplayObjectBase *this,
        long double xscale)
{
  double v3; // xmm9_8
  bool v4; // zf
  Scaleform::GFx::DisplayObjectBase_vtbl *v5; // rax
  __int64 v6; // rax
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rdi
  float v8; // xmm6_4
  float v9; // xmm8_4
  double v10; // xmm10_8
  double v11; // xmm7_8
  double Rotation; // xmm6_8
  long double v13; // xmm6_8
  float v14; // xmm2_4
  float v15; // xmm1_4
  Scaleform::Render::Matrix2x4<float> m; // [rsp+30h] [rbp-A8h] BYREF

  v3 = xscale;
  if ( ((*(_QWORD *)&xscale & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
     || (*(_QWORD *)&xscale & 0xFFFFFFFFFFFFFi64) == 0)
    && xscale != -INFINITY
    && xscale != INFINITY )
  {
    this->SetAcceptAnimMoves(this, 0);
    this->pGeomData->XScale = xscale;
    v4 = !Scaleform::GFx::DisplayObjectBase::Has3D(this);
    v5 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    if ( v4 )
    {
      v6 = (__int64)v5->GetMatrix(this);
      pGeomData = this->pGeomData;
      m.M[0][0] = pGeomData->OrigMatrix.M[0][0];
      v8 = pGeomData->OrigMatrix.M[0][1];
      *(_QWORD *)&m.M[0][1] = *(_QWORD *)&pGeomData->OrigMatrix.M[0][1];
      m.M[0][3] = pGeomData->OrigMatrix.M[0][3];
      m.M[1][0] = pGeomData->OrigMatrix.M[1][0];
      v9 = pGeomData->OrigMatrix.M[1][1];
      *(_QWORD *)&m.M[1][1] = *(_QWORD *)&pGeomData->OrigMatrix.M[1][1];
      m.M[1][3] = pGeomData->OrigMatrix.M[1][3];
      m.M[0][3] = *(float *)(v6 + 12);
      m.M[1][3] = *(float *)(v6 + 28);
      v10 = sqrt(m.M[1][0] * m.M[1][0] + m.M[0][0] * m.M[0][0]);
      if ( v10 == 0.0 || xscale > 1.0e16 )
      {
        v10 = DOUBLE_1_0;
        v3 = 0.0;
      }
      v11 = v8;
      Rotation = pGeomData->Rotation;
      v13 = Rotation * 3.141592653589793 / 180.0 - atan2(m.M[1][0], m.M[0][0]);
      v14 = pGeomData->YScale / (sqrt(v9 * v9 + v11 * v11) * 100.0);
      v15 = v3 / (v10 * 100.0);
      Scaleform::GFx::ASCharacter_MatrixScaleAndRotate2x2(&m, v15, v14, v13);
      if ( Scaleform::Render::Matrix2x4<float>::IsValid(&m) )
        this->SetMatrix(this, &m);
    }
    else
    {
      v5->UpdateTransform3D(this);
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetY(Scaleform::GFx::DisplayObjectBase *this, long double y)
{
  double v3; // xmm6_8
  int *v4; // rax
  float v5; // xmm3_4
  float v6; // [rsp+30h] [rbp-48h] BYREF
  float v7; // [rsp+34h] [rbp-44h]
  float v8; // [rsp+38h] [rbp-40h]
  float v9; // [rsp+3Ch] [rbp-3Ch]
  float v10; // [rsp+40h] [rbp-38h]
  float v11; // [rsp+44h] [rbp-34h]
  float v12; // [rsp+48h] [rbp-30h]
  float v13; // [rsp+4Ch] [rbp-2Ch]

  v3 = y;
  if ( (*(_QWORD *)&y & 0x7FF0000000000000i64) != 0x7FF0000000000000i64 || (*(_QWORD *)&y & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    if ( y == -INFINITY || y == INFINITY )
      v3 = 0.0;
    this->SetAcceptAnimMoves(this, 0);
    v4 = (int *)this->GetMatrix(this);
    v6 = *(float *)v4;
    v7 = *((float *)v4 + 1);
    v8 = *((float *)v4 + 2);
    v9 = *((float *)v4 + 3);
    v10 = *((float *)v4 + 4);
    v11 = *((float *)v4 + 5);
    v12 = *((float *)v4 + 6);
    v13 = *((float *)v4 + 7);
    this->pGeomData->Y = (int)floor(v3 * 20.0);
    v5 = (float)this->pGeomData->Y;
    v13 = v5;
    if ( v6 >= -3.4028235e38
      && v6 <= 3.4028235e38
      && v7 >= -3.4028235e38
      && v7 <= 3.4028235e38
      && v8 >= -3.4028235e38
      && v8 <= 3.4028235e38
      && v9 >= -3.4028235e38
      && v9 <= 3.4028235e38
      && v10 >= -3.4028235e38
      && v10 <= 3.4028235e38
      && v11 >= -3.4028235e38
      && v11 <= 3.4028235e38
      && v12 >= -3.4028235e38
      && v12 <= 3.4028235e38
      && v5 >= -3.4028235e38
      && v5 <= 3.4028235e38 )
    {
      this->SetMatrix(this, (const Scaleform::Render::Matrix2x4<float> *)&v6);
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetYRotation(
        Scaleform::GFx::DisplayObjectBase *this,
        long double rotation)
{
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rcx
  double v4; // xmm0_8
  double v5; // xmm1_8

  if ( (*(_QWORD *)&rotation & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
    || (*(_QWORD *)&rotation & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    pASRoot = this->pASRoot;
    if ( pASRoot && pASRoot->pMovieImpl->AcceptAnimMovesWith3D(pASRoot->pMovieImpl) )
      Scaleform::GFx::DisplayObjectBase::EnsureGeomDataCreated(this);
    else
      this->SetAcceptAnimMoves(this, 0);
    if ( this->pASRoot->AVMVersion == 1 )
    {
      v4 = fmod(rotation, 360.0);
      v5 = v4;
      if ( v4 <= 180.0 )
      {
        if ( v4 < -180.0 )
          v5 = v4 + 360.0;
        this->pGeomData->YRotation = v5;
      }
      else
      {
        this->pGeomData->YRotation = v4 + -360.0;
      }
    }
    else
    {
      this->pGeomData->YRotation = rotation;
    }
    this->UpdateTransform3D(this);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetYScale(
        Scaleform::GFx::DisplayObjectBase *this,
        long double yscale)
{
  double v3; // xmm7_8
  bool v4; // zf
  Scaleform::GFx::DisplayObjectBase_vtbl *v5; // rax
  __int64 v6; // rax
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rdi
  float v8; // xmm8_4
  float v9; // xmm12_4
  double v10; // xmm11_8
  double Rotation; // xmm6_8
  long double v12; // xmm6_8
  float v13; // xmm7_4
  long double v14; // xmm0_8
  Scaleform::Render::Matrix2x4<float> m; // [rsp+30h] [rbp-A8h] BYREF

  v3 = yscale;
  if ( ((*(_QWORD *)&yscale & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
     || (*(_QWORD *)&yscale & 0xFFFFFFFFFFFFFi64) == 0)
    && yscale != -INFINITY
    && yscale != INFINITY )
  {
    this->SetAcceptAnimMoves(this, 0);
    this->pGeomData->YScale = yscale;
    v4 = !Scaleform::GFx::DisplayObjectBase::Has3D(this);
    v5 = this->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    if ( v4 )
    {
      v6 = (__int64)v5->GetMatrix(this);
      pGeomData = this->pGeomData;
      v8 = pGeomData->OrigMatrix.M[0][0];
      *(_OWORD *)&m.M[0][0] = *(_OWORD *)&pGeomData->OrigMatrix.M[0][0];
      v9 = pGeomData->OrigMatrix.M[1][0];
      *(_OWORD *)&m.M[1][0] = *(_OWORD *)&pGeomData->OrigMatrix.M[1][0];
      m.M[0][3] = *(float *)(v6 + 12);
      m.M[1][3] = *(float *)(v6 + 28);
      v10 = sqrt(m.M[1][1] * m.M[1][1] + m.M[0][1] * m.M[0][1]);
      if ( v10 == 0.0 || yscale > 1.0e16 )
      {
        v10 = DOUBLE_1_0;
        v3 = 0.0;
      }
      Rotation = pGeomData->Rotation;
      v12 = Rotation * 3.141592653589793 / 180.0 - atan2(v9, v8);
      v13 = v3 / (v10 * 100.0);
      v14 = sqrt(v8 * v8 + v9 * v9);
      Scaleform::GFx::ASCharacter_MatrixScaleAndRotate2x2(&m, pGeomData->XScale / (v14 * 100.0), v13, v12);
      if ( Scaleform::Render::Matrix2x4<float>::IsValid(&m) )
        this->SetMatrix(this, &m);
    }
    else
    {
      v5->UpdateTransform3D(this);
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetZ(Scaleform::GFx::DisplayObjectBase *this, long double z)
{
  long double v3; // xmm6_8
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rcx

  v3 = z;
  if ( (*(_QWORD *)&z & 0x7FF0000000000000i64) != 0x7FF0000000000000i64 || (*(_QWORD *)&z & 0xFFFFFFFFFFFFFi64) == 0 )
  {
    if ( z == -INFINITY || z == INFINITY )
      v3 = 0.0;
    pASRoot = this->pASRoot;
    if ( pASRoot && pASRoot->pMovieImpl->AcceptAnimMovesWith3D(pASRoot->pMovieImpl) )
      Scaleform::GFx::DisplayObjectBase::EnsureGeomDataCreated(this);
    else
      this->SetAcceptAnimMoves(this, 0);
    this->pGeomData->Z = v3;
    this->UpdateTransform3D(this);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::SetZScale(
        Scaleform::GFx::DisplayObjectBase *this,
        long double zscale)
{
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rcx

  if ( ((*(_QWORD *)&zscale & 0x7FF0000000000000i64) != 0x7FF0000000000000i64
     || (*(_QWORD *)&zscale & 0xFFFFFFFFFFFFFi64) == 0)
    && zscale != -INFINITY
    && zscale != INFINITY )
  {
    pASRoot = this->pASRoot;
    if ( pASRoot && pASRoot->pMovieImpl->AcceptAnimMovesWith3D(pASRoot->pMovieImpl) )
      Scaleform::GFx::DisplayObjectBase::EnsureGeomDataCreated(this);
    else
      this->SetAcceptAnimMoves(this, 0);
    this->pGeomData->ZScale = zscale;
    this->UpdateTransform3D(this);
  }
}

void __fastcall Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(
        Scaleform::GFx::DisplayObjectBase *this,
        Scaleform::Render::Point<float> *p,
        const Scaleform::Render::Point<float> *pt,
        bool bPtInParentSpace,
        const Scaleform::Render::Matrix2x4<float> *mat)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  const Scaleform::Render::Point<float> *v7; // r14
  Scaleform::Render::Matrix2x4<float> *p_pmat; // rcx
  Scaleform::GFx::InteractiveObject *pParent; // rdi
  Scaleform::GFx::InteractiveObject *v11; // rcx
  const Scaleform::Render::Matrix3x4<float> *v12; // rax
  _BOOL8 v13; // r8
  Scaleform::Render::ScreenToWorld *p_ScreenToWorld; // rdi
  _BOOL8 v15; // r8
  float *v16; // rax
  float v17; // xmm6_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  const Scaleform::Render::Matrix2x4<float> *v23; // rax
  Scaleform::Render::Matrix3x4<float> pmat; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  __int128 v27; // [rsp+70h] [rbp-90h]
  __int128 v28; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+C0h] [rbp-40h] BYREF

  pObject = this->pRenNode.pObject;
  v7 = pt;
  if ( bPtInParentSpace )
  {
    if ( !pObject
      || (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                               + 8i64
                               * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                               + 40)
                   + 10i64) & 0x200) == 0 )
    {
      if ( mat )
      {
        p_pmat = (Scaleform::Render::Matrix2x4<float> *)mat;
LABEL_24:
        Scaleform::Render::Matrix2x4<float>::TransformByInverse(p_pmat, p, pt);
        return;
      }
      p_pmat = (Scaleform::Render::Matrix2x4<float> *)this->GetMatrix(this);
LABEL_23:
      pt = v7;
      goto LABEL_24;
    }
  }
  else if ( !pObject
         || (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                  + 8i64
                                  * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56)
                                                 / 56)
                                  + 40)
                      + 10i64) & 0x200) == 0 )
  {
    pParent = this->pParent;
    if ( !pParent || !Scaleform::GFx::DisplayObjectBase::Is3D(this->pParent, 1) )
    {
      *(_OWORD *)&pmat.M[0][0] = _xmm;
      *(_OWORD *)&pmat.M[1][0] = _xmm;
      if ( pParent )
      {
        Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(pParent, (Scaleform::Render::Matrix2x4<float> *)&pmat);
        v16 = (float *)this->GetMatrix(this);
        v17 = pmat.M[1][0];
        v18 = pmat.M[0][0];
        v19 = pmat.M[0][1];
        v20 = pmat.M[1][1];
        pmat.M[0][0] = (float)(pmat.M[0][0] * *v16) + (float)(pmat.M[0][1] * v16[4]);
        pmat.M[1][0] = (float)(pmat.M[1][0] * *v16) + (float)(pmat.M[1][1] * v16[4]);
        pmat.M[0][1] = (float)(v18 * v16[1]) + (float)(pmat.M[0][1] * v16[5]);
        v21 = pmat.M[1][1] * v16[5];
        v22 = v17 * v16[1];
        pmat.M[0][2] = 0.0;
        *(_QWORD *)&pmat.M[1][1] = COERCE_UNSIGNED_INT(v22 + v21);
        pmat.M[0][3] = pmat.M[0][3] + (float)((float)(v18 * v16[3]) + (float)(v19 * v16[7]));
        pmat.M[1][3] = pmat.M[1][3] + (float)((float)(v17 * v16[3]) + (float)(v20 * v16[7]));
      }
      else
      {
        v23 = this->GetMatrix(this);
        *(_OWORD *)&pmat.M[0][0] = *(_OWORD *)&v23->M[0][0];
        *(_OWORD *)&pmat.M[1][0] = *(_OWORD *)&v23->M[1][0];
      }
      p_pmat = (Scaleform::Render::Matrix2x4<float> *)&pmat;
      goto LABEL_23;
    }
  }
  v11 = this->pParent;
  v26 = 0x3F80000000000000ui64;
  v29 = 0x3F80000000000000ui64;
  *((_QWORD *)&v31 + 1) = 0x3F80000000000000i64;
  *(_OWORD *)&pmat.M[1][0] = 0x3F80000000000000ui64;
  v25 = 0x3F800000ui64;
  *((_QWORD *)&v27 + 1) = 1065353216i64;
  v28 = 0x3F800000ui64;
  *((_QWORD *)&v30 + 1) = 1065353216i64;
  *(_OWORD *)&pmat.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&pmat.M[2][2] = 1065353216i64;
  *(_QWORD *)&v27 = 0i64;
  *(_QWORD *)&v30 = 0i64;
  *(_QWORD *)&v31 = 0i64;
  *(_QWORD *)&pmat.M[2][0] = 0i64;
  if ( v11 )
  {
    Scaleform::GFx::DisplayObjectBase::GetWorldMatrix3D(v11, &pmat);
    v12 = this->GetMatrix3D(this);
    m1 = pmat;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&pmat, &m1, v12);
  }
  else
  {
    pmat = *this->GetMatrix3D(this);
  }
  LOBYTE(v13) = 1;
  p_ScreenToWorld = &this->pASRoot->pMovieImpl->ScreenToWorld;
  if ( this->GetProjectionMatrix3D(this, (Scaleform::Render::Matrix4x4<float> *)&v28, v13) )
  {
    *(_OWORD *)&p_ScreenToWorld->MatProj.M[0][0] = v28;
    *(_OWORD *)&p_ScreenToWorld->MatProj.M[1][0] = v29;
    *(_OWORD *)&p_ScreenToWorld->MatProj.M[2][0] = v30;
    *(_OWORD *)&p_ScreenToWorld->MatProj.M[3][0] = v31;
  }
  LOBYTE(v15) = 1;
  if ( this->GetViewMatrix3D(this, (Scaleform::Render::Matrix3x4<float> *)&v25, v15) )
  {
    *(_OWORD *)&p_ScreenToWorld->MatView.M[0][0] = v25;
    *(_OWORD *)&p_ScreenToWorld->MatView.M[1][0] = v26;
    *(_OWORD *)&p_ScreenToWorld->MatView.M[2][0] = v27;
  }
  p_ScreenToWorld->MatWorld = pmat;
  Scaleform::Render::ScreenToWorld::GetWorldPoint(p_ScreenToWorld, p);
}

char __fastcall Scaleform::GFx::DisplayObject::TransformPointToLocalAndCheckBounds(
        Scaleform::GFx::DisplayObject *this,
        Scaleform::Render::Point<float> *p,
        const Scaleform::Render::Point<float> *pt,
        bool bPtInParentSpace,
        const Scaleform::Render::Matrix2x4<float> *mat)
{
  float x; // xmm3_4
  float y; // xmm2_4
  Scaleform::GFx::DisplayObject::ScrollRectInfo *pScrollRect; // rax
  float x1; // xmm0_4
  float v11; // xmm1_4
  Scaleform::GFx::DisplayObject::ScrollRectInfo *v12; // rax
  Scaleform::Render::Point<float> pa; // [rsp+40h] [rbp+8h] BYREF

  if ( this->pScrollRect )
  {
    Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(this, &pa, pt, bPtInParentSpace, mat);
    x = pa.x;
    y = pa.y;
    p->x = pa.x;
    p->y = y;
    pScrollRect = this->pScrollRect;
    x1 = pScrollRect->Rectangle.x1;
    v11 = (float)pScrollRect->Rectangle.y1 + y;
    p->x = x1 + x;
    p->y = v11;
    if ( x < 0.0 )
      return 0;
    if ( y < 0.0 )
      return 0;
    v12 = this->pScrollRect;
    if ( x > v12->Rectangle.x2 - v12->Rectangle.x1 || y > v12->Rectangle.y2 - v12->Rectangle.y1 )
      return 0;
  }
  else
  {
    Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(this, p, pt, bPtInParentSpace, mat);
  }
  return 1;
}

void __fastcall Scaleform::GFx::DisplayObjectBase::UpdateTransform3D(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rbx
  __int128 v3; // xmm8
  __int128 v4; // xmm9
  __int128 v5; // xmm10
  __int128 v6; // xmm1
  float Z; // xmm0_4
  float XScale; // xmm0_4
  float YScale; // xmm0_4
  double XRotation; // xmm1_8
  float v11; // xmm6_4
  float v12; // xmm7_4
  double YRotation; // xmm1_8
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  double Rotation; // xmm1_8
  float v18; // xmm7_4
  float v19; // xmm6_4
  Scaleform::Render::Matrix3x4<float> v20; // [rsp+28h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix3x4<float> m2_8; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::Matrix3x4<float> v23; // [rsp+B8h] [rbp-50h] BYREF
  Scaleform::Render::Matrix3x4<float> v24; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::Render::Matrix3x4<float> v25; // [rsp+118h] [rbp+10h] BYREF
  Scaleform::Render::Matrix3x4<float> v26; // [rsp+148h] [rbp+40h] BYREF
  Scaleform::Render::Matrix3x4<float> v27; // [rsp+178h] [rbp+70h] BYREF
  Scaleform::Render::Matrix3x4<float> v28; // [rsp+1A8h] [rbp+A0h] BYREF

  *(_QWORD *)&v20.M[1][0] = 0x3F80000000000000i64;
  *(_OWORD *)&v20.M[1][2] = 0ui64;
  *(_OWORD *)&v20.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&v20.M[2][2] = 1065353216i64;
  pGeomData = this->pGeomData;
  v3 = *(_OWORD *)&Scaleform::Render::Matrix3x4<float>::Identity.M[2][0];
  v4 = *(_OWORD *)&Scaleform::Render::Matrix3x4<float>::Identity.M[1][0];
  v20.M[0][3] = (float)pGeomData->X;
  v5 = *(_OWORD *)&Scaleform::Render::Matrix3x4<float>::Identity.M[0][0];
  v20.M[1][3] = (float)pGeomData->Y;
  v6 = *(_OWORD *)&v20.M[0][0];
  Z = pGeomData->Z;
  memset(&v20, 0, 40);
  *(_OWORD *)&v25.M[0][0] = v6;
  v20.M[2][3] = Z;
  *(_OWORD *)&v25.M[1][0] = *(_OWORD *)&v20.M[1][0];
  *(_OWORD *)&v25.M[2][0] = *(_OWORD *)&v20.M[2][0];
  *(_QWORD *)&v20.M[2][2] = 0i64;
  XScale = pGeomData->XScale;
  v20.M[0][0] = XScale / 100.0;
  YScale = pGeomData->YScale;
  v20.M[1][1] = YScale / 100.0;
  *(float *)&v6 = pGeomData->ZScale;
  *(_OWORD *)&m2_8.M[0][0] = LODWORD(v20.M[0][0]);
  v20.M[2][2] = *(float *)&v6 / 100.0;
  *(_OWORD *)&m2_8.M[1][0] = *(_OWORD *)&v20.M[1][0];
  *(_OWORD *)&m2_8.M[2][0] = *(_OWORD *)&v20.M[2][0];
  XRotation = pGeomData->XRotation;
  if ( XRotation == 0.0 )
  {
    v20 = Scaleform::Render::Matrix3x4<float>::Identity;
  }
  else
  {
    v20.M[0][3] = 0.0;
    v20.M[1][3] = 0.0;
    v11 = XRotation * 3.141592653589793 / 180.0;
    v12 = cosf(v11);
    v20.M[2][1] = sinf(v11);
    LODWORD(v20.M[1][2]) = LODWORD(v20.M[2][1]) ^ _xmm;
    v20.M[1][1] = v12;
    *(_QWORD *)&v20.M[2][2] = LODWORD(v12);
    *(_QWORD *)&v20.M[0][0] = 1065353216i64;
    v20.M[1][0] = 0.0;
    v20.M[2][0] = 0.0;
    v20.M[0][2] = 0.0;
  }
  m1 = v20;
  YRotation = pGeomData->YRotation;
  if ( YRotation == 0.0 )
  {
    *(_OWORD *)&v20.M[0][0] = v5;
    *(_OWORD *)&v20.M[1][0] = v4;
    *(_OWORD *)&v20.M[2][0] = v3;
  }
  else
  {
    v20.M[0][3] = 0.0;
    v20.M[1][3] = 0.0;
    v14 = YRotation * 3.141592653589793 / 180.0;
    v15 = cosf(v14);
    v16 = sinf(v14);
    *(_QWORD *)&v20.M[0][0] = LODWORD(v15);
    *(_QWORD *)&v20.M[2][0] = LODWORD(v16) ^ (unsigned int)_xmm;
    v20.M[0][2] = v16;
    *(_QWORD *)&v20.M[2][2] = LODWORD(v15);
    v20.M[1][0] = 0.0;
    *(_QWORD *)&v20.M[1][1] = 1065353216i64;
  }
  v23 = v20;
  Rotation = pGeomData->Rotation;
  if ( Rotation == 0.0 )
  {
    *(_OWORD *)&v20.M[0][0] = v5;
    *(_OWORD *)&v20.M[1][0] = v4;
    *(_OWORD *)&v20.M[2][0] = v3;
  }
  else
  {
    v20.M[0][3] = 0.0;
    v18 = Rotation * 3.141592653589793 / 180.0;
    v19 = cosf(v18);
    *(_QWORD *)&v20.M[1][0] = __PAIR64__(LODWORD(v19), COERCE_UNSIGNED_INT(sinf(v18)));
    *(_QWORD *)&v20.M[0][1] = LODWORD(v20.M[1][0]) ^ (unsigned __int64)(unsigned int)_xmm;
    v20.M[0][0] = v19;
    *(_OWORD *)&v20.M[1][2] = 0ui64;
    *(_QWORD *)&v20.M[2][2] = 1065353216i64;
  }
  v24 = v20;
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v26, &m1, &m2_8);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v27, &v24, &v23);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v28, &v27, &v26);
  Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v20, &v25, &v28);
  if ( Scaleform::Render::Matrix3x4<float>::IsValid(&v20) )
    this->SetMatrix3D(this, &v20);
}

void __fastcall Scaleform::GFx::DisplayObjectBase::UpdateViewAndPerspective(Scaleform::GFx::DisplayObjectBase *this)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rsi
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *pPerspectiveData; // rdi
  const Scaleform::Render::Rect<float> *p_VisibleFrameRect; // rsi
  float x2; // xmm7_4
  float x1; // xmm6_4
  float focalLength; // xmm11_4
  float y; // xmm1_4
  unsigned __int64 RenderNode; // rax
  Scaleform::GFx::InteractiveObject *pParent; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // al
  bool v14; // r14
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *v15; // rdi
  float *v16; // rax
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm10_4
  float v27; // xmm2_4
  const Scaleform::Render::Matrix2x4<float> *v28; // rax
  float v29; // xmm5_4
  float v30; // xmm0_4
  Scaleform::GFx::DisplayObjectBase::PerspectiveDataType *v31; // rax
  float fieldOfView; // xmm1_4
  double v33; // xmm0_8
  Scaleform::Render::Point<float> projCenter; // [rsp+48h] [rbp-C0h] BYREF
  float pmat[14]; // [rsp+50h] [rbp-B8h] BYREF
  Scaleform::Render::Matrix3x4<float> matView; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::Matrix4x4<float> matPersp; // [rsp+B8h] [rbp-50h] BYREF

  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( pMovieImpl )
  {
    pPerspectiveData = this->pPerspectiveData;
    if ( pPerspectiveData )
    {
      if ( pPerspectiveData->FieldOfView != 0.0 || pPerspectiveData->FocalLength != 0.0 )
      {
        p_VisibleFrameRect = &pMovieImpl->VisibleFrameRect;
        x2 = p_VisibleFrameRect->x2;
        x1 = p_VisibleFrameRect->x1;
        if ( x2 != p_VisibleFrameRect->x1 || p_VisibleFrameRect->y2 != p_VisibleFrameRect->y1 )
        {
          *(_OWORD *)&matView.M[1][0] = 0x3F80000000000000ui64;
          *(_OWORD *)&matPersp.M[1][0] = 0x3F80000000000000ui64;
          *(_QWORD *)&matPersp.M[3][2] = 0x3F80000000000000i64;
          *(_QWORD *)&matView.M[2][0] = 0i64;
          *(_QWORD *)&matPersp.M[2][0] = 0i64;
          *(_QWORD *)&matPersp.M[3][0] = 0i64;
          *(_OWORD *)&matView.M[0][0] = 0x3F800000ui64;
          *(_QWORD *)&matView.M[2][2] = 1065353216i64;
          *(_OWORD *)&matPersp.M[0][0] = 0x3F800000ui64;
          *(_QWORD *)&matPersp.M[2][2] = 1065353216i64;
          focalLength = 0.0;
          if ( Scaleform::GFx::NumberUtil::IsNaN(pPerspectiveData->ProjectionCenter.x)
            || Scaleform::GFx::NumberUtil::IsNaN(pPerspectiveData->ProjectionCenter.y) )
          {
            v30 = (float)(p_VisibleFrameRect->y2 + p_VisibleFrameRect->y1) * 0.5;
            projCenter.x = (float)(x1 + x2) * 0.5;
            projCenter.y = v30;
          }
          else
          {
            y = pPerspectiveData->ProjectionCenter.y;
            projCenter.x = pPerspectiveData->ProjectionCenter.x;
            projCenter.y = y;
            RenderNode = (unsigned __int64)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
            pParent = this->pParent;
            v11 = (__int64)((unsigned __int128)((__int64)(RenderNode - (RenderNode & 0xFFFFFFFFFFFFF000ui64) - 56)
                                              * (__int128)0x4924924924924925i64) >> 64) >> 4;
            v12 = *(_QWORD *)(*(_QWORD *)((RenderNode & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                            + 8 * ((unsigned int)v11 + (v11 >> 63))
                            + 40);
            v13 = 0;
            v14 = (*(_WORD *)(v12 + 10) & 0x200) != 0;
            if ( pParent )
            {
              v15 = pParent->pPerspectiveData;
              if ( v15 )
                v13 = !Scaleform::GFx::NumberUtil::IsNaN(v15->ProjectionCenter.x)
                   && !Scaleform::GFx::NumberUtil::IsNaN(v15->ProjectionCenter.y);
            }
            if ( this->pGeomData && (!v14 || v13) )
            {
              *(_OWORD *)&pmat[2] = _xmm;
              *(_OWORD *)&pmat[6] = _xmm;
              if ( pParent )
              {
                Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(
                  pParent,
                  (Scaleform::Render::Matrix2x4<float> *)&pmat[2]);
                v16 = (float *)this->GetMatrix(this);
                v17 = pmat[2];
                v18 = pmat[3];
                v19 = pmat[6];
                v20 = pmat[2];
                v21 = pmat[7];
                v22 = (float)(pmat[3] * v16[4]) + (float)(pmat[2] * *v16);
                pmat[2] = v22;
                v23 = (float)(pmat[7] * v16[4]) + (float)(pmat[6] * *v16);
                pmat[6] = v23;
                v24 = (float)(v20 * v16[1]) + (float)(pmat[3] * v16[5]);
                *(_QWORD *)&pmat[3] = LODWORD(v24);
                v25 = (float)(v19 * v16[1]) + (float)(pmat[7] * v16[5]);
                *(_QWORD *)&pmat[7] = LODWORD(v25);
                v26 = pmat[5] + (float)((float)(v17 * v16[3]) + (float)(v18 * v16[7]));
                pmat[5] = v26;
                v27 = pmat[9] + (float)((float)(v19 * v16[3]) + (float)(v21 * v16[7]));
              }
              else
              {
                v28 = this->GetMatrix(this);
                v22 = v28->M[0][0];
                pmat[2] = v28->M[0][0];
                v24 = v28->M[0][1];
                pmat[3] = v24;
                pmat[4] = v28->M[0][2];
                v26 = v28->M[0][3];
                pmat[5] = v26;
                v23 = v28->M[1][0];
                pmat[6] = v23;
                v25 = v28->M[1][1];
                pmat[7] = v25;
                pmat[8] = v28->M[1][2];
                v27 = v28->M[1][3];
              }
              v29 = (float)((float)(v24 * projCenter.y) + (float)(v22 * projCenter.x)) + v26;
              projCenter.y = (float)((float)(v25 * projCenter.y) + (float)(v23 * projCenter.x)) + v27;
              projCenter.x = v29;
            }
          }
          v31 = this->pPerspectiveData;
          if ( v31->FieldOfView == 0.0 )
            fieldOfView = *(float *)&FLOAT_55_0;
          else
            fieldOfView = v31->FieldOfView;
          v33 = v31->FocalLength;
          if ( v33 != 0.0 )
            focalLength = v33;
          Scaleform::GFx::MovieImpl::MakeViewAndPersp3D(
            &matView,
            &matPersp,
            p_VisibleFrameRect,
            &projCenter,
            fieldOfView,
            focalLength,
            0);
          this->SetViewMatrix3D(this, &matView);
          this->SetProjectionMatrix3D(this, &matPersp);
        }
      }
    }
  }
}

