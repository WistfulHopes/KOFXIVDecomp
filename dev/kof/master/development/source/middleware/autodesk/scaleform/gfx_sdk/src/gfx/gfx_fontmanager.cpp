#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"

Scaleform::GFx::State * Scaleform::GFx::FontManagerStates::GetStateAddRef(Scaleform::GFx::State::StateType state); // 0x140363420
unsigned char Scaleform::GFx::FontManagerStates::CheckStateChange(Scaleform::GFx::FontLib * pfontLib, Scaleform::GFx::FontMap * pfontMap, Scaleform::GFx::FontProvider * pfontProvider, Scaleform::GFx::Translator * ptranslator); // 0x140361C50
Scaleform::GFx::FontManager::FontManager(Scaleform::GFx::MovieImpl * movie, Scaleform::GFx::MovieDefImpl * pdefImpl, Scaleform::GFx::FontManagerStates * pstate); // 0x140360D50
Scaleform::GFx::FontManager::FontManager(Scaleform::GFx::ResourceWeakLib * pweakLib, Scaleform::GFx::FontManagerStates * pstate); // 0x140360E00
void Scaleform::GFx::FontManager::commonInit(); // 0x140363520
class Scaleform::Ptr<Scaleform::GFx::FontData>
{
protected:
	Scaleform::GFx::FontData * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontData>(const Scaleform::Ptr<Scaleform::GFx::FontData> &);
	Ptr<Scaleform::GFx::FontData>(Scaleform::GFx::FontData *);
	Ptr<Scaleform::GFx::FontData>(Scaleform::Ptr<Scaleform::GFx::FontData> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontData>(Scaleform::Pickable<Scaleform::GFx::FontData>);
	Ptr<Scaleform::GFx::FontData>(Scaleform::GFx::FontData &);
	Ptr<Scaleform::GFx::FontData>();
	~Ptr<Scaleform::GFx::FontData>();
	bool operator==(Scaleform::GFx::FontData *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontData> &);
	bool operator!=(Scaleform::GFx::FontData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontData> &);
	Scaleform::Ptr<Scaleform::GFx::FontData> & operator=(Scaleform::Pickable<Scaleform::GFx::FontData>);
	const Scaleform::Ptr<Scaleform::GFx::FontData> & operator=(Scaleform::GFx::FontData &);
	const Scaleform::Ptr<Scaleform::GFx::FontData> & operator=(Scaleform::GFx::FontData *);
	const Scaleform::Ptr<Scaleform::GFx::FontData> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontData> &);
	Scaleform::Ptr<Scaleform::GFx::FontData> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontData>);
	Scaleform::Ptr<Scaleform::GFx::FontData> & SetPtr(Scaleform::GFx::FontData &);
	Scaleform::Ptr<Scaleform::GFx::FontData> & SetPtr(Scaleform::GFx::FontData *);
	Scaleform::Ptr<Scaleform::GFx::FontData> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontData * & GetRawRef();
	Scaleform::GFx::FontData * GetPtr();
	Scaleform::GFx::FontData & operator*();
	Scaleform::GFx::FontData * operator->();
	Scaleform::GFx::FontData * operator class Scaleform::GFx::FontData *();
	Scaleform::Ptr<Scaleform::GFx::FontData> & Pick(Scaleform::GFx::FontData *);
	Scaleform::Ptr<Scaleform::GFx::FontData> & Pick(Scaleform::Pickable<Scaleform::GFx::FontData>);
	Scaleform::Ptr<Scaleform::GFx::FontData> & Pick(Scaleform::Ptr<Scaleform::GFx::FontData> &);
};
const char * Scaleform::GFx::StrFlags[8]; // 0x1409F95B0
Scaleform::Render::Text::FontHandle::FontHandle(const Scaleform::Render::Text::FontHandle & __that); // 0x140360CE0
Scaleform::GFx::FontManager::~FontManager(); // 0x140360EB0
void Scaleform::GFx::FontManager::RemoveFontHandle(Scaleform::GFx::FontHandle * phandle); // 0x1403634B0
const char * Scaleform::GFx::FontFlagsToString(unsigned long matchFontFlags); // 0x140363390
void Scaleform::GFx::AddSearchInfo(Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo * psearchInfo, const char * line); // 0x140361460
void Scaleform::GFx::AddSearchInfo(Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo * psearchInfo, const char * pfontname, unsigned long flags, bool fontlib_installed, const Scaleform::GFx::MovieDefImpl::SearchInfo & resSearchInfo); // 0x140361540
void Scaleform::GFx::AddSearchInfo(Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo * psearchInfo, const char * str1, const char * str2, const char * str3, unsigned long flags, const char * str4); // 0x140361380
void Scaleform::GFx::AddSearchInfo(Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo * psearchInfo, const char * str1, const char * str2, const char * str3, unsigned long flags1, const char * str4, const char * str5, const char * str6, unsigned long flags2); // 0x140361250
void Scaleform::GFx::AddSearchInfo(Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo * psearchInfo, const char * str1, const char * str2, const char * str3, const char * str4, const char * str5, unsigned long flags); // 0x140361160
Scaleform::GFx::FontHandle * Scaleform::GFx::FontManager::FindOrCreateHandle(const char * pfontName, unsigned long matchFontFlags, Scaleform::GFx::FontResource * * ppfoundFont, Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo * searchInfo); // 0x140362430
Scaleform::GFx::FontHandle * Scaleform::GFx::FontManager::CreateFontHandle(const char * pfontName, unsigned long matchFontFlags, bool allowListOfFonts, Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo * searchInfo); // 0x140361F40
Scaleform::GFx::FontHandle * Scaleform::GFx::FontManager::CreateFontHandleFromName(const char * pfontName, unsigned long matchFontFlags, Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo * searchInfo); // 0x140362050
void Scaleform::GFx::FontManager::SetIMECandidateFont(Scaleform::GFx::FontHandle * pfont); // 0x1403634E0
Scaleform::GFx::FontHandle * Scaleform::GFx::FontManager::GetEmptyFont(); // 0x140363400
void Scaleform::GFx::FontManager::CleanCache(); // 0x140361D40
void Scaleform::GFx::FontManager::CleanCacheFor(Scaleform::GFx::MovieDefImpl * pdefImpl); // 0x140361E40//decompilation failure at 1409F95B0!
void __fastcall Scaleform::MsgFormat::FormatD1<char const *>(Scaleform::MsgFormat *this, const char *const *v)
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
      if ( this->MemPool.BuffSize < 0x28 )
      {
        pHeap = p_MemPool->pHeap;
        if ( !p_MemPool->pHeap )
          pHeap = Scaleform::Memory::pGlobalHeap;
        BuffPtr = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))pHeap->Alloc)(
                            pHeap,
                            40i64,
                            8i64);
      }
      else
      {
        BuffPtr = this->MemPool.BuffPtr;
        this->MemPool.BuffPtr = (char *)(((unsigned __int64)(BuffPtr + 39) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
        v6 = ((unsigned __int64)(BuffPtr + 39) & 0xFFFFFFFFFFFFFFF8ui64) - (_QWORD)p_MemPool;
        v7 = 512 - v6;
        if ( v6 >= 0x200 )
          v7 = 0i64;
        this->MemPool.BuffSize = v7;
      }
      if ( BuffPtr )
        Scaleform::StrFormatter::StrFormatter((Scaleform::StrFormatter *)BuffPtr, this, *v);
      else
        v9 = 0i64;
      Scaleform::MsgFormat::Bind(this, v9, 1);
    }
    while ( Scaleform::MsgFormat::NextFormatter(this) );
  }
  ++this->FirstArgNum;
}

