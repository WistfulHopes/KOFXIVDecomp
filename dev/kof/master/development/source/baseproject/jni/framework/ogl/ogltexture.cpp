#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"

void _glCompressedTexImage2D(unsigned long target, long level, unsigned long internalformat, long width, long height, long border, long imageSize, const void * data); // 0x140090B60
OGLTexture::OGLTexture(); // 0x140090FF0
OGLTexture::~OGLTexture(); // 0x140091080
void OGLTexture::finalize(); // 0x1400910B0
void OGLTexture::loadIndexObmData(unsigned char * pLoadBuffer, unsigned char * pPalette, long texParam); // 0x1400911E0
void OGLTexture::loadDirectObmData(unsigned char * pLoadBuffer, long texParam); // 0x140091470
void OGLTexture::loadCompressedObmData(unsigned char * pLoadBuffer, long size, long texParam); // 0x140091950
long OGLTexture::loadObmData(unsigned char * pLoadBuffer, long size, unsigned char * pPalette, long texParam); // 0x140091CA0
struct _TEXTURE_FORMAT_HEADER
{
	char cID[2]; // 0x0
	char type; // 0x2
	char mipMapLevel; // 0x3
	short format; // 0x4
	short width; // 0x6
	short height; // 0x8
	short reserve2; // 0xA
	long size; // 0xC
};
long OGLTexture::loadOstData(unsigned char * pLoadBuffer, long size, unsigned char * pPalette, long texParam); // 0x140091D70
long OGLTexture::loadBmpData(unsigned char * pLoadBuffer, long keyIndex, unsigned char * pPalette, long texParam); // 0x140091F20
long OGLTexture::loadPngData(unsigned char * pLoadBuffer, long keyIndex, unsigned char * pPalette, long texParam); // 0x1400921F0
long OGLTexture::loadDDSData(unsigned char * pLoadBuffer, long keyIndex, unsigned char * pPalette, long texParam); // 0x140092480
struct OGLTexture::loadDDSData::__l2::DDS_PIXELFORMAT
{
	unsigned long dwSize; // 0x0
	unsigned long dwFlags; // 0x4
	unsigned long dwFourCC; // 0x8
	unsigned long dwRGBBitCount; // 0xC
	unsigned long dwRBitMask; // 0x10
	unsigned long dwGBitMask; // 0x14
	unsigned long dwBBitMask; // 0x18
	unsigned long dwABitMask; // 0x1C
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408895DF
struct OGLTexture::loadDDSData::__l2::DDS_HEADER
{
	unsigned long dwSize; // 0x0
	unsigned long dwFlags; // 0x4
	unsigned long dwHeight; // 0x8
	unsigned long dwWidth; // 0xC
	unsigned long dwPitchOrLinearSize; // 0x10
	unsigned long dwDepth; // 0x14
	unsigned long dwMipMapCount; // 0x18
	unsigned long dwReserved1[11]; // 0x1C
	OGLTexture::loadDDSData::__l2::DDS_PIXELFORMAT ddspf; // 0x48
	unsigned long dwCaps; // 0x68
	unsigned long dwCaps2; // 0x6C
	unsigned long dwCaps3; // 0x70
	unsigned long dwCaps4; // 0x74
	unsigned long dwReserved2; // 0x78
};
enum OGLTexture::loadDDSData::__l2::DXGI_FORMAT
{
	DXGI_FORMAT_UNKNOWN = 0,
	DXGI_FORMAT_R32G32B32A32_TYPELESS = 1,
	DXGI_FORMAT_R32G32B32A32_FLOAT = 2,
	DXGI_FORMAT_R32G32B32A32_UINT = 3,
	DXGI_FORMAT_R32G32B32A32_SINT = 4,
	DXGI_FORMAT_R32G32B32_TYPELESS = 5,
	DXGI_FORMAT_R32G32B32_FLOAT = 6,
	DXGI_FORMAT_R32G32B32_UINT = 7,
	DXGI_FORMAT_R32G32B32_SINT = 8,
	DXGI_FORMAT_R16G16B16A16_TYPELESS = 9,
	DXGI_FORMAT_R16G16B16A16_FLOAT = 10,
	DXGI_FORMAT_R16G16B16A16_UNORM = 11,
	DXGI_FORMAT_R16G16B16A16_UINT = 12,
	DXGI_FORMAT_R16G16B16A16_SNORM = 13,
	DXGI_FORMAT_R16G16B16A16_SINT = 14,
	DXGI_FORMAT_R32G32_TYPELESS = 15,
	DXGI_FORMAT_R32G32_FLOAT = 16,
	DXGI_FORMAT_R32G32_UINT = 17,
	DXGI_FORMAT_R32G32_SINT = 18,
	DXGI_FORMAT_R32G8X24_TYPELESS = 19,
	DXGI_FORMAT_D32_FLOAT_S8X24_UINT = 20,
	DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS = 21,
	DXGI_FORMAT_X32_TYPELESS_G8X24_UINT = 22,
	DXGI_FORMAT_R10G10B10A2_TYPELESS = 23,
	DXGI_FORMAT_R10G10B10A2_UNORM = 24,
	DXGI_FORMAT_R10G10B10A2_UINT = 25,
	DXGI_FORMAT_R11G11B10_FLOAT = 26,
	DXGI_FORMAT_R8G8B8A8_TYPELESS = 27,
	DXGI_FORMAT_R8G8B8A8_UNORM = 28,
	DXGI_FORMAT_R8G8B8A8_UNORM_SRGB = 29,
	DXGI_FORMAT_R8G8B8A8_UINT = 30,
	DXGI_FORMAT_R8G8B8A8_SNORM = 31,
	DXGI_FORMAT_R8G8B8A8_SINT = 32,
	DXGI_FORMAT_R16G16_TYPELESS = 33,
	DXGI_FORMAT_R16G16_FLOAT = 34,
	DXGI_FORMAT_R16G16_UNORM = 35,
	DXGI_FORMAT_R16G16_UINT = 36,
	DXGI_FORMAT_R16G16_SNORM = 37,
	DXGI_FORMAT_R16G16_SINT = 38,
	DXGI_FORMAT_R32_TYPELESS = 39,
	DXGI_FORMAT_D32_FLOAT = 40,
	DXGI_FORMAT_R32_FLOAT = 41,
	DXGI_FORMAT_R32_UINT = 42,
	DXGI_FORMAT_R32_SINT = 43,
	DXGI_FORMAT_R24G8_TYPELESS = 44,
	DXGI_FORMAT_D24_UNORM_S8_UINT = 45,
	DXGI_FORMAT_R24_UNORM_X8_TYPELESS = 46,
	DXGI_FORMAT_X24_TYPELESS_G8_UINT = 47,
	DXGI_FORMAT_R8G8_TYPELESS = 48,
	DXGI_FORMAT_R8G8_UNORM = 49,
	DXGI_FORMAT_R8G8_UINT = 50,
	DXGI_FORMAT_R8G8_SNORM = 51,
	DXGI_FORMAT_R8G8_SINT = 52,
	DXGI_FORMAT_R16_TYPELESS = 53,
	DXGI_FORMAT_R16_FLOAT = 54,
	DXGI_FORMAT_D16_UNORM = 55,
	DXGI_FORMAT_R16_UNORM = 56,
	DXGI_FORMAT_R16_UINT = 57,
	DXGI_FORMAT_R16_SNORM = 58,
	DXGI_FORMAT_R16_SINT = 59,
	DXGI_FORMAT_R8_TYPELESS = 60,
	DXGI_FORMAT_R8_UNORM = 61,
	DXGI_FORMAT_R8_UINT = 62,
	DXGI_FORMAT_R8_SNORM = 63,
	DXGI_FORMAT_R8_SINT = 64,
	DXGI_FORMAT_A8_UNORM = 65,
	DXGI_FORMAT_R1_UNORM = 66,
	DXGI_FORMAT_R9G9B9E5_SHAREDEXP = 67,
	DXGI_FORMAT_R8G8_B8G8_UNORM = 68,
	DXGI_FORMAT_G8R8_G8B8_UNORM = 69,
	DXGI_FORMAT_BC1_TYPELESS = 70,
	DXGI_FORMAT_BC1_UNORM = 71,
	DXGI_FORMAT_BC1_UNORM_SRGB = 72,
	DXGI_FORMAT_BC2_TYPELESS = 73,
	DXGI_FORMAT_BC2_UNORM = 74,
	DXGI_FORMAT_BC2_UNORM_SRGB = 75,
	DXGI_FORMAT_BC3_TYPELESS = 76,
	DXGI_FORMAT_BC3_UNORM = 77,
	DXGI_FORMAT_BC3_UNORM_SRGB = 78,
	DXGI_FORMAT_BC4_TYPELESS = 79,
	DXGI_FORMAT_BC4_UNORM = 80,
	DXGI_FORMAT_BC4_SNORM = 81,
	DXGI_FORMAT_BC5_TYPELESS = 82,
	DXGI_FORMAT_BC5_UNORM = 83,
	DXGI_FORMAT_BC5_SNORM = 84,
	DXGI_FORMAT_B5G6R5_UNORM = 85,
	DXGI_FORMAT_B5G5R5A1_UNORM = 86,
	DXGI_FORMAT_B8G8R8A8_UNORM = 87,
	DXGI_FORMAT_B8G8R8X8_UNORM = 88,
	DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM = 89,
	DXGI_FORMAT_B8G8R8A8_TYPELESS = 90,
	DXGI_FORMAT_B8G8R8A8_UNORM_SRGB = 91,
	DXGI_FORMAT_B8G8R8X8_TYPELESS = 92,
	DXGI_FORMAT_B8G8R8X8_UNORM_SRGB = 93,
	DXGI_FORMAT_BC6H_TYPELESS = 94,
	DXGI_FORMAT_BC6H_UF16 = 95,
	DXGI_FORMAT_BC6H_SF16 = 96,
	DXGI_FORMAT_BC7_TYPELESS = 97,
	DXGI_FORMAT_BC7_UNORM = 98,
	DXGI_FORMAT_BC7_UNORM_SRGB = 99,
	DXGI_FORMAT_AYUV = 100,
	DXGI_FORMAT_Y410 = 101,
	DXGI_FORMAT_Y416 = 102,
	DXGI_FORMAT_NV12 = 103,
	DXGI_FORMAT_P010 = 104,
	DXGI_FORMAT_P016 = 105,
	DXGI_FORMAT_420_OPAQUE = 106,
	DXGI_FORMAT_YUY2 = 107,
	DXGI_FORMAT_Y210 = 108,
	DXGI_FORMAT_Y216 = 109,
	DXGI_FORMAT_NV11 = 110,
	DXGI_FORMAT_AI44 = 111,
	DXGI_FORMAT_IA44 = 112,
	DXGI_FORMAT_P8 = 113,
	DXGI_FORMAT_A8P8 = 114,
	DXGI_FORMAT_B4G4R4A4_UNORM = 115,
	DXGI_FORMAT_P208 = 130,
	DXGI_FORMAT_V208 = 131,
	DXGI_FORMAT_V408 = 132,
	DXGI_FORMAT_FORCE_UINT = 255,
};
struct OGLTexture::loadDDSData::__l2::DDS_HEADER_DXT10
{
	OGLTexture::loadDDSData::__l2::DXGI_FORMAT dxgiFormat; // 0x0
	OGLTexture::loadDDSData::__l2::D3D10_RESOURCE_DIMENSION resourceDimension; // 0x4
	unsigned long miscFlag; // 0x8
	unsigned long arraySize; // 0xC
	unsigned long miscFlags2; // 0x10
};
enum <unnamed-enum-kPVRTextureFlagTypePVRTC_2>
{
	kPVRTextureFlagTypePVRTC_2 = 24,
	kPVRTextureFlagTypePVRTC_4 = 25,
};
struct _PVRTexHeader
{
	unsigned long headerLength; // 0x0
	unsigned long height; // 0x4
	unsigned long width; // 0x8
	unsigned long numMipmaps; // 0xC
	unsigned long flags; // 0x10
	unsigned long dataLength; // 0x14
	unsigned long bpp; // 0x18
	unsigned long bitmaskRed; // 0x1C
	unsigned long bitmaskGreen; // 0x20
	unsigned long bitmaskBlue; // 0x24
	unsigned long bitmaskAlpha; // 0x28
	unsigned long pvrTag; // 0x2C
	unsigned long numSurfs; // 0x30
};
long OGLTexture::loadPvrData(unsigned char * pLoadBuffer, long size, long texParam); // 0x140092970
OGLTexture * OGLTexture::createTextureBuf(unsigned char * pLoadBuffer, long size, long texParam, unsigned char * pPalette, long keyIndex); // 0x140092A80
long OGLTexture::loadTextureBuf(unsigned char * pLoadBuffer, long size, long texParam, unsigned char * pPalette, long keyIndex); // 0x140092B50
long OGLTexture::loadTextureBuf2(unsigned char * pBuf, long w, long h, long texFormat, long texParam); // 0x140092C70
void OGLTexture::release(); // 0x140092ED0
void OGLTexture::capture(long x, long y, long w, long h, long texParam); // 0x140092FF0
void OGLTexture::setParameter(long TexParam, long bindTarget); // 0x1400931C0
long OGLTexture::getID(); // 0x140093400
void OGLTexture::setFileInfo(const char * pFileName, unsigned char bFilter, unsigned char bTransParent, long iOption); // 0x140093440//decompilation failure at 1408895DF!
void __fastcall OGLTexture::OGLTexture(OGLTexture *this)
{
  this->m_Transparent = 1;
  this->__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  *(_QWORD *)&this->m_Width = 0i64;
  *(_QWORD *)&this->m_TexID = 0i64;
  this->m_TexFormat = 0;
  this->m_FileInfo.option = 0;
  this->m_FileInfo.fileName = 0i64;
  *(_WORD *)&this->m_bResume = 0;
  *(_QWORD *)&this->m_FrameBufferID = 0i64;
  this->m_sync = 0i64;
  *(_WORD *)&this->m_FileInfo.transparent = 1;
}

void __fastcall OGLTexture::~OGLTexture(OGLTexture *this)
{
  this->__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  OGLTexture::finalize(this);
}

void __fastcall _glCompressedTexImage2D(
        unsigned int target,
        int level,
        unsigned int internalformat,
        int width,
        int height,
        __int64 border)
{
  __int64 v6; // r13
  unsigned int v8; // er12
  int v9; // esi
  int v10; // ebx
  int v11; // er8
  _BYTE *pixels; // r15
  _BYTE *v13; // r9
  int v14; // eax
  _BYTE *v15; // rcx
  signed int v16; // er11
  int v17; // er12
  int v18; // esi
  _BYTE *v19; // r14
  int v20; // er8
  _BYTE *v21; // r10
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  int v24; // er11
  __int64 v25; // rsi
  signed int v26; // er10
  int v27; // edx
  char *v28; // r8
  int v29; // eax
  GLenum format; // [rsp+50h] [rbp-68h]
  int v31; // [rsp+54h] [rbp-64h]
  unsigned int v32; // [rsp+58h] [rbp-60h]
  _BYTE *v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+68h] [rbp-50h]
  __int64 v35; // [rsp+70h] [rbp-48h]
  GLenum type; // [rsp+D0h] [rbp+18h]

