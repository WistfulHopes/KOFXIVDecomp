#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexaddcolor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudresources.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudnico2chat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexaddcolor.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088C4F8
BattleHudNico2Chat::BattleHudNico2Chat(BattleHudResources * pResources); // 0x1400C2A40
BattleHudNico2Chat::~BattleHudNico2Chat(); // 0x1400C2C60
BattleHudNico2Chat::Message::~Message(); // 0x1400C2BA0
void BattleHudNico2Chat::clear(); // 0x1400C2D10
void BattleHudNico2Chat::update(float advanceFrame); // 0x1400C2E00
void BattleHudNico2Chat::entryMessage(const char * pPlayerID, const char * pMessage, unsigned long color); // 0x1400C2F40
void BattleHudNico2Chat::draw(); // 0x1400C31A0//decompilation failure at 14088C4F8!
void __fastcall BattleHudNico2Chat::BattleHudNico2Chat(BattleHudNico2Chat *this, BattleHudResources *pResources)
{
  _BYTE *v3; // rax
  _QWORD *v4; // rax
  BattleHudNico2Chat::Message *v5; // rdi
  BattleHudNico2Chat::Stack *v6; // rax
  __int64 v7; // rdx
  BattleHudNico2Chat::Stack *v8; // rcx
  BattleHudResources *m_pResources; // rcx
  Image *Image; // rax
  int v11; // eax

  this->m_bError = 0;
  this->__vftable = (BattleHudNico2Chat_vtbl *)&BattleHudNico2Chat::`vftable';
  this->m_pResources = pResources;
  v3 = operator new(0x50ui64);
  v3[8] = 0;
  *((_DWORD *)v3 + 4) = 0;
  *(_QWORD *)v3 = &DrawHelperVertexAddColor::`vftable';
  *((_QWORD *)v3 + 3) = 0i64;
  *((_DWORD *)v3 + 8) = 0;
  *((_QWORD *)v3 + 5) = 0i64;
  *((_DWORD *)v3 + 12) = 0;
  *((_DWORD *)v3 + 18) = 0;
  v3[68] = 0;
  this->m_pDrawHelper = (DrawHelperVertexAddColor *)v3;
  v4 = operator new[](0xCD8ui64);
  if ( v4 )
  {
    *v4 = 10i64;
    v5 = (BattleHudNico2Chat::Message *)(v4 + 1);
    `eh vector constructor iterator'(
      v4 + 1,
      0x148ui64,
      0xAui64,
      (void (__fastcall *)(void *))BattleHudNico2Chat::Message::Message,
      (void (__fastcall *)(void *))BattleHudNico2Chat::Message::~Message);
  }
  else
  {
    v5 = 0i64;
  }
  this->m_pMessages = v5;
  this->m_messageUseCount = 0;
  v6 = (BattleHudNico2Chat::Stack *)operator new[](0x300ui64);
  if ( v6 )
  {
    v7 = 32i64;
    v8 = v6;
    do
    {
      v8->pPlayerID = 0i64;
      v8->pMessage = 0i64;
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  else
  {
    v6 = 0i64;
  }
  this->m_pStacks = v6;
  *(_QWORD *)&this->m_stackUseCount = 0i64;
  m_pResources = this->m_pResources;
  if ( m_pResources && this->m_pMessages && v6 && this->m_pDrawHelper )
  {
    Image = BattleHudResources::getImage(m_pResources, (BattleHudResources::EImage::Type)3);
    v11 = DrawHelper::setupImage(this->m_pDrawHelper, Image);
    this->m_pDrawHelper->changeBufferSize(this->m_pDrawHelper, v11, DEFAULT, 170);
  }
  else
  {
    this->m_bError = 1;
  }
}

void __fastcall BattleHudNico2Chat::Message::Message(BattleHudNico2Chat::Message *this)
{
  this->bActive = 0;
  this->stringPlayerID.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  *(_QWORD *)&this->stringPlayerID.m_type = 0i64;
  this->stringPlayerID.m_height = 0;
  this->stringPlayerID.m_pImage = 0i64;
  this->stringPlayerID.m_pDrawHelper = 0i64;
  this->stringPlayerID.m_bError = 0;
  this->stringPlayerID.m_imageIndex = -1;
  this->stringPlayerID.m_freeMessage.pMessage = 0i64;
  this->stringPlayerID.m_freeMessage.messageLength = 0;
  this->stringPlayerID.m_freeMessage.pImage = 0i64;
  this->stringPlayerID.m_freeMessage.pTexuteBuffer = 0i64;
  this->stringPlayerID.m_freeMessage.textureBufferSize = 0;
  this->stringPlayerID.m_combination.pRects = 0i64;
  this->stringPlayerID.m_combination.pGlyphs = 0i64;
  this->stringPlayerID.m_combination.pImageIndexes = 0i64;
  this->stringPlayerID.m_combination.imageIndexCount = 0;
  this->stringMessage.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  this->stringMessage.m_bError = 0;
  *(_QWORD *)&this->stringMessage.m_type = 0i64;
  this->stringMessage.m_height = 0;
  this->stringMessage.m_pImage = 0i64;
  this->stringMessage.m_imageIndex = -1;
  this->stringMessage.m_pDrawHelper = 0i64;
  this->stringMessage.m_freeMessage.pMessage = 0i64;
  this->stringMessage.m_freeMessage.messageLength = 0;
  this->stringMessage.m_freeMessage.pImage = 0i64;
  this->stringMessage.m_freeMessage.pTexuteBuffer = 0i64;
  this->stringMessage.m_freeMessage.textureBufferSize = 0;
  this->stringMessage.m_combination.pRects = 0i64;
  this->stringMessage.m_combination.pGlyphs = 0i64;
  this->stringMessage.m_combination.pImageIndexes = 0i64;
  this->stringMessage.m_combination.imageIndexCount = 0;
}

void __fastcall BattleHudNico2Chat::~BattleHudNico2Chat(BattleHudNico2Chat *this)
{
  unsigned __int64 v2; // rdx
  BattleHudNico2Chat::Message *m_pMessages; // rcx
  int *p_y; // rbx
  BattleHudNico2Chat::Stack *m_pStacks; // rcx
  DrawHelperVertexAddColor *m_pDrawHelper; // rcx

  this->__vftable = (BattleHudNico2Chat_vtbl *)&BattleHudNico2Chat::`vftable';
  BattleHudNico2Chat::clear(this);
  m_pMessages = this->m_pMessages;
  if ( m_pMessages )
  {
    p_y = &m_pMessages[-1].y;
    `eh vector destructor iterator'(
      m_pMessages,
      0x148ui64,
      *(_QWORD *)&m_pMessages[-1].y,
      (void (__fastcall *)(void *))BattleHudNico2Chat::Message::~Message);
    operator delete[](p_y, 328i64 * *(_QWORD *)p_y + 8);
    this->m_pMessages = 0i64;
  }
  m_pStacks = this->m_pStacks;
  if ( m_pStacks )
  {
    operator delete(m_pStacks, v2);
    this->m_pStacks = 0i64;
  }
  m_pDrawHelper = this->m_pDrawHelper;
  if ( m_pDrawHelper )
  {
    ((void (__fastcall *)(DrawHelperVertexAddColor *, __int64))m_pDrawHelper->~ErrorChecker)(m_pDrawHelper, 1i64);
    this->m_pDrawHelper = 0i64;
  }
  this->__vftable = (BattleHudNico2Chat_vtbl *)&ErrorChecker::`vftable';
}

void __fastcall BattleHudNico2Chat::Message::~Message(BattleHudNico2Chat::Message *this)
{
  this->stringMessage.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  ImageString::dispose(&this->stringMessage);
  this->stringMessage.m_pDrawHelper = 0i64;
  this->stringMessage.__vftable = (ImageString_vtbl *)&ErrorChecker::`vftable';
  this->stringPlayerID.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  ImageString::dispose(&this->stringPlayerID);
  this->stringPlayerID.__vftable = (ImageString_vtbl *)&ErrorChecker::`vftable';
  this->stringPlayerID.m_pDrawHelper = 0i64;
}

void __fastcall BattleHudNico2Chat::clear(BattleHudNico2Chat *this, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 i; // rdi
  char *pPlayerID; // rcx
  char *pMessage; // rcx

  if ( this->m_pMessages )
  {
    v3 = 0i64;
    v4 = 10i64;
    v5 = 0i64;
    do
    {
      this->m_pMessages[v5].bActive = 0;
      ImageString::dispose(&this->m_pMessages[v3].stringMessage);
      ImageString::dispose(&this->m_pMessages[v3++].stringPlayerID);
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  this->m_messageUseCount = 0;
  if ( this->m_pStacks )
  {
    for ( i = 0i64; i < 32; ++i )
    {
      pPlayerID = this->m_pStacks[i].pPlayerID;
      if ( pPlayerID )
      {
        operator delete(pPlayerID, a2);
        this->m_pStacks[i].pPlayerID = 0i64;
      }
      pMessage = this->m_pStacks[i].pMessage;
      if ( pMessage )
      {
        operator delete(pMessage, a2);
        this->m_pStacks[i].pMessage = 0i64;
      }
    }
  }
  *(_QWORD *)&this->m_stackUseCount = 0i64;
}

void __fastcall BattleHudNico2Chat::draw(BattleHudNico2Chat *this)
{
  __int64 v2; // rbx
  BattleHudNico2Chat::Message *m_pMessages; // rdi
  int x; // ebp
  ImageString *p_stringPlayerID; // rcx
  int y; // er14
  ImageString *p_stringMessage; // rcx
  int nonNeoScaleUp; // [rsp+20h] [rbp-38h]
  DrawHelper::DrawParams drawParams; // [rsp+30h] [rbp-28h] BYREF

  if ( this->m_messageUseCount > 0 )
  {
    nonNeoScaleUp = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 32i64);
    ((void (__fastcall *)(DrawHelperVertexAddColor *, _QWORD, _QWORD, _QWORD))this->m_pDrawHelper->setClip)(
      this->m_pDrawHelper,
      0i64,
      0i64,
      *(unsigned int *)(*(_QWORD *)&AppMain::pApp + 28i64));
    v2 = 0i64;
    *(_QWORD *)&drawParams.renderMode = 0i64;
    drawParams.bMirror = 0;
    drawParams.scaleW = 1.0;
    drawParams.scaleH = 1.0;
    drawParams.alpha = 1.0;
    drawParams.colorARGB = -1;
    do
    {
      m_pMessages = this->m_pMessages;
      if ( m_pMessages[v2].bActive )
      {
        x = m_pMessages[v2].x;
        p_stringPlayerID = &m_pMessages[v2].stringPlayerID;
        y = m_pMessages[v2].y;
        drawParams.colorARGB = m_pMessages[v2].color;
        if ( p_stringPlayerID->m_type )
          ImageString::draw(p_stringPlayerID, x, y, &drawParams, nonNeoScaleUp);
        p_stringMessage = &m_pMessages[v2].stringMessage;
        if ( p_stringMessage->m_type )
          ImageString::draw(p_stringMessage, x, y + 22, &drawParams, nonNeoScaleUp);
      }
      ++v2;
    }
    while ( v2 < 10 );
    this->m_pDrawHelper->drawStack(this->m_pDrawHelper);
    this->m_pDrawHelper->clearClip(this->m_pDrawHelper);
  }
}

void __fastcall BattleHudNico2Chat::entryMessage(
        BattleHudNico2Chat *this,
        const char *pPlayerID,
        const char *pMessage,
        unsigned int color)
{
  int m_messageUseCount; // ecx
  int m_stackUseCount; // ecx
  unsigned __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rsi
  char *v13; // rcx
  char *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  BattleHudNico2Chat::Message *m_pMessages; // r9
  int v18; // ebx
  __int64 v19; // r8
  bool v20; // cc
  int v21; // eax
  BattleHudNico2Chat::Message *v22; // rcx
  int *v23; // rdx
  BattleHudResources *m_pResources; // rcx
  __int64 v25; // r12
  BattleHudNico2Chat::Message *v26; // rsi
  DrawHelperVertexAddColor *m_pDrawHelper; // rax
  DrawHelperVertexAddColor *v28; // rax
  int m_width; // ecx
  int v30[10]; // [rsp+20h] [rbp-68h] BYREF

  if ( !this->isError(this) && pPlayerID && pMessage )
  {
    m_messageUseCount = this->m_messageUseCount;
    if ( m_messageUseCount < 10 )
    {
      m_pMessages = this->m_pMessages;
      v18 = 0;
      v19 = 10i64;
      v20 = m_messageUseCount < 7;
      v21 = 0;
      v22 = m_pMessages;
      if ( v20 )
        v19 = 7i64;
      v23 = v30;
      do
      {
        if ( !v22->bActive )
        {
          ++v18;
          *v23++ = v21;
        }
        ++v21;
        ++v22;
        --v19;
      }
      while ( v19 );
      if ( v18 )
      {
        m_pResources = this->m_pResources;
        BSUtil::g_randomSeed = 214013 * BSUtil::g_randomSeed + 2531011;
        v25 = v30[(int)(HIWORD(BSUtil::g_randomSeed) & 0x7FFF) % v18];
        v26 = &m_pMessages[v25];
        if ( BattleHudResources::createStringFixedPhrase(m_pResources, &v26->stringMessage, pMessage) )
        {
          BattleHudResources::createStringByChatPlayerID(this->m_pResources, &v26->stringPlayerID, pPlayerID);
          m_pDrawHelper = this->m_pDrawHelper;
          if ( v26->stringPlayerID.m_pDrawHelper != m_pDrawHelper )
          {
            v26->stringPlayerID.m_pDrawHelper = m_pDrawHelper;
            v26->stringPlayerID.m_imageIndex = -1;
          }
          v28 = this->m_pDrawHelper;
          if ( v26->stringMessage.m_pDrawHelper != v28 )
          {
            v26->stringMessage.m_pDrawHelper = v28;
            v26->stringMessage.m_imageIndex = -1;
          }
          m_width = v26->stringMessage.m_width;
          v26->bActive = 1;
          v26->x = 1920;
          v26->color = color;
          v20 = v26->stringPlayerID.m_width <= m_width;
          v26->y = 63 * v25 + 298;
          if ( !v20 )
            m_width = v26->stringPlayerID.m_width;
          v26->width = m_width;
          ++this->m_messageUseCount;
        }
      }
    }
    else
    {
      m_stackUseCount = this->m_stackUseCount;
      v10 = (unsigned int)(m_stackUseCount + 1);
      if ( (int)v10 < 32 )
      {
        v11 = (m_stackUseCount + this->m_stackTopIndex) % 32;
        this->m_stackUseCount = v10;
        v12 = v11;
        v13 = this->m_pStacks[v12].pPlayerID;
        if ( v13 )
        {
          operator delete(v13, v10);
          this->m_pStacks[v12].pPlayerID = 0i64;
        }
        v14 = this->m_pStacks[v12].pMessage;
        if ( v14 )
        {
          operator delete(v14, v10);
          this->m_pStacks[v12].pMessage = 0i64;
        }
        v15 = -1i64;
        v16 = -1i64;
        do
          ++v16;
        while ( pPlayerID[v16] );
        this->m_pStacks[v12].pPlayerID = BSUtil::strCopy(pPlayerID, v16);
        do
          ++v15;
        while ( pMessage[v15] );
        this->m_pStacks[v12].pMessage = BSUtil::strCopy(pMessage, v15);
        this->m_pStacks[v12].color = color;
      }
    }
  }
}

char *__fastcall BSUtil::strCopy(const char *pStr, int len)
{
  size_t v2; // rbx
  char *result; // rax
  char *v5; // rdi

  v2 = len;
  if ( !pStr || len <= 0 )
    return 0i64;
  result = (char *)operator new[](len + 1);
  v5 = result;
  if ( result )
  {
    memmove(result, pStr, v2);
    result = v5;
    v5[v2] = 0;
  }
  return result;
}

void __fastcall BattleHudNico2Chat::update(BattleHudNico2Chat *this, float advanceFrame)
{
  __int64 i; // rbx
  BattleHudNico2Chat::Message *m_pMessages; // rsi
  int v5; // eax
  float v6; // xmm0_4
  BattleHudNico2Chat::Stack *m_pStacks; // rsi
  __int64 m_stackTopIndex; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  char *pPlayerID; // rcx
  char *pMessage; // rcx
  int v13; // eax

  if ( !this->isError(this) && this->m_messageUseCount > 0 )
  {
    for ( i = 0i64; i < 10; ++i )
    {
      m_pMessages = this->m_pMessages;
      if ( m_pMessages[i].bActive )
      {
        v5 = -m_pMessages[i].width;
        v6 = (float)m_pMessages[i].x - (float)(advanceFrame * 7.5);
        m_pMessages[i].x = (int)v6;
        if ( v5 >= (int)v6 )
        {
          m_pMessages[i].bActive = 0;
          ImageString::dispose(&m_pMessages[i].stringMessage);
          ImageString::dispose(&m_pMessages[i].stringPlayerID);
          --this->m_messageUseCount;
        }
      }
    }
    if ( this->m_stackUseCount > 0 && this->m_messageUseCount + 1 < 10 )
    {
      m_pStacks = this->m_pStacks;
      m_stackTopIndex = this->m_stackTopIndex;
      v9 = m_stackTopIndex;
      BattleHudNico2Chat::entryMessage(
        this,
        m_pStacks[m_stackTopIndex].pPlayerID,
        m_pStacks[m_stackTopIndex].pMessage,
        m_pStacks[m_stackTopIndex].color);
      pPlayerID = m_pStacks[v9].pPlayerID;
      if ( pPlayerID )
      {
        operator delete(pPlayerID, v10);
        m_pStacks[v9].pPlayerID = 0i64;
      }
      pMessage = m_pStacks[v9].pMessage;
      if ( pMessage )
      {
        operator delete(pMessage, v10);
        m_pStacks[v9].pMessage = 0i64;
      }
      v13 = (this->m_stackTopIndex + 1) % 32;
      --this->m_stackUseCount;
      this->m_stackTopIndex = v13;
    }
  }
}

