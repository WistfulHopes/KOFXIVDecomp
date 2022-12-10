#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_menuvs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_result.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_fightinglist.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/util/ageventdispatcher.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_loading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_playerdatamenu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_rankmatch.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_myprofile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_menu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_matching.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_room.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlinesearchroomsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/apputil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gallery.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/battledefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battlemissionsub.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/system/agsystemmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/silverware/git/sdk/system/agsystemconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_logo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battlemain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_onlinemenu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/onlinesample/st_onlineroom.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_title.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battlepause.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_onlinereplay.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_storydemo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/menuutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/memory.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfigure.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/content/contentsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/content/contentcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/networkstatuscommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/networkstatussystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingreadpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingwriteworkpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/rankingwritepc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/tusreadps4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragetargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/tuswriteworkpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/tuswriteps4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetkb.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpad.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/game_script.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/onlinesavedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/livestreamingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmateriallight.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/define/battledefine.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/crc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_startup.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_title.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_orderselect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_memberselect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_menuvs.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_tutorialmenu.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_stageselect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_thankyou.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_option.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missionmenu.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiontrial.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_playerdatamenu.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_playerrecord.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_characterrecord.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_myranking.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_myprofile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_leaderboard.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_onlinereplay.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_profile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_onlinemenu.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_storydemo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_credit.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_rankmatch.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_freematchmenu.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_freematch.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/wordfiltersystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_playtogether.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_matching.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_roomlist.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_onlinetraining.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_store.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/prefightfaceoff/scene_prefightfaceoff.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/scene_roommember.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"

AppMain::AppMain(ViewController * pBV); // 0x140098960
BattleSystem::BattleRoundInfo::PlayerData::PlayerData(); // 0x1400984B0
AppMain::_MODELROOM_SETTINGS::_MODELROOM_SETTINGS(); // 0x1400991F0
SaveRecord_ButtonConfig::~SaveRecord_ButtonConfig(); // 0x140098770
SaveRecord_ButtonConfigUser::~SaveRecord_ButtonConfigUser(); // 0x1400985D0
SaveRecord_Main::~SaveRecord_Main(); // 0x140099380
AppMain::_CHARAINFO::~_CHARAINFO(); // 0x1400993D0
AppMain::_MODELROOM_SETTINGS::~_MODELROOM_SETTINGS(); // 0x140099350
void AppMain::setInit(ViewController * pBV); // 0x1400993E0
long AppMain::initialize(long w, long h, float scale); // 0x140099460
void AppMain::setDrawScale(long virtualW, long virtualH, unsigned char scaling, float drawScale, float posScale); // 0x140099920
void AppMain::onResume(); // 0x140099A60
void AppMain::onExit(); // 0x140099B50
void AppMain::ResumeWait(); // 0x140099BF0
void AppMain::onRunExe(); // 0x140099D10
void AppMain::onRunExe_AG_Partial(); // 0x140099FC0
void AppMain::callNotifyDeviceHotswap(); // 0x14009A050
void AppMain::onControllerAdded(const AgControllerAddedEvent & e); // 0x14009A0D0
void AppMain::onControllerRemoved(const AgControllerRemovedEvent & e); // 0x14009A330
void AppMain::onRunDraw(); // 0x14009A340
void AppMain::SceneFunc(long scene); // 0x14009A560
void AppMain::SceneJump(long scene); // 0x14009B950
void AppMain::ST_FadeOut(); // 0x14009BA20
void AppMain::FadeDraw(); // 0x14009BAC0
void AppMain::setNonFadeSTExit(long FadeST, long exitFunc); // 0x14009BC90
AppMain * initAppMain(long width, long height, long realW, long realH, float realScaleX, float realScaleY); // 0x14009BCD0
void AppMain::setWindowSize(long w, long h); // 0x14009BDD0
void AppMain::ResizeDisplay(long width, long height, AgWindowMode mode, long vsync); // 0x14009BEC0
void AppMain::initializeNetwork(); // 0x14009C240
void AppMain::updateNetwork(); // 0x14009C5D0
void onDisconnectNoticeClosed(long cursor); // 0x14009CB70
void AppMain::NoticeDiscoonectLevel(bool noticeFlag); // 0x14009CB90
void onNetworkErrorClosed(long cursor); // 0x14009CD40
void onNetworkErrorClosedBackRoom(long cursor); // 0x14009CEF0
void AppMain::UpdateInputDevice(); // 0x14009D010
bool <lambda_993310bac1e185f67fa16362ab5e4a64>::operator()(); // 0x14009D780
class AppMain::UpdateInputDevice::__l2::<lambda_993310bac1e185f67fa16362ab5e4a64>
{
public:
	bool operator()();
	<lambda_993310bac1e185f67fa16362ab5e4a64>(AppMain::UpdateInputDevice::__l2::<lambda_993310bac1e185f67fa16362ab5e4a64> &);
	<lambda_993310bac1e185f67fa16362ab5e4a64>();
	<lambda_993310bac1e185f67fa16362ab5e4a64>(AgControllerType &, AppMain *, AgControllerHardwareType &, Framework::GLManager * &);
private:
	AgControllerType & cur; // 0x0
	AppMain * __this; // 0x8
	AgControllerHardwareType & curHw; // 0x10
	Framework::GLManager * & pGLM; // 0x18
public:
	AppMain::UpdateInputDevice::__l2::<lambda_993310bac1e185f67fa16362ab5e4a64> & operator=(const AppMain::UpdateInputDevice::__l2::<lambda_993310bac1e185f67fa16362ab5e4a64> &);
};
AgSingleton<AgDisplayManager> * AgSingleton<AgDisplayManager>::ms_instance; // 0x140ACBBC8
long markerCount; // 0x140A97478
std::piecewise_construct_t std::piecewise_construct; // 0x14088A4EC
void(*??s_stageProjData$initializer$@AppMain@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407B8
void(*??s_charaProjData$initializer$@AppMain@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407B0
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5BC00
AgControllerUID AppMain::GetControllerUIDForUser(USER_ID userID); // 0x14009D8E0
AgControllerUID AppMain::GetControllerUIDForDeviceID(long deviceID); // 0x14009D9A0
void AppMain::UpdateNetworkError(); // 0x14009DA10
void AppMain::InvitedTransInit(); // 0x14009DB60
void AppMain::processCommandLine(); // 0x14009DCD0//decompilation failure at 140ACBBC8!
//decompilation failure at 140A97478!
//decompilation failure at 14088A4EC!
//decompilation failure at 1407407B8!
//decompilation failure at 1407407B0!
//decompilation failure at 140A5BC00!
void __fastcall std::_Destroy_range<std::allocator<extension::BasicFutureObject<OGLCurve,void>>,extension::BasicFutureObject<OGLCurve,void> *>(
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_First,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Last,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *_Al)
{
  extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *p_m_body; // rbx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx

  if ( _First != _Last )
  {
    p_m_body = &_First->m_body;
    do
    {
      m_ptr = p_m_body->m_ptr;
      if ( p_m_body->m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64, std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64,
            _Al);
      }
      p_m_body += 2;
    }
    while ( &p_m_body[-1] != (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *)_Last );
  }
}

AgDelegate1<AgControllerRemovedEvent const &,void> *__fastcall std::_Uninitialized_move_al_unchecked1<AgDelegate1<AgControllerAddedEvent const &,void> *,AgDelegate1<AgControllerAddedEvent const &,void> *,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>>(
        AgDelegate1<AgControllerRemovedEvent const &,void> *_First,
        AgDelegate1<AgControllerRemovedEvent const &,void> *_Last,
        AgDelegate1<AgControllerRemovedEvent const &,void> *_Dest,
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > *_Al)
{
  for ( ; _First != _Last; ++_First )
  {
    if ( _Dest )
    {
      _Dest->m_Closure.m_pthis = 0i64;
      _Dest->m_Closure.m_pFunction = 0i64;
      *_Dest = *_First;
    }
    ++_Dest;
  }
  return _Dest;
}

void __fastcall AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        AgPointer<AgPlayer> *this,
        const AgPointer<AgPlayer> *rhs)
{
  AgReferenceCount *m_ref; // rsi
  int m_strongCount; // ebx

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  m_ref = rhs->m_ref;
  if ( rhs->m_ref )
  {
    m_strongCount = m_ref->m_strongCount;
    if ( m_ref->m_strongCount )
    {
      while ( AgAtomicCompareExchange(&m_ref->m_strongCount, m_strongCount, m_strongCount + 1) != m_strongCount )
      {
        m_strongCount = m_ref->m_strongCount;
        if ( !m_ref->m_strongCount )
          return;
      }
      if ( m_strongCount != -1 )
      {
        this->m_ref = rhs->m_ref;
        this->m_ptr = rhs->m_ptr;
      }
    }
  }
}

void __fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>(
        extension::BasicFutureObject<Image,extension::FutureImageOption> *this)
{
  this->m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->m_body);
}

void __fastcall BattleSystem::ComboMissionJudge::TermClearInfo::TermClearInfo(
        std::unique_ptr<Collision::HitRectList> *this)
{
  this->_Mypair._Myval2 = 0i64;
}

void __fastcall AppMain::AppMain(AppMain *this, ViewController *pBV)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  Fw::ScoreRankData *RankTemp; // rax
  __int64 v6; // rcx
  char *v7; // rax
  __int64 v8; // rcx
  CSteamID *fightingListNpId; // rax
  AppMain *p_cameraMotionPreview; // rax
  __int64 v11; // rcx
  Fix32 *p_xExPower; // rax
  char *p_m_PcId; // rdi
  ViewController *v14; // rdx

  this->m_futureShaderData.m_isNoCache = 0;
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty(&this->m_futureShaderData.m_body);
  RandomMT::RandomMT(&this->randMT);
  this->TIMEOUT_DISCONNECT_CHECK = 10000000i64;
  this->m_SyncMenuBG.m_MenuImage = 0i64;
  *(_QWORD *)&this->m_SyncMenuBG.m_ImageAlpha = 255i64;
  *(_QWORD *)&this->m_SyncMenuBG.m_MenuImageCurrent = -1i64;
  v3 = 100i64;
  v4 = 100i64;
  RankTemp = this->RankTemp;
  do
  {
    *(_DWORD *)&RankTemp->npId.m_steamid.m_comp = 0;
    *((_DWORD *)&RankTemp->npId.m_steamid.m_comp + 1) &= 0xFF0FFFFF;
    HIBYTE(RankTemp->npId.m_steamid.m_unAll64Bits) = 0;
    *((_DWORD *)&RankTemp->npId.m_steamid.m_comp + 1) &= 0xFFF00000;
    ++RankTemp;
    --v4;
  }
  while ( v4 );
  v6 = 100i64;
  v7 = (char *)&this->LeaderboardPlayerRankTemp[0].rankData.npId.m_steamid.m_unAll64Bits + 4;
  do
  {
    *((_DWORD *)v7 - 1) = 0;
    *(_DWORD *)v7 &= 0xFF0FFFFF;
    v7[3] = 0;
    *(_DWORD *)v7 &= 0xFFF00000;
    v7 += 56;
    --v6;
  }
  while ( v6 );
  this->s_ScoreRankTemp = 0i64;
  this->s_ScoreGameInfoTemp = 0i64;
  this->s_ScoreRankAllTemp = 0i64;
  this->s_ScoreGameInfoAllTemp = 0i64;
  this->s_ScoreNpIdPcId = 0i64;
  this->s_ScorePlayerRankFriendData = 0i64;
  this->s_ScoreGameInfoFriendTemp = 0i64;
  v8 = 100i64;
  fightingListNpId = this->fightingListNpId;
  do
  {
    *(_DWORD *)&fightingListNpId->m_steamid.m_comp = 0;
    *((_DWORD *)&fightingListNpId->m_steamid.m_comp + 1) &= 0xFF0FFFFF;
    HIBYTE(fightingListNpId->m_steamid.m_unAll64Bits) = 0;
    *((_DWORD *)&fightingListNpId->m_steamid.m_comp + 1) &= 0xFFF00000;
    ++fightingListNpId;
    --v8;
  }
  while ( v8 );
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->fightingListMutex);
  this->s_RoomInitFlag = 1;
  `eh vector constructor iterator'(
    this->s_RoomListInfo,
    0x438ui64,
    0x32ui64,
    (void (__fastcall *)(void *))Fw::ROOM_ATTR::ROOM_ATTR,
    (void (__fastcall *)(void *))Fw::ROOM_ATTR::~ROOM_ATTR);
  AppMain::_MODELROOM_SETTINGS::_MODELROOM_SETTINGS(&this->ModelRoomSettings);
  BattleStage::BattleStage(&this->stageGimmick);
  p_cameraMotionPreview = (AppMain *)&this->cameraMotionPreview;
  *(_QWORD *)&this->cameraMotionPreview.charaParam[0].iModelMotionNo = 0i64;
  *(_QWORD *)&this->cameraMotionPreview.charaParam[0].fMotionFrame = 0i64;
  *(_QWORD *)&this->cameraMotionPreview.charaParam[0].iModelFaceDownNo = 0i64;
  *(_QWORD *)&this->cameraMotionPreview.charaParam[1].iModelMotionNo = 0i64;
  *(_QWORD *)&this->cameraMotionPreview.charaParam[1].fMotionFrame = 0i64;
  *(_QWORD *)&this->cameraMotionPreview.charaParam[1].iModelFaceDownNo = 0i64;
  this->cameraMotionPreview.iPreviewSide = -1;
  for ( this->cameraMotionPreview.iPlayMode = 0;
        p_cameraMotionPreview != (AppMain *)&this->cameraMotionPreview.iPreviewSide;
        p_cameraMotionPreview = (AppMain *)((char *)p_cameraMotionPreview + 24) )
  {
    p_cameraMotionPreview->m_OrgScreenH = -1;
  }
  this->m_shaderLoadThread.m_ref = 0i64;
  this->m_shaderLoadThread.m_ptr = 0i64;
  this->m_shaderEnsureThread.m_ref = 0i64;
  this->m_shaderEnsureThread.m_ptr = 0i64;
  this->m_preFightFaceOff.pScene = 0i64;
  *(_QWORD *)&this->m_preFightFaceOff.nextFuncST = 0i64;
  `eh vector constructor iterator'(
    this->m_PlayerCharaDataLoad,
    0x10ui64,
    2ui64,
    (void (__fastcall *)(void *))AsyncCharaDataUnifyLoad::AsyncCharaDataUnifyLoad,
    (void (__fastcall *)(void *))AsyncCharaDataUnifyLoad::~AsyncCharaDataUnifyLoad);
  `eh vector constructor iterator'(
    this->m_SupportCharaDataLoad,
    0x10ui64,
    2ui64,
    (void (__fastcall *)(void *))AsyncCharaDataUnifyLoad::AsyncCharaDataUnifyLoad,
    (void (__fastcall *)(void *))AsyncCharaDataUnifyLoad::~AsyncCharaDataUnifyLoad);
  this->m_CommonCharaDataLoad.state.m_ptr = 0i64;
  this->m_CommonCharaDataLoad.bWorking = 0;
  `eh vector constructor iterator'(
    this->m_pPlayerCharaData,
    8ui64,
    2ui64,
    (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::TermClearInfo,
    (void (__fastcall *)(void *))std::unique_ptr<CharaDataUnify>::~unique_ptr<CharaDataUnify>);
  `eh vector constructor iterator'(
    this->m_pSupportCharaData,
    8ui64,
    2ui64,
    (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::TermClearInfo,
    (void (__fastcall *)(void *))std::unique_ptr<CharaDataUnify>::~unique_ptr<CharaDataUnify>);
  this->m_pCommonCharaData._Mypair._Myval2 = 0i64;
  this->m_CharaBaseFigure.m_isNoCache = 0;
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty(&this->m_CharaBaseFigure.m_body);
  BattleHud::BattleHud(&this->m_BattleHud);
  BattleCall::BattleCall(&this->m_BattleCall);
  v11 = 2i64;
  p_xExPower = &this->m_ReplayRoundInfo.playerData[0].xExPower;
  do
  {
    *(_QWORD *)&p_xExPower[-1].value = 0i64;
    *(_QWORD *)&p_xExPower[1].value = 0i64;
    *(_QWORD *)&p_xExPower[3].value = 0i64;
    p_xExPower += 9;
    --v11;
  }
  while ( v11 );
  this->m_onlineRoomMemberParams.pScene = 0i64;
  this->m_OnlineBattleGUIParams.bInitialize = 0;
  this->m_scaleformResult.m_containValueBits = 0;
  this->m_scaleformResult.m_pValueString1 = 0i64;
  this->m_watchingParams.bEnableUserOperation = 0;
  *(_QWORD *)&this->m_watchingParams.operationType = 0i64;
  *(_QWORD *)&this->m_watchingParams.selectSEKey = 0i64;
  this->m_watchingParams.bOpenGFxMenu = 0;
  *(_QWORD *)&this->m_watchingParams.stopTimerSendMessage = 0i64;
  this->m_watchingParams.pTinpanFrame = 0i64;
  this->m_watchingParams.tinpanFrameIndex = 0;
  `eh vector constructor iterator'(
    this->m_KeyData,
    8ui64,
    2ui64,
    (void (__fastcall *)(void *))InputKeyCheck::InputKeyCheck,
    (void (__fastcall *)(void *))std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>);
  `eh vector constructor iterator'(
    this->m_CmdKeyData,
    8ui64,
    2ui64,
    (void (__fastcall *)(void *))InputKeyCheck::InputKeyCheck,
    (void (__fastcall *)(void *))std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>);
  `eh vector constructor iterator'(
    this->m_KeyHistory,
    8ui64,
    2ui64,
    (void (__fastcall *)(void *))InputKeyHistory::InputKeyHistory,
    (void (__fastcall *)(void *))std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>);
  this->m_ComboMissionDataLoad.state.m_ptr = 0i64;
  this->m_ComboMissionDataLoad.bWorking = 0;
  this->m_KeyRecordDataLoad.state.m_ptr = 0i64;
  this->m_KeyRecordDataLoad.bWorking = 0;
  this->m_pComboMissionData._Mypair._Myval2 = 0i64;
  this->m_Snd_Bank_Common.m_bankImpl.m_isNoCache = 0;
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::GetSharedEmpty(&this->m_Snd_Bank_Common.m_bankImpl.m_body);
  this->m_Snd_Bank_BGM.m_bankImpl.m_isNoCache = 0;
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::GetSharedEmpty(&this->m_Snd_Bank_BGM.m_bankImpl.m_body);
  this->m_Snd_Bank_Network.m_bankImpl.m_isNoCache = 0;
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::GetSharedEmpty(&this->m_Snd_Bank_Network.m_bankImpl.m_body);
  this->m_Snd_Bank_Menu.m_bankImpl.m_isNoCache = 0;
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::GetSharedEmpty(&this->m_Snd_Bank_Menu.m_bankImpl.m_body);
  `eh vector constructor iterator'(
    this->m_Snd_Lists,
    0x30ui64,
    9ui64,
    (void (__fastcall *)(void *))extension::SoundList::SoundList,
    (void (__fastcall *)(void *))std::vector<extension::SoundList::BankContent>::~vector<extension::SoundList::BankContent>);
  this->m_nowPlayBGM.m_sharedBuffer.m_ptr = 0i64;
  SaveRecord_Main::SaveRecord_Main(&this->SaveDataMain);
  SaveRecord_Main::SaveRecord_Main(&this->SaveDataMainTemp);
  memset(&this->SaveDataReplay, 0, sizeof(this->SaveDataReplay));
  p_m_PcId = &this->SaveDataReplay.m_Replay[0].m_PcId;
  do
  {
    *p_m_PcId = -1;
    p_m_PcId += 1184;
    --v3;
  }
  while ( v3 );
  this->pMotion._Mypair._Myval2._Myfirst = 0i64;
  this->pMotion._Mypair._Myval2._Mylast = 0i64;
  this->pMotion._Mypair._Myval2._Myend = 0i64;
  this->pFigure._Mypair._Myval2._Myfirst = 0i64;
  this->pFigure._Mypair._Myval2._Mylast = 0i64;
  this->pFigure._Mypair._Myval2._Myend = 0i64;
  this->pMirror._Mypair._Myval2._Myfirst = 0i64;
  this->pMirror._Mypair._Myval2._Mylast = 0i64;
  this->pMirror._Mypair._Myval2._Myend = 0i64;
  this->pTexture._Mypair._Myval2._Myfirst = 0i64;
  this->pTexture._Mypair._Myval2._Mylast = 0i64;
  this->pTexture._Mypair._Myval2._Myend = 0i64;
  *(_QWORD *)&this->posVec3.x = 0i64;
  *(_QWORD *)&this->posVec3.z = 0i64;
  *(_QWORD *)&this->lookVec3.y = 0i64;
  *(_QWORD *)&this->upVec3.x = 0i64;
  this->upVec3.z = 0.0;
  OGLLight::initialize(&this->m_Light, 0);
  OGLMaterialLight::initialize(&this->m_MaterialLight);
  *(_QWORD *)&this->m_LightPos.x = 0i64;
  this->m_LightPos.z = 0.0;
  this->m_Fog.m_Mode = 0;
  *(_QWORD *)this->m_Fog.m_Color = 0i64;
  *(_QWORD *)&this->m_Fog.m_Color[2] = 0i64;
  *(_QWORD *)&this->m_Fog.m_fStart = 0i64;
  *(_QWORD *)&this->m_Fog.m_fUpDistance = 0i64;
  *(_QWORD *)&this->m_Fog.m_fUpHeight = 0i64;
  *(_QWORD *)&this->m_Fog.m_fUpStrength = 0i64;
  *(_QWORD *)this->m_Fog.m_UpColour = 0i64;
  *(_QWORD *)&this->m_Fog.m_UpColour[2] = 0i64;
  *(_QWORD *)&this->m_Fog.m_fDownDistanceExp = 0i64;
  *(_QWORD *)&this->m_Fog.m_fDownHeightExp = 0i64;
  *(_QWORD *)this->m_Fog.m_DownColour = 0i64;
  *(_QWORD *)&this->m_Fog.m_DownColour[2] = 0i64;
  this->m_Fog.m_bOn = 0;
  this->m_Fog.m_calcType = CALC_ADD;
  *(_QWORD *)&this->m_Fog.m_fShaderDistDivisor = 0i64;
  *(_QWORD *)&this->m_Fog.m_fShaderUpHeight = 0i64;
  this->m_Fog.m_fShaderExtraHeightSetting = 0.0;
  *(_QWORD *)this->mBillBoard.m = 0i64;
  *(_QWORD *)&this->mBillBoard.m[2] = 0i64;
  *(_QWORD *)&this->mBillBoard.m[4] = 0i64;
  *(_QWORD *)&this->mBillBoard.m[6] = 0i64;
  *(_QWORD *)&this->mBillBoard.m[8] = 0i64;
  *(_QWORD *)&this->mBillBoard.m[10] = 0i64;
  *(_QWORD *)&this->mBillBoard.m[12] = 0i64;
  *(_QWORD *)&this->mBillBoard.m[14] = 0i64;
  *(_QWORD *)this->mView.m = 0i64;
  *(_QWORD *)&this->mView.m[2] = 0i64;
  *(_QWORD *)&this->mView.m[4] = 0i64;
  *(_QWORD *)&this->mView.m[6] = 0i64;
  *(_QWORD *)&this->mView.m[8] = 0i64;
  *(_QWORD *)&this->mView.m[10] = 0i64;
  *(_QWORD *)&this->mView.m[12] = 0i64;
  *(_QWORD *)&this->mView.m[14] = 0i64;
  *(_QWORD *)this->mProj.m = 0i64;
  *(_QWORD *)&this->mProj.m[2] = 0i64;
  *(_QWORD *)&this->mProj.m[4] = 0i64;
  *(_QWORD *)&this->mProj.m[6] = 0i64;
  *(_QWORD *)&this->mProj.m[8] = 0i64;
  *(_QWORD *)&this->mProj.m[10] = 0i64;
  *(_QWORD *)&this->mProj.m[12] = 0i64;
  *(_QWORD *)&this->mProj.m[14] = 0i64;
  *(_QWORD *)&this->m_displayedContType = 0i64;
  this->pModel = 0i64;
  this->pCamera = 0i64;
  this->pShadowLight = 0i64;
  this->iBattleShaderLoad = 0;
  *(_QWORD *)&AppMain::pApp = this;
  this->charaProjData = &AppMain::s_charaProjData;
  this->stageProjData = &AppMain::s_stageProjData;
  AppMain::setInit(this, v14);
  *(_QWORD *)&this->m_iKeyPress = 0i64;
  *(_QWORD *)&this->m_iKeyRelease = 0i64;
  this->m_iKeyRelease2 = 0;
  *(_QWORD *)&this->m_FuncST = 0i64;
  *(_QWORD *)&this->m_FuncCT = 0i64;
  this->m_FadeST = 0;
  this->iAndroidFlg = 0;
  this->pGT_Player[0] = 0i64;
  this->pGT_Player[1] = 0i64;
  memset(this->m_TexStr, 0, sizeof(this->m_TexStr));
  memset(this->m_pFontTmp, 0, sizeof(this->m_pFontTmp));
  memset(this->pGT_Menu, 0, sizeof(this->pGT_Menu));
  *(_QWORD *)&this->m_LightPos.x = 0i64;
  this->m_LightPos.z = 0.0;
  this->m_HeadIndex = 0;
  this->m_pFadeShader = 0i64;
  this->m_iFadeFrame = 0;
  *(_QWORD *)&this->m_iFadeAlpha = 0i64;
  *(_WORD *)&this->m_bFadeEnd = 0;
  this->m_FadeExitFunc = 0;
  this->iSceneTimer = 0;
  this->pMediaManager = 0i64;
  this->m_movieFlg = 0;
  this->pLoadingST = 0i64;
  this->pSystemTex = 0i64;
  this->m_FrameCnt4ThreadCheck = 0;
  memset(this->pGT_Menu, 0, sizeof(this->pGT_Menu));
  this->pGT_MenuBG[0] = 0i64;
  this->pGT_MenuBG[1] = 0i64;
  this->pGT_MenuBG[2] = 0i64;
  this->pGT_MenuBG[3] = 0i64;
  this->pGT_Info[0] = 0i64;
  this->pGT_Info[1] = 0i64;
  this->pGT_Info[2] = 0i64;
  this->pGT_Info[3] = 0i64;
  this->pGT_Info[4] = 0i64;
  this->pGT_Info[5] = 0i64;
  this->pGT_Info[6] = 0i64;
  this->pGT_Info[7] = 0i64;
  this->iReserveScene = -1;
  this->iReserveTimer = 0;
  this->iLoadingST = 0;
  *(_QWORD *)&this->iLoadingFlg = 0i64;
  *(_QWORD *)&this->m_LoadCount00 = 0i64;
  *(_QWORD *)&this->m_LoadCountMax = 0i64;
  *(_QWORD *)&this->iLoadingMessageNo = 0i64;
  *(_QWORD *)&this->m_iRealScreenW = 0i64;
  *(_QWORD *)&this->m_fRealScaleX = 0i64;
  this->pBattleStage = 0i64;
  this->m_pCommonAssets = 0i64;
  this->m_VSync = 1;
  this->m_RequestCupture = 0;
}

void __fastcall AsyncCharaDataUnifyLoad::AsyncCharaDataUnifyLoad(AsyncCharaDataUnifyLoad *this)
{
  this->state.m_ptr = 0i64;
  this->bWorking = 0;
}

void __fastcall InputKeyCheck::InputKeyCheck(InputKeyCheck *this)
{
  unsigned int v2; // edi
  char *v3; // rbx
  unsigned __int64 v4; // rax
  RestrictRingBuffer<int> *Myval2; // rcx

  v2 = 0;
  this->pKeyBuffer._Mypair._Myval2 = 0i64;
  v3 = (char *)operator new(0x30ui64);
  *(_QWORD *)v3 = &RestrictRingBuffer<int>::`vftable';
  *(_QWORD *)(v3 + 12) = 4095i64;
  *((_QWORD *)v3 + 3) = 0i64;
  *((_QWORD *)v3 + 4) = 0i64;
  *((_DWORD *)v3 + 10) = 0;
  *((_DWORD *)v3 + 2) = 4096;
  v4 = 0x4000i64;
  if ( !is_mul_ok(0x1000ui64, 4ui64) )
    v4 = -1i64;
  *((_QWORD *)v3 + 3) = operator new[](v4);
  Myval2 = this->pKeyBuffer._Mypair._Myval2;
  this->pKeyBuffer._Mypair._Myval2 = (RestrictRingBuffer<int> *)v3;
  if ( Myval2 )
    ((void (__fastcall *)(RestrictRingBuffer<int> *, __int64))Myval2->~RestrictRingBuffer<int>)(Myval2, 1i64);
  if ( !this->pKeyBuffer._Mypair._Myval2->uiBufferSize )
    v2 = -1;
  this->pKeyBuffer._Mypair._Myval2->uiDelay = v2;
}