  if ( (int)internalformat > 0 )
  {
    v6 = (unsigned int)width;
    v8 = target;
    if ( width > 0
      && (int)internalformat <= 2048
      && width <= 2048
      && ((width - 1) & width) == 0
      && ((internalformat - 1) & internalformat) == 0
      && (target & 0x80000000) == 0 )
    {
      switch ( level )
      {
        case 35728:
          v9 = 4;
          format = 6407;
          type = 5121;
          v10 = 3;
          goto LABEL_22;
        case 35729:
          v10 = 4;
          format = 6408;
          v9 = 4;
          v11 = 5121;
          goto LABEL_21;
        case 35730:
          v9 = 4;
          type = 33635;
          format = 6407;
          v10 = 2;
          goto LABEL_22;
        case 35731:
          v9 = 4;
          type = 32819;
          format = 6408;
          v10 = 2;
          goto LABEL_22;
        case 35732:
          v9 = 4;
          type = 32820;
          format = 6408;
          v10 = 2;
          goto LABEL_22;
        case 35733:
          v10 = 3;
          format = 6407;
          v11 = 5121;
          goto LABEL_20;
        case 35734:
          v10 = 4;
          format = 6408;
          v11 = 5121;
          goto LABEL_20;
        case 35735:
          format = 6407;
          v11 = 33635;
          goto LABEL_19;
        case 35736:
          format = 6408;
          v11 = 32819;
          goto LABEL_19;
        case 35737:
          format = 6408;
          v11 = 32820;
LABEL_19:
          v10 = 2;
LABEL_20:
          v9 = 8;
LABEL_21:
          type = v11;
LABEL_22:
          if ( (v10 << v9) + width * ((int)(internalformat * v9 + 7) / 8) != height )
            return;
          if ( border )
          {
            v32 = internalformat * v10;
            pixels = operator new[]((int)(width * internalformat * v10));
            if ( !pixels )
              return;
            v13 = (_BYTE *)(border + (v10 << v9));
            if ( v9 == 4 )
            {
              if ( (int)v6 > 0 )
              {
                v35 = (int)(internalformat * v10);
                v14 = v10;
                v15 = pixels;
                v31 = v10;
                v33 = pixels;
                v34 = v6;
                do
                {
                  v16 = 0;
                  v17 = 2 * v10;
                  v18 = v14;
                  v19 = v15;
                  do
                  {
                    v20 = 0;
                    v21 = v19;
                    do
                    {
                      *v21 = *(_BYTE *)(v20 + v10 * ((unsigned __int8)*v13 >> 4) + border);
                      if ( v16 + 1 < (int)internalformat )
                        pixels[v18 + v20] = *(_BYTE *)(v20 + v10 * (*v13 & 0xF) + border);
                      ++v20;
                      ++v21;
                    }
                    while ( v20 < v10 );
                    v16 += 2;
                    v19 += v17;
                    v18 += v17;
                    ++v13;
                  }
                  while ( v16 < (int)internalformat );
                  v22 = v34;
                  v14 = v32 + v31;
                  v15 = &v33[v35];
                  v31 += v32;
                  --v34;
                  v33 += v35;
                }
                while ( v22 != 1 );
                LODWORD(v6) = width;
              }
            }
            else if ( (int)v6 > 0 )
            {
              v24 = 0;
              v25 = v6;
              do
              {
                v26 = 0;
                do
                {
                  v27 = 0;
                  v28 = &pixels[v10 * (v24 + v26)];
                  do
                  {
                    ++v28;
                    v29 = v27 + v10 * (unsigned __int8)*v13;
                    ++v27;
                    *(v28 - 1) = *(_BYTE *)(v29 + border);
                  }
                  while ( v27 < v10 );
                  ++v26;
                  ++v13;
                }
                while ( v26 < (int)internalformat );
                v24 += internalformat;
                --v25;
              }
              while ( v25 );
            }
            v8 = target;
          }
          else
          {
            pixels = 0i64;
          }
          glTexParameteri(0xDE1u, 0x813Cu, 0);
          glTexParameteri(0xDE1u, 0x813Du, 0);
          while ( Framework::GLManager::glm->m_bOpenGLBlocked )
            ;
          glTexImage2D(0xDE1u, v8, format, internalformat, v6, 0, format, type, pixels);
          if ( pixels )
            operator delete(pixels, v23);
          break;
        default:
          return;
      }
    }
  }
}

