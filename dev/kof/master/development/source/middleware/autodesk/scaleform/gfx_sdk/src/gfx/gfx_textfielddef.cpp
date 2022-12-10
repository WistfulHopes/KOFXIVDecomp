#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfielddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"

Scaleform::GFx::TextFieldDef::TextFieldDef(); // 0x14038E870
Scaleform::GFx::TextFieldDef::~TextFieldDef(); // 0x14038E960
void Scaleform::GFx::TextFieldDef::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType); // 0x140390140
void Scaleform::GFx::TextFieldDef::InitEmptyTextDef(); // 0x14038F040
void Scaleform::GFx::GFx_DefineEditTextLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14038EF30
class Scaleform::Ptr<Scaleform::GFx::TextFieldDef>
{
protected:
	Scaleform::GFx::TextFieldDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TextFieldDef>(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	Ptr<Scaleform::GFx::TextFieldDef>(Scaleform::GFx::TextFieldDef *);
	Ptr<Scaleform::GFx::TextFieldDef>(Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TextFieldDef>(Scaleform::Pickable<Scaleform::GFx::TextFieldDef>);
	Ptr<Scaleform::GFx::TextFieldDef>(Scaleform::GFx::TextFieldDef &);
	Ptr<Scaleform::GFx::TextFieldDef>();
	~Ptr<Scaleform::GFx::TextFieldDef>();
	bool operator==(Scaleform::GFx::TextFieldDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	bool operator!=(Scaleform::GFx::TextFieldDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & operator=(Scaleform::Pickable<Scaleform::GFx::TextFieldDef>);
	const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & operator=(Scaleform::GFx::TextFieldDef &);
	const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & operator=(Scaleform::GFx::TextFieldDef *);
	const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TextFieldDef>);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & SetPtr(Scaleform::GFx::TextFieldDef &);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & SetPtr(Scaleform::GFx::TextFieldDef *);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TextFieldDef * & GetRawRef();
	Scaleform::GFx::TextFieldDef * GetPtr();
	Scaleform::GFx::TextFieldDef & operator*();
	Scaleform::GFx::TextFieldDef * operator->();
	Scaleform::GFx::TextFieldDef * operator struct Scaleform::GFx::TextFieldDef *();
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & Pick(Scaleform::GFx::TextFieldDef *);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & Pick(Scaleform::Pickable<Scaleform::GFx::TextFieldDef>);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & Pick(Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
};
typedef Scaleform::GFx::`anonymous-namespace'::KeyCodeComparator Scaleform::GFx::?A0x6b4b9e58::KeyCodeComparator;
typedef Scaleform::GFx::`anonymous-namespace'::KeyMapEntryComparator Scaleform::GFx::?A0x6b4b9e58::KeyMapEntryComparator;
Scaleform::GFx::TextKeyMap::TextKeyMap(); // 0x14038E920
struct Scaleform::GFx::`anonymous-namespace'::KeyMapEntryComparator
{
	static long Compare(const Scaleform::GFx::TextKeyMap::KeyMapEntry &, const Scaleform::GFx::TextKeyMap::KeyMapEntry &);
	static long Less(const Scaleform::GFx::TextKeyMap::KeyMapEntry &, const Scaleform::GFx::TextKeyMap::KeyMapEntry &);
};
struct Scaleform::GFx::`anonymous-namespace'::KeyCodeComparator
{
	static long Compare(const Scaleform::GFx::TextKeyMap::KeyMapEntry &, unsigned long);
	static long Less(const Scaleform::GFx::TextKeyMap::KeyMapEntry &, unsigned long);
};
const Scaleform::GFx::TextKeyMap::KeyMapEntry * Scaleform::GFx::TextKeyMap::FindFirstEntry(unsigned long keyCode); // 0x14038EC30
const Scaleform::GFx::TextKeyMap::KeyMapEntry * Scaleform::GFx::TextKeyMap::Find(unsigned long keyCode, const Scaleform::KeyModifiers & specKeys, Scaleform::GFx::TextKeyMap::KeyState state); // 0x14038EBA0
Scaleform::GFx::TextKeyMap * Scaleform::GFx::TextKeyMap::InitWindowsKeyMap(); // 0x14038F080
void Scaleform::GFx::GFx_CSMTextSettings(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x14038ECB0
Scaleform::GFx::Clipboard::Clipboard(); // 0x14038E830
void Scaleform::GFx::Clipboard::SetText(const Scaleform::String & str); // 0x140390AD0
void Scaleform::GFx::Clipboard::SetText(const wchar_t * ptext, unsigned long long len); // 0x140390B80
const Scaleform::WStringBuffer & Scaleform::GFx::Clipboard::GetText(); // 0x14041BC80
void Scaleform::GFx::Clipboard::SetStyledText(Scaleform::Render::Text::StyledText * pstyledText); // 0x1403909D0
void Scaleform::GFx::Clipboard::SetTextAndStyledText(const wchar_t * ptext, unsigned long long len, Scaleform::Render::Text::StyledText * pstyledText); // 0x140390C00
Scaleform::Render::Text::StyledText * Scaleform::GFx::Clipboard::GetStyledText(); // 0x1406B4B40void __fastcall Scaleform::GFx::Clipboard::Clipboard(Scaleform::GFx::Clipboard *this)
{
  this->SType = State_Internal_MaskOwner|0x10;
  this->__vftable = (Scaleform::GFx::Clipboard_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::Clipboard_vtbl *)&Scaleform::GFx::Clipboard::`vftable';
  this->RefCount = 1;
  this->PlainText.pText = 0i64;
  this->PlainText.Length = 0i64;
  this->PlainText.Reserved.pBuffer = 0i64;
  this->PlainText.Reserved.Size = 0i64;
  this->pStyledText = 0i64;
}

void __fastcall Scaleform::GFx::TextFieldDef::TextFieldDef(Scaleform::GFx::TextFieldDef *this)
{
  this->__vftable = (Scaleform::GFx::TextFieldDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->pLib = 0i64;
  this->Id.Id = 0x40000;
  this->__vftable = (Scaleform::GFx::TextFieldDef_vtbl *)&Scaleform::GFx::TextFieldDef::`vftable';
  this->pFont.HType = RH_Pointer;
  this->pFont.pResource = 0i64;
  this->FontId.Id = 0;
  Scaleform::StringLH::StringLH(&this->FontClass);
  *(_QWORD *)&this->TextRect.x1 = 0i64;
  *(_QWORD *)&this->TextRect.x2 = 0i64;
  this->TextHeight = 1.0;
  *(_QWORD *)&this->MaxLength = 0i64;
  *(_QWORD *)&this->RightMargin = 0i64;
  this->Leading = 0.0;
  Scaleform::StringLH::StringLH(&this->DefaultText);
  Scaleform::StringLH::StringLH(&this->VariableName);
  this->Flags = 0;
  this->Alignment = ALIGN_LEFT;
  *(_WORD *)&this->ColorV.Channels.Green = 0;
  this->ColorV.Channels.Blue = 0;
  this->ColorV.Channels.Alpha = -1;
  *(_QWORD *)&this->TextRect.x1 = 0i64;
  *(_QWORD *)&this->TextRect.x2 = 0i64;
}

void __fastcall Scaleform::GFx::TextKeyMap::TextKeyMap(Scaleform::GFx::TextKeyMap *this)
{
  this->SType = State_OrigNodeBounds|0x10;
  this->__vftable = (Scaleform::GFx::TextKeyMap_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::TextKeyMap_vtbl *)&Scaleform::GFx::TextKeyMap::`vftable';
  this->RefCount = 1;
  this->Map.Data.Data = 0i64;
  this->Map.Data.Size = 0i64;
  this->Map.Data.Policy.Capacity = 0i64;
}

void __fastcall Scaleform::GFx::TextFieldDef::~TextFieldDef(Scaleform::GFx::TextFieldDef *this)
{
  Scaleform::String::DataDesc *pData; // rbx
  volatile int *v3; // rbx
  volatile int *v4; // rbx
  volatile int *v5; // rbx
  Scaleform::GFx::Resource *pResource; // rcx

  pData = this->VariableName.pData;
  this->__vftable = (Scaleform::GFx::TextFieldDef_vtbl *)&Scaleform::GFx::TextFieldDef::`vftable';
  v3 = (volatile int *)((unsigned __int64)pData & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  v4 = (volatile int *)(this->DefaultText.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
  v5 = (volatile int *)(this->FontClass.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
  if ( this->pFont.HType == RH_Pointer )
  {
    pResource = this->pFont.pResource;
    if ( pResource )
      Scaleform::GFx::Resource::Release(pResource);
  }
  this->__vftable = (Scaleform::GFx::TextFieldDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

bool __fastcall Scaleform::GFx::Clipboard::ContainsRichText(Scaleform::GFx::Clipboard *this)
{
  return this->pStyledText != 0i64;
}

const Scaleform::GFx::TextKeyMap::KeyMapEntry *__fastcall Scaleform::GFx::TextKeyMap::Find(
        Scaleform::GFx::TextKeyMap *this,
        unsigned int keyCode,
        const Scaleform::KeyModifiers *specKeys,
        Scaleform::GFx::TextKeyMap::KeyState state)
{
  const Scaleform::GFx::TextKeyMap::KeyMapEntry *FirstEntry; // r10
  Scaleform::GFx::TextKeyMap::KeyMapEntry *Data; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  FirstEntry = Scaleform::GFx::TextKeyMap::FindFirstEntry(this, keyCode);
  if ( !FirstEntry )
    return 0i64;
  while ( FirstEntry->mState != state || (FirstEntry->SpecKeysPressed & specKeys->States) != FirstEntry->SpecKeysPressed )
  {
    Data = this->Map.Data.Data;
    v9 = FirstEntry - Data;
    if ( v9 + 1 < this->Map.Data.Size )
    {
      v10 = v9;
      if ( Data[v10 + 1].KeyCode == FirstEntry->KeyCode )
      {
        FirstEntry = &Data[v10 + 1];
        if ( FirstEntry )
          continue;
      }
    }
    return 0i64;
  }
  return FirstEntry;
}

Scaleform::GFx::TextKeyMap::KeyMapEntry *__fastcall Scaleform::GFx::TextKeyMap::FindFirstEntry(
        Scaleform::GFx::TextKeyMap *this,
        unsigned int keyCode)
{
  __int64 Size; // rax
  unsigned __int64 v3; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *result; // rax

  Size = this->Map.Data.Size;
  v3 = 0i64;
  while ( Size > 0 )
  {
    if ( (int)(this->Map.Data.Data[(Size >> 1) + v3].KeyCode - keyCode) >= 0 )
    {
      Size >>= 1;
    }
    else
    {
      v3 += (Size >> 1) + 1;
      Size += -1 - (Size >> 1);
    }
  }
  if ( v3 >= this->Map.Data.Size )
    return 0i64;
  result = &this->Map.Data.Data[v3];
  if ( result->KeyCode != keyCode )
    return 0i64;
  return result;
}

void __fastcall Scaleform::GFx::GFx_CSMTextSettings(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v4; // eax
  __int64 Pos; // r8
  unsigned __int16 v6; // si
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  int v8; // ecx
  __int64 v9; // r10
  int v10; // er9
  int v11; // eax
  __int64 v12; // r10
  int v13; // er9
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::Resource *pResource; // rbx
  Scaleform::GFx::ResourceHandle phandle; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+60h] [rbp+18h]

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v4 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v6 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  Scaleform::GFx::Stream::ReadUInt(&p_ProcessInfo->Stream, 2u);
  Scaleform::GFx::Stream::ReadUInt(&p_ProcessInfo->Stream, 3u);
  v8 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
  p_ProcessInfo->Stream.UnusedBits = 0;
  if ( v8 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 4);
  v9 = p_ProcessInfo->Stream.Pos;
  v10 = p_ProcessInfo->Stream.pBuffer[v9] | ((p_ProcessInfo->Stream.pBuffer[(unsigned int)(v9 + 1)] | ((p_ProcessInfo->Stream.pBuffer[(unsigned int)(v9 + 2)] | (p_ProcessInfo->Stream.pBuffer[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
  p_ProcessInfo->Stream.Pos = v9 + 4;
  v11 = p_ProcessInfo->Stream.DataSize - (v9 + 4);
  v18 = v10;
  p_ProcessInfo->Stream.UnusedBits = 0;
  if ( v11 < 4 )
    Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 4);
  v12 = p_ProcessInfo->Stream.Pos;
  v13 = p_ProcessInfo->Stream.pBuffer[v12] | ((p_ProcessInfo->Stream.pBuffer[(unsigned int)(v12 + 1)] | ((p_ProcessInfo->Stream.pBuffer[(unsigned int)(v12 + 2)] | (p_ProcessInfo->Stream.pBuffer[(unsigned int)(v12 + 3)] << 8)) << 8)) << 8);
  p_ProcessInfo->Stream.Pos = v12 + 4;
  rid.Id = v13;
  if ( (unsigned __int8)Scaleform::GFx::Stream::IsVerboseParse(&p_ProcessInfo->Stream) )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "CSMTextSettings, id = %d\n");
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  FlagType = %s, GridFit = %s\n");
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
      "  Thinkness = %f, Sharpnesss = %f\n");
  }
  pObject = p->pLoadData.pObject;
  phandle.HType = RH_Pointer;
  phandle.pResource = 0i64;
  rid.Id = v6;
  if ( (unsigned __int8)Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(pObject, &phandle, &rid) )
  {
    if ( phandle.HType )
      return;
    pResource = phandle.pResource;
    if ( !phandle.pResource )
      return;
    if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))phandle.pResource->GetResourceTypeCode)(phandle.pResource) & 0xFF00) == 33536 )
    {
      LOWORD(pResource[5].RefCount.Value) |= 0x400u;
    }
    else if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))pResource->GetResourceTypeCode)(pResource) & 0xFF00) == 33280 )
    {
      LOBYTE(pResource[4].RefCount.Value) |= 1u;
    }
  }
  if ( phandle.HType == RH_Pointer )
  {
    if ( phandle.pResource )
      Scaleform::GFx::Resource::Release(phandle.pResource);
  }
}

void __fastcall Scaleform::GFx::GFx_DefineEditTextLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r8
  unsigned __int16 v7; // si
  Scaleform::GFx::TextFieldDef *v8; // rax
  Scaleform::GFx::TextFieldDef *v9; // rax
  Scaleform::GFx::TextFieldDef *v10; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ResourceId rid; // [rsp+30h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  v8 = (Scaleform::GFx::TextFieldDef *)p->pLoadData.pObject->pHeap->Alloc(p->pLoadData.pObject->pHeap, 144i64, 0i64);
  if ( v8 )
  {
    Scaleform::GFx::TextFieldDef::TextFieldDef(v8);
    v10 = v9;
  }
  else
  {
    v10 = 0i64;
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "EditTextChar, id = %d\n");
  Scaleform::GFx::TextFieldDef::Read(v10, p, tagInfo->TagType);
  if ( p->LoadState == LS_LoadingRoot )
  {
    pObject = p->pLoadData.pObject;
    rid.Id = v7;
    Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(pObject, &rid, v10);
  }
  if ( v10 )
    Scaleform::GFx::Resource::Release(v10);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall Scaleform::GFx::TextFieldDef::GetResourceTypeCode(Scaleform::GFx::TextFieldDef *this)
{
  return 33536i64;
}

Concurrency::details::SchedulerBase *__fastcall Scaleform::GFx::AS3::XMLSupportImpl::GetClassTraitsXML(
        Concurrency::details::ContextBase *this)
{
  return this->m_pScheduler;
}

Scaleform::Render::RQCacheInterface **__fastcall Scaleform::GFx::Clipboard::GetText(Scaleform::Render::MeshCache *this)
{
  return &this->pRQCaches;
}

__int64 __fastcall ActorOption::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLProcInstr *this)
{
  return 4i64;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::GFx::TextFieldDef::InitEmptyTextDef(Scaleform::GFx::TextFieldDef *this)
{
  this->Flags |= 0x800u;
  this->ColorV.Raw = -16777216;
  this->Flags |= 0x528u;
  this->TextHeight = 240.0;
}

Scaleform::GFx::TextKeyMap *__fastcall Scaleform::GFx::TextKeyMap::InitWindowsKeyMap(Scaleform::GFx::TextKeyMap *this)
{
  __int64 Size; // rdx
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v30; // rsi
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v34; // rsi
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v38; // rsi
  __int64 v39; // rcx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v42; // rsi
  __int64 v43; // rcx
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v46; // rsi
  __int64 v47; // rcx
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v50; // rsi
  __int64 v51; // rcx
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v54; // rsi
  __int64 v55; // rdx
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v58; // rsi
  __int64 v59; // rdx
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v62; // rsi
  __int64 v63; // rdx
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v66; // rsi
  __int64 v67; // rdx
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v70; // rsi
  __int64 v71; // rdx
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v74; // rsi
  __int64 v75; // rdx
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v78; // rsi
  __int64 v79; // rcx
  unsigned __int64 v80; // rsi
  unsigned __int64 v81; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v82; // rsi
  __int64 v83; // rdx
  unsigned __int64 v84; // rsi
  unsigned __int64 v85; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v86; // rsi
  __int64 v87; // rdx
  unsigned __int64 v88; // rsi
  unsigned __int64 v89; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v90; // rsi
  __int64 v91; // rdx
  unsigned __int64 v92; // rsi
  unsigned __int64 v93; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v94; // rsi
  __int64 v95; // rdx
  unsigned __int64 v96; // r8
  Scaleform::GFx::TextKeyMap *result; // rax
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v98; // rdi
  Scaleform::GFx::TextKeyMap::KeyMapEntry v99; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v100; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v101; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v102; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v103; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v104; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v105; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v106; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v107; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v108; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v109; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v110; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v111; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v112; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v113; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v114; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v115; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v116; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v117; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v118; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v119; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v120; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v121; // [rsp+20h] [rbp-10h]
  Scaleform::GFx::TextKeyMap::KeyMapEntry v122; // [rsp+20h] [rbp-10h]

  Size = this->Map.Data.Size;
  v2 = 0i64;
  v99.Action = KeyAct_EnterSelectionMode;
  *(_QWORD *)&v99.KeyCode = 16i64;
  v4 = 0i64;
  v99.mState = State_Down;
  while ( Size > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(Size >> 1) + v4].KeyCode - 16) >= 0 )
    {
      Size >>= 1;
    }
    else
    {
      v4 += (Size >> 1) + 1;
      Size += -1 - (Size >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v5 = this->Map.Data.Size;
  if ( v4 < v5 - 1 )
    memmove(&this->Map.Data.Data[v4 + 1], &this->Map.Data.Data[v4], 16 * (v5 - v4) - 16);
  v6 = &this->Map.Data.Data[v4];
  if ( v6 )
    *v6 = v99;
  v7 = this->Map.Data.Size;
  v8 = 0i64;
  v100.Action = KeyAct_LeaveSelectionMode;
  *(_QWORD *)&v100.KeyCode = 16i64;
  v100.mState = State_Up;
  while ( v7 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v7 >> 1) + v8].KeyCode - 16) >= 0 )
    {
      v7 >>= 1;
    }
    else
    {
      v8 += (v7 >> 1) + 1;
      v7 += -1 - (v7 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v9 = this->Map.Data.Size;
  if ( v8 < v9 - 1 )
    memmove(&this->Map.Data.Data[v8 + 1], &this->Map.Data.Data[v8], 16 * (v9 - v8) - 16);
  v10 = &this->Map.Data.Data[v8];
  if ( v10 )
    *v10 = v100;
  v11 = this->Map.Data.Size;
  v12 = 0i64;
  v101.Action = KeyAct_Up;
  *(_QWORD *)&v101.KeyCode = 38i64;
  v101.mState = State_Down;
  while ( v11 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v11 >> 1) + v12].KeyCode - 38) >= 0 )
    {
      v11 >>= 1;
    }
    else
    {
      v12 += (v11 >> 1) + 1;
      v11 += -1 - (v11 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v13 = this->Map.Data.Size;
  if ( v12 < v13 - 1 )
    memmove(&this->Map.Data.Data[v12 + 1], &this->Map.Data.Data[v12], 16 * (v13 - v12) - 16);
  v14 = &this->Map.Data.Data[v12];
  if ( v14 )
    *v14 = v101;
  v15 = this->Map.Data.Size;
  v16 = 0i64;
  v102.Action = KeyAct_Down;
  *(_QWORD *)&v102.KeyCode = 40i64;
  v102.mState = State_Down;
  while ( v15 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v15 >> 1) + v16].KeyCode - 40) >= 0 )
    {
      v15 >>= 1;
    }
    else
    {
      v16 += (v15 >> 1) + 1;
      v15 += -1 - (v15 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v17 = this->Map.Data.Size;
  if ( v16 < v17 - 1 )
    memmove(&this->Map.Data.Data[v16 + 1], &this->Map.Data.Data[v16], 16 * (v17 - v16) - 16);
  v18 = &this->Map.Data.Data[v16];
  if ( v18 )
    *v18 = v102;
  v19 = this->Map.Data.Size;
  v20 = 0i64;
  v103.Action = KeyAct_Left;
  *(_QWORD *)&v103.KeyCode = 37i64;
  v103.mState = State_Down;
  while ( v19 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v19 >> 1) + v20].KeyCode - 37) >= 0 )
    {
      v19 >>= 1;
    }
    else
    {
      v20 += (v19 >> 1) + 1;
      v19 += -1 - (v19 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v21 = this->Map.Data.Size;
  if ( v20 < v21 - 1 )
    memmove(&this->Map.Data.Data[v20 + 1], &this->Map.Data.Data[v20], 16 * (v21 - v20) - 16);
  v22 = &this->Map.Data.Data[v20];
  if ( v22 )
    *v22 = v103;
  v23 = this->Map.Data.Size;
  v24 = 0i64;
  v104.Action = KeyAct_Right;
  *(_QWORD *)&v104.KeyCode = 39i64;
  v104.mState = State_Down;
  while ( v23 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v23 >> 1) + v24].KeyCode - 39) >= 0 )
    {
      v23 >>= 1;
    }
    else
    {
      v24 += (v23 >> 1) + 1;
      v23 += -1 - (v23 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v25 = this->Map.Data.Size;
  if ( v24 < v25 - 1 )
    memmove(&this->Map.Data.Data[v24 + 1], &this->Map.Data.Data[v24], 16 * (v25 - v24) - 16);
  v26 = &this->Map.Data.Data[v24];
  if ( v26 )
    *v26 = v104;
  v27 = this->Map.Data.Size;
  v28 = 0i64;
  v105.Action = KeyAct_PageUp;
  *(_QWORD *)&v105.KeyCode = 33i64;
  v105.mState = State_Down;
  while ( v27 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v27 >> 1) + v28].KeyCode - 33) >= 0 )
    {
      v27 >>= 1;
    }
    else
    {
      v28 += (v27 >> 1) + 1;
      v27 += -1 - (v27 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v29 = this->Map.Data.Size;
  if ( v28 < v29 - 1 )
    memmove(&this->Map.Data.Data[v28 + 1], &this->Map.Data.Data[v28], 16 * (v29 - v28) - 16);
  v30 = &this->Map.Data.Data[v28];
  if ( v30 )
    *v30 = v105;
  v31 = this->Map.Data.Size;
  v32 = 0i64;
  v106.Action = KeyAct_PageDown;
  *(_QWORD *)&v106.KeyCode = 34i64;
  v106.mState = State_Down;
  while ( v31 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v31 >> 1) + v32].KeyCode - 34) >= 0 )
    {
      v31 >>= 1;
    }
    else
    {
      v32 += (v31 >> 1) + 1;
      v31 += -1 - (v31 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v33 = this->Map.Data.Size;
  if ( v32 < v33 - 1 )
    memmove(&this->Map.Data.Data[v32 + 1], &this->Map.Data.Data[v32], 16 * (v33 - v32) - 16);
  v34 = &this->Map.Data.Data[v32];
  if ( v34 )
    *v34 = v106;
  v35 = this->Map.Data.Size;
  v36 = 0i64;
  v107.Action = KeyAct_LineHome;
  *(_QWORD *)&v107.KeyCode = 36i64;
  v107.mState = State_Down;
  while ( v35 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v35 >> 1) + v36].KeyCode - 36) >= 0 )
    {
      v35 >>= 1;
    }
    else
    {
      v36 += (v35 >> 1) + 1;
      v35 += -1 - (v35 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v37 = this->Map.Data.Size;
  if ( v36 < v37 - 1 )
    memmove(&this->Map.Data.Data[v36 + 1], &this->Map.Data.Data[v36], 16 * (v37 - v36) - 16);
  v38 = &this->Map.Data.Data[v36];
  if ( v38 )
    *v38 = v107;
  v39 = this->Map.Data.Size;
  v40 = 0i64;
  v108.Action = KeyAct_LineEnd;
  *(_QWORD *)&v108.KeyCode = 35i64;
  v108.mState = State_Down;
  while ( v39 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v39 >> 1) + v40].KeyCode - 35) >= 0 )
    {
      v39 >>= 1;
    }
    else
    {
      v40 += (v39 >> 1) + 1;
      v39 += -1 - (v39 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v41 = this->Map.Data.Size;
  if ( v40 < v41 - 1 )
    memmove(&this->Map.Data.Data[v40 + 1], &this->Map.Data.Data[v40], 16 * (v41 - v40) - 16);
  v42 = &this->Map.Data.Data[v40];
  if ( v42 )
    *v42 = v108;
  v43 = this->Map.Data.Size;
  v44 = 0i64;
  *(_QWORD *)&v109.Action = 0x210000000Ci64;
  *(_QWORD *)&v109.SpecKeysPressed = 2i64;
  while ( v43 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v43 >> 1) + v44].KeyCode - 33) >= 0 )
    {
      v43 >>= 1;
    }
    else
    {
      v44 += (v43 >> 1) + 1;
      v43 += -1 - (v43 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v45 = this->Map.Data.Size;
  if ( v44 < v45 - 1 )
    memmove(&this->Map.Data.Data[v44 + 1], &this->Map.Data.Data[v44], 16 * (v45 - v44) - 16);
  v46 = &this->Map.Data.Data[v44];
  if ( v46 )
    *v46 = v109;
  v47 = this->Map.Data.Size;
  v48 = 0i64;
  *(_QWORD *)&v110.Action = 0x220000000Di64;
  *(_QWORD *)&v110.SpecKeysPressed = 2i64;
  while ( v47 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v47 >> 1) + v48].KeyCode - 34) >= 0 )
    {
      v47 >>= 1;
    }
    else
    {
      v48 += (v47 >> 1) + 1;
      v47 += -1 - (v47 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v49 = this->Map.Data.Size;
  if ( v48 < v49 - 1 )
    memmove(&this->Map.Data.Data[v48 + 1], &this->Map.Data.Data[v48], 16 * (v49 - v48) - 16);
  v50 = &this->Map.Data.Data[v48];
  if ( v50 )
    *v50 = v110;
  v51 = this->Map.Data.Size;
  v52 = 0i64;
  *(_QWORD *)&v111.Action = 0x240000000Ei64;
  *(_QWORD *)&v111.SpecKeysPressed = 2i64;
  while ( v51 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v51 >> 1) + v52].KeyCode - 36) >= 0 )
    {
      v51 >>= 1;
    }
    else
    {
      v52 += (v51 >> 1) + 1;
      v51 += -1 - (v51 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v53 = this->Map.Data.Size;
  if ( v52 < v53 - 1 )
    memmove(&this->Map.Data.Data[v52 + 1], &this->Map.Data.Data[v52], 16 * (v53 - v52) - 16);
  v54 = &this->Map.Data.Data[v52];
  if ( v54 )
    *v54 = v111;
  v55 = this->Map.Data.Size;
  v56 = 0i64;
  *(_QWORD *)&v112.Action = 0x230000000Fi64;
  *(_QWORD *)&v112.SpecKeysPressed = 2i64;
  while ( v55 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v55 >> 1) + v56].KeyCode - 35) >= 0 )
    {
      v55 >>= 1;
    }
    else
    {
      v56 += (v55 >> 1) + 1;
      v55 += -1 - (v55 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v57 = this->Map.Data.Size;
  if ( v56 < v57 - 1 )
    memmove(&this->Map.Data.Data[v56 + 1], &this->Map.Data.Data[v56], 16 * (v57 - v56) - 16);
  v58 = &this->Map.Data.Data[v56];
  if ( v58 )
    *v58 = v112;
  v59 = this->Map.Data.Size;
  v60 = 0i64;
  v113.Action = KeyAct_Backspace;
  *(_QWORD *)&v113.KeyCode = 8i64;
  v113.mState = State_Down;
  while ( v59 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v59 >> 1) + v60].KeyCode - 8) >= 0 )
    {
      v59 >>= 1;
    }
    else
    {
      v60 += (v59 >> 1) + 1;
      v59 += -1 - (v59 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v61 = this->Map.Data.Size;
  if ( v60 < v61 - 1 )
    memmove(&this->Map.Data.Data[v60 + 1], &this->Map.Data.Data[v60], 16 * (v61 - v60) - 16);
  v62 = &this->Map.Data.Data[v60];
  if ( v62 )
    *v62 = v113;
  v63 = this->Map.Data.Size;
  v64 = 0i64;
  v114.Action = KeyAct_Delete;
  *(_QWORD *)&v114.KeyCode = 46i64;
  v114.mState = State_Down;
  while ( v63 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v63 >> 1) + v64].KeyCode - 46) >= 0 )
    {
      v63 >>= 1;
    }
    else
    {
      v64 += (v63 >> 1) + 1;
      v63 += -1 - (v63 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v65 = this->Map.Data.Size;
  if ( v64 < v65 - 1 )
    memmove(&this->Map.Data.Data[v64 + 1], &this->Map.Data.Data[v64], 16 * (v65 - v64) - 16);
  v66 = &this->Map.Data.Data[v64];
  if ( v66 )
    *v66 = v114;
  v67 = this->Map.Data.Size;
  v68 = 0i64;
  v115.Action = KeyAct_Return;
  *(_QWORD *)&v115.KeyCode = 13i64;
  v115.mState = State_Down;
  while ( v67 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v67 >> 1) + v68].KeyCode - 13) >= 0 )
    {
      v67 >>= 1;
    }
    else
    {
      v68 += (v67 >> 1) + 1;
      v67 += -1 - (v67 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v69 = this->Map.Data.Size;
  if ( v68 < v69 - 1 )
    memmove(&this->Map.Data.Data[v68 + 1], &this->Map.Data.Data[v68], 16 * (v69 - v68) - 16);
  v70 = &this->Map.Data.Data[v68];
  if ( v70 )
    *v70 = v115;
  v71 = this->Map.Data.Size;
  v72 = 0i64;
  *(_QWORD *)&v116.Action = 0x4300000013i64;
  *(_QWORD *)&v116.SpecKeysPressed = 2i64;
  while ( v71 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v71 >> 1) + v72].KeyCode - 67) >= 0 )
    {
      v71 >>= 1;
    }
    else
    {
      v72 += (v71 >> 1) + 1;
      v71 += -1 - (v71 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v73 = this->Map.Data.Size;
  if ( v72 < v73 - 1 )
    memmove(&this->Map.Data.Data[v72 + 1], &this->Map.Data.Data[v72], 16 * (v73 - v72) - 16);
  v74 = &this->Map.Data.Data[v72];
  if ( v74 )
    *v74 = v116;
  v75 = this->Map.Data.Size;
  v76 = 0i64;
  *(_QWORD *)&v117.Action = 0x2D00000013i64;
  *(_QWORD *)&v117.SpecKeysPressed = 2i64;
  while ( v75 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v75 >> 1) + v76].KeyCode - 45) >= 0 )
    {
      v75 >>= 1;
    }
    else
    {
      v76 += (v75 >> 1) + 1;
      v75 += -1 - (v75 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v77 = this->Map.Data.Size;
  if ( v76 < v77 - 1 )
    memmove(&this->Map.Data.Data[v76 + 1], &this->Map.Data.Data[v76], 16 * (v77 - v76) - 16);
  v78 = &this->Map.Data.Data[v76];
  if ( v78 )
    *v78 = v117;
  v79 = this->Map.Data.Size;
  v80 = 0i64;
  *(_QWORD *)&v118.Action = 0x5600000014i64;
  *(_QWORD *)&v118.SpecKeysPressed = 2i64;
  while ( v79 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v79 >> 1) + v80].KeyCode - 86) >= 0 )
    {
      v79 >>= 1;
    }
    else
    {
      v80 += (v79 >> 1) + 1;
      v79 += -1 - (v79 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v81 = this->Map.Data.Size;
  if ( v80 < v81 - 1 )
    memmove(&this->Map.Data.Data[v80 + 1], &this->Map.Data.Data[v80], 16 * (v81 - v80) - 16);
  v82 = &this->Map.Data.Data[v80];
  if ( v82 )
    *v82 = v118;
  v83 = this->Map.Data.Size;
  v84 = 0i64;
  *(_QWORD *)&v119.Action = 0x2D00000014i64;
  *(_QWORD *)&v119.SpecKeysPressed = 1i64;
  while ( v83 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v83 >> 1) + v84].KeyCode - 45) >= 0 )
    {
      v83 >>= 1;
    }
    else
    {
      v84 += (v83 >> 1) + 1;
      v83 += -1 - (v83 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v85 = this->Map.Data.Size;
  if ( v84 < v85 - 1 )
    memmove(&this->Map.Data.Data[v84 + 1], &this->Map.Data.Data[v84], 16 * (v85 - v84) - 16);
  v86 = &this->Map.Data.Data[v84];
  if ( v86 )
    *v86 = v119;
  v87 = this->Map.Data.Size;
  v88 = 0i64;
  *(_QWORD *)&v120.Action = 0x5800000015i64;
  *(_QWORD *)&v120.SpecKeysPressed = 2i64;
  while ( v87 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v87 >> 1) + v88].KeyCode - 88) >= 0 )
    {
      v87 >>= 1;
    }
    else
    {
      v88 += (v87 >> 1) + 1;
      v87 += -1 - (v87 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v89 = this->Map.Data.Size;
  if ( v88 < v89 - 1 )
    memmove(&this->Map.Data.Data[v88 + 1], &this->Map.Data.Data[v88], 16 * (v89 - v88) - 16);
  v90 = &this->Map.Data.Data[v88];
  if ( v90 )
    *v90 = v120;
  v91 = this->Map.Data.Size;
  v92 = 0i64;
  *(_QWORD *)&v121.Action = 0x2E00000015i64;
  *(_QWORD *)&v121.SpecKeysPressed = 1i64;
  while ( v91 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v91 >> 1) + v92].KeyCode - 46) >= 0 )
    {
      v91 >>= 1;
    }
    else
    {
      v92 += (v91 >> 1) + 1;
      v91 += -1 - (v91 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v93 = this->Map.Data.Size;
  if ( v92 < v93 - 1 )
    memmove(&this->Map.Data.Data[v92 + 1], &this->Map.Data.Data[v92], 16 * (v93 - v92) - 16);
  v94 = &this->Map.Data.Data[v92];
  if ( v94 )
    *v94 = v121;
  v95 = this->Map.Data.Size;
  *(_QWORD *)&v122.Action = 0x4100000016i64;
  *(_QWORD *)&v122.SpecKeysPressed = 2i64;
  while ( v95 > 0 )
  {
    if ( (signed int)(this->Map.Data.Data[(v95 >> 1) + v2].KeyCode - 65) >= 0 )
    {
      v95 >>= 1;
    }
    else
    {
      v2 += (v95 >> 1) + 1;
      v95 += -1 - (v95 >> 1);
    }
  }
  Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Map.Data,
    this->Map.Data.Size + 1);
  v96 = this->Map.Data.Size;
  if ( v2 < v96 - 1 )
    memmove(&this->Map.Data.Data[v2 + 1], &this->Map.Data.Data[v2], 16 * (v96 - v2) - 16);
  result = this;
  v98 = &this->Map.Data.Data[v2];
  if ( v98 )
    *v98 = v122;
  return result;
}