char __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::RemoveAlt<Scaleform::GFx::FontHandle *>(
        Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *this,
        Scaleform::GFx::FontHandle *const *key)
{
  Scaleform::GFx::FontHandle *v5; // rbx
  _QWORD *v6; // rcx
  const char *v7; // rcx
  unsigned int Flags; // edi
  unsigned __int8 v9; // bl
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 EntryCount; // rdi
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v13; // rbx
  unsigned __int64 v14; // r14
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v15; // rcx
  Scaleform::GFx::FontManager::NodePtr other; // [rsp+20h] [rbp-28h] BYREF

  if ( !this->pTable )
    return 0;
  v5 = *key;
  v6 = (_QWORD *)((*key)->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (*v6 & 0x7FFFFFFFFFFFFFFFi64) != 0 )
    v7 = (char *)v6 + 12;
  else
    v7 = v5->pFont.pObject->GetName(v5->pFont.pObject);
  Flags = v5->pFont.pObject->Flags;
  v9 = (Flags | v5->OverridenFontFlags) & 3;
  v10 = -1i64;
  v11 = -1i64;
  do
    ++v11;
  while ( v7[v11] );
  EntryCount = this->pTable->SizeMask & (Scaleform::String::BernsteinHashFunctionCIS(v7, v11, 0x1505ui64) ^ (v9 | (unsigned __int8)Flags) & 3);
  v13 = &this->pTable[2 * EntryCount + 1];
  if ( v13->EntryCount == -2i64 || v13->SizeMask != EntryCount )
    return 0;
  v14 = EntryCount;
  while ( 1 )
  {
    if ( v13->SizeMask == v14 )
    {
      other.pNode = *key;
      other.SearchedForNonDeviceFont = 0;
      if ( Scaleform::GFx::FontManager::NodePtr::operator==((Scaleform::GFx::FontManager::NodePtr *)&v13[1], &other) )
        break;
    }
    v10 = EntryCount;
    EntryCount = v13->EntryCount;
    if ( v13->EntryCount == -1i64 )
      return 0;
    v13 = &this->pTable[2 * EntryCount + 1];
  }
  if ( v14 == EntryCount )
  {
    if ( v13->EntryCount != -1i64 )
    {
      v15 = &this->pTable[2 * v13->EntryCount];
      v13->EntryCount = -2i64;
      v13->EntryCount = v15[1].EntryCount;
      v13->SizeMask = v15[1].SizeMask;
      v13[1] = v15[2];
      v13 = v15 + 1;
    }
  }
  else
  {
    this->pTable[2 * v10 + 1].EntryCount = v13->EntryCount;
  }
  v13->EntryCount = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

char __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::Iterator::RemoveAlt<Scaleform::GFx::FontManager::NodePtr>(
        Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::Iterator *this,
        const Scaleform::GFx::FontManager::NodePtr *key)
{
  const Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *pHash; // r14
  Scaleform::GFx::FontHandle *pNode; // rbx
  _QWORD *v6; // rcx
  const char *v7; // rcx
  unsigned int Flags; // edi
  unsigned __int8 v9; // bl
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  __int64 v15; // rcx

  pHash = this->pHash;
  pNode = key->pNode;
  v6 = (_QWORD *)(key->pNode->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (*v6 & 0x7FFFFFFFFFFFFFFFi64) != 0 )
    v7 = (char *)v6 + 12;
  else
    v7 = pNode->pFont.pObject->GetName(pNode->pFont.pObject);
  Flags = pNode->pFont.pObject->Flags;
  v9 = (Flags | pNode->OverridenFontFlags) & 3;
  v10 = -1i64;
  v11 = -1i64;
  do
    ++v11;
  while ( v7[v11] );
  v12 = pHash->pTable->SizeMask & (Scaleform::String::BernsteinHashFunctionCIS(v7, v11, 0x1505ui64) ^ (v9 | (unsigned __int8)Flags) & 3);
  v13 = (__int64)&pHash->pTable[2 * v12 + 1];
  if ( *(_QWORD *)v13 == -2i64 || *(_QWORD *)(v13 + 8) != v12 )
    return 0;
  v14 = v12;
  while ( *(_QWORD *)(v13 + 8) != v14
       || !Scaleform::GFx::FontManager::NodePtr::operator==((Scaleform::GFx::FontManager::NodePtr *)(v13 + 16), key) )
  {
    v10 = v12;
    v12 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 == -1i64 )
      return 0;
    v13 = (__int64)&pHash->pTable[2 * v12 + 1];
  }
  if ( v12 == this->Index )
  {
    if ( v14 == v12 )
    {
      if ( *(_QWORD *)v13 != -1i64 )
      {
        v15 = (__int64)&pHash->pTable[2 * *(_QWORD *)v13];
        *(_QWORD *)v13 = -2i64;
        *(_QWORD *)v13 = *(_QWORD *)(v15 + 16);
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(v15 + 24);
        *(_OWORD *)(v13 + 16) = *(_OWORD *)(v15 + 32);
        --this->Index;
        v13 = v15 + 16;
      }
    }
    else
    {
      pHash->pTable[2 * v10 + 1].EntryCount = *(_QWORD *)v13;
    }
    *(_QWORD *)v13 = -2i64;
    --pHash->pTable->EntryCount;
  }
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::add<Scaleform::GFx::FontHandle *>(
        Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *this,
        void *pmemAddr,
        Scaleform::GFx::FontHandle *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v11; // r8
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v12; // rdx
  unsigned __int64 EntryCount; // r11
  Scaleform::GFx::FontHandle *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *i; // r9
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType v19; // [rsp+20h] [rbp-18h]

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
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[2 * v10];
  EntryCount = v12[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v14 = *key;
    v12[1].SizeMask = 0i64;
LABEL_19:
    v12[1].EntryCount = -1i64;
    goto LABEL_20;
  }
  v15 = v10;
  do
    v15 = v11->SizeMask & (v15 + 1);
  while ( v11[2 * v15 + 1].EntryCount != -2i64 );
  v16 = (__int64)&v11[2 * v15 + 1];
  v17 = v12[1].SizeMask;
  if ( v17 != v10 )
  {
    for ( i = &v11[2 * v17 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
      ;
    if ( v16 )
    {
      *(_QWORD *)v16 = EntryCount;
      *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
      *(Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *)(v16 + 16) = v12[2];
    }
    i->EntryCount = v15;
    v14 = *key;
    goto LABEL_19;
  }
  if ( v16 )
  {
    *(_QWORD *)v16 = EntryCount;
    *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
    *(Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *)(v16 + 16) = v12[2];
  }
  v14 = *key;
  v12[1].EntryCount = v15;
LABEL_20:
  v19.EntryCount = (unsigned __int64)v14;
  LOBYTE(v19.SizeMask) = 0;
  v12[1].SizeMask = v10;
  v12[2] = v19;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::add<Scaleform::GFx::FontManager::NodePtr>(
        Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *this,
        void *pmemAddr,
        const Scaleform::GFx::FontManager::NodePtr *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *pTable; // r10
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v9; // rdx
  unsigned __int64 EntryCount; // r11
  Scaleform::GFx::FontManager::NodePtr v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int64 SizeMask; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *i; // r8

  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = &this->pTable[2 * v7];
  EntryCount = v9[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v9[1].EntryCount = -1i64;
    v9[1].SizeMask = 0i64;
    v11 = *key;
  }
  else
  {
    v12 = v7;
    do
      v12 = pTable->SizeMask & (v12 + 1);
    while ( pTable[2 * v12 + 1].EntryCount != -2i64 );
    v13 = (__int64)&pTable[2 * v12 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v13 )
      {
        *(_QWORD *)v13 = EntryCount;
        *(_QWORD *)(v13 + 8) = v9[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *)(v13 + 16) = v9[2];
      }
      v11 = *key;
      v9[1].EntryCount = v12;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v13 )
      {
        *(_QWORD *)v13 = EntryCount;
        *(_QWORD *)(v13 + 8) = v9[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *)(v13 + 16) = v9[2];
      }
      i->EntryCount = v12;
      v11 = *key;
      v9[1].EntryCount = -1i64;
    }
  }
  v9[2] = (Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType)v11;
  v9[1].SizeMask = v7;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::findIndexCore<Scaleform::GFx::FontHandle *>(
        Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *this,
        Scaleform::GFx::FontHandle *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v3; // rbx
  unsigned __int64 v7; // rdi
  Scaleform::GFx::FontHandle *v8; // r8
  Scaleform::GFx::FontHandle *EntryCount; // rcx
  Scaleform::Render::Font *pObject; // r9
  _QWORD *v11; // rax
  const char *v12; // rsi
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  const char *v15; // rax

  v3 = &this->pTable[2 * hashValue + 1];
  v7 = hashValue;
  if ( v3->EntryCount == -2i64 || v3->SizeMask != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v3->SizeMask == hashValue )
    {
      v8 = *key;
      EntryCount = (Scaleform::GFx::FontHandle *)v3[1].EntryCount;
      if ( EntryCount == *key )
        return v7;
      pObject = v8->pFont.pObject;
      if ( (((v8->OverridenFontFlags | pObject->Flags) ^ (EntryCount->OverridenFontFlags | EntryCount->pFont.pObject->Flags)) & 0x313) == 0 )
      {
        v11 = (_QWORD *)(v8->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        v12 = (*v11 & 0x7FFFFFFFFFFFFFFFi64) != 0 ? (char *)v11 + 12 : pObject->GetName(v8->pFont.pObject);
        v13 = v3[1].EntryCount;
        v14 = (_QWORD *)(*(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFFCui64);
        v15 = (*v14 & 0x7FFFFFFFFFFFFFFFi64) != 0 ? (char *)v14 + 12 : (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 48) + 8i64))(*(_QWORD *)(v13 + 48));
        if ( !Scaleform::String::CompareNoCase(v15, v12) )
          return v7;
      }
    }
    v7 = v3->EntryCount;
    if ( v3->EntryCount == -1i64 )
      break;
    v3 = &this->pTable[2 * v7 + 1];
  }
  return -1i64;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::findIndexCore<Scaleform::GFx::FontManager::FontKey>(
        Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *this,
        const Scaleform::GFx::FontManager::FontKey *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v3; // rbx
  unsigned __int64 v7; // rdi
  unsigned int FontStyle; // er8
  int v9; // edx
  unsigned __int64 EntryCount; // r9
  _QWORD *v11; // rax
  const char *v12; // rax

  v3 = &this->pTable[2 * hashValue + 1];
  v7 = hashValue;
  if ( v3->EntryCount == -2i64 || v3->SizeMask != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v3->SizeMask == hashValue )
    {
      FontStyle = key->FontStyle;
      v9 = 3;
      EntryCount = v3[1].EntryCount;
      if ( (FontStyle & 0x300) != 0 )
        v9 = 771;
      if ( ((*(_DWORD *)(EntryCount + 24) | *(_DWORD *)(*(_QWORD *)(EntryCount + 48) + 28i64)) & (FontStyle & 0x10 | v9)) == (FontStyle & 0x313) )
      {
        v11 = (_QWORD *)(*(_QWORD *)(EntryCount + 32) & 0xFFFFFFFFFFFFFFFCui64);
        v12 = (*v11 & 0x7FFFFFFFFFFFFFFFi64) != 0 ? (char *)v11 + 12 : (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(EntryCount + 48) + 8i64))(*(_QWORD *)(EntryCount + 48));
        if ( !Scaleform::String::CompareNoCase(v12, key->pFontName) )
          return v7;
      }
    }
    v7 = v3->EntryCount;
    if ( v3->EntryCount == -1i64 )
      break;
    v3 = &this->pTable[2 * v7 + 1];
  }
  return -1i64;
}

void __fastcall Scaleform::GFx::FontHandle::FontHandle(
        Scaleform::GFx::FontHandle *this,
        const Scaleform::GFx::FontHandle *f)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  Scaleform::Render::Text::FontHandle::FontHandle(this, f);
  this->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
  pObject = (Scaleform::RefCountVImpl *)f->pSourceMovieDef.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->pSourceMovieDef.pObject = f->pSourceMovieDef.pObject;
}

void __fastcall Scaleform::GFx::FontHandle::FontHandle(
        Scaleform::GFx::FontHandle *this,
        Scaleform::Render::Text::FontManagerBase *pmanager,
        Scaleform::Render::Font *pfont,
        const char *pfontName,
        unsigned int overridenFontFlags,
        Scaleform::GFx::MovieDef *pdefImpl)
{
  Scaleform::Render::Text::FontHandle::FontHandle(this, pmanager, pfont, pfontName, overridenFontFlags);
  this->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
  if ( pdefImpl )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdefImpl);
  this->pSourceMovieDef.pObject = pdefImpl;
}

void __fastcall Scaleform::Render::Text::FontHandle::FontHandle(
        Scaleform::Render::Text::FontHandle *this,
        const Scaleform::Render::Text::FontHandle *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::Render::Text::FontHandle_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::Text::FontHandle_vtbl *)&Scaleform::Render::Text::FontHandle::`vftable';
  this->pFontManager = __that->pFontManager;
  this->OverridenFontFlags = __that->OverridenFontFlags;
  Scaleform::StringLH::CopyConstructHelper(&this->FontName, &__that->FontName);
  this->FontScaleFactor = __that->FontScaleFactor;
  pObject = (Scaleform::RefCountVImpl *)__that->pFont.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->pFont.pObject = __that->pFont.pObject;
}

void __fastcall Scaleform::GFx::FontManager::FontManager(
        Scaleform::GFx::FontManager *this,
        Scaleform::GFx::MovieImpl *movie,
        Scaleform::GFx::MovieDefImpl *pdefImpl,
        Scaleform::GFx::FontManagerStates *pstate)
{
  this->__vftable = (Scaleform::GFx::FontManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontManager_vtbl *)&Scaleform::GFx::FontManager::`vftable';
  this->CreatedFonts.pTable = 0i64;
  this->FontMovies.Data.Data = 0i64;
  this->FontMovies.Data.Size = 0i64;
  this->FontMovies.Data.Policy.Capacity = 0i64;
  this->pEmptyFont.pObject = 0i64;
  Scaleform::String::String(&this->FontMapEntry.Name);
  this->FontMapEntry.ScaleFactor = 1.0;
  this->FontMapEntry.Flags = MFF_Original;
  this->pIMECandidateFont.pObject = 0i64;
  this->pMovie = movie;
  this->pDefImpl = pdefImpl;
  this->pWeakLib = 0i64;
  this->pState = pstate;
  Scaleform::GFx::FontManager::commonInit(this);
}

