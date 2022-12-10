#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.hpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/content/contentsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/content/contentcommonpc.h"

struct std::pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID>
{
	struct _Myt;
	enum first_type
	{
		CHARACTER_NO_NONE = 255,
		CHARACTER_NO_EX1_BASE = 500,
		CHARACTER_NO_MMH = 800,
		CHARACTER_NO_COC = 801,
		CHARACTER_NO_BGT = 802,
		CHARACTER_NO_DRG = 803,
		CHARACTER_NO_TUTORIAL = 998,
		CHARACTER_NO_CMN = 999,
		CHARACTER_NO_KYO = 0,
		CHARACTER_NO_BEN = 1,
		CHARACTER_NO_DMN = 2,
		CHARACTER_NO_RYO = 3,
		CHARACTER_NO_RBT = 4,
		CHARACTER_NO_YRI = 5,
		CHARACTER_NO_TRY = 6,
		CHARACTER_NO_ADY = 7,
		CHARACTER_NO_JOE = 8,
		CHARACTER_NO_LEO = 9,
		CHARACTER_NO_RLF = 10,
		CHARACTER_NO_CLK = 11,
		CHARACTER_NO_IOR = 12,
		CHARACTER_NO_MTR = 13,
		CHARACTER_NO_VIC = 14,
		CHARACTER_NO_KDS = 15,
		CHARACTER_NO_KLA = 16,
		CHARACTER_NO_MXI = 17,
		CHARACTER_NO_GES = 18,
		CHARACTER_NO_BLY = 19,
		CHARACTER_NO_SSL = 20,
		CHARACTER_NO_KNG = 21,
		CHARACTER_NO_MAI = 22,
		CHARACTER_NO_ALC = 23,
		CHARACTER_NO_KIM = 24,
		CHARACTER_NO_GAN = 25,
		CHARACTER_NO_LUO = 26,
		CHARACTER_NO_ATN = 27,
		CHARACTER_NO_KNS = 28,
		CHARACTER_NO_CHN = 29,
		CHARACTER_NO_XND = 30,
		CHARACTER_NO_CNG = 31,
		CHARACTER_NO_CHO = 32,
		CHARACTER_NO_NKR = 33,
		CHARACTER_NO_MUI = 34,
		CHARACTER_NO_LVH = 35,
		CHARACTER_NO_RMN = 36,
		CHARACTER_NO_AGL = 37,
		CHARACTER_NO_KOD = 38,
		CHARACTER_NO_SHU = 39,
		CHARACTER_NO_TUN = 40,
		CHARACTER_NO_MTK = 41,
		CHARACTER_NO_ZRN = 42,
		CHARACTER_NO_BDR = 43,
		CHARACTER_NO_NEL = 44,
		CHARACTER_NO_SLV = 45,
		CHARACTER_NO_KKR = 46,
		CHARACTER_NO_MIA = 47,
		CHARACTER_NO_ANT = 48,
		CHARACTER_NO_VRS = 49,
		CHARACTER_NO_ROC = 50,
		CHARACTER_NO_MRY = 51,
		CHARACTER_NO_YMZ = 52,
		CHARACTER_NO_VNS = 53,
		CHARACTER_NO_OSW = 54,
		CHARACTER_NO_YMD = 55,
		CHARACTER_NO_HDR = 56,
		CHARACTER_NO_WHP = 57,
		CHARACTER_NO_SNG = 58,
		CHARACTER_NO_HNK = 59,
		CHARACTER_NO_NJD = 60,
		CHARACTER_NO_MAX = 61,
		CHARACTER_NO_T_R = 62,
		CHARACTER_NO_E_R = 63,
		CHARACTER_NO_ANT_BOSS = 148,
		CHARACTER_NO_VRS_BOSS = 149,
		CHARACTER_NO_KYO_GRN = 500,
		CHARACTER_NO_GES_NMG = 518,
		CHARACTER_NO_IOR_CIO = 512,
		CHARACTER_NO_ATN_CAT = 527,
		CHARACTER_NO_RYO_COS1 = 503,
		CHARACTER_NO_YRI_COS1 = 505,
		CHARACTER_NO_TRY_COS1 = 506,
		CHARACTER_NO_KLA_COS1 = 516,
		CHARACTER_NO_KNG_COS1 = 521,
		CHARACTER_NO_NKR_COS1 = 533,
		CHARACTER_NO_AGL_COS1 = 537,
		CHARACTER_NO_SHU_COS1 = 539,
		CHARACTER_NO_MTK_COS1 = 541,
		CHARACTER_NO_SLV_COS1 = 545,
		CHARACTER_NO_MMH_COS1 = 1300,
		CHARACTER_NO_TS1 = 900,
		CHARACTER_NO_TS2 = 901,
		CHARACTER_NO_TS3 = 902,
		CHARACTER_NO_TS4 = 903,
		CHARACTER_NO_TS5 = 904,
	};
	enum second_type
	{
		E_ADDCONTENT_DEFAULT = 0,
		E_ADDCONTENT_COSTUME_01 = 1,
		E_ADDCONTENT_COSTUME_02 = 2,
		E_ADDCONTENT_COSTUME_03 = 3,
		E_ADDCONTENT_COSTUME_04 = 4,
		E_ADDCONTENT_COSTUME_05 = 5,
		E_ADDCONTENT_COSTUME_06 = 6,
		E_ADDCONTENT_COSTUME_RYO = 7,
		E_ADDCONTENT_COSTUME_YRI = 8,
		E_ADDCONTENT_COSTUME_TRY = 9,
		E_ADDCONTENT_COSTUME_KLA = 10,
		E_ADDCONTENT_COSTUME_KNG = 11,
		E_ADDCONTENT_COSTUME_AGL = 12,
		E_ADDCONTENT_COSTUME_MTK = 13,
		E_ADDCONTENT_COSTUME_SLV = 14,
		E_ADDCONTENT_ROC = 15,
		E_ADDCONTENT_YMZ = 16,
		E_ADDCONTENT_VNS = 17,
		E_ADDCONTENT_WHP = 18,
		E_ADDCONTENT_HDR = 19,
		E_ADDCONTENT_MRY = 20,
		E_ADDCONTENT_OSW = 21,
		E_ADDCONTENT_NJD = 22,
		E_ADDCONTENT_NUM = 23,
	};
	pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID>(std::pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID> &);
	std::pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID> & operator=(const std::pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID> &);
	std::pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID> & operator=(std::pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID> &);
	CHARACTER_NO first; // 0x0
	Fw::ADDCONTENT_ID second; // 0x4
	void swap(std::pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID> &);
};
const std::pair<enum CHARACTER_NO,enum Fw::ADDCONTENT_ID> CostumeIDtoContentID[28]; // 0x140A5C7A0
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0366
CharaProjectData & CharaProjectData::MoveFrom(CharaProjectData & src); // 0x140182A60
bool CharaProjectData::CheckFileID(); // 0x140182B20
void CharaProjectData::InitData(); // 0x140182B30
long CharaProjectData::ReadFile(const char * fileName); // 0x140182C20
long CharaProjectData::GetCharaDataIndex(long id); // 0x140182D50
long CharaProjectData::GetBaseCharaID(long id); // 0x140182E00
const char * CharaProjectData::GetDirectoryName(long id); // 0x140182E50
std::string CharaProjectData::GetDataFilePath(long id, CharaProjectData::NAME_INDEX nameIndex); // 0x140182E90
std::string CharaProjectData::GetDataFilePathIndex(long index, CharaProjectData::NAME_INDEX nameIndex); // 0x140182EE0
std::string CharaProjectData::GetWinnersVoiceFilePath(long id); // 0x1401832B0
std::string CharaProjectData::GetWinnersVoiceFilePathIndex(long index); // 0x1401832F0
std::string CharaProjectData::GetGalleryVoiceFilePath(long id); // 0x1401835F0
std::string CharaProjectData::GetGalleryVoiceFilePathIndex(long index); // 0x140183630
bool CharaProjectData::GetDirectoryPath(long id, char * outFilePath); // 0x140183930
std::string CharaProjectData::GetDirectoryPath(long id); // 0x1401839A0
std::string CharaProjectData::GetDirectoryPathIndex(long index); // 0x1401839E0
long CharaProjectData::GetAnotherCostumeCharaID(long id, long costumeNo); // 0x140183CA0
long CharaProjectData::GetUseableAnotherCostumeCharaID(long id, long costumeNo); // 0x140183CE0
long CharaProjectData::GetUseableCostumeCount(long id); // 0x140183D80
bool CharaProjectData::CheckBaseCharaData(long index, CharaProjectData::NAME_INDEX nameIndex); // 0x140183EA0//decompilation failure at 140A5C7A0!
//decompilation failure at 1408A0366!
__int64 __fastcall CharaProjectData::ReadProjectData<CFile>(
        CharaProjectData *this,
        InputStreamBroker<CFile> *in,
        const char *fileName)
{
  CFile *f; // rdi
  AgFile *m_ptr; // rcx
  unsigned int v8; // er12
  CFile *v9; // rdi
  AgFile *v10; // rcx
  CFile *v11; // rdi
  AgFile *v12; // rcx
  char *v13; // rax
  CFile *v14; // rdi
  AgFile *v15; // rcx
  char *v16; // rax
  CFile *v17; // rdi
  AgFile *v18; // rcx
  __int64 v19; // rsi
  bool v20; // zf
  const char *v21; // rcx
  char *v22; // rax
  char *v23; // rax
  CharaProjectData::CharaData *v24; // rax
  __int64 i; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // ebp
  CFile *v30; // rdi
  int v31; // er14
  AgFile *v32; // rcx
  unsigned int v33; // esi
  char v34; // dl
  CFile *v35; // rdi
  AgFile *v36; // rcx
  CharaProjectData::CharaData *pCharaData; // rax
  unsigned __int64 v38; // rcx
  CFile *v39; // rdi
  AgFile *v40; // r10
  unsigned int v41; // edi
  __int64 v42; // r14
  CFile *v43; // rsi
  AgFile *v44; // rcx
  __int64 v45; // rsi
  char *v46; // rdx
  CFile *v48; // rdi
  AgFile *v49; // rdx
  AgPointer<KOFApplication> v50; // [rsp+20h] [rbp-48h] BYREF
  char v51; // [rsp+78h] [rbp+10h] BYREF
  int n; // [rsp+88h] [rbp+20h] BYREF

  n = 0;
  CharaProjectData::InitData(this);
  f = in->f;
  m_ptr = in->f->m_file.m_ptr;
  if ( m_ptr )
  {
    m_ptr->read(m_ptr, (unsigned __int8 *)&this->fileHeader, 8u);
    f->m_iSeekPos += 8;
  }
  v8 = 4;
  if ( *(_DWORD *)this->fileHeader.fileIdentifier != *(_DWORD *)CharaProjectData::FILE_IDENTIFIER )
    goto $READ_ERROR_14;
  v9 = in->f;
  v10 = in->f->m_file.m_ptr;
  if ( v10 )
  {
    v10->read(v10, (unsigned __int8 *)&this->dataHeader, 4u);
    v9->m_iSeekPos += 4;
  }
  v11 = in->f;
  v12 = in->f->m_file.m_ptr;
  if ( v12 )
  {
    v12->read(v12, (unsigned __int8 *)&n, 4u);
    v11->m_iSeekPos += 4;
  }
  v13 = (char *)operator new[]((unsigned int)(n + 1));
  this->dataHeader.cProjectName = v13;
  if ( !v13 )
    goto LABEL_80;
  if ( (int)InputStreamBroker<CFile>::read(in, v13, 1, n) < 0 )
  {
    v8 = 5;
$READ_ERROR_14:
    v48 = in->f;
    v49 = in->f->m_file.m_ptr;
    if ( v49 )
    {
      v50.m_ref = v48->m_file.m_ref;
      v48->m_file.m_ref = 0i64;
      v48->m_file.m_ptr = 0i64;
      v50.m_ptr = (KOFApplication *)v49;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v50);
    }
    *(_QWORD *)&v48->m_iSeekPos = 0i64;
    CharaProjectData::InitData(this);
    return v8;
  }
  this->dataHeader.cProjectName[n] = 0;
  if ( this->fileHeader.uiFormatVersion >= 4 )
  {
    v14 = in->f;
    v15 = in->f->m_file.m_ptr;
    if ( v15 )
    {
      v15->read(v15, (unsigned __int8 *)&n, 4u);
      v14->m_iSeekPos += 4;
    }
    v16 = (char *)operator new[]((unsigned int)(n + 1));
    this->dataHeader.cTranslateFileName = v16;
    if ( !v16 )
      goto LABEL_80;
    if ( (int)InputStreamBroker<CFile>::read(in, v16, 1, n) < 0 )
    {
      v8 = 5;
      goto $READ_ERROR_14;
    }
    this->dataHeader.cTranslateFileName[n] = 0;
  }
  v17 = in->f;
  v18 = in->f->m_file.m_ptr;
  if ( v18 )
  {
    v18->read(v18, (unsigned __int8 *)&this->dataHeader.uiCharaCount, 4u);
    v17->m_iSeekPos += 4;
  }
  if ( !this->dataHeader.uiCharaCount )
  {
    v8 = 6;
    goto $READ_ERROR_14;
  }
  v19 = -1i64;
  do
    ++v19;
  while ( fileName[v19] );
  v20 = (_DWORD)v19 == 0;
  if ( (int)v19 > 0 )
  {
    v21 = &fileName[(int)v19];
    while ( *v21 != 47 && *v21 != 92 )
    {
      --v21;
      LODWORD(v19) = v19 - 1;
      if ( v21 - fileName <= 0 )
        goto LABEL_32;
    }
    v22 = (char *)operator new[]((int)v19 + 2);
    this->cFilePath = v22;
    if ( !v22 )
      goto LABEL_80;
    memmove(v22, fileName, (int)v19 + 1);
    this->cFilePath[(int)v19 + 1] = 0;
LABEL_32:
    v20 = (_DWORD)v19 == 0;
  }
  if ( v20 )
  {
    v23 = (char *)operator new[](3ui64);
    this->cFilePath = v23;
    if ( !v23 )
    {
LABEL_80:
      v8 = 7;
      goto $READ_ERROR_14;
    }
    strcpy(v23, "./");
  }
  v24 = (CharaProjectData::CharaData *)operator new[](saturated_mul(this->dataHeader.uiCharaCount, 0x90ui64));
  this->pCharaData = v24;
  if ( !v24 )
    goto LABEL_80;
  for ( i = 0i64; (unsigned int)i < this->dataHeader.uiCharaCount; this->pCharaData[v27].uiBaseDataFlag = 0 )
  {
    v26 = 17i64;
    v27 = (unsigned int)i;
    v28 = v27 * 144;
    do
    {
      v28 += 8i64;
      *(char **)((char *)&this->pCharaData->pNameData[-1] + v28) = 0i64;
      --v26;
    }
    while ( v26 );
    i = (unsigned int)(i + 1);
    this->pCharaData[v27].iBaseCharaID = -1;
  }
  v29 = 0;
  if ( this->dataHeader.uiCharaCount )
  {
    while ( 2 )
    {
      if ( this->fileHeader.uiFormatVersion >= 6 )
      {
        v30 = in->f;
        v31 = 0;
        v32 = in->f->m_file.m_ptr;
        if ( v32 )
        {
          ((void (__fastcall *)(AgFile *, int *, __int64, __int64))v32->read)(v32, &n, 4i64, i);
          v30->m_iSeekPos += 4;
        }
        v33 = 0;
        if ( n )
        {
          v34 = v51;
          do
          {
            v35 = in->f;
            v36 = in->f->m_file.m_ptr;
            if ( v36 )
            {
              ((void (__fastcall *)(AgFile *, char *, __int64, __int64))v36->read)(v36, &v51, 1i64, i);
              ++v35->m_iSeekPos;
              v34 = v51;
            }
            if ( (unsigned __int8)(v34 - 48) <= 9u )
              v31 = v34 + 2 * (5 * v31 - 24);
            ++v33;
          }
          while ( v33 < n );
        }
        pCharaData = this->pCharaData;
        v38 = v29;
        if ( (unsigned int)n <= 1 )
          pCharaData[v38].iBaseCharaID = -1;
        else
          pCharaData[v38].iBaseCharaID = v31;
        v39 = in->f;
        v40 = in->f->m_file.m_ptr;
        if ( v40 )
        {
          v40->read(in->f->m_file.m_ptr, (unsigned __int8 *)&this->pCharaData[v38].uiBaseDataFlag, 4u);
          v39->m_iSeekPos += 4;
        }
      }
      v41 = 0;
      v42 = 0i64;
      do
      {
        if ( v41 >= 0xA && this->fileHeader.uiFormatVersion <= 1
          || v41 >= 0xC && this->fileHeader.uiFormatVersion <= 2
          || v41 >= 0xD && this->fileHeader.uiFormatVersion <= 4
          || v41 >= 0xE && this->fileHeader.uiFormatVersion <= 5
          || v41 >= 0xF && this->fileHeader.uiFormatVersion <= 6
          || v41 >= 0x10 && this->fileHeader.uiFormatVersion <= 7 )
        {
          break;
        }
        v43 = in->f;
        v44 = in->f->m_file.m_ptr;
        if ( v44 )
        {
          ((void (__fastcall *)(AgFile *, int *, __int64, __int64))v44->read)(v44, &n, 4i64, i);
          v43->m_iSeekPos += 4;
        }
        if ( n )
        {
          v45 = v42 + 18i64 * v29;
          this->pCharaData->pNameData[v45] = (char *)operator new[]((unsigned int)(n + 1));
          v46 = this->pCharaData->pNameData[v45];
          if ( !v46 )
            goto LABEL_80;
          if ( (int)InputStreamBroker<CFile>::read(in, v46, 1, n) < 0 )
          {
            v8 = 8;
            goto $READ_ERROR_14;
          }
          this->pCharaData->pNameData[v45][n] = 0;
        }
        ++v41;
        ++v42;
      }
      while ( v41 < 0x11 );
      if ( ++v29 < this->dataHeader.uiCharaCount )
        continue;
      break;
    }
  }
  InputStreamBroker<CFile>::close(in);
  return 1i64;
}

