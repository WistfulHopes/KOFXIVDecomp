#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/memory/agframeallocator.inl"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofapplication.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/system/agsystemmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/system/agsystemconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/memory/agframeallocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofapplication.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"

void * Framework::MemoryManager::allocate(unsigned long long size, unsigned long long alignment); // 0x1402C45D0
void Framework::MemoryManager::release(void * pointer); // 0x1402C4790
Framework::GLManager::GLManager(long argc, const char * * argv); // 0x1402C4840
Framework::MemoryManager::MemoryManager(); // 0x1402C4B50
AgFrameAllocator<AgAllocator<1> >::~AgFrameAllocator<AgAllocator<1> >(); // 0x1402C4580
std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >::~map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(); // 0x1400985D0
Framework::Input::ControllerContext::ControllerContext(); // 0x1402C4AD0
Framework::Input::ControllerContext::~ControllerContext(); // 0x1402C4510
Framework::MemoryManager::~MemoryManager(); // 0x1402C45C0
void Framework::GLManager::swapBuffer(); // 0x1402C4B70
void Framework::GLManager::updateClock(); // 0x1402C4F60
void Framework::GLManager::swapStackBuffer(); // 0x1402C5060
void Framework::GLManager::InitBuffer(Framework::GLManager::Buffer & buffer, long width, long height); // 0x1402C5110
void Framework::GLManager::startUp(long width, long height); // 0x1402C51C0
void Framework::GLManager::createFrameBuffers(long width, long height); // 0x1402C5610
void Framework::GLManager::destroyFrameBuffers(); // 0x1402C58F0
void Framework::GLManager::setCurrentFrameBuffer(); // 0x1402C5B60
void Framework::GLManager::GraphicsUnlock(bool bLockMain); // 0x1402C5C50
void Framework::GLManager::LoadingLock(long index, bool bLockMain); // 0x1402C5CF0
void Framework::GLManager::LoadingUnlock(long index, bool bLockMain); // 0x1402C5D90
void Framework::GLManager::startRenderThread(std::function<void __cdecl(void)> exec); // 0x1402C5E20
void Framework::GLManager::onExecuteThread(); // 0x1402C5ED0
void Framework::GLManager::onJoinThread(); // 0x1402C5F10
long Framework::GLManager::getThreadIsRunning(); // 0x1402C5F20
void glClearAG(unsigned long mask); // 0x1402C5F30
void glGenTexturesAG(long n, unsigned long * textures); // 0x1402C6090
class RenderBuffer
{
public:
	unsigned long m_renderBuffer; // 0x0
	unsigned long m_color; // 0x4
	unsigned long m_depth; // 0x8
};
void(*m_renderBuffers$initializer$)(); // 0x1407408E8
long g_vertexAttribIndex[32]; // 0x140ACA8C0
unsigned long g_pendingVertexAttribArrays; // 0x140A9B694
unsigned long g_enabledVertexAttribArrays; // 0x140A9B6A8
long g_maxEnabledVertexAttribArrays; // 0x140A9B6AC
std::piecewise_construct_t std::piecewise_construct; // 0x1408AFCCD
class std::vector<RenderBuffer,std::allocator<RenderBuffer> > :
	std::_Vector_alloc<std::_Vec_base_types<RenderBuffer,std::allocator<RenderBuffer> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef RenderBuffer pointer;
	typedef const RenderBuffer const_pointer;
	typedef RenderBuffer reference;
	typedef const RenderBuffer const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<RenderBuffer,std::allocator<RenderBuffer> >(std::initializer_list<RenderBuffer>, const std::allocator<RenderBuffer> &);
	vector<RenderBuffer,std::allocator<RenderBuffer> >(std::vector<RenderBuffer,std::allocator<RenderBuffer> > &, const std::allocator<RenderBuffer> &);
	vector<RenderBuffer,std::allocator<RenderBuffer> >(std::vector<RenderBuffer,std::allocator<RenderBuffer> > &);
	vector<RenderBuffer,std::allocator<RenderBuffer> >(const std::vector<RenderBuffer,std::allocator<RenderBuffer> > &, const std::allocator<RenderBuffer> &);
	vector<RenderBuffer,std::allocator<RenderBuffer> >(const std::vector<RenderBuffer,std::allocator<RenderBuffer> > &);
	vector<RenderBuffer,std::allocator<RenderBuffer> >(unsigned long long, const RenderBuffer &, const std::allocator<RenderBuffer> &);
	vector<RenderBuffer,std::allocator<RenderBuffer> >(unsigned long long, const RenderBuffer &);
	vector<RenderBuffer,std::allocator<RenderBuffer> >(unsigned long long);
	vector<RenderBuffer,std::allocator<RenderBuffer> >(const std::allocator<RenderBuffer> &);
	vector<RenderBuffer,std::allocator<RenderBuffer> >();
	void _Construct_n(unsigned long long, const RenderBuffer *);
	std::vector<RenderBuffer,std::allocator<RenderBuffer> > & operator=(const std::vector<RenderBuffer,std::allocator<RenderBuffer> > &);
	std::vector<RenderBuffer,std::allocator<RenderBuffer> > & operator=(std::initializer_list<RenderBuffer>);
	std::vector<RenderBuffer,std::allocator<RenderBuffer> > & operator=(std::vector<RenderBuffer,std::allocator<RenderBuffer> > &);
	void _Assign_rv(std::vector<RenderBuffer,std::allocator<RenderBuffer> > &);
	void _Assign_rv(std::vector<RenderBuffer,std::allocator<RenderBuffer> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<RenderBuffer,std::allocator<RenderBuffer> > &, std::integral_constant<bool,1>);
	void push_back(const RenderBuffer &);
	void push_back(RenderBuffer &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >, unsigned long long, const RenderBuffer &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >, const RenderBuffer &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >, std::initializer_list<RenderBuffer>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >, RenderBuffer &);
	void assign(unsigned long long, const RenderBuffer &);
	void assign(std::initializer_list<RenderBuffer>);
	~vector<RenderBuffer,std::allocator<RenderBuffer> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const RenderBuffer &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<RenderBuffer> get_allocator();
	RenderBuffer & at(unsigned long long);
	const RenderBuffer & at(unsigned long long);
	RenderBuffer & operator[](unsigned long long);
	const RenderBuffer & operator[](unsigned long long);
	const RenderBuffer * data();
	RenderBuffer * data();
	const RenderBuffer & front();
	RenderBuffer & front();
	const RenderBuffer & back();
	RenderBuffer & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<RenderBuffer,std::allocator<RenderBuffer> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(RenderBuffer *, RenderBuffer *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const RenderBuffer *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<RenderBuffer> > >, unsigned long long, const RenderBuffer &);
	RenderBuffer * _Ufill(RenderBuffer *, unsigned long long, const RenderBuffer *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(RenderBuffer *, RenderBuffer *);
};
void glGenRenderbuffersAG(long n, unsigned long * renderbuffers); // 0x1402C6160
void glDeleteRenderbuffersAG(long n, unsigned long * renderbuffers); // 0x1402C6280
void glBindRenderbufferAG(unsigned long target, unsigned long renderbuffer); // 0x1402C6300
void glTexImage2DAG(unsigned long target, long level, long internalFormat, long width, long height, long border, unsigned long format, unsigned long typeOrCompressedSize, const void * data, bool hasMips, bool isCompressed); // 0x1402C6370
void glTexSubImage2DAG(unsigned long target, long level, long xoffset, long yoffset, long width, long height, unsigned long format, unsigned long typeOrCompressedSize, const void * data, bool isCompressed); // 0x1402C6460
void glCopyTexImage2DAG(unsigned long target, long level, unsigned long internalformat, long x, long y, long width, long height, long border); // 0x1402C64D0
void glsFramebufferTexture2D(unsigned long target, unsigned long attachment, unsigned long textarget, unsigned long texture, long level, unsigned long width, unsigned long height, unsigned long format); // 0x1402C6520
void glVertexAttribPointerAG(unsigned long indx, long size, unsigned long type, unsigned char normalized, long stride, const void * ptr); // 0x1402C67B0
void glEnableVertexAttribArrayAG(unsigned long index); // 0x1402C6A10
void applyVertexAttribArrays(); // 0x1402C6A60
void Framework::GLManager::applyOutputMask(); // 0x1402C6B50
void glDrawArraysAG(unsigned long mode, long first, long count); // 0x1402C6C40
void glDrawElementsAG(unsigned long mode, long count, unsigned long type, const void * indices); // 0x1402C6D60
void glDrawElementsInstancedAG(unsigned long mode, long count, unsigned long type, const void * indices, long primcount); // 0x1402C6EA0
void glUniform2fvAG(long location, long count, const float * v); // 0x1402C6F30
void glUniform4fAG(long location, float x, float y, float z, float w); // 0x1402C6F90
void glUniform4fvAG(long location, long count, const float * v); // 0x1402C7020
void glUniformMatrix4fvAG(long location, long count, unsigned char transpose, const float * value); // 0x1402C70C0
void glUniformMatrix4fvMatrixClassBoneAG(long location, long count, unsigned char transpose, const Matrix4Unaligned * value); // 0x1402C7160
void Framework::GLManager::glGenHalfRenderbuffers(long n, unsigned long * renderbuffers); // 0x1402C7210
void Framework::GLManager::glGenThirdRenderbuffers(long n, unsigned long * renderbuffers); // 0x1402C72F0
void Framework::GLManager::glGenEighthRenderbuffers(long n, unsigned long * renderbuffers); // 0x1402C73D0
void Framework::GLManager::glBindHalfRenderbuffer(unsigned long target, unsigned long renderbuffer); // 0x1402C74B0
void Framework::GLManager::glBindThirdRenderbuffer(unsigned long target, unsigned long renderbuffer); // 0x1402C7510
void Framework::GLManager::glBindEighthRenderbuffer(unsigned long target, unsigned long renderbuffer); // 0x1402C7570//decompilation failure at 1407408E8!
//decompilation failure at 140ACA8C0!
//decompilation failure at 140A9B694!
//decompilation failure at 140A9B6A8!
//decompilation failure at 140A9B6AC!
//decompilation failure at 1408AFCCD!
std::function<void __cdecl(void)> *__fastcall std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>::operator=(
        std::function<void __cdecl(void)> *this,
        std::function<void __cdecl(void)> *_Func)
{
  std::_Func_base<void> *v3; // rcx
  _BOOL8 v4; // rdx
  std::_Func_class<void> v6; // [rsp+30h] [rbp-58h] BYREF

  v6._Mystorage._Ptrs[7] = 0i64;
  v3 = _Func->_Mystorage._Ptrs[7];
  if ( v3 )
    v6._Mystorage._Ptrs[7] = (std::_Func_base<void> *)v3->_Copy(v3, &v6);
  std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Swap(&v6, this);
  if ( v6._Mystorage._Ptrs[7] )
  {
    LOBYTE(v4) = v6._Mystorage._Ptrs[7] != (std::_Func_base<void> *)&v6;
    v6._Mystorage._Ptrs[7]->_Delete_this(v6._Mystorage._Ptrs[7], v4);
  }
  return this;
}

void __fastcall AgFrameAllocator<AgAllocator<1>>::AgFrameAllocator<AgAllocator<1>>(
        AgFrameAllocator<AgAllocator<1> > *this,
        unsigned int blockSize,
        unsigned int blockCount,
        unsigned int frameCount)
{
  __int64 v6; // rbx
  unsigned __int8 *v7; // rcx

  this->m_frameCount = 0;
  this->m_blockSize = blockSize;
  *(_QWORD *)&this->m_currentBlock = 0i64;
  this->m_frameStartOffset = 0i64;
  this->m_frameEndOffset = 0i64;
  this->m_lastFrameStartOffset = 0i64;
  this->m_lastAllocation = 0i64;
  this->m_blocks._Mypair._Myval2._Myfirst = 0i64;
  this->m_blocks._Mypair._Myval2._Mylast = 0i64;
  this->m_blocks._Mypair._Myval2._Myend = 0i64;
  v6 = blockCount;
  if ( blockCount )
    std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
      (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)&this->m_blocks,
      blockCount);
  if ( blockCount )
  {
    do
    {
      AgFrameAllocator<AgAllocator<1>>::_allocateBlock(this);
      --v6;
    }
    while ( v6 );
  }
  this->m_frameCount = 1;
  v7 = *this->m_blocks._Mypair._Myval2._Myfirst;
  this->m_frameStartOffset = v7;
  this->m_frameEndOffset = &v7[this->m_blockSize];
}

void __fastcall AgPointer<AgController>::AgPointer<AgController>(AgPointer<AgMemoryStream> *this)
{
  this->m_ref = 0i64;
  this->m_ptr = 0i64;
}

void __fastcall std::_Wrap_alloc<std::allocator<RenderBuffer>>::_Wrap_alloc<std::allocator<RenderBuffer>>(
        std::_Wrap_alloc<std::allocator<RenderBuffer> > *this)
{
  ;
}

