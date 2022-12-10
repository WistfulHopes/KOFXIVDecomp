#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stringhash.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"

Scaleform::GFx::SpriteDef::SpriteDef(Scaleform::GFx::MovieDataDef * pmd); // 0x1403DB5B0
Scaleform::GFx::SpriteDef::~SpriteDef(); // 0x1403DB610
void Scaleform::GFx::SpriteDef::AddFrameName(const Scaleform::String & name, Scaleform::GFx::LogState * plog); // 0x1403DB840
void Scaleform::GFx::SpriteDef::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::ResourceId charId); // 0x1403DD430
void Scaleform::GFx::SpriteDef::InitEmptyClipDef(); // 0x1403DD1D0
Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * Scaleform::GFx::SpriteDef::GetFrameLabels(unsigned long frameNumber, Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * destArr); // 0x1403DCF80
Scaleform::GFx::TimelineSnapshot::SnapshotElement * Scaleform::GFx::TimelineSnapshot::Add(long depth); // 0x1403DB700
void Scaleform::GFx::TimelineSnapshot::MakeSnapshot(Scaleform::GFx::TimelineDef * pdef, unsigned long startFrame, unsigned long endFrame); // 0x1403DD1F0
void Scaleform::GFx::TimelineSnapshot::ExecuteSnapshot(Scaleform::GFx::DisplayObjContainer * pdispObj); // 0x1403DCB50
void Scaleform::GFx::TimelineSnapshot::SourceTags::Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & data); // 0x1403DDEE0
void Scaleform::GFx::GFxPlaceObjectUnpacked::AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot * psnapshot, unsigned long frame); // 0x1403DB9D0
void Scaleform::GFx::PlaceObjectTag::AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot * psnapshot, unsigned long frame); // 0x1403DC0A0
void Scaleform::GFx::GFxPlaceObjectUnpacked::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x1403DC430
Scaleform::GFx::PlaceObjectTag::PlaceObjectTag(); // 0x1403DB590
Scaleform::GFx::CharPosInfoFlags Scaleform::GFx::PlaceObjectTag::GetFlags(); // 0x1403DCF50
void Scaleform::GFx::PlaceObjectTag::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x1403DC700
void Scaleform::GFx::PlaceObjectTag::Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & data); // 0x1403DDE20
void Scaleform::GFx::PlaceObjectTag::CheckForCxForm(unsigned long long dataSz); // 0x1403DC370
Scaleform::GFx::PlaceObject2Tag::~PlaceObject2Tag(); // 0x1403DB600
unsigned long long Scaleform::GFx::PlaceObject2Tag::ComputeDataSize(Scaleform::GFx::Stream * pin, unsigned long movieVersion); // 0x1403DC410
Scaleform::GFx::CharPosInfoFlags Scaleform::GFx::PlaceObject2Tag::GetFlags(); // 0x1403DCED0
void Scaleform::GFx::PlaceObject2Tag::ExecuteBase(Scaleform::GFx::DisplayObjContainer * m, unsigned char version); // 0x1403DC930
bool Scaleform::GFx::PlaceObject2Tag::HasEventHandlers(Scaleform::GFx::Stream * pin); // 0x1403DD170
void Scaleform::GFx::PlaceObject2Tag::RestructureForEventHandlers(unsigned char * pdata); // 0x1403DD950
void Scaleform::GFx::PlaceObject2Tag::UnpackBase(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & data, unsigned char version); // 0x1403DE460
Scaleform::GFx::CharPosInfoFlags Scaleform::GFx::PlaceObject3Tag::GetFlags(); // 0x1403DCEE0
void Scaleform::GFx::PlaceObject3Tag::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x1403DC4B0
Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * Scaleform::GFx::PlaceObject2Tag::UnpackEventHandlers(); // 0x1403DE690
void Scaleform::GFx::PlaceObject3Tag::Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData & data); // 0x1403DDA00
void Scaleform::GFx::PlaceObject2Tag::AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot * psnapshot, unsigned long frame); // 0x1403DBAE0
void Scaleform::GFx::GFxPlaceObjectUnpacked::Trace(const char * str); // 0x14002E7C0
void Scaleform::GFx::PlaceObject3Tag::AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot * psnapshot, unsigned long frame); // 0x1403DBDC0
void Scaleform::GFx::RemoveObjectTag::Read(Scaleform::GFx::LoadProcess * p); // 0x1403DD2F0
void Scaleform::GFx::RemoveObjectTag::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x1403DC870
void Scaleform::GFx::RemoveObject2Tag::Read(Scaleform::GFx::LoadProcess * p); // 0x1403DD280
void Scaleform::GFx::RemoveObject2Tag::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x1403DC840
void Scaleform::GFx::RemoveObject2Tag::AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot * psnapshot, unsigned long __formal); // 0x1403DC1D0
void Scaleform::GFx::SetBackgroundColorTag::Execute(Scaleform::GFx::DisplayObjContainer * m); // 0x1403DC8A0
void Scaleform::GFx::SetBackgroundColorTag::Read(Scaleform::GFx::LoadProcess * p); // 0x1403DD3D0Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *__fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::GetAlt<Scaleform::String>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key)
{
  unsigned __int64 v4; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rsi
  __int64 v6; // rax

  if ( this->pTable
    && (v4 = Scaleform::String::BernsteinHashFunctionCIS(
               (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
               *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
               0x1505ui64),
        pTable = this->pTable,
        v6 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String>(
               this,
               key,
               v4 & this->pTable->SizeMask),
        v6 >= 0) )
  {
    return &pTable[2 * v6 + 2];
  }
  else
  {
    return 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Set<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef *key)
{
  unsigned __int64 v6; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rsi
  unsigned __int64 v8; // rbp
  signed __int64 v9; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v10; // rbx

  v6 = Scaleform::String::BernsteinHashFunctionCIS(
         (const void *)(((unsigned __int64)key->pFirst->pData & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)((unsigned __int64)key->pFirst->pData & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
         0x1505ui64);
  pTable = this->pTable;
  v8 = v6;
  if ( this->pTable
    && (v9 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
               (Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *)this,
               (const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef *)key,
               v6 & pTable->SizeMask),
        v9 >= 0) )
  {
    v10 = &pTable[2 * v9 + 2];
    Scaleform::String::operator=((Scaleform::String *)v10, key->pFirst);
    LODWORD(v10->SizeMask) = *key->pSecond;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rbx
  unsigned __int64 EntryCount; // r10
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v6; // r9
  unsigned __int8 *v7; // rax
  int v8; // ecx
  int v9; // edx

  pTable = this->pTable;
  EntryCount = hashValue;
  v6 = &this->pTable[2 * hashValue + 1];
  if ( v6->EntryCount == -2i64 || v6->SizeMask != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v6->SizeMask == hashValue )
    {
      v7 = (unsigned __int8 *)((v6[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v8 = v7[((unsigned __int64)key->pFirst->pData & 0xFFFFFFFFFFFFFFFCui64)
              - (v6[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64)];
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
        break;
    }
    EntryCount = v6->EntryCount;
    if ( v6->EntryCount == -1i64 )
      return -1i64;
    v6 = &pTable[2 * EntryCount + 1];
  }
  return EntryCount;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rbx
  unsigned __int64 EntryCount; // r10
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v6; // r9
  unsigned __int8 *v7; // rax
  int v8; // ecx
  int v9; // edx

  pTable = this->pTable;
  EntryCount = hashValue;
  v6 = &this->pTable[2 * hashValue + 1];
  if ( v6->EntryCount == -2i64 || v6->SizeMask != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v6->SizeMask == hashValue )
    {
      v7 = (unsigned __int8 *)((v6[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v8 = v7[(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (v6[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64)];
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
        break;
    }
    EntryCount = v6->EntryCount;
    if ( v6->EntryCount == -1i64 )
      return -1i64;
    v6 = &pTable[2 * EntryCount + 1];
  }
  return EntryCount;
}

void __fastcall Scaleform::GFx::PlaceObjectTag::PlaceObjectTag(Scaleform::GFx::PlaceObjectTag *this)
{
  this->HasCxForm = 0;
  this->__vftable = (Scaleform::GFx::PlaceObjectTag_vtbl *)&Scaleform::GFx::PlaceObjectTag::`vftable';
}

void __fastcall Scaleform::GFx::SpriteDef::SpriteDef(
        Scaleform::GFx::SpriteDef *this,
        Scaleform::GFx::MovieDataDef *pmd)
{
  this->__vftable = (Scaleform::GFx::SpriteDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->pLib = 0i64;
  this->Id.Id = 0x40000;
  this->__vftable = (Scaleform::GFx::SpriteDef_vtbl *)&Scaleform::GFx::SpriteDef::`vftable';
  this->pMovieDef = pmd;
  this->NamedFrames.mHash.pTable = 0i64;
  *(_QWORD *)&this->FrameCount = 0i64;
  this->Playlist.Data.Data = 0i64;
  this->Playlist.Data.Size = 0i64;
  this->Playlist.Data.Policy.Capacity = 0i64;
  this->pScale9Grid = 0i64;
  this->Flags = 0;
}

void __fastcall Scaleform::GFx::PlaceObject2Tag::~PlaceObject2Tag(Scaleform::GFx::PlaceObject3Tag *this)
{
  this->__vftable = (Scaleform::GFx::PlaceObject3Tag_vtbl *)&Scaleform::GFx::ExecuteTag::`vftable';
}

void __fastcall Scaleform::GFx::SpriteDef::~SpriteDef(Scaleform::GFx::SpriteDef *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  this->__vftable = (Scaleform::GFx::SpriteDef_vtbl *)&Scaleform::GFx::SpriteDef::`vftable';
  if ( this->Playlist.Data.Size )
  {
    v3 = 0i64;
    do
    {
      Scaleform::GFx::TimelineDef::Frame::DestroyTags(&this->Playlist.Data.Data[v3]);
      v3 = ++v1;
    }
    while ( v1 < this->Playlist.Data.Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pScale9Grid);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Playlist.Data.Data);
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(&this->NamedFrames.mHash);
  this->__vftable = (Scaleform::GFx::SpriteDef_vtbl *)&Scaleform::GFx::Resource::`vftable';
}

Scaleform::GFx::TimelineSnapshot::SnapshotElement *__fastcall Scaleform::GFx::TimelineSnapshot::Add(
        Scaleform::GFx::TimelineSnapshot *this,
        int depth)
{
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *result; // rax
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 Size; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8

  result = Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2>>::allocate(&this->SnapshotHeap);
  v5 = result;
  if ( result )
  {
    result->pPrev = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)-1i64;
    result->pNext = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)-1i64;
    result->CreateFrame = -1;
    v6 = 0i64;
    result->Tags.pMainTag = 0i64;
    result->Tags.pMatrixTag = 0i64;
    result->Tags.pCxFormTag = 0i64;
    result->Tags.pFiltersTag = 0i64;
    result->Tags.pBlendModeTag = 0i64;
    result->Tags.pDepthTag = 0i64;
    result->Tags.pClipDepthTag = 0i64;
    result->Tags.pRatioTag = 0i64;
    result->Tags.pCharIdTag = 0i64;
    result->Tags.pClassNameTag = 0i64;
    result->Tags.pVisibilityTag = 0i64;
    *(_WORD *)&result->PlaceType = 255;
    result->pPrev = this->SnapshotList.Root.pPrev;
    result->pNext = (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)&this->SnapshotList;
    this->SnapshotList.Root.pPrev->pNext = result;
    this->SnapshotList.Root.pPrev = result;
    result->Depth = depth;
    Size = this->SnapshotSortedArray.Data.Size;
    while ( Size > 0 )
    {
      v8 = (Size >> 1) + v6;
      if ( depth >= this->SnapshotSortedArray.Data.Data[v8]->Depth )
      {
        v6 = v8 + 1;
        Size += -1 - (Size >> 1);
      }
      else
      {
        Size >>= 1;
      }
    }
    Scaleform::ArrayDataDH<double,Scaleform::AllocatorDH<double,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      (Scaleform::ArrayDataDH<Scaleform::GFx::AS3::TR::Def *,Scaleform::AllocatorDH_POD<Scaleform::GFx::AS3::TR::Def *,2>,Scaleform::ArrayDefaultPolicy> *)&this->SnapshotSortedArray,
      this->SnapshotSortedArray.Data.Size + 1);
    v9 = this->SnapshotSortedArray.Data.Size;
    if ( v6 < v9 - 1 )
      memmove(&this->SnapshotSortedArray.Data.Data[v6 + 1], &this->SnapshotSortedArray.Data.Data[v6], 8 * (v9 - v6) - 8);
    this->SnapshotSortedArray.Data.Data[v6] = v5;
    return v5;
  }
  return result;
}

void __fastcall Scaleform::GFx::SpriteDef::AddFrameName(
        Scaleform::GFx::SpriteDef *this,
        const Scaleform::String *name,
        Scaleform::GFx::LogState *plog)
{
  __int64 LoadingFrame; // r8
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rdx
  char v13; // al
  char v14; // al
  Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef key; // [rsp+30h] [rbp-18h] BYREF
  int v16; // [rsp+50h] [rbp+8h] BYREF

  LoadingFrame = (unsigned int)this->LoadingFrame;
  if ( (int)LoadingFrame < 0 || (int)LoadingFrame >= this->FrameCount )
  {
    if ( plog )
      Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
        &plog->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
        "AddFrameName(%d, '%s') -- frame is out of range (frameCount = %d; skipping",
        LoadingFrame,
        (const char *)((name->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        this->FrameCount);
  }
  else
  {
    v7 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::GetAlt<Scaleform::String>(
           &this->NamedFrames.mHash,
           name);
    if ( v7 && plog )
      Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
        &plog->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
        "AddFrameName(%d, '%s') -- frame name already assigned to frame %d; overriding",
        (unsigned int)this->LoadingFrame,
        (const char *)((name->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        LODWORD(v7->SizeMask));
    if ( Scaleform::String::GetLength((Scaleform::String *)name) )
    {
      v8 = name->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
      if ( *(_BYTE *)(v8 + 12) == 95 )
      {
        v9 = 0i64;
        v10 = 0i64;
        while ( 1 )
        {
          v11 = *(_BYTE *)(v8 + v10++ + 12);
          if ( v11 != label[v10 - 1] )
            break;
          if ( v10 == 4 )
          {
            this->Flags |= 1u;
            goto LABEL_19;
          }
        }
        v12 = 0i64;
        while ( 1 )
        {
          v13 = *(_BYTE *)(v8 + v12++ + 12);
          if ( v13 != aDown_3[v12 - 1] )
            break;
          if ( v12 == 6 )
          {
            this->Flags |= 2u;
            goto LABEL_19;
          }
        }
        while ( 1 )
        {
          v14 = *(_BYTE *)(v8 + v9++ + 12);
          if ( v14 != aOver[v9 - 1] )
            break;
          if ( v9 == 6 )
          {
            this->Flags |= 4u;
            break;
          }
        }
      }
    }
LABEL_19:
    v16 = this->LoadingFrame;
    key.pFirst = name;
    key.pSecond = (const unsigned int *)&v16;
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Set<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
      &this->NamedFrames.mHash,
      &this->NamedFrames,
      &key);
  }
}

void __fastcall Scaleform::GFx::GFxPlaceObjectUnpacked::AddToTimelineSnapshot(
        Scaleform::GFx::GFxPlaceObjectUnpacked *this,
        Scaleform::GFx::TimelineSnapshot *psnapshot,
        unsigned int frame)
{
  __int64 Size; // rcx
  __int64 v7; // r9
  int Depth; // er10
  Scaleform::GFx::TimelineSnapshot::SnapshotElement **Data; // r11
  __int64 v10; // r8
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v11; // rax

  this->Trace(this, "\n");
  Size = psnapshot->SnapshotSortedArray.Data.Size;
  v7 = 0i64;
  Depth = this->Pos.Depth;
  if ( Size <= 0 )
    goto LABEL_12;
  Data = psnapshot->SnapshotSortedArray.Data.Data;
  do
  {
    v10 = (Size >> 1) + v7;
    if ( Depth >= Data[v10]->Depth )
    {
      v7 = v10 + 1;
      Size += -1 - (Size >> 1);
    }
    else
    {
      Size >>= 1;
    }
  }
  while ( Size > 0 );
  if ( v7 && (v11 = Data[v7 - 1], v11->Depth == Depth) && v11 && (v11->Flags & 2) == 0 )
  {
    v11->Tags.pVisibilityTag = this;
    v11->Tags.pClassNameTag = this;
    v11->Tags.pCharIdTag = this;
    v11->Tags.pRatioTag = this;
    v11->Tags.pClipDepthTag = this;
    v11->Tags.pDepthTag = this;
    v11->Tags.pBlendModeTag = this;
    v11->Tags.pFiltersTag = this;
    v11->Tags.pCxFormTag = this;
    v11->Tags.pMatrixTag = this;
    v11->Tags.pMainTag = this;
  }
  else
  {
LABEL_12:
    v11 = Scaleform::GFx::TimelineSnapshot::Add(psnapshot, Depth);
    v11->Tags.pVisibilityTag = this;
    v11->Tags.pClassNameTag = this;
    v11->Tags.pCharIdTag = this;
    v11->Tags.pRatioTag = this;
    v11->Tags.pClipDepthTag = this;
    v11->Tags.pDepthTag = this;
    v11->Tags.pBlendModeTag = this;
    v11->Tags.pFiltersTag = this;
    v11->Tags.pCxFormTag = this;
    v11->Tags.pMatrixTag = this;
    v11->Tags.pMainTag = this;
    v11->PlaceType = 0;
  }
  v11->CreateFrame = frame;
  v11->Flags |= 1u;
}

void __fastcall Scaleform::GFx::PlaceObject2Tag::AddToTimelineSnapshot(
        Scaleform::GFx::PlaceObject2Tag *this,
        Scaleform::GFx::TimelineSnapshot *psnapshot,
        unsigned int frame)
{
  char v6; // si
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  char v11; // al
  char v12; // cl
  int v13; // er9
  __int64 Size; // rdx
  Scaleform::GFx::TimelineSnapshot::SnapshotElement **Data; // r10
  __int64 v16; // r8
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v17; // rdi
  __int16 v18; // ax
  __int16 v19; // ax
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v20; // rax
  __int16 v21; // [rsp+40h] [rbp+8h] BYREF

  this->Trace(this, "\n");
  v6 = 1;
  v7 = 1i64;
  if ( (this->pData[0] & 0x80u) != 0 )
    v7 = 9i64;
  v8 = this->pData[0];
  v9 = 0i64;
  v10 = *(_WORD *)&this->pData[v7];
  v11 = v8 >> 1;
  v12 = v8 & 1;
  if ( (v11 & 1) == 0 )
  {
    if ( v12 )
      goto LABEL_8;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if ( !v12 )
    goto LABEL_7;
  v6 = 2;
LABEL_8:
  v13 = v10;
  Size = psnapshot->SnapshotSortedArray.Data.Size;
  if ( Size <= 0 )
    goto LABEL_64;
  Data = psnapshot->SnapshotSortedArray.Data.Data;
  do
  {
    v16 = (Size >> 1) + v9;
    if ( v13 >= Data[v16]->Depth )
    {
      v9 = v16 + 1;
      Size += -1 - (Size >> 1);
    }
    else
    {
      Size >>= 1;
    }
  }
  while ( Size > 0 );
  if ( v9 && (v17 = Data[v9 - 1], v17->Depth == v13) && v17 && (v17->Flags & 2) == 0 )
  {
    if ( v6 == 1 )
    {
      this->GetFlags(this, (Scaleform::GFx::CharPosInfoFlags *)&v21);
      v19 = v21;
      if ( (v21 & 4) != 0 )
        v17->Tags.pMatrixTag = this;
      if ( (v19 & 8) != 0 )
        v17->Tags.pCxFormTag = this;
      if ( (v19 & 0x20) != 0 )
        v17->Tags.pFiltersTag = this;
      if ( (v19 & 0x80u) != 0 )
        v17->Tags.pBlendModeTag = this;
      if ( (v19 & 1) != 0 )
        v17->Tags.pDepthTag = this;
      if ( (v19 & 0x40) != 0 )
        v17->Tags.pClipDepthTag = this;
      if ( (v19 & 0x10) != 0 )
        v17->Tags.pRatioTag = this;
      if ( (v19 & 2) != 0 )
        v17->Tags.pCharIdTag = this;
      if ( (v19 & 0x100) != 0 )
        v17->Tags.pClassNameTag = this;
      if ( (v19 & 0x200) != 0 )
        v17->Tags.pVisibilityTag = this;
    }
    else if ( v6 == 2 )
    {
      if ( v17->PlaceType )
        v17->PlaceType = 2;
      this->GetFlags(this, (Scaleform::GFx::CharPosInfoFlags *)&v21);
      v18 = v21;
      if ( (v21 & 4) != 0 )
        v17->Tags.pMatrixTag = this;
      if ( (v18 & 8) != 0 )
        v17->Tags.pCxFormTag = this;
      if ( (v18 & 0x20) != 0 )
        v17->Tags.pFiltersTag = this;
      if ( (v18 & 0x80u) != 0 )
        v17->Tags.pBlendModeTag = this;
      if ( (v18 & 1) != 0 )
        v17->Tags.pDepthTag = this;
      if ( (v18 & 0x40) != 0 )
        v17->Tags.pClipDepthTag = this;
      if ( (v18 & 0x10) != 0 )
        v17->Tags.pRatioTag = this;
      if ( (v18 & 2) != 0 )
        v17->Tags.pCharIdTag = this;
      if ( (v18 & 0x100) != 0 )
        v17->Tags.pClassNameTag = this;
      if ( (v18 & 0x200) != 0 )
        v17->Tags.pVisibilityTag = this;
      v17->CreateFrame = frame;
    }
    else
    {
      v17->Tags.pVisibilityTag = this;
      v17->Tags.pClassNameTag = this;
      v17->Tags.pCharIdTag = this;
      v17->Tags.pRatioTag = this;
      v17->Tags.pClipDepthTag = this;
      v17->Tags.pDepthTag = this;
      v17->Tags.pBlendModeTag = this;
      v17->Tags.pFiltersTag = this;
      v17->Tags.pCxFormTag = this;
      v17->Tags.pMatrixTag = this;
      v17->Tags.pMainTag = this;
      v17->CreateFrame = frame;
    }
  }
  else
  {
LABEL_64:
    v20 = Scaleform::GFx::TimelineSnapshot::Add(psnapshot, v13);
    v20->PlaceType = v6;
    v20->Tags.pVisibilityTag = this;
    v20->Tags.pClassNameTag = this;
    v20->Tags.pCharIdTag = this;
    v20->Tags.pRatioTag = this;
    v20->Tags.pClipDepthTag = this;
    v20->Tags.pDepthTag = this;
    v20->Tags.pBlendModeTag = this;
    v20->Tags.pFiltersTag = this;
    v20->Tags.pCxFormTag = this;
    v20->Tags.pMatrixTag = this;
    v20->Tags.pMainTag = this;
    v20->CreateFrame = frame;
  }
}

void __fastcall Scaleform::GFx::PlaceObject3Tag::AddToTimelineSnapshot(
        Scaleform::GFx::PlaceObject3Tag *this,
        Scaleform::GFx::TimelineSnapshot *psnapshot,
        unsigned int frame)
{
  char v6; // si
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  char v11; // al
  char v12; // cl
  int v13; // er9
  __int64 Size; // rdx
  Scaleform::GFx::TimelineSnapshot::SnapshotElement **Data; // r10
  __int64 v16; // r8
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v17; // rdi
  __int16 v18; // ax
  __int16 v19; // ax
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v20; // rax
  __int16 v21; // [rsp+40h] [rbp+8h] BYREF

  this->Trace(this, "\n");
  v6 = 1;
  v7 = 1i64;
  if ( (this->pData[0] & 0x80u) != 0 )
    v7 = 9i64;
  v8 = this->pData[0];
  v9 = 0i64;
  v10 = *(_WORD *)&this->pData[v7 + 1];
  v11 = v8 >> 1;
  v12 = v8 & 1;
  if ( (v11 & 1) == 0 )
  {
    if ( v12 )
      goto LABEL_8;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if ( !v12 )
    goto LABEL_7;
  v6 = 2;
LABEL_8:
  v13 = v10;
  Size = psnapshot->SnapshotSortedArray.Data.Size;
  if ( Size <= 0 )
    goto LABEL_64;
  Data = psnapshot->SnapshotSortedArray.Data.Data;
  do
  {
    v16 = (Size >> 1) + v9;
    if ( v13 >= Data[v16]->Depth )
    {
      v9 = v16 + 1;
      Size += -1 - (Size >> 1);
    }
    else
    {
      Size >>= 1;
    }
  }
  while ( Size > 0 );
  if ( v9 && (v17 = Data[v9 - 1], v17->Depth == v13) && v17 && (v17->Flags & 2) == 0 )
  {
    if ( v6 == 1 )
    {
      this->GetFlags(this, (Scaleform::GFx::CharPosInfoFlags *)&v21);
      v19 = v21;
      if ( (v21 & 4) != 0 )
        v17->Tags.pMatrixTag = this;
      if ( (v19 & 8) != 0 )
        v17->Tags.pCxFormTag = this;
      if ( (v19 & 0x20) != 0 )
        v17->Tags.pFiltersTag = this;
      if ( (v19 & 0x80u) != 0 )
        v17->Tags.pBlendModeTag = this;
      if ( (v19 & 1) != 0 )
        v17->Tags.pDepthTag = this;
      if ( (v19 & 0x40) != 0 )
        v17->Tags.pClipDepthTag = this;
      if ( (v19 & 0x10) != 0 )
        v17->Tags.pRatioTag = this;
      if ( (v19 & 2) != 0 )
        v17->Tags.pCharIdTag = this;
      if ( (v19 & 0x100) != 0 )
        v17->Tags.pClassNameTag = this;
      if ( (v19 & 0x200) != 0 )
        v17->Tags.pVisibilityTag = this;
    }
    else if ( v6 == 2 )
    {
      if ( v17->PlaceType )
        v17->PlaceType = 2;
      this->GetFlags(this, (Scaleform::GFx::CharPosInfoFlags *)&v21);
      v18 = v21;
      if ( (v21 & 4) != 0 )
        v17->Tags.pMatrixTag = this;
      if ( (v18 & 8) != 0 )
        v17->Tags.pCxFormTag = this;
      if ( (v18 & 0x20) != 0 )
        v17->Tags.pFiltersTag = this;
      if ( (v18 & 0x80u) != 0 )
        v17->Tags.pBlendModeTag = this;
      if ( (v18 & 1) != 0 )
        v17->Tags.pDepthTag = this;
      if ( (v18 & 0x40) != 0 )
        v17->Tags.pClipDepthTag = this;
      if ( (v18 & 0x10) != 0 )
        v17->Tags.pRatioTag = this;
      if ( (v18 & 2) != 0 )
        v17->Tags.pCharIdTag = this;
      if ( (v18 & 0x100) != 0 )
        v17->Tags.pClassNameTag = this;
      if ( (v18 & 0x200) != 0 )
        v17->Tags.pVisibilityTag = this;
      v17->CreateFrame = frame;
    }
    else
    {
      v17->Tags.pVisibilityTag = this;
      v17->Tags.pClassNameTag = this;
      v17->Tags.pCharIdTag = this;
      v17->Tags.pRatioTag = this;
      v17->Tags.pClipDepthTag = this;
      v17->Tags.pDepthTag = this;
      v17->Tags.pBlendModeTag = this;
      v17->Tags.pFiltersTag = this;
      v17->Tags.pCxFormTag = this;
      v17->Tags.pMatrixTag = this;
      v17->Tags.pMainTag = this;
      v17->CreateFrame = frame;
    }
  }
  else
  {
LABEL_64:
    v20 = Scaleform::GFx::TimelineSnapshot::Add(psnapshot, v13);
    v20->PlaceType = v6;
    v20->Tags.pVisibilityTag = this;
    v20->Tags.pClassNameTag = this;
    v20->Tags.pCharIdTag = this;
    v20->Tags.pRatioTag = this;
    v20->Tags.pClipDepthTag = this;
    v20->Tags.pDepthTag = this;
    v20->Tags.pBlendModeTag = this;
    v20->Tags.pFiltersTag = this;
    v20->Tags.pCxFormTag = this;
    v20->Tags.pMatrixTag = this;
    v20->Tags.pMainTag = this;
    v20->CreateFrame = frame;
  }
}

void __fastcall Scaleform::GFx::PlaceObjectTag::AddToTimelineSnapshot(
        Scaleform::GFx::PlaceObjectTag *this,
        Scaleform::GFx::TimelineSnapshot *psnapshot,
        unsigned int frame)
{
  __int64 v6; // r9
  __int64 Size; // rdx
  int v8; // er10
  Scaleform::GFx::TimelineSnapshot::SnapshotElement **Data; // r11
  __int64 v10; // r8
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v11; // rcx
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v12; // rax

  this->Trace(this, "\n");
  v6 = 0i64;
  Size = psnapshot->SnapshotSortedArray.Data.Size;
  v8 = *(unsigned __int16 *)&this->pData[2];
  if ( Size <= 0 )
    goto LABEL_12;
  Data = psnapshot->SnapshotSortedArray.Data.Data;
  do
  {
    v10 = (Size >> 1) + v6;
    if ( v8 >= Data[v10]->Depth )
    {
      v6 = v10 + 1;
      Size += -1 - (Size >> 1);
    }
    else
    {
      Size >>= 1;
    }
  }
  while ( Size > 0 );
  if ( v6 && (v11 = Data[v6 - 1], v11->Depth == v8) && v11 && (v11->Flags & 2) == 0 )
  {
    v11->Tags.pVisibilityTag = this;
    v11->Tags.pClassNameTag = this;
    v11->Tags.pCharIdTag = this;
    v11->Tags.pRatioTag = this;
    v11->Tags.pClipDepthTag = this;
    v11->Tags.pDepthTag = this;
    v11->Tags.pBlendModeTag = this;
    v11->Tags.pFiltersTag = this;
    v11->Tags.pCxFormTag = this;
    v11->Tags.pMatrixTag = this;
    v11->Tags.pMainTag = this;
    v11->CreateFrame = frame;
    v11->Flags |= 1u;
  }
  else
  {
LABEL_12:
    v12 = Scaleform::GFx::TimelineSnapshot::Add(psnapshot, v8);
    v12->PlaceType = 0;
    v12->Tags.pVisibilityTag = this;
    v12->Tags.pClassNameTag = this;
    v12->Tags.pCharIdTag = this;
    v12->Tags.pRatioTag = this;
    v12->Tags.pClipDepthTag = this;
    v12->Tags.pDepthTag = this;
    v12->Tags.pBlendModeTag = this;
    v12->Tags.pFiltersTag = this;
    v12->Tags.pCxFormTag = this;
    v12->Tags.pMatrixTag = this;
    v12->Tags.pMainTag = this;
    v12->CreateFrame = frame;
    v12->Flags |= 1u;
  }
}

void __fastcall Scaleform::GFx::RemoveObject2Tag::AddToTimelineSnapshot(
        Scaleform::GFx::RemoveObject2Tag *this,
        Scaleform::GFx::TimelineSnapshot *psnapshot,
        __int64 __formal)
{
  __int64 Size; // r8
  __int64 v6; // r9
  int Depth; // er10
  Scaleform::GFx::TimelineSnapshot::SnapshotElement **Data; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *v12; // rsi
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *v15; // rax
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  ((void (__fastcall *)(Scaleform::GFx::RemoveObject2Tag *, const char *, __int64))this->Trace)(this, "\n", __formal);
  Size = psnapshot->SnapshotSortedArray.Data.Size;
  v6 = 0i64;
  Depth = this->Depth;
  if ( Size <= 0 )
    goto LABEL_9;
  Data = psnapshot->SnapshotSortedArray.Data.Data;
  do
  {
    v9 = (Size >> 1) + v6;
    if ( Depth >= Data[v9]->Depth )
    {
      v6 = v9 + 1;
      Size += -1 - (Size >> 1);
    }
    else
    {
      Size >>= 1;
    }
  }
  while ( Size > 0 );
  if ( !v6 || (v10 = (__int64)Data[v6 - 1], v11 = v6 - 1, *(_DWORD *)(v10 + 20) != Depth) )
  {
LABEL_9:
    v11 = v18;
    v10 = 0i64;
  }
  v18 = v10;
  if ( !v10 )
    goto LABEL_22;
  if ( *(_BYTE *)(v10 + 112) )
  {
    v12 = (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *)psnapshot->SnapshotSortedArray.Data.Data[v11];
    v12->pNext[1].pNext = v12[1].pNext;
    v12[1].pNext->pNext = v12->pNext;
    v13 = psnapshot->SnapshotSortedArray.Data.Size;
    if ( v13 == 1 )
    {
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2>,Scaleform::ArrayDefaultPolicy>>::Clear((Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMAbcFile *,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329>,Scaleform::ArrayDefaultPolicy> > *)&psnapshot->SnapshotSortedArray);
    }
    else
    {
      memmove(
        &psnapshot->SnapshotSortedArray.Data.Data[v11],
        &psnapshot->SnapshotSortedArray.Data.Data[v11 + 1],
        8 * (v13 - v11) - 8);
      --psnapshot->SnapshotSortedArray.Data.Size;
    }
    v12->pNext = psnapshot->SnapshotHeap.FirstEmptySlot;
    psnapshot->SnapshotHeap.FirstEmptySlot = v12;
    v18 = 0i64;
LABEL_22:
    if ( psnapshot->Direction == Direction_Forward )
    {
      v16 = Scaleform::GFx::TimelineSnapshot::Add(psnapshot, this->Depth);
      v17 = this->Depth;
      v18 = (unsigned __int64)v16;
      v16->Depth = v17;
      *(_BYTE *)(v18 + 112) = 3;
      *(_BYTE *)(v18 + 113) |= 2u;
    }
    return;
  }
  v14 = *(_QWORD *)(v10 + 24);
  if ( v14 )
  {
    if ( psnapshot->Direction == Direction_Forward )
    {
      v15 = (struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72i64))(v14);
      if ( v15 )
        this->CheckEventHandlers(this, (void **)&v18, v15);
    }
  }
  if ( !v18 )
    goto LABEL_22;
  Scaleform::GFx::TimelineSnapshot::RemoveAtIndex(psnapshot, v11);
  if ( !v18 )
    goto LABEL_22;
}

void __fastcall Scaleform::GFx::PlaceObjectTag::CheckForCxForm(
        Scaleform::GFx::PlaceObjectTag *this,
        unsigned __int64 dataSz)
{
  Scaleform::GFx::StreamContext v4; // [rsp+20h] [rbp-58h] BYREF
  Scaleform::Render::Matrix2x4<float> pm; // [rsp+40h] [rbp-38h] BYREF

  v4.pData = this->pData;
  *(_OWORD *)&pm.M[0][0] = _xmm;
  *(_OWORD *)&pm.M[1][0] = _xmm;
  v4.DataSize = -1i64;
  v4.CurBitIndex = 0;
  v4.CurByteIndex = 4i64;
  Scaleform::GFx::StreamContext::ReadMatrix(&v4, &pm);
  this->HasCxForm = v4.CurByteIndex < dataSz - 1;
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2>,Scaleform::ArrayDefaultPolicy>>::Clear(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMAbcFile *,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329>,Scaleform::ArrayDefaultPolicy> > *this)
{
  unsigned __int64 Capacity; // rax

  if ( this->Data.Size && (Capacity = this->Data.Policy.Capacity, (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0) && Capacity )
  {
    if ( this->Data.Data )
    {
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->Data.Data = 0i64;
    }
    this->Data.Policy.Capacity = 0i64;
    this->Data.Size = 0i64;
  }
  else
  {
    this->Data.Size = 0i64;
  }
}

unsigned __int64 __fastcall Scaleform::GFx::PlaceObject3Tag::ComputeDataSize(Scaleform::GFx::Stream *pin)
{
  unsigned int v1; // ebx

  v1 = pin->Pos + pin->FilePos - pin->DataSize;
  return (int)(Scaleform::GFx::Stream::GetTagEndPosition(pin) - v1);
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::GFx::GFxPlaceObjectUnpacked::Execute(
        Scaleform::GFx::GFxPlaceObjectUnpacked *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::ASStringManager *StringManager; // rax
  Scaleform::GFx::ASStringNode *v5; // rcx
  Scaleform::GFx::ASStringNode *p_EmptyStringNode; // [rsp+60h] [rbp+8h] BYREF

  StringManager = Scaleform::GFx::InteractiveObject::GetStringManager(m);
  p_EmptyStringNode = &StringManager->EmptyStringNode;
  ++StringManager->EmptyStringNode.RefCount;
  m->AddDisplayObject(
    m,
    &this->Pos,
    (const Scaleform::GFx::ASString *)&p_EmptyStringNode,
    0i64,
    0i64,
    -1u,
    4u,
    0i64,
    0i64);
  v5 = p_EmptyStringNode;
  if ( p_EmptyStringNode->RefCount-- == 1 )
    Scaleform::GFx::ASStringNode::ReleaseNode(v5);
}

void __fastcall Scaleform::GFx::PlaceObject3Tag::Execute(
        Scaleform::GFx::PlaceObject3Tag *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::PlaceObject3Tag_vtbl *v4; // rax
  Scaleform::GFx::ASStringManager *StringManager; // rax
  Scaleform::GFx::ASStringNode *p_EmptyStringNode; // rbx
  Scaleform::GFx::ASStringNode *StringNode; // rax
  char v8; // di
  Scaleform::GFx::ASStringNode *v9; // rcx
  bool v10; // zf
  Scaleform::GFx::ASStringManager *v11; // rax
  Scaleform::GFx::ASStringNode *v12; // rbx
  Scaleform::GFx::ASStringNode *v13; // rax
  char v14; // di
  Scaleform::GFx::ASStringNode *v15; // rcx
  Scaleform::GFx::ASStringNode *v16; // rcx
  Scaleform::GFx::ASStringNode *v17; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::GFx::ASStringNode *v18; // [rsp+60h] [rbp-A8h] BYREF
  Scaleform::GFx::CharPosInfo v19; // [rsp+68h] [rbp-A0h] BYREF
  const struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *v20; // [rsp+D8h] [rbp-30h]
  char *pstr; // [rsp+E0h] [rbp-28h]
  int v22; // [rsp+E8h] [rbp-20h]

  LODWORD(v17) = 0;
  Scaleform::Render::Cxform::Cxform(&v19.ColorTransform);
  v4 = this->__vftable;
  *(_OWORD *)&v19.Matrix_1.M[0][0] = _xmm;
  v19.Ratio = 0.0;
  *(_OWORD *)&v19.Matrix_1.M[1][0] = _xmm;
  v19.pFilters.pObject = 0i64;
  v19.CharacterId.Id = 0x40000;
  *(_DWORD *)&v19.ClipDepth = 0;
  v19.Depth = 0;
  *(_WORD *)&v19.BlendMode = 256;
  v19.ClassName = 0i64;
  v4->Unpack(this, (Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *)&v19);
  if ( v22 )
  {
    if ( v22 == 1 )
    {
      Scaleform::GFx::DisplayObjContainer::MoveDisplayObject(m, &v19);
      goto LABEL_27;
    }
    if ( v22 != 2 )
      goto LABEL_27;
    StringManager = Scaleform::GFx::InteractiveObject::GetStringManager(m);
    if ( pstr )
    {
      StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(StringManager, pstr);
      v8 = 8;
      v9 = StringNode;
      ++StringNode->RefCount;
      p_EmptyStringNode = v17;
    }
    else
    {
      ++StringManager->EmptyStringNode.RefCount;
      p_EmptyStringNode = &StringManager->EmptyStringNode;
      StringNode = v17;
      v8 = 4;
      v9 = p_EmptyStringNode;
    }
    v17 = v9;
    ++v9->RefCount;
    if ( (v8 & 8) != 0 )
    {
      v8 &= ~8u;
      v10 = StringNode->RefCount-- == 1;
      if ( v10 )
        Scaleform::GFx::ASStringNode::ReleaseNode(StringNode);
    }
    if ( (v8 & 4) != 0 )
    {
      v10 = p_EmptyStringNode->RefCount-- == 1;
      if ( v10 )
        Scaleform::GFx::ASStringNode::ReleaseNode(p_EmptyStringNode);
    }
    m->CreateAndReplaceDisplayObject(
      m,
      &v19,
      (const Scaleform::GFx::ASString *)&v17,
      (Scaleform::GFx::DisplayObjectBase **)&v18);
  }
  else
  {
    v11 = Scaleform::GFx::InteractiveObject::GetStringManager(m);
    if ( pstr )
    {
      v13 = Scaleform::GFx::ASStringManager::CreateStringNode(v11, pstr);
      v12 = v18;
      v14 = 2;
      v15 = v13;
      ++v13->RefCount;
    }
    else
    {
      ++v11->EmptyStringNode.RefCount;
      v12 = &v11->EmptyStringNode;
      v13 = v18;
      v14 = 1;
      v15 = v12;
    }
    v17 = v15;
    ++v15->RefCount;
    if ( (v14 & 2) != 0 )
    {
      v14 &= ~2u;
      v10 = v13->RefCount-- == 1;
      if ( v10 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v13);
    }
    if ( (v14 & 1) != 0 )
    {
      v10 = v12->RefCount-- == 1;
      if ( v10 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v12);
    }
    m->AddDisplayObject(m, &v19, (const Scaleform::GFx::ASString *)&v17, v20, 0i64, -1u, 4u, 0i64, 0i64);
  }
  v16 = v17;
  v10 = v17->RefCount-- == 1;
  if ( v10 )
    Scaleform::GFx::ASStringNode::ReleaseNode(v16);
LABEL_27:
  if ( v19.pFilters.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v19.pFilters.pObject);
}

void __fastcall Scaleform::GFx::PlaceObjectTag::Execute(
        Scaleform::GFx::PlaceObjectTag *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::PlaceObjectTag_vtbl *v4; // rax
  Scaleform::GFx::ASStringManager *StringManager; // rax
  Scaleform::GFx::ASStringNode *v6; // rcx
  Scaleform::GFx::ASStringNode *p_EmptyStringNode; // [rsp+50h] [rbp-B8h] BYREF
  Scaleform::Render::Cxform v9; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+80h] [rbp-88h]
  __int128 v11; // [rsp+90h] [rbp-78h]
  Scaleform::RefCountVImpl *v12; // [rsp+A0h] [rbp-68h]
  int v13; // [rsp+A8h] [rbp-60h]
  int v14; // [rsp+ACh] [rbp-5Ch]
  int v15; // [rsp+B0h] [rbp-58h]
  __int64 v16; // [rsp+B8h] [rbp-50h]
  int v17; // [rsp+C0h] [rbp-48h]
  __int16 v18; // [rsp+C4h] [rbp-44h]

  Scaleform::Render::Cxform::Cxform(&v9);
  v4 = this->__vftable;
  v10 = _xmm;
  v13 = 0;
  v11 = _xmm;
  v12 = 0i64;
  v15 = 0x40000;
  v17 = 0;
  v14 = 0;
  v18 = 256;
  v16 = 0i64;
  v4->Unpack(this, (Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *)&v9);
  StringManager = Scaleform::GFx::InteractiveObject::GetStringManager(m);
  p_EmptyStringNode = &StringManager->EmptyStringNode;
  ++StringManager->EmptyStringNode.RefCount;
  m->AddDisplayObject(
    m,
    (const Scaleform::GFx::CharPosInfo *)&v9,
    (const Scaleform::GFx::ASString *)&p_EmptyStringNode,
    0i64,
    0i64,
    -1u,
    4u,
    0i64,
    0i64);
  v6 = p_EmptyStringNode;
  if ( p_EmptyStringNode->RefCount-- == 1 )
    Scaleform::GFx::ASStringNode::ReleaseNode(v6);
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
}

void __fastcall Scaleform::GFx::RemoveObject2Tag::Execute(
        Scaleform::GFx::RemoveObject2Tag *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::ResourceId id; // [rsp+30h] [rbp+8h] BYREF

  id.Id = 0x40000;
  Scaleform::GFx::DisplayObjContainer::RemoveDisplayObject(m, this->Depth, &id.Id);
}

void __fastcall Scaleform::GFx::RemoveObjectTag::Execute(
        Scaleform::GFx::RemoveObjectTag *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::ResourceId id; // [rsp+30h] [rbp+8h] BYREF

  id.Id = this->Id;
  Scaleform::GFx::DisplayObjContainer::RemoveDisplayObject(m, this->Depth, &id.Id);
}

void __fastcall Scaleform::GFx::SetBackgroundColorTag::Execute(
        Scaleform::GFx::SetBackgroundColorTag *this,
        Scaleform::GFx::DisplayObjContainer *m)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rbx
  float v4; // xmm0_4
  bool v5; // cc
  double v6; // xmm0_8
  double v7; // xmm0_8
  unsigned int Raw; // [rsp+38h] [rbp+10h] BYREF

  pMovieImpl = m->pASRoot->pMovieImpl;
  if ( (pMovieImpl->Flags & 0x20000) == 0 )
  {
    v4 = pMovieImpl->GetBackgroundAlpha(m->pASRoot->pMovieImpl) * 255.0;
    v5 = v4 <= 0.0;
    v6 = v4;
    if ( v5 )
      v7 = v6 - 0.5;
    else
      v7 = v6 + 0.5;
    this->Color.Channels.Alpha = (int)v7;
    Raw = this->Color.Raw;
    ((void (__fastcall *)(Scaleform::GFx::MovieImpl *, unsigned int *))pMovieImpl->SetBackgroundColor)(pMovieImpl, &Raw);
    pMovieImpl->Flags |= 0x20000u;
  }
}

void __fastcall Scaleform::GFx::PlaceObject2Tag::ExecuteBase(
        Scaleform::GFx::PlaceObject2Tag *this,
        Scaleform::GFx::DisplayObjContainer *m,
        unsigned __int8 version)
{
  Scaleform::GFx::ASStringManager *StringManager; // rax
  Scaleform::GFx::ASStringNode *p_EmptyStringNode; // rbx
  Scaleform::GFx::ASStringNode *StringNode; // rax
  char v9; // di
  Scaleform::GFx::ASStringNode *v10; // rcx
  bool v11; // zf
  Scaleform::GFx::ASStringManager *v12; // rax
  Scaleform::GFx::ASStringNode *v13; // rbx
  Scaleform::GFx::ASStringNode *v14; // rax
  char v15; // di
  Scaleform::GFx::ASStringNode *v16; // rcx
  Scaleform::GFx::ASStringNode *v17; // rcx
  Scaleform::GFx::ASStringNode *v18; // [rsp+50h] [rbp-79h] BYREF
  Scaleform::GFx::ASStringNode *v19; // [rsp+58h] [rbp-71h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v20; // [rsp+60h] [rbp-69h] BYREF

  LODWORD(v18) = 0;
  Scaleform::Render::Cxform::Cxform(&v20.Pos.ColorTransform);
  *(_OWORD *)&v20.Pos.Matrix_1.M[0][0] = _xmm;
  *(_OWORD *)&v20.Pos.Matrix_1.M[1][0] = _xmm;
  v20.Pos.Ratio = 0.0;
  v20.Pos.pFilters.pObject = 0i64;
  v20.Pos.CharacterId.Id = 0x40000;
  *(_DWORD *)&v20.Pos.ClipDepth = 0;
  v20.Pos.Depth = 0;
  *(_WORD *)&v20.Pos.BlendMode = 256;
  v20.Pos.ClassName = 0i64;
  Scaleform::GFx::PlaceObject2Tag::UnpackBase(this, &v20, version);
  if ( v20.PlaceType )
  {
    if ( v20.PlaceType == Place_Move )
    {
      Scaleform::GFx::DisplayObjContainer::MoveDisplayObject(m, &v20.Pos);
      goto LABEL_27;
    }
    if ( v20.PlaceType != Place_Replace )
      goto LABEL_27;
    StringManager = Scaleform::GFx::InteractiveObject::GetStringManager(m);
    if ( v20.Name )
    {
      StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(StringManager, v20.Name);
      v9 = 8;
      v10 = StringNode;
      ++StringNode->RefCount;
      p_EmptyStringNode = v18;
    }
    else
    {
      ++StringManager->EmptyStringNode.RefCount;
      p_EmptyStringNode = &StringManager->EmptyStringNode;
      StringNode = v18;
      v9 = 4;
      v10 = p_EmptyStringNode;
    }
    v18 = v10;
    ++v10->RefCount;
    if ( (v9 & 8) != 0 )
    {
      v9 &= ~8u;
      v11 = StringNode->RefCount-- == 1;
      if ( v11 )
        Scaleform::GFx::ASStringNode::ReleaseNode(StringNode);
    }
    if ( (v9 & 4) != 0 )
    {
      v11 = p_EmptyStringNode->RefCount-- == 1;
      if ( v11 )
        Scaleform::GFx::ASStringNode::ReleaseNode(p_EmptyStringNode);
    }
    m->CreateAndReplaceDisplayObject(
      m,
      (const Scaleform::GFx::CharPosInfo *)&v20,
      (const Scaleform::GFx::ASString *)&v18,
      (Scaleform::GFx::DisplayObjectBase **)&v19);
  }
  else
  {
    v12 = Scaleform::GFx::InteractiveObject::GetStringManager(m);
    if ( v20.Name )
    {
      v14 = Scaleform::GFx::ASStringManager::CreateStringNode(v12, v20.Name);
      v13 = v19;
      v15 = 2;
      v16 = v14;
      ++v14->RefCount;
    }
    else
    {
      ++v12->EmptyStringNode.RefCount;
      v13 = &v12->EmptyStringNode;
      v14 = v19;
      v15 = 1;
      v16 = v13;
    }
    v18 = v16;
    ++v16->RefCount;
    if ( (v15 & 2) != 0 )
    {
      v15 &= ~2u;
      v11 = v14->RefCount-- == 1;
      if ( v11 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v14);
    }
    if ( (v15 & 1) != 0 )
    {
      v11 = v13->RefCount-- == 1;
      if ( v11 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v13);
    }
    m->AddDisplayObject(
      m,
      (const Scaleform::GFx::CharPosInfo *)&v20,
      (const Scaleform::GFx::ASString *)&v18,
      v20.pEventHandlers,
      0i64,
      -1u,
      4u,
      0i64,
      0i64);
  }
  v17 = v18;
  v11 = v18->RefCount-- == 1;
  if ( v11 )
    Scaleform::GFx::ASStringNode::ReleaseNode(v17);
LABEL_27:
  if ( v20.Pos.pFilters.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v20.Pos.pFilters.pObject);
}

void __fastcall Scaleform::GFx::TimelineSnapshot::ExecuteSnapshot(
        Scaleform::GFx::TimelineSnapshot *this,
        Scaleform::GFx::DisplayObjContainer *pdispObj)
{
  int v3; // esi
  Scaleform::GFx::ASStringNode *v4; // rbx
  Scaleform::GFx::ASStringNode *v5; // rdi
  Scaleform::GFx::ASStringNode *v6; // r12
  Scaleform::GFx::TimelineSnapshot::SnapshotElement *pNext; // r14
  Scaleform::GFx::ASStringNode *p_EmptyStringNode; // r15
  int Depth; // edx
  Scaleform::GFx::ASStringManager *StringManager; // rax
  Scaleform::GFx::ASStringNode *StringNode; // rax
  bool v12; // zf
  Scaleform::GFx::ASStringNode *v13; // rcx
  Scaleform::GFx::ASStringManager *v14; // rax
  Scaleform::GFx::ASStringNode *v15; // rax
  Scaleform::GFx::ResourceId id[2]; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::GFx::ASStringNode *p_SnapshotList; // [rsp+60h] [rbp-A8h]
  Scaleform::GFx::ASStringNode *v18; // [rsp+68h] [rbp-A0h] BYREF
  Scaleform::GFx::ASStringNode *v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v21; // [rsp+88h] [rbp-80h] BYREF

  id[0].Id = 0;
  v3 = 0;
  p_SnapshotList = (Scaleform::GFx::ASStringNode *)&this->SnapshotList;
  if ( (Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > *)this->SnapshotList.Root.pNext != &this->SnapshotList )
  {
    v4 = p_SnapshotList;
    v5 = p_SnapshotList;
    v6 = p_SnapshotList;
    pNext = this->SnapshotList.Root.pNext;
    p_EmptyStringNode = p_SnapshotList;
    while ( pNext->PlaceType )
    {
      if ( pNext->PlaceType != 1 )
      {
        if ( pNext->PlaceType != 2 )
        {
          if ( pNext->PlaceType == 3 )
          {
            Depth = pNext->Depth;
            id[0].Id = 0x40000;
            Scaleform::GFx::DisplayObjContainer::RemoveDisplayObject(pdispObj, Depth, &id[0].Id);
          }
          goto LABEL_33;
        }
        Scaleform::Render::Cxform::Cxform(&v21.Pos.ColorTransform);
        *(_OWORD *)&v21.Pos.Matrix_1.M[0][0] = _xmm;
        *(_OWORD *)&v21.Pos.Matrix_1.M[1][0] = _xmm;
        v21.Pos.pFilters.pObject = 0i64;
        *(_DWORD *)&v21.Pos.ClipDepth = 0;
        *(_QWORD *)&v21.Pos.Ratio = 0i64;
        v21.Pos.ClassName = 0i64;
        v21.Pos.CharacterId.Id = 0x40000;
        *(_WORD *)&v21.Pos.BlendMode = 256;
        Scaleform::GFx::TimelineSnapshot::SourceTags::Unpack(&pNext->Tags, &v21);
        StringManager = Scaleform::GFx::InteractiveObject::GetStringManager(pdispObj);
        if ( v21.Name )
        {
          v3 |= 8u;
          StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(StringManager, v21.Name);
          v5 = StringNode;
          ++StringNode->RefCount;
        }
        else
        {
          p_EmptyStringNode = &StringManager->EmptyStringNode;
          v3 |= 4u;
          ++StringManager->EmptyStringNode.RefCount;
          StringNode = &StringManager->EmptyStringNode;
        }
        v18 = StringNode;
        ++StringNode->RefCount;
        if ( (v3 & 8) != 0 )
        {
          v3 &= ~8u;
          v12 = v5->RefCount-- == 1;
          if ( v12 )
            Scaleform::GFx::ASStringNode::ReleaseNode(v5);
        }
        if ( (v3 & 4) != 0 )
        {
          v3 &= ~4u;
          v12 = p_EmptyStringNode->RefCount-- == 1;
          if ( v12 )
            Scaleform::GFx::ASStringNode::ReleaseNode(p_EmptyStringNode);
        }
        pdispObj->CreateAndReplaceDisplayObject(
          pdispObj,
          (const Scaleform::GFx::CharPosInfo *)&v21,
          (const Scaleform::GFx::ASString *)&v18,
          (Scaleform::GFx::DisplayObjectBase **)&v20);
        v13 = v18;
        goto LABEL_29;
      }
      Scaleform::Render::Cxform::Cxform(&v21.Pos.ColorTransform);
      *(_OWORD *)&v21.Pos.Matrix_1.M[0][0] = _xmm;
      *(_OWORD *)&v21.Pos.Matrix_1.M[1][0] = _xmm;
      v21.Pos.pFilters.pObject = 0i64;
      *(_DWORD *)&v21.Pos.ClipDepth = 0;
      *(_QWORD *)&v21.Pos.Ratio = 0i64;
      v21.Pos.ClassName = 0i64;
      v21.Pos.CharacterId.Id = 0x40000;
      *(_WORD *)&v21.Pos.BlendMode = 256;
      Scaleform::GFx::TimelineSnapshot::SourceTags::Unpack(&pNext->Tags, &v21);
      Scaleform::GFx::DisplayObjContainer::MoveDisplayObject(pdispObj, &v21.Pos);
LABEL_31:
      if ( v21.Pos.pFilters.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v21.Pos.pFilters.pObject);
LABEL_33:
      if ( pNext == (Scaleform::GFx::TimelineSnapshot::SnapshotElement *)p_SnapshotList->pData )
        return;
      pNext = pNext->pNext;
    }
    Scaleform::Render::Cxform::Cxform(&v21.Pos.ColorTransform);
    *(_OWORD *)&v21.Pos.Matrix_1.M[0][0] = _xmm;
    *(_OWORD *)&v21.Pos.Matrix_1.M[1][0] = _xmm;
    v21.Pos.pFilters.pObject = 0i64;
    *(_DWORD *)&v21.Pos.ClipDepth = 0;
    *(_QWORD *)&v21.Pos.Ratio = 0i64;
    v21.Pos.ClassName = 0i64;
    v21.Pos.CharacterId.Id = 0x40000;
    *(_WORD *)&v21.Pos.BlendMode = 256;
    Scaleform::GFx::TimelineSnapshot::SourceTags::Unpack(&pNext->Tags, &v21);
    v14 = Scaleform::GFx::InteractiveObject::GetStringManager(pdispObj);
    if ( v21.Name )
    {
      v3 |= 2u;
      v15 = Scaleform::GFx::ASStringManager::CreateStringNode(v14, v21.Name);
      v4 = v15;
      ++v15->RefCount;
    }
    else
    {
      v6 = &v14->EmptyStringNode;
      v3 |= 1u;
      ++v14->EmptyStringNode.RefCount;
      v15 = &v14->EmptyStringNode;
    }
    v19 = v15;
    ++v15->RefCount;
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      v12 = v4->RefCount-- == 1;
      if ( v12 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v4);
    }
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      v12 = v6->RefCount-- == 1;
      if ( v12 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v6);
    }
    pdispObj->AddDisplayObject(
      pdispObj,
      (const Scaleform::GFx::CharPosInfo *)&v21,
      (const Scaleform::GFx::ASString *)&v19,
      v21.pEventHandlers,
      0i64,
      pNext->CreateFrame,
      pNext->Flags & 2 | 4,
      0i64,
      0i64);
    v13 = v19;
LABEL_29:
    v12 = v13->RefCount-- == 1;
    if ( v12 )
      Scaleform::GFx::ASStringNode::ReleaseNode(v13);
    goto LABEL_31;
  }
}

__int64 __fastcall Scaleform::GFx::SpriteDef::GetFileBytes(Scaleform::GFx::SpriteDef *this)
{
  return this->pMovieDef->pData.pObject->Header.FileLength;
}

const char *__fastcall Scaleform::GFx::SpriteDef::GetFileURL(Scaleform::GFx::SpriteDef *this)
{
  return (const char *)((this->pMovieDef->pData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
}

Scaleform::GFx::CharPosInfoFlags *__fastcall Scaleform::GFx::PlaceObject2Tag::GetFlags(
        Scaleform::GFx::PlaceObject2Tag *this,
        Scaleform::GFx::CharPosInfoFlags *result)
{
  result->Flags = this->pData[0] & 0x5F;
  return result;
}

Scaleform::GFx::CharPosInfoFlags *__fastcall Scaleform::GFx::PlaceObject3Tag::GetFlags(
        Scaleform::GFx::PlaceObject3Tag *this,
        Scaleform::GFx::CharPosInfoFlags *result)
{
  char v2; // r8
  __int64 v4; // rax
  unsigned __int16 v5; // r8
  unsigned __int8 v6; // r9
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // ax

  v2 = this->pData[0];
  v4 = 1i64;
  if ( v2 < 0 )
    v4 = 9i64;
  v5 = v2 & 0x5F;
  v6 = this->pData[v4];
  v7 = v5 | 0x20;
  if ( (v6 & 1) == 0 )
    v7 = v5;
  v8 = v7 | 0x80;
  if ( (v6 & 2) == 0 )
    v8 = v7;
  v9 = v8 | 0x200;
  if ( (v6 & 0x20) == 0 )
    v9 = v8;
  result->Flags = v9;
  return result;
}

Scaleform::GFx::CharPosInfoFlags *__fastcall Scaleform::GFx::PlaceObjectTag::GetFlags(
        Scaleform::GFx::PlaceObjectTag *this,
        Scaleform::GFx::CharPosInfoFlags *result)
{
  unsigned __int16 v2; // ax

  v2 = 7;
  if ( this->HasCxForm )
    v2 = 15;
  result->Flags = v2;
  return result;
}

__int64 __fastcall Concurrency::details::ScheduleGroupBase::Id(Concurrency::details::ScheduleGroupBase *this)
{
  return this->m_id;
}

const Scaleform::String *__fastcall Scaleform::GFx::SpriteDef::GetFrameLabel(
        Scaleform::GFx::SpriteDef *this,
        unsigned int frameNumber,
        unsigned int *exactFrameNumberForLabel)
{
  return Scaleform::GFx::MovieDataDef::TranslateNumberToFrameString(
           &this->NamedFrames,
           frameNumber,
           exactFrameNumberForLabel);
}

Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *__fastcall Scaleform::GFx::SpriteDef::GetFrameLabels(
        Scaleform::GFx::SpriteDef *this,
        unsigned int frameNumber,
        Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *destArr)
{
  Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *p_NamedFrames; // r9
  __int64 v4; // r15
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  __m128i v8; // xmm0
  unsigned __int64 SizeMask; // rdx
  unsigned __int64 v10; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v11; // rcx
  int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rcx
  const Scaleform::String *v15; // rbp
  Scaleform::String *v16; // rcx
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  __m128i v20; // [rsp+20h] [rbp-28h] BYREF

  p_NamedFrames = &this->NamedFrames;
  v4 = 0i64;
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
    v20.m128i_i64[0] = (__int64)p_NamedFrames;
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
  if ( v12 )
    return destArr;
  return (Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *)v4;
}

float __fastcall Scaleform::GFx::SpriteDef::GetFrameRate(Scaleform::GFx::SpriteDef *this)
{
  return this->pMovieDef->pData.pObject->Header.FPS;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::SpriteDef::GetFrameRect(
        Scaleform::GFx::SpriteDef *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::Render::Rect<float> *v2; // rax

  result->x2 = 1.0;
  *(_QWORD *)&result->x1 = 0i64;
  v2 = result;
  result->y2 = 1.0;
  return v2;
}

float __fastcall Scaleform::GFx::SpriteDef::GetWidth(Scaleform::Render::GL::HAL *this)
{
  return *(float *)&FLOAT_1_0;
}

char __fastcall Scaleform::GFx::SpriteDef::GetLabeledFrame(
        Scaleform::GFx::SpriteDef *this,
        const char *label,
        unsigned int *frameNumber,
        bool translateNumbers)
{
  return Scaleform::GFx::MovieDataDef::TranslateFrameString(&this->NamedFrames, label, frameNumber, translateNumbers);
}

__int64 __fastcall AgDisplay::getVsyncEnabled(AgDisplay *this)
{
  return (unsigned int)this->m_vsync;
}

const Scaleform::GFx::TimelineDef::Frame *__fastcall Scaleform::GFx::SpriteDef::GetPlaylist(
        Scaleform::GFx::SpriteDef *this,
        const Scaleform::GFx::TimelineDef::Frame *result,
        int frameNumber)
{
  *result = this->Playlist.Data.Data[frameNumber];
  return result;
}

__int64 __fastcall Scaleform::GFx::SpriteDef::GetResourceTypeCode(Scaleform::GFx::SpriteDef *this)
{
  return 33792i64;
}

__int64 __fastcall Scaleform::GFx::SpriteDef::GetSWFFlags(Scaleform::GFx::SpriteDef *this)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::MovieDataDef *))this->pMovieDef->GetSWFFlags)(this->pMovieDef);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

__int64 __fastcall Scaleform::GFx::SpriteDef::GetVersion(Scaleform::GFx::SpriteDef *this)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::MovieDataDef *))this->pMovieDef->GetVersion)(this->pMovieDef);
}

__int64 __fastcall Scaleform::GFx::PlaceObject2Tag::HasEventHandlers(Scaleform::GFx::Stream *pin)
{
  signed int v2; // eax
  __int64 Pos; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // eax

  v2 = pin->DataSize - pin->Pos;
  pin->UnusedBits = 0;
  if ( v2 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(pin);
  Pos = pin->Pos;
  v4 = pin->pBuffer[Pos];
  v5 = pin->FilePos - pin->DataSize - 1;
  pin->Pos = Pos + 1;
  Scaleform::GFx::Stream::SetPosition(pin, v5 + Pos + 1);
  return v4 >> 7;
}

void __fastcall Scaleform::GFx::SpriteDef::InitEmptyClipDef(Scaleform::GFx::SpriteDef *this)
{
  this->FrameCount = 1;
  Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Playlist.Data,
    1ui64);
}

void __fastcall Scaleform::GFx::TimelineSnapshot::MakeSnapshot(
        Scaleform::GFx::TimelineSnapshot *this,
        Scaleform::GFx::TimelineDef *pdef,
        unsigned int startFrame,
        unsigned int endFrame)
{
  unsigned int v5; // edi
  __int64 i; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-10h]

  if ( startFrame <= endFrame )
  {
    v5 = startFrame;
    do
    {
      pdef->GetPlaylist(pdef, (const Scaleform::GFx::TimelineDef::Frame *)&v9, v5);
      for ( i = 0i64; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
        (*(void (__fastcall **)(_QWORD, Scaleform::GFx::TimelineSnapshot *, _QWORD))(**(_QWORD **)(v9 + 8 * i) + 48i64))(
          *(_QWORD *)(v9 + 8 * i),
          this,
          v5);
      ++v5;
    }
    while ( v5 <= endFrame );
  }
}

void __fastcall Scaleform::GFx::RemoveObject2Tag::Read(
        Scaleform::GFx::RemoveObject2Tag *this,
        Scaleform::GFx::LoadProcess *p)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v4; // eax
  __int64 Pos; // r9
  unsigned __int16 v6; // r8

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
  this->Depth = v6;
}

void __fastcall Scaleform::GFx::RemoveObjectTag::Read(
        Scaleform::GFx::RemoveObjectTag *this,
        Scaleform::GFx::LoadProcess *p)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r9
  unsigned __int16 v7; // r8
  Scaleform::GFx::SWFProcessInfo *p_ProcessInfo; // rbx
  int v9; // eax
  __int64 v10; // r9
  unsigned __int16 v11; // r8

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
  this->Id = v7;
  p_ProcessInfo = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !p_ProcessInfo )
    p_ProcessInfo = &p->ProcessInfo;
  v9 = p_ProcessInfo->Stream.DataSize - p_ProcessInfo->Stream.Pos;
  p_ProcessInfo->Stream.UnusedBits = 0;
  if ( v9 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&p_ProcessInfo->Stream, 2);
  v10 = p_ProcessInfo->Stream.Pos;
  v11 = p_ProcessInfo->Stream.pBuffer[v10] | (p_ProcessInfo->Stream.pBuffer[(unsigned int)(v10 + 1)] << 8);
  p_ProcessInfo->Stream.Pos = v10 + 2;
  this->Depth = v11;
}

void __fastcall Scaleform::GFx::SetBackgroundColorTag::Read(
        Scaleform::GFx::SetBackgroundColorTag *this,
        Scaleform::GFx::LoadProcess *p)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rcx

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  Scaleform::GFx::Stream::ReadRgb(&pAltStream->Stream, &this->Color);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "  SetBackgroundColor: (%d %d %d)\n");
}

void __fastcall Scaleform::GFx::SpriteDef::Read(
        Scaleform::GFx::SpriteDef *this,
        Scaleform::GFx::LoadProcess *p,
        unsigned __int16 *charId)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  unsigned __int16 *v4; // rsi
  int TagEndPosition; // eax
  unsigned int v8; // ebp
  int v9; // ecx
  __int64 Pos; // r9
  Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy> *p_Playlist; // r14
  int v12; // edx
  __int64 v13; // r12
  int TagDataOffset; // er14
  int TagLength; // ebp
  int TagOffset; // esi
  Scaleform::GFx::TagType TagType; // ebx
  _BOOL8 v18; // r8
  void *v19; // rbx
  void *v20; // rbx
  void (__fastcall *v21)(_SETJMP_FLOAT128 *); // r8
  __int64 v22; // rax
  __int64 LoadState; // rdx
  __int64 v24; // [rsp+20h] [rbp-98h]
  int v25; // [rsp+30h] [rbp-88h]
  Scaleform::String src; // [rsp+40h] [rbp-78h] BYREF
  Scaleform::String v28; // [rsp+48h] [rbp-70h] BYREF
  Scaleform::GFx::TagType v29; // [rsp+50h] [rbp-68h]
  int v30; // [rsp+54h] [rbp-64h]
  int v31; // [rsp+58h] [rbp-60h]
  int v32; // [rsp+5Ch] [rbp-5Ch]
  Scaleform::GFx::ProgressHandler *pObject; // [rsp+60h] [rbp-58h]
  Scaleform::GFx::TagInfo pTagInfo; // [rsp+68h] [rbp-50h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  v4 = charId;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  TagEndPosition = Scaleform::GFx::Stream::GetTagEndPosition(&pAltStream->Stream);
  p->pTimelineDef = this;
  p->LoadState = LS_LoadingSprite;
  v8 = TagEndPosition;
  v9 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  v25 = TagEndPosition;
  pAltStream->Stream.UnusedBits = 0;
  if ( v9 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  p_Playlist = &this->Playlist;
  v12 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  if ( !v12 )
    v12 = 1;
  this->FrameCount = v12;
  Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Playlist.Data,
    v12);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  frames = %d\n");
  this->LoadingFrame = 0;
  while ( pAltStream->Stream.Pos + pAltStream->Stream.FilePos - pAltStream->Stream.DataSize < v8 )
  {
    v13 = (unsigned int)Scaleform::GFx::Stream::OpenTag(&pAltStream->Stream, &pTagInfo);
    Scaleform::String::String(
      &src,
      (const char *)((p->pLoadData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
    pObject = p->pLoadStates.pObject->pProgressHandler.pObject;
    if ( pObject )
    {
      TagDataOffset = pTagInfo.TagDataOffset;
      TagLength = pTagInfo.TagLength;
      TagOffset = pTagInfo.TagOffset;
      TagType = pTagInfo.TagType;
      Scaleform::String::String(&v28, &src);
      v29 = TagType;
      LOBYTE(v18) = 1;
      v30 = TagOffset;
      v31 = TagLength;
      v32 = TagDataOffset;
      pObject->LoadTagUpdate(pObject, (const Scaleform::GFx::ProgressHandler::TagInfo *)&v28, v18);
      v19 = (void *)(v28.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v28.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v19);
      v8 = v25;
      p_Playlist = &this->Playlist;
      v4 = charId;
    }
    v20 = (void *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
    if ( (_DWORD)v13 == 1 )
    {
      if ( this->LoadingFrame == LODWORD(this->Playlist.Data.Size) )
      {
        Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy>::Resize(
          &p_Playlist->Data,
          this->Playlist.Data.Size + 1);
        LODWORD(v24) = this->LoadingFrame + 1;
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogError(
          &pAltStream->Stream,
          "An extra frame is found for sprite id = %d, framecnt = %d, actual frames = %d",
          *v4,
          (unsigned int)this->FrameCount,
          v24);
      }
      Scaleform::GFx::LoadProcess::CommitFrameTags(p);
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  ShowFrame (sprite, char id = %d)\n");
      ++this->LoadingFrame;
      goto LABEL_25;
    }
    if ( (unsigned int)v13 >= 0x5C )
    {
      v22 = (unsigned int)(v13 - 1000);
      if ( (unsigned int)v22 > 9 )
        goto LABEL_24;
      v21 = (void (__fastcall *)(_SETJMP_FLOAT128 *))Scaleform::GFx::GFx_GFX_TagLoaderTable[v22];
    }
    else
    {
      v21 = (void (__fastcall *)(_SETJMP_FLOAT128 *))Scaleform::GFx::SWF_TagLoaderTable[v13];
    }
    if ( !v21 )
    {
LABEL_24:
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "*** no tag loader for type %d\n");
      goto LABEL_25;
    }
    v21((_SETJMP_FLOAT128 *)p);
LABEL_25:
    Scaleform::GFx::Stream::CloseTag(&pAltStream->Stream);
  }
  LoadState = p->LoadState;
  if ( p->FrameTags[LoadState].Data.Size || !(_DWORD)LoadState && p->InitActionTags.Data.Size )
  {
    if ( this->LoadingFrame == LODWORD(this->Playlist.Data.Size) )
    {
      Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy>::Resize(
        &p_Playlist->Data,
        this->Playlist.Data.Size + 1);
      LODWORD(v24) = this->LoadingFrame + 1;
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogError(
        &pAltStream->Stream,
        "An extra frame is found for sprite id = %d, framecnt = %d, actual frames = %d",
        *v4,
        (unsigned int)this->FrameCount,
        v24);
    }
    Scaleform::GFx::LoadProcess::CommitFrameTags(p);
  }
  p->LoadState = LS_LoadingRoot;
  p->pTimelineDef = 0i64;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  -- sprite END, char id = %d --\n");
}

void __fastcall Scaleform::GFx::TimelineSnapshot::RemoveAtIndex(
        Scaleform::GFx::TimelineSnapshot *this,
        unsigned __int64 idx)
{
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *v3; // rbx
  unsigned __int64 Size; // r8

  v3 = (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *)this->SnapshotSortedArray.Data.Data[idx];
  v3->pNext[1].pNext = v3[1].pNext;
  v3[1].pNext->pNext = v3->pNext;
  Size = this->SnapshotSortedArray.Data.Size;
  if ( Size == 1 )
  {
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2>,Scaleform::ArrayDefaultPolicy>>::Clear((Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMAbcFile *,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329>,Scaleform::ArrayDefaultPolicy> > *)&this->SnapshotSortedArray);
  }
  else
  {
    memmove(
      &this->SnapshotSortedArray.Data.Data[idx],
      &this->SnapshotSortedArray.Data.Data[idx + 1],
      8 * (Size - idx) - 8);
    --this->SnapshotSortedArray.Data.Size;
  }
  v3->pNext = this->SnapshotHeap.FirstEmptySlot;
  this->SnapshotHeap.FirstEmptySlot = v3;
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::TimelineDef::Frame *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::TimelineDef::Frame *v8; // rax
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
        v8 = (Scaleform::GFx::TimelineDef::Frame *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     Data,
                                                     v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 264;
      this->Data = (Scaleform::GFx::TimelineDef::Frame *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy> *this,
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
    Scaleform::ArrayDataBase<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy>::Reserve(
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
      {
        v6->pTagPtrList = 0i64;
        v6->TagCount = 0;
      }
      ++v6;
    }
  }
}

void __fastcall Scaleform::ArrayDataDH<double,Scaleform::AllocatorDH<double,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayDataDH<Scaleform::GFx::AS3::TR::Def *,Scaleform::AllocatorDH_POD<Scaleform::GFx::AS3::TR::Def *,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  const Scaleform::MemoryHeap *pHeap; // rdx

  pHeap = this->pHeap;
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pHeap,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> *)this,
      pHeap,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::GFx::PlaceObject2Tag::RestructureForEventHandlers(unsigned __int8 *pdata)
{
  *pdata = pdata[8];
  *(_QWORD *)(pdata + 1) = 0i64;
}

void __fastcall Scaleform::GFx::SpriteDef::SetLoadingPlaylistFrame(
        Scaleform::GFx::SpriteDef *this,
        const Scaleform::GFx::TimelineDef::Frame *frame,
        Scaleform::GFx::LogState *plog)
{
  __int64 LoadingFrame; // rax
  Scaleform::Log *pObject; // rax
  unsigned __int64 Size; // rsi

  LoadingFrame = this->LoadingFrame;
  if ( SLODWORD(this->Playlist.Data.Size) > (int)LoadingFrame )
  {
    this->Playlist.Data.Data[LoadingFrame] = *frame;
  }
  else if ( plog && (plog->pLog.pObject || Scaleform::Log::GetGlobalLog()) )
  {
    pObject = plog->pLog.pObject;
    Size = this->Playlist.Data.Size;
    if ( !pObject )
      pObject = Scaleform::Log::GetGlobalLog();
    Scaleform::Log::LogError(
      pObject,
      "Invalid SWF file: failed to load sprite's frame #%d since total frames counter is %d",
      (unsigned int)(this->LoadingFrame + 1),
      (unsigned int)Size);
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::GFx::PlaceObject3Tag::Unpack(
        Scaleform::GFx::PlaceObject3Tag *this,
        Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *data)
{
  unsigned __int8 *pData; // r13
  char v4; // si
  unsigned __int64 v5; // r8
  _BYTE *v7; // r9
  unsigned __int8 v8; // r15
  int v9; // edx
  int v10; // ecx
  unsigned __int64 CurByteIndex; // r8
  unsigned __int8 v12; // al
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  char v17; // al
  __int16 v18; // cx
  __int16 v19; // ax
  Scaleform::Render::FilterSet *v20; // rax
  Scaleform::RefCountVImpl *v21; // rax
  Scaleform::RefCountVImpl *v22; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // dl
  Scaleform::RefCountVImpl *v26; // rcx
  char v27; // r14
  Scaleform::RefCountVImpl *v28; // rbx
  Scaleform::Render::FilterSet *v29; // rax
  Scaleform::RefCountVImpl *v30; // rax
  Scaleform::RefCountVImpl *v31; // rcx
  bool v32; // dl
  char v33; // al
  char v34; // si
  Scaleform::GFx::StreamContext ps; // [rsp+20h] [rbp-20h] BYREF

  pData = this->pData;
  ps.DataSize = -1i64;
  ps.pData = this->pData;
  ps.CurByteIndex = 0i64;
  ps.CurBitIndex = 0;
  v4 = this->pData[0];
  v5 = 1i64;
  ps.CurBitIndex = 0;
  if ( v4 < 0 )
    v5 = 9i64;
  v7 = this->pData;
  ps.CurByteIndex = v5;
  v8 = pData[v5];
  ps.CurByteIndex = v5 + 1;
  ps.CurBitIndex = 0;
  v9 = pData[v5 + 2];
  v10 = pData[v5 + 1];
  CurByteIndex = v5 + 3;
  ps.CurByteIndex = CurByteIndex;
  data->Pos.Depth = v10 | (v9 << 8);
  if ( (v8 & 8) != 0 )
  {
    data->Pos.Flags.Flags |= 0x100u;
    data->Pos.ClassName = (const char *)&this->pData[CurByteIndex];
    do
    {
      ps.CurBitIndex = 0;
      v12 = pData[CurByteIndex++];
      ps.CurByteIndex = CurByteIndex;
    }
    while ( v12 );
  }
  if ( (v4 & 2) != 0 )
  {
    data->Pos.Flags.Flags |= 2u;
    ps.CurBitIndex = 0;
    v13 = pData[CurByteIndex + 1];
    v14 = pData[CurByteIndex];
    CurByteIndex += 2i64;
    ps.CurByteIndex = CurByteIndex;
    data->Pos.CharacterId.Id = v14 | (v13 << 8);
  }
  if ( (v4 & 4) != 0 )
  {
    data->Pos.Flags.Flags |= 4u;
    Scaleform::GFx::StreamContext::ReadMatrix(&ps, &data->Pos.Matrix_1);
    CurByteIndex = ps.CurByteIndex;
    v7 = ps.pData;
  }
  if ( (v4 & 8) != 0 )
  {
    data->Pos.Flags.Flags |= 8u;
    Scaleform::GFx::StreamContext::ReadCxformRgba(&ps, &data->Pos.ColorTransform);
    CurByteIndex = ps.CurByteIndex;
    v7 = ps.pData;
  }
  if ( (v4 & 0x10) != 0 )
  {
    data->Pos.Flags.Flags |= 0x10u;
    if ( ps.CurBitIndex )
      ps.CurByteIndex = ++CurByteIndex;
    ps.CurBitIndex = 0;
    v15 = (unsigned __int8)v7[CurByteIndex + 1];
    v16 = (unsigned __int8)v7[CurByteIndex];
    CurByteIndex += 2i64;
    ps.CurByteIndex = CurByteIndex;
    data->Pos.Ratio = (float)(v16 | (v15 << 8)) / 65535.0;
  }
  if ( (v4 & 0x20) != 0 )
  {
    if ( ps.CurBitIndex )
      ps.CurByteIndex = ++CurByteIndex;
    data->Name = (const char *)&this->pData[CurByteIndex];
    do
    {
      ps.CurBitIndex = 0;
      v17 = v7[CurByteIndex++];
      ps.CurByteIndex = CurByteIndex;
    }
    while ( v17 );
  }
  else
  {
    data->Name = 0i64;
  }
  if ( (v4 & 0x40) != 0 )
  {
    if ( ps.CurBitIndex )
      ps.CurByteIndex = ++CurByteIndex;
    ps.CurBitIndex = 0;
    v18 = (unsigned __int8)v7[CurByteIndex + 1];
    v19 = (unsigned __int8)v7[CurByteIndex];
    CurByteIndex += 2i64;
    ps.CurByteIndex = CurByteIndex;
    data->Pos.ClipDepth = v19 | (v18 << 8);
    data->Pos.Flags.Flags |= 0x40u;
  }
  if ( (v8 & 1) != 0 )
  {
    data->Pos.Flags.Flags |= 0x20u;
    v20 = (Scaleform::Render::FilterSet *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                            Scaleform::Memory::pGlobalHeap,
                                            56i64);
    if ( v20 )
    {
      Scaleform::Render::FilterSet::FilterSet(v20, 0i64);
      v22 = v21;
    }
    else
    {
      v22 = 0i64;
    }
    if ( (unsigned int)Scaleform::GFx::LoadFilters<Scaleform::GFx::StreamContext>(
                         &ps,
                         (Scaleform::Render::FilterSet *)v22) )
    {
      if ( v22 )
        Scaleform::Render::RenderBuffer::AddRef(v22);
      pObject = (Scaleform::RefCountVImpl *)data->Pos.pFilters.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      data->Pos.pFilters.pObject = (Scaleform::Render::FilterSet *)v22;
    }
    if ( v22 )
      Scaleform::RefCountImpl::Release(v22);
    v7 = ps.pData;
    CurByteIndex = ps.CurByteIndex;
  }
  if ( (v8 & 2) != 0 )
  {
    data->Pos.Flags.Flags |= 0x80u;
    if ( ps.CurBitIndex )
      ps.CurByteIndex = ++CurByteIndex;
    ps.CurBitIndex = 0;
    v24 = v7[CurByteIndex++];
    v25 = v24;
    ps.CurByteIndex = CurByteIndex;
    if ( (unsigned __int8)(v24 - 1) > 0xDu )
      v25 = 1;
    data->Pos.BlendMode = v25;
  }
  if ( (v8 & 4) != 0 )
  {
    if ( ps.CurBitIndex )
      ps.CurByteIndex = ++CurByteIndex;
    v26 = (Scaleform::RefCountVImpl *)data->Pos.pFilters.pObject;
    ps.CurBitIndex = 0;
    v27 = v7[CurByteIndex++];
    ps.CurByteIndex = CurByteIndex;
    if ( v26 )
    {
      Scaleform::Render::RenderBuffer::AddRef(v26);
      CurByteIndex = ps.CurByteIndex;
      v7 = ps.pData;
    }
    v28 = (Scaleform::RefCountVImpl *)data->Pos.pFilters.pObject;
    if ( v27 == 1 )
    {
      if ( !v28 )
      {
        v29 = (Scaleform::Render::FilterSet *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, _QWORD, _BYTE *))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                Scaleform::Memory::pGlobalHeap,
                                                56i64,
                                                0i64,
                                                v7);
        if ( v29 )
        {
          Scaleform::Render::FilterSet::FilterSet(v29, 0i64);
          v28 = v30;
        }
        else
        {
          v28 = 0i64;
        }
        if ( v28 )
          Scaleform::Render::RenderBuffer::AddRef(v28);
        v31 = (Scaleform::RefCountVImpl *)data->Pos.pFilters.pObject;
        if ( v31 )
          Scaleform::RefCountImpl::Release(v31);
        data->Pos.pFilters.pObject = (Scaleform::Render::FilterSet *)v28;
      }
      v32 = 1;
    }
    else
    {
      if ( !v28 )
        goto LABEL_67;
      v32 = 0;
    }
    Scaleform::Render::FilterSet::SetCacheAsBitmap((Scaleform::Render::FilterSet *)v28, v32);
    if ( v28 )
      Scaleform::RefCountImpl::Release(v28);
    v7 = ps.pData;
    CurByteIndex = ps.CurByteIndex;
  }
LABEL_67:
  if ( (v8 & 0x20) != 0 )
  {
    if ( ps.CurBitIndex )
      ps.CurByteIndex = ++CurByteIndex;
    ps.CurBitIndex = 0;
    data->Pos.Visible = v7[CurByteIndex];
    data->Pos.Flags.Flags |= 0x200u;
    ps.CurByteIndex = CurByteIndex + 1;
  }
  if ( v4 >= 0 )
    data->pEventHandlers = 0i64;
  else
    this->ProcessEventHandlers(this, data, &ps, pData);
  data->PlaceType = Place_Add;
  v33 = (unsigned __int8)v4 >> 1;
  v34 = v4 & 1;
  if ( (v33 & 1) != 0 )
  {
    if ( v34 )
      data->PlaceType = Place_Replace;
  }
  else
  {
    data->PlaceType = v34 != 0;
  }
}

void __fastcall Scaleform::GFx::PlaceObjectTag::Unpack(
        Scaleform::GFx::PlaceObjectTag *this,
        Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *data)
{
  unsigned int v4; // edx
  int v5; // edx
  Scaleform::GFx::StreamContext v6; // [rsp+20h] [rbp-28h] BYREF

  v6.DataSize = -1i64;
  data->Name = 0i64;
  data->pEventHandlers = 0i64;
  data->PlaceType = Place_Add;
  data->Pos.Flags.Flags |= 2u;
  v6.CurByteIndex = 0i64;
  v6.CurBitIndex = 0;
  v6.pData = this->pData;
  v4 = *(unsigned __int16 *)this->pData;
  v6.CurByteIndex = 2i64;
  data->Pos.CharacterId.Id = v4;
  data->Pos.Flags.Flags |= 1u;
  v6.CurBitIndex = 0;
  v5 = *(unsigned __int16 *)&this->pData[2];
  v6.CurByteIndex = 4i64;
  data->Pos.Depth = v5;
  data->Pos.Flags.Flags |= 4u;
  Scaleform::GFx::StreamContext::ReadMatrix(&v6, &data->Pos.Matrix_1);
  if ( this->HasCxForm )
  {
    data->Pos.Flags.Flags |= 8u;
    Scaleform::GFx::StreamContext::ReadCxformRgb(&v6, &data->Pos.ColorTransform);
  }
}

void __fastcall Scaleform::GFx::TimelineSnapshot::SourceTags::Unpack(
        Scaleform::GFx::TimelineSnapshot::SourceTags *this,
        Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *data)
{
  __int64 v4; // r15
  int *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  Scaleform::GFx::GFxPlaceObjectBase *pDepthTag; // rcx
  Scaleform::GFx::GFxPlaceObjectBase *pCharIdTag; // rcx
  __int64 v10; // rax
  Scaleform::GFx::GFxPlaceObjectBase *pMatrixTag; // rcx
  __int64 v12; // rax
  Scaleform::GFx::GFxPlaceObjectBase *pClassNameTag; // rcx
  __int64 v14; // rax
  Scaleform::GFx::GFxPlaceObjectBase *pCxFormTag; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm1
  Scaleform::GFx::GFxPlaceObjectBase *pBlendModeTag; // rcx
  __int64 v20; // rax
  Scaleform::GFx::GFxPlaceObjectBase *pClipDepthTag; // rcx
  __int64 v22; // rax
  Scaleform::GFx::GFxPlaceObjectBase *pRatioTag; // rcx
  __int64 v24; // rax
  Scaleform::GFx::GFxPlaceObjectBase *pFiltersTag; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  Scaleform::RefCountVImpl *v28; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::GFxPlaceObjectBase *pVisibilityTag; // rcx
  Scaleform::RefCountVImpl **v31; // rbx
  _QWORD v32[5]; // [rsp+20h] [rbp-5D8h] BYREF
  int v33[6]; // [rsp+48h] [rbp-5B0h] BYREF
  _DWORD v34[20]; // [rsp+60h] [rbp-598h]
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v35; // [rsp+B0h] [rbp-548h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v36; // [rsp+140h] [rbp-4B8h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v37; // [rsp+1D0h] [rbp-428h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v38; // [rsp+260h] [rbp-398h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v39; // [rsp+2F0h] [rbp-308h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v40; // [rsp+380h] [rbp-278h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v41; // [rsp+410h] [rbp-1E8h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v42; // [rsp+4A0h] [rbp-158h] BYREF
  Scaleform::GFx::GFxPlaceObjectBase::UnpackedData v43; // [rsp+530h] [rbp-C8h] BYREF
  char v44; // [rsp+600h] [rbp+8h] BYREF

  ((void (__fastcall *)(Scaleform::GFx::GFxPlaceObjectBase *))this->pMainTag->Unpack)(this->pMainTag);
  v4 = 10i64;
  v5 = v33;
  v6 = 10i64;
  v7 = 0i64;
  do
  {
    Scaleform::Render::Cxform::Cxform((Scaleform::Render::Cxform *)(v5 - 10));
    *((_QWORD *)v5 - 1) = 1065353216i64;
    *(_QWORD *)v5 = 0i64;
    v5[2] = 0;
    *(_QWORD *)(v5 + 3) = 1065353216i64;
    v5[5] = 0;
    *((_QWORD *)v5 + 3) = 0i64;
    v5[10] = 0x40000;
    v5[14] = 0;
    *((_QWORD *)v5 + 4) = 0i64;
    *((_WORD *)v5 + 30) = 256;
    *((_QWORD *)v5 + 6) = 0i64;
    v5 += 36;
    --v6;
  }
  while ( v6 );
  pDepthTag = this->pDepthTag;
  if ( pDepthTag != this->pMainTag )
  {
    pDepthTag->Unpack(pDepthTag, (Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *)v32);
    data->Pos.Depth = v34[3];
    data->Pos.Flags.Flags |= 1u;
  }
  pCharIdTag = this->pCharIdTag;
  if ( pCharIdTag != this->pMainTag )
  {
    if ( this->pDepthTag == pCharIdTag )
    {
      v10 = 0i64;
    }
    else
    {
      pCharIdTag->Unpack(pCharIdTag, &v35);
      v10 = 1i64;
    }
    data->Pos.CharacterId.Id = v34[36 * v10 + 4];
    data->Pos.Flags.Flags |= 2u;
  }
  pMatrixTag = this->pMatrixTag;
  if ( pMatrixTag != this->pMainTag )
  {
    if ( this->pDepthTag == pMatrixTag )
    {
      v12 = 0i64;
    }
    else if ( this->pCharIdTag == pMatrixTag )
    {
      v12 = 1i64;
    }
    else
    {
      pMatrixTag->Unpack(pMatrixTag, &v36);
      v12 = 2i64;
    }
    data->Pos.Matrix_1.M[0][0] = *(float *)&v32[18 * v12 + 4];
    data->Pos.Matrix_1.M[0][1] = *((float *)&v32[18 * v12 + 4] + 1);
    LODWORD(data->Pos.Matrix_1.M[0][2]) = v33[36 * v12];
    LODWORD(data->Pos.Matrix_1.M[0][3]) = v33[36 * v12 + 1];
    LODWORD(data->Pos.Matrix_1.M[1][0]) = v33[36 * v12 + 2];
    LODWORD(data->Pos.Matrix_1.M[1][1]) = v33[36 * v12 + 3];
    LODWORD(data->Pos.Matrix_1.M[1][2]) = v33[36 * v12 + 4];
    LODWORD(data->Pos.Matrix_1.M[1][3]) = v33[36 * v12 + 5];
    data->Pos.Flags.Flags |= 4u;
  }
  pClassNameTag = this->pClassNameTag;
  if ( pClassNameTag != this->pMainTag )
  {
    if ( this->pDepthTag == pClassNameTag )
    {
      v14 = 0i64;
    }
    else if ( this->pCharIdTag == pClassNameTag )
    {
      v14 = 1i64;
    }
    else if ( this->pMatrixTag == pClassNameTag )
    {
      v14 = 2i64;
    }
    else
    {
      pClassNameTag->Unpack(pClassNameTag, &v37);
      v14 = 3i64;
    }
    data->Pos.ClassName = *(const char **)&v34[36 * v14 + 6];
    data->Pos.Flags.Flags |= 0x100u;
  }
  pCxFormTag = this->pCxFormTag;
  if ( pCxFormTag != this->pMainTag )
  {
    if ( this->pDepthTag == pCxFormTag )
    {
      v16 = 0i64;
    }
    else if ( this->pCharIdTag == pCxFormTag )
    {
      v16 = 1i64;
    }
    else if ( this->pMatrixTag == pCxFormTag )
    {
      v16 = 2i64;
    }
    else if ( this->pClassNameTag == pCxFormTag )
    {
      v16 = 3i64;
    }
    else
    {
      pCxFormTag->Unpack(pCxFormTag, &v38);
      v16 = 4i64;
    }
    v17 = 18 * v16;
    v18 = *(_OWORD *)&v32[v17 + 2];
    *(_OWORD *)&data->Pos.ColorTransform.M[0][0] = *(_OWORD *)&v32[v17];
    *(_OWORD *)&data->Pos.ColorTransform.M[1][0] = v18;
    data->Pos.Flags.Flags |= 8u;
  }
  pBlendModeTag = this->pBlendModeTag;
  if ( pBlendModeTag != this->pMainTag )
  {
    if ( this->pDepthTag == pBlendModeTag )
    {
      v20 = 0i64;
    }
    else if ( this->pCharIdTag == pBlendModeTag )
    {
      v20 = 1i64;
    }
    else if ( this->pMatrixTag == pBlendModeTag )
    {
      v20 = 2i64;
    }
    else if ( this->pClassNameTag == pBlendModeTag )
    {
      v20 = 3i64;
    }
    else if ( this->pCxFormTag == pBlendModeTag )
    {
      v20 = 4i64;
    }
    else
    {
      pBlendModeTag->Unpack(pBlendModeTag, &v39);
      v20 = 5i64;
    }
    data->Pos.BlendMode = v34[36 * v20 + 9];
    data->Pos.Flags.Flags |= 0x80u;
  }
  pClipDepthTag = this->pClipDepthTag;
  if ( pClipDepthTag != this->pMainTag )
  {
    if ( this->pDepthTag == pClipDepthTag )
    {
      v22 = 0i64;
    }
    else if ( this->pCharIdTag == pClipDepthTag )
    {
      v22 = 1i64;
    }
    else if ( this->pMatrixTag == pClipDepthTag )
    {
      v22 = 2i64;
    }
    else if ( this->pClassNameTag == pClipDepthTag )
    {
      v22 = 3i64;
    }
    else if ( this->pCxFormTag == pClipDepthTag )
    {
      v22 = 4i64;
    }
    else if ( this->pBlendModeTag == pClipDepthTag )
    {
      v22 = 5i64;
    }
    else
    {
      pClipDepthTag->Unpack(pClipDepthTag, &v40);
      v22 = 6i64;
    }
    data->Pos.ClipDepth = v34[36 * v22 + 8];
    data->Pos.Flags.Flags |= 0x40u;
  }
  pRatioTag = this->pRatioTag;
  if ( pRatioTag != this->pMainTag )
  {
    if ( this->pDepthTag == pRatioTag )
    {
      v24 = 0i64;
    }
    else if ( this->pCharIdTag == pRatioTag )
    {
      v24 = 1i64;
    }
    else if ( this->pMatrixTag == pRatioTag )
    {
      v24 = 2i64;
    }
    else if ( this->pClassNameTag == pRatioTag )
    {
      v24 = 3i64;
    }
    else if ( this->pCxFormTag == pRatioTag )
    {
      v24 = 4i64;
    }
    else if ( this->pBlendModeTag == pRatioTag )
    {
      v24 = 5i64;
    }
    else if ( this->pClipDepthTag == pRatioTag )
    {
      v24 = 6i64;
    }
    else
    {
      pRatioTag->Unpack(pRatioTag, &v41);
      v24 = 7i64;
    }
    LODWORD(data->Pos.Ratio) = v34[36 * v24 + 2];
    data->Pos.Flags.Flags |= 0x10u;
  }
  pFiltersTag = this->pFiltersTag;
  if ( pFiltersTag != this->pMainTag )
  {
    if ( this->pDepthTag == pFiltersTag )
    {
      v26 = 0i64;
    }
    else if ( this->pCharIdTag == pFiltersTag )
    {
      v26 = 1i64;
    }
    else if ( this->pMatrixTag == pFiltersTag )
    {
      v26 = 2i64;
    }
    else if ( this->pClassNameTag == pFiltersTag )
    {
      v26 = 3i64;
    }
    else if ( this->pCxFormTag == pFiltersTag )
    {
      v26 = 4i64;
    }
    else if ( this->pBlendModeTag == pFiltersTag )
    {
      v26 = 5i64;
    }
    else if ( this->pClipDepthTag == pFiltersTag )
    {
      v26 = 6i64;
    }
    else if ( this->pRatioTag == pFiltersTag )
    {
      v26 = 7i64;
    }
    else
    {
      pFiltersTag->Unpack(pFiltersTag, &v42);
      v26 = 8i64;
    }
    v27 = 18 * v26;
    v28 = *(Scaleform::RefCountVImpl **)&v34[36 * v26];
    if ( v28 )
      Scaleform::Render::RenderBuffer::AddRef(v28);
    pObject = (Scaleform::RefCountVImpl *)data->Pos.pFilters.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    data->Pos.pFilters.pObject = *(Scaleform::Render::FilterSet **)&v34[2 * v27];
    data->Pos.Flags.Flags |= 0x20u;
  }
  pVisibilityTag = this->pVisibilityTag;
  if ( pVisibilityTag != this->pMainTag )
  {
    if ( this->pDepthTag != pVisibilityTag )
    {
      if ( this->pCharIdTag == pVisibilityTag )
      {
        v7 = 1i64;
      }
      else if ( this->pMatrixTag == pVisibilityTag )
      {
        v7 = 2i64;
      }
      else if ( this->pClassNameTag == pVisibilityTag )
      {
        v7 = 3i64;
      }
      else if ( this->pCxFormTag == pVisibilityTag )
      {
        v7 = 4i64;
      }
      else if ( this->pBlendModeTag == pVisibilityTag )
      {
        v7 = 5i64;
      }
      else if ( this->pClipDepthTag == pVisibilityTag )
      {
        v7 = 6i64;
      }
      else if ( this->pRatioTag == pVisibilityTag )
      {
        v7 = 7i64;
      }
      else if ( this->pFiltersTag == pVisibilityTag )
      {
        v7 = 8i64;
      }
      else
      {
        pVisibilityTag->Unpack(pVisibilityTag, &v43);
        v7 = 9i64;
      }
    }
    data->Pos.Visible = BYTE1(v34[36 * v7 + 9]);
    data->Pos.Flags.Flags |= 0x200u;
  }
  v31 = (Scaleform::RefCountVImpl **)&v44;
  do
  {
    v31 -= 18;
    --v4;
    if ( *v31 )
      Scaleform::RefCountImpl::Release(*v31);
  }
  while ( v4 );
}

void __fastcall Scaleform::GFx::PlaceObject2Tag::UnpackBase(
        Scaleform::GFx::PlaceObject2Tag *this,
        Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *data,
        unsigned __int8 version)
{
  unsigned __int8 *pData; // r14
  char v6; // di
  unsigned __int64 v7; // r8
  _BYTE *v9; // r10
  unsigned int CurBitIndex; // er9
  int v11; // edx
  int v12; // ecx
  unsigned __int64 CurByteIndex; // r8
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  char v18; // al
  char v19; // al
  char v20; // di
  Scaleform::GFx::StreamContext v21; // [rsp+30h] [rbp-20h] BYREF

  pData = this->pData;
  v21.DataSize = -1i64;
  v21.pData = this->pData;
  v21.CurByteIndex = 0i64;
  v21.CurBitIndex = 0;
  v6 = this->pData[0];
  v21.CurBitIndex = 0;
  v7 = 1i64;
  if ( v6 < 0 )
    v7 = 9i64;
  v21.CurByteIndex = v7;
  v9 = this->pData;
  CurBitIndex = 0;
  v11 = pData[v7 + 1];
  v12 = pData[v7];
  CurByteIndex = v7 + 2;
  v21.CurByteIndex = CurByteIndex;
  data->Pos.Depth = v12 | (v11 << 8);
  if ( (v6 & 2) != 0 )
  {
    data->Pos.Flags.Flags |= 2u;
    v21.CurBitIndex = 0;
    v14 = pData[CurByteIndex + 1];
    v15 = pData[CurByteIndex];
    CurByteIndex += 2i64;
    v21.CurByteIndex = CurByteIndex;
    data->Pos.CharacterId.Id = v15 | (v14 << 8);
  }
  if ( (v6 & 4) != 0 )
  {
    data->Pos.Flags.Flags |= 4u;
    Scaleform::GFx::StreamContext::ReadMatrix(&v21, &data->Pos.Matrix_1);
    CurBitIndex = v21.CurBitIndex;
    CurByteIndex = v21.CurByteIndex;
    v9 = v21.pData;
  }
  if ( (v6 & 8) != 0 )
  {
    data->Pos.Flags.Flags |= 8u;
    Scaleform::GFx::StreamContext::ReadCxformRgba(&v21, &data->Pos.ColorTransform);
    CurBitIndex = v21.CurBitIndex;
    CurByteIndex = v21.CurByteIndex;
    v9 = v21.pData;
  }
  if ( (v6 & 0x10) != 0 )
  {
    data->Pos.Flags.Flags |= 0x10u;
    if ( CurBitIndex )
      v21.CurByteIndex = ++CurByteIndex;
    v21.CurBitIndex = 0;
    CurBitIndex = 0;
    v16 = (unsigned __int8)v9[CurByteIndex + 1];
    v17 = (unsigned __int8)v9[CurByteIndex];
    CurByteIndex += 2i64;
    v21.CurByteIndex = CurByteIndex;
    data->Pos.Ratio = (float)(v17 | (v16 << 8)) / 65535.0;
  }
  if ( (v6 & 0x20) != 0 )
  {
    if ( CurBitIndex )
      v21.CurByteIndex = ++CurByteIndex;
    data->Name = (const char *)&this->pData[CurByteIndex];
    do
    {
      v21.CurBitIndex = 0;
      CurBitIndex = 0;
      v18 = v9[CurByteIndex++];
      v21.CurByteIndex = CurByteIndex;
    }
    while ( v18 );
  }
  else
  {
    data->Name = 0i64;
  }
  if ( (v6 & 0x40) != 0 )
  {
    data->Pos.Flags.Flags |= 0x40u;
    if ( CurBitIndex )
      v21.CurByteIndex = ++CurByteIndex;
    v21.CurBitIndex = 0;
    data->Pos.ClipDepth = *(_WORD *)&v9[CurByteIndex];
    v21.CurByteIndex = CurByteIndex + 2;
  }
  if ( v6 >= 0 )
    data->pEventHandlers = 0i64;
  else
    this->ProcessEventHandlers(this, data, &v21, pData, version);
  data->PlaceType = Place_Add;
  v19 = (unsigned __int8)v6 >> 1;
  v20 = v6 & 1;
  if ( (v19 & 1) != 0 )
  {
    if ( v20 )
      data->PlaceType = Place_Replace;
  }
  else
  {
    data->PlaceType = v20 != 0;
  }
}

struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *__fastcall Scaleform::GFx::PlaceObject3Tag::UnpackEventHandlers(
        Scaleform::GFx::PlaceObject3Tag *this)
{
  struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *result; // rax
  Scaleform::GFx::PlaceObject3Tag_vtbl *v3; // rax
  __int64 v4; // rbx
  Scaleform::Render::Cxform v5; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v6; // [rsp+40h] [rbp-88h]
  __int128 v7; // [rsp+50h] [rbp-78h]
  Scaleform::RefCountVImpl *v8; // [rsp+60h] [rbp-68h]
  int v9; // [rsp+68h] [rbp-60h]
  int v10; // [rsp+6Ch] [rbp-5Ch]
  int v11; // [rsp+70h] [rbp-58h]
  __int64 v12; // [rsp+78h] [rbp-50h]
  int v13; // [rsp+80h] [rbp-48h]
  __int16 v14; // [rsp+84h] [rbp-44h]
  __int64 v15; // [rsp+90h] [rbp-38h]

  if ( (this->pData[0] & 0x80u) == 0 )
    return 0i64;
  result = *(struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> **)&this->pData[1];
  if ( !result )
  {
    Scaleform::Render::Cxform::Cxform(&v5);
    v3 = this->__vftable;
    v6 = _xmm;
    v9 = 0;
    v7 = _xmm;
    v8 = 0i64;
    v11 = 0x40000;
    v13 = 0;
    v10 = 0;
    v14 = 256;
    v12 = 0i64;
    v3->Unpack(this, (Scaleform::GFx::GFxPlaceObjectBase::UnpackedData *)&v5);
    v4 = v15;
    if ( v8 )
      Scaleform::RefCountImpl::Release(v8);
    return (struct Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *)v4;
  }
  return result;
}

Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *__fastcall Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2>>::allocate(
        Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> > *this)
{
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *result; // rax
  __int64 NumElementsInPage; // rdx
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *v4; // r8
  void *pHeapOrPtr; // rcx
  Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *LastPage; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *)this->FirstEmptySlot;
  if ( result )
  {
    this->FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType *)result->Data[0].pPrev;
  }
  else
  {
    NumElementsInPage = this->NumElementsInPage;
    if ( (unsigned int)NumElementsInPage >= 0x32 )
    {
      pHeapOrPtr = this->pHeapOrPtr;
      v7 = 2;
      result = (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *)(*(__int64 (__fastcall **)(void *, __int64, int *))(*(_QWORD *)pHeapOrPtr + 80i64))(pHeapOrPtr, 6008i64, &v7);
      result->pNext = 0i64;
      LastPage = this->LastPage;
      if ( LastPage )
        LastPage->pNext = result;
      else
        this->FirstPage = result;
      this->LastPage = result;
      this->NumElementsInPage = 1;
    }
    else
    {
      v4 = this->LastPage;
      if ( v4 )
      {
        this->NumElementsInPage = NumElementsInPage + 1;
        return (Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType *)((char *)v4 + 120 * NumElementsInPage);
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