bool __fastcall CharaProjectData::CheckBaseCharaData(
        CharaProjectData *this,
        int index,
        CharaProjectData::NAME_INDEX nameIndex)
{
  CharaProjectData::CharaData *v3; // r9
  bool result; // al
  int v5; // edx

  v3 = &this->pCharaData[index];
  if ( v3->iBaseCharaID < 0 )
    return 0;
  v5 = 0;
  switch ( nameIndex )
  {
    case STATUS_FILE:
      result = (v3->uiBaseDataFlag & 1) != 0;
      break;
    case COMMAND_FILE:
      result = (v3->uiBaseDataFlag & 2) != 0;
      break;
    case ATTACK_FILE:
      result = (v3->uiBaseDataFlag & 4) != 0;
      break;
    case RECT_FILE:
      result = (v3->uiBaseDataFlag & 8) != 0;
      break;
    case DAMAGE_FILE:
      result = (v3->uiBaseDataFlag & 0x10) != 0;
      break;
    case ACTION_FILE:
      result = (v3->uiBaseDataFlag & 0x20) != 0;
      break;
    case ASSET_FILE:
      result = (v3->uiBaseDataFlag & 0x40) != 0;
      break;
    case VERSION_1_MAX:
      result = (v3->uiBaseDataFlag & 0x80) != 0;
      break;
    case SOUND_FILE:
      result = (v3->uiBaseDataFlag & 0x100) != 0;
      break;
    case VERSION_2_MAX:
      result = (v3->uiBaseDataFlag & 0x200) != 0;
      break;
    case VERSION_4_MAX:
      result = (v3->uiBaseDataFlag & 0x400) != 0;
      break;
    case VERSION_5_MAX:
      result = (v3->uiBaseDataFlag & 0x800) != 0;
      break;
    case VERSION_6_MAX:
      result = (v3->uiBaseDataFlag & 0x1000) != 0;
      break;
    case VERSION_7_MAX:
      v5 = 0x2000;
      goto LABEL_18;
    default:
LABEL_18:
      result = (v5 & v3->uiBaseDataFlag) != 0;
      break;
  }
  return result;
}