void __fastcall Framework::Input::ControllerContext::ControllerContext(Framework::Input::ControllerContext *this)
{
  std::_Tree_comp_alloc<std::_Tmap_traits<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> >,0> > *v2; // rcx

  this->m_keyboard.m_ref = 0i64;
  this->m_keyboard.m_ptr = 0i64;
  `eh vector constructor iterator'(
    &this->m_gamepad,
    0x10ui64,
    4ui64,
    (void (__fastcall *)(void *))AgPointer<AgController>::AgPointer<AgController>,
    (void (__fastcall *)(void *))AgPointer<AgUser>::~AgPointer<AgUser>);
  this->m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const,int>>,0>>::_Buyheadnode(v2);
}

void __fastcall Framework::GLManager::GLManager(Framework::GLManager *this, int argc, const char **argv)
{
  std::deque<std::function<void __cdecl(void)>> *p_m_commandBufferSyncLazyFuncQueue; // rdi
  std::_Container_proxy *v5; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 *m_freeIDs; // rdx
  unsigned int v8; // er9
  unsigned int v9; // er9
  unsigned __int8 v10; // cl
  unsigned __int8 *v11; // rdx
  unsigned __int8 v12; // cl
  unsigned __int8 *v13; // rdx
  unsigned __int8 v14; // cl
  unsigned __int8 *v15; // rdx
  unsigned __int8 v16; // cl
  unsigned __int8 *v17; // rdx
  unsigned __int8 v18; // cl
  unsigned __int8 *v19; // rdx

  this->__vftable = (Framework::GLManager_vtbl *)&Framework::GLManager::`vftable';
  p_m_commandBufferSyncLazyFuncQueue = &this->m_commandBufferSyncLazyFuncQueue;
  this->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy = 0i64;
  this->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Map = 0i64;
  this->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Mapsize = 0i64;
  this->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myoff = 0i64;
  this->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Mysize = 0i64;
  v5 = (std::_Container_proxy *)operator new(0x10ui64);
  p_m_commandBufferSyncLazyFuncQueue->_Mypair._Myval2._Myproxy = v5;
  if ( v5 )
    *v5 = 0i64;
  p_m_commandBufferSyncLazyFuncQueue->_Mypair._Myval2._Myproxy->_Mycont = (const std::_Container_base12 *)p_m_commandBufferSyncLazyFuncQueue;
  this->commandBoneCount = 0;
  v6 = 0;
  m_freeIDs = this->m_renderbuffer.m_freeIDs;
  do
    *m_freeIDs++ = 32 - v6++;
  while ( v6 < 0x20u );
  this->m_renderbuffer.m_firstOccupiedIndex = 32;
  this->m_currentOutputMask = 0;
  Framework::Input::ControllerContext::ControllerContext(&this->m_controllerContext);
  AgFrameAllocator<AgAllocator<1>>::AgFrameAllocator<AgAllocator<1>>(&this->m_agDrawAllocator, 0x3000000u, 2u, v8);
  AgFrameAllocator<AgAllocator<1>>::AgFrameAllocator<AgAllocator<1>>(&this->m_agAllocator, 0x1000000u, 1u, v9);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->allocateStaticBuffers.memMutex);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->allocateSound.memMutex);
  `eh vector constructor iterator'(
    this->allocateStaticBuffersEffect,
    0x60ui64,
    7ui64,
    (void (__fastcall *)(void *))Framework::MemoryManager::MemoryManager,
    (void (__fastcall *)(void *))Framework::MemoryManager::~MemoryManager);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->allocateScriptBuffers.memMutex);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->allocateLuaScriptBuffers.memMutex);
  this->m_secondsElapsedActual = 0.0;
  this->m_secondsElapsedActualPerFrame = 0.0;
  this->m_secondsElapsedApparent = 0.0;
  this->m_secondsElapsedApparentLastFrame = 0.0;
  v10 = 0;
  v11 = this->m_buffer.m_freeIDs;
  do
    *v11++ = 25 - v10++;
  while ( v10 < 0x19u );
  this->m_buffer.m_firstOccupiedIndex = 25;
  v12 = 0;
  v13 = this->m_customSizeBuffer.m_freeIDs;
  do
    *v13++ = 6 - v12++;
  while ( v12 < 6u );
  this->m_customSizeBuffer.m_firstOccupiedIndex = 6;
  v14 = 0;
  v15 = this->m_halfBuffer.m_freeIDs;
  do
    *v15++ = 4 - v14++;
  while ( v14 < 4u );
  this->m_halfBuffer.m_firstOccupiedIndex = 4;
  v16 = 0;
  v17 = this->m_thirdBuffer.m_freeIDs;
  do
    *v17++ = 2 - v16++;
  while ( v16 < 2u );
  this->m_thirdBuffer.m_firstOccupiedIndex = 2;
  v18 = 0;
  v19 = this->m_eighthBuffer.m_freeIDs;
  do
    *v19++ = 4 - v18++;
  while ( v18 < 4u );
  this->m_eighthBuffer.m_firstOccupiedIndex = 4;
  this->m_cpuTimerIncludingFramework.m_clocks = 0i64;
  this->m_cpuTimerExcludingFramework.m_clocks = 0i64;
  this->m_renderThread.m_ref = 0i64;
  this->m_renderThread.m_ptr = 0i64;
  this->m_renderThreadRunning = 0;
  this->m_renderThreadExec._Mystorage._Ptrs[7] = 0i64;
  this->m_bOpenGLBlocked = 0;
  this->m_paused = 0;
  this->m_frameProgressSpeed = 1.0;
}

void __fastcall Framework::MemoryManager::MemoryManager(Framework::MemoryManager *this)
{
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->memMutex);
}

void __fastcall AgFrameAllocator<AgAllocator<1>>::~AgFrameAllocator<AgAllocator<1>>(
        AgFrameAllocator<AgAllocator<1> > *this)
{
  unsigned __int8 **Myfirst; // rdx

  Myfirst = this->m_blocks._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)Myfirst,
      this->m_blocks._Mypair._Myval2._Myend - Myfirst);
    this->m_blocks._Mypair._Myval2._Myfirst = 0i64;
    this->m_blocks._Mypair._Myval2._Mylast = 0i64;
    this->m_blocks._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::deque<std::function<void (void)>>::~deque<std::function<void (void)>>(
        std::deque<std::function<void __cdecl(void)>> *this)
{
  std::deque<std::function<void (void)>>::_Tidy(this);
  operator delete(this->_Mypair._Myval2._Myproxy);
  this->_Mypair._Myval2._Myproxy = 0i64;
}

void __fastcall SaveRecord_ButtonConfigUser::~SaveRecord_ButtonConfigUser(
        std::map<AgStringRef,enum AgGamepadButton> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > result; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,enum AgGamepadButton>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>(
        std::vector<unsigned char *> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall Framework::Input::ControllerContext::~ControllerContext(Framework::Input::ControllerContext *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > result; // [rsp+40h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,enum AgGamepadButton>>,0>>::erase(
    (std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> >,0> > *)&this->m_genericMappings,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > >)this->m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > >)this->m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead);
  operator delete(this->m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead);
  `eh vector destructor iterator'(
    &this->m_gamepad,
    0x10ui64,
    4ui64,
    (void (__fastcall *)(void *))AgPointer<AgUser>::~AgPointer<AgUser>);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)this);
}

void __fastcall Framework::GLManager::~GLManager(Framework::GLManager *this)
{
  __int64 v2; // rdx
  std::function<void __cdecl(void)> *v3; // rcx
  std::allocator<AgLogger *> *v4; // rcx
  unsigned __int8 **Myfirst; // rdx
  unsigned __int8 **v6; // rdx

  this->__vftable = (Framework::GLManager_vtbl *)&Framework::GLManager::`vftable';
  AgThread::join(this->m_renderThread.m_ptr);
  v3 = (std::function<void __cdecl(void)> *)this->m_renderThreadExec._Mystorage._Ptrs[7];
  if ( v3 )
  {
    LOBYTE(v2) = v3 != &this->m_renderThreadExec;
    ((void (__fastcall *)(std::function<void __cdecl(void)> *, __int64))v3->_Mystorage._Ptrs[0][4].__vftable)(v3, v2);
    this->m_renderThreadExec._Mystorage._Ptrs[7] = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&this->m_renderThread);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->allocateLuaScriptBuffers.memMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->allocateScriptBuffers.memMutex);
  `eh vector destructor iterator'(
    this->allocateStaticBuffersEffect,
    0x60ui64,
    7ui64,
    (void (__fastcall *)(void *))Framework::MemoryManager::~MemoryManager);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->allocateSound.memMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->allocateStaticBuffers.memMutex);
  Myfirst = this->m_agAllocator.m_blocks._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v4,
      (AgLogger **)Myfirst,
      this->m_agAllocator.m_blocks._Mypair._Myval2._Myend - Myfirst);
    this->m_agAllocator.m_blocks._Mypair._Myval2._Myfirst = 0i64;
    this->m_agAllocator.m_blocks._Mypair._Myval2._Mylast = 0i64;
    this->m_agAllocator.m_blocks._Mypair._Myval2._Myend = 0i64;
  }
  v6 = this->m_agDrawAllocator.m_blocks._Mypair._Myval2._Myfirst;
  if ( v6 )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v4,
      (AgLogger **)v6,
      this->m_agDrawAllocator.m_blocks._Mypair._Myval2._Myend - v6);
    this->m_agDrawAllocator.m_blocks._Mypair._Myval2._Myfirst = 0i64;
    this->m_agDrawAllocator.m_blocks._Mypair._Myval2._Mylast = 0i64;
    this->m_agDrawAllocator.m_blocks._Mypair._Myval2._Myend = 0i64;
  }
  Framework::Input::ControllerContext::~ControllerContext(&this->m_controllerContext);
  std::deque<std::function<void (void)>>::_Tidy(&this->m_commandBufferSyncLazyFuncQueue);
  operator delete(this->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy);
  this->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy = 0i64;
  this->__vftable = (Framework::GLManager_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall Framework::MemoryManager::~MemoryManager(Framework::MemoryManager *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->memMutex);
}

void __fastcall Framework::GLManager::GraphicsUnlock(Framework::GLManager *this, bool bLockMain)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  bool v6; // r8
  int v7; // edx
  AgPointer<AgDisplay> result; // [rsp+28h] [rbp-20h] BYREF

  if ( bLockMain || this->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
  {
    v3 = (__int64 *)NtCurrentTeb()->Reserved1[11];
    v4 = *v3;
    if ( *(_DWORD *)(*v3 + 12) )
    {
      DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                         (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                         &result,
                         0);
      AgDisplay::unlock(DisplayByIndex->m_ptr);
      AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
      *(_DWORD *)(v4 + 12) = 0;
      v7 = *(_DWORD *)(v4 + 8);
      if ( v7 > 0 )
        Framework::GLManager::LoadingLock(this, v7 - 1, v6);
    }
  }
}

void __fastcall Framework::GLManager::InitBuffer(
        Framework::GLManager *this,
        Framework::GLManager::Buffer *buffer,
        int width,
        int height)
{
  _glewGenRenderbuffers(1, &buffer->m_renderTarget);
  _glewBindRenderbuffer(0x8D41u, buffer->m_renderTarget);
  _glewRenderbufferStorage(0x8D41u, 0x1908u, width, height);
  _glewGenRenderbuffers(1, &buffer->m_depthTarget);
  _glewBindRenderbuffer(0x8D41u, buffer->m_depthTarget);
  _glewRenderbufferStorage(0x8D41u, 0x88F0u, width, height);
  _glewGenFramebuffers(1, &buffer->m_frameBuffer);
}

void __fastcall Framework::GLManager::LoadingLock(Framework::GLManager *this, int index, bool bLockMain)
{
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  int v6; // eax
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  AgDisplayPlatformImplementation *Log; // rax
  AgPointer<AgDisplay> result; // [rsp+28h] [rbp-20h] BYREF

  if ( this->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
  {
    v4 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
    if ( !*(_DWORD *)(v4 + 12) )
    {
      v5 = (_DWORD *)(v4 + 8);
      v6 = *(_DWORD *)(v4 + 8);
      if ( v6 <= 0 || v6 == index )
      {
        DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                           (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                           &result,
                           0);
        Log = Scaleform::GFx::Stream::GetLog(DisplayByIndex->m_ptr);
        AgDisplayPlatformImplementation::loadingLock(Log, index);
        AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
        *v5 = index + 1;
      }
    }
  }
}

void __fastcall Framework::GLManager::LoadingUnlock(Framework::GLManager *this, int index, bool bLockMain)
{
  _DWORD *v4; // rbx
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  AgDisplayPlatformImplementation *Log; // rax
  AgPointer<AgDisplay> result; // [rsp+28h] [rbp-20h] BYREF

  if ( this->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
  {
    v4 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 8i64);
    if ( *v4 == index + 1 )
    {
      glFlush();
      DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                         (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                         &result,
                         0);
      Log = Scaleform::GFx::Stream::GetLog(DisplayByIndex->m_ptr);
      AgDisplayPlatformImplementation::loadingUnlock(Log, index);
      AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
      *v4 = 0;
    }
  }
}

std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const,int>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> >,0> > *this)
{
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *)operator new(0x28ui64);
  if ( result )
    result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *this,
        std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *v2; // rdi
  std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *i; // rbx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
      this,
      i->_Right);
    i = i->_Left;
    operator delete(v2);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Right = _Wherenode->_Right;
  _Wherenode->_Right = Right->_Left;
  if ( !Right->_Left->_Isnil )
    Right->_Left->_Parent = _Wherenode;
  Right->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Left )
      Parent->_Left = Right;
    else
      Parent->_Right = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
}