void __fastcall Scaleform::GFx::FontManager::FontManager(
        Scaleform::GFx::FontManager *this,
        Scaleform::GFx::ResourceWeakLib *pweakLib,
        Scaleform::GFx::FontManagerStates *pstate)
{
  this->__vftable = (Scaleform::GFx::FontManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontManager_vtbl *)&Scaleform::GFx::FontManager::`vftable';
  this->CreatedFonts.pTable = 0i64;
  this->FontMovies.Data.Data = 0i64;
  this->FontMovies.Data.Size = 0i64;
  this->FontMovies.Data.Policy.Capacity = 0i64;
  this->pEmptyFont.pObject = 0i64;
  Scaleform::String::String(&this->FontMapEntry.Name);
  this->FontMapEntry.ScaleFactor = 1.0;
  this->FontMapEntry.Flags = MFF_Original;
  this->pIMECandidateFont.pObject = 0i64;
  this->pMovie = 0i64;
  this->pDefImpl = 0i64;
  this->pWeakLib = pweakLib;
  this->pState = pstate;
  Scaleform::GFx::FontManager::commonInit(this);
}

void __fastcall Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::~HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>(
        Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *this)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *pTable; // rdi
  volatile int *v5; // rbx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
      {
        v5 = (volatile int *)(*(unsigned __int64 *)((_BYTE *)&pTable[2].EntryCount + v2) & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
        *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v2) = -2i64;
      }
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::FontManager::~FontManager(Scaleform::GFx::FontManager *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  volatile int *v3; // rbx
  Scaleform::RefCountVImpl *v4; // rcx
  unsigned __int64 Size; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *i; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *pTable; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v10; // rax

  this->__vftable = (Scaleform::GFx::FontManager_vtbl *)&Scaleform::GFx::FontManager::`vftable';
  pObject = (Scaleform::RefCountVImpl *)this->pIMECandidateFont.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (volatile int *)(this->FontMapEntry.Name.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  v4 = (Scaleform::RefCountVImpl *)this->pEmptyFont.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  Size = this->FontMovies.Data.Size;
  for ( i = &this->FontMovies.Data.Data[Size - 1]; Size; --Size )
  {
    if ( i->pObject )
      Scaleform::GFx::Resource::Release(i->pObject);
    --i;
  }
  if ( this->FontMovies.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  pTable = this->CreatedFonts.pTable;
  if ( pTable )
  {
    v8 = 0i64;
    v9 = pTable->SizeMask + 1;
    do
    {
      v10 = this->CreatedFonts.pTable;
      if ( v10[v8 + 1].EntryCount != -2i64 )
        v10[v8 + 1].EntryCount = -2i64;
      v8 += 2i64;
      --v9;
    }
    while ( v9 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->CreatedFonts.pTable);
    this->CreatedFonts.pTable = 0i64;
  }
  this->__vftable = (Scaleform::GFx::FontManager_vtbl *)&Scaleform::Render::Text::FontManagerBase::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

bool __fastcall Scaleform::GFx::FontManager::NodePtr::operator==(
        Scaleform::GFx::FontManager::NodePtr *this,
        const Scaleform::GFx::FontManager::NodePtr *other)
{
  Scaleform::GFx::FontHandle *pNode; // r8
  _QWORD *v5; // rax
  const char *v6; // rbx
  _QWORD *v7; // rax
  const char *v8; // rax

  pNode = other->pNode;
  if ( this->pNode == other->pNode )
    return 1;
  if ( (((this->pNode->OverridenFontFlags | this->pNode->pFont.pObject->Flags) ^ (pNode->OverridenFontFlags | pNode->pFont.pObject->Flags)) & 0x313) != 0 )
    return 0;
  v5 = (_QWORD *)(pNode->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v6 = (*v5 & 0x7FFFFFFFFFFFFFFFi64) != 0 ? (char *)v5 + 12 : pNode->pFont.pObject->GetName(pNode->pFont.pObject);
  v7 = (_QWORD *)(this->pNode->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v8 = (*v7 & 0x7FFFFFFFFFFFFFFFi64) != 0 ? (char *)v7 + 12 : this->pNode->pFont.pObject->GetName(this->pNode->pFont.pObject);
  return !Scaleform::String::CompareNoCase(v8, v6);
}

void __fastcall Scaleform::GFx::AddSearchInfo(
        Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *psearchInfo,
        const char *str1,
        const char *str2,
        const char *str3,
        const char *str4,
        const char *str5,
        unsigned int flags)
{
  const char *v11; // rax
  char *pData; // rdx
  Scaleform::StringBuffer v13; // [rsp+20h] [rbp-38h] BYREF

  if ( psearchInfo )
  {
    Scaleform::StringBuffer::StringBuffer(&v13, Scaleform::Memory::pGlobalHeap);
    Scaleform::StringBuffer::AppendString(&v13, str1, -1i64);
    Scaleform::StringBuffer::AppendString(&v13, str2, -1i64);
    Scaleform::StringBuffer::AppendString(&v13, str3, -1i64);
    Scaleform::StringBuffer::AppendString(&v13, str4, -1i64);
    Scaleform::StringBuffer::AppendString(&v13, str5, -1i64);
    v11 = Scaleform::GFx::FontFlagsToString(flags);
    Scaleform::StringBuffer::AppendString(&v13, v11, -1i64);
    pData = (char *)&pnewText;
    if ( v13.pData )
      pData = v13.pData;
    Scaleform::GFx::AddSearchInfo_2(psearchInfo, pData);
    Scaleform::StringBuffer::~StringBuffer(&v13);
  }
}

void __fastcall Scaleform::GFx::AddSearchInfo_0(
        Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *psearchInfo,
        const char *str1,
        const char *str2,
        const char *str3,
        unsigned int flags1,
        const char *str4,
        const char *str5,
        const char *str6,
        unsigned int flags2)
{
  const char *v13; // rax
  const char *v14; // rax
  char *pData; // rdx
  Scaleform::StringBuffer v16; // [rsp+20h] [rbp-38h] BYREF

  if ( psearchInfo )
  {
    Scaleform::StringBuffer::StringBuffer(&v16, Scaleform::Memory::pGlobalHeap);
    Scaleform::StringBuffer::AppendString(&v16, str1, -1i64);
    Scaleform::StringBuffer::AppendString(&v16, str2, -1i64);
    Scaleform::StringBuffer::AppendString(&v16, str3, -1i64);
    v13 = Scaleform::GFx::FontFlagsToString(flags1);
    Scaleform::StringBuffer::AppendString(&v16, v13, -1i64);
    Scaleform::StringBuffer::AppendString(&v16, str4, -1i64);
    Scaleform::StringBuffer::AppendString(&v16, str5, -1i64);
    Scaleform::StringBuffer::AppendString(&v16, str6, -1i64);
    v14 = Scaleform::GFx::FontFlagsToString(flags2);
    Scaleform::StringBuffer::AppendString(&v16, v14, -1i64);
    pData = (char *)&pnewText;
    if ( v16.pData )
      pData = v16.pData;
    Scaleform::GFx::AddSearchInfo_2(psearchInfo, pData);
    Scaleform::StringBuffer::~StringBuffer(&v16);
  }
}

void __fastcall Scaleform::GFx::AddSearchInfo_1(
        Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *psearchInfo,
        const char *str1,
        const char *str2,
        const char *str3,
        unsigned int flags,
        const char *str4)
{
  const char *v10; // rax
  char *pData; // rdx
  Scaleform::StringBuffer v12; // [rsp+20h] [rbp-38h] BYREF

  if ( psearchInfo )
  {
    Scaleform::StringBuffer::StringBuffer(&v12, Scaleform::Memory::pGlobalHeap);
    Scaleform::StringBuffer::AppendString(&v12, str1, -1i64);
    Scaleform::StringBuffer::AppendString(&v12, str2, -1i64);
    Scaleform::StringBuffer::AppendString(&v12, str3, -1i64);
    v10 = Scaleform::GFx::FontFlagsToString(flags);
    Scaleform::StringBuffer::AppendString(&v12, v10, -1i64);
    Scaleform::StringBuffer::AppendString(&v12, str4, -1i64);
    pData = (char *)&pnewText;
    if ( v12.pData )
      pData = v12.pData;
    Scaleform::GFx::AddSearchInfo_2(psearchInfo, pData);
    Scaleform::StringBuffer::~StringBuffer(&v12);
  }
}

void __fastcall Scaleform::GFx::AddSearchInfo_2(
        Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *psearchInfo,
        const char *line)
{
  int i; // ebx
  void *v5; // rbx
  Scaleform::String v6; // [rsp+40h] [rbp+8h] BYREF

  if ( psearchInfo )
  {
    Scaleform::String::String(&v6, "   ");
    for ( i = 0; i < psearchInfo->Indent; ++i )
      Scaleform::StringBuffer::AppendString(
        &psearchInfo->Info,
        (const char *)((v6.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        *(_QWORD *)(v6.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
    Scaleform::StringBuffer::AppendString(&psearchInfo->Info, line, -1i64);
    Scaleform::StringBuffer::AppendString(&psearchInfo->Info, "\n", -1i64);
    v5 = (void *)(v6.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v6.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
  }
}

void __fastcall Scaleform::GFx::AddSearchInfo_3(
        Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *psearchInfo,
        const char *pfontname,
        unsigned int flags,
        bool fontlib_installed,
        const Scaleform::GFx::MovieDefImpl::SearchInfo *resSearchInfo)
{
  Scaleform::GFx::MovieDefImpl::SearchInfo::SearchStatus Status; // eax
  const char *v9; // rdx
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *pTable; // rax
  Scaleform::HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *p_ImportSearchUrls; // r14
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *v12; // rcx
  __m128i si128; // xmm0
  unsigned __int64 SizeMask; // rdx
  unsigned __int64 v15; // rax
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *v16; // rcx
  __int128 v17; // rdi
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *v18; // rcx
  unsigned __int64 v19; // rax
  Scaleform::HashSet<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *v20; // rcx
  unsigned __int64 v21; // rdx
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *v22; // rcx
  const Scaleform::String *v23; // rbx
  Scaleform::String *v24; // rax
  Scaleform::String *v25; // rax
  const Scaleform::String *v26; // rax
  void *v27; // rbx
  void *v28; // rbx
  void *v29; // rbx
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rax
  void *v32; // rbx
  const char *v33; // rax
  bool v34; // zf
  const char *v35; // rdx
  Scaleform::String v36; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::MsgFormat::Sink r; // [rsp+28h] [rbp-D8h] BYREF
  char *v[2]; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::String v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::String v40; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::String result; // [rsp+68h] [rbp-98h] BYREF
  Scaleform::MsgFormat v42; // [rsp+70h] [rbp-90h] BYREF
  char line[1024]; // [rsp+470h] [rbp+370h] BYREF

  if ( psearchInfo )
  {
    v[0] = (char *)pfontname;
    Status = resSearchInfo->Status;
    if ( resSearchInfo->Status == FoundInResources )
    {
      v36.pData = (Scaleform::String::DataDesc *)Scaleform::GFx::FontFlagsToString(flags);
      r.Type = tDataPtr;
      r.SinkData.pStr = (Scaleform::String *)line;
      r.SinkData.DataPtr.Size = 1024i64;
      Scaleform::MsgFormat::MsgFormat(&v42, &r);
      v9 = "Movie resource: \"{0}\" {1} found.";
    }
    else if ( Status == FoundInResourcesNeedFaux )
    {
      v36.pData = (Scaleform::String::DataDesc *)Scaleform::GFx::FontFlagsToString(flags);
      r.Type = tDataPtr;
      r.SinkData.pStr = (Scaleform::String *)line;
      r.SinkData.DataPtr.Size = 1024i64;
      Scaleform::MsgFormat::MsgFormat(&v42, &r);
      v9 = "Movie resource: \"{0}\" {1} found, requires faux";
    }
    else if ( Status == FoundInResourcesNoGlyphs )
    {
      v36.pData = (Scaleform::String::DataDesc *)Scaleform::GFx::FontFlagsToString(flags);
      r.Type = tDataPtr;
      r.SinkData.pStr = (Scaleform::String *)line;
      r.SinkData.DataPtr.Size = 1024i64;
      Scaleform::MsgFormat::MsgFormat(&v42, &r);
      v9 = "Movie resource: \"{0}\" {1} ref found, requires FontLib/Map/Provider.";
    }
    else
    {
      v36.pData = (Scaleform::String::DataDesc *)Scaleform::GFx::FontFlagsToString(flags);
      r.Type = tDataPtr;
      r.SinkData.pStr = (Scaleform::String *)line;
      r.SinkData.DataPtr.Size = 1024i64;
      Scaleform::MsgFormat::MsgFormat(&v42, &r);
      Scaleform::MsgFormat::Parse(&v42, "Movie resource: \"{0}\" {1} not found.");
      Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)v);
      Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)&v36);
      Scaleform::MsgFormat::FinishFormatD(&v42);
      Scaleform::MsgFormat::~MsgFormat(&v42);
      Scaleform::GFx::AddSearchInfo_2(psearchInfo, line);
      if ( resSearchInfo->Status == FoundInImports )
        goto LABEL_51;
      if ( resSearchInfo->Status != FoundInImportsFontLib )
      {
        v36.pData = (Scaleform::String::DataDesc *)Scaleform::GFx::FontFlagsToString(flags);
        r.Type = tDataPtr;
        r.SinkData.pStr = (Scaleform::String *)line;
        r.SinkData.DataPtr.Size = 1024i64;
        Scaleform::MsgFormat::MsgFormat(&v42, &r);
        Scaleform::MsgFormat::Parse(&v42, "Imports       : \"{0}\" {1} not found.");
        Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)v);
        Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)&v36);
        Scaleform::MsgFormat::FinishFormatD(&v42);
        Scaleform::MsgFormat::~MsgFormat(&v42);
        Scaleform::GFx::AddSearchInfo_2(psearchInfo, line);
        pTable = resSearchInfo->ImportSearchUrls.pTable;
        p_ImportSearchUrls = &resSearchInfo->ImportSearchUrls;
        if ( pTable && pTable->EntryCount )
        {
          Scaleform::String::String(&v36);
          v12 = p_ImportSearchUrls->pTable;
          if ( p_ImportSearchUrls->pTable )
          {
            SizeMask = v12->SizeMask;
            v15 = 0i64;
            v16 = v12 + 1;
            do
            {
              if ( v16->EntryCount != -2i64 )
                break;
              ++v15;
              v16 = (Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *)((char *)v16 + 24);
            }
            while ( v15 <= SizeMask );
            v39[0].HeapTypeBits = (unsigned __int64)&resSearchInfo->ImportSearchUrls;
            v39[1].HeapTypeBits = v15;
            si128 = _mm_load_si128((const __m128i *)v39);
          }
          else
          {
            si128 = 0i64;
          }
          *(__m128i *)&v39[0].pData = si128;
          *(_QWORD *)&v17 = si128.m128i_i64[1];
          *((_QWORD *)&v17 + 1) = si128.m128i_i64[0];
          while ( si128.m128i_i64[0]
               && *(_QWORD *)si128.m128i_i64[0]
               && (__int64)v17 <= *(_QWORD *)(*(_QWORD *)si128.m128i_i64[0] + 8i64) )
          {
            v18 = p_ImportSearchUrls->pTable;
            if ( p_ImportSearchUrls->pTable )
            {
              v21 = v18->SizeMask;
              v19 = 0i64;
              v22 = v18 + 1;
              do
              {
                if ( v22->EntryCount != -2i64 )
                  break;
                ++v19;
                v22 = (Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *)((char *)v22 + 24);
              }
              while ( v19 <= v21 );
              v20 = &resSearchInfo->ImportSearchUrls;
            }
            else
            {
              *(_OWORD *)&r.Type = 0i64;
              v19 = 0i64;
              v20 = 0i64;
            }
            if ( v17 != __PAIR128__((unsigned __int64)v20, v19) )
              Scaleform::String::AppendString(&v36, ", ", -1i64);
            v23 = (const Scaleform::String *)(*(_QWORD *)si128.m128i_i64[0] + 24 * v17);
            Scaleform::String::String(v39, "\"");
            v25 = Scaleform::String::operator+(v24, &result, v23 + 4);
            v26 = Scaleform::String::operator+(v25, &v40, "\"");
            Scaleform::String::operator+=(&v36, v26);
            v27 = (void *)(v40.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                   (volatile int *)((v40.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                   -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v27);
            v28 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                   (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                   -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v28);
            v29 = (void *)(v39[0].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                   (volatile int *)((v39[0].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                   -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v29);
            v30 = *(_QWORD *)(*(_QWORD *)si128.m128i_i64[0] + 8i64);
            if ( (__int64)v17 <= (__int64)v30 )
            {
              *(_QWORD *)&v17 = v17 + 1;
              if ( (unsigned __int64)v17 <= v30 )
              {
                v31 = (_QWORD *)(*(_QWORD *)si128.m128i_i64[0] + 8 * (v17 + 2 * (v17 + 1)));
                do
                {
                  if ( *v31 != -2i64 )
                    break;
                  *(_QWORD *)&v17 = v17 + 1;
                  v31 += 3;
                }
                while ( (unsigned __int64)v17 <= v30 );
              }
            }
          }
          r.Type = tDataPtr;
          r.SinkData.pStr = (Scaleform::String *)line;
          r.SinkData.DataPtr.Size = 1024i64;
          Scaleform::MsgFormat::MsgFormat(&v42, &r);
          Scaleform::MsgFormat::Parse(&v42, "              : {0}.");
          Scaleform::MsgFormat::FormatD1<Scaleform::StringLH>(&v42, (const Scaleform::StringLH *)&v36);
          Scaleform::MsgFormat::FinishFormatD(&v42);
          Scaleform::MsgFormat::~MsgFormat(&v42);
          Scaleform::GFx::AddSearchInfo_2(psearchInfo, line);
          v32 = (void *)(v36.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                 (volatile int *)((v36.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                 -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v32);
        }
        v33 = Scaleform::GFx::FontFlagsToString(flags);
        v34 = resSearchInfo->Status == FoundInExports;
        v39[0].HeapTypeBits = (unsigned __int64)v33;
        r.Type = tDataPtr;
        r.SinkData.pStr = (Scaleform::String *)line;
        r.SinkData.DataPtr.Size = 1024i64;
        if ( v34 )
        {
          Scaleform::MsgFormat::MsgFormat(&v42, &r);
          v35 = "Exported      : \"{0}\" {1} found.";
        }
        else
        {
          Scaleform::MsgFormat::MsgFormat(&v42, &r);
          v35 = "Exported      : \"{0}\" {1} not found.";
        }
        Scaleform::MsgFormat::Parse(&v42, v35);
        Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)v);
        Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)v39);
        goto LABEL_52;
      }
      if ( !fontlib_installed )
      {
LABEL_51:
        v39[0].HeapTypeBits = (unsigned __int64)Scaleform::GFx::FontFlagsToString(flags);
        r.Type = tDataPtr;
        r.SinkData.pStr = (Scaleform::String *)line;
        r.SinkData.DataPtr.Size = 1024i64;
        Scaleform::MsgFormat::MsgFormat(&v42, &r);
        Scaleform::MsgFormat::Parse(&v42, "Imports       : \"{0}\" {1} found in \"{2}\".");
        Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)v);
        Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)v39);
        Scaleform::MsgFormat::FormatD1<Scaleform::StringLH>(
          &v42,
          (const Scaleform::StringLH *)&resSearchInfo->ImportFoundUrl);
        goto LABEL_52;
      }
      v36.pData = (Scaleform::String::DataDesc *)Scaleform::GFx::FontFlagsToString(flags);
      r.Type = tDataPtr;
      r.SinkData.pStr = (Scaleform::String *)line;
      r.SinkData.DataPtr.Size = 1024i64;
      Scaleform::MsgFormat::MsgFormat(&v42, &r);
      v9 = "Imports       : \"{0}\" {1} import delegates to font library.";
    }
    Scaleform::MsgFormat::Parse(&v42, v9);
    Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)v);
    Scaleform::MsgFormat::FormatD1<char const *>(&v42, (const char *const *)&v36);