bool __fastcall CharaProjectData::CheckFileID(CharaProjectData *this)
{
  return *(_DWORD *)this->fileHeader.fileIdentifier == *(_DWORD *)CharaProjectData::FILE_IDENTIFIER;
}

__int64 __fastcall CharaProjectData::GetAnotherCostumeCharaID(CharaProjectData *this, int id, int costumeNo)
{
  unsigned int v3; // ebx

  v3 = id;
  if ( costumeNo > 0 )
  {
    v3 = 100 * (costumeNo + 4) + id;
    if ( CharaProjectData::GetCharaDataIndex(this, v3) < 0 )
      return (unsigned int)-1;
  }
  return v3;
}

__int64 __fastcall CharaProjectData::GetBaseCharaID(CharaProjectData *this, int id)
{
  int CharaDataIndex; // eax
  __int64 result; // rax

  CharaDataIndex = CharaProjectData::GetCharaDataIndex(this, id);
  if ( CharaDataIndex < 0 )
    return 0xFFFFFFFFi64;
  result = (unsigned int)this->pCharaData[CharaDataIndex].iBaseCharaID;
  if ( (int)result < 0 )
    return (unsigned int)id;
  return result;
}

__int64 __fastcall CharaProjectData::GetCharaDataIndex(CharaProjectData *this, int id)
{
  unsigned int uiCharaCount; // er10
  __int64 v4; // r9
  char _Buffer[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( this->iReadErrorID != 1 )
    return 0xFFFFFFFFi64;
  sprintf(_Buffer, "%03d", (unsigned int)id);
  uiCharaCount = this->dataHeader.uiCharaCount;
  v4 = 0i64;
  if ( !uiCharaCount )
    return 0xFFFFFFFFi64;
  while ( strcmp(_Buffer, this->pCharaData[v4].pNameData[0]) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= uiCharaCount )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v4;
}

std::string *__fastcall CharaProjectData::GetDataFilePath(
        CharaProjectData *this,
        std::string *result,
        int id,
        CharaProjectData::NAME_INDEX nameIndex)
{
  int CharaDataIndex; // eax

  CharaDataIndex = CharaProjectData::GetCharaDataIndex(this, id);
  CharaProjectData::GetDataFilePathIndex(this, result, CharaDataIndex, nameIndex);
  return result;
}

std::string *__fastcall CharaProjectData::GetDataFilePathIndex(
        CharaProjectData *this,
        std::string *result,
        int index,
        CharaProjectData::NAME_INDEX nameIndex)
{
  std::string *Ptr; // rax
  char *v7; // rcx
  char *v8; // rax
  std::string *v9; // rax
  bool v10; // zf
  __int64 v11; // r10
  __int64 v12; // r11
  CharaProjectData::CharaData *pCharaData; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  std::string *v16; // rax
  char *cFilePath; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r8
  char *v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v23; // rsi
  unsigned __int64 Myres; // rdx
  std::string *p_Right; // rax
  std::string *v26; // rax
  std::string *v27; // rax
  char *v28; // rdx
  std::string *v29; // rax
  std::string _Right; // [rsp+30h] [rbp-30h] BYREF

  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( this->iReadErrorID != 1 )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    result->_Mypair._Myval2._Mysize = 0i64;
    if ( result->_Mypair._Myval2._Myres < 0x10 )
      Ptr = result;
    else
      Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(result, &_Right);
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      v7 = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
LABEL_79:
        v7 = v8;
        goto LABEL_80;
      }
      goto LABEL_80;
    }
    return result;
  }
  if ( nameIndex > DIR_NAME )
  {
    if ( index < 0 || index >= this->dataHeader.uiCharaCount )
    {
      result->_Mypair._Myval2._Myres = 15i64;
      result->_Mypair._Myval2._Mysize = 0i64;
      if ( result->_Mypair._Myval2._Myres < 0x10 )
        v29 = result;
      else
        v29 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
      v29->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(result, &_Right);
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      {
        v7 = _Right._Mypair._Myval2._Bx._Ptr;
        if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
          if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          goto LABEL_79;
        }
        goto LABEL_80;
      }
      return result;
    }
    v10 = !CharaProjectData::CheckBaseCharaData(this, index, nameIndex);
    pCharaData = this->pCharaData;
    if ( !v10 )
    {
      CharaProjectData::GetDataFilePath(this, result, pCharaData[v11].iBaseCharaID, (CharaProjectData::NAME_INDEX)v12);
      std::string::~string(&_Right);
      return result;
    }
    v14 = v11;
    v15 = v12 + 18 * v11;
    if ( !pCharaData->pNameData[v15] )
    {
LABEL_34:
      result->_Mypair._Myval2._Myres = 15i64;
      result->_Mypair._Myval2._Mysize = 0i64;
      if ( result->_Mypair._Myval2._Myres < 0x10 )
        v16 = result;
      else
        v16 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
      v16->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(result, &_Right);
      std::string::~string(&_Right);
      return result;
    }
    cFilePath = this->cFilePath;
    v18 = -1i64;
    if ( *cFilePath )
    {
      v19 = -1i64;
      do
        ++v19;
      while ( cFilePath[v19] );
    }
    else
    {
      v19 = 0i64;
    }
    std::string::assign(&_Right, cFilePath, v19);
    v20 = this->pCharaData[v14].pNameData[2];
    if ( *v20 )
    {
      v21 = -1i64;
      do
        ++v21;
      while ( v20[v21] );
    }
    else
    {
      v21 = 0i64;
    }
    std::string::append(&_Right, v20, v21);
    Mysize = _Right._Mypair._Myval2._Mysize;
    if ( _Right._Mypair._Myval2._Mysize == -1i64 || ~_Right._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v23 = _Right._Mypair._Myval2._Mysize + 1;
    if ( _Right._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Right._Mypair._Myval2._Myres;
    if ( _Right._Mypair._Myval2._Myres >= v23 )
    {
      if ( _Right._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_57;
      _Right._Mypair._Myval2._Mysize = 0i64;
      p_Right = &_Right;
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
        p_Right = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
      p_Right->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Right, _Right._Mypair._Myval2._Mysize + 1, _Right._Mypair._Myval2._Mysize);
    }
    Mysize = _Right._Mypair._Myval2._Mysize;
    Myres = _Right._Mypair._Myval2._Myres;
    if ( !v23 )
    {
LABEL_62:
      v28 = this->pCharaData->pNameData[v15];
      if ( *v28 )
      {
        do
          ++v18;
        while ( v28[v18] );
      }
      else
      {
        v18 = 0i64;
      }
      std::string::append(&_Right, v28, v18);
      goto LABEL_34;
    }
LABEL_57:
    v26 = &_Right;
    if ( Myres >= 0x10 )
      v26 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    v26->_Mypair._Myval2._Bx._Buf[Mysize] = 47;
    _Right._Mypair._Myval2._Mysize = v23;
    v27 = &_Right;
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      v27 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    v27->_Mypair._Myval2._Bx._Buf[v23] = 0;
    goto LABEL_62;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    v9 = result;
  else
    v9 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v9->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, &_Right);
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v7 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      goto LABEL_79;
    }