void __fastcall std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(
        std::_Func_class<void> *this,
        std::_Func_class<void> *_Right)
{
  std::_Func_base<void> *v4; // rcx
  __int64 v5; // rdx
  std::_Func_class<void> *v6; // rcx

  v4 = _Right->_Mystorage._Ptrs[7];
  if ( v4 )
  {
    if ( v4 == (std::_Func_base<void> *)_Right )
    {
      this->_Mystorage._Ptrs[7] = v4->_Move(v4, this);
      v6 = (std::_Func_class<void> *)_Right->_Mystorage._Ptrs[7];
      if ( v6 )
      {
        LOBYTE(v5) = v6 != _Right;
        ((void (__fastcall *)(std::_Func_class<void> *, __int64))v6->_Mystorage._Ptrs[0][4].__vftable)(v6, v5);
        _Right->_Mystorage._Ptrs[7] = 0i64;
      }
    }
    else
    {
      this->_Mystorage._Ptrs[7] = v4;
      _Right->_Mystorage._Ptrs[7] = 0i64;
    }
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Left = _Wherenode->_Left;
  _Wherenode->_Left = _Wherenode->_Left->_Right;
  Right = Left->_Right;
  if ( !Right->_Isnil )
    Right->_Parent = _Wherenode;
  Left->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Right )
      Parent->_Right = Left;
    else
      Parent->_Left = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
}

void __fastcall std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Swap(
        std::_Func_class<void> *this,
        std::_Func_class<void> *_Right)
{
  std::_Func_base<void> *v4; // rcx
  std::_Func_base<void> *v5; // rax
  __int64 v6; // rdx
  std::_Func_class<void> *v7; // rcx
  std::_Func_class<void> *p_Righta; // rdx
  std::_Func_class<void> _Righta; // [rsp+30h] [rbp-58h] BYREF

  v4 = this->_Mystorage._Ptrs[7];
  if ( v4 == (std::_Func_base<void> *)this || (v5 = _Right->_Mystorage._Ptrs[7], v5 == (std::_Func_base<void> *)_Right) )
  {
    _Righta._Mystorage._Ptrs[7] = 0i64;
    if ( v4 )
    {
      if ( v4 == (std::_Func_base<void> *)this )
      {
        _Righta._Mystorage._Ptrs[7] = v4->_Move(v4, &_Righta);
        v7 = (std::_Func_class<void> *)this->_Mystorage._Ptrs[7];
        if ( v7 )
        {
          LOBYTE(v6) = v7 != this;
          ((void (__fastcall *)(std::_Func_class<void> *, __int64))v7->_Mystorage._Ptrs[0][4].__vftable)(v7, v6);
          this->_Mystorage._Ptrs[7] = 0i64;
        }
      }
      else
      {
        _Righta._Mystorage._Ptrs[7] = v4;
        this->_Mystorage._Ptrs[7] = 0i64;
      }
    }
    std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(this, _Right);
    std::_Func_class<CommandData::Setting const *,BattleSystem::CpuSequence &,int>::_Reset_move(_Right, &_Righta);
    if ( _Righta._Mystorage._Ptrs[7] )
    {
      p_Righta = &_Righta;
      LOBYTE(p_Righta) = _Righta._Mystorage._Ptrs[7] != (std::_Func_base<void> *)&_Righta;
      _Righta._Mystorage._Ptrs[7]->_Delete_this(_Righta._Mystorage._Ptrs[7], (bool)p_Righta);
    }
  }
  else
  {
    this->_Mystorage._Ptrs[7] = v5;
    _Right->_Mystorage._Ptrs[7] = v4;
  }
}