void __fastcall OGLTexture::capture(OGLTexture *this, int x, int y, int w, int h)
{
  Framework::GLManager *v7; // rbp
  _DWORD *v8; // r14
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  int v10; // eax
  int i; // ecx
  unsigned int m_TexID; // edx
  Framework::GLManager *v13; // rcx
  Framework::GLManager *v14; // rcx
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // er8
  int v18; // er9
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+38h] [rbp-30h]
  AgPointer<AgDisplay> result; // [rsp+48h] [rbp-20h] BYREF

  if ( w && h )
  {
    v7 = Framework::GLManager::glm;
    if ( v7->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
    {
      v8 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 12i64);
      if ( !*v8 )
      {
        DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                           (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                           &result,
                           0);
        AgDisplay::lock(DisplayByIndex->m_ptr);
        AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
        *v8 = 1;
      }
    }
    v10 = 32;
    for ( i = 32; i < w; i *= 2 )
      ;
    if ( h > 32 )
    {
      do
        v10 *= 2;
      while ( v10 < h );
    }
    this->m_Width = i;
    this->m_Height = v10;
    dword_140A96050 = 1;
    if ( m_ActiveTexture )
    {
      m_ActiveTexture = 0;
      _glewActiveTexture(0x84C0u);
    }
    glReadBuffer(0x8CE0u);
    m_TexID = this->m_TexID;
    if ( m_TexID )
    {
      if ( m_TexID == ::m_TexID[m_ActiveTexture] )
      {
LABEL_22:
        OGLTexture::setParameter(this, 1290, 3553);
        glCopyTexImage2DAG(v16, v15, v17, v18, v19, this->m_Width, this->m_Height, v20);
        Framework::GLManager::GraphicsUnlock(v7, 0);
        return;
      }
      ::m_TexID[m_ActiveTexture] = m_TexID;
      v14 = Framework::GLManager::glm;
      Framework::GLManager::glm->m_textureID = m_TexID;
      while ( v14->m_bOpenGLBlocked )
        ;
    }
    else
    {
      glGenTexturesAG(1, &this->m_TexID);
      m_TexID = this->m_TexID;
      if ( m_TexID == ::m_TexID[m_ActiveTexture] && m_TexID )
        goto LABEL_22;
      ::m_TexID[m_ActiveTexture] = m_TexID;
      v13 = Framework::GLManager::glm;
      Framework::GLManager::glm->m_textureID = m_TexID;
      while ( v13->m_bOpenGLBlocked )
        ;
    }
    glBindTexture(0xDE1u, m_TexID);
    goto LABEL_22;
  }
}