void __fastcall Scaleform::GFx::TextFieldDef::Read(
        Scaleform::GFx::TextFieldDef *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  bool v6; // r12
  bool v7; // r13
  bool v8; // r15
  bool v9; // bl
  bool v10; // r14
  int v11; // eax
  __int64 Pos; // r9
  int v13; // edx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ResourceHandle::HandleType HType; // eax
  Scaleform::GFx::Resource *pResource; // rcx
  int v17; // eax
  __int64 v18; // r9
  int v19; // edx
  int v20; // eax
  __int64 v21; // r9
  int v22; // er8
  int v23; // eax
  __int64 v24; // rdx
  Scaleform::GFx::TextFieldDef::alignment v25; // ecx
  int v26; // eax
  __int64 v27; // r10
  unsigned __int8 *pBuffer; // rdx
  int v29; // ecx
  int v30; // er9
  int v31; // eax
  __int64 v32; // r10
  unsigned __int8 *v33; // rdx
  int v34; // ecx
  int v35; // er9
  int v36; // eax
  __int64 v37; // r9
  __int16 v38; // r8
  int v39; // eax
  __int64 v40; // r9
  unsigned __int8 *v41; // rdx
  __int16 v42; // r8
  __int16 v43; // ax
  Scaleform::GFx::ResourceHandle phandle; // [rsp+40h] [rbp-48h] BYREF
  bool v45; // [rsp+90h] [rbp+8h]
  Scaleform::GFx::ResourceId rid; // [rsp+98h] [rbp+10h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  Scaleform::GFx::Stream::ReadRect(&pAltStream->Stream, &this->TextRect);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  TextRect = { l: %f, t: %f, r: %f, b: %f }\n");
  pAltStream->Stream.UnusedBits = 0;
  v45 = (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags |= 1u;
  else
    this->Flags &= ~1u;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags |= 2u;
  else
    this->Flags &= ~2u;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags |= 4u;
  else
    this->Flags &= ~4u;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags |= 8u;
  else
    this->Flags &= ~8u;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  WordWrap = %d, Multiline = %d, Password = %d, ReadOnly = %d\n");
  v6 = (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
  v7 = (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
  v8 = (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
  v9 = (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags |= 0x10u;
  else
    this->Flags &= ~0x10u;
  v10 = (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) != 0;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags &= ~0x20u;
  else
    this->Flags |= 0x20u;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags |= 0x40u;
  else
    this->Flags &= ~0x40u;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags |= 0x1000u;
  else
    this->Flags &= ~0x1000u;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags |= 0x80u;
  else
    this->Flags &= ~0x80u;
  if ( (unsigned int)Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, 1u) )
    this->Flags &= ~0x100u;
  else
    this->Flags |= 0x100u;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  AutoSize = %d, Selectable = %d, Border = %d, Html = %d, UseDeviceFont = %d\n");
  if ( v8 )
  {
    v11 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v11 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    Pos = pAltStream->Stream.Pos;
    v13 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
    pAltStream->Stream.Pos = Pos + 2;
    this->FontId.Id = v13;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "  HasFont: font id = %d\n");
    pObject = p->pLoadData.pObject;
    phandle.HType = RH_Pointer;
    phandle.pResource = 0i64;
    rid.Id = this->FontId.Id;
    Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(pObject, &phandle, &rid);
    HType = phandle.HType;
    pResource = phandle.pResource;
    if ( phandle.HType == RH_Pointer && phandle.pResource )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)phandle.pResource);
      pResource = phandle.pResource;
      HType = phandle.HType;
    }
    if ( this->pFont.HType == RH_Pointer && this->pFont.pResource )
    {
      Scaleform::GFx::Resource::Release(this->pFont.pResource);
      pResource = phandle.pResource;
      HType = phandle.HType;
    }
    this->pFont.HType = HType;
    this->pFont.pResource = pResource;
    if ( HType == RH_Pointer && pResource )
      Scaleform::GFx::Resource::Release(pResource);
  }
  else
  {
    if ( !v9 )
      goto LABEL_50;
    Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &this->FontClass);
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "  HasFontClass: font class = %s\n");
  }
  v17 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v17 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  v18 = pAltStream->Stream.Pos;
  v19 = pAltStream->Stream.pBuffer[v18] | (pAltStream->Stream.pBuffer[(unsigned int)(v18 + 1)] << 8);
  pAltStream->Stream.Pos = v18 + 2;
  this->TextHeight = (float)v19;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  FontHeight = %f\n");