void __fastcall std::deque<std::function<void (void)>>::_Tidy(std::deque<std::function<void __cdecl(void)>> *this)
{
  unsigned __int64 i; // rcx
  unsigned __int64 v3; // rdx
  std::function<void __cdecl(void)> *v4; // rdi
  std::function<void __cdecl(void)> *v5; // rcx
  unsigned __int64 Mapsize; // rdi
  std::function<void __cdecl(void)> *v8; // rcx
  std::function<void __cdecl(void)> **Map; // rcx
  unsigned __int64 v10; // rax
  std::function<void __cdecl(void)> **v11; // rax
  unsigned __int64 v12; // rcx

  for ( i = this->_Mypair._Myval2._Mysize; i; i = this->_Mypair._Myval2._Mysize )
  {
    v3 = (this->_Mypair._Myval2._Myoff - 1 + i) & (this->_Mypair._Myval2._Mapsize - 1);
    v4 = this->_Mypair._Myval2._Map[v3];
    v5 = (std::function<void __cdecl(void)> *)v4->_Mystorage._Ptrs[7];
    if ( v5 )
    {
      LOBYTE(v3) = v5 != v4;
      ((void (__fastcall *)(std::function<void __cdecl(void)> *, unsigned __int64))v5->_Mystorage._Ptrs[0][4].__vftable)(
        v5,
        v3);
      v4->_Mystorage._Ptrs[7] = 0i64;
    }
    if ( this->_Mypair._Myval2._Mysize-- == 1 )
      this->_Mypair._Myval2._Myoff = 0i64;
  }
  Mapsize = this->_Mypair._Myval2._Mapsize;
  while ( Mapsize )
  {
    v8 = this->_Mypair._Myval2._Map[--Mapsize];
    if ( v8 )
      operator delete(v8);
  }
  Map = this->_Mypair._Myval2._Map;
  if ( Map )
  {
    v10 = this->_Mypair._Myval2._Mapsize;
    if ( v10 > 0x1FFFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( 8 * v10 >= 0x1000 )
    {
      if ( ((unsigned __int8)Map & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v11 = (std::function<void __cdecl(void)> **)*(Map - 1);
      if ( v11 >= Map )
        invalid_parameter_noinfo_noreturn();
      v12 = (char *)Map - (char *)v11;
      if ( v12 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v12 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Map = v11;
    }
    operator delete(Map);
  }
  this->_Mypair._Myval2._Mapsize = 0i64;
  this->_Mypair._Myval2._Map = 0i64;
}

void __fastcall std::vector<RenderBuffer>::_Tidy(std::vector<RenderBuffer> *this)
{
  RenderBuffer *Myfirst; // r8
  unsigned __int64 v2; // rdx
  RenderBuffer *v3; // rax

  Myfirst = m_renderBuffers._Mypair._Myval2._Myfirst;
  if ( m_renderBuffers._Mypair._Myval2._Myfirst )
  {
    v2 = m_renderBuffers._Mypair._Myval2._Myend - m_renderBuffers._Mypair._Myval2._Myfirst;
    if ( v2 > 0x1555555555555555i64 )
      invalid_parameter_noinfo_noreturn();
    if ( 12 * v2 >= 0x1000 )
    {
      if ( ((__int64)m_renderBuffers._Mypair._Myval2._Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v3 = *(RenderBuffer **)&m_renderBuffers._Mypair._Myval2._Myfirst[-1].m_color;
      if ( v3 >= m_renderBuffers._Mypair._Myval2._Myfirst )
        invalid_parameter_noinfo_noreturn();
      if ( (RenderBuffer *)((char *)m_renderBuffers._Mypair._Myval2._Myfirst - (char *)v3) < (RenderBuffer *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (RenderBuffer *)((char *)m_renderBuffers._Mypair._Myval2._Myfirst - (char *)v3) > (RenderBuffer *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = *(RenderBuffer **)&m_renderBuffers._Mypair._Myval2._Myfirst[-1].m_color;
    }
    operator delete(Myfirst);
    m_renderBuffers._Mypair._Myval2._Myend = 0i64;
    *(_OWORD *)&m_renderBuffers._Mypair._Myval2._Myfirst = 0i64;
  }
}

int *__fastcall Framework::MemoryManager::allocate(
        Framework::MemoryManager *this,
        unsigned __int64 size,
        unsigned __int64 alignment)
{
  Framework::_MEM64_HEADER *top; // r8
  unsigned __int64 v7; // r11
  Framework::_MEM64_HEADER *v8; // rax
  unsigned int v9; // edx
  unsigned __int64 v10; // rcx
  Framework::_MEM64_HEADER *end; // rsi
  int *pointer; // rdi
  int *area; // rdx
  __int64 v14; // rax
  Framework::_MEM64_HEADER *v15; // r9
  unsigned __int64 v16; // r10
  Framework::_MEM64_HEADER *v17; // r9
  unsigned __int64 v18; // r10
  Framework::_MEM64_HEADER *next; // rcx
  unsigned __int64 v20; // r10

  if ( !size )
    return 0i64;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->memMutex);
  top = this->pools.top;
  v7 = (size + 4) & 0xFFFFFFFFFFFFFFFBui64;
  if ( top )
  {
    end = this->pools.end;
    pointer = 0i64;
    area = this->pools.area;
    v14 = end->size + end->offset;
    v15 = (Framework::_MEM64_HEADER *)((char *)end + v14);
    v16 = (((unsigned __int64)&end[1].prev + v14 + 3) & 0xFFFFFFFFFFFFFFFCui64) - v14 - (_QWORD)end;
    if ( v7 + (((unsigned __int64)&end[1].prev + v14 + 3) & 0xFFFFFFFFFFFFFFFCui64) - (unsigned __int64)this->pools.area >= this->pools.size )
    {
      v17 = 0i64;
      if ( top == (Framework::_MEM64_HEADER *)area
        || (v18 = (((unsigned __int64)area + 43) & 0xFFFFFFFFFFFFFFFCui64) - (_QWORD)area,
            (char *)top - (char *)area < (__int64)(v18 + v7)) )
      {
        while ( 1 )
        {
          if ( v17 )
          {
            v8 = (Framework::_MEM64_HEADER *)((char *)v17 + v17->size + v17->offset);
            v20 = (((unsigned __int64)&v8[1].prev + 3) & 0xFFFFFFFFFFFFFFFCui64)
                - (v17->size
                 + v17->offset)
                - (_QWORD)v17;
            if ( (char *)top - (char *)v17 >= (__int64)(v7
                                                      + (((unsigned __int64)&v8[1].prev + 3) & 0xFFFFFFFFFFFFFFFCui64)
                                                      - (_QWORD)v17) )
              break;
          }
          v17 = top;
          top = top->next;
          if ( !top )
            goto $_MEMORY_NOMEMORY;
        }
        v8->size = v7;
        v8->pointer = (int *)((char *)v8 + v20);
        *(_DWORD *)((char *)v8 + v20 - 4) = v20;
        v8->offset = v20;
        v17->next = v8;
        v8->prev = v17;
        v8->next = top;
        top->prev = v8;
      }
      else
      {
        area[6] = v7;
        *((_QWORD *)area + 2) = ((unsigned __int64)area + 43) & 0xFFFFFFFFFFFFFFFCui64;
        *(_DWORD *)((((unsigned __int64)area + 43) & 0xFFFFFFFFFFFFFFFCui64) - 4) = (((_DWORD)area + 43) & 0xFFFFFFFC)
                                                                                  - (_DWORD)area;
        area[7] = v18;
        *((_QWORD *)area + 1) = top;
        v8 = (Framework::_MEM64_HEADER *)this->pools.area;
        this->pools.top = (Framework::_MEM64_HEADER *)this->pools.area;
        next = v8->next;
        v8->prev = 0i64;
        next->prev = v8;
      }
    }
    else
    {
      end->next = v15;
      v15->pointer = (int *)((char *)v15 + v16);
      v15->size = v7;
      *(_DWORD *)((char *)v15 + v16 - 4) = v16;
      v15->offset = v16;
      v15->next = 0i64;
      v8 = end->next;
      v8->prev = this->pools.end;
      this->pools.end = v8;
    }
  }
  else
  {
    v8 = (Framework::_MEM64_HEADER *)this->pools.area;
    v8->size = v7;
    v9 = (((_DWORD)v8 + 43) & 0xFFFFFFFC) - (_DWORD)v8;
    v10 = ((unsigned __int64)&v8[1].prev + 3) & 0xFFFFFFFFFFFFFFFCui64;
    v8->pointer = (int *)v10;
    *(_DWORD *)(v10 - 4) = v9;
    v8->offset = v9;
    v8->next = 0i64;
    this->pools.top = v8;
    this->pools.end = v8;
    v8->prev = 0i64;
  }
  pointer = v8->pointer;
$_MEMORY_NOMEMORY:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->memMutex);
  return pointer;
}

void __fastcall Framework::GLManager::applyOutputMask(Framework::GLManager *this)
{
  int v2; // ebx
  char v3; // al
  int v4; // ecx
  unsigned int v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+28h] [rbp-20h]

  v2 = this->m_outputMask & HIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11
                                                                             * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                             + 7].__vftable[1].~AgSingleton<KOFShaderManager>);
  if ( this->m_currentOutputMask != v2 )
  {
    v3 = v2 & 1;
    if ( (v2 & 4) != 0 )
    {
      v7 = 36066;
      v4 = 3;
      v5 = v3 != 0 ? 0x8CE0 : 0;
      v6 = (v2 & 2) != 0 ? 0x8CE1 : 0;
    }
    else if ( (v2 & 2) != 0 )
    {
      v6 = 36065;
      v4 = 2;
      v5 = v3 != 0 ? 0x8CE0 : 0;
    }
    else
    {
      v5 = 36064;
      v4 = 1;
    }
    _glewDrawBuffers(v4, &v5);
    this->m_currentOutputMask = v2;
  }
}

__int64 applyVertexAttribArrays()
{
  unsigned int v0; // esi
  unsigned int v1; // ebx
  int *v2; // r14
  int v3; // edi
  int (__fastcall *onSingletonExit)(AgSingleton<KOFShaderManager> *); // r15
  __int64 v5; // rbp
  int v6; // eax
  __int64 result; // rax

  v0 = g_pendingVertexAttribArrays;
  if ( g_pendingVertexAttribArrays )
  {
    v1 = 0;
    v2 = g_vertexAttribIndex;
    v3 = 1;
    onSingletonExit = AgSingleton<KOFShaderManager>::ms_instance[11
                                                               * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                               + 7].onSingletonExit;
    do
    {
      if ( !(v0 | g_enabledVertexAttribArrays) )
        break;
      if ( (v3 & v0) != 0 )
      {
        v5 = *v2;
        _glewEnableVertexAttribArray(v1);
        if ( onSingletonExit )
          _glewVertexAttribDivisor(v1, *((unsigned __int8 *)onSingletonExit + v5));
        else
          _glewVertexAttribDivisor(v1, 0);
      }
      else if ( (v3 & g_enabledVertexAttribArrays) != 0 )
      {
        _glewDisableVertexAttribArray(v1);
      }
      ++v1;
      v6 = ~v3;
      v3 = __ROL4__(v3, 1);
      g_enabledVertexAttribArrays &= v6;
      v0 &= v6;
      ++v2;
    }
    while ( v1 < 0xF );
    result = g_pendingVertexAttribArrays;
    g_enabledVertexAttribArrays = g_pendingVertexAttribArrays;
  }
  return result;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,enum AgGamepadButton>>,0>>::clear(
        std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> >,0> > *this)
{
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *i; // rbx

  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  for ( i = Parent; !i->_Isnil; Parent = i )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Erase(
      (std::_Tree<std::_Tmap_traits<_SDL_Joystick *,__int64,std::less<_SDL_Joystick *>,std::allocator<std::pair<_SDL_Joystick * const,__int64> >,0> > *)this,
      (std::_Tree_node<std::pair<_SDL_Joystick * const,__int64>,void *> *)i->_Right);
    i = i->_Left;
    operator delete(Parent);
  }
  this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  this->_Mypair._Myval2._Myval2._Mysize = 0i64;
}

void __fastcall Framework::GLManager::createFrameBuffers(Framework::GLManager *this, int width, int height)
{
  unsigned int *p_m_depthTarget; // rsi
  __int64 v7; // r15
  Framework::GLManager *v8; // rcx
  Framework::GLManager::Buffer *v9; // rbx
  __int64 v10; // rsi
  Framework::GLManager *v11; // rcx
  float v12; // xmm0_4
  Framework::GLManager::Buffer *m_items; // rbx
  __int64 v14; // rsi
  Framework::GLManager::Buffer *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // r12
  Framework::GLManager::Buffer *v19; // rbx
  Framework::GLManager::Buffer *v20; // rbx
  int v21; // ebp
  int v22; // er14
  __int64 m_buffers; // r9
  __int64 v24; // r8
  Framework::GLManager *i; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  GLint params; // [rsp+60h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+20h]

  glGetIntegerv(0x8CA6u, &params);
  p_m_depthTarget = &this->m_buffer.m_items[0].m_depthTarget;
  v29 = 2i64;
  v7 = 2i64;
  do
  {
    _glewGenRenderbuffers(1, p_m_depthTarget - 1);
    _glewBindRenderbuffer(0x8D41u, *(p_m_depthTarget - 1));
    _glewRenderbufferStorage(0x8D41u, 0x8C43u, width, height);
    _glewGenRenderbuffers(1, p_m_depthTarget);
    _glewBindRenderbuffer(0x8D41u, *p_m_depthTarget);
    _glewRenderbufferStorage(0x8D41u, 0x88F0u, width, height);
    _glewGenFramebuffers(1, p_m_depthTarget - 2);
    p_m_depthTarget += 3;
    --v7;
  }
  while ( v7 );
  v9 = &this->m_buffer.m_items[2];
  v10 = 23i64;
  do
  {
    Framework::GLManager::InitBuffer(v8, v9++, width, height);
    --v10;
  }
  while ( v10 );
  v12 = sqrtf(2.0);
  m_items = this->m_customSizeBuffer.m_items;
  v14 = 6i64;
  do
  {
    Framework::GLManager::InitBuffer(
      v11,
      m_items++,
      (int)(float)((float)width * (float)(1.0 / v12)),
      (int)(float)((float)height * (float)(1.0 / v12)));
    --v14;
  }
  while ( v14 );
  v15 = this->m_halfBuffer.m_items;
  v16 = 4i64;
  v17 = 4i64;
  do
  {
    Framework::GLManager::InitBuffer(v11, v15++, width / 2, height / 2);
    --v17;
  }
  while ( v17 );
  v18 = v29;
  v19 = this->m_thirdBuffer.m_items;
  do
  {
    Framework::GLManager::InitBuffer(v11, v19++, width / 3, height / 3);
    --v18;
  }
  while ( v18 );
  v20 = this->m_eighthBuffer.m_items;
  v21 = height / 8;
  v22 = width / 8;
  do
  {
    Framework::GLManager::InitBuffer(v11, v20++, v22, v21);
    --v16;
  }
  while ( v16 );
  _glewBindFramebuffer(0x8D40u, params);
  *(_QWORD *)this->systemRenderID = 0i64;
  glGenRenderbuffersAG(this->m_config.m_buffers, this->systemRenderID);
  m_buffers = (int)this->m_config.m_buffers;
  v24 = 0i64;
  for ( i = Framework::GLManager::glm; v24 < m_buffers; i->m_renderbuffer.m_items[v27].m_attachment = 36063 )
  {
    v26 = i->m_renderbuffer.m_freeIDs[--i->m_renderbuffer.m_firstOccupiedIndex];
    this->systemBufferID[v24++] = v26;
    v27 = (unsigned __int8)v26 - 1;
    i->m_renderbuffer.m_items[v27].m_depthTarget = 0;
  }
  this->m_backBufferIndex = 0;
  this->m_backBuffer = (Framework::GLManager::Buffer *)&this->m_buffer.m_freeIDs[12 * LOBYTE(this->systemRenderID[0])
                                                                               + 15];
}

__int64 __fastcall AgSingleton<KOFShaderManager>::createInstance()
{
  __int64 result; // rax
  AgSingleton<KOFShaderManager> *v1; // [rsp+50h] [rbp+8h]

  if ( AgSingleton<KOFShaderManager>::ms_instance )
    return 0i64;
  v1 = (AgSingleton<KOFShaderManager> *)operator new(0x3C53C0ui64);
  v1->__vftable = (AgSingleton<KOFShaderManager>_vtbl *)&KOFShaderManager::`vftable';
  `eh vector constructor iterator'(
    &v1[360451],
    0x20ui64,
    0x8000ui64,
    (void (__fastcall *)(void *))KOFShaderManager::Shader::Shader,
    (void (__fastcall *)(void *))KOFShaderManager::Shader::~Shader);
  result = ((__int64 (__fastcall *)(AgSingleton<KOFShaderManager> *))v1->onSingletonInit)(v1);
  AgSingleton<KOFShaderManager>::ms_instance = v1;
  return result;
}

void __fastcall Framework::GLManager::destroyFrameBuffers(Framework::GLManager *this)
{
  Framework::GLManager *v2; // r10
  __int64 v3; // r9
  int v4; // eax
  __int64 m_buffers; // r11
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // er8
  unsigned int *systemRenderID; // rcx
  __int64 v10; // r8
  __int64 i; // rcx
  unsigned __int8 v12; // dl
  __int64 v13; // rdi
  unsigned int *p_m_renderTarget; // rbx
  unsigned int *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned int *v18; // rbx
  __int64 v19; // rsi
  unsigned int *v20; // rbx
  __int64 v21; // rsi
  unsigned int *v22; // rbx
  int v23[2]; // [rsp+40h] [rbp+8h]
  int v24[2]; // [rsp+48h] [rbp+10h]

  _glewBindFramebuffer(0x8D40u, 0);
  v2 = Framework::GLManager::glm;
  v3 = 0i64;
  v23[0] = this->systemRenderID[0];
  v4 = this->systemBufferID[0];
  *(_QWORD *)this->systemRenderID = 0i64;
  m_buffers = (int)this->m_config.m_buffers;
  v24[0] = v4;
  if ( m_buffers > 0 )
  {
    do
    {
      v6 = v23[v3];
      v7 = 0;
      if ( v6 > 0 )
      {
        v8 = v2->m_config.m_buffers;
        if ( v8 )
        {
          systemRenderID = v2->systemRenderID;
          do
          {
            if ( *systemRenderID == v6 )
              break;
            ++v7;
            ++systemRenderID;
          }
          while ( v7 < v8 );
        }
        if ( v7 == v8 )
          v2->m_buffer.m_freeIDs[v2->m_buffer.m_firstOccupiedIndex++] = v6;
      }
      ++v3;
    }
    while ( v3 < m_buffers );
  }
  v10 = (int)this->m_config.m_buffers;
  for ( i = 0i64; i < v10; ++i )
  {
    v12 = v24[i];
    if ( v12 )
      v2->m_renderbuffer.m_freeIDs[v2->m_renderbuffer.m_firstOccupiedIndex++] = v12;
  }
  this->m_backBuffer = 0i64;
  v13 = 25i64;
  this->m_backBufferIndex = 0;
  p_m_renderTarget = &this->m_buffer.m_items[0].m_renderTarget;
  do
  {
    _glewDeleteFramebuffers(1, p_m_renderTarget - 1);
    _glewDeleteRenderbuffers(1, p_m_renderTarget + 1);
    _glewDeleteRenderbuffers(1, p_m_renderTarget);
    p_m_renderTarget += 3;
    --v13;
  }
  while ( v13 );
  v15 = &this->m_customSizeBuffer.m_items[0].m_renderTarget;
  v16 = 6i64;
  do
  {
    _glewDeleteFramebuffers(1, v15 - 1);
    _glewDeleteRenderbuffers(1, v15 + 1);
    _glewDeleteRenderbuffers(1, v15);
    v15 += 3;
    --v16;
  }
  while ( v16 );
  v17 = 4i64;
  v18 = &this->m_halfBuffer.m_items[0].m_renderTarget;
  v19 = 4i64;
  do
  {
    _glewDeleteFramebuffers(1, v18 - 1);
    _glewDeleteRenderbuffers(1, v18 + 1);
    _glewDeleteRenderbuffers(1, v18);
    v18 += 3;
    --v19;
  }
  while ( v19 );
  v20 = &this->m_thirdBuffer.m_items[0].m_renderTarget;
  v21 = 2i64;
  do
  {
    _glewDeleteFramebuffers(1, v20 - 1);
    _glewDeleteRenderbuffers(1, v20 + 1);
    _glewDeleteRenderbuffers(1, v20);
    v20 += 3;
    --v21;
  }
  while ( v21 );
  v22 = &this->m_eighthBuffer.m_items[0].m_renderTarget;
  do
  {
    _glewDeleteFramebuffers(1, v22 - 1);
    _glewDeleteRenderbuffers(1, v22 + 1);
    _glewDeleteRenderbuffers(1, v22);
    v22 += 3;
    --v17;
  }
  while ( v17 );
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,enum AgGamepadButton>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > _Last)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > *v6; // rax
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v7; // rax
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *j; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > resulta; // [rsp+30h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v12; // [rsp+40h] [rbp+18h]
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *Ptr; // [rsp+48h] [rbp+20h]

  Ptr = _Last._Ptr;
  v12 = _First._Ptr;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left
    && _Last._Ptr == this->_Mypair._Myval2._Myval2._Myhead )
  {
    std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const,enum AgGamepadButton>>,0>>::clear(this);
    v6 = result;
    result->_Ptr = this->_Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v7 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              v12 = i;
              _First._Ptr = i;
            }
            v12 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v12 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const,int>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > >)v7);
        _First._Ptr = v12;
      }
      while ( v12 != Ptr );
    }
    v6 = result;
    result->_Ptr = _First._Ptr;
  }
  return v6;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > *__fastcall std::_Tree<std::_Tmap_traits<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const,int>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > _Where)
{
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v5; // r11
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *j; // rax
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *i; // rax
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v9; // r10
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *Parent; // r9
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *k; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *Left; // rax
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v14; // rax
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *m; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > *v16; // rax
  char Color; // cl
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v18; // rdi
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v19; // rsi
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rdx
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v21; // rcx
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *v22; // rax
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgStringRef const ,enum AgGamepadButton>,void *> *Ptr; // [rsp+50h] [rbp+18h]

  Ptr = _Where._Ptr;
  v5 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    Right = _Where._Ptr->_Right;
    if ( Right->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( _Where._Ptr != i->_Right )
          break;
        _Where._Ptr = i;
      }
      _Where._Ptr = i;
      Ptr = i;
    }
    else
    {
      _Where._Ptr = _Where._Ptr->_Right;
      for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
        _Where._Ptr = j;
      Ptr = _Where._Ptr;
    }
  }
  if ( v5->_Left->_Isnil )
  {
    v9 = v5->_Right;
LABEL_15:
    Parent = v5->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
    {
      this->_Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    }
    else if ( Parent->_Left == v5 )
    {
      Parent->_Left = v9;
    }
    else
    {
      Parent->_Right = v9;
    }
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Left == v5 )
    {
      if ( v9->_Isnil )
      {
        k = Parent;
      }
      else
      {
        Left = v9->_Left;
        for ( k = v9; !Left->_Isnil; Left = Left->_Left )
          k = Left;
      }
      this->_Mypair._Myval2._Myval2._Myhead->_Left = k;
    }
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Right == v5 )
    {
      if ( v9->_Isnil )
      {
        Myhead->_Right = Parent;
      }
      else
      {
        v14 = v9->_Right;
        for ( m = v9; !v14->_Isnil; v14 = v14->_Right )
          m = v14;
        Myhead->_Right = m;
      }
    }
    goto LABEL_45;
  }
  if ( v5->_Right->_Isnil )
  {
    v9 = v5->_Left;
    goto LABEL_15;
  }
  v9 = _Where._Ptr->_Right;
  if ( _Where._Ptr == v5 )
    goto LABEL_15;
  v5->_Left->_Parent = _Where._Ptr;
  _Where._Ptr->_Left = v5->_Left;
  if ( _Where._Ptr == v5->_Right )
  {
    Parent = _Where._Ptr;
  }
  else
  {
    Parent = _Where._Ptr->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    Parent->_Left = v9;
    _Where._Ptr->_Right = v5->_Right;
    v5->_Right->_Parent = _Where._Ptr;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
  }
  else
  {
    v16 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgStringRef const ,enum AgGamepadButton> > > > *)v5->_Parent;
    if ( v16->_Ptr == v5 )
      v16->_Ptr = _Where._Ptr;
    else
      v16[2]._Ptr = _Where._Ptr;
  }
  _Where._Ptr->_Parent = v5->_Parent;
  Color = _Where._Ptr->_Color;
  _Where._Ptr->_Color = v5->_Color;
  v5->_Color = Color;