OGLTexture *__fastcall OGLTexture::createTextureBuf(
        unsigned __int8 *pLoadBuffer,
        int size,
        int texParam,
        unsigned __int8 *pPalette,
        int keyIndex)
{
  char *v9; // r14

  v9 = (char *)operator new(0x50ui64);
  *(_QWORD *)v9 = &OGLTexture::`vftable';
  *((_QWORD *)v9 + 1) = 0i64;
  *((_QWORD *)v9 + 2) = 0i64;
  *((_DWORD *)v9 + 7) = 0;
  *((_DWORD *)v9 + 13) = 0;
  *((_QWORD *)v9 + 5) = 0i64;
  *((_WORD *)v9 + 28) = 0;
  *(_QWORD *)(v9 + 60) = 0i64;
  *((_QWORD *)v9 + 9) = 0i64;
  v9[24] = 1;
  *((_WORD *)v9 + 24) = 1;
  if ( OGLTexture::loadTextureBuf((OGLTexture *)v9, pLoadBuffer, size, texParam, pPalette, keyIndex) > 0 )
    return (OGLTexture *)v9;
  (**(void (__fastcall ***)(void *, __int64))v9)(v9, 1i64);
  return 0i64;
}

void __fastcall OGLTexture::finalize(OGLTexture *this, unsigned __int64 a2, bool a3)
{
  char *fileName; // rcx
  Framework::GLManager *v5; // rbp
  unsigned int *v6; // rdi
  Framework::GLManager *v7; // rcx
  unsigned int m_TexID; // ecx
  __int64 v9; // rax
  unsigned __int8 m_FrameBufferID; // dl
  Framework::GLManager *v11; // r8
  struct __GLsync *m_sync; // rcx
  bool v13; // r8

  fileName = (char *)this->m_FileInfo.fileName;
  if ( fileName )
  {
    operator delete(fileName, a2);
    this->m_FileInfo.fileName = 0i64;
  }
  *(_QWORD *)&this->m_Width = 0i64;
  this->m_TexParam = 0;
  this->m_TexFormat = 0;
  if ( this->m_TexID )
  {
    v5 = Framework::GLManager::glm;
    Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, a3);
    v6 = ::m_TexID;
    v7 = Framework::GLManager::glm;
    ::m_TexID[m_ActiveTexture] = 0;
    v7->m_textureID = 0;
    while ( v7->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, 0);
    m_TexID = this->m_TexID;
    v9 = 32i64;
    do
    {
      if ( m_TexID == *v6 )
        *v6 = 0;
      ++v6;
      --v9;
    }
    while ( v9 );
    glDeleteTextures(1, &this->m_TexID);
    this->m_TexID = 0;
    if ( this->m_FrameBufferID )
    {
      m_FrameBufferID = this->m_FrameBufferID;
      v11 = Framework::GLManager::glm;
      if ( m_FrameBufferID )
      {
        Framework::GLManager::glm->m_renderbuffer.m_freeIDs[Framework::GLManager::glm->m_renderbuffer.m_firstOccupiedIndex] = m_FrameBufferID;
        ++v11->m_renderbuffer.m_firstOccupiedIndex;
      }
    }
    this->m_FrameBufferID = 0;
    if ( this->m_TexID2 )
      glsDeleteTextures(1, &this->m_TexID2);
    m_sync = this->m_sync;
    this->m_TexID2 = 0;
    _glewDeleteSync(m_sync);
    this->m_sync = 0i64;
    Framework::GLManager::LoadingUnlock(v5, 0, v13);
  }
}

__int64 __fastcall OGLTexture::getID(OGLTexture *this)
{
  struct __GLsync *m_sync; // rcx

  m_sync = this->m_sync;
  if ( m_sync )
  {
    _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
    _glewDeleteSync(this->m_sync);
    this->m_sync = 0i64;
  }
  return this->m_TexID;
}

__int64 __fastcall OGLTexture::loadBmpData(
        OGLTexture *this,
        unsigned __int8 *pLoadBuffer,
        int keyIndex,
        unsigned __int8 *pPalette,
        int texParam)
{
  int v5; // er14
  unsigned __int8 *v6; // rbx
  OGLTexture *v7; // rbp
  int v9; // ecx
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // r13
  int v12; // er15
  unsigned int v13; // er15
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // er12
  char *v18; // rax
  _BYTE *v19; // r8
  _WORD *border; // rsi
  __int64 i; // rdx
  __int16 v22; // cx
  __int16 v23; // ax
  int v24; // edi
  int v25; // esi
  size_t v26; // r13
  int v27; // er15
  Framework::GLManager *v28; // rdi
  __int16 v29; // bx
  int v30; // edx
  unsigned __int64 v31; // rdx
  bool v32; // r8
  unsigned int imageSize; // [rsp+30h] [rbp-58h]
  char *data; // [rsp+38h] [rbp-50h]
  unsigned __int8 *v35; // [rsp+40h] [rbp-48h]
  _WORD *v36; // [rsp+48h] [rbp-40h]

  v5 = 0;
  v6 = pLoadBuffer;
  v7 = this;
  if ( !pLoadBuffer )
    return 4294967292i64;
  if ( this->m_TexID )
    return 4294967294i64;
  if ( *(_WORD *)pLoadBuffer != *(_WORD *)"BM" )
    return 4294967293i64;
  v9 = *((unsigned __int16 *)pLoadBuffer + 14);
  v10 = &pLoadBuffer[*(unsigned int *)(pLoadBuffer + 10)];
  v11 = pLoadBuffer + 54;
  v12 = v9 * *(_DWORD *)(pLoadBuffer + 18);
  v7->m_Height = 1;
  v7->m_Width = 1;
  v35 = v10;
  v13 = (((v12 >> 2) + 7) >> 1) & 0xFFFFFFFC;
  if ( pPalette )
    v11 = pPalette;
  v14 = 1 << v9;
  if ( *(int *)(pLoadBuffer + 18) > 1 )
  {
    v15 = 1;
    do
    {
      v15 *= 2;
      v7->m_Width = v15;
    }
    while ( v15 < *(_DWORD *)(pLoadBuffer + 18) );
  }
  if ( *(int *)(pLoadBuffer + 22) > 1 )
  {
    v16 = 1;
    do
    {
      v16 *= 2;
      v7->m_Height = v16;
    }
    while ( v16 < *(_DWORD *)(pLoadBuffer + 22) );
  }
  v17 = (v7->m_Width * *((unsigned __int16 *)pLoadBuffer + 14)) >> 3;
  imageSize = v17 * v7->m_Height + 2 * v14;
  v18 = (char *)operator new[](imageSize);
  v36 = v18;
  border = v18;
  if ( !v18 )
    return 0xFFFFFFFFi64;
  data = &v18[2 * v14];
  if ( v14 > 0 )
  {
    v19 = v11 + 1;
    for ( i = 0i64; i < v14; border[i++] = v23 | v22 )
    {
      if ( keyIndex == i )
      {
        v22 = (8 * (*v19 & 0xF8)) | (*(v19 - 1) >> 2) & 0xFE;
        v23 = (v19[1] & 0xF8) << 8;
      }
      else
      {
        v22 = 8 * (*v19 & 0xF8 | (32 * (v19[1] & 0xF8)));
        v23 = (unsigned __int8)(*(v19 - 1) | 4) >> 2;
      }
      v19 += 4;
    }
  }
  v24 = *(_DWORD *)(v6 + 22) - 1;
  if ( v24 >= 0 )
  {
    v25 = v13 * v24;
    v26 = v13;
    v27 = -v13;
    do
    {
      memmove(&data[v5], &v35[v25], v26);
      v5 += v17;
      v25 += v27;
      --v24;
    }
    while ( v24 >= 0 );
    v6 = pLoadBuffer;
    v7 = this;
    border = v36;
  }
  v28 = Framework::GLManager::glm;
  v29 = *((_WORD *)v6 + 14);
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, (bool)v19);
  glEnable(0xDE1u);
  glGenTexturesAG(1, &v7->m_TexID);
  OGLTexture::setParameter(v7, texParam, 0);
  v30 = 35732;
  if ( v29 != 4 )
    v30 = 35737;
  _glCompressedTexImage2D(0, v30, v7->m_Width, v7->m_Height, imageSize, (__int64)border);
  operator delete(border, v31);
  v7->m_sync = _glewFenceSync(0x9117u, 0);
  Framework::GLManager::LoadingUnlock(v28, 0, v32);
  return 1i64;
}

void __fastcall OGLTexture::loadCompressedObmData(
        OGLTexture *this,
        unsigned __int8 *pLoadBuffer,
        int size,
        int texParam)
{
  unsigned int v5; // er14
  unsigned __int8 v6; // bp
  int v8; // er15
  int v11; // ebx
  unsigned int v12; // ecx
  int m_Width; // esi
  int v14; // er15
  int m_Height; // ebp
  int v16; // er12
  int v17; // edi
  int v18; // ecx
  int v19; // er9
  int v20; // edx
  int v21; // eax
  int v22; // edi
  bool v23; // r8
  unsigned int v24; // [rsp+50h] [rbp-48h]
  Framework::GLManager *v25; // [rsp+58h] [rbp-40h]
  unsigned int v26; // [rsp+A0h] [rbp+8h]

  v5 = 0;
  v6 = 0;
  v8 = 8;
  v24 = pLoadBuffer[2];
  v11 = pLoadBuffer[3];
  LOWORD(this->m_Width) = *((_WORD *)pLoadBuffer + 2);
  LOWORD(this->m_Height) = *((_WORD *)pLoadBuffer + 3);
  if ( v11 == 16 )
  {
    v12 = v24;
    v26 = v24;
    if ( (v24 & 0x80u) != 0 )
    {
      v12 = v24 & 0xFFFFFF7F;
      v8 = 9;
      v26 = v24 & 0xFFFFFF7F;
      v6 = pLoadBuffer[8];
    }
    switch ( v12 )
    {
      case 5u:
        v11 = 4;
        v5 = 35986;
        break;
      case 6u:
        v5 = 35987;
        goto LABEL_17;
      case 7u:
        v11 = 2;
        v5 = 35841;
        break;
      case 8u:
        v11 = 2;
        v5 = 35843;
        break;
      case 9u:
        v11 = 4;
        v5 = 35840;
        break;
      case 0xAu:
        v11 = 4;
        v5 = 35842;
        break;
      case 0xBu:
        v11 = 4;
        v5 = 36196;
        break;
      case 0xCu:
        v11 = 4;
        v5 = 33776;
        break;
      case 0xDu:
        v11 = 4;
        v5 = 33777;
        break;
      case 0xEu:
        v5 = 33778;
        goto LABEL_17;
      case 0xFu:
        v5 = 33779;
        goto LABEL_17;
      case 0x10u:
        v5 = 34798;
LABEL_17:
        v11 = 8;
        break;
      default:
        break;
    }
    v25 = Framework::GLManager::glm;
    Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, size);
    glEnable(0xDE1u);
    if ( !this->m_bSubTexture )
      glGenTexturesAG(1, &this->m_TexID);
    OGLTexture::setParameter(this, texParam, 0);
    if ( (v6 & 1) != 0 )
    {
      m_Width = this->m_Width;
      v14 = v8 + 1;
      m_Height = this->m_Height;
      v16 = 0;
      while ( m_Width || m_Height )
      {
        v17 = v11 * m_Width * m_Height / 8;
        if ( v26 - 7 <= 3 && v17 < 32 )
          v17 = 32;
        if ( this->m_bSubTexture )
        {
          v20 = 1;
          v21 = 1;
          if ( m_Height > 1 )
            v20 = m_Height;
          if ( m_Width > 1 )
            v21 = m_Width;
          _glewCompressedTexSubImage2D(0xDE1u, v16, 0, 0, v21, v20, v5, v17, &pLoadBuffer[v14]);
          v14 += v17;
          m_Width >>= 1;
          ++v16;
          m_Height >>= 1;
        }
        else
        {
          v18 = 1;
          v19 = 1;
          if ( m_Height > 1 )
            v18 = m_Height;
          if ( m_Width > 1 )
            v19 = m_Width;
          _glewCompressedTexImage2D(0xDE1u, v16, v5, v19, v18, 0, v17, &pLoadBuffer[v14]);
          v14 += v17;
          m_Width >>= 1;
          ++v16;
          m_Height >>= 1;
        }
      }
    }
    else
    {
      v22 = size - v8;
      if ( this->m_bSubTexture )
        _glewCompressedTexSubImage2D(0xDE1u, 0, 0, 0, this->m_Width, this->m_Height, v5, v22, &pLoadBuffer[v8]);
      else
        _glewCompressedTexImage2D(0xDE1u, 0, v5, this->m_Width, this->m_Height, 0, v22, &pLoadBuffer[v8]);
    }
    this->m_sync = _glewFenceSync(0x9117u, 0);
    Framework::GLManager::LoadingUnlock(v25, 0, v23);
  }
}

__int64 __fastcall OGLTexture::loadDDSData(
        OGLTexture *this,
        unsigned __int8 *pLoadBuffer,
        int keyIndex,
        unsigned __int8 *pPalette,
        int texParam)
{
  unsigned __int8 *v6; // r15
  unsigned __int8 *v7; // r8
  unsigned int format; // esi
  int v9; // edi
  unsigned int type; // er13
  int v11; // er12
  int v12; // eax
  __int64 v13; // rcx
  bool isCompressed; // bp
  Framework::GLManager *v15; // r14
  unsigned int v16; // eax
  int v17; // edx
  GLint v18; // er15
  unsigned int v19; // edi
  unsigned int height; // ebx
  unsigned int v21; // ebp
  int v22; // esi
  unsigned int v23; // ebp
  int m_Width; // er9
  int v25; // edx
  int v26; // eax
  int i; // ecx
  int v28; // edx
  unsigned int v29; // ecx
  int v30; // er8
  int v31; // er9
  _DWORD *v32; // rsi
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  AgDisplayPlatformImplementation *Log; // rax
  AgDisplay *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v37; // ebp
  int border; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v40; // [rsp+60h] [rbp-68h]
  AgPointer<AgDisplay> result; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int8 *data; // [rsp+D8h] [rbp+10h]
  GLint internalformat; // [rsp+E0h] [rbp+18h]
  int v45; // [rsp+E8h] [rbp+20h]

  v6 = pLoadBuffer + 4;
  v40 = pLoadBuffer + 4;
  v7 = &pLoadBuffer[*((unsigned int *)pLoadBuffer + 1) + 4];
  this->m_Width = *((_DWORD *)pLoadBuffer + 4);
  this->m_Height = *((_DWORD *)pLoadBuffer + 3);
  format = 0;
  v9 = 0;
  internalformat = 0;
  type = 0;
  v11 = 0;
  v12 = *((_DWORD *)pLoadBuffer + 21);
  v13 = 0i64;
  if ( v12 == 808540228 )
    v13 = 20i64;
  data = &v7[v13];
  isCompressed = 0;
  if ( v12 == 808540228 )
  {
    if ( *(_DWORD *)v7 != 71 )
    {
      switch ( *(_DWORD *)v7 )
      {
        case '_':
          v9 = 36495;
          v11 = 16;
          break;
        case '`':
          v9 = 36494;
          v11 = 16;
          break;
        case 'b':
          v9 = 36492;
          v11 = 16;
          break;
        default:
          goto LABEL_17;
      }
      goto LABEL_15;
    }
