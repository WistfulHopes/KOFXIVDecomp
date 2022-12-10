#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfigure.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B3C
OGLModel * BSUtil::copyOGLModelExtraParams(const OGLModel * pSrc, OGLModel * pDest); // 0x14021CF60
OGLModel * BSUtil::cloneOGLModel(const OGLModel * pSrc, OGLModel * pDest); // 0x14021D590
void BSUtil::createOGLFigureVertexBuffer(OGLFigure * pFigure); // 0x14021D5F0
OGLVec3 BSUtil::toRotate(const OGLMatrix & oglMatrix); // 0x14021DD10
OGLQuat BSUtil::multiplyRotateAxisByOGLQuat(const OGLQuat & rot, float angle, float x, float y, float z); // 0x14021DEC0
void BSUtil::getEulerAnglesByOGLQuat(const OGLQuat & rot, float * pOutX, float * pOutY, float * pOutZ); // 0x14021E040
bool BSUtil::wordToScreen(OGLVec3 & outVec, const OGLVec3 & pos, const OGLMatrix & matView, const OGLMatrix & matProj, float screenX, float screenY, float screenWidth, float screenHeight); // 0x14021E280
OGLFigure * BSUtil::createOGLFigure(long vertexCount, long indexCount, long materialCount, long multiUvCount); // 0x14021E460
bool BSUtil::createOGLMaterialIndexBuffer(OGLMaterial * pOGLMaterial, long bufferSize); // 0x14021E720
OGLModel * BSUtil::createOGLModelMultiple(const OGLModel * pOGLModelSrc, long objectCount, OGLMatrix matDefaultTrans, void(*InitFunc)(OGLFigure *, long, long)); // 0x14021E790//decompilation failure at 1408A0B3C!
OGLModel *__fastcall BSUtil::cloneOGLModel(const OGLModel *pSrc, OGLModel *pDest, unsigned __int8 a3)
{
  if ( !pDest )
    return 0i64;
  if ( !pSrc )
    return pDest;
  OGLModel::copyModel(pDest, (OGLModel *)pSrc, a3);
  return BSUtil::copyOGLModelExtraParams(pSrc, pDest);
}