LABEL_45:
  if ( v5->_Color == 1 )
  {
    if ( v9 != this->_Mypair._Myval2._Myval2._Myhead->_Parent )
    {
      do
      {
        v18 = Parent;
        v19 = Parent;
        if ( v9->_Color != 1 )
          break;
        v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
        if ( v9 == Parent->_Left )
        {
          v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            v21 = Parent->_Right;
            Parent->_Color = 0;
            Parent->_Right = v21->_Left;
            if ( !v21->_Left->_Isnil )
              v21->_Left->_Parent = Parent;
            v21->_Parent = Parent->_Parent;
            if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
            {
              this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
            }
            else
            {
              v22 = Parent->_Parent;
              if ( Parent == v22->_Left )
                v22->_Left = v21;
              else
                v22->_Right = v21;
            }
            v21->_Left = Parent;
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            Parent->_Parent = v21;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Left->_Color != 1 || v20->_Right->_Color != 1 )
          {
            if ( v20->_Right->_Color == 1 )
            {
              v20->_Left->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Right->_Color = 1;
            std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        else
        {
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            Parent->_Color = 0;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Right->_Color != 1 || v20->_Left->_Color != 1 )
          {
            if ( v20->_Left->_Color == 1 )
            {
              v20->_Right->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Left->_Color = 1;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        v20->_Color = 0;
LABEL_70:
        v9 = v19;
        Parent = Parent->_Parent;
      }
      while ( v18 != this->_Mypair._Myval2._Myval2._Myhead->_Parent );
    }
    v9->_Color = 1;
  }
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

__int64 __fastcall Framework::GLManager::getThreadIsRunning(Framework::GLManager *this)
{
  return (unsigned int)this->m_renderThreadRunning;
}

void __fastcall Framework::GLManager::glBindEighthRenderbuffer(
        Framework::GLManager *this,
        unsigned int target,
        unsigned int renderbuffer)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = target;
  _glewBindFramebuffer(0x8D40u, this->m_thirdBuffer.m_items[(unsigned __int8)renderbuffer + 1].m_depthTarget);
  v4 = 36064;
  _glewDrawBuffers(1, &v4);
  this->m_outputMask = 1;
}

void __fastcall Framework::GLManager::glBindHalfRenderbuffer(
        Framework::GLManager *this,
        unsigned int target,
        unsigned int renderbuffer)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = target;
  _glewBindFramebuffer(0x8D40u, this->m_customSizeBuffer.m_items[(unsigned __int8)renderbuffer + 5].m_depthTarget);
  v4 = 36064;
  _glewDrawBuffers(1, &v4);
  this->m_outputMask = 1;
}

void __fastcall glBindRenderbufferAG(unsigned int target, unsigned int renderbuffer)
{
  Framework::GLManager *v2; // rbx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = target;
  v2 = Framework::GLManager::glm;
  Framework::GLManager::glm->currentRenderID = renderbuffer;
  v2->m_bOpenGLBlocked = 1;
  _glewBindFramebuffer(0x8D40u, *(_DWORD *)&v2->m_buffer.m_freeIDs[12 * (unsigned __int8)renderbuffer + 15]);
  v2->m_bOpenGLBlocked = 0;
  v3 = 36064;
  _glewDrawBuffers(1, &v3);
  v2->m_outputMask = 1;
}

void __fastcall Framework::GLManager::glBindThirdRenderbuffer(
        Framework::GLManager *this,
        unsigned int target,
        unsigned int renderbuffer)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = target;
  _glewBindFramebuffer(0x8D40u, this->m_halfBuffer.m_items[(unsigned __int8)renderbuffer + 3].m_renderTarget);
  v4 = 36064;
  _glewDrawBuffers(1, &v4);
  this->m_outputMask = 1;
}

void __fastcall glClearAG(unsigned int mask)
{
  Framework::GLManager *v1; // rbx
  int currentFramebufferID; // ecx
  __int64 v4; // rdi
  bool v5; // al
  bool v6; // bl
  GLfloat v7; // [rsp+20h] [rbp-38h] BYREF
  GLint v8; // [rsp+24h] [rbp-34h] BYREF
  GLint v9; // [rsp+28h] [rbp-30h] BYREF
  GLfloat params[4]; // [rsp+30h] [rbp-28h] BYREF

  v1 = Framework::GLManager::glm;
  currentFramebufferID = Framework::GLManager::glm->currentFramebufferID;
  if ( currentFramebufferID == Framework::GLManager::glm->systemBufferID[Framework::GLManager::glm->m_backBufferIndex] )
  {
    Framework::GLManager::glm->m_bOpenGLBlocked = 1;
    glClear(mask);
    v1->m_bOpenGLBlocked = 0;
  }
  else
  {
    v4 = currentFramebufferID - 1;
    if ( (mask & 0x4000) != 0
      && *(_DWORD *)&Framework::GLManager::glm->m_renderbuffer.m_freeIDs[8 * currentFramebufferID + 31] != 36063 )
    {
      glGetFloatv(0xC22u, params);
      _glewClearBufferfv(0x1800u, v1->m_renderbuffer.m_items[v4].m_attachment - 36064, params);
    }
    v5 = (mask & 0x100) != 0 && v1->m_renderbuffer.m_items[v4].m_depthTarget;
    v6 = (mask & 0x400) != 0 && v1->m_renderbuffer.m_items[v4].m_depthTarget;
    if ( v5 )
    {
      glGetFloatv(0xB73u, &v7);
      if ( v6 )
      {
        glGetIntegerv(0xB91u, &v8);
        _glewClearBufferfi(0x84F9u, 0, v7, v8);
      }
      else
      {
        _glewClearBufferfv(0x1801u, 0, &v7);
      }
    }
    else if ( v6 )
    {
      glGetIntegerv(0xB91u, &v9);
      _glewClearBufferiv(0x1802u, 0, &v9);
    }
  }
}

void __fastcall glCopyTexImage2DAG(
        unsigned int target,
        int level,
        unsigned int internalformat,
        int x,
        int y,
        int width,
        int height)
{
  if ( _glewCheckFramebufferStatus(0x8D40u) == 36053 )
    glCopyTexImage2D(0xDE1u, 0, 0x1907u, 0, 0, width, height, 0);
}

void __fastcall glDeleteRenderbuffersAG(int n, unsigned int *renderbuffers)
{
  Framework::GLManager *v2; // r10
  __int64 v3; // r9
  __int64 i; // r11
  int v6; // er8
  unsigned int v7; // eax
  unsigned int m_buffers; // edx
  unsigned int *systemRenderID; // rcx

  v2 = Framework::GLManager::glm;
  v3 = 0i64;
  for ( i = n; v3 < i; ++v3 )
  {
    v6 = renderbuffers[v3];
    v7 = 0;
    if ( v6 > 0 )
    {
      m_buffers = v2->m_config.m_buffers;
      if ( m_buffers )
      {
        systemRenderID = v2->systemRenderID;
        do
        {
          if ( *systemRenderID == v6 )
            break;
          ++v7;
          ++systemRenderID;
        }
        while ( v7 < m_buffers );
      }
      if ( v7 == m_buffers )
        v2->m_buffer.m_freeIDs[v2->m_buffer.m_firstOccupiedIndex++] = v6;
    }
  }
}

void __fastcall glDrawArraysAG(unsigned int mode, int first, int count)
{
  Framework::GLManager *v3; // rsi
  AgSingleton<KOFShaderManager> *v5; // r9
  int v6; // ebx
  AgSingleton<KOFShaderManager>_vtbl *v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // edi

  v3 = Framework::GLManager::glm;
  Framework::GLManager::applyOutputMask(Framework::GLManager::glm);
  KOFShaderManager::setUniforms((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance);
  v5 = AgSingleton<KOFShaderManager>::ms_instance;
  v6 = 0;
  v7 = AgSingleton<KOFShaderManager>::ms_instance[11
                                                * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                + 7].__vftable;
  if ( SLODWORD(v7[1].onSingletonInit) > 0 )
  {
    v8 = g_pendingVertexAttribArrays;
    do
    {
      v9 = *((unsigned int *)v7->onSingletonInit + (unsigned int)v6);
      if ( (unsigned int)v9 < g_maxEnabledVertexAttribArrays )
      {
        g_vertexAttribIndex[v9] = v6;
        v10 = 1 << v9;
        if ( ((1 << v9) & v8) == 0 )
        {
          _glewVertexAttribPointer(v9, 4, 0x1406u, 0, 0, 0i64);
          v8 = g_pendingVertexAttribArrays;
          v5 = AgSingleton<KOFShaderManager>::ms_instance;
        }
        v8 |= v10;
        g_pendingVertexAttribArrays = v8;
      }
      ++v6;
      v7 = v5[11 * SLODWORD(v5[360450].__vftable) + 7].__vftable;
    }
    while ( v6 < SLODWORD(v7[1].onSingletonInit) );
  }
  v3->m_bOpenGLBlocked = 1;
  applyVertexAttribArrays();
  glDrawArrays(5u, 0, count);
  v3->m_bOpenGLBlocked = 0;
  g_pendingVertexAttribArrays = 0;
  v3->renderSize = 0;
}

void __fastcall glDrawElementsAG(unsigned int mode, int count, unsigned int type, const void *indices)
{
  Framework::GLManager *v4; // rsi
  AgSingleton<KOFShaderManager> *v9; // r11
  int v10; // ebx
  AgSingleton<KOFShaderManager>_vtbl *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // edi

  v4 = Framework::GLManager::glm;
  Framework::GLManager::applyOutputMask(Framework::GLManager::glm);
  KOFShaderManager::setUniforms((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance);
  v9 = AgSingleton<KOFShaderManager>::ms_instance;
  v10 = 0;
  v11 = AgSingleton<KOFShaderManager>::ms_instance[11
                                                 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                 + 7].__vftable;
  if ( SLODWORD(v11[1].onSingletonInit) > 0 )
  {
    v12 = g_pendingVertexAttribArrays;
    do
    {
      v13 = *((unsigned int *)v11->onSingletonInit + (unsigned int)v10);
      if ( (unsigned int)v13 < g_maxEnabledVertexAttribArrays )
      {
        g_vertexAttribIndex[v13] = v10;
        v14 = 1 << v13;
        if ( ((1 << v13) & v12) == 0 )
        {
          _glewVertexAttribPointer(v13, 4, 0x1406u, 0, 0, 0i64);
          v12 = g_pendingVertexAttribArrays;
          v9 = AgSingleton<KOFShaderManager>::ms_instance;
        }
        v12 |= v14;
        g_pendingVertexAttribArrays = v12;
      }
      ++v10;
      v11 = v9[11 * SLODWORD(v9[360450].__vftable) + 7].__vftable;
    }
    while ( v10 < SLODWORD(v11[1].onSingletonInit) );
  }
  v4->m_bOpenGLBlocked = 1;
  applyVertexAttribArrays();
  glDrawElements(mode, count, type, indices);
  v4->m_bOpenGLBlocked = 0;
  g_pendingVertexAttribArrays = 0;
  v4->renderSize = 0;
}

void __fastcall glDrawElementsInstancedAG(
        unsigned int mode,
        int count,
        unsigned int type,
        const void *indices,
        int primcount)
{
  Framework::GLManager *v5; // rbp

  v5 = Framework::GLManager::glm;
  Framework::GLManager::applyOutputMask(Framework::GLManager::glm);
  KOFShaderManager::setUniforms((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance);
  v5->m_bOpenGLBlocked = 1;
  applyVertexAttribArrays();
  _glewDrawElementsInstanced(mode, count, 0x1405u, indices, primcount);
  v5->renderSize = 0;
  v5->m_bOpenGLBlocked = 0;
  g_pendingVertexAttribArrays = 0;
}

void __fastcall glEnableVertexAttribArrayAG(unsigned int index)
{
  __int64 v2; // rcx

  v2 = *((unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                  * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                  + 7].onSingletonInit
       + index);
  if ( (unsigned int)v2 < g_maxEnabledVertexAttribArrays )
  {
    g_pendingVertexAttribArrays |= 1 << v2;
    g_vertexAttribIndex[v2] = index;
  }
}

void __fastcall Framework::GLManager::glGenEighthRenderbuffers(
        Framework::GLManager *this,
        int n,
        unsigned int *renderbuffers)
{
  unsigned int v5; // eax
  unsigned int *p_m_depthTarget; // rbx
  int i; // ebx
  GLint params; // [rsp+38h] [rbp+10h] BYREF

  params = n;
  glGetIntegerv(0x8CA6u, &params);
  v5 = this->m_eighthBuffer.m_freeIDs[--this->m_eighthBuffer.m_firstOccupiedIndex];
  *renderbuffers = v5;
  p_m_depthTarget = &this->m_thirdBuffer.m_items[(unsigned __int8)v5 + 1].m_depthTarget;
  _glewBindFramebuffer(0x8D40u, *p_m_depthTarget);
  _glewFramebufferRenderbuffer(0x8D40u, 0x8CE0u, 0x8D41u, p_m_depthTarget[1]);
  _glewFramebufferRenderbuffer(0x8D40u, 0x821Au, 0x8D41u, p_m_depthTarget[2]);
  for ( i = 1; i <= 2; ++i )
    _glewFramebufferRenderbuffer(0x8D40u, i + 36064, 0x8D41u, 0);
  _glewBindFramebuffer(0x8D40u, params);
}

void __fastcall Framework::GLManager::glGenHalfRenderbuffers(
        Framework::GLManager *this,
        int n,
        unsigned int *renderbuffers)
{
  unsigned int v5; // eax
  unsigned int *p_m_depthTarget; // rbx
  int i; // ebx
  GLint params; // [rsp+38h] [rbp+10h] BYREF

  params = n;
  glGetIntegerv(0x8CA6u, &params);
  v5 = this->m_halfBuffer.m_freeIDs[--this->m_halfBuffer.m_firstOccupiedIndex];
  *renderbuffers = v5;
  p_m_depthTarget = &this->m_customSizeBuffer.m_items[(unsigned __int8)v5 + 5].m_depthTarget;
  _glewBindFramebuffer(0x8D40u, *p_m_depthTarget);
  _glewFramebufferRenderbuffer(0x8D40u, 0x8CE0u, 0x8D41u, p_m_depthTarget[1]);
  _glewFramebufferRenderbuffer(0x8D40u, 0x821Au, 0x8D41u, p_m_depthTarget[2]);
  for ( i = 1; i <= 2; ++i )
    _glewFramebufferRenderbuffer(0x8D40u, i + 36064, 0x8D41u, 0);
  _glewBindFramebuffer(0x8D40u, params);
}

void __fastcall glGenRenderbuffersAG(int n, unsigned int *renderbuffers)
{
  Framework::GLManager *v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rbx
  int i; // ebx
  GLint params; // [rsp+40h] [rbp+8h] BYREF

  v2 = Framework::GLManager::glm;
  v4 = n;
  glGetIntegerv(0x8CA6u, &params);
  v5 = 0i64;
  v2->m_bOpenGLBlocked = 1;
  v6 = v4;
  if ( (int)v4 > 0 )
  {
    do
    {
      v7 = v2->m_buffer.m_freeIDs[--v2->m_buffer.m_firstOccupiedIndex];
      renderbuffers[v5] = v7;
      v8 = (unsigned __int8)v7 - 1;
      _glewBindFramebuffer(0x8D40u, v2->m_buffer.m_items[v8].m_frameBuffer);
      _glewFramebufferRenderbuffer(0x8D40u, 0x8CE0u, 0x8D41u, v2->m_buffer.m_items[v8].m_renderTarget);
      _glewFramebufferRenderbuffer(0x8D40u, 0x821Au, 0x8D41u, v2->m_buffer.m_items[v8].m_depthTarget);
      for ( i = 1; i <= 2; ++i )
        _glewFramebufferRenderbuffer(0x8D40u, i + 36064, 0x8D41u, 0);
      ++v5;
    }
    while ( v5 < v6 );
  }
  _glewBindFramebuffer(0x8D40u, params);
  v2->m_bOpenGLBlocked = 0;
}

void __fastcall glGenTexturesAG(int n, unsigned int *textures)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 i; // rbx

  v2 = n;
  glGenTextures(n, textures);
  v4 = v2;
  for ( i = 0i64; i < v4; ++i )
  {
    glBindTexture(0xDE1u, textures[i]);
    glTexParameterf(0xDE1u, 0x2800u, 9729.0);
    glTexParameterf(0xDE1u, 0x2801u, 9729.0);
    glTexParameterf(0xDE1u, 0x2802u, 33071.0);
    glTexParameterf(0xDE1u, 0x2803u, 33071.0);
  }
}

void __fastcall Framework::GLManager::glGenThirdRenderbuffers(
        Framework::GLManager *this,
        int n,
        unsigned int *renderbuffers)
{
  unsigned int v5; // eax
  unsigned int *v6; // rbx
  int i; // ebx
  GLint params; // [rsp+38h] [rbp+10h] BYREF

  params = n;
  glGetIntegerv(0x8CA6u, &params);
  v5 = this->m_thirdBuffer.m_freeIDs[--this->m_thirdBuffer.m_firstOccupiedIndex];
  *renderbuffers = v5;
  v6 = (unsigned int *)((char *)this + 12 * (unsigned __int8)v5 - 12);
  _glewBindFramebuffer(0x8D40u, v6[2749]);
  _glewFramebufferRenderbuffer(0x8D40u, 0x8CE0u, 0x8D41u, v6[2750]);
  _glewFramebufferRenderbuffer(0x8D40u, 0x821Au, 0x8D41u, v6[2751]);
  for ( i = 1; i <= 2; ++i )
    _glewFramebufferRenderbuffer(0x8D40u, i + 36064, 0x8D41u, 0);
  _glewBindFramebuffer(0x8D40u, params);
}

void __fastcall glTexImage2DAG(
        unsigned int target,
        int level,
        int internalFormat,
        int width,
        int height,
        int border,
        unsigned int format,
        unsigned int typeOrCompressedSize,
        const void *data,
        bool hasMips,
        bool isCompressed)
{
  glTexParameteri(0xDE1u, 0x813Cu, 0);
  if ( !hasMips )
    glTexParameteri(0xDE1u, 0x813Du, 0);
  while ( Framework::GLManager::glm->m_bOpenGLBlocked )
    ;
  if ( isCompressed )
    _glewCompressedTexImage2D(target, level, internalFormat, width, height, 0, typeOrCompressedSize, data);
  else
    glTexImage2D(target, level, internalFormat, width, height, 0, format, typeOrCompressedSize, data);
}

void __fastcall glTexSubImage2DAG(
        unsigned int target,
        int level,
        int xoffset,
        int yoffset,
        int width,
        int height,
        unsigned int format,
        unsigned int typeOrCompressedSize,
        const void *data,
        bool isCompressed)
{
  if ( isCompressed )
    _glewCompressedTexSubImage2D(0xDE1u, 0, 0, 0, width, height, format, typeOrCompressedSize, data);
  else
    glTexSubImage2D(0xDE1u, 0, 0, 0, width, height, format, typeOrCompressedSize, data);
}

void __fastcall glUniform2fvAG(int location, int count, const float *v)
{
  __int64 v3; // r11
  KOFShaderManager *v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r9
  AgSingleton<KOFShaderManager>_vtbl *v7; // rdx

  v3 = location;
  v4 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  v5 = 11i64 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
  v6 = *((int *)&AgSingleton<KOFShaderManager>::ms_instance[v5 + 11].~AgSingleton<KOFShaderManager> + 4 * v3);
  v7 = AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[v5 + 5].__vftable)
                                                + 494188].__vftable;
  if ( **((_QWORD **)&v7->~AgSingleton<KOFShaderManager> + v6) != *(_QWORD *)v )
  {
    **((_QWORD **)&v7->~AgSingleton<KOFShaderManager> + v6) = *(_QWORD *)v;
    KOFShaderManager::setUniformWriteMask(v4, v3);
  }
}

void __fastcall glUniform4fAG(int location, float x, float y, float z, float w)
{
  __int64 v5; // r10
  KOFShaderManager *v6; // rcx
  float *v7; // rax

  v5 = location;
  v6 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  v7 = (float *)*((_QWORD *)&AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable) + 5].__vftable)
                                                                      + 494188].~AgSingleton<KOFShaderManager>
                + *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11
                                                                     * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                     + 11].~AgSingleton<KOFShaderManager>
                  + 4 * v5));
  if ( *v7 != x || v7[1] != y || v7[2] != z || v7[3] != w )
  {
    *v7 = x;
    v7[1] = y;
    v7[2] = z;
    v7[3] = w;
    KOFShaderManager::setUniformWriteMask(v6, v5);
  }
}

