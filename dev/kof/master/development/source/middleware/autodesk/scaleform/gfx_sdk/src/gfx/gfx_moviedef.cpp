#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stringhash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagepacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfielddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_buttondef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontglyphpacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rectpacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"

void * Scaleform::GFx::DataAllocator::OverflowAlloc(unsigned long long bytes); // 0x140342390
Scaleform::GFx::MovieDataDef::MovieDataDef(const Scaleform::GFx::ResourceKey & creationKey, Scaleform::GFx::MovieDataDef::MovieDataType mtype, const char * purl, Scaleform::MemoryHeap * pargHeap, bool debugHeap, unsigned long long memoryArena); // 0x14033CD00
Scaleform::GFx::MovieDataDef::~MovieDataDef(); // 0x14033DA00
Scaleform::GFx::MovieDataDef::DefBindingData::~DefBindingData(); // 0x14033D3C0
bool Scaleform::GFx::MovieDataDef::TranslateFrameString(const Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > & namedFrames, const char * label, unsigned long * frameNumber, bool translateNumbers); // 0x140343830
const Scaleform::String * Scaleform::GFx::MovieDataDef::TranslateNumberToFrameString(const Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > & namedFrames, unsigned long frameNumber, unsigned long * exactFrameNumberForLabel); // 0x140343950
Scaleform::GFx::MovieDataDef::LoadTaskData::LoadTaskData(Scaleform::GFx::MovieDataDef * pdataDef, const char * purl, Scaleform::MemoryHeap * pheap); // 0x14033C700
class Scaleform::Ptr<Scaleform::GFx::SpriteDef>
{
protected:
	Scaleform::GFx::SpriteDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::SpriteDef>(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	Ptr<Scaleform::GFx::SpriteDef>(Scaleform::GFx::SpriteDef *);
	Ptr<Scaleform::GFx::SpriteDef>(Scaleform::Ptr<Scaleform::GFx::SpriteDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::SpriteDef>(Scaleform::Pickable<Scaleform::GFx::SpriteDef>);
	Ptr<Scaleform::GFx::SpriteDef>(Scaleform::GFx::SpriteDef &);
	Ptr<Scaleform::GFx::SpriteDef>();
	~Ptr<Scaleform::GFx::SpriteDef>();
	bool operator==(Scaleform::GFx::SpriteDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	bool operator!=(Scaleform::GFx::SpriteDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & operator=(Scaleform::Pickable<Scaleform::GFx::SpriteDef>);
	const Scaleform::Ptr<Scaleform::GFx::SpriteDef> & operator=(Scaleform::GFx::SpriteDef &);
	const Scaleform::Ptr<Scaleform::GFx::SpriteDef> & operator=(Scaleform::GFx::SpriteDef *);
	const Scaleform::Ptr<Scaleform::GFx::SpriteDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::SpriteDef>);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & SetPtr(Scaleform::GFx::SpriteDef &);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & SetPtr(Scaleform::GFx::SpriteDef *);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::SpriteDef * & GetRawRef();
	Scaleform::GFx::SpriteDef * GetPtr();
	Scaleform::GFx::SpriteDef & operator*();
	Scaleform::GFx::SpriteDef * operator->();
	Scaleform::GFx::SpriteDef * operator class Scaleform::GFx::SpriteDef *();
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & Pick(Scaleform::GFx::SpriteDef *);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & Pick(Scaleform::Pickable<Scaleform::GFx::SpriteDef>);
	Scaleform::Ptr<Scaleform::GFx::SpriteDef> & Pick(Scaleform::Ptr<Scaleform::GFx::SpriteDef> &);
};
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
class Scaleform::Ptr<Scaleform::GFx::ButtonDef>
{
protected:
	Scaleform::GFx::ButtonDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ButtonDef>(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	Ptr<Scaleform::GFx::ButtonDef>(Scaleform::GFx::ButtonDef *);
	Ptr<Scaleform::GFx::ButtonDef>(Scaleform::Ptr<Scaleform::GFx::ButtonDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ButtonDef>(Scaleform::Pickable<Scaleform::GFx::ButtonDef>);
	Ptr<Scaleform::GFx::ButtonDef>(Scaleform::GFx::ButtonDef &);
	Ptr<Scaleform::GFx::ButtonDef>();
	~Ptr<Scaleform::GFx::ButtonDef>();
	bool operator==(Scaleform::GFx::ButtonDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	bool operator!=(Scaleform::GFx::ButtonDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & operator=(Scaleform::Pickable<Scaleform::GFx::ButtonDef>);
	const Scaleform::Ptr<Scaleform::GFx::ButtonDef> & operator=(Scaleform::GFx::ButtonDef &);
	const Scaleform::Ptr<Scaleform::GFx::ButtonDef> & operator=(Scaleform::GFx::ButtonDef *);
	const Scaleform::Ptr<Scaleform::GFx::ButtonDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ButtonDef>);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & SetPtr(Scaleform::GFx::ButtonDef &);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & SetPtr(Scaleform::GFx::ButtonDef *);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ButtonDef * & GetRawRef();
	Scaleform::GFx::ButtonDef * GetPtr();
	Scaleform::GFx::ButtonDef & operator*();
	Scaleform::GFx::ButtonDef * operator->();
	Scaleform::GFx::ButtonDef * operator class Scaleform::GFx::ButtonDef *();
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & Pick(Scaleform::GFx::ButtonDef *);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & Pick(Scaleform::Pickable<Scaleform::GFx::ButtonDef>);
	Scaleform::Ptr<Scaleform::GFx::ButtonDef> & Pick(Scaleform::Ptr<Scaleform::GFx::ButtonDef> &);
};
class Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef>
{
protected:
	Scaleform::GFx::SwfShapeCharacterDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::GFx::SwfShapeCharacterDef *);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>(Scaleform::GFx::SwfShapeCharacterDef &);
	Ptr<Scaleform::GFx::SwfShapeCharacterDef>();
	~Ptr<Scaleform::GFx::SwfShapeCharacterDef>();
	bool operator==(Scaleform::GFx::SwfShapeCharacterDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	bool operator!=(Scaleform::GFx::SwfShapeCharacterDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & operator=(Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>);
	const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & operator=(Scaleform::GFx::SwfShapeCharacterDef &);
	const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & operator=(Scaleform::GFx::SwfShapeCharacterDef *);
	const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & SetPtr(Scaleform::GFx::SwfShapeCharacterDef &);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & SetPtr(Scaleform::GFx::SwfShapeCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::SwfShapeCharacterDef * & GetRawRef();
	Scaleform::GFx::SwfShapeCharacterDef * GetPtr();
	Scaleform::GFx::SwfShapeCharacterDef & operator*();
	Scaleform::GFx::SwfShapeCharacterDef * operator->();
	Scaleform::GFx::SwfShapeCharacterDef * operator class Scaleform::GFx::SwfShapeCharacterDef *();
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & Pick(Scaleform::GFx::SwfShapeCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & Pick(Scaleform::Pickable<Scaleform::GFx::SwfShapeCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> & Pick(Scaleform::Ptr<Scaleform::GFx::SwfShapeCharacterDef> &);
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
Scaleform::GFx::MovieDataDef::LoadTaskData::~LoadTaskData(); // 0x14033D550
void Scaleform::GFx::MovieDataDef::LoadTaskData::OnMovieDataDefRelease(); // 0x1403422D0
bool Scaleform::GFx::MovieDataDef::LoadTaskData::InitImageFileMovieDef(unsigned long fileLength, Scaleform::GFx::ImageResource * pimageResource, Scaleform::GFx::ImageCreator * imgCreator, Scaleform::Log * plog, bool bilinear); // 0x140341E00
class Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef>
{
protected:
	Scaleform::GFx::ImageShapeCharacterDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageShapeCharacterDef>(const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> &);
	Ptr<Scaleform::GFx::ImageShapeCharacterDef>(Scaleform::GFx::ImageShapeCharacterDef *);
	Ptr<Scaleform::GFx::ImageShapeCharacterDef>(Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageShapeCharacterDef>(Scaleform::Pickable<Scaleform::GFx::ImageShapeCharacterDef>);
	Ptr<Scaleform::GFx::ImageShapeCharacterDef>(Scaleform::GFx::ImageShapeCharacterDef &);
	Ptr<Scaleform::GFx::ImageShapeCharacterDef>();
	~Ptr<Scaleform::GFx::ImageShapeCharacterDef>();
	bool operator==(Scaleform::GFx::ImageShapeCharacterDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> &);
	bool operator!=(Scaleform::GFx::ImageShapeCharacterDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageShapeCharacterDef>);
	const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & operator=(Scaleform::GFx::ImageShapeCharacterDef &);
	const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & operator=(Scaleform::GFx::ImageShapeCharacterDef *);
	const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> &);
	Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageShapeCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & SetPtr(Scaleform::GFx::ImageShapeCharacterDef &);
	Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & SetPtr(Scaleform::GFx::ImageShapeCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageShapeCharacterDef * & GetRawRef();
	Scaleform::GFx::ImageShapeCharacterDef * GetPtr();
	Scaleform::GFx::ImageShapeCharacterDef & operator*();
	Scaleform::GFx::ImageShapeCharacterDef * operator->();
	Scaleform::GFx::ImageShapeCharacterDef * operator class Scaleform::GFx::ImageShapeCharacterDef *();
	Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & Pick(Scaleform::GFx::ImageShapeCharacterDef *);
	Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageShapeCharacterDef>);
	Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageShapeCharacterDef> &);
};
Scaleform::MemoryHeap * Scaleform::GFx::MovieDataDef::LoadTaskData::GetImageHeap(); // 0x140341350
void Scaleform::GFx::MovieDataDef::LoadTaskData::BeginSWFLoading(const Scaleform::GFx::MovieHeaderData & header); // 0x14033E880
void Scaleform::GFx::MovieDataDef::LoadTaskData::Read(Scaleform::GFx::LoadProcess * plp, Scaleform::GFx::MovieBindProcess * pbp); // 0x140342440
bool Scaleform::GFx::MovieDataDef::LoadTaskData::FinishLoadingFrame(Scaleform::GFx::LoadProcess * plp, bool finished); // 0x140340400
void Scaleform::GFx::MovieDataDef::LoadTaskData::UpdateLoadState(unsigned long loadingFrame, Scaleform::GFx::MovieDataDef::MovieLoadState loadState); // 0x140343A60
void Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForLoadFinish(); // 0x1403443F0
void Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForFrame(unsigned long frame); // 0x140344340
void Scaleform::GFx::MovieDataDef::LoadTaskData::SetMetadata(unsigned char * pdata, unsigned long size); // 0x1403437C0
void Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(Scaleform::GFx::ResourceId rid, Scaleform::GFx::Resource * pres); // 0x14033E520
Scaleform::GFx::ResourceHandle Scaleform::GFx::MovieDataDef::LoadTaskData::AddNewResourceHandle(Scaleform::GFx::ResourceId rid); // 0x14033E440
bool Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(Scaleform::GFx::ResourceHandle * phandle, Scaleform::GFx::ResourceId rid); // 0x140341A80
Scaleform::Render::Font * Scaleform::GFx::MovieDataDef::LoadTaskData::GetFontData(Scaleform::GFx::ResourceId rid); // 0x140340B30
void Scaleform::GFx::MovieDataDef::LoadTaskData::AddFrameName(const Scaleform::String & name, Scaleform::GFx::LogState * plog); // 0x14033E3E0
void Scaleform::GFx::MovieDataDef::LoadTaskData::SetLoadingPlaylistFrame(const Scaleform::GFx::TimelineDef::Frame & frame, Scaleform::GFx::LogState * plog); // 0x1403436F0
void Scaleform::GFx::MovieDataDef::LoadTaskData::SetLoadingInitActionFrame(const Scaleform::GFx::TimelineDef::Frame & frame, Scaleform::GFx::LogState * plog); // 0x140343620
void Scaleform::GFx::MovieDataDef::LoadTaskData::ExportResource(const Scaleform::String & symbol, Scaleform::GFx::ResourceId rid, const Scaleform::GFx::ResourceHandle & hres); // 0x140340210
bool Scaleform::GFx::MovieDataDef::LoadTaskData::GetLabeledFrame(const char * label, unsigned long * frameNumber, bool translateNumbers); // 0x140341500
const Scaleform::String * Scaleform::GFx::MovieDataDef::LoadTaskData::GetFrameLabel(unsigned long frameNumber, unsigned long * exactFrameNumberForLabel); // 0x1403410B0
Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * Scaleform::GFx::MovieDataDef::LoadTaskData::GetFrameLabels(unsigned long frameNumber, Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * destArr); // 0x140341150
void Scaleform::GFx::MovieDataDef::LoadTaskData::AddScene(const Scaleform::String & name, unsigned long off); // 0x14033E5E0
Scaleform::GFx::MovieDataDef::SceneInfo * Scaleform::GFx::MovieDataDef::LoadTaskData::GetScene(unsigned long long index); // 0x140341C50
Scaleform::GFx::MovieDataDef::SceneInfo * Scaleform::GFx::MovieDataDef::LoadTaskData::GetScenes(unsigned long long * count); // 0x140341C70
const Scaleform::GFx::TimelineDef::Frame Scaleform::GFx::MovieDataDef::LoadTaskData::GetPlaylist(long frameNumber); // 0x140341750
bool Scaleform::GFx::MovieDataDef::LoadTaskData::GetInitActions(Scaleform::GFx::TimelineDef::Frame * pframe, long frameNumber); // 0x140341440
unsigned long Scaleform::GFx::MovieDataDef::LoadTaskData::GetInitActionListSize(); // 0x140341400
class Scaleform::GFx::GFxMovieDataDefFileKeyData :
	Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2>
{
private:
	Scaleform::String FileName; // 0x10
	Scaleform::Ptr<Scaleform::GFx::FileOpener> pFileOpener; // 0x18
	long long ModifyTime; // 0x20
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> pImageCreator; // 0x28
public:
	GFxMovieDataDefFileKeyData(Scaleform::GFx::GFxMovieDataDefFileKeyData &);
	GFxMovieDataDefFileKeyData(const Scaleform::GFx::GFxMovieDataDefFileKeyData &);
	GFxMovieDataDefFileKeyData(const char *, long long, Scaleform::GFx::FileOpener *, Scaleform::GFx::ImageCreator *);
	bool operator==(Scaleform::GFx::GFxMovieDataDefFileKeyData &);
	bool operator!=(Scaleform::GFx::GFxMovieDataDefFileKeyData &);
	unsigned long long GetHashCode();
	virtual ~GFxMovieDataDefFileKeyData();
	Scaleform::GFx::GFxMovieDataDefFileKeyData & operator=(Scaleform::GFx::GFxMovieDataDefFileKeyData &);
	Scaleform::GFx::GFxMovieDataDefFileKeyData & operator=(const Scaleform::GFx::GFxMovieDataDefFileKeyData &);
};
class Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2>(Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2> &);
	RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2>(const Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2> &);
	RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2>();
	virtual ~RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2>();
	Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDataDefFileKeyData,2> &);
};
Scaleform::GFx::GFxMovieDataDefFileKeyData::GFxMovieDataDefFileKeyData(const char * pfilename, long long modifyTime, Scaleform::GFx::FileOpener * pfileOpener, Scaleform::GFx::ImageCreator * pimageCreator); // 0x14033C550
class Scaleform::GFx::GFxMovieDataDefFileKeyInterface :
	Scaleform::GFx::ResourceKey::KeyInterface
{
	typedef void *KeyHandle;
public:
	virtual void AddRef(void *);
	virtual void Release(void *);
	virtual Scaleform::GFx::ResourceKey::KeyType GetKeyType(void *);
	virtual unsigned long long GetHashCode(void *);
	virtual bool KeyEquals(void *, const Scaleform::GFx::ResourceKey &);
	virtual const char * GetFileURL(void *);
	GFxMovieDataDefFileKeyInterface(Scaleform::GFx::GFxMovieDataDefFileKeyInterface &);
	GFxMovieDataDefFileKeyInterface(const Scaleform::GFx::GFxMovieDataDefFileKeyInterface &);
	GFxMovieDataDefFileKeyInterface();
	virtual ~GFxMovieDataDefFileKeyInterface();
	Scaleform::GFx::GFxMovieDataDefFileKeyInterface & operator=(Scaleform::GFx::GFxMovieDataDefFileKeyInterface &);
	Scaleform::GFx::GFxMovieDataDefFileKeyInterface & operator=(const Scaleform::GFx::GFxMovieDataDefFileKeyInterface &);
};
void Scaleform::GFx::GFxMovieDataDefFileKeyInterface::AddRef(void * hdata); // 0x140345150
void Scaleform::GFx::GFxMovieDataDefFileKeyInterface::Release(void * hdata); // 0x140345160
Scaleform::GFx::ResourceKey::KeyType Scaleform::GFx::GFxMovieDataDefFileKeyInterface::GetKeyType(void * hdata); // 0x1400BB920
unsigned long long Scaleform::GFx::GFxMovieDataDefFileKeyInterface::GetHashCode(void * hdata); // 0x140339EF0
bool Scaleform::GFx::GFxMovieDataDefFileKeyInterface::KeyEquals(void * hdata, const Scaleform::GFx::ResourceKey & other); // 0x140339F50
const char * Scaleform::GFx::GFxMovieDataDefFileKeyInterface::GetFileURL(void * hdata); // 0x140339FC0
Scaleform::GFx::ResourceKey Scaleform::GFx::MovieDataDef::CreateMovieFileKey(const char * pfilename, long long modifyTime, Scaleform::GFx::FileOpener * pfileOpener, Scaleform::GFx::ImageCreator * pimageCreator); // 0x14033FD60
class Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData>
{
protected:
	Scaleform::GFx::GFxMovieDataDefFileKeyData * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData>(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> &);
	Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData>(Scaleform::GFx::GFxMovieDataDefFileKeyData *);
	Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData>(Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData>(Scaleform::Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData>);
	Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData>(Scaleform::GFx::GFxMovieDataDefFileKeyData &);
	Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData>();
	~Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData>();
	bool operator==(Scaleform::GFx::GFxMovieDataDefFileKeyData *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> &);
	bool operator!=(Scaleform::GFx::GFxMovieDataDefFileKeyData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> &);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & operator=(Scaleform::Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData>);
	const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & operator=(Scaleform::GFx::GFxMovieDataDefFileKeyData &);
	const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & operator=(Scaleform::GFx::GFxMovieDataDefFileKeyData *);
	const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & operator=(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> &);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & SetPtr(Scaleform::Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData>);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & SetPtr(Scaleform::GFx::GFxMovieDataDefFileKeyData &);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & SetPtr(Scaleform::GFx::GFxMovieDataDefFileKeyData *);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::GFxMovieDataDefFileKeyData * & GetRawRef();
	Scaleform::GFx::GFxMovieDataDefFileKeyData * GetPtr();
	Scaleform::GFx::GFxMovieDataDefFileKeyData & operator*();
	Scaleform::GFx::GFxMovieDataDefFileKeyData * operator->();
	Scaleform::GFx::GFxMovieDataDefFileKeyData * operator class Scaleform::GFx::GFxMovieDataDefFileKeyData *();
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & Pick(Scaleform::GFx::GFxMovieDataDefFileKeyData *);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & Pick(Scaleform::Pickable<Scaleform::GFx::GFxMovieDataDefFileKeyData>);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> & Pick(Scaleform::Ptr<Scaleform::GFx::GFxMovieDataDefFileKeyData> &);
};
Scaleform::String Scaleform::GFx::MovieDataDef::GetResourceName(); // 0x140341B90
Scaleform::GFx::MovieDefImpl::MovieDefImpl(Scaleform::GFx::MovieDataDef * pdataDef, Scaleform::GFx::MovieDefBindStates * pstates, Scaleform::GFx::LoaderImpl * ploaderImpl, unsigned long loadConstantFlags, Scaleform::GFx::StateBagImpl * pdelegateState, Scaleform::MemoryHeap * pargHeap, bool fullyLoaded, unsigned long long memoryArena); // 0x14033CEB0
Scaleform::GFx::MovieDefImpl::~MovieDefImpl(); // 0x14033DA70
Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> & Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::operator=(const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> & __that); // 0x14033DCB0
Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> & Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::operator=(const Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> & __that); // 0x14033DD70
Scaleform::GFx::CharPosInfo & Scaleform::GFx::CharPosInfo::operator=(const Scaleform::GFx::CharPosInfo & __that); // 0x14033DE30
Scaleform::GFx::MovieHeaderData & Scaleform::GFx::MovieHeaderData::operator=(const Scaleform::GFx::MovieHeaderData & __that); // 0x14033DEF0
void Scaleform::GFx::MovieDefImpl::AddReleaseNotifier(Scaleform::GFx::MovieDefImpl::ReleaseNotifier * rn); // 0x14033E4E0
void Scaleform::GFx::MovieDefImpl::RemoveReleaseNotifier(Scaleform::GFx::MovieDefImpl::ReleaseNotifier * rn); // 0x1403427D0
Scaleform::GFx::MovieBindProcess::MovieBindProcess(Scaleform::GFx::LoadStates * pls, Scaleform::GFx::MovieDefImpl * pdefImpl, Scaleform::GFx::LoaderImpl::LoadStackItem * ploadStack); // 0x14033CB20
Scaleform::GFx::MovieBindProcess::~MovieBindProcess(); // 0x14033D8B0
bool Scaleform::GFx::MatchFileNames(const Scaleform::String & path1, const Scaleform::String & path2); // 0x1403421B0
Scaleform::GFx::MovieDefImpl::BindStateType Scaleform::GFx::MovieBindProcess::BindNextFrame(); // 0x14033E8B0
void Scaleform::GFx::MovieBindProcess::FinishBinding(); // 0x140340320
struct Scaleform::GFx::MovieBindProcess::FinishBinding::__l5::ImagePackVisitor :
	Scaleform::GFx::MovieDef::ResourceVisitor
{
	Scaleform::GFx::ImagePacker * pImagePacker; // 0x8
	Scaleform::GFx::TempBindData * pTempBindData; // 0x10
	ImagePackVisitor(Scaleform::GFx::MovieBindProcess::FinishBinding::__l5::ImagePackVisitor &);
	ImagePackVisitor(const Scaleform::GFx::MovieBindProcess::FinishBinding::__l5::ImagePackVisitor &);
	ImagePackVisitor(Scaleform::GFx::ImagePacker *, Scaleform::GFx::TempBindData *);
	virtual void Visit(Scaleform::GFx::MovieDef *, Scaleform::GFx::Resource *, Scaleform::GFx::ResourceId, const char *);
	virtual ~ImagePackVisitor();
	Scaleform::GFx::MovieBindProcess::FinishBinding::__l5::ImagePackVisitor & operator=(Scaleform::GFx::MovieBindProcess::FinishBinding::__l5::ImagePackVisitor &);
	Scaleform::GFx::MovieBindProcess::FinishBinding::__l5::ImagePackVisitor & operator=(const Scaleform::GFx::MovieBindProcess::FinishBinding::__l5::ImagePackVisitor &);
};
Scaleform::GFx::GFxMovieDataDefFileKeyInterface Scaleform::GFx::GFxMovieDataDefFileKeyInterface_Instance; // 0x1409F9580
void(*Scaleform::GFx::GFxMovieDataDefFileKeyInterface_Instance$initializer$)(); // 0x140739CB8
Scaleform::GFx::GFxMovieDefImplKeyInterface Scaleform::GFx::GFxMovieDefImplKeyInterface_Instance; // 0x1409F9588
void(*Scaleform::GFx::GFxMovieDefImplKeyInterface_Instance$initializer$)(); // 0x140739CC0
Scaleform::GFx::MemoryContext * Scaleform::GFx::MovieDefImpl::CreateMemoryContext(const char * heapName, const Scaleform::GFx::MemoryParams & memParams, bool debugHeap); // 0x14033FCC0
Scaleform::GFx::Movie * Scaleform::GFx::MovieDefImpl::CreateInstance(const Scaleform::GFx::MemoryParams & memParams, bool initFirstFrame, Scaleform::GFx::ActionControl * actionControl, Scaleform::Render::ThreadCommandQueue * queue); // 0x14033FA90
Scaleform::GFx::Movie * Scaleform::GFx::MovieDefImpl::CreateInstance(Scaleform::GFx::MemoryContext * memContext, bool initFirstFrame, Scaleform::GFx::ActionControl * actionControl, Scaleform::Render::ThreadCommandQueue * queue); // 0x14033FB90
Scaleform::GFx::MovieDefImpl::BindTaskData::BindTaskData(Scaleform::MemoryHeap * pheap, Scaleform::GFx::MovieDataDef * pdataDef, Scaleform::GFx::MovieDefImpl * pdefImpl, unsigned long loadFlags, bool fullyLoaded); // 0x14033C330
Scaleform::GFx::MovieDefImpl::BindTaskData::~BindTaskData(); // 0x14033D280
void Scaleform::GFx::MovieDefImpl::BindTaskData::OnMovieDefRelease(); // 0x1403422F0
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::MovieDefImpl::BindTaskData::GetMovieDefImplAddRef(); // 0x140341650
void Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(unsigned long newState); // 0x1403433C0
bool Scaleform::GFx::MovieDefImpl::BindTaskData::WaitForBindStateFlags(unsigned long flags); // 0x1403442B0
void Scaleform::GFx::MovieDefImpl::BindTaskData::UpdateBindingFrame(unsigned long frame, unsigned long bytesLoaded); // 0x140343A50
void Scaleform::GFx::MovieDefImpl::BindTaskData::ResolveImport(Scaleform::GFx::ImportData * pimport, Scaleform::GFx::MovieDefImpl * pdefImpl, Scaleform::GFx::LoadStates * pls, bool recursive); // 0x140342E00
bool Scaleform::GFx::MovieDefImpl::BindTaskData::ResolveImportThroughFontLib(Scaleform::GFx::ImportData * pimport); // 0x1403431F0
Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> Scaleform::GFx::MovieDefImpl::BindTaskData::GetShapeMeshProvider(Scaleform::Render::ShapeMeshProvider * defMeshProv); // 0x140341CA0
void Scaleform::GFx::MovieDefImpl::BindTaskData::AddShapeMeshProvider(Scaleform::Render::ShapeMeshProvider * defMeshProv, Scaleform::Render::ShapeMeshProvider * resolvedMeshProv); // 0x14033E750
class Scaleform::GFx::GFxMovieDefImplKey :
	Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2>
{
private:
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> pDataDef; // 0x10
	Scaleform::Ptr<Scaleform::GFx::MovieDefBindStates> pBindStates; // 0x18
public:
	GFxMovieDefImplKey(Scaleform::GFx::GFxMovieDefImplKey &);
	GFxMovieDefImplKey(const Scaleform::GFx::GFxMovieDefImplKey &);
	GFxMovieDefImplKey(Scaleform::GFx::MovieDataDef *, Scaleform::GFx::MovieDefBindStates *);
	unsigned long long GetHashCode();
	bool operator==(Scaleform::GFx::GFxMovieDefImplKey &);
	bool operator!=(Scaleform::GFx::GFxMovieDefImplKey &);
	virtual ~GFxMovieDefImplKey();
	Scaleform::GFx::GFxMovieDefImplKey & operator=(Scaleform::GFx::GFxMovieDefImplKey &);
	Scaleform::GFx::GFxMovieDefImplKey & operator=(const Scaleform::GFx::GFxMovieDefImplKey &);
};
class Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2>(Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2> &);
	RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2>(const Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2> &);
	RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2>();
	virtual ~RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2>();
	Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::GFxMovieDefImplKey,2> &);
};
Scaleform::GFx::GFxMovieDefImplKey::GFxMovieDefImplKey(Scaleform::GFx::MovieDataDef * pdataDef, Scaleform::GFx::MovieDefBindStates * pbindStates); // 0x14033C620
class Scaleform::GFx::GFxMovieDefImplKeyInterface :
	Scaleform::GFx::ResourceKey::KeyInterface
{
	typedef void *KeyHandle;
public:
	virtual void AddRef(void *);
	virtual void Release(void *);
	virtual Scaleform::GFx::ResourceKey::KeyType GetKeyType(void *);
	virtual unsigned long long GetHashCode(void *);
	virtual bool KeyEquals(void *, const Scaleform::GFx::ResourceKey &);
	GFxMovieDefImplKeyInterface(Scaleform::GFx::GFxMovieDefImplKeyInterface &);
	GFxMovieDefImplKeyInterface(const Scaleform::GFx::GFxMovieDefImplKeyInterface &);
	GFxMovieDefImplKeyInterface();
	virtual ~GFxMovieDefImplKeyInterface();
	Scaleform::GFx::GFxMovieDefImplKeyInterface & operator=(Scaleform::GFx::GFxMovieDefImplKeyInterface &);
	Scaleform::GFx::GFxMovieDefImplKeyInterface & operator=(const Scaleform::GFx::GFxMovieDefImplKeyInterface &);
};
Scaleform::GFx::ResourceKey::KeyType Scaleform::GFx::GFxMovieDefImplKeyInterface::GetKeyType(void * hdata); // 0x1400482A0
unsigned long long Scaleform::GFx::GFxMovieDefImplKeyInterface::GetHashCode(void * hdata); // 0x14033A000
bool Scaleform::GFx::GFxMovieDefImplKeyInterface::KeyEquals(void * hdata, const Scaleform::GFx::ResourceKey & other); // 0x14033A070
Scaleform::GFx::ResourceKey Scaleform::GFx::MovieDefImpl::CreateMovieKey(Scaleform::GFx::MovieDataDef * pdataDef, Scaleform::GFx::MovieDefBindStates * pbindStates); // 0x14033FE00
class Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey>
{
protected:
	Scaleform::GFx::GFxMovieDefImplKey * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::GFxMovieDefImplKey>(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> &);
	Ptr<Scaleform::GFx::GFxMovieDefImplKey>(Scaleform::GFx::GFxMovieDefImplKey *);
	Ptr<Scaleform::GFx::GFxMovieDefImplKey>(Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::GFxMovieDefImplKey>(Scaleform::Pickable<Scaleform::GFx::GFxMovieDefImplKey>);
	Ptr<Scaleform::GFx::GFxMovieDefImplKey>(Scaleform::GFx::GFxMovieDefImplKey &);
	Ptr<Scaleform::GFx::GFxMovieDefImplKey>();
	~Ptr<Scaleform::GFx::GFxMovieDefImplKey>();
	bool operator==(Scaleform::GFx::GFxMovieDefImplKey *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> &);
	bool operator!=(Scaleform::GFx::GFxMovieDefImplKey *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> &);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & operator=(Scaleform::Pickable<Scaleform::GFx::GFxMovieDefImplKey>);
	const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & operator=(Scaleform::GFx::GFxMovieDefImplKey &);
	const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & operator=(Scaleform::GFx::GFxMovieDefImplKey *);
	const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & operator=(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> &);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & SetPtr(Scaleform::Pickable<Scaleform::GFx::GFxMovieDefImplKey>);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & SetPtr(Scaleform::GFx::GFxMovieDefImplKey &);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & SetPtr(Scaleform::GFx::GFxMovieDefImplKey *);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::GFxMovieDefImplKey * & GetRawRef();
	Scaleform::GFx::GFxMovieDefImplKey * GetPtr();
	Scaleform::GFx::GFxMovieDefImplKey & operator*();
	Scaleform::GFx::GFxMovieDefImplKey * operator->();
	Scaleform::GFx::GFxMovieDefImplKey * operator class Scaleform::GFx::GFxMovieDefImplKey *();
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & Pick(Scaleform::GFx::GFxMovieDefImplKey *);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & Pick(Scaleform::Pickable<Scaleform::GFx::GFxMovieDefImplKey>);
	Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> & Pick(Scaleform::Ptr<Scaleform::GFx::GFxMovieDefImplKey> &);
};
bool Scaleform::GFx::MovieDefImpl::GetExportedResource(Scaleform::GFx::ResourceBindData * pdata, const Scaleform::String & symbol, Scaleform::GFx::MovieDefImpl * ignoreDef); // 0x1403407E0
class Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264,Scaleform::ArrayDefaultPolicy>();
};
bool Scaleform::GFx::MovieDefImpl::DoesDirectlyImport(const Scaleform::GFx::MovieDefImpl * import); // 0x140340000
const Scaleform::String * Scaleform::GFx::MovieDefImpl::GetNameOfExportedResource(Scaleform::GFx::ResourceId rid); // 0x1403416A0
Scaleform::GFx::CharacterCreateInfo Scaleform::GFx::MovieDefImpl::GetCharacterCreateInfo(Scaleform::GFx::ResourceId rid); // 0x140340680
void Scaleform::GFx::MovieDefImpl::VisitImportedMovies(Scaleform::GFx::MovieDef::ImportVisitor * visitor); // 0x140343BA0
class Scaleform::StringHash<bool,Scaleform::AllocatorGH<bool,2> > :
	Scaleform::Hash<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<bool,2>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > >
{
	typedef bool ValueType;
	class SelfType;
	class BaseType;
public:
	void operator=(const Scaleform::StringHash<bool,Scaleform::AllocatorGH<bool,2> > &);
	bool * GetCaseInsensitive(const Scaleform::String &);
	const bool * GetCaseInsensitive(const Scaleform::String &);
	bool GetCaseInsensitive(const Scaleform::String &, bool *);
	struct base_iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::String &);
	void SetCaseInsensitive(const Scaleform::String &, const bool &);
	StringHash<bool,Scaleform::AllocatorGH<bool,2> >(const Scaleform::StringHash<bool,Scaleform::AllocatorGH<bool,2> > &);
	StringHash<bool,Scaleform::AllocatorGH<bool,2> >();
	~StringHash<bool,Scaleform::AllocatorGH<bool,2> >();
};
void Scaleform::GFx::MovieDefImpl::VisitResources(Scaleform::GFx::MovieDef::ResourceVisitor * pvisitor, unsigned long visitMask); // 0x140343E50
Scaleform::GFx::Resource * Scaleform::GFx::MovieDefImpl::GetResource(const char * pexportName); // 0x140341810
Scaleform::GFx::FontResource * Scaleform::GFx::MovieDefImpl::GetFontResource(const char * pfontName, unsigned long styleFlags, Scaleform::GFx::MovieDefImpl::SearchInfo * psearchInfo); // 0x140340B60
void Scaleform::GFx::GFxInitImportActions::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x140340080
void Scaleform::GFx::GFxInitImportActions::ExecuteInContext(Scaleform::GFx::DisplayObjContainer * m, Scaleform::GFx::MovieDefImpl * pbindDef, bool recursiveCheck); // 0x140340150//decompilation failure at 1409F9580!
//decompilation failure at 140739CB8!
//decompilation failure at 1409F9588!
//decompilation failure at 140739CC0!
char __fastcall Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::RemoveAlt<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>(
        Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > > *this,
        Scaleform::GFx::AS3::TR::NodeBlock *const *key)
{
  Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > >::TableType *pTable; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r11
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // rcx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  v5 = 8i64;
  v6 = 5381i64;
  do
  {
    v7 = *((unsigned __int8 *)key + --v5);
    v6 = v7 + 65599 * v6;
  }
  while ( v5 );
  v8 = v6 & pTable->SizeMask;
  v9 = (__int64)&pTable[1] + 24 * v8;
  if ( *(_QWORD *)v9 == -2i64 || *(_QWORD *)(v9 + 8) != v8 )
    return 0;
  v10 = v6 & pTable->SizeMask;
  v11 = -1i64;
  while ( *(_QWORD *)(v9 + 8) != v10 || *(Scaleform::GFx::AS3::TR::NodeBlock *const *)(v9 + 16) != *key )
  {
    v11 = v8;
    v8 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 == -1i64 )
      return 0;
    v9 = (__int64)&pTable[1] + 24 * v8;
  }
  v12 = *(_QWORD *)v9;
  if ( v10 == v8 )
  {
    if ( v12 != -1i64 )
    {
      *(_QWORD *)v9 = -2i64;
      v13 = &pTable->EntryCount + 3 * v12;
      *(_QWORD *)v9 = v13[2];
      *(_QWORD *)(v9 + 8) = v13[3];
      *(_QWORD *)(v9 + 16) = v13[4];
      v13[2] = -2i64;
      --this->pTable->EntryCount;
      return 1;
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 3 * v11) = v12;
  }
  *(_QWORD *)v9 = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::Set<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>(
        Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > *this,
        void *pmemAddr,
        Scaleform::GFx::MovieDefImpl::ReleaseNotifier *const *key)
{
  __int64 v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // r9
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *pTable; // r10
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  bool v12; // zf
  unsigned __int64 *v13; // rdx

  v5 = 8i64;
  v6 = 5381i64;
  do
  {
    v7 = *((unsigned __int8 *)key + --v5);
    v6 = v7 + 65599 * v6;
  }
  while ( v5 );
  pTable = this->pTable;
  if ( !this->pTable )
    goto LABEL_12;
  v9 = v6 & pTable->SizeMask;
  v10 = v9;
  v11 = v9 + 2 * (v9 + 1);
  v12 = *(&pTable->EntryCount + v11) == -2i64;
  v13 = &pTable->EntryCount + v11;
  if ( v12 || v13[1] != v9 )
    goto LABEL_12;
  while ( v13[1] != v9 || (Scaleform::GFx::MovieDefImpl::ReleaseNotifier *const)v13[2] != *key )
  {
    v10 = *v13;
    if ( *v13 == -1i64 )
      goto LABEL_12;
    v13 = &pTable[v10 + 1].EntryCount + v10;
  }
  if ( v10 >= 0 )
    *((Scaleform::GFx::MovieDefImpl::ReleaseNotifier **)&pTable[2].EntryCount + 3 * v10) = *key;
  else
LABEL_12:
    Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::add<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>(
      this,
      pmemAddr,
      key,
      v6);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeRef *key)
{
  Scaleform::Render::ShapeMeshProvider *const *pFirst; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 EntryCount; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *v13; // rcx
  _QWORD *p_EntryCount; // rbx
  const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *pSecond; // rdi
  __int64 v16; // rcx

  pFirst = key->pFirst;
  v7 = 8i64;
  v8 = 5381i64;
  do
  {
    v9 = *((unsigned __int8 *)pFirst + --v7);
    v8 = v9 + 65599 * v8;
  }
  while ( v7 );
  pTable = this->pTable;
  if ( !this->pTable )
    goto LABEL_16;
  v11 = v8 & pTable->SizeMask;
  EntryCount = v11;
  v13 = &pTable[2 * v11 + 1];
  if ( v13->EntryCount == -2i64 || v13->SizeMask != v11 )
    goto LABEL_16;
  while ( v13->SizeMask != v11 || (Scaleform::Render::ShapeMeshProvider *const)v13[1].EntryCount != *pFirst )
  {
    EntryCount = v13->EntryCount;
    if ( v13->EntryCount == -1i64 )
      goto LABEL_16;
    v13 = &pTable[2 * EntryCount + 1];
  }
  if ( EntryCount >= 0 )
  {
    p_EntryCount = &pTable[2 * EntryCount + 2].EntryCount;
    *p_EntryCount = *pFirst;
    pSecond = key->pSecond;
    if ( pSecond->pObject )
      pSecond->pObject->AddRef(&pSecond->pObject->Scaleform::Render::MeshProvider);
    v16 = p_EntryCount[1];
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v16 + 16) + 16i64))(v16 + 16);
    p_EntryCount[1] = pSecond->pObject;
  }
  else
  {
LABEL_16:
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef *key)
{
  const Scaleform::GFx::ResourceId *pFirst; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *v14; // rcx

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
  v13 = (__int64)&pTable[2 * v11 + 1];
  if ( *(_QWORD *)v13 == -2i64 || *(_QWORD *)(v13 + 8) != v11 )
    goto LABEL_12;
  while ( *(_QWORD *)(v13 + 8) != v11 || *(_DWORD *)(v13 + 16) != pFirst->Id )
  {
    v12 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 == -1i64 )
      goto LABEL_12;
    v13 = (__int64)&pTable[2 * v12 + 1];
  }
  if ( v12 >= 0 )
  {
    v14 = &pTable[2 * v12 + 2];
    LODWORD(v14->EntryCount) = (Scaleform::GFx::ResourceId)pFirst->Id;
    Scaleform::String::operator=((Scaleform::String *)&v14->SizeMask, key->pSecond);
  }
  else
  {
LABEL_12:
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::Set<Scaleform::StringLH>(
        Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *this,
        void *pmemAddr,
        const Scaleform::StringLH *key)
{
  unsigned __int64 v6; // rax
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *pTable; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rax

  v6 = Scaleform::String::BernsteinHashFunctionCIS(
         (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
         0x1505ui64);
  pTable = this->pTable;
  v8 = v6;
  if ( this->pTable
    && (v9 = Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::findIndexCore<Scaleform::StringLH>(
               this,
               key,
               v6 & pTable->SizeMask),
        v9 >= 0) )
  {
    Scaleform::String::operator=((Scaleform::String *)&pTable[2] + 3 * v9, key);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::add<Scaleform::StringLH>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::add<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>(
        Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > *this,
        void *pmemAddr,
        Scaleform::GFx::MovieDefImpl::ReleaseNotifier *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 *v13; // r8
  Scaleform::GFx::MovieDefImpl::ReleaseNotifier *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 *i; // rcx
  __int64 v21; // rcx

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
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = &this->pTable->EntryCount + 3 * v10;
  if ( v12 == -2i64 )
  {
    v13[2] = -1i64;
    v13[3] = 0i64;
    v14 = *key;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 3 * v15) != -2i64 );
    v16 = &v11[v15 + 1].EntryCount + v15;
    v17 = v13[3];
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      v14 = *key;
      v13[2] = v15;
    }
    else
    {
      v18 = v17 + 2 * (v17 + 1);
      v19 = *(&v11->EntryCount + v18) == v10;
      for ( i = &v11->EntryCount + v18; !v19; i = &v11->EntryCount + v21 )
      {
        v21 = *i + 2 * (*i + 1);
        v19 = *(&v11->EntryCount + v21) == v10;
      }
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      *i = v15;
      v14 = *key;
      v13[2] = -1i64;
    }
  }
  v13[3] = v10;
  v13[4] = (unsigned __int64)v14;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *pTable; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *v9; // rdi
  unsigned __int64 EntryCount; // r8
  Scaleform::Render::ShapeMeshProvider *pObject; // rcx
  __int64 v12; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *v13; // r15
  unsigned __int64 SizeMask; // rax
  Scaleform::Render::ShapeMeshProvider *v15; // rcx
  unsigned __int64 v16; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *i; // rsi
  unsigned __int64 v18; // rcx
  Scaleform::Render::ShapeMeshProvider *v19; // rcx
  unsigned __int64 v20; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::CheckExpand(
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
    v9[2].EntryCount = (unsigned __int64)key->First;
    pObject = key->Second.pObject;
    if ( pObject )
      pObject->AddRef(&pObject->Scaleform::Render::MeshProvider);
    v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
    v9[1].SizeMask = v7;
  }
  else
  {
    v12 = v7;
    do
      v12 = pTable->SizeMask & (v12 + 1);
    while ( pTable[2 * v12 + 1].EntryCount != -2i64 );
    v13 = &pTable[2 * v12 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v13 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> *)&pTable[2 * v12 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> *)&v9[1]);
      v9[2].EntryCount = (unsigned __int64)key->First;
      v15 = key->Second.pObject;
      if ( v15 )
        v15->AddRef(&v15->Scaleform::Render::MeshProvider);
      v16 = v9[2].SizeMask;
      if ( v16 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(v16 + 16) + 16i64))(v16 + 16);
      v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
      v9[1].EntryCount = v12;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v13 )
      {
        v13->EntryCount = EntryCount;
        v13->SizeMask = v9[1].SizeMask;
        v13[1].EntryCount = v9[2].EntryCount;
        v18 = v9[2].SizeMask;
        if ( v18 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(v18 + 16) + 8i64))(v18 + 16);
        v13[1].SizeMask = v9[2].SizeMask;
      }
      i->EntryCount = v12;
      v9[2].EntryCount = (unsigned __int64)key->First;
      v19 = key->Second.pObject;
      if ( v19 )
        v19->AddRef(&v19->Scaleform::Render::MeshProvider);
      v20 = v9[2].SizeMask;
      if ( v20 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(v20 + 16) + 16i64))(v20 + 16);
      v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
      v9[1].EntryCount = -1i64;
    }
    v9[1].SizeMask = v7;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *pTable; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v9; // r15
  unsigned __int64 EntryCount; // r10
  Scaleform::GFx::ResourceHandle::HandleType HType; // eax
  Scaleform::RefCountVImpl *pResource; // rcx
  unsigned __int64 SizeMask; // r9
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // eax
  Scaleform::RefCountVImpl *v17; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *i; // rsi
  int v19; // eax
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::GFx::Resource *v22; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::CheckExpand(
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
    LODWORD(v9[1].SizeMask) = key->First.Id;
    HType = key->Second.HType;
    LODWORD(v9[2].EntryCount) = HType;
    pResource = (Scaleform::RefCountVImpl *)key->Second.pResource;
    v9[2].SizeMask = (unsigned __int64)pResource;
    if ( HType == RH_Pointer )
    {
      if ( pResource )
        Scaleform::Render::RenderBuffer::AddRef(pResource);
    }
  }
  else
  {
    SizeMask = pTable->SizeMask;
    v14 = v7;
    do
      v14 = SizeMask & (v14 + 1);
    while ( pTable[2 * v14 + 1].EntryCount != -2i64 );
    v15 = (__int64)&pTable[2 * v14 + 1];
    if ( (SizeMask & (LODWORD(v9[1].SizeMask) ^ ((unsigned __int64)LODWORD(v9[1].SizeMask) >> 8))) == v7 )
    {
      if ( v15 )
      {
        *(_QWORD *)v15 = EntryCount;
        *(_DWORD *)(v15 + 8) = v9[1].SizeMask;
        v16 = v9[2].EntryCount;
        *(_DWORD *)(v15 + 16) = v16;
        v17 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
        *(_QWORD *)(v15 + 24) = v17;
        if ( !v16 )
        {
          if ( v17 )
            Scaleform::Render::RenderBuffer::AddRef(v17);
        }
      }
      Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::operator=(
        (Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *)&v9[1].SizeMask,
        key);
      v9[1].EntryCount = v14;
    }
    else
    {
      for ( i = &pTable[2 * (SizeMask & (LODWORD(v9[1].SizeMask) ^ ((unsigned __int64)LODWORD(v9[1].SizeMask) >> 8)))
                      + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v15 )
      {
        *(_QWORD *)v15 = EntryCount;
        *(_DWORD *)(v15 + 8) = v9[1].SizeMask;
        v19 = v9[2].EntryCount;
        *(_DWORD *)(v15 + 16) = v19;
        v20 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
        *(_QWORD *)(v15 + 24) = v20;
        if ( !v19 )
        {
          if ( v20 )
            Scaleform::Render::RenderBuffer::AddRef(v20);
        }
      }
      i->EntryCount = v14;
      LODWORD(v9[1].SizeMask) = key->First.Id;
      if ( key->Second.HType == RH_Pointer )
      {
        v21 = (Scaleform::RefCountVImpl *)key->Second.pResource;
        if ( v21 )
          Scaleform::Render::RenderBuffer::AddRef(v21);
      }
      if ( !LODWORD(v9[2].EntryCount) )
      {
        v22 = (Scaleform::GFx::Resource *)v9[2].SizeMask;
        if ( v22 )
          Scaleform::GFx::Resource::Release(v22);
      }
      LODWORD(v9[2].EntryCount) = key->Second.HType;
      v9[2].SizeMask = (unsigned __int64)key->Second.pResource;
      v9[1].EntryCount = -1i64;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *v9; // rdi
  unsigned __int64 EntryCount; // r9
  __int64 v11; // rbx
  __int64 v12; // r8
  unsigned __int64 SizeMask; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *i; // rsi

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::CheckExpand(
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
    LODWORD(v9[2].EntryCount) = key->First.Id;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)&v9[2].SizeMask, &key->Second);
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( pTable[2 * v11 + 1].EntryCount != -2i64 );
    v12 = (__int64)&pTable[2 * v11 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v12 )
      {
        *(_QWORD *)v12 = EntryCount;
        *(_QWORD *)(v12 + 8) = v9[1].SizeMask;
        *(_DWORD *)(v12 + 16) = v9[2].EntryCount;
        Scaleform::StringLH::CopyConstructHelper(
          (Scaleform::StringLH *)(v12 + 24),
          (const Scaleform::String *)&v9[2].SizeMask);
      }
      LODWORD(v9[2].EntryCount) = key->First.Id;
      Scaleform::String::operator=((Scaleform::String *)&v9[2].SizeMask, &key->Second);
      v9[1].EntryCount = v11;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v12 )
      {
        *(_QWORD *)v12 = EntryCount;
        *(_QWORD *)(v12 + 8) = v9[1].SizeMask;
        *(_DWORD *)(v12 + 16) = v9[2].EntryCount;
        Scaleform::StringLH::CopyConstructHelper(
          (Scaleform::StringLH *)(v12 + 24),
          (const Scaleform::String *)&v9[2].SizeMask);
      }
      i->EntryCount = v11;
      LODWORD(v9[2].EntryCount) = key->First.Id;
      Scaleform::String::operator=((Scaleform::String *)&v9[2].SizeMask, &key->Second);
      v9[1].EntryCount = -1i64;
    }
  }
  v9[1].SizeMask = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v9; // r14
  unsigned __int64 EntryCount; // r8
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 SizeMask; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *i; // r15

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
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
    Scaleform::String::String((Scaleform::String *)&v9[2], &key->First);
    LOBYTE(v9[2].SizeMask) = key->Second;
    v9[1].SizeMask = v7;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( pTable[2 * v11 + 1].EntryCount != -2i64 );
    v12 = (__int64)&pTable[2 * v11 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v12 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&pTable[2 * v11 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v9[1]);
      Scaleform::String::operator=((Scaleform::String *)&v9[2], &key->First);
      LOBYTE(v9[2].SizeMask) = key->Second;
      v9[1].EntryCount = v11;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v12 )
      {
        *(_QWORD *)v12 = EntryCount;
        *(_QWORD *)(v12 + 8) = v9[1].SizeMask;
        Scaleform::String::String((Scaleform::String *)(v12 + 16), (const Scaleform::String *)&v9[2]);
        *(_BYTE *)(v12 + 24) = v9[2].SizeMask;
      }
      i->EntryCount = v11;
      Scaleform::String::operator=((Scaleform::String *)&v9[2], &key->First);
      LOBYTE(v9[2].SizeMask) = key->Second;
      v9[1].EntryCount = -1i64;
    }
    v9[1].SizeMask = v7;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v9; // r14
  unsigned __int64 EntryCount; // r8
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 SizeMask; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *i; // r15

  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
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
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)&v9[2], &key->First);
    LODWORD(v9[2].SizeMask) = key->Second;
    v9[1].SizeMask = v7;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( pTable[2 * v11 + 1].EntryCount != -2i64 );
    v12 = (__int64)&pTable[2 * v11 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v12 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&pTable[2 * v11 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v9[1]);
      Scaleform::String::operator=((Scaleform::String *)&v9[2], &key->First);
      LODWORD(v9[2].SizeMask) = key->Second;
      v9[1].EntryCount = v11;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v12 )
      {
        *(_QWORD *)v12 = EntryCount;
        *(_QWORD *)(v12 + 8) = v9[1].SizeMask;
        Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)(v12 + 16), (const Scaleform::String *)&v9[2]);
        *(_DWORD *)(v12 + 24) = v9[2].SizeMask;
      }
      i->EntryCount = v11;
      Scaleform::String::operator=((Scaleform::String *)&v9[2], &key->First);
      LODWORD(v9[2].SizeMask) = key->Second;
      v9[1].EntryCount = -1i64;
    }
    v9[1].SizeMask = v7;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // r15
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rdx
  __int64 v9; // r8
  char *v10; // r14
  Scaleform::GFx::ResourceHandle::HandleType HType; // eax
  Scaleform::RefCountVImpl *pResource; // rcx
  __int64 v13; // rsi
  Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbp
  bool v17; // zf
  unsigned __int64 *i; // rbp
  __int64 v19; // rbp
  Scaleform::GFx::ResourceHandle::HandleType v20; // eax
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::RefCountVImpl *v22; // rcx
  Scaleform::GFx::Resource *v23; // rcx

  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 5 * v7);
  v10 = (char *)this->pTable + 40 * v7;
  if ( v9 == -2 )
  {
    *((_QWORD *)v10 + 2) = -1i64;
    *((_QWORD *)v10 + 3) = 0i64;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)v10 + 4, &key->First);
    HType = key->Second.HType;
    *((_DWORD *)v10 + 10) = HType;
    pResource = (Scaleform::RefCountVImpl *)key->Second.pResource;
    *((_QWORD *)v10 + 6) = pResource;
    if ( HType == RH_Pointer && pResource )
    {
      Scaleform::Render::RenderBuffer::AddRef(pResource);
      *((_QWORD *)v10 + 3) = v7;
      return;
    }
  }
  else
  {
    v13 = v7;
    do
      v13 = pTable->SizeMask & (v13 + 1);
    while ( *(&pTable[1].EntryCount + 5 * v13) != -2i64 );
    v14 = (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)(&pTable[2 * v13 + 1].EntryCount + v13);
    v15 = *((_QWORD *)v10 + 3);
    if ( v15 == v7 )
    {
      if ( v14 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          v14,
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)(v10 + 16));
      Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::operator=(
        (Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *)(v10 + 32),
        key);
      *((_QWORD *)v10 + 2) = v13;
    }
    else
    {
      v16 = v15 + 4 * v15 + 2;
      v17 = *(&pTable->EntryCount + v16) == v7;
      for ( i = &pTable->EntryCount + v16; !v17; i = &pTable->EntryCount + v19 )
      {
        v19 = *i + 4 * *i + 2;
        v17 = *(&pTable->EntryCount + v19) == v7;
      }
      if ( v14 )
      {
        v14->NextInChain = v9;
        v14->HashValue = *((_QWORD *)v10 + 3);
        Scaleform::StringLH::CopyConstructHelper(&v14->Value.First, (const Scaleform::String *)v10 + 4);
        v20 = *((_DWORD *)v10 + 10);
        v14->Value.Second.HType = v20;
        v21 = (Scaleform::RefCountVImpl *)*((_QWORD *)v10 + 6);
        v14->Value.Second.pResource = (Scaleform::GFx::Resource *)v21;
        if ( v20 == RH_Pointer )
        {
          if ( v21 )
            Scaleform::Render::RenderBuffer::AddRef(v21);
        }
      }
      *i = v13;
      Scaleform::String::operator=((Scaleform::String *)v10 + 4, &key->First);
      if ( key->Second.HType == RH_Pointer )
      {
        v22 = (Scaleform::RefCountVImpl *)key->Second.pResource;
        if ( v22 )
          Scaleform::Render::RenderBuffer::AddRef(v22);
      }
      if ( !*((_DWORD *)v10 + 10) )
      {
        v23 = (Scaleform::GFx::Resource *)*((_QWORD *)v10 + 6);
        if ( v23 )
          Scaleform::GFx::Resource::Release(v23);
      }
      *((_DWORD *)v10 + 10) = key->Second.HType;
      *((_QWORD *)v10 + 6) = key->Second.pResource;
      *((_QWORD *)v10 + 2) = -1i64;
    }
  }
  *((_QWORD *)v10 + 3) = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *pTable; // rax
  void *v7; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *v13; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *v14; // rbx
  unsigned __int64 EntryCount; // r8
  const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *pSecond; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *v19; // r15
  unsigned __int64 v20; // rax
  const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *v21; // r14
  unsigned __int64 v22; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *i; // r14
  unsigned __int64 v24; // rcx
  const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *v25; // rdi
  unsigned __int64 v26; // rcx

  pTable = this->pTable;
  v7 = pmemAddr;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    v11 = 4 * SizeMask + 4;
    if ( 5 * pTable->EntryCount <= v11 )
      goto LABEL_6;
    v9 = 2 * SizeMask + 2;
    pmemAddr = v7;
  }
  else
  {
    v9 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v9);