OGLModel *__fastcall BSUtil::copyOGLModelExtraParams(const OGLModel *pSrc, OGLModel *pDest)
{
  OGLTexture *(*m_pMaterialMap)[10]; // rcx
  __int64 v6; // r8
  signed __int64 v7; // rdx
  int v8; // ebp
  __int64 v9; // r15
  OGLMaterial *m_pMaterial; // rax
  OGLMaterial *v11; // rcx
  OGLMaterial *v12; // rdi
  OGLMaterial *v13; // rbx
  __int64 m_shaderLightEyePosition; // r8
  _OWORD *p_x; // rcx
  char *v16; // rdx
  __int64 v17; // r9
  __int128 v18; // xmm0
  OGLLightManager *m_pLightManager; // rsi
  void *v20; // rcx
  OGLLightManager *v21; // rax
  OGLLightManager *v22; // rcx
  OGLLightNode *i; // rax
  OGLLightManager *v24; // [rsp+58h] [rbp+10h]

  if ( !pDest )
    return 0i64;
  if ( pSrc )
  {
    m_pMaterialMap = pDest->m_pMaterialMap;
    v6 = 64i64;
    v7 = (char *)pSrc - (char *)pDest;
    do
    {
      (*m_pMaterialMap)[0] = *(OGLTexture **)((char *)m_pMaterialMap + v7);
      (*m_pMaterialMap)[1] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[1] + v7);
      (*m_pMaterialMap)[2] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[2] + v7);
      (*m_pMaterialMap)[3] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[3] + v7);
      (*m_pMaterialMap)[4] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[4] + v7);
      (*m_pMaterialMap)[5] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[5] + v7);
      (*m_pMaterialMap)[6] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[6] + v7);
      (*m_pMaterialMap)[7] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[7] + v7);
      (*m_pMaterialMap)[8] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[8] + v7);
      (*m_pMaterialMap)[9] = *(OGLTexture **)((char *)&(*m_pMaterialMap)[9] + v7);
      ++m_pMaterialMap;
      --v6;
    }
    while ( v6 );
    if ( pSrc->m_useShaderFX )
    {
      v8 = 0;
      pDest->m_useShaderFX = 1;
      if ( pSrc->m_ucMaterialCount )
      {
        v9 = 0i64;
        do
        {
          m_pMaterial = pSrc->m_pMaterial;
          v11 = pDest->m_pMaterial;
          v12 = &m_pMaterial[v9];
          v11->m_alpha = m_pMaterial->m_alpha;
          v13 = &v11[v9];
          v13->m_shaderType = m_pMaterial[v9].m_shaderType;
          v13->m_hairLength = m_pMaterial[v9].m_hairLength;
          v13->m_hairforceExp = m_pMaterial[v9].m_hairforceExp;
          v13->m_hairforceStrength = m_pMaterial[v9].m_hairforceStrength;
          v13->m_hairLayers = m_pMaterial[v9].m_hairLayers;
          v13->m_FresnelPower = m_pMaterial[v9].m_FresnelPower;
          v13->m_FresnelScale = m_pMaterial[v9].m_FresnelScale;
          v13->m_FresnelBias = m_pMaterial[v9].m_FresnelBias;
          v13->m_HemiLightSkyCol[0] = m_pMaterial[v9].m_HemiLightSkyCol[0];
          v13->m_HemiLightGroundCol[0] = m_pMaterial[v9].m_HemiLightGroundCol[0];
          v13->m_DiffuseColour2[0] = m_pMaterial[v9].m_DiffuseColour2[0];
          v13->m_ReflectionColour[0] = m_pMaterial[v9].m_ReflectionColour[0];
          v13->m_vertexColAdj[0] = m_pMaterial[v9].m_vertexColAdj[0];
          v13->m_vertexCol1Adj[0] = m_pMaterial[v9].m_vertexCol1Adj[0];
          v13->m_TranslucencyOuterCol[0] = m_pMaterial[v9].m_TranslucencyOuterCol[0];
          v13->m_TranslucencyMiddleCol[0] = m_pMaterial[v9].m_TranslucencyMiddleCol[0];
          v13->m_TranslucencyInnerCol[0] = m_pMaterial[v9].m_TranslucencyInnerCol[0];
          v13->m_HemiLightSkyCol[1] = m_pMaterial[v9].m_HemiLightSkyCol[1];
          v13->m_HemiLightGroundCol[1] = m_pMaterial[v9].m_HemiLightGroundCol[1];
          v13->m_DiffuseColour2[1] = m_pMaterial[v9].m_DiffuseColour2[1];
          v13->m_ReflectionColour[1] = m_pMaterial[v9].m_ReflectionColour[1];
          v13->m_vertexColAdj[1] = m_pMaterial[v9].m_vertexColAdj[1];
          v13->m_vertexCol1Adj[1] = m_pMaterial[v9].m_vertexCol1Adj[1];
          v13->m_TranslucencyOuterCol[1] = m_pMaterial[v9].m_TranslucencyOuterCol[1];
          v13->m_TranslucencyMiddleCol[1] = m_pMaterial[v9].m_TranslucencyMiddleCol[1];
          v13->m_TranslucencyInnerCol[1] = m_pMaterial[v9].m_TranslucencyInnerCol[1];
          v13->m_HemiLightSkyCol[2] = m_pMaterial[v9].m_HemiLightSkyCol[2];
          v13->m_HemiLightGroundCol[2] = m_pMaterial[v9].m_HemiLightGroundCol[2];
          v13->m_DiffuseColour2[2] = m_pMaterial[v9].m_DiffuseColour2[2];
          v13->m_ReflectionColour[2] = m_pMaterial[v9].m_ReflectionColour[2];
          v13->m_vertexColAdj[2] = m_pMaterial[v9].m_vertexColAdj[2];
          v13->m_vertexCol1Adj[2] = m_pMaterial[v9].m_vertexCol1Adj[2];
          v13->m_TranslucencyOuterCol[2] = m_pMaterial[v9].m_TranslucencyOuterCol[2];
          v13->m_TranslucencyMiddleCol[2] = m_pMaterial[v9].m_TranslucencyMiddleCol[2];
          v13->m_TranslucencyInnerCol[2] = m_pMaterial[v9].m_TranslucencyInnerCol[2];
          v13->m_anisotropicSpread[0] = m_pMaterial[v9].m_anisotropicSpread[0];
          v13->m_texturePan1[0] = m_pMaterial[v9].m_texturePan1[0];
          v13->m_texturePan2[0] = m_pMaterial[v9].m_texturePan2[0];
          m_shaderLightEyePosition = (__int64)v11[v9].m_shaderLightEyePosition;
          p_x = (_OWORD *)&v11[v9].m_shaderLightPosition[0].x;
          v13->m_alphaPan[0] = m_pMaterial[v9].m_alphaPan[0];
          v16 = (char *)((char *)&m_pMaterial[v9] - (char *)v13);
          v13->m_anisotropicSpread[1] = m_pMaterial[v9].m_anisotropicSpread[1];
          v17 = 4i64;
          v13->m_texturePan1[1] = m_pMaterial[v9].m_texturePan1[1];
          v13->m_texturePan2[1] = m_pMaterial[v9].m_texturePan2[1];
          v13->m_alphaPan[1] = m_pMaterial[v9].m_alphaPan[1];
          v13->m_HemiLightIntensity = m_pMaterial[v9].m_HemiLightIntensity;
          v13->m_UseDiffuseColour2 = m_pMaterial[v9].m_UseDiffuseColour2;
          v13->m_SpecularPower = m_pMaterial[v9].m_SpecularPower;
          v13->m_SpecularMultiplier = m_pMaterial[v9].m_SpecularMultiplier;
          v13->m_NormalHeight = m_pMaterial[v9].m_NormalHeight;
          v13->m_Pinching = m_pMaterial[v9].m_Pinching;
          v13->m_ReflectionIntensity = m_pMaterial[v9].m_ReflectionIntensity;
          v13->m_ReflectionMultiplier = m_pMaterial[v9].m_ReflectionMultiplier;
          v13->m_useAnisotropicDirection = m_pMaterial[v9].m_useAnisotropicDirection;
          v13->m_DiffuseFunction = m_pMaterial[v9].m_DiffuseFunction;
          v13->m_SpecularFunction = m_pMaterial[v9].m_SpecularFunction;
          v13->m_multiUVLerpBlend = m_pMaterial[v9].m_multiUVLerpBlend;
          v13->m_multiUVAdditionalMul = m_pMaterial[v9].m_multiUVAdditionalMul;
          v13->m_emissiveAddition = m_pMaterial[v9].m_emissiveAddition;
          v13->m_emissiveMultiplier = m_pMaterial[v9].m_emissiveMultiplier;
          v13->m_textureAddPercentage = m_pMaterial[v9].m_textureAddPercentage;
          v13->m_vertexColMult = m_pMaterial[v9].m_vertexColMult;
          v13->m_vertexCol1Adj[0] = m_pMaterial[v9].m_vertexCol1Adj[0];
          v13->m_vertexCol1Adj[1] = m_pMaterial[v9].m_vertexCol1Adj[1];
          v13->m_vertexCol1Adj[2] = m_pMaterial[v9].m_vertexCol1Adj[2];
          v13->m_causticLerp = m_pMaterial[v9].m_causticLerp;
          v13->m_useTransparency = m_pMaterial[v9].m_useTransparency;
          v13->m_fillColourType = m_pMaterial[v9].m_fillColourType;
          v13->m_fillColour[0] = m_pMaterial[v9].m_fillColour[0];
          v13->m_fillColour[1] = m_pMaterial[v9].m_fillColour[1];
          v13->m_fillColour[2] = m_pMaterial[v9].m_fillColour[2];
          v13->m_fillColour[3] = m_pMaterial[v9].m_fillColour[3];
          v13->m_TranslucencyMultiplier = m_pMaterial[v9].m_TranslucencyMultiplier;
          v13->m_TranslucencyDistortion = m_pMaterial[v9].m_TranslucencyDistortion;
          v13->m_TranslucencyPower = m_pMaterial[v9].m_TranslucencyPower;
          v13->m_TranslucencyMinimum = m_pMaterial[v9].m_TranslucencyMinimum;
          v13->m_uiBlendMode = m_pMaterial[v9].m_uiBlendMode;
          do
          {
            m_shaderLightEyePosition += 12i64;
            v18 = *(_OWORD *)((char *)p_x++ + (_QWORD)v16);
            *(p_x - 1) = v18;
            p_x[3] = *(_OWORD *)((char *)p_x + (_QWORD)v16 + 48);
            p_x[7] = *(_OWORD *)((char *)p_x + (_QWORD)v16 + 112);
            p_x[11] = *(_OWORD *)&v16[(_QWORD)p_x + 176];
            p_x[15] = *(_OWORD *)&v16[(_QWORD)p_x + 240];
            p_x[19] = *(_OWORD *)&v16[(_QWORD)p_x + 304];
            *(_QWORD *)(m_shaderLightEyePosition - 12) = *(_QWORD *)&v16[m_shaderLightEyePosition - 12];
            *(_DWORD *)(m_shaderLightEyePosition - 4) = *(_DWORD *)&v16[m_shaderLightEyePosition - 4];
            --v17;
          }
          while ( v17 );
          m_pLightManager = v13->m_pLightManager;
          if ( m_pLightManager )
          {
            OGLLightManager::deleteAllLights(v13->m_pLightManager);
            OGLLightManager::clear(m_pLightManager);
            operator delete(v20, 0x2D0ui64);
            v13->m_pLightManager = 0i64;
          }
          v24 = (OGLLightManager *)operator new(0x2D0ui64);
          OGLLightManager::OGLLightManager(v24);
          v13->m_pLightManager = v21;
          OGLLightManager::copy(v21, v12->m_pLightManager);
          v22 = v13->m_pLightManager;
          for ( i = v22->m_pLightNodeList; i; i = i->next )
          {
            if ( i->m_light.m_bOn != 1 )
            {
              ++v22->m_activeLightCount;
              i->m_light.m_bOn = 1;
            }
          }
          ++v8;
          v13->m_iRenderNo = v12->m_iRenderNo;
          ++v9;
          v13->work0 = v12->work0;
          v13->work1 = v12->work1;
          v13->work2 = v12->work2;
          v13->work3 = v12->work3;
        }
        while ( v8 < pSrc->m_ucMaterialCount );
      }
    }
  }
  return pDest;
}