LABEL_50:
  if ( v6 )
  {
    Scaleform::GFx::Stream::ReadRgba(&pAltStream->Stream, &this->ColorV);
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "  HasColor\n");
  }
  if ( v7 )
  {
    v20 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v20 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    v21 = pAltStream->Stream.Pos;
    v22 = pAltStream->Stream.pBuffer[v21] | (pAltStream->Stream.pBuffer[(unsigned int)(v21 + 1)] << 8);
    pAltStream->Stream.Pos = v21 + 2;
    this->MaxLength = v22;
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "  HasMaxLength: len = %d\n");
  }
  if ( v10 )
  {
    this->Flags |= 0x200u;
    v23 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v23 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
    v24 = pAltStream->Stream.Pos;
    v25 = pAltStream->Stream.pBuffer[v24];
    pAltStream->Stream.Pos = v24 + 1;
    this->Alignment = v25;
    v26 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v26 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    v27 = pAltStream->Stream.Pos;
    pBuffer = pAltStream->Stream.pBuffer;
    v29 = pBuffer[(unsigned int)(v27 + 1)];
    v30 = pBuffer[v27];
    pAltStream->Stream.Pos = v27 + 2;
    this->LeftMargin = (float)(v30 | (v29 << 8));
    v31 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v31 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    v32 = pAltStream->Stream.Pos;
    v33 = pAltStream->Stream.pBuffer;
    v34 = v33[(unsigned int)(v32 + 1)];
    v35 = v33[v32];
    pAltStream->Stream.Pos = v32 + 2;
    this->RightMargin = (float)(v35 | (v34 << 8));
    v36 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v36 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    v37 = pAltStream->Stream.Pos;
    v38 = pAltStream->Stream.pBuffer[v37] | (pAltStream->Stream.pBuffer[(unsigned int)(v37 + 1)] << 8);
    pAltStream->Stream.Pos = v37 + 2;
    this->Indent = (float)v38;
    v39 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v39 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
    v40 = pAltStream->Stream.Pos;
    v41 = pAltStream->Stream.pBuffer;
    v42 = v41[(unsigned int)(v40 + 1)];
    v43 = v41[v40];
    pAltStream->Stream.Pos = v40 + 2;
    this->Leading = (float)(__int16)(v43 | (v42 << 8));
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
      "  HasLayout: alignment = %d, leftmarg = %f, rightmarg = %f, indent = %f, leading = %f\n");
  }
  Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &this->VariableName);
  if ( v45 )
    Scaleform::GFx::Stream::ReadString(&pAltStream->Stream, &this->DefaultText);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "EditTextChar, varname = %s, text = %s\n");
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