LABEL_6:
  v12 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v13 = this->pTable;
  v14 = &this->pTable[2 * v12];
  EntryCount = v14[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v14[1].EntryCount = -1i64;
    v14[1].SizeMask = 0i64;
    v14[2].EntryCount = (unsigned __int64)*key->pFirst;
    pSecond = key->pSecond;
    if ( pSecond->pObject )
      ((void (__fastcall *)(Scaleform::Render::MeshProvider *, unsigned __int64, __int64, void *))pSecond->pObject->AddRef)(
        &pSecond->pObject->Scaleform::Render::MeshProvider,
        v11,
        -2i64,
        v7);
    v14[2].SizeMask = (unsigned __int64)pSecond->pObject;
    v14[1].SizeMask = v12;
  }
  else
  {
    v17 = v13->SizeMask;
    v18 = v12;
    do
      v18 = v17 & (v18 + 1);
    while ( v13[2 * v18 + 1].EntryCount != -2i64 );
    v19 = &v13[2 * v18 + 1];
    v20 = v14[1].SizeMask;
    if ( v20 == v12 )
    {
      if ( v19 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> *)&v13[2 * v18 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> *)&v14[1]);
      v14[2].EntryCount = (unsigned __int64)*key->pFirst;
      v21 = key->pSecond;
      if ( v21->pObject )
        ((void (__fastcall *)(Scaleform::Render::MeshProvider *, unsigned __int64, unsigned __int64, void *))v21->pObject->AddRef)(
          &v21->pObject->Scaleform::Render::MeshProvider,
          v17,
          EntryCount,
          v7);
      v22 = v14[2].SizeMask;
      if ( v22 )
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64, void *))(*(_QWORD *)(v22 + 16)
                                                                                             + 16i64))(
          v22 + 16,
          v17,
          EntryCount,
          v7);
      v14[2].SizeMask = (unsigned __int64)v21->pObject;
      v14[1].EntryCount = v18;
    }
    else
    {
      for ( i = &v13[2 * v20 + 1]; i->EntryCount != v12; i = &v13[2 * i->EntryCount + 1] )
        ;
      if ( v19 )
      {
        v19->EntryCount = EntryCount;
        v19->SizeMask = v14[1].SizeMask;
        v19[1].EntryCount = v14[2].EntryCount;
        v24 = v14[2].SizeMask;
        if ( v24 )
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64, void *))(*(_QWORD *)(v24 + 16)
                                                                                               + 8i64))(
            v24 + 16,
            v17,
            EntryCount,
            v7);
        v19[1].SizeMask = v14[2].SizeMask;
      }
      i->EntryCount = v18;
      v14[2].EntryCount = (unsigned __int64)*key->pFirst;
      v25 = key->pSecond;
      if ( v25->pObject )
        ((void (__fastcall *)(Scaleform::Render::MeshProvider *, unsigned __int64, unsigned __int64, void *))v25->pObject->AddRef)(
          &v25->pObject->Scaleform::Render::MeshProvider,
          v17,
          EntryCount,
          v7);
      v26 = v14[2].SizeMask;
      if ( v26 )
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64, void *))(*(_QWORD *)(v26 + 16)
                                                                                             + 16i64))(
          v26 + 16,
          v17,
          EntryCount,
          v7);
      v14[2].SizeMask = (unsigned __int64)v25->pObject;
      v14[1].EntryCount = -1i64;
    }
    v14[1].SizeMask = v12;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v11; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v12; // r14
  unsigned __int64 EntryCount; // r10
  const Scaleform::GFx::ResourceHandle *pSecond; // rax
  Scaleform::GFx::ResourceHandle::HandleType HType; // edx
  Scaleform::RefCountVImpl *pResource; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *i; // rsi
  int v23; // eax
  Scaleform::RefCountVImpl *v24; // rcx
  const Scaleform::GFx::ResourceHandle *v25; // rbx
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::GFx::Resource *v27; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::setRawCapacity(
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
    v12[1].EntryCount = -1i64;
    LODWORD(v12[1].SizeMask) = key->pFirst->Id;
    pSecond = key->pSecond;
    HType = pSecond->HType;
    LODWORD(v12[2].EntryCount) = pSecond->HType;
    pResource = (Scaleform::RefCountVImpl *)pSecond->pResource;
    v12[2].SizeMask = (unsigned __int64)pResource;
    if ( HType == RH_Pointer )
    {
      if ( pResource )
        Scaleform::Render::RenderBuffer::AddRef(pResource);
    }
  }
  else
  {
    v17 = v11->SizeMask;
    v18 = v10;
    do
      v18 = v17 & (v18 + 1);
    while ( v11[2 * v18 + 1].EntryCount != -2i64 );
    v19 = (__int64)&v11[2 * v18 + 1];
    if ( (v17 & (LODWORD(v12[1].SizeMask) ^ ((unsigned __int64)LODWORD(v12[1].SizeMask) >> 8))) == v10 )
    {
      if ( v19 )
      {
        *(_QWORD *)v19 = EntryCount;
        *(_DWORD *)(v19 + 8) = v12[1].SizeMask;
        v20 = v12[2].EntryCount;
        *(_DWORD *)(v19 + 16) = v20;
        v21 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
        *(_QWORD *)(v19 + 24) = v21;
        if ( !v20 )
        {
          if ( v21 )
            Scaleform::Render::RenderBuffer::AddRef(v21);
        }
      }
      Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::operator=(
        (Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *)&v12[1].SizeMask,
        key);
      v12[1].EntryCount = v18;
    }
    else
    {
      for ( i = &v11[2 * (v17 & (LODWORD(v12[1].SizeMask) ^ ((unsigned __int64)LODWORD(v12[1].SizeMask) >> 8))) + 1];
            i->EntryCount != v10;
            i = &v11[2 * i->EntryCount + 1] )
      {
        ;
      }
      if ( v19 )
      {
        *(_QWORD *)v19 = EntryCount;
        *(_DWORD *)(v19 + 8) = v12[1].SizeMask;
        v23 = v12[2].EntryCount;
        *(_DWORD *)(v19 + 16) = v23;
        v24 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
        *(_QWORD *)(v19 + 24) = v24;
        if ( !v23 )
        {
          if ( v24 )
            Scaleform::Render::RenderBuffer::AddRef(v24);
        }
      }
      i->EntryCount = v18;
      LODWORD(v12[1].SizeMask) = key->pFirst->Id;
      v25 = key->pSecond;
      if ( v25->HType == RH_Pointer )
      {
        v26 = (Scaleform::RefCountVImpl *)v25->pResource;
        if ( v26 )
          Scaleform::Render::RenderBuffer::AddRef(v26);
      }
      if ( !LODWORD(v12[2].EntryCount) )
      {
        v27 = (Scaleform::GFx::Resource *)v12[2].SizeMask;
        if ( v27 )
          Scaleform::GFx::Resource::Release(v27);
      }
      LODWORD(v12[2].EntryCount) = v25->HType;
      v12[2].SizeMask = (unsigned __int64)v25->pResource;
      v12[1].EntryCount = -1i64;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *v11; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *v12; // rdi
  unsigned __int64 EntryCount; // r9
  __int64 v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *i; // r14

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::setRawCapacity(
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
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    LODWORD(v12[2].EntryCount) = key->pFirst->Id;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)&v12[2].SizeMask, key->pSecond);
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( v11[2 * v14 + 1].EntryCount != -2i64 );
    v15 = (__int64)&v11[2 * v14 + 1];
    v16 = v12[1].SizeMask;
    if ( v16 == v10 )
    {
      if ( v15 )
      {
        *(_QWORD *)v15 = EntryCount;
        *(_QWORD *)(v15 + 8) = v12[1].SizeMask;
        *(_DWORD *)(v15 + 16) = v12[2].EntryCount;
        Scaleform::StringLH::CopyConstructHelper(
          (Scaleform::StringLH *)(v15 + 24),
          (const Scaleform::String *)&v12[2].SizeMask);
      }
      LODWORD(v12[2].EntryCount) = key->pFirst->Id;
      Scaleform::String::operator=((Scaleform::String *)&v12[2].SizeMask, key->pSecond);
      v12[1].EntryCount = v14;
    }
    else
    {
      for ( i = &v11[2 * v16 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v15 )
      {
        *(_QWORD *)v15 = EntryCount;
        *(_QWORD *)(v15 + 8) = v12[1].SizeMask;
        *(_DWORD *)(v15 + 16) = v12[2].EntryCount;
        Scaleform::StringLH::CopyConstructHelper(
          (Scaleform::StringLH *)(v15 + 24),
          (const Scaleform::String *)&v12[2].SizeMask);
      }
      i->EntryCount = v14;
      LODWORD(v12[2].EntryCount) = key->pFirst->Id;
      Scaleform::String::operator=((Scaleform::String *)&v12[2].SizeMask, key->pSecond);
      v12[1].EntryCount = -1i64;
    }
  }
  v12[1].SizeMask = v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v11; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v12; // r14
  unsigned __int64 EntryCount; // r8
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *i; // r15

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
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
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    Scaleform::String::String((Scaleform::String *)&v12[2], key->pFirst);
    LOBYTE(v12[2].SizeMask) = *key->pSecond;
    v12[1].SizeMask = v10;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( v11[2 * v14 + 1].EntryCount != -2i64 );
    v15 = (__int64)&v11[2 * v14 + 1];
    v16 = v12[1].SizeMask;
    if ( v16 == v10 )
    {
      if ( v15 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v11[2 * v14 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v12[1]);
      Scaleform::String::operator=((Scaleform::String *)&v12[2], key->pFirst);
      LOBYTE(v12[2].SizeMask) = *key->pSecond;
      v12[1].EntryCount = v14;
    }
    else
    {
      for ( i = &v11[2 * v16 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v15 )
      {
        *(_QWORD *)v15 = EntryCount;
        *(_QWORD *)(v15 + 8) = v12[1].SizeMask;
        Scaleform::String::String((Scaleform::String *)(v15 + 16), (const Scaleform::String *)&v12[2]);
        *(_BYTE *)(v15 + 24) = v12[2].SizeMask;
      }
      i->EntryCount = v14;
      Scaleform::String::operator=((Scaleform::String *)&v12[2], key->pFirst);
      LOBYTE(v12[2].SizeMask) = *key->pSecond;
      v12[1].EntryCount = -1i64;
    }
    v12[1].SizeMask = v10;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v11; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v12; // r14
  unsigned __int64 EntryCount; // r8
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *i; // r15

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
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
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
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)&v12[2], key->pFirst);
    LODWORD(v12[2].SizeMask) = *key->pSecond;
    v12[1].SizeMask = v10;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( v11[2 * v14 + 1].EntryCount != -2i64 );
    v15 = (__int64)&v11[2 * v14 + 1];
    v16 = v12[1].SizeMask;
    if ( v16 == v10 )
    {
      if ( v15 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v11[2 * v14 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v12[1]);
      Scaleform::String::operator=((Scaleform::String *)&v12[2], key->pFirst);
      LODWORD(v12[2].SizeMask) = *key->pSecond;
      v12[1].EntryCount = v14;
    }
    else
    {
      for ( i = &v11[2 * v16 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v15 )
      {
        *(_QWORD *)v15 = EntryCount;
        *(_QWORD *)(v15 + 8) = v12[1].SizeMask;
        Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)(v15 + 16), (const Scaleform::String *)&v12[2]);
        *(_DWORD *)(v15 + 24) = v12[2].SizeMask;
      }
      i->EntryCount = v14;
      Scaleform::String::operator=((Scaleform::String *)&v12[2], key->pFirst);
      LODWORD(v12[2].SizeMask) = *key->pSecond;
      v12[1].EntryCount = -1i64;
    }
    v12[1].SizeMask = v10;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // r14
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v11; // rdx
  __int64 v12; // r8
  char *v13; // r15
  __int64 v14; // rsi
  Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  bool v18; // zf
  unsigned __int64 *i; // rbp
  __int64 v20; // rbp
  Scaleform::GFx::ResourceHandle::HandleType v21; // eax
  Scaleform::RefCountVImpl *v22; // rcx
  const Scaleform::GFx::ResourceHandle *pSecond; // rdi
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::Resource *v25; // rcx

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
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 5 * v10);
  v13 = (char *)this->pTable + 40 * v10;
  if ( v12 == -2 )
  {
    Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
      (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)(v13 + 16),
      key,
      -1i64);
    *((_QWORD *)v13 + 3) = v10;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( *(&v11[1].EntryCount + 5 * v14) != -2i64 );
    v15 = (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)(&v11[2 * v14 + 1].EntryCount + v14);
    v16 = *((_QWORD *)v13 + 3);
    if ( v16 == v10 )
    {
      if ( v15 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          v15,
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)(v13 + 16));
      Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::operator=(
        (Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *)(v13 + 32),
        key);
      *((_QWORD *)v13 + 2) = v14;
    }
    else
    {
      v17 = v16 + 4 * v16 + 2;
      v18 = *(&v11->EntryCount + v17) == v10;
      for ( i = &v11->EntryCount + v17; !v18; i = &v11->EntryCount + v20 )
      {
        v20 = *i + 4 * *i + 2;
        v18 = *(&v11->EntryCount + v20) == v10;
      }
      if ( v15 )
      {
        v15->NextInChain = v12;
        v15->HashValue = *((_QWORD *)v13 + 3);
        Scaleform::StringLH::CopyConstructHelper(&v15->Value.First, (const Scaleform::String *)v13 + 4);
        v21 = *((_DWORD *)v13 + 10);
        v15->Value.Second.HType = v21;
        v22 = (Scaleform::RefCountVImpl *)*((_QWORD *)v13 + 6);
        v15->Value.Second.pResource = (Scaleform::GFx::Resource *)v22;
        if ( v21 == RH_Pointer )
        {
          if ( v22 )
            Scaleform::Render::RenderBuffer::AddRef(v22);
        }
      }
      *i = v14;
      Scaleform::String::operator=((Scaleform::String *)v13 + 4, key->pFirst);
      pSecond = key->pSecond;
      if ( pSecond->HType == RH_Pointer )
      {
        pResource = (Scaleform::RefCountVImpl *)pSecond->pResource;
        if ( pResource )
          Scaleform::Render::RenderBuffer::AddRef(pResource);
      }
      if ( !*((_DWORD *)v13 + 10) )
      {
        v25 = (Scaleform::GFx::Resource *)*((_QWORD *)v13 + 6);
        if ( v25 )
          Scaleform::GFx::Resource::Release(v25);
      }
      *((_DWORD *)v13 + 10) = pSecond->HType;
      *((_QWORD *)v13 + 6) = pSecond->pResource;
      *((_QWORD *)v13 + 2) = -1i64;
    }
    *((_QWORD *)v13 + 3) = v10;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::add<Scaleform::String>(
        Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *this,
        void *pmemAddr,
        const Scaleform::String *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // r14
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *pTable; // rdx
  unsigned __int64 v9; // r9
  Scaleform::String *v10; // rdi
  __int64 v11; // rbx
  Scaleform::String *v12; // r8
  Scaleform::String::DataDesc *pData; // rax
  char *v14; // rsi
  bool v15; // zf
  unsigned __int64 *i; // rsi
  __int64 v17; // rsi

  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 3 * v7);
  v10 = (Scaleform::String *)this->pTable + 3 * v7;
  if ( v9 == -2i64 )
  {
    v10[2].HeapTypeBits = -1i64;
    v10[3].HeapTypeBits = 0i64;
    Scaleform::String::String(v10 + 4, key);
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( *(&pTable[1].EntryCount + 3 * v11) != -2i64 );
    v12 = (Scaleform::String *)(&pTable[v11 + 1].EntryCount + v11);
    pData = v10[3].pData;
    if ( pData == (Scaleform::String::DataDesc *)v7 )
    {
      if ( v12 )
      {
        v12->HeapTypeBits = v9;
        v12[1].pData = v10[3].pData;
        Scaleform::String::String(v12 + 2, v10 + 4);
      }
      Scaleform::String::operator=(v10 + 4, key);
      v10[2].HeapTypeBits = v11;
    }
    else
    {
      v14 = (char *)pData + 2 * ((_QWORD)&pData->Size + 1);
      v15 = *(&pTable->EntryCount + (_QWORD)v14) == v7;
      for ( i = &pTable->EntryCount + (_QWORD)v14; !v15; i = &pTable->EntryCount + v17 )
      {
        v17 = *i + 2 * (*i + 1);
        v15 = *(&pTable->EntryCount + v17) == v7;
      }
      if ( v12 )
      {
        v12->HeapTypeBits = v9;
        v12[1].pData = v10[3].pData;
        Scaleform::String::String(v12 + 2, v10 + 4);
      }
      *i = v11;
      Scaleform::String::operator=(v10 + 4, key);
      v10[2].HeapTypeBits = -1i64;
    }
  }
  v10[3].HeapTypeBits = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::add<Scaleform::StringLH>(
        Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *this,
        void *pmemAddr,
        const Scaleform::StringLH *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *v11; // rdx
  unsigned __int64 v12; // r9
  Scaleform::String *v13; // rdi
  __int64 v14; // rbx
  Scaleform::String *v15; // r8
  Scaleform::String::DataDesc *pData; // rax
  char *v17; // r14
  bool v18; // zf
  unsigned __int64 *i; // r14
  __int64 v20; // r14

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
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = (Scaleform::String *)this->pTable + 3 * v10;
  if ( v12 == -2i64 )
  {
    v13[2].HeapTypeBits = -1i64;
    v13[3].HeapTypeBits = 0i64;
    Scaleform::String::String(v13 + 4, key);
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( *(&v11[1].EntryCount + 3 * v14) != -2i64 );
    v15 = (Scaleform::String *)(&v11[v14 + 1].EntryCount + v14);
    pData = v13[3].pData;
    if ( pData == (Scaleform::String::DataDesc *)v10 )
    {
      if ( v15 )
      {
        v15->HeapTypeBits = v12;
        v15[1].pData = v13[3].pData;
        Scaleform::String::String(v15 + 2, v13 + 4);
      }
      Scaleform::String::operator=(v13 + 4, key);
      v13[2].HeapTypeBits = v14;
    }
    else
    {
      v17 = (char *)pData + 2 * ((_QWORD)&pData->Size + 1);
      v18 = *(&v11->EntryCount + (_QWORD)v17) == v10;
      for ( i = &v11->EntryCount + (_QWORD)v17; !v18; i = &v11->EntryCount + v20 )
      {
        v20 = *i + 2 * (*i + 1);
        v18 = *(&v11->EntryCount + v20) == v10;
      }
      if ( v15 )
      {
        v15->HeapTypeBits = v12;
        v15[1].pData = v13[3].pData;
        Scaleform::String::String(v15 + 2, v13 + 4);
      }
      *i = v14;
      Scaleform::String::operator=(v13 + 4, key);
      v13[2].HeapTypeBits = -1i64;
    }
  }
  v13[3].HeapTypeBits = v10;
}