OGLFigure *__fastcall BSUtil::createOGLFigure(int vertexCount, int indexCount, int materialCount, int multiUvCount)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  OGLFigure *v7; // rax
  OGLFigure *v8; // rbx
  unsigned __int64 v9; // rsi
  float *v10; // rax
  unsigned int v11; // edx
  float *v12; // rax
  float *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  float *v16; // rax
  unsigned int *v17; // rax
  _DWORD *m_usTexCoordCount; // r14
  unsigned int *v19; // rax
  float **m_pfTexCoord; // rsi
  float **v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // edi
  float *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  bool v27; // cf
  unsigned __int64 v28; // rax
  unsigned __int64 *v29; // rax
  OGLMaterial *v30; // rdi
  OGLFigure *v32; // [rsp+38h] [rbp-40h]

  v4 = (unsigned int)materialCount;
  v5 = (unsigned int)indexCount;
  v32 = (OGLFigure *)operator new(0x108ui64);
  OGLFigure::OGLFigure(v32);
  v8 = v7;
  if ( v7 )
  {
    v7->m_iFormatType = 0;
    v7->m_usVertexCoordCount = vertexCount;
    v9 = (unsigned int)(3 * vertexCount);
    v10 = (float *)operator new[](saturated_mul(v9, 4ui64));
    v8->m_pfVertexCoord = v10;
    if ( !v10 )
      goto LABEL_3;
    v8->m_usNormalCoordCount = vertexCount;
    v12 = (float *)operator new[](saturated_mul(v9, 4ui64));
    v8->m_pfNormalCoord = v12;
    if ( !v12 )
      goto LABEL_3;
    v8->m_usVertexColorCount = vertexCount;
    v13 = (float *)operator new[](saturated_mul((unsigned int)(4 * vertexCount), 4ui64));
    v8->m_pfVertexColor = v13;
    if ( !v13 )
      goto LABEL_3;
    v14 = 0;
    if ( 4 * v8->m_usVertexColorCount )
    {
      v15 = 0i64;
      do
      {
        v8->m_pfVertexColor[v15] = 1.0;
        ++v14;
        ++v15;
      }
      while ( v14 < 4 * v8->m_usVertexColorCount );
    }
    v8->m_usTangentCoordCount = vertexCount;
    v16 = (float *)operator new[](saturated_mul(v9, 4ui64));
    v8->m_pfTangentCoord = v16;
    if ( v16
      && ((v8->m_pusIndex = 0i64, (v8->m_usIndexCount = v5) == 0)
       || (v17 = (unsigned int *)operator new[](saturated_mul(v5, 4ui64)), (v8->m_pusIndex = v17) != 0i64)) )
    {
      m_usTexCoordCount = v8->m_usTexCoordCount;
      v19 = v8->m_usTexCoordCount;
      m_pfTexCoord = v8->m_pfTexCoord;
      v21 = v8->m_pfTexCoord;
      v22 = 4i64;
      do
      {
        *v21 = 0i64;
        *v19 = 0;
        ++v21;
        ++v19;
        --v22;
      }
      while ( v22 );
      v8->m_uiMultiUvCount = 1;
      v23 = 0;
      while ( 1 )
      {
        *m_usTexCoordCount = vertexCount;
        v24 = (float *)operator new[](saturated_mul(2 * vertexCount, 4ui64));
        *m_pfTexCoord = v24;
        if ( !v24 )
          break;
        ++v23;
        ++m_usTexCoordCount;
        ++m_pfTexCoord;
        if ( v23 >= v8->m_uiMultiUvCount )
        {
          v8->m_ucMaterialCount = v4;
          v26 = 1128 * v4;
          if ( !is_mul_ok(v4, 0x468ui64) )
            v26 = -1i64;
          v27 = __CFADD__(v26, 8i64);
          v28 = v26 + 8;
          if ( v27 )
            v28 = -1i64;
          v29 = (unsigned __int64 *)operator new[](v28);
          if ( v29 )
          {
            *v29 = v4;
            v30 = (OGLMaterial *)(v29 + 1);
            `eh vector constructor iterator'(
              v29 + 1,
              0x468ui64,
              v4,
              (void (__fastcall *)(void *))OGLMaterial::OGLMaterial,
              (void (__fastcall *)(void *))OGLMaterial::~OGLMaterial);
          }
          else
          {
            v30 = 0i64;
          }
          v8->m_pMaterial = v30;
          if ( v30 )
          {
            v8->m_pBindPose = 0i64;
            v8->m_pBone = 0i64;
            v8->m_uiBoneCount = 0;
            v8->m_psVertexCoordIndex = 0i64;
            v8->m_iNodeLevelMax = 0;
            v8->m_pVerOptiInfo = 0i64;
            return v8;
          }
          break;
        }
      }
      OGLFigure::finalize(v8, v25);
      operator delete(v8, 0x108ui64);
    }
    else
    {
LABEL_3:
      OGLFigure::`scalar deleting destructor'(v8, v11);
    }
  }
  return 0i64;
}

void __fastcall BSUtil::createOGLFigureVertexBuffer(OGLFigure *pFigure, __int64 a2, unsigned __int64 a3)
{
  Framework::GLManager *v4; // r15
  char *v5; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // r8
  char *v8; // rbx
  unsigned int m_usVertexCoordCount; // ecx
  int v10; // ecx
  float *v11; // r9
  unsigned __int64 v12; // r10
  float *v13; // r9
  float *m_pfVertexCoord; // rcx
  unsigned int m_usNormalCoordCount; // eax
  int v16; // eax
  char *v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // r9
  float *m_pfNormalCoord; // rcx
  unsigned int m_usTangentCoordCount; // eax
  int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // r9
  float *m_pfTangentCoord; // rcx
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // r14
  char *v31; // rbx
  OGLVertexOptiInfo *v32; // r10
  __int64 v33; // rsi
  _DWORD *v34; // rdx
  unsigned __int16 *v35; // r9
  signed __int64 v36; // r11
  OGLVertexOptiInfo *m_pVerOptiInfo; // rcx
  unsigned __int16 *v38; // rbx
  int v39; // eax
  __int64 v40; // rdx
  void *v41; // rax
  unsigned __int64 v42; // rdx
  unsigned int *m_pusIndex; // rcx

  v4 = Framework::GLManager::glm;
  v5 = (char *)Framework::MemoryManager::allocate(
                 &Framework::GLManager::glm->allocateStaticBuffers,
                 136i64 * pFigure->m_usVertexCoordCount,
                 a3);
  v8 = v5;
  pFigure->m_pfVertexBuffer = v5;
  m_usVertexCoordCount = pFigure->m_usVertexCoordCount;
  if ( m_usVertexCoordCount )
  {
    v10 = m_usVertexCoordCount - 1;
    v6 = v10;
    if ( v10 >= 0 )
    {
      if ( v10 + 1i64 >= 4 )
      {
        v7 = 12i64 * v10;
        v11 = (float *)&v5[136 * v10 + 8];
        v12 = (unsigned __int64)(v10 + 1i64) >> 2;
        v6 = v10 - 4 * v12;
        do
        {
          *(v11 - 2) = *(float *)((char *)pFigure->m_pfVertexCoord + v7);
          *(v11 - 1) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 + 4);
          *v11 = *(float *)((char *)pFigure->m_pfVertexCoord + v7 + 8);
          *(v11 - 36) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 12);
          *(v11 - 35) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 8);
          *(v11 - 34) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 4);
          *(v11 - 70) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 24);
          *(v11 - 69) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 20);
          *(v11 - 68) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 16);
          *(v11 - 104) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 36);
          *(v11 - 103) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 32);
          *(v11 - 102) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 - 28);
          v7 -= 48i64;
          v11 -= 136;
          --v12;
        }
        while ( v12 );
      }
      if ( v6 >= 0 )
      {
        v7 = 12 * v6;
        v13 = (float *)&v5[136 * v6 + 8];
        do
        {
          *(v13 - 2) = *(float *)((char *)pFigure->m_pfVertexCoord + v7);
          *(v13 - 1) = *(float *)((char *)pFigure->m_pfVertexCoord + v7 + 4);
          *v13 = *(float *)((char *)pFigure->m_pfVertexCoord + v7 + 8);
          v7 -= 12i64;
          v13 -= 34;
          --v6;
        }
        while ( v6 >= 0 );
      }
    }
    m_pfVertexCoord = pFigure->m_pfVertexCoord;
    if ( m_pfVertexCoord )
    {
      operator delete(m_pfVertexCoord, v6);
      pFigure->m_pfVertexCoord = 0i64;
    }
  }
  m_usNormalCoordCount = pFigure->m_usNormalCoordCount;
  if ( m_usNormalCoordCount )
  {
    v16 = m_usNormalCoordCount - 1;
    v6 = v16;
    if ( v16 >= 0 )
    {
      if ( v16 + 1i64 >= 4 )
      {
        v7 = 12i64 * v16;
        v17 = &v8[136 * v16 + 16];
        v18 = (unsigned __int64)(v16 + 1i64) >> 2;
        v6 = v16 - 4 * v18;
        do
        {
          *((_DWORD *)v17 - 1) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7);
          *(float *)v17 = *(float *)((char *)pFigure->m_pfNormalCoord + v7 + 4);
          *((_DWORD *)v17 + 1) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 + 8) ^ _xmm;
          *((_DWORD *)v17 - 35) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 12);
          *((_DWORD *)v17 - 34) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 8);
          *((_DWORD *)v17 - 33) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 4) ^ _xmm;
          *((_DWORD *)v17 - 69) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 24);
          *((_DWORD *)v17 - 68) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 20);
          *((_DWORD *)v17 - 67) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 16) ^ _xmm;
          *((_DWORD *)v17 - 103) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 36);
          *((_DWORD *)v17 - 102) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 32);
          *((_DWORD *)v17 - 101) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 - 28) ^ _xmm;
          v7 -= 48i64;
          v17 -= 544;
          --v18;
        }
        while ( v18 );
      }
      if ( v6 >= 0 )
      {
        v7 = 12 * v6;
        v19 = (__int64)&v8[136 * v6 + 16];
        do
        {
          *(float *)(v19 - 4) = *(float *)((char *)pFigure->m_pfNormalCoord + v7);
          *(float *)v19 = *(float *)((char *)pFigure->m_pfNormalCoord + v7 + 4);
          *(_DWORD *)(v19 + 4) = *(_DWORD *)((char *)pFigure->m_pfNormalCoord + v7 + 8) ^ _xmm;
          v7 -= 12i64;
          v19 -= 136i64;
          --v6;
        }
        while ( v6 >= 0 );
      }
    }
    m_pfNormalCoord = pFigure->m_pfNormalCoord;
    if ( m_pfNormalCoord )
    {
      operator delete(m_pfNormalCoord, v6);
      pFigure->m_pfNormalCoord = 0i64;
    }
  }
  m_usTangentCoordCount = pFigure->m_usTangentCoordCount;
  if ( m_usTangentCoordCount )
  {
    v22 = m_usTangentCoordCount - 1;
    v7 = v22;
    if ( v22 >= 0 )
    {
      if ( v22 + 1i64 >= 4 )
      {
        v23 = 3i64 * v22;
        v6 = (signed __int64)&v8[136 * v22 + 28];
        v24 = (unsigned __int64)(v22 + 1i64) >> 2;
        v7 = v22 - 4 * v24;
        do
        {
          *(float *)(v6 - 4) = pFigure->m_pfTangentCoord[v23];
          *(float *)v6 = pFigure->m_pfTangentCoord[v23 + 1];
          *(_DWORD *)(v6 + 4) = LODWORD(pFigure->m_pfTangentCoord[v23 + 2]) ^ _xmm;
          *(_DWORD *)(v6 + 8) = 1065353216;
          *(float *)(v6 - 140) = pFigure->m_pfTangentCoord[v23 - 3];
          *(float *)(v6 - 136) = pFigure->m_pfTangentCoord[v23 - 2];
          *(_DWORD *)(v6 - 132) = LODWORD(pFigure->m_pfTangentCoord[v23 - 1]) ^ _xmm;
          *(_DWORD *)(v6 - 128) = 1065353216;
          *(float *)(v6 - 276) = pFigure->m_pfTangentCoord[v23 - 6];
          *(float *)(v6 - 272) = pFigure->m_pfTangentCoord[v23 - 5];
          *(_DWORD *)(v6 - 268) = LODWORD(pFigure->m_pfTangentCoord[v23 - 4]) ^ _xmm;
          *(_DWORD *)(v6 - 264) = 1065353216;
          *(float *)(v6 - 412) = pFigure->m_pfTangentCoord[v23 - 9];
          *(float *)(v6 - 408) = pFigure->m_pfTangentCoord[v23 - 8];
          *(_DWORD *)(v6 - 404) = LODWORD(pFigure->m_pfTangentCoord[v23 - 7]) ^ _xmm;
          *(_DWORD *)(v6 - 400) = 1065353216;
          v23 -= 12i64;
          v6 -= 544i64;
          --v24;
        }
        while ( v24 );
      }
      if ( v7 >= 0 )
      {
        v25 = 3 * v7;
        v6 = (signed __int64)&v8[136 * v7 + 28];
        do
        {
          *(float *)(v6 - 4) = pFigure->m_pfTangentCoord[v25];
          *(float *)v6 = pFigure->m_pfTangentCoord[v25 + 1];
          *(_DWORD *)(v6 + 4) = LODWORD(pFigure->m_pfTangentCoord[v25 + 2]) ^ _xmm;
          *(_DWORD *)(v6 + 8) = 1065353216;
          v25 -= 3i64;
          v6 -= 136i64;
          --v7;
        }
        while ( v7 >= 0 );
      }
    }
    m_pfTangentCoord = pFigure->m_pfTangentCoord;
    if ( m_pfTangentCoord )
    {
      operator delete(m_pfTangentCoord, v6);
      pFigure->m_pfTangentCoord = 0i64;
    }
  }
  v27 = pFigure->m_usVertexCoordCount;
  if ( pFigure->m_uiBoneCount )
  {
    v28 = v27 - 1;
    v29 = v28;
    if ( v28 >= 0 )
    {
      v30 = v28;
      v31 = &v8[136 * v28 + 72];
      do
      {
        v32 = &pFigure->m_pVerOptiInfo[v30];
        v7 = 0i64;
        v33 = 0i64;
        if ( v32->Count > 0 )
        {
          v34 = (_DWORD *)&v32->pWeights[1];
          v35 = &v32->pBoneIdx[1];
          v36 = v31 - (char *)v32;
          do
          {
            *(_DWORD *)&v31[4 * ((__int64)(int)v7 >> 1) - 32] = *v35 | (*(v35 - 1) << 16);
            *(_DWORD *)((char *)v34 + v36 - 12) = *(v34 - 1);
            *(_DWORD *)((char *)v34 + v36 - 8) = *v34;
            v7 = (unsigned int)(v7 + 2);
            v33 += 2i64;
            v35 += 2;
            v34 += 2;
          }
          while ( (int)v7 < v32->Count );
        }
        *((_DWORD *)v31 - 1) = v32->Count | *((_DWORD *)v31 - 1) & 0xFFFF0000;
        --v30;
        v31 -= 136;
        --v29;
      }
      while ( v29 >= 0 );
    }
    m_pVerOptiInfo = pFigure->m_pVerOptiInfo;
    if ( m_pVerOptiInfo )
    {
      v38 = &m_pVerOptiInfo[-1].pBoneIdx[12];
      `eh vector destructor iterator'(
        m_pVerOptiInfo,
        0x68ui64,
        *(_QWORD *)&m_pVerOptiInfo[-1].pBoneIdx[12],
        (void (__fastcall *)(void *))OGLVertexOptiInfo::~OGLVertexOptiInfo);
      operator delete[](v38, 104i64 * *(_QWORD *)v38 + 8);
      pFigure->m_pVerOptiInfo = 0i64;
    }
  }
  else
  {
    v39 = v27 - 1;
    v40 = v39;
    if ( v39 >= 0 )
    {
      v7 = (signed __int64)&v8[136 * v39 + 68];
      do
      {
        *(_DWORD *)v7 = 0;
        v7 -= 136i64;
        --v40;
      }
      while ( v40 >= 0 );
    }
  }
  v41 = Framework::MemoryManager::allocate(&v4->allocateStaticBuffers, 4i64 * pFigure->m_usIndexCount, v7);
  pFigure->m_pfIndexBuffer = v41;
  memmove(v41, pFigure->m_pusIndex, 4i64 * pFigure->m_usIndexCount);
  m_pusIndex = pFigure->m_pusIndex;
  if ( m_pusIndex )
    operator delete(m_pusIndex, v42);
  pFigure->m_pusIndex = (unsigned int *)pFigure->m_pfIndexBuffer;
}

bool __fastcall BSUtil::createOGLMaterialIndexBuffer(OGLMaterial *pOGLMaterial, int bufferSize)
{
  unsigned __int64 v4; // r8
  void *v5; // rax

  Framework::MemoryManager::release(&Framework::GLManager::glm->allocateStaticBuffers, pOGLMaterial->m_pfIndexBuffer);
  pOGLMaterial->m_usIndexCount = bufferSize;
  if ( bufferSize )
  {
    v5 = Framework::MemoryManager::allocate(
           &Framework::GLManager::glm->allocateStaticBuffers,
           4i64 * (unsigned int)bufferSize,
           v4);
    pOGLMaterial->m_pfIndexBuffer = v5;
    pOGLMaterial->m_psIndex = (unsigned int *)v5;
  }
  return pOGLMaterial->m_psIndex != 0i64;
}

OGLModel *__fastcall BSUtil::createOGLModelMultiple(
        const OGLModel *pOGLModelSrc,
        int objectCount,
        OGLMatrix *matDefaultTrans,
        void (__fastcall *InitFunc)(OGLFigure *, int, int))
{
  __m128i v4; // xmm2
  OGLFigure *m_pFigure; // r14
  int m_usVertexCoordCount; // edi
  __int64 m_usIndexCount; // r13
  __int64 m_ucMaterialCount; // rbx
  __int64 v10; // rdx
  OGLFigure *OGLFigure; // rbp
  __int64 v12; // rsi
  __int64 v13; // r15
  OGLMaterial *v14; // rbx
  OGLMaterial *v15; // rdi
  unsigned int v16; // ebx
  unsigned __int64 v17; // r8
  void *v18; // rax
  unsigned __int64 m_pfVertexBuffer; // r8
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // er11
  unsigned int v23; // esi
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // r11
  __int64 v29; // r10
  float *v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int **p_m_pusIndex; // rbx
  unsigned int *m_pusIndex; // r9
  unsigned int **v37; // r12
  unsigned int *v38; // r10
  unsigned __int64 v39; // rdi
  unsigned int *v40; // r11
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r12
  int v44; // edx
  OGLMaterial *m_pMaterial; // r11
  OGLMaterial *v46; // rdi
  int v47; // ecx
  unsigned int v48; // er10
  __int64 v49; // r8
  OGLModel *v50; // rax
  OGLModel *v51; // rdi
  unsigned __int64 v52; // r8
  __int64 v53; // r10
  OGLTexture *(*m_pTexture)[4]; // r9
  __int64 v55; // rbx
  __int64 i; // rdx
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  OGLTexture **v59; // rcx
  int v60; // er8
  OGLMatrix *v61; // rdx
  int v63; // [rsp+20h] [rbp-C8h]
  int v64; // [rsp+24h] [rbp-C4h]
  __int64 v65; // [rsp+28h] [rbp-C0h]
  __int64 v66; // [rsp+30h] [rbp-B8h]
  unsigned int v67; // [rsp+38h] [rbp-B0h]
  __int64 v68; // [rsp+40h] [rbp-A8h]
  __int64 v69; // [rsp+48h] [rbp-A0h]
  __int64 v70; // [rsp+50h] [rbp-98h]
  unsigned __int64 v71; // [rsp+58h] [rbp-90h]
  __int64 v72; // [rsp+68h] [rbp-80h]
  __int64 v73; // [rsp+70h] [rbp-78h]
  __int64 v74; // [rsp+78h] [rbp-70h]
  __int64 v75; // [rsp+80h] [rbp-68h]
  __int64 v76; // [rsp+88h] [rbp-60h]
  __int64 v77; // [rsp+90h] [rbp-58h]
  int v81; // [rsp+108h] [rbp+20h]
  OGLModel *v82; // [rsp+108h] [rbp+20h]

  m_pFigure = pOGLModelSrc->m_pFigure;
  m_usVertexCoordCount = m_pFigure->m_usVertexCoordCount;
  v64 = m_usVertexCoordCount;
  m_usIndexCount = (int)m_pFigure->m_usIndexCount;
  m_ucMaterialCount = (int)m_pFigure->m_ucMaterialCount;
  OGLFigure = BSUtil::createOGLFigure(
                objectCount * m_usVertexCoordCount,
                objectCount * m_pFigure->m_usIndexCount,
                m_pFigure->m_ucMaterialCount,
                (int)InitFunc);
  OGLFigure->m_iFormatType |= 0x100u;
  v72 = m_ucMaterialCount;
  if ( (int)m_ucMaterialCount > 0 )
  {
    v12 = 0i64;
    v13 = m_ucMaterialCount;
    do
    {
      v14 = &m_pFigure->m_pMaterial[v12];
      v15 = &OGLFigure->m_pMaterial[v12];
      OGLMaterial::copy(v15, v14, 0x20ui64, 32);
      v15->m_cTextureIndex = v14->m_cTextureIndex;
      v15->m_usIndex = v14->m_usIndex;
      v16 = objectCount * v14->m_usIndexCount;
      Framework::MemoryManager::release(&Framework::GLManager::glm->allocateStaticBuffers, v15->m_pfIndexBuffer);
      v15->m_usIndexCount = v16;
      if ( v16 )
      {
        v18 = Framework::MemoryManager::allocate(&Framework::GLManager::glm->allocateStaticBuffers, 4i64 * v16, v17);
        v15->m_pfIndexBuffer = v18;
        v15->m_psIndex = (unsigned int *)v18;
      }
      ++v12;
      --v13;
    }
    while ( v13 );
    m_usVertexCoordCount = v64;
  }
  m_pfVertexBuffer = (unsigned __int64)m_pFigure->m_pfVertexBuffer;
  v71 = m_pfVertexBuffer;
  v81 = 0;
  v20 = m_usVertexCoordCount;
  v77 = m_usVertexCoordCount;
  v21 = m_usIndexCount;
  if ( objectCount > 0 )
  {
    v22 = 0;
    v63 = 0;
    v23 = 0;
    v67 = 0;
    v24 = 0i64;
    v25 = 0i64;
    v66 = 0i64;
    v10 = 0i64;
    v70 = 0i64;
    v68 = 0i64;
    v26 = 0i64;
    v69 = 0i64;
    v76 = -16i64 * m_usVertexCoordCount;
    v75 = 16i64 * m_usVertexCoordCount;
    v74 = 8i64 * m_usVertexCoordCount;
    v73 = 12i64 * m_usVertexCoordCount;
    v27 = 12i64;
    v65 = 12i64;
    do
    {
      v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v23), 0);
      if ( v20 > 0 )
      {
        v28 = 0i64;
        v29 = v10;
        v30 = (float *)(m_pfVertexBuffer + 8);
        v31 = v26;
        v32 = v20;
        do
        {
          *(float *)((char *)OGLFigure->m_pfVertexCoord + v31) = *(v30 - 2);
          *(float *)((char *)OGLFigure->m_pfVertexCoord + v31 + 4) = *(v30 - 1);
          *(float *)((char *)OGLFigure->m_pfVertexCoord + v31 + 8) = *v30;
          *(float *)((char *)OGLFigure->m_pfNormalCoord + v31) = v30[1];
          *(float *)((char *)OGLFigure->m_pfNormalCoord + v31 + 4) = v30[2];
          *(float *)((char *)OGLFigure->m_pfNormalCoord + v31 + 8) = v30[3];
          *(float *)((char *)OGLFigure->m_pfTangentCoord + v31) = v30[4];
          *(float *)((char *)OGLFigure->m_pfTangentCoord + v31 + 4) = v30[5];
          *(float *)((char *)OGLFigure->m_pfTangentCoord + v31 + 8) = v30[6];
          v33 = v28 * 4 + v68;
          *(float *)((char *)OGLFigure->m_pfTexCoord[0] + v33) = m_pFigure->m_pfTexCoord[0][v28];
          *(float *)((char *)OGLFigure->m_pfTexCoord[0] + v33 + 4) = m_pFigure->m_pfTexCoord[0][v28 + 1];
          *(float *)((char *)OGLFigure->m_pfVertexColor + v29) = *(float *)((char *)m_pFigure->m_pfVertexColor
                                                                          + v29
                                                                          + v25);
          *(float *)((char *)OGLFigure->m_pfVertexColor + v29 + 4) = *(float *)((char *)m_pFigure->m_pfVertexColor
                                                                              + v29
                                                                              + v25
                                                                              + 4);
          *(float *)((char *)OGLFigure->m_pfVertexColor + v29 + 8) = *(float *)((char *)m_pFigure->m_pfVertexColor
                                                                              + v27
                                                                              + v29
                                                                              - 4);
          *(float *)((char *)OGLFigure->m_pfVertexColor + v29 + 12) = *(float *)((char *)m_pFigure->m_pfVertexColor
                                                                               + v29
                                                                               + v27);
          v31 += 12i64;
          v30 += 34;
          v28 += 2i64;
          v29 += 16i64;
          --v32;
        }
        while ( v32 );
        v23 = v67;
        v21 = m_usIndexCount;
        v22 = v63;
      }
      v34 = 0i64;
      if ( (int)m_usIndexCount > 0 && (unsigned int)m_usIndexCount >= 8 )
      {
        p_m_pusIndex = &m_pFigure->m_pusIndex;
        m_pusIndex = m_pFigure->m_pusIndex;
        v37 = &OGLFigure->m_pusIndex;
        v38 = OGLFigure->m_pusIndex;
        v39 = (unsigned __int64)&v38[v24];
        v40 = &v38[(int)m_usIndexCount - 1 + v22];
        if ( (v39 > (unsigned __int64)&m_pusIndex[(int)m_usIndexCount - 1] || v40 < m_pusIndex)
          && (v39 > (unsigned __int64)p_m_pusIndex || v40 < (unsigned int *)p_m_pusIndex)
          && (v39 > (unsigned __int64)v37 || v40 < (unsigned int *)v37) )
        {
          v41 = 4i64;
          do
          {
            *(__m128i *)&v38[v41 - 4 + v24] = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&m_pusIndex[v41 - 4]), v4);
            *(__m128i *)&v38[v41 + v24] = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&m_pusIndex[v41]), v4);
            v34 += 8i64;
            v41 += 8i64;
          }
          while ( v34 < (int)m_usIndexCount - (int)m_usIndexCount % 8 );
        }
        v25 = v66;
        v27 = v65;
        v21 = m_usIndexCount;
      }
      for ( ; v34 < v21; ++v34 )
        OGLFigure->m_pusIndex[v34 + v24] = v23 + m_pFigure->m_pusIndex[v34];
      if ( v72 > 0 )
      {
        v42 = 0i64;
        v43 = v72;
        v44 = v81;
        do
        {
          m_pMaterial = m_pFigure->m_pMaterial;
          v46 = OGLFigure->m_pMaterial;
          v47 = v44 * m_pMaterial[v42].m_usIndexCount;
          v48 = 0;
          if ( m_pMaterial[v42].m_usIndexCount )
          {
            v49 = 0i64;
            do
            {
              v46[v42].m_psIndex[v47 + v49] = v23 + m_pMaterial[v42].m_psIndex[v49];
              ++v48;
              ++v49;
            }
            while ( v48 < m_pMaterial[v42].m_usIndexCount );
            v44 = v81;
          }
          ++v42;
          --v43;
        }
        while ( v43 );
        v21 = m_usIndexCount;
        v27 = v65;
        v25 = v66;
      }
      ++v81;
      v23 += v64;
      v67 = v23;
      v26 = v73 + v69;
      v69 += v73;
      v68 += v74;
      v10 = v75 + v70;
      v70 += v75;
      v27 += v76;
      v65 = v27;
      v25 += v76;
      v66 = v25;
      v22 = m_usIndexCount + v63;
      v63 += m_usIndexCount;
      v24 += v21;
      v20 = v77;
      m_pfVertexBuffer = v71;
    }
    while ( v81 < objectCount );
    m_usVertexCoordCount = v64;
  }
  if ( anonymous_namespace_::createOGLModelMultiple_initFunc )
    anonymous_namespace_::createOGLModelMultiple_initFunc(OGLFigure, m_usVertexCoordCount, m_usIndexCount);
  BSUtil::createOGLFigureVertexBuffer(OGLFigure, v10, m_pfVertexBuffer);
  v82 = (OGLModel *)operator new(0x2498ui64);
  OGLModel::OGLModel(v82);
  v51 = v50;
  OGLModel::setFigure(v50, OGLFigure, v52);
  if ( (v51->m_uiModeFlg & 0x400) == 0 )
    v51->m_pMotion[0] = 0i64;
  v51->m_vPosition.x = matDefaultTrans->m[12];
  v51->m_vPosition.y = matDefaultTrans->m[13];
  v51->m_vPosition.z = matDefaultTrans->m[14];
  *(_OWORD *)v51->m_mWorld.m = *(_OWORD *)matDefaultTrans->m;
  *(_OWORD *)&v51->m_mWorld.m[4] = *(_OWORD *)&matDefaultTrans->m[4];
  *(_OWORD *)&v51->m_mWorld.m[8] = *(_OWORD *)&matDefaultTrans->m[8];
  *(_OWORD *)&v51->m_mWorld.m[12] = *(_OWORD *)&matDefaultTrans->m[12];
  v51->m_bPostureChange = 1;
  v53 = 0i64;
  m_pTexture = pOGLModelSrc->m_pTexture;
  v55 = 64i64;
  do
  {
    for ( i = 0i64; i < 4; ++i )
    {
      v57 = v53;
      if ( v53 < 0 )
      {
        v58 = 0i64;
        v59 = v51->m_pTexture[0];
        while ( *v59 )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= 64 )
            goto LABEL_48;
        }
        v57 = v58;
      }
LABEL_48:
      if ( v57 <= 0x3F && i >= 0 )
        v51->m_pTexture[v57][i] = (*m_pTexture)[0];
      m_pTexture = (OGLTexture *(*)[4])((char *)m_pTexture + 8);
    }
    ++v53;
    --v55;
  }
  while ( v55 );
  BSUtil::copyOGLModelExtraParams(pOGLModelSrc, v51);
  *(_DWORD *)&v51->m_createShadowFlg = 0;
  v51->m_lowAccuracyShadowBias = 0;
  v51->m_bPrevBoneMirrorFlg = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&v51->m_postureCondMutex);
  while ( !v51->bWakeThread._My_val && AgThread::getIsRunning(&v51->m_updateThread) )
    AgCondition::wait(&v51->m_postureReadyCond, &v51->m_postureCondMutex, v60);
  LeaveCriticalSection((LPCRITICAL_SECTION)&v51->m_postureCondMutex);
  v51->bWakeThread._My_val = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&v51->m_postureReadyCond);
  WakeConditionVariable((PCONDITION_VARIABLE)&v51->m_postureReadyCond.m_conditionVariable.m_data);
  LeaveCriticalSection((LPCRITICAL_SECTION)&v51->m_postureReadyCond);
  OGLModel::updatePostureExe(v51, matDefaultTrans, *(float *)v4.m128i_i32);
  OGLModel::updatePostureSecExe(v51, v61, *(float *)v4.m128i_i32);
  return v51;
}

void __fastcall BSUtil::getEulerAnglesByOGLQuat(const OGLQuat *rot, float *pOutX, float *pOutY, float *pOutZ)
{
  float w; // xmm9_4
  float x; // xmm10_4
  float y; // xmm11_4
  float z; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm15_4
  float v13; // xmm14_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float _Px; // [rsp+D0h] [rbp+8h] BYREF

  w = rot->w;
  x = rot->x;
  y = rot->y;
  z = rot->z;
  v11 = (float)(y * y) + (float)(y * y);
  v12 = (float)(atan2f(
                  (float)((float)(rot->x * w) - (float)(z * y)) + (float)((float)(rot->x * w) - (float)(z * y)),
                  (float)(1.0 - (float)((float)(rot->x * x) + (float)(rot->x * x))) - v11)
              * 180.0)
      / 3.1415927;
  v13 = (float)(asinf((float)((float)(z * x) + (float)(w * y)) + (float)((float)(z * x) + (float)(w * y))) * 180.0)
      / 3.1415927;
  v14 = atan2f(
          (float)((float)(z * w) - (float)(x * y)) + (float)((float)(z * w) - (float)(x * y)),
          (float)(1.0 - v11) - (float)((float)(z * z) + (float)(z * z)));
  _Px = v12;
  v15 = (float)(v14 * 180.0) / 3.1415927;
  if ( fdtest(&_Px) == 2 )
  {
    v12 = 0.0;
  }
  else if ( v12 < 0.0 )
  {
    v12 = v12 + 360.0;
  }
  _Px = v13;
  if ( fdtest(&_Px) == 2 )
  {
    v13 = 0.0;
  }
  else if ( v13 < 0.0 )
  {
    v13 = v13 + 360.0;
  }
  _Px = (float)(v14 * 180.0) / 3.1415927;
  if ( fdtest(&_Px) == 2 )
  {
    v15 = 0.0;
  }
  else if ( v15 < 0.0 )
  {
    v15 = v15 + 360.0;
  }
  *pOutX = v12;
  *pOutY = v13;
  *pOutZ = v15;
}

OGLQuat *__fastcall BSUtil::multiplyRotateAxisByOGLQuat(
        OGLQuat *result,
        const OGLQuat *rot,
        float angle,
        float x,
        float y,
        float z)
{
  float v8; // xmm7_4
  float v9; // xmm9_4
  float v10; // xmm11_4
  float v11; // xmm10_4
  float v12; // xmm9_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float w; // xmm4_4
  float v17; // xmm5_4
  OGLQuat *v18; // rax

  v8 = (float)(angle * 0.017453292) * 0.5;
  v9 = sinf(v8);
  v10 = v9 * z;
  v11 = v9 * y;
  v12 = v9 * x;
  v13 = cosf(v8);
  v14 = rot->y;
  v15 = rot->z;
  w = rot->w;
  v17 = rot->x;
  v18 = result;
  result->x = (float)((float)((float)(v12 * w) + (float)(v13 * rot->x)) + (float)(v10 * v14)) - (float)(v11 * v15);
  result->y = (float)((float)((float)(v11 * w) - (float)(v10 * v17)) + (float)(v13 * v14)) + (float)(v12 * v15);
  result->z = (float)((float)((float)(v10 * w) + (float)(v11 * v17)) - (float)(v12 * v14)) + (float)(v13 * v15);
  result->w = (float)((float)((float)(v13 * w) - (float)(v12 * v17)) - (float)(v11 * v14)) - (float)(v10 * v15);
  return v18;
}

OGLVec3 *__fastcall BSUtil::toRotate(OGLVec3 *result, const OGLMatrix *oglMatrix)
{
  float v4; // xmm9_4
  float v5; // xmm10_4
  float v6; // xmm1_4
  float v7; // xmm6_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  OGLVec3 *v11; // rax

  v4 = atan2f(oglMatrix->m[4], oglMatrix->m[5]);
  LODWORD(v5) = COERCE_UNSIGNED_INT(asinf(oglMatrix->m[6])) ^ _xmm;
  cosf(v5);
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) <= 0.0000099999997 )
  {
    v7 = 0.0;
    v4 = atan2f(oglMatrix->m[1], oglMatrix->m[0]);
  }
  else
  {
    v6 = oglMatrix->m[2] / v5;
    if ( fminf(v6, 1.0) >= -1.0 )
    {
      if ( v6 >= 1.0 )
        v6 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v6 = FLOAT_N1_0;
    }
    v7 = asinf(v6);
    if ( oglMatrix->m[10] < 0.0 )
      v7 = 3.1415927 - v7;
    if ( v7 > 3.1415927 )
      v7 = v7 + -6.2831855;
  }
  v8 = (float)(v5 / 3.1415927) * 180.0;
  result->x = v8;
  v9 = (float)(v7 / 3.1415927) * 180.0;
  result->y = v9;
  v10 = (float)(v4 / 3.1415927) * 180.0;
  result->z = v10;
  if ( v8 < 0.0 )
    result->x = v8 + 360.0;
  if ( v9 < 0.0 )
    result->y = v9 + 360.0;
  v11 = result;
  if ( v10 < 0.0 )
    result->z = v10 + 360.0;
  return v11;
}

bool __fastcall BSUtil::wordToScreen(
        OGLVec3 *outVec,
        const OGLVec3 *pos,
        const OGLMatrix *matView,
        const OGLMatrix *matProj,
        float screenX,
        float screenY,
        float screenWidth,
        float screenHeight)
{
  bool result; // al
  float y; // xmm0_4
  float v10; // xmm8_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm5_4

  result = 0;
  *(_QWORD *)&outVec->y = 0i64;
  outVec->x = 0.0;
  y = pos->y;
  v10 = (float)((float)((float)(y * matView->m[4]) + (float)(pos->x * matView->m[0])) + (float)(pos->z * matView->m[8]))
      + matView->m[12];
  v11 = (float)((float)((float)(pos->x * matView->m[1]) + (float)(y * matView->m[5])) + (float)(pos->z * matView->m[9]))
      + matView->m[13];
  v12 = (float)((float)((float)(pos->x * matView->m[2]) + (float)(y * matView->m[6])) + (float)(pos->z * matView->m[10]))
      + matView->m[14];
  v13 = (float)((float)((float)(pos->x * matView->m[3]) + (float)(y * matView->m[7])) + (float)(pos->z * matView->m[11]))
      + matView->m[15];
  if ( v12 != 0.0 )
  {
    result = 1;
    v14 = (float)((float)(v11 * matProj->m[5]) + (float)(v10 * matProj->m[1])) + (float)(v12 * matProj->m[9]);
    v15 = (float)((float)((float)(v11 * matProj->m[6]) + (float)(v10 * matProj->m[2])) + (float)(v12 * matProj->m[10]))
        + (float)(v13 * matProj->m[14]);
    v16 = (float)((float)((float)((float)((float)((float)((float)(v11 * matProj->m[4]) + (float)(v10 * matProj->m[0]))
                                                + (float)(v12 * matProj->m[8]))
                                        + (float)(v13 * matProj->m[12]))
                                * (float)(-1.0 / v12))
                        * 0.5)
                + 0.5)
        * screenWidth;
    outVec->y = (float)((float)((float)((float)((float)(v14 + (float)(v13 * matProj->m[13])) * (float)(-1.0 / v12)) * 0.5)
                              + 0.5)
                      * screenHeight)
              + screenY;
    outVec->z = (float)((float)(v15 * (float)(-1.0 / v12)) + 1.0) * 0.5;
    outVec->x = v16 + screenX;
  }
  return result;
}