void __fastcall InputKeyHistory::InputKeyHistory(InputKeyHistory *this)
{
  char *v2; // rbx
  unsigned __int64 v3; // rax
  RestrictRingBuffer<InputKeyHistory::History> *Myval2; // rcx

  this->pKeyHistory._Mypair._Myval2 = 0i64;
  v2 = (char *)operator new(0x30ui64);
  *(_QWORD *)v2 = &RestrictRingBuffer<InputKeyHistory::History>::`vftable';
  *(_QWORD *)(v2 + 12) = 255i64;
  *((_QWORD *)v2 + 3) = 0i64;
  *((_QWORD *)v2 + 4) = 0i64;
  *((_DWORD *)v2 + 10) = 0;
  *((_DWORD *)v2 + 2) = 256;
  v3 = 2048i64;
  if ( !is_mul_ok(0x100ui64, 8ui64) )
    v3 = -1i64;
  *((_QWORD *)v2 + 3) = operator new[](v3);
  Myval2 = this->pKeyHistory._Mypair._Myval2;
  this->pKeyHistory._Mypair._Myval2 = (RestrictRingBuffer<InputKeyHistory::History> *)v2;
  if ( Myval2 )
    ((void (__fastcall *)(RestrictRingBuffer<InputKeyHistory::History> *, __int64))Myval2->~RestrictRingBuffer<InputKeyHistory::History>)(
      Myval2,
      1i64);
}

void __fastcall BattleSystem::BattleRoundInfo::PlayerData::PlayerData(BattleSystem::BattleRoundInfo::PlayerData *this)
{
  *(_QWORD *)&this->xVital.value = 0i64;
  *(_QWORD *)&this->xClimaxTime.value = 0i64;
  *(_QWORD *)&this->xStunPower.value = 0i64;
}

void __fastcall RandomMT::RandomMT(RandomMT *this)
{
  this->mti = 625;
  this->mt[0] = time64(0i64);
  this->mti = 1;
  do
  {
    this->mt[this->mti] = this->mti + 1812433253 * (this->mt[this->mti - 1] ^ (this->mt[this->mti - 1] >> 30));
    ++this->mti;
  }
  while ( this->mti < 624 );
}

void __fastcall SaveRecord_ButtonConfigUser::SaveRecord_ButtonConfigUser(SaveRecord_ButtonConfigUser *this)
{
  this->buttonMap._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->buttonMap._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->buttonMap._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buyheadnode(&this->buttonMap);
  FighterOperationKeyboardMapper::reset(&this->keyboardMap, 1);
  SaveRecord_ButtonConfigUser::setDefault(this);
}

void __fastcall SaveRecord_GameProgress::SaveRecord_GameProgress(SaveRecord_GameProgress *this)
{
  *(_QWORD *)&this->m_TrainingSetting.m_iRestart = 1i64;
  *(_QWORD *)&this->m_TrainingSetting.m_iGuard = 0i64;
  *(_QWORD *)&this->m_TrainingSetting.m_iAttack = 0i64;
  *(_QWORD *)&this->m_TrainingSetting.m_iKeyData = 0i64;
  *(_QWORD *)this->m_TrainingSetting.m_iPowerGauge = 0i64;
  *(_QWORD *)this->m_TrainingSetting.m_iMAXModeGauge = 0i64;
  this->m_TrainingSetting.m_iGuardGauge[0] = 100;
  this->m_TrainingSetting.m_iGuardGauge[1] = 100;
  this->m_TrainingSetting.m_iStun[0] = 100;
  this->m_TrainingSetting.m_iStun[1] = 100;
  *(_QWORD *)&this->m_TrainingSetting.m_iRecordMode = 0i64;
  this->m_TrainingSetting.m_iRecordSlot = SLOT_1;
  this->m_TrainingSetting.m_iPlaySlot[0][1] = 1;
  *(_OWORD *)&this->m_TrainingSetting.m_iPlaySlot[0][2] = 0ui64;
  this->m_TrainingSetting.m_iPlaySlot[1][1] = 1;
  *(_OWORD *)&this->m_TrainingSetting.m_iPlaySlot[1][2] = 0ui64;
  this->m_TrainingSetting.m_bRestartOn = 0;
  SaveRecord_GameProgress::setDefault(this);
}

void __fastcall SaveRecord_Main::SaveRecord_Main(SaveRecord_Main *this)
{
  __int64 v2; // rdx
  SaveRecord_CharacterData *m_CharacterData; // rax

  this->SysOptionData.iUILanguage = s_defaultLanguage;
  *(_WORD *)&this->SysOptionData.bVibration = 257;
  this->SysOptionData.iAnnounceType = 0;
  this->GameOptionData.iAiLevel = AiLevel_Normal;
  this->GameOptionData.iWinRoundCount = WIN_ROUND_COUNT_2;
  this->GameOptionData.iRoundTimerType = BATTLE_ROUND_TIMER_TYPE_60;
  this->SoundOptionData.iSoundVolumeMaster = 70;
  this->SoundOptionData.iSoundVolumeBGM = 100;
  this->SoundOptionData.iSoundVolumeSE = 100;
  this->SoundOptionData.iSoundVolumeAmbience = 100;
  this->SoundOptionData.iSoundVolumeCharacterVoice = 100;
  this->SoundOptionData.iSoundVolumeSystemVoice = 100;
  this->SoundOptionData.iSoundVolumePad = 100;
  SaveRecord_DisplayOption::setDefaultOption(&this->DisplayOptionData);
  *(_QWORD *)&this->DisplayOptionData.iHPGaugePositionPlusY = 0i64;
  this->DisplayOptionData.iPowerGaugePositionPlusY = 0;
  *(_DWORD *)&this->GraphicsOptionData.bBloomEnabled = 16843009;
  *(_DWORD *)&this->GraphicsOptionData.bGodRaysEnabled = 16842753;
  this->GraphicsOptionData.bForceShaderPurge = 0;
  `eh vector constructor iterator'(
    &this->ButtonConfData,
    0x420ui64,
    5ui64,
    (void (__fastcall *)(void *))SaveRecord_ButtonConfigUser::SaveRecord_ButtonConfigUser,
    (void (__fastcall *)(void *))SaveRecord_ButtonConfigUser::~SaveRecord_ButtonConfigUser);
  SaveRecord_ButtonConfigUser::setDefaultForUser(&this->ButtonConfData.buttonConfig[1], USER_ID_1P);
  SaveRecord_ButtonConfigUser::setDefaultForUser(&this->ButtonConfData.buttonConfig[2], USER_ID_2P);
  v2 = 61i64;
  m_CharacterData = this->PlayerData.m_CharacterData;
  do
  {
    *(_QWORD *)&m_CharacterData->iCharacterNo = 0i64;
    *(_QWORD *)&m_CharacterData->iWinCountOffLine = 0i64;
    m_CharacterData->iWinCountOnLine = 0;
    *(_QWORD *)&m_CharacterData->iTimeAttackScore = 3599999i64;
    m_CharacterData->iTrialsAchived = 0;
    ++m_CharacterData;
    --v2;
  }
  while ( v2 );
  RandomMT::RandomMT(&this->PlayerData.randMT);
  SaveRecord_PlayerData::setDefault(&this->PlayerData);
  SaveRecord_GameProgress::SaveRecord_GameProgress(&this->GameData);
  this->HistoryData.m_GameRule = GAME_RULE_SINGLE;
  this->HistoryData.m_StageID = STAGE_ID_ESK;
  SaveRecord_RecordKey::SaveRecord_RecordKey(&this->RecordKey);
  SaveRecord_Main::setDefault(this);
}

Scaleform::GFx::Value *__fastcall Scaleform::GFx::Value::Value(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v4 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  return v4;
}

void __fastcall AppMain::_CHARAINFO::_CHARAINFO(AppMain::_CHARAINFO *this)
{
  this->ppModel._Mypair._Myval2 = 0i64;
  *(_QWORD *)&this->vPos.x = 0i64;
  *(_QWORD *)&this->vPos.z = 0i64;
  this->iNo = 0;
  *(_QWORD *)&this->fFrame = 0i64;
  *(_QWORD *)&this->iColor = 1i64;
}

void __fastcall AppMain::_MODELROOM_SETTINGS::_MODELROOM_SETTINGS(AppMain::_MODELROOM_SETTINGS *this)
{
  AppMain::_MODEL_LIGHT_DATA *modelLightData; // rsi
  __int64 v3; // rbp
  AppMain::_MATERIAL_LIGHT_ASSET_DATA *matLightAssetData; // rbx
  __int64 v5; // rdi
  AppMain::_GLOBAL_SHADER_SETTINGS *p_globalShaderSettings; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  AppMain::_GLOBAL_SHADER_SETTINGS *v9; // rax

  modelLightData = this->modelLightData;
  v3 = 44i64;
  do
  {
    --v3;
    matLightAssetData = modelLightData->matLightAssetData;
    v5 = 64i64;
    do
    {
      matLightAssetData->numLights = 0;
      memset(matLightAssetData->lightAssetData, 0, sizeof(matLightAssetData->lightAssetData));
      ++matLightAssetData;
      --v5;
    }
    while ( v5 );
    modelLightData->valid = 0;
    modelLightData->numMaterials = 0;
    ++modelLightData;
  }
  while ( v3 );
  *(_QWORD *)&this->postprocessSettings.godRaySettings.sunModelPos.x = 0i64;
  p_globalShaderSettings = &this->globalShaderSettings;
  this->postprocessSettings.godRaySettings.sunModelPos.z = 0.0;
  v7 = 2i64;
  this->postprocessSettings.shadowLightAreaSettings.shadLightPos = 0i64;
  this->postprocessSettings.shadowLightAreaSettings.shadLightMinMax = 0i64;
  do
  {
    --v7;
    v8 = 2i64;
    v9 = p_globalShaderSettings;
    do
    {
      v9->modelFXSettings[0].fxCentre[0] = 0i64;
      v9 = (AppMain::_GLOBAL_SHADER_SETTINGS *)((char *)v9 + 8);
      --v8;
    }
    while ( v8 );
    p_globalShaderSettings = (AppMain::_GLOBAL_SHADER_SETTINGS *)((char *)p_globalShaderSettings + 24);
  }
  while ( v7 );
  `eh vector constructor iterator'(
    this->CharaInfo,
    0x38ui64,
    4ui64,
    (void (__fastcall *)(void *))AppMain::_CHARAINFO::_CHARAINFO,
    (void (__fastcall *)(void *))AppMain::_CHARAINFO::~_CHARAINFO);
  memset(&this->mView, 0, 0xC0ui64);
  memset(this->mProj, 0, sizeof(this->mProj));
  *(_QWORD *)&this->vCamPosVec3.x = 0i64;
  *(_QWORD *)&this->vCamPosVec3.z = 0i64;
  *(_QWORD *)&this->vCamLookNormal.y = 0i64;
  *(_QWORD *)&this->vCamLookPerpNormal.x = 0i64;
  this->vCamLookPerpNormal.z = 0.0;
}

void __fastcall AgPointer<AgDisplay>::~AgPointer<AgDisplay>(AgPointer<AgDisplay> *this)
{
  AgDisplay *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v3; // esi

  m_ptr = this->m_ptr;
  this->m_ptr = 0i64;
  m_ref = this->m_ref;
  if ( this->m_ref )
  {
    this->m_ref = 0i64;
    v3 = 0;
    if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
        v3 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
      {
        AgDisplay::~AgDisplay(m_ptr);
        operator delete(m_ptr, 0x70ui64);
      }
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall AsyncCharaFileLoad<ComboMissionData>::~AsyncCharaFileLoad<ComboMissionData>(
        AsyncCharaFileLoad<ComboMissionData> *this)
{
  extension::AsyncContent<ComboMissionData> *m_ptr; // rbx

  m_ptr = this->state.m_ptr;
  if ( this->state.m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<ComboMissionData>::~AsyncContent<ComboMissionData>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(
        extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *this)
{
  unsigned __int64 v2; // rdx
  AsyncKeyRecordDataLoad::KeyData *Myval2; // rdi
  InputKeyRecord::RecordKey *v4; // rcx
  unsigned __int64 v5; // rdx
  AsyncKeyRecordDataLoad::KeyData *v6; // rdi
  InputKeyRecord::RecordKey *v7; // rcx

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    v4 = Myval2->pKey._Mypair._Myval2;
    if ( v4 )
      operator delete(v4, v2);
    operator delete(Myval2, 0x10ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v6 = this->m_data._Mypair._Myval2;
  if ( v6 )
  {
    v7 = v6->pKey._Mypair._Myval2;
    if ( v7 )
      operator delete(v7, v5);
    operator delete(v6, 0x10ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(
        extension::AsyncContent<extension::AsyncFileImage> *this)
{
  unsigned __int64 v2; // rdx
  extension::AsyncFileImage *Myval2; // rdi
  void *pData; // rcx
  unsigned __int64 v5; // rdx
  extension::AsyncFileImage *v6; // rdi
  void *v7; // rcx

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    pData = Myval2->fileBufPara.pData;
    if ( pData )
    {
      operator delete(pData, v2);
      Myval2->fileBufPara.pData = 0i64;
    }
    operator delete(Myval2, 0x18ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v6 = this->m_data._Mypair._Myval2;
  if ( v6 )
  {
    v7 = v6->fileBufPara.pData;
    if ( v7 )
    {
      operator delete(v7, v5);
      v6->fileBufPara.pData = 0i64;
    }
    operator delete(v6, 0x18ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::AsyncContent<CharaDataUnify>::~AsyncContent<CharaDataUnify>(
        extension::AsyncContent<CharaDataUnify> *this)
{
  CharaDataUnify *Myval2; // rdi
  CharaDataUnify *v3; // rdi

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    CharaDataUnify::ReleaseData(Myval2);
    operator delete(Myval2, 0x68ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v3 = this->m_data._Mypair._Myval2;
  if ( v3 )
  {
    CharaDataUnify::ReleaseData(this->m_data._Mypair._Myval2);
    operator delete(v3, 0x68ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::AsyncContent<ComboMissionData>::~AsyncContent<ComboMissionData>(
        extension::AsyncContent<ComboMissionData> *this)
{
  ComboMissionData *Myval2; // rcx
  ComboMissionData *v3; // rcx

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
    ((void (__fastcall *)(ComboMissionData *, __int64))Myval2->~CharaFileBase)(Myval2, 1i64);
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v3 = this->m_data._Mypair._Myval2;
  if ( v3 )
    ((void (__fastcall *)(ComboMissionData *, __int64))v3->~CharaFileBase)(v3, 1i64);
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(extension::AsyncContent<OGLFigure> *this)
{
  unsigned __int64 v2; // rdx
  OGLFigure *Myval2; // rdi
  unsigned __int64 v4; // rdx
  OGLFigure *v5; // rdi

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    OGLFigure::finalize(Myval2, v2);
    operator delete(Myval2, 0x108ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v5 = this->m_data._Mypair._Myval2;
  if ( v5 )
  {
    OGLFigure::finalize(this->m_data._Mypair._Myval2, v4);
    operator delete(v5, 0x108ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(
        extension::exsound_detail::SoundBankParser *this)
{
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx

  m_ptr = this->m_fileImage.m_body.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall extension::ExLockableLock<extension::ExLockable<extension::ExMutex>>::~ExLockableLock<extension::ExLockable<extension::ExMutex>>(
        extension::ExLockableLock<extension::ExLockable<extension::GFXIFontManager> > *this)
{
  extension::lockable_detail::LockUnlock(this->m_associated, -this->m_ownsLockCount);
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage>>::~RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage>>(
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > *this)
{
  extension::AsyncContent<extension::AsyncFileImage> *m_ptr; // rbx

  m_ptr = this->m_ptr;
  if ( this->m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<OGLTexture>>::~RefCountablePtr<extension::AsyncContent<OGLTexture>>(
        extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > *this,
        unsigned int a2)
{
  extension::AsyncContent<OGLTexture> *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      extension::AsyncContent<Image>::`scalar deleting destructor'(m_ptr, a2);
  }
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<OGLFigure>>::~RefCountablePtr<extension::AsyncContent<OGLFigure>>(
        extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > *this)
{
  extension::AsyncContent<OGLFigure> *m_ptr; // rbx

  m_ptr = this->m_ptr;
  if ( this->m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>::~RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(
        extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *this)
{
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall std::unique_ptr<AsyncKeyRecordDataLoad::KeyData>::~unique_ptr<AsyncKeyRecordDataLoad::KeyData>(
        std::unique_ptr<AsyncKeyRecordDataLoad::KeyData> *this,
        unsigned __int64 a2)
{
  AsyncKeyRecordDataLoad::KeyData *Myval2; // rbx
  InputKeyRecord::RecordKey *v3; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    v3 = Myval2->pKey._Mypair._Myval2;
    if ( v3 )
      operator delete(v3, a2);
    operator delete(Myval2, 0x10ui64);
  }
}

void __fastcall std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>(
        std::unique_ptr<extension::SoundList::LazyMediaSetBuildJob> *this)
{
  extension::SoundList::LazyMediaSetBuildJob *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(extension::SoundList::LazyMediaSetBuildJob *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
}

void __fastcall std::unique_ptr<extension::AsyncFileImage>::~unique_ptr<extension::AsyncFileImage>(
        std::unique_ptr<extension::AsyncFileImage> *this,
        unsigned __int64 a2)
{
  extension::AsyncFileImage *Myval2; // rbx
  void *pData; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    pData = Myval2->fileBufPara.pData;
    if ( pData )
    {
      operator delete(pData, a2);
      Myval2->fileBufPara.pData = 0i64;
    }
    operator delete(Myval2, 0x18ui64);
  }
}

void __fastcall std::unique_ptr<CharaDataUnify>::~unique_ptr<CharaDataUnify>(std::unique_ptr<CharaDataUnify> *this)
{
  CharaDataUnify *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    CharaDataUnify::ReleaseData(this->_Mypair._Myval2);
    operator delete(Myval2, 0x68ui64);
  }
}

void __fastcall std::unique_ptr<ComboMissionData>::~unique_ptr<ComboMissionData>(
        std::unique_ptr<EffectDataListManager> *this)
{
  EffectDataListManager *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(EffectDataListManager *, __int64))Myval2->~EffectDataListManager)(Myval2, 1i64);
}