void __fastcall glUniform4fvAG(int location, int count, const float *v)
{
  KOFShaderManager *v3; // rbx
  size_t v6; // rdi
  void **v7; // r14

  v3 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  v6 = 16i64 * count;
  v7 = (void **)(&AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable) + 5].__vftable)
                                                           + 494188].~AgSingleton<KOFShaderManager>
               + *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11
                                                                    * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                    + 11].~AgSingleton<KOFShaderManager>
                 + 4 * location));
  if ( memcmp(*v7, v, v6) )
  {
    memmove(*v7, v, v6);
    KOFShaderManager::setUniformWriteMask(v3, location);
  }
}

void __fastcall glUniformMatrix4fvAG(int location, int count, unsigned __int8 transpose, const float *value)
{
  KOFShaderManager *v4; // rbx
  size_t v7; // rdi
  void **v8; // r14

  v4 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  v7 = (__int64)count << 6;
  v8 = (void **)(&AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable) + 5].__vftable)
                                                           + 494188].~AgSingleton<KOFShaderManager>
               + *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11
                                                                    * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                    + 11].~AgSingleton<KOFShaderManager>
                 + 4 * location));
  if ( memcmp(*v8, value, v7) )
  {
    memmove(*v8, value, v7);
    KOFShaderManager::setUniformWriteMask(v4, location);
  }
}

void __fastcall glUniformMatrix4fvMatrixClassBoneAG(
        int location,
        int count,
        unsigned __int8 transpose,
        const Matrix4Unaligned *value)
{
  KOFShaderManager *v4; // rsi
  Vector4Unaligned *v7; // rdi

  v4 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  Framework::GLManager::glm->commandBoneCount = 1;
  v7 = (Vector4Unaligned *)v4->m_shaderUniformPtr[v4->m_program[v4->m_currentProgramSlot].m_linkID][v4->m_program[v4->m_currentProgramSlot].m_uniformAttrib[location].index];
  if ( memcmp(v7, value, 0x40ui64) )
  {
    *v7 = value->x;
    v7[1] = value->y;
    v7[2] = value->z;
    v7[3] = value->w;
    KOFShaderManager::setUniformWriteMask(v4, location);
  }
}

