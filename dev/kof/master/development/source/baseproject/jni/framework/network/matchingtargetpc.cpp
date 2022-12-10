#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtargetpc.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtransceiverpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"

void(*??m_RoomId$initializer$@MatchingTarget@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740750
void(*??m_RoomAttr$initializer$@MatchingTarget@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740770
Fw::MatchingTarget::earchRoomInfo$initializer$::operator~(); // 0x140740768
void(*??m_MemberMutex$initializer$@MatchingTarget@Fw@@2P6AXXZEA@@3P6AXXZEA)(); // 0x140740760
std::piecewise_construct_t std::piecewise_construct; // 0x14088901B
void(*??m_RoomMember$initializer$@MatchingTarget@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740758
Fw::MatchingTargetCallbackHandler::MatchingTargetCallbackHandler(); // 0x140048730
Fw::MatchingTarget::ROOM_MEMBER_INFO::ROOM_MEMBER_INFO(); // 0x140048690
Fw::MatchingTarget::SEARCH_ROOM_INFO::SEARCH_ROOM_INFO(); // 0x1400486C0
Fw::ROOM_ATTR::~ROOM_ATTR(); // 0x1400486F0
Fw::MatchingTarget::ROOM_MEMBER_INFO::~ROOM_MEMBER_INFO(); // 0x1400486B0
Fw::MatchingTarget::SEARCH_ROOM_INFO::~SEARCH_ROOM_INFO(); // 0x1400477E0
Fw::ROOM_ATTR & Fw::ROOM_ATTR::operator=(const Fw::ROOM_ATTR & __that); // 0x140048C40
void Fw::MatchingTarget::GetSearchRoomAttr(long num, Fw::ROOM_ATTR * pAttr, long lowerLimitRtt, bool rankMatchFlag); // 0x140048900
bool Fw::MatchingTarget::IsRoomOwner(const char * pOnlineId); // 0x140048BA0
void Fw::MatchingTargetCallbackHandler::OnLobbyCreated(LobbyCreated_t * pParam); // 0x140048D90
void Fw::MatchingTargetCallbackHandler::OnLobbyEntered(LobbyEnter_t * pParam); // 0x140048DA0
void Fw::MatchingTargetCallbackHandler::OnPersonaStateChanged(PersonaStateChange_t * pParam); // 0x140048DB0
void Fw::MatchingTargetCallbackHandler::OnLobbyMatchList(LobbyMatchList_t * pParam); // 0x140048DC0
void Fw::MatchingTargetCallbackHandler::OnLobbyChatUpdate(LobbyChatUpdate_t * pParam); // 0x140048DD0
void Fw::MatchingTargetCallbackHandler::OnLobbyChatMessage(LobbyChatMsg_t * pParam); // 0x140048DE0
void Fw::MatchingTargetCallbackHandler::OnP2PSessionRequest(P2PSessionRequest_t * pParam); // 0x140047AF0
void Fw::MatchingTargetCallbackHandler::OnP2PSessionConnectFail(P2PSessionConnectFail_t * pParam); // 0x140048DF0
void Fw::MatchingTargetCallbackHandler::OnLobbyKicked(LobbyKicked_t * pParam); // 0x140048E00
void Fw::MatchingTarget::OnLobbyCreated(LobbyCreated_t * pParam); // 0x140048E10
void Fw::MatchingTarget::OnLobbyEntered(LobbyEnter_t * pParam); // 0x140049210
void Fw::MatchingTarget::OnPersonaStateChanged(PersonaStateChange_t * pParam); // 0x1400494D0
void Fw::MatchingTarget::OnLobbyMatchList(LobbyMatchList_t * pLobbyMatchList); // 0x1400495A0
void Fw::MatchingTarget::SetRtt(unsigned long long ownerId, unsigned long long rtt); // 0x1400498C0
void Fw::MatchingTarget::SendQOSRequest(); // 0x140049950
void Fw::MatchingTarget::OnLobbyChatUpdate(LobbyChatUpdate_t * pLobbyChatUpdate); // 0x140049A70
void Fw::MatchingTarget::OnLobbyChatMessage(LobbyChatMsg_t * pLobbyChatMsg); // 0x140049D50
void Fw::MatchingTarget::OnP2PSessionConnectFail(P2PSessionConnectFail_t * pParam); // 0x140049F50
bool Fw::MatchingTarget::SearchRoom(Fw::ROOM_ATTR * pRoomAttr); // 0x14004A070
void Fw::MatchingTarget::LeaveRoom(); // 0x14004A3B0
void Fw::MatchingTarget::ClearUserInfo(); // 0x14004A510
void Fw::MatchingTarget::KickoutRoomMember(const unsigned long long & pOnlineId); // 0x14004A5A0
bool Fw::MatchingTarget::IsAliveMember(unsigned long long memberId); // 0x14004A620
void Fw::MatchingTarget::CheckTimeout(unsigned long long timeout); // 0x14004A6F0//decompilation failure at 140740750!
//decompilation failure at 140740770!
//decompilation failure at 140740768!
//decompilation failure at 140740760!
//decompilation failure at 14088901B!
//decompilation failure at 140740758!
void __fastcall Fw::MatchingTargetCallbackHandler::MatchingTargetCallbackHandler(
        Fw::MatchingTargetCallbackHandler *this)
{
  this->m_CallbackLobbyCreated.m_nCallbackFlags = 0;
  this->m_CallbackLobbyCreated.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,LobbyCreated_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,LobbyCreated_t,0>::`vftable';
  this->m_CallbackLobbyCreated.m_iCallback = 0;
  this->m_CallbackLobbyCreated.m_Func = Fw::MatchingTargetCallbackHandler::OnLobbyCreated;
  this->m_CallbackLobbyCreated.m_pObj = this;
  SteamAPI_RegisterCallback(this, 513i64);
  this->m_CallbackLobbyEntered.m_nCallbackFlags = 0;
  this->m_CallbackLobbyEntered.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,LobbyEnter_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,LobbyEnter_t,0>::`vftable';
  this->m_CallbackLobbyEntered.m_Func = Fw::MatchingTargetCallbackHandler::OnLobbyEntered;
  this->m_CallbackLobbyEntered.m_iCallback = 0;
  this->m_CallbackLobbyEntered.m_pObj = this;
  SteamAPI_RegisterCallback(&this->m_CallbackLobbyEntered, 504i64);
  this->m_CallbackPersonaStateChanged.m_nCallbackFlags = 0;
  this->m_CallbackPersonaStateChanged.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,PersonaStateChange_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,PersonaStateChange_t,0>::`vftable';
  this->m_CallbackPersonaStateChanged.m_Func = Fw::MatchingTargetCallbackHandler::OnPersonaStateChanged;
  this->m_CallbackPersonaStateChanged.m_iCallback = 0;
  this->m_CallbackPersonaStateChanged.m_pObj = this;
  SteamAPI_RegisterCallback(&this->m_CallbackPersonaStateChanged, 304i64);
  this->m_CallbackLobbyMatchList.m_nCallbackFlags = 0;
  this->m_CallbackLobbyMatchList.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,LobbyMatchList_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,LobbyMatchList_t,0>::`vftable';
  this->m_CallbackLobbyMatchList.m_Func = Fw::MatchingTargetCallbackHandler::OnLobbyMatchList;
  this->m_CallbackLobbyMatchList.m_iCallback = 0;
  this->m_CallbackLobbyMatchList.m_pObj = this;
  SteamAPI_RegisterCallback(&this->m_CallbackLobbyMatchList, 510i64);
  this->m_CallbackLobbyChatUpdate.m_nCallbackFlags = 0;
  this->m_CallbackLobbyChatUpdate.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatUpdate_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatUpdate_t,0>::`vftable';
  this->m_CallbackLobbyChatUpdate.m_Func = Fw::MatchingTargetCallbackHandler::OnLobbyChatUpdate;
  this->m_CallbackLobbyChatUpdate.m_iCallback = 0;
  this->m_CallbackLobbyChatUpdate.m_pObj = this;
  SteamAPI_RegisterCallback(&this->m_CallbackLobbyChatUpdate, 506i64);
  this->m_CallbackLobbyChatMessage.m_nCallbackFlags = 0;
  this->m_CallbackLobbyChatMessage.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatMsg_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatMsg_t,0>::`vftable';
  this->m_CallbackLobbyChatMessage.m_Func = Fw::MatchingTargetCallbackHandler::OnLobbyChatMessage;
  this->m_CallbackLobbyChatMessage.m_iCallback = 0;
  this->m_CallbackLobbyChatMessage.m_pObj = this;
  SteamAPI_RegisterCallback(&this->m_CallbackLobbyChatMessage, 507i64);
  this->m_CallbackP2PSessionRequest.m_nCallbackFlags = 0;
  this->m_CallbackP2PSessionRequest.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionRequest_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionRequest_t,0>::`vftable';
  this->m_CallbackP2PSessionRequest.m_Func = Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest::Run;
  this->m_CallbackP2PSessionRequest.m_iCallback = 0;
  this->m_CallbackP2PSessionRequest.m_pObj = this;
  SteamAPI_RegisterCallback(&this->m_CallbackP2PSessionRequest, 1202i64);
  this->m_CallbackP2PSessionConnectFail.m_nCallbackFlags = 0;
  this->m_CallbackP2PSessionConnectFail.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionConnectFail_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,P2PSessionConnectFail_t,0>::`vftable';
  this->m_CallbackP2PSessionConnectFail.m_Func = Fw::MatchingTargetCallbackHandler::OnP2PSessionConnectFail;
  this->m_CallbackP2PSessionConnectFail.m_iCallback = 0;
  this->m_CallbackP2PSessionConnectFail.m_pObj = this;
  SteamAPI_RegisterCallback(&this->m_CallbackP2PSessionConnectFail, 1203i64);
  this->m_CallbackLobbyKicked.m_nCallbackFlags = 0;
  this->m_CallbackLobbyKicked.__vftable = (CCallback<Fw::MatchingTargetCallbackHandler,LobbyKicked_t,0>_vtbl *)&CCallback<Fw::MatchingTargetCallbackHandler,LobbyKicked_t,0>::`vftable';
  this->m_CallbackLobbyKicked.m_Func = Fw::MatchingTargetCallbackHandler::OnLobbyKicked;
  this->m_CallbackLobbyKicked.m_iCallback = 0;
  this->m_CallbackLobbyKicked.m_pObj = this;
  SteamAPI_RegisterCallback(&this->m_CallbackLobbyKicked, 512i64);
}

void __fastcall Fw::ROOM_ATTR::ROOM_ATTR(Fw::ROOM_ATTR *this)
{
  __int64 v2; // rbx
  Fw::ROOM_ATTR *v3; // rax

  AgString::AgString(&this->m_RoomOwner.handle);
  v2 = 32i64;
  `eh vector constructor iterator'(
    this->m_BlockedUser,
    0x10ui64,
    0x20ui64,
    (void (__fastcall *)(void *))AgPath::AgPath,
    (void (__fastcall *)(void *))AgUtilities::captureScreenshot);
  *(_DWORD *)&this->m_RoomId.m_steamid.m_comp = 0;
  *((_DWORD *)&this->m_RoomId.m_steamid.m_comp + 1) &= 0xFF0FFFFF;
  HIBYTE(this->m_RoomId.m_steamid.m_unAll64Bits) = 0;
  *((_DWORD *)&this->m_RoomId.m_steamid.m_comp + 1) &= 0xFFF00000;
  v3 = this;
  do
  {
    *(_QWORD *)&v3->m_Attr[0].num = -1i64;
    v3 = (Fw::ROOM_ATTR *)((char *)v3 + 12);
    --v2;
  }
  while ( v2 );
  this->m_MaxSlot = 0;
  this->m_BlockedUserNum = 0i64;
}

void __fastcall Fw::MatchingTarget::ROOM_MEMBER_INFO::ROOM_MEMBER_INFO(Fw::MatchingTarget::ROOM_MEMBER_INFO *this)
{
  AgString::AgString(&this->npId.handle);
}

void __fastcall Fw::MatchingTarget::SEARCH_ROOM_INFO::SEARCH_ROOM_INFO(Fw::MatchingTarget::SEARCH_ROOM_INFO *this)
{
  AgString::AgString(&this->ownerNpId.handle);
  *((_DWORD *)&this->roomId.m_steamid.m_comp + 1) &= 0xFF0FFFFF;
  HIBYTE(this->roomId.m_steamid.m_unAll64Bits) = 0;
  *((_DWORD *)&this->roomId.m_steamid.m_comp + 1) &= 0xFFF00000;
  *(_DWORD *)&this->roomId.m_steamid.m_comp = 0;
}

void __fastcall Fw::ROOM_ATTR::~ROOM_ATTR(Fw::ROOM_ATTR *this)
{
  `eh vector destructor iterator'(
    this->m_BlockedUser,
    0x10ui64,
    0x20ui64,
    (void (__fastcall *)(void *))AgUtilities::captureScreenshot);
  AgString::~AgString(&this->m_RoomOwner.handle);
}

void __fastcall Fw::MatchingTarget::ROOM_MEMBER_INFO::~ROOM_MEMBER_INFO(Fw::MatchingTarget::ROOM_MEMBER_INFO *this)
{
  AgString::~AgString(&this->npId.handle);
}

// attributes: thunk
void __fastcall AgUtilities::captureScreenshot(AgString *filename)
{
  AgString::~AgString(filename);
}

Fw::ROOM_ATTR *__fastcall Fw::ROOM_ATTR::operator=(Fw::ROOM_ATTR *this, const Fw::ROOM_ATTR *__that)
{
  Fw::ROOM_ATTR *v3; // rcx
  signed __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  char *v7; // rcx
  UserId *m_BlockedUser; // rbx
  __int64 v9; // rdi
  Fw::ROOM_ATTR *result; // rax

  v3 = &Fw::MatchingTarget::m_RoomAttr;
  v4 = (char *)__that - (char *)&Fw::MatchingTarget::m_RoomAttr;
  v5 = 16i64;
  do
  {
    *(_QWORD *)&v3->m_Attr[0].num = *(_QWORD *)((char *)&v3->m_Attr[0].num + v4);
    *(_DWORD *)&v3->m_Attr[0].searchOperator = *(_DWORD *)(&v3->m_Attr[0].searchOperator + v4);
    *(_QWORD *)&v3->m_Attr[1].num = *(_QWORD *)((char *)&v3->m_Attr[1].num + v4);
    *(_DWORD *)&v3->m_Attr[1].searchOperator = *(_DWORD *)(&v3->m_Attr[1].searchOperator + v4);
    v3 = (Fw::ROOM_ATTR *)((char *)v3 + 24);
    --v5;
  }
  while ( v5 );
  Fw::MatchingTarget::m_RoomAttr.m_WorldIdIndex = __that->m_WorldIdIndex;
  v6 = 0i64;
  Fw::MatchingTarget::m_RoomAttr.m_MaxSlot = __that->m_MaxSlot;
  Fw::MatchingTarget::m_RoomAttr.m_PrivateSlotNum = __that->m_PrivateSlotNum;
  do
  {
    v7 = (char *)&Fw::MatchingTarget::m_RoomAttr + v6++;
    v7[396] = v7[(char *)__that - Fw::MatchingTarget::m_RoomAttr.m_RoomName + 792];
  }
  while ( v6 < 0x81 );
  AgString::operator=(&Fw::MatchingTarget::m_RoomAttr.m_RoomOwner.handle, &__that->m_RoomOwner.handle);
  m_BlockedUser = Fw::MatchingTarget::m_RoomAttr.m_BlockedUser;
  v9 = 32i64;
  do
  {
    AgString::operator=(
      &m_BlockedUser->handle,
      (const AgString *)((char *)&m_BlockedUser[34].handle
                       + (char *)__that
                       - (char *)Fw::MatchingTarget::m_RoomAttr.m_BlockedUser));
    ++m_BlockedUser;
    --v9;
  }
  while ( v9 );
  result = &Fw::MatchingTarget::m_RoomAttr;
  Fw::MatchingTarget::m_RoomAttr.m_BlockedUserNum = __that->m_BlockedUserNum;
  Fw::MatchingTarget::m_RoomAttr.m_RoomId.m_steamid.m_unAll64Bits = __that->m_RoomId.m_steamid.m_unAll64Bits;
  Fw::MatchingTarget::m_RoomAttr.m_Write.m_AttrSize = __that->m_Write.m_AttrSize;
  Fw::MatchingTarget::m_RoomAttr.1072 = __that->1072;
  return result;
}

void __fastcall Fw::MatchingTarget::CheckTimeout(unsigned __int64 timeout)
{
  Fw::MatchingTarget::ROOM_MEMBER_INFO *v1; // rdi
  double v2; // xmm0_8
  unsigned __int64 v3; // rcx
  const char *v4; // rcx
  unsigned __int64 dwFlags; // [rsp+50h] [rbp+8h] BYREF

  dwFlags = timeout;
  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
  v1 = Fw::MatchingTarget::m_RoomMember;
  while ( 1 )
  {
    if ( v1->lastPacketReceived )
    {
      v2 = AgClock::getSystemTime() * 1000000.0;
      v3 = 0i64;
      if ( v2 >= 9.223372036854776e18 )
      {
        v2 = v2 - 9.223372036854776e18;
        if ( v2 < 9.223372036854776e18 )
          v3 = 0x8000000000000000ui64;
      }
      if ( v3 + (unsigned int)(int)v2 - v1->lastPacketReceived >= 0x1C9C380 && v1->active )
        break;
    }
    if ( (__int64)++v1 >= (__int64)&Fw::MatchingTarget::m_RoomId )
      goto LABEL_16;
  }
  LODWORD(dwFlags) = 0;
  if ( !InternetGetConnectedState((LPDWORD)&dwFlags, 0) )
    goto LABEL_15;
  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( !Fw::MatchingTarget::IsRoomOwner(v4) )
  {
    if ( !v1->hostFlag )
      goto LABEL_16;
    Fw::NetTransceiver::DelPeer(v1->memberId);
    *(_WORD *)&v1->active = 0;
    v1->memberId = 0i64;
    v1->lastPacketReceived = 0i64;
    AgString::~AgString(&v1->npId.handle);
LABEL_15:
    g_NetworkManager.gamedata.error = NETWORK_ERROR_TYPE_CONNECTION;
    Fw::MatchingTarget::LeaveRoom();
    goto LABEL_16;
  }
  Fw::MatchingTarget::KickoutRoomMember(&v1->memberId);
  Fw::NetTransceiver::DelPeer(v1->memberId);
  *(_WORD *)&v1->active = 0;
  v1->memberId = 0i64;
  v1->lastPacketReceived = 0i64;
  AgString::~AgString(&v1->npId.handle);
LABEL_16:
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
}

void Fw::MatchingTarget::ClearUserInfo(void)
{
  Fw::TUdpP2pInfo *Mylast; // rdi
  Fw::TUdpP2pInfo *Myfirst; // rbx

  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
  Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
  {
    do
    {
      AgString::~AgString(&Myfirst->npId.handle);
      ++Myfirst;
    }
    while ( Myfirst != Mylast );
    Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  }
  Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast = Myfirst;
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  *((_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp + 1) &= 0xFF0FFFFF;
  HIBYTE(Fw::MatchingTarget::m_RoomId.m_steamid.m_unAll64Bits) = 0;
  Fw::MatchingTarget::m_RoomId.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)(Fw::MatchingTarget::m_RoomId.m_steamid.m_unAll64Bits & 0xFFF0000000000000ui64);
}

__int64 __fastcall CCallbackImpl<9>::GetCallbackSizeBytes(Scaleform::Render::DICommand_ColorTransform *this)
{
  return 9i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_FloodFill,Scaleform::Render::DICommand>::GetSize(
        Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_SetPixel32,Scaleform::Render::DICommand> *this)
{
  return 32i64;
}

void __fastcall Fw::MatchingTarget::GetSearchRoomAttr(
        int num,
        Fw::ROOM_ATTR *pAttr,
        int lowerLimitRtt,
        bool rankMatchFlag)
{
  unsigned int v4; // ecx
  CSteamID *p_m_RoomId; // r15
  int v6; // er12
  __int64 v7; // rbx
  Fw::ROOM_ATTR *v9; // r13
  int v10; // esi
  __int64 i; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  const char *v14; // rax
  __int64 v15; // r8
  int curMemberNum; // edx
  int maxSlot; // ecx
  Fw::RoomSearchAttr *attr; // rcx
  char *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  const char *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-58h]
  bool v26; // [rsp+98h] [rbp+20h]

  v26 = rankMatchFlag;
  v4 = Fw::MatchingTarget::m_SearchRoomNum;
  p_m_RoomId = &pAttr->m_RoomId;
  v6 = 0;
  v7 = -1064i64 - (_QWORD)pAttr;
  v25 = -1064i64 - (_QWORD)pAttr;
  v9 = pAttr;
  v10 = 0;
  for ( i = 0i64; i < 50; ++i )
  {
    if ( Fw::NetworkCommon::m_NpOnlineId.data != Fw::MatchingTarget::SearchRoomInfo[i].ownerSteamId
      && Fw::MatchingTarget::SearchRoomInfo[i].publicSlotsAvailable )
    {
      if ( lowerLimitRtt == -1
        || (pAttr = (Fw::ROOM_ATTR *)Fw::MatchingTarget::SearchRoomInfo[i].rtt,
            lowerLimitRtt > (int)((double)(int)pAttr * 0.5 * 1.100000023841858))
        || !rankMatchFlag && (_DWORD)pAttr == 0x7FFFFFFF )
      {
        v12 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, pAttr);
        v13 = v10;
        v14 = (const char *)(*(__int64 (__fastcall **)(_QWORD, CSteamID::SteamID_t, const char *))(**(_QWORD **)(v12 + 32)
                                                                                                 + 152i64))(
                              *(_QWORD *)(v12 + 32),
                              Fw::MatchingTarget::SearchRoomInfo[v13].roomId.m_steamid,
                              "WORLDID");
        *(_DWORD *)&p_m_RoomId[-85].m_steamid.m_comp = atol(v14);
        v15 = 16i64;
        p_m_RoomId->m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)Fw::MatchingTarget::SearchRoomInfo[i].roomId;
        curMemberNum = Fw::MatchingTarget::SearchRoomInfo[i].curMemberNum;
        *(_DWORD *)&p_m_RoomId[1].m_steamid.m_comp = curMemberNum;
        maxSlot = Fw::MatchingTarget::SearchRoomInfo[i].maxSlot;
        *((_DWORD *)&p_m_RoomId[-85].m_steamid.m_comp + 1) = maxSlot;
        *(_DWORD *)&p_m_RoomId[-84].m_steamid.m_comp = maxSlot
                                                     - Fw::MatchingTarget::SearchRoomInfo[i].publicSlotsAvailable
                                                     - curMemberNum;
        attr = Fw::MatchingTarget::SearchRoomInfo[i].attr;
        v19 = (char *)p_m_RoomId + v7 - i * 576 - (_QWORD)Fw::MatchingTarget::SearchRoomInfo[0].attr + (_QWORD)v9;
        do
        {
          *(_DWORD *)&v19[(_QWORD)attr] = attr->num;
          *(_DWORD *)&v19[(_QWORD)attr + 12] = attr[1].num;
          attr += 2;
          --v15;
        }
        while ( v15 );
        *((_DWORD *)&p_m_RoomId[1].m_steamid.m_comp + 1) = Fw::MatchingTarget::SearchRoomInfo[i].rtt;
        v20 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v19);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 16) + 336i64))(*(_QWORD *)(v20 + 16));
        v22 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v21);
        v23 = v6;
        v24 = (const char *)(*(__int64 (__fastcall **)(_QWORD, CSteamID::SteamID_t, const char *))(**(_QWORD **)(v22 + 32)
                                                                                                 + 152i64))(
                              *(_QWORD *)(v22 + 32),
                              Fw::MatchingTarget::SearchRoomInfo[v13].roomId.m_steamid,
                              "NAME");
        strncpy(v9[v23].m_RoomName, v24, 0x81ui64);
        AgString::operator=(&v9[v23].m_RoomOwner.handle, &Fw::MatchingTarget::SearchRoomInfo[v13].ownerNpId.handle);
        v4 = Fw::MatchingTarget::m_SearchRoomNum;
        rankMatchFlag = v26;
        ++v6;
        v7 = v25;
        p_m_RoomId += 135;
      }
      else if ( Fw::MatchingTarget::SearchRoomInfo[i].roomId.m_steamid.m_unAll64Bits )
      {
        Fw::MatchingTarget::m_SearchRoomNum = --v4;
      }
    }
    ++v10;
  }
}

__int64 __fastcall Fw::MatchingTarget::IsAliveMember(unsigned __int64 memberId)
{
  unsigned __int8 v2; // bl
  unsigned __int64 *p_memberId; // rdx

  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
  p_memberId = &Fw::MatchingTarget::m_RoomMember[0].memberId;
  do
  {
    if ( *((_BYTE *)p_memberId - 24) && *p_memberId == memberId )
      v2 = 1;
    if ( *((_BYTE *)p_memberId + 16) && p_memberId[5] == memberId )
      v2 = 1;
    if ( *((_BYTE *)p_memberId + 56) && p_memberId[10] == memberId )
      v2 = 1;
    if ( *((_BYTE *)p_memberId + 96) && p_memberId[15] == memberId )
      v2 = 1;
    if ( *((_BYTE *)p_memberId + 136) && p_memberId[20] == memberId )
      v2 = 1;
    if ( *((_BYTE *)p_memberId + 176) && p_memberId[25] == memberId )
      v2 = 1;
    p_memberId += 30;
  }
  while ( (__int64)p_memberId < (__int64)&Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend );
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
  return v2;
}

_BOOL8 __fastcall Fw::MatchingTarget::IsRoomOwner(const char *pOnlineId, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // bl
  __int64 v4; // rdi
  int v5; // ecx
  bool *p_hostFlag; // rax
  const char *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = pOnlineId;
  v2 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, a2);
  v3 = 0;
  v4 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, const char **))(**(_QWORD **)(v2 + 8) + 16i64))(
                    *(_QWORD *)(v2 + 8),
                    &v8);
  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
  v5 = 0;
  p_hostFlag = &Fw::MatchingTarget::m_RoomMember[0].hostFlag;
  while ( !*p_hostFlag )
  {
    ++v5;
    p_hostFlag += 40;
    if ( (__int64)p_hostFlag >= (__int64)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp + 1 )
      goto LABEL_6;
  }
  v3 = Fw::MatchingTarget::m_RoomMember[v5].memberId == v4;
LABEL_6:
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
  return v3;
}

void __fastcall Fw::MatchingTarget::KickoutRoomMember(const unsigned __int64 *pOnlineId)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  char _Buffer[32]; // [rsp+20h] [rbp-38h] BYREF

  sprintf(_Buffer, "kick %lld", *pOnlineId);
  v2 = *(_QWORD *)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v1) + 32);
  v3 = -1i64;
  while ( _Buffer[++v3] != 0 )
    ;
  (*(void (__fastcall **)(__int64, CSteamID::SteamID_t, char *, _QWORD))(*(_QWORD *)v2 + 208i64))(
    v2,
    Fw::MatchingTarget::m_RoomId.m_steamid,
    _Buffer,
    (unsigned int)(v3 + 1));
}

void Fw::MatchingTarget::LeaveRoom(void)
{
  int v0; // ecx
  __int64 v1; // rdx
  __int64 v2; // rax
  int v3; // ebx
  Fw::MatchingTarget::ROOM_MEMBER_INFO *v4; // rax

  v0 = (*((_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp + 1) >> 20) & 0xF;
  if ( (unsigned int)(v0 - 1) > 9
    || (unsigned int)(SHIBYTE(Fw::MatchingTarget::m_RoomId.m_steamid.m_unAll64Bits) - 1) > 3
    || v0 == 1
    && (!*(_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp
     || (*((_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp + 1) & 0xFFFFFu) > 4)
    || v0 == 7
    && (!*(_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp
     || (*((_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp + 1) & 0xFFFFF) != 0)
    || v0 == 3 && !*(_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
    *((_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp + 1) &= 0xFF0FFFFF;
    HIBYTE(Fw::MatchingTarget::m_RoomId.m_steamid.m_unAll64Bits) = 0;
    Fw::MatchingTarget::m_RoomId.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)(Fw::MatchingTarget::m_RoomId.m_steamid.m_unAll64Bits & 0xFFF0000000000000ui64);
  }
  else
  {
    AgTrace("Leaving lobby %ul", Fw::MatchingTarget::m_RoomId.m_steamid.m_comp);
    v2 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v1);
    (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v2 + 32) + 120i64))(
      *(_QWORD *)(v2 + 32),
      Fw::MatchingTarget::m_RoomId.m_steamid);
    *((_DWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp + 1) &= 0xFF0FFFFF;
    v3 = 0;
    HIBYTE(Fw::MatchingTarget::m_RoomId.m_steamid.m_unAll64Bits) = 0;
    Fw::MatchingTarget::m_RoomId.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)(Fw::MatchingTarget::m_RoomId.m_steamid.m_unAll64Bits & 0xFFF0000000000000ui64);
    do
      NetManager::resetPlayer(&g_NetworkManager, v3++);
    while ( v3 < 12 );
    EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
    v4 = Fw::MatchingTarget::m_RoomMember;
    do
    {
      v4->active = 0;
      ++v4;
    }
    while ( (__int64)v4 < (__int64)&Fw::MatchingTarget::m_RoomId );
    LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
  }
}

void __fastcall Fw::MatchingTarget::OnLobbyChatMessage(LobbyChatMsg_t *pLobbyChatMsg, __int64 a2)
{
  __int64 v3; // rax
  char v4; // al
  Fw::ROOM_CHATMESSAGE_INFO *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  Fw::MatchingTarget::ROOM_MEMBER_INFO *v8; // rax
  __int64 memberId; // rdi
  __int64 v10; // rdx
  char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  char v16; // dl
  double v17; // xmm0_8
  unsigned __int64 v18; // rcx
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 16) + 336i64))(*(_QWORD *)(v3 + 16));
  if ( (v4 & 0x10) == 0
    && (v4 & 0xA) == 0
    && pLobbyChatMsg->m_ulSteamIDLobby == Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
    v5 = &Fw::MatchingTarget::m_RoomChatMessage[Fw::MatchingTarget::m_RoomChatMessageCount];
    memset(v5->message, 0, sizeof(v5->message));
    v7 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v6);
    (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t, _QWORD, _QWORD, char *, int, _QWORD))(**(_QWORD **)(v7 + 32)
                                                                                             + 216i64))(
      *(_QWORD *)(v7 + 32),
      Fw::MatchingTarget::m_RoomId.m_steamid,
      pLobbyChatMsg->m_iChatID,
      0i64,
      v5->message,
      256,
      0i64);
    v8 = Fw::MatchingTarget::m_RoomMember;
    while ( !v8->hostFlag )
    {
      if ( (__int64)++v8 >= (__int64)&Fw::MatchingTarget::m_RoomId )
      {
        memberId = v19;
        goto LABEL_9;
      }
    }
    memberId = v8->memberId;
LABEL_9:
    if ( strstr(v5->message, "kick ") && pLobbyChatMsg->m_ulSteamIDUser == memberId )
    {
      v11 = strstr(v5->message, "kick ");
      v12 = -1i64;
      do
        ++v12;
      while ( v11[v12 + 5] );
      if ( v12 )
      {
        v13 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v10);
        v14 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v13 + 8) + 16i64))(
                           *(_QWORD *)(v13 + 8),
                           &v19);
        v15 = strtoull(v11 + 5, 0i64, 10);
        v16 = Fw::MatchingTarget::m_RoomKickoutFlag;
        if ( v15 == v14 )
          v16 = 1;
        Fw::MatchingTarget::m_RoomKickoutFlag = v16;
      }
      memset(v5->message, 0, sizeof(v5->message));
    }
    else
    {
      v5->npId = pLobbyChatMsg->m_ulSteamIDUser;
      v17 = AgClock::getSystemTime() * 1000000.0;
      v18 = 0i64;
      if ( v17 >= 9.223372036854776e18 )
      {
        v17 = v17 - 9.223372036854776e18;
        if ( v17 < 9.223372036854776e18 )
          v18 = 0x8000000000000000ui64;
      }
      v5->tick = v18 + (unsigned int)(int)v17;
      Fw::MatchingTarget::m_RoomChatMessageCount = (Fw::MatchingTarget::m_RoomChatMessageCount + 1) % 8;
    }
  }
}

void __fastcall Fw::MatchingTargetCallbackHandler::OnLobbyChatMessage(
        Fw::MatchingTargetCallbackHandler *this,
        LobbyChatMsg_t *pParam)
{
  Fw::MatchingTarget::OnLobbyChatMessage(pParam, (__int64)pParam);
}

void __fastcall Fw::MatchingTarget::OnLobbyChatUpdate(LobbyChatUpdate_t *pLobbyChatUpdate)
{
  int v2; // ebp
  unsigned __int64 *p_memberId; // r14
  int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  const char *Name; // rax
  CSteamID v11; // rcx
  bool hostFlag; // al
  unsigned __int16 v13; // dx
  unsigned int v14; // er9
  Fw::MatchingTarget::ROOM_MEMBER_INFO *v15; // rbx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rsi
  unsigned __int64 m_ulSteamIDLobby; // rbx
  __int64 v26; // rdi
  const char *MyName; // rax
  __int64 v28; // rdx
  __int64 *v29; // rsi
  unsigned __int64 v30; // rbx
  __int64 v31; // rdi
  AgString *v32; // rax
  const char *CString; // rax
  unsigned int v34; // [rsp+20h] [rbp-68h]
  CSteamID v35; // [rsp+30h] [rbp-58h]
  AgString v36; // [rsp+48h] [rbp-40h] BYREF
  char v37; // [rsp+90h] [rbp+8h] BYREF

  if ( pLobbyChatUpdate->m_ulSteamIDLobby == Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
    v2 = 0;
    p_memberId = &Fw::MatchingTarget::m_RoomMember[0].memberId;
    if ( (pLobbyChatUpdate->m_rgfChatMemberStateChange & 1) != 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
      v4 = -1;
      LODWORD(v5) = 0;
      v6 = &Fw::MatchingTarget::m_RoomMember[0].memberId;
      do
      {
        if ( *((_BYTE *)v6 - 24) )
        {
          if ( *v6 == pLobbyChatUpdate->m_ulSteamIDUserChanged )
            goto LABEL_11;
        }
        else if ( v4 == -1 )
        {
          v4 = v5;
        }
        v5 = (unsigned int)(v5 + 1);
        v6 += 5;
      }
      while ( (int)v5 < 12 );
      if ( v4 != -1 )
      {
        v7 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v5);
        v8 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *, CSteamID::SteamID_t))(**(_QWORD **)(v7 + 32) + 280i64))(
                          *(_QWORD *)(v7 + 32),
                          &v37,
                          Fw::MatchingTarget::m_RoomId.m_steamid);
        v9 = v4;
        Fw::MatchingTarget::m_RoomMember[v9].active = 1;
        Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)pLobbyChatUpdate->m_ulSteamIDUserChanged);
        AgString::operator=(&Fw::MatchingTarget::m_RoomMember[v9].npId.handle, Name);
        v11.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)pLobbyChatUpdate->m_ulSteamIDUserChanged;
        Fw::MatchingTarget::m_RoomMember[v9].memberId = v11.m_steamid.m_unAll64Bits;
        hostFlag = pLobbyChatUpdate->m_ulSteamIDUserChanged == v8;
        Fw::MatchingTarget::m_RoomMember[v9].hostFlag = hostFlag;
        Fw::NetTransceiver::AddPeer(
          v11,
          v13,
          v11.m_steamid.m_unAll64Bits,
          v14,
          v34,
          &Fw::MatchingTarget::m_RoomMember[v9].npId,
          v35,
          hostFlag);
      }
LABEL_11:
      LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
    }
    if ( (pLobbyChatUpdate->m_rgfChatMemberStateChange & 0x1E) != 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
      v15 = Fw::MatchingTarget::m_RoomMember;
      while ( v15->memberId != pLobbyChatUpdate->m_ulSteamIDUserChanged )
      {
        if ( (__int64)++v15 >= (__int64)&Fw::MatchingTarget::m_RoomId )
          goto LABEL_27;
      }
      v16 = Fw::MatchingTarget::m_RoomOwnerChanged;
      if ( v15->hostFlag )
        v16 = 1;
      Fw::MatchingTarget::m_RoomOwnerChanged = v16;
      Fw::NetTransceiver::DelPeer(v15->memberId);
      *(_WORD *)&v15->active = 0;
      v15->memberId = 0i64;
      v15->lastPacketReceived = 0i64;
      AgString::~AgString(&v15->npId.handle);
      if ( Fw::MatchingTarget::m_RoomOwnerChanged )
      {
        v18 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v17);
        v19 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64))(**(_QWORD **)(v18 + 32) + 280i64))(
                           *(_QWORD *)(v18 + 32),
                           &v37,
                           pLobbyChatUpdate->m_ulSteamIDLobby);
        v21 = *v19;
        if ( *v19 == Fw::NetworkCommon::m_NpOnlineId.data )
        {
          v22 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v20);
          (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(v22 + 32) + 288i64))(
            *(_QWORD *)(v22 + 32),
            pLobbyChatUpdate->m_ulSteamIDLobby,
            v21);
          v24 = *(__int64 **)(SteamInternal_ContextInit(
                                &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                                v23)
                            + 32);
          m_ulSteamIDLobby = pLobbyChatUpdate->m_ulSteamIDLobby;
          v26 = *v24;
          MyName = SteamNameCache::getMyName(SteamNameCache::ms_instance);
          (*(void (__fastcall **)(__int64 *, unsigned __int64, const char *, const char *))(v26 + 160))(
            v24,
            m_ulSteamIDLobby,
            "OWNER",
            MyName);
          v29 = *(__int64 **)(SteamInternal_ContextInit(
                                &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                                v28)
                            + 32);
          AgString::AgString(&v36, Fw::NetworkCommon::m_NpOnlineId.data);
          v30 = pLobbyChatUpdate->m_ulSteamIDLobby;
          v31 = *v29;
          CString = AgString::getCString(v32);
          (*(void (__fastcall **)(__int64 *, unsigned __int64, const char *, const char *))(v31 + 160))(
            v29,
            v30,
            "OWNERID",
            CString);
          AgString::~AgString(&v36);
        }
        while ( !*p_memberId || *p_memberId != v21 )
        {
          ++v2;
          p_memberId += 5;
          if ( v2 >= 12 )
            goto LABEL_27;
        }
        Fw::MatchingTarget::m_RoomMember[v2].hostFlag = 1;
      }
LABEL_27:
      LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
    }
  }
}

void __fastcall Fw::MatchingTargetCallbackHandler::OnLobbyChatUpdate(
        Fw::MatchingTargetCallbackHandler *this,
        LobbyChatUpdate_t *pParam)
{
  Fw::MatchingTarget::OnLobbyChatUpdate(pParam);
}

void __fastcall Fw::MatchingTarget::OnLobbyCreated(LobbyCreated_t *pParam)
{
  __int64 m_eResult; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rsi
  unsigned __int64 m_ulSteamIDLobby; // rbx
  __int64 v7; // rdi
  const char *MyName; // rax
  __int64 v9; // rdx
  __int64 *v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  AgString *v13; // rax
  const char *CString; // rax
  __int64 v15; // rdx
  __int64 *v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  AgString *v19; // rax
  const char *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rsi
  unsigned __int64 v23; // rbx
  __int64 v24; // rdi
  AgString *v25; // rax
  const char *v26; // rax
  AgString *v27; // rax
  const char *v28; // rax
  int v29; // er13
  Fw::ROOM_ATTR *v30; // r14
  AgString *v31; // rax
  AgString *v32; // rsi
  const AgString *v33; // rax
  const AgString *v34; // rbx
  const AgString *v35; // rax
  AgString *v36; // rdi
  const char *v37; // rbx
  const char *v38; // rax
  __int64 v39; // rdx
  __int64 *v40; // r15
  AgString *v41; // rax
  AgString *v42; // rdi
  const AgString *v43; // rax
  const AgString *v44; // rbx
  const AgString *v45; // rax
  AgString *v46; // rsi
  unsigned __int64 v47; // rbx
  __int64 v48; // r14
  const char *v49; // rdi
  const char *v50; // rax
  __int64 v51; // rdx
  __int64 *v52; // rsi
  unsigned __int64 v53; // rbx
  __int64 v54; // rdi
  AgString *v55; // rax
  const char *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  AgString result; // [rsp+28h] [rbp-59h] BYREF
  AgString v60; // [rsp+38h] [rbp-49h] BYREF
  __int64 v61; // [rsp+48h] [rbp-39h]
  AgString v62; // [rsp+50h] [rbp-31h] BYREF
  AgString v63; // [rsp+60h] [rbp-21h] BYREF
  AgString v64; // [rsp+70h] [rbp-11h] BYREF
  AgString v65; // [rsp+80h] [rbp-1h] BYREF
  AgString v66; // [rsp+90h] [rbp+Fh] BYREF
  AgString v67; // [rsp+A0h] [rbp+1Fh] BYREF
  Fw::ROOM_ATTR *v68; // [rsp+E8h] [rbp+67h]

  v61 = -2i64;
  m_eResult = (unsigned int)pParam->m_eResult;
  if ( (_DWORD)m_eResult == 1 )
  {
    v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, m_eResult);
    (*(void (__fastcall **)(_QWORD, unsigned __int64, const char *, char *))(**(_QWORD **)(v3 + 32) + 160i64))(
      *(_QWORD *)(v3 + 32),
      pParam->m_ulSteamIDLobby,
      "NAME",
      Fw::MatchingTarget::m_RoomAttr.m_RoomName);
    v5 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v4)
                     + 32);
    m_ulSteamIDLobby = pParam->m_ulSteamIDLobby;
    v7 = *v5;
    MyName = SteamNameCache::getMyName(SteamNameCache::ms_instance);
    (*(void (__fastcall **)(__int64 *, unsigned __int64, const char *, const char *))(v7 + 160))(
      v5,
      m_ulSteamIDLobby,
      "OWNER",
      MyName);
    v10 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v9)
                      + 32);
    AgString::AgString(&result, Fw::NetworkCommon::m_NpOnlineId.data);
    v11 = pParam->m_ulSteamIDLobby;
    v12 = *v10;
    CString = AgString::getCString(v13);
    (*(void (__fastcall **)(__int64 *, unsigned __int64, const char *, const char *))(v12 + 160))(
      v10,
      v11,
      "OWNERID",
      CString);
    AgString::~AgString(&result);
    v16 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v15)
                      + 32);
    AgString::AgString(&result, Fw::MatchingTarget::m_RoomAttr.m_WorldIdIndex);
    v17 = pParam->m_ulSteamIDLobby;
    v18 = *v16;
    v20 = AgString::getCString(v19);
    (*(void (__fastcall **)(__int64 *, unsigned __int64, const char *, const char *))(v18 + 160))(
      v16,
      v17,
      "WORLDID",
      v20);
    AgString::~AgString(&result);
    v22 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v21)
                      + 32);
    AgString::AgString(&result, Fw::MatchingTarget::m_RoomAttr.m_PrivateSlotNum);
    v23 = pParam->m_ulSteamIDLobby;
    v24 = *v22;
    v26 = AgString::getCString(v25);
    (*(void (__fastcall **)(__int64 *, unsigned __int64, const char *, const char *))(v24 + 160))(
      v22,
      v23,
      "PRIVATESLOTS",
      v26);
    AgString::~AgString(&result);
    AgString::AgString(&result, Fw::MatchingTarget::m_RoomAttr.m_WorldIdIndex);
    v28 = AgString::getCString(v27);
    AgTrace("WORLDID %s\n", v28);
    AgString::~AgString(&result);
    v29 = 0;
    v30 = &Fw::MatchingTarget::m_RoomAttr;
    v68 = &Fw::MatchingTarget::m_RoomAttr;
    do
    {
      AgString::AgString(&v64, v30->m_Attr[0].num);
      v32 = v31;
      AgString::AgString(&v63, v29);
      v34 = v33;
      AgString::AgString(&v62, "ATTR", -1);
      v36 = operator+(&result, v35, v34);
      v37 = AgString::getCString(v32);
      v38 = AgString::getCString(v36);
      AgTrace("%s %s %s\n", v38, "=", v37);
      AgString::~AgString(&result);
      AgString::~AgString(&v62);
      AgString::~AgString(&v63);
      AgString::~AgString(&v64);
      v40 = *(__int64 **)(SteamInternal_ContextInit(
                            &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                            v39)
                        + 32);
      AgString::AgString(&v60, v30->m_Attr[0].num);
      v42 = v41;
      AgString::AgString(&v67, v29);
      v44 = v43;
      AgString::AgString(&v66, "ATTR", -1);
      v46 = operator+(&v65, v45, v44);
      v47 = pParam->m_ulSteamIDLobby;
      v48 = *v40;
      v49 = AgString::getCString(v42);
      v50 = AgString::getCString(v46);
      (*(void (__fastcall **)(__int64 *, unsigned __int64, const char *, const char *))(v48 + 160))(v40, v47, v50, v49);
      AgString::~AgString(&v65);
      AgString::~AgString(&v66);
      AgString::~AgString(&v67);
      AgString::~AgString(&v60);
      ++v29;
      v30 = (Fw::ROOM_ATTR *)&v68->m_Attr[1];
      v68 = (Fw::ROOM_ATTR *)((char *)v68 + 12);
    }
    while ( v29 < 8 );
    v52 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v51)
                      + 32);
    AgString::AgString(&v60, 3);
    v53 = pParam->m_ulSteamIDLobby;
    v54 = *v52;
    v56 = AgString::getCString(v55);
    (*(void (__fastcall **)(__int64 *, unsigned __int64, const char *, const char *))(v54 + 160))(
      v52,
      v53,
      "VERSION",
      v56);
    AgString::~AgString(&v60);
    if ( !Fw::MatchingTarget::m_RoomAttr.m_WorldIdIndex || Fw::MatchingTarget::m_RoomAttr.m_WorldIdIndex == 5 )
    {
      v58 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v57);
      (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(v58 + 32) + 264i64))(
        *(_QWORD *)(v58 + 32),
        pParam->m_ulSteamIDLobby,
        3i64);
    }
  }
  else
  {
    AgTrace("OnLobbyCreated failed with %i %ul", m_eResult, pParam->m_ulSteamIDLobby);
    g_NetworkManager.gamedata.error = NETWORK_ERROR_TYPE_CONNECTION;
  }
}

void __fastcall Fw::MatchingTargetCallbackHandler::OnLobbyCreated(
        Fw::MatchingTargetCallbackHandler *this,
        LobbyCreated_t *pParam)
{
  Fw::MatchingTarget::OnLobbyCreated(pParam);
}

void __fastcall Fw::MatchingTarget::OnLobbyEntered(LobbyEnter_t *pParam)
{
  unsigned __int64 *p_memberId; // rbx
  __int64 m_EChatRoomEnterResponse; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebp
  unsigned int i; // esi
  __int64 v12; // rax
  unsigned __int64 m_unAll64Bits; // rdi
  int v14; // ebx
  __int64 v15; // r8
  int v16; // ecx
  Fw::MatchingTarget::ROOM_MEMBER_INFO *v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  UserId *pNpId; // rbx
  const char *MyName; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // er9
  unsigned int v25; // [rsp+20h] [rbp-58h]
  CSteamID v26; // [rsp+30h] [rbp-48h]
  CSteamID id; // [rsp+80h] [rbp+8h] BYREF
  char v28; // [rsp+88h] [rbp+10h] BYREF
  char v29; // [rsp+90h] [rbp+18h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
  p_memberId = &Fw::MatchingTarget::m_RoomMember[0].memberId;
  do
  {
    *((_WORD *)p_memberId - 12) = 0;
    *p_memberId = 0i64;
    p_memberId[1] = 0i64;
    AgString::~AgString((AgString *)p_memberId - 1);
    p_memberId += 5;
  }
  while ( (__int64)p_memberId < (__int64)&Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend );
  m_EChatRoomEnterResponse = pParam->m_EChatRoomEnterResponse;
  if ( (_DWORD)m_EChatRoomEnterResponse == 1 )
  {
    Fw::MatchingTarget::m_RoomId.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)pParam->m_ulSteamIDLobby;
    AgTrace("Entered lobby %ul", Fw::MatchingTarget::m_RoomId.m_steamid.m_comp);
    v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v4);
    v6 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, CSteamID *, CSteamID::SteamID_t))(**(_QWORD **)(v5 + 32) + 280i64))(
                      *(_QWORD *)(v5 + 32),
                      &id,
                      Fw::MatchingTarget::m_RoomId.m_steamid);
    v8 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v7);
    v10 = (*(__int64 (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v8 + 32) + 136i64))(
            *(_QWORD *)(v8 + 32),
            Fw::MatchingTarget::m_RoomId.m_steamid);
    for ( i = 0; (int)i < v10; ++i )
    {
      v12 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v9);
      (*(void (__fastcall **)(_QWORD, CSteamID *, CSteamID::SteamID_t, _QWORD))(**(_QWORD **)(v12 + 32) + 144i64))(
        *(_QWORD *)(v12 + 32),
        &id,
        Fw::MatchingTarget::m_RoomId.m_steamid,
        i);
      m_unAll64Bits = id.m_steamid.m_unAll64Bits;
      v14 = -1;
      v15 = -1i64;
      v16 = 0;
      v9 = 0i64;
      v17 = Fw::MatchingTarget::m_RoomMember;
      do
      {
        if ( v17->active )
        {
          if ( v17->memberId == id.m_steamid.m_comp )
            goto LABEL_17;
        }
        else if ( v15 == -1 )
        {
          v14 = v16;
          v15 = v9;
        }
        ++v16;
        ++v9;
        ++v17;
      }
      while ( v16 < 12 );
      if ( v14 != -1 )
      {
        v18 = v15;
        Fw::MatchingTarget::m_RoomMember[v15].active = 1;
        v19 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v9);
        pNpId = (UserId *)((char *)&Fw::MatchingTarget::m_RoomMember[0].npId + 32 * v14 + 8 * v14);
        if ( m_unAll64Bits == *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v19 + 8) + 16i64))(
                                           *(_QWORD *)(v19 + 8),
                                           &v28) )
          MyName = SteamNameCache::getMyName(SteamNameCache::ms_instance);
        else
          MyName = SteamNameCache::getName(SteamNameCache::ms_instance, id);
        AgString::operator=(&pNpId->handle, MyName);
        Fw::MatchingTarget::m_RoomMember[v18].memberId = m_unAll64Bits;
        Fw::MatchingTarget::m_RoomMember[v18].hostFlag = m_unAll64Bits == v6;
        v23 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v22);
        if ( m_unAll64Bits != *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v23 + 8) + 16i64))(
                                           *(_QWORD *)(v23 + 8),
                                           &v29) )
          Fw::NetTransceiver::AddPeer(
            (CSteamID)Fw::MatchingTarget::m_RoomMember[v18].memberId,
            v9,
            Fw::MatchingTarget::m_RoomMember[v18].memberId,
            v24,
            v25,
            pNpId,
            v26,
            Fw::MatchingTarget::m_RoomMember[v18].hostFlag);
      }
LABEL_17:
      ;
    }
  }
  else
  {
    AgTrace("Entered lobby failed %i %ul", m_EChatRoomEnterResponse, pParam->m_ulSteamIDLobby);
    if ( pParam->m_EChatRoomEnterResponse == 2 )
    {
      g_NetworkManager.gamedata.error = NETWORK_ERROR_TYPE_ROOMNOTFOUND;
    }
    else if ( pParam->m_EChatRoomEnterResponse == 3 || pParam->m_EChatRoomEnterResponse != 4 )
    {
      g_NetworkManager.gamedata.error = NETWORK_ERROR_TYPE_OTHER;
    }
    else
    {
      g_NetworkManager.gamedata.error = NETWORK_ERROR_TYPE_ROOMFULL;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
}

void __fastcall Fw::MatchingTargetCallbackHandler::OnLobbyEntered(
        Fw::MatchingTargetCallbackHandler *this,
        LobbyEnter_t *pParam)
{
  Fw::MatchingTarget::OnLobbyEntered(pParam);
}

void __fastcall Fw::MatchingTargetCallbackHandler::OnLobbyKicked(
        Fw::MatchingTargetCallbackHandler *this,
        LobbyKicked_t *pParam)
{
  Fw::MatchingTarget::m_RoomKickoutFlag = 1;
}

void __fastcall Fw::MatchingTarget::OnLobbyMatchList(LobbyMatchList_t *pLobbyMatchList)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  const char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  const char *v10; // rax
  unsigned __int64 v11; // rbx
  Fw::MatchingTarget::SEARCH_ROOM_INFO *v12; // r13
  const char *CString; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  const char *v20; // rax
  int v21; // ebx
  Fw::RoomSearchAttr *attr; // r14
  __int64 *v23; // rsi
  const AgString *v24; // rax
  const AgString *v25; // rdi
  const AgString *v26; // rax
  AgString *v27; // rax
  __int64 v28; // rdi
  const char *v29; // rax
  const char *v30; // rax
  __int64 v31[2]; // [rsp+20h] [rbp-208h] BYREF
  AgString result; // [rsp+30h] [rbp-1F8h] BYREF
  AgString v33; // [rsp+40h] [rbp-1E8h] BYREF
  AgString v34; // [rsp+50h] [rbp-1D8h] BYREF

  v31[1] = -2i64;
  v31[0] &= 0xFF0FFFFF00000000ui64;
  HIBYTE(v31[0]) = 0;
  HIDWORD(v31[0]) &= 0xFFF00000;
  Fw::MatchingTarget::m_RoomId.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)v31[0];
  memset(Fw::MatchingTarget::SearchRoomInfo, 0, sizeof(Fw::MatchingTarget::SearchRoomInfo));
  v2 = 0i64;
  AgTrace("Lobbies found %i", pLobbyMatchList->m_nLobbiesMatching);
  if ( pLobbyMatchList->m_nLobbiesMatching )
  {
    do
    {
      v4 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v3);
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(v4 + 32) + 96i64))(
        *(_QWORD *)(v4 + 32),
        v31,
        (unsigned int)v2);
      Fw::MatchingTarget::SearchRoomInfo[v2].roomId.m_steamid.m_unAll64Bits = v31[0];
      v6 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v5);
      v7 = (const char *)(*(__int64 (__fastcall **)(_QWORD, __int64, const char *))(**(_QWORD **)(v6 + 32) + 152i64))(
                           *(_QWORD *)(v6 + 32),
                           v31[0],
                           "OWNER");
      AgString::operator=(&Fw::MatchingTarget::SearchRoomInfo[v2].ownerNpId.handle, v7);
      v9 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v8);
      v10 = (const char *)(*(__int64 (__fastcall **)(_QWORD, __int64, const char *))(**(_QWORD **)(v9 + 32) + 152i64))(
                            *(_QWORD *)(v9 + 32),
                            v31[0],
                            "OWNERID");
      v11 = strtoull(v10, 0i64, 10);
      v12 = &Fw::MatchingTarget::SearchRoomInfo[v2];
      v12->ownerSteamId = v11;
      CString = AgString::getCString(&v12->ownerNpId.handle);
      AgTrace("Lobby found %i owner %s %ul", v31[0], CString, v11);
      v15 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v14);
      v12->maxSlot = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v15 + 32) + 256i64))(
                       *(_QWORD *)(v15 + 32),
                       v31[0]);
      v17 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v16);
      v12->curMemberNum = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v17 + 32) + 136i64))(
                            *(_QWORD *)(v17 + 32),
                            v31[0]);
      v12->rtt = 0x7FFFFFFF;
      v19 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v18);
      v20 = (const char *)(*(__int64 (__fastcall **)(_QWORD, __int64, const char *))(**(_QWORD **)(v19 + 32) + 152i64))(
                            *(_QWORD *)(v19 + 32),
                            v31[0],
                            "PRIVATESLOTS");
      v12->publicSlotsAvailable = v12->maxSlot - v12->curMemberNum - atol(v20);
      v21 = 0;
      attr = Fw::MatchingTarget::SearchRoomInfo[v2].attr;
      do
      {
        attr->attributeIndex = v21;
        v23 = *(__int64 **)(SteamInternal_ContextInit(
                              &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                              v3)
                          + 32);
        AgString::AgString(&v34, v21);
        v25 = v24;
        AgString::AgString(&v33, "ATTR", -1);
        v27 = operator+(&result, v26, v25);
        v28 = *v23;
        v29 = AgString::getCString(v27);
        v30 = (const char *)(*(__int64 (__fastcall **)(__int64 *, __int64, const char *))(v28 + 152))(v23, v31[0], v29);
        attr->num = atol(v30);
        AgString::~AgString(&result);
        AgString::~AgString(&v33);
        AgString::~AgString(&v34);
        ++v21;
        ++attr;
      }
      while ( v21 < 8 );
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < pLobbyMatchList->m_nLobbiesMatching );
  }
  Fw::MatchingTarget::m_IsRoomSearchEnd = 1;
  Fw::MatchingTarget::m_SearchRoomNum = v2;
}

void __fastcall Fw::MatchingTargetCallbackHandler::OnLobbyMatchList(
        Fw::MatchingTargetCallbackHandler *this,
        LobbyMatchList_t *pParam)
{
  Fw::MatchingTarget::OnLobbyMatchList(pParam);
}

void __fastcall Fw::MatchingTarget::OnP2PSessionConnectFail(P2PSessionConnectFail_t *pParam)
{
  Fw::MatchingTarget::ROOM_MEMBER_INFO *v2; // rdi
  __int64 v3; // rdx
  const char *v4; // rcx
  unsigned int dwFlags; // [rsp+38h] [rbp+10h] BYREF

  if ( g_NetworkManager.gamedata.onlineState == NET_STATE_WAITCLIENT
    || (unsigned int)(g_NetworkManager.gamedata.onlineState - 8) <= 8 )
  {
    dwFlags = 0;
    if ( InternetGetConnectedState(&dwFlags, 0) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
      v2 = Fw::MatchingTarget::m_RoomMember;
      while ( v2->memberId != pParam->m_steamIDRemote.m_steamid.m_unAll64Bits )
      {
        if ( (__int64)++v2 >= (__int64)&Fw::MatchingTarget::m_RoomId )
          goto LABEL_13;
      }
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      if ( Fw::MatchingTarget::IsRoomOwner(v4, v3) )
      {
        Fw::MatchingTarget::KickoutRoomMember(&v2->memberId);
        Fw::NetTransceiver::DelPeer(v2->memberId);
        *(_WORD *)&v2->active = 0;
        v2->memberId = 0i64;
        v2->lastPacketReceived = 0i64;
        AgString::~AgString(&v2->npId.handle);
      }
      else if ( v2->hostFlag )
      {
        Fw::NetTransceiver::DelPeer(v2->memberId);
        *(_WORD *)&v2->active = 0;
        v2->memberId = 0i64;
        v2->lastPacketReceived = 0i64;
        AgString::~AgString(&v2->npId.handle);
        Fw::MatchingTarget::m_RoomOwnerChanged = 1;
      }
LABEL_13:
      LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::MatchingTarget::m_MemberMutex);
    }
    else
    {
      g_NetworkManager.gamedata.error = NETWORK_ERROR_TYPE_CONNECTION;
      Fw::MatchingTarget::LeaveRoom();
    }
  }
}

void __fastcall Fw::MatchingTargetCallbackHandler::OnP2PSessionConnectFail(
        Fw::MatchingTargetCallbackHandler *this,
        P2PSessionConnectFail_t *pParam)
{
  Fw::MatchingTarget::OnP2PSessionConnectFail(pParam);
}

void __fastcall Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest::Run(
        Fw::MatchingTargetCallbackHandler *this,
        P2PSessionRequest_t *pParam)
{
  __int64 v3; // rax

  v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, pParam);
  (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v3 + 64) + 24i64))(
    *(_QWORD *)(v3 + 64),
    pParam->m_steamIDRemote.m_steamid);
}

void __fastcall Fw::MatchingTarget::OnPersonaStateChanged(PersonaStateChange_t *pParam, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  CSteamID::SteamID_t v5; // rdx
  int v6; // edi
  __int64 v7; // rax
  const char *Name; // rax
  CSteamID id; // [rsp+38h] [rbp+10h] BYREF

  v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, a2);
  v4 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v3 + 32) + 136i64))(
         *(_QWORD *)(v3 + 32),
         Fw::MatchingTarget::m_RoomId.m_steamid);
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD))SteamInternal_ContextInit)(
             &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
             (CSteamID::SteamID_t)v5.m_unAll64Bits);
      (*(void (__fastcall **)(_QWORD, CSteamID *, CSteamID::SteamID_t, _QWORD))(**(_QWORD **)(v7 + 32) + 144i64))(
        *(_QWORD *)(v7 + 32),
        &id,
        Fw::MatchingTarget::m_RoomId.m_steamid,
        v4);
      v5.m_comp = id.m_steamid.m_comp;
      if ( id.m_steamid.m_comp == pParam->m_ulSteamID )
        break;
      if ( (int)++v4 >= v6 )
        return;
    }
    if ( (pParam->m_nChangeFlags & 1) != 0 )
    {
      Name = SteamNameCache::getName(SteamNameCache::ms_instance, id);
      AgString::operator=(&Fw::MatchingTarget::m_RoomMember[v4].npId.handle, Name);
    }
  }
}

void __fastcall Fw::MatchingTargetCallbackHandler::OnPersonaStateChanged(
        Fw::MatchingTargetCallbackHandler *this,
        PersonaStateChange_t *pParam)
{
  Fw::MatchingTarget::OnPersonaStateChanged(pParam, (__int64)pParam);
}

void __fastcall CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatUpdate_t,0>::Run(
        CCallback<Fw::cTusReadWork,UserStatsReceived_t,0> *this,
        void *pvParam)
{
  this->m_Func(this->m_pObj, (UserStatsReceived_t *)pvParam);
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

char __fastcall Fw::MatchingTarget::SearchRoom(Fw::ROOM_ATTR *pRoomAttr)
{
  Fw::ROOM_ATTR *v1; // rbx
  AgString *v2; // rax
  const char *CString; // rax
  __int64 v4; // rdx
  __int64 *v5; // rsi
  __int64 v6; // rdi
  AgString *v7; // rax
  const char *v8; // rax
  __int64 num; // rdx
  int i; // er14
  __int64 v11; // rax
  unsigned int v12; // er15
  const char *v13; // r12
  AgString *v14; // rax
  AgString *v15; // rbp
  const AgString *v16; // rax
  const AgString *v17; // rdi
  const AgString *v18; // rax
  AgString *v19; // rsi
  const char *v20; // rdi
  const char *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rsi
  const AgString *v24; // rax
  const AgString *v25; // rdi
  const AgString *v26; // rax
  AgString *v27; // rax
  __int64 v28; // rdi
  const char *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  AgString result; // [rsp+28h] [rbp-A0h] BYREF
  AgString v35; // [rsp+38h] [rbp-90h] BYREF
  AgString v36; // [rsp+48h] [rbp-80h] BYREF
  AgString v37; // [rsp+58h] [rbp-70h] BYREF
  AgString v38; // [rsp+68h] [rbp-60h] BYREF
  AgString v39; // [rsp+78h] [rbp-50h] BYREF
  AgString v40; // [rsp+88h] [rbp-40h] BYREF

  v1 = pRoomAttr;
  Fw::MatchingTarget::m_SystemErrorCode = 0;
  Fw::MatchingTarget::m_IsRoomSearchEnd = 0;
  Fw::MatchingTarget::m_RoomKickoutFlag = 0;
  Fw::MatchingTarget::m_QosEndErrorRoomNum = 0;
  Fw::MatchingTarget::m_QosEndRoomNum = 0;
  Fw::MatchingTarget::m_SearchRoomNum = 0;
  AgString::AgString(&result, pRoomAttr->m_WorldIdIndex);
  CString = AgString::getCString(v2);
  AgTrace("WORLDID %s\n", CString);
  AgString::~AgString(&result);
  v5 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v4) + 32);
  AgString::AgString(&result, v1->m_WorldIdIndex);
  v6 = *v5;
  v8 = AgString::getCString(v7);
  (*(void (__fastcall **)(__int64 *, const char *, const char *, _QWORD, __int64))(v6 + 40))(
    v5,
    "WORLDID",
    v8,
    0i64,
    -2i64);
  AgString::~AgString(&result);
  for ( i = 0; i < 8; ++i )
  {
    if ( i == 1 )
    {
      v11 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, num);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 32) + 72i64))(
        *(_QWORD *)(v11 + 32),
        (unsigned int)v1->m_Attr[0].num);
    }
    else
    {
      num = (unsigned int)v1->m_Attr[0].num;
      if ( (_DWORD)num != -1 )
      {
        v12 = 0;
        v13 = "?";
        switch ( v1->m_Attr[0].searchOperator )
        {
          case 0u:
            v12 = 0;
            v13 = "=";
            break;
          case 1u:
            v12 = 3;
            v13 = "!=";
            break;
          case 2u:
            v12 = -1;
            v13 = "<";
            break;
          case 3u:
            v12 = -2;
            v13 = "<=";
            break;
          case 4u:
            v12 = 1;
            v13 = ">";
            break;
          case 5u:
            v12 = 2;
            v13 = ">=";
            break;
          default:
            break;
        }
        AgString::AgString(&v37, num);
        v15 = v14;
        AgString::AgString(&v36, i);
        v17 = v16;
        AgString::AgString(&v35, "ATTR", -1);
        v19 = operator+(&result, v18, v17);
        v20 = AgString::getCString(v15);
        v21 = AgString::getCString(v19);
        AgTrace("%s %s %s\n", v21, v13, v20);
        AgString::~AgString(&result);
        AgString::~AgString(&v35);
        AgString::~AgString(&v36);
        AgString::~AgString(&v37);
        v23 = *(__int64 **)(SteamInternal_ContextInit(
                              &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                              v22)
                          + 32);
        AgString::AgString(&v40, i);
        v25 = v24;
        AgString::AgString(&v39, "ATTR", -1);
        v27 = operator+(&v38, v26, v25);
        v28 = *v23;
        v29 = AgString::getCString(v27);
        (*(void (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD))(v28 + 48))(
          v23,
          v29,
          (unsigned int)v1->m_Attr[0].num,
          v12);
        AgString::~AgString(&v38);
        AgString::~AgString(&v39);
        AgString::~AgString(&v40);
      }
    }
    v1 = (Fw::ROOM_ATTR *)((char *)v1 + 12);
  }
  v30 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, num);
  (*(void (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)(v30 + 32) + 48i64))(
    *(_QWORD *)(v30 + 32),
    "VERSION",
    3i64);
  v32 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v31);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v32 + 32) + 32i64))(*(_QWORD *)(v32 + 32));
  return 1;
}

void Fw::MatchingTarget::SendQOSRequest(void)
{
  unsigned int v0; // er9
  int addrListNum; // ebx
  unsigned int v2; // er8
  __int64 v3; // rdx
  unsigned __int64 *p_ownerSteamId; // rcx
  double v5; // xmm0_8
  unsigned __int64 v6; // rcx
  char v7; // cl
  int *v8; // [rsp+28h] [rbp-620h]
  char buf; // [rsp+40h] [rbp-608h] BYREF
  unsigned __int64 v10; // [rsp+41h] [rbp-607h]
  __int64 addrList[50]; // [rsp+4A0h] [rbp-1A8h] BYREF

  v0 = Fw::MatchingTarget::m_SearchRoomNum;
  addrListNum = 0;
  v2 = 0;
  if ( Fw::MatchingTarget::m_SearchRoomNum )
  {
    v3 = 0i64;
    p_ownerSteamId = &Fw::MatchingTarget::SearchRoomInfo[0].ownerSteamId;
    do
    {
      if ( !*((_BYTE *)p_ownerSteamId + 552) )
      {
        ++addrListNum;
        addrList[v3++] = *p_ownerSteamId;
        if ( v3 > 4 )
          break;
      }
      ++v2;
      p_ownerSteamId += 72;
    }
    while ( v2 < v0 );
    if ( addrListNum <= 0 )
    {
      if ( v0 )
      {
        v7 = Fw::MatchingTarget::m_IsRoomSearchEnd;
        if ( !Fw::MatchingTarget::m_IsRoomSearchEnd )
          v7 = 1;
        Fw::MatchingTarget::m_IsRoomSearchEnd = v7;
      }
    }
    else
    {
      v5 = AgClock::getSystemTime() * 1000000.0;
      v6 = 0i64;
      if ( v5 >= 9.223372036854776e18 )
      {
        v5 = v5 - 9.223372036854776e18;
        if ( v5 < 9.223372036854776e18 )
          v6 = 0x8000000000000000ui64;
      }
      buf = 90;
      v10 = v6 + (unsigned int)(int)v5;
      Fw::NetTransceiver::SendUdp(&buf, 11, 2, addrList, addrListNum, v8, 1, 0);
    }
  }
}

void __fastcall Fw::MatchingTarget::SetRtt(unsigned __int64 ownerId, unsigned __int64 rtt)
{
  int v2; // ebx
  unsigned int v3; // edi
  bool *i; // rax
  __int64 v5; // rcx

  v2 = 0;
  v3 = rtt;
  if ( Fw::MatchingTarget::m_SearchRoomNum )
  {
    for ( i = &Fw::MatchingTarget::SearchRoomInfo[0].qosFlag; *((_QWORD *)i - 69) != ownerId || *i; i += 576 )
    {
      if ( ++v2 >= Fw::MatchingTarget::m_SearchRoomNum )
        return;
    }
    AgTrace("SetRtt %ul %ul", ownerId, rtt);
    v5 = v2;
    ++Fw::MatchingTarget::m_QosEndRoomNum;
    Fw::MatchingTarget::SearchRoomInfo[v5].rtt = v3;
    Fw::MatchingTarget::SearchRoomInfo[v5].qosFlag = 1;
  }
}

int sprintf(char *const _Buffer, const char *const _Format, ...)
{
  unsigned __int64 *v4; // rax
  int result; // eax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, _Format);
  v4 = _local_stdio_printf_options();
  result = _stdio_common_vsprintf(*v4 | 1, _Buffer, 0xFFFFFFFFFFFFFFFFui64, _Format, 0i64, va);
  if ( result < 0 )
    return -1;
  return result;
}