LABEL_52:
    Scaleform::MsgFormat::FinishFormatD(&v42);
    Scaleform::MsgFormat::~MsgFormat(&v42);
    Scaleform::GFx::AddSearchInfo_2(psearchInfo, line);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

__int64 __fastcall Scaleform::GFx::FontManagerStates::CheckStateChange(
        Scaleform::GFx::FontManagerStates *this,
        Scaleform::GFx::FontLib *pfontLib,
        Scaleform::GFx::FontMap *pfontMap,
        Scaleform::GFx::FontProvider *pfontProvider,
        Scaleform::GFx::Translator *ptranslator)
{
  unsigned __int8 v5; // di
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rcx

  v5 = 0;
  if ( this->pFontLib.pObject != pfontLib )
  {
    v5 = 1;
    if ( pfontLib )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfontLib);
    pObject = (Scaleform::RefCountVImpl *)this->pFontLib.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFontLib.pObject = pfontLib;
  }
  if ( this->pFontMap.pObject != pfontMap )
  {
    v5 |= 2u;
    if ( pfontMap )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfontMap);
    v11 = (Scaleform::RefCountVImpl *)this->pFontMap.pObject;
    if ( v11 )
      Scaleform::RefCountImpl::Release(v11);
    this->pFontMap.pObject = pfontMap;
  }
  if ( this->pFontProvider.pObject != pfontProvider )
  {
    v5 |= 4u;
    if ( pfontProvider )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfontProvider);
    v12 = (Scaleform::RefCountVImpl *)this->pFontProvider.pObject;
    if ( v12 )
      Scaleform::RefCountImpl::Release(v12);
    this->pFontProvider.pObject = pfontProvider;
  }
  if ( this->pTranslator.pObject != ptranslator )
  {
    v5 |= 8u;
    if ( ptranslator )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)ptranslator);
    v13 = (Scaleform::RefCountVImpl *)this->pTranslator.pObject;
    if ( v13 )
      Scaleform::RefCountImpl::Release(v13);
    this->pTranslator.pObject = ptranslator;
  }
  return v5;
}