LABEL_14:
    v11 = 8;
    v9 = 33777;
LABEL_15:
    format = 32993;
    type = *((_DWORD *)pLoadBuffer + 5);
    isCompressed = 1;
    goto LABEL_16;
  }
  if ( v12 == 827611204 )
    goto LABEL_14;
  if ( *((_DWORD *)pLoadBuffer + 22) != 32 )
    goto LABEL_17;
  format = 6408;
  v9 = 32856;
  type = 5121;
LABEL_16:
  internalformat = v9;
LABEL_17:
  v15 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, (bool)v7);
  glEnable(0xDE1u);
  glGenTexturesAG(1, &this->m_TexID);
  OGLTexture::setParameter(this, texParam, 0);
  v16 = *((_DWORD *)v6 + 6);
  if ( v16 <= 1 )
  {
    if ( (texParam & 0x8000) != 0 )
    {
      m_Width = this->m_Width;
      if ( isCompressed )
      {
        glTexImage2DAG(0xDE1u, 0, v9, m_Width, this->m_Height, border, format, type, data, 1, isCompressed);
      }
      else
      {
        v25 = 1;
        v26 = this->m_Width;
        for ( i = this->m_Height; v26 >= 16 || i >= 16; i >>= 1 )
        {
          ++v25;
          v26 >>= 1;
        }
        _glewTexStorage2D(0xDE1u, v25, v9, m_Width, this->m_Height);
        glTexSubImage2DAG(v29, v28, v30, v31, this->m_Width, this->m_Height, format, type, data, 0);
      }
      _glewGenerateMipmap(0xDE1u);
    }
    else
    {
      glTexImage2DAG(
        0xDE1u,
        0,
        v9,
        this->m_Width,
        this->m_Height,
        border,
        format,
        type,
        data,
        (texParam & 0x8000) != 0,
        isCompressed);
    }
  }
  else
  {
    v17 = 0;
    v45 = 0;
    v18 = 0;
    v19 = this->m_Width;
    height = this->m_Height;
    if ( isCompressed )
    {
      v21 = 0;
      if ( v16 != -1 )
      {
        do
        {
          while ( v15->m_bOpenGLBlocked )
            ;
          v22 = v11 * ((v19 + 3) >> 2) * ((height + 3) >> 2);
          _glewCompressedTexImage2D(0xDE1u, v21, internalformat, v19, height, 0, v22, &data[v17]);
          v17 = v22 + v45;
          v45 += v22;
          if ( v19 <= 4 )
            break;
          if ( height <= 4 )
            break;
          v19 >>= 1;
          height >>= 1;
          ++v21;
          ++v18;
        }
        while ( v21 < *((_DWORD *)v40 + 6) + 1 );
      }
    }
    else
    {
      v23 = 0;
      if ( v16 != -1 )
      {
        do
        {
          while ( v15->m_bOpenGLBlocked )
            ;
          glTexImage2D(0xDE1u, v23, internalformat, v19, height, 0, format, type, &data[v17]);
          v17 = v19 * height * (*((_DWORD *)v40 + 21) >> 3) + v45;
          v45 = v17;
          if ( v19 <= 4 )
            break;
          if ( height <= 4 )
            break;
          v19 >>= 1;
          height >>= 1;
          ++v23;
          ++v18;
        }
        while ( v23 < *((_DWORD *)v40 + 6) + 1 );
      }
    }
    glTexParameteri(0xDE1u, 0x813Cu, 0);
    glTexParameteri(0xDE1u, 0x813Du, v18);
  }
  this->m_sync = _glewFenceSync(0x9117u, 0);
  if ( v15->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
  {
    v32 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 8i64);
    if ( *v32 == 1 )
    {
      glFlush();
      DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                         (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                         &result,
                         0);
      Log = Scaleform::GFx::Stream::GetLog(DisplayByIndex->m_ptr);
      AgDisplayPlatformImplementation::loadingUnlock(Log, 0);
      m_ptr = result.m_ptr;
      result.m_ptr = 0i64;
      m_ref = result.m_ref;
      if ( result.m_ref )
      {
        result.m_ref = 0i64;
        v37 = 0;
        if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
        {
          if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
            v37 = 1;
          m_ref->m_data = 0i64;
          if ( m_ptr )
          {
            AgDisplay::~AgDisplay(m_ptr);
            operator delete(m_ptr, 0x70ui64);
          }
          if ( v37 )
            AgReferenceCount::operator delete(m_ref);
        }
      }
      *v32 = 0;
    }
  }
  return 1i64;
}