void __fastcall Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::GFx::TextKeyMap::KeyMapEntry *v6; // rax
  unsigned __int64 i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      v5 = newSize + (newSize >> 2);
      goto LABEL_6;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    v5 = newSize;
LABEL_6:
    Scaleform::ArrayDataBase<Scaleform::GFx::TextKeyMap::KeyMapEntry,Scaleform::AllocatorGH<Scaleform::GFx::TextKeyMap::KeyMapEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      v5);
  }
  this->Size = newSize;
  if ( newSize > Size )
  {
    v6 = &this->Data[Size];
    for ( i = newSize - Size; i; --i )
    {
      if ( v6 )
        v6->KeyCode = -1;
      ++v6;
    }
  }
}

void __fastcall Scaleform::GFx::Clipboard::SetStyledText(
        Scaleform::GFx::Clipboard *this,
        Scaleform::Render::Text::StyledText *pstyledText)
{
  Scaleform::Render::Text::StyledText *v4; // rcx
  Scaleform::MemoryHeap *v5; // rsi
  Scaleform::Render::Text::Allocator *v6; // rax
  Scaleform::Render::Text::StyledText *v7; // rdi
  Scaleform::Render::Text::Allocator *v8; // rbx
  Scaleform::Render::Text::StyledText *v9; // rax
  Scaleform::Render::Text::StyledText *v10; // rax

  v4 = this->pStyledText;
  if ( v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
  v5 = Scaleform::Memory::pGlobalHeap;
  v6 = (Scaleform::Render::Text::Allocator *)Scaleform::Memory::pGlobalHeap->Alloc(
                                               Scaleform::Memory::pGlobalHeap,
                                               144i64,
                                               0i64);
  v7 = 0i64;
  v8 = v6;
  if ( v6 )
  {
    v6->RefCount = 1;
    v6->__vftable = (Scaleform::Render::Text::Allocator_vtbl *)&Scaleform::Render::Text::Allocator::`vftable';
    v6->TextFormatStorage.pTable = 0i64;
    v6->ParagraphFormatStorage.pTable = 0i64;
    v6->TextFormatStorageCap = 100;
    v6->ParagraphFormatStorageCap = 100;
    v6->NewParagraphId = 1;
    v6->pHeap = v5;
    Scaleform::Render::Text::TextFormat::TextFormat(&v6->EntryTextFormat, v5);
    v8->Flags = 1;
  }
  else
  {
    v8 = 0i64;
  }
  v9 = (Scaleform::Render::Text::StyledText *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v5->Alloc)(
                                                v5,
                                                72i64);
  if ( v9 )
  {
    Scaleform::Render::Text::StyledText::StyledText(v9, v8);
    v7 = v10;
  }
  this->pStyledText = v7;
  Scaleform::Render::Text::StyledText::CopyStyledText(pstyledText, v7, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
}

void __fastcall Scaleform::GFx::Clipboard::SetText(Scaleform::GFx::Clipboard *this, const Scaleform::String *str)
{
  Scaleform::Render::Text::StyledText *pStyledText; // rcx
  unsigned __int64 v5; // rbx
  wchar_t *pText; // rdx

  pStyledText = this->pStyledText;
  if ( pStyledText )
  {
    Scaleform::RefCountNTSImpl::Release(pStyledText);
    this->pStyledText = 0i64;
  }
  v5 = Scaleform::String::GetLength((Scaleform::String *)str) + 1;
  Scaleform::WStringBuffer::Resize(&this->PlainText, v5);
  Scaleform::UTF8Util::DecodeStringSafe(
    this->PlainText.pText,
    v5,
    (const char *)((str->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    *(_QWORD *)(str->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
  pText = (wchar_t *)&unk_140740B00;
  if ( this->PlainText.pText )
    pText = this->PlainText.pText;
  this->OnTextStore(this, pText, this->PlainText.Length);
}

void __fastcall Scaleform::GFx::Clipboard::SetText(
        Scaleform::GFx::Clipboard *this,
        const wchar_t *ptext,
        unsigned __int64 len)
{
  Scaleform::Render::Text::StyledText *pStyledText; // rcx
  wchar_t *v7; // rdx

  pStyledText = this->pStyledText;
  if ( pStyledText )
  {
    Scaleform::RefCountNTSImpl::Release(pStyledText);
    this->pStyledText = 0i64;
  }
  Scaleform::WStringBuffer::SetString(&this->PlainText, ptext, len);
  v7 = (wchar_t *)&unk_140740B00;
  if ( this->PlainText.pText )
    v7 = this->PlainText.pText;
  this->OnTextStore(this, v7, this->PlainText.Length);
}

void __fastcall Scaleform::GFx::Clipboard::SetTextAndStyledText(
        Scaleform::GFx::Clipboard *this,
        const wchar_t *ptext,
        unsigned __int64 len,
        Scaleform::Render::Text::StyledText *pstyledText)
{
  Scaleform::GFx::Clipboard::SetStyledText(this, pstyledText);
  Scaleform::GFx::Clipboard::SetText(this, ptext, len);
}