void __fastcall Scaleform::GFx::FontManager::CleanCache(Scaleform::GFx::FontManager *this)
{
  Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *p_CreatedFonts; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *pTable; // rcx
  unsigned __int64 v3; // rax
  Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *v4; // r9
  unsigned __int64 SizeMask; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v6; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v7; // rdx
  unsigned __int64 v8; // r8
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx

  p_CreatedFonts = &this->CreatedFonts;
  pTable = this->CreatedFonts.pTable;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v3 = 0i64;
    v6 = pTable + 1;
    do
    {
      if ( v6->EntryCount != -2i64 )
        break;
      ++v3;
      v6 += 2;
    }
    while ( v3 <= SizeMask );
    v4 = p_CreatedFonts;
  }
  else
  {
    v3 = 0i64;
    v4 = 0i64;
  }
  while ( v4 )
  {
    v7 = v4->pTable;
    if ( !v4->pTable || (signed __int64)v3 > (signed __int64)v7->SizeMask )
      break;
    *(_QWORD *)(v7[2 * v3 + 2].EntryCount + 16) = 0i64;
    v8 = v4->pTable->SizeMask;
    if ( (__int64)v3 <= (__int64)v8 && ++v3 <= v8 )
    {
      v9 = &v4->pTable[2 * v3 + 1];
      do
      {
        if ( v9->EntryCount != -2i64 )
          break;
        ++v3;
        v9 += 2;
      }
      while ( v3 <= v8 );
    }
  }
  if ( p_CreatedFonts->pTable )
  {
    v10 = 0i64;
    v11 = p_CreatedFonts->pTable->SizeMask + 1;
    do
    {
      if ( p_CreatedFonts->pTable[v10 + 1].EntryCount != -2i64 )
        p_CreatedFonts->pTable[v10 + 1].EntryCount = -2i64;
      v10 += 2i64;
      --v11;
    }
    while ( v11 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p_CreatedFonts->pTable);
    p_CreatedFonts->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::FontManager::CleanCacheFor(
        Scaleform::GFx::FontManager *this,
        Scaleform::GFx::MovieDefImpl *pdefImpl)
{
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *pTable; // rax
  Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *p_CreatedFonts; // r8
  unsigned __int64 Index; // rcx
  unsigned __int64 SizeMask; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v7; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > v8; // rax
  unsigned __int64 EntryCount; // r9
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > v10; // r9
  unsigned __int64 v11; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *v12; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::Iterator v13; // [rsp+20h] [rbp-18h] BYREF

  pTable = this->CreatedFonts.pTable;
  p_CreatedFonts = &this->CreatedFonts;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    Index = 0i64;
    v7 = pTable + 1;
    do
    {
      if ( v7->EntryCount != -2i64 )
        break;
      ++Index;
      v7 += 2;
    }
    while ( Index <= SizeMask );
    v13.pHash = p_CreatedFonts;
    v13.Index = Index;
  }
  else
  {
    v13 = 0i64;
    Index = 0i64;
    p_CreatedFonts = 0i64;
  }
  while ( p_CreatedFonts )
  {
    v8.pTable = p_CreatedFonts->pTable;
    if ( !p_CreatedFonts->pTable || (signed __int64)Index > (signed __int64)v8.pTable->SizeMask )
      break;
    EntryCount = v8.pTable[2 * Index + 2].EntryCount;
    if ( *(Scaleform::GFx::MovieDefImpl **)(EntryCount + 56) == pdefImpl )
    {
      *(_QWORD *)(EntryCount + 16) = 0i64;
      Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::Iterator::RemoveAlt<Scaleform::GFx::FontManager::NodePtr>(
        &v13,
        (const Scaleform::GFx::FontManager::NodePtr *)&p_CreatedFonts->pTable[2 * Index + 2]);
      Index = v13.Index;
      p_CreatedFonts = (Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *)v13.pHash;
    }
    v10.pTable = p_CreatedFonts->pTable;
    v11 = p_CreatedFonts->pTable->SizeMask;
    if ( (__int64)Index <= (__int64)v11 )
    {
      v13.Index = ++Index;
      if ( Index <= v11 )
      {
        v12 = &v10.pTable[2 * Index + 1];
        do
        {
          if ( v12->EntryCount != -2i64 )
            break;
          ++Index;
          v12 += 2;
          v13.Index = Index;
        }
        while ( Index <= v11 );
      }
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF> > *this)
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
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

Scaleform::GFx::FontHandle *__fastcall Scaleform::GFx::FontManager::CreateFontHandle(
        Scaleform::GFx::FontManager *this,
        const char *pfontName,
        unsigned int matchFontFlags,
        bool allowListOfFonts,
        Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *searchInfo)
{
  const char *v6; // rdi
  Scaleform::GFx::FontHandle *FontHandleFromName; // rbp
  char *v10; // rax
  char *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rdx
  char destination[128]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = pfontName;
  if ( !allowListOfFonts )
    return Scaleform::GFx::FontManager::CreateFontHandleFromName(this, pfontName, matchFontFlags, searchInfo);
  FontHandleFromName = 0i64;
  do
  {
    v10 = strchr(v6, 44);
    v11 = v10;
    if ( v10 )
    {
      v12 = v10 - v6;
      if ( (unsigned __int64)(v10 - v6) > 0x7F )
        continue;
      strncpy_s(destination, 0x7Fui64, v6, v10 - v6);
      if ( v12 >= 0x80 )
      {
        _report_rangecheckfailure(v14, v13);
        JUMPOUT(0x14036204Ci64);
      }
      destination[v12] = 0;
      v15 = destination;
      v6 = v11 + 1;
    }
    else
    {
      v15 = (char *)v6;
    }
    FontHandleFromName = Scaleform::GFx::FontManager::CreateFontHandleFromName(this, v15, matchFontFlags, searchInfo);
    if ( FontHandleFromName )
      return FontHandleFromName;
  }
  while ( v11 );
  return FontHandleFromName;
}

Scaleform::GFx::FontHandle *__fastcall Scaleform::GFx::FontManager::CreateFontHandleFromName(
        Scaleform::GFx::FontManager *this,
        const char *pfontName,
        unsigned int matchFontFlags,
        Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *searchInfo)
{
  char *pData; // r12
  Scaleform::GFx::FontManager *v8; // r13
  unsigned __int64 v9; // rbp
  Scaleform::GFx::FontHandle *v10; // rdi
  Scaleform::GFx::FontHandle *Handle; // rbx
  Scaleform::GFx::FontHandle *v12; // rax
  Scaleform::GFx::FontHandle *v13; // rax
  _QWORD *v14; // rcx
  const char *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned int Flags; // er14
  unsigned __int64 v18; // rax
  Scaleform::GFx::FontResource *v19; // rbx
  Scaleform::Render::Text::FontHandle *v20; // rax
  Scaleform::Render::Text::FontManagerBase *v21; // rdx
  _QWORD *v22; // rcx
  const char *v23; // rcx
  unsigned int v24; // ebx
  unsigned __int8 v25; // r14
  unsigned __int64 v26; // rax
  Scaleform::GFx::FontHandle *key; // [rsp+50h] [rbp-88h] BYREF
  Scaleform::GFx::FontResource *ppfoundFont; // [rsp+58h] [rbp-80h] BYREF
  __int64 v30; // [rsp+60h] [rbp-78h]
  Scaleform::StringBuffer v31; // [rsp+68h] [rbp-70h] BYREF
  int Indent; // [rsp+F8h] [rbp+20h]

  pData = (char *)&pnewText;
  Indent = 0;
  v8 = this;
  if ( searchInfo )
  {
    Indent = searchInfo->Indent;
    Scaleform::GFx::AddSearchInfo_1(searchInfo, "Searching for font: \"", pfontName, "\" ", matchFontFlags, &pnewText);
  }
  ppfoundFont = 0i64;
  v9 = -1i64;
  v10 = Scaleform::GFx::FontManager::FindOrCreateHandle(v8, pfontName, matchFontFlags, &ppfoundFont, searchInfo);
  if ( !v10 )
  {
    if ( (matchFontFlags & 3) != 0 )
    {
      if ( searchInfo )
      {
        ++searchInfo->Indent;
        Scaleform::GFx::AddSearchInfo_1(
          searchInfo,
          "Searching for font: \"",
          pfontName,
          "\" ",
          matchFontFlags & 0xFFFFFFFC,
          &pnewText);
      }
      Handle = Scaleform::GFx::FontManager::FindOrCreateHandle(
                 this,
                 pfontName,
                 matchFontFlags & 0xFFFFFFFC,
                 0i64,
                 searchInfo);
      if ( Handle )
      {
        v12 = (Scaleform::GFx::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                              Scaleform::Memory::pGlobalHeap,
                                              64i64);
        if ( v12 )
        {
          Scaleform::GFx::FontHandle::FontHandle(v12, Handle);
          v10 = v13;
          key = v13;
        }
        else
        {
          v10 = 0i64;
          key = 0i64;
        }
        v10->OverridenFontFlags |= matchFontFlags & 3;
        if ( searchInfo )
        {
          Scaleform::GFx::AddSearchInfo_0(
            searchInfo,
            "Font \"",
            pfontName,
            "\" ",
            matchFontFlags,
            " will be generated from \"",
            pfontName,
            "\"",
            matchFontFlags & 0xFFFFFFFC);
          v8 = this;
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)Handle);
          pData = (char *)&pnewText;
        }
        else
        {
          v8 = this;
          v14 = (_QWORD *)(v10->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( (*v14 & 0x7FFFFFFFFFFFFFFFi64) != 0 )
            v15 = (char *)v14 + 12;
          else
            v15 = v10->pFont.pObject->GetName(v10->pFont.pObject);
          v16 = -1i64;
          Flags = v10->pFont.pObject->Flags;
          LODWORD(v30) = ((unsigned __int8)Flags | (unsigned __int8)v10->OverridenFontFlags) & 3;
          do
            ++v16;
          while ( v15[v16] );
          v18 = Scaleform::String::BernsteinHashFunctionCIS(v15, v16, 0x1505ui64);
          Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::add<Scaleform::GFx::FontHandle *>(
            &this->CreatedFonts,
            &this->CreatedFonts,
            &key,
            v18 ^ ((unsigned __int8)v30 | (unsigned __int8)Flags) & 3);
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)Handle);
          pData = (char *)&pnewText;
        }
        goto LABEL_21;
      }
      pData = (char *)&pnewText;
    }
    v8 = this;
  }
LABEL_21:
  if ( searchInfo )
    searchInfo->Indent = Indent;
  if ( !v10 )
  {
    v19 = ppfoundFont;
    if ( !ppfoundFont )
      goto LABEL_42;
    if ( searchInfo )
    {
      Scaleform::StringBuffer::StringBuffer(&v31, Scaleform::Memory::pGlobalHeap);
      Scaleform::StringBuffer::AppendString(&v31, "Empty font: \"", -1i64);
      Scaleform::StringBuffer::AppendString(&v31, pfontName, -1i64);
      Scaleform::StringBuffer::AppendString(&v31, "\" is created", -1i64);
      if ( v31.pData )
        pData = v31.pData;
      Scaleform::GFx::AddSearchInfo_2(searchInfo, pData);
      Scaleform::StringBuffer::~StringBuffer(&v31);
    }
    v20 = (Scaleform::Render::Text::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   64i64);
    v10 = (Scaleform::GFx::FontHandle *)v20;
    if ( v20 )
    {
      v21 = v8;
      if ( searchInfo )
        v21 = 0i64;
      Scaleform::Render::Text::FontHandle::FontHandle(v20, v21, v19->pFont.pObject, pfontName, 0);
      key = v10;
      v10->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
      v10->pSourceMovieDef.pObject = 0i64;
    }
    else
    {
      v10 = 0i64;
      key = 0i64;
    }
    if ( !searchInfo )
    {
      v22 = (_QWORD *)(v10->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( (*v22 & 0x7FFFFFFFFFFFFFFFi64) != 0 )
        v23 = (char *)v22 + 12;
      else
        v23 = v10->pFont.pObject->GetName(v10->pFont.pObject);
      v24 = v10->pFont.pObject->Flags;
      v25 = (v24 | v10->OverridenFontFlags) & 3;
      do
        ++v9;
      while ( v23[v9] );
      v26 = Scaleform::String::BernsteinHashFunctionCIS(v23, v9, 0x1505ui64);
      Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::add<Scaleform::GFx::FontHandle *>(
        &v8->CreatedFonts,
        &v8->CreatedFonts,
        &key,
        v26 ^ (v25 | (unsigned __int8)v24) & 3);
    }
    if ( !v10 )
LABEL_42:
      Scaleform::GFx::AddSearchInfo_2(searchInfo, "Font not found.");
  }
  return v10;
}