LABEL_80:
    operator delete(v7);
  }
  return result;
}

char *__fastcall CharaProjectData::GetDirectoryName(CharaProjectData *this, int id)
{
  signed int CharaDataIndex; // eax

  CharaDataIndex = CharaProjectData::GetCharaDataIndex(this, id);
  if ( this->iReadErrorID == 1 && CharaDataIndex >= 0 && CharaDataIndex < this->dataHeader.uiCharaCount )
    return this->pCharaData[CharaDataIndex].pNameData[2];
  else
    return 0i64;
}

std::string *__fastcall CharaProjectData::GetDirectoryPath(CharaProjectData *this, std::string *result, int id)
{
  int CharaDataIndex; // eax

  CharaDataIndex = CharaProjectData::GetCharaDataIndex(this, id);
  CharaProjectData::GetDirectoryPathIndex(this, result, CharaDataIndex);
  return result;
}

char __fastcall CharaProjectData::GetDirectoryPath(CharaProjectData *this, int id, char *outFilePath)
{
  signed int CharaDataIndex; // eax

  CharaDataIndex = CharaProjectData::GetCharaDataIndex(this, id);
  if ( this->iReadErrorID != 1 || CharaDataIndex < 0 || CharaDataIndex >= this->dataHeader.uiCharaCount )
    return 0;
  sprintf(outFilePath, "%s%s/", this->cFilePath, this->pCharaData[CharaDataIndex].pNameData[2]);
  return 1;
}

