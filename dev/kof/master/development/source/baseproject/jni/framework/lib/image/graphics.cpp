#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/font.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x140888BEA
Graphics::Graphics(OGLRender * pRender); // 0x140044270
unsigned char Graphics::initialize(OGLRender * pRender); // 0x140044320
void Graphics::lock(long w, long h); // 0x1400443C0
void Graphics::lock(long x, long y, long w, long h, float scale); // 0x140044670
void Graphics::clearScreen(long c); // 0x140044930
void Graphics::fillRect(long x, long y, long width, long height); // 0x1400449C0
void Graphics::drawImage(Image * image, float * matrix, float sx, float sy, float width, float height); // 0x140044BB0
void Graphics::drawImage(Image * image, float dx, float dy, float sx, float sy, float width, float height); // 0x140044DD0
void Graphics::setRenderMode(long Operator, long srcRatio); // 0x140045150
GraphicsStack * Graphics::addStack(); // 0x140045590
GraphicsStack * Graphics::gatStack(Image * image); // 0x140045640
long compareDrawStack(const void * a, const void * b); // 0x140045810
void Graphics::drawStack(); // 0x140045880
void Graphics::preDrawStack(); // 0x140045E40
void Graphics::drawImageS(Image * image, float * matrix, float sx, float sy, float width, float height); // 0x140045FF0
void Graphics::drawImageS(Image * image, float dx, float dy, float sx, float sy, float width, float height); // 0x140046270
void Graphics::drawCapture(Image * image, float x, float y, float w, float h); // 0x140046790
void Graphics::drawTexture(unsigned long textureId, float x, float y, float w, float h); // 0x140046960//decompilation failure at 140888BEA!
void __fastcall Graphics::Graphics(Graphics *this, OGLRender *pRender, float a3)
{
  Font *Font; // rax

  this->__vftable = (Graphics_vtbl *)&Graphics::`vftable';
  Font = defaultFont;
  if ( defaultFont )
  {
    Font = Font::createFont((int)this, 14, a3);
    defaultFont = Font;
  }
  this->m_pFont = Font;
  *(_QWORD *)&this->m_Color = -1i64;
  *(_QWORD *)&this->m_OriginX = 0i64;
  *(_QWORD *)&this->m_OriginW = 0i64;
  *(_QWORD *)&this->m_ClipX = 0i64;
  *(_QWORD *)&this->m_ClipW = 0i64;
  *(_QWORD *)&this->m_FlipMode = 0i64;
  this->m_pStack = 0i64;
  *(_QWORD *)&this->m_StackMax = 0i64;
  this->m_Prio = 0.0;
  this->m_OperatorOld = 0;
  this->m_SrcRatio = 255;
  this->m_DstRatio = 255;
  this->m_Scal = 1.0;
  this->m_pRender = pRender;
  this->m_EnableDepthAdd = 1;
  this->m_SrcRatioOld = 255;
  *(_QWORD *)&this->m_CustomShaderNo2DOld = -1i64;
  Graphics::initialize(this, pRender);
}

void __fastcall Graphics::addStack(Graphics *this)
{
  GraphicsStack **m_pStack; // rbp
  __int64 m_StackMax; // rdi
  GraphicsStack **v4; // rax
  int v5; // edx
  GraphicsStack **v6; // rdx
  GraphicsStack *v7; // rax
  GraphicsStack *v8; // [rsp+40h] [rbp+8h]

  m_pStack = this->m_pStack;
  m_StackMax = this->m_StackMax;
  v4 = (GraphicsStack **)operator new[](saturated_mul((int)m_StackMax + 1, 8ui64));
  this->m_pStack = v4;
  this->m_StackMax = m_StackMax + 1;
  memmove(v4, m_pStack, 8 * m_StackMax);
  v8 = (GraphicsStack *)operator new(0x48ui64);
  GraphicsStack::GraphicsStack(v8, v5);
  v6 = this->m_pStack;
  v6[m_StackMax] = v7;
  if ( m_pStack )
    operator delete(m_pStack, (unsigned __int64)v6);
}

void __fastcall Graphics::clearScreen(Graphics *this, int c)
{
  if ( m_DepthMask != 1 )
  {
    m_DepthMask = 1;
    glDepthMask(1u);
  }
  glClearColor(
    (float)BYTE2(c) * 0.0038999999,
    (float)BYTE1(c) * 0.0038999999,
    (float)(unsigned __int8)c * 0.0038999999,
    (float)HIBYTE(c) * 0.0038999999);
  glClearAG(0x4500u);
}

__int64 __fastcall compareDrawStack(const void *a, const void *b)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // ecx
  int v8; // edx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  v2 = *(_QWORD *)a;
  v3 = *(_QWORD *)b;
  if ( *(_DWORD *)(*(_QWORD *)a + 48i64) )
  {
    if ( !*(_DWORD *)(v3 + 48) )
      return 1i64;
  }
  else
  {
    if ( *(_DWORD *)(v3 + 48) )
      return 0xFFFFFFFFi64;
    if ( !*(_DWORD *)(v3 + 48) )
    {
      v5 = *(_QWORD *)(v2 + 40);
      v6 = *(_QWORD *)(v3 + 40);
      if ( v5 < v6 )
        return 0xFFFFFFFFi64;
      if ( v5 > v6 )
        return 1i64;
    }
  }
  v7 = *(_DWORD *)(v2 + 32);
  v8 = *(_DWORD *)(v3 + 32);
  if ( v7 < v8 )
    return 0xFFFFFFFFi64;
  if ( v7 > v8 )
    return 1i64;
  v9 = *(_QWORD *)(v2 + 40);
  v10 = *(_QWORD *)(v3 + 40);
  if ( v9 < v10 )
    return 0xFFFFFFFFi64;
  return v9 > v10;
}

void __fastcall Graphics::drawCapture(Graphics *this, Image *image, float x, float y, float w, float h)
{
  unsigned int v6; // er9
  struct __GLsync *m_sync; // rcx
  OGLRender *m_pRender; // rcx
  float m_Width; // xmm1_4
  float m_Height; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  int m_Prio_low; // xmm0_4
  unsigned int v18; // [rsp+20h] [rbp-158h]
  int v19; // [rsp+28h] [rbp-150h]
  MeshVertexInfo2D pCoord; // [rsp+30h] [rbp-148h] BYREF
  float v21; // [rsp+70h] [rbp-108h]
  float v22; // [rsp+74h] [rbp-104h]
  int v23; // [rsp+78h] [rbp-100h]
  float v24; // [rsp+A8h] [rbp-D0h]
  float v25; // [rsp+ACh] [rbp-CCh]
  float v26; // [rsp+B0h] [rbp-C8h]
  float v27; // [rsp+B4h] [rbp-C4h]
  int v28; // [rsp+B8h] [rbp-C0h]
  float v29; // [rsp+E8h] [rbp-90h]
  float v30; // [rsp+ECh] [rbp-8Ch]
  float v31; // [rsp+F0h] [rbp-88h]
  float v32; // [rsp+F4h] [rbp-84h]
  int v33; // [rsp+F8h] [rbp-80h]
  float v34; // [rsp+128h] [rbp-50h]
  float v35; // [rsp+12Ch] [rbp-4Ch]

  if ( image )
  {
    m_sync = image->m_sync;
    if ( m_sync )
    {
      _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
      _glewDeleteSync(image->m_sync);
      image->m_sync = 0i64;
    }
    if ( (int)image->m_TexID > 0 )
    {
      m_pRender = this->m_pRender;
      m_Width = (float)image->m_Width;
      m_Height = (float)image->m_Height;
      v15 = fminf(m_Width, w);
      v16 = fminf(m_Height, h);
      v21 = x;
      pCoord.m_position.x = x;
      v27 = y;
      pCoord.m_position.y = y;
      v24 = 0.0 / m_Width;
      v31 = v15 + x;
      m_Prio_low = LODWORD(this->m_Prio);
      v26 = v15 + x;
      LODWORD(pCoord.m_position.z) = m_Prio_low;
      v23 = m_Prio_low;
      v32 = v16 + y;
      v30 = (float)(v16 + 0.0) / m_Height;
      pCoord.m_texture.y = v30;
      v22 = v16 + y;
      v28 = m_Prio_low;
      v33 = m_Prio_low;
      pCoord.m_texture.x = 0.0 / m_Width;
      v34 = (float)(v15 + 0.0) / m_Width;
      v29 = v34;
      v35 = 0.0 / m_Height;
      v25 = 0.0 / m_Height;
      OGLRender::drawCapture(m_pRender, image, &pCoord, v6, v18, v19);
      if ( this->m_EnableDepthAdd )
        this->m_Prio = this->m_Prio + 0.000099999997;
    }
  }
}

void __fastcall Graphics::drawImage(
        Graphics *this,
        Image *image,
        float dx,
        float dy,
        float sx,
        float sy,
        float width,
        float height)
{
  int v8; // xmm2_4
  int v9; // xmm3_4
  float m_Width; // xmm0_4
  float m_Height; // xmm1_4
  bool v12; // zf
  int m_Prio_low; // xmm0_4
  float texCoord; // [rsp+38h] [rbp-69h] BYREF
  float v15; // [rsp+3Ch] [rbp-65h]
  float v16; // [rsp+40h] [rbp-61h]
  float v17; // [rsp+44h] [rbp-5Dh]
  float v18; // [rsp+48h] [rbp-59h]
  float v19; // [rsp+4Ch] [rbp-55h]
  float v20; // [rsp+50h] [rbp-51h]
  float v21; // [rsp+54h] [rbp-4Dh]
  float vertex; // [rsp+58h] [rbp-49h] BYREF
  float v23; // [rsp+5Ch] [rbp-45h]
  int v24; // [rsp+60h] [rbp-41h]
  float v25; // [rsp+64h] [rbp-3Dh]
  float v26; // [rsp+68h] [rbp-39h]
  int v27; // [rsp+6Ch] [rbp-35h]
  float v28; // [rsp+70h] [rbp-31h]
  float v29; // [rsp+74h] [rbp-2Dh]
  int v30; // [rsp+78h] [rbp-29h]
  float v31; // [rsp+7Ch] [rbp-25h]
  float v32; // [rsp+80h] [rbp-21h]
  int v33; // [rsp+84h] [rbp-1Dh]

  if ( image )
  {
    *(float *)&v8 = dx + (float)this->m_OriginX;
    *(float *)&v9 = dy + (float)this->m_OriginY;
    m_Width = (float)image->m_Width;
    m_Height = (float)image->m_Height;
    switch ( this->m_FlipMode )
    {
      case 0:
        v25 = *(float *)&v8;
        vertex = *(float *)&v8;
        *(float *)&v8 = *(float *)&v8 + width;
        v29 = *(float *)&v9;
        v23 = *(float *)&v9;
        *(float *)&v9 = *(float *)&v9 + height;
        goto LABEL_4;
      case 1:
        v25 = *(float *)&v8;
        vertex = *(float *)&v8;
        v29 = *(float *)&v9;
        v23 = *(float *)&v9;
        v31 = *(float *)&v8 + width;
        v28 = *(float *)&v8 + width;
        v32 = *(float *)&v9 + height;
        v26 = *(float *)&v9 + height;
        goto LABEL_7;
      case 2:
        v25 = *(float *)&v8;
        vertex = *(float *)&v8;
        v29 = *(float *)&v9;
        v23 = *(float *)&v9;
        v31 = *(float *)&v8 + width;
        v28 = *(float *)&v8 + width;
        v32 = *(float *)&v9 + height;
        v26 = *(float *)&v9 + height;
        goto LABEL_14;
      case 3:
        v25 = *(float *)&v8 + width;
        vertex = *(float *)&v8 + width;
        v29 = *(float *)&v9 + height;
        v23 = *(float *)&v9 + height;
LABEL_4:
        v26 = *(float *)&v9;
        v32 = *(float *)&v9;
        v31 = *(float *)&v8;
        v28 = *(float *)&v8;
        goto LABEL_5;
      case 4:
        v25 = *(float *)&v8;
        vertex = *(float *)&v8;
        v31 = *(float *)&v9;
        v28 = *(float *)&v9;
        v29 = *(float *)&v9 + height;
        v23 = *(float *)&v9 + height;
        v32 = *(float *)&v8 + width;
        v26 = *(float *)&v8 + width;
        goto LABEL_5;
      case 5:
        v29 = *(float *)&v9;
        v23 = *(float *)&v9;
        v32 = *(float *)&v8;
        v26 = *(float *)&v8;
        v25 = *(float *)&v8 + width;
        vertex = *(float *)&v8 + width;
        v31 = *(float *)&v9 + height;
        v28 = *(float *)&v9 + height;
LABEL_5:
        v19 = sy / m_Height;
        v15 = sy / m_Height;
        v21 = (float)(sy + height) / m_Height;
        v17 = v21;
        goto LABEL_15;
      case 6:
        v29 = *(float *)&v9;
        v23 = *(float *)&v9;
        v32 = *(float *)&v8;
        v26 = *(float *)&v8;
        v25 = *(float *)&v8 + width;
        vertex = *(float *)&v8 + width;
        v31 = *(float *)&v9 + height;
        v28 = *(float *)&v9 + height;
LABEL_7:
        v16 = (float)(sx + width) / m_Width;
        texCoord = v16;
        v19 = sy / m_Height;
        v15 = sy / m_Height;
        v20 = sx / m_Width;
        v18 = sx / m_Width;
        v21 = (float)(sy + height) / m_Height;
        v17 = v21;
        break;
      case 7:
        v29 = *(float *)&v9;
        v23 = *(float *)&v9;
        v32 = *(float *)&v8;
        v26 = *(float *)&v8;
        v25 = *(float *)&v8 + width;
        vertex = *(float *)&v8 + width;
        v31 = *(float *)&v9 + height;
        v28 = *(float *)&v9 + height;
LABEL_14:
        v17 = sy / m_Height;
        v21 = sy / m_Height;
        v15 = (float)(sy + height) / m_Height;
        v19 = v15;
LABEL_15:
        v18 = (float)(sx + width) / m_Width;
        v20 = v18;
        texCoord = sx / m_Width;
        v16 = sx / m_Width;
        break;
      default:
        break;
    }
    v12 = this->m_EnableDepthAdd == 0;
    m_Prio_low = SLODWORD(this->m_Prio);
    v33 = m_Prio_low;
    v30 = m_Prio_low;
    v27 = m_Prio_low;
    v24 = m_Prio_low;
    if ( !v12 )
      this->m_Prio = *(float *)&m_Prio_low + 0.000099999997;
    OGLRender::drawImage(
      this->m_pRender,
      image,
      &vertex,
      &texCoord,
      (this->m_SrcRatio << 24) | 0xFFFFFF,
      4u,
      SLODWORD(texCoord));
  }
}

void __fastcall Graphics::drawImage(
        Graphics *this,
        Image *image,
        float *matrix,
        float sx,
        float sy,
        float width,
        float height)
{
  bool v7; // zf
  __m128i v8; // xmm1
  float m_Width; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm3_4
  int m_Prio_low; // xmm0_4
  __m128i v14; // xmm10
  float *v15; // rax
  __m128i v16; // xmm11
  float v17; // xmm4_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm5_4
  __int64 v23; // r8
  float v24; // xmm10_4
  float v25; // xmm11_4
  float v26; // xmm3_4
  float vertex[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v28; // [rsp+38h] [rbp-C0h]
  int v29; // [rsp+3Ch] [rbp-BCh]
  float v30; // [rsp+40h] [rbp-B8h]
  int v31; // [rsp+44h] [rbp-B4h]
  float v32; // [rsp+48h] [rbp-B0h]
  int v33; // [rsp+4Ch] [rbp-ACh]
  int v34; // [rsp+50h] [rbp-A8h]
  float v35; // [rsp+54h] [rbp-A4h]
  float v36; // [rsp+58h] [rbp-A0h]
  int v37; // [rsp+5Ch] [rbp-9Ch]
  float texCoord[7]; // [rsp+60h] [rbp-98h] BYREF
  float v39; // [rsp+7Ch] [rbp-7Ch]

  v7 = this->m_EnableDepthAdd == 0;
  v8 = _mm_cvtsi32_si128(image->m_Height);
  m_Width = (float)image->m_Width;
  v29 = 0;
  *(_QWORD *)vertex = 0i64;
  v33 = 0;
  v10 = _mm_cvtepi32_ps(v8).m128_f32[0];
  v11 = sx / m_Width;
  v12 = (float)(sx + width) / m_Width;
  m_Prio_low = SLODWORD(this->m_Prio);
  v37 = m_Prio_low;
  v34 = m_Prio_low;
  v31 = m_Prio_low;
  v28 = m_Prio_low;
  v36 = height;
  v30 = height;
  v35 = width;
  v32 = width;
  if ( !v7 )
    this->m_Prio = *(float *)&m_Prio_low + 0.000099999997;
  v14 = _mm_cvtsi32_si128(this->m_OriginX);
  v15 = &vertex[1];
  v16 = _mm_cvtsi32_si128(this->m_OriginY);
  v17 = matrix[4];
  v18 = *matrix;
  v19 = matrix[2];
  texCoord[2] = v11;
  texCoord[0] = v11;
  v20 = matrix[5];
  texCoord[5] = sy / v10;
  texCoord[1] = sy / v10;
  v21 = matrix[1];
  v39 = (float)(sy + height) / v10;
  texCoord[3] = v39;
  v22 = matrix[3];
  v23 = 4i64;
  LODWORD(v24) = _mm_cvtepi32_ps(v14).m128_u32[0];
  LODWORD(v25) = _mm_cvtepi32_ps(v16).m128_u32[0];
  texCoord[6] = v12;
  texCoord[4] = v12;
  do
  {
    v26 = (float)((float)((float)(*(v15 - 1) * v22) + (float)(*v15 * v17)) + v20) + v25;
    *(v15 - 1) = (float)((float)((float)(*(v15 - 1) * v18) + (float)(*v15 * v21)) + v19) + v24;
    *v15 = v26;
    v15 += 3;
    --v23;
  }
  while ( v23 );
  OGLRender::drawImage(
    this->m_pRender,
    image,
    vertex,
    texCoord,
    (this->m_SrcRatio << 24) | 0xFFFFFF,
    4u,
    SLODWORD(vertex[0]));
}

void __fastcall Graphics::drawImageS(
        Graphics *this,
        Image *image,
        float dx,
        float dy,
        float sx,
        float sy,
        float width,
        float height)
{
  GraphicsStack *v12; // rax
  GraphicsStack *v13; // rbp
  int count; // er9
  float *pVerCoord; // rdx
  float *pTexCoord; // r11
  int v17; // eax
  int v18; // er8
  unsigned int *pIndex; // rdi
  int v20; // ecx
  int v21; // er9
  __int64 v22; // rbx
  __int64 v23; // r10
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm5_4
  float v27; // xmm10_4
  float v28; // xmm11_4
  float v29; // xmm4_4
  float m_Height; // xmm0_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm4_4
  float v41; // xmm4_4
  float v42; // xmm4_4
  float m_Prio; // xmm0_4

  v12 = Graphics::gatStack(this, image);
  v13 = v12;
  if ( v12 )
  {
    count = v12->count;
    pVerCoord = v12->pVerCoord;
    pTexCoord = v12->pTexCoord;
    v17 = 3 * count;
    v18 = 3 * count;
    pIndex = v13->pIndex;
    v20 = 8 * count;
    v21 = 4 * count;
    v22 = 2 * v17;
    v23 = 4 * v18;
    v24 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
    v25 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0;
    v26 = (float)(v24 * dx) + (float)this->m_OriginX;
    v27 = width * v24;
    v28 = height * v25;
    v29 = (float)(v25 * dy) + (float)this->m_OriginY;
    m_Height = (float)image->m_Height;
    v31 = sx / (float)image->m_Width;
    v32 = sy / m_Height;
    v33 = (float)(sy + height) / m_Height;
    v34 = (float)(sx + width) / (float)image->m_Width;
    switch ( this->m_FlipMode )
    {
      case 0:
        pVerCoord[v23 + 3] = v26;
        pVerCoord[v23] = v26;
        v26 = v26 + v27;
        pVerCoord[v23 + 7] = v29;
        pVerCoord[v23 + 1] = v29;
        v29 = v29 + v28;
        goto LABEL_4;
      case 1:
        pVerCoord[v23 + 3] = v26;
        pVerCoord[v23] = v26;
        v35 = v26 + v27;
        pVerCoord[v23 + 7] = v29;
        pVerCoord[v23 + 1] = v29;
        v36 = v29 + v28;
        pVerCoord[v23 + 9] = v35;
        pVerCoord[v23 + 6] = v35;
        pVerCoord[v23 + 10] = v36;
        pVerCoord[v23 + 4] = v36;
        pTexCoord[v20 + 2] = v34;
        pTexCoord[v20] = v34;
        pTexCoord[v20 + 5] = v32;
        pTexCoord[v20 + 1] = v32;
        pTexCoord[v20 + 6] = v31;
        pTexCoord[v20 + 4] = v31;
        pTexCoord[v20 + 7] = v33;
        pTexCoord[v20 + 3] = v33;
        break;
      case 2:
        pVerCoord[v23 + 3] = v26;
        pVerCoord[v23] = v26;
        v37 = v26 + v27;
        pVerCoord[v23 + 7] = v29;
        pVerCoord[v23 + 1] = v29;
        v38 = v29 + v28;
        pVerCoord[v23 + 9] = v37;
        pVerCoord[v23 + 6] = v37;
        pVerCoord[v23 + 10] = v38;
        pVerCoord[v23 + 4] = v38;
        goto LABEL_13;
      case 3:
        pVerCoord[v23 + 3] = v26 + v27;
        pVerCoord[v23] = v26 + v27;
        pVerCoord[v23 + 7] = v29 + v28;
        pVerCoord[v23 + 1] = v29 + v28;
LABEL_4:
        pVerCoord[v23 + 4] = v29;
        pVerCoord[v23 + 10] = v29;
        pVerCoord[v23 + 9] = v26;
        pVerCoord[v23 + 6] = v26;
        goto LABEL_5;
      case 4:
        pVerCoord[v23 + 3] = v26;
        pVerCoord[v23] = v26;
        v39 = v26 + v27;
        pVerCoord[v23 + 9] = v29;
        pVerCoord[v23 + 6] = v29;
        pVerCoord[v23 + 7] = v29 + v28;
        pVerCoord[v23 + 1] = v29 + v28;
        pVerCoord[v23 + 10] = v39;
        pVerCoord[v23 + 4] = v39;
        goto LABEL_5;
      case 5:
        pVerCoord[v23 + 7] = v29;
        pVerCoord[v23 + 1] = v29;
        v40 = v29 + v28;
        pVerCoord[v23 + 10] = v26;
        pVerCoord[v23 + 4] = v26;
        pVerCoord[v23 + 3] = v26 + v27;
        pVerCoord[v23] = v26 + v27;
        pVerCoord[v23 + 9] = v40;
        pVerCoord[v23 + 6] = v40;
LABEL_5:
        pTexCoord[v20 + 5] = v32;
        pTexCoord[v20 + 1] = v32;
        pTexCoord[v20 + 7] = v33;
        pTexCoord[v20 + 3] = v33;
        goto LABEL_14;
      case 6:
        pVerCoord[v23 + 7] = v29;
        pVerCoord[v23 + 1] = v29;
        pVerCoord[v23 + 10] = v26;
        v41 = v29 + v28;
        pVerCoord[v23 + 4] = v26;
        pVerCoord[v23 + 3] = v26 + v27;
        pVerCoord[v23] = v26 + v27;
        pVerCoord[v23 + 9] = v41;
        pVerCoord[v23 + 6] = v41;
        pTexCoord[v20 + 2] = v34;
        pTexCoord[v20] = v34;
        pTexCoord[v20 + 5] = v32;
        pTexCoord[v20 + 1] = v32;
        pTexCoord[v20 + 6] = v31;
        pTexCoord[v20 + 4] = v31;
        pTexCoord[v20 + 7] = v33;
        pTexCoord[v20 + 3] = v33;
        break;
      case 7:
        pVerCoord[v23 + 7] = v29;
        pVerCoord[v23 + 1] = v29;
        v42 = v29 + v28;
        pVerCoord[v23 + 10] = v26;
        pVerCoord[v23 + 4] = v26;
        pVerCoord[v23 + 3] = v26 + v27;
        pVerCoord[v23] = v26 + v27;
        pVerCoord[v23 + 9] = v42;
        pVerCoord[v23 + 6] = v42;
LABEL_13:
        pTexCoord[v20 + 3] = v32;
        pTexCoord[v20 + 7] = v32;
        pTexCoord[v20 + 1] = v33;
        pTexCoord[v20 + 5] = v33;
LABEL_14:
        pTexCoord[v20 + 4] = v34;
        pTexCoord[v20 + 6] = v34;
        pTexCoord[v20] = v31;
        pTexCoord[v20 + 2] = v31;
        break;
      default:
        break;
    }
    m_Prio = this->m_Prio;
    pVerCoord[v23 + 11] = m_Prio;
    pVerCoord[v23 + 8] = m_Prio;
    pVerCoord[v23 + 5] = m_Prio;
    pVerCoord[v23 + 2] = m_Prio;
    if ( this->m_EnableDepthAdd )
      this->m_Prio = this->m_Prio + 0.000099999997;
    pIndex[v22] = v21;
    pIndex[v22 + 3] = v21 + 1;
    pIndex[v22 + 1] = v21 + 1;
    pIndex[v22 + 5] = v21 + 2;
    pIndex[v22 + 2] = v21 + 2;
    pIndex[v22 + 4] = v21 + 3;
    ++v13->count;
  }
}

void __fastcall Graphics::drawImageS(
        Graphics *this,
        Image *image,
        float *matrix,
        float sx,
        float sy,
        float width,
        float height)
{
  GraphicsStack *v10; // rax
  GraphicsStack *v11; // rsi
  int count; // er10
  __m128i v13; // xmm1
  unsigned int *pIndex; // r11
  float m_Width; // xmm0_4
  __int64 v16; // r9
  __int64 v17; // rdx
  float *pTexCoord; // rcx
  int v19; // eax
  int v20; // er10
  float v21; // xmm12_4
  __int64 v22; // r8
  float v23; // xmm6_4
  float m_Prio; // xmm0_4
  float v25; // xmm13_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  __int64 v28; // rax
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm9_4
  float v32; // xmm10_4
  float v33; // xmm11_4
  float v34; // xmm3_4
  float v35; // xmm2_4

  v10 = Graphics::gatStack(this, image);
  v11 = v10;
  if ( v10 )
  {
    count = v10->count;
    v13 = _mm_cvtsi32_si128(image->m_Height);
    pIndex = v10->pIndex;
    m_Width = (float)image->m_Width;
    v16 = (__int64)&v10->pVerCoord[12 * count];
    v17 = 8 * count;
    pTexCoord = v10->pTexCoord;
    v19 = 3 * count;
    v20 = 4 * count;
    v21 = sx / m_Width;
    v22 = 2 * v19;
    *(_DWORD *)(v16 + 12) = 0;
    *(_QWORD *)v16 = 0i64;
    *(_DWORD *)(v16 + 28) = 0;
    *(float *)(v16 + 36) = width;
    *(float *)v13.m128i_i32 = _mm_cvtepi32_ps(v13).m128_f32[0];
    v23 = (float)(sx + width) / m_Width;
    *(float *)(v16 + 40) = height;
    *(float *)(v16 + 16) = height;
    *(float *)(v16 + 24) = width;
    m_Prio = this->m_Prio;
    *(float *)(v16 + 44) = m_Prio;
    *(float *)(v16 + 32) = m_Prio;
    *(float *)(v16 + 20) = m_Prio;
    *(float *)(v16 + 8) = m_Prio;
    v25 = sy / *(float *)v13.m128i_i32;
    v26 = (float)(sy + height) / *(float *)v13.m128i_i32;
    if ( this->m_EnableDepthAdd )
      this->m_Prio = this->m_Prio + 0.000099999997;
    v27 = matrix[4];
    v28 = 4i64;
    v29 = matrix[3];
    v30 = matrix[5];
    v31 = matrix[1];
    v32 = *matrix;
    v33 = matrix[2];
    do
    {
      v34 = *(float *)v16;
      v35 = *(float *)(v16 + 4) * v27;
      *(float *)v16 = (float)((float)((float)(*(float *)v16 * v32) + (float)(*(float *)(v16 + 4) * v31)) + v33)
                    + (float)this->m_OriginX;
      *(float *)(v16 + 4) = (float)((float)((float)(v34 * v29) + v35) + v30) + (float)this->m_OriginY;
      v16 += 12i64;
      --v28;
    }
    while ( v28 );
    pTexCoord[v17 + 2] = v21;
    pTexCoord[v17] = v21;
    pTexCoord[v17 + 5] = v25;
    pTexCoord[v17 + 1] = v25;
    pTexCoord[v17 + 6] = v23;
    pTexCoord[v17 + 4] = v23;
    pTexCoord[v17 + 7] = v26;
    pTexCoord[v17 + 3] = v26;
    pIndex[v22 + 3] = v20 + 1;
    pIndex[v22 + 1] = v20 + 1;
    pIndex[v22 + 5] = v20 + 2;
    pIndex[v22 + 2] = v20 + 2;
    pIndex[v22 + 4] = v20 + 3;
    pIndex[v22] = v20;
    ++v11->count;
  }
}

void __fastcall Graphics::drawStack(Graphics *this)
{
  unsigned __int64 m_StackCount; // rax
  int v3; // ebp
  __int64 v4; // r14
  GraphicsStack *v5; // rdi
  int alpha; // esi
  int v7; // er15
  int v8; // er12
  int color_low; // er13
  GLenum v10; // edx
  GLenum v11; // ecx
  unsigned int v12; // ecx
  int v13; // edx
  int count; // er10
  int v15; // er8
  int *v16; // r9
  int v17; // edx
  __int64 v18; // r8
  GraphicsStack *v19; // rcx
  int m_SrcRatio; // er8
  int m_Operator; // edx
  unsigned int v22; // [rsp+30h] [rbp-48h]

  m_StackCount = this->m_StackCount;
  if ( (int)m_StackCount > 0 )
  {
    if ( this->m_bPreDrawMode )
    {
      Graphics::preDrawStack(this);
    }
    else
    {
      qsort(this->m_pStack, m_StackCount, 8ui64, (int (__fastcall *)(const void *, const void *))compareDrawStack);
      v3 = 0;
      if ( this->m_StackCount > 0 )
      {
        v4 = 0i64;
        do
        {
          v5 = this->m_pStack[v4];
          if ( v5->count > 0 )
          {
            alpha = v5->alpha;
            v7 = BYTE2(v5->color);
            v8 = BYTE1(v5->color);
            color_low = LOBYTE(v5->color);
            switch ( v5->blend )
            {
              case 0:
                if ( m_DepthMask != 1 )
                {
                  m_DepthMask = 1;
                  glDepthMask(1u);
                }
                if ( dword_140A9605C )
                {
                  dword_140A9605C = 0;
                  glDisable(0xBE2u);
                }
                if ( m_Mode != 32774 )
                {
                  m_Mode = 32774;
                  m_ModeAlpha = 32774;
                  _glewBlendEquation(0x8006u);
                }
                if ( m_Sfactor != 1 || m_Dfactor )
                {
                  m_Sfactor = 1;
                  m_Dfactor = 0;
                  v10 = 0;
                  m_SfactorAlpha = 1;
                  m_DfactorAlpha = 0;
                  v11 = 1;
                  goto LABEL_64;
                }
                goto LABEL_65;
              case 1:
                if ( m_DepthMask )
                {
                  m_DepthMask = 0;
                  glDepthMask(0);
                }
                if ( dword_140A9605C != 1 )
                {
                  dword_140A9605C = 1;
                  glEnable(0xBE2u);
                }
                if ( m_Mode == 32774 )
                  goto LABEL_24;
                m_Mode = 32774;
                v12 = 32774;
                m_ModeAlpha = 32774;
                goto LABEL_23;
              case 2:
                if ( m_DepthMask )
                {
                  m_DepthMask = 0;
                  glDepthMask(0);
                }
                if ( dword_140A9605C != 1 )
                {
                  dword_140A9605C = 1;
                  glEnable(0xBE2u);
                }
                if ( m_Mode == 32779 )
                  goto LABEL_24;
                m_Mode = 32779;
                v12 = 32779;
                m_ModeAlpha = 32779;
                goto LABEL_23;
              case 3:
                if ( m_DepthMask )
                {
                  m_DepthMask = 0;
                  glDepthMask(0);
                }
                if ( dword_140A9605C != 1 )
                {
                  dword_140A9605C = 1;
                  glEnable(0xBE2u);
                }
                if ( m_Mode != 32774 )
                {
                  m_Mode = 32774;
                  m_ModeAlpha = 32774;
                  _glewBlendEquation(0x8006u);
                }
                goto LABEL_39;
              case 4:
                if ( m_DepthMask )
                {
                  m_DepthMask = 0;
                  glDepthMask(0);
                }
                if ( dword_140A9605C != 1 )
                {
                  dword_140A9605C = 1;
                  glEnable(0xBE2u);
                }
                if ( m_Mode == 32778 )
                  goto LABEL_24;
                m_Mode = 32778;
                v12 = 32778;
                m_ModeAlpha = 32778;
LABEL_23:
                _glewBlendEquation(v12);
LABEL_24:
                if ( m_Sfactor == 770 && m_Dfactor == 1 )
                  goto LABEL_65;
                m_Dfactor = 1;
                v10 = 1;
                m_DfactorAlpha = 1;
                break;
              case 5:
                if ( m_DepthMask != 1 )
                {
                  m_DepthMask = 1;
                  glDepthMask(1u);
                }
                if ( m_Mode != 32774 )
                {
                  m_Mode = 32774;
                  m_ModeAlpha = 32774;
                  _glewBlendEquation(0x8006u);
                }
                if ( dword_140A9605C != 1 )
                {
                  dword_140A9605C = 1;
                  glEnable(0xBE2u);
                }
LABEL_39:
                if ( m_Sfactor == 770 && m_Dfactor == 771 )
                  goto LABEL_65;
                m_Dfactor = 771;
                v10 = 771;
                m_DfactorAlpha = 771;
                break;
              case 6:
                if ( m_DepthMask )
                {
                  m_DepthMask = 0;
                  glDepthMask(0);
                }
                if ( m_Mode != 32774 )
                {
                  m_Mode = 32774;
                  m_ModeAlpha = 32774;
                  _glewBlendEquation(0x8006u);
                }
                if ( dword_140A9605C != 1 )
                {
                  dword_140A9605C = 1;
                  glEnable(0xBE2u);
                }
                if ( m_Sfactor == 770 && m_Dfactor == 32771 )
                  goto LABEL_65;
                m_Dfactor = 32771;
                v10 = 32771;
                m_DfactorAlpha = 32771;
                break;
              default:
                goto LABEL_65;
            }
            v11 = 770;
            m_SfactorAlpha = 770;
            m_Sfactor = 770;
LABEL_64:
            glBlendFunc(v11, v10);
LABEL_65:
            v13 = -1;
            count = 6 * v5->count;
            v15 = count - 1;
            if ( count - 1 >= 0 )
            {
              v16 = (int *)&v5->pIndex[v15];
              do
              {
                if ( *v16 > v13 )
                  v13 = *v16;
                --v15;
                --v16;
              }
              while ( v15 >= 0 );
            }
            OGLRender::drawImage(
              this->m_pRender,
              v5->image,
              v5->pVerCoord,
              v5->pTexCoord,
              color_low | ((v8 | ((v7 | (alpha << 8)) << 8)) << 8),
              v5->pIndex,
              v22,
              v13 + 1,
              count);
          }
          ++v3;
          ++v4;
        }
        while ( v3 < this->m_StackCount );
      }
      v17 = 0;
      if ( this->m_StackMax > 0 )
      {
        v18 = 0i64;
        do
        {
          ++v18;
          ++v17;
          v19 = this->m_pStack[v18 - 1];
          v19->thisID = 0;
          v19->image = 0i64;
          v19->blend = 0;
          v19->alpha = 0;
          v19->count = 0;
          v19->enable = 1;
          v19->color = -1;
        }
        while ( v17 < this->m_StackMax );
      }
      m_SrcRatio = this->m_SrcRatio;
      m_Operator = this->m_Operator;
      this->m_StackCount = 0;
      Graphics::setRenderMode(this, m_Operator, m_SrcRatio);
    }
  }
}

void __fastcall Graphics::drawTexture(Graphics *this, unsigned int textureId, float x, float y, float w, float h)
{
  unsigned int v6; // er9
  int m_Prio_low; // xmm0_4
  OGLRender *m_pRender; // rcx
  unsigned int v10; // [rsp+20h] [rbp-148h]
  int v11; // [rsp+28h] [rbp-140h]
  MeshVertexInfo2D pCoord; // [rsp+30h] [rbp-138h] BYREF
  float v13; // [rsp+70h] [rbp-F8h]
  float v14; // [rsp+74h] [rbp-F4h]
  int v15; // [rsp+78h] [rbp-F0h]
  float v16; // [rsp+A8h] [rbp-C0h]
  float v17; // [rsp+ACh] [rbp-BCh]
  float v18; // [rsp+B0h] [rbp-B8h]
  float v19; // [rsp+B4h] [rbp-B4h]
  int v20; // [rsp+B8h] [rbp-B0h]
  float v21; // [rsp+E8h] [rbp-80h]
  float v22; // [rsp+ECh] [rbp-7Ch]
  float v23; // [rsp+F0h] [rbp-78h]
  float v24; // [rsp+F4h] [rbp-74h]
  int v25; // [rsp+F8h] [rbp-70h]
  float v26; // [rsp+128h] [rbp-40h]
  float v27; // [rsp+12Ch] [rbp-3Ch]

  v13 = x;
  pCoord.m_position.x = x;
  v19 = y;
  pCoord.m_position.y = y;
  v24 = y + h;
  v14 = y + h;
  v23 = x + w;
  v18 = x + w;
  m_Prio_low = LODWORD(this->m_Prio);
  m_pRender = this->m_pRender;
  LODWORD(pCoord.m_position.z) = m_Prio_low;
  v15 = m_Prio_low;
  v20 = m_Prio_low;
  v25 = m_Prio_low;
  v16 = 0.0 / w;
  pCoord.m_texture.x = 0.0 / w;
  v22 = (float)(h + 0.0) / h;
  pCoord.m_texture.y = v22;
  v26 = (float)(w + 0.0) / w;
  v21 = v26;
  v27 = 0.0 / h;
  v17 = 0.0 / h;
  OGLRender::drawTexture(m_pRender, textureId, &pCoord, v6, v10, v11);
  if ( this->m_EnableDepthAdd )
    this->m_Prio = this->m_Prio + 0.000099999997;
}

void __fastcall Graphics::fillRect(Graphics *this, int x, int y, int width, int height)
{
  int v5; // edx
  int v7; // er8
  bool v8; // zf
  float m_Prio; // xmm0_4
  unsigned int m_Color; // edi
  int v11; // [rsp+20h] [rbp-58h]
  float vertex[9]; // [rsp+30h] [rbp-48h] BYREF
  float v13; // [rsp+54h] [rbp-24h]
  float v14; // [rsp+58h] [rbp-20h]
  float v15; // [rsp+5Ch] [rbp-1Ch]

  v5 = this->m_OriginX + x;
  v7 = this->m_OriginY + y;
  v8 = this->m_EnableDepthAdd == 0;
  vertex[3] = (float)v5;
  vertex[0] = (float)v5;
  vertex[7] = (float)v7;
  vertex[1] = (float)v7;
  v14 = (float)(v7 + height);
  vertex[4] = v14;
  m_Prio = this->m_Prio;
  v15 = m_Prio;
  vertex[8] = m_Prio;
  vertex[5] = m_Prio;
  vertex[2] = m_Prio;
  v13 = (float)(v5 + width);
  vertex[6] = v13;
  if ( !v8 )
    this->m_Prio = m_Prio + 0.000099999997;
  m_Color = this->m_Color;
  if ( HIBYTE(this->m_Color) != 255 )
  {
    m_Color = ((HIBYTE(this->m_Color) * (unsigned int)(unsigned __int8)m_Color) >> 8) | ((((HIBYTE(this->m_Color)
                                                                                          * (unsigned int)BYTE1(this->m_Color)) >> 8) | ((((HIBYTE(this->m_Color) * (unsigned int)BYTE2(this->m_Color)) >> 8) | (HIBYTE(this->m_Color) << 8)) << 8)) << 8);
    if ( m_DepthMask )
    {
      m_DepthMask = 0;
      glDepthMask(0);
    }
    if ( dword_140A9605C != 1 )
    {
      dword_140A9605C = 1;
      glEnable(0xBE2u);
    }
    if ( m_Mode != 32774 )
    {
      m_Mode = 32774;
      m_ModeAlpha = 32774;
      _glewBlendEquation(0x8006u);
    }
    if ( m_Sfactor != 770 || m_Dfactor != 771 )
    {
      m_Sfactor = 770;
      m_Dfactor = 771;
      m_SfactorAlpha = 770;
      m_DfactorAlpha = 771;
      glBlendFunc(0x302u, 0x303u);
    }
  }
  dword_140A960B8 = 0;
  dword_140A96050 = 0;
  OGLRender::drawPoly(this->m_pRender, vertex, m_Color, width, v11);
  Graphics::setRenderMode(this, this->m_Operator, this->m_SrcRatio);
}

void __fastcall Graphics::gatStack(Graphics *this, Image *image)
{
  int m_Operator; // eax
  OGLRender *m_pRender; // rcx
  int m_CustomShaderNo2D; // edi
  int v7; // edx
  OGLRender *v8; // rax
  int v9; // ecx
  int v10; // edx
  __int64 v11; // r8
  GraphicsStack *v12; // rcx
  int m_StackMax; // er9
  int v14; // ecx
  GraphicsStack **m_pStack; // rdx
  GraphicsStack *v16; // rdi
  Image *v17; // r8
  __int64 v18; // rax

  if ( image )
  {
    m_Operator = this->m_Operator;
    if ( m_Operator
      && (m_Operator != this->m_OperatorOld
       || this->m_SrcRatio != this->m_SrcRatioOld
       || this->m_StackColor != this->m_ColorOld
       || this->m_pRender->m_CustomShaderNo2D != this->m_CustomShaderNo2DOld) )
    {
      m_pRender = this->m_pRender;
      m_CustomShaderNo2D = m_pRender->m_CustomShaderNo2D;
      m_pRender->m_CustomShaderNo2D = this->m_CustomShaderNo2DOld;
      Graphics::drawStack(this);
      this->m_pRender->m_CustomShaderNo2D = m_CustomShaderNo2D;
    }
    v7 = this->m_Operator;
    this->m_SrcRatioOld = this->m_SrcRatio;
    v8 = this->m_pRender;
    this->m_OperatorOld = v7;
    v9 = v8->m_CustomShaderNo2D;
    this->m_ColorOld = this->m_StackColor;
    this->m_CustomShaderNo2DOld = v9;
    if ( v7 )
    {
      v10 = 0;
      if ( this->m_StackCount > 0 )
      {
        v11 = 0i64;
        do
        {
          v12 = this->m_pStack[v11];
          if ( v12->blend && v12->image != image )
            v12->enable = 0;
          ++v10;
          ++v11;
        }
        while ( v10 < this->m_StackCount );
      }
    }
    m_StackMax = this->m_StackMax;
    v14 = 0;
    if ( m_StackMax <= 0 )
    {
LABEL_24:
      Graphics::addStack(this);
      *(_DWORD *)(v18 + 32) = this->m_StackCount - 1;
      *(_QWORD *)(v18 + 40) = image;
      *(_DWORD *)(v18 + 48) = this->m_Operator;
      *(_BYTE *)(v18 + 52) = this->m_SrcRatio;
      *(_DWORD *)(v18 + 56) = 0;
      *(_DWORD *)(v18 + 64) = this->m_StackColor;
      if ( this->m_Operator )
        *(_BYTE *)(v18 + 68) = 0;
      ++this->m_StackCount;
    }
    else
    {
      m_pStack = this->m_pStack;
      while ( 1 )
      {
        v16 = *m_pStack;
        if ( (*m_pStack)->enable )
        {
          v17 = v16->image;
          if ( v17 == image
            && v16->blend == this->m_Operator
            && v16->alpha == this->m_SrcRatio
            && v16->color == this->m_Color )
          {
            GraphicsStack::add(v16, v16->count + 1);
            return;
          }
          if ( !v17 )
            break;
        }
        ++v14;
        ++m_pStack;
        if ( v14 >= m_StackMax )
          goto LABEL_24;
      }
      v16->thisID = v14;
      v16->image = image;
      v16->blend = this->m_Operator;
      v16->alpha = this->m_SrcRatio;
      v16->count = 0;
      v16->color = this->m_StackColor;
      GraphicsStack::add(v16, 1);
      ++this->m_StackCount;
    }
  }
}

__int64 __fastcall Graphics::initialize(Graphics *this, OGLRender *pRender, float a3)
{
  Font *Font; // rax
  __int64 result; // rax

  Font = defaultFont;
  if ( defaultFont )
  {
    Font = Font::createFont((int)this, 14, a3);
    defaultFont = Font;
  }
  this->m_pFont = Font;
  result = 1i64;
  *(_QWORD *)&this->m_OriginX = 0i64;
  *(_QWORD *)&this->m_ClipX = 0i64;
  *(_QWORD *)&this->m_ClipW = 0i64;
  *(_QWORD *)&this->m_FlipMode = 0i64;
  this->m_pStack = 0i64;
  *(_QWORD *)&this->m_StackMax = 0i64;
  this->m_Prio = 0.0;
  this->m_OperatorOld = 0;
  this->m_bPreDrawMode = 0;
  *(_QWORD *)&this->m_Color = -1i64;
  this->m_SrcRatio = 255;
  this->m_DstRatio = 255;
  this->m_Scal = 1.0;
  this->m_EnableDepthAdd = 1;
  this->m_SrcRatioOld = 255;
  *(_QWORD *)&this->m_CustomShaderNo2DOld = -1i64;
  this->m_pRender = pRender;
  return result;
}

void __fastcall Graphics::lock(Graphics *this, int w, int h)
{
  OGLMatrix *p_m_Proj; // rcx
  float t; // xmm3_4
  float v8; // xmm2_4
  OGLMatrix *p_m_View; // rax

  this->m_OriginW = w;
  *(_QWORD *)&this->m_OriginX = 0i64;
  this->m_OriginH = h;
  this->m_Color = -1;
  if ( !this->m_bPreDrawMode && (m_viewportX || m_viewportY || w != m_viewportW || h != m_viewportH) )
  {
    m_viewportX = 0;
    m_viewportY = 0;
    m_viewportW = w;
    m_viewportH = h;
    glViewport(0, 0, w, h);
  }
  p_m_Proj = &this->m_pRender->m_Proj;
  t = (float)h;
  v8 = (float)w;
  if ( Framework::GLManager::glm->systemRenderID[Framework::GLManager::glm->m_backBufferIndex] == Framework::GLManager::glm->currentRenderID )
    OGLMatrix::ortho(p_m_Proj, 0.0, v8, 0.0, t, -1.0, 1.0);
  else
    OGLMatrix::ortho(p_m_Proj, 0.0, v8, t, 0.0, -1.0, 1.0);
  p_m_View = &this->m_pRender->m_View;
  *(_QWORD *)p_m_View->m = 1065353216i64;
  p_m_View->m[4] = 0.0;
  *(_QWORD *)&p_m_View->m[8] = 0i64;
  *(_QWORD *)&p_m_View->m[12] = 0i64;
  *(_QWORD *)&p_m_View->m[5] = 1065353216i64;
  *(_QWORD *)&p_m_View->m[2] = 0i64;
  *(_QWORD *)&p_m_View->m[10] = 1065353216i64;
  p_m_View->m[14] = 0.0;
  p_m_View->m[7] = 0.0;
  p_m_View->m[15] = 1.0;
  this->m_Prio = 0.000099999997;
  if ( !this->m_bPreDrawMode )
  {
    if ( dword_140A9606C != 1 )
    {
      dword_140A9606C = 1;
      glEnable(0xB71u);
    }
    glDepthFunc(0x203u);
    dword_140A96058 = 0;
    if ( dword_140A9605C )
    {
      dword_140A9605C = 0;
      glDisable(0xBE2u);
    }
    if ( dword_140A96054 )
    {
      dword_140A96054 = 0;
      glDisable(0xB44u);
    }
    this->m_Operator = 0;
    this->m_SrcRatio = 255;
    this->m_DstRatio = 255;
    if ( !this->m_bPreDrawMode )
    {
      if ( m_DepthMask != 1 )
      {
        m_DepthMask = 1;
        glDepthMask(1u);
      }
      if ( m_Mode != 32774 )
      {
        m_Mode = 32774;
        m_ModeAlpha = 32774;
        _glewBlendEquation(0x8006u);
      }
      if ( dword_140A9605C )
      {
        dword_140A9605C = 0;
        glDisable(0xBE2u);
      }
      if ( m_dMode != 515 )
      {
        m_dMode = 515;
        glDepthFunc(0x203u);
      }
    }
    if ( 0.80000001 != m_blendColorR
      || 0.80000001 != m_blendColorG
      || 0.80000001 != m_blendColorB
      || 0.80000001 != m_blendColorA )
    {
      m_blendColorR = 0.80000001;
      m_blendColorG = 0.80000001;
      m_blendColorB = 0.80000001;
      m_blendColorA = 0.80000001;
      _glewBlendColor(0.80000001, 0.80000001, 0.80000001, 0.80000001);
    }
  }
}

void __fastcall Graphics::lock(Graphics *this, int x, int y, int w, int h, float scale)
{
  bool v6; // zf
  OGLMatrix *p_m_Proj; // rcx
  float t; // xmm3_4
  float v11; // xmm2_4
  OGLMatrix *p_m_View; // rax

  v6 = this->m_bPreDrawMode == 0;
  this->m_Scal = scale;
  this->m_OriginY = y;
  this->m_OriginX = x;
  this->m_OriginW = w;
  this->m_OriginH = h;
  this->m_Color = -1;
  if ( v6 && (x != m_viewportX || y != m_viewportY || w != m_viewportW || h != m_viewportH) )
  {
    m_viewportX = x;
    m_viewportY = y;
    m_viewportW = w;
    m_viewportH = h;
    glViewport(x, y, w, h);
  }
  p_m_Proj = &this->m_pRender->m_Proj;
  t = (float)h;
  v11 = (float)w;
  if ( Framework::GLManager::glm->systemRenderID[Framework::GLManager::glm->m_backBufferIndex] == Framework::GLManager::glm->currentRenderID )
    OGLMatrix::ortho(p_m_Proj, 0.0, v11, 0.0, t, -1.0, 1.0);
  else
    OGLMatrix::ortho(p_m_Proj, 0.0, v11, t, 0.0, -1.0, 1.0);
  p_m_View = &this->m_pRender->m_View;
  *(_QWORD *)p_m_View->m = 1065353216i64;
  p_m_View->m[4] = 0.0;
  *(_QWORD *)&p_m_View->m[8] = 0i64;
  *(_QWORD *)&p_m_View->m[12] = 0i64;
  *(_QWORD *)&p_m_View->m[5] = 1065353216i64;
  *(_QWORD *)&p_m_View->m[2] = 0i64;
  *(_QWORD *)&p_m_View->m[10] = 1065353216i64;
  p_m_View->m[14] = 0.0;
  p_m_View->m[7] = 0.0;
  p_m_View->m[15] = 1.0;
  this->m_Prio = 0.000099999997;
  if ( !this->m_bPreDrawMode )
  {
    if ( dword_140A9606C != 1 )
    {
      dword_140A9606C = 1;
      glEnable(0xB71u);
    }
    glDepthFunc(0x203u);
    dword_140A96058 = 0;
    if ( dword_140A9605C )
    {
      dword_140A9605C = 0;
      glDisable(0xBE2u);
    }
    if ( dword_140A96054 )
    {
      dword_140A96054 = 0;
      glDisable(0xB44u);
    }
    this->m_Operator = 0;
    this->m_SrcRatio = 255;
    this->m_DstRatio = 255;
    if ( !this->m_bPreDrawMode )
    {
      if ( m_DepthMask != 1 )
      {
        m_DepthMask = 1;
        glDepthMask(1u);
      }
      if ( m_Mode != 32774 )
      {
        m_Mode = 32774;
        m_ModeAlpha = 32774;
        _glewBlendEquation(0x8006u);
      }
      if ( dword_140A9605C )
      {
        dword_140A9605C = 0;
        glDisable(0xBE2u);
      }
      if ( m_dMode != 515 )
      {
        m_dMode = 515;
        glDepthFunc(0x203u);
      }
    }
    if ( 0.80000001 != m_blendColorR
      || 0.80000001 != m_blendColorG
      || 0.80000001 != m_blendColorB
      || 0.80000001 != m_blendColorA )
    {
      m_blendColorR = 0.80000001;
      m_blendColorG = 0.80000001;
      m_blendColorB = 0.80000001;
      m_blendColorA = 0.80000001;
      _glewBlendColor(0.80000001, 0.80000001, 0.80000001, 0.80000001);
    }
  }
}

void __fastcall Graphics::preDrawStack(Graphics *this)
{
  unsigned __int64 m_StackCount; // rax
  int v3; // edi
  __int64 v4; // rsi
  GraphicsStack *v5; // r10
  int count; // eax
  int v7; // er8
  int v8; // edx
  int *v9; // r9
  int v10; // edx
  __int64 v11; // r8
  GraphicsStack *v12; // rcx
  unsigned int v13; // [rsp+30h] [rbp-48h]

  m_StackCount = this->m_StackCount;
  if ( (int)m_StackCount > 0 )
  {
    qsort(this->m_pStack, m_StackCount, 8ui64, (int (__fastcall *)(const void *, const void *))compareDrawStack);
    v3 = 0;
    if ( this->m_StackCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = this->m_pStack[v4];
        count = v5->count;
        if ( count > 0 )
        {
          v7 = 6 * count - 1;
          v8 = -1;
          if ( v7 >= 0 )
          {
            v9 = (int *)&v5->pIndex[v7];
            do
            {
              if ( *v9 > v8 )
                v8 = *v9;
              --v7;
              --v9;
            }
            while ( v7 >= 0 );
          }
          OGLRender::preDrawImage(
            this->m_pRender,
            v5->image,
            v5->pVerCoord,
            v5->pTexCoord,
            LOBYTE(v5->color) | ((BYTE1(v5->color) | ((BYTE2(v5->color) | (v5->alpha << 8)) << 8)) << 8),
            v5->pIndex,
            v13,
            v8 + 1,
            6 * count,
            v5->blend);
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_StackCount );
    }
    v10 = 0;
    if ( this->m_StackMax > 0 )
    {
      v11 = 0i64;
      do
      {
        ++v11;
        ++v10;
        v12 = this->m_pStack[v11 - 1];
        v12->thisID = 0;
        v12->image = 0i64;
        v12->blend = 0;
        v12->alpha = 0;
        v12->count = 0;
        v12->enable = 1;
        v12->color = -1;
      }
      while ( v10 < this->m_StackMax );
    }
    this->m_StackCount = 0;
  }
}

void __fastcall Graphics::setRenderMode(Graphics *this, int Operator, int srcRatio)
{
  bool v3; // zf
  unsigned int v4; // ecx
  GLenum v5; // edx

  v3 = this->m_bPreDrawMode == 0;
  this->m_SrcRatio = (unsigned __int8)srcRatio;
  this->m_Operator = Operator;
  this->m_DstRatio = 255;
  if ( v3 )
  {
    switch ( 0x40000000u )
    {
      case 0u:
        if ( m_DepthMask != 1 )
        {
          m_DepthMask = 1;
          glDepthMask(1u);
        }
        if ( m_Mode != 32774 )
        {
          m_Mode = 32774;
          m_ModeAlpha = 32774;
          _glewBlendEquation(0x8006u);
        }
        if ( dword_140A9605C )
        {
          dword_140A9605C = 0;
          glDisable(0xBE2u);
        }
        goto LABEL_57;
      case 1u:
        if ( m_DepthMask )
        {
          m_DepthMask = 0;
          glDepthMask(0);
        }
        if ( m_Mode == 32774 )
          goto LABEL_14;
        m_Mode = 32774;
        v4 = 32774;
        m_ModeAlpha = 32774;
        goto LABEL_13;
      case 2u:
        if ( m_DepthMask )
        {
          m_DepthMask = 0;
          glDepthMask(0);
        }
        if ( m_Mode == 32779 )
          goto LABEL_14;
        m_Mode = 32779;
        v4 = 32779;
        m_ModeAlpha = 32779;
        goto LABEL_13;
      case 3u:
        if ( m_DepthMask )
        {
          m_DepthMask = 0;
          glDepthMask(0);
        }
        if ( m_Mode != 32774 )
        {
          m_Mode = 32774;
          m_ModeAlpha = 32774;
          _glewBlendEquation(0x8006u);
        }
        if ( dword_140A9605C != 1 )
        {
          dword_140A9605C = 1;
          glEnable(0xBE2u);
        }
        if ( m_Sfactor == 770 && m_Dfactor == 771 )
          goto LABEL_57;
        m_Dfactor = 771;
        v5 = 771;
        m_DfactorAlpha = 771;
        goto LABEL_56;
      case 4u:
        if ( m_DepthMask )
        {
          m_DepthMask = 0;
          glDepthMask(0);
        }
        if ( m_Mode == 32778 )
          goto LABEL_14;
        m_Mode = 32778;
        v4 = 32778;
        m_ModeAlpha = 32778;
LABEL_13:
        _glewBlendEquation(v4);
LABEL_14:
        if ( dword_140A9605C != 1 )
        {
          dword_140A9605C = 1;
          glEnable(0xBE2u);
        }
        if ( m_Sfactor == 770 && m_Dfactor == 1 )
          goto LABEL_57;
        m_Dfactor = 1;
        v5 = 1;
        m_DfactorAlpha = 1;
LABEL_56:
        m_Sfactor = 770;
        m_SfactorAlpha = 770;
        glBlendFunc(0x302u, v5);
LABEL_57:
        if ( m_dMode != 515 )
        {
          m_dMode = 515;
          glDepthFunc(0x203u);
        }
        break;
      case 5u:
        if ( m_DepthMask != 1 )
        {
          m_DepthMask = 1;
          glDepthMask(1u);
        }
        if ( m_Mode != 32774 )
        {
          m_Mode = 32774;
          m_ModeAlpha = 32774;
          _glewBlendEquation(0x8006u);
        }
        if ( dword_140A9605C != 1 )
        {
          dword_140A9605C = 1;
          glEnable(0xBE2u);
        }
        if ( m_Sfactor != 770 || m_Dfactor != 771 )
        {
          m_Sfactor = 770;
          m_Dfactor = 771;
          m_SfactorAlpha = 770;
          m_DfactorAlpha = 771;
          glBlendFunc(0x302u, 0x303u);
        }
        if ( m_dMode != 513 )
        {
          m_dMode = 513;
          glDepthFunc(0x201u);
        }
        return;
      case 6u:
        if ( m_DepthMask )
        {
          m_DepthMask = 0;
          glDepthMask(0);
        }
        if ( m_Mode != 32774 )
        {
          m_Mode = 32774;
          m_ModeAlpha = 32774;
          _glewBlendEquation(0x8006u);
        }
        if ( dword_140A9605C != 1 )
        {
          dword_140A9605C = 1;
          glEnable(0xBE2u);
        }
        if ( m_Sfactor == 770 && m_Dfactor == 32771 )
          goto LABEL_57;
        m_Dfactor = 32771;
        v5 = 32771;
        m_DfactorAlpha = 32771;
        goto LABEL_56;
      default:
        return;
    }
  }
}