void __fastcall std::unique_ptr<OGLFigure>::~unique_ptr<OGLFigure>(
        std::unique_ptr<OGLFigure> *this,
        unsigned __int64 a2)
{
  OGLFigure *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    OGLFigure::finalize(this->_Mypair._Myval2, a2);
    operator delete(Myval2, 0x108ui64);
  }
}

// attributes: thunk
void __fastcall std::vector<extension::BasicFutureObject<OGLMirror,void>>::~vector<extension::BasicFutureObject<OGLMirror,void>>(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this)
{
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy(this);
}

void __fastcall AsyncCharaDataUnifyLoad::~AsyncCharaDataUnifyLoad(AsyncCharaDataUnifyLoad *this)
{
  extension::AsyncContent<CharaDataUnify> *m_ptr; // rbx

  m_ptr = this->state.m_ptr;
  if ( this->state.m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<CharaDataUnify>::~AsyncContent<CharaDataUnify>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall AsyncKeyRecordDataLoad::~AsyncKeyRecordDataLoad(AsyncKeyRecordDataLoad *this)
{
  extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> *m_ptr; // rbx

  m_ptr = this->state.m_ptr;
  if ( this->state.m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData>::~AsyncContent<AsyncKeyRecordDataLoad::KeyData>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::~Body(
        extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *this)
{
  extension::AsyncContent<extension::AsyncFileImage> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<extension::AsyncFileImage> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rsi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::Body_vtbl *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::`vftable';
  if ( m_ptr )
  {
    do
    {
      My_val = m_ptr->m_status.m_stateFlags.m_value._My_val;
      if ( (My_val & 1) != 0 )
        break;
      v4 = m_ptr->m_status.m_stateFlags.m_value._My_val;
    }
    while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_status, My_val | 2, My_val) );
  }
  v5 = this->m_content.m_ptr;
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(v5);
    operator delete(v5, 0x68ui64);
  }
  this->__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::~Body(
        extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *this)
{
  extension::AsyncContent<Image> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<Image> *v5; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body_vtbl *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::`vftable';
  if ( m_ptr )
  {
    do
    {
      My_val = m_ptr->m_status.m_stateFlags.m_value._My_val;
      if ( (My_val & 1) != 0 )
        break;
      v4 = m_ptr->m_status.m_stateFlags.m_value._My_val;
    }
    while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_status, My_val | 2, My_val) );
  }
  v5 = this->m_content.m_ptr;
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    extension::AsyncContent<Image>::`scalar deleting destructor'(
      (extension::AsyncContent<OGLTexture> *)v5,
      (unsigned int)m_ptr);
  this->__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::~Body(
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *this)
{
  extension::AsyncContent<OGLFigure> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<OGLFigure> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rsi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body_vtbl *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::`vftable';
  if ( m_ptr )
  {
    do
    {
      My_val = m_ptr->m_status.m_stateFlags.m_value._My_val;
      if ( (My_val & 1) != 0 )
        break;
      v4 = m_ptr->m_status.m_stateFlags.m_value._My_val;
    }
    while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_status, My_val | 2, My_val) );
  }
  v5 = this->m_content.m_ptr;
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(v5);
    operator delete(v5, 0x68ui64);
  }
  this->__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall SaveRecord_ButtonConfig::~SaveRecord_ButtonConfig(SaveRecord_ButtonConfig *this)
{
  `eh vector destructor iterator'(
    this,
    0x420ui64,
    5ui64,
    (void (__fastcall *)(void *))SaveRecord_ButtonConfigUser::~SaveRecord_ButtonConfigUser);
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

void __fastcall SaveRecord_Main::~SaveRecord_Main(SaveRecord_Main *this)
{
  SaveRecord_RecordKey::~SaveRecord_RecordKey(&this->RecordKey);
  `eh vector destructor iterator'(
    &this->ButtonConfData,
    0x420ui64,
    5ui64,
    (void (__fastcall *)(void *))SaveRecord_ButtonConfigUser::~SaveRecord_ButtonConfigUser);
}

// attributes: thunk
void __fastcall SaveRecord_Replay::~SaveRecord_Replay(SaveRecord_Replay *this)
{
  SaveRecord_Replay::setDefault(this);
}