std::string *__fastcall CharaProjectData::GetDirectoryPathIndex(CharaProjectData *this, std::string *result, int index)
{
  __int64 v3; // r14
  std::string *Ptr; // rax
  char *v7; // rcx
  char *v8; // rax
  char *cFilePath; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  char *v12; // rdx
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 Myres; // rdx
  std::string *p_Right; // rax
  std::string *v17; // rax
  std::string *v18; // rax
  std::string *v19; // rax
  std::string *v20; // rax
  std::string _Right; // [rsp+30h] [rbp-30h] BYREF

  v3 = index;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( this->iReadErrorID != 1 )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    result->_Mypair._Myval2._Mysize = 0i64;
    if ( result->_Mypair._Myval2._Myres < 0x10 )
      Ptr = result;
    else
      Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(result, &_Right);
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      v7 = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
LABEL_57:
        v7 = v8;
        goto LABEL_58;
      }
      goto LABEL_58;
    }
    return result;
  }
  if ( index >= 0 && index < this->dataHeader.uiCharaCount )
  {
    cFilePath = this->cFilePath;
    v10 = -1i64;
    if ( *cFilePath )
    {
      v11 = -1i64;
      do
        ++v11;
      while ( cFilePath[v11] );
    }
    else
    {
      v11 = 0i64;
    }
    std::string::assign(&_Right, cFilePath, v11);
    v12 = this->pCharaData[v3].pNameData[2];
    if ( *v12 )
    {
      do
        ++v10;
      while ( v12[v10] );
    }
    else
    {
      v10 = 0i64;
    }
    std::string::append(&_Right, v12, v10);
    Mysize = _Right._Mypair._Myval2._Mysize;
    if ( _Right._Mypair._Myval2._Mysize == -1i64 || ~_Right._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v14 = _Right._Mypair._Myval2._Mysize + 1;
    if ( _Right._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Right._Mypair._Myval2._Myres;
    if ( _Right._Mypair._Myval2._Myres >= v14 )
    {
      if ( _Right._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_35;
      _Right._Mypair._Myval2._Mysize = 0i64;
      p_Right = &_Right;
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
        p_Right = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
      p_Right->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Right, _Right._Mypair._Myval2._Mysize + 1, _Right._Mypair._Myval2._Mysize);
    }
    Mysize = _Right._Mypair._Myval2._Mysize;
    Myres = _Right._Mypair._Myval2._Myres;
    if ( !v14 )
    {
LABEL_40:
      result->_Mypair._Myval2._Myres = 15i64;
      result->_Mypair._Myval2._Mysize = 0i64;
      if ( result->_Mypair._Myval2._Myres < 0x10 )
        v19 = result;
      else
        v19 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
      v19->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(result, &_Right);
      std::string::~string(&_Right);
      return result;
    }
LABEL_35:
    v17 = &_Right;
    if ( Myres >= 0x10 )
      v17 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    v17->_Mypair._Myval2._Bx._Buf[Mysize] = 47;
    _Right._Mypair._Myval2._Mysize = v14;
    v18 = &_Right;
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      v18 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    v18->_Mypair._Myval2._Bx._Buf[v14] = 0;
    goto LABEL_40;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    v20 = result;
  else
    v20 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v20->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, &_Right);
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v7 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      goto LABEL_57;
    }
LABEL_58:
    operator delete(v7);
  }
  return result;
}