void __fastcall OGLTexture::loadDirectObmData(OGLTexture *this, unsigned __int8 *pLoadBuffer, int texParam)
{
  GLenum format; // er14
  GLenum type; // er12
  unsigned __int8 v6; // si
  int v7; // ebp
  int v9; // er13
  unsigned int v10; // edi
  GLenum v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  GLint v15; // edx
  int m_Width; // edi
  int v17; // ebp
  int m_Height; // esi
  GLint v19; // er15
  int v20; // eax
  int v21; // eax
  GLsizei v22; // edx
  GLsizei v23; // eax
  unsigned __int8 *v24; // rsi
  GLenum v25; // edi
  __int64 v26; // r15
  int v27; // er13
  int v28; // esi
  __int64 v29; // rdi
  int v30; // ebp
  unsigned __int8 *pixels; // rdi
  bool v32; // r8
  int v33; // [rsp+50h] [rbp-68h]
  Framework::GLManager *v34; // [rsp+60h] [rbp-58h]
  GLsizei height; // [rsp+C0h] [rbp+8h]
  int v36; // [rsp+C0h] [rbp+8h]
  GLsizei width; // [rsp+D8h] [rbp+20h]
  GLsizei widtha; // [rsp+D8h] [rbp+20h]
  int widthb; // [rsp+D8h] [rbp+20h]

  format = 0;
  type = 0;
  v6 = 0;
  v7 = 8;
  width = pLoadBuffer[2];
  v9 = pLoadBuffer[3];
  LOWORD(this->m_Width) = *((_WORD *)pLoadBuffer + 2);
  LOWORD(this->m_Height) = *((_WORD *)pLoadBuffer + 3);
  if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
    return;
  v10 = width;
  if ( (width & 0x80u) != 0 )
  {
    v10 = width & 0xFFFFFF7F;
    v7 = 9;
    v6 = pLoadBuffer[8];
  }
  v34 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, texParam);
  v11 = 34067;
  if ( (v6 & 4) == 0 )
    v11 = 3553;
  glEnable(v11);
  if ( !this->m_bSubTexture )
    glGenTexturesAG(1, &this->m_TexID);
  if ( !v10 )
  {
    v15 = 1;
    type = 5121;
    v9 = 24;
    goto LABEL_18;
  }
  v12 = v10 - 1;
  if ( !v12 )
  {
    v15 = 1;
    format = 6408;
    type = 5121;
    v9 = 32;
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v15 = 2;
    type = 33635;
    v9 = 16;
LABEL_18:
    format = 6407;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v15 = 2;
    format = 6408;
    type = 32819;
    v9 = 16;
    goto LABEL_19;
  }
  if ( v14 == 1 )
  {
    v15 = 2;
    format = 6408;
    type = 32820;
    v9 = 16;
LABEL_19:
    glPixelStorei(0xCF5u, v15);
  }
  OGLTexture::setParameter(this, texParam, 0);
  if ( (v6 & 1) != 0 )
  {
    m_Width = this->m_Width;
    v17 = v7 + 1;
    m_Height = this->m_Height;
    v19 = 0;
    while ( m_Width || m_Height )
    {
      v33 = v9 * m_Width * m_Height / 8;
      if ( this->m_bSubTexture )
      {
        v22 = 1;
        v23 = 1;
        if ( m_Height > 1 )
          v22 = m_Height;
        if ( m_Width > 1 )
          v23 = m_Width;
        glTexSubImage2D(0xDE1u, v19, 0, 0, v23, v22, format, type, &pLoadBuffer[v17]);
        v17 += v33;
        ++v19;
        m_Width >>= 1;
        m_Height >>= 1;
      }
      else
      {
        v20 = 1;
        if ( m_Height > 1 )
          v20 = m_Height;
        height = v20;
        v21 = 1;
        if ( m_Width > 1 )
          v21 = m_Width;
        widtha = v21;
        glTexParameteri(0xDE1u, 0x813Cu, 0);
        glTexParameteri(0xDE1u, 0x813Du, 0);
        while ( Framework::GLManager::glm->m_bOpenGLBlocked )
          ;
        glTexImage2D(0xDE1u, v19, format, widtha, height, 0, format, type, &pLoadBuffer[v17]);
        v17 += v33;
        ++v19;
        m_Width >>= 1;
        m_Height >>= 1;
      }
    }
  }
  else if ( (v6 & 4) != 0 )
  {
    v24 = pLoadBuffer;
    v25 = 34069;
    v26 = 6i64;
    widthb = v9 / 8;
    do
    {
      if ( this->m_bSubTexture )
      {
        glTexSubImage2D(v25, 0, 0, 0, this->m_Width, this->m_Height, format, type, &v24[v7]);
      }
      else
      {
        v27 = this->m_Height;
        v36 = this->m_Width;
        glTexParameteri(0xDE1u, 0x813Cu, 0);
        glTexParameteri(0xDE1u, 0x813Du, 0);
        while ( Framework::GLManager::glm->m_bOpenGLBlocked )
          ;
        glTexImage2D(v25, 0, format, v36, v27, 0, format, type, &pLoadBuffer[v7]);
        v24 = pLoadBuffer;
      }
      ++v25;
      v7 += this->m_Height * widthb * this->m_Width;
      --v26;
    }
    while ( v26 );
  }
  else if ( this->m_bSubTexture )
  {
    glTexSubImage2D(0xDE1u, 0, 0, 0, this->m_Width, this->m_Height, format, type, &pLoadBuffer[v7]);
  }
  else
  {
    v28 = this->m_Height;
    v29 = (unsigned int)v7;
    v30 = this->m_Width;
    pixels = &pLoadBuffer[v29];
    glTexParameteri(0xDE1u, 0x813Cu, 0);
    glTexParameteri(0xDE1u, 0x813Du, 0);
    while ( Framework::GLManager::glm->m_bOpenGLBlocked )
      ;
    glTexImage2D(0xDE1u, 0, format, v30, v28, 0, format, type, pixels);
  }
  this->m_sync = _glewFenceSync(0x9117u, 0);
  Framework::GLManager::LoadingUnlock(v34, 0, v32);
}

void __fastcall OGLTexture::loadIndexObmData(
        OGLTexture *this,
        unsigned __int8 *pLoadBuffer,
        unsigned __int8 *pPalette,
        int texParam)
{
  unsigned __int8 v4; // si
  int v7; // er12
  int v8; // ebp
  unsigned int v9; // er15
  int v10; // eax
  int v11; // er14
  int m_Width; // eax
  int v13; // ebx
  int v14; // edi
  int v15; // er12
  int m_Height; // esi
  unsigned int v17; // ecx
  int height; // ebx
  int v19; // er9
  unsigned int v20; // er8
  bool v21; // r8
  int imageSize; // [rsp+30h] [rbp-48h]
  Framework::GLManager *imageSizea; // [rsp+30h] [rbp-48h]
  unsigned int data; // [rsp+38h] [rbp-40h]
  int level; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v7 = 8;
  imageSize = pLoadBuffer[2];
  v8 = pLoadBuffer[3];
  LOWORD(this->m_Width) = *((_WORD *)pLoadBuffer + 2);
  LOWORD(this->m_Height) = *((_WORD *)pLoadBuffer + 3);
  if ( ((v8 - 24) & 0xFFFFFFF7) != 0 )
  {
    v9 = imageSize;
    if ( (imageSize & 0x80u) != 0 )
    {
      v9 = imageSize & 0xFFFFFF7F;
      v7 = 9;
      v4 = pLoadBuffer[8];
    }
    v10 = v9 + 35728;
    if ( v8 != 4 )
      v10 = v9 + 35733;
    level = v10;
    if ( pPalette )
      memmove(pLoadBuffer + 8, pPalette, 2 * (1 << v8));
    v11 = 1 << v8;
    if ( v9 )
    {
      m_Width = this->m_Width;
      if ( v9 == 1 )
        v13 = this->m_Height * ((v8 * m_Width) >> 3) + 4 * v11;
      else
        v13 = this->m_Height * ((v8 * m_Width) >> 3) + 2 * v11;
    }
    else
    {
      v13 = 3 * v11 + this->m_Height * ((v8 * this->m_Width) >> 3);
    }
    imageSizea = Framework::GLManager::glm;
    Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, (bool)pPalette);
    glEnable(0xDE1u);
    glGenTexturesAG(1, &this->m_TexID);
    OGLTexture::setParameter(this, texParam, 0);
    if ( (v4 & 1) != 0 )
    {
      v14 = this->m_Width;
      v15 = v7 + 1;
      m_Height = this->m_Height;
      v17 = 0;
      while ( 1 )
      {
        data = v17;
        if ( !v14 && !m_Height )
          break;
        if ( v9 )
        {
          if ( v9 == 1 )
            height = m_Height * ((v8 * v14) >> 3) + 4 * v11;
          else
            height = m_Height * ((v8 * v14) >> 3) + 2 * v11;
        }
        else
        {
          height = 3 * v11 + m_Height * ((v8 * v14) >> 3);
        }
        v19 = 1;
        v20 = 1;
        if ( m_Height > 1 )
          v19 = m_Height;
        if ( v14 > 1 )
          v20 = v14;
        _glCompressedTexImage2D(v17, level, v20, v19, height, (__int64)&pLoadBuffer[v15]);
        v15 += height;
        v17 = data + 1;
        v14 >>= 1;
        m_Height >>= 1;
      }
    }
    else
    {
      _glCompressedTexImage2D(0, level, this->m_Width, this->m_Height, v13, (__int64)(pLoadBuffer + 8));
    }
    if ( glGetError() )
      this->m_TexID = 0;
    this->m_sync = _glewFenceSync(0x9117u, 0);
    Framework::GLManager::LoadingUnlock(imageSizea, 0, v21);
  }
}