__int64 __fastcall Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int>>>::findIndex<unsigned int>(
        Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > > *this,
        const unsigned int *key)
{
  Scaleform::HashSetBase<unsigned int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedEntry<unsigned int,Scaleform::FixedSizeHash<unsigned int> > >::TableType *pTable; // r10
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx
  bool v11; // zf
  unsigned __int64 *v12; // rdx

  pTable = this->pTable;
  if ( !this->pTable )
    return -1i64;
  v4 = 4i64;
  v5 = 5381i64;
  do
  {
    v6 = *((unsigned __int8 *)key + --v4);
    v7 = 65599 * v5 + v6;
    v5 = v7;
  }
  while ( v4 );
  v8 = v7 & pTable->SizeMask;
  result = v8;
  v10 = v8 + 2 * (v8 + 1);
  v11 = *(&pTable->EntryCount + v10) == -2i64;
  v12 = &pTable->EntryCount + v10;
  if ( v11 || v12[1] != v8 )
    return -1i64;
  while ( v12[1] != v8 || *((_DWORD *)v12 + 4) != *key )
  {
    result = *v12;
    if ( *v12 == -1i64 )
      return -1i64;
    v12 = &pTable[result + 1].EntryCount + result;
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>::NodeHashF>>::findIndexAlt<Scaleform::GFx::ASString>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF> > *this,
        const Scaleform::GFx::ASString *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF> >::TableType *pTable; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx

  pTable = this->pTable;
  if ( !this->pTable )
    return -1i64;
  v5 = 8i64;
  v6 = 5381i64;
  do
  {
    v7 = *((unsigned __int8 *)key + --v5);
    v8 = 65599 * v6 + v7;
    v6 = v8;
  }
  while ( v5 );
  v10 = v8 & pTable->SizeMask;
  v9 = v10;
  v11 = (__int64)&pTable[2 * v10 + 1];
  if ( *(_QWORD *)v11 == -2i64 || *(_QWORD *)(v11 + 8) != v10 )
    return -1i64;
  while ( *(_QWORD *)(v11 + 8) != v9 || *(Scaleform::GFx::ASStringNode **)(v11 + 16) != key->pNode )
  {
    v10 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 == -1i64 )
      return -1i64;
    v11 = (__int64)&pTable[2 * v10 + 1];
  }
  return v10;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        const unsigned int *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx

  pTable = this->pTable;
  if ( !this->pTable )
    return -1i64;
  v5 = 4i64;
  v6 = 5381i64;
  do
  {
    v7 = *((unsigned __int8 *)key + --v5);
    v8 = 65599 * v6 + v7;
    v6 = v8;
  }
  while ( v5 );
  v10 = v8 & pTable->SizeMask;
  v9 = v10;
  v11 = (__int64)&pTable[2 * v10 + 1];
  if ( *(_QWORD *)v11 == -2i64 || *(_QWORD *)(v11 + 8) != v10 )
    return -1i64;
  while ( *(_QWORD *)(v11 + 8) != v9 || *(_DWORD *)(v11 + 16) != *key )
  {
    v10 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 == -1i64 )
      return -1i64;
    v11 = (__int64)&pTable[2 * v10 + 1];
  }
  return v10;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String::NoCaseKey *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v3; // rbx
  unsigned __int64 EntryCount; // rdi

  v3 = &this->pTable[2 * hashValue + 1];
  EntryCount = hashValue;
  if ( v3->EntryCount == -2i64 || v3->SizeMask != hashValue )
    return -1i64;
  while ( v3->SizeMask != hashValue
       || Scaleform::String::CompareNoCase(
            (const char *)((v3[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64) + 12),
            (const char *)(((unsigned __int64)key->pStr->pData & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
  {
    EntryCount = v3->EntryCount;
    if ( v3->EntryCount == -1i64 )
      return -1i64;
    v3 = &this->pTable[2 * EntryCount + 1];
  }
  return EntryCount;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontMap::MapEntry,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String::NoCaseKey *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v3; // rdi
  bool v5; // zf
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // rdi

  v3 = hashValue + 4 * hashValue + 2;
  v5 = *(&this->pTable->EntryCount + v3) == -2i64;
  v8 = hashValue;
  v9 = &this->pTable->EntryCount + v3;
  if ( v5 || v9[1] != hashValue )
    return -1i64;
  while ( v9[1] != hashValue
       || Scaleform::String::CompareNoCase(
            (const char *)((v9[2] & 0xFFFFFFFFFFFFFFFCui64) + 12),
            (const char *)(((unsigned __int64)key->pStr->pData & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
  {
    v8 = *v9;
    if ( *v9 == -1i64 )
      return -1i64;
    v9 = &this->pTable[2 * v8 + 1].EntryCount + v8;
  }
  return v8;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::findIndexCore<Scaleform::GFx::ResourceId>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> > *this,
        const Scaleform::GFx::ResourceId *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *pTable; // r11
  unsigned __int64 EntryCount; // r10
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v5; // r9

  pTable = this->pTable;
  EntryCount = hashValue;
  v5 = &this->pTable[2 * hashValue + 1];
  if ( v5->EntryCount == -2i64
    || (pTable->SizeMask & (LODWORD(v5->SizeMask) ^ ((unsigned __int64)LODWORD(v5->SizeMask) >> 8))) != hashValue )
  {
    return -1i64;
  }
  while ( 1 )
  {
    if ( (pTable->SizeMask & (LODWORD(v5->SizeMask) ^ ((unsigned __int64)LODWORD(v5->SizeMask) >> 8))) == hashValue
      && LODWORD(v5->SizeMask) == key->Id )
    {
      return EntryCount;
    }
    EntryCount = v5->EntryCount;
    if ( v5->EntryCount == -1i64 )
      break;
    v5 = &pTable[2 * EntryCount + 1];
  }
  return -1i64;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::findIndexCore<Scaleform::StringLH>(
        Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *this,
        const Scaleform::StringLH *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *pTable; // rbx
  unsigned __int64 v4; // r10
  bool v5; // zf
  unsigned __int64 *v6; // r10
  unsigned __int64 v8; // r9
  unsigned __int8 *v9; // rax
  int v10; // ecx
  int v11; // edx

  pTable = this->pTable;
  v4 = hashValue + 2 * (hashValue + 1);
  v5 = *(&this->pTable->EntryCount + v4) == -2i64;
  v6 = &this->pTable->EntryCount + v4;
  v8 = hashValue;
  if ( v5 || v6[1] != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v6[1] == hashValue )
    {
      v9 = (unsigned __int8 *)((v6[2] & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v10 = v9[(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (v6[2] & 0xFFFFFFFFFFFFFFFCui64)];
        v11 = *v9 - v10;
        if ( v11 )
          break;
        ++v9;
      }
      while ( v10 );
      if ( !v11 )
        break;
    }
    v8 = *v6;
    if ( *v6 == -1i64 )
      return -1i64;
    v6 = &pTable[v8 + 1].EntryCount + v8;
  }
  return v8;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> *this,
        const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> *e)
{
  Scaleform::Render::ShapeMeshProvider *pObject; // rcx

  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  this->Value.First = e->Value.First;
  pObject = e->Value.Second.pObject;
  if ( pObject )
    pObject->AddRef(&pObject->Scaleform::Render::MeshProvider);
  this->Value.Second.pObject = e->Value.Second.pObject;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *this,
        const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *e)
{
  Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor> *p_Value; // rbx

  p_Value = &e->Value;
  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  Scaleform::String::String(&this->Value.First, &e->Value.First);
  this->Value.Second = p_Value->Second;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *this,
        const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *e)
{
  Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor> *p_Value; // rbx

  p_Value = &e->Value;
  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  Scaleform::StringLH::CopyConstructHelper(&this->Value.First, &e->Value.First);
  this->Value.Second = p_Value->Second;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *this,
        const Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeRef *keyRef,
        __int64 next)
{
  const Scaleform::GFx::ResourceHandle *pSecond; // rax
  Scaleform::GFx::ResourceHandle::HandleType HType; // edx
  Scaleform::GFx::Resource *pResource; // rcx

  this->NextInChain = next;
  this->HashValue = 0i64;
  Scaleform::StringLH::CopyConstructHelper(&this->Value.First, keyRef->pFirst);
  pSecond = keyRef->pSecond;
  HType = pSecond->HType;
  this->Value.Second.HType = pSecond->HType;
  pResource = pSecond->pResource;
  this->Value.Second.pResource = pResource;
  if ( HType == RH_Pointer )
  {
    if ( pResource )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pResource);
  }
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *this,
        const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *e)
{
  Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *p_Value; // rbx
  Scaleform::GFx::ResourceHandle::HandleType HType; // eax
  Scaleform::GFx::Resource *pResource; // rcx

  p_Value = &e->Value;
  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  Scaleform::StringLH::CopyConstructHelper(&this->Value.First, &e->Value.First);
  HType = p_Value->Second.HType;
  this->Value.Second.HType = HType;
  pResource = p_Value->Second.pResource;
  this->Value.Second.pResource = pResource;
  if ( HType == RH_Pointer )
  {
    if ( pResource )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pResource);
  }
}

void __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::BindTaskData(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this,
        Scaleform::MemoryHeap *pheap,
        Scaleform::GFx::MovieDataDef *pdataDef,
        Scaleform::GFx::MovieDefImpl *pdefImpl,
        unsigned int loadFlags,
        bool fullyLoaded)
{
  char v10; // bp
  bool v11; // di
  void *v12; // rbx
  __int64 v13; // rax
  Scaleform::GFx::LoadUpdateSync *v14; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::String url; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(url.pData) = 0;
  this->__vftable = (Scaleform::GFx::MovieDefImpl::BindTaskData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::MovieDefImpl::BindTaskData_vtbl *)&Scaleform::GFx::MovieDefImpl::BindTaskData::`vftable';
  this->pHeap = pheap;
  v10 = 0;
  if ( pdataDef )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdataDef);
  this->pDataDef.pObject = pdataDef;
  this->pDefImpl_Unsafe = pdefImpl;
  Scaleform::GFx::ResourceBinding::ResourceBinding(&this->ResourceBinding, pheap);
  this->ImportSourceMovies.Data.Data = 0i64;
  this->ImportSourceMovies.Data.Size = 0i64;
  this->ImportSourceMovies.Data.Policy.Capacity = 0i64;
  Scaleform::Lock::Lock(&this->ImportSourceLock, 0);
  this->ResourceImports.Data.Data = 0i64;
  this->ResourceImports.Data.Size = 0i64;
  this->ResourceImports.Data.Policy.Capacity = 0i64;
  this->BoundShapeMeshProviders.mHash.pTable = 0i64;
  this->pBindUpdate.pObject = 0i64;
  Scaleform::Lock::DoLock(&this->ResourceBinding.ResourceLock);
  this->ResourceBinding.pOwnerDefRes = pdefImpl;
  Scaleform::Lock::Unlock(&this->ResourceBinding.ResourceLock);
  this->LoadFlags = loadFlags;
  this->BindingCanceled = 0;
  this->BindingFrame = 0;
  this->BytesLoaded = 0;
  this->BindState = 0;
  v11 = 1;
  if ( pdataDef->MovieType == MT_Image )
  {
    Scaleform::String::String(
      &url,
      (const char *)((pdataDef->pData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
    v10 = 1;
    if ( Scaleform::GFx::LoaderImpl::IsProtocolImage(&url, 0i64, 0i64) )
      v11 = 0;
  }
  if ( (v10 & 1) != 0 )
  {
    v12 = (void *)(url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
  }
  if ( v11 )
  {
    v13 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            72i64);
    v14 = (Scaleform::GFx::LoadUpdateSync *)v13;
    if ( v13 )
    {
      *(_QWORD *)v13 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v13 + 8) = 1;
      *(_QWORD *)v13 = &Scaleform::GFx::LoadUpdateSync::`vftable';
      Scaleform::Mutex::Mutex((Scaleform::Mutex *)(v13 + 16), 1, 0);
      Scaleform::WaitCondition::WaitCondition(&v14->WC);
      v14->LoadFinished = 0;
    }
    else
    {
      v14 = 0i64;
    }
    pObject = (Scaleform::RefCountVImpl *)this->pBindUpdate.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pBindUpdate.pObject = v14;
  }
  if ( fullyLoaded )
  {
    this->BindingFrame = this->pDataDef.pObject->GetLoadingFrame(this->pDataDef.pObject);
    this->BytesLoaded = this->pDataDef.pObject->pData.pObject->Header.FileLength;
  }
}

void __fastcall Scaleform::GFx::GFxMovieDataDefFileKeyData::GFxMovieDataDefFileKeyData(
        Scaleform::GFx::GFxMovieDataDefFileKeyData *this,
        const char *pfilename,
        __int64 modifyTime,
        Scaleform::GFx::FileOpener *pfileOpener,
        Scaleform::GFx::ImageCreator *pimageCreator)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v10; // rcx

  this->__vftable = (Scaleform::GFx::GFxMovieDataDefFileKeyData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::GFxMovieDataDefFileKeyData_vtbl *)&Scaleform::GFx::GFxMovieDataDefFileKeyData::`vftable';
  Scaleform::String::String(&this->FileName);
  this->pFileOpener.pObject = 0i64;
  this->pImageCreator.pObject = 0i64;
  Scaleform::String::operator=(&this->FileName, pfilename);
  this->ModifyTime = modifyTime;
  if ( pfileOpener )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfileOpener);
  pObject = (Scaleform::RefCountVImpl *)this->pFileOpener.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFileOpener.pObject = pfileOpener;
  if ( pimageCreator )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pimageCreator);
  v10 = (Scaleform::RefCountVImpl *)this->pImageCreator.pObject;
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  this->pImageCreator.pObject = pimageCreator;
}

void __fastcall Scaleform::GFx::GFxMovieDefImplKey::GFxMovieDefImplKey(
        Scaleform::GFx::GFxMovieDefImplKey *this,
        Scaleform::GFx::MovieDataDef *pdataDef,
        Scaleform::GFx::MovieDefBindStates *pbindStates)
{
  this->__vftable = (Scaleform::GFx::GFxMovieDefImplKey_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::GFxMovieDefImplKey_vtbl *)&Scaleform::GFx::GFxMovieDefImplKey::`vftable';
  this->RefCount = 1;
  if ( pdataDef )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdataDef);
  this->pDataDef.pObject = pdataDef;
  if ( pbindStates )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pbindStates);
  this->pBindStates.pObject = pbindStates;
}

void __fastcall Scaleform::GFx::GFxPlaceObjectUnpacked::GFxPlaceObjectUnpacked(
        Scaleform::GFx::GFxPlaceObjectUnpacked *this)
{
  this->__vftable = (Scaleform::GFx::GFxPlaceObjectUnpacked_vtbl *)&Scaleform::GFx::GFxPlaceObjectUnpacked::`vftable';
  Scaleform::Render::Cxform::Cxform(&this->Pos.ColorTransform);
  *(_QWORD *)&this->Pos.Matrix_1.M[0][2] = 0i64;
  this->Pos.Matrix_1.M[1][0] = 0.0;
  this->Pos.Matrix_1.M[1][3] = 0.0;
  this->Pos.pFilters.pObject = 0i64;
  *(_QWORD *)&this->Pos.Matrix_1.M[0][0] = 1065353216i64;
  *(_QWORD *)&this->Pos.Matrix_1.M[1][1] = 1065353216i64;
  this->Pos.CharacterId.Id = 0x40000;
  *(_DWORD *)&this->Pos.ClipDepth = 0;
  *(_QWORD *)&this->Pos.Ratio = 0i64;
  this->Pos.ClassName = 0i64;
  *(_WORD *)&this->Pos.BlendMode = 256;
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::LoadTaskData(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        Scaleform::GFx::MovieDataDef *pdataDef,
        const char *purl,
        Scaleform::MemoryHeap *pheap)
{
  Scaleform::GFx::Resource *v4; // rsi
  char v8; // bp
  Scaleform::MemoryHeap *v9; // rcx
  Scaleform::GFx::PathAllocator *v10; // rax
  Scaleform::GFx::PathAllocator *v11; // rax
  bool v12; // r14
  void *v13; // rbx
  __int64 v14; // rax
  Scaleform::GFx::LoadUpdateSync *v15; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::SpriteDef *v17; // rax
  Scaleform::GFx::SpriteDef *v18; // rax
  Scaleform::GFx::SpriteDef *v19; // r15
  Scaleform::GFx::TextFieldDef *v20; // rax
  Scaleform::GFx::TextFieldDef *v21; // rax
  Scaleform::GFx::TextFieldDef *v22; // r14
  Scaleform::GFx::ButtonDef *v23; // rax
  Scaleform::GFx::Resource *v24; // rax
  Scaleform::GFx::Resource *v25; // r12
  Scaleform::GFx::SwfShapeCharacterDef *v26; // r13
  Scaleform::GFx::ShapeDataBase *v27; // rax
  Scaleform::GFx::ShapeDataBase *v28; // rbx
  Scaleform::GFx::Resource *v29; // rax
  Scaleform::GFx::ResourceId v30; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::String url; // [rsp+28h] [rbp-40h] BYREF
  Scaleform::GFx::ShapeDataBase *rid; // [rsp+70h] [rbp+8h] BYREF
  Scaleform::GFx::ResourceId v33; // [rsp+78h] [rbp+10h] BYREF
  Scaleform::GFx::ResourceId v34; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0i64;
  LODWORD(rid) = 0;
  this->__vftable = (Scaleform::GFx::MovieDataDef::LoadTaskData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->TagMemAllocator.pHeap = pheap;
  this->TagMemAllocator.pAllocations = 0i64;
  this->TagMemAllocator.pCurrent = 0i64;
  v8 = 0;
  this->TagMemAllocator.BytesLeft = 0i64;
  this->pPathAllocator = 0i64;
  this->__vftable = (Scaleform::GFx::MovieDataDef::LoadTaskData_vtbl *)&Scaleform::GFx::MovieDataDef::LoadTaskData::`vftable';
  this->pHeap = pheap;
  this->pImageHeap.pObject = 0i64;
  Scaleform::StringLH::StringLH(&this->FileURL, purl);
  Scaleform::GFx::MovieHeaderData::MovieHeaderData(&this->Header);
  this->pFrameUpdate.pObject = 0i64;
  this->BindData.pFrameData.Value = 0i64;
  this->BindData.pFrameDataLast = 0i64;
  this->BindData.pImports.Value = 0i64;
  this->BindData.pImportsLast = 0i64;
  this->BindData.pFonts.Value = 0i64;
  this->BindData.pFontsLast = 0i64;
  this->BindData.pResourceNodes.Value = 0i64;
  this->BindData.pResourceNodesLast = 0i64;
  Scaleform::Lock::Lock(&this->ResourceLock, 0);
  this->pExtMovieDef.pObject = 0i64;
  this->Resources.mHash.pTable = 0i64;
  this->Exports.mHash.pTable = 0i64;
  this->InvExports.mHash.pTable = 0i64;
  Scaleform::Lock::Lock(&this->PlaylistLock, 0);
  this->Playlist.Data.Data = 0i64;
  this->Playlist.Data.Size = 0i64;
  this->Playlist.Data.Policy.Capacity = 0i64;
  this->InitActionList.Data.Data = 0i64;
  this->InitActionList.Data.Size = 0i64;
  this->InitActionList.Data.Policy.Capacity = 0i64;
  this->NamedFrames.mHash.pTable = 0i64;
  this->GradientIdGenerator.Id = 327680;
  this->Scenes.pObject = 0i64;
  this->Scenes.Owner = 1;
  v9 = this->pHeap;
  this->FileAttributes = 0;
  this->pMetadata = 0i64;
  this->MetadataSize = 0;
  v10 = (Scaleform::GFx::PathAllocator *)v9->Alloc(v9, 24ui64, 0i64);
  if ( v10 )
    Scaleform::GFx::PathAllocator::PathAllocator(v10, 0x2000u);
  else
    v11 = 0i64;
  this->pPathAllocator = v11;
  this->LoadingCanceled = 0;
  *(_QWORD *)&this->LoadState = 0i64;
  this->TagCount = 0;
  this->ResIndexCounter = 0;
  this->InitActionsCnt = 0;
  v12 = 1;
  if ( pdataDef->MovieType == MT_Image )
  {
    Scaleform::String::String(&url, purl);
    v8 = 1;
    if ( Scaleform::GFx::LoaderImpl::IsProtocolImage(&url, 0i64, 0i64) )
      v12 = 0;
  }
  if ( (v8 & 1) != 0 )
  {
    v13 = (void *)(url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v8 &= ~1u;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13);
  }
  if ( v12 )
  {
    v14 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            72i64);
    v15 = (Scaleform::GFx::LoadUpdateSync *)v14;
    if ( v14 )
    {
      *(_QWORD *)v14 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v14 + 8) = 1;
      *(_QWORD *)v14 = &Scaleform::GFx::LoadUpdateSync::`vftable';
      Scaleform::Mutex::Mutex((Scaleform::Mutex *)(v14 + 16), 1, 0);
      Scaleform::WaitCondition::WaitCondition(&v15->WC);
      v15->LoadFinished = 0;
    }
    else
    {
      v15 = 0i64;
    }
    pObject = (Scaleform::RefCountVImpl *)this->pFrameUpdate.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFrameUpdate.pObject = v15;
  }
  v17 = (Scaleform::GFx::SpriteDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                       this->pHeap,
                                       96i64);
  if ( v17 )
  {
    Scaleform::GFx::SpriteDef::SpriteDef(v17, pdataDef);
    v19 = v18;
  }
  else
  {
    v19 = 0i64;
  }
  Scaleform::GFx::SpriteDef::InitEmptyClipDef(v19);
  LODWORD(rid) = 65537;
  Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(this, (Scaleform::GFx::ResourceId)&rid, v19);
  v20 = (Scaleform::GFx::TextFieldDef *)this->pHeap->Alloc(this->pHeap, 144i64, 0i64);
  if ( v20 )
  {
    Scaleform::GFx::TextFieldDef::TextFieldDef(v20);
    v22 = v21;
  }
  else
  {
    v22 = 0i64;
  }
  Scaleform::GFx::TextFieldDef::InitEmptyTextDef(v22);
  v33.Id = 65538;
  Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(this, (Scaleform::GFx::ResourceId)&v33, v22);
  v23 = (Scaleform::GFx::ButtonDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                       this->pHeap,
                                       96i64);
  if ( v23 )
  {
    Scaleform::GFx::ButtonDef::ButtonDef(v23);
    v25 = v24;
  }
  else
  {
    v25 = 0i64;
  }
  v34.Id = 65539;
  Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(this, (Scaleform::GFx::ResourceId)&v34, v25);
  v26 = (Scaleform::GFx::SwfShapeCharacterDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                                  this->pHeap,
                                                  48i64);
  if ( v26 )
  {
    v27 = (Scaleform::GFx::ShapeDataBase *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                             this->pHeap,
                                             32i64);
    v28 = v27;
    if ( v27 )
    {
      Scaleform::GFx::ShapeDataBase::ShapeDataBase(v27, Empty_Shape);
      v28->__vftable = (Scaleform::GFx::ShapeDataBase_vtbl *)&Scaleform::GFx::ConstShapeNoStyles::`vftable';
    }
    else
    {
      v28 = 0i64;
    }
    v8 |= 2u;
    Scaleform::GFx::SwfShapeCharacterDef::SwfShapeCharacterDef(v26, v28);
    v4 = v29;
  }
  else
  {
    v28 = rid;
  }
  if ( (v8 & 2) != 0 && v28 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v28);
  v30.Id = 65540;
  Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(this, (Scaleform::GFx::ResourceId)&v30, v4);
  if ( v4 )
    Scaleform::GFx::Resource::Release(v4);
  if ( v25 )
    Scaleform::GFx::Resource::Release(v25);
  if ( v22 )
    Scaleform::GFx::Resource::Release(v22);
  if ( v19 )
    Scaleform::GFx::Resource::Release(v19);
}

void __fastcall Scaleform::GFx::MovieBindProcess::MovieBindProcess(
        Scaleform::GFx::MovieBindProcess *this,
        Scaleform::GFx::LoadStates *pls,
        Scaleform::GFx::MovieDefImpl *pdefImpl,
        Scaleform::GFx::LoaderImpl::LoadStackItem *ploadStack)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v9; // rax
  Scaleform::GFx::MovieDataDef *v10; // rcx
  bool v11; // al
  Scaleform::GFx::ImagePackParamsBase *v12; // r14
  Scaleform::GFx::ImageFileHandlerRegistry *v13; // rbp
  Scaleform::GFx::FileOpener *v14; // r15
  Scaleform::GFx::LogState *v15; // rax
  Scaleform::Log *GlobalLog; // rax
  Scaleform::GFx::MovieDefImpl_vtbl *v17; // rax
  __int64 v18; // rax
  Scaleform::GFx::ImagePackParamsBase_vtbl *v19; // r10
  __int64 v20; // rax
  Scaleform::GFx::ImagePacker *v21; // rcx
  Scaleform::GFx::ImagePacker *v22; // rbx
  Scaleform::GFx::TempBindData *v23; // rax
  volatile int *v24; // rbx
  int v25; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+28h] [rbp-80h]
  int v27; // [rsp+30h] [rbp-78h]
  int v28; // [rsp+34h] [rbp-74h]
  Scaleform::Log *v29; // [rsp+38h] [rbp-70h]
  __int128 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+50h] [rbp-58h]
  Scaleform::String v32; // [rsp+68h] [rbp-40h] BYREF

  Scaleform::GFx::LoaderTask::LoaderTask(this, pls, Id_MovieBind);
  this->__vftable = (Scaleform::GFx::MovieBindProcess_vtbl *)&Scaleform::GFx::MovieBindProcess::`vftable';
  this->pFrameBindData = 0i64;
  this->GlyphTextureIdGen.Id = 589824;
  this->pImagePacker.pObject = 0i64;
  pObject = (Scaleform::RefCountVImpl *)pdefImpl->pBindData.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v9 = pdefImpl->pBindData.pObject;
  this->pBindData.pObject = v9;
  this->pLoadStack = ploadStack;
  v10 = v9->pDataDef.pObject;
  this->pDataDef = v10;
  v11 = (((__int64 (__fastcall *)(Scaleform::GFx::MovieDataDef *))v10->GetSWFFlags)(v10) & 0x10) != 0;
  this->Stripped = v11;
  v12 = pls->pBindStates.pObject->pImagePackParams.pObject;
  if ( !v12 || v11 )
  {
    this->pTempBindData = 0i64;
  }
  else
  {
    v30 = 0i64;
    v25 = 2;
    v26 = 0i64;
    v27 = 1;
    v28 = 1;
    v29 = 0i64;
    v31 = 0i64;
    Scaleform::String::String(&v32);
    v13 = pls->pImageFileHandlerRegistry.pObject;
    v14 = pls->pBindStates.pObject->pFileOpener.pObject;
    v15 = pls->pLog.pObject;
    if ( v15 )
    {
      GlobalLog = v15->pLog.pObject;
      if ( !GlobalLog )
        GlobalLog = Scaleform::Log::GetGlobalLog();
    }
    else
    {
      GlobalLog = 0i64;
    }
    v29 = GlobalLog;
    v17 = pdefImpl->Scaleform::GFx::MovieDef::Scaleform::GFx::Resource::__vftable;
    *(_QWORD *)&v30 = v14;
    *((_QWORD *)&v30 + 1) = v13;
    v18 = (__int64)v17->GetBindDataHeap(pdefImpl);
    v19 = v12->__vftable;
    v26 = v18;
    v20 = (__int64)v19->Begin(
                     v12,
                     &this->GlyphTextureIdGen,
                     pls->pBindStates.pObject->pImageCreator.pObject,
                     (Scaleform::GFx::ImageCreateInfo *)&v25);
    v21 = this->pImagePacker.pObject;
    v22 = (Scaleform::GFx::ImagePacker *)v20;
    if ( v21 )
      Scaleform::RefCountNTSImpl::Release(v21);
    this->pImagePacker.pObject = v22;
    v22->SetBindData(v22, this->pBindData.pObject);
    v23 = (Scaleform::GFx::TempBindData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                            Scaleform::Memory::pGlobalHeap,
                                            8i64);
    if ( v23 )
      v23->FillStyleImageWrap.pTable = 0i64;
    else
      v23 = 0i64;
    v24 = (volatile int *)(v32.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    this->pTempBindData = v23;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v24 + 2, -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v24);
  }
}

void __fastcall Scaleform::GFx::MovieDataDef::MovieDataDef(
        Scaleform::GFx::MovieDataDef *this,
        const Scaleform::GFx::ResourceKey *creationKey,
        Scaleform::GFx::MovieDataDef::MovieDataType mtype,
        const char *purl,
        Scaleform::MemoryHeap *pargHeap,
        bool debugHeap,
        unsigned __int64 memoryArena)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *v8; // rbp
  Scaleform::MemoryHeap *v11; // rsi
  const char *ShortFilename; // rax
  bool v13; // cf
  Scaleform::MemoryHeap *v14; // rax
  void *v15; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v16; // rax
  Scaleform::GFx::MovieDataDef::LoadTaskData *v17; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  bool v19; // zf
  int v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+48h] [rbp-30h]
  __int64 v26; // [rsp+50h] [rbp-28h]
  unsigned __int64 v27; // [rsp+58h] [rbp-20h]
  Scaleform::String v28; // [rsp+80h] [rbp+8h] BYREF

  this->Scaleform::GFx::TimelineDef::Scaleform::GFx::CharacterDef::Scaleform::GFx::Resource::__vftable = (Scaleform::GFx::MovieDataDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
  v8 = 0i64;
  this->RefCount.Value = 1;
  this->pLib = 0i64;
  this->Id.Id = 0x40000;
  this->Scaleform::GFx::TimelineDef::Scaleform::GFx::CharacterDef::Scaleform::GFx::Resource::__vftable = (Scaleform::GFx::MovieDataDef_vtbl *)&Scaleform::GFx::MovieDataDef::`vftable'{for `Scaleform::GFx::TimelineDef'};
  this->Scaleform::GFx::ResourceReport::__vftable = (Scaleform::GFx::ResourceReport_vtbl *)&Scaleform::GFx::MovieDataDef::`vftable'{for `Scaleform::GFx::ResourceReport'};
  Scaleform::GFx::ResourceKey::ResourceKey(&this->mResourceKey, creationKey);
  v11 = pargHeap;
  this->MovieType = mtype;
  this->pData.pObject = 0i64;
  if ( !v11 )
  {
    ShortFilename = Scaleform::GetShortFilename(purl);
    Scaleform::String::String(&v28, "MovieData \"", ShortFilename, "\"");
    v13 = debugHeap;
    debugHeap = -debugHeap;
    v21 = 16i64;
    v24 = -1i64;
    v25 = 0i64;
    v22 = 0x2000i64;
    v20 = (v13 ? 0x1000 : 0) | 4;
    v27 = memoryArena;
    v23 = 0i64;
    v26 = 4i64;
    v14 = Scaleform::Memory::pGlobalHeap->CreateHeap(
            Scaleform::Memory::pGlobalHeap,
            (v28.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
            &v20);
    v15 = (void *)(v28.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v11 = v14;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v28.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
  }
  v16 = (Scaleform::GFx::MovieDataDef::LoadTaskData *)v11->Alloc(v11, 544ui64, 0i64);
  if ( v16 )
  {
    Scaleform::GFx::MovieDataDef::LoadTaskData::LoadTaskData(v16, this, purl, v11);
    v8 = v17;
  }
  pObject = (Scaleform::RefCountVImpl *)this->pData.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v19 = pargHeap == 0i64;
  this->pData.pObject = v8;
  if ( v19 )
    Scaleform::MemoryHeap::ReleaseOnFree(v11, v8);
}

void __fastcall Scaleform::GFx::MovieDefImpl::MovieDefImpl(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::MovieDataDef *pdataDef,
        Scaleform::GFx::MovieDefBindStates *pstates,
        Scaleform::GFx::LoaderImpl *ploaderImpl,
        unsigned int loadConstantFlags,
        Scaleform::GFx::StateBagImpl *pdelegateState,
        Scaleform::MemoryHeap *pargHeap,
        bool fullyLoaded,
        unsigned __int64 memoryArena)
{
  Scaleform::GFx::StateBagImpl *v9; // rsi
  Scaleform::MemoryHeap *v14; // r14
  const char *ShortFilename; // rax
  Scaleform::MemoryHeap *v16; // rax
  void *v17; // rbx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v18; // rax
  Scaleform::GFx::MovieDefImpl::BindTaskData *v19; // rax
  Scaleform::GFx::MovieDefImpl::BindTaskData *v20; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v22; // rcx
  Scaleform::RefCountVImpl *v23; // rcx
  Scaleform::GFx::StateBagImpl *v24; // rax
  Scaleform::GFx::StateBagImpl *v25; // rax
  Scaleform::RefCountVImpl *v26; // rcx
  unsigned int v27; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28; // [rsp+38h] [rbp-60h]
  __int64 v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  __int64 v32; // [rsp+58h] [rbp-40h]
  __int64 v33; // [rsp+60h] [rbp-38h]
  unsigned __int64 v34; // [rsp+68h] [rbp-30h]
  Scaleform::String v35; // [rsp+A0h] [rbp+8h] BYREF

  v9 = 0i64;
  this->Scaleform::GFx::MovieDef::Scaleform::GFx::Resource::__vftable = (Scaleform::GFx::MovieDefImpl_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->Scaleform::GFx::MovieDef::Scaleform::GFx::Resource::__vftable = (Scaleform::GFx::MovieDefImpl_vtbl *)&Scaleform::GFx::MovieDefImpl::`vftable'{for `Scaleform::GFx::Resource'};
  this->pLib = 0i64;
  this->Scaleform::GFx::MovieDef::Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::MovieDefImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  this->pStateBag.pObject = 0i64;
  this->pLoaderImpl.pObject = 0i64;
  this->pBindStates.pObject = 0i64;
  this->ReleaseNotifiers.pTable = 0i64;
  Scaleform::Lock::Lock(&this->ReleaseNotifiersLock, 0);
  v14 = pargHeap;
  this->pBindData.pObject = 0i64;
  if ( !v14 )
  {
    ShortFilename = Scaleform::GetShortFilename((const char *)((pdataDef->pData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64)
                                                             + 12));
    Scaleform::String::String(&v35, "MovieDef  \"", ShortFilename, "\"");
    v28 = 16i64;
    v27 = HIWORD(loadConstantFlags) & 0x1000;
    v34 = memoryArena;
    v29 = 4096i64;
    v30 = 4096i64;
    v31 = -1i64;
    v32 = 0i64;
    v33 = 2i64;
    v16 = Scaleform::Memory::pGlobalHeap->CreateHeap(
            Scaleform::Memory::pGlobalHeap,
            (v35.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
            &v27);
    v17 = (void *)(v35.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v14 = v16;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v35.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
  }
  v18 = (Scaleform::GFx::MovieDefImpl::BindTaskData *)v14->Alloc(v14, 272ui64, 0i64);
  if ( v18 )
  {
    Scaleform::GFx::MovieDefImpl::BindTaskData::BindTaskData(v18, v14, pdataDef, this, loadConstantFlags, fullyLoaded);
    v20 = v19;
  }
  else
  {
    v20 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->pBindData.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pBindData.pObject = v20;
  if ( !pargHeap )
    Scaleform::MemoryHeap::ReleaseOnFree(v14, v20);
  if ( ploaderImpl )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)ploaderImpl);
  v22 = (Scaleform::RefCountVImpl *)this->pLoaderImpl.pObject;
  if ( v22 )
    Scaleform::RefCountImpl::Release(v22);
  this->pLoaderImpl.pObject = ploaderImpl;
  if ( pstates )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pstates);
  v23 = (Scaleform::RefCountVImpl *)this->pBindStates.pObject;
  if ( v23 )
    Scaleform::RefCountImpl::Release(v23);
  this->pBindStates.pObject = pstates;
  v24 = (Scaleform::GFx::StateBagImpl *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                          Scaleform::Memory::pGlobalHeap,
                                          96i64);
  if ( v24 )
  {
    Scaleform::GFx::StateBagImpl::StateBagImpl(v24, pdelegateState);
    v9 = v25;
  }
  v26 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject;
  if ( v26 )
    Scaleform::RefCountImpl::Release(v26);
  this->pStateBag.pObject = v9;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *pTable; // rbx
  unsigned __int64 SizeMask; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
      {
        SizeMask = pTable[v2 + 2].SizeMask;
        if ( SizeMask )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(SizeMask + 16) + 16i64))(SizeMask + 16);
        pTable[v2 + 1].EntryCount = -2i64;
      }
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // rdi
  volatile int *v5; // rbx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
      {
        v5 = (volatile int *)(pTable[v2 + 2].SizeMask & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
        pTable[v2 + 1].EntryCount = -2i64;
      }
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rdi
  volatile int *v5; // rbx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
      {
        v5 = (volatile int *)(pTable[v2 + 2].EntryCount & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
        pTable[v2 + 1].EntryCount = -2i64;
      }
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rdi
  volatile int *v5; // rbx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
      {
        v5 = (volatile int *)(pTable[v2 + 2].EntryCount & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
        pTable[v2 + 1].EntryCount = -2i64;
      }
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rdi
  Scaleform::GFx::Resource *v5; // rcx
  volatile int *v6; // rbx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
      {
        if ( !*(_DWORD *)((char *)&pTable[2].SizeMask + v2) )
        {
          v5 = *(Scaleform::GFx::Resource **)((char *)&pTable[3].EntryCount + v2);
          if ( v5 )
            Scaleform::GFx::Resource::Release(v5);
        }
        v6 = (volatile int *)(*(unsigned __int64 *)((_BYTE *)&pTable[2].EntryCount + v2) & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
        *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v2) = -2i64;
      }
      v2 += 40i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::~BindTaskData(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this)
{
  Scaleform::GFx::LoadUpdateSync *pObject; // rcx
  Scaleform::GFx::LoadUpdateSync *v3; // rcx
  Scaleform::RefCountVImpl *v4; // rcx
  unsigned __int64 Size; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *i; // rbx
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *j; // rbx
  Scaleform::GFx::MovieDataDef *v9; // rcx

  this->__vftable = (Scaleform::GFx::MovieDefImpl::BindTaskData_vtbl *)&Scaleform::GFx::MovieDefImpl::BindTaskData::`vftable';
  pObject = this->pBindUpdate.pObject;
  if ( pObject )
    Scaleform::Mutex::DoLock(&pObject->mMutex);
  Scaleform::GFx::ResourceBinding::Destroy(&this->ResourceBinding);
  v3 = this->pBindUpdate.pObject;
  if ( v3 )
    Scaleform::Mutex::Unlock(&v3->mMutex);
  v4 = (Scaleform::RefCountVImpl *)this->pBindUpdate.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::Clear(&this->BoundShapeMeshProviders.mHash);
  Size = this->ResourceImports.Data.Size;
  for ( i = &this->ResourceImports.Data.Data[Size - 1]; Size; --Size )
  {
    if ( i->pObject )
      Scaleform::GFx::Resource::Release(i->pObject);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ResourceImports.Data.Data);
  Scaleform::Lock::~Lock(&this->ImportSourceLock);
  v7 = this->ImportSourceMovies.Data.Size;
  for ( j = &this->ImportSourceMovies.Data.Data[v7 - 1]; v7; --v7 )
  {
    if ( j->pObject )
      Scaleform::GFx::Resource::Release(j->pObject);
    --j;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ImportSourceMovies.Data.Data);
  Scaleform::GFx::ResourceBinding::~ResourceBinding(&this->ResourceBinding);
  v9 = this->pDataDef.pObject;
  if ( v9 )
    Scaleform::GFx::Resource::Release(v9);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::MovieDataDef::DefBindingData::~DefBindingData(
        Scaleform::GFx::MovieDataDef::DefBindingData *this)
{
  Scaleform::GFx::FrameBindData *volatile Value; // rax
  Scaleform::GFx::ImportData *volatile v3; // r15
  volatile int *v4; // rbx
  unsigned __int64 Size; // rsi
  unsigned __int64 *i; // rdi
  volatile int *v7; // rbx
  Scaleform::GFx::ResourceDataNode *volatile v8; // rdx
  Scaleform::GFx::FontDataUseNode *volatile v9; // rdx
  Scaleform::RefCountVImpl *pObject; // rcx

  Value = this->pFrameData.Value;
  for ( this->pFrameData.Value = 0i64; Value; Value = Value->pNextFrame.Value )
    ;
  while ( this->pImports.Value )
  {
    v3 = this->pImports.Value;
    this->pImports.Value = v3->pNext.Value;
    v4 = (volatile int *)(v3->SourceUrl.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
    Size = v3->Imports.Data.Size;
    for ( i = (unsigned __int64 *)&v3->Imports.Data.Data[Size - 1]; Size; --Size )
    {
      v7 = (volatile int *)(*i & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v7 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v7);
      i -= 2;
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3->Imports.Data.Data);
  }
  while ( this->pResourceNodes.Value )
  {
    v8 = this->pResourceNodes.Value;
    this->pResourceNodes.Value = v8->pNext.Value;
    if ( v8->Data.pInterface )
      v8->Data.pInterface->Release(v8->Data.pInterface, v8->Data.hData);
  }
  while ( this->pFonts.Value )
  {
    v9 = this->pFonts.Value;
    this->pFonts.Value = v9->pNext.Value;
    pObject = (Scaleform::RefCountVImpl *)v9->pFontData.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
  }
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::~LoadTaskData(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *v1; // rbx
  bool v2; // cc
  unsigned int v4; // esi
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rax
  Scaleform::GFx::PathAllocator *pPathAllocator; // rsi
  Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *pObject; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *pTable; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v13; // rbx
  Scaleform::GFx::Resource *SizeMask; // rcx
  Scaleform::GFx::MovieDef *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rcx
  volatile int *v17; // rbx
  volatile int *v18; // rbx
  volatile int *v19; // rbx
  Scaleform::MemoryHeap *v20; // rcx
  Scaleform::GFx::DataAllocator::Block *pNext; // rbx

  v1 = 0i64;
  v2 = this->LoadState < LS_LoadFinished;
  this->__vftable = (Scaleform::GFx::MovieDataDef::LoadTaskData_vtbl *)&Scaleform::GFx::MovieDataDef::LoadTaskData::`vftable';
  if ( v2 )
  {
    v1 = this;
    Scaleform::Lock::DoLock(&this->ResourceLock);
  }
  v4 = 0;
  if ( this->Playlist.Data.Size )
  {
    v5 = 0i64;
    do
    {
      Scaleform::GFx::TimelineDef::Frame::DestroyTags(&this->Playlist.Data.Data[v5]);
      v5 = ++v4;
    }
    while ( v4 < this->Playlist.Data.Size );
  }
  v6 = 0;
  if ( this->InitActionList.Data.Size )
  {
    v7 = 0i64;
    do
    {
      Scaleform::GFx::TimelineDef::Frame::DestroyTags(&this->InitActionList.Data.Data[v7]);
      v7 = ++v6;
    }
    while ( v6 < this->InitActionList.Data.Size );
  }
  pPathAllocator = this->pPathAllocator;
  if ( pPathAllocator )
  {
    Scaleform::GFx::PathAllocator::Clear(this->pPathAllocator);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pPathAllocator);
  }
  if ( this->pMetadata )
  {
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pMetadata = 0i64;
  }
  if ( v1 )
    Scaleform::Lock::Unlock(&v1->ResourceLock);
  pObject = this->Scenes.pObject;
  if ( pObject )
  {
    if ( this->Scenes.Owner )
    {
      this->Scenes.Owner = 0;
      Scaleform::ConstructorMov<Scaleform::GFx::MovieDataDef::SceneInfo>::DestructArray(
        pObject->Data.Data,
        pObject->Data.Size);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject->Data.Data);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
    this->Scenes.pObject = 0i64;
  }
  this->Scenes.Owner = 0;
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(&this->NamedFrames.mHash);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->InitActionList.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Playlist.Data.Data);
  Scaleform::Lock::~Lock(&this->PlaylistLock);
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Clear(&this->InvExports.mHash);
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Clear(&this->Exports.mHash);
  pTable = this->Resources.mHash.pTable;
  if ( pTable )
  {
    v11 = 0i64;
    v12 = pTable->SizeMask + 1;
    do
    {
      v13 = &this->Resources.mHash.pTable[v11];
      if ( v13[1].EntryCount != -2i64 )
      {
        if ( !LODWORD(v13[2].EntryCount) )
        {
          SizeMask = (Scaleform::GFx::Resource *)v13[2].SizeMask;
          if ( SizeMask )
            Scaleform::GFx::Resource::Release(SizeMask);
        }
        v13[1].EntryCount = -2i64;
      }
      v11 += 2i64;
      --v12;
    }
    while ( v12 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Resources.mHash.pTable);
    this->Resources.mHash.pTable = 0i64;
  }
  v15 = this->pExtMovieDef.pObject;
  if ( v15 )
    Scaleform::GFx::Resource::Release(v15);
  Scaleform::Lock::~Lock(&this->ResourceLock);
  Scaleform::GFx::MovieDataDef::DefBindingData::~DefBindingData(&this->BindData);
  v16 = (Scaleform::RefCountVImpl *)this->pFrameUpdate.pObject;
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
  if ( this->Header.mExporterInfo.CodeOffsets.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v17 = (volatile int *)(this->Header.mExporterInfo.SWFName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v17 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v17);
  v18 = (volatile int *)(this->Header.mExporterInfo.Prefix.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v18 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v18);
  v19 = (volatile int *)(this->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v19 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v19);
  v20 = this->pImageHeap.pObject;
  if ( v20 )
    v20->Release(v20);
  if ( this->TagMemAllocator.pAllocations )
  {
    do
    {
      pNext = this->TagMemAllocator.pAllocations->pNext;
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->TagMemAllocator.pAllocations);
      this->TagMemAllocator.pAllocations = pNext;
    }
    while ( pNext );
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::MovieBindProcess::~MovieBindProcess(Scaleform::GFx::MovieBindProcess *this)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rsi
  Scaleform::GFx::MovieDefImpl::BindTaskData *v3; // rax
  Scaleform::RefCountVImpl *v4; // rcx
  Scaleform::GFx::TempBindData *pTempBindData; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  Scaleform::GFx::ImagePacker *v8; // rcx
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::GFx::ImagePacker *v10; // rcx

  pObject = this->pBindData.pObject;
  this->__vftable = (Scaleform::GFx::MovieBindProcess_vtbl *)&Scaleform::GFx::MovieBindProcess::`vftable';
  if ( pObject )
  {
    pObject = (Scaleform::GFx::MovieDefImpl::BindTaskData *)pObject->pBindUpdate.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject);
  }
  v3 = this->pBindData.pObject;
  if ( v3 )
  {
    if ( (v3->BindState & 0xF) == 1 )
      Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(this->pBindData.pObject, 3u);
    v4 = (Scaleform::RefCountVImpl *)this->pBindData.pObject;
    if ( v4 )
      Scaleform::RefCountImpl::Release(v4);
    this->pBindData.pObject = 0i64;
  }
  pTempBindData = this->pTempBindData;
  if ( pTempBindData )
  {
    if ( pTempBindData->FillStyleImageWrap.pTable )
    {
      v6 = 0i64;
      v7 = pTempBindData->FillStyleImageWrap.pTable->SizeMask + 1;
      do
      {
        if ( *(unsigned __int64 *)((char *)&pTempBindData->FillStyleImageWrap.pTable[1].EntryCount + v6) != -2i64 )
          *(unsigned __int64 *)((char *)&pTempBindData->FillStyleImageWrap.pTable[1].EntryCount + v6) = -2i64;
        v6 += 24i64;
        --v7;
      }
      while ( v7 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pTempBindData->FillStyleImageWrap.pTable);
      pTempBindData->FillStyleImageWrap.pTable = 0i64;
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pTempBindData);
  }
  v8 = this->pImagePacker.pObject;
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
  this->pImagePacker.pObject = 0i64;
  if ( pObject )
  {
    Scaleform::Mutex::DoLock((Scaleform::Mutex *)&pObject->pHeap);
    LOBYTE(pObject->ResourceBinding.pResources) = 1;
    Scaleform::WaitCondition::NotifyAll((Scaleform::WaitCondition *)&pObject->ResourceBinding.ResourceCount);
    Scaleform::Mutex::Unlock((Scaleform::Mutex *)&pObject->pHeap);
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pObject);
  }
  v9 = (Scaleform::RefCountVImpl *)this->pBindData.pObject;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  v10 = this->pImagePacker.pObject;
  if ( v10 )
    Scaleform::RefCountNTSImpl::Release(v10);
  Scaleform::GFx::LoaderTask::~LoaderTask(this);
}

void __fastcall Scaleform::GFx::MovieDataDef::~MovieDataDef(Scaleform::GFx::MovieDataDef *this)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rax
  Scaleform::RefCountVImpl *v3; // rcx
  Scaleform::GFx::ResourceKey::KeyInterface *pKeyInterface; // rcx

  this->Scaleform::GFx::TimelineDef::Scaleform::GFx::CharacterDef::Scaleform::GFx::Resource::__vftable = (Scaleform::GFx::MovieDataDef_vtbl *)&Scaleform::GFx::MovieDataDef::`vftable'{for `Scaleform::GFx::TimelineDef'};
  this->Scaleform::GFx::ResourceReport::__vftable = (Scaleform::GFx::ResourceReport_vtbl *)&Scaleform::GFx::MovieDataDef::`vftable'{for `Scaleform::GFx::ResourceReport'};
  pObject = this->pData.pObject;
  if ( pObject->LoadState <= LS_LoadingFrames )
    pObject->LoadingCanceled = 1;
  v3 = (Scaleform::RefCountVImpl *)this->pData.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  pKeyInterface = this->mResourceKey.pKeyInterface;
  if ( pKeyInterface )
    pKeyInterface->Release(pKeyInterface, this->mResourceKey.hKeyData);
  this->Scaleform::GFx::ResourceReport::__vftable = (Scaleform::GFx::ResourceReport_vtbl *)&Scaleform::GFx::ResourceReport::`vftable';
  this->Scaleform::GFx::TimelineDef::Scaleform::GFx::CharacterDef::Scaleform::GFx::Resource::__vftable = (Scaleform::GFx::MovieDataDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
}

void __fastcall Scaleform::GFx::MovieDefImpl::~MovieDefImpl(Scaleform::GFx::MovieDefImpl *this)
{
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *pTable; // rax
  unsigned __int64 v3; // rdi
  Scaleform::HashSetLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > *p_ReleaseNotifiers; // rsi
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *v6; // rax
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *v15; // rax
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::RefCountVImpl *v17; // rcx
  Scaleform::RefCountVImpl *v18; // rcx

  this->Scaleform::GFx::MovieDef::Scaleform::GFx::Resource::__vftable = (Scaleform::GFx::MovieDefImpl_vtbl *)&Scaleform::GFx::MovieDefImpl::`vftable'{for `Scaleform::GFx::Resource'};
  this->Scaleform::GFx::MovieDef::Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::MovieDefImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  Scaleform::Lock::DoLock(&this->ReleaseNotifiersLock);
  pTable = this->ReleaseNotifiers.pTable;
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
      v6 = (Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *)((char *)v6 + 24);
    }
    while ( v3 <= SizeMask );
    p_ReleaseNotifiers = &this->ReleaseNotifiers;
  }
  else
  {
    v3 = 0i64;
    p_ReleaseNotifiers = 0i64;
  }
  while ( p_ReleaseNotifiers )
  {
    v7 = p_ReleaseNotifiers->pTable;
    if ( !p_ReleaseNotifiers->pTable || (signed __int64)v3 > (signed __int64)v7->SizeMask )
      break;
    v8 = *(&v7[2].EntryCount + 3 * v3);
    if ( v8 )
      (*(void (__fastcall **)(__int64, Scaleform::GFx::MovieDefImpl *))(*(_QWORD *)v8 + 8i64))(v8, this);
    v9 = p_ReleaseNotifiers->pTable->SizeMask;
    if ( (__int64)v3 <= (__int64)v9 && ++v3 <= v9 )
    {
      v10 = &p_ReleaseNotifiers->pTable[1].EntryCount + 3 * v3;
      do
      {
        if ( *v10 != -2i64 )
          break;
        ++v3;
        v10 += 3;
      }
      while ( v3 <= v9 );
    }
  }
  Scaleform::Lock::Unlock(&this->ReleaseNotifiersLock);
  Scaleform::GFx::MovieDefImpl::BindTaskData::OnMovieDefRelease(this->pBindData.pObject);
  pObject = (Scaleform::RefCountVImpl *)this->pBindData.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::Lock::~Lock(&this->ReleaseNotifiersLock);
  v12 = this->ReleaseNotifiers.pTable;
  if ( v12 )
  {
    v13 = 0i64;
    v14 = v12->SizeMask + 1;
    do
    {
      v15 = this->ReleaseNotifiers.pTable;
      if ( *(unsigned __int64 *)((char *)&v15[1].EntryCount + v13) != -2i64 )
        *(unsigned __int64 *)((char *)&v15[1].EntryCount + v13) = -2i64;
      v13 += 24i64;
      --v14;
    }
    while ( v14 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ReleaseNotifiers.pTable);
    this->ReleaseNotifiers.pTable = 0i64;
  }
  v16 = (Scaleform::RefCountVImpl *)this->pBindStates.pObject;
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
  v17 = (Scaleform::RefCountVImpl *)this->pLoaderImpl.pObject;
  if ( v17 )
    Scaleform::RefCountImpl::Release(v17);
  v18 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject;
  if ( v18 )
    Scaleform::RefCountImpl::Release(v18);
  this->Scaleform::GFx::MovieDef::Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::StateBag::`vftable';
  this->Scaleform::GFx::MovieDef::Scaleform::GFx::Resource::__vftable = (Scaleform::GFx::MovieDefImpl_vtbl *)&Scaleform::GFx::Resource::`vftable';
}

Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> > *__fastcall Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>>::operator=(
        Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *p)
{
  Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *pObject; // rdi

  pObject = this->pObject;
  if ( this->pObject != p )
  {
    if ( pObject && this->Owner )
    {
      this->Owner = 0;
      Scaleform::ConstructorMov<Scaleform::GFx::MovieDataDef::SceneInfo>::DestructArray(
        pObject->Data.Data,
        pObject->Data.Size);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject->Data.Data);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
    this->pObject = p;
  }
  this->Owner = p != 0i64;
  return this;
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

Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *__fastcall Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::operator=(
        Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *this,
        const Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *__that)
{
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::Resource *v5; // rcx

  Scaleform::String::operator=(&this->First, &__that->First);
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

void __fastcall Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::operator=(
        Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *this,
        const Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeRef *src)
{
  const Scaleform::GFx::ResourceHandle *pSecond; // rbx
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::Resource *v6; // rcx

  Scaleform::String::operator=(&this->First, src->pFirst);
  pSecond = src->pSecond;
  if ( pSecond->HType == RH_Pointer )
  {
    pResource = (Scaleform::RefCountVImpl *)pSecond->pResource;
    if ( pResource )
      Scaleform::Render::RenderBuffer::AddRef(pResource);
  }
  if ( this->Second.HType == RH_Pointer )
  {
    v6 = this->Second.pResource;
    if ( v6 )
      Scaleform::GFx::Resource::Release(v6);
  }
  this->Second.HType = pSecond->HType;
  this->Second.pResource = pSecond->pResource;
}

Scaleform::GFx::CharPosInfo *__fastcall Scaleform::GFx::CharPosInfo::operator=(
        Scaleform::GFx::CharPosInfo *this,
        const Scaleform::GFx::CharPosInfo *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  *(_OWORD *)&this->ColorTransform.M[0][0] = *(_OWORD *)&__that->ColorTransform.M[0][0];
  *(_OWORD *)&this->ColorTransform.M[1][0] = *(_OWORD *)&__that->ColorTransform.M[1][0];
  this->Matrix_1 = __that->Matrix_1;
  pObject = (Scaleform::RefCountVImpl *)__that->pFilters.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->pFilters.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->pFilters.pObject = __that->pFilters.pObject;
  this->Ratio = __that->Ratio;
  this->Depth = __that->Depth;
  this->CharacterId.Id = __that->CharacterId.Id;
  this->ClassName = __that->ClassName;
  this->ClipDepth = __that->ClipDepth;
  this->Flags.Flags = __that->Flags.Flags;
  this->BlendMode = __that->BlendMode;
  this->Visible = __that->Visible;
  return this;
}

Scaleform::GFx::MovieHeaderData *__fastcall Scaleform::GFx::MovieHeaderData::operator=(
        Scaleform::GFx::MovieHeaderData *this,
        const Scaleform::GFx::MovieHeaderData *__that)
{
  float x1; // eax
  float y2; // xmm2_4
  float x2; // xmm1_4

  this->FileLength = __that->FileLength;
  this->Version = __that->Version;
  x1 = __that->FrameRect.x1;
  y2 = __that->FrameRect.y2;
  x2 = __that->FrameRect.x2;
  this->FrameRect.y1 = __that->FrameRect.y1;
  this->FrameRect.x2 = x2;
  this->FrameRect.y2 = y2;
  this->FrameRect.x1 = x1;
  this->FPS = __that->FPS;
  this->FrameCount = __that->FrameCount;
  this->SWFFlags = __that->SWFFlags;
  Scaleform::GFx::ExporterInfoImpl::SetData(
    &this->mExporterInfo,
    __that->mExporterInfo.SI.Version,
    __that->mExporterInfo.SI.Format,
    __that->mExporterInfo.SI.pSWFName,
    __that->mExporterInfo.SI.pPrefix,
    __that->mExporterInfo.SI.ExportFlags,
    0i64);
  return this;
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::AddFrameName(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const Scaleform::String *name,
        Scaleform::GFx::LogState *plog)
{
  Scaleform::Lock::DoLock(&this->PlaylistLock);
  Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::SetCaseInsensitive(
    &this->NamedFrames,
    name,
    &this->LoadingFrame);
  Scaleform::Lock::Unlock(&this->PlaylistLock);
}

Scaleform::GFx::ResourceHandle *__fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::AddNewResourceHandle(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        Scaleform::GFx::ResourceHandle *result,
        const Scaleform::GFx::ResourceId *rid)
{
  unsigned int ResIndexCounter; // eax
  Scaleform::GFx::MovieDataDef::LoadTaskData *v4; // rbx
  unsigned __int64 Id; // rax
  Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeRef key; // [rsp+20h] [rbp-18h] BYREF

  ResIndexCounter = this->ResIndexCounter;
  v4 = 0i64;
  result->HType = RH_Index;
  result->BindIndex = ResIndexCounter;
  ++this->ResIndexCounter;
  if ( this->LoadState < LS_LoadFinished )
  {
    v4 = this;
    Scaleform::Lock::DoLock(&this->ResourceLock);
  }
  Id = rid->Id;
  key.pFirst = rid;
  key.pSecond = result;
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeRef>(
    &this->Resources.mHash,
    &this->Resources,
    &key,
    Id ^ (Id >> 8));
  if ( v4 )
    Scaleform::Lock::Unlock(&v4->ResourceLock);
  return result;
}

void __fastcall Scaleform::GFx::ImageFileKeyInterface::AddRef(
        Scaleform::Render::StateData::Interface_RefCountImpl *this,
        void *data,
        Scaleform::Render::StateData::Interface::RefBehaviour __formal)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)data);
}