std::string *__fastcall CharaProjectData::GetGalleryVoiceFilePath(CharaProjectData *this, std::string *result, int id)
{
  int CharaDataIndex; // eax

  CharaDataIndex = CharaProjectData::GetCharaDataIndex(this, id);
  CharaProjectData::GetGalleryVoiceFilePathIndex(this, result, CharaDataIndex);
  return result;
}

std::string *__fastcall CharaProjectData::GetGalleryVoiceFilePathIndex(
        CharaProjectData *this,
        std::string *result,
        int index)
{
  __int64 v3; // rsi
  std::string *Ptr; // rax
  char *v7; // rcx
  char *v8; // rax
  char *cFilePath; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // r15
  char *v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 Myres; // rdx
  std::string *p_Right; // rax
  std::string *v19; // rax
  std::string *v20; // rax
  char *v21; // rdx
  std::string *v22; // rax
  std::string *v23; // rax
  std::string _Right; // [rsp+30h] [rbp-30h] BYREF

  v3 = index;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( this->iReadErrorID != 1 )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    result->_Mypair._Myval2._Mysize = 0i64;
    if ( result->_Mypair._Myval2._Myres < 0x10 )
      Ptr = result;
    else
      Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(result, &_Right);
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      v7 = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
LABEL_61:
        v7 = v8;
        goto LABEL_62;
      }
      goto LABEL_62;
    }
    return result;
  }
  if ( index >= 0 && index < this->dataHeader.uiCharaCount )
  {
    cFilePath = this->cFilePath;
    v10 = -1i64;
    if ( *cFilePath )
    {
      v11 = -1i64;
      do
        ++v11;
      while ( cFilePath[v11] );
    }
    else
    {
      v11 = 0i64;
    }
    std::string::assign(&_Right, cFilePath, v11);
    v12 = v3;
    v13 = this->pCharaData[v3].pNameData[2];
    if ( *v13 )
    {
      v14 = -1i64;
      do
        ++v14;
      while ( v13[v14] );
    }
    else
    {
      v14 = 0i64;
    }
    std::string::append(&_Right, v13, v14);
    Mysize = _Right._Mypair._Myval2._Mysize;
    if ( _Right._Mypair._Myval2._Mysize == -1i64 || ~_Right._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v16 = _Right._Mypair._Myval2._Mysize + 1;
    if ( _Right._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Right._Mypair._Myval2._Myres;
    if ( _Right._Mypair._Myval2._Myres >= v16 )
    {
      if ( _Right._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_36;
      _Right._Mypair._Myval2._Mysize = 0i64;
      p_Right = &_Right;
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
        p_Right = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
      p_Right->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Right, _Right._Mypair._Myval2._Mysize + 1, _Right._Mypair._Myval2._Mysize);
    }
    Mysize = _Right._Mypair._Myval2._Mysize;
    Myres = _Right._Mypair._Myval2._Myres;
    if ( !v16 )
    {
LABEL_41:
      v21 = this->pCharaData[v12].pNameData[2];
      if ( *v21 )
      {
        do
          ++v10;
        while ( v21[v10] );
      }
      else
      {
        v10 = 0i64;
      }
      std::string::append(&_Right, v21, v10);
      std::string::append(&_Right, "_g.sbnk", 7ui64);
      result->_Mypair._Myval2._Myres = 15i64;
      result->_Mypair._Myval2._Mysize = 0i64;
      if ( result->_Mypair._Myval2._Myres < 0x10 )
        v22 = result;
      else
        v22 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
      v22->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(result, &_Right);
      std::string::~string(&_Right);
      return result;
    }
LABEL_36:
    v19 = &_Right;
    if ( Myres >= 0x10 )
      v19 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    v19->_Mypair._Myval2._Bx._Buf[Mysize] = 47;
    _Right._Mypair._Myval2._Mysize = v16;
    v20 = &_Right;
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      v20 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    v20->_Mypair._Myval2._Bx._Buf[v16] = 0;
    goto LABEL_41;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    v23 = result;
  else
    v23 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v23->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, &_Right);
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v7 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      goto LABEL_61;
    }
LABEL_62:
    operator delete(v7);
  }
  return result;
}