__int64 __fastcall OGLTexture::loadObmData(
        OGLTexture *this,
        unsigned __int8 *pLoadBuffer,
        int size,
        unsigned __int8 *pPalette,
        int texParam)
{
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+48h] [rbp+10h]

  v6 = 0;
  v7 = 0;
  if ( !pLoadBuffer )
    return 4294967292i64;
  if ( this->m_TexID && !this->m_bSubTexture )
    return 4294967294i64;
  if ( *(_WORD *)pLoadBuffer != *(_WORD *)"OI" )
    return 4294967293i64;
  LOBYTE(v7) = pLoadBuffer[2];
  LOBYTE(v6) = pLoadBuffer[3];
  this->m_TexFormat = v7;
  if ( ((v6 - 4) & 0xFFFFFFFB) != 0 )
  {
    if ( v6 == 16 )
    {
      OGLTexture::loadCompressedObmData(this, pLoadBuffer, size, texParam);
      return 1i64;
    }
    else
    {
      if ( ((v6 - 24) & 0xFFFFFFF7) != 0 )
        return 4294967293i64;
      OGLTexture::loadDirectObmData(this, pLoadBuffer, texParam);
      return 1i64;
    }
  }
  else
  {
    OGLTexture::loadIndexObmData(this, pLoadBuffer, pPalette, texParam);
    return 1i64;
  }
}

__int64 __fastcall OGLTexture::loadOstData(
        OGLTexture *this,
        unsigned __int8 *pLoadBuffer,
        int size,
        unsigned __int8 *pPalette,
        int texParam)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // xmm1_8
  unsigned int v10; // er14
  Framework::GLManager *v11; // r15
  int v12; // edx
  bool v13; // r8
  __m128i v14; // [rsp+50h] [rbp-28h]

  if ( !pLoadBuffer )
    return 4294967292i64;
  if ( this->m_TexID && !this->m_bSubTexture )
    return 4294967294i64;
  if ( *(_WORD *)pLoadBuffer != *(_WORD *)"ST" )
    return 4294967293i64;
  v8 = HIDWORD(*(_QWORD *)pLoadBuffer);
  v14 = *(__m128i *)pLoadBuffer;
  this->m_Width = (__int16)HIWORD(*(_QWORD *)pLoadBuffer);
  v9 = _mm_srli_si128(v14, 8).m128i_u64[0];
  v10 = (__int16)v8;
  this->m_Height = (__int16)v9;
  if ( !HIDWORD(v9) )
    return 4294967293i64;
  v11 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, size);
  glEnable(0xDE1u);
  if ( !this->m_bSubTexture )
    glGenTexturesAG(1, &this->m_TexID);
  OGLTexture::setParameter(this, texParam, 0);
  if ( v14.m128i_i8[3] )
    v12 = v14.m128i_i8[3];
  else
    v12 = 0;
  if ( this->m_bSubTexture )
    _glewCompressedTexSubImage2D(0xDE1u, v12, 0, 0, this->m_Width, this->m_Height, v10, SHIDWORD(v9), pLoadBuffer + 16);
  else
    _glewCompressedTexImage2D(0xDE1u, v12, v10, this->m_Width, this->m_Height, 0, SHIDWORD(v9), pLoadBuffer + 16);
  this->m_sync = _glewFenceSync(0x9117u, 0);
  Framework::GLManager::LoadingUnlock(v11, 0, v13);
  return 1i64;
}

__int64 __fastcall OGLTexture::loadPngData(
        OGLTexture *this,
        unsigned __int8 *pLoadBuffer,
        int keyIndex,
        unsigned __int8 *pPalette,
        int texParam)
{
  unsigned int FileTypeFromMemory; // eax
  __int64 v7; // r12
  int BPP; // edi
  GLenum format; // ebp
  unsigned int v10; // er14
  GLenum type; // esi
  bool v12; // r8
  Framework::GLManager *v13; // r13
  int v14; // edx
  int m_Width; // eax
  int i; // ecx
  int m_Height; // er15
  int v18; // er12
  Framework::GLManager *v19; // rdx
  bool v20; // r8
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+A0h] [rbp+8h]
  GLvoid *pixels; // [rsp+B8h] [rbp+20h]

  v22 = FreeImage_OpenMemory(pLoadBuffer, (unsigned int)keyIndex);
  FileTypeFromMemory = FreeImage_GetFileTypeFromMemory(v22, 0i64);
  v23 = FreeImage_LoadFromMemory(FileTypeFromMemory, v22, 0i64);
  v7 = v23;
  FreeImage_FlipVertical(v23);
  BPP = FreeImage_GetBPP(v23);
  this->m_Width = FreeImage_GetWidth(v23);
  this->m_Height = FreeImage_GetHeight(v23);
  format = 0;
  v10 = 0;
  type = 0;
  pixels = (GLvoid *)FreeImage_GetBits(v23);
  if ( BPP == 24 )
  {
    format = 32992;
    v10 = 6407;
  }
  else
  {
    if ( BPP != 32 )
      goto LABEL_6;
    format = 32993;
    v10 = 32856;
  }
  type = 5121;
LABEL_6:
  v13 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, v12);
  glEnable(0xDE1u);
  glGenTexturesAG(1, &this->m_TexID);
  OGLTexture::setParameter(this, texParam, 0);
  if ( (texParam & 0x8000) != 0 )
  {
    v14 = 1;
    m_Width = this->m_Width;
    for ( i = this->m_Height; m_Width >= 16 || i >= 16; i >>= 1 )
    {
      ++v14;
      m_Width >>= 1;
    }
    _glewTexStorage2D(0xDE1u, v14, v10, this->m_Width, this->m_Height);
    glTexSubImage2D(0xDE1u, 0, 0, 0, this->m_Width, this->m_Height, format, type, pixels);
    _glewGenerateMipmap(0xDE1u);
  }
  else
  {
    m_Height = this->m_Height;
    v18 = this->m_Width;
    glTexParameteri(0xDE1u, 0x813Cu, 0);
    if ( (texParam & 0x8000) == 0 )
      glTexParameteri(0xDE1u, 0x813Du, 0);
    while ( Framework::GLManager::glm->m_bOpenGLBlocked )
      ;
    glTexImage2D(0xDE1u, 0, v10, v18, m_Height, 0, format, type, pixels);
    v7 = v23;
  }
  v19 = Framework::GLManager::glm;
  Framework::GLManager::glm->m_textureID = 0;
  while ( v19->m_bOpenGLBlocked )
    ;
  glBindTexture(0xDE1u, 0);
  FreeImage_Unload(v7);
  FreeImage_CloseMemory(v22);
  this->m_sync = _glewFenceSync(0x9117u, 0);
  Framework::GLManager::LoadingUnlock(v13, 0, v20);
  return 1i64;
}

__int64 __fastcall OGLTexture::loadPvrData(OGLTexture *this, unsigned __int8 *pLoadBuffer, int size, int texParam)
{
  unsigned int v4; // ebp
  int v10; // ecx
  int v11; // ecx
  Framework::GLManager *v12; // rbx
  bool v13; // r8

  v4 = 0;
  if ( *((_DWORD *)pLoadBuffer + 11) != 559044176 )
    return 4294967293i64;
  v10 = pLoadBuffer[16];
  this->m_Width = *((_DWORD *)pLoadBuffer + 2);
  this->m_Height = *((_DWORD *)pLoadBuffer + 1);
  v11 = v10 - 24;
  if ( v11 )
  {
    if ( v11 == 1 )
      v4 = 35842;
  }
  else
  {
    v4 = 35843;
  }
  v12 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, size);
  glEnable(0xDE1u);
  glGenTexturesAG(1, &this->m_TexID);
  OGLTexture::setParameter(this, texParam, 0);
  _glewCompressedTexImage2D(0xDE1u, 0, v4, this->m_Width, this->m_Height, 0, size - 52, pLoadBuffer + 52);
  this->m_sync = _glewFenceSync(0x9117u, 0);
  Framework::GLManager::LoadingUnlock(v12, 0, v13);
  return 1i64;
}