void __fastcall Scaleform::GFx::MovieDefImpl::AddReleaseNotifier(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::MovieDefImpl::ReleaseNotifier *rn)
{
  Scaleform::GFx::MovieDefImpl::ReleaseNotifier *key; // [rsp+38h] [rbp+10h] BYREF

  key = rn;
  Scaleform::Lock::DoLock(&this->ReleaseNotifiersLock);
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::Set<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>(
    &this->ReleaseNotifiers,
    &this->ReleaseNotifiers,
    &key);
  Scaleform::Lock::Unlock(&this->ReleaseNotifiersLock);
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const Scaleform::GFx::ResourceId *rid,
        Scaleform::GFx::Resource *pres)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *v3; // rbx
  int v7; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::GFx::Resource *v8; // [rsp+28h] [rbp-20h]
  Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeRef key; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0i64;
  if ( this->LoadState < LS_LoadFinished )
  {
    v3 = this;
    Scaleform::Lock::DoLock(&this->ResourceLock);
  }
  v7 = 0;
  v8 = pres;
  if ( pres )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pres);
  key.pFirst = rid;
  key.pSecond = (const Scaleform::GFx::ResourceHandle *)&v7;
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeRef>(
    &this->Resources.mHash,
    &this->Resources,
    &key,
    rid->Id ^ ((unsigned __int64)rid->Id >> 8));
  if ( !v7 && v8 )
    Scaleform::GFx::Resource::Release(v8);
  if ( v3 )
    Scaleform::Lock::Unlock(&v3->ResourceLock);
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::AddScene(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const Scaleform::String *name,
        unsigned int off)
{
  Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> > *p_Scenes; // rdi
  Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *v7; // rax
  Scaleform::MemoryHeap *pHeap; // rbx
  Scaleform::ArrayDataBase<Scaleform::GFx::MovieDataDef::SceneInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieDataDef::SceneInfo,2>,Scaleform::ArrayDefaultPolicy> *p_Data; // rbx
  __int64 v10; // rbx
  void *v11; // rbx
  Scaleform::StringDH v12; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+34h] [rbp-34h]
  Scaleform::GFx::MovieDataDef::FrameLabelInfo *other; // [rsp+38h] [rbp-30h]
  unsigned __int64 count; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-20h]
  Scaleform::MemoryHeap *v18; // [rsp+50h] [rbp-18h]

  p_Scenes = &this->Scenes;
  if ( !this->Scenes.pObject )
  {
    v7 = (Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *)this->pHeap->Alloc(this->pHeap, 24i64, 0i64);
    if ( v7 )
    {
      v7->Data.Data = 0i64;
      v7->Data.Size = 0i64;
      v7->Data.Policy.Capacity = 0i64;
    }
    else
    {
      v7 = 0i64;
    }
    Scaleform::AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy>>::operator=(
      p_Scenes,
      v7);
  }
  pHeap = this->pHeap;
  Scaleform::StringDH::CopyConstructHelper(&v12, name, pHeap);
  v18 = pHeap;
  p_Data = &p_Scenes->pObject->Data;
  v13 = off;
  v14 = 0;
  other = 0i64;
  count = 0i64;
  v17 = 0i64;
  Scaleform::ArrayDataBase<Scaleform::GFx::MovieDataDef::SceneInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieDataDef::SceneInfo,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    p_Data,
    p_Data,
    p_Data->Size + 1);
  v10 = (__int64)&p_Data->Data[p_Data->Size - 1];
  if ( v10 )
  {
    Scaleform::StringDH::CopyConstructHelper((Scaleform::StringDH *)v10, &v12, v12.pHeap);
    *(_DWORD *)(v10 + 16) = v13;
    *(_DWORD *)(v10 + 20) = v14;
    *(_QWORD *)(v10 + 24) = 0i64;
    *(_QWORD *)(v10 + 32) = 0i64;
    *(_QWORD *)(v10 + 40) = 0i64;
    *(_QWORD *)(v10 + 48) = v18;
    Scaleform::ArrayDataDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy>::Append(
      (Scaleform::ArrayDataDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy> *)(v10 + 24),
      other,
      count);
  }
  Scaleform::ConstructorMov<Scaleform::Render::Font::NativeHintingType>::DestructArray(
    (Scaleform::Render::Font::NativeHintingType *)other,
    count);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, other);
  v11 = (void *)(v12.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v12.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
}

void __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::AddShapeMeshProvider(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this,
        Scaleform::Render::ShapeMeshProvider *defMeshProv,
        Scaleform::Render::ShapeMeshProvider *resolvedMeshProv)
{
  Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeRef key; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::Render::ShapeMeshProvider *v6; // [rsp+40h] [rbp+8h] BYREF
  Scaleform::Render::ShapeMeshProvider *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = defMeshProv;
  Scaleform::Lock::DoLock(&this->ImportSourceLock);
  if ( resolvedMeshProv )
    resolvedMeshProv->AddRef(&resolvedMeshProv->Scaleform::Render::MeshProvider);
  v6 = resolvedMeshProv;
  key.pFirst = &v7;
  key.pSecond = (const Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *)&v6;
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeRef>(
    &this->BoundShapeMeshProviders.mHash,
    &this->BoundShapeMeshProviders,
    &key);
  if ( v6 )
    v6->Release(&v6->Scaleform::Render::MeshProvider);
  Scaleform::Lock::Unlock(&this->ImportSourceLock);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::ArrayDataDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy>::Append(
        Scaleform::ArrayDataDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy> *this,
        const Scaleform::GFx::MovieDataDef::FrameLabelInfo *other,
        unsigned __int64 count)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 Size; // rbx
  Scaleform::GFx::MovieDataDef::FrameLabelInfo *v7; // rbx
  unsigned int *p_Number; // rdi

  if ( count )
  {
    v3 = count;
    Size = this->Size;
    Scaleform::ArrayDataBase<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      this,
      this->pHeap,
      Size + count);
    v7 = &this->Data[Size];
    p_Number = &other->Number;
    do
    {
      if ( v7 )
      {
        Scaleform::StringDH::CopyConstructHelper(
          &v7->Name,
          (const Scaleform::String *)p_Number - 2,
          *((Scaleform::MemoryHeap **)p_Number - 1));
        v7->Number = *p_Number;
      }
      p_Number += 6;
      ++v7;
      --v3;
    }
    while ( v3 );
  }
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::BeginSWFLoading(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const Scaleform::GFx::MovieHeaderData *header)
{
  Scaleform::GFx::MovieHeaderData::operator=(&this->Header, header);
  Scaleform::GFx::MovieDataDef::LoadTaskData::UpdateLoadState(this, this->LoadingFrame, LS_LoadingFrames);
}

