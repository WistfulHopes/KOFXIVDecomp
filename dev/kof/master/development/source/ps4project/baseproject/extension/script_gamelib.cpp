#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lvm.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"

class extension::AsyncContent<CharaProjectData> :
	extension::RefCountable<extension::AsyncContent<CharaProjectData> >
{
public:
	AsyncContent<CharaProjectData>(const std::string &);
	AsyncContent<CharaProjectData>(const std::string &, const std::string &);
private:
	AsyncContent<CharaProjectData>(const extension::AsyncContent<CharaProjectData> &);
	extension::AsyncContent<CharaProjectData> & operator=(const extension::AsyncContent<CharaProjectData> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<CharaProjectData>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	CharaProjectData * getData();
	CharaProjectData * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> >);
	bool isCancelRequested();
};
struct extension::auxscript::UDTraits<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > >
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
class extension::AsyncContent<StageProjectData> :
	extension::RefCountable<extension::AsyncContent<StageProjectData> >
{
public:
	AsyncContent<StageProjectData>(const std::string &);
	AsyncContent<StageProjectData>(const std::string &, const std::string &);
private:
	AsyncContent<StageProjectData>(const extension::AsyncContent<StageProjectData> &);
	extension::AsyncContent<StageProjectData> & operator=(const extension::AsyncContent<StageProjectData> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<StageProjectData>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	StageProjectData * getData();
	StageProjectData * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> >);
	bool isCancelRequested();
};
struct extension::auxscript::UDTraits<extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > >
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
struct extension::auxscript::UDTraits<extension::SoundBank>
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
struct extension::auxscript::UDTraits<extension::SoundList>
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
class extension::FutureObjectJob<CharaProjectData> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<CharaProjectData>(extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> >);
private:
	FutureObjectJob<CharaProjectData>(const extension::FutureObjectJob<CharaProjectData> &);
	extension::FutureObjectJob<CharaProjectData> & operator=(const extension::FutureObjectJob<CharaProjectData> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<CharaProjectData>();
	void setResult(std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<CharaProjectData,std::default_delete<CharaProjectData> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > m_content; // 0x18
};
class extension::`anonymous-namespace'::CharaProjLoadJob :
	extension::FutureObjectJob<CharaProjectData>
{
	class Base_t;
public:
	CharaProjLoadJob(extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> >);
	virtual long run();
	virtual ~CharaProjLoadJob();
};
class extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > >
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > & CheckSelf(lua_State *, long);
	static extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > :
	std::_Unique_ptr_base<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::`anonymous-namespace'::CharaProjLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(const std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *, std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *, const std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(void *);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >();
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(const std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	~unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >();
	extension::`anonymous-namespace'::CharaProjLoadJob & operator*();
	extension::`anonymous-namespace'::CharaProjLoadJob * operator->();
	extension::`anonymous-namespace'::CharaProjLoadJob * get();
	bool operator bool();
	extension::`anonymous-namespace'::CharaProjLoadJob * release();
	void reset(extension::`anonymous-namespace'::CharaProjLoadJob *);
};
class std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > :
	std::_Unique_ptr_base<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::`anonymous-namespace'::CharaProjLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(const std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *, std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *, const std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(void *);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >();
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(const std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	~unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >();
	extension::`anonymous-namespace'::CharaProjLoadJob & operator*();
	extension::`anonymous-namespace'::CharaProjLoadJob * operator->();
	extension::`anonymous-namespace'::CharaProjLoadJob * get();
	bool operator bool();
	extension::`anonymous-namespace'::CharaProjLoadJob * release();
	void reset(extension::`anonymous-namespace'::CharaProjLoadJob *);
};
class std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > :
	std::_Unique_ptr_base<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::`anonymous-namespace'::CharaProjLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(const std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *, std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *, const std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(void *);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >();
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(const std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	~unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >();
	extension::`anonymous-namespace'::CharaProjLoadJob & operator*();
	extension::`anonymous-namespace'::CharaProjLoadJob * operator->();
	extension::`anonymous-namespace'::CharaProjLoadJob * get();
	bool operator bool();
	extension::`anonymous-namespace'::CharaProjLoadJob * release();
	void reset(extension::`anonymous-namespace'::CharaProjLoadJob *);
};
class std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > :
	std::_Unique_ptr_base<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::`anonymous-namespace'::CharaProjLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(const std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *, std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *, const std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(extension::`anonymous-namespace'::CharaProjLoadJob *);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >(void *);
	unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >();
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(const std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> > &);
	~unique_ptr<extension::`anonymous namespace'::CharaProjLoadJob,std::default_delete<extension::`anonymous namespace'::CharaProjLoadJob> >();
	extension::`anonymous-namespace'::CharaProjLoadJob & operator*();
	extension::`anonymous-namespace'::CharaProjLoadJob * operator->();
	extension::`anonymous-namespace'::CharaProjLoadJob * get();
	bool operator bool();
	extension::`anonymous-namespace'::CharaProjLoadJob * release();
	void reset(extension::`anonymous-namespace'::CharaProjLoadJob *);
};
class extension::`anonymous-namespace'::StageProjLoadJob :
	extension::FutureObjectJob<StageProjectData>
{
	class Base_t;
public:
	StageProjLoadJob(extension::RefCountablePtr<extension::AsyncContent<StageProjectData> >);
	virtual long run();
	virtual ~StageProjLoadJob();
};
class extension::FutureObjectJob<StageProjectData> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<StageProjectData>(extension::RefCountablePtr<extension::AsyncContent<StageProjectData> >);
private:
	FutureObjectJob<StageProjectData>(const extension::FutureObjectJob<StageProjectData> &);
	extension::FutureObjectJob<StageProjectData> & operator=(const extension::FutureObjectJob<StageProjectData> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<StageProjectData>();
	void setResult(std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<StageProjectData,std::default_delete<StageProjectData> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > m_content; // 0x18
};
class extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > >
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > & CheckSelf(lua_State *, long);
	static extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > :
	std::_Unique_ptr_base<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::`anonymous-namespace'::StageProjLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(const std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *, std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *, const std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(void *);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >();
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(const std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	~unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >();
	extension::`anonymous-namespace'::StageProjLoadJob & operator*();
	extension::`anonymous-namespace'::StageProjLoadJob * operator->();
	extension::`anonymous-namespace'::StageProjLoadJob * get();
	bool operator bool();
	extension::`anonymous-namespace'::StageProjLoadJob * release();
	void reset(extension::`anonymous-namespace'::StageProjLoadJob *);
};
class std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > :
	std::_Unique_ptr_base<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::`anonymous-namespace'::StageProjLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(const std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *, std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *, const std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(void *);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >();
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(const std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	~unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >();
	extension::`anonymous-namespace'::StageProjLoadJob & operator*();
	extension::`anonymous-namespace'::StageProjLoadJob * operator->();
	extension::`anonymous-namespace'::StageProjLoadJob * get();
	bool operator bool();
	extension::`anonymous-namespace'::StageProjLoadJob * release();
	void reset(extension::`anonymous-namespace'::StageProjLoadJob *);
};
class std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > :
	std::_Unique_ptr_base<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::`anonymous-namespace'::StageProjLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(const std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *, std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *, const std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(void *);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >();
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(const std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	~unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >();
	extension::`anonymous-namespace'::StageProjLoadJob & operator*();
	extension::`anonymous-namespace'::StageProjLoadJob * operator->();
	extension::`anonymous-namespace'::StageProjLoadJob * get();
	bool operator bool();
	extension::`anonymous-namespace'::StageProjLoadJob * release();
	void reset(extension::`anonymous-namespace'::StageProjLoadJob *);
};
class std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > :
	std::_Unique_ptr_base<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::`anonymous-namespace'::StageProjLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(const std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *, std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *, const std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> &);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(extension::`anonymous-namespace'::StageProjLoadJob *);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >(void *);
	unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >();
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(const std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> > &);
	~unique_ptr<extension::`anonymous namespace'::StageProjLoadJob,std::default_delete<extension::`anonymous namespace'::StageProjLoadJob> >();
	extension::`anonymous-namespace'::StageProjLoadJob & operator*();
	extension::`anonymous-namespace'::StageProjLoadJob * operator->();
	extension::`anonymous-namespace'::StageProjLoadJob * get();
	bool operator bool();
	extension::`anonymous-namespace'::StageProjLoadJob * release();
	void reset(extension::`anonymous-namespace'::StageProjLoadJob *);
};
const char extension::auxscript::UDTraits<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > >::RegistryName[15]; // 0x14092B5D0
const char extension::auxscript::UDTraits<extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > >::RegistryName[15]; // 0x14092B5E0
std::piecewise_construct_t std::piecewise_construct; // 0x1408AF07E
class extension::auxscript::UDHelper<extension::SoundBank>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::SoundBank & CheckSelf(lua_State *, long);
	static extension::SoundBank * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
class extension::auxscript::UDHelper<extension::SoundList>
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::SoundList & CheckSelf(lua_State *, long);
	static extension::SoundList * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
long extension::Lfn_OpenGameLib(lua_State * L); // 0x1402A9380//decompilation failure at 14092B5D0!
//decompilation failure at 14092B5E0!
//decompilation failure at 1408AF07E!
extension::AsyncContent<CharaProjectData> **__fastcall extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData>>>::New<extension::AsyncContent<CharaProjectData> *>(
        lua_State *L,
        extension::AsyncContent<CharaProjectData> *const *<args_0>)
{
  global_State *l_G; // rcx
  __int64 v5; // rax
  GCObject *v6; // rax
  extension::AsyncContent<CharaProjectData> **p_lastfree; // rbx
  lua_TValue *top; // rcx
  lua_TValue *v10; // rax
  lua_TValue *v11; // rbx
  GCObject *v12; // rax

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v5 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v5;
    }
  }
  v6 = luaC_newobj(L, 7, 0x30ui64, 0i64);
  v6->u.uv.len = 8i64;
  p_lastfree = (extension::AsyncContent<CharaProjectData> **)&v6->h.lastfree;
  v6->ts.tsv.len = 0i64;
  v6->u.uv.env = 0i64;
  top = L->top;
  top->value_.gc = v6;
  top->tt_ = 71;
  ++L->top;
  if ( (unsigned int)luaL_newmetatable(L, "Game.CharaProj") )
  {
    v10 = L->top;
    v10->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData>>>::Lfn_gc;
    v10->tt_ = 22;
    v11 = L->top;
    L->top = v11 + 2;
    v12 = luaS_newlstr(L, "__gc", 4ui64);
    v11[1].value_.gc = v12;
    v11[1].tt_ = v12->gch.tt | 0x40;
    luaV_settable(L, v11 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    luaL_error(L, "userdata [%s] metatable is not inintialized.", "Game.CharaProj");
  }
  lua_setmetatable(L, -2);
  if ( !p_lastfree )
    return 0i64;
  *p_lastfree = *<args_0>;
  return p_lastfree;
}

extension::AsyncContent<StageProjectData> **__fastcall extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData>>>::New<extension::AsyncContent<StageProjectData> *>(
        lua_State *L,
        extension::AsyncContent<StageProjectData> *const *<args_0>)
{
  global_State *l_G; // rcx
  __int64 v5; // rax
  GCObject *v6; // rax
  extension::AsyncContent<StageProjectData> **p_lastfree; // rbx
  lua_TValue *top; // rcx
  lua_TValue *v10; // rax
  lua_TValue *v11; // rbx
  GCObject *v12; // rax

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v5 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v5;
    }
  }
  v6 = luaC_newobj(L, 7, 0x30ui64, 0i64);
  v6->u.uv.len = 8i64;
  p_lastfree = (extension::AsyncContent<StageProjectData> **)&v6->h.lastfree;
  v6->ts.tsv.len = 0i64;
  v6->u.uv.env = 0i64;
  top = L->top;
  top->value_.gc = v6;
  top->tt_ = 71;
  ++L->top;
  if ( (unsigned int)luaL_newmetatable(L, "Game.StageProj") )
  {
    v10 = L->top;
    v10->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData>>>::Lfn_gc;
    v10->tt_ = 22;
    v11 = L->top;
    L->top = v11 + 2;
    v12 = luaS_newlstr(L, "__gc", 4ui64);
    v11[1].value_.gc = v12;
    v11[1].tt_ = v12->gch.tt | 0x40;
    luaV_settable(L, v11 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    luaL_error(L, "userdata [%s] metatable is not inintialized.", "Game.StageProj");
  }
  lua_setmetatable(L, -2);
  if ( !p_lastfree )
    return 0i64;
  *p_lastfree = *<args_0>;
  return p_lastfree;
}

void __fastcall extension::FutureObjectJob<CharaProjectData>::FutureObjectJob<CharaProjectData>(
        extension::FutureObjectJob<CharaProjectData> *this,
        extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<CharaProjectData> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<CharaProjectData>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<CharaProjectData>_vtbl *)&extension::FutureObjectJob<CharaProjectData>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<CharaProjectData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<CharaProjectData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<CharaProjectData>::~AsyncContent<CharaProjectData>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJob<StageProjectData>::FutureObjectJob<StageProjectData>(
        extension::FutureObjectJob<StageProjectData> *this,
        extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<StageProjectData> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<StageProjectData>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<StageProjectData>_vtbl *)&extension::FutureObjectJob<StageProjectData>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<StageProjectData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<StageProjectData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<StageProjectData>::~AsyncContent<StageProjectData>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::AsyncContent<CharaProjectData>::~AsyncContent<CharaProjectData>(
        extension::AsyncContent<CharaProjectData> *this)
{
  unsigned __int64 v2; // rdx
  CharaProjectData *Myval2; // rdi
  unsigned __int64 v4; // rdx
  CharaProjectData *v5; // rdi
  CharaProjectData *v6; // rcx

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    Myval2->__vftable = (CharaProjectData_vtbl *)&CharaProjectData::`vftable';
    CharaProjectData::InitData(Myval2, v2);
    Myval2->__vftable = (CharaProjectData_vtbl *)&CharaFileBase::`vftable';
    operator delete(Myval2, 0x48ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v5 = this->m_data._Mypair._Myval2;
  if ( v5 )
  {
    v6 = this->m_data._Mypair._Myval2;
    v5->__vftable = (CharaProjectData_vtbl *)&CharaProjectData::`vftable';
    CharaProjectData::InitData(v6, v4);
    v5->__vftable = (CharaProjectData_vtbl *)&CharaFileBase::`vftable';
    operator delete(v5, 0x48ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::AsyncContent<StageProjectData>::~AsyncContent<StageProjectData>(
        extension::AsyncContent<StageProjectData> *this)
{
  unsigned __int64 v2; // rdx
  StageProjectData *Myval2; // rbx
  char *pProjectName; // rcx
  unsigned __int64 v5; // rdx
  StageProjectData *v6; // rbx
  char *v7; // rcx

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    pProjectName = Myval2->m_fileHeader.pProjectName;
    if ( pProjectName )
    {
      operator delete(pProjectName, v2);
      Myval2->m_fileHeader.pProjectName = 0i64;
    }
    StageProjectData::InitData(Myval2, v2);
    operator delete(Myval2, 0x40ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v6 = this->m_data._Mypair._Myval2;
  if ( v6 )
  {
    v7 = v6->m_fileHeader.pProjectName;
    if ( v7 )
    {
      operator delete(v7, v5);
      v6->m_fileHeader.pProjectName = 0i64;
    }
    StageProjectData::InitData(v6, v5);
    operator delete(v6, 0x40ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::FutureObjectJob<CharaProjectData>::~FutureObjectJob<CharaProjectData>(
        extension::FutureObjectJob<CharaProjectData> *this)
{
  extension::AsyncContent<CharaProjectData> *m_ptr; // rdi
  extension::AsyncContent<CharaProjectData> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<CharaProjectData>_vtbl *)&extension::FutureObjectJob<CharaProjectData>::`vftable';
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_ptr->m_errorCode = 5;
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&m_ptr->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount,
    0xFFFFFFFFFFFFFFFFui64);
  v3 = this->m_content.m_ptr;
  if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<CharaProjectData>::~AsyncContent<CharaProjectData>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<CharaProjectData>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<StageProjectData>::~FutureObjectJob<StageProjectData>(
        extension::FutureObjectJob<StageProjectData> *this)
{
  extension::AsyncContent<StageProjectData> *m_ptr; // rdi
  extension::AsyncContent<StageProjectData> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<StageProjectData>_vtbl *)&extension::FutureObjectJob<StageProjectData>::`vftable';
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_ptr->m_errorCode = 5;
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&m_ptr->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount,
    0xFFFFFFFFFFFFFFFFui64);
  v3 = this->m_content.m_ptr;
  if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<StageProjectData>::~AsyncContent<StageProjectData>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<StageProjectData>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall std::unique_ptr<CharaProjectData>::~unique_ptr<CharaProjectData>(
        std::unique_ptr<CharaProjectData> *this,
        unsigned __int64 a2)
{
  CharaProjectData *Myval2; // rbx
  CharaProjectData *v3; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    v3 = this->_Mypair._Myval2;
    Myval2->__vftable = (CharaProjectData_vtbl *)&CharaProjectData::`vftable';
    CharaProjectData::InitData(v3, a2);
    Myval2->__vftable = (CharaProjectData_vtbl *)&CharaFileBase::`vftable';
    operator delete(Myval2, 0x48ui64);
  }
}

void __fastcall std::unique_ptr<StageProjectData>::~unique_ptr<StageProjectData>(
        std::unique_ptr<StageProjectData> *this,
        unsigned __int64 a2)
{
  StageProjectData *Myval2; // rbx
  char *pProjectName; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    pProjectName = Myval2->m_fileHeader.pProjectName;
    if ( pProjectName )
    {
      operator delete(pProjectName, a2);
      Myval2->m_fileHeader.pProjectName = 0i64;
    }
    StageProjectData::InitData(Myval2, a2);
    operator delete(Myval2, 0x40ui64);
  }
}

__int64 __fastcall extension::Lfn_OpenGameLib(lua_State *L)
{
  global_State *l_G; // rcx
  __int64 v3; // rax
  Table *v4; // rax
  lua_TValue *top; // rdx
  luaL_Reg reg; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D0h]
  __int64 v9; // [rsp+38h] [rbp-C8h]
  luaL_Reg v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  luaL_Reg l; // [rsp+60h] [rbp-A0h] BYREF
  const char *v14; // [rsp+70h] [rbp-90h]
  int (__fastcall *v15)(lua_State *); // [rsp+78h] [rbp-88h]
  const char *v16; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v17)(__crt_locale_data *); // [rsp+88h] [rbp-78h]
  const char *v18; // [rsp+90h] [rbp-70h]
  int (__fastcall *v19)(lua_State *); // [rsp+98h] [rbp-68h]
  const char *v20; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v21)(__crt_locale_data *); // [rsp+A8h] [rbp-58h]
  const char *v22; // [rsp+B0h] [rbp-50h]
  int (__fastcall *v23)(lua_State *); // [rsp+B8h] [rbp-48h]
  const char *v24; // [rsp+C0h] [rbp-40h]
  int (__fastcall *v25)(lua_State *); // [rsp+C8h] [rbp-38h]
  const char *v26; // [rsp+D0h] [rbp-30h]
  int (__fastcall *v27)(lua_State *); // [rsp+D8h] [rbp-28h]
  const char *v28; // [rsp+E0h] [rbp-20h]
  int (__fastcall *v29)(lua_State *); // [rsp+E8h] [rbp-18h]
  const char *v30; // [rsp+F0h] [rbp-10h]
  int (__fastcall *v31)(lua_State *); // [rsp+F8h] [rbp-8h]
  const char *v32; // [rsp+100h] [rbp+0h]
  int (__fastcall *v33)(lua_State *); // [rsp+108h] [rbp+8h]
  __int64 v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]

  reg.func = extension::_anonymous_namespace_::Lfn_CharaProj_CheckLoaded;
  v8 = 0i64;
  reg.name = "__call";
  v10.name = "__call";
  v10.func = extension::_anonymous_namespace_::Lfn_StageProj_CheckLoaded;
  v9 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData>>>::MakeMeta(
    L,
    &reg);
  extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData>>>::MakeMeta(
    L,
    &v10);
  l_G = L->l_G;
  l.name = "IsReadyAllFutureObjects";
  l.func = extension::_anonymous_namespace_::Lfn_Game_IsReadyAllFutureObjects;
  v14 = "IsReadyAsyncShaderCode";
  v15 = extension::_anonymous_namespace_::Lfn_Game_IsReadyAsyncShaderCode;
  v16 = "InitializeRender";
  v17 = AgHttp::onSingletonExit;
  v18 = "StartLegacyTransition";
  v19 = extension::_anonymous_namespace_::Lfn_Game_StartLegacyTransition;
  v20 = "ClearSplashScreen";
  v21 = AgHttp::onSingletonExit;
  v22 = "SaveDataAsyncLoad";
  v23 = extension::_anonymous_namespace_::Lfn_Game_SaveDataAsyncLoad;
  v24 = "SaveDataAsyncSave";
  v25 = extension::_anonymous_namespace_::Lfn_Game_SaveDataAsyncSave;
  v26 = "SaveDataIsReady";
  v27 = extension::_anonymous_namespace_::Lfn_Game_SaveDataIsReady;
  v28 = "SaveDataSetLanguage";
  v29 = extension::_anonymous_namespace_::Lfn_Game_SaveDataSetLanguage;
  v30 = "CharaProjAsyncLoad";
  v31 = extension::_anonymous_namespace_::Lfn_Game_CharaProjAsyncLoad;
  v32 = "StageProjAsyncLoad";
  v33 = extension::_anonymous_namespace_::Lfn_Game_StageProjAsyncLoad;
  v34 = 0i64;
  v35 = 0i64;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v3 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v3;
    }
  }
  v4 = luaH_new(L);
  top = L->top;
  top->value_.gc = (GCObject *)v4;
  top->tt_ = 69;
  ++L->top;
  luaH_resize(L, v4, 0, 11);
  luaL_setfuncs(L, &l, 0);
  return 1i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData>>>::Lfn_gc(
        lua_State *L)
{
  extension::AsyncContent<CharaProjectData> **v2; // rax
  lua_TValue *v3; // rax
  int v4; // eax
  extension::AsyncContent<CharaProjectData> *v5; // rbx
  const char *v7; // rax

  v2 = (extension::AsyncContent<CharaProjectData> **)luaL_testudata(L, 1, "Game.CharaProj");
  if ( !v2 )
  {
    v3 = L->ci->func + 1;
    if ( v3 >= L->top
      || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    {
      v4 = -1;
    }
    else
    {
      v4 = L->ci->func[1].tt_ & 0xF;
    }
    v7 = lua_pushfstring(
           L,
           "%s expected, got %s",
           "Game.CharaProj",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v4 + 112]);
    luaL_argerror(L, 1, v7);
  }
  v5 = *v2;
  if ( *v2 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 && v5 )
  {
    extension::AsyncContent<CharaProjectData>::~AsyncContent<CharaProjectData>(v5);
    operator delete(v5, 0x68ui64);
  }
  return 0i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData>>>::Lfn_gc(
        lua_State *L)
{
  extension::AsyncContent<StageProjectData> **v2; // rax
  lua_TValue *v3; // rax
  int v4; // eax
  extension::AsyncContent<StageProjectData> *v5; // rbx
  const char *v7; // rax

  v2 = (extension::AsyncContent<StageProjectData> **)luaL_testudata(L, 1, "Game.StageProj");
  if ( !v2 )
  {
    v3 = L->ci->func + 1;
    if ( v3 >= L->top
      || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    {
      v4 = -1;
    }
    else
    {
      v4 = L->ci->func[1].tt_ & 0xF;
    }
    v7 = lua_pushfstring(
           L,
           "%s expected, got %s",
           "Game.StageProj",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v4 + 112]);
    luaL_argerror(L, 1, v7);
  }
  v5 = *v2;
  if ( *v2 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 && v5 )
  {
    extension::AsyncContent<StageProjectData>::~AsyncContent<StageProjectData>(v5);
    operator delete(v5, 0x68ui64);
  }
  return 0i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData>>>::Lfn_tostring(
        lua_State *L)
{
  lua_pushstring(L, "Game.CharaProj");
  return 1i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData>>>::Lfn_tostring(
        lua_State *L)
{
  lua_pushstring(L, "Game.StageProj");
  return 1i64;
}

void __fastcall extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData>>>::MakeMeta(
        lua_State *L,
        luaL_Reg *reg)
{
  lua_TValue *top; // rbx
  GCObject *v5; // rax
  lua_TValue *v6; // rax
  lua_TValue *v7; // rbx
  GCObject *v8; // rax
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  GCObject *v11; // rax
  lua_TValue *v12; // rcx
  lua_TValue *v13; // rbx
  GCObject *v14; // rax

  luaL_newmetatable(L, "Game.CharaProj");
  *L->top = L->top[-1];
  top = L->top;
  L->top = top + 2;
  v5 = luaS_newlstr(L, "__index", 7ui64);
  top[1].value_.gc = v5;
  top[1].tt_ = v5->gch.tt | 0x40;
  luaV_settable(L, top - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v6 = L->top;
  v6->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData>>>::Lfn_tostring;
  v6->tt_ = 22;
  v7 = L->top;
  L->top = v7 + 2;
  v8 = luaS_newlstr(L, "__tostring", 0xAui64);
  v7[1].value_.gc = v8;
  v7[1].tt_ = v8->gch.tt | 0x40;
  luaV_settable(L, v7 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  if ( reg )
    luaL_setfuncs(L, reg, 0);
  v9 = L->top;
  v9->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData>>>::Lfn_gc;
  v9->tt_ = 22;
  v10 = L->top;
  L->top = v10 + 2;
  v11 = luaS_newlstr(L, "__gc", 4ui64);
  v10[1].value_.gc = v11;
  v10[1].tt_ = v11->gch.tt | 0x40;
  luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v12 = L->top;
  v12->value_.gc = v12[-1].value_.gc;
  v12->tt_ = v12[-1].tt_;
  v13 = L->top;
  L->top = v13 + 2;
  v14 = luaS_newlstr(L, "__metatable", 0xBui64);
  v13[1].value_.gc = v14;
  v13[1].tt_ = v14->gch.tt | 0x40;
  luaV_settable(L, v13 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
}

void __fastcall extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData>>>::MakeMeta(
        lua_State *L,
        luaL_Reg *reg)
{
  lua_TValue *top; // rbx
  GCObject *v5; // rax
  lua_TValue *v6; // rax
  lua_TValue *v7; // rbx
  GCObject *v8; // rax
  lua_TValue *v9; // rax
  lua_TValue *v10; // rbx
  GCObject *v11; // rax
  lua_TValue *v12; // rcx
  lua_TValue *v13; // rbx
  GCObject *v14; // rax

  luaL_newmetatable(L, "Game.StageProj");
  *L->top = L->top[-1];
  top = L->top;
  L->top = top + 2;
  v5 = luaS_newlstr(L, "__index", 7ui64);
  top[1].value_.gc = v5;
  top[1].tt_ = v5->gch.tt | 0x40;
  luaV_settable(L, top - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v6 = L->top;
  v6->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData>>>::Lfn_tostring;
  v6->tt_ = 22;
  v7 = L->top;
  L->top = v7 + 2;
  v8 = luaS_newlstr(L, "__tostring", 0xAui64);
  v7[1].value_.gc = v8;
  v7[1].tt_ = v8->gch.tt | 0x40;
  luaV_settable(L, v7 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  if ( reg )
    luaL_setfuncs(L, reg, 0);
  v9 = L->top;
  v9->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData>>>::Lfn_gc;
  v9->tt_ = 22;
  v10 = L->top;
  L->top = v10 + 2;
  v11 = luaS_newlstr(L, "__gc", 4ui64);
  v10[1].value_.gc = v11;
  v10[1].tt_ = v11->gch.tt | 0x40;
  luaV_settable(L, v10 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v12 = L->top;
  v12->value_.gc = v12[-1].value_.gc;
  v12->tt_ = v12[-1].tt_;
  v13 = L->top;
  L->top = v13 + 2;
  v14 = luaS_newlstr(L, "__metatable", 0xBui64);
  v13[1].value_.gc = v14;
  v13[1].tt_ = v14->gch.tt | 0x40;
  luaV_settable(L, v13 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
}

Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *__fastcall extension::FutureObjectJob<OGLCurve>::createOnErrorData(
        Scaleform::GFx::AS3::Instances::fl::XML *this,
        Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *result)
{
  result->pObject = 0i64;
  return result;
}

void __fastcall extension::AsyncContent<CharaProjectData>::setResult(
        extension::AsyncContent<CharaProjectData> *this,
        std::unique_ptr<CharaProjectData> result)
{
  CharaProjectData *v4; // rax
  CharaProjectData *Myval2; // rdi
  CharaProjectData *v6; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = (CharaProjectData *)result._Mypair._Myval2->__vftable;
    if ( result._Mypair._Myval2->__vftable )
    {
      result._Mypair._Myval2->__vftable = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
      {
        Myval2->__vftable = (CharaProjectData_vtbl *)&CharaProjectData::`vftable';
        CharaProjectData::InitData(Myval2, (unsigned __int64)result._Mypair._Myval2);
        Myval2->__vftable = (CharaProjectData_vtbl *)&CharaFileBase::`vftable';
        operator delete(Myval2, 0x48ui64);
      }
    }
    else
    {
      this->m_errorCode = 5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v6 = (CharaProjectData *)result._Mypair._Myval2->__vftable;
  if ( result._Mypair._Myval2->__vftable )
  {
    v6->__vftable = (CharaProjectData_vtbl *)&CharaProjectData::`vftable';
    CharaProjectData::InitData(v6, (unsigned __int64)result._Mypair._Myval2);
    v6->__vftable = (CharaProjectData_vtbl *)&CharaFileBase::`vftable';
    operator delete(v6, 0x48ui64);
  }
}

void __fastcall extension::AsyncContent<StageProjectData>::setResult(
        extension::AsyncContent<StageProjectData> *this,
        std::unique_ptr<StageProjectData> result)
{
  StageProjectData *v4; // rax
  StageProjectData *Myval2; // rbx
  char *pProjectName; // rcx
  StageProjectData *v7; // rbx
  char *v8; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = *(StageProjectData **)&result._Mypair._Myval2->m_readStatus;
    if ( *(_QWORD *)&result._Mypair._Myval2->m_readStatus )
    {
      *(_QWORD *)&result._Mypair._Myval2->m_readStatus = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
      {
        pProjectName = Myval2->m_fileHeader.pProjectName;
        if ( pProjectName )
        {
          operator delete(pProjectName, (unsigned __int64)result._Mypair._Myval2);
          Myval2->m_fileHeader.pProjectName = 0i64;
        }
        StageProjectData::InitData(Myval2, (unsigned __int64)result._Mypair._Myval2);
        operator delete(Myval2, 0x40ui64);
      }
    }
    else
    {
      this->m_errorCode = 5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = *(StageProjectData **)&result._Mypair._Myval2->m_readStatus;
  if ( *(_QWORD *)&result._Mypair._Myval2->m_readStatus )
  {
    v8 = v7->m_fileHeader.pProjectName;
    if ( v8 )
    {
      operator delete(v8, (unsigned __int64)result._Mypair._Myval2);
      v7->m_fileHeader.pProjectName = 0i64;
    }
    StageProjectData::InitData(v7, (unsigned __int64)result._Mypair._Myval2);
    operator delete(v7, 0x40ui64);
  }
}