__int64 __fastcall OGLTexture::loadTextureBuf2(
        OGLTexture *this,
        unsigned __int8 *pBuf,
        int w,
        int h,
        int texFormat,
        int texParam)
{
  GLenum type; // esi
  GLenum format; // edi
  Framework::GLManager *v12; // r13
  GLint v13; // edx
  int height; // ebp
  int m_Width; // er14
  bool v16; // r8
  __int64 result; // rax

  if ( !pBuf || !w || !h )
    return 4294967293i64;
  type = 0;
  format = 0;
  if ( !this->m_bSubTexture )
  {
    this->m_Width = w;
    this->m_Height = h;
    this->m_TexFormat = texFormat;
  }
  v12 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, w);
  glEnable(0xDE1u);
  if ( !this->m_bSubTexture )
    glGenTexturesAG(1, &this->m_TexID);
  switch ( texFormat )
  {
    case 0:
      format = 6407;
      goto LABEL_15;
    case 1:
      format = 6408;
      goto LABEL_15;
    case 2:
      format = 6407;
      type = 33635;
      v13 = 2;
      goto LABEL_16;
    case 3:
      format = 6408;
      type = 32819;
      v13 = 2;
      goto LABEL_16;
    case 4:
      format = 6408;
      type = 32820;
      v13 = 2;
      goto LABEL_16;
    case 32:
      format = 6406;
LABEL_15:
      type = 5121;
      v13 = 1;
LABEL_16:
      glPixelStorei(0xCF5u, v13);
      break;
    default:
      break;
  }
  OGLTexture::setParameter(this, texParam, 0);
  if ( this->m_bSubTexture )
  {
    glTexSubImage2D(0xDE1u, 0, 0, 0, w, h, format, type, pBuf);
  }
  else
  {
    height = this->m_Height;
    m_Width = this->m_Width;
    glTexParameteri(0xDE1u, 0x813Cu, 0);
    glTexParameteri(0xDE1u, 0x813Du, 0);
    while ( Framework::GLManager::glm->m_bOpenGLBlocked )
      ;
    glTexImage2D(0xDE1u, 0, format, m_Width, height, 0, format, type, pBuf);
  }
  this->m_sync = _glewFenceSync(0x9117u, 0);
  Framework::GLManager::LoadingUnlock(v12, 0, v16);
  result = 1i64;
  this->m_bSubTexture = 0;
  return result;
}

__int64 __fastcall OGLTexture::loadTextureBuf(
        OGLTexture *this,
        unsigned __int8 *pLoadBuffer,
        int size,
        int texParam,
        unsigned __int8 *pPalette,
        int keyIndex)
{
  int v10; // er8
  unsigned __int8 *v11; // r9

  OGLTexture::release(this);
  if ( *(_WORD *)pLoadBuffer == *(_WORD *)"DDS" && pLoadBuffer[2] == aDds_0[2] )
    return OGLTexture::loadDDSData(this, pLoadBuffer, v10, v11, texParam);
  if ( *(_WORD *)(pLoadBuffer + 1) == *(_WORD *)"PNG" && pLoadBuffer[3] == aPng_0[2] )
    return OGLTexture::loadPngData(this, pLoadBuffer, size, v11, texParam);
  if ( *(_WORD *)pLoadBuffer == *(_WORD *)"OI" )
    return OGLTexture::loadObmData(this, pLoadBuffer, size, pPalette, texParam);
  if ( *(_WORD *)pLoadBuffer == *(_WORD *)"BM" )
    return OGLTexture::loadBmpData(this, pLoadBuffer, keyIndex, pPalette, texParam);
  if ( *(_DWORD *)pLoadBuffer == *(_DWORD *)"PVR!" )
    return OGLTexture::loadPvrData(this, pLoadBuffer, size, texParam);
  if ( (unsigned __int16)*(_DWORD *)pLoadBuffer == *(_WORD *)"ST" )
    return OGLTexture::loadOstData(this, pLoadBuffer, size, v11, texParam);
  return 4294967293i64;
}

void __fastcall OGLTexture::release(OGLTexture *this, __int64 a2, bool a3)
{
  Framework::GLManager *v4; // rbp
  unsigned int *v5; // rbx
  Framework::GLManager *v6; // rcx
  unsigned int m_TexID; // ecx
  __int64 v8; // rax
  unsigned __int8 m_FrameBufferID; // dl
  Framework::GLManager *v10; // r8
  struct __GLsync *m_sync; // rcx
  bool v12; // r8

  *(_QWORD *)&this->m_Width = 0i64;
  this->m_TexParam = 0;
  this->m_TexFormat = 0;
  if ( this->m_TexID )
  {
    v4 = Framework::GLManager::glm;
    Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, a3);
    v5 = ::m_TexID;
    v6 = Framework::GLManager::glm;
    ::m_TexID[m_ActiveTexture] = 0;
    v6->m_textureID = 0;
    while ( v6->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, 0);
    m_TexID = this->m_TexID;
    v8 = 32i64;
    do
    {
      if ( m_TexID == *v5 )
        *v5 = 0;
      ++v5;
      --v8;
    }
    while ( v8 );
    glDeleteTextures(1, &this->m_TexID);
    this->m_TexID = 0;
    if ( this->m_FrameBufferID )
    {
      m_FrameBufferID = this->m_FrameBufferID;
      v10 = Framework::GLManager::glm;
      if ( m_FrameBufferID )
      {
        Framework::GLManager::glm->m_renderbuffer.m_freeIDs[Framework::GLManager::glm->m_renderbuffer.m_firstOccupiedIndex] = m_FrameBufferID;
        ++v10->m_renderbuffer.m_firstOccupiedIndex;
      }
    }
    this->m_FrameBufferID = 0;
    if ( this->m_TexID2 )
      glsDeleteTextures(1, &this->m_TexID2);
    m_sync = this->m_sync;
    this->m_TexID2 = 0;
    _glewDeleteSync(m_sync);
    this->m_sync = 0i64;
    Framework::GLManager::LoadingUnlock(v4, 0, v12);
  }
}

void __fastcall OGLTexture::setFileInfo(
        OGLTexture *this,
        const char *pFileName,
        unsigned __int8 bFilter,
        unsigned __int8 bTransParent,
        int iOption)
{
  __int64 v9; // rbx
  char *fileName; // rcx
  int v11; // ebx
  char *v12; // rax

  if ( pFileName && this->m_TexID )
  {
    v9 = -1i64;
    do
      ++v9;
    while ( pFileName[v9] );
    fileName = (char *)this->m_FileInfo.fileName;
    v11 = v9 + 1;
    if ( fileName )
    {
      operator delete(fileName, (unsigned __int64)pFileName);
      this->m_FileInfo.fileName = 0i64;
    }
    v12 = (char *)operator new[](v11);
    this->m_FileInfo.fileName = v12;
    strcpy_s(v12, v11, pFileName);
    this->m_FileInfo.option = iOption;
    this->m_FileInfo.filter = bFilter;
    this->m_FileInfo.transparent = bTransParent;
  }
}

void __fastcall OGLTexture::setParameter(OGLTexture *this, int TexParam, int bindTarget)
{
  unsigned int m_TexID; // edx
  Framework::GLManager *v6; // rcx

  if ( bindTarget )
  {
    m_TexID = this->m_TexID;
    if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
    {
      ::m_TexID[m_ActiveTexture] = m_TexID;
      v6 = Framework::GLManager::glm;
      Framework::GLManager::glm->m_textureID = m_TexID;
      while ( v6->m_bOpenGLBlocked )
        ;
      glBindTexture(bindTarget, m_TexID);
    }
  }
  if ( (TexParam & 1) != 0 )
    glTexParameterf(0xDE1u, 0x2801u, 9728.0);
  if ( (TexParam & 2) != 0 )
    glTexParameterf(0xDE1u, 0x2801u, 9729.0);
  if ( (TexParam & 4) != 0 )
    glTexParameterf(0xDE1u, 0x2800u, 9728.0);
  if ( (TexParam & 8) != 0 )
    glTexParameterf(0xDE1u, 0x2800u, 9729.0);
  if ( (TexParam & 0x10) != 0 )
    glTexParameterf(0xDE1u, 0x2801u, 9984.0);
  if ( (TexParam & 0x20) != 0 )
    glTexParameterf(0xDE1u, 0x2801u, 9985.0);
  if ( (TexParam & 0x40) != 0 )
    glTexParameterf(0xDE1u, 0x2801u, 9986.0);
  if ( (TexParam & 0x80u) != 0 )
    glTexParameterf(0xDE1u, 0x2801u, 9987.0);
  if ( (TexParam & 0x100) != 0 )
    glTexParameterf(0xDE1u, 0x2802u, 33071.0);
  if ( (TexParam & 0x200) != 0 )
    glTexParameterf(0xDE1u, 0x2802u, 10497.0);
  if ( (TexParam & 0x2000) != 0 )
    glTexParameterf(0xDE1u, 0x2802u, 33648.0);
  if ( (TexParam & 0x400) != 0 )
    glTexParameterf(0xDE1u, 0x2803u, 33071.0);
  if ( (TexParam & 0x800) != 0 )
    glTexParameterf(0xDE1u, 0x2803u, 10497.0);
  if ( (TexParam & 0x4000) != 0 )
    glTexParameterf(0xDE1u, 0x2803u, 33648.0);
  if ( (TexParam & 0x1000) != 0 )
    glTexParameterf(0xDE1u, 0x84FEu, OGLRender::m_maxAnisotropy);
  this->m_TexParam = TexParam;
}