__int64 __fastcall CharaProjectData::GetUseableAnotherCostumeCharaID(CharaProjectData *this, int id, int costumeNo)
{
  __int64 result; // rax
  int v4; // edi
  const AgDisplayMode *v5; // rax
  __int64 m_height; // rbx
  bool v7; // zf

  if ( costumeNo <= 0 )
    return (unsigned int)id;
  v4 = id + 100 * (costumeNo + 4);
  if ( (int)CharaProjectData::GetCharaDataIndex(this, v4) < 0 )
    v4 = -1;
  if ( v4 < 0 )
    return 0xFFFFFFFFi64;
  v5 = (const AgDisplayMode *)CostumeIDtoContentID;
  while ( v5->m_width != v4 )
  {
    v5 = (const AgDisplayMode *)((char *)v5 + 8);
    if ( v5 == fixedAspectRatioModes_3 )
      return (unsigned int)v4;
  }
  m_height = (int)v5->m_height;
  v7 = Fw::ContentCommon::GetInstance()->m_KeyStatus[m_height] == E_STATUS_COMPLETE;
  result = 0xFFFFFFFFi64;
  if ( v7 )
    return (unsigned int)v4;
  return result;
}

__int64 __fastcall CharaProjectData::GetUseableCostumeCount(CharaProjectData *this, int id)
{
  unsigned int v2; // er15
  int v3; // ebp
  int v4; // er14
  int v7; // ebx
  const AgDisplayMode *v8; // rax
  Fw::ContentCommon *v9; // rdi
  __int64 m_height; // rsi
  unsigned int v11; // ecx

  v2 = 0;
  v3 = 0;
  v4 = id + 400;
  do
  {
    if ( v3 > 0 )
    {
      v7 = v4;
      if ( (int)CharaProjectData::GetCharaDataIndex(this, v4) < 0 )
        v7 = -1;
      if ( v7 < 0 )
        goto LABEL_14;
      v8 = (const AgDisplayMode *)CostumeIDtoContentID;
      while ( v8->m_width != v7 )
      {
        v8 = (const AgDisplayMode *)((char *)v8 + 8);
        if ( v8 == fixedAspectRatioModes_3 )
          goto LABEL_15;
      }
      v9 = Fw::ContentCommon::instance_;
      m_height = (int)v8->m_height;
      if ( !Fw::ContentCommon::instance_ )
      {
        v9 = (Fw::ContentCommon *)operator new((unsigned int)((_DWORD)Fw::ContentCommon::instance_ + 112));
        memset(v9, 0, sizeof(Fw::ContentCommon));
        v9->m_steamcallback_OnDlcInstalled.m_nCallbackFlags = 0;
        v9->m_steamcallback_OnDlcInstalled.__vftable = (Fw::ContentCommon::CCallbackInternal_OnDlcInstalled_vtbl *)&Fw::ContentCommon::CCallbackInternal_OnDlcInstalled::`vftable';
        v9->m_steamcallback_OnDlcInstalled.m_iCallback = 0;
        SteamAPI_RegisterCallback(v9, 1005i64);
        Fw::ContentCommon::instance_ = v9;
      }
      if ( v9->m_KeyStatus[m_height] != E_STATUS_COMPLETE )
LABEL_14:
        v7 = -1;
    }
    else
    {
      v7 = id;
    }
LABEL_15:
    ++v3;
    v11 = v2 + 1;
    v4 += 100;
    if ( v7 < 0 )
      v11 = v2;
    v2 = v11;
  }
  while ( v3 < 4 );
  return v11;
}

std::string *__fastcall CharaProjectData::GetWinnersVoiceFilePath(CharaProjectData *this, std::string *result, int id)
{
  int CharaDataIndex; // eax

  CharaDataIndex = CharaProjectData::GetCharaDataIndex(this, id);
  CharaProjectData::GetWinnersVoiceFilePathIndex(this, result, CharaDataIndex);
  return result;
}

std::string *__fastcall CharaProjectData::GetWinnersVoiceFilePathIndex(
        CharaProjectData *this,
        std::string *result,
        int index)
{
  __int64 v3; // rsi
  std::string *Ptr; // rax
  char *v7; // rcx
  char *v8; // rax
  char *cFilePath; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // r15
  char *v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 Myres; // rdx
  std::string *p_Right; // rax
  std::string *v19; // rax
  std::string *v20; // rax
  char *v21; // rdx
  std::string *v22; // rax
  std::string *v23; // rax
  std::string _Right; // [rsp+30h] [rbp-30h] BYREF

  v3 = index;
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( this->iReadErrorID != 1 )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    result->_Mypair._Myval2._Mysize = 0i64;
    if ( result->_Mypair._Myval2._Myres < 0x10 )
      Ptr = result;
    else
      Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(result, &_Right);
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      v7 = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
LABEL_61:
        v7 = v8;
        goto LABEL_62;
      }
      goto LABEL_62;
    }
    return result;
  }
  if ( index >= 0 && index < this->dataHeader.uiCharaCount )
  {
    cFilePath = this->cFilePath;
    v10 = -1i64;
    if ( *cFilePath )
    {
      v11 = -1i64;
      do
        ++v11;
      while ( cFilePath[v11] );
    }
    else
    {
      v11 = 0i64;
    }
    std::string::assign(&_Right, cFilePath, v11);
    v12 = v3;
    v13 = this->pCharaData[v3].pNameData[2];
    if ( *v13 )
    {
      v14 = -1i64;
      do
        ++v14;
      while ( v13[v14] );
    }
    else
    {
      v14 = 0i64;
    }
    std::string::append(&_Right, v13, v14);
    Mysize = _Right._Mypair._Myval2._Mysize;
    if ( _Right._Mypair._Myval2._Mysize == -1i64 || ~_Right._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v16 = _Right._Mypair._Myval2._Mysize + 1;
    if ( _Right._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Right._Mypair._Myval2._Myres;
    if ( _Right._Mypair._Myval2._Myres >= v16 )
    {
      if ( _Right._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_36;
      _Right._Mypair._Myval2._Mysize = 0i64;
      p_Right = &_Right;
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
        p_Right = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
      p_Right->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Right, _Right._Mypair._Myval2._Mysize + 1, _Right._Mypair._Myval2._Mysize);
    }
    Mysize = _Right._Mypair._Myval2._Mysize;
    Myres = _Right._Mypair._Myval2._Myres;
    if ( !v16 )
    {
LABEL_41:
      v21 = this->pCharaData[v12].pNameData[2];
      if ( *v21 )
      {
        do
          ++v10;
        while ( v21[v10] );
      }
      else
      {
        v10 = 0i64;
      }
      std::string::append(&_Right, v21, v10);
      std::string::append(&_Right, "_w.sbnk", 7ui64);
      result->_Mypair._Myval2._Myres = 15i64;
      result->_Mypair._Myval2._Mysize = 0i64;
      if ( result->_Mypair._Myval2._Myres < 0x10 )
        v22 = result;
      else
        v22 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
      v22->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(result, &_Right);
      std::string::~string(&_Right);
      return result;
    }
LABEL_36:
    v19 = &_Right;
    if ( Myres >= 0x10 )
      v19 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    v19->_Mypair._Myval2._Bx._Buf[Mysize] = 47;
    _Right._Mypair._Myval2._Mysize = v16;
    v20 = &_Right;
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      v20 = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    v20->_Mypair._Myval2._Bx._Buf[v16] = 0;
    goto LABEL_41;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    v23 = result;
  else
    v23 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v23->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, &_Right);
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v7 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      goto LABEL_61;
    }
LABEL_62:
    operator delete(v7);
  }
  return result;
}

void __fastcall CharaProjectData::InitData(CharaProjectData *this, unsigned __int64 a2)
{
  unsigned int i; // ebp
  __int64 v4; // rsi
  __int64 v5; // rbx
  char *v6; // rcx
  CharaProjectData::CharaData *pCharaData; // rcx
  char *cTranslateFileName; // rcx
  char *cProjectName; // rcx
  char *cFilePath; // rcx

  if ( this->pCharaData )
  {
    for ( i = 0; i < this->dataHeader.uiCharaCount; ++i )
    {
      v4 = 17i64;
      v5 = 18i64 * i;
      do
      {
        v6 = this->pCharaData->pNameData[v5];
        if ( v6 )
        {
          operator delete(v6, a2);
          this->pCharaData->pNameData[v5] = 0i64;
        }
        ++v5;
        --v4;
      }
      while ( v4 );
    }
    pCharaData = this->pCharaData;
    if ( pCharaData )
    {
      operator delete(pCharaData, a2);
      this->pCharaData = 0i64;
    }
  }
  cTranslateFileName = this->dataHeader.cTranslateFileName;
  if ( cTranslateFileName )
  {
    operator delete(cTranslateFileName, a2);
    this->dataHeader.cTranslateFileName = 0i64;
  }
  cProjectName = this->dataHeader.cProjectName;
  if ( cProjectName )
  {
    operator delete(cProjectName, a2);
    this->dataHeader.cProjectName = 0i64;
  }
  cFilePath = this->cFilePath;
  if ( cFilePath )
  {
    operator delete(cFilePath, a2);
    this->cFilePath = 0i64;
  }
  this->fileHeader = 0i64;
  *(_QWORD *)&this->dataHeader.uiDataVersion = 0i64;
  this->dataHeader.cProjectName = 0i64;
  this->dataHeader.cTranslateFileName = 0i64;
  *(_QWORD *)&this->dataHeader.uiCharaCount = 0i64;
  this->iReadErrorID = 0;
}

CharaProjectData *__fastcall CharaProjectData::MoveFrom(CharaProjectData *this, CharaProjectData *src)
{
  if ( &AppMain::s_charaProjData != src )
  {
    AppMain::s_charaProjData.__vftable = (CharaProjectData_vtbl *)&CharaProjectData::`vftable';
    CharaProjectData::InitData(&AppMain::s_charaProjData, (unsigned __int64)src);
    AppMain::s_charaProjData.__vftable = (CharaProjectData_vtbl *)&CharaFileBase::`vftable';
    AppMain::s_charaProjData = *src;
    src->fileHeader = 0i64;
    src->__vftable = (CharaProjectData_vtbl *)&CharaProjectData::`vftable';
    src->iReadErrorID = 0;
    *(_QWORD *)&src->dataHeader.uiDataVersion = 0i64;
    src->dataHeader.cProjectName = 0i64;
    src->dataHeader.cTranslateFileName = 0i64;
    *(_QWORD *)&src->dataHeader.uiCharaCount = 0i64;
    src->pCharaData = 0i64;
    src->cFilePath = 0i64;
  }
  return &AppMain::s_charaProjData;
}

__int64 __fastcall ActorShot::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLText *this)
{
  return 2i64;
}

__int64 __fastcall CharaProjectData::ReadFile(CharaProjectData *this, const char *fileName)
{
  unsigned __int64 v4; // rdx
  AgFile *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  unsigned int iReadErrorID; // ebx
  AgPointer<KOFApplication> v9; // [rsp+28h] [rbp-70h] BYREF
  CFile v10; // [rsp+40h] [rbp-58h] BYREF
  InputStreamBroker<CFile> v11; // [rsp+A0h] [rbp+8h] BYREF

  memset(&v10.pFileName, 0, 28);
  memset(&v10, 0, 28);
  v9 = 0i64;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v9);
  if ( (unsigned __int8)CFile::copen(&v10, fileName, 0, 1) )
  {
    v11.f = &v10;
    this->iReadErrorID = CharaProjectData::ReadProjectData<CFile>(this, &v11, fileName);
    m_ptr = v10.m_file.m_ptr;
    if ( v10.m_file.m_ptr )
    {
      m_ref = v10.m_file.m_ref;
      v10.m_file = 0i64;
      v9.m_ref = m_ref;
      v9.m_ptr = (KOFApplication *)m_ptr;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v9);
    }
    *(_QWORD *)&v10.m_iSeekPos = 0i64;
  }
  else
  {
    this->iReadErrorID = 2;
  }
  if ( this->iReadErrorID != 1 )
    _DummyLogging("CharaProjectData::%s READ_ERROR_ID::%s [File path:%s]");
  iReadErrorID = this->iReadErrorID;
  if ( v10.fNameIndex )
  {
    operator delete(v10.fNameIndex, v4);
    v10.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v10);
  return iReadErrorID;
}