Scaleform::GFx::FontHandle *__fastcall Scaleform::GFx::FontManager::FindOrCreateHandle(
        Scaleform::GFx::FontManager *this,
        const char *pfontName,
        unsigned int matchFontFlags,
        Scaleform::GFx::FontResource **ppfoundFont,
        Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *searchInfo)
{
  Scaleform::GFx::FontHandle *v5; // rsi
  Scaleform::GFx::FontHandle *v6; // rdi
  unsigned int v8; // er14
  Scaleform::GFx::FontManager *v9; // r15
  Scaleform::GFx::FontManagerStates *pState; // rax
  _QWORD *v11; // r11
  Scaleform::GFx::FontMap *pObject; // rdx
  Scaleform::GFx::FontHandle *v13; // rcx
  Scaleform::RefCountVImpl **p_pIMECandidateFont; // rbx
  _QWORD *v15; // rax
  const char *v16; // rax
  Scaleform::GFx::MovieDefImpl::SearchInfo *p_resSearchInfo; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  signed __int64 v20; // rax
  Scaleform::GFx::FontHandle **v21; // rbx
  Scaleform::GFx::FontHandle *v22; // rax
  Scaleform::GFx::MovieDefImpl *pDefImpl; // rcx
  Scaleform::GFx::FontResource *RegisteredFont; // rbx
  Scaleform::GFx::MovieImpl *pMovie; // rcx
  const char *v26; // rax
  char *pData; // rdx
  Scaleform::Render::Font *v28; // rcx
  Scaleform::Render::Text::FontHandle *v29; // rax
  Scaleform::RefCountVImpl *v30; // r14
  Scaleform::Render::Text::FontManagerBase *v31; // rdx
  Scaleform::RefCountVImpl **v32; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *p_CreatedFonts; // r14
  Scaleform::GFx::FontHandle **v34; // rdx
  _QWORD *v35; // rcx
  char *v36; // rcx
  unsigned int v37; // ebx
  unsigned __int8 v38; // r15
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  signed __int64 v41; // rax
  unsigned int flags; // er14
  const char *v43; // rbx
  float ScaleFactor; // xmm6_4
  int v45; // er15
  Scaleform::GFx::FontMap::MapFontFlags v46; // er14
  char *v47; // rcx
  Scaleform::GFx::FontMap::MapFontFlags v48; // eax
  Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *v49; // r14
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  signed __int64 v52; // rax
  Scaleform::GFx::FontHandle *v53; // r10
  Scaleform::GFx::FontHandle *v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  signed __int64 v57; // rax
  Scaleform::GFx::FontHandle *v58; // rax
  Scaleform::GFx::FontHandle *v59; // rax
  _QWORD *v60; // r11
  __int64 v61; // r10
  Scaleform::GFx::FontManagerStates *v62; // rax
  Scaleform::GFx::StateBag *v63; // rcx
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rax
  signed __int64 v66; // rax
  Scaleform::RefCountVImpl **v67; // rbx
  Scaleform::Render::Text::FontHandle *v68; // rax
  Scaleform::RefCountVImpl *pMovieDef; // rbx
  Scaleform::GFx::FontManager *v70; // rdx
  Scaleform::Render::Text::FontHandle *v71; // rax
  Scaleform::GFx::FontManager *v72; // rdx
  Scaleform::RefCountVImpl *v73; // rbx
  const char *v74; // rax
  char *v75; // rdx
  char *v76; // r15
  Scaleform::GFx::MovieDefImpl *v77; // rax
  Scaleform::GFx::ResourceWeakLib *pWeakLib; // r9
  Scaleform::GFx::FontResource *FontResource; // rbx
  const char *v80; // rax
  char *v81; // rdx
  Scaleform::Render::Text::FontHandle *v82; // rax
  Scaleform::GFx::FontManager *v83; // rdx
  const char *v84; // rax
  char *v85; // rdx
  unsigned int v86; // er14
  __int64 v87; // r10
  Scaleform::GFx::FontManagerStates *v88; // rax
  Scaleform::GFx::StateBag *v89; // rdx
  Scaleform::Render::Text::FontHandle *v90; // rax
  Scaleform::GFx::FontManager *v91; // rdx
  Scaleform::RefCountVImpl *v92; // rbx
  const char *v93; // rax
  Scaleform::GFx::FontHandle **v94; // rdx
  _QWORD *v95; // rcx
  const char *v96; // rcx
  unsigned int v97; // esi
  unsigned __int8 v98; // bl
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // rax
  void *v101; // rbx
  unsigned int fontFlags; // [rsp+40h] [rbp-C0h]
  Scaleform::GFx::FontHandle *v104; // [rsp+48h] [rbp-B8h] BYREF
  int v105; // [rsp+50h] [rbp-B0h]
  char *str2; // [rsp+58h] [rbp-A8h]
  Scaleform::GFx::FontHandle **v107; // [rsp+60h] [rbp-A0h]
  _QWORD *v108; // [rsp+68h] [rbp-98h]
  Scaleform::GFx::FontLib::FontResult v109; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::GFx::MovieDefImpl::SearchInfo *v110; // [rsp+80h] [rbp-80h]
  Scaleform::StringBuffer v111; // [rsp+88h] [rbp-78h] BYREF
  Scaleform::GFx::FontProvider *pprovider; // [rsp+B8h] [rbp-48h]
  Scaleform::GFx::MovieDef *ppsrcMovieDef; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::MovieDefImpl::SearchInfo resSearchInfo; // [rsp+C8h] [rbp-38h] BYREF
  Scaleform::GFx::FontMap *v115; // [rsp+E0h] [rbp-20h]
  Scaleform::GFx::FontManager::FontKey key; // [rsp+E8h] [rbp-18h] BYREF
  Scaleform::GFx::FontManager::FontKey v117; // [rsp+F8h] [rbp-8h] BYREF
  Scaleform::GFx::FontManager::FontKey v118; // [rsp+108h] [rbp+8h] BYREF
  Scaleform::GFx::FontManager::FontKey v119; // [rsp+118h] [rbp+18h] BYREF
  char v121; // [rsp+1A8h] [rbp+A8h]
  unsigned int overridenFontFlags; // [rsp+1B0h] [rbp+B0h]

  overridenFontFlags = matchFontFlags;
  v5 = 0i64;
  v6 = 0i64;
  v8 = matchFontFlags;
  v9 = this;
  pState = this->pState;
  key.pFontName = pfontName;
  key.FontStyle = matchFontFlags;
  v104 = 0i64;
  v11 = &pState->pFontLib.pObject->__vftable;
  pObject = pState->pFontMap.pObject;
  pprovider = pState->pFontProvider.pObject;
  v108 = v11;
  v115 = pObject;
  v105 = 0;
  v107 = 0i64;
  resSearchInfo.ImportSearchUrls.pTable = 0i64;
  Scaleform::String::String(&resSearchInfo.ImportFoundUrl);
  v13 = v9->pIMECandidateFont.pObject;
  p_pIMECandidateFont = (Scaleform::RefCountVImpl **)&v9->pIMECandidateFont;
  v110 = 0i64;
  v121 = 0;
  if ( v13 )
  {
    v15 = (_QWORD *)(v13->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v16 = (*v15 & 0x7FFFFFFFFFFFFFFFi64) != 0 ? (char *)v15 + 12 : (const char *)((__int64 (__fastcall *)(Scaleform::Render::Font *, __int64))v13->pFont.pObject->GetName)(
                                                                                   v13->pFont.pObject,
                                                                                   0x7FFFFFFFFFFFFFFFi64);
    if ( !Scaleform::String::CompareNoCase(v16, pfontName) )
    {
      Scaleform::Render::RenderBuffer::AddRef(*p_pIMECandidateFont);
      v5 = (Scaleform::GFx::FontHandle *)*p_pIMECandidateFont;
      goto LABEL_185;
    }
  }
  while ( 1 )
  {
    if ( searchInfo )
    {
      ++v105;
      p_resSearchInfo = &resSearchInfo;
      ++searchInfo->Indent;
      v110 = &resSearchInfo;
    }
    else
    {
      if ( v9->CreatedFonts.pTable )
      {
        v18 = -1i64;
        do
          ++v18;
        while ( pfontName[v18] );
        v19 = Scaleform::String::BernsteinHashFunctionCIS(pfontName, v18, 0x1505ui64);
        v20 = Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::findIndexCore<Scaleform::GFx::FontManager::FontKey>(
                &v9->CreatedFonts,
                &key,
                v9->CreatedFonts.pTable->SizeMask & (v19 ^ overridenFontFlags & 3));
        if ( v20 >= 0 )
        {
          v21 = (Scaleform::GFx::FontHandle **)&v9->CreatedFonts.pTable[2 * v20 + 2];
          if ( v21 )
          {
            if ( (overridenFontFlags & 0x10) != 0 )
              goto LABEL_50;
            v22 = *v21;
            if ( ((LOBYTE((*v21)->OverridenFontFlags) | LOBYTE((*v21)->pFont.pObject->Flags)) & 0x10) == 0 )
              goto LABEL_50;
            if ( *((_BYTE *)v21 + 8) )
              goto LABEL_172;
            v107 = v21;
          }
        }
      }
      p_resSearchInfo = v110;
      v8 = overridenFontFlags;
    }
    pDefImpl = v9->pDefImpl;
    if ( pDefImpl )
      RegisteredFont = pDefImpl->GetFontResource(pDefImpl, pfontName, v8, p_resSearchInfo);
    else
      RegisteredFont = 0i64;
    Scaleform::GFx::AddSearchInfo_3(searchInfo, pfontName, v8, v9->pState->pFontLib.pObject != 0i64, &resSearchInfo);
    ppsrcMovieDef = 0i64;
    if ( !RegisteredFont )
    {
      pMovie = v9->pMovie;
      if ( !pMovie )
        goto LABEL_39;
      RegisteredFont = Scaleform::GFx::MovieImpl::FindRegisteredFont(pMovie, pfontName, v8, &ppsrcMovieDef);
      if ( !RegisteredFont )
      {
        if ( searchInfo )
        {
          Scaleform::StringBuffer::StringBuffer(&v111, Scaleform::Memory::pGlobalHeap);
          Scaleform::StringBuffer::AppendString(&v111, "Registered fonts: \"", -1i64);
          Scaleform::StringBuffer::AppendString(&v111, pfontName, -1i64);
          Scaleform::StringBuffer::AppendString(&v111, "\"", -1i64);
          v26 = Scaleform::GFx::FontFlagsToString(v8);
          Scaleform::StringBuffer::AppendString(&v111, v26, -1i64);
          Scaleform::StringBuffer::AppendString(&v111, " not found.", -1i64);
          pData = (char *)&pnewText;
          if ( v111.pData )
            pData = v111.pData;
          Scaleform::GFx::AddSearchInfo_2(searchInfo, pData);
          Scaleform::StringBuffer::~StringBuffer(&v111);
        }
        goto LABEL_39;
      }
    }
    v28 = RegisteredFont->pFont.pObject;
    if ( (v28->Flags & 0x40) != 0 )
      goto LABEL_39;
    if ( (v8 & 3) != 0 && !v28->HasVectorOrRasterGlyphs(v28) )
      break;
    v29 = (Scaleform::Render::Text::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   64i64);
    v6 = (Scaleform::GFx::FontHandle *)v29;
    if ( v29 )
    {
      v30 = (Scaleform::RefCountVImpl *)ppsrcMovieDef;
      v31 = v9;
      if ( searchInfo )
        v31 = 0i64;
      Scaleform::Render::Text::FontHandle::FontHandle(v29, v31, RegisteredFont->pFont.pObject, pfontName, 0);
      v6->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
      if ( v30 )
        Scaleform::Render::RenderBuffer::AddRef(v30);
      v6->pSourceMovieDef.pObject = (Scaleform::GFx::MovieDef *)v30;
      v104 = v6;
    }
    else
    {
      v6 = 0i64;
      v104 = 0i64;
    }
LABEL_39:
    v32 = (Scaleform::RefCountVImpl **)v107;
    if ( v107 )
    {
      if ( !v6 )
      {
        *((_BYTE *)v107 + 8) = 1;
        Scaleform::Render::RenderBuffer::AddRef(*v32);
        v5 = *v107;
        goto LABEL_185;
      }
      p_CreatedFonts = &v9->CreatedFonts;
      v34 = v107;
      (*v107)->pFontManager = 0i64;
      Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::RemoveAlt<Scaleform::GFx::FontHandle *>(
        &v9->CreatedFonts,
        v34);
      if ( !v9->CreatedFonts.pTable )
        goto LABEL_51;
      v35 = (_QWORD *)(v6->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      v36 = (*v35 & 0x7FFFFFFFFFFFFFFFi64) != 0 ? (char *)v35 + 12 : (char *)v6->pFont.pObject->GetName(v6->pFont.pObject);
      v37 = v6->pFont.pObject->Flags;
      v38 = (v37 | v6->OverridenFontFlags) & 3;
      v39 = -1i64;
      do
        ++v39;
      while ( v36[v39] );
      v40 = Scaleform::String::BernsteinHashFunctionCIS(v36, v39, 0x1505ui64);
      v41 = Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::findIndexCore<Scaleform::GFx::FontHandle *>(
              p_CreatedFonts,
              &v104,
              p_CreatedFonts->pTable->SizeMask & (v40 ^ (v38 | (unsigned __int8)v37) & 3));
      if ( v41 >= 0 )
      {
        v107 = (Scaleform::GFx::FontHandle **)&p_CreatedFonts->pTable[2 * v41 + 2];
        if ( v107 )
        {
          v6->pFontManager = 0i64;
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v6);
          v21 = v107;
LABEL_50:
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*v21);
          v5 = *v21;
          goto LABEL_185;
        }
      }
      else
      {
LABEL_51:
        v107 = 0i64;
      }
    }
    flags = overridenFontFlags;
    v43 = pfontName;
    str2 = (char *)pfontName;
    ScaleFactor = *(float *)&FLOAT_1_0;
    fontFlags = overridenFontFlags;
    v45 = 0;
    if ( v6 )
      goto LABEL_116;
    if ( v115 )
    {
      if ( Scaleform::GFx::FontMap::GetFontMapping(v115, &this->FontMapEntry, pfontName) )
      {
        v46 = this->FontMapEntry.Flags;
        v47 = (char *)((this->FontMapEntry.Name.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
        str2 = v47;
        if ( v46 == MFF_Original )
          flags = overridenFontFlags;
        else
          flags = overridenFontFlags & 0xFFFFFFFC | v46 & 0xFFFFFFF3;
        v48 = this->FontMapEntry.Flags;
        fontFlags = flags;
        ScaleFactor = this->FontMapEntry.ScaleFactor;
        if ( (v48 & 0xC) != 0 )
          v45 = v48 >> 2;
        v45 = this->FontMapEntry.Flags & 0x20 | v45 & 3;
        if ( searchInfo )
        {
          Scaleform::GFx::AddSearchInfo(
            searchInfo,
            "Applying FontMap: \"",
            pfontName,
            "\"  mapped to \"",
            v47,
            "\"",
            flags);
          v43 = str2;
        }
        else
        {
          v117.FontStyle = flags;
          v49 = &this->CreatedFonts;
          v117.pFontName = v47;
          if ( this->CreatedFonts.pTable )
          {
            v50 = -1i64;
            do
              ++v50;
            while ( v47[v50] );
            v51 = Scaleform::String::BernsteinHashFunctionCIS(v47, v50, 0x1505ui64);
            v52 = Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::findIndexCore<Scaleform::GFx::FontManager::FontKey>(
                    v49,
                    &v117,
                    v49->pTable->SizeMask & (v51 ^ fontFlags & 3));
            if ( v52 >= 0 )
            {
              v21 = (Scaleform::GFx::FontHandle **)&v49->pTable[2 * v52 + 2];
              if ( v21 )
              {
                v22 = *v21;
                if ( (*v21)->FontScaleFactor == ScaleFactor )
                  goto LABEL_172;
                v53 = (Scaleform::GFx::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                      Scaleform::Memory::pGlobalHeap,
                                                      64i64);
                if ( v53 )
                {
                  Scaleform::GFx::FontHandle::FontHandle(
                    v53,
                    this,
                    (*v21)->pFont.pObject,
                    pfontName,
                    overridenFontFlags,
                    (*v21)->pSourceMovieDef.pObject);
                  v6 = v54;
                  v104 = v54;
                }
                else
                {
                  v6 = 0i64;
                  v104 = 0i64;
                }
                v6->FontScaleFactor = ScaleFactor;
              }
            }
          }
          v118.FontStyle = fontFlags;
          v118.pFontName = pfontName;
          if ( v49->pTable )
          {
            v55 = -1i64;
            do
              ++v55;
            while ( pfontName[v55] );
            v56 = Scaleform::String::BernsteinHashFunctionCIS(pfontName, v55, 0x1505ui64);
            v57 = Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::findIndexCore<Scaleform::GFx::FontManager::FontKey>(
                    v49,
                    &v118,
                    v49->pTable->SizeMask & (v56 ^ fontFlags & 3));
            if ( v57 >= 0 )
            {
              v21 = (Scaleform::GFx::FontHandle **)&v49->pTable[2 * v57 + 2];
              if ( v21 )
              {
                v22 = *v21;
                if ( (*v21)->FontScaleFactor == ScaleFactor )
                {
LABEL_172:
                  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v22);
                  v5 = *v21;
                  goto LABEL_185;
                }
                v58 = (Scaleform::GFx::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                      Scaleform::Memory::pGlobalHeap,
                                                      64i64);
                if ( v58 )
                {
                  Scaleform::GFx::FontHandle::FontHandle(
                    v58,
                    this,
                    (*v21)->pFont.pObject,
                    pfontName,
                    overridenFontFlags,
                    (*v21)->pSourceMovieDef.pObject);
                  v6 = v59;
                  v104 = v59;
                }
                else
                {
                  v6 = 0i64;
                  v104 = 0i64;
                }
                v6->FontScaleFactor = ScaleFactor;
              }
            }
          }
          if ( v6 )
            goto LABEL_116;
          flags = fontFlags;
          v43 = str2;
        }
      }
      else
      {
        v43 = pfontName;
      }
    }
    v60 = v108;
    if ( v108 )
    {
      v61 = *v108;
      v109 = 0i64;
      v62 = this->pState;
      v63 = &v62->Scaleform::GFx::StateBag;
      if ( !v62 )
        v63 = 0i64;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, Scaleform::GFx::FontLib::FontResult *, const char *, _QWORD, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::StateBag *, Scaleform::GFx::ResourceWeakLib *))(v61 + 8))(
             v108,
             &v109,
             v43,
             flags,
             this->pDefImpl,
             v63,
             this->pWeakLib) )
      {
        if ( v45 )
        {
          v119.pFontName = pfontName;
          v119.FontStyle = v45;
          if ( this->CreatedFonts.pTable )
          {
            v64 = -1i64;
            do
              ++v64;
            while ( pfontName[v64] );
            v65 = Scaleform::String::BernsteinHashFunctionCIS(pfontName, v64, 0x1505ui64);
            v66 = Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::findIndexCore<Scaleform::GFx::FontManager::FontKey>(
                    &this->CreatedFonts,
                    &v119,
                    this->CreatedFonts.pTable->SizeMask & (v65 ^ v45 & 3));
            if ( v66 >= 0 )
            {
              v67 = (Scaleform::RefCountVImpl **)&this->CreatedFonts.pTable[2 * v66 + 2];
              if ( v67 )
              {
                Scaleform::Render::RenderBuffer::AddRef(*v67);
                v5 = (Scaleform::GFx::FontHandle *)*v67;
                Scaleform::GFx::FontLib::FontResult::~FontResult(&v109);
                goto LABEL_185;
              }
            }
          }
          v68 = (Scaleform::Render::Text::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         64i64);
          v6 = (Scaleform::GFx::FontHandle *)v68;
          if ( v68 )
          {
            pMovieDef = (Scaleform::RefCountVImpl *)v109.pMovieDef;
            v70 = this;
            if ( searchInfo )
              v70 = 0i64;
            Scaleform::Render::Text::FontHandle::FontHandle(v68, v70, v109.pFontResource->pFont.pObject, pfontName, v45);
            v6->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
            if ( pMovieDef )
              Scaleform::Render::RenderBuffer::AddRef(pMovieDef);
            v6->pSourceMovieDef.pObject = (Scaleform::GFx::MovieDef *)pMovieDef;
            v104 = v6;
          }
          else
          {
            v6 = 0i64;
            v104 = 0i64;
          }
          v6->FontScaleFactor = ScaleFactor;
          Scaleform::GFx::AddSearchInfo_1(searchInfo, "Searching FontLib: \"", pfontName, "\" ", v45, " found.");
        }
        else
        {
          v71 = (Scaleform::Render::Text::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         64i64);
          v6 = (Scaleform::GFx::FontHandle *)v71;
          if ( v71 )
          {
            v72 = this;
            v73 = (Scaleform::RefCountVImpl *)v109.pMovieDef;
            if ( searchInfo )
              v72 = 0i64;
            Scaleform::Render::Text::FontHandle::FontHandle(v71, v72, v109.pFontResource->pFont.pObject, pfontName, 0);
            v6->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
            if ( v73 )
              Scaleform::Render::RenderBuffer::AddRef(v73);
            v6->pSourceMovieDef.pObject = (Scaleform::GFx::MovieDef *)v73;
            v43 = str2;
            v104 = v6;
          }
          else
          {
            v6 = 0i64;
            v104 = 0i64;
          }
          v6->FontScaleFactor = ScaleFactor;
          Scaleform::GFx::AddSearchInfo_1(searchInfo, "Searching FontLib: \"", v43, "\" ", flags, " found.");
        }
      }
      else if ( searchInfo )
      {
        Scaleform::StringBuffer::StringBuffer(&v111, Scaleform::Memory::pGlobalHeap);
        Scaleform::StringBuffer::AppendString(&v111, "Searching FontLib: \"", -1i64);
        Scaleform::StringBuffer::AppendString(&v111, v43, -1i64);
        Scaleform::StringBuffer::AppendString(&v111, "\" ", -1i64);
        v74 = Scaleform::GFx::FontFlagsToString(flags);
        Scaleform::StringBuffer::AppendString(&v111, v74, -1i64);
        Scaleform::StringBuffer::AppendString(&v111, " not found.", -1i64);
        v75 = (char *)&pnewText;
        if ( v111.pData )
          v75 = v111.pData;
        Scaleform::GFx::AddSearchInfo_2(searchInfo, v75);
        Scaleform::StringBuffer::~StringBuffer(&v111);
      }
      Scaleform::GFx::FontLib::FontResult::~FontResult(&v109);
