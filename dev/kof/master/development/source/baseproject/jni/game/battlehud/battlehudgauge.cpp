#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battleui.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudrenderer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudresources.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudgauge.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088C435
BattleHudGauge::BattleHudGauge(BattleHudResources * pResources, BattleHudRenderer * pRenderer, PLAYER_ID playerID, BattleHudGauge::VoiceType voiceType); // 0x1400C0700
BattleHudGauge::~BattleHudGauge(); // 0x1400C0830
BattleHudGauge::ImageResource::~ImageResource(); // 0x1400C0620
BattleHudGauge::MemberInfo::~MemberInfo(); // 0x1400C0800
BattleHudGauge::MemberInfo::OnlineParams::~OnlineParams(); // 0x1400C0BA0
void BattleHudGauge::clearParams(); // 0x1400C08E0
void BattleHudGauge::setupOnlineParams(unsigned long long onlineID, long playerTitle, long playerRank, long battleWins); // 0x1400C0C60
void BattleHudGauge::setupMemberOnlineParams(long orderIndex, unsigned long long onlineID, long playerTitle, long playerRank, long battleWins); // 0x1400C0D00
void BattleHudGauge::HideName(); // 0x1400C0E80
bool BattleHudGauge::isDetermineLoadingFiles(); // 0x1400C0EF0
void BattleHudGauge::updateResources(DrawHelper * pDrawHelper); // 0x1400C10C0
void BattleHudGauge::setPower(long maxPower, long power, bool bEnableSoundPlay); // 0x1400C1440
void BattleHudGauge::setBattleMessage(BattleHudGauge::MessageID message); // 0x1400C1550
void BattleHudGauge::changeComboCount(long combo); // 0x1400C1670
bool BattleHudGauge::setChatMessageByFixedPhrase(unsigned long long onlineID, const char * pString); // 0x1400C1730
void BattleHudGauge::roundInit(); // 0x1400C17F0
void BattleHudGauge::update(float advanceFrame); // 0x1400C18D0
void BattleHudGauge::playSound(SoundId soundID); // 0x1400C1C50
void BattleHudGauge::activity_update(float animationFrame); // 0x1400C1D60
bool BattleHudGauge::activity_setMessage(BattleEventHandler::EActivity::Type type, long score, bool bStackEntry); // 0x1400C1E50//decompilation failure at 14088C435!
void __fastcall BattleHudGauge::BattleHudGauge(
        BattleHudGauge *this,
        BattleHudResources *pResources,
        BattleHudRenderer *pRenderer,
        PLAYER_ID playerID,
        BattleHudGauge::VoiceType voiceType)
{
  this->m_pResources = pResources;
  this->m_pRenderer = pRenderer;
  this->m_bLoading = 0;
  this->m_playerID = playerID;
  `eh vector constructor iterator'(
    this->m_memberInfos,
    0x30ui64,
    3ui64,
    (void (__fastcall *)(void *))BattleHudGauge::MemberInfo::MemberInfo,
    (void (__fastcall *)(void *))BattleHudGauge::MemberInfo::~MemberInfo);
  this->m_topOrderIndex = 0;
  this->m_voiceType = voiceType;
  this->m_errorMember.characterNo = CHARACTER_NO_NONE;
  this->m_errorMember.bAlive = 0;
  this->m_errorMember.orderIndex = 0;
  this->m_errorMember.imageFace.imageID = -1;
  this->m_errorMember.imageFace.image.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->m_errorMember.imageFace.image.m_body);
  this->m_errorMember.pOnlineParams = 0i64;
  this->m_bGuardDanger = 0;
  this->m_bPowerMax = 0;
  this->m_bEnabledSpEffects = 1;
  this->m_pActivites = (BattleHudGauge::ActivityScoreParams *)operator new[](0x30ui64);
  this->m_pActivityStacks = (BattleHudGauge::ActivityStackParams *)operator new[](0x28ui64);
  BattleHudGauge::clearParams(this);
}

void __fastcall BattleHudGauge::MemberInfo::MemberInfo(BattleHudGauge::MemberInfo *this)
{
  this->characterNo = CHARACTER_NO_NONE;
  this->bAlive = 0;
  this->orderIndex = 0;
  this->imageFace.imageID = -1;
  this->imageFace.image.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->imageFace.image.m_body);
  this->pOnlineParams = 0i64;
}

void __fastcall BattleHudGauge::MemberInfo::OnlineParams::OnlineParams(BattleHudGauge::MemberInfo::OnlineParams *this)
{
  this->playerOnlineID = 0i64;
  this->textPlayerID = 0i64;
  this->stringChatMessage.m_bError = 0;
  this->stringChatMessage.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  *(_QWORD *)&this->stringChatMessage.m_type = 0i64;
  this->stringChatMessage.m_height = 0;
  this->stringChatMessage.m_pImage = 0i64;
  this->stringChatMessage.m_imageIndex = -1;
  this->stringChatMessage.m_pDrawHelper = 0i64;
  this->stringChatMessage.m_freeMessage.pMessage = 0i64;
  this->stringChatMessage.m_freeMessage.messageLength = 0;
  this->stringChatMessage.m_freeMessage.pImage = 0i64;
  this->stringChatMessage.m_freeMessage.pTexuteBuffer = 0i64;
  this->stringChatMessage.m_freeMessage.textureBufferSize = 0;
  this->stringChatMessage.m_combination.pRects = 0i64;
  this->stringChatMessage.m_combination.pGlyphs = 0i64;
  this->stringChatMessage.m_combination.pImageIndexes = 0i64;
  this->stringChatMessage.m_combination.imageIndexCount = 0;
  this->imageChatFace.imageID = -1;
  this->imageChatFace.image.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->imageChatFace.image.m_body);
  this->imageTitle.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->imageTitle.m_body);
  this->imageRank.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->imageRank.m_body);
  this->chatMessageRenderCounter = 0;
  *(_QWORD *)&this->chatWindowScaleSize = 1065353216i64;
}

void __fastcall BattleHudGauge::~BattleHudGauge(BattleHudGauge *this)
{
  unsigned __int64 v2; // rdx
  BattleHudGauge::ActivityScoreParams *m_pActivites; // rcx
  BattleHudGauge::ActivityStackParams *m_pActivityStacks; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx

  BattleHudGauge::clearParams(this);
  m_pActivites = this->m_pActivites;
  if ( m_pActivites )
  {
    operator delete(m_pActivites, v2);
    this->m_pActivites = 0i64;
  }
  m_pActivityStacks = this->m_pActivityStacks;
  if ( m_pActivityStacks )
  {
    operator delete(m_pActivityStacks, v2);
    this->m_pActivityStacks = 0i64;
  }
  this->m_pResources = 0i64;
  m_ptr = this->m_errorMember.imageFace.image.m_body.m_ptr;
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  `eh vector destructor iterator'(
    this->m_memberInfos,
    0x30ui64,
    3ui64,
    (void (__fastcall *)(void *))BattleHudGauge::MemberInfo::~MemberInfo);
}