__int64 __fastcall Scaleform::GFx::MovieBindProcess::BindNextFrame(Scaleform::GFx::MovieBindProcess *this)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rax
  unsigned int v2; // er14
  int v4; // er12
  __int64 result; // rax
  Scaleform::GFx::MovieDefImpl::BindTaskData *v6; // rcx
  Scaleform::GFx::FrameBindData *pFrameBindData; // r13
  Scaleform::GFx::FrameBindData *volatile Value; // r13
  Scaleform::GFx::MovieDataDef::LoadTaskData *v9; // rdi
  Scaleform::GFx::LoadUpdateSync *v10; // rbx
  Scaleform::GFx::FrameBindData *v11; // r13
  Scaleform::GFx::FrameBindData *v12; // rax
  Scaleform::GFx::MovieDefImpl::BindTaskData *v13; // rcx
  Scaleform::GFx::LoadStates *BindIndex; // r8
  Scaleform::GFx::ImportData *pImportData; // rdi
  Scaleform::RefCountVImpl *v16; // rsi
  Scaleform::GFx::MovieDefImpl *MovieDefImplAddRef; // rax
  Scaleform::GFx::MovieDefImpl *v18; // r14
  Scaleform::RefCountVImpl *v19; // rax
  Scaleform::RefCountVImpl *DefaultFontLibName; // rax
  const Scaleform::String *v21; // rax
  bool v22; // di
  void *v23; // rbx
  void *v24; // rbx
  Scaleform::GFx::ImportData *v25; // rdi
  Scaleform::GFx::MovieDefImpl *v26; // r12
  Scaleform::GFx::LoadStates *v27; // rdi
  Scaleform::GFx::LoaderImpl::LoadStackItem *pLoadStack; // rcx
  __int64 p_pNext; // rax
  bool v30; // zf
  const Scaleform::String *v31; // rdx
  const char *v32; // rax
  unsigned __int64 v33; // rcx
  __int64 *v34; // rdx
  __int64 *v35; // rax
  unsigned int FileAttributes; // ebx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v37; // rcx
  bool v38; // bl
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *v39; // rcx
  Scaleform::GFx::MovieDefImpl *v40; // rax
  Scaleform::GFx::Resource *v41; // rbx
  int v42; // edi
  Scaleform::GFx::MovieDefImpl::BindTaskData *v43; // rax
  Scaleform::GFx::ResourceDataNode *pResourceData; // rbx
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *pHeap; // rdx
  Scaleform::GFx::ResourceBinding *p_ResourceBinding; // rsi
  Scaleform::GFx::MovieDefImpl::BindTaskData *v47; // rax
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *v48; // rcx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v49; // rcx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v50; // rcx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v51; // rax
  Scaleform::GFx::LoadUpdateSync *v52; // rdi
  Scaleform::RefCountVImpl *v53; // rcx
  Scaleform::GFx::FontDataUseNode *pFontData; // r12
  volatile bool Frozen; // al
  Scaleform::RefCountVImpl **v56; // rbx
  Scaleform::GFx::FontResource *v57; // rdi
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // r8
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v60; // rcx
  Scaleform::GFx::LoadStates *v61; // rcx
  Scaleform::Log *v62; // rdx
  bool threadedLoading; // bl
  Scaleform::GFx::LogState *v64; // rax
  Scaleform::Log *GlobalLog; // rax
  Scaleform::GFx::MovieDefImpl::BindTaskData *v66; // rdi
  int v67; // esi
  Scaleform::GFx::LoadUpdateSync *v68; // rbx
  Scaleform::WaitCondition *p_WC; // rcx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v70; // rbx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v71; // rsi
  unsigned int v72; // edi
  Scaleform::GFx::LoadUpdateSync *v73; // rbx
  Scaleform::WaitCondition *v74; // rcx
  __int64 *v75; // r13
  Scaleform::GFx::MovieDefImpl::BindTaskData *v76; // rbx
  _QWORD *v77; // rcx
  __int64 v78; // r14
  int v79; // er12
  int v80; // eax
  int BindingFrame; // edi
  int v82; // esi
  __int64 v83; // rax
  void *v84; // rbx
  unsigned int v85; // esi
  Scaleform::GFx::MovieDefImpl::BindTaskData *v86; // rcx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v87; // rax
  Scaleform::GFx::LoadUpdateSync *v88; // rdi
  Scaleform::RefCountVImpl *v89; // rcx
  Scaleform::GFx::LoadStates *pls; // [rsp+40h] [rbp-C0h]
  Scaleform::GFx::ImportData *pimport; // [rsp+48h] [rbp-B8h]
  Scaleform::String *src; // [rsp+50h] [rbp-B0h]
  Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+58h] [rbp-A8h] BYREF
  Scaleform::GFx::ResourceBindData bd; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::GFx::ResourceBindData pdata; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::String path2; // [rsp+90h] [rbp-70h] BYREF
  __int64 v97[2]; // [rsp+98h] [rbp-68h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo loc; // [rsp+A8h] [rbp-58h] BYREF
  Scaleform::String v99; // [rsp+C0h] [rbp-40h] BYREF
  int v100; // [rsp+C8h] [rbp-38h]
  int v101; // [rsp+CCh] [rbp-34h]
  int v102; // [rsp+D0h] [rbp-30h]
  int v103; // [rsp+D4h] [rbp-2Ch]
  Scaleform::String v104; // [rsp+D8h] [rbp-28h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo v105; // [rsp+E0h] [rbp-20h] BYREF
  int v106; // [rsp+150h] [rbp+50h]
  Scaleform::MemoryHeap *fontHeap; // [rsp+150h] [rbp+50h]
  int loadConstants; // [rsp+158h] [rbp+58h]
  Scaleform::GFx::ImportVisitor *loadConstantsa; // [rsp+158h] [rbp+58h]
  unsigned int i; // [rsp+160h] [rbp+60h]
  unsigned int LoadFlags; // [rsp+168h] [rbp+68h]

  pObject = this->pBindData.pObject;
  v2 = 0;
  v106 = 0;
  v4 = 0;
  if ( !pObject )
    return 3i64;
  result = pObject->BindState & 0xF;
  if ( (_DWORD)result != 1 )
  {
    if ( (_DWORD)result )
      return result;
    v6 = this->pBindData.pObject;
    if ( v6 )
      Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(v6, v6->BindState & 0xFFFFFFF0 | 1);
  }
  pFrameBindData = this->pFrameBindData;
  if ( pFrameBindData )
    Value = pFrameBindData->pNextFrame.Value;
  else
    Value = this->pDataDef->pData.pObject->BindData.pFrameData.Value;
  if ( !Value )
  {
    v9 = this->pDataDef->pData.pObject;
    v10 = v9->pFrameUpdate.pObject;
    Scaleform::Mutex::DoLock(&v10->mMutex);
    v11 = this->pFrameBindData;
    if ( v11 )
      Value = v11->pNextFrame.Value;
    else
      Value = this->pDataDef->pData.pObject->BindData.pFrameData.Value;
    for ( ; !Value; Value = v12 ? v12->pNextFrame.Value : this->pDataDef->pData.pObject->BindData.pFrameData.Value )
    {
      if ( v9->LoadState != LS_LoadingFrames || this->pBindData.pObject->BindingCanceled )
        break;
      Scaleform::WaitCondition::Wait(&v9->pFrameUpdate.pObject->WC, &v9->pFrameUpdate.pObject->mMutex, 0xFFFFFFFF);
      v12 = this->pFrameBindData;
    }
    if ( v9->LoadState == LS_LoadCanceled )
      this->pBindData.pObject->BindingCanceled = 1;
    Scaleform::Mutex::Unlock(&v10->mMutex);
    if ( !Value )
      goto LABEL_166;
  }
  if ( this->pBindData.pObject->BindingCanceled )
  {
LABEL_166:
    Scaleform::GFx::MovieBindProcess::FinishBinding(this);
    v85 = 4 - this->pBindData.pObject->BindingCanceled;
    v86 = this->pBindData.pObject;
    if ( v86 )
      Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(
        v86,
        v85 | this->pBindData.pObject->BindState & 0xFFFFFFF0);
    v87 = this->pBindData.pObject;
    v88 = v87->pBindUpdate.pObject;
    if ( v88 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v87->pBindUpdate.pObject);
    v89 = (Scaleform::RefCountVImpl *)this->pBindData.pObject;
    if ( v89 )
      Scaleform::RefCountImpl::Release(v89);
    this->pBindData.pObject = 0i64;
    Scaleform::Mutex::DoLock(&v88->mMutex);
    v88->LoadFinished = 1;
    Scaleform::WaitCondition::NotifyAll(&v88->WC);
    Scaleform::Mutex::Unlock(&v88->mMutex);
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v88);
    return v85;
  }
  v13 = this->pBindData.pObject;
  BindIndex = this->pLoadStates.pObject;
  this->pFrameBindData = Value;
  pls = BindIndex;
  LoadFlags = v13->LoadFlags;
  if ( (LoadFlags & 0x100000) == 0 )
  {
    pImportData = Value->pImportData;
    v16 = 0i64;
    pimport = pImportData;
    MovieDefImplAddRef = Scaleform::GFx::MovieDefImpl::BindTaskData::GetMovieDefImplAddRef(v13);
    v18 = MovieDefImplAddRef;
    if ( MovieDefImplAddRef )
    {
      v19 = (Scaleform::RefCountVImpl *)MovieDefImplAddRef->GetStateAddRef(
                                          &MovieDefImplAddRef->Scaleform::GFx::StateBag,
                                          (Scaleform::GFx::State::StateType)20i64);
      v16 = v19;
      if ( v19 )
        Scaleform::Render::RenderBuffer::AddRef(v19);
      if ( v16 )
        Scaleform::RefCountImpl::Release(v16);
    }
    for ( i = 0; i < Value->ImportCount; ++i )
    {
      src = &pImportData->SourceUrl;
      v22 = 1;
      if ( !pImportData->Imports.Data.Size
        || strcmp(
             (const char *)(((unsigned __int64)pImportData->Imports.Data.Data->SymbolName.pData & 0xFFFFFFFFFFFFFFFCui64)
                          + 12),
             "$IMECandidateListFont") )
      {
        if ( !v16
          || (!v18
           || (DefaultFontLibName = Scaleform::GFx::StateBag::GetDefaultFontLibName(&v18->Scaleform::GFx::StateBag),
               Scaleform::String::String(&path2, (const char *)DefaultFontLibName),
               v4 |= 1u,
               v106 = v4,
               !Scaleform::GFx::MatchFileNames(&pImportData->SourceUrl, &path2)))
          && (v4 |= 2u,
              v106 = v4,
              Scaleform::String::String(&v104, "gfxfontlib.swf"),
              !Scaleform::GFx::MatchFileNames(&pImportData->SourceUrl, v21)) )
        {
          v22 = 0;
        }
      }
      if ( (v4 & 2) != 0 )
      {
        v4 &= ~2u;
        v23 = (void *)(v104.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        v106 = v4;
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
               (volatile int *)((v104.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
               -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v23);
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        v24 = (void *)(path2.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        v106 = v4;
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
               (volatile int *)((path2.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
               -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v24);
      }
      if ( v22 )
      {
        v25 = pimport;
        Scaleform::GFx::MovieDefImpl::BindTaskData::ResolveImportThroughFontLib(this->pBindData.pObject, pimport);
      }
      else
      {
        v26 = 0i64;
        v27 = Scaleform::GFx::LoadStates::CloneForImport(pls);
        loadConstants = LoadFlags | 1;
        v97[0] = (__int64)this->pBindData.pObject->pDefImpl_Unsafe;
        pLoadStack = this->pLoadStack;
        v97[1] = 0i64;
        if ( pLoadStack )
        {
          p_pNext = (__int64)&pLoadStack->pNext;
          if ( pLoadStack->pNext )
          {
            do
            {
              pLoadStack = *(Scaleform::GFx::LoaderImpl::LoadStackItem **)p_pNext;
              v30 = *(_QWORD *)(*(_QWORD *)p_pNext + 8i64) == 0i64;
              p_pNext = *(_QWORD *)p_pNext + 8i64;
            }
            while ( !v30 );
          }
          pLoadStack->pNext = (Scaleform::GFx::LoaderImpl::LoadStackItem *)v97;
        }
        else
        {
          this->pLoadStack = (Scaleform::GFx::LoaderImpl::LoadStackItem *)v97;
        }
        v31 = src;
        if ( this->Stripped )
        {
          v32 = (const char *)(src->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          v33 = *(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFFi64;
          if ( v33 > 4 )
          {
            if ( !Scaleform::String::CompareNoCase(&v32[v33 + 8], ".swf") )
            {
              loc.Use = File_Import;
              Scaleform::String::String(&loc.FileName, src);
              Scaleform::String::String(&loc.ParentPath, &pls->RelativePath);
              Scaleform::String::Clear(&loc.FileName);
              Scaleform::String::AppendString(
                &loc.FileName,
                (const char *)((src->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                (*(_QWORD *)(src->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) - 4);
              Scaleform::String::AppendString(&loc.FileName, ".gfx", -1i64);
              v26 = Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(v27, &loc, loadConstants, this->pLoadStack, 0i64);
              Scaleform::GFx::URLBuilder::LocationInfo::~LocationInfo(&loc);
            }
            v31 = src;
          }
        }
        if ( !v26 )
        {
          v105.Use = File_Import;
          Scaleform::String::String(&v105.FileName, v31);
          Scaleform::String::String(&v105.ParentPath, &pls->RelativePath);
          v26 = Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(v27, &v105, loadConstants, this->pLoadStack, 0i64);
          Scaleform::GFx::URLBuilder::LocationInfo::~LocationInfo(&v105);
        }
        v34 = (__int64 *)this->pLoadStack;
        if ( v34 == v97 )
        {
          this->pLoadStack = 0i64;
        }
        else if ( v34[1] )
        {
          while ( 1 )
          {
            v35 = (__int64 *)v34[1];
            if ( v35 == v97 )
              break;
            v34 = (__int64 *)v34[1];
            if ( !v35[1] )
              goto LABEL_67;
          }
          v34[1] = v35[1];
        }
LABEL_67:
        if ( !v26 )
          goto LABEL_95;
        FileAttributes = this->pDataDef->pData.pObject->FileAttributes;
        if ( (((unsigned __int8)FileAttributes ^ (unsigned __int8)v26->GetFileAttributes(v26)) & 8) != 0 )
        {
          Scaleform::GFx::Resource::Release(v26);
          v48 = (Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *)pls->pLog.pObject;
          if ( v48 )
            Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
              v48 + 3,
              "ActionScript version mismatched between main and import '%s' files",
              (const char *)((pimport->SourceUrl.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
LABEL_95:
          Scaleform::GFx::MovieBindProcess::FinishBinding(this);
          v49 = this->pBindData.pObject;
          if ( v49 )
            Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(
              v49,
              this->pBindData.pObject->BindState & 0xFFFFFFF0 | 4);
          if ( v27 )
            Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v27);
          if ( v18 )
            Scaleform::GFx::Resource::Release(v18);
          if ( v16 )
            Scaleform::RefCountImpl::Release(v16);
          return 4i64;
        }
        v37 = v26->pBindData.pObject;
        v38 = v37 == this->pBindData.pObject;
        if ( v37 == this->pBindData.pObject )
        {
          v39 = (Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *)pls->pLog.pObject;
          if ( v39 )
            Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogWarning(
              v39 + 3,
              "Self recursive import detected in '%s'",
              (const char *)((pimport->SourceUrl.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
        }
        Scaleform::GFx::MovieDefImpl::BindTaskData::ResolveImport(this->pBindData.pObject, pimport, v26, pls, v38);
        loadConstantsa = pls->pBindStates.pObject->pImportVisitor.pObject;
        if ( loadConstantsa )
        {
          v40 = Scaleform::GFx::MovieDefImpl::BindTaskData::GetMovieDefImplAddRef(this->pBindData.pObject);
          v41 = v40;
          if ( v40 )
          {
            loadConstantsa->Visit(
              &loadConstantsa->Scaleform::GFx::MovieDef::ImportVisitor,
              v40,
              v26,
              (const char *)((pimport->SourceUrl.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
            Scaleform::GFx::Resource::Release(v41);
          }
        }
        Scaleform::GFx::Resource::Release(v26);
        if ( v27 )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v27);
        v25 = pimport;
        v4 = v106;
      }
      pImportData = v25->pNext.Value;
      pimport = pImportData;
    }
    if ( v18 )
      Scaleform::GFx::Resource::Release(v18);
    if ( v16 )
      Scaleform::RefCountImpl::Release(v16);
    BindIndex = pls;
    v2 = 0;
  }
  v42 = 0;
  v43 = this->pBindData.pObject;
  pResourceData = Value->pResourceData;
  pHeap = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)v43->pHeap;
  p_ResourceBinding = &v43->ResourceBinding;
  fontHeap = (Scaleform::MemoryHeap *)pHeap;
  if ( Value->ResourceCount )
  {
    while ( 1 )
    {
      if ( pResourceData->Data.pInterface )
      {
        v47 = this->pBindData.pObject;
        bd.pBinding = p_ResourceBinding;
        bd.pResource.pObject = 0i64;
        if ( !v47->BindingCanceled
          && pResourceData->Data.pInterface
          && pResourceData->Data.pInterface->CreateResource(
               pResourceData->Data.pInterface,
               pResourceData->Data.hData,
               &bd,
               BindIndex,
               (Scaleform::MemoryHeap *)pHeap) )
        {
          if ( this->pImagePacker.pObject
            && (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))bd.pResource.pObject->GetResourceTypeCode)(bd.pResource.pObject) & 0xFF00) == 256
            && (unsigned __int8)bd.pResource.pObject->GetResourceTypeCode(bd.pResource.pObject) == 1 )
          {
            this->pImagePacker.pObject->AddResource(
              this->pImagePacker.pObject,
              pResourceData,
              (Scaleform::GFx::ImageResource *)bd.pResource.pObject);
          }
        }
        else if ( this->pBindData.pObject->BindingCanceled )
        {
          Scaleform::GFx::MovieBindProcess::FinishBinding(this);
          v50 = this->pBindData.pObject;
          if ( v50 )
            Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(
              v50,
              this->pBindData.pObject->BindState & 0xFFFFFFF0 | 3);
          v51 = this->pBindData.pObject;
          v52 = v51->pBindUpdate.pObject;
          if ( v52 )
            Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v51->pBindUpdate.pObject);
          v53 = (Scaleform::RefCountVImpl *)this->pBindData.pObject;
          if ( v53 )
            Scaleform::RefCountImpl::Release(v53);
          this->pBindData.pObject = 0i64;
          Scaleform::Mutex::DoLock(&v52->mMutex);
          v52->LoadFinished = 1;
          Scaleform::WaitCondition::NotifyAll(&v52->WC);
          Scaleform::Mutex::Unlock(&v52->mMutex);
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v52);
          if ( bd.pResource.pObject )
            Scaleform::GFx::Resource::Release(bd.pResource.pObject);
          return 3i64;
        }
        Scaleform::GFx::ResourceBinding::SetBindData(p_ResourceBinding, pResourceData->BindIndex, &bd);
        if ( bd.pResource.pObject )
          Scaleform::GFx::Resource::Release(bd.pResource.pObject);
        pHeap = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)fontHeap;
      }
      pResourceData = pResourceData->pNext.Value;
      if ( ++v42 >= Value->ResourceCount )
        break;
      BindIndex = pls;
    }
  }
  if ( !Value->FontCount )
    goto LABEL_152;
  pFontData = Value->pFontData;
  memset(&pheapAddr, 0, sizeof(pheapAddr));
  do
  {
    Frozen = p_ResourceBinding->Frozen;
    BindIndex = (Scaleform::GFx::LoadStates *)pFontData->BindIndex;
    pdata = 0i64;
    if ( Frozen && (unsigned int)BindIndex < p_ResourceBinding->ResourceCount )
    {
      v56 = (Scaleform::RefCountVImpl **)&p_ResourceBinding->pResources[(unsigned int)BindIndex];
      if ( *v56 )
      {
        Scaleform::Render::RenderBuffer::AddRef(*v56);
        if ( pdata.pResource.pObject )
          Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
      }
      v57 = (Scaleform::GFx::FontResource *)*v56;
      pdata = *(Scaleform::GFx::ResourceBindData *)v56;
    }
    else
    {
      Scaleform::GFx::ResourceBinding::GetResourceData_Locked(p_ResourceBinding, &pdata, (unsigned int)BindIndex);
      v57 = (Scaleform::GFx::FontResource *)pdata.pResource.pObject;
    }
    if ( v57 )
    {
      Scaleform::GFx::FontResource::ResolveTextureGlyphs(v57);
      v58 = pheapAddr.Size + 1;
      if ( pheapAddr.Size + 1 >= pheapAddr.Size )
      {
        if ( v58 > pheapAddr.Policy.Capacity )
        {
          v59 = v58 + (v58 >> 2);
          goto LABEL_134;
        }
      }
      else if ( v58 < pheapAddr.Policy.Capacity >> 1 )
      {
        v59 = pheapAddr.Size + 1;
LABEL_134:
        Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &pheapAddr,
          &pheapAddr,
          v59);
      }
      pheapAddr.Size = v58;
      v60 = &pheapAddr.Data[v58 - 1];
      if ( v60 )
        v60->pObject = (Scaleform::GFx::AS3::VMAbcFile *)v57;
      if ( pdata.pResource.pObject )
        Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
    }
    pFontData = pFontData->pNext.Value;
    ++v2;
  }
  while ( v2 < Value->FontCount );
  if ( pheapAddr.Size )
  {
    v61 = pls;
    if ( pls->pBindStates.pObject->pFontPackParams.pObject )
    {
      if ( pls->ThreadedLoading || pls->pTaskManager.pObject )
      {
        v62 = 0i64;
        threadedLoading = 1;
      }
      else
      {
        v62 = 0i64;
        threadedLoading = 0;
      }
      v64 = pls->pLog.pObject;
      if ( v64 )
      {
        v62 = v64->pLog.pObject;
        if ( !v62 )
        {
          GlobalLog = Scaleform::Log::GetGlobalLog();
          v61 = pls;
          v62 = GlobalLog;
        }
      }
      Scaleform::GFx::GFx_GenerateFontBitmaps(
        v61->pBindStates.pObject->pFontPackParams.pObject,
        (const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> *)&pheapAddr,
        v61->pBindStates.pObject->pImageCreator.pObject,
        v62,
        &this->GlyphTextureIdGen,
        fontHeap,
        threadedLoading);
    }
  }
  pHeap = pheapAddr.Data;
  if ( pheapAddr.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
LABEL_152:
  this->pBindData.pObject->BytesLoaded = Value->BytesLoaded;
  if ( ++this->pBindData.pObject->BindingFrame == 1 )
  {
    v66 = this->pBindData.pObject;
    v67 = v66->BindState | 0x100;
    if ( v66 )
    {
      v68 = v66->pBindUpdate.pObject;
      if ( v68 )
      {
        Scaleform::Mutex::DoLock(&v68->mMutex);
        p_WC = &v66->pBindUpdate.pObject->WC;
        v66->BindState = v67;
        Scaleform::WaitCondition::NotifyAll(p_WC);
        Scaleform::Mutex::Unlock(&v68->mMutex);
      }
      else
      {
        v66->BindState = v67;
      }
    }
  }
  v70 = this->pBindData.pObject;
  if ( v70->BindingFrame == ((unsigned int (__fastcall *)(Scaleform::GFx::MovieDataDef *, Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *, Scaleform::GFx::LoadStates *))this->pDataDef->GetFrameCount)(
                              this->pDataDef,
                              pHeap,
                              BindIndex) )
  {
    this->pBindData.pObject->BytesLoaded = this->pDataDef->pData.pObject->Header.FileLength;
    Scaleform::GFx::MovieBindProcess::FinishBinding(this);
    v71 = this->pBindData.pObject;
    v72 = v71->BindState & 0xFFFFFDF0 | 0x202;
    if ( v71 )
    {
      v73 = v71->pBindUpdate.pObject;
      if ( v73 )
      {
        Scaleform::Mutex::DoLock(&v73->mMutex);
        v74 = &v71->pBindUpdate.pObject->WC;
        v71->BindState = v72;
        Scaleform::WaitCondition::NotifyAll(v74);
        Scaleform::Mutex::Unlock(&v73->mMutex);
      }
      else
      {
        v71->BindState = v72;
      }
    }
  }
  v75 = (__int64 *)pls->pProgressHandler.pObject;
  if ( v75 )
  {
    v76 = this->pBindData.pObject;
    v77 = &v76->pDataDef.pObject->__vftable;
    v78 = v77[8];
    v79 = *(_DWORD *)(v78 + 80);
    v80 = (*(__int64 (__fastcall **)(_QWORD *))(*v77 + 80i64))(v77);
    BindingFrame = v76->BindingFrame;
    LODWORD(v76) = v76->BytesLoaded;
    v82 = v80;
    Scaleform::String::String(&v99, (const Scaleform::String *)(v78 + 72));
    v83 = *v75;
    v100 = (int)v76;
    v101 = v79;
    v102 = BindingFrame;
    v103 = v82;
    (*(void (__fastcall **)(__int64 *, Scaleform::String *))(v83 + 8))(v75, &v99);
    v84 = (void *)(v99.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v99.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v84);
  }
  return this->pBindData.pObject->BindState & 0xF;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
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

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v4; // rbx
  Scaleform::GFx::Resource *SizeMask; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      v4 = &this->pTable[v2];
      if ( v4[1].EntryCount != -2i64 )
      {
        if ( !LODWORD(v4[2].EntryCount) )
        {
          SizeMask = (Scaleform::GFx::Resource *)v4[2].SizeMask;
          if ( SizeMask )
            Scaleform::GFx::Resource::Release(SizeMask);
        }
        v4[1].EntryCount = -2i64;
      }
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
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

Scaleform::GFx::Movie *__fastcall Scaleform::GFx::MovieDefImpl::CreateInstance(
        Scaleform::GFx::MovieDefImpl *this,
        const Scaleform::GFx::MemoryParams *memParams,
        bool initFirstFrame,
        Scaleform::GFx::ActionControl *actionControl,
        Scaleform::Render::ThreadCommandQueue *queue)
{
  const char *v9; // rax
  const char *ShortFilename; // rax
  Scaleform::GFx::MemoryContext *v11; // rax
  Scaleform::RefCountVImpl *v12; // rbx
  Scaleform::GFx::Movie *v13; // rdi
  void *v14; // rbx
  Scaleform::String v16; // [rsp+40h] [rbp+8h] BYREF

  v9 = this->GetFileURL(this);
  ShortFilename = Scaleform::GetShortFilename(v9);
  Scaleform::String::String(&v16, "MovieView \"", ShortFilename, "\"");
  v11 = this->CreateMemoryContext(
          this,
          (v16.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
          memParams,
          (this->pBindData.pObject->LoadFlags & 0x10000000) != 0);
  v12 = (Scaleform::RefCountVImpl *)v11;
  if ( v11 )
  {
    v13 = this->CreateInstance(this, v11, initFirstFrame, actionControl, queue);
    Scaleform::RefCountImpl::Release(v12);
  }
  else
  {
    v13 = 0i64;
  }
  v14 = (void *)(v16.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v16.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v14);
  return v13;
}

Scaleform::GFx::Movie *__fastcall Scaleform::GFx::MovieDefImpl::CreateInstance(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::MemoryContext *memContext,
        bool initFirstFrame,
        Scaleform::GFx::ActionControl *actionControl,
        Scaleform::Render::ThreadCommandQueue *queue)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rax
  Scaleform::GFx::StateBag *v7; // rcx
  __int64 v11; // rdx
  Scaleform::RefCountVImpl *v12; // rax
  Scaleform::RefCountVImpl *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 *v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rax

  pObject = this->pBindData.pObject;
  v7 = &this->Scaleform::GFx::StateBag;
  v11 = 39i64;
  if ( (pObject->pDataDef.pObject->pData.pObject->FileAttributes & 8 | 0x10u) > 0x10 )
    v11 = 40i64;
  v12 = (Scaleform::RefCountVImpl *)v7->GetStateAddRef(v7, (Scaleform::GFx::State::StateType)v11);
  v13 = v12;
  if ( !v12 )
    return 0i64;
  Scaleform::RefCountImpl::Release(v12);
  Scaleform::Render::RenderBuffer::AddRef(v13);
  Scaleform::RefCountImpl::Release(v13);
  v14 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::MemoryContext *))v13->AddRef)(
          v13,
          memContext);
  v15 = v14;
  if ( !v14 )
    return 0i64;
  if ( actionControl )
    (*(void (__fastcall **)(__int64, __int64, Scaleform::GFx::ActionControl *))(*(_QWORD *)(v14 + 16) + 16i64))(
      v14 + 16,
      3i64,
      actionControl);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, Scaleform::GFx::MovieDefImpl *))(**(_QWORD **)(v15 + 24) + 136i64))(
          *(_QWORD *)(v15 + 24),
          this) )
  {
    Scaleform::GFx::Movie::Release((Scaleform::GFx::Movie *)v15);
    return 0i64;
  }
  v19 = *(__int64 **)(v15 + 48);
  if ( v19 )
  {
    v20 = *v19;
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8i64))(v15);
    (*(void (__fastcall **)(__int64 *, __int64))(v20 + 48))(v19, v21);
  }
  *(_QWORD *)(v15 + 21608) = queue;
  if ( initFirstFrame )
  {
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v15 + 192i64))(v15, v16, 0i64, v17);
  }
  return (Scaleform::GFx::Movie *)v15;
}

Scaleform::GFx::MemoryContext *__fastcall Scaleform::GFx::MovieDefImpl::CreateMemoryContext(
        Scaleform::GFx::MovieDefImpl *this,
        const char *heapName,
        const Scaleform::GFx::MemoryParams *memParams,
        bool debugHeap)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rax
  Scaleform::GFx::StateBag *v6; // rcx
  __int64 v9; // rdx
  Scaleform::RefCountVImpl *v10; // rax
  Scaleform::RefCountVImpl *v11; // rbx

  pObject = this->pBindData.pObject;
  v6 = &this->Scaleform::GFx::StateBag;
  v9 = 39i64;
  if ( (pObject->pDataDef.pObject->pData.pObject->FileAttributes & 8 | 0x10u) > 0x10 )
    v9 = 40i64;
  v10 = (Scaleform::RefCountVImpl *)v6->GetStateAddRef(v6, (Scaleform::GFx::State::StateType)v9);
  v11 = v10;
  if ( !v10 )
    return 0i64;
  Scaleform::RefCountImpl::Release(v10);
  Scaleform::Render::RenderBuffer::AddRef(v11);
  Scaleform::RefCountImpl::Release(v11);
  return (Scaleform::GFx::MemoryContext *)((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, const char *, const Scaleform::GFx::MemoryParams *, bool))v11->__vftable[1].~RefCountImplCore)(
                                            v11,
                                            heapName,
                                            memParams,
                                            debugHeap);
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::MovieDataDef::CreateMovieFileKey(
        Scaleform::GFx::ResourceKey *result,
        const char *pfilename,
        __int64 modifyTime,
        Scaleform::GFx::FileOpener *pfileOpener,
        Scaleform::GFx::ImageCreator *pimageCreator)
{
  Scaleform::GFx::GFxMovieDataDefFileKeyData *v9; // rax
  Scaleform::RefCountVImpl *v10; // rax
  Scaleform::RefCountVImpl *v11; // rbx

  v9 = (Scaleform::GFx::GFxMovieDataDefFileKeyData *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       48i64);
  if ( v9 )
  {
    Scaleform::GFx::GFxMovieDataDefFileKeyData::GFxMovieDataDefFileKeyData(
      v9,
      pfilename,
      modifyTime,
      pfileOpener,
      pimageCreator);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  Scaleform::GFx::ResourceKey::ResourceKey(result, &Scaleform::GFx::GFxMovieDataDefFileKeyInterface_Instance, v11);
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  return result;
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::MovieDefImpl::CreateMovieKey(
        Scaleform::GFx::ResourceKey *result,
        Scaleform::GFx::MovieDataDef *pdataDef,
        Scaleform::GFx::MovieDefBindStates *pbindStates)
{
  Scaleform::GFx::GFxMovieDefImplKey *v6; // rax
  Scaleform::RefCountVImpl *v7; // rax
  Scaleform::RefCountVImpl *v8; // rbx

  v6 = (Scaleform::GFx::GFxMovieDefImplKey *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                               Scaleform::Memory::pGlobalHeap,
                                               32i64);
  if ( v6 )
  {
    Scaleform::GFx::GFxMovieDefImplKey::GFxMovieDefImplKey(v6, pdataDef, pbindStates);
    v8 = v7;
  }
  else
  {
    v8 = 0i64;
  }
  Scaleform::GFx::ResourceKey::ResourceKey(result, &Scaleform::GFx::GFxMovieDefImplKeyInterface_Instance, v8);
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  return result;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::Font::NativeHintingType>::DestructArray(
        Scaleform::Render::Font::NativeHintingType *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rsi
  Scaleform::Render::Font::NativeHintingType *v3; // rdi
  volatile int *v4; // rbx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    do
    {
      v4 = (volatile int *)(v3->Typeface.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
      --v3;
      --v2;
    }
    while ( v2 );
  }
}

void __fastcall Scaleform::ConstructorMov<Scaleform::GFx::MovieDataDef::SceneInfo>::DestructArray(
        Scaleform::GFx::MovieDataDef::SceneInfo *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rbp
  Scaleform::GFx::MovieDataDef::SceneInfo *v3; // r14
  unsigned __int64 Size; // rsi
  unsigned __int64 *i; // rdi
  volatile int *v6; // rbx
  volatile int *v7; // rbx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    do
    {
      Size = v3->Labels.Data.Size;
      for ( i = (unsigned __int64 *)&v3->Labels.Data.Data[Size - 1]; Size; --Size )
      {
        v6 = (volatile int *)(*i & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
        i -= 3;
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3->Labels.Data.Data);
      v7 = (volatile int *)(v3->Name.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v7 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v7);
      --v3;
      --v2;
    }
    while ( v2 );
  }
}

__int64 __fastcall Scaleform::GFx::MovieDefImpl::DoesDirectlyImport(
        Scaleform::GFx::MovieDefImpl *this,
        const Scaleform::GFx::MovieDefImpl *import)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rbx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 Size; // r8
  const Scaleform::GFx::MovieDefImpl **p_pObject; // rax
  unsigned __int8 v9; // di

  pObject = this->pBindData.pObject;
  Scaleform::Lock::DoLock(&pObject->ImportSourceLock);
  v5 = this->pBindData.pObject;
  v6 = 0i64;
  Size = v5->ImportSourceMovies.Data.Size;
  if ( Size )
  {
    p_pObject = (const Scaleform::GFx::MovieDefImpl **)&v5->ImportSourceMovies.Data.Data->pObject;
    while ( *p_pObject != import )
    {
      ++v6;
      ++p_pObject;
      if ( v6 >= Size )
        goto LABEL_5;
    }
    v9 = 1;
  }
  else
  {
LABEL_5:
    v9 = 0;
  }
  Scaleform::Lock::Unlock(&pObject->ImportSourceLock);
  return v9;
}

void __fastcall Scaleform::GFx::GFxInitImportActions::Execute(
        Scaleform::GFx::GFxInitImportActions *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::MovieDefImpl *v4; // rax
  unsigned __int64 ImportIndex; // rdi
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rbp
  Scaleform::Lock *p_ImportSourceLock; // rcx
  Scaleform::GFx::MovieDef *v8; // rdi

  v4 = m->GetResourceMovieDef(m);
  ImportIndex = this->ImportIndex;
  pObject = v4->pBindData.pObject;
  Scaleform::Lock::DoLock(&pObject->ImportSourceLock);
  p_ImportSourceLock = &pObject->ImportSourceLock;
  if ( ImportIndex < pObject->ImportSourceMovies.Data.Size )
  {
    v8 = pObject->ImportSourceMovies.Data.Data[ImportIndex].pObject;
    Scaleform::Lock::Unlock(p_ImportSourceLock);
    if ( v8 )
    {
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)&v8[3].pLib[1].RefCount + 64i64) + 504i64) > 0 )
        m->ExecuteImportedInitActions(m, v8);
    }
  }
  else
  {
    Scaleform::Lock::Unlock(p_ImportSourceLock);
  }
}

void __fastcall Scaleform::GFx::MovieBindProcess::Execute(Scaleform::GFx::MovieBindProcess *this)
{
  while ( (unsigned int)Scaleform::GFx::MovieBindProcess::BindNextFrame(this) == 1 )
    ;
}

void __fastcall Scaleform::GFx::GFxInitImportActions::ExecuteInContext(
        Scaleform::GFx::GFxInitImportActions *this,
        Scaleform::GFx::DisplayObjContainer *m,
        Scaleform::GFx::MovieDefImpl *pbindDef,
        bool recursiveCheck)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rbp
  unsigned __int64 ImportIndex; // rdi
  Scaleform::Lock *p_ImportSourceLock; // rcx
  Scaleform::GFx::MovieDefImpl *v9; // rdi

  pObject = pbindDef->pBindData.pObject;
  ImportIndex = this->ImportIndex;
  Scaleform::Lock::DoLock(&pObject->ImportSourceLock);
  p_ImportSourceLock = &pObject->ImportSourceLock;
  if ( ImportIndex < pObject->ImportSourceMovies.Data.Size )
  {
    v9 = pObject->ImportSourceMovies.Data.Data[ImportIndex].pObject;
    Scaleform::Lock::Unlock(p_ImportSourceLock);
    if ( v9
      && v9->pBindData.pObject->pDataDef.pObject->pData.pObject->InitActionsCnt > 0
      && (!recursiveCheck || v9 != m->GetResourceMovieDef(m)) )
    {
      m->ExecuteImportedInitActions(m, v9);
    }
  }
  else
  {
    Scaleform::Lock::Unlock(p_ImportSourceLock);
  }
}