void __fastcall glVertexAttribPointerAG(
        unsigned int indx,
        int size,
        unsigned int type,
        unsigned __int8 normalized,
        int stride,
        const void *ptr)
{
  __int64 v7; // r10
  int renderSize; // eax
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  char *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx

  LODWORD(v7) = *((_DWORD *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                     * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                     + 7].onSingletonInit
                + indx);
  renderSize = Framework::GLManager::glm->renderSize;
  if ( renderSize != 64 )
  {
    if ( renderSize == 280 )
    {
      v9 = 136;
      if ( indx )
      {
        v14 = indx - 1;
        if ( !v14 )
          goto $LN46_13;
        v15 = v14 - 1;
        if ( !v15 )
          goto $LN47_10;
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v9 = 8;
        }
        else
        {
          v9 = 16;
        }
      }
$LN75_11:
      v13 = (char *)ptr;
      goto LABEL_16;
    }
    if ( renderSize != 208 )
    {
      v9 = 144;
      if ( renderSize == 144 )
      {
        switch ( indx )
        {
          case 6u:
            v13 = (char *)ptr + 16;
            break;
          case 7u:
            goto $LN47_10;
          case 8u:
            goto $LN48_10;
          case 9u:
            goto $LN49_13;
          case 0xAu:
            goto $LN50_9;
          case 0xBu:
            goto $LN41_16;
          case 0xCu:
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 < g_maxEnabledVertexAttribArrays )
            {
              g_vertexAttribIndex[v7] = indx;
              g_pendingVertexAttribArrays |= 1 << v7;
            }
            v13 = (char *)ptr + 96;
            break;
          case 0xDu:
            v7 = (unsigned int)(v7 + 2);
            if ( (unsigned int)v7 < g_maxEnabledVertexAttribArrays )
            {
              g_vertexAttribIndex[v7] = indx;
              g_pendingVertexAttribArrays |= 1 << v7;
            }
            v13 = (char *)ptr + 112;
            break;
          case 0xEu:
            v7 = (unsigned int)(v7 + 3);
            if ( (unsigned int)v7 < g_maxEnabledVertexAttribArrays )
            {
              g_vertexAttribIndex[v7] = indx;
              g_pendingVertexAttribArrays |= 1 << v7;
            }
            v13 = (char *)ptr + 128;
            break;
          default:
            goto $LN75_11;
        }
      }
      else
      {
        v9 = 88;
        switch ( indx )
        {
          case 1u:
            goto $LN46_13;
          case 2u:
            goto $LN47_10;
          case 3u:
            goto $LN48_10;
          case 4u:
            goto $LN49_13;
          case 5u:
$LN50_9:
            v13 = (char *)ptr + 64;
            break;
          case 6u:
            v13 = (char *)ptr + 72;
            break;
          case 7u:
$LN41_16:
            v13 = (char *)ptr + 80;
            break;
          default:
            goto $LN75_11;
        }
      }
      goto LABEL_16;
    }
  }
  v9 = 64;
  if ( !indx )
    goto $LN75_11;
  v10 = indx - 1;
  if ( !v10 )
  {
$LN46_13:
    v13 = (char *)ptr + 12;
    goto LABEL_16;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
$LN47_10:
    v13 = (char *)ptr + 24;
    goto LABEL_16;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
$LN49_13:
      v13 = (char *)ptr + 56;
      goto LABEL_16;
    }
    goto $LN75_11;
  }
$LN48_10:
  v13 = (char *)ptr + 40;
LABEL_16:
  if ( (int)v7 >= 0 )
    _glewVertexAttribPointer(v7, size, 0x1406u, normalized, v9, v13);
}

void __fastcall glsFramebufferTexture2D(
        unsigned int target,
        unsigned int attachment,
        unsigned int textarget,
        unsigned int texture,
        int level,
        unsigned int width,
        unsigned int height)
{
  Framework::GLManager *v7; // rbx
  unsigned int v9; // edi
  GLint v10; // [rsp+50h] [rbp-48h] BYREF
  GLint v11; // [rsp+54h] [rbp-44h] BYREF
  GLint params; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+60h] [rbp-38h] BYREF
  int v14; // [rsp+64h] [rbp-34h]
  int v15; // [rsp+68h] [rbp-30h]

  v7 = Framework::GLManager::glm;
  v9 = attachment;
  switch ( attachment )
  {
    case 0x8CE2u:
      v15 = 36066;
      v13 = 36064;
      v14 = 36065;
      _glewDrawBuffers(3, &v13);
      v7->m_outputMask = 7;
      break;
    case 0x8CE1u:
      v13 = 36064;
      v14 = 36065;
      _glewDrawBuffers(2, &v13);
      v7->m_outputMask = 3;
      break;
    case 0x8CE0u:
      v13 = 36064;
      _glewDrawBuffers(1, &v13);
      v7->m_outputMask = 1;
      break;
    case 0x8D00u:
      v9 = 33306;
      Framework::GLManager::glm->m_renderbuffer.m_freeIDs[8 * Framework::GLManager::glm->currentFramebufferID + 27] = 1;
      goto LABEL_4;
  }
  *(_DWORD *)&v7->m_renderbuffer.m_freeIDs[8 * v7->currentFramebufferID + 31] = v9;
LABEL_4:
  glGetIntegerv(0x8069u, &params);
  glBindTexture(0xDE1u, texture);
  glGetTexLevelParameteriv(0xDE1u, 0, 0x1000u, &v10);
  glGetTexLevelParameteriv(0xDE1u, 0, 0x1001u, &v11);
  if ( v10 != width || v11 != height )
  {
    glTexParameterf(0xDE1u, 0x2800u, 9729.0);
    glTexParameterf(0xDE1u, 0x2801u, 9729.0);
    glTexParameterf(0xDE1u, 0x2802u, 33071.0);
    glTexParameterf(0xDE1u, 0x2803u, 33071.0);
    if ( v9 == 33306 )
      glTexImage2D(0xDE1u, 0, 35056, width, height, 0, 0x84F9u, 0x84FAu, 0i64);
    else
      glTexImage2D(0xDE1u, 0, 6408, width, height, 0, 0x1908u, 0x1401u, 0i64);
  }
  glBindTexture(0xDE1u, params);
  _glewFramebufferTexture2D(0x8D40u, v9, 0xDE1u, texture, 0);
  _glewCheckFramebufferStatus(0x8D40u);
}

void __fastcall Framework::GLManager::onExecuteThread(Framework::GLManager *this)
{
  std::_Func_base<void> *v2; // rcx

  while ( this->m_renderThreadRunning )
  {
    v2 = this->m_renderThreadExec._Mystorage._Ptrs[7];
    if ( !v2 )
      std::_Xbad_function_call();
    v2->_Do_call(v2);
  }
}

void __fastcall Framework::GLManager::onJoinThread(Framework::GLManager *this)
{
  this->m_renderThreadRunning = 0;
}