void __fastcall Scaleform::GFx::Value::~Value(Scaleform::GFx::Value *this)
{
  if ( (this->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(this->pObjectInterface, this, this->mValue.pStringManaged);
    this->pObjectInterface = 0i64;
    this->Type = VT_None;
  }
  else
  {
    this->Type = VT_None;
  }
}

void __fastcall AppMain::_CHARAINFO::~_CHARAINFO(AppMain::_CHARAINFO *this, unsigned __int64 a2)
{
  OGLModel **Myval2; // rcx

  Myval2 = this->ppModel._Mypair._Myval2;
  if ( Myval2 )
    operator delete(Myval2, a2);
}

void __fastcall AppMain::_MODELROOM_SETTINGS::~_MODELROOM_SETTINGS(AppMain::_MODELROOM_SETTINGS *this)
{
  `eh vector destructor iterator'(
    this->CharaInfo,
    0x38ui64,
    4ui64,
    (void (__fastcall *)(void *))AppMain::_CHARAINFO::~_CHARAINFO);
}

extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *__fastcall extension::BasicFutureObject<OGLSecondary,void>::operator=(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *this,
        const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *other)
{
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v4; // rcx

  this->m_isNoCache = other->m_isNoCache;
  m_ptr = other->m_body.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v4 = this->m_body.m_ptr;
  this->m_body.m_ptr = m_ptr;
  if ( v4
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v4->~RefCountableWeakSupportBase)(
      v4,
      1i64);
  }
  return this;
}

extension::exsound_detail::SoundBankImpl *__fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *m_ptr; // rbx

  m_ptr = this->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    return 0i64;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, a2);
  return m_ptr->m_data._Mypair._Myval2;
}

bool __fastcall lambda_993310bac1e185f67fa16362ab5e4a64_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  GfxManager *v4; // rax
  GameDataInfo *Instance; // r11
  __int64 v6; // rdi
  int v7; // er10
  int v8; // edx
  int v9; // er9
  int v10; // er8
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // er8
  __int64 i; // rax
  GfxManager *v15; // [rsp+40h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)a1 == *(_DWORD *)(v2 + 2507552) && **(_DWORD **)(a1 + 16) == *(_DWORD *)(v2 + 2507556) )
    return 0;
  v4 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v15 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v15);
    GfxManager::instance = v4;
  }
  if ( !v4->m_GFXMovie.m_movieProxy.m_ptr
    || (unsigned int)(v4->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode - 1) > 1
    || **(_DWORD **)a1 == 3 )
  {
    return 1;
  }
  Instance = GameDataInfo::getInstance();
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(v6 + 2199612);
  v8 = 0;
  v9 = -1;
  if ( !v7 || (v10 = 0, v11 = **(_QWORD **)(a1 + 24) + 8632i64, v12 = **(_QWORD **)(a1 + 24) + 8696i64, v11 == v12) )
  {
LABEL_14:
    v10 = -1;
  }
  else
  {
    while ( 1 )
    {
      ++v10;
      if ( *(_QWORD *)(v11 + 8) )
      {
        if ( v10 == v7 )
          break;
      }
      v11 += 16i64;
      if ( v11 == v12 )
        goto LABEL_14;
    }
  }
  if ( Instance->m_ControllerSetting[0] && v10 == *(_DWORD *)(**(_QWORD **)(a1 + 24) + 8704i64) )
    return 1;
  v13 = *(_DWORD *)(v6 + 2200668);
  if ( v13 )
  {
    for ( i = **(_QWORD **)(a1 + 24) + 8632i64; i != **(_QWORD **)(a1 + 24) + 8696i64; i += 16i64 )
    {
      ++v8;
      if ( *(_QWORD *)(i + 8) && v8 == v13 )
      {
        v9 = v8;
        return Instance->m_ControllerSetting[1] && v9 == *(_DWORD *)(**(_QWORD **)(a1 + 24) + 8704i64);
      }
    }
  }
  return Instance->m_ControllerSetting[1] && v9 == *(_DWORD *)(**(_QWORD **)(a1 + 24) + 8704i64);
}

void __fastcall AppMain::FadeDraw(AppMain *this)
{
  Graphics *g; // rdx
  float m_iAlignX; // xmm1_4
  float m_iAlignY; // xmm2_4
  int v5; // edi
  float v6; // xmm2_4

  if ( this->m_FadeST || this->m_FuncFT )
  {
    g = this->g->g;
    g->m_Operator = 0;
    g->m_SrcRatio = 255;
    g->m_DstRatio = 255;
    if ( !g->m_bPreDrawMode )
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
    if ( this->m_iFadeColor.s.r == 0xFF && this->m_iFadeColor.s.g == 0xFF && this->m_iFadeColor.s.b == 0xFF )
      Graphics::setRenderMode(this->g->g, 1, 255);
    m_iAlignX = (float)this->g->m_iAlignX;
    m_iAlignY = (float)this->g->m_iAlignY;
    v5 = (int)(float)((float)(m_iAlignX + m_iAlignX) + (float)this->m_iScreenW);
    v6 = (float)(m_iAlignY + m_iAlignY) + (float)this->m_iScreenH;
    glsCheckFlg(0xB60u, 0);
    GraphicsOpt::fillRect(
      this->g,
      (int)COERCE_FLOAT(COERCE_UNSIGNED_INT((float)this->g->m_iAlignX) ^ _xmm),
      (int)COERCE_FLOAT(COERCE_UNSIGNED_INT((float)this->g->m_iAlignY) ^ _xmm),
      v5,
      (int)v6,
      this->m_iFadeColor.s.r | (this->m_iFadeColor.rgba >> 8) & 0xFF00 | ((this->m_iFadeColor.rgba & 0xFF00 | (this->m_iFadeColor.rgba << 16)) << 8));
  }
}

AgControllerUID __fastcall AppMain::GetControllerUIDForDeviceID(AppMain *this, _QWORD *deviceID, int a3)
{
  AgPointer<AgController> result; // [rsp+28h] [rbp-20h] BYREF

  if ( a3 < 1 )
    goto LABEL_5;
  Framework::Input::ControllerContext::getControllerByValidDeviceID(
    &Framework::GLManager::glm->m_controllerContext,
    &result,
    a3);
  if ( !result.m_ptr )
  {
    AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
LABEL_5:
    *deviceID = 0i64;
    return (AgControllerUID)deviceID;
  }
  ((void (__fastcall *)(AgController *, _QWORD *))result.m_ptr->getUID)(result.m_ptr, deviceID);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
  return (AgControllerUID)deviceID;
}

AgControllerUID __fastcall AppMain::GetControllerUIDForUser(AppMain *this, _QWORD *userID, int a3)
{
  int v4; // er9
  int v5; // er8
  Framework::GLManager *i; // rax
  AgPointer<AgController> result; // [rsp+28h] [rbp-20h] BYREF

  if ( a3 )
  {
    v4 = *(_DWORD *)(1056i64 * a3 + *(_QWORD *)&AppMain::pApp + 2198556);
    if ( v4 )
    {
      v5 = 0;
      for ( i = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
            i != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
            i = (Framework::GLManager *)((char *)i + 16) )
      {
        ++v5;
        if ( i->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v5 == v4 )
        {
          if ( v5 < 1 )
            break;
          Framework::Input::ControllerContext::getGamepad(&Framework::GLManager::glm->m_controllerContext, &result, v5);
          if ( result.m_ptr )
          {
            ((void (__fastcall *)(AgController *, _QWORD *))result.m_ptr->getUID)(result.m_ptr, userID);
            AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
            return (AgControllerUID)userID;
          }
          AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
          break;
        }
      }
    }
  }
  *userID = 0i64;
  return (AgControllerUID)userID;
}

extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> *__fastcall extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VAsyncFileImage_extension__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VAsyncFileImage_extension__X_extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VAsyncFileImage_extension__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VAsyncFileImage_extension__X_extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VAsyncFileImage_extension__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VAsyncFileImage_extension__X_extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::Body_vtbl *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::`vftable';
      `extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VAsyncFileImage_extension__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VAsyncFileImage_extension__X_extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *__fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VImage__UFutureImageOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VImage__UFutureImageOption_extension___extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VImage__UFutureImageOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VImage__UFutureImageOption_extension___extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VImage__UFutureImageOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VImage__UFutureImageOption_extension___extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body_vtbl *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::`vftable';
      `extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VImage__UFutureImageOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VImage__UFutureImageOption_extension___extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *__fastcall extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLFigure__UFutureFigureOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLFigure__UFutureFigureOption_extension___extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLFigure__UFutureFigureOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLFigure__UFutureFigureOption_extension___extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLFigure__UFutureFigureOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLFigure__UFutureFigureOption_extension___extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body_vtbl *)&extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::`vftable';
      `extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLFigure__UFutureFigureOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLFigure__UFutureFigureOption_extension___extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

void __fastcall AppMain::InvitedTransInit(AppMain *this)
{
  GfxManager *v2; // rax
  GfxManager *v3; // rdi
  GameDataInfo *v4; // rcx
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  extension::gfxi_detail::MovieProxy *v6; // rbx
  GfxManager *v7; // [rsp+50h] [rbp+8h]
  GfxManager *v8; // [rsp+50h] [rbp+8h]

  if ( this->m_bInviteFadeOut )
  {
    v2 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v7 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v7);
      GfxManager::instance = v2;
    }
    v3 = v2;
    this->m_PrevScene = 0;
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                              + 40i64) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v4);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
      v2 = GfxManager::instance;
    }
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingEntry = 0;
    this->m_bInviteFadeOut = 0;
    this->s_RoomInitFlag = 1;
    if ( !v2 )
    {
      v8 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v8);
      GfxManager::instance = v2;
    }
    v2->m_pCallBackEventFunc = 0i64;
    m_ptr = v2->m_GFXMovieSystem.m_movieProxy.m_ptr;
    if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.CloseSystemMessage") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.CloseSystemMessage", 0i64, 0i64, 0);
    v6 = v3->m_GFXMovie.m_movieProxy.m_ptr;
    if ( v3->m_GFXMovie.m_movieProxy.m_ptr )
    {
      if ( Scaleform::GFx::Movie::IsAvailable(v6->m_movie.pObject, "_root.AllFadeOutMC") )
        Scaleform::GFx::Movie::Invoke(v6->m_movie.pObject, "_root.AllFadeOutMC", 0i64, 0i64, 0);
    }
  }
}

bool __fastcall GameDataInfo::IsOnlineMode(GameDataInfo *this)
{
  GAME_MODE v1; // edx

  v1 = this->m_GameMode[this->m_GameModeIndex];
  return (unsigned int)(v1 - 4) <= 2 || v1 == GAME_MODE_ONLINETRAINING;
}

void __fastcall AppMain::NoticeDiscoonectLevel(AppMain *this, bool noticeFlag)
{
  unsigned int v3; // ecx
  int v4; // edi
  __int32 v5; // eax
  int v6; // edx
  int v7; // er10
  __int32 v8; // eax
  __int32 v9; // eax
  bool v10; // cc
  GfxManager *Instance; // rax
  const char *v12; // rdx
  GfxManager *v13; // rax

  if ( noticeFlag )
    this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x800u;
  v3 = this->SaveDataMain.PlayerData.m_RankMatchCount ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchCount) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchCount) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v4 = (v3 ^ (v3 >> 7)) & 0x550055 ^ v3 ^ (((v3 ^ (v3 >> 7)) & 0x550055) << 7);
  if ( v4 == 5 * (v4 / 5) && v4 && this->SaveDataMain.PlayerData.m_DisconnectLevelRankCount != v4 )
  {
    v5 = AppMain::UpdateDisconnectLevel(this) - 2;
    if ( !v5 )
    {
      Instance = GfxManager::getInstance();
      v12 = "$ERROR_PENALTY_LV01_1";
      goto LABEL_18;
    }
    v8 = v5 - 1;
    if ( !v8 )
    {
      if ( v7 > 3 )
      {
        Instance = GfxManager::getInstance();
        v12 = "$ERROR_PENALTY_LV02_2";
      }
      else
      {
        Instance = GfxManager::getInstance();
        v12 = "$ERROR_PENALTY_LV02_1";
      }
      goto LABEL_18;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        goto LABEL_19;
      v10 = v7 <= 5;
    }
    else
    {
      v10 = v7 <= 4;
    }
    if ( v10 )
    {
      Instance = GfxManager::getInstance();
      v12 = "$ERROR_PENALTY_LV03_1";
LABEL_18:
      GfxManager::GFv_SetSystemMessage(Instance, v12, SYSTEM_MESSAGE_OK, 0, 1, "no_title", &pnewText, "size_s");
      GfxManager::getInstance()->m_pCallBackEventFunc = onDisconnectNoticeClosed;
      v13 = GfxManager::getInstance();
      GfxManager::GFv_onNetworkError(v13, NETWORK_ERROR_TYPE_CONNECTION);
      this->windowErrorNo = 1;
      this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] &= ~0x800u;
    }
LABEL_19:
    this->SaveDataMain.PlayerData.m_DisconnectLevelRankCount = v4;
    AppMain::SaveDataAsyncSave(this, v6);
    return;
  }
  if ( (this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] & 0x400) != 0 )
  {
    this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] &= ~0x400u;
    AppMain::SaveDataAsyncSave(this, v4 / 5);
  }
}

void __fastcall AppMain::ResizeDisplay(AppMain *this, int width, int height, AgWindowMode mode, int vsync)
{
  AgWindowMode StartingPos; // er15
  int m_height; // edx
  int m_width; // er8
  float v12; // xmm6_4
  float v13; // xmm7_4
  const char *String; // rax
  bool v15; // zf
  char *v16; // rax
  int v17; // edi
  int ShutdownRequested; // er14
  Framework::GLManager *v19; // rbx
  EffectTaskManager *effSystem; // rbx
  extension::GFXIRenderer *v21; // rax
  extension::GFXIMovieStack *v22; // rax
  extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *m_Next; // rbx
  extension::gfxi_detail::MovieStackNode *p_m_movieListEnd; // rdi
  extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *m_Prev; // rcx
  MovieData *v26; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  MovieData *v28; // [rsp+40h] [rbp-49h]
  AgPointer<AgDisplay> result; // [rsp+48h] [rbp-41h] BYREF
  AgRectangle v30; // [rsp+58h] [rbp-31h] BYREF
  int v31[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v32; // [rsp+70h] [rbp-19h]
  int v33; // [rsp+78h] [rbp-11h]
  int v34; // [rsp+7Ch] [rbp-Dh]
  int v35; // [rsp+80h] [rbp-9h]
  __int64 v36; // [rsp+84h] [rbp-5h]
  __int64 v37; // [rsp+8Ch] [rbp+3h]
  int v38; // [rsp+94h] [rbp+Bh]
  int v39; // [rsp+98h] [rbp+Fh]

  AgDisplayManager::getDisplayByIndex((AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance, &result, 0);
  StartingPos = Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(result.m_ptr);
  AgDisplay::getCurrentScreenBounds(result.m_ptr, &v30);
  m_height = v30.m_height;
  m_width = v30.m_width;
  if ( width > v30.m_width || height > v30.m_height )
  {
    v12 = (float)width / (float)v30.m_width;
    v13 = (float)height / (float)v30.m_height;
    if ( pOnce > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
    {
      Init_thread_header(&pOnce);
      if ( pOnce == -1 )
      {
        String = (const char *)glGetString(0x1F00u);
        vendor = String;
        if ( !String || (v15 = strstr(String, "NVIDIA") == 0i64, String = vendor, isNvidia = 1, v15) )
          isNvidia = 0;
        if ( !String || (v16 = strstr(String, "ATI"), isATI = 1, !v16) )
          isATI = 0;
        Init_thread_footer(&pOnce);
      }
      m_width = v30.m_width;
      m_height = v30.m_height;
    }
    if ( v12 != v13 || !isNvidia && !isATI )
    {
      width = m_width;
      height = m_height;
    }
  }
  if ( StartingPos != mode
    || width != AgDisplay::getWidth((AgUser *)result.m_ptr)
    || height != AgProgram::getShutdownRequested((AgProgram *)result.m_ptr)
    || vsync != AgDisplay::getVsyncEnabled(result.m_ptr) )
  {
    ((void (__fastcall *)(AgSingleton<AgSystemManager> *, _QWORD, _QWORD, _QWORD, AgWindowMode))AgSingleton<AgSystemManager>::ms_instance->__vftable[2].onSingletonExit)(
      AgSingleton<AgSystemManager>::ms_instance,
      (unsigned int)width,
      (unsigned int)height,
      (unsigned int)vsync,
      mode);
    AgDisplay::setCursor(result.m_ptr, 0, mode != AgWindowMode_Windowed);
    v17 = AgDisplay::getWidth((AgUser *)result.m_ptr);
    ShutdownRequested = AgProgram::getShutdownRequested((AgProgram *)result.m_ptr);
    if ( mode )
      ShutdownRequested = (int)(float)((float)((float)GAME_SCREEN_HEIGHT / (float)GAME_SCREEN_WIDTH) * (float)v17);
    AppMain::setWindowSize(this, v17, ShutdownRequested);
    OGLRender::resetRenderTargets(this->m_pRender);
    v19 = Framework::GLManager::glm;
    Framework::GLManager::glm->m_config.m_targetWidth = v17;
    v19->m_config.m_targetHeight = ShutdownRequested;
    Framework::GLManager::destroyFrameBuffers(v19);
    Framework::GLManager::createFrameBuffers(v19, v17, ShutdownRequested);
    effSystem = this->effSystem;
    effSystem->m_EffectPs4System.terminate(&effSystem->m_EffectPs4System);
    effSystem->m_EffectPs4System.initialize(&effSystem->m_EffectPs4System);
    v21 = extension::GFXIRenderer::Instance();
    extension::GFXIRenderer::onResize(v21);
    v31[0] = v17;
    v31[1] = ShutdownRequested;
    v32 = 0i64;
    v33 = v17;
    v34 = ShutdownRequested;
    v37 = 0i64;
    v36 = 0i64;
    v35 = 0;
    v39 = 1065353216;
    v38 = 1065353216;
    v22 = extension::GFXIMovieStack::Instance();
    m_Next = v22->m_movieListEnd.m_Next;
    p_m_movieListEnd = &v22->m_movieListEnd;
    while ( m_Next != p_m_movieListEnd )
    {
      m_Prev = m_Next[2].m_Prev;
      m_Next = m_Next->m_Next;
      ((void (__fastcall *)(extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *, int *))m_Prev->m_Prev[6].m_Prev)(
        m_Prev,
        v31);
    }
    v26 = MovieData::movieData;
    if ( !MovieData::movieData )
    {
      v28 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
      MovieData::MovieData(v28);
      MovieData::movieData = v26;
    }
    if ( v26->m_GFXMovie.m_movieProxy.m_ptr )
    {
      m_ptr = v26->m_GFXMovie.m_movieProxy.m_ptr;
      if ( m_ptr )
        m_ptr->m_movie.pObject->SetViewport(m_ptr->m_movie.pObject, (const Scaleform::GFx::Viewport *)v31);
    }
  }
  AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
}

void __fastcall AppMain::ResumeWait(AppMain *this)
{
  int v2; // edx
  Image *pSystemTex; // rax
  __int64 i; // rbx
  extension::AsyncContent<Image> *m_ptr; // rdi
  extension::AsyncContent<Image> *v6; // rdi
  Image *Myval2; // rax
  TexString **m_TexStr; // rdi
  __int64 v9; // rsi
  TexString *v10; // rbx

  v2 = SetResumeWaitCount--;
  if ( v2 <= 0 )
  {
    pSystemTex = this->pSystemTex;
    if ( pSystemTex )
      pSystemTex->m_bResume = 0;
    for ( i = 0i64; i < 13; ++i )
    {
      m_ptr = this->m_MenuImgTbl[i].m_body.m_ptr->m_content.m_ptr;
      if ( m_ptr && !m_ptr->m_isDataReleased )
      {
        if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)v2);
        if ( m_ptr->m_data._Mypair._Myval2 )
        {
          v6 = this->m_MenuImgTbl[i].m_body.m_ptr->m_content.m_ptr;
          if ( !v6 || v6->m_isDataReleased )
          {
            Myval2 = 0i64;
          }
          else
          {
            if ( (v6->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v6->m_status, (extension::AsyncStatus::Step)v2);
            Myval2 = v6->m_data._Mypair._Myval2;
          }
          Myval2->m_bResume = 0;
        }
      }
    }
    m_TexStr = this->m_TexStr;
    v9 = 12i64;
    do
    {
      v10 = *m_TexStr;
      if ( *m_TexStr )
      {
        if ( v10->m_bResume )
          TexString::createTexture(*m_TexStr, v2);
        v10->m_bResume = 0;
      }
      ++m_TexStr;
      --v9;
    }
    while ( v9 );
    this->iAndroidFlg &= ~0x40u;
  }
}

void __fastcall AppMain::ST_FadeOut(AppMain *this)
{
  int m_iFadeFrame; // er9
  int m_FadeST; // eax
  bool v4; // zf
  int m_iFadeAlpha; // ecx

  m_iFadeFrame = this->m_iFadeFrame;
  if ( m_iFadeFrame >= 1 )
  {
    if ( !this->m_bFadeLock )
    {
      this->m_iFadeAlpha += this->m_iFadeRate;
      m_iFadeAlpha = this->m_iFadeAlpha;
      if ( m_iFadeAlpha > 255000 )
        m_iFadeAlpha = 255000;
      this->m_iFadeAlpha = m_iFadeAlpha;
      this->m_iFadeFrame = m_iFadeFrame - 1;
      this->m_iFadeColor.s.a = m_iFadeAlpha / 1000;
    }
  }
  else
  {
    m_FadeST = this->m_FadeST;
    if ( m_FadeST > 0 )
    {
      v4 = this->m_FadeExitFunc == 0;
      this->m_FuncST = m_FadeST;
      this->m_FadeST = 0;
      if ( !v4 )
        this->m_RequestCupture = 1;
    }
    this->m_bFadeEnd = 1;
    this->m_bFadeLock = 0;
  }
}

void __fastcall AppMain::SceneFunc(AppMain *this, int scene)
{
  extension::GameScript *m_GameScript; // rcx
  GraphicsOpt *v4; // rbx
  Graphics *v5; // rcx
  GfxManager *v6; // rax
  bool v7; // dl
  GfxManager *v8; // rax
  GfxManager *v9; // rax
  int v10; // edx
  MovieData *v11; // rax
  GfxManager *v12; // rax
  int m_iFadeFrame; // ecx
  Graphics *v14; // rcx
  AppMain::Scene_PreFightFaceOff *pScene; // rdi
  __int64 v16; // rbx
  Graphics *v17; // rcx
  GfxManager *v18; // [rsp+50h] [rbp+20h]
  GfxManager *v19; // [rsp+50h] [rbp+20h]
  GfxManager *v20; // [rsp+50h] [rbp+20h]
  GfxManager *v21; // [rsp+50h] [rbp+20h]
  GfxManager *v22; // [rsp+50h] [rbp+20h]
  GfxManager *v23; // [rsp+50h] [rbp+20h]
  GfxManager *v24; // [rsp+50h] [rbp+20h]
  GfxManager *v25; // [rsp+50h] [rbp+20h]
  GfxManager *v26; // [rsp+50h] [rbp+20h]
  GfxManager *v27; // [rsp+50h] [rbp+20h]
  GfxManager *v28; // [rsp+50h] [rbp+20h]
  GfxManager *v29; // [rsp+50h] [rbp+20h]
  GfxManager *v30; // [rsp+50h] [rbp+20h]
  GfxManager *v31; // [rsp+50h] [rbp+20h]
  MovieData *v32; // [rsp+50h] [rbp+20h]
  MovieData *v33; // [rsp+50h] [rbp+20h]
  MovieData *v34; // [rsp+50h] [rbp+20h]
  GfxManager *v35; // [rsp+50h] [rbp+20h]
  GfxManager *v36; // [rsp+50h] [rbp+20h]
  GfxManager *v37; // [rsp+50h] [rbp+20h]
  GfxManager *v38; // [rsp+50h] [rbp+20h]
  GfxManager *v39; // [rsp+50h] [rbp+20h]
  GfxManager *v40; // [rsp+50h] [rbp+20h]
  GfxManager *v41; // [rsp+50h] [rbp+20h]
  GfxManager *v42; // [rsp+50h] [rbp+20h]

  while ( 2 )
  {
    switch ( scene )
    {
      case 1:
        this->m_FuncST = 2;
        this->m_FuncBT = 3;
        goto LABEL_6;
      case 2:
        m_GameScript = this->m_GameScript;
        if ( m_GameScript )
          extension::GameScript::FrameUpdate(m_GameScript);
        return;
      case 3:
        if ( this->m_GameScript && *(_QWORD *)&AppMain::pApp )
        {
          v4 = *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64);
          GraphicsOpt::lock(v4);
          Graphics::clearScreen(v5, -1);
          Graphics::drawStack(v4->g);
        }
        return;
      case 4:
        AppMain::ST_StartUpInit(this);
        return;
      case 5:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
          goto LABEL_15;
        goto LABEL_16;
      case 6:
        AppMain::ST_StartUpLoop(this);
        return;
      case 7:
        AppMain::ST_StartUpDraw(this);
        return;
      case 8:
        AppMain::ST_LogoInit(this);
        return;
      case 9:
        AppMain::ST_LogoExit(this);
        return;
      case 10:
        AppMain::ST_LogoLoop(this);
        return;
      case 11:
        AppMain::ST_LogoDraw(this);
        return;
      case 12:
        AppMain::ST_TitleInit(this);
        return;
      case 13:
        v8 = GfxManager::instance;
        if ( !GfxManager::instance )
          goto LABEL_26;
        goto LABEL_27;
      case 14:
        AppMain::ST_TitleLoop(this);
        return;
      case 15:
        AppMain::ST_TitleDraw(this);
        return;
      case 16:
        AppMain::ST_MenuInit(this);
        return;
      case 17:
        AppMain::ST_MenuExit(this);
        return;
      case 18:
        AppMain::ST_MenuLoop(this);
        return;
      case 19:
      case 23:
      case 27:
      case 31:
      case 35:
      case 55:
      case 59:
      case 63:
      case 67:
      case 71:
      case 75:
      case 79:
      case 83:
      case 87:
      case 91:
      case 95:
      case 99:
      case 103:
      case 107:
      case 131:
      case 135:
      case 139:
      case 143:
      case 147:
      case 151:
      case 155:
      case 159:
      case 163:
        AppMain::ST_OnlineMenuDraw(this);
        return;
      case 20:
        AppMain::ST_MenuVSInit(this);
        return;
      case 21:
        v8 = GfxManager::instance;
        if ( !GfxManager::instance )
          goto LABEL_26;
        goto LABEL_27;
      case 22:
        AppMain::ST_MenuVSLoop(this);
        return;
      case 24:
        AppMain::ST_MemberSelectInit(this);
        return;
      case 25:
        v8 = GfxManager::instance;
        if ( !GfxManager::instance )
          goto LABEL_26;
        goto LABEL_27;
      case 26:
        AppMain::ST_MemberSelectLoop(this);
        return;
      case 28:
        AppMain::ST_OrderSelectInit(this);
        return;
      case 29:
        v8 = GfxManager::instance;
        if ( !GfxManager::instance )
          goto LABEL_26;
        goto LABEL_27;
      case 30:
        AppMain::ST_OrderSelectLoop(this);
        return;
      case 32:
        AppMain::ST_StageSelectInit(this);
        return;
      case 33:
        v8 = GfxManager::instance;
        if ( !GfxManager::instance )
          goto LABEL_26;
        goto LABEL_27;
      case 34:
        AppMain::ST_StageSelectLoop(this);
        return;
      case 36:
        AppMain::ST_ThankYouInit(this);
        return;
      case 37:
        AppMain::ST_ThankYouLoop(this);
        return;
      case 38:
      case 123:
        AppMain::ST_CreditDraw(this);
        return;
      case 39:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
          goto LABEL_15;
        goto LABEL_16;
      case 40:
        AppMain::ST_ResultInit(this);
        return;
      case 41:
        AppMain::ST_ResultExit(this);
        return;
      case 42:
        AppMain::ST_ResultLoop(this);
        return;
      case 43:
        AppMain::ST_ResultDraw(this);
        return;
      case 44:
        AppMain::ST_OptionInit(this);
        return;
      case 45:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v20 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v20);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 46:
        AppMain::ST_OptionLoop(this);
        return;
      case 47:
        AppMain::ST_OptionDraw(this);
        return;
      case 48:
        AppMain::ST_GalleryInit(this);
        return;
      case 49:
        AppMain::ST_GalleryLoop(this);
        return;
      case 50:
        AppMain::ST_GalleryDraw(this);
        return;
      case 51:
        AppMain::ST_GalleryExit(this);
        return;
      case 52:
        AppMain::ST_MissionMenuInit(this);
        return;
      case 53:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v21 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v21);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 54:
        AppMain::ST_MissionMenuLoop(this);
        return;
      case 56:
        AppMain::ST_MissionTrialInit(this);
        return;
      case 57:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v22 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v22);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 58:
        AppMain::ST_MissionTrialLoop(this);
        return;
      case 60:
        AppMain::ST_PlayerDataMenuInit(this);
        return;
      case 61:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v23 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v23);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 62:
        AppMain::ST_PlayerDataMenuLoop(this);
        return;
      case 64:
        AppMain::ST_PlayerRecordInit(this);
        return;
      case 65:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v24 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v24);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 66:
        AppMain::ST_PlayerRecordLoop(this);
        return;
      case 68:
        AppMain::ST_CharacterRecordInit(this);
        return;
      case 69:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v25 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v25);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 70:
        AppMain::ST_CharacterRecordLoop(this);
        return;
      case 72:
        AppMain::ST_MyRankingInit(this);
        return;
      case 73:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v26 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v26);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 74:
        AppMain::ST_MyRankingLoop(this);
        return;
      case 76:
        AppMain::ST_MyProfileInit(this);
        return;
      case 77:
        AppMain::SaveDataAsyncSave(this, scene);
        if ( s_FlagOnline && s_FlagGotOnlineProfile )
          AppMain::TusSetOnlineProfile(this);
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v27 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v27);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 78:
        AppMain::ST_MyProfileLoop(this);
        return;
      case 80:
        AppMain::ST_MyFavoriteInit(this);
        return;
      case 81:
        AppMain::ST_MyFavoriteExit(this);
        return;
      case 82:
        AppMain::ST_MyFavoriteLoop(this);
        return;
      case 84:
        AppMain::ST_LeaderboardInit(this);
        return;
      case 85:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v28 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v28);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 86:
        AppMain::ST_LeaderboardLoop(this);
        return;
      case 88:
        AppMain::ST_OnlineReplayInit(this);
        return;
      case 89:
        v9 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v29 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v29);
          GfxManager::instance = v9;
        }
        GfxManager::ReleaseGFXMovie(v9, 0);
        if ( s_OnlineReplaySaveFlag )
          AppMain::SaveDataAsyncSaveReplay(*(AppMain **)&AppMain::pApp);
        return;
      case 90:
        AppMain::ST_OnlineReplayLoop(this);
        return;
      case 92:
        AppMain::ST_ProfileInit(this);
        return;
      case 93:
        if ( AppMain::UpdateOpponentListFriend(this) )
          AppMain::SaveDataAsyncSave(this, v10);
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v30 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v30);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 94:
        AppMain::ST_ProfileLoop(this);
        return;
      case 96:
        AppMain::ST_ReplayDataInit(this);
        return;
      case 97:
        AppMain::ST_ReplayDataExit(this);
        return;
      case 98:
        AppMain::ST_ReplayDataLoop(this);
        return;
      case 100:
        AppMain::ST_OnlineMenuInit(this);
        return;
      case 101:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v31 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v31);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 102:
        AppMain::ST_OnlineMenuLoop(this);
        return;
      case 104:
        AppMain::ST_FightingListInit(this);
        return;
      case 105:
        AppMain::ST_FightingListExit(this);
        return;
      case 106:
        AppMain::ST_FightingListLoop(this);
        return;
      case 108:
        AppMain::ST_OpeningDemoInit(this);
        return;
      case 109:
        v11 = MovieData::movieData;
        if ( !MovieData::movieData )
        {
          v32 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
          MovieData::MovieData(v32);
          MovieData::movieData = v11;
        }
        goto LABEL_158;
      case 110:
        AppMain::ST_OpeningDemoLoop(this);
        return;
      case 111:
      case 119:
        AppMain::ST_EndDemoDraw(this);
        return;
      case 112:
        AppMain::ST_StoryDemoInit(this);
        return;
      case 113:
        v11 = MovieData::movieData;
        if ( !MovieData::movieData )
        {
          v33 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
          MovieData::MovieData(v33);
          MovieData::movieData = v11;
        }
        goto LABEL_158;
      case 114:
        AppMain::ST_StoryDemoLoop(this);
        return;
      case 115:
        AppMain::ST_StoryDemoDraw(this);
        return;
      case 116:
        AppMain::ST_EndDemoInit(this);
        return;
      case 117:
        v11 = MovieData::movieData;
        if ( !MovieData::movieData )
        {
          v34 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
          MovieData::MovieData(v34);
          MovieData::movieData = v11;
        }
LABEL_158:
        MovieData::Finalize(v11, scene);
        return;
      case 118:
        AppMain::ST_EndDemoLoop(this);
        return;
      case 120:
        AppMain::ST_CreditInit(this);
        return;
      case 121:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
LABEL_15:
          v18 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v18);
          GfxManager::instance = v6;
        }
LABEL_16:
        v7 = 1;
        goto LABEL_17;
      case 122:
        AppMain::ST_CreditLoop(this);
        return;
      case 124:
        AppMain::ST_NewChallengerInit(this);
        return;
      case 126:
        AppMain::ST_NewChallengerLoop(this);
        return;
      case 127:
        AppMain::ST_NewChallengerDraw(this);
        return;
      case 128:
        AppMain::ST_RankmatchInit(this);
        return;
      case 129:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v35 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v35);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 130:
        AppMain::ST_RankmatchLoop(this);
        return;
      case 132:
        AppMain::ST_FreematchMenuInit(this);
        return;
      case 133:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v36 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v36);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 134:
        AppMain::ST_FreematchMenuLoop(this);
        return;
      case 136:
        AppMain::ST_FreematchInit(this);
        return;
      case 137:
        v12 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v37 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v37);
          GfxManager::instance = v12;
        }
        GfxManager::ReleaseGFXMovie(v12, 0);
        if ( !Fw::WordFilterSystem::instance_ )
          Fw::WordFilterSystem::instance_ = (Fw::WordFilterSystem *)operator new(1ui64);
        return;
      case 138:
        AppMain::ST_FreematchLoop(this);
        return;
      case 140:
        AppMain::ST_PlayTogetherInit(this);
        return;
      case 141:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v38 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v38);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 142:
        AppMain::ST_PlayTogetherLoop(this);
        return;
      case 144:
        AppMain::ST_MatchingInit(this);
        return;
      case 145:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v39 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v39);
          GfxManager::instance = v6;
          if ( !v6 )
          {
            v40 = (GfxManager *)operator new(0x108ui64);
            GfxManager::GfxManager(v40);
            GfxManager::instance = v6;
          }
        }
        v7 = 0;
        goto LABEL_17;
      case 146:
        AppMain::ST_MatchingLoop(this);
        return;
      case 148:
        AppMain::ST_RoomInit(this);
        return;
      case 149:
        AppMain::ST_RoomExit(this);
        return;
      case 150:
        AppMain::ST_RoomLoop(this);
        return;
      case 152:
        AppMain::ST_RoomListInit(this);
        return;
      case 153:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v41 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v41);
          GfxManager::instance = v6;
        }
        v7 = 0;
        goto LABEL_17;
      case 154:
        AppMain::ST_RoomListLoop(this);
        return;
      case 156:
        AppMain::ST_OnlineTrainingInit(this);
        return;
      case 157:
        v6 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
          v42 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v42);
          GfxManager::instance = v6;
        }
        v7 = 0;
LABEL_17:
        GfxManager::ReleaseGFXMovie(v6, v7);
        return;
      case 158:
        AppMain::ST_OnlineTrainingLoop(this);
        return;
      case 160:
        AppMain::ST_TutorialMenuInit(this);
        return;
      case 161:
        v8 = GfxManager::instance;
        if ( !GfxManager::instance )
        {
LABEL_26:
          v19 = (GfxManager *)operator new(0x108ui64);
          GfxManager::GfxManager(v19);
          GfxManager::instance = v8;
        }
LABEL_27:
        GfxManager::ReleaseGFXMovie(v8, 0);
        return;
      case 162:
        AppMain::ST_TutorialMenuLoop(this);
        return;
      case 164:
        AppMain::ST_LoadingBackInit(this);
        return;
      case 165:
        AppMain::ST_LoadingInit(this);
        return;
      case 166:
        AppMain::ST_LoadingInit2(this);
        return;
      case 167:
        AppMain::ST_LoadingLoop(this);
        return;
      case 168:
        AppMain::ST_LoadingEndLoop(this);
        return;
      case 169:
        AppMain::ST_LoadingDraw(this);
        return;
      case 170:
        AppMain::ST_FadeOut(this);
        return;
      case 171:
        m_iFadeFrame = this->m_iFadeFrame;
        if ( m_iFadeFrame >= 1 )
        {
          if ( !this->m_bFadeLock )
          {
            this->m_iFadeAlpha -= this->m_iFadeRate;
            this->m_iFadeColor.s.a = this->m_iFadeAlpha / 1000;
            this->m_iFadeFrame = m_iFadeFrame - 1;
          }
        }
        else
        {
          this->m_bFadeEnd = 1;
          this->m_FuncFT = 0;
          this->m_bFadeLock = 0;
        }
        return;
      case 172:
        this->m_FuncST = this->m_FadeST;
        *(_QWORD *)&this->m_FuncFT = 0i64;
        this->m_RequestCupture = 1;
        return;
      case 177:
        AppMain::ST_BattleMainInit(this);
        return;
      case 178:
        AppMain::ST_BattleSamplePlayInit(this);
        return;
      case 179:
        AppMain::ST_BattleMainLoop(this);
        return;
      case 180:
        AppMain::ST_BattleMainDraw(this);
        return;
      case 181:
        AppMain::ST_BattleMainExit(this);
        return;
      case 182:
        AppMain::ST_BattleResultExit(this);
        return;
      case 183:
        AppMain::ST_BattleLoadingInit(this);
        return;
      case 184:
        AppMain::ST_BattleLoadingLoop(this);
        return;
      case 185:
        AppMain::ST_BattleLoadingDraw(this);
        return;
      case 186:
        AppMain::ST_BattleLoadingExit(this);
        return;
      case 187:
        this->m_FuncST = 188;
        this->m_FuncBT = 189;
        goto LABEL_5;
      case 188:
        AppMain::ST_MissionDataLoadingLoop(this);
        return;
      case 189:
        AppMain::ST_MissionDataLoadingDraw(this);
        return;
      case 191:
        this->m_FuncST = 192;
        this->m_FuncBT = 193;
LABEL_5:
        this->m_bFadeLock = 0;
        this->m_FadeExitFunc = 0;
        this->m_FuncFT = 0;
        this->m_bFadeEnd = 0;
        this->iLoadingTimer = 0;
        *(_QWORD *)&this->iLoadingCount = 0i64;
LABEL_6:
        this->iReserveScene = -1;
        scene = this->m_FuncST;
        if ( (unsigned int)scene > 0xD3 )
          return;
        continue;
      case 192:
        AppMain::ST_MissionKeyDataLoadingLoop(this);
        return;
      case 193:
        GraphicsOpt::lock(this->g);
        Graphics::clearScreen(v14, -16777216);
        Graphics::drawStack(this->g->g);
        return;
      case 195:
        AppMain::StartPreFightFaceOffScene(this, scene, 0);
        return;
      case 196:
        AppMain::ST_PreFightFaceOffLoop(this);
        return;
      case 197:
        pScene = this->m_preFightFaceOff.pScene;
        if ( !pScene )
          goto $LN202;
        v16 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64);
        if ( pScene->m_sequence < InOutQuad )
        {
          GraphicsOpt::lock(*(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64));
          Graphics::clearScreen(v17, -16777216);
          Graphics::drawStack(*(Graphics **)(v16 + 8));
          PreFightFaceOff::RenderManager::draw(pScene->m_pRenderManager);
        }
        break;
      case 198:
$LN202:
        AppMain::ExitPreFightFaceOffScene(this);
        break;
      case 199:
        AppMain::ST_ResultLoadingInit(this);
        break;
      case 200:
        AppMain::ST_ResultLoadingLoop(this);
        break;
      case 201:
        AppMain::ST_ResultLoadingDraw(this);
        break;
      case 208:
        g_status = 0;
        this->iReserveScene = -1;
        this->m_FuncST = 209;
        AppMain::SceneFunc(this, 209);
        this->m_FuncExit = 211;
        break;
      case 209:
        AppMain::ST_StoreLoop(this);
        break;
      default:
        return;
    }
    break;
  }
}

void __fastcall AppMain::SceneJump(AppMain *this, int scene)
{
  int m_Status; // eax
  GfxManager *v5; // rax
  GfxManager *v6; // [rsp+40h] [rbp+8h]

  m_Status = Fw::ImeTarget::m_IMEPad.m_Status;
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    m_Status = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  if ( m_Status == 1 )
  {
    Fw::ImeTargetKB::Abort((Fw::ImeTargetKB *)this);
    Fw::ImeTarget::m_IMEPad.m_Status = 3;
  }
  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v6 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v6);
    GfxManager::instance = v5;
  }
  *(_WORD *)&v5->m_bDisposeGFXMovie = 1;
  this->iReserveScene = -1;
  this->m_FadeST = scene;
  this->m_FuncST = 0;
  this->m_FadeExitFunc = this->m_FuncExit;
  this->m_bExitFuncWaitFrame = 0;
  if ( this->m_FuncFT != 170 )
    this->m_FuncFT = 172;
}

void __fastcall AppMain::UpdateInputDevice(AppMain *this)
{
  int v2; // er15
  int v3; // ecx
  GfxManager *v4; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  UserGameOperation *v6; // rsi
  GameDataInfo *Instance; // rax
  GAME_MODE v8; // edx
  int v9; // edi
  _DWORD *v10; // r12
  GameDataInfo *v11; // rcx
  int v12; // ebx
  std::bitset<16> *v13; // r9
  UserGameOperation::UserSlot *UserSlot; // r11
  UserGameOperation::UserSlot *p_m_anyUserSlot; // r10
  __int64 v16; // rdx
  std::bitset<16> *v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  UserGameOperation::UserSlot *v20; // r10
  __int64 v21; // rdx
  std::bitset<16> *v22; // rcx
  __int64 v23; // rdx
  char v24; // al
  UserGameOperation::UserSlot *v25; // r10
  __int64 v26; // rdx
  std::bitset<16> *v27; // rcx
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rdx
  std::bitset<16> *v31; // rcx
  __int64 v32; // rdx
  char v33; // al
  int m_displayedContHWType; // ebx
  GfxManager *v35; // rax
  extension::gfxi_detail::MovieProxy *v36; // rbx
  UserGameOperation::TestPolicy v37; // er9
  UserGameOperation::TestPolicy v38; // er9
  UserGameOperation::TestPolicy v39; // er9
  GfxManager *v40; // rax
  extension::gfxi_detail::MovieProxy *v41; // rbx
  GfxManager *v42; // [rsp+30h] [rbp-D0h] BYREF
  AgControllerType m_lastUsedContType; // [rsp+38h] [rbp-C8h] BYREF
  AgControllerHardwareType m_lastUsedContHWType; // [rsp+3Ch] [rbp-C4h] BYREF
  Scaleform::GFx::Value presult; // [rsp+40h] [rbp-C0h] BYREF
  Framework::GLManager *v46; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::GFx::Value pargs; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-58h]
  GfxManager *v49; // [rsp+B0h] [rbp-50h]
  Scaleform::GFx::Value ptr; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value val; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::GFx::Value v52; // [rsp+120h] [rbp+20h] BYREF

  v48 = -2i64;
  v46 = Framework::GLManager::glm;
  m_lastUsedContType = Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
  m_lastUsedContHWType = Framework::GLManager::glm->m_controllerContext.m_lastUsedContHWType;
  presult.pPrev = (Scaleform::GFx::Value *)&m_lastUsedContType;
  presult.pNext = (Scaleform::GFx::Value *)this;
  presult.pObjectInterface = (Scaleform::GFx::Value::ObjectInterface *)&m_lastUsedContHWType;
  *(_QWORD *)&presult.Type = &v46;
  v2 = 2;
  if ( m_lastUsedContType == AgControllerType_Mouse
    || !lambda_993310bac1e185f67fa16362ab5e4a64_::operator()((__int64)&presult) )
  {
LABEL_15:
    v4 = GfxManager::instance;
    goto LABEL_16;
  }
  v3 = m_lastUsedContType;
  extension::TranslateTable::s_useKBTexts = m_lastUsedContType != AgControllerType_Gamepad;
  v4 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v42 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v42);
    GfxManager::instance = v4;
    v3 = m_lastUsedContType;
  }
  m_ptr = v4->m_GFXMovie.m_movieProxy.m_ptr;
  if ( v4->m_GFXMovie.m_movieProxy.m_ptr )
  {
    pargs.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    pargs.pObjectInterface = 0i64;
    pargs.Type = VT_Float;
    pargs.mValue.IValue = v3;
    presult.Scaleform::ListNode<Scaleform::GFx::Value> = pargs.Scaleform::ListNode<Scaleform::GFx::Value>;
    presult.pObjectInterface = 0i64;
    presult.Type = VT_Int64;
    presult.mValue.BValue = 0;
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.callInputMethodChanged") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.callInputMethodChanged", &presult, &pargs, 1u);
    if ( presult.mValue.BValue )
    {
      this->m_displayedContType = m_lastUsedContType;
      this->m_displayedContHWType = m_lastUsedContHWType;
    }
    if ( (presult.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        presult.pObjectInterface,
        &presult,
        presult.mValue.pStringManaged);
      presult.pObjectInterface = 0i64;
    }
    presult.Type = VT_None;
    if ( (pargs.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pargs.pObjectInterface, &pargs, pargs.mValue.pStringManaged);
      pargs.pObjectInterface = 0i64;
    }
    pargs.Type = VT_None;
    goto LABEL_15;
  }
LABEL_16:
  if ( this->m_FuncST == 30 )
  {
    if ( !v4 )
    {
      v42 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v42);
      GfxManager::instance = v4;
    }
    if ( v4->m_GFXMovie.m_movieProxy.m_ptr )
    {
      v6 = UserGameOperation::Instance();
      Instance = GameDataInfo::getInstance();
      v8 = Instance->m_GameMode[Instance->m_GameModeIndex];
      if ( (unsigned int)(v8 - 4) > 2 && v8 != GAME_MODE_ONLINETRAINING )
        v2 = 1;
      v9 = 1;
      v10 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
      while ( 1 )
      {
        if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v10 )
        {
          Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
          {
            GameDataInfo::GameDataInfo(v11);
            Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
          }
        }
        v12 = v9 != `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0];
        UserSlot = UserGameOperation::getUserSlot(v6, v9);
        p_m_anyUserSlot = UserSlot;
        if ( v9 == 0x80000000 )
          p_m_anyUserSlot = &v6->m_anyUserSlot;
        if ( p_m_anyUserSlot )
        {
          v13 = &v6->m_ButtonConfig[7];
          LODWORD(v42) = 0xFFFF;
          v16 = 0i64;
          v17 = &v6->m_ButtonConfig[7];
          while ( v17->_Array[0] == *(unsigned int *)((char *)v17->_Array + (char *)&v42
                                                                          - (char *)&v6->m_ButtonConfig[7]) )
          {
            --v17;
            if ( --v16 < 0 )
              goto LABEL_40;
          }
          LODWORD(v42) = v13->_Array[0] & p_m_anyUserSlot->m_pressedEventChannels._Array[0];
          v18 = 0i64;
          v13 = (std::bitset<16> *)((char *)v13 - (unsigned __int64)&v42);
          while ( *((_DWORD *)&v42 + v18) == *(_DWORD *)((char *)&v42 + (_QWORD)&v13[v18]) )
          {
            if ( --v18 < 0 )
            {
              v19 = 1;
              goto LABEL_39;
            }
          }
          v19 = 0;
LABEL_39:
          if ( v19 )
            break;
        }
LABEL_40:
        v20 = UserSlot;
        if ( v9 == 0x80000000 )
          v20 = &v6->m_anyUserSlot;
        if ( v20 )
        {
          v13 = &v6->m_ButtonConfig[6];
          LODWORD(v42) = 0xFFFF;
          v21 = 0i64;
          v22 = &v6->m_ButtonConfig[6];
          while ( v22->_Array[0] == *(unsigned int *)((char *)v22->_Array + (char *)&v42
                                                                          - (char *)&v6->m_ButtonConfig[6]) )
          {
            --v22;
            if ( --v21 < 0 )
              goto LABEL_53;
          }
          LODWORD(v42) = v13->_Array[0] & v20->m_pressedEventChannels._Array[0];
          v23 = 0i64;
          v13 = (std::bitset<16> *)((char *)v13 - (unsigned __int64)&v42);
          while ( *((_DWORD *)&v42 + v23) == *(_DWORD *)((char *)&v42 + (_QWORD)&v13[v23]) )
          {
            if ( --v23 < 0 )
            {
              v24 = 1;
              goto LABEL_52;
            }
          }
          v24 = 0;
LABEL_52:
          if ( v24 )
            break;
        }
LABEL_53:
        v25 = UserSlot;
        if ( v9 == 0x80000000 )
          v25 = &v6->m_anyUserSlot;
        if ( v25 )
        {
          v13 = &v6->m_ButtonConfig[4];
          LODWORD(v42) = 0xFFFF;
          v26 = 0i64;
          v27 = &v6->m_ButtonConfig[4];
          while ( v27->_Array[0] == *(unsigned int *)((char *)v27->_Array + (char *)&v42
                                                                          - (char *)&v6->m_ButtonConfig[4]) )
          {
            --v27;
            if ( --v26 < 0 )
              goto LABEL_66;
          }
          LODWORD(v42) = v13->_Array[0] & v25->m_pressedEventChannels._Array[0];
          v28 = 0i64;
          v13 = (std::bitset<16> *)((char *)v13 - (unsigned __int64)&v42);
          while ( *((_DWORD *)&v42 + v28) == *(_DWORD *)((char *)&v42 + (_QWORD)&v13[v28]) )
          {
            if ( --v28 < 0 )
            {
              v29 = 1;
              goto LABEL_65;
            }
          }
          v29 = 0;
LABEL_65:
          if ( v29 )
            break;
        }
LABEL_66:
        if ( v9 == 0x80000000 )
          UserSlot = &v6->m_anyUserSlot;
        if ( UserSlot )
        {
          v13 = &v6->m_ButtonConfig[5];
          LODWORD(v42) = 0xFFFF;
          v30 = 0i64;
          v31 = &v6->m_ButtonConfig[5];
          while ( v31->_Array[0] == *(unsigned int *)((char *)v31->_Array + (char *)&v42
                                                                          - (char *)&v6->m_ButtonConfig[5]) )
          {
            --v31;
            if ( --v30 < 0 )
              goto LABEL_90;
          }
          LODWORD(v42) = v13->_Array[0] & UserSlot->m_pressedEventChannels._Array[0];
          v32 = 0i64;
          v13 = (std::bitset<16> *)((char *)v13 - (unsigned __int64)&v42);
          while ( *((_DWORD *)&v42 + v32) == *(_DWORD *)((char *)&v42 + (_QWORD)&v13[v32]) )
          {
            if ( --v32 < 0 )
            {
              v33 = 1;
              goto LABEL_78;
            }
          }
          v33 = 0;
LABEL_78:
          if ( v33 )
            break;
        }
LABEL_90:
        if ( !UserGameOperation::testKeyboard(v6, v9, GameOp_SetDialog1, (UserGameOperation::TestPolicy)v13)
          && !UserGameOperation::testKeyboard(v6, v9, GameOp_SetDialog2, v37)
          && !UserGameOperation::testKeyboard(v6, v9, GameOp_SetDialog3, v38)
          && !UserGameOperation::testKeyboard(v6, v9, GameOp_UI_Cancel, v39) )
        {
          goto LABEL_103;
        }
        `eh vector constructor iterator'(
          &ptr,
          0x30ui64,
          3ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
        if ( (ptr.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
          ptr.pObjectInterface = 0i64;
        }
        ptr.Type = 4;
        ptr.mValue.IValue = v12;
        if ( (val.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
          val.pObjectInterface = 0i64;
        }
        val.Type = 4;
        val.mValue.IValue = 0;
        if ( (v52.Type & 0x40) != 0 )
        {
          Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v52.pObjectInterface, &v52, v52.mValue.pStringManaged);
          v52.pObjectInterface = 0i64;
        }
        v52.Type = 4;
        v52.mValue.IValue = 3;
        v40 = GfxManager::getInstance();
        v41 = v40->m_GFXMovie.m_movieProxy.m_ptr;
        if ( Scaleform::GFx::Movie::IsAvailable(
               v40->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
               "_root.callInputMethodChanged_OrderSelect") )
        {
          Scaleform::GFx::Movie::Invoke(
            v41->m_movie.pObject,
            "_root.callInputMethodChanged_OrderSelect",
            0i64,
            &ptr,
            3u);
        }
LABEL_102:
        `eh vector destructor iterator'(
          &ptr,
          0x30ui64,
          3ui64,
          (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
LABEL_103:
        if ( ++v9 > v2 )
          return;
      }
      `eh vector constructor iterator'(
        &ptr,
        0x30ui64,
        3ui64,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      if ( (ptr.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
        ptr.pObjectInterface = 0i64;
      }
      ptr.Type = 4;
      ptr.mValue.IValue = v12;
      m_displayedContHWType = this->m_displayedContHWType;
      if ( (val.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
        val.pObjectInterface = 0i64;
      }
      val.Type = 4;
      val.mValue.IValue = m_displayedContHWType;
      if ( (v52.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v52.pObjectInterface, &v52, v52.mValue.pStringManaged);
        v52.pObjectInterface = 0i64;
      }
      v52.Type = 4;
      v52.mValue.IValue = 1;
      v35 = GfxManager::instance;
      if ( !GfxManager::instance )
      {
        v49 = (GfxManager *)operator new(0x108ui64);
        GfxManager::GfxManager(v49);
        GfxManager::instance = v35;
      }
      v36 = v35->m_GFXMovie.m_movieProxy.m_ptr;
      if ( Scaleform::GFx::Movie::IsAvailable(
             v35->m_GFXMovie.m_movieProxy.m_ptr->m_movie.pObject,
             "_root.callInputMethodChanged_OrderSelect") )
      {
        Scaleform::GFx::Movie::Invoke(v36->m_movie.pObject, "_root.callInputMethodChanged_OrderSelect", 0i64, &ptr, 3u);
      }
      goto LABEL_102;
    }
  }
}

void __fastcall AppMain::UpdateNetworkError(AppMain *this)
{
  int error; // ebx
  const char *NetworkErrorKey; // rsi
  GfxManager *v4; // rax
  GfxManager *v5; // rax
  GfxManager *v6; // [rsp+68h] [rbp+10h]
  GfxManager *v7; // [rsp+68h] [rbp+10h]

  error = g_NetworkManager.gamedata.error;
  if ( g_NetworkManager.gamedata.error && this->m_FuncST != 184 )
  {
    NetworkErrorKey = NetManager::GetNetworkErrorKey((NetManager *)this, g_NetworkManager.gamedata.error);
    v4 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v6 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v6);
      GfxManager::instance = v4;
    }
    GfxManager::GFv_SetSystemMessage(v4, NetworkErrorKey, SYSTEM_MESSAGE_OK, 0, 1, "no_title", &pnewText, "size_s");
    if ( error == 9 )
    {
      GfxManager::getInstance()->m_pCallBackEventFunc = onNetworkErrorClosedBackRoom;
    }
    else
    {
      this->m_NetDisconnectNextMainMenuFlag = !Fw::NetworkStatusCommon::m_OnlineFlag;
      GfxManager::getInstance()->m_pCallBackEventFunc = onNetworkErrorClosed;
    }
    *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507540i64) = 0;
    v5 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v7 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v7);
      GfxManager::instance = v5;
    }
    GfxManager::GFv_onNetworkError(v5, (NETWORK_ERROR_TYPE)error);
    *(_QWORD *)&g_NetworkManager.gamedata.error = 0i64;
    this->windowErrorNo = error;
    this->m_bInvitePermit = 0;
  }
}

std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *this)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)operator new(0x50ui64);
  if ( result )
    result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)-16i64 )
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

void __fastcall std::vector<AgDelegate1<AgControllerAddedEvent const &,void>>::_Reallocate(
        std::vector<AgDelegate1<AgControllerAddedEvent const &,void>> *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgControllerRemovedEvent const &,void> *v4; // r14
  signed __int64 v5; // rdi

  v4 = (AgDelegate1<AgControllerRemovedEvent const &,void> *)std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>::allocate(
                                                               (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > *)this,
                                                               _Count);
  std::_Uninitialized_move_al_unchecked1<AgDelegate1<AgControllerAddedEvent const &,void> *,AgDelegate1<AgControllerAddedEvent const &,void> *,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>>(
    (AgDelegate1<AgControllerRemovedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
    (AgDelegate1<AgControllerRemovedEvent const &,void> *)this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > *)this);
  v5 = (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = (AgDelegate1<AgControllerAddedEvent const &,void> *)&v4[_Count];
  this->_Mypair._Myval2._Mylast = (AgDelegate1<AgControllerAddedEvent const &,void> *)((char *)v4
                                                                                     + (v5 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = (AgDelegate1<AgControllerAddedEvent const &,void> *)v4;
}

void __fastcall std::vector<AgDelegate1<AgTypingInputEvent const &,void>>::_Reallocate(
        std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > *a4)
{
  AgDelegate1<AgControllerRemovedEvent const &,void> *v6; // rbx
  unsigned __int64 v7; // rcx
  void (__fastcall *v8)(detail::GenericClass *); // rax
  signed __int64 v9; // r14

  if ( _Count )
  {
    if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 16 * _Count;
    if ( 16 * _Count < 0x1000 )
    {
      v6 = (AgDelegate1<AgControllerRemovedEvent const &,void> *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (void (__fastcall *)(detail::GenericClass *))operator new(v7 + 39);
      v6 = (AgDelegate1<AgControllerRemovedEvent const &,void> *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].m_Closure.m_pFunction = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<AgDelegate1<AgControllerAddedEvent const &,void> *,AgDelegate1<AgControllerAddedEvent const &,void> *,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  v9 = (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = (AgDelegate1<AgControllerRemovedEvent const &,void> *)((char *)v6
                                                                                       + (v9 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<AgDelegate1<AgControllerAddedEvent const &,void>>::_Reserve(
        std::vector<AgDelegate1<AgControllerAddedEvent const &,void>> *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgControllerAddedEvent const &,void> *Myend; // r10
  AgDelegate1<AgControllerAddedEvent const &,void> *Mylast; // r8
  AgDelegate1<AgControllerAddedEvent const &,void> *Myfirst; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( 0xFFFFFFFFFFFFFFFi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0xFFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<AgDelegate1<AgControllerAddedEvent const &,void>>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>>::_Reserve(
        std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>> *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgControllerRemovedEvent const &,void> *Myend; // r9
  AgDelegate1<AgControllerRemovedEvent const &,void> *Mylast; // rdx
  AgDelegate1<AgControllerRemovedEvent const &,void> *Myfirst; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( v6 == 0xFFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0xFFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<AgDelegate1<AgTypingInputEvent const &,void>>::_Reallocate(
      this,
      v7,
      (__int64)this,
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > *)v8);
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

void __fastcall std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this)
{
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myfirst; // rbx
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *v2; // rdi
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *i; // rsi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  v2 = this;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
    {
      this = (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)Myfirst->m_body.m_ptr;
      if ( this )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&this->_Mypair._Myval2._Mylast[1],
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          (*(void (__fastcall **)(std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *, __int64))this->_Mypair._Myval2._Myfirst)(
            this,
            1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)v2->_Mypair._Myval2._Myfirst,
      v2->_Mypair._Myval2._Myend - v2->_Mypair._Myval2._Myfirst);
    v2->_Mypair._Myval2._Myfirst = 0i64;
    v2->_Mypair._Myval2._Mylast = 0i64;
    v2->_Mypair._Myval2._Myend = 0i64;
  }
}

extension::BasicFutureObject<extension::AsyncFileImage,void> *__fastcall std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>::allocate(
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rdx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 16 * _Count;
  if ( v3 < 0x1000 )
    return (extension::BasicFutureObject<extension::AsyncFileImage,void> *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (extension::BasicFutureObject<extension::AsyncFileImage,void> *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

void __fastcall AppMain::callNotifyDeviceHotswap(AppMain *this)
{
  GfxManager *v1; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  GfxManager *v3; // [rsp+50h] [rbp+8h]

  v1 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v3 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v3);
    GfxManager::instance = v1;
  }
  m_ptr = v1->m_GFXMovie.m_movieProxy.m_ptr;
  if ( v1->m_GFXMovie.m_movieProxy.m_ptr )
  {
    if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.callNotifyDeviceHotswap") )
      Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.callNotifyDeviceHotswap", 0i64, 0i64, 0);
  }
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

void __fastcall std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *this,
        AgDelegate1<AgUserUpdatedEvent const &,void> *_Ptr,
        unsigned __int64 _Count)
{
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rax
  char *v4; // rdx

  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 16 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_pFunction = _Ptr[-1].m_Closure.m_pFunction;
    if ( (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_pFunction);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction;
  }
  operator delete(_Ptr);
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

Image *__fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::getData(
        extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<Image> *m_ptr; // rbx

  m_ptr = this->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    return 0i64;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, a2);
  return m_ptr->m_data._Mypair._Myval2;
}

AgPointer<AgController> *__fastcall Framework::Input::ControllerContext::getGamepad(
        Framework::Input::ControllerContext *this,
        AgPointer<AgController> *result,
        int userIndex)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)&this->m_keyboard + userIndex);
  return result;
}

EasyIndicator *__fastcall EasyIndicator::getInstance()
{
  EasyIndicator *result; // rax
  EasyIndicator *v1; // rbx

  result = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v1 = (EasyIndicator *)operator new(0x150ui64);
    memset(v1->m_IndicatorStack, 0, sizeof(v1->m_IndicatorStack));
    EasyIndicator::instance = v1;
    v1->m_Image = 0i64;
    v1->m_DrawCount = 0;
    return v1;
  }
  return result;
}

GameDataInfo *__fastcall GameDataInfo::getInstance()
{
  GameDataInfo *v1; // rcx

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v1);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  return &`GameDataInfo::getInstance'::`2'::instance;
}