LABEL_116:
      v60 = v108;
    }
    if ( v121 || !searchInfo )
    {
      if ( v6 )
        goto LABEL_143;
      goto LABEL_125;
    }
    if ( !v6 )
    {
      if ( !v60 && resSearchInfo.Status == FoundInResourcesNoGlyphs )
        Scaleform::GFx::AddSearchInfo_2(searchInfo, "FontLib not installed.");
LABEL_125:
      if ( pprovider )
      {
        v77 = this->pDefImpl;
        if ( v77 )
          pWeakLib = v77->pLoaderImpl.pObject->pWeakResourceLib.pObject;
        else
          pWeakLib = this->pWeakLib;
        v76 = str2;
        FontResource = Scaleform::GFx::FontResource::CreateFontResource(str2, fontFlags, pprovider, pWeakLib);
        if ( FontResource )
        {
          if ( searchInfo )
          {
            Scaleform::StringBuffer::StringBuffer(&v111, Scaleform::Memory::pGlobalHeap);
            Scaleform::StringBuffer::AppendString(&v111, "Searching FontProvider: \"", -1i64);
            Scaleform::StringBuffer::AppendString(&v111, v76, -1i64);
            Scaleform::StringBuffer::AppendString(&v111, "\" ", -1i64);
            v80 = Scaleform::GFx::FontFlagsToString(fontFlags);
            Scaleform::StringBuffer::AppendString(&v111, v80, -1i64);
            Scaleform::StringBuffer::AppendString(&v111, " found.", -1i64);
            v81 = (char *)&pnewText;
            if ( v111.pData )
              v81 = v111.pData;
            Scaleform::GFx::AddSearchInfo_2(searchInfo, v81);
            Scaleform::StringBuffer::~StringBuffer(&v111);
          }
          v82 = (Scaleform::Render::Text::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         64i64);
          v6 = (Scaleform::GFx::FontHandle *)v82;
          if ( v82 )
          {
            v83 = this;
            if ( searchInfo )
              v83 = 0i64;
            Scaleform::Render::Text::FontHandle::FontHandle(v82, v83, FontResource->pFont.pObject, pfontName, 0);
            v104 = v6;
            v6->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
            v6->FontScaleFactor = ScaleFactor;
            v6->pSourceMovieDef.pObject = 0i64;
            Scaleform::GFx::Resource::Release(FontResource);
          }
          else
          {
            MEMORY[0x28] = LODWORD(ScaleFactor);
            v6 = 0i64;
            v104 = 0i64;
            Scaleform::GFx::Resource::Release(FontResource);
          }
        }
        else if ( searchInfo )
        {
          Scaleform::StringBuffer::StringBuffer(&v111, Scaleform::Memory::pGlobalHeap);
          Scaleform::StringBuffer::AppendString(&v111, "Searching FontProvider: \"", -1i64);
          Scaleform::StringBuffer::AppendString(&v111, v76, -1i64);
          Scaleform::StringBuffer::AppendString(&v111, "\" ", -1i64);
          v84 = Scaleform::GFx::FontFlagsToString(fontFlags);
          Scaleform::StringBuffer::AppendString(&v111, v84, -1i64);
          Scaleform::StringBuffer::AppendString(&v111, " not found.", -1i64);
          v85 = (char *)&pnewText;
          if ( v111.pData )
            v85 = v111.pData;
          Scaleform::GFx::AddSearchInfo_2(searchInfo, v85);
          Scaleform::StringBuffer::~StringBuffer(&v111);
        }
LABEL_144:
        if ( v121 )
          goto LABEL_150;
        goto LABEL_145;
      }
LABEL_143:
      v76 = str2;
      goto LABEL_144;
    }
    v76 = str2;
LABEL_145:
    if ( searchInfo )
    {
      if ( v6 )
        goto LABEL_176;
      if ( !pprovider && resSearchInfo.Status == FoundInResourcesNoGlyphs )
        Scaleform::GFx::AddSearchInfo_2(searchInfo, "FontProvider not installed.");
      goto LABEL_151;
    }
LABEL_150:
    if ( v6 )
      goto LABEL_176;