void __fastcall Scaleform::GFx::ExecuteTag::ExecuteWithPriority(
        Scaleform::GFx::AS3::DoAbc *this,
        Scaleform::GFx::DisplayObjContainer *m,
        __int64 __formal)
{
  ((void (__fastcall *)(Scaleform::GFx::AS3::DoAbc *, Scaleform::GFx::DisplayObjContainer *, __int64))this->Execute)(
    this,
    m,
    __formal);
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::ExportResource(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const Scaleform::String *symbol,
        const Scaleform::GFx::ResourceId *rid,
        const Scaleform::GFx::ResourceHandle *hres)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *v4; // rbx
  Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *p_Exports; // rsi
  bool v10; // zf
  unsigned __int64 v11; // rax
  signed __int64 v12; // rax
  Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeRef v13; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::String::NoCaseKey key; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0i64;
  if ( this->LoadState < LS_LoadFinished )
  {
    v4 = this;
    Scaleform::Lock::DoLock(&this->ResourceLock);
  }
  p_Exports = &this->Exports;
  Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::SetCaseInsensitive(
    &this->Exports,
    symbol,
    hres);
  v10 = this->Exports.mHash.pTable == 0i64;
  key.pStr = symbol;
  if ( v10
    || (v11 = Scaleform::String::BernsteinHashFunctionCIS(
                (const void *)((symbol->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                *(_QWORD *)(symbol->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                0x1505ui64),
        v12 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontMap::MapEntry,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
                &this->Exports.mHash,
                &key,
                v11 & p_Exports->mHash.pTable->SizeMask),
        v12 < 0) )
  {
    v13 = 0i64;
    v12 = 0i64;
    p_Exports = 0i64;
  }
  v13.pFirst = rid;
  v13.pSecond = (const Scaleform::StringLH *)&p_Exports->mHash.pTable[2] + 5 * v12;
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeRef>(
    &this->InvExports.mHash,
    &this->InvExports,
    &v13);
  if ( v4 )
    Scaleform::Lock::Unlock(&v4->ResourceLock);
}

void __fastcall Scaleform::GFx::MovieBindProcess::FinishBinding(Scaleform::GFx::MovieBindProcess *this)
{
  Scaleform::GFx::TempBindData *pTempBindData; // rax
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rsi
  Scaleform::Lock *p_ImportSourceLock; // rbx
  Scaleform::GFx::Resource *pDefImpl_Unsafe; // rcx
  Scaleform::GFx::Resource *v6; // rsi
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( this->pImagePacker.pObject )
  {
    v7[1] = (__int64)this->pImagePacker.pObject;
    pTempBindData = this->pTempBindData;
    v7[0] = (__int64)&`Scaleform::GFx::MovieBindProcess::FinishBinding'::`5'::ImagePackVisitor::`vftable';
    pObject = this->pBindData.pObject;
    v7[2] = (__int64)pTempBindData;
    p_ImportSourceLock = &pObject->ImportSourceLock;
    Scaleform::Lock::DoLock(&pObject->ImportSourceLock);
    pDefImpl_Unsafe = pObject->pDefImpl_Unsafe;
    if ( pDefImpl_Unsafe && Scaleform::GFx::Resource::AddRef_NotZero(pDefImpl_Unsafe) )
    {
      v6 = pObject->pDefImpl_Unsafe;
      Scaleform::Lock::Unlock(p_ImportSourceLock);
    }
    else
    {
      Scaleform::Lock::Unlock(&pObject->ImportSourceLock);
      v6 = 0i64;
    }
    ((void (__fastcall *)(Scaleform::GFx::Resource *, __int64 *, __int64))v6->__vftable[6].GetResourceTypeCode)(
      v6,
      v7,
      2i64);
    this->pImagePacker.pObject->Finish(this->pImagePacker.pObject);
    Scaleform::GFx::Resource::Release(v6);
    v7[0] = (__int64)&Scaleform::GFx::AS3::VectorBase<unsigned long>::ArrayFunc::`vftable';
    this->pBindData.pObject->ResourceBinding.Frozen = 1;
  }
  else
  {
    this->pBindData.pObject->ResourceBinding.Frozen = 1;
  }
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::FinishLoadingFrame(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        Scaleform::GFx::LoadProcess *plp,
        bool finished)
{
  unsigned __int8 v6; // bp
  Scaleform::GFx::FrameBindData *FrameBindData; // rsi
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rcx
  Scaleform::GFx::LoadUpdateSync *pObject; // rbx

  Scaleform::GFx::LoadProcess::CommitFrameTags(plp);
  v6 = 1;
  FrameBindData = Scaleform::GFx::LoadProcess::CreateFrameBindData(plp);
  if ( FrameBindData )
  {
    FrameBindData->Frame = this->LoadingFrame;
    pAltStream = (Scaleform::GFx::SWFProcessInfo *)plp->pAltStream;
    if ( !pAltStream )
      pAltStream = &plp->ProcessInfo;
    FrameBindData->BytesLoaded = pAltStream->Stream.Pos
                               + pAltStream->Stream.FilePos
                               - pAltStream->Stream.DataSize
                               - plp->ProcessInfo.FileStartPos;
  }
  pObject = this->pFrameUpdate.pObject;
  Scaleform::Mutex::DoLock(&pObject->mMutex);
  if ( !FrameBindData )
  {
    this->LoadState = LS_LoadError;
    v6 = 0;
    goto LABEL_12;
  }
  if ( this->BindData.pFrameData.Value )
    this->BindData.pFrameDataLast->pNextFrame.Value = FrameBindData;
  else
    this->BindData.pFrameData.Value = FrameBindData;
  ++this->LoadingFrame;
  this->BindData.pFrameDataLast = FrameBindData;
  if ( finished )
  {
    this->LoadState = LS_LoadFinished;
LABEL_12:
    if ( finished || !v6 )
      Scaleform::WaitCondition::NotifyAll(&this->pFrameUpdate.pObject->WC);
  }
  Scaleform::Mutex::Unlock(&pObject->mMutex);
  return v6;
}

Scaleform::MemoryHeap *__fastcall Scaleform::GFx::MovieDefImpl::GetBindDataHeap(Scaleform::GFx::MovieDefImpl *this)
{
  return this->pBindData.pObject->pHeap;
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

char __fastcall Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::GetCaseInsensitive(
        Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key,
        unsigned int *pvalue)
{
  bool v3; // zf
  unsigned __int64 v6; // rax
  signed __int64 v7; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v8; // rax
  Scaleform::String::NoCaseKey keya; // [rsp+30h] [rbp+8h] BYREF

  v3 = this->mHash.pTable == 0i64;
  keya.pStr = key;
  if ( v3 )
    return 0;
  v6 = Scaleform::String::BernsteinHashFunctionCIS(
         (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
         0x1505ui64);
  v7 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
         &this->mHash,
         &keya,
         v6 & this->mHash.pTable->SizeMask);
  if ( v7 < 0 )
    return 0;
  v8 = &this->mHash.pTable[2 * v7 + 2];
  if ( !v8 )
    return 0;
  if ( pvalue )
    *pvalue = v8->SizeMask;
  return 1;
}

char __fastcall Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::GetCaseInsensitive(
        Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key,
        Scaleform::GFx::ResourceHandle *pvalue)
{
  bool v3; // zf
  unsigned __int64 v6; // rax
  signed __int64 v7; // rax
  char *v8; // rdi
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::GFx::Resource *pResource; // rcx
  Scaleform::String::NoCaseKey keya; // [rsp+30h] [rbp+8h] BYREF

  v3 = this->mHash.pTable == 0i64;
  keya.pStr = key;
  if ( v3 )
    return 0;
  v6 = Scaleform::String::BernsteinHashFunctionCIS(
         (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
         0x1505ui64);
  v7 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontMap::MapEntry,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
         &this->mHash,
         &keya,
         v6 & this->mHash.pTable->SizeMask);
  if ( v7 < 0 )
    return 0;
  v8 = (char *)&this->mHash.pTable[2] + 40 * v7;
  if ( !v8 )
    return 0;
  if ( pvalue )
  {
    if ( !*((_DWORD *)v8 + 2) )
    {
      v9 = (Scaleform::RefCountVImpl *)*((_QWORD *)v8 + 2);
      if ( v9 )
        Scaleform::Render::RenderBuffer::AddRef(v9);
    }
    if ( pvalue->HType == RH_Pointer )
    {
      pResource = pvalue->pResource;
      if ( pResource )
        Scaleform::GFx::Resource::Release(pResource);
    }
    pvalue->HType = *((_DWORD *)v8 + 2);
    pvalue->pResource = (Scaleform::GFx::Resource *)*((_QWORD *)v8 + 2);
  }
  return 1;
}

Scaleform::GFx::CharacterCreateInfo *__fastcall Scaleform::GFx::MovieDefImpl::GetCharacterCreateInfo(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::CharacterCreateInfo *result,
        unsigned int *rid)
{
  Scaleform::GFx::ResourceBinding *p_ResourceBinding; // rdi
  Scaleform::GFx::Resource *pResource; // rbp
  Scaleform::GFx::CharacterDef *pObject; // rbx
  volatile bool Frozen; // al
  unsigned int BindIndex; // er8
  __int64 v10; // rdi
  Scaleform::GFx::CharacterDef_vtbl *v11; // rax
  Scaleform::GFx::ResourceHandle phandle; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::GFx::ResourceBindData pdata; // [rsp+30h] [rbp-18h] BYREF
  Scaleform::GFx::ResourceId rida; // [rsp+50h] [rbp+8h] BYREF

  result->pCharDef = 0i64;
  result->pBindDefImpl = 0i64;
  result->pResource = 0i64;
  phandle.HType = RH_Pointer;
  phandle.pResource = 0i64;
  rida.Id = *rid;
  if ( !Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(
          this->pBindData.pObject->pDataDef.pObject->pData.pObject,
          &phandle,
          (Scaleform::GFx::ResourceId)&rida) )
  {
    pResource = phandle.pResource;
    goto LABEL_19;
  }
  p_ResourceBinding = &this->pBindData.pObject->ResourceBinding;
  if ( phandle.HType )
  {
    Frozen = p_ResourceBinding->Frozen;
    pdata = 0i64;
    if ( Frozen )
    {
      BindIndex = phandle.BindIndex;
      if ( phandle.BindIndex < p_ResourceBinding->ResourceCount )
      {
        v10 = (__int64)&p_ResourceBinding->pResources[phandle.BindIndex];
        if ( *(_QWORD *)v10 )
        {
          Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)v10);
          if ( pdata.pResource.pObject )
            Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
        }
        pObject = *(Scaleform::GFx::CharacterDef **)v10;
        pdata.pResource.pObject = *(Scaleform::GFx::Resource **)v10;
        p_ResourceBinding = *(Scaleform::GFx::ResourceBinding **)(v10 + 8);
        pdata.pBinding = p_ResourceBinding;
        goto LABEL_12;
      }
    }
    else
    {
      BindIndex = phandle.BindIndex;
    }
    Scaleform::GFx::ResourceBinding::GetResourceData_Locked(p_ResourceBinding, &pdata, BindIndex);
    p_ResourceBinding = pdata.pBinding;
    pObject = (Scaleform::GFx::CharacterDef *)pdata.pResource.pObject;
LABEL_12:
    if ( pObject )
      Scaleform::GFx::Resource::Release(pObject);
    pResource = phandle.pResource;
    goto LABEL_15;
  }
  pResource = phandle.pResource;
  pObject = (Scaleform::GFx::CharacterDef *)phandle.pResource;
LABEL_15:
  if ( pObject )
  {
    v11 = pObject->__vftable;
    result->pResource = pObject;
    if ( (((__int64 (__fastcall *)(Scaleform::GFx::CharacterDef *))v11->GetResourceTypeCode)(pObject) & 0x8000) != 0 )
    {
      result->pBindDefImpl = p_ResourceBinding->pOwnerDefImpl;
      result->pCharDef = pObject;
    }
  }
LABEL_19:
  if ( phandle.HType == RH_Pointer && pResource )
    Scaleform::GFx::Resource::Release(pResource);
  return result;
}

_BOOL8 __fastcall Scaleform::GFx::MovieDefImpl::GetExportedResource(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::ResourceBindData *pdata,
        const Scaleform::String *symbol,
        Scaleform::GFx::MovieDefImpl *ignoreDef)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rax
  unsigned int v5; // ebp
  Scaleform::GFx::MovieDataDef::LoadTaskData *v8; // rbx
  Scaleform::GFx::MovieDataDef *v9; // r10
  Scaleform::GFx::MovieDataDef::LoadTaskData *v10; // rcx
  char CaseInsensitive; // al
  bool v12; // bl
  Scaleform::RefCountVImpl *Resource; // rax
  Scaleform::GFx::Resource *v14; // rbx
  unsigned __int64 v15; // rdi
  Scaleform::Lock *p_ImportSourceLock; // rbx
  unsigned __int64 Size; // r8
  Scaleform::GFx::MovieDefImpl::BindTaskData *v18; // rax
  unsigned __int64 v19; // rbx
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *Data; // rax
  Scaleform::RefCountVImpl *v21; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *v22; // rax
  bool v23; // zf
  _QWORD *p_pObject; // rax
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *v25; // rsi
  __int64 v26; // rax
  Scaleform::GFx::MovieDefImpl *v27; // rcx
  Scaleform::GFx::Resource **i; // rbx
  Scaleform::GFx::Resource **v30; // rbx
  char v31; // [rsp+20h] [rbp-68h]
  _QWORD *v32; // [rsp+28h] [rbp-60h]
  Scaleform::Lock *v33; // [rsp+30h] [rbp-58h]
  Scaleform::GFx::ResourceHandle pvalue; // [rsp+38h] [rbp-50h] BYREF
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+48h] [rbp-40h] BYREF

  pObject = this->pBindData.pObject;
  v5 = 0;
  pvalue.HType = RH_Pointer;
  pvalue.pResource = 0i64;
  v8 = 0i64;
  v9 = pObject->pDataDef.pObject;
  v10 = v9->pData.pObject;
  if ( v10->LoadState < LS_LoadFinished )
  {
    v8 = v9->pData.pObject;
    Scaleform::Lock::DoLock(&v10->ResourceLock);
  }
  CaseInsensitive = Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::GetCaseInsensitive(
                      &this->pBindData.pObject->pDataDef.pObject->pData.pObject->Exports,
                      symbol,
                      &pvalue);
  v31 = CaseInsensitive;
  if ( v8 )
  {
    Scaleform::Lock::Unlock(&v8->ResourceLock);
    CaseInsensitive = v31;
  }
  if ( CaseInsensitive )
  {
    if ( pvalue.HType == RH_Index )
    {
      Scaleform::GFx::ResourceBinding::GetResourceData(
        &this->pBindData.pObject->ResourceBinding,
        pdata,
        pvalue.BindIndex);
      v12 = pdata->pResource.pObject != 0i64;
    }
    else
    {
      pdata->pBinding = &this->pBindData.pObject->ResourceBinding;
      Resource = (Scaleform::RefCountVImpl *)Scaleform::GFx::ResourceHandle::GetResource(
                                               &pvalue,
                                               &this->pBindData.pObject->ResourceBinding);
      v14 = (Scaleform::GFx::Resource *)Resource;
      if ( Resource )
        Scaleform::Render::RenderBuffer::AddRef(Resource);
      if ( pdata->pResource.pObject )
        Scaleform::GFx::Resource::Release(pdata->pResource.pObject);
      pdata->pResource.pObject = v14;
      v12 = v14 != 0i64;
    }
  }
  else
  {
    v15 = 0i64;
    p_ImportSourceLock = &this->pBindData.pObject->ImportSourceLock;
    memset(&pheapAddr, 0, sizeof(pheapAddr));
    v33 = p_ImportSourceLock;
    Scaleform::Lock::DoLock(p_ImportSourceLock);
    Size = this->pBindData.pObject->ImportSourceMovies.Data.Size;
    if ( Size )
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pheapAddr,
        &pheapAddr,
        Size);
      v15 = pheapAddr.Size;
    }
    v18 = this->pBindData.pObject;
    if ( v18->ImportSourceMovies.Data.Size )
    {
      v19 = 0i64;
      do
      {
        Data = v18->ImportSourceMovies.Data.Data;
        v21 = (Scaleform::RefCountVImpl *)Data[v19].pObject;
        if ( v21 != (Scaleform::RefCountVImpl *)ignoreDef )
        {
          if ( v21 )
            Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)Data[v19].pObject);
          Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
            &pheapAddr,
            &pheapAddr,
            v15 + 1);
          v15 = pheapAddr.Size;
          v22 = &pheapAddr.Data[pheapAddr.Size];
          v23 = v22 == (Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *)8;
          p_pObject = &v22[-1].pObject;
          v32 = p_pObject;
          if ( !v23 )
          {
            if ( v21 )
            {
              Scaleform::Render::RenderBuffer::AddRef(v21);
              p_pObject = v32;
            }
            *p_pObject = v21;
          }
          if ( v21 )
            Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)v21);
        }
        ++v19;
        v18 = this->pBindData.pObject;
      }
      while ( v19 < v18->ImportSourceMovies.Data.Size );
      p_ImportSourceLock = v33;
    }
    Scaleform::Lock::Unlock(p_ImportSourceLock);
    v25 = pheapAddr.Data;
    if ( v15 )
    {
      v26 = 0i64;
      while ( 1 )
      {
        v27 = v25[v26].pObject;
        if ( v27 )
        {
          if ( Scaleform::GFx::MovieDefImpl::GetExportedResource(v27, pdata, symbol, 0i64) )
            break;
        }
        v26 = ++v5;
        if ( v5 >= v15 )
          goto LABEL_33;
      }
      v30 = &v25[v15 - 1].pObject;
      do
      {
        if ( *v30 )
          Scaleform::GFx::Resource::Release(*v30);
        --v30;
        --v15;
      }
      while ( v15 );
      if ( v25 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v25);
      v12 = 1;
    }
    else
    {
LABEL_33:
      for ( i = &v25[v15 - 1].pObject; v15; --v15 )
      {
        if ( *i )
          Scaleform::GFx::Resource::Release(*i);
        --i;
      }
      if ( v25 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v25);
      v12 = 0;
    }
  }
  if ( pvalue.HType == RH_Pointer && pvalue.pResource )
    Scaleform::GFx::Resource::Release(pvalue.pResource);
  return v12;
}

Scaleform::GFx::ExporterInfoImpl *__fastcall Scaleform::GFx::MovieDefImpl::GetExporterInfo(
        Scaleform::GFx::MovieDefImpl *this)
{
  Scaleform::GFx::MovieDataDef *pObject; // rcx
  Scaleform::GFx::ExporterInfoImpl *result; // rax

  pObject = this->pBindData.pObject->pDataDef.pObject;
  result = 0i64;
  if ( pObject->pData.pObject->Header.mExporterInfo.SI.Format )
    return &pObject->pData.pObject->Header.mExporterInfo;
  return result;
}

__int64 __fastcall Scaleform::GFx::MovieDefImpl::GetFileAttributes(Scaleform::GFx::MovieDefImpl *this)
{
  return this->pBindData.pObject->pDataDef.pObject->pData.pObject->FileAttributes;
}

const char *__fastcall Scaleform::GFx::GFxMovieDataDefFileKeyInterface::GetFileURL(
        Scaleform::GFx::GFxMovieDataDefFileKeyInterface *this,
        void *hdata)
{
  return (const char *)((*((_QWORD *)hdata + 2) & 0xFFFFFFFFFFFFFFFCui64) + 12);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

const char *__fastcall Scaleform::GFx::MovieDefImpl::GetFileURL(Scaleform::GFx::MovieDefImpl *this)
{
  return (const char *)((this->pBindData.pObject->pDataDef.pObject->pData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64)
                      + 12);
}

Scaleform::GFx::CharPosInfoFlags *__fastcall Scaleform::GFx::GFxPlaceObjectUnpacked::GetFlags(
        Scaleform::GFx::GFxPlaceObjectUnpacked *this,
        Scaleform::GFx::CharPosInfoFlags *result)
{
  result->Flags = (unsigned __int16)this->Pos.Flags;
  return result;
}

Scaleform::Render::Font *__fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetFontData(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        _DWORD *rid)
{
  Scaleform::GFx::FontDataUseNode *volatile Value; // rax

  Value = this->BindData.pFonts.Value;
  if ( !Value )
    return 0i64;
  while ( Value->Id.Id != *rid )
  {
    Value = Value->pNext.Value;
    if ( !Value )
      return 0i64;
  }
  return Value->pFontData.pObject;
}

Scaleform::GFx::Resource *__fastcall Scaleform::GFx::MovieDefImpl::GetFontResource(
        Scaleform::GFx::MovieDefImpl *this,
        const char *pfontName,
        unsigned int styleFlags,
        Scaleform::GFx::MovieDefImpl::SearchInfo *psearchInfo)
{
  unsigned int v5; // er15
  const char *v6; // rbx
  Scaleform::GFx::FontDataUseNode *volatile Value; // rdi
  int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // er14
  Scaleform::Render::Font *v12; // rcx
  const char *v13; // rax
  unsigned int BindIndex; // er8
  Scaleform::GFx::ResourceBinding *p_ResourceBinding; // rcx
  __int64 v16; // rbx
  Scaleform::GFx::Resource *v17; // rcx
  Scaleform::GFx::ResourceBinding *v18; // rax
  Scaleform::GFx::MovieDataDef *v19; // rdi
  const Scaleform::StringLH *v20; // r14
  unsigned int v21; // er15
  __int64 v22; // rsi
  unsigned __int64 HeapTypeBits; // rax
  __int64 v24; // rsi
  Scaleform::GFx::ResourceBinding *v25; // rcx
  Scaleform::GFx::Resource *pResource; // rdi
  Scaleform::GFx::Resource *v27; // rbx
  Scaleform::GFx::Resource_vtbl *v28; // rdx
  char v29; // al
  volatile bool Frozen; // al
  unsigned int v32; // er8
  Scaleform::RefCountVImpl **v33; // rdi
  int v34; // ecx
  __int64 v35; // rcx
  char *v36; // rsi
  const char *v37; // rax
  const char *v38; // rax
  unsigned __int64 v39; // rcx
  char *v40; // r14
  Scaleform::GFx::Resource *v41; // rax
  Scaleform::GFx::Resource *v42; // rbx
  int v43; // ecx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v44; // rcx
  Scaleform::Lock *p_ImportSourceLock; // rbx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v46; // rax
  __int64 v47; // rdi
  Scaleform::GFx::MovieDefImpl *v48; // rcx
  __int64 v49; // rsi
  Scaleform::GFx::MovieDataDef *pObject; // [rsp+20h] [rbp-40h]
  Scaleform::GFx::ResourceHandle phandle; // [rsp+28h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceBindData pdata; // [rsp+38h] [rbp-28h] BYREF
  Scaleform::GFx::ResourceBindData v53; // [rsp+48h] [rbp-18h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+A0h] [rbp+40h] BYREF
  char *b; // [rsp+A8h] [rbp+48h]
  unsigned int v56; // [rsp+B0h] [rbp+50h]

  v56 = styleFlags;
  b = (char *)pfontName;
  v5 = styleFlags;
  v6 = pfontName;
  pObject = this->pBindData.pObject->pDataDef.pObject;
  Value = pObject->pData.pObject->BindData.pFonts.Value;
  if ( Value )
  {
    v9 = 3;
    if ( (styleFlags & 0x300) != 0 )
      v9 = 771;
    v10 = styleFlags & 0x10 | v9;
    v11 = styleFlags & 0x313;
    do
    {
      v12 = Value->pFontData.pObject;
      if ( (v10 & v12->Flags) == v11 )
      {
        v13 = v12->GetName(v12);
        if ( !Scaleform::String::CompareNoCase(v13, v6) )
        {
          BindIndex = Value->BindIndex;
          p_ResourceBinding = &this->pBindData.pObject->ResourceBinding;
          pdata = 0i64;
          if ( p_ResourceBinding->Frozen && BindIndex < p_ResourceBinding->ResourceCount )
          {
            v16 = (__int64)&p_ResourceBinding->pResources[BindIndex];
            if ( *(_QWORD *)v16 )
            {
              Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)v16);
              if ( pdata.pResource.pObject )
                Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
            }
            v17 = *(Scaleform::GFx::Resource **)v16;
            pdata.pResource.pObject = *(Scaleform::GFx::Resource **)v16;
            v18 = *(Scaleform::GFx::ResourceBinding **)(v16 + 8);
            v6 = b;
            pdata.pBinding = v18;
          }
          else
          {
            Scaleform::GFx::ResourceBinding::GetResourceData_Locked(p_ResourceBinding, &pdata, BindIndex);
            v17 = pdata.pResource.pObject;
          }
          if ( v17 )
          {
            v27 = v17;
            if ( psearchInfo )
            {
              v28 = v17[1].__vftable;
              if ( (HIDWORD(v28->GetResourceReport) & 0x40) != 0 )
              {
                psearchInfo->Status = FoundInResourcesNoGlyphs;
              }
              else if ( (v5 & 3) == 0
                     || (v29 = (*((__int64 (__fastcall **)(Scaleform::GFx::Resource_vtbl *))v28->~Resource + 19))(v17[1].__vftable),
                         v17 = pdata.pResource.pObject,
                         v29) )
              {
                psearchInfo->Status = FoundInResources;
              }
              else
              {
                psearchInfo->Status = FoundInResourcesNeedFaux;
              }
            }
            if ( v17 )
              Scaleform::GFx::Resource::Release(v17);
            return v27;
          }
        }
      }
      Value = Value->pNext.Value;
    }
    while ( Value );
  }
  v19 = pObject;
  v20 = (const Scaleform::StringLH *)pObject->pData.pObject->BindData.pImports.Value;
  if ( v20 )
  {
    while ( 1 )
    {
      v21 = 0;
      if ( v20[1].HeapTypeBits )
        break;
LABEL_61:
      v20 = (const Scaleform::StringLH *)v20[5].pData;
      if ( !v20 )
      {
        v5 = v56;
        goto LABEL_63;
      }
    }
    v22 = 0i64;
    while ( 1 )
    {
      if ( psearchInfo )
        Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::Set<Scaleform::StringLH>(
          &psearchInfo->ImportSearchUrls,
          &psearchInfo->ImportSearchUrls,
          v20 + 3);
      HeapTypeBits = v20->HeapTypeBits;
      v24 = 2 * v22;
      phandle.HType = RH_Pointer;
      phandle.pResource = 0i64;
      rid.Id = *(_DWORD *)(HeapTypeBits + 8 * v24 + 8);
      if ( !Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(
              v19->pData.pObject,
              &phandle,
              (Scaleform::GFx::ResourceId)&rid) )
      {
        pResource = phandle.pResource;
        goto LABEL_57;
      }
      v25 = &this->pBindData.pObject->ResourceBinding;
      if ( phandle.HType == RH_Pointer )
      {
        pResource = phandle.pResource;
        v27 = phandle.pResource;
        goto LABEL_45;
      }
      Frozen = this->pBindData.pObject->ResourceBinding.Frozen;
      v53 = 0i64;
      if ( Frozen )
      {
        v32 = phandle.BindIndex;
        if ( phandle.BindIndex < v25->ResourceCount )
        {
          v33 = (Scaleform::RefCountVImpl **)&v25->pResources[phandle.BindIndex];
          if ( *v33 )
          {
            Scaleform::Render::RenderBuffer::AddRef(*v33);
            if ( v53.pResource.pObject )
              Scaleform::GFx::Resource::Release(v53.pResource.pObject);
          }
          v27 = (Scaleform::GFx::Resource *)*v33;
          v53 = *(Scaleform::GFx::ResourceBindData *)v33;
          goto LABEL_42;
        }
      }
      else
      {
        v32 = phandle.BindIndex;
      }
      Scaleform::GFx::ResourceBinding::GetResourceData_Locked(v25, &v53, v32);
      v27 = v53.pResource.pObject;
LABEL_42:
      if ( v27 )
        Scaleform::GFx::Resource::Release(v27);
      pResource = phandle.pResource;
LABEL_45:
      if ( v27 && (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))v27->GetResourceTypeCode)(v27) & 0xFF00) == 512 )
      {
        v34 = 3;
        if ( (v56 & 0x300) != 0 )
          v34 = 771;
        if ( (HIDWORD(v27[1].GetResourceReport) & (v56 & 0x10 | v34)) == (v56 & 0x313) )
        {
          v35 = *(_QWORD *)(v20->HeapTypeBits + 8 * v24);
          v36 = b;
          if ( !Scaleform::String::CompareNoCase((const char *)((v35 & 0xFFFFFFFFFFFFFFFCui64) + 12), b)
            || (v37 = (const char *)(*((__int64 (__fastcall **)(Scaleform::GFx::Resource_vtbl *))v27[1].~Resource + 1))(v27[1].__vftable),
                !Scaleform::String::CompareNoCase(v37, v36)) )
          {
            if ( psearchInfo )
            {
              v38 = (const char *)(v20[3].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
              v39 = *(_QWORD *)v38 & 0x7FFFFFFFFFFFFFFFi64;
              if ( v39 < 0xE || Scaleform::String::CompareNoCase(&v38[v39 - 2], "gfxfontlib.swf") )
                psearchInfo->Status = FoundInImports;
              else
                psearchInfo->Status = FoundInImportsFontLib;
              Scaleform::String::operator=(&psearchInfo->ImportFoundUrl, v20 + 3);
            }
            if ( phandle.HType == RH_Pointer && pResource )
            {
              Scaleform::GFx::Resource::Release(pResource);
              return v27;
            }
            return v27;
          }
        }
      }
LABEL_57:
      if ( phandle.HType == RH_Pointer && pResource )
        Scaleform::GFx::Resource::Release(pResource);
      v19 = pObject;
      v22 = ++v21;
      if ( v21 >= v20[1].HeapTypeBits )
        goto LABEL_61;
    }
  }
LABEL_63:
  v40 = b;
  v41 = this->GetResource(this, b);
  v42 = v41;
  if ( v41 )
  {
    if ( (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))v41->GetResourceTypeCode)(v41) & 0xFF00) == 512 )
    {
      v43 = 3;
      if ( (v5 & 0x300) != 0 )
        v43 = 771;
      if ( (HIDWORD(v42[1].GetResourceReport) & (v5 & 0x10 | v43)) == (v5 & 0x313) )
      {
        if ( psearchInfo )
          psearchInfo->Status = FoundInExports;
        return v42;
      }
    }
    goto LABEL_83;
  }
  v44 = v19->pData.pObject;
  if ( (v44->FileAttributes & 8 | 0x10u) < 0x18 || !v44->BindData.pImports.Value )
  {
LABEL_83:
    if ( psearchInfo )
      psearchInfo->Status = NotFound;
    return 0i64;
  }
  p_ImportSourceLock = &this->pBindData.pObject->ImportSourceLock;
  Scaleform::Lock::DoLock(p_ImportSourceLock);
  v46 = this->pBindData.pObject;
  v47 = 0i64;
  if ( !v46->ImportSourceMovies.Data.Size )
  {
LABEL_82:
    Scaleform::Lock::Unlock(p_ImportSourceLock);
    goto LABEL_83;
  }
  while ( 1 )
  {
    v48 = v46->ImportSourceMovies.Data.Data[v47].pObject;
    if ( v48 )
    {
      v49 = (__int64)v48->GetFontResource(v48, v40, v5, psearchInfo);
      if ( v49 )
        break;
    }
    v46 = this->pBindData.pObject;
    if ( ++v47 >= v46->ImportSourceMovies.Data.Size )
      goto LABEL_82;
  }
  Scaleform::Lock::Unlock(p_ImportSourceLock);
  return (Scaleform::GFx::Resource *)v49;
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::GetFrameCount(Scaleform::GFx::MovieDataDef *this)
{
  return this->pData.pObject->Header.FrameCount;
}

__int64 __fastcall Scaleform::GFx::MovieDefImpl::GetFrameCount(Scaleform::GFx::MovieDefImpl *this)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::MovieDataDef *))this->pBindData.pObject->pDataDef.pObject->GetFrameCount)(this->pBindData.pObject->pDataDef.pObject);
}

const Scaleform::String *__fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetFrameLabel(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        unsigned int frameNumber,
        unsigned int *exactFrameNumberForLabel)
{
  Scaleform::Lock *p_PlaylistLock; // rbx
  const Scaleform::String *v8; // rdi

  if ( this->LoadState >= LS_LoadFinished )
    return Scaleform::GFx::MovieDataDef::TranslateNumberToFrameString(
             &this->NamedFrames,
             frameNumber,
             exactFrameNumberForLabel);
  p_PlaylistLock = &this->PlaylistLock;
  Scaleform::Lock::DoLock(&this->PlaylistLock);
  v8 = Scaleform::GFx::MovieDataDef::TranslateNumberToFrameString(
         &this->NamedFrames,
         frameNumber,
         exactFrameNumberForLabel);
  Scaleform::Lock::Unlock(p_PlaylistLock);
  return v8;
}

const Scaleform::String *__fastcall Scaleform::GFx::MovieDataDef::GetFrameLabel(
        Scaleform::GFx::MovieDataDef *this,
        unsigned int frameNumber,
        unsigned int *exactFrameNumberForLabel)
{
  return Scaleform::GFx::MovieDataDef::LoadTaskData::GetFrameLabel(
           this->pData.pObject,
           frameNumber,
           exactFrameNumberForLabel);
}

Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *__fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetFrameLabels(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        unsigned int frameNumber,
        Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *destArr)
{
  __int64 v6; // r15
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  __m128i v8; // xmm0
  unsigned __int64 SizeMask; // rdx
  unsigned __int64 v10; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v11; // rcx
  int v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // rcx
  const Scaleform::String *v15; // rsi
  Scaleform::String *v16; // rcx
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  __m128i v20; // [rsp+20h] [rbp-38h] BYREF
  char v21; // [rsp+60h] [rbp+8h]

  v21 = 0;
  if ( this->LoadState < LS_LoadFinished )
  {
    Scaleform::Lock::DoLock(&this->PlaylistLock);
    v21 = 1;
  }
  v6 = 0i64;
  pTable = this->NamedFrames.mHash.pTable;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v10 = 0i64;
    v11 = pTable + 1;
    do
    {
      if ( v11->EntryCount != -2i64 )
        break;
      ++v10;
      v11 += 2;
    }
    while ( v10 <= SizeMask );
    v20.m128i_i64[0] = (__int64)&this->NamedFrames;
    v20.m128i_i64[1] = v10;
    v8 = _mm_load_si128(&v20);
  }
  else
  {
    v8 = 0i64;
  }
  v20 = v8;
  v12 = 0;
  v13 = v8.m128i_i64[1];
  while ( v8.m128i_i64[0] )
  {
    v14 = *(_QWORD *)v8.m128i_i64[0];
    if ( !*(_QWORD *)v8.m128i_i64[0] || v13 > *(_QWORD *)(v14 + 8) )
      break;
    if ( frameNumber == *(_DWORD *)(32 * v13 + v14 + 40) )
    {
      v15 = (const Scaleform::String *)(32 * v13 + v14);
      Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &destArr->Data,
        destArr,
        destArr->Data.Size + 1);
      v16 = &destArr->Data.Data[destArr->Data.Size - 1];
      if ( v16 )
        Scaleform::String::String(v16, v15 + 4);
      ++v12;
    }
    v17 = *(_QWORD *)(*(_QWORD *)v8.m128i_i64[0] + 8i64);
    if ( v13 <= (__int64)v17 && ++v13 <= v17 )
    {
      v18 = (_QWORD *)(*(_QWORD *)v8.m128i_i64[0] + 32 * v13 + 16);
      do
      {
        if ( *v18 != -2i64 )
          break;
        ++v13;
        v18 += 4;
      }
      while ( v13 <= v17 );
    }
  }
  if ( v21 )
    Scaleform::Lock::Unlock(&this->PlaylistLock);
  if ( v12 )
    return destArr;
  return (Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *)v6;
}

Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *__fastcall Scaleform::GFx::MovieDataDef::GetFrameLabels(
        Scaleform::GFx::MovieDataDef *this,
        unsigned int frameNumber,
        Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *destArr)
{
  return Scaleform::GFx::MovieDataDef::LoadTaskData::GetFrameLabels(this->pData.pObject, frameNumber, destArr);
}

float __fastcall Scaleform::GFx::MovieDefImpl::GetFrameRate(Scaleform::GFx::MovieDefImpl *this)
{
  return this->pBindData.pObject->pDataDef.pObject->pData.pObject->Header.FPS;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::MovieDefImpl::GetFrameRect(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::Render::Rect<float> *v2; // rax

  v2 = result;
  *(__m128 *)result = _mm_mul_ps(
                        (__m128)this->pBindData.pObject->pDataDef.pObject->pData.pObject->Header.FrameRect,
                        (__m128)_xmm);
  return v2;
}

unsigned __int64 __fastcall Scaleform::GFx::GFxMovieDataDefFileKeyInterface::GetHashCode(
        Scaleform::GFx::GFxMovieDataDefFileKeyInterface *this,
        void *hdata)
{
  return Scaleform::String::BernsteinHashFunction(
           (const void *)((*((_QWORD *)hdata + 2) & 0xFFFFFFFFFFFFFFFCui64) + 12),
           *(_QWORD *)(*((_QWORD *)hdata + 2) & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
           0x1505ui64) ^ *((_QWORD *)hdata + 5) ^ *((_QWORD *)hdata + 3) ^ *((_QWORD *)hdata + 4) ^ ((*((_QWORD *)hdata + 5) ^ *((_QWORD *)hdata + 3)) >> 7);
}

unsigned __int64 __fastcall Scaleform::GFx::GFxMovieDefImplKeyInterface::GetHashCode(
        Scaleform::GFx::GFxMovieDefImplKeyInterface *this,
        void *hdata)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)*((_QWORD *)hdata + 3);
  return v2[9] ^ v2[8] ^ v2[7] ^ v2[6] ^ v2[4] ^ v2[3] ^ v2[2] ^ ((v2[9] ^ v2[8] ^ v2[7] ^ v2[6] ^ v2[4] ^ v2[3] ^ v2[2] ^ *((_QWORD *)hdata + 2)) >> 7) ^ *((_QWORD *)hdata + 2);
}

double __fastcall Scaleform::GFx::MovieDefImpl::GetHeight(Scaleform::GFx::MovieDefImpl *this)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rax
  double result; // xmm0_8

  pObject = this->pBindData.pObject->pDataDef.pObject->pData.pObject;
  *(_QWORD *)&result = LODWORD(pObject->Header.FrameRect.y2);
  *(float *)&result = ceilf((float)(*(float *)&result - pObject->Header.FrameRect.y1) * 0.050000001);
  return result;
}

Scaleform::MemoryHeap *__fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetImageHeap(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this)
{
  Scaleform::MemoryHeap *pHeap; // rcx
  __int64 v3; // rax
  Scaleform::MemoryHeap *pObject; // rcx
  Scaleform::MemoryHeap *v5; // rdi
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-10h]

  if ( this->pImageHeap.pObject )
    return this->pImageHeap.pObject;
  pHeap = this->pHeap;
  v14 = 0i64;
  v7 = 4;
  v8 = 32i64;
  v9 = 4096i64;
  v10 = 0i64;
  v11 = -1i64;
  v12 = 0i64;
  v13 = 5i64;
  v3 = (__int64)pHeap->CreateHeap(pHeap, "_Images", (const Scaleform::MemoryHeap::HeapDesc *)&v7);
  pObject = this->pImageHeap.pObject;
  v5 = (Scaleform::MemoryHeap *)v3;
  if ( pObject )
    pObject->Release(pObject);
  this->pImageHeap.pObject = v5;
  return v5;
}

Scaleform::MemoryHeap *__fastcall Scaleform::GFx::MovieDefImpl::GetImageHeap(Scaleform::GFx::MovieDefImpl *this)
{
  return Scaleform::GFx::MovieDataDef::LoadTaskData::GetImageHeap(this->pBindData.pObject->pDataDef.pObject->pData.pObject);
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetInitActionListSize(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this)
{
  Scaleform::Lock *p_PlaylistLock; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v2; // rdi

  p_PlaylistLock = &this->PlaylistLock;
  v2 = this;
  Scaleform::Lock::DoLock(&this->PlaylistLock);
  LODWORD(v2) = v2->InitActionList.Data.Size;
  Scaleform::Lock::Unlock(p_PlaylistLock);
  return (unsigned int)v2;
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetInitActions(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        Scaleform::GFx::TimelineDef::Frame *pframe,
        int frameNumber)
{
  Scaleform::Lock *p_PlaylistLock; // rbx
  __int64 v4; // rsi
  unsigned __int8 v7; // di
  Scaleform::GFx::TimelineDef::Frame *v8; // rcx

  p_PlaylistLock = &this->PlaylistLock;
  v4 = frameNumber;
  Scaleform::Lock::DoLock(&this->PlaylistLock);
  if ( (unsigned int)v4 < this->InitActionList.Data.Size )
  {
    v8 = &this->InitActionList.Data.Data[v4];
    v7 = 1;
    pframe->pTagPtrList = v8->pTagPtrList;
    pframe->TagCount = v8->TagCount;
  }
  else
  {
    v7 = 0;
  }
  Scaleform::Lock::Unlock(p_PlaylistLock);
  return v7;
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::GetInitActions(
        Scaleform::GFx::MovieDataDef *this,
        Scaleform::GFx::TimelineDef::Frame *pframe,
        int frame)
{
  return Scaleform::GFx::MovieDataDef::LoadTaskData::GetInitActions(this->pData.pObject, pframe, frame);
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::FontResource::GetKey(
        Scaleform::GFx::MovieDataDef *this,
        Scaleform::GFx::ResourceKey *result)
{
  Scaleform::GFx::ResourceKey::ResourceKey(result, &this->mResourceKey);
  return result;
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::MovieDefImpl::GetKey(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::ResourceKey *result)
{
  Scaleform::GFx::MovieDefImpl::CreateMovieKey(
    result,
    this->pBindData.pObject->pDataDef.pObject,
    this->pBindStates.pObject);
  return result;
}

__int64 __fastcall ActorShot::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLText *this)
{
  return 2i64;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

bool __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetLabeledFrame(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const char *label,
        unsigned int *frameNumber,
        bool translateNumbers)
{
  Scaleform::Lock *p_PlaylistLock; // rbx
  bool v10; // di

  if ( this->LoadState >= LS_LoadFinished )
    return Scaleform::GFx::MovieDataDef::TranslateFrameString(&this->NamedFrames, label, frameNumber, translateNumbers);
  p_PlaylistLock = &this->PlaylistLock;
  Scaleform::Lock::DoLock(&this->PlaylistLock);
  v10 = Scaleform::GFx::MovieDataDef::TranslateFrameString(&this->NamedFrames, label, frameNumber, translateNumbers);
  Scaleform::Lock::Unlock(p_PlaylistLock);
  return v10;
}

bool __fastcall Scaleform::GFx::MovieDataDef::GetLabeledFrame(
        Scaleform::GFx::MovieDataDef *this,
        const char *label,
        unsigned int *frameNumber,
        bool translateNumbers)
{
  return Scaleform::GFx::MovieDataDef::LoadTaskData::GetLabeledFrame(
           this->pData.pObject,
           label,
           frameNumber,
           translateNumbers);
}

Scaleform::MemoryHeap *__fastcall Scaleform::GFx::MovieDefImpl::GetLoadDataHeap(Scaleform::GFx::MovieDefImpl *this)
{
  return this->pBindData.pObject->pDataDef.pObject->pData.pObject->pHeap;
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::GetLoadingFrame(Scaleform::GFx::MovieDataDef *this)
{
  return this->pData.pObject->LoadingFrame;
}

__int64 __fastcall Scaleform::GFx::MovieDefImpl::GetLoadingFrame(Scaleform::GFx::MovieDefImpl *this)
{
  return this->pBindData.pObject->BindingFrame;
}

__int64 __fastcall Scaleform::GFx::MovieDefImpl::GetMetadata(
        Scaleform::GFx::MovieDefImpl *this,
        char *pbuff,
        unsigned int buffSize)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rax
  unsigned __int8 *pMetadata; // rdx
  unsigned int MetadataSize; // ebx

  pObject = this->pBindData.pObject->pDataDef.pObject->pData.pObject;
  if ( !pbuff )
    return pObject->MetadataSize;
  pMetadata = pObject->pMetadata;
  MetadataSize = pObject->MetadataSize;
  if ( buffSize < MetadataSize )
    MetadataSize = buffSize;
  if ( pMetadata )
    memmove(pbuff, pMetadata, MetadataSize);
  return MetadataSize;
}

Scaleform::GFx::MovieDataDef *__fastcall Scaleform::GFx::MovieDefImpl::GetMovieDataResource(
        Scaleform::GFx::MovieDefImpl *this)
{
  return this->pBindData.pObject->pDataDef.pObject;
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::GetMovieDefImplAddRef(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this)
{
  Scaleform::Lock *p_ImportSourceLock; // rbx
  Scaleform::GFx::MovieDefImpl *pDefImpl_Unsafe; // rcx
  Scaleform::GFx::MovieDefImpl *v4; // rdi

  p_ImportSourceLock = &this->ImportSourceLock;
  Scaleform::Lock::DoLock(&this->ImportSourceLock);
  pDefImpl_Unsafe = this->pDefImpl_Unsafe;
  if ( pDefImpl_Unsafe && Scaleform::GFx::Resource::AddRef_NotZero(pDefImpl_Unsafe) )
    v4 = this->pDefImpl_Unsafe;
  else
    v4 = 0i64;
  Scaleform::Lock::Unlock(p_ImportSourceLock);
  return v4;
}

const Scaleform::String *__fastcall Scaleform::GFx::MovieDefImpl::GetNameOfExportedResource(
        Scaleform::GFx::MovieDefImpl *this,
        const unsigned int *rid)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *v4; // rbx
  Scaleform::GFx::MovieDataDef *pObject; // r8
  Scaleform::GFx::MovieDataDef::LoadTaskData *v6; // rcx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v7; // rdi
  signed __int64 Index; // rax
  __int64 v9; // rax
  __int64 v10; // rdi

  v4 = 0i64;
  pObject = this->pBindData.pObject->pDataDef.pObject;
  v6 = pObject->pData.pObject;
  if ( v6->LoadState < LS_LoadFinished )
  {
    v4 = pObject->pData.pObject;
    Scaleform::Lock::DoLock(&v6->ResourceLock);
  }
  v7 = this->pBindData.pObject->pDataDef.pObject->pData.pObject;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&v7->InvExports,
            rid);
  if ( Index < 0 )
    v9 = 0i64;
  else
    v9 = (__int64)&v7->InvExports.mHash.pTable[2 * Index + 2];
  v10 = v9 + 8;
  if ( !v9 )
    v10 = 0i64;
  if ( v4 )
    Scaleform::Lock::Unlock(&v4->ResourceLock);
  return (const Scaleform::String *)v10;
}

const Scaleform::GFx::TimelineDef::Frame *__fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetPlaylist(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const Scaleform::GFx::TimelineDef::Frame *result,
        int frameNumber)
{
  __int64 v4; // rbp
  Scaleform::GFx::TimelineDef::Frame *v7; // rcx

  v4 = frameNumber;
  if ( this->LoadState < LS_LoadFinished )
  {
    Scaleform::Lock::DoLock(&this->PlaylistLock);
    v7 = &this->Playlist.Data.Data[v4];
    result->pTagPtrList = v7->pTagPtrList;
    result->TagCount = v7->TagCount;
    Scaleform::Lock::Unlock(&this->PlaylistLock);
    return result;
  }
  else
  {
    *result = this->Playlist.Data.Data[frameNumber];
    return result;
  }
}

const Scaleform::GFx::TimelineDef::Frame *__fastcall Scaleform::GFx::MovieDataDef::GetPlaylist(
        Scaleform::GFx::MovieDataDef *this,
        const Scaleform::GFx::TimelineDef::Frame *result,
        int frame)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData::GetPlaylist(this->pData.pObject, result, frame);
  return result;
}

Scaleform::GFx::Resource *__fastcall Scaleform::GFx::MovieDefImpl::GetResource(
        Scaleform::GFx::MovieDefImpl *this,
        const char *pexportName)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rax
  Scaleform::GFx::Resource *Resource; // rbp
  Scaleform::GFx::MovieDataDef::LoadTaskData *v6; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v7; // rcx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v8; // rdi
  unsigned __int64 v9; // rax
  signed __int64 v10; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  void *v12; // rbx
  Scaleform::String v13; // [rsp+48h] [rbp+10h] BYREF
  Scaleform::String::NoCaseKey key; // [rsp+50h] [rbp+18h] BYREF

  if ( !pexportName )
    return 0i64;
  Scaleform::String::String(&v13, pexportName);
  pObject = this->pBindData.pObject;
  Resource = 0i64;
  v6 = 0i64;
  v7 = pObject->pDataDef.pObject->pData.pObject;
  if ( v7->LoadState < LS_LoadFinished )
  {
    v6 = pObject->pDataDef.pObject->pData.pObject;
    Scaleform::Lock::DoLock(&v7->ResourceLock);
  }
  key.pStr = &v13;
  v8 = this->pBindData.pObject->pDataDef.pObject->pData.pObject;
  if ( v8->Exports.mHash.pTable )
  {
    v9 = Scaleform::String::BernsteinHashFunctionCIS(
           (const void *)((v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
           *(_QWORD *)(v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
           0x1505ui64);
    v10 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontMap::MapEntry,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
            &v8->Exports.mHash,
            &key,
            v9 & v8->Exports.mHash.pTable->SizeMask);
    if ( v10 >= 0 )
    {
      pTable = v8->Exports.mHash.pTable;
      if ( pTable )
      {
        if ( v10 <= (signed __int64)pTable->SizeMask )
          Resource = Scaleform::GFx::ResourceHandle::GetResource(
                       (Scaleform::GFx::ResourceHandle *)(&pTable[2].SizeMask + 5 * v10),
                       &this->pBindData.pObject->ResourceBinding);
      }
    }
  }
  if ( v6 )
    Scaleform::Lock::Unlock(&v6->ResourceLock);
  v12 = (void *)(v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
  return Resource;
}

Scaleform::GFx::Resource *__fastcall Scaleform::GFx::ResourceHandle::GetResource(
        Scaleform::GFx::ResourceHandle *this,
        const Scaleform::GFx::ResourceBinding *pbinding)
{
  volatile bool Frozen; // al
  volatile unsigned int BindIndex; // er8
  Scaleform::RefCountVImpl **v5; // rdi
  Scaleform::GFx::Resource *pObject; // rbx
  Scaleform::GFx::ResourceBindData pdata; // [rsp+20h] [rbp-18h] BYREF

  if ( this->HType == RH_Pointer )
    return this->pResource;
  Frozen = pbinding->Frozen;
  BindIndex = this->BindIndex;
  pdata = 0i64;
  if ( Frozen && BindIndex < pbinding->ResourceCount )
  {
    v5 = (Scaleform::RefCountVImpl **)&pbinding->pResources[BindIndex];
    if ( *v5 )
    {
      Scaleform::Render::RenderBuffer::AddRef(*v5);
      if ( pdata.pResource.pObject )
        Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
    }
    pObject = (Scaleform::GFx::Resource *)*v5;
    pdata = *(Scaleform::GFx::ResourceBindData *)v5;
  }
  else
  {
    Scaleform::GFx::ResourceBinding::GetResourceData_Locked(
      (Scaleform::GFx::ResourceBinding *)pbinding,
      &pdata,
      BindIndex);
    pObject = pdata.pResource.pObject;
  }
  if ( pObject )
    Scaleform::GFx::Resource::Release(pObject);
  return pObject;
}

void __fastcall Scaleform::GFx::ResourceBinding::GetResourceData(
        Scaleform::GFx::ResourceBinding *this,
        Scaleform::GFx::ResourceBindData *pdata,
        unsigned int index)
{
  Scaleform::GFx::ResourceBindData *v4; // rbx

  if ( this->Frozen && index < this->ResourceCount )
  {
    v4 = &this->pResources[index];
    if ( v4->pResource.pObject )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v4->pResource.pObject);
    if ( pdata->pResource.pObject )
      Scaleform::GFx::Resource::Release(pdata->pResource.pObject);
    pdata->pResource.pObject = v4->pResource.pObject;
    pdata->pBinding = v4->pBinding;
  }
  else
  {
    Scaleform::GFx::ResourceBinding::GetResourceData_Locked(this, pdata, index);
  }
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        Scaleform::GFx::ResourceHandle *phandle,
        const Scaleform::GFx::ResourceId *rid)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *v3; // rbx
  Scaleform::HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2> *p_Resources; // rdi
  signed __int64 v8; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> > v9; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v10; // rdi
  Scaleform::RefCountVImpl *SizeMask; // rcx
  Scaleform::GFx::Resource *pResource; // rcx
  Scaleform::GFx::Resource *v13; // rax
  unsigned __int8 v14; // di

  v3 = 0i64;
  if ( this->LoadState < LS_LoadFinished )
  {
    v3 = this;
    Scaleform::Lock::DoLock(&this->ResourceLock);
  }
  p_Resources = &this->Resources;
  if ( !p_Resources->mHash.pTable
    || (v8 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::findIndexCore<Scaleform::GFx::ResourceId>(
               &p_Resources->mHash,
               rid,
               p_Resources->mHash.pTable->SizeMask & (rid->Id ^ ((unsigned __int64)rid->Id >> 8))),
        v8 < 0) )
  {
    v8 = 0i64;
    p_Resources = 0i64;
  }
  if ( p_Resources && (v9.pTable = p_Resources->mHash.pTable) != 0i64 && v8 <= (signed __int64)v9.pTable->SizeMask )
  {
    v10 = &v9.pTable[2 * v8 + 2];
    if ( !LODWORD(v10->EntryCount) )
    {
      SizeMask = (Scaleform::RefCountVImpl *)v10->SizeMask;
      if ( SizeMask )
        Scaleform::Render::RenderBuffer::AddRef(SizeMask);
    }
    if ( phandle->HType == RH_Pointer )
    {
      pResource = phandle->pResource;
      if ( pResource )
        Scaleform::GFx::Resource::Release(pResource);
    }
    phandle->HType = v10->EntryCount;
    v13 = (Scaleform::GFx::Resource *)v10->SizeMask;
    v14 = 1;
    phandle->pResource = v13;
  }
  else
  {
    v14 = 0;
  }
  if ( v3 )
    Scaleform::Lock::Unlock(&v3->ResourceLock);
  return v14;
}

Scaleform::MemoryHeap *__fastcall Scaleform::GFx::MovieDataDef::GetResourceHeap(Scaleform::GFx::MovieDataDef *this)
{
  return (Scaleform::MemoryHeap *)this->Scaleform::GFx::ResourceReport::__vftable[1].GetStats;
}

Scaleform::String *__fastcall Scaleform::GFx::MovieDataDef::GetResourceName(
        Scaleform::GFx::MovieDataDef *this,
        Scaleform::String *result)
{
  const char *ShortFilename; // rax

  ShortFilename = Scaleform::GetShortFilename((const char *)(((unsigned __int64)this->Scaleform::GFx::ResourceReport::__vftable[2].GetResourceName & 0xFFFFFFFFFFFFFFFCui64)
                                                           + 12));
  Scaleform::String::String(result, ShortFilename);
  return result;
}

Scaleform::String *__fastcall Scaleform::GFx::ResourceReport::GetResourceName(
        Scaleform::GFx::ResourceReport *this,
        Scaleform::String *result)
{
  Scaleform::String::String(result);
  return result;
}

Scaleform::GFx::ResourceReport *__fastcall Scaleform::GFx::MovieDataDef::GetResourceReport(
        Scaleform::GFx::MovieDataDef *this)
{
  Scaleform::GFx::ResourceReport *result; // rax

  result = &this->Scaleform::GFx::ResourceReport;
  if ( !this )
    return 0i64;
  return result;
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::GetResourceTypeCode(Scaleform::GFx::MovieDataDef *this)
{
  return 0x8000i64;
}

__int64 __fastcall Scaleform::GFx::MovieDefImpl::GetResourceTypeCode(Scaleform::GFx::MovieDefImpl *this)
{
  return 768i64;
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::GetSWFFlags(Scaleform::GFx::MovieDataDef *this)
{
  return this->pData.pObject->Header.SWFFlags;
}

__int64 __fastcall Scaleform::GFx::MovieDefImpl::GetSWFFlags(Scaleform::GFx::MovieDefImpl *this)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::MovieDataDef *))this->pBindData.pObject->pDataDef.pObject->GetSWFFlags)(this->pBindData.pObject->pDataDef.pObject);
}

Scaleform::GFx::MovieDataDef::SceneInfo *__fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetScene(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        unsigned __int64 index)
{
  Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *pObject; // r8

  pObject = this->Scenes.pObject;
  if ( pObject && index < pObject->Data.Size )
    return &pObject->Data.Data[index];
  else
    return 0i64;
}

Scaleform::GFx::MovieDataDef::SceneInfo *__fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::GetScenes(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        unsigned __int64 *count)
{
  Scaleform::ArrayLH<Scaleform::GFx::MovieDataDef::SceneInfo,2,Scaleform::ArrayDefaultPolicy> *pObject; // rax

  pObject = this->Scenes.pObject;
  if ( pObject )
  {
    *count = pObject->Data.Size;
    return this->Scenes.pObject->Data.Data;
  }
  else
  {
    *count = 0i64;
    return 0i64;
  }
}

Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *__fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::GetShapeMeshProvider(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this,
        Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *result,
        Scaleform::Render::ShapeMeshProvider *defMeshProv)
{
  Scaleform::Lock *p_ImportSourceLock; // rsi
  Scaleform::Render::ShapeMeshProvider *v5; // rbx
  signed __int64 v7; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *v8; // rax
  unsigned __int64 *p_SizeMask; // rdi
  Scaleform::Render::ShapeMeshProvider *v10; // rdi
  char v11; // bp
  Scaleform::Render::ShapeMeshProvider *v13; // [rsp+50h] [rbp+8h]
  Scaleform::GFx::ASString key; // [rsp+60h] [rbp+18h] BYREF

  key.pNode = (Scaleform::GFx::ASStringNode *)defMeshProv;
  p_ImportSourceLock = &this->ImportSourceLock;
  v5 = 0i64;
  Scaleform::Lock::DoLock(&this->ImportSourceLock);
  v7 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>>::NodeHashF>>::findIndexAlt<Scaleform::GFx::ASString>(
         (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF> > *)&this->BoundShapeMeshProviders,
         &key);
  if ( v7 < 0 )
    v8 = 0i64;
  else
    v8 = &this->BoundShapeMeshProviders.mHash.pTable[2 * v7 + 2];
  p_SizeMask = &v8->SizeMask;
  if ( !v8 )
    p_SizeMask = 0i64;
  if ( p_SizeMask )
  {
    if ( *p_SizeMask )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(*p_SizeMask + 16) + 8i64))(*p_SizeMask + 16);
    v10 = (Scaleform::Render::ShapeMeshProvider *)*p_SizeMask;
    v13 = v10;
    v11 = 1;
    if ( v10 )
      v10->AddRef(&v10->Scaleform::Render::MeshProvider);
    v5 = v10;
  }
  else
  {
    v13 = 0i64;
    v10 = 0i64;
    v11 = 2;
  }
  result->pObject = v13;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v5 )
      v5->Release(&v5->Scaleform::Render::MeshProvider);
  }
  if ( (v11 & 1) != 0 && v10 )
    v10->Release(&v10->Scaleform::Render::MeshProvider);
  Scaleform::Lock::Unlock(p_ImportSourceLock);
  return result;
}

Scaleform::GFx::StateBag *__fastcall Scaleform::GFx::MovieDefImpl::GetStateBagImpl(Scaleform::GFx::MovieDefImpl *this)
{
  Scaleform::GFx::StateBag *v1; // rdx
  Scaleform::GFx::StateBag *result; // rax

  v1 = *(Scaleform::GFx::StateBag **)&this->RefCount.Value;
  result = v1 + 2;
  if ( !v1 )
    return 0i64;
  return result;
}

__int64 __fastcall Scaleform::GFx::MovieDataDef::GetVersion(Scaleform::GFx::MovieDataDef *this)
{
  return (unsigned int)this->pData.pObject->Header.Version;
}

__int64 __fastcall Scaleform::GFx::MovieDefImpl::GetVersion(Scaleform::GFx::MovieDefImpl *this)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::MovieDataDef *))this->pBindData.pObject->pDataDef.pObject->GetVersion)(this->pBindData.pObject->pDataDef.pObject);
}

double __fastcall Scaleform::GFx::MovieDefImpl::GetWidth(Scaleform::GFx::MovieDefImpl *this)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rax
  double result; // xmm0_8

  pObject = this->pBindData.pObject->pDataDef.pObject->pData.pObject;
  *(_QWORD *)&result = LODWORD(pObject->Header.FrameRect.x2);
  *(float *)&result = ceilf((float)(*(float *)&result - pObject->Header.FrameRect.x1) * 0.050000001);
  return result;
}

bool __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::InitImageFileMovieDef(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        unsigned int fileLength,
        Scaleform::GFx::ImageResource *pimageResource,
        Scaleform::GFx::ImageCreator *imgCreator,
        Scaleform::Log *plog,
        bool bilinear)
{
  Scaleform::GFx::ImageResource *v7; // rdi
  Scaleform::MemoryHeap *v9; // rax
  Scaleform::Render::ImageSource *pImage; // r8
  Scaleform::GFx::ImageCreator_vtbl *v11; // rax
  Scaleform::Render::Image *v12; // rbx
  Scaleform::GFx::ImageResource *v13; // rax
  Scaleform::GFx::ImageResource *v14; // rax
  Scaleform::GFx::ImageShapeCharacterDef *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r15
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::ResourceId rid; // [rsp+20h] [rbp-B9h] BYREF
  Scaleform::GFx::CharPosInfo __that; // [rsp+30h] [rbp-A9h] BYREF
  char v27[40]; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v28; // [rsp+C8h] [rbp-11h]

  v7 = pimageResource;
  this->Header.FileLength = fileLength;
  if ( !imgCreator || pimageResource->pImage->GetImageType(pimageResource->pImage) )
  {
    rid.Id = 0;
    Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(this, &rid, v7);
LABEL_13:
    if ( v7 )
    {
      v15 = (Scaleform::GFx::ImageShapeCharacterDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                                        this->pHeap,
                                                        48i64);
      if ( v15 )
      {
        Scaleform::GFx::ImageShapeCharacterDef::ImageShapeCharacterDef(v15, v7, imgCreator, bilinear);
        v17 = v16;
      }
      else
      {
        v17 = 0i64;
      }
      *(_DWORD *)(v17 + 24) = 1;
      rid.Id = 1;
      Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(this, &rid, (Scaleform::GFx::Resource *)v17);
      Scaleform::Lock::DoLock(&this->PlaylistLock);
      Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &this->Playlist.Data,
        this->Header.FrameCount);
      Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &this->InitActionList.Data,
        this->Header.FrameCount);
      this->InitActionsCnt = 0;
      v18 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))this->TagMemAllocator.pHeap->Alloc)(
              this->TagMemAllocator.pHeap,
              160i64,
              16i64);
      if ( v18 )
      {
        v19 = v18 + 16;
        *(_QWORD *)v18 = this->TagMemAllocator.pAllocations;
        this->TagMemAllocator.pAllocations = (Scaleform::GFx::DataAllocator::Block *)v18;
        if ( v18 != -16 )
        {
          v20 = v18 + 32;
          if ( v18 != -32 )
            Scaleform::GFx::GFxPlaceObjectUnpacked::GFxPlaceObjectUnpacked((Scaleform::GFx::GFxPlaceObjectUnpacked *)(v18 + 32));
          Scaleform::Render::Cxform::Cxform((Scaleform::Render::Cxform *)v27);
          __that.pFilters.pObject = 0i64;
          *(_DWORD *)&__that.ClipDepth = 0x40000;
          __that.Depth = 1;
          v22 = v21[1];
          *(_OWORD *)&__that.ColorTransform.M[0][0] = *v21;
          *(_OWORD *)&__that.Matrix_1.M[0][0] = _xmm;
          *(_OWORD *)&__that.ColorTransform.M[1][0] = v22;
          __that.Ratio = 0.0;
          *(_OWORD *)&__that.Matrix_1.M[1][0] = _xmm;
          __that.CharacterId.Id = 1;
          *(_WORD *)&__that.BlendMode = 256;
          __that.ClassName = 0i64;
          Scaleform::GFx::CharPosInfo::operator=((Scaleform::GFx::CharPosInfo *)(v19 + 32), &__that);
          pObject = (Scaleform::RefCountVImpl *)__that.pFilters.pObject;
          *(_QWORD *)v19 = v20;
          this->Playlist.Data.Data->pTagPtrList = (Scaleform::GFx::ExecuteTag **)v19;
          this->Playlist.Data.Data->TagCount = 1;
          if ( pObject )
            Scaleform::RefCountImpl::Release(pObject);
        }
      }
      Scaleform::Lock::Unlock(&this->PlaylistLock);
      Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)v17);
    }
    goto LABEL_24;
  }
  v9 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, v7);
  pImage = (Scaleform::Render::ImageSource *)v7->pImage;
  *(_QWORD *)&v27[8] = v9;
  v11 = imgCreator->__vftable;
  *(_DWORD *)v27 = 1;
  *(_QWORD *)&v27[16] = 0x100000001i64;
  *(_OWORD *)&v27[24] = 0i64;
  v28 = 0i64;
  v12 = v11->CreateImage(imgCreator, (const Scaleform::GFx::ImageCreateInfo *)v27, pImage);
  if ( v12 )
  {
    v13 = (Scaleform::GFx::ImageResource *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&v27[8] + 80i64))(
                                             *(_QWORD *)&v27[8],
                                             104i64);
    if ( v13 )
    {
      Scaleform::GFx::ImageResource::ImageResource(v13, v12, Use_Bitmap);
      v7 = v14;
    }
    else
    {
      v7 = 0i64;
    }
    rid.Id = 0;
    Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(this, &rid, v7);
    if ( v7 )
      Scaleform::GFx::Resource::Release(v7);
    v12->Release(v12);
    goto LABEL_13;
  }
  v7 = 0i64;
  if ( plog )
    Scaleform::Log::LogError(plog, "Can't create or decode image.");
LABEL_24:
  Scaleform::GFx::MovieDataDef::LoadTaskData::UpdateLoadState(this, this->Header.FrameCount, LS_LoadFinished);
  return v7 != 0i64;
}

bool __fastcall Scaleform::GFx::GFxMovieDataDefFileKeyInterface::KeyEquals(
        Scaleform::GFx::GFxMovieDataDefFileKeyInterface *this,
        void *hdata,
        const Scaleform::GFx::ResourceKey *other)
{
  _QWORD *hKeyData; // r8
  unsigned __int8 *v5; // rax
  unsigned __int64 v6; // r8
  int v7; // ecx
  int v8; // edx

  if ( this != other->pKeyInterface )
    return 0;
  hKeyData = other->hKeyData;
  if ( *((_QWORD *)hdata + 3) != hKeyData[3]
    || *((_QWORD *)hdata + 5) != hKeyData[5]
    || *((_QWORD *)hdata + 4) != hKeyData[4] )
  {
    return 0;
  }
  v5 = (unsigned __int8 *)((*((_QWORD *)hdata + 2) & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v6 = (hKeyData[2] & 0xFFFFFFFFFFFFFFFCui64) - (*((_QWORD *)hdata + 2) & 0xFFFFFFFFFFFFFFFCui64);
  do
  {
    v7 = v5[v6];
    v8 = *v5 - v7;
    if ( v8 )
      break;
    ++v5;
  }
  while ( v7 );
  return !v8;
}

bool __fastcall Scaleform::GFx::GFxMovieDefImplKeyInterface::KeyEquals(
        Scaleform::GFx::GFxMovieDefImplKeyInterface *this,
        void *hdata,
        const Scaleform::GFx::ResourceKey *other)
{
  bool result; // al
  _QWORD *hKeyData; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx

  if ( this != other->pKeyInterface )
    return 0;
  hKeyData = other->hKeyData;
  result = 0;
  if ( *((_QWORD *)hdata + 2) == hKeyData[2] )
  {
    v5 = (_QWORD *)hKeyData[3];
    v6 = (_QWORD *)*((_QWORD *)hdata + 3);
    if ( v6[2] == v5[2]
      && v6[3] == v5[3]
      && v6[4] == v5[4]
      && v6[6] == v5[6]
      && v6[7] == v5[7]
      && v6[8] == v5[8]
      && v6[9] == v5[9] )
    {
      return 1;
    }
  }
  return result;
}

void Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogWarning(
        Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *this,
        const char *pfmt,
        ...)
{
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *v2; // rax
  __int64 *v3; // rcx
  Scaleform::Log *GlobalLog; // rax
  __int64 v5; // rax
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  const char *v7; // [rsp+48h] [rbp+10h]
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, pfmt);
  v7 = pfmt;
  v2 = this - 3;
  if ( !this )
    v2 = 0i64;
  v3 = (__int64 *)v2[4].__vftable;
  if ( !v3 )
  {
    GlobalLog = Scaleform::Log::GetGlobalLog();
    pfmt = v7;
    v3 = (__int64 *)GlobalLog;
  }
  v5 = *v3;
  v6[0] = 135168;
  (*(void (__fastcall **)(__int64 *, int *, const char *, __int64 *))(v5 + 8))(v3, v6, pfmt, (__int64 *)va);
}

void Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogWarning(
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream> *this,
        const char *pfmt,
        ...)
{
  AgDisplayPlatformImplementation *Log; // rax
  AgDisplayPlatformData *m_platformData; // r10
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, pfmt);
  Log = Scaleform::GFx::Stream::GetLog((AgDisplay *)this);
  if ( Log )
  {
    m_platformData = Log->m_platformData;
    v4[0] = 135168;
    ((void (__fastcall *)(AgDisplayPlatformImplementation *, int *, const char *, __int64 *))m_platformData->m_direct3d9)(
      Log,
      v4,
      pfmt,
      (__int64 *)va);
  }
}

bool __fastcall Scaleform::GFx::MatchFileNames(const Scaleform::String *path1, const Scaleform::String *path2)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rdi
  int v4; // er11
  int v5; // er10
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // al
  char v10; // dl
  int v11; // er8
  int v12; // edx
  char v13; // cl

  v2 = (_DWORD *)(path2->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v3 = (_DWORD *)(path1->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v4 = *v2 - 1;
  v5 = *v3 - 1;
  if ( (v5 < 0 || v4 < 0) && v5 != v4 )
    return 0;
  if ( v5 >= 0 )
  {
    v7 = v5;
    v8 = v4;
    while ( v8 >= 0 )
    {
      v9 = *((_BYTE *)v3 + v7 + 12);
      if ( v9 == 92 || v9 == 47 )
      {
        v10 = *((_BYTE *)v2 + v8 + 12);
        if ( v10 == 92 || v10 == 47 )
          return 1;
      }
      v11 = v9;
      if ( (unsigned int)(v9 - 65) <= 0x19 )
        v11 = v9 + 32;
      v12 = *((char *)v2 + v8 + 12);
      if ( (unsigned int)(v12 - 65) <= 0x19 )
        v12 += 32;
      if ( v11 != v12 )
        return 0;
      --v5;
      --v4;
      --v8;
      if ( --v7 < 0 )
        break;
    }
  }
  if ( v4 == v5 )
    return 1;
  if ( v4 >= v5 )
    v13 = *((_BYTE *)v2 + v4 + 12);
  else
    v13 = *((_BYTE *)v3 + v5 + 12);
  return v13 == 92 || v13 == 47;
}

void __fastcall Scaleform::GFx::MovieBindProcess::OnAbandon(Scaleform::GFx::MovieBindProcess *this, bool started)
{
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rcx

  pObject = this->pBindData.pObject;
  if ( pObject )
  {
    if ( started )
      pObject->BindingCanceled = 1;
    else
      Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(pObject, 3u);
  }
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::OnMovieDataDefRelease(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this)
{
  if ( this->LoadState <= LS_LoadingFrames )
    this->LoadingCanceled = 1;
}

void __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::OnMovieDefRelease(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rdi
  Scaleform::GFx::LoadUpdateSync *v3; // rbx

  Scaleform::Lock::DoLock(&this->ResourceBinding.ResourceLock);
  this->ResourceBinding.pOwnerDefRes = 0i64;
  Scaleform::Lock::Unlock(&this->ResourceBinding.ResourceLock);
  Scaleform::Lock::DoLock(&this->ImportSourceLock);
  this->pDefImpl_Unsafe = 0i64;
  Scaleform::Lock::Unlock(&this->ImportSourceLock);
  if ( (this->BindState & 0xF) <= 1 )
    this->BindingCanceled = 1;
  pObject = this->pDataDef.pObject->pData.pObject;
  v3 = pObject->pFrameUpdate.pObject;
  if ( v3 )
  {
    Scaleform::Mutex::DoLock(&v3->mMutex);
    Scaleform::WaitCondition::NotifyAll(&pObject->pFrameUpdate.pObject->WC);
    Scaleform::Mutex::Unlock(&v3->mMutex);
  }
}

unsigned __int8 *__fastcall Scaleform::GFx::DataAllocator::OverflowAlloc(
        Scaleform::GFx::DataAllocator *this,
        unsigned __int64 bytes)
{
  Scaleform::GFx::DataAllocator::Block **v4; // rax
  Scaleform::GFx::DataAllocator::Block *v5; // rcx
  unsigned __int8 *result; // rax
  char *v7; // rax

  if ( bytes > 0xFF8 )
  {
    v4 = (Scaleform::GFx::DataAllocator::Block **)this->pHeap->Alloc(this->pHeap, bytes + 8, 0i64);
    v5 = (Scaleform::GFx::DataAllocator::Block *)v4;
    if ( v4 )
    {
      *v4 = this->pAllocations;
      result = (unsigned __int8 *)(v4 + 1);
      this->pAllocations = v5;
      return result;
    }
    return 0i64;
  }
  if ( bytes > this->BytesLeft )
  {
    v7 = (char *)this->pHeap->Alloc(this->pHeap, 8184i64, 0i64);
    if ( !v7 )
      return 0i64;
    *(_QWORD *)v7 = this->pAllocations;
    this->pCurrent = (unsigned __int8 *)(v7 + 8);
    this->pAllocations = (Scaleform::GFx::DataAllocator::Block *)v7;
    this->BytesLeft = 8176i64;
  }
  result = this->pCurrent;
  this->BytesLeft -= bytes;
  this->pCurrent = &result[bytes];
  return result;
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::Read(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        Scaleform::GFx::LoadProcess *plp,
        Scaleform::GFx::MovieBindProcess *pbp)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbp
  Scaleform::GFx::MovieBindProcess *v4; // rdi
  char v7; // si
  int v8; // ebx
  signed int v9; // eax
  Scaleform::GFx::TagType v10; // eax
  int TagLength; // er12
  signed int v12; // ebx
  __int64 v13; // r15
  int TagDataOffset; // esi
  int TagOffset; // edi
  Scaleform::GFx::TagType TagType; // ebx
  void *v17; // rbx
  void (__fastcall *v18)(_SETJMP_FLOAT128 *); // r8
  __int64 v19; // rax
  __int64 LoadState; // rdx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v21; // rcx
  char v22; // [rsp+20h] [rbp-88h]
  signed int v23; // [rsp+24h] [rbp-84h]
  signed int v24; // [rsp+28h] [rbp-80h]
  Scaleform::String v26; // [rsp+38h] [rbp-70h] BYREF
  Scaleform::GFx::TagType v27; // [rsp+40h] [rbp-68h]
  int v28; // [rsp+44h] [rbp-64h]
  int v29; // [rsp+48h] [rbp-60h]
  int v30; // [rsp+4Ch] [rbp-5Ch]
  Scaleform::GFx::ProgressHandler *pObject; // [rsp+50h] [rbp-58h]
  Scaleform::GFx::TagInfo pTagInfo; // [rsp+58h] [rbp-50h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)plp->pAltStream;
  v4 = pbp;
  if ( !pAltStream )
    pAltStream = &plp->ProcessInfo;
  Scaleform::Lock::DoLock(&this->PlaylistLock);
  Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Playlist.Data,
    this->Header.FrameCount);
  Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->InitActionList.Data,
    this->Header.FrameCount);
  Scaleform::Lock::Unlock(&this->PlaylistLock);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "Note: SWF Frame Rate = %f, Frames = %d\n");
  this->TagCount = 0;
  v7 = 0;
  v8 = 0;
  v22 = 0;
  v9 = this->Header.FileLength / 0x1E;
  if ( v9 < 0x2000 )
    v9 = 0x2000;
  v24 = v9;
  if ( pAltStream->Stream.Pos + pAltStream->Stream.FilePos - pAltStream->Stream.DataSize >= plp->ProcessInfo.FileEndPos )
  {
LABEL_34:
    LoadState = plp->LoadState;
    if ( plp->FrameTags[LoadState].Data.Size || !(_DWORD)LoadState && plp->InitActionTags.Data.Size )
    {
      Scaleform::GFx::MovieDataDef::LoadTaskData::FinishLoadingFrame(this, plp, 1);
      if ( v4 )
        Scaleform::GFx::MovieBindProcess::BindNextFrame(v4);
    }
    else
    {
      Scaleform::GFx::MovieDataDef::LoadTaskData::UpdateLoadState(this, this->LoadingFrame, LS_LoadFinished);
    }
    return;
  }
  while ( !this->LoadingCanceled )
  {
    v10 = Scaleform::GFx::Stream::OpenTag(&pAltStream->Stream, &pTagInfo);
    TagLength = pTagInfo.TagLength;
    v12 = pTagInfo.TagLength + v8;
    v13 = (unsigned int)v10;
    v23 = v12;
    if ( v7 && (this->LoadingFrame == 1 || v12 > v24 || pTagInfo.TagLength > 0x2000) )
    {
      Scaleform::WaitCondition::NotifyAll(&this->pFrameUpdate.pObject->WC);
      TagLength = pTagInfo.TagLength;
      v22 = 0;
      v23 = 0;
    }
    pObject = plp->pLoadStates.pObject->pProgressHandler.pObject;
    if ( pObject )
    {
      TagDataOffset = pTagInfo.TagDataOffset;
      TagOffset = pTagInfo.TagOffset;
      TagType = pTagInfo.TagType;
      Scaleform::String::String(&v26, &this->FileURL);
      v27 = TagType;
      v28 = TagOffset;
      v29 = TagLength;
      v30 = TagDataOffset;
      pObject->LoadTagUpdate(pObject, (const Scaleform::GFx::ProgressHandler::TagInfo *)&v26, 0);
      v17 = (void *)(v26.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v26.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
      v4 = pbp;
    }
    if ( (_DWORD)v13 != 1 )
    {
      if ( (unsigned int)v13 >= 0x5C )
      {
        v19 = (unsigned int)(v13 - 1000);
        if ( (unsigned int)v19 <= 9 )
        {
          v18 = (void (__fastcall *)(_SETJMP_FLOAT128 *))Scaleform::GFx::GFx_GFX_TagLoaderTable[v19];
          goto LABEL_21;
        }
      }
      else
      {
        v18 = (void (__fastcall *)(_SETJMP_FLOAT128 *))Scaleform::GFx::SWF_TagLoaderTable[v13];
LABEL_21:
        if ( v18 )
        {
          v18((_SETJMP_FLOAT128 *)plp);
          goto LABEL_24;
        }
      }
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "*** no tag loader for type %d\n");
    }
LABEL_24:
    Scaleform::GFx::Stream::CloseTag(&pAltStream->Stream);
    ++this->TagCount;
    if ( (_DWORD)v13 == 1 )
    {
      if ( !(unsigned __int8)Scaleform::GFx::MovieDataDef::LoadTaskData::FinishLoadingFrame(this, plp, 0) )
        return;
      v22 = 1;
      v7 = 1;
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  ShowFrame\n");
      if ( v4 )
        Scaleform::GFx::MovieBindProcess::BindNextFrame(v4);
    }
    else
    {
      if ( !(_DWORD)v13
        && pAltStream->Stream.Pos + pAltStream->Stream.FilePos - pAltStream->Stream.DataSize != plp->ProcessInfo.FileEndPos )
      {
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogWarning(
          &pAltStream->Stream,
          "Loader - Stream-end tag hit, but not at the end of the file yet; stopping for safety");
        goto LABEL_34;
      }
      v7 = v22;
    }
    if ( pAltStream->Stream.Pos + pAltStream->Stream.FilePos - pAltStream->Stream.DataSize >= plp->ProcessInfo.FileEndPos )
      goto LABEL_34;
    v8 = v23;
  }
  Scaleform::GFx::LoadProcess::CleanupFrameTags(plp);
  if ( v4 )
  {
    v21 = v4->pBindData.pObject;
    if ( v21 )
      Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(v21, 3u);
  }
  Scaleform::GFx::MovieDataDef::LoadTaskData::UpdateLoadState(this, this->LoadingFrame, LS_LoadCanceled);
}

void __fastcall Scaleform::GFx::GFxSystemFontResourceKeyInterface::Release(
        Scaleform::GFx::GFxMovieDefImplKeyInterface *this,
        void *hdata)
{
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)hdata);
}

void __fastcall Scaleform::GFx::MovieDefImpl::RemoveReleaseNotifier(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::MovieDefImpl::ReleaseNotifier *rn)
{
  Scaleform::GFx::AS3::TR::NodeBlock *key; // [rsp+38h] [rbp+10h] BYREF

  key = (Scaleform::GFx::AS3::TR::NodeBlock *)rn;
  Scaleform::Lock::DoLock(&this->ReleaseNotifiersLock);
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::RemoveAlt<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>(
    (Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> > > *)&this->ReleaseNotifiers,
    &key);
  Scaleform::Lock::Unlock(&this->ReleaseNotifiersLock);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                            Scaleform::Memory::pGlobalHeap,
                                                                            Data,
                                                                            8 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                                  Scaleform::Memory::pGlobalHeap,
                                                                                  8 * v5,
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::Button::CharToRec *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::Button::CharToRec *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 16 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::Button::CharToRec *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::GFx::Button::CharToRec *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *v7; // rax
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
        v7 = (Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(Scaleform::Memory::pGlobalHeap, Data, 24 * v6, pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(pheapAddr, 24 * v6, &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::ComplexMesh::FillRecord *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::ComplexMesh::FillRecord *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 56 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::ComplexMesh::FillRecord *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                             Scaleform::Memory::pGlobalHeap,
                                                             Data,
                                                             v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::ComplexMesh::FillRecord *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               Data,
                                                               8 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 264;
      this->Data = (Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                     Scaleform::Memory::pGlobalHeap,
                                                                     8 * v5,
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *v8; // rax
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
        v8 = (Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               Data,
                                                               v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 264;
      this->Data = (Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::GFx::TimelineDef::Frame *v6; // rax
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
    Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
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
      {
        v6->pTagPtrList = 0i64;
        v6->TagCount = 0;
      }
      ++v6;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieDataDef::FrameLabelInfo,Scaleform::AllocatorDH<Scaleform::GFx::MovieDataDef::FrameLabelInfo,2>,Scaleform::ArrayDefaultPolicy> *this,
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
      Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::Font::NativeHintingType>::DestructArray(
      (Scaleform::Render::Font::NativeHintingType *)&this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::MovieDataDef::SceneInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieDataDef::SceneInfo,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::MovieDataDef::SceneInfo,Scaleform::AllocatorLH<Scaleform::GFx::MovieDataDef::SceneInfo,2>,Scaleform::ArrayDefaultPolicy> *this,
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
      Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::GFx::MovieDataDef::SceneInfo>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( i->pObject )
        Scaleform::GFx::Resource::Release(i->pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( i->pObject )
        Scaleform::GFx::Resource::Release(i->pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( i->pObject )
        Scaleform::GFx::Resource::Release(i->pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::ResolveImport(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this,
        Scaleform::GFx::ImportData *pimport,
        Scaleform::GFx::MovieDefImpl *pdefImpl,
        Scaleform::GFx::LoadStates *pls,
        bool recursive)
{
  unsigned int v6; // edi
  __int64 v10; // rbx
  Scaleform::GFx::ImportData::Symbol *v11; // rbx
  Scaleform::GFx::LogState *v12; // rcx
  Scaleform::GFx::MovieDataDef *pObject; // rax
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *v14; // rdi
  bool v15; // bl
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *v16; // rbx
  Scaleform::GFx::FontDataUseNode *volatile Value; // r13
  Scaleform::GFx::FontDataUseNode *volatile v18; // rdi
  Scaleform::Render::Font *v19; // r14
  Scaleform::GFx::FontDataUseNode *volatile v20; // rbx
  Scaleform::Render::Font *v21; // rsi
  int v22; // edi
  const char *v23; // rsi
  int v24; // edx
  const char *v25; // rax
  unsigned int BindIndex; // er8
  Scaleform::GFx::ResourceBinding *p_ResourceBinding; // rcx
  Scaleform::RefCountVImpl **v28; // rbx
  void *v29; // rcx
  void *v30; // rbx
  Scaleform::GFx::FontDataUseNode *i; // [rsp+20h] [rbp-40h]
  Scaleform::String result; // [rsp+28h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceHandle phandle; // [rsp+30h] [rbp-30h] BYREF
  Scaleform::GFx::ResourceBindData bd; // [rsp+40h] [rbp-20h] BYREF
  Scaleform::GFx::ResourceBindData pdata; // [rsp+50h] [rbp-10h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+98h] [rbp+38h] BYREF

  v6 = 0;
  if ( pimport->Imports.Data.Size )
  {
    v10 = 0i64;
    do
    {
      v11 = &pimport->Imports.Data.Data[v10];
      pdata = 0i64;
      if ( Scaleform::GFx::MovieDefImpl::GetExportedResource(pdefImpl, &pdata, &v11->SymbolName, 0i64) )
      {
        rid.Id = v11->CharacterId;
        pObject = this->pDataDef.pObject;
        phandle.HType = RH_Pointer;
        phandle.pResource = 0i64;
        if ( (unsigned __int8)Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(
                                pObject->pData.pObject,
                                &phandle,
                                &rid) )
          Scaleform::GFx::ResourceBinding::SetBindData(&this->ResourceBinding, phandle.BindIndex, &pdata);
        if ( phandle.HType == RH_Pointer && phandle.pResource )
          Scaleform::GFx::Resource::Release(phandle.pResource);
      }
      else
      {
        v12 = pls->pLog.pObject;
        if ( v12 )
          Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
            &v12->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
            "Import failed - resource '%s' is not exported from movie '%s'",
            (const char *)((v11->SymbolName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
            (const char *)((pimport->SourceUrl.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      }
      if ( pdata.pResource.pObject )
        Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
      v10 = ++v6;
    }
    while ( v6 < pimport->Imports.Data.Size );
  }
  if ( !recursive )
  {
    Scaleform::Lock::DoLock(&this->ImportSourceLock);
    if ( pdefImpl )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdefImpl);
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->ImportSourceMovies.Data,
      &this->ImportSourceMovies,
      this->ImportSourceMovies.Data.Size + 1);
    v14 = &this->ImportSourceMovies.Data.Data[this->ImportSourceMovies.Data.Size - 1];
    if ( v14 )
    {
      if ( pdefImpl )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdefImpl);
      v14->pObject = pdefImpl;
    }
    if ( pdefImpl )
      Scaleform::GFx::Resource::Release(pdefImpl);
    Scaleform::Lock::Unlock(&this->ImportSourceLock);
    v15 = 0;
    recursive = 0;
    Scaleform::String::ToLower(&pimport->SourceUrl, &result);
    if ( strstr((const char *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12), "_glyphs") )
    {
      recursive = 1;
      if ( pdefImpl )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdefImpl);
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        &pls->SubstituteFontMovieDefs.Data,
        &pls->SubstituteFontMovieDefs,
        pls->SubstituteFontMovieDefs.Data.Size + 1);
      v16 = &pls->SubstituteFontMovieDefs.Data.Data[pls->SubstituteFontMovieDefs.Data.Size - 1];
      if ( v16 )
      {
        if ( pdefImpl )
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdefImpl);
        v16->pObject = pdefImpl;
      }
      if ( pdefImpl )
        Scaleform::GFx::Resource::Release(pdefImpl);
      v15 = recursive;
    }
    Value = this->pDataDef.pObject->pData.pObject->BindData.pFonts.Value;
    v18 = pdefImpl->pBindData.pObject->pDataDef.pObject->pData.pObject->BindData.pFonts.Value;
    for ( i = v18; Value; Value = Value->pNext.Value )
    {
      v19 = Value->pFontData.pObject;
      if ( !v19->GetGlyphShapeCount(v19) || v15 )
      {
        v20 = v18;
        if ( v18 )
        {
          while ( 1 )
          {
            v21 = v20->pFontData.pObject;
            if ( v21->GetGlyphShapeCount(v21) )
            {
              v22 = v21->Flags & 0x303;
              v23 = v21->GetName(v21);
              v24 = 3;
              if ( (v22 & 0x300) != 0 )
                v24 = 771;
              if ( (v19->Flags & (v22 & 0x10 | v24)) == (v22 & 0x313) )
              {
                v25 = v19->GetName(v19);
                if ( !Scaleform::String::CompareNoCase(v25, v23) )
                  break;
              }
            }
            v20 = v20->pNext.Value;
            if ( !v20 )
              goto LABEL_54;
          }
          BindIndex = v20->BindIndex;
          p_ResourceBinding = &pdefImpl->pBindData.pObject->ResourceBinding;
          bd = 0i64;
          if ( p_ResourceBinding->Frozen && BindIndex < p_ResourceBinding->ResourceCount )
          {
            v28 = (Scaleform::RefCountVImpl **)&p_ResourceBinding->pResources[BindIndex];
            if ( *v28 )
            {
              Scaleform::Render::RenderBuffer::AddRef(*v28);
              if ( bd.pResource.pObject )
                Scaleform::GFx::Resource::Release(bd.pResource.pObject);
            }
            v29 = *v28;
            bd = *(Scaleform::GFx::ResourceBindData *)v28;
          }
          else
          {
            Scaleform::GFx::ResourceBinding::GetResourceData_Locked(p_ResourceBinding, &bd, BindIndex);
            v29 = bd.pResource.pObject;
          }
          if ( v29 )
          {
            Scaleform::GFx::ResourceBinding::SetBindData(&this->ResourceBinding, Value->BindIndex, &bd);
            if ( bd.pResource.pObject )
              Scaleform::GFx::Resource::Release(bd.pResource.pObject);
          }
LABEL_54:
          v18 = i;
        }
        v15 = recursive;
      }
    }
    v30 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v30);
  }
}

char __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::ResolveImportThroughFontLib(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this,
        Scaleform::GFx::ImportData *pimport)
{
  unsigned int v2; // ebp
  __int64 v5; // rbx
  Scaleform::GFx::ResourceBinding *p_ResourceBinding; // r14
  Scaleform::GFx::ImportData::Symbol *v7; // rbx
  Scaleform::GFx::FontData *v8; // rax
  Scaleform::Render::Font *v9; // rax
  Scaleform::Render::Font *v10; // rdi
  Scaleform::GFx::FontResource *v11; // rax
  Scaleform::GFx::Resource *v12; // rax
  Scaleform::GFx::Resource *v13; // rsi
  Scaleform::GFx::MovieDataDef *pObject; // rax
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *v15; // rdx
  Scaleform::GFx::ResourceHandle phandle; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::GFx::ResourceBindData bd; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  if ( pimport->Imports.Data.Size )
  {
    v5 = 0i64;
    p_ResourceBinding = &this->ResourceBinding;
    do
    {
      bd.pResource.pObject = 0i64;
      bd.pBinding = p_ResourceBinding;
      v7 = &pimport->Imports.Data.Data[v5];
      v8 = (Scaleform::GFx::FontData *)Scaleform::Memory::pGlobalHeap->Alloc(
                                         Scaleform::Memory::pGlobalHeap,
                                         136i64,
                                         0i64);
      if ( v8 )
      {
        Scaleform::GFx::FontData::FontData(
          v8,
          (const char *)((v7->SymbolName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          0);
        v10 = v9;
      }
      else
      {
        v10 = 0i64;
      }
      v10->Flags |= 0x40u;
      v11 = (Scaleform::GFx::FontResource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                              Scaleform::Memory::pGlobalHeap,
                                              64i64);
      if ( v11 )
      {
        Scaleform::GFx::FontResource::FontResource(v11, v10, p_ResourceBinding);
        v13 = v12;
      }
      else
      {
        v13 = 0i64;
      }
      if ( bd.pResource.pObject )
        Scaleform::GFx::Resource::Release(bd.pResource.pObject);
      bd.pResource.pObject = v13;
      rid.Id = v7->CharacterId;
      pObject = this->pDataDef.pObject;
      phandle.HType = RH_Pointer;
      phandle.pResource = 0i64;
      if ( (unsigned __int8)Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(
                              pObject->pData.pObject,
                              &phandle,
                              &rid) )
        Scaleform::GFx::ResourceBinding::SetBindData(p_ResourceBinding, phandle.BindIndex, &bd);
      if ( phandle.HType == RH_Pointer && phandle.pResource )
        Scaleform::GFx::Resource::Release(phandle.pResource);
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
      if ( bd.pResource.pObject )
        Scaleform::GFx::Resource::Release(bd.pResource.pObject);
      v5 = ++v2;
    }
    while ( v2 < pimport->Imports.Data.Size );
  }
  Scaleform::Lock::DoLock(&this->ImportSourceLock);
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->ImportSourceMovies.Data,
    &this->ImportSourceMovies,
    this->ImportSourceMovies.Data.Size + 1);
  v15 = &this->ImportSourceMovies.Data.Data[this->ImportSourceMovies.Data.Size - 1];
  if ( v15 )
    v15->pObject = 0i64;
  Scaleform::Lock::Unlock(&this->ImportSourceLock);
  return 1;
}

void __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this,
        unsigned int newState)
{
  Scaleform::GFx::LoadUpdateSync *pObject; // rbx
  Scaleform::WaitCondition *p_WC; // rcx

  pObject = this->pBindUpdate.pObject;
  if ( pObject )
  {
    Scaleform::Mutex::DoLock(&pObject->mMutex);
    p_WC = &this->pBindUpdate.pObject->WC;
    this->BindState = newState;
    Scaleform::WaitCondition::NotifyAll(p_WC);
    Scaleform::Mutex::Unlock(&pObject->mMutex);
  }
  else
  {
    this->BindState = newState;
  }
}

void __fastcall Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::SetCaseInsensitive(
        Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key,
        const unsigned int *value)
{
  bool v3; // zf
  unsigned __int64 v7; // rax
  signed __int64 v8; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rdx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef v12; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::String::NoCaseKey keya; // [rsp+40h] [rbp+8h] BYREF

  v3 = this->mHash.pTable == 0i64;
  keya.pStr = key;
  if ( v3
    || (v7 = Scaleform::String::BernsteinHashFunctionCIS(
               (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
               *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
               0x1505ui64),
        v8 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
               &this->mHash,
               &keya,
               v7 & this->mHash.pTable->SizeMask),
        v8 < 0)
    || (pTable = this->mHash.pTable) == 0i64
    || v8 > (signed __int64)pTable->SizeMask )
  {
    v10 = (_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v12.pFirst = key;
    v12.pSecond = value;
    v11 = Scaleform::String::BernsteinHashFunctionCIS((char *)v10 + 12, *v10 & 0x7FFFFFFFFFFFFFFFi64, 0x1505ui64);
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
      &this->mHash,
      this,
      &v12,
      v11);
  }
  else
  {
    LODWORD(pTable[2 * v8 + 2].SizeMask) = *value;
  }
}

void __fastcall Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::SetCaseInsensitive(
        Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key,
        const Scaleform::GFx::ResourceHandle *value)
{
  bool v3; // zf
  unsigned __int64 v7; // rax
  signed __int64 v8; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  unsigned __int64 *v10; // rbx
  Scaleform::RefCountVImpl *pResource; // rcx
  Scaleform::GFx::Resource *v12; // rcx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rax
  Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeRef v15; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::String::NoCaseKey keya; // [rsp+40h] [rbp+8h] BYREF

  v3 = this->mHash.pTable == 0i64;
  keya.pStr = key;
  if ( v3
    || (v7 = Scaleform::String::BernsteinHashFunctionCIS(
               (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
               *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
               0x1505ui64),
        v8 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontMap::MapEntry,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::FontMap::MapEntry,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
               &this->mHash,
               &keya,
               v7 & this->mHash.pTable->SizeMask),
        v8 < 0)
    || (pTable = this->mHash.pTable) == 0i64
    || v8 > (signed __int64)pTable->SizeMask )
  {
    v13 = (_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v15.pFirst = key;
    v15.pSecond = value;
    v14 = Scaleform::String::BernsteinHashFunctionCIS((char *)v13 + 12, *v13 & 0x7FFFFFFFFFFFFFFFi64, 0x1505ui64);
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
      &this->mHash,
      this,
      &v15,
      v14);
  }
  else
  {
    v10 = &pTable[2].SizeMask + 5 * v8;
    if ( value->HType == RH_Pointer )
    {
      pResource = (Scaleform::RefCountVImpl *)value->pResource;
      if ( pResource )
        Scaleform::Render::RenderBuffer::AddRef(pResource);
    }
    if ( !*(_DWORD *)v10 )
    {
      v12 = (Scaleform::GFx::Resource *)v10[1];
      if ( v12 )
        Scaleform::GFx::Resource::Release(v12);
    }
    *(_DWORD *)v10 = value->HType;
    v10[1] = (unsigned __int64)value->pResource;
  }
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::SetLoadingInitActionFrame(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const Scaleform::GFx::TimelineDef::Frame *frame,
        Scaleform::GFx::LogState *plog)
{
  unsigned __int64 LoadingFrame; // rcx
  Scaleform::Log *pObject; // rax
  unsigned __int64 Size; // rbp
  Scaleform::GFx::TimelineDef::Frame *v9; // rcx

  Scaleform::Lock::DoLock(&this->PlaylistLock);
  LoadingFrame = this->LoadingFrame;
  if ( this->InitActionList.Data.Size > LoadingFrame )
  {
    v9 = &this->InitActionList.Data.Data[LoadingFrame];
    v9->pTagPtrList = frame->pTagPtrList;
    v9->TagCount = frame->TagCount;
    ++this->InitActionsCnt;
  }
  else if ( plog && (plog->pLog.pObject || Scaleform::Log::GetGlobalLog()) )
  {
    pObject = plog->pLog.pObject;
    Size = this->InitActionList.Data.Size;
    if ( !pObject )
      pObject = Scaleform::Log::GetGlobalLog();
    Scaleform::Log::LogError(
      pObject,
      "Invalid SWF file: failed to load init action frame #%d since total frames counter is %d",
      this->LoadingFrame + 1,
      (unsigned int)Size);
  }
  Scaleform::Lock::Unlock(&this->PlaylistLock);
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::SetLoadingPlaylistFrame(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        const Scaleform::GFx::TimelineDef::Frame *frame,
        Scaleform::GFx::LogState *plog)
{
  unsigned __int64 LoadingFrame; // r9
  Scaleform::Log *pObject; // rax
  unsigned __int64 Size; // rbp
  Scaleform::GFx::TimelineDef::Frame *v9; // r9

  Scaleform::Lock::DoLock(&this->PlaylistLock);
  LoadingFrame = this->LoadingFrame;
  if ( this->Playlist.Data.Size > LoadingFrame )
  {
    v9 = &this->Playlist.Data.Data[LoadingFrame];
    v9->pTagPtrList = frame->pTagPtrList;
    v9->TagCount = frame->TagCount;
  }
  else if ( plog && (plog->pLog.pObject || Scaleform::Log::GetGlobalLog()) )
  {
    pObject = plog->pLog.pObject;
    Size = this->Playlist.Data.Size;
    if ( !pObject )
      pObject = Scaleform::Log::GetGlobalLog();
    Scaleform::Log::LogError(
      pObject,
      "Invalid SWF file: failed to load frame #%d since total frames counter is %d",
      this->LoadingFrame + 1,
      (unsigned int)Size);
  }
  Scaleform::Lock::Unlock(&this->PlaylistLock);
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::SetMetadata(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        unsigned __int8 *pdata,
        unsigned int size)
{
  unsigned __int8 *v6; // rax

  v6 = (unsigned __int8 *)this->pHeap->Alloc(this->pHeap, size, 0i64);
  this->pMetadata = v6;
  if ( v6 )
  {
    this->MetadataSize = size;
    memmove(v6, pdata, size);
  }
}

char __fastcall Scaleform::GFx::MovieDataDef::TranslateFrameString(
        const Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *namedFrames,
        const char *label,
        unsigned int *frameNumber,
        bool translateNumbers)
{
  const char *v5; // rbx
  char v7; // r10
  char v8; // r9
  double v9; // xmm0_8
  const Scaleform::String *v11; // rax
  char CaseInsensitive; // al
  void *v13; // rbx
  char v14; // di
  char *tailptr; // [rsp+38h] [rbp+10h] BYREF

  v5 = label;
  if ( !label )
    return 0;
  v7 = *label;
  if ( !*label )
    return 0;
  if ( translateNumbers )
  {
    v8 = 0;
    do
    {
      if ( (unsigned __int8)(v7 - 48) > 9u )
      {
        if ( (((v7 - 43) & 0xFD) != 0 || v8) && v7 != 32 && v7 != 9 )
          goto $translate_frame_label;
      }
      else
      {
        v8 = 1;
      }
      v7 = *++label;
    }
    while ( v7 );
    tailptr = 0i64;
    v9 = Scaleform::SFstrtod(v5, &tailptr);
    if ( tailptr != v5 && !*tailptr )
    {
      *frameNumber = (int)v9 - 1;
      return 1;
    }
    return 0;
  }
$translate_frame_label:
  Scaleform::String::String((Scaleform::String *)&tailptr, v5);
  CaseInsensitive = Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::GetCaseInsensitive(
                      (Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *)namedFrames,
                      v11,
                      frameNumber);
  v13 = (void *)((unsigned __int64)tailptr & 0xFFFFFFFFFFFFFFFCui64);
  v14 = CaseInsensitive;
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)(((unsigned __int64)tailptr & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13);
  return v14;
}

const Scaleform::String *__fastcall Scaleform::GFx::MovieDataDef::TranslateNumberToFrameString(
        const Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *namedFrames,
        unsigned int frameNumber,
        unsigned int *exactFrameNumberForLabel)
{
  unsigned int v4; // er11
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  __m128i v8; // xmm0
  unsigned __int64 SizeMask; // rdx
  unsigned __int64 v10; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v11; // rcx
  const Scaleform::String *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  _QWORD *v17; // rax
  const Scaleform::String *result; // rax
  __m128i v19; // [rsp+0h] [rbp-18h] BYREF

  v4 = 0;
  pTable = namedFrames->mHash.pTable;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v10 = 0i64;
    v11 = pTable + 1;
    do
    {
      if ( v11->EntryCount != -2i64 )
        break;
      ++v10;
      v11 += 2;
    }
    while ( v10 <= SizeMask );
    v19.m128i_i64[0] = (__int64)namedFrames;
    v19.m128i_i64[1] = v10;
    v8 = _mm_load_si128(&v19);
  }
  else
  {
    v8 = 0i64;
  }
  v19 = v8;
  v12 = 0i64;
  v13 = v8.m128i_i64[1];
  while ( v8.m128i_i64[0] )
  {
    v14 = *(_QWORD *)v8.m128i_i64[0];
    if ( !*(_QWORD *)v8.m128i_i64[0] )
      break;
    v15 = *(_QWORD *)(v14 + 8);
    if ( v13 > (__int64)v15 )
      break;
    v16 = *(_DWORD *)(32 * v13 + v14 + 40);
    if ( frameNumber >= v16 && v16 >= v4 )
    {
      v4 = *(_DWORD *)(32 * v13 + v14 + 40);
      v12 = (const Scaleform::String *)(32 * v13 + v14 + 32);
    }
    if ( ++v13 <= v15 )
    {
      v17 = (_QWORD *)(v14 + 32 * v13 + 16);
      do
      {
        if ( *v17 != -2i64 )
          break;
        ++v13;
        v17 += 4;
      }
      while ( v13 <= v15 );
    }
  }
  result = v12;
  if ( exactFrameNumberForLabel )
    *exactFrameNumberForLabel = v4;
  return result;
}

void __fastcall Scaleform::GFx::GFxPlaceObjectUnpacked::Unpack(
        Scaleform::GFx::GFxPlaceObjectUnpacked *this,
        Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *data)
{
  data->Name = 0i64;
  data->pEventHandlers = 0i64;
  data->PlaceType = Place_Add;
  Scaleform::GFx::CharPosInfo::operator=(&data->Pos, &this->Pos);
}

void __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::UpdateBindingFrame(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this,
        unsigned int frame,
        unsigned int bytesLoaded)
{
  this->BytesLoaded = bytesLoaded;
  this->BindingFrame = frame;
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::UpdateLoadState(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        unsigned int loadingFrame,
        Scaleform::GFx::MovieDataDef::MovieLoadState loadState)
{
  Scaleform::GFx::LoadUpdateSync *pObject; // rbx
  Scaleform::WaitCondition *p_WC; // rcx

  pObject = this->pFrameUpdate.pObject;
  if ( pObject )
  {
    Scaleform::Mutex::DoLock(&pObject->mMutex);
    p_WC = &this->pFrameUpdate.pObject->WC;
    this->LoadingFrame = loadingFrame;
    this->LoadState = loadState;
    Scaleform::WaitCondition::NotifyAll(p_WC);
    Scaleform::Mutex::Unlock(&pObject->mMutex);
  }
  else
  {
    this->LoadingFrame = loadingFrame;
    this->LoadState = loadState;
  }
}

void __fastcall Scaleform::GFx::MovieDefImpl::VisitImportedMovies(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::MovieDef::ImportVisitor *visitor)
{
  Scaleform::GFx::ImportData *volatile Value; // rbp
  Scaleform::Lock *p_ImportSourceLock; // rbx
  Scaleform::GFx::MovieDefImpl::BindTaskData *pObject; // rax
  unsigned __int64 ImportIndex; // rcx
  Scaleform::GFx::MovieDef *v8; // r15
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 *p_SourceUrl; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 EntryCount; // rdi
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v14; // rbx
  bool v15; // zf
  unsigned __int64 v16; // rax
  signed __int64 v17; // rax
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rax
  Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeRef v20; // [rsp+20h] [rbp-48h] BYREF
  char v21; // [rsp+70h] [rbp+8h] BYREF
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > pmemAddr; // [rsp+80h] [rbp+18h] BYREF
  Scaleform::String::NoCaseKey key; // [rsp+88h] [rbp+20h] BYREF

  Value = this->pBindData.pObject->pDataDef.pObject->pData.pObject->BindData.pImports.Value;
  if ( Value )
  {
    pmemAddr.pTable = 0i64;
    while ( 1 )
    {
      p_ImportSourceLock = &this->pBindData.pObject->ImportSourceLock;
      Scaleform::Lock::DoLock(p_ImportSourceLock);
      pObject = this->pBindData.pObject;
      ImportIndex = Value->ImportIndex;
      if ( ImportIndex >= pObject->ImportSourceMovies.Data.Size )
        break;
      v8 = pObject->ImportSourceMovies.Data.Data[ImportIndex].pObject;
      Scaleform::Lock::Unlock(p_ImportSourceLock);
      pTable = pmemAddr.pTable;
      p_SourceUrl = (unsigned __int64 *)&Value->SourceUrl;
      if ( !pmemAddr.pTable )
        goto LABEL_14;
      v11 = Scaleform::String::BernsteinHashFunctionCIS(
              (const void *)((*p_SourceUrl & 0xFFFFFFFFFFFFFFFCui64) + 12),
              *(_QWORD *)(*p_SourceUrl & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
              0x1505ui64);
      pTable = pmemAddr.pTable;
      v12 = v11 & pmemAddr.pTable->SizeMask;
      EntryCount = v12;
      v14 = &pmemAddr.pTable[2 * v12 + 1];
      if ( v14->EntryCount == -2i64 || v14->SizeMask != v12 )
        goto LABEL_14;
      while ( 1 )
      {
        if ( v14->SizeMask == v12 )
        {
          v15 = Scaleform::String::CompareNoCase(
                  (const char *)((v14[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  (const char *)((*p_SourceUrl & 0xFFFFFFFFFFFFFFFCui64) + 12)) == 0;
          pTable = pmemAddr.pTable;
          if ( v15 )
            break;
        }
        EntryCount = v14->EntryCount;
        if ( v14->EntryCount == -1i64 )
          goto LABEL_14;
        v14 = &pTable[2 * EntryCount + 1];
      }
      if ( EntryCount < 0 || !pmemAddr.pTable || EntryCount > (signed __int64)pmemAddr.pTable->SizeMask )
      {
LABEL_14:
        if ( v8 )
        {
          visitor->Visit(visitor, this, v8, (const char *)((*p_SourceUrl & 0xFFFFFFFFFFFFFFFCui64) + 12));
          pTable = pmemAddr.pTable;
        }
        v21 = 1;
        key.pStr = &Value->SourceUrl;
        if ( pTable
          && (v16 = Scaleform::String::BernsteinHashFunctionCIS(
                      (const void *)((*p_SourceUrl & 0xFFFFFFFFFFFFFFFCui64) + 12),
                      *(_QWORD *)(*p_SourceUrl & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                      0x1505ui64),
              v17 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String::NoCaseKey>(
                      &pmemAddr,
                      &key,
                      v16 & pmemAddr.pTable->SizeMask),
              v17 >= 0)
          && pmemAddr.pTable
          && v17 <= (signed __int64)pmemAddr.pTable->SizeMask )
        {
          LOBYTE(pmemAddr.pTable[2 * v17 + 2].SizeMask) = v21;
        }
        else
        {
          v18 = (_QWORD *)(*p_SourceUrl & 0xFFFFFFFFFFFFFFFCui64);
          v20.pFirst = &Value->SourceUrl;
          v20.pSecond = (const bool *)&v21;
          v19 = Scaleform::String::BernsteinHashFunctionCIS((char *)v18 + 12, *v18 & 0x7FFFFFFFFFFFFFFFi64, 0x1505ui64);
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
            (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *)&pmemAddr,
            &pmemAddr,
            &v20,
            v19);
        }
      }
      Value = Value->pNext.Value;
      if ( !Value )
        goto LABEL_25;
    }
    Scaleform::Lock::Unlock(p_ImportSourceLock);
LABEL_25:
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *)&pmemAddr);
  }
}

void __fastcall Scaleform::GFx::MovieDefImpl::VisitResources(
        Scaleform::GFx::MovieDefImpl *this,
        Scaleform::GFx::MovieDef::ResourceVisitor *pvisitor,
        unsigned int visitMask)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // er13
  Scaleform::GFx::MovieDef::ResourceVisitor *v5; // r15
  Scaleform::GFx::MovieDefImpl *v6; // rbp
  Scaleform::GFx::MovieDataDef *pObject; // r9
  Scaleform::GFx::MovieDataDef::LoadTaskData *v8; // rcx
  Scaleform::HashUncachedLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp,2> *p_Resources; // r14
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v13; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v14; // rax
  __int64 v15; // rbp
  Scaleform::GFx::Resource *Resource; // rax
  Scaleform::GFx::Resource *v17; // r15
  int v18; // esi
  unsigned int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // rsi
  Scaleform::StringHashLH<Scaleform::GFx::ResourceHandle,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *p_Exports; // r11
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v26; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 *v29; // r10
  unsigned __int64 *v30; // rdx
  Scaleform::GFx::Resource *v31; // r8
  unsigned __int64 v32; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v33; // rcx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v34; // rbx
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *Data; // r14
  unsigned __int64 v36; // rdi
  unsigned __int64 Size; // r8
  Scaleform::GFx::MovieDefImpl::BindTaskData *v38; // rax
  unsigned __int64 v39; // rsi
  Scaleform::RefCountVImpl **v40; // r15
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *v41; // rbp
  Scaleform::GFx::MovieDefImpl *v42; // rcx
  Scaleform::GFx::Resource **i; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v44; // [rsp+30h] [rbp-68h]
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+38h] [rbp-60h] BYREF
  int v49; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0i64;
  v4 = visitMask;
  v5 = pvisitor;
  v6 = this;
  if ( (visitMask & 0x803F) == 0 )
    goto LABEL_54;
  v44 = 0i64;
  pObject = this->pBindData.pObject->pDataDef.pObject;
  v8 = pObject->pData.pObject;
  if ( v8->LoadState < LS_LoadFinished )
  {
    v44 = pObject->pData.pObject;
    Scaleform::Lock::DoLock(&v8->ResourceLock);
  }
  p_Resources = &this->pBindData.pObject->pDataDef.pObject->pData.pObject->Resources;
  pTable = p_Resources->mHash.pTable;
  if ( p_Resources->mHash.pTable )
  {
    SizeMask = pTable->SizeMask;
    v11 = 0i64;
    v13 = pTable + 1;
    do
    {
      if ( v13->EntryCount != -2i64 )
        break;
      ++v11;
      v13 += 2;
    }
    while ( v11 <= SizeMask );
  }
  else
  {
    *(_OWORD *)&pheapAddr.Data = 0i64;
    v11 = 0i64;
    p_Resources = 0i64;
  }
  while ( p_Resources )
  {
    v14 = p_Resources->mHash.pTable;
    if ( !p_Resources->mHash.pTable || (signed __int64)v11 > (signed __int64)v14->SizeMask )
      break;
    v15 = 2 * v11;
    Resource = Scaleform::GFx::ResourceHandle::GetResource(
                 (Scaleform::GFx::ResourceHandle *)&v14[2 * v11 + 2],
                 &this->pBindData.pObject->ResourceBinding);
    v17 = Resource;
    if ( !Resource )
      goto LABEL_44;
    v18 = (unsigned __int8)Resource->GetResourceTypeCode(Resource);
    v19 = v17->GetResourceTypeCode(v17) >> 8;
    switch ( (unsigned __int8)v19 )
    {
      case 1u:
        if ( v18 == 1 )
        {
          v20 = (v4 & 2) == 0;
        }
        else
        {
          if ( v18 != 2 )
            goto LABEL_44;
          v20 = (v4 & 4) == 0;
        }
        break;
      case 2u:
        v20 = (v4 & 1) == 0;
        break;
      case 4u:
        v20 = (v4 & 0x10) == 0;
        break;
      case 0x83u:
        v20 = (v4 & 8) == 0;
        break;
      case 0x84u:
        v20 = (v4 & 0x20) == 0;
        break;
      default:
        goto LABEL_44;
    }
    if ( v20 )
    {
LABEL_44:
      v5 = pvisitor;
      goto LABEL_45;
    }
    v21 = 0i64;
    p_Exports = &this->pBindData.pObject->pDataDef.pObject->pData.pObject->Exports;
    v23 = p_Exports->mHash.pTable;
    if ( p_Exports->mHash.pTable )
    {
      v25 = v23->SizeMask;
      v24 = 0i64;
      v26 = v23 + 1;
      do
      {
        if ( v26->EntryCount != -2i64 )
          break;
        ++v24;
        v26 = (Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *)((char *)v26 + 40);
      }
      while ( v24 <= v25 );
    }
    else
    {
      *(_OWORD *)&pheapAddr.Data = 0i64;
      v24 = 0i64;
      p_Exports = 0i64;
    }
    while ( p_Exports )
    {
      v27 = p_Exports->mHash.pTable;
      if ( !p_Exports->mHash.pTable )
        break;
      v28 = v27->SizeMask;
      if ( (__int64)v24 > (__int64)v28 )
        break;
      v29 = &v27[2].SizeMask + 5 * v24;
      if ( *(_DWORD *)v29 == LODWORD(p_Resources->mHash.pTable[v15 + 2].EntryCount)
        && v29[1] == p_Resources->mHash.pTable[v15 + 2].SizeMask )
      {
        v21 = (*(&v27[2].EntryCount + 5 * v24) & 0xFFFFFFFFFFFFFFFCui64) + 12;
        break;
      }
      if ( ++v24 <= v28 )
      {
        v30 = &v27[1].EntryCount + 5 * v24;
        do
        {
          if ( *v30 != -2i64 )
            break;
          ++v24;
          v30 += 5;
        }
        while ( v24 <= v28 );
      }
    }
    v31 = v17;
    v5 = pvisitor;
    v49 = p_Resources->mHash.pTable[v15 + 1].SizeMask;
    ((void (__fastcall *)(Scaleform::GFx::MovieDef::ResourceVisitor *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::Resource *, int *, unsigned __int64))pvisitor->Visit)(
      pvisitor,
      this,
      v31,
      &v49,
      v21);
LABEL_45:
    v32 = p_Resources->mHash.pTable->SizeMask;
    if ( (__int64)v11 <= (__int64)v32 && ++v11 <= v32 )
    {
      v33 = &p_Resources->mHash.pTable[2 * v11 + 1];
      do
      {
        if ( v33->EntryCount != -2i64 )
          break;
        ++v11;
        v33 += 2;
      }
      while ( v11 <= v32 );
    }
  }
  if ( v44 )
    Scaleform::Lock::Unlock(&v44->ResourceLock);
  v6 = this;
LABEL_54:
  if ( (v4 & 0x8000) != 0 )
  {
    v34 = v6->pBindData.pObject;
    Data = 0i64;
    memset(&pheapAddr, 0, sizeof(pheapAddr));
    v36 = 0i64;
    Scaleform::Lock::DoLock(&v34->ImportSourceLock);
    Size = v6->pBindData.pObject->ImportSourceMovies.Data.Size;
    if ( Size )
    {
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pheapAddr,
        &pheapAddr,
        Size);
      v36 = pheapAddr.Size;
      Data = pheapAddr.Data;
    }
    v38 = v6->pBindData.pObject;
    v39 = 0i64;
    if ( v38->ImportSourceMovies.Data.Size )
    {
      do
      {
        v40 = (Scaleform::RefCountVImpl **)&v38->ImportSourceMovies.Data.Data[v39];
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,264>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
          &pheapAddr,
          &pheapAddr,
          v36 + 1);
        v36 = pheapAddr.Size;
        Data = pheapAddr.Data;
        v41 = &pheapAddr.Data[pheapAddr.Size - 1];
        if ( v41 )
        {
          if ( *v40 )
            Scaleform::Render::RenderBuffer::AddRef(*v40);
          v41->pObject = (Scaleform::GFx::MovieDefImpl *)*v40;
        }
        v38 = this->pBindData.pObject;
        ++v39;
      }
      while ( v39 < v38->ImportSourceMovies.Data.Size );
      v4 = visitMask;
      v5 = pvisitor;
    }
    Scaleform::Lock::Unlock(&v34->ImportSourceLock);
    if ( v36 )
    {
      do
      {
        v42 = Data[v3].pObject;
        if ( v42 )
          v42->VisitResources(v42, v5, v4);
        ++v3;
      }
      while ( v3 < v36 );
    }
    for ( i = &Data[v36 - 1].pObject; v36; --v36 )
    {
      if ( *i )
        Scaleform::GFx::Resource::Release(*i);
      --i;
    }
    if ( Data )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
  }
}

bool __fastcall Scaleform::GFx::MovieDefImpl::BindTaskData::WaitForBindStateFlags(
        Scaleform::GFx::MovieDefImpl::BindTaskData *this,
        unsigned int flags)
{
  Scaleform::GFx::LoadUpdateSync *pObject; // rbx

  pObject = this->pBindUpdate.pObject;
  if ( pObject )
  {
    Scaleform::Mutex::DoLock(&pObject->mMutex);
    while ( (this->BindState & 0xF) < 3 )
    {
      if ( (this->BindState & flags) != 0 )
        break;
      Scaleform::WaitCondition::Wait(&this->pBindUpdate.pObject->WC, &this->pBindUpdate.pObject->mMutex, 0xFFFFFFFF);
    }
    Scaleform::Mutex::Unlock(&pObject->mMutex);
  }
  return (this->BindState & flags) != 0;
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForFrame(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this,
        unsigned int frame)
{
  Scaleform::GFx::LoadUpdateSync *pObject; // rbx

  if ( this->LoadState <= LS_LoadingFrames && this->LoadingFrame <= frame )
  {
    pObject = this->pFrameUpdate.pObject;
    Scaleform::Mutex::DoLock(&pObject->mMutex);
    while ( this->LoadState <= LS_LoadingFrames )
    {
      if ( this->LoadingFrame > frame )
        break;
      Scaleform::WaitCondition::Wait(&this->pFrameUpdate.pObject->WC, &this->pFrameUpdate.pObject->mMutex, 0xFFFFFFFF);
    }
    Scaleform::Mutex::Unlock(&pObject->mMutex);
  }
}

void __fastcall Scaleform::GFx::MovieDefImpl::WaitForFrame(Scaleform::GFx::MovieDefImpl *this, unsigned int frame)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForFrame(
    this->pBindData.pObject->pDataDef.pObject->pData.pObject,
    frame);
}

void __fastcall Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForLoadFinish(
        Scaleform::GFx::MovieDataDef::LoadTaskData *this)
{
  Scaleform::GFx::LoadUpdateSync *pObject; // rdi

  if ( this->LoadState <= LS_LoadingFrames )
  {
    pObject = this->pFrameUpdate.pObject;
    Scaleform::Mutex::DoLock(&pObject->mMutex);
    while ( !pObject->LoadFinished )
      Scaleform::WaitCondition::Wait(&pObject->WC, &pObject->mMutex, 0xFFFFFFFF);
    Scaleform::Mutex::Unlock(&pObject->mMutex);
  }
}

void __fastcall Scaleform::GFx::MovieDefImpl::WaitForLoadFinish(Scaleform::GFx::MovieDefImpl *this, bool cancel)
{
  Scaleform::GFx::MovieDataDef *pObject; // rcx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v4; // rax
  Scaleform::GFx::LoadUpdateSync *v5; // rdi

  pObject = this->pBindData.pObject->pDataDef.pObject;
  if ( cancel )
  {
    v4 = pObject->pData.pObject;
    if ( v4->LoadState <= LS_LoadingFrames )
      v4->LoadingCanceled = 1;
  }
  Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForLoadFinish(pObject->pData.pObject);
  v5 = this->pBindData.pObject->pBindUpdate.pObject;
  Scaleform::Mutex::DoLock(&v5->mMutex);
  while ( !v5->LoadFinished )
    Scaleform::WaitCondition::Wait(&v5->WC, &v5->mMutex, 0xFFFFFFFF);
  Scaleform::Mutex::Unlock(&v5->mMutex);
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *pTable; // rbx
  __int64 v10; // rax
  Scaleform::GFx::MovieDefImpl::ReleaseNotifier *const *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > > v15; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *> > >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v14);
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
          v10 = 8i64;
          v11 = (Scaleform::GFx::MovieDefImpl::ReleaseNotifier *const *)((char *)&pTable[2] + v6);
          v12 = 5381i64;
          do
          {
            v13 = *((unsigned __int8 *)v11 + --v10);
            v12 = v13 + 65599 * v12;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>,Scaleform::AllocatorLH<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *,Scaleform::FixedSizeHash<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>>>::add<Scaleform::GFx::MovieDefImpl::ReleaseNotifier *>(
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

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> > *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  Scaleform::Render::ShapeMeshProvider *pObject; // rcx
  int v14; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> > v15; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v15.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *> > *)&this->pTable[v6];
        if ( v9[1].First != (Scaleform::Render::ShapeMeshProvider *)-2i64 )
        {
          v10 = 8i64;
          v11 = 5381i64;
          do
          {
            v12 = *((unsigned __int8 *)&v9[1].Second.pObject + v10 + 7);
            --v10;
            v11 = v12 + 65599 * v11;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>>(
            &v15,
            pheapAddr,
            v9 + 2,
            v11);
          pObject = v9[2].Second.pObject;
          if ( pObject )
            pObject->Release(&pObject->Scaleform::Render::MeshProvider);
          v9[1].First = (Scaleform::Render::ShapeMeshProvider *)-2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ShapeMeshProvider *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>,Scaleform::HashNode<Scaleform::Render::ShapeMeshProvider *,Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider>,Scaleform::FixedSizeHash<Scaleform::Render::ShapeMeshProvider *>>::NodeHashF>>::Clear(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *v9; // rdi
  Scaleform::GFx::Resource *SizeMask; // rcx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> > v12; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 2;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v12.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = &this->pTable[v6];
        if ( v9[1].EntryCount != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>>(
            &v12,
            pheapAddr,
            (const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp> *)&v9[1].SizeMask,
            LODWORD(v9[1].SizeMask) ^ ((unsigned __int64)LODWORD(v9[1].SizeMask) >> 8));
          if ( !LODWORD(v9[2].EntryCount) )
          {
            SizeMask = (Scaleform::GFx::Resource *)v9[2].SizeMask;
            if ( SizeMask )
              Scaleform::GFx::Resource::Release(SizeMask);
          }
          v9[1].EntryCount = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourceHandle,Scaleform::GFx::ResourceId::HashOp>::NodeHashF>>::Clear(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  volatile int *v13; // rbx
  int v14; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > v15; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v15.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = &this->pTable[v6];
        if ( v9[1].EntryCount != -2i64 )
        {
          v10 = 4i64;
          v11 = 5381i64;
          do
          {
            v12 = *((unsigned __int8 *)&v9[1].SizeMask + v10 + 7);
            --v10;
            v11 = v12 + 65599 * v11;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>>(
            &v15,
            pheapAddr,
            (const Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> > *)&v9[2],
            v11);
          v13 = (volatile int *)(v9[2].SizeMask & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v13 + 2, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v13);
          v9[1].EntryCount = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::StringLH,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>>::NodeHashF>>::Clear(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor> *v9; // rsi
  unsigned __int64 v10; // rax
  volatile int *v11; // rbx
  int v12; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > v13; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v12 = 2;
    v6 = 0i64;
    v13.pTable = 0i64;
    v13.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 32 * v5 + 16, &v12);
    v13.pTable->EntryCount = 0i64;
    v13.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v13.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor> *)&this->pTable[v6];
        if ( v9[1].First.HeapTypeBits != -2i64 )
        {
          v10 = Scaleform::String::BernsteinHashFunctionCIS(
                  (const void *)((v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  *(_QWORD *)(v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                  0x1505ui64);
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>>(
            &v13,
            pheapAddr,
            v9 + 2,
            v10);
          v11 = (volatile int *)(v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v11 + 2, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v11);
          v9[1].First.HeapTypeBits = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v13.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<bool,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,bool,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor> *v9; // rsi
  unsigned __int64 v10; // rax
  volatile int *v11; // rbx
  int v12; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > v13; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v12 = 2;
    v6 = 0i64;
    v13.pTable = 0i64;
    v13.pTable = (Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v12);
    v13.pTable->EntryCount = 0i64;
    v13.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v13.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor> *)&this->pTable[v6];
        if ( v9[1].First.HeapTypeBits != -2i64 )
        {
          v10 = Scaleform::String::BernsteinHashFunctionCIS(
                  (const void *)((v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  *(_QWORD *)(v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                  0x1505ui64);
          Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>>(
            &v13,
            pheapAddr,
            v9 + 2,
            v10);
          v11 = (volatile int *)(v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v11 + 2, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v11);
          v9[1].First.HeapTypeBits = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v13.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  char *v9; // rsi
  unsigned __int64 v10; // rax
  Scaleform::GFx::Resource *v11; // rcx
  volatile int *v12; // rbx
  int v13; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > v14; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v13 = 2;
    v6 = 0i64;
    v14.pTable = 0i64;
    v14.pTable = (Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 40 * v5 + 16, &v13);
    v14.pTable->EntryCount = 0i64;
    v14.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 40i64;
        *(_QWORD *)((char *)&v14.pTable[-1] + v7 - 8) = -2i64;
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
          v10 = Scaleform::String::BernsteinHashFunctionCIS(
                  (const void *)((*((_QWORD *)v9 + 4) & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  *(_QWORD *)(*((_QWORD *)v9 + 4) & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                  0x1505ui64);
          Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>>(
            &v14,
            pheapAddr,
            (const Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor> *)(v9 + 32),
            v10);
          if ( !*((_DWORD *)v9 + 10) )
          {
            v11 = (Scaleform::GFx::Resource *)*((_QWORD *)v9 + 6);
            if ( v11 )
              Scaleform::GFx::Resource::Release(v11);
          }
          v12 = (volatile int *)(*((_QWORD *)v9 + 4) & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v12 + 2, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v12);
          *((_QWORD *)v9 + 2) = -2i64;
        }
        v6 += 40i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v14.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceHandle,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::GFx::ResourceHandle,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Clear(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::String *v9; // rsi
  unsigned __int64 v10; // rax
  volatile int *v11; // rbx
  int v12; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> > v13; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v12 = 2;
    v6 = 0i64;
    v13.pTable = 0i64;
    v13.pTable = (Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 24 * v5 + 16, &v12);
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
        v9 = (const Scaleform::String *)((char *)this->pTable + v6);
        if ( v9[2].HeapTypeBits != -2i64 )
        {
          v10 = Scaleform::String::BernsteinHashFunctionCIS(
                  (const void *)((v9[4].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  *(_QWORD *)(v9[4].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                  0x1505ui64);
          Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::add<Scaleform::String>(
            &v13,
            pheapAddr,
            v9 + 4,
            v10);
          v11 = (volatile int *)(v9[4].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v11 + 2, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v11);
          v9[2].HeapTypeBits = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v13.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>::~HashSetBase<Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedEntry<Scaleform::String,Scaleform::String::NoCaseHashFunctor>>(this);
  }
}