void __fastcall GfxManager::getInstance()
{
  GfxManager *v0; // rax
  GfxManager *v1; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v1 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v1);
    GfxManager::instance = v0;
  }
}

void __fastcall MovieData::getInstance()
{
  MovieData *v0; // rax
  MovieData *v1; // [rsp+40h] [rbp+8h]

  if ( !MovieData::movieData )
  {
    v1 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v1);
    MovieData::movieData = v0;
  }
}

AppMain *__fastcall initAppMain(int width, int height, int realW, int realH, float realScaleX, float realScaleY)
{
  __int64 v10; // rbx
  ViewController *v11; // rdx
  __int64 v12; // rax
  AppMain *v13; // rcx
  AppMain *v15; // [rsp+28h] [rbp-30h]

  v10 = *(_QWORD *)&AppMain::pApp;
  if ( !*(_QWORD *)&AppMain::pApp )
  {
    v15 = (AppMain *)operator new(0x264338ui64);
    AppMain::AppMain(v15, v11);
    *(_QWORD *)&AppMain::pApp = v12;
    AppMain::initialize(v13, width, height, 1.0);
    v10 = *(_QWORD *)&AppMain::pApp;
  }
  *(float *)(v10 + 2507484) = realScaleX;
  *(float *)(v10 + 2507488) = realScaleY;
  if ( (*(_BYTE *)(v10 + 2507492) & 2) == 0 )
  {
    glsInitialize();
    *(_DWORD *)(v10 + 28) = width;
    *(_DWORD *)(v10 + 32) = height;
    *(_DWORD *)(v10 + 2507476) = realW;
    *(_DWORD *)(v10 + 2507480) = realH;
    *(float *)(v10 + 2507484) = realScaleX;
    *(float *)(v10 + 2507488) = realScaleY;
  }
  return (AppMain *)v10;
}