LABEL_151:
    if ( v108 && (fontFlags & 0x10) != 0 )
    {
      v86 = fontFlags & 0xFFFFFFEF;
      v87 = *v108;
      v88 = this->pState;
      v109 = 0i64;
      v89 = &v88->Scaleform::GFx::StateBag;
      if ( !v88 )
        v89 = 0i64;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, Scaleform::GFx::FontLib::FontResult *, char *, _QWORD, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::StateBag *, _QWORD))(v87 + 8))(
             v108,
             &v109,
             v76,
             v86,
             this->pDefImpl,
             v89,
             0i64) )
      {
        v90 = (Scaleform::Render::Text::FontHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       64i64);
        v6 = (Scaleform::GFx::FontHandle *)v90;
        if ( v90 )
        {
          v91 = this;
          v92 = (Scaleform::RefCountVImpl *)v109.pMovieDef;
          if ( searchInfo )
            v91 = 0i64;
          Scaleform::Render::Text::FontHandle::FontHandle(v90, v91, v109.pFontResource->pFont.pObject, pfontName, 0x10u);
          v6->__vftable = (Scaleform::GFx::FontHandle_vtbl *)&Scaleform::GFx::FontHandle::`vftable';
          if ( v92 )
            Scaleform::Render::RenderBuffer::AddRef(v92);
          v6->FontScaleFactor = ScaleFactor;
          v93 = " found.";
          v6->pSourceMovieDef.pObject = (Scaleform::GFx::MovieDef *)v92;
          v104 = v6;
        }
        else
        {
          MEMORY[0x28] = LODWORD(ScaleFactor);
          v93 = " found.";
          v6 = 0i64;
          v104 = 0i64;
        }
      }
      else
      {
        v93 = " not found.";
      }
      Scaleform::GFx::AddSearchInfo_1(searchInfo, "Searching FontLib without [Device] flag: \"", v76, "\" ", v86, v93);
      Scaleform::GFx::FontLib::FontResult::~FontResult(&v109);
      if ( v6 )
      {
LABEL_176:
        if ( searchInfo )
        {
          searchInfo->Indent -= v105;
        }
        else
        {
          v95 = (_QWORD *)(v6->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( (*v95 & 0x7FFFFFFFFFFFFFFFi64) != 0 )
            v96 = (char *)v95 + 12;
          else
            v96 = v6->pFont.pObject->GetName(v6->pFont.pObject);
          v97 = v6->pFont.pObject->Flags;
          v98 = (v97 | v6->OverridenFontFlags) & 3;
          v99 = -1i64;
          do
            ++v99;
          while ( v96[v99] );
          v100 = Scaleform::String::BernsteinHashFunctionCIS(v96, v99, 0x1505ui64);
          Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::add<Scaleform::GFx::FontHandle *>(
            &this->CreatedFonts,
            &this->CreatedFonts,
            &v104,
            v100 ^ ((unsigned __int8)v97 | v98) & 3);
        }
        v5 = v6;
        goto LABEL_185;
      }
    }
    if ( (overridenFontFlags & 0x10) == 0 )
    {
      if ( searchInfo )
        searchInfo->Indent -= v105;
      goto LABEL_185;
    }
    Scaleform::GFx::AddSearchInfo_2(searchInfo, "Searching again without [Device] flag:");
    v9 = this;
    v8 = overridenFontFlags & 0xFFFFFFEF;
    overridenFontFlags = v8;
    key.FontStyle = v8;
    pprovider = 0i64;
    v108 = 0i64;
    v121 = 1;
  }
  if ( ppfoundFont )
    *ppfoundFont = RegisteredFont;
  if ( v107 )
  {
    v94 = v107;
    (*v107)->pFontManager = 0i64;
    Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::RemoveAlt<Scaleform::GFx::FontHandle *>(
      &v9->CreatedFonts,
      v94);
  }
LABEL_185:
  v101 = (void *)(resSearchInfo.ImportFoundUrl.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((resSearchInfo.ImportFoundUrl.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v101);
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::~HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>(&resSearchInfo.ImportSearchUrls);
  return v5;
}

const char *__fastcall Scaleform::GFx::FontFlagsToString(unsigned int matchFontFlags)
{
  const char *result; // rax
  char v2; // al

  if ( !matchFontFlags )
    return Scaleform::GFx::StrFlags[0];
  v2 = matchFontFlags & 3;
  if ( (matchFontFlags & 0x10) != 0 )
  {
    if ( v2 == 3 )
    {
      return Scaleform::GFx::StrFlags[7];
    }
    else if ( (matchFontFlags & 2) != 0 )
    {
      return Scaleform::GFx::StrFlags[5];
    }
    else
    {
      result = Scaleform::GFx::StrFlags[4];
      if ( (matchFontFlags & 1) != 0 )
        return Scaleform::GFx::StrFlags[6];
    }
  }
  else if ( v2 == 3 )
  {
    return Scaleform::GFx::StrFlags[3];
  }
  else if ( (matchFontFlags & 2) != 0 )
  {
    return Scaleform::GFx::StrFlags[1];
  }
  else
  {
    result = Scaleform::GFx::StrFlags[0];
    if ( (matchFontFlags & 1) != 0 )
      return Scaleform::GFx::StrFlags[2];
  }
  return result;
}

Scaleform::GFx::FontHandle *__fastcall Scaleform::GFx::FontManager::GetEmptyFont(Scaleform::GFx::FontManager *this)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this->pEmptyFont.pObject);
  return this->pEmptyFont.pObject;
}

Scaleform::GFx::StateBag_vtbl *__fastcall Scaleform::GFx::FontManagerStates::GetStateAddRef(
        Scaleform::GFx::FontManagerStates *this,
        Scaleform::GFx::State::StateType state)
{
  Scaleform::RefCountVImpl *v3; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  switch ( state )
  {
    case 20:
      v3 = *(Scaleform::RefCountVImpl **)&this->RefCount;
      if ( v3 )
        Scaleform::Render::RenderBuffer::AddRef(v3);
      return *(Scaleform::GFx::StateBag_vtbl **)&this->RefCount;
    case 23:
      v5 = (Scaleform::RefCountVImpl *)this->Scaleform::GFx::StateBag::__vftable;
      if ( v5 )
        Scaleform::Render::RenderBuffer::AddRef(v5);
      return this->Scaleform::GFx::StateBag::__vftable;
    case 22:
      pObject = (Scaleform::RefCountVImpl *)this->pFontLib.pObject;
      if ( pObject )
        Scaleform::Render::RenderBuffer::AddRef(pObject);
      return (Scaleform::GFx::StateBag_vtbl *)this->pFontLib.pObject;
    case 1:
      v7 = (Scaleform::RefCountVImpl *)this->pFontMap.pObject;
      if ( v7 )
        Scaleform::Render::RenderBuffer::AddRef(v7);
      return (Scaleform::GFx::StateBag_vtbl *)this->pFontMap.pObject;
    default:
      return (Scaleform::GFx::StateBag_vtbl *)((__int64 (__fastcall *)(Scaleform::GFx::FontProvider *))this->pFontProvider.pObject->__vftable[1].~RefCountImplCore)(this->pFontProvider.pObject);
  }
}

void __fastcall Scaleform::GFx::FontManager::RemoveFontHandle(
        Scaleform::GFx::FontManager *this,
        Scaleform::GFx::FontHandle *phandle)
{
  Scaleform::GFx::FontHandle *key; // [rsp+38h] [rbp+10h] BYREF

  key = phandle;
  if ( phandle != this->pEmptyFont.pObject )
    Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::RemoveAlt<Scaleform::GFx::FontHandle *>(
      &this->CreatedFonts,
      &key);
}

void __fastcall Scaleform::GFx::FontManager::SetIMECandidateFont(
        Scaleform::GFx::FontManager *this,
        Scaleform::GFx::FontHandle *pfont)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( pfont )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfont);
  pObject = (Scaleform::RefCountVImpl *)this->pIMECandidateFont.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pIMECandidateFont.pObject = pfont;
}

void __fastcall Scaleform::GFx::FontManager::commonInit(Scaleform::GFx::FontManager *this)
{
  Scaleform::GFx::FontData *v2; // rax
  Scaleform::Render::Font *v3; // rax
  Scaleform::Render::Font *v4; // rdi
  Scaleform::GFx::FontResource *v5; // rax
  Scaleform::GFx::Resource *v6; // rax
  Scaleform::GFx::Resource *v7; // rsi
  __int64 v8; // rbx
  Scaleform::RefCountVImpl *v9; // rbp
  Scaleform::RefCountVImpl *pObject; // rcx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = 75;
  v2 = (Scaleform::GFx::FontData *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                     Scaleform::Memory::pGlobalHeap,
                                     this,
                                     136i64,
                                     &v11);
  if ( v2 )
  {
    Scaleform::GFx::FontData::FontData(v2);
    v4 = v3;
  }
  else
  {
    v4 = 0i64;
  }
  v12 = 2;
  v5 = (Scaleform::GFx::FontResource *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                         Scaleform::Memory::pGlobalHeap,
                                         this,
                                         64i64,
                                         &v12);
  if ( v5 )
  {
    Scaleform::GFx::FontResource::FontResource(v5, v4, 0i64);
    v7 = v6;
  }
  else
  {
    v7 = 0i64;
  }
  v8 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         64i64);
  if ( v8 )
  {
    v9 = (Scaleform::RefCountVImpl *)v7[1].__vftable;
    *(_QWORD *)v8 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v8 = &Scaleform::Render::Text::FontHandle::`vftable';
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)(v8 + 16) = 0i64;
    *(_DWORD *)(v8 + 24) = 0;
    Scaleform::StringLH::StringLH((Scaleform::StringLH *)(v8 + 32));
    *(_DWORD *)(v8 + 40) = 1065353216;
    if ( v9 )
      Scaleform::Render::RenderBuffer::AddRef(v9);
    *(_QWORD *)(v8 + 48) = v9;
    *(_QWORD *)v8 = &Scaleform::GFx::FontHandle::`vftable';
    *(_QWORD *)(v8 + 56) = 0i64;
  }
  else
  {
    v8 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->pEmptyFont.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pEmptyFont.pObject = (Scaleform::GFx::FontHandle *)v8;
  if ( v7 )
    Scaleform::GFx::Resource::Release(v7);
  if ( v4 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v4);
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  const Scaleform::GFx::FontManager::NodePtr *v9; // rsi
  Scaleform::GFx::FontHandle *pNode; // rbx
  _QWORD *v11; // rcx
  _BYTE *v12; // rcx
  unsigned int Flags; // ebp
  unsigned __int8 v14; // bl
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // [rsp+70h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > v18; // [rsp+78h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v17 = 2;
    v6 = 0i64;
    v18.pTable = 0i64;
    v18.pTable = (Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v17);
    v18.pTable->EntryCount = 0i64;
    v18.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v18.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::GFx::FontManager::NodePtr *)&this->pTable[v6];
        if ( v9[1].pNode != (Scaleform::GFx::FontHandle *)-2i64 )
        {
          pNode = v9[2].pNode;
          v11 = (_QWORD *)(pNode->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( (*v11 & 0x7FFFFFFFFFFFFFFFi64) != 0 )
            v12 = (char *)v11 + 12;
          else
            v12 = (_BYTE *)((__int64 (__fastcall *)(Scaleform::Render::Font *, __int64))pNode->pFont.pObject->GetName)(
                             pNode->pFont.pObject,
                             0x7FFFFFFFFFFFFFFFi64);
          Flags = pNode->pFont.pObject->Flags;
          v14 = (Flags | pNode->OverridenFontFlags) & 3;
          v15 = -1i64;
          do
            ++v15;
          while ( v12[v15] );
          v16 = Scaleform::String::BernsteinHashFunctionCIS(v12, v15, 0x1505ui64);
          Scaleform::HashSetBase<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp>>::add<Scaleform::GFx::FontManager::NodePtr>(
            &v18,
            pheapAddr,
            v9 + 2,
            v16 ^ (v14 | (unsigned __int8)Flags) & 3);
          v9[1].pNode = (Scaleform::GFx::FontHandle *)-2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v18.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeHashF>>::Clear((Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF> > *)this);
  }
}