void __fastcall BattleHudResources::ImageResource::~ImageResource(BattleHudResources::ImageResource *this)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx

  m_ptr = this->image.m_body.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall BattleHudGauge::MemberInfo::~MemberInfo(BattleHudGauge::MemberInfo *this)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx

  m_ptr = this->imageFace.image.m_body.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall BattleHudGauge::MemberInfo::OnlineParams::~OnlineParams(BattleHudGauge::MemberInfo::OnlineParams *this)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v3; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v4; // rcx

  m_ptr = this->imageRank.m_body.m_ptr;
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  v3 = this->imageTitle.m_body.m_ptr;
  if ( v3
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v3->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v3->~RefCountableWeakSupportBase)(
      v3,
      1i64);
  }
  v4 = this->imageChatFace.image.m_body.m_ptr;
  if ( v4
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v4->~RefCountableWeakSupportBase)(
      v4,
      1i64);
  }
  this->stringChatMessage.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  ImageString::dispose(&this->stringChatMessage);
  this->stringChatMessage.m_pDrawHelper = 0i64;
  this->stringChatMessage.__vftable = (ImageString_vtbl *)&ErrorChecker::`vftable';
}

void __fastcall Scaleform::String::~String(Scaleform::String *this)
{
  volatile int *v1; // rbx

  v1 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v1 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v1);
}

void __fastcall BattleHudGauge::HideName(BattleHudGauge *this)
{
  BattleHudGauge::MemberInfo::OnlineParams *pOnlineParams; // rcx
  extension::GFXIText *textPlayerID; // rcx
  extension::gfxi_detail::TextProxy *v3; // rax
  Scaleform::GFx::DrawText *pObject; // rcx

  pOnlineParams = this->m_memberInfos[this->m_topOrderIndex % 3].pOnlineParams;
  if ( pOnlineParams )
  {
    textPlayerID = pOnlineParams->textPlayerID;
    if ( textPlayerID->m_body.m_ptr->m_isVisible )
    {
      v3 = extension::GFXIText::cloneIfShared(textPlayerID);
      pObject = v3->m_gtext.pObject;
      v3->m_isVisible = 0;
      if ( pObject )
        pObject->SetVisible(pObject, 0);
    }
  }
}

bool __fastcall BattleHudGauge::activity_setMessage(
        BattleHudGauge *this,
        BattleEventHandler::EActivity::Type type,
        int score,
        bool bStackEntry)
{
  int v5; // er11
  BattleHudGauge::ActivityScoreParams *m_pActivites; // rcx
  __int64 v7; // r10
  BattleEventHandler::EActivity::Type *p_type; // rax
  bool result; // al
  int m_activityStackCount; // ecx
  __int64 v11; // rcx
  BattleHudGauge::ActivityScoreParams *v12; // rax

  v5 = 0;
  m_pActivites = this->m_pActivites;
  v7 = 0i64;
  p_type = &m_pActivites->type;
  while ( *p_type )
  {
    ++v5;
    ++v7;
    p_type += 4;
    if ( v7 >= 3 )
      goto LABEL_6;
  }
  if ( v5 >= 0 )
  {
    v12 = &m_pActivites[v5];
    v12->type = type;
    v12->score = score;
    v12->animationCounter = 80;
    v12->bVisible = 1;
    return 1;
  }
LABEL_6:
  if ( bStackEntry )
    return 0;
  m_activityStackCount = this->m_activityStackCount;
  if ( m_activityStackCount >= 4 )
    return 0;
  v11 = (this->m_activityStackIndex + m_activityStackCount) % 5;
  this->m_pActivityStacks[v11].type = type;
  this->m_pActivityStacks[v11].score = score;
  result = 1;
  ++this->m_activityStackCount;
  return result;
}

void __fastcall BattleHudGauge::activity_update(BattleHudGauge *this, float animationFrame)
{
  int v2; // er9
  int v4; // edx
  __int64 i; // r8
  BattleHudGauge::ActivityScoreParams *m_pActivites; // rax
  __int64 m_activityStackIndex; // rcx
  BattleHudGauge::ActivityStackParams *m_pActivityStacks; // rax
  BattleHudGauge::ActivityScoreParams *v9; // rdx
  int score; // er8
  BattleEventHandler::EActivity::Type type; // er11
  __int64 v12; // rcx
  BattleEventHandler::EActivity::Type *j; // rax
  BattleHudGauge::ActivityScoreParams *v14; // rax
  int v15; // ecx

  v2 = 0;
  v4 = 0;
  for ( i = 0i64; i < 3; ++i )
  {
    m_pActivites = this->m_pActivites;
    if ( m_pActivites[i].bVisible && m_pActivites[i].type )
    {
      if ( --m_pActivites[i].animationCounter > 0 )
        continue;
      m_pActivites[i].type = NONE;
      m_pActivites[i].bVisible = 0;
    }
    ++v4;
  }
  if ( this->m_activityStackCount > 0 && v4 > 0 )
  {
    m_activityStackIndex = this->m_activityStackIndex;
    m_pActivityStacks = this->m_pActivityStacks;
    v9 = this->m_pActivites;
    score = m_pActivityStacks[m_activityStackIndex].score;
    type = m_pActivityStacks[m_activityStackIndex].type;
    v12 = 0i64;
    for ( j = &v9->type; *j; j += 4 )
    {
      ++v2;
      if ( ++v12 >= 3 )
        return;
    }
    if ( v2 >= 0 )
    {
      v14 = &v9[v2];
      v14->type = type;
      v14->score = score;
      v14->animationCounter = 80;
      v14->bVisible = 1;
      v15 = this->m_activityStackIndex + 1;
      --this->m_activityStackCount;
      this->m_activityStackIndex = v15 % 5;
    }
  }
}

void __fastcall BattleHudGauge::changeComboCount(BattleHudGauge *this, int combo)
{
  float v2; // xmm1_4
  int m_comboCount; // eax
  float m_comboChangeFrame; // xmm0_4
  float m_comboAnimationCounter; // xmm2_4

  if ( combo > 1 )
  {
    m_comboCount = this->m_comboCount;
    if ( m_comboCount < combo && m_comboCount )
    {
      m_comboChangeFrame = this->m_comboChangeFrame;
      m_comboAnimationCounter = this->m_comboAnimationCounter;
      this->m_comboChangeFrame = m_comboAnimationCounter;
      if ( (float)(m_comboAnimationCounter - m_comboChangeFrame) <= 2.0 )
        this->m_comboChangeFrame = m_comboAnimationCounter - (float)(combo & 1);
    }
    else
    {
      this->m_comboAnimationCounter = 0.0;
      this->m_comboEraseFrame = 99999.0;
      this->m_comboChangeFrame = 99999.0;
    }
    this->m_bComboVisible = 1;
    if ( combo >= 999 )
      combo = 999;
    this->m_comboCount = combo;
  }
  else
  {
    v2 = this->m_comboAnimationCounter;
    if ( this->m_comboEraseFrame > v2 )
      this->m_comboEraseFrame = v2;
  }
}

void __fastcall BattleHudGauge::clearParams(BattleHudGauge *this)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption> **p_pOnlineParams; // rdi
  extension::BasicFutureObject<Image,extension::FutureImageOption> *p_image; // rbp
  __int64 v4; // r15
  extension::gfxi_detail::TextProxy **m_ptr; // r14
  extension::gfxi_detail::TextProxy *v6; // rsi
  extension::BasicFutureObject<Image,extension::FutureImageOption> *v7; // rsi

  p_pOnlineParams = (extension::BasicFutureObject<Image,extension::FutureImageOption> **)&this->m_memberInfos[0].pOnlineParams;
  p_image = &this->m_memberInfos[0].imageFace.image;
  this->m_bPartyBattle = 0;
  v4 = 3i64;
  do
  {
    *((_DWORD *)p_pOnlineParams - 10) = -1;
    extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(p_image);
    if ( *p_pOnlineParams )
    {
      ImageString::dispose((ImageString *)&(*p_pOnlineParams)[1]);
      m_ptr = (extension::gfxi_detail::TextProxy **)(*p_pOnlineParams)->m_body.m_ptr;
      if ( m_ptr )
      {
        v6 = *m_ptr;
        if ( *m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64) == 1 && v6 )
        {
          extension::gfxi_detail::TextProxy::~TextProxy(v6);
          operator delete(v6, 0xA8ui64);
        }
        operator delete(m_ptr, 8ui64);
        (*p_pOnlineParams)->m_body.m_ptr = 0i64;
      }
      extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(*p_pOnlineParams + 11);
      extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(*p_pOnlineParams + 13);
      extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(*p_pOnlineParams + 12);
      v7 = *p_pOnlineParams;
      if ( *p_pOnlineParams )
      {
        BattleHudGauge::MemberInfo::OnlineParams::~OnlineParams((BattleHudGauge::MemberInfo::OnlineParams *)*p_pOnlineParams);
        operator delete(v7, 0xF0ui64);
        *p_pOnlineParams = 0i64;
      }
    }
    p_image += 3;
    p_pOnlineParams += 6;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)&this->m_comboChangeFrame = 0i64;
  this->m_messageInfo[1].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[2].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[3].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[4].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[5].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[6].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[7].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[8].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[9].messageId = SYSTEM_MES_NONE;
  *(_QWORD *)&this->m_messageInfoIndexTop = 0i64;
  this->m_bLoading = 0;
  this->m_topOrderIndex = 0;
  this->m_bComboVisible = 0;
  this->m_comboCount = 0;
  *(_QWORD *)&this->m_comboAnimationCounter = 0i64;
  this->m_bVisibleClimaxGauge = 0;
  *(_QWORD *)&this->m_climaxRate = 0i64;
  this->m_animationCounter = 0.0;
  *(_WORD *)&this->m_bStunDanger = 0;
  *(_QWORD *)&this->m_stunAnimationCounter = 0i64;
  this->m_guardAnimationFrame = 0.0;
  this->m_climaxGaugeSize = CLIMAX_GAUGE_SIZE_S;
  *(_QWORD *)&this->m_hpRedState = 0i64;
  this->m_hpLostAnimationCounter = 0.0;
  this->m_powerStock = -1;
  *(_QWORD *)&this->m_powerStockAnimationCounter = 0i64;
  this->m_maxModeStartAnimationCounter = 0.0;
  this->m_timerAnimationCounter = 0.0;
  *(_QWORD *)&this->m_setCount = 0i64;
  this->m_bPlaySoundFlag = 1;
  this->m_appearanceParams.bPlaying = 0;
  this->m_pActivites->bVisible = 0;
  this->m_pActivites->type = NONE;
  this->m_pActivites[1].bVisible = 0;
  this->m_pActivites[1].type = NONE;
  this->m_pActivites[2].bVisible = 0;
  this->m_pActivites[2].type = NONE;
  *(_QWORD *)&this->m_activityStackCount = 0i64;
}

bool __fastcall BattleHudGauge::isDetermineLoadingFiles(BattleHudGauge *this)
{
  __int64 v2; // rsi
  __int64 v3; // r8
  BattleHudGauge::MemberInfo::OnlineParams **p_pOnlineParams; // rdi
  BattleHudGauge::MemberInfo::OnlineParams **v5; // rdx
  ImageString_vtbl *v6; // rax
  BattleHudGauge::MemberInfo::OnlineParams *v7; // rcx
  extension::AsyncContent<Image> *m_ptr; // rax
  extension::AsyncContent<Image> *v9; // rax
  extension::AsyncContent<Image> *v10; // rax
  ImageString_vtbl *v11; // rbx
  extension::AsyncContent<Image> *v12; // rbx
  extension::AsyncContent<Image> *v13; // rbx
  extension::AsyncContent<Image> *v14; // rbx

  if ( this->m_bLoading )
  {
    v2 = 0i64;
    v3 = 0i64;
    p_pOnlineParams = &this->m_memberInfos[0].pOnlineParams;
    v5 = &this->m_memberInfos[0].pOnlineParams;
    while ( 1 )
    {
      v6 = (*(v5 - 1))->stringChatMessage.__vftable;
      if ( v6 )
      {
        if ( !LOBYTE(v6[6].isError) && ((__int64)v6[5].~ErrorChecker & 1) == 0 )
          break;
      }
      v7 = *v5;
      if ( *v5 )
      {
        m_ptr = v7->imageChatFace.image.m_body.m_ptr->m_content.m_ptr;
        if ( m_ptr )
        {
          if ( !m_ptr->m_isDataReleased && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            break;
        }
        v9 = v7->imageTitle.m_body.m_ptr->m_content.m_ptr;
        if ( v9 )
        {
          if ( !v9->m_isDataReleased && (v9->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            break;
        }
        v10 = v7->imageRank.m_body.m_ptr->m_content.m_ptr;
        if ( v10 )
        {
          if ( !v10->m_isDataReleased && (v10->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            break;
        }
      }
      ++v3;
      v5 += 6;
      if ( v3 >= 3 )
      {
        this->m_bLoading = 0;
        do
        {
          v11 = (*(p_pOnlineParams - 1))->stringChatMessage.__vftable;
          if ( v11 && !LOBYTE(v11[6].isError) )
          {
            if ( ((__int64)v11[5].~ErrorChecker & 1) == 0 )
              extension::AsyncStatus::waitFor(
                (extension::AsyncStatus *)&v11[5].~ErrorChecker,
                (extension::AsyncStatus::Step)v5);
            if ( LODWORD(v11[5].isError) )
              break;
          }
          if ( *p_pOnlineParams )
          {
            v12 = (*p_pOnlineParams)->imageChatFace.image.m_body.m_ptr->m_content.m_ptr;
            if ( v12 && !v12->m_isDataReleased )
            {
              if ( (v12->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                extension::AsyncStatus::waitFor(&v12->m_status, (extension::AsyncStatus::Step)v5);
              if ( v12->m_errorCode )
                break;
            }
            v13 = (*p_pOnlineParams)->imageTitle.m_body.m_ptr->m_content.m_ptr;
            if ( v13 && !v13->m_isDataReleased )
            {
              if ( (v13->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                extension::AsyncStatus::waitFor(&v13->m_status, (extension::AsyncStatus::Step)v5);
              if ( v13->m_errorCode )
                break;
            }
            v14 = (*p_pOnlineParams)->imageRank.m_body.m_ptr->m_content.m_ptr;
            if ( v14 && !v14->m_isDataReleased )
            {
              if ( (v14->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                extension::AsyncStatus::waitFor(&v14->m_status, (extension::AsyncStatus::Step)v5);
              if ( v14->m_errorCode )
                break;
            }
          }
          ++v2;
          p_pOnlineParams += 6;
        }
        while ( v2 < 3 );
        return 0;
      }
    }
  }
  return 0;
}

void __fastcall BattleHudGauge::playSound(BattleHudGauge *this, SoundId soundID)
{
  unsigned __int64 v2; // rdi
  char *v4; // rax
  char v5; // cl
  __int64 v6; // rdx
  SoundIndex *v7; // r8
  extension::SoundList *v8; // rcx
  extension::SoundObject o; // [rsp+40h] [rbp+8h] BYREF

  v2 = soundID;
  v4 = (char *)operator new(0x60ui64);
  *(_QWORD *)v4 = 1i64;
  *((_WORD *)v4 + 4) = 1;
  v5 = 0;
  *(_QWORD *)(v4 + 12) = 0i64;
  *(_QWORD *)(v4 + 20) = 0i64;
  *((_DWORD *)v4 + 7) = 1120403456;
  *((_QWORD *)v4 + 11) = 0i64;
  o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v4;
  if ( this->m_playerID )
  {
    v6 = 7i64;
    if ( v4[8] || *((float *)v4 + 6) != 0.69999999 )
      v5 = 1;
    *((_DWORD *)v4 + 6) = 1060320051;
  }
  else
  {
    v6 = 6i64;
    if ( v4[8] || *((float *)v4 + 6) != -0.69999999 )
      v5 = 1;
    *((_DWORD *)v4 + 6) = -1087163597;
  }
  v4[9] = 0;
  v4[8] = v5;
  if ( v2 >= 0x11A )
    v7 = &s_soundIndex;
  else
    v7 = (SoundIndex *)&s_soundIndex.m_keys[v2];
  v8 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 48i64 * (int)v6 + 2196904);
  if ( v8 )
    extension::SoundList::playSEByName(v8, &o, &v7->m_nullKey, 0i64);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &o.m_runtimeEffector,
    v6);
}

void __fastcall BattleHudGauge::roundInit(BattleHudGauge *this)
{
  this->m_bComboVisible = 0;
  this->m_comboCount = 0;
  *(_QWORD *)&this->m_comboAnimationCounter = 0i64;
  this->m_comboChangeFrame = 0.0;
  this->m_drinkCount = 0;
  this->m_pActivites->bVisible = 0;
  this->m_pActivites->type = NONE;
  this->m_pActivites[1].bVisible = 0;
  this->m_pActivites[1].type = NONE;
  this->m_pActivites[2].bVisible = 0;
  this->m_pActivites[2].type = NONE;
  *(_QWORD *)&this->m_activityStackCount = 0i64;
  this->m_messageInfo[0].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[1].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[2].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[3].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[4].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[5].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[6].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[7].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[8].messageId = SYSTEM_MES_NONE;
  this->m_messageInfo[9].messageId = SYSTEM_MES_NONE;
  *(_QWORD *)&this->m_messageInfoIndexTop = 0i64;
  this->m_bEnabledSpEffects = 1;
  this->m_animationCounter = 0.0;
  if ( this->m_bPowerMax )
  {
    this->m_powerRate = 1.0;
    this->m_powerMaxStockAnimationCounter = 20.0;
  }
}

void __fastcall BattleHudGauge::setBattleMessage(BattleHudGauge *this, BattleHudGauge::MessageID message)
{
  int i; // ecx
  __int64 m_messageInfoIndexBottom; // rax
  int v5; // er8
  int m_messageInfoIndexTop; // ecx

  if ( message < SYSTEM_MES_MAX )
  {
    for ( i = this->m_messageInfoIndexTop; i != this->m_messageInfoIndexBottom; i = (i + 1) % 10 )
      this->m_messageInfo[i].movePos = this->m_messageInfo[i].movePos + 48.0;
    m_messageInfoIndexBottom = this->m_messageInfoIndexBottom;
    *(_QWORD *)&this->m_messageInfo[m_messageInfoIndexBottom].pos = 0i64;
    this->m_messageInfo[m_messageInfoIndexBottom].visibleCounter = 0.0;
    this->m_messageInfo[m_messageInfoIndexBottom].messageId = message;
    v5 = (this->m_messageInfoIndexBottom + 1) % 10;
    m_messageInfoIndexTop = this->m_messageInfoIndexTop;
    this->m_messageInfoIndexBottom = v5;
    if ( v5 == m_messageInfoIndexTop )
      this->m_messageInfoIndexTop = (m_messageInfoIndexTop + 1) % 10;
    if ( this->m_bPlaySoundFlag )
    {
      if ( message == SYSTEM_MES_GUARD_CRASH )
      {
        BattleHudGauge::playSound(this, SND_SYSVOICE_GUARD_CRASH);
      }
      else if ( message == SYSTEM_MES_STUN )
      {
        BattleHudGauge::playSound(this, SND_SYSVOICE_STUN);
      }
    }
  }
}

bool __fastcall BattleHudGauge::setChatMessageByFixedPhrase(
        BattleHudGauge *this,
        unsigned __int64 onlineID,
        const char *pString)
{
  BattleHudResources *m_pResources; // r10
  bool result; // al
  __int64 v7; // rcx
  BattleHudGauge::MemberInfo *i; // rax
  BattleHudGauge::MemberInfo::OnlineParams *pOnlineParams; // rdx
  BattleHudGauge::MemberInfo::OnlineParams *v10; // rbx
  BattleHudRenderer *m_pRenderer; // rax

  m_pResources = this->m_pResources;
  if ( !this->m_pResources )
    return 0;
  v7 = 0i64;
  for ( i = this->m_memberInfos; ; ++i )
  {
    if ( i->characterNo != CHARACTER_NO_NONE )
    {
      pOnlineParams = i->pOnlineParams;
      if ( pOnlineParams )
      {
        if ( pOnlineParams->playerOnlineID == onlineID )
          break;
      }
    }
    if ( ++v7 >= 3 )
      return 0;
  }
  if ( i->characterNo == CHARACTER_NO_NONE )
    return 0;
  v10 = i->pOnlineParams;
  result = BattleHudResources::createStringFixedPhrase(m_pResources, &pOnlineParams->stringChatMessage, pString);
  if ( result )
  {
    m_pRenderer = this->m_pRenderer;
    if ( v10->stringChatMessage.m_pDrawHelper != m_pRenderer )
    {
      v10->stringChatMessage.m_pDrawHelper = m_pRenderer;
      v10->stringChatMessage.m_imageIndex = -1;
    }
    result = 1;
    *(_QWORD *)&v10->chatMessageRenderCounter = 108i64;
  }
  return result;
}

void __fastcall BattleHudGauge::setPower(BattleHudGauge *this, int maxPower, int power, bool bEnableSoundPlay)
{
  int m_powerStock; // er8
  bool v8; // zf
  bool v9; // cc

  m_powerStock = this->m_powerStock;
  if ( maxPower > power )
  {
    this->m_bPowerMax = 0;
    this->m_powerStock = power / 1000;
    this->m_powerRate = (float)(power % 1000) / 1000.0;
  }
  else
  {
    v8 = !this->m_bVisibleClimaxGauge;
    this->m_powerRate = 1.0;
    this->m_powerMaxStockAnimationCounter = 20.0;
    this->m_bPowerMax = v8;
    this->m_powerStock = maxPower / 1000;
  }
  if ( bEnableSoundPlay && (float)m_powerStock >= 0.0 )
  {
    v9 = this->m_powerStock < m_powerStock;
    if ( this->m_powerStock > m_powerStock )
    {
      this->m_powerStockAnimationCounter = 22.0;
      BattleHudGauge::playSound(this, SND_SE_GAUGE_CHARGE);
      goto LABEL_11;
    }
  }
  else
  {
    v9 = this->m_powerStock < m_powerStock;
  }
  if ( v9 )
  {
    this->m_bPowerMax = 0;
    this->m_powerStockAnimationCounter = 0.0;
  }
LABEL_11:
  this->m_powerMax = maxPower;
  this->m_power = power;
}

void __fastcall extension::GFXIText::setStr(extension::GFXIText *this, const char *utf8)
{
  const Scaleform::String *v3; // rax
  const Scaleform::String *v4; // rdi
  unsigned __int8 *v5; // rdx
  unsigned __int64 v6; // r8
  int v7; // eax
  int v8; // ecx
  extension::gfxi_detail::TextProxy *v9; // rax
  void *v10; // rbx
  Scaleform::String v11; // [rsp+40h] [rbp+8h] BYREF

  Scaleform::String::String(&v11, utf8);
  v4 = v3;
  v5 = (unsigned __int8 *)((this->m_body.m_ptr->m_str.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v6 = (v3->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (this->m_body.m_ptr->m_str.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  do
  {
    v7 = v5[v6];
    v8 = *v5 - v7;
    if ( v8 )
      break;
    ++v5;
  }
  while ( v7 );
  if ( v8 )
  {
    v9 = extension::GFXIText::cloneIfShared(this);
    extension::gfxi_detail::TextProxy::setStr(v9, v4);
  }
  v10 = (void *)(v11.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v11.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v10);
}

void __fastcall BattleHudGauge::setupMemberOnlineParams(
        BattleHudGauge *this,
        int orderIndex,
        unsigned __int64 onlineID,
        int playerTitle,
        int playerRank,
        int battleWins)
{
  char *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // edx
  extension::GFXIText *v12; // rcx
  void *v13; // rbx
  __int64 v14; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> *v15; // rbx
  unsigned int v16; // er8
  BattleHudResources *v17; // rcx
  BattleHudResources *v18; // rcx
  BattleHudGauge::MemberInfo::OnlineParams *v19; // [rsp+28h] [rbp-10h]

  if ( orderIndex < 3 )
  {
    v9 = (char *)this + 48 * orderIndex;
    v10 = *((_QWORD *)v9 + 8);
    if ( v10 )
    {
      ImageString::dispose((ImageString *)(v10 + 16));
      v12 = *(extension::GFXIText **)(*((_QWORD *)v9 + 8) + 8i64);
      if ( v12 )
      {
        extension::GFXIText::`scalar deleting destructor'(v12, v11);
        *(_QWORD *)(*((_QWORD *)v9 + 8) + 8i64) = 0i64;
      }
      extension::BasicFutureObject<Image,extension::FutureImageOption>::reset((extension::BasicFutureObject<Image,extension::FutureImageOption> *)(*((_QWORD *)v9 + 8) + 176i64));
      extension::BasicFutureObject<Image,extension::FutureImageOption>::reset((extension::BasicFutureObject<Image,extension::FutureImageOption> *)(*((_QWORD *)v9 + 8) + 208i64));
      extension::BasicFutureObject<Image,extension::FutureImageOption>::reset((extension::BasicFutureObject<Image,extension::FutureImageOption> *)(*((_QWORD *)v9 + 8) + 192i64));
      v13 = (void *)*((_QWORD *)v9 + 8);
      if ( v13 )
      {
        BattleHudGauge::MemberInfo::OnlineParams::~OnlineParams(*((BattleHudGauge::MemberInfo::OnlineParams **)v9 + 8));
        operator delete(v13, 0xF0ui64);
        *((_QWORD *)v9 + 8) = 0i64;
      }
    }
    v19 = (BattleHudGauge::MemberInfo::OnlineParams *)operator new(0xF0ui64);
    BattleHudGauge::MemberInfo::OnlineParams::OnlineParams(v19);
    v15 = (extension::BasicFutureObject<Image,extension::FutureImageOption> *)v14;
    *((_QWORD *)v9 + 8) = v14;
    *(_QWORD *)v14 = onlineID;
    v16 = battleWins ^ (battleWins ^ (battleWins >> 7)) & 0x550055 ^ (((battleWins ^ (battleWins >> 7)) & 0x550055) << 7);
    v17 = (BattleHudResources *)((unsigned __int16)(v16 ^ (v16 >> 14)) & 0xCCCC);
    *(_DWORD *)(v14 + 232) = (unsigned int)v17 ^ v16 ^ ((((unsigned __int16)v16 ^ (unsigned __int16)(v16 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
    BattleHudResources::readPlayerTitleImage(
      v17,
      (extension::BasicFutureObject<Image,extension::FutureImageOption> *)(v14 + 192),
      playerTitle);
    BattleHudResources::readPlayerRankImage(v18, v15 + 13, playerRank);
    this->m_bLoading = 1;
    this->m_bPartyBattle = 1;
  }
}

void __fastcall BattleHudGauge::setupOnlineParams(
        BattleHudGauge *this,
        unsigned __int64 onlineID,
        int playerTitle,
        int playerRank,
        int battleWins)
{
  BattleHudGauge::setupMemberOnlineParams(this, 0, onlineID, playerTitle, playerRank, battleWins);
  BattleHudGauge::setupMemberOnlineParams(this, 1, onlineID, playerTitle, playerRank, battleWins);
  BattleHudGauge::setupMemberOnlineParams(this, 2, onlineID, playerTitle, playerRank, battleWins);
  this->m_bPartyBattle = 0;
}

void __fastcall BattleHudGauge::update(BattleHudGauge *this, float advanceFrame)
{
  bool v2; // zf
  float v4; // xmm6_4
  float m_hpRate; // xmm2_4
  float m_climaxAnimationCounter; // xmm0_4
  float m_maxModeStartAnimationCounter; // xmm1_4
  int v8; // eax
  float v9; // xmm0_4
  int i; // er8
  float v11; // xmm0_4
  float movePos; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float m_hpGuardDamageTimer; // xmm0_4
  float v16; // xmm0_4
  BattleHudGauge::MemberInfo::OnlineParams **p_pOnlineParams; // rdi
  __int64 v18; // rsi
  BattleHudGauge::MemberInfo::OnlineParams *v19; // rcx
  int chatMessageRenderCounter; // eax
  int v21; // edx

  v2 = this->m_hpRedState == STATE_HPREDBAR_PLAY;
  v4 = advanceFrame;
  this->m_animationCounter = advanceFrame + this->m_animationCounter;
  if ( v2 )
  {
    m_hpRate = this->m_hpRate;
    advanceFrame = this->m_hpRateRed;
    if ( m_hpRate != advanceFrame )
    {
      advanceFrame = advanceFrame - (float)(v4 * this->m_hpRedSpeed);
      this->m_hpRateRed = fmaxf(m_hpRate, advanceFrame);
    }
  }
  if ( this->m_bEnabledSpEffects )
  {
    m_climaxAnimationCounter = (float)this->m_climaxAnimationCounter;
    this->m_powerStockAnimationCounter = fmaxf(this->m_powerStockAnimationCounter - v4, 0.0);
    m_maxModeStartAnimationCounter = this->m_maxModeStartAnimationCounter;
    v8 = (int)(float)(m_climaxAnimationCounter + v4);
    v9 = this->m_hpLostAnimationCounter - v4;
    this->m_climaxAnimationCounter = v8;
    advanceFrame = fmaxf(m_maxModeStartAnimationCounter - v4, 0.0);
    this->m_maxModeStartAnimationCounter = advanceFrame;
    this->m_hpLostAnimationCounter = fmaxf(v9, 0.0);
    this->m_powerMaxStockAnimationCounter = fmaxf(this->m_powerMaxStockAnimationCounter - v4, 0.0);
  }
  for ( i = this->m_messageInfoIndexTop; i != this->m_messageInfoIndexBottom; i = (i + 1) % 10 )
  {
    v11 = v4 + this->m_messageInfo[i].visibleCounter;
    this->m_messageInfo[i].visibleCounter = v11;
    if ( v11 < 78.0 )
    {
      advanceFrame = this->m_messageInfo[i].pos;
      movePos = this->m_messageInfo[i].movePos;
      if ( advanceFrame != movePos )
        this->m_messageInfo[i].pos = fminf((float)(v4 * 12.5) + advanceFrame, movePos);
    }
    else
    {
      this->m_messageInfo[i].messageId = SYSTEM_MES_NONE;
      this->m_messageInfoIndexTop = (this->m_messageInfoIndexTop + 1) % 10;
    }
  }
  if ( this->m_bComboVisible )
  {
    v13 = v4 + this->m_comboAnimationCounter;
    this->m_comboAnimationCounter = v13;
    if ( (float)(v13 - this->m_comboEraseFrame) >= 72.0 )
    {
      this->m_bComboVisible = 0;
      this->m_comboCount = 0;
    }
  }
  if ( this->m_bStunEnableAnimation )
  {
    advanceFrame = *(float *)&FLOAT_60_0;
    v14 = v4 + this->m_stunAnimationCounter;
    this->m_stunAnimationCounter = v14;
    if ( v14 >= 60.0 )
    {
      this->m_bStunEnableAnimation = this->m_bStunDanger;
      this->m_stunAnimationCounter = v14 - 60.0;
    }
  }
  if ( this->m_bGuardDanger )
    this->m_guardAnimationFrame = v4 + this->m_guardAnimationFrame;
  m_hpGuardDamageTimer = this->m_hpGuardDamageTimer;
  if ( m_hpGuardDamageTimer > 0.0 )
  {
    v16 = m_hpGuardDamageTimer - v4;
    this->m_hpGuardDamageTimer = v16;
    if ( v16 <= 0.0 && this->m_hpRate != this->m_hpRateRed )
    {
      this->m_hpRedState = STATE_HPREDBAR_PLAY;
      this->m_hpRedSpeed = 0.050000001;
    }
  }
  p_pOnlineParams = &this->m_memberInfos[0].pOnlineParams;
  v18 = 3i64;
  this->m_timerAnimationCounter = v4 + this->m_timerAnimationCounter;
  do
  {
    v19 = *p_pOnlineParams;
    if ( *p_pOnlineParams )
    {
      chatMessageRenderCounter = v19->chatMessageRenderCounter;
      if ( chatMessageRenderCounter > 0 )
      {
        v21 = (int)(float)((float)chatMessageRenderCounter - v4);
        v19->chatMessageRenderCounter = v21;
        if ( v21 > 0 )
        {
          if ( v21 < 104 )
          {
            if ( v21 >= 4 )
              v19->chatWindowScaleSize = 1.0;
            else
              v19->chatWindowScaleSize = (float)v21 * 0.25;
          }
          else
          {
            v19->chatWindowScaleSize = (float)(108 - v21) * 0.25;
          }
        }
        else
        {
          ImageString::dispose(&v19->stringChatMessage);
        }
      }
    }
    p_pOnlineParams += 6;
    --v18;
  }
  while ( v18 );
  BattleHudGauge::activity_update(this, advanceFrame);
}

void __fastcall BattleHudGauge::updateResources(BattleHudGauge *this, DrawHelper *pDrawHelper)
{
  BattleHudGauge::MemberInfo::OnlineParams **p_pOnlineParams; // r14
  BattleHudGauge::MemberInfo::OnlineParams **v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  int v7; // ebp
  extension::GFXIText *textPlayerID; // rcx
  unsigned int v9; // edx
  extension::gfxi_detail::TextProxy *v10; // rax
  extension::GFXIText *v11; // rcx
  extension::gfxi_detail::TextProxy *v12; // rax
  extension::GFXIText *v13; // rbx
  extension::gfxi_detail::TextProxy *v14; // rbx
  Scaleform::GFx::DrawText *pObject; // rcx
  extension::GFXIFontManager *v16; // rax
  Scaleform::Render::Size<float> *HtmlTextExtent; // rax
  float Height; // xmm0_4
  extension::GFXIText *v19; // rcx
  extension::gfxi_detail::TextProxy *v20; // rax
  extension::GFXIText *v21; // rcx
  extension::gfxi_detail::TextProxy *v22; // rax
  Scaleform::GFx::DrawText *v23; // rcx
  extension::GFXIText *v24; // rbx
  char **Name; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  Image *v29; // rdi
  unsigned int m_imageID; // ebx
  DrawHelper::ImageInfo *v31; // r15
  extension::AsyncContent<Image> *m_ptr; // rbx
  Image *Myval2; // rdx
  extension::GFXIText *v34; // [rsp+C0h] [rbp+8h]
  extension::gfxi_detail::TextProxy *v35; // [rsp+D0h] [rbp+18h]
  Scaleform::Render::Size<float> result; // [rsp+D8h] [rbp+20h] BYREF

  if ( this->m_pResources && pDrawHelper )
  {
    p_pOnlineParams = &this->m_memberInfos[0].pOnlineParams;
    v4 = &this->m_memberInfos[0].pOnlineParams;
    v5 = 3i64;
    v6 = 3i64;
    do
    {
      if ( *v4 )
      {
        v7 = (int)(float)((float)((float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0) * 20.0);
        textPlayerID = (*v4)->textPlayerID;
        if ( textPlayerID )
        {
          extension::GFXIText::`scalar deleting destructor'(textPlayerID, (unsigned int)pDrawHelper);
          (*v4)->textPlayerID = 0i64;
        }
        v34 = (extension::GFXIText *)operator new(8ui64);
        v35 = (extension::gfxi_detail::TextProxy *)operator new(0xA8ui64);
        extension::gfxi_detail::TextProxy::TextProxy(v35, v9);
        v34->m_body.m_ptr = v10;
        (*v4)->textPlayerID = v34;
        v11 = (*v4)->textPlayerID;
        if ( v11->m_body.m_ptr->m_textParams.FontSize != (float)v7 )
        {
          v12 = extension::GFXIText::cloneIfShared(v11);
          extension::gfxi_detail::TextProxy::setFontSize(v12, (float)v7);
        }
        v13 = (*v4)->textPlayerID;
        if ( strcmp(
               (const char *)((v13->m_body.m_ptr->m_textParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
               "$font_system_chat") )
        {
          v14 = extension::GFXIText::cloneIfShared(v13);
          if ( strcmp(
                 (const char *)((v14->m_textParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                 "$font_system_chat") )
          {
            Scaleform::String::operator=(&v14->m_textParams.FontName, "$font_system_chat");
            pObject = v14->m_gtext.pObject;
            if ( pObject )
            {
              pObject->SetFont(pObject, "$font_system_chat", 0i64, -1ui64);
              v16 = extension::GFXIFontManager::Instance();
              HtmlTextExtent = extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(
                                 (extension::gfxi_detail::CustomDrawTextManager *)v16->m_drawTextManager.pObject,
                                 &result,
                                 &v14->m_htmlStr,
                                 v14->m_recommendWidth,
                                 &v14->m_textParams);
              Height = HtmlTextExtent->Height;
              v14->m_size.Width = HtmlTextExtent->Width;
              v14->m_size.Height = Height;
              extension::gfxi_detail::TextProxy::applyTextRect(v14, v14->m_gtext.pObject);
            }
          }
        }
        v19 = (*v4)->textPlayerID;
        if ( v19->m_body.m_ptr->m_textParams.LineSpacing != -0.1 )
        {
          v20 = extension::GFXIText::cloneIfShared(v19);
          extension::gfxi_detail::TextProxy::setLineSpacing(v20, -0.1);
        }
        v21 = (*v4)->textPlayerID;
        if ( v21->m_body.m_ptr->m_isVisible )
        {
          v22 = extension::GFXIText::cloneIfShared(v21);
          v22->m_isVisible = 0;
          v23 = v22->m_gtext.pObject;
          if ( v23 )
            v23->SetVisible(v23, 0);
        }
        v24 = (*v4)->textPlayerID;
        Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)(*v4)->playerOnlineID);
        extension::GFXIText::setStr(v24, (const char *)Name);
      }
      v4 += 6;
      --v6;
    }
    while ( v6 );
    do
    {
      v26 = (__int64)*(p_pOnlineParams - 1);
      v27 = *(_QWORD *)(v26 + 16);
      if ( v27 && !*(_BYTE *)(v27 + 96) )
      {
        v28 = *(_QWORD *)(v26 + 16);
        if ( *(_BYTE *)(v27 + 96) )
        {
          v29 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v27 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor(
              (extension::AsyncStatus *)(v27 + 88),
              (extension::AsyncStatus::Step)pDrawHelper);
          v29 = *(Image **)(v28 + 72);
        }
        if ( pDrawHelper->isError(pDrawHelper)
          || !v29
          || (m_imageID = pDrawHelper->m_imageID,
              pDrawHelper->m_imageID = m_imageID + 1,
              v31 = pDrawHelper->createImageInfo(pDrawHelper, m_imageID),
              pDrawHelper->isError(pDrawHelper))
          || !v31 )
        {
          m_imageID = -1;
        }
        else
        {
          v31->pImage = v29;
        }
        *((_DWORD *)p_pOnlineParams - 6) = m_imageID;
        if ( *p_pOnlineParams )
        {
          m_ptr = (*p_pOnlineParams)->imageChatFace.image.m_body.m_ptr->m_content.m_ptr;
          if ( !m_ptr || m_ptr->m_isDataReleased )
          {
            Myval2 = 0i64;
          }
          else
          {
            if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)pDrawHelper);
            Myval2 = m_ptr->m_data._Mypair._Myval2;
          }
          (*p_pOnlineParams)->imageChatFace.imageID = DrawHelper::setupImage(pDrawHelper, Myval2);
        }
      }
      p_pOnlineParams += 6;
      --v5;
    }
    while ( v5 );
  }
}