__int64 __fastcall AppMain::initialize(AppMain *this, int w, int h, float scale)
{
  float v4; // xmm2_4
  unsigned __int64 v5; // rsi
  int v6; // ecx
  float v7; // xmm0_4
  AgReferenceCount *v8; // rcx
  KOFApplication *v9; // rax
  OGLRender *v10; // rax
  int v11; // edx
  __int64 v12; // rax
  Graphics *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  extension::GameScript *v17; // rdi
  lua_State *m_Context; // rbx
  lua_State *v19; // rax
  int v20; // edx
  extension *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rbx
  __int64 v25; // rbx
  int v26; // edx
  int v27; // er8
  unsigned __int8 v28; // r9
  float v29; // xmm1_4
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  Fw::ResourceManager::Work *v33; // rax
  int v34; // edx
  int v35; // er8
  int v36; // er9
  __int64 v37; // rcx
  __int64 v38; // rax
  AgSingleton<AgInputManager> *v39; // rdi
  AgSingleton<AgInputManager> *v40; // rbx
  AgSingleton<AgInputManager> *v41; // rbp
  unsigned __int64 *v42; // rdx
  AgSingleton<AgInputManager>_vtbl *v43; // rcx
  AgSingleton<AgInputManager>_vtbl *v44; // rax
  unsigned __int64 v45; // rdi
  AgSingleton<AgInputManager>_vtbl *v46; // rcx
  void (__fastcall **v47)(AgSingleton<AgInputManager> *); // rdi
  _QWORD *v48; // rdx
  int destructor; // [rsp+20h] [rbp-C8h]
  int posScale; // [rsp+28h] [rbp-C0h]
  int v52; // [rsp+30h] [rbp-B8h]
  int v53; // [rsp+38h] [rbp-B0h]
  int v54; // [rsp+40h] [rbp-A8h]
  int v55; // [rsp+48h] [rbp-A0h]
  int v56; // [rsp+50h] [rbp-98h]
  int v57; // [rsp+58h] [rbp-90h]
  int v58; // [rsp+60h] [rbp-88h]
  unsigned __int64 _Count[2]; // [rsp+78h] [rbp-70h] BYREF
  AgPointer<KOFApplication> v60; // [rsp+88h] [rbp-60h] BYREF
  AgDelegate1<AgControllerAddedEvent const &,void> _Val; // [rsp+98h] [rbp-50h] BYREF
  int v62; // [rsp+A8h] [rbp-40h]
  AgSingleton<AgInputManager> *v63; // [rsp+B0h] [rbp-38h]
  int v64; // [rsp+B8h] [rbp-30h]
  AgSingleton<AgInputManager> *v65; // [rsp+C0h] [rbp-28h]
  EffectTaskManager *v66; // [rsp+F0h] [rbp+8h]

  v5 = *(_QWORD *)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 16i64) = w;
  *(_DWORD *)(v5 + 20) = h;
  *(float *)(v5 + 24) = scale;
  *(_DWORD *)(v5 + 52) = 1065353216;
  *(float *)(v5 + 56) = scale;
  *(_DWORD *)(v5 + 60) = 1065353216;
  *(_DWORD *)(v5 + 64) = 1065353216;
  v6 = (int)(float)((float)w * scale);
  *(_DWORD *)(v5 + 28) = v6;
  v7 = (float)h * scale;
  *(_DWORD *)(v5 + 32) = (int)v7;
  *(_DWORD *)(v5 + 36) = v6;
  *(_DWORD *)(v5 + 40) = (int)v7;
  *(_DWORD *)(v5 + 2182368) = 0;
  v8 = *(AgReferenceCount **)(v5 + 2182376);
  v9 = *(KOFApplication **)(v5 + 2182384);
  *(_QWORD *)(v5 + 2182376) = 0i64;
  *(_QWORD *)(v5 + 2182384) = 0i64;
  v60.m_ref = v8;
  v60.m_ptr = v9;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v60);
  v10 = (OGLRender *)operator new(0xBFFC8ui64);
  OGLRender::OGLRender(v10, v11);
  *(_QWORD *)(v5 + 80) = v12;
  v13 = (Graphics *)operator new(0x88ui64);
  Graphics::Graphics(v13, *(OGLRender **)(v5 + 80), v4);
  *(_QWORD *)(v5 + 104) = v14;
  v15 = operator new(0x40ui64);
  v16 = *(_QWORD *)(v5 + 104);
  *v15 = &GraphicsOpt::`vftable';
  *(_QWORD *)((char *)v15 + 44) = 0i64;
  *(_QWORD *)((char *)v15 + 52) = 0i64;
  v15[2] = 0i64;
  *((_DWORD *)v15 + 7) = 1065353216;
  *((_DWORD *)v15 + 6) = 1065353216;
  *((_BYTE *)v15 + 40) = 0;
  v15[1] = v16;
  *(_QWORD *)(v5 + 112) = v15;
  v17 = (extension::GameScript *)operator new(0x20ui64);
  v17->m_ScriptContext.m_Context = 0i64;
  v17->m_ScriptContext.m_pMemoryAllocator = 0i64;
  v17->m_ScriptContext.m_pAllocatorMemory = 0i64;
  v17->m_CoroutineRefIndex = -2;
  extension::SharedLuaContext::Open(&v17->m_ScriptContext);
  m_Context = v17->m_ScriptContext.m_Context;
  v19 = lua_newthread(v17->m_ScriptContext.m_Context);
  extension::GameScript::InitGameThread(v17, v19);
  v17->m_CoroutineRefIndex = luaL_ref(m_Context, v20);
  extension::InstallGFxInterface(v21);
  *(_QWORD *)(v5 + 2507496) = v17;
  v22 = operator new[](0xD8ui64);
  v23 = 13i64;
  if ( v22 )
  {
    *v22 = 13i64;
    v24 = v22 + 1;
    `eh vector constructor iterator'(
      v22 + 1,
      0x10ui64,
      0xDui64,
      (void (__fastcall *)(void *))extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>,
      (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
  }
  else
  {
    v24 = 0i64;
  }
  *(_QWORD *)(v5 + 2197352) = v24;
  v25 = 0i64;
  do
  {
    extension::BasicFutureObject<Image,extension::FutureImageOption>::reset((extension::BasicFutureObject<Image,extension::FutureImageOption> *)(v25 + *(_QWORD *)(v5 + 2197352)));
    v25 += 16i64;
    --v23;
  }
  while ( v23 );
  AppMain::setDrawScale((AppMain *)v5, v26, v27, v28, *(float *)(v5 + 24), 1.0);
  v29 = *(float *)(v5 + 24);
  *(float *)(v5 + 60) = v29 + v29;
  *(float *)(v5 + 64) = v29;
  v30 = *(_QWORD *)(v5 + 112);
  *(float *)(v30 + 32) = v29 + v29;
  *(float *)(v30 + 36) = v29;
  Memory::Startup();
  v31 = Mtx_lock((_Mtx_internal_imp_t *)&g_mutex_fixbuf);
  if ( v31 )
    std::_Throw_C_error(v31);
  if ( !CFixMemory::p_singleton )
    CFixMemory::p_singleton = (CFixMemory *)operator new(1ui64);
  v32 = Mtx_unlock((_Mtx_internal_imp_t *)&g_mutex_fixbuf);
  if ( v32 )
    std::_Throw_C_error(v32);
  makecrctable1();
  v33 = (Fw::ResourceManager::Work *)aligned_malloc(0x10800ui64, 0x20ui64);
  Fw::ResourceManager::m_pWork = v33;
  if ( v33 )
  {
    memset(v33, 0, 0x10800ui64);
    Fw::ResourceManager::m_MaxNum = 256;
  }
  AppMain::initializeNetwork((AppMain *)v5);
  AppMain::ApplicationInit((AppMain *)v5);
  *(_DWORD *)(v5 + 7352) = 1;
  AppMain::createFont((AppMain *)v5, v34, v35, v36, destructor, posScale, v52, v53, v54, v55, v56, v57, v58);
  v37 = *(_QWORD *)(v5 + 10184);
  *(_QWORD *)(v5 + 72) = v37;
  if ( v37 )
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 112) + 8i64) + 8i64) = v37;
  *(_DWORD *)(v5 + 2507512) = 0;
  OGLRender::setConfig(
    *(OGLRender **)(v5 + 80),
    *(_DWORD *)(v5 + 28),
    (unsigned __int8 *)*(unsigned int *)(v5 + 32),
    (float)*(int *)(v5 + 16),
    (float)*(int *)(v5 + 20));
  AppMain::battleShaderLoad((AppMain *)v5);
  v66 = (EffectTaskManager *)operator new(0x1298ui64);
  EffectTaskManager::EffectTaskManager(v66);
  *(_QWORD *)(v5 + 2507504) = v38;
  v39 = AgSingleton<AgInputManager>::ms_instance;
  v40 = AgSingleton<AgInputManager>::ms_instance + 20;
  _Val.m_Closure.m_pFunction = (void (__fastcall *)(detail::GenericClass *))AppMain::onControllerAdded;
  _Val.m_Closure.m_pthis = (detail::GenericClass *)v5;
  v63 = AgSingleton<AgInputManager>::ms_instance + 20;
  EnterCriticalSection((LPCRITICAL_SECTION)&AgSingleton<AgInputManager>::ms_instance[20]);
  v62 = 1;
  std::vector<AgDelegate1<AgControllerAddedEvent const &,void>>::push_back(
    (std::vector<AgDelegate1<AgControllerAddedEvent const &,void>> *)&v40[5],
    &_Val);
  LeaveCriticalSection((LPCRITICAL_SECTION)v40);
  v41 = v39 + 36;
  _Count[1] = (unsigned __int64)AppMain::onControllerRemoved;
  _Count[0] = v5;
  v65 = v39 + 36;
  EnterCriticalSection((LPCRITICAL_SECTION)&v39[36]);
  v64 = 1;
  v43 = v39[42].__vftable;
  if ( _Count >= (unsigned __int64 *)v43
    || (v44 = v39[41].__vftable, v42 = _Count, v44 > (AgSingleton<AgInputManager>_vtbl *)_Count) )
  {
    if ( v43 == v39[43].__vftable )
      std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>>::_Reserve(
        (std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>> *)&v39[41],
        (unsigned __int64)v42);
    v48 = &v39[42].~AgSingleton<AgInputManager>;
    if ( v48 )
    {
      v48[1] = AppMain::onControllerRemoved;
      *v48 = v5;
    }
  }
  else
  {
    v45 = (char *)_Count - (char *)v44;
    if ( v43 == v41[7].__vftable )
      std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>>::_Reserve(
        (std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>> *)&v41[5],
        (unsigned __int64)_Count);
    v46 = v41[6].__vftable;
    v47 = (void (__fastcall **)(AgSingleton<AgInputManager> *))((char *)&v41[5].~AgSingleton<AgInputManager>
                                                              + (v45 & 0xFFFFFFFFFFFFFFF0ui64));
    if ( v46 )
    {
      v46->~AgSingleton<AgInputManager> = 0i64;
      v46->onSingletonInit = 0i64;
      v46->onSingletonInit = (int (__fastcall *)(AgSingleton<AgInputManager> *))v47[1];
      v46->~AgSingleton<AgInputManager> = *v47;
    }
  }
  v41[6].__vftable = (AgSingleton<AgInputManager>_vtbl *)((char *)v41[6].__vftable + 16);
  LeaveCriticalSection((LPCRITICAL_SECTION)v41);
  *(_BYTE *)(v5 + 2507525) = 0;
  return 1i64;
}