void __fastcall Framework::MemoryManager::release(Framework::MemoryManager *this, void *pointer)
{
  char *v4; // rbx
  Framework::_MEM64_HEADER *v5; // rax
  Framework::_MEM64_HEADER *v6; // rcx

  if ( pointer )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->memMutex);
    if ( pointer >= this->pools.area && pointer < (char *)this->pools.area + this->pools.size )
    {
      v4 = (char *)pointer - *((unsigned int *)pointer - 1);
      if ( *((_DWORD *)v4 + 6) )
      {
        v5 = (Framework::_MEM64_HEADER *)*((_QWORD *)v4 + 1);
        if ( !v5 || (char *)v5->prev == v4 )
        {
          v6 = *(Framework::_MEM64_HEADER **)v4;
          *((_DWORD *)v4 + 6) = 0;
          if ( v6 )
          {
            if ( v5 )
            {
              v6->next = v5;
              **((_QWORD **)v4 + 1) = v6;
            }
            else
            {
              this->pools.end = v6;
              v6->next = 0i64;
            }
          }
          else
          {
            this->pools.top = v5;
            if ( *((_QWORD *)v4 + 1) )
              v5->prev = 0i64;
            else
              this->pools.end = 0i64;
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->memMutex);
  }
}

void __fastcall Framework::GLManager::setCurrentFrameBuffer(Framework::GLManager *this)
{
  Framework::GLManager *v1; // rbx
  __int64 m_backBufferIndex; // rax
  __int64 v3; // rax

  v1 = gs_glm;
  m_backBufferIndex = gs_glm->m_backBufferIndex;
  gs_glm->renderSize = 0;
  v1->commandBufferTotal = 0;
  glBindRenderbufferAG((unsigned int)this, v1->systemRenderID[m_backBufferIndex]);
  v3 = v1->m_backBufferIndex;
  v1->m_bOpenGLBlocked = 1;
  Framework::GLManager::glm->currentFramebufferID = v1->systemBufferID[v3];
  v1->m_bOpenGLBlocked = 0;
  if ( dword_140A96054 )
  {
    dword_140A96054 = 0;
    glDisable(0xB44u);
  }
  glCullFace(0x405u);
  glFrontFace(0x900u);
  if ( dword_140A9606C != 1 )
  {
    dword_140A9606C = 1;
    glEnable(0xB71u);
  }
  glDepthFunc(0x201u);
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
  v1->m_renderCount = 0;
}

void __fastcall Framework::GLManager::startRenderThread(
        Framework::GLManager *this,
        std::function<void __cdecl(void)> *exec)
{
  Framework::GLManager *v3; // rbx
  AgController *v4; // rax
  __int64 v5; // rdx
  std::function<void __cdecl(void)> *v6; // rcx
  AgThread *v7; // [rsp+50h] [rbp+8h]

  v3 = gs_glm;
  std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>::operator=(
    &gs_glm->m_renderThreadExec,
    exec);
  v3->m_renderThreadRunning = 1;
  v7 = (AgThread *)operator new(0x28ui64);
  AgThread::AgThread(v7, v3, 0x100000ui64, -1, "GLManager");
  AgPointer<AgThread>::operator=((AgPointer<AgController> *)&v3->m_renderThread, v4);
  v6 = (std::function<void __cdecl(void)> *)exec->_Mystorage._Ptrs[7];
  if ( v6 )
  {
    LOBYTE(v5) = v6 != exec;
    ((void (__fastcall *)(std::function<void __cdecl(void)> *, __int64))v6->_Mystorage._Ptrs[0][4].__vftable)(v6, v5);
    exec->_Mystorage._Ptrs[7] = 0i64;
  }
}

void __fastcall Framework::GLManager::startUp(Framework::GLManager *this, int width, int height)
{
  Framework::GLManager *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  AgWindowMode StartingPos; // eax
  GLint v9; // ecx
  void **m_pfIndexBuffer; // rax
  __int64 v11; // rcx
  unsigned int *p_alignment; // rbx
  AgDisplay *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v15; // esi
  AgPointer<AgDisplay> result; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-B8h]
  LPCSTR lpText[14]; // [rsp+40h] [rbp-A8h]

  v17 = -2i64;
  v5 = gs_glm;
  v5->mainGraphicsPthread = Concurrency::details::platform::GetCurrentThreadId();
  AgSingleton<AgSystemManager>::ms_instance->__vftable[2].onSingletonInit(AgSingleton<AgSystemManager>::ms_instance);
  v6 = 7i64;
  switch ( AgLocale::getCurrentSystemLanguage() )
  {
    case SystemLanguage_French:
      v7 = 5i64;
      break;
    case SystemLanguage_Italian:
      v7 = 6i64;
      break;
    case SystemLanguage_German:
      v7 = 7i64;
      break;
    case SystemLanguage_Spanish:
      v7 = 8i64;
      break;
    case SystemLanguage_Spanish_Latin:
      v7 = 9i64;
      break;
    case SystemLanguage_Portuguese:
      v7 = 11i64;
      break;
    case SystemLanguage_Portuguese_Brazil:
      v7 = 10i64;
      break;
    case SystemLanguage_Russian:
      v7 = 12i64;
      break;
    case SystemLanguage_Japanese:
      v7 = 0i64;
      break;
    case SystemLanguage_Korean:
      v7 = 4i64;
      break;
    case SystemLanguage_Chinese_Traditional:
      v7 = 3i64;
      break;
    case SystemLanguage_Chinese_Simplified:
      v7 = 2i64;
      break;
    default:
      v7 = 1i64;
      break;
  }
  if ( !_glewDispatchCompute )
  {
    lpText[0] = aTheKingOfFight_5;
    lpText[1] = "The King Of Fighters XIV requires OpenGL 4.3 or higher to run.";
    lpText[2] = asc_14092CAE0;
    lpText[3] = aTheKingOfFight_2;
    lpText[4] = aTheKingOfFight_1;
    lpText[5] = "The King Of Fighters XIV nécessite OpenGL 4.3 ou ultérieur pour être lancé.";
    lpText[6] = "Per poter funzionare, The King Of Fighters XIV necessita di OpenGL 4.3 o di una versione superiore.";
    lpText[7] = aTheKingOfFight_7;
    lpText[8] = "The King Of Fighters XIV requiere OpenGL 4.3 o superior para ejecutarse.";
    lpText[9] = "The King Of Fighters XIV requiere OpenGL 4.3 o superior para ejecutarse.";
    lpText[10] = aParaExecutarTh;
    lpText[11] = aParaExecutarTh;
    lpText[12] = "The King Of Fighters XIV requires OpenGL 4.3 or higher to run.";
    MessageBoxA(0i64, lpText[v7], "Error", 0);
    exit(0);
  }
  AgDisplayManager::getDisplayByIndex((AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance, &result, 0);
  StartingPos = Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(result.m_ptr);
  AgDisplay::setCursor(result.m_ptr, 0, StartingPos != AgWindowMode_Windowed);
  AgDisplay::use(result.m_ptr);
  glGetIntegerv(0x8869u, &g_maxEnabledVertexAttribArrays);
  v9 = 32;
  if ( g_maxEnabledVertexAttribArrays < 32 )
    v9 = g_maxEnabledVertexAttribArrays;
  g_maxEnabledVertexAttribArrays = v9;
  memset(g_vertexAttribIndex, 0, sizeof(g_vertexAttribIndex));
  m_pfIndexBuffer = v5->m_pfIndexBuffer;
  v11 = 512i64;
  do
  {
    *(m_pfIndexBuffer - 512) = 0i64;
    *m_pfIndexBuffer++ = 0i64;
    --v11;
  }
  while ( v11 );
  Framework::GLManager::createFrameBuffers(v5, width, height);
  AgSingleton<KOFShaderManager>::createInstance();
  Framework::Input::ControllerContext::initialize(&v5->m_controllerContext);
  v5->allocateStaticBuffers.pools.size = 419430400i64;
  v5->allocateStaticBuffers.pools.alignment = 16;
  v5->allocateStaticBuffers.pools.end = 0i64;
  v5->allocateStaticBuffers.pools.top = 0i64;
  v5->allocateStaticBuffers.pools.area = (int *)aligned_malloc(0x19000000ui64, 0x10ui64);
  v5->allocateSound.pools.size = 335544320i64;
  v5->allocateSound.pools.alignment = 16;
  v5->allocateSound.pools.end = 0i64;
  v5->allocateSound.pools.top = 0i64;
  v5->allocateSound.pools.area = (int *)aligned_malloc(0x14000000ui64, 0x10ui64);
  v5->allocateScriptBuffers.pools.size = 100663296i64;
  v5->allocateScriptBuffers.pools.alignment = 16;
  v5->allocateScriptBuffers.pools.end = 0i64;
  v5->allocateScriptBuffers.pools.top = 0i64;
  v5->allocateScriptBuffers.pools.area = (int *)aligned_malloc(0x6000000ui64, 0x10ui64);
  v5->allocateLuaScriptBuffers.pools.size = 50331648i64;
  v5->allocateLuaScriptBuffers.pools.alignment = 16;
  v5->allocateLuaScriptBuffers.pools.end = 0i64;
  v5->allocateLuaScriptBuffers.pools.top = 0i64;
  v5->allocateLuaScriptBuffers.pools.area = (int *)aligned_malloc(0x3000000ui64, 0x10ui64);
  p_alignment = &v5->allocateStaticBuffersEffect[0].pools.alignment;
  do
  {
    *((_QWORD *)p_alignment - 1) = 0x200000i64;
    *p_alignment = 16;
    *((_QWORD *)p_alignment + 4) = 0i64;
    *((_QWORD *)p_alignment + 3) = 0i64;
    *((_QWORD *)p_alignment - 2) = aligned_malloc(0x200000ui64, 0x10ui64);
    p_alignment += 24;
    --v6;
  }
  while ( v6 );
  m_ptr = result.m_ptr;
  result.m_ptr = 0i64;
  m_ref = result.m_ref;
  if ( result.m_ref )
  {
    result.m_ref = 0i64;
    v15 = 0;
    if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
        v15 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
      {
        AgDisplay::~AgDisplay(m_ptr);
        operator delete(m_ptr, 0x70ui64);
      }
      if ( v15 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall Framework::GLManager::swapBuffer(Framework::GLManager *this)
{
  int v1; // edi
  char v2; // r12
  Framework::GLManager *v3; // rbx
  int v4; // esi
  int v5; // ebp
  unsigned __int64 v6; // xmm1_8
  int v7; // er15
  unsigned __int64 v8; // r14
  __int64 *v9; // rax
  __int64 v10; // r13
  int v11; // eax
  float v12; // xmm1_4
  int v13; // er12
  AgDisplayPlatformImplementation *v14; // rax
  AgDisplayPlatformImplementation *Log; // rax
  GLint params; // [rsp+50h] [rbp-88h] BYREF
  AgWindowMode StartingPos; // [rsp+54h] [rbp-84h]
  AgPointer<AgDisplay> v18; // [rsp+58h] [rbp-80h] BYREF
  __int64 v19; // [rsp+68h] [rbp-70h]
  AgRectangle result; // [rsp+70h] [rbp-68h] BYREF
  std::string v21; // [rsp+80h] [rbp-58h] BYREF

  v19 = -2i64;
  v1 = 0;
  v2 = 0;
  StartingPos = AgWindowMode_Windowed;
  v3 = gs_glm;
  AgDisplayManager::getDisplayByIndex((AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance, &v18, 0);
  _glewBindFramebuffer(0x8CA9u, 0);
  params = 0;
  glGetIntegerv(0x8CAAu, &params);
  if ( *(_QWORD *)&AppMain::pApp )
  {
    v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 28i64);
    v5 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 32i64);
  }
  else
  {
    v4 = 1920;
    v5 = 1080;
  }
  StartingPos = Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(v18.m_ptr);
  v6 = _mm_srli_si128(*(__m128i *)AgDisplay::getScreenSize(&result), 8).m128i_u64[0];
  v7 = v6;
  v8 = HIDWORD(v6);
  v9 = (__int64 *)NtCurrentTeb()->Reserved1[11];
  v10 = *v9;
  if ( dword_140AD0200 > *(_DWORD *)(*v9 + 40) )
  {
    Init_thread_header(&dword_140AD0200);
    if ( dword_140AD0200 == -1 )
    {
      vendor_0 = (const char *)glGetString(0x1F00u);
      Init_thread_footer(&dword_140AD0200);
    }
  }
  if ( dword_140AD01F8 > *(_DWORD *)(v10 + 40) )
  {
    Init_thread_header(&dword_140AD01F8);
    if ( dword_140AD01F8 == -1 )
    {
      if ( !vendor_0
        || (v21._Mypair._Myval2._Myres = 15i64,
            v21._Mypair._Myval2._Mysize = 0i64,
            v21._Mypair._Myval2._Bx._Buf[0] = 0,
            std::string::assign(&v21, "Intel", 5ui64),
            v2 = 1,
            v11 = std::string::compare(&v21, vendor_0),
            isIntel = 1,
            v11) )
      {
        isIntel = 0;
      }
      if ( (v2 & 1) != 0 )
        std::string::~string(&v21);
      Init_thread_footer(&dword_140AD01F8);
    }
  }
  if ( StartingPos == AgWindowMode_Windowed || v4 == (_DWORD)v6 && v5 == HIDWORD(v6) )
  {
    v3->m_bOpenGLBlocked = 1;
    if ( !isIntel
      || !AgDisplay::isMinimized(v18.m_ptr)
      && (Log = Scaleform::GFx::Stream::GetLog(v18.m_ptr), !AgDisplayPlatformImplementation::IsMinimized(Log)) )
    {
      _glewBlitFramebuffer(0, 0, v4, v5, 0, 0, v4, v5, 0x4000u, 0x2600u);
    }
  }
  else
  {
    v12 = (float)v4 / (float)v5;
    v13 = 0;
    if ( (float)((float)v7 / (float)(int)v8) <= v12 )
    {
      if ( v12 > (float)((float)v7 / (float)(int)v8) )
        v13 = ((int)v8 - (int)(float)((float)v7 / v12)) / 2;
    }
    else
    {
      v1 = (v7 - (int)(float)((float)(int)v8 * v12)) / 2;
    }
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClearAG(0x4000u);
    v3->m_bOpenGLBlocked = 1;
    if ( !isIntel
      || !AgDisplay::isMinimized(v18.m_ptr)
      && (v14 = Scaleform::GFx::Stream::GetLog(v18.m_ptr), !AgDisplayPlatformImplementation::IsMinimized(v14)) )
    {
      _glewBlitFramebuffer(0, 0, v4, v5, v1, v13, v7 - v1, v8 - v13, 0x4000u, 0x2601u);
    }
  }
  v3->m_bOpenGLBlocked = 0;
  v3->m_backBuffer = (Framework::GLManager::Buffer *)&v3->m_buffer.m_freeIDs[12
                                                                           * LOBYTE(v3->systemRenderID[v3->m_backBufferIndex])
                                                                           + 15];
  v3->m_bOpenGLBlocked = 1;
  _glewBindFramebuffer(0x8CA9u, params);
  AgDisplay::flush(v18.m_ptr);
  while ( glGetError() )
    ;
  v3->m_bOpenGLBlocked = 0;
  memset(m_Flg, 255, sizeof(m_Flg));
  AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&v18);
}

void __fastcall Framework::GLManager::swapStackBuffer(Framework::GLManager *this)
{
  Framework::GLManager *v1; // r9
  unsigned int m_frameIndex; // er10
  unsigned int m_frameCount; // ecx
  unsigned __int8 *v4; // r8
  __int64 v5; // rax
  unsigned int m_blockSize; // ett
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rax

  v1 = gs_glm;
  ++gs_glm->m_agDrawAllocator.m_frameIndex;
  m_frameIndex = v1->m_agDrawAllocator.m_frameIndex;
  m_frameCount = v1->m_agDrawAllocator.m_frameCount;
  v1->m_agDrawAllocator.m_currentBlock = 0;
  if ( m_frameIndex < m_frameCount )
  {
    m_blockSize = v1->m_agDrawAllocator.m_blockSize;
    v7 = *v1->m_agDrawAllocator.m_blocks._Mypair._Myval2._Myfirst;
    v1->m_agDrawAllocator.m_lastFrameStartOffset = 0i64;
    v8 = &v7[m_frameIndex * (m_blockSize / m_frameCount)];
    v1->m_agDrawAllocator.m_lastAllocation = 0i64;
    v1->m_agDrawAllocator.m_frameStartOffset = v8;
    v1->m_agDrawAllocator.m_frameEndOffset = &v8[m_blockSize / m_frameCount];
  }
  else
  {
    v1->m_agDrawAllocator.m_frameIndex = 0;
    v4 = *v1->m_agDrawAllocator.m_blocks._Mypair._Myval2._Myfirst;
    v5 = v1->m_agDrawAllocator.m_blockSize / m_frameCount;
    v1->m_agDrawAllocator.m_frameStartOffset = v4;
    v1->m_agDrawAllocator.m_lastFrameStartOffset = 0i64;
    v1->m_agDrawAllocator.m_frameEndOffset = &v4[v5];
    v1->m_agDrawAllocator.m_lastAllocation = 0i64;
  }
}

void __fastcall Framework::GLManager::updateClock(Framework::GLManager *this)
{
  Framework::GLManager *v1; // rbx
  signed int m_microSecondsPerFrame; // eax
  AgProgram *Instance; // rax
  long double TotalElapsedTime; // xmm0_8
  unsigned __int64 v5; // rax
  double v6; // xmm0_8
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  double v9; // xmm1_8
  double v10; // xmm1_8
  long double v11; // xmm1_8
  __m128d v12; // xmm0

  v1 = gs_glm;
  m_microSecondsPerFrame = gs_glm->m_config.m_microSecondsPerFrame;
  if ( m_microSecondsPerFrame )
  {
    v10 = (double)m_microSecondsPerFrame / 1000000.0;
  }
  else
  {
    Instance = AgProgram::getInstance();
    TotalElapsedTime = AgClock::getTotalElapsedTime((AgClock *)&Instance[1].AgReferencedObject);
    v5 = 0i64;
    v6 = TotalElapsedTime * 1000000.0;
    if ( v6 >= 9.223372036854776e18 )
    {
      v6 = v6 - 9.223372036854776e18;
      if ( v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    v7 = v5 + (unsigned int)(int)v6;
    v8 = v7 - v1->m_lastClock;
    v9 = (double)(int)v8;
    if ( v8 < 0 )
      v9 = v9 + 1.844674407370955e19;
    v10 = v9 / 1000000.0;
    v1->m_lastClock = v7;
  }
  v11 = fmax(0.0, fmin(0.5, v10));
  v1->m_secondsElapsedActualPerFrame = v11;
  v1->m_secondsElapsedActual = v11 + v1->m_secondsElapsedActual;
  v12 = _mm_cvtps_pd((__m128)LODWORD(v1->m_frameProgressSpeed));
  v1->m_frameProgressSpeed = 0.0;
  v12.m128d_f64[0] = v12.m128d_f64[0] * v11 + v1->m_secondsElapsedApparentLastFrame;
  *(__m128d *)&v1->m_secondsElapsedApparent = _mm_unpacklo_pd(v12, v12);
}