void __fastcall AppMain::initializeNetwork(AppMain *this)
{
  SteamNameCache *v2; // rax
  Fw::ContentCommon *Instance; // rax
  __int64 v4; // rdx
  int v5; // eax
  Fw::ScoreGameInfo **p_m_pGameInfo; // rax
  __int64 **p_m_pVariableArray; // rax
  AgSingleton<AgAchievementsManager> *v8; // rax
  AgSingleton<AgAchievementsManager> *v9; // rbx
  std::vector<AgString> *CommandArguments; // rbx
  const char (*v11)[15]; // r8
  std::integral_constant<bool,0> v12; // r9
  AgString *v13; // rax
  const char *CString; // rax
  __int64 v15; // rdx
  std::string *MyName; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  SteamNameCache *v19; // rax
  AgAchievementsManager *v20; // rax
  SteamNameCache *v21; // [rsp+40h] [rbp+8h] BYREF

  Fw::ThreadSystem::Startup((Fw::HeapMemory *)this);
  v21 = (SteamNameCache *)operator new(0x58ui64);
  SteamNameCache::SteamNameCache(v21);
  SteamNameCache::ms_instance = v2;
  Instance = Fw::ContentCommon::GetInstance();
  Instance->m_KeyStatus[0] = E_STATUS_NON_EXTRA;
  Instance->m_KeyStatus[1] = E_STATUS_COMPLETE;
  Instance->m_KeyStatus[2] = E_STATUS_COMPLETE;
  Fw::ContentCommon::CheckAddContent(Instance, v4);
  Fw::NetworkStatusCommon::m_OnlineFlag = AgSilverware::steamAvailable() != 0;
  v5 = Fw::RankingCommon::m_TitleContextId;
  if ( !Fw::RankingCommon::m_TitleContextId )
    v5 = 1;
  Fw::RankingCommon::m_TitleContextId = v5;
  Fw::RankingRead::m_CycleWorkHandle = 0x1000000;
  Fw::RankingRead::m_pWorkFirst = 0i64;
  Fw::RankingRead::m_pWorkLast = 0i64;
  p_m_pGameInfo = &Fw::RankingWrite::m_pWork[0].m_pGameInfo;
  do
  {
    *(p_m_pGameInfo - 4) = 0i64;
    *p_m_pGameInfo = 0i64;
    p_m_pGameInfo[3] = 0i64;
    *((_DWORD *)p_m_pGameInfo - 2) = 0;
    p_m_pGameInfo += 21;
  }
  while ( (__int64)p_m_pGameInfo < (__int64)&Fw::VoiceChat::m_VoiceQos[0].channel );
  Fw::RankingWrite::m_CycleWorkHandle = 0x2000000;
  Fw::TusRead::m_CycleWorkHandle = 0x1000000;
  Fw::TusRead::m_pWorkFirst = 0i64;
  Fw::TusRead::m_pWorkLast = 0i64;
  p_m_pVariableArray = &Fw::TusWrite::m_pWork[0].m_pVariableArray;
  do
  {
    *((_DWORD *)p_m_pVariableArray - 8) = 0;
    *(p_m_pVariableArray - 2) = 0i64;
    *p_m_pVariableArray = 0i64;
    *((_BYTE *)p_m_pVariableArray + 12) = 0;
    p_m_pVariableArray += 7;
  }
  while ( (__int64)p_m_pVariableArray < (__int64)&OGLModel::m_ComputeShaderTbl );
  Fw::TusWrite::m_CycleWorkHandle = 0x2000000;
  Fw::ImeTarget::m_IMEKeyboard.m_Status = 0;
  Fw::ImeTarget::m_IMEPad.m_Status = 0;
  Fw::ImeTarget::m_currentIME = IME_GAMEPAD;
  if ( !AgSingleton<AgAchievementsManager>::ms_instance )
  {
    v21 = (SteamNameCache *)operator new(0x50ui64);
    AgAchievementsManager::AgAchievementsManager((AgAchievementsManager *)v21);
    v9 = v8;
    v8->onSingletonInit(v8);
    AgSingleton<AgAchievementsManager>::ms_instance = v9;
  }
  CommandArguments = AgSystemManager::getCommandArguments();
  v13 = (AgString *)std::_Find_unchecked1<AgString const *,char [15]>(
                      CommandArguments->_Mypair._Myval2._Myfirst,
                      CommandArguments->_Mypair._Myval2._Mylast,
                      v11,
                      v12);
  if ( v13 != CommandArguments->_Mypair._Myval2._Mylast )
  {
    CString = AgString::getCString(v13 + 1);
    Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)atoi64(CString);
  }
  if ( AgSilverware::steamAvailable() )
  {
    MyName = SteamNameCache::getMyName(SteamNameCache::ms_instance, v15);
    AgString::operator=(&Fw::NetworkCommon::m_NpId.handle, MyName->_Mypair._Myval2._Bx._Buf);
    v18 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v17);
    Fw::NetworkCommon::m_NpOnlineId.data = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, SteamNameCache **))(**(_QWORD **)(v18 + 8) + 16i64))(
                                                        *(_QWORD *)(v18 + 8),
                                                        &v21);
  }
  Fw::NetworkCommon::m_NpInitialized = 1;
  memset(s_leaderboardHandle, 0, sizeof(s_leaderboardHandle));
  s_leaderboardFindId = -1;
  v19 = (SteamNameCache *)operator new(0x28ui64);
  v21 = v19;
  LOBYTE(v19->m_requests._Mypair._Myval2._Mylast) = 0;
  v19->m_requests._Mypair._Myval2._Myfirst = (CSteamID *)&CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t>::`vftable';
  v19->m_requests._Mypair._Myval2._Myend = 0i64;
  v19->m_reverseLUT._Mypair._Myval2._Myval2._Myhead = 0i64;
  v19->m_reverseLUT._Mypair._Myval2._Myval2._Mysize = 0i64;
  HIDWORD(v19->m_requests._Mypair._Myval2._Mylast) = 1104;
  s_leaderboardCallbackHandler = (LeaderboardCallbackHandler *)v19;
  this->m_OnlineStep = UI_ONLINE_NETWORK_INIT;
  this->m_OnlineContexStop = 0;
  *(_WORD *)&this->m_bInviteFadeOut = 0;
  *(_WORD *)&this->m_bNotificationRunning = 0;
  *(_DWORD *)&this->m_bChatLockMsgFinish = 0;
  this->windowErrorNo = 0;
  this->invitationState = 0;
  *(_WORD *)&this->m_bInvitePermit = 0;
  this->m_bPlayTogetherState = 0;
  this->m_NetDisconnectNextMainMenuFlag = 0;
  if ( !clasChkDisconOnlineSv::_instance )
  {
    v20 = (AgAchievementsManager *)operator new(2ui64);
    v21 = (SteamNameCache *)v20;
    LOWORD(v20->AgSingleton<AgAchievementsManager>::__vftable) = 0;
    clasChkDisconOnlineSv::_instance = (clasChkDisconOnlineSv *)v20;
  }
  *(_QWORD *)&m_online_proffile_data.find = 0i64;
  *(_QWORD *)&m_online_proffile_data.m_MyNetWorkTitle = 0i64;
  *(_QWORD *)&m_online_proffile_data.m_Rank = 0i64;
  *(_QWORD *)&m_online_proffile_data.m_RankMatchWin = 0i64;
  *(_QWORD *)&m_online_proffile_data.m_RankMatchDraw = 0i64;
  *(_QWORD *)&m_online_proffile_data.m_RankMatchMaxWins = 0i64;
  *(_QWORD *)&m_online_proffile_data.m_RankMatchLosePublication = 0i64;
  m_online_load_state = ONLINEPROFILE_LOAD_STATE_NONE;
}

void __fastcall AppMain::onControllerAdded(AppMain *this, const AgControllerAddedEvent *e)
{
  AppMain *v3; // rcx
  GfxManager *v4; // rax
  const char *CString; // rdi
  LANGUAGE_MODE v6; // ebx
  extension::TranslateTable *v7; // rax
  const char *Text; // rbx
  LANGUAGE_MODE v9; // ebx
  extension::TranslateTable *v10; // rax
  const char *v11; // r8
  char *v12; // rcx
  _BYTE *v13; // rax
  __int64 v14; // rdx
  char v15; // cl
  LANGUAGE_MODE v16; // ebx
  extension::TranslateTable *v17; // rax
  const char *v18; // rdi
  LANGUAGE_MODE v19; // ebx
  extension::TranslateTable *v20; // rax
  const char *v21; // rax
  GfxManager *v22; // rax
  _BYTE v23[32]; // [rsp+0h] [rbp-138h] BYREF
  AgStringRef v24; // [rsp+30h] [rbp-108h] BYREF
  __int64 v25; // [rsp+40h] [rbp-F8h]
  char v26[13]; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v27; // [rsp+55h] [rbp-E3h]
  __int64 v28; // [rsp+5Dh] [rbp-DBh]
  __int64 v29; // [rsp+65h] [rbp-D3h]
  __int64 v30; // [rsp+6Dh] [rbp-CBh]
  int v31; // [rsp+75h] [rbp-C3h]
  char v32; // [rsp+79h] [rbp-BFh]
  char _Buffer[160]; // [rsp+80h] [rbp-B8h] BYREF

  v25 = -2i64;
  AppMain::SaveDataLoaded_Steam(this, 0);
  AppMain::callNotifyDeviceHotswap(v3);
  v4 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v24.m_text = (const char *)operator new(0x108ui64);
    GfxManager::GfxManager((GfxManager *)v24.m_text);
    GfxManager::instance = v4;
  }
  if ( v4->m_GFXMovie.m_movieProxy.m_ptr )
  {
    AgStringRef::AgStringRef(&v24, &e->controller.m_ptr->m_name);
    CString = (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)&v24);
    v6 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
    v7 = extension::TranslateTable::Instance();
    Text = extension::TranslateTable::getText(v7, CString, v6);
    strcpy(v26, "0 - ");
    *(_QWORD *)&v26[5] = 0i64;
    v27 = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    v30 = 0i64;
    v31 = 0;
    v32 = 0;
    v26[0] = AgInputManager::getPairedUserId(
               (AgInputManager *)AgSingleton<AgInputManager>::ms_instance,
               e->controller.m_ptr->m_id)
           + 49;
    if ( *Text )
    {
      v13 = &v23[71];
      do
        ++v13;
      while ( *v13 );
      v14 = 0i64;
      do
      {
        v15 = Text[v14];
        v13[v14++] = v15;
      }
      while ( v15 );
    }
    else
    {
      v9 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
      v10 = extension::TranslateTable::Instance();
      v11 = extension::TranslateTable::getText(v10, "$GENERIC_CONTROLLER_NAME", v9);
      v12 = &v23[71];
      do
        ++v12;
      while ( *v12 );
      strcpy(v12, v11);
    }
    v16 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
    v17 = extension::TranslateTable::Instance();
    v18 = extension::TranslateTable::getText(v17, "$POPUP_CONTROLLER_CONNECTED_BEFORE", v16);
    v19 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
    v20 = extension::TranslateTable::Instance();
    v21 = extension::TranslateTable::getText(v20, "$POPUP_CONTROLLER_CONNECTED_AFTER", v19);
    sprintf(_Buffer, "%s%s%s", v18, v26, v21);
    v22 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v24.m_text = (const char *)operator new(0x108ui64);
      GfxManager::GfxManager((GfxManager *)v24.m_text);
      GfxManager::instance = v22;
    }
    GfxManager::GFv_AddNotification(v22, _Buffer, ICON_NO_NONE);
  }
}

// attributes: thunk
void __fastcall AppMain::onControllerRemoved(AppMain *this, const AgControllerRemovedEvent *e)
{
  AppMain::callNotifyDeviceHotswap(this);
}

void __fastcall onDisconnectNoticeClosed(int cursor)
{
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507528i64) = 0;
}

void __fastcall AppMain::onExit(AppMain *this)
{
  HDC DC; // rax
  HDC v2; // rbx

  if ( g_deviceSupportsGamma )
  {
    DC = GetDC(0i64);
    v2 = DC;
    if ( DC )
    {
      SetDeviceGammaRamp(DC, g_originalGammaRamp);
      ReleaseDC(0i64, v2);
    }
  }
  if ( Fw::ResourceManager::m_pWork )
  {
    aligned_free(Fw::ResourceManager::m_pWork);
    Fw::ResourceManager::m_pWork = 0i64;
  }
  Fw::PhysicalHeapMemory::destroy(&g_NetworkHeap);
  Fw::PhysicalHeapMemory::destroy(&g_EffectHeap0);
  Fw::PhysicalHeapMemory::destroy(&g_EffectHeap1);
  Fw::PhysicalHeapMemory::destroy(&g_GlobalHeap);
}

void __fastcall onNetworkErrorClosed(int cursor, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  AppMain *v10; // rcx

  v3 = *(_QWORD *)&AppMain::pApp;
  v4 = 100;
  v5 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507528i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507528i64) = 0;
  *(_BYTE *)(v3 + 2507540) = 0;
  g_NetworkManager.rank_traning_wait.stageID = STAGE_ID_NONE;
  if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_RANK && (v5 == 1 || v5 == 13) )
  {
    v4 = 128;
  }
  else if ( v5 == 14 || *(_BYTE *)(v3 + 2507560) )
  {
    v4 = 16;
  }
  v6 = *(_DWORD *)(v3 + 7352);
  *(_BYTE *)(v3 + 2507560) = 0;
  v7 = v6 - 18;
  if ( !v7 )
  {
    NetManager::ChangeState(&g_NetworkManager, NET_STATE_TOP, a3);
    v9 = 16;
LABEL_18:
    AppMain::SceneJump(*(AppMain **)&AppMain::pApp, v9);
    return;
  }
  v8 = v7 - 136;
  if ( v8 )
  {
    if ( v8 == 25 )
    {
      NetManager::ChangeState(&g_NetworkManager, NET_STATE_TOP, a3);
      *(_QWORD *)(v3 + 2507456) = 255i64;
      v10 = (AppMain *)(1000 * (unsigned int)*(unsigned __int8 *)(v3 + 2507456));
      *(_BYTE *)(v3 + 2507448) = 1;
      *(_BYTE *)(v3 + 2182456) = 0;
      *(_DWORD *)(v3 + 7376) = -1;
      *(_DWORD *)(v3 + 7368) = v4;
      *(_DWORD *)(v3 + 7352) = 0;
      *(_DWORD *)(v3 + 2507468) = 181;
      *(_WORD *)(v3 + 2507472) = 0;
      *(_DWORD *)(v3 + 2507452) = 30;
      *(_DWORD *)(v3 + 2507464) = (int)v10 / 30;
      *(_BYTE *)(v3 + 2507474) = 0;
      *(_DWORD *)(v3 + 7364) = 170;
      AppMain::StopBGMUtil(v10, 0.5);
    }
    else
    {
      NetManager::ChangeState(&g_NetworkManager, NET_STATE_TOP, a3);
    }
    v9 = v4;
    goto LABEL_18;
  }
  NetManager::ChangeState(&g_NetworkManager, NET_STATE_TOP, a3);
  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_TRAINING )
    AppMain::SceneJump(*(AppMain **)&AppMain::pApp, 156);
  else
    AppMain::SceneJump(*(AppMain **)&AppMain::pApp, 136);
}

void __fastcall onNetworkErrorClosedBackRoom(int cursor)
{
  __int64 v1; // rbx
  extension::SoundManager *v2; // rax
  extension::SoundManager *v3; // [rsp+48h] [rbp+10h]

  v1 = *(_QWORD *)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507528i64) = 0;
  if ( *(_DWORD *)(v1 + 7352) == 179 )
  {
    *(_BYTE *)(v1 + 2507448) = 1;
    *(_BYTE *)(v1 + 2182456) = 0;
    AppMain::SendRoomBack((AppMain *)v1, 1);
    *(_DWORD *)(v1 + 7376) = -1;
    *(_DWORD *)(v1 + 7368) = 148;
    *(_DWORD *)(v1 + 7352) = 0;
    *(_DWORD *)(v1 + 2507468) = 181;
    *(_WORD *)(v1 + 2507472) = 0;
    *(_DWORD *)(v1 + 2507452) = 30;
    *(_QWORD *)(v1 + 2507456) = 255i64;
    *(_DWORD *)(v1 + 2507464) = 1000 * *(unsigned __int8 *)(v1 + 2507456) / 30;
    *(_BYTE *)(v1 + 2507474) = 0;
    *(_DWORD *)(v1 + 7364) = 170;
    v2 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v3 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v3);
      extension::SoundManager::the_instance = v2;
    }
    extension::SoundManager::stopBGM(v2, 0.5);
  }
  else
  {
    AppMain::SendRoomBack((AppMain *)v1, 1);
  }
  AppMain::SceneJump(*(AppMain **)&AppMain::pApp, 148);
}

void __fastcall AppMain::onResume(AppMain *this, extension::AsyncStatus::Step a2)
{
  Image *pSystemTex; // rax
  __int64 i; // rbx
  extension::AsyncContent<Image> *m_ptr; // rdi
  extension::AsyncContent<Image> *v6; // rdi
  Image *Myval2; // rax
  TexString **m_TexStr; // rax
  __int64 v9; // rdx

  pSystemTex = this->pSystemTex;
  if ( pSystemTex )
    pSystemTex->m_bResume = 1;
  for ( i = 0i64; i < 13; ++i )
  {
    m_ptr = this->m_MenuImgTbl[i].m_body.m_ptr->m_content.m_ptr;
    if ( m_ptr && !m_ptr->m_isDataReleased )
    {
      if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&m_ptr->m_status, a2);
      if ( m_ptr->m_data._Mypair._Myval2 )
      {
        v6 = this->m_MenuImgTbl[i].m_body.m_ptr->m_content.m_ptr;
        if ( !v6 || v6->m_isDataReleased )
        {
          Myval2 = 0i64;
        }
        else
        {
          if ( (v6->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v6->m_status, a2);
          Myval2 = v6->m_data._Mypair._Myval2;
        }
        Myval2->m_bResume = 1;
      }
    }
  }
  m_TexStr = this->m_TexStr;
  v9 = 12i64;
  do
  {
    if ( *m_TexStr )
      (*m_TexStr)->m_bResume = 1;
    ++m_TexStr;
    --v9;
  }
  while ( v9 );
  this->iAndroidFlg |= 0x40u;
  SetResumeWaitCount = 10;
}

void __fastcall AppMain::onRunDraw(AppMain *this)
{
  Graphics *v2; // rcx
  Graphics *g; // rcx
  Scene_RoomMember *pScene; // rdi
  int v5; // edx
  int v6; // er8
  RoomMembers *m_pRoomMembers; // rcx
  __int64 v8; // rax
  EasyIndicator *Instance; // rax

  if ( this->m_FrameCnt4ThreadCheck == 30 * (this->m_FrameCnt4ThreadCheck / 30) )
    Fw::ContentCommon::GetInstance();
  ++this->m_FrameCnt4ThreadCheck;
  if ( this->m_bExitFuncWaitFrame )
  {
    if ( this->m_RequestCupture )
    {
      AppMain::CreateCapture(this);
      this->m_RequestCupture = 0;
    }
    GraphicsOpt::lock(this->g);
    Graphics::clearScreen(v2, -16777216);
    g = this->g->g;
    g->m_Operator = 0;
    g->m_SrcRatio = 255;
    g->m_DstRatio = 255;
    if ( !g->m_bPreDrawMode )
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
    AppMain::DrawCapture(this);
  }
  else
  {
    AppMain::SceneFunc(this, this->m_FuncBT);
    AppMain::FadeDraw(this);
    GraphicsOpt::lock(this->g);
    pScene = this->m_onlineRoomMemberParams.pScene;
    if ( pScene )
    {
      if ( !pScene->isError(this->m_onlineRoomMemberParams.pScene) )
      {
        m_pRoomMembers = pScene->m_pRoomMembers;
        if ( m_pRoomMembers )
          RoomMembers::draw(m_pRoomMembers, v5, v6);
      }
    }
    Graphics::drawStack(this->g->g);
    GfxManager::getInstance();
    if ( *(_QWORD *)(v8 + 40) && *(_DWORD *)(v8 + 240) == 1 )
      extension::GFXIMovie::render((extension::GFXIMovie *)(v8 + 40));
    AppMain::SceneFunc(this, this->m_FuncCT);
    GraphicsOpt::lock(this->g);
    Instance = EasyIndicator::getInstance();
    EasyIndicator::Draw(Instance, this->g);
  }
  Graphics::drawStack(this->g->g);
  if ( this->m_RequestCupture )
  {
    AppMain::CreateCapture(this);
    this->m_RequestCupture = 0;
  }
  this->g->g->m_pRender->m_iRenderStackCount2D = 0;
  *(_QWORD *)&this->m_iKeyTrigger = 0i64;
  this->m_iKeyTrigger2 = 0;
}

void __fastcall AppMain::onRunExe(AppMain *this, float a2)
{
  EasyIndicator *v3; // rdi
  UserGameOperation *v4; // rax
  GfxManager *v5; // rax
  Scene_RoomMember *pScene; // rdi
  UserGameOperation *v7; // rax
  __int64 v8; // rcx
  signed int v9; // edx
  Graphics *v10; // rcx
  int m_FadeExitFunc; // edx
  int v12; // edx
  extension::AssetCacheExpiredEntryCleaner *v13; // rax
  SoundVolumeModulation *Instance; // rax
  extension::SoundManager *v15; // rax
  extension::GFXIFontManager *v16; // rax
  GfxManager *v17; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v18; // [rsp+40h] [rbp+8h]

  v3 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v3 = (EasyIndicator *)operator new(0x150ui64);
    memset(v3->m_IndicatorStack, 0, sizeof(v3->m_IndicatorStack));
    v3->m_Image = 0i64;
    v3->m_DrawCount = 0;
    EasyIndicator::instance = v3;
  }
  ++v3->m_DrawCount;
  v3->m_StackCount = 0;
  v4 = UserGameOperation::Instance();
  UserGameOperation::update(v4);
  AppMain::SaveDataFrameUpdate(this);
  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v17 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v17);
    GfxManager::instance = v5;
  }
  GfxManager::UpdateLoadMovie(v5);
  pScene = this->m_onlineRoomMemberParams.pScene;
  if ( pScene && !pScene->isError(this->m_onlineRoomMemberParams.pScene) && pScene->m_pRoomMembers )
  {
    if ( pScene->m_bBattleMode )
      Scene_RoomMember::refreshRoomMembersState(pScene);
    else
      Scene_RoomMember::setupRoomMembers(pScene);
    RoomMembers::update(pScene->m_pRoomMembers, a2);
  }
  if ( this->m_bInvitePermit )
  {
    v7 = UserGameOperation::Instance();
    UserGameOperation::clear(v7);
  }
  v8 = *(_QWORD *)&AppMain::pApp;
  if ( (*(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2507492i64) & 0x10) != 0 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507492i64) & 0xFFFFFFEF;
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507492i64) = v9;
    AppMain::onResume(this, (extension::AsyncStatus::Step)v9);
    v8 = *(_QWORD *)&AppMain::pApp;
  }
  if ( (*(_BYTE *)(v8 + 2507492) & 0x40) != 0 )
  {
    *(_QWORD *)&this->m_iKeyPress = 0i64;
    *(_QWORD *)&this->m_iKeyRelease = 0i64;
    this->m_iKeyRelease2 = 0;
    AppMain::ResumeWait(this);
    Graphics::clearScreen(v10, 0);
    GraphicsOpt::lock(this->g);
    Graphics::drawStack(this->g->g);
    glFlush();
  }
  else
  {
    if ( !this->m_FadeST )
    {
      m_FadeExitFunc = this->m_FadeExitFunc;
      if ( m_FadeExitFunc )
      {
        if ( this->m_bExitFuncWaitFrame )
        {
          AppMain::SceneFunc(this, m_FadeExitFunc);
          this->m_FadeExitFunc = 0;
          this->m_bExitFuncWaitFrame = 0;
        }
        else
        {
          this->m_bExitFuncWaitFrame = 1;
        }
      }
    }
    AppMain::UpdateInputDevice(this);
    AppMain::UpdateNetworkError(this);
    AppMain::InvitedTransInit(this);
    if ( !this->m_bExitFuncWaitFrame )
    {
      AppMain::SceneFunc(this, this->m_FuncST);
      AppMain::SceneFunc(this, this->m_FuncFT);
      CTaskSystem::Caller(&this->m_TS, v12);
    }
    *(_OWORD *)this->ModelRoomSettings.mInvView.m = *(_OWORD *)this->ModelRoomSettings.mView.m;
    *(_OWORD *)&this->ModelRoomSettings.mInvView.m[4] = *(_OWORD *)&this->ModelRoomSettings.mView.m[4];
    *(_OWORD *)&this->ModelRoomSettings.mInvView.m[8] = *(_OWORD *)&this->ModelRoomSettings.mView.m[8];
    *(_OWORD *)&this->ModelRoomSettings.mInvView.m[12] = *(_OWORD *)&this->ModelRoomSettings.mView.m[12];
    OGLMatrix::inverse(&this->ModelRoomSettings.mInvView);
    v13 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
    v13->CleanupExpiredEntry(v13);
    Instance = anonymous_namespace_::SoundVolumeModulation::GetInstance();
    anonymous_namespace_::SoundVolumeModulation::update(Instance);
    v15 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v18 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v18);
      extension::SoundManager::the_instance = v15;
    }
    extension::SoundManager::frameUpdate(v15);
    v16 = extension::GFXIFontManager::Instance();
    extension::GFXIFontManager::update(v16);
    AppMain::updateNetwork(this);
  }
}

void __fastcall AppMain::onRunExe_AG_Partial(AppMain *this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  if ( !this->m_bExitFuncWaitFrame )
  {
    v3 = this->m_FuncST - 42;
    if ( v3 )
    {
      v4 = v3 - 137;
      if ( v4 )
      {
        if ( v4 == 17 )
          AppMain::ST_PreFightFaceOffLoop(this);
      }
      else
      {
        AppMain::ST_BattleMainLoopPartial(this);
      }
    }
    else
    {
      AppMain::ST_ResultLoopPartial(this);
    }
    CTaskSystem::Caller(&this->m_TS, a2);
  }
  v5 = *(_OWORD *)&this->ModelRoomSettings.mView.m[4];
  *(_OWORD *)this->ModelRoomSettings.mInvView.m = *(_OWORD *)this->ModelRoomSettings.mView.m;
  v6 = *(_OWORD *)&this->ModelRoomSettings.mView.m[8];
  *(_OWORD *)&this->ModelRoomSettings.mInvView.m[4] = v5;
  v7 = *(_OWORD *)&this->ModelRoomSettings.mView.m[12];
  *(_OWORD *)&this->ModelRoomSettings.mInvView.m[8] = v6;
  *(_OWORD *)&this->ModelRoomSettings.mInvView.m[12] = v7;
  OGLMatrix::inverse(&this->ModelRoomSettings.mInvView);
}

void __fastcall AppMain::processCommandLine(AppMain *this)
{
  std::vector<AgString> *CommandArguments; // rax
  const AgString *Myfirst; // rbx
  AgString *Mylast; // rdi
  bool v5; // si
  AgString s2; // [rsp+28h] [rbp-20h] BYREF

  CommandArguments = AgSystemManager::getCommandArguments();
  Myfirst = CommandArguments->_Mypair._Myval2._Myfirst;
  Mylast = CommandArguments->_Mypair._Myval2._Mylast;
  if ( CommandArguments->_Mypair._Myval2._Myfirst != Mylast )
  {
    do
    {
      AgString::AgString(&s2, "-nointro", -1);
      v5 = operator==(Myfirst, &s2);
      AgString::~AgString(&s2);
      if ( v5 )
        this->m_noIntro = 1;
      ++Myfirst;
    }
    while ( Myfirst != Mylast );
  }
}

void __fastcall std::vector<AgDelegate1<AgControllerAddedEvent const &,void>>::push_back(
        std::vector<AgDelegate1<AgControllerAddedEvent const &,void>> *this,
        const AgDelegate1<AgControllerAddedEvent const &,void> *_Val)
{
  AgDelegate1<AgControllerAddedEvent const &,void> *Mylast; // rax
  const AgDelegate1<AgControllerAddedEvent const &,void> *v3; // rdi
  AgDelegate1<AgControllerAddedEvent const &,void> *Myfirst; // rcx
  signed __int64 v6; // rdi
  AgDelegate1<AgControllerAddedEvent const &,void> *v7; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v3 = _Val;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgDelegate1<AgControllerAddedEvent const &,void>>::_Reserve(this, 1ui64);
    v7 = this->_Mypair._Myval2._Mylast;
    if ( v7 )
      goto LABEL_10;
  }
  else
  {
    v6 = (char *)_Val - (char *)Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<AgDelegate1<AgControllerAddedEvent const &,void>>::_Reserve(this, 1ui64);
    v7 = this->_Mypair._Myval2._Mylast;
    if ( v7 )
    {
      v3 = (AgDelegate1<AgControllerAddedEvent const &,void> *)((char *)this->_Mypair._Myval2._Myfirst
                                                              + (v6 & 0xFFFFFFFFFFFFFFF0ui64));
LABEL_10:
      v7->m_Closure.m_pthis = 0i64;
      v7->m_Closure.m_pFunction = 0i64;
      v7->m_Closure.m_pFunction = v3->m_Closure.m_pFunction;
      v7->m_Closure.m_pthis = v3->m_Closure.m_pthis;
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall extension::BasicFutureObject<extension::AsyncFileImage,void>::reset(
        extension::BasicFutureObject<extension::AsyncFileImage,void> *this)
{
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v3; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> result; // [rsp+28h] [rbp-10h] BYREF

  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty(&result);
  this->m_isNoCache = 0;
  m_ptr = result.m_ptr;
  if ( result.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&result.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = result.m_ptr;
  }
  v3 = this->m_body.m_ptr;
  this->m_body.m_ptr = m_ptr;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v3->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))v3->~RefCountableWeakSupportBase)(
        v3,
        1i64);
    m_ptr = result.m_ptr;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))result.m_ptr->~RefCountableWeakSupportBase)(
        result.m_ptr,
        1i64);
  }
}

void __fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(
        extension::BasicFutureObject<Image,extension::FutureImageOption> *this)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v3; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> result; // [rsp+28h] [rbp-10h] BYREF

  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&result);
  this->m_isNoCache = 0;
  m_ptr = result.m_ptr;
  if ( result.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&result.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = result.m_ptr;
  }
  v3 = this->m_body.m_ptr;
  this->m_body.m_ptr = m_ptr;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v3->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v3->~RefCountableWeakSupportBase)(
        v3,
        1i64);
    m_ptr = result.m_ptr;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))result.m_ptr->~RefCountableWeakSupportBase)(
        result.m_ptr,
        1i64);
  }
}

void __fastcall std::unique_ptr<CharaDataUnify>::reset(std::unique_ptr<CharaDataUnify> *this, CharaDataUnify *_Ptr)
{
  CharaDataUnify *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  this->_Mypair._Myval2 = _Ptr;
  if ( Myval2 )
  {
    CharaDataUnify::ReleaseData(Myval2);
    operator delete(Myval2, 0x68ui64);
  }
}

void __fastcall AppMain::setDrawScale(
        AppMain *this,
        int virtualW,
        int virtualH,
        unsigned __int8 scaling,
        float drawScale,
        float posScale)
{
  int m_iScreenW; // er10
  int m_iScreenH; // er9
  __m128i v8; // xmm6
  __m128i v9; // xmm7
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float m_fRealScaleX; // xmm5_4
  GraphicsOpt *g; // rax
  int v16; // edx
  float v17; // xmm0_4
  Graphics *v18; // rax

  m_iScreenW = this->m_iScreenW;
  m_iScreenH = this->m_iScreenH;
  this->m_VirtualW = GAME_SCREEN_WIDTH;
  v8 = _mm_cvtsi32_si128(this->m_VirtualW);
  this->m_VirtualH = GAME_SCREEN_HEIGHT;
  v9 = _mm_cvtsi32_si128(this->m_VirtualH);
  this->m_ScalingFlg = 1;
  v10 = _mm_cvtepi32_ps(v8).m128_f32[0];
  v11 = _mm_cvtepi32_ps(v9).m128_f32[0];
  v12 = (float)m_iScreenW / v10;
  v13 = (float)m_iScreenH / v11;
  this->m_fRealScaleX = v12;
  this->m_fRealScaleY = v13;
  if ( v12 <= v13 )
    this->m_fRealScaleY = v12;
  else
    this->m_fRealScaleX = v13;
  m_fRealScaleX = this->m_fRealScaleX;
  this->m_DrawScale = drawScale;
  this->m_PosScale = m_fRealScaleX * posScale;
  g = this->g;
  v16 = (int)(float)((float)((float)((m_iScreenW - (int)(float)((float)(v10 * drawScale) * m_fRealScaleX)) >> 1)
                           / (float)(m_fRealScaleX * drawScale))
                   * posScale);
  this->m_iAlignX = v16;
  v17 = (float)((float)((m_iScreenH - (int)(float)((float)(v11 * drawScale) * m_fRealScaleX)) >> 1)
              / (float)(m_fRealScaleX * drawScale))
      * posScale;
  this->m_iAlignY = (int)v17;
  *(_QWORD *)&g->m_iDisplayX = 0i64;
  g->m_DrawScale = m_fRealScaleX;
  g->m_PosScale = m_fRealScaleX * posScale;
  g->m_iDisplayW = m_iScreenW;
  g->m_iDisplayH = m_iScreenH;
  g->m_iAlignX = v16;
  g->m_iAlignY = (int)v17;
  v18 = g->g;
  v18->m_OriginX = v16;
  v18->m_OriginY = (int)v17;
}

void __fastcall AppMain::setInit(AppMain *this, ViewController *pBV)
{
  this->bv = 0i64;
  this->e = (EAGLView *)operator new(0x28ui64);
  *(_QWORD *)&this->m_OrgScreenW = 0i64;
  *(_QWORD *)&this->m_OrgScale = 0i64;
  *(_QWORD *)&this->m_iScreenH = 0i64;
  this->m_VirtualH = 0;
  this->m_DrawScale = 1.0;
  this->m_PosScale = 1.0;
  this->m_FontDrawScale = 1.0;
  this->m_FontPosScale = 1.0;
  this->m_ScalingFlg = 0;
  memset(this->m_pFontTmp, 0, sizeof(this->m_pFontTmp));
  this->m_pDefaultFont = 0i64;
  this->m_pRender = 0i64;
  this->m_pGraphics = 0i64;
  this->g = 0i64;
}

void __fastcall AppMain::setNonFadeSTExit(AppMain *this, int FadeST, int exitFunc)
{
  bool v3; // zf

  v3 = this->m_FuncFT == 170;
  this->iReserveScene = -1;
  this->m_FadeST = FadeST;
  this->m_FuncST = 0;
  this->m_FadeExitFunc = exitFunc;
  this->m_bExitFuncWaitFrame = 0;
  if ( !v3 )
    this->m_FuncFT = 172;
}

void __fastcall AppMain::setWindowSize(AppMain *this, int w, int h, unsigned __int8 a4)
{
  bool v6; // zf
  float m_OrgScale; // xmm1_4
  GraphicsOpt *g; // rax
  OGLRender *m_pRender; // rax
  int v10; // er11
  OGLRender *v11; // rax
  GLsizei m_Height; // er9
  GLsizei m_Width; // er8

  this->m_iScreenW = w;
  this->m_iScreenH = h;
  this->m_OrgScreenW = w;
  this->m_OrgScreenH = h;
  this->m_OrgScale = 1.0;
  AppMain::setDrawScale(this, w, h, a4, 1.0, 1.0);
  v6 = m_viewportX == 0;
  m_OrgScale = this->m_OrgScale;
  g = this->g;
  this->m_FontPosScale = m_OrgScale;
  this->m_FontDrawScale = m_OrgScale + m_OrgScale;
  g->m_FontDrawScale = m_OrgScale + m_OrgScale;
  g->m_FontPosScale = m_OrgScale;
  m_pRender = this->m_pRender;
  m_pRender->m_Width = v10;
  m_pRender->m_Height = h;
  m_pRender->m_RealWidth = (float)v10;
  m_pRender->m_RealHeight = (float)h;
  v11 = this->m_pRender;
  m_Height = v11->m_Height;
  m_Width = v11->m_Width;
  if ( !v6 || m_viewportY || m_Width != m_viewportW || m_Height != m_viewportH )
  {
    m_viewportW = v11->m_Width;
    m_viewportX = 0;
    m_viewportY = 0;
    m_viewportH = m_Height;
    glViewport(0, 0, m_Width, m_Height);
  }
}

void __fastcall AgEventDispatcherBase<AgEditedInputEvent>::unbind(
        AgEventDispatcherBase<AgControllerAddedEvent> *this,
        AgDelegate1<AgControllerAddedEvent const &,void> *f)
{
  AgDelegate1<AgControllerAddedEvent const &,void> *Myfirst; // rax
  AgDelegate1<AgControllerAddedEvent const &,void> *Mylast; // r8
  AgDelegate1<AgControllerAddedEvent const &,void> *i; // rax

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  Mylast = this->m_bindings._Mypair._Myval2._Mylast;
  if ( Myfirst != Mylast )
  {
    while ( f->m_Closure.m_pthis != Myfirst->m_Closure.m_pthis
         || f->m_Closure.m_pFunction != Myfirst->m_Closure.m_pFunction )
    {
      if ( ++Myfirst == Mylast )
        goto LABEL_9;
    }
    for ( i = Myfirst + 1; i != Mylast; ++i )
    {
      i[-1].m_Closure.m_pFunction = i->m_Closure.m_pFunction;
      i[-1].m_Closure.m_pthis = i->m_Closure.m_pthis;
    }
    --this->m_bindings._Mypair._Myval2._Mylast;
  }
LABEL_9:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AppMain::updateNetwork(AppMain *this)
{
  Scaleform::Render::RenderTargetData *v2; // rdx
  __int64 v3; // rcx
  Scaleform::Render::RenderTargetData *v4; // rdx
  __int64 v5; // rcx
  Fw::ImeTargetKB *v6; // rcx
  bool updated; // di
  double v8; // xmm0_8
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // al
  int m_FuncST; // ecx
  int v14; // eax
  GfxManager *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 roomId; // rdi
  GAME_RULE gameRule; // esi
  unsigned __int64 data; // rbp
  __int64 v20; // rax
  char v21; // al
  bool v22; // r9
  char v23; // al
  char **Name; // rax
  GameDataInfo *Instance; // rax
  int v26; // edx
  GameDataInfo *v27; // rax
  GfxManager *v28; // rax
  GfxManager *v29; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  GfxManager *v31[2]; // [rsp+40h] [rbp-E8h] BYREF
  Fw::ROOM_SESSION_INFO pInfo; // [rsp+50h] [rbp-D8h] BYREF

  v31[1] = (GfxManager *)-2i64;
  NetManager::Update(&g_NetworkManager);
  Fw::RankingTarget::Update(v3, v2);
  Fw::TitleStorageTarget::Update(v5, v4);
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    Fw::ImeTargetKB::Update(v6);
  updated = Fw::InvitationCommon::UpdateRecv(&this->m_bInvitePermit);
  v8 = AgClock::getSystemTime() * 1000000.0;
  v9 = 0i64;
  if ( v8 >= 9.223372036854776e18 )
  {
    v8 = v8 - 9.223372036854776e18;
    if ( v8 < 9.223372036854776e18 )
      v9 = 0x8000000000000000ui64;
  }
  if ( v9 + (unsigned int)(int)v8 - Fw::InvitationCommon::m_LiveStreamingTick > 0x3938700 )
  {
    Fw::InvitationCommon::m_LiveStreamingTick = v9 + (unsigned int)(int)v8;
LABEL_9:
    if ( AgSilverware::steamAvailable() )
    {
      v11 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v10);
      v12 = (*(__int64 (__fastcall **)(_QWORD, GfxManager **))(**(_QWORD **)(v11 + 160) + 8i64))(
              *(_QWORD *)(v11 + 160),
              v31);
    }
    else
    {
      v12 = 0;
    }
    AppMain::SetTusLiveStreamingStatusFlag(this, v12);
    goto LABEL_13;
  }
  if ( updated )
    goto LABEL_9;
LABEL_13:
  if ( Fw::InvitationCommon::m_JoinRoomWaitFlag && !this->m_bOnlineInitStartFromMenu )
  {
    if ( !this->m_bInviteInit && this->m_OnlineStep == UI_ONLINE_STEP_NONE )
    {
      this->m_OnlineStep = UI_ONLINE_NETWORK_INIT;
      this->m_bInviteInit = 1;
    }
    m_FuncST = this->m_FuncST;
    if ( (unsigned int)(m_FuncST - 1) > 0xA
      && (unsigned int)(m_FuncST - 183) > 3
      && !g_NetworkManager.m_Invitation_Doing )
    {
      g_NetworkManager.m_Invitation_Doing = 1;
      v14 = AppMain::OnlineInitializeStep(this, v9) - 2;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          GfxManager::getInstance();
          GfxManager::GFv_SetSystemMessage(
            v15,
            "$ERROR_ROOMINFO",
            SYSTEM_MESSAGE_OK,
            0,
            1,
            "no_title",
            &pnewText,
            "size_s");
          Fw::InvitationCommon::m_JoinRoomWaitFlag = 0;
          this->m_bInvitePermit = 0;
          this->m_OnlineStep = UI_ONLINE_STEP_NONE;
LABEL_38:
          AppMain::SceneJump(this, 16);
        }
      }
      else
      {
        memset(&pInfo, 0, sizeof(pInfo));
        Fw::InvitationCommon::GetRoomSessionInfo(&pInfo);
        this->m_OnlineStep = UI_ONLINE_STEP_NONE;
        roomId = pInfo.roomId;
        if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp != pInfo.roomId )
        {
          if ( !g_NetworkManager.initFlag )
          {
            NetManager::Startup(&g_NetworkManager);
            g_NetworkManager.gamedata.userInfo.m_OnlineID = Fw::NetworkCommon::m_NpOnlineId;
            *(_WORD *)&g_NetworkManager.gamedata.userInfo.m_Antenna = 7;
            g_NetworkManager.gamedata.onlinePlay = 1;
          }
          gameRule = pInfo.gameRule;
          this->MatchingGameRule = pInfo.gameRule;
          data = pInfo.m_OnlineId.data;
          *(_QWORD *)&Fw::MatchingTarget::SearchRoomInfo[0].ownerNpId.handle.m_length = pInfo.m_OnlineId.data;
          g_NetworkManager.gamedata.matchMode = NETWORK_MATCHING_TYPE_FREE;
          g_NetworkManager.gamedata.gameRule = gameRule;
          g_NetworkManager.gamedata.liveType = pInfo.liveOpen;
          g_NetworkManager.gamedata.roomBattleType = pInfo.battleType;
          g_NetworkManager.gamedata.roundTimerType = pInfo.roundTimerType;
          g_NetworkManager.gamedata.roundType = pInfo.roundType;
          g_NetworkManager.gamedata.maxSlot = pInfo.slotMax;
          v20 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v16);
          v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 16) + 336i64))(*(_QWORD *)(v20 + 16));
          if ( (v21 & 0x10) != 0 || (BYTE1(v31[0]) = (v21 & 2) != 0, (v21 & 2) != 0) )
          {
            memset(g_NetworkManager.gamedata.m_RoomName, 0, sizeof(g_NetworkManager.gamedata.m_RoomName));
            Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)data);
            *(_OWORD *)g_NetworkManager.gamedata.m_RoomName = *(_OWORD *)Name;
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[16] = *((_OWORD *)Name + 1);
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[32] = *((_OWORD *)Name + 2);
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[48] = *((_OWORD *)Name + 3);
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[64] = *((_OWORD *)Name + 4);
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[80] = *((_OWORD *)Name + 5);
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[96] = *((_OWORD *)Name + 6);
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[112] = *((_OWORD *)Name + 7);
            v23 = *((_BYTE *)Name + 128);
          }
          else
          {
            *(_OWORD *)g_NetworkManager.gamedata.m_RoomName = *(_OWORD *)pInfo.roomName;
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[16] = *(_OWORD *)&pInfo.roomName[16];
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[32] = *(_OWORD *)&pInfo.roomName[32];
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[48] = *(_OWORD *)&pInfo.roomName[48];
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[64] = *(_OWORD *)&pInfo.roomName[64];
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[80] = *(_OWORD *)&pInfo.roomName[80];
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[96] = *(_OWORD *)&pInfo.roomName[96];
            *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[112] = *(_OWORD *)&pInfo.roomName[112];
            v23 = pInfo.roomName[128];
          }
          g_NetworkManager.gamedata.m_RoomName[128] = v23;
          NetManager::RequestJoinRoom(&g_NetworkManager, -1, (CSteamID)roomId, v22);
          Fw::InvitationCommon::m_JoinRoomWaitFlag = 0;
          Instance = GameDataInfo::getInstance();
          v26 = 11;
          if ( gameRule != GAME_RULE_TRAINING )
            v26 = 5;
          Instance->m_GameMode[Instance->m_GameModeIndex] = v26;
          v27 = GameDataInfo::getInstance();
          if ( gameRule == GAME_RULE_TRAINING )
            gameRule = GAME_RULE_SINGLE;
          v27->m_GameRule[v27->m_GameRuleIndex] = gameRule;
          this->invitationState = 1;
          this->m_bInviteFadeOut = 1;
          goto LABEL_39;
        }
        Fw::InvitationCommon::m_JoinRoomWaitFlag = 0;
        this->m_bInvitePermit = 0;
        if ( !roomId )
        {
          GfxManager::getInstance();
          GfxManager::GFv_SetSystemMessage(
            v28,
            "$ERROR_ROOMINFO",
            SYSTEM_MESSAGE_OK,
            0,
            1,
            "no_title",
            &pnewText,
            "size_s");
          goto LABEL_38;
        }
      }
LABEL_39:
      g_NetworkManager.m_Invitation_Doing = 0;
    }
  }
  *(_WORD *)&this->m_bInviteInit = 0;
  this->m_bPlayTogetherState = 0;
  if ( this->invitationState == 1 && g_NetworkManager.gamedata.onlineState == NET_STATE_WAITSTART )
  {
    AppMain::SceneJump(this, 148);
    this->invitationState = 0;
    this->m_bInvitePermit = 0;
    v29 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v31[0] = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v31[0]);
      GfxManager::instance = v29;
    }
    m_ptr = v29->m_GFXMovieSystem.m_movieProxy.m_ptr;
    if ( m_ptr )
    {
      if ( Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.CloseSystemMessage") )
        Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.CloseSystemMessage", 0i64, 0i64, 0);
    }
  }
}

