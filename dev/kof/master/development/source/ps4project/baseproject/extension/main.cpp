#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/silverware/git/sdk/system/agsystemmanager.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/system/agsystemconfig.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/silverware/git/sdk/system/agwindowconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofapplication.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofapplication.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.cpp"

class AgPointer<KOFApplication>
{
public:
	AgPointer<KOFApplication>(const AgReference<KOFApplication> &);
	AgPointer<KOFApplication>(AgPointer<KOFApplication> &);
	AgPointer<KOFApplication>(const AgPointer<KOFApplication> &);
	AgPointer<KOFApplication>(KOFApplication *);
	AgPointer<KOFApplication>();
	~AgPointer<KOFApplication>();
	AgPointer<KOFApplication> & operator=(AgPointer<KOFApplication> &);
	AgPointer<KOFApplication> & operator=(const AgReference<KOFApplication> &);
	AgPointer<KOFApplication> & operator=(const AgPointer<KOFApplication> &);
	AgPointer<KOFApplication> & operator=(KOFApplication *);
	bool operator<(const AgPointer<KOFApplication> &);
	KOFApplication * operator->();
	KOFApplication & operator*();
	bool operator==(const AgPointer<KOFApplication> &);
	bool operator==(KOFApplication *);
	bool operator!=(const AgPointer<KOFApplication> &);
	bool operator!=(KOFApplication *);
	KOFApplication * getObject();
	void swap(AgPointer<KOFApplication> &);
private:
	AgReferenceCount * m_ref; // 0x0
	KOFApplication * m_ptr; // 0x8
};
void glDebugCallback(unsigned long source, unsigned long type, unsigned long id, unsigned long severity, long length, const char * message, const void * userParam); // 0x14002E7C0
void kof_testKeys(AgPointer<AgController> & keyboard, bool & highFpsSupport, double & interpFrac, AgWindowConfig & config); // 0x1402A6D40
long kof_main(); // 0x1402A6F80
class kof_main::__l2::<lambda_e62d02ed84880c7aef4a0a2150b93137>
{
public:
	void operator()();
	<lambda_e62d02ed84880c7aef4a0a2150b93137>(kof_main::__l2::<lambda_e62d02ed84880c7aef4a0a2150b93137> &);
	<lambda_e62d02ed84880c7aef4a0a2150b93137>();
	<lambda_e62d02ed84880c7aef4a0a2150b93137>(extension::GFXIRenderer &);
private:
	extension::GFXIRenderer & gfxiRenderer; // 0x0
public:
	kof_main::__l2::<lambda_e62d02ed84880c7aef4a0a2150b93137> & operator=(const kof_main::__l2::<lambda_e62d02ed84880c7aef4a0a2150b93137> &);
};
class kof_main::__l2::<lambda_5d65e3ce2f13fe087e92bf70e6038a07>
{
public:
	void operator()();
	<lambda_5d65e3ce2f13fe087e92bf70e6038a07>(kof_main::__l2::<lambda_5d65e3ce2f13fe087e92bf70e6038a07> &);
	<lambda_5d65e3ce2f13fe087e92bf70e6038a07>();
	<lambda_5d65e3ce2f13fe087e92bf70e6038a07>(extension::GFXIRenderer &);
private:
	extension::GFXIRenderer & gfxiRenderer; // 0x0
public:
	kof_main::__l2::<lambda_5d65e3ce2f13fe087e92bf70e6038a07> & operator=(const kof_main::__l2::<lambda_5d65e3ce2f13fe087e92bf70e6038a07> &);
};
const char * gs_game_title_short; // 0x1408B0628
void(*gs_program$initializer$)(); // 0x1407408C8
AgPointer<KOFApplication> gs_program; // 0x140AC2298
const char * gs_game_title_full; // 0x1408B08A8
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A60600
Framework::GLManager * gs_glm; // 0x140A9B698
std::piecewise_construct_t std::piecewise_construct; // 0x1408AF01F
AgWindowConfig::~AgWindowConfig(); // 0x1402A7830
void initFileSystem(); // 0x1402A7840
long AgMain(); // 0x1402A7A10//decompilation failure at 1408B0628!
//decompilation failure at 1407408C8!
//decompilation failure at 140AC2298!
//decompilation failure at 1408B08A8!
//decompilation failure at 140A60600!
//decompilation failure at 140A9B698!
//decompilation failure at 1408AF01F!
void __fastcall AgPointer<AgUser>::~AgPointer<AgUser>(AgPointer<KOFApplication> *this)
{
  KOFApplication *m_ptr; // rdi
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
        ((void (__fastcall *)(KOFApplication *, __int64))m_ptr->~AgIThreadHost)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall std::_Func_class<void,>::~_Func_class<void,>(std::function<void __cdecl(void)> *this, __int64 a2)
{
  std::function<void __cdecl(void)> *v3; // rcx

  v3 = (std::function<void __cdecl(void)> *)this->_Mystorage._Ptrs[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != this;
    ((void (__fastcall *)(std::function<void __cdecl(void)> *, __int64))v3->_Mystorage._Ptrs[0][4].__vftable)(v3, a2);
    this->_Mystorage._Ptrs[7] = 0i64;
  }
}

void __fastcall AgWindowConfig::~AgWindowConfig(AgWindowConfig *this)
{
  AgString::~AgString(&this->title);
}

AgPointer<KOFApplication> *__fastcall AgPointer<KOFApplication>::operator=(
        AgPointer<KOFApplication> *this,
        KOFApplication *t)
{
  __m128i v2; // xmm0
  int ReferenceCounter; // eax
  AgReferenceCount *m_refCount; // rbx
  AgReferenceCount *m_ref; // rax
  AgPointer<KOFApplication> v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0i64;
  v8 = 0i64;
  if ( t )
  {
    ReferenceCounter = AgReferencedObject::createReferenceCounter(&t->AgReferencedObject, t);
    m_refCount = t->m_refCount;
    if ( !ReferenceCounter )
      AgReferenceCount::incRef(t->m_refCount);
    v8.m_ref = m_refCount;
    v8.m_ptr = t;
    v2 = _mm_loadu_si128((const __m128i *)&v8);
  }
  m_ref = gs_program.m_ref;
  v8.m_ptr = gs_program.m_ptr;
  gs_program = (AgPointer<KOFApplication>)v2;
  v8.m_ref = m_ref;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v8);
  return &gs_program;
}

__int64 __fastcall AgMain(__int64 a1)
{
  int (__fastcall *v1)(); // rdx
  KOFApplication *v2; // rax
  AgPointer<KOFApplication> *v3; // rcx
  AgReferenceCount *m_ref; // rax
  KOFApplication *m_ptr; // rcx
  AgPointer<KOFApplication> v7; // [rsp+28h] [rbp-20h] BYREF
  KOFApplication *v8; // [rsp+50h] [rbp+8h]

  initFileSystem(a1);
  v8 = (KOFApplication *)operator new(0x98ui64);
  KOFApplication::KOFApplication(v8, v1);
  AgPointer<KOFApplication>::operator=(v3, v2);
  AgProgram::run(gs_program.m_ptr);
  m_ref = gs_program.m_ref;
  m_ptr = gs_program.m_ptr;
  gs_program = 0i64;
  v7.m_ref = m_ref;
  v7.m_ptr = m_ptr;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v7);
  return 0i64;
}

std::_Func_base<void> *__fastcall std::_Func_impl<_lambda_5d65e3ce2f13fe087e92bf70e6038a07_,std::allocator<int>,void,>::_Copy(
        std::_Func_impl<<lambda_5d65e3ce2f13fe087e92bf70e6038a07>,std::allocator<int>,void> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_5d65e3ce2f13fe087e92bf70e6038a07_,std::allocator<int>,void,>::`vftable';
    *((_QWORD *)_Where + 1) = this->_Mypair._Myval2.gfxiRenderer;
  }
  return (std::_Func_base<void> *)_Where;
}

void __fastcall std::_Func_impl<_lambda_5d65e3ce2f13fe087e92bf70e6038a07_,std::allocator<int>,void,>::_Delete_this(
        std::_Func_impl<<lambda_5d65e3ce2f13fe087e92bf70e6038a07>,std::allocator<int>,void> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<<lambda_5d65e3ce2f13fe087e92bf70e6038a07>,std::allocator<int>,void>_vtbl *)&std::_Func_base<void,>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

void __fastcall std::_Func_impl<_lambda_5d65e3ce2f13fe087e92bf70e6038a07_,std::allocator<int>,void,>::_Do_call(
        std::_Func_impl<<lambda_5d65e3ce2f13fe087e92bf70e6038a07>,std::allocator<int>,void> *this)
{
  extension::GFXIRenderer *gfxiRenderer; // rcx

  gfxiRenderer = this->_Mypair._Myval2.gfxiRenderer;
  if ( gfxiRenderer->m_glm )
    extension::gfxi_detail::CustomRenderCommandQueue::ExecCommands((extension::gfxi_detail::CustomRenderCommandQueue *)gfxiRenderer->m_commandQueue._Mypair._Myval2);
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

const type_info *__fastcall std::_Func_impl<_lambda_5d65e3ce2f13fe087e92bf70e6038a07_,std::allocator<int>,void,>::_Target_type(
        std::_Func_impl<<lambda_5d65e3ce2f13fe087e92bf70e6038a07>,std::allocator<int>,void> *this)
{
  return (const type_info *)&_lambda_5d65e3ce2f13fe087e92bf70e6038a07_ `RTTI Type Descriptor';
}

void __fastcall AgControllerButtonComponent::clear(AgControllerButtonComponent *this)
{
  signed __int64 Mysize; // rax
  unsigned __int64 v2; // r8
  unsigned int *Myfirst; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  unsigned int *v7; // rdx
  signed __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned int *v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned int *v13; // rdx

  Mysize = this->m_buttons._Mysize;
  v2 = 0i64;
  Myfirst = this->m_buttons._Myvec._Mypair._Myval2._Myfirst;
  if ( Mysize )
  {
    v5 = this->m_buttons._Mysize;
    if ( Mysize >= 0 )
      Myfirst += v5 >> 5;
    else
      Myfirst = (unsigned int *)((char *)Myfirst - 4i64 - 4 * ((-1i64 - v5) >> 5));
    v2 = this->m_buttons._Mysize & 0x1F;
  }
  v6 = 0i64;
  v7 = this->m_buttons._Myvec._Mypair._Myval2._Myfirst;
  while ( v7 != Myfirst || v6 != v2 )
  {
    *v7 &= ~(1 << v6);
    if ( v6 >= 0x1F )
    {
      v6 = 0i64;
      ++v7;
    }
    else
    {
      ++v6;
    }
  }
  v8 = this->m_lastButtons._Mysize;
  v9 = 0i64;
  v10 = this->m_lastButtons._Myvec._Mypair._Myval2._Myfirst;
  if ( v8 )
  {
    v11 = this->m_lastButtons._Mysize;
    if ( v8 >= 0 )
      v10 += v11 >> 5;
    else
      v10 = (unsigned int *)((char *)v10 - 4i64 - 4 * ((-1i64 - v11) >> 5));
    v9 = this->m_lastButtons._Mysize & 0x1F;
  }
  v12 = 0i64;
  v13 = this->m_lastButtons._Myvec._Mypair._Myval2._Myfirst;
  while ( v13 != v10 || v12 != v9 )
  {
    *v13 &= ~(1 << v12);
    if ( v12 >= 0x1F )
    {
      v12 = 0i64;
      ++v13;
    }
    else
    {
      ++v12;
    }
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void initFileSystem()
{
  AgSingleton<AgFileSystem> *v0; // rcx
  AgString *Directory; // rbx
  AgPCSystemConfig *SystemConfig; // rax
  AgFileSystem *Singleton; // rbx
  bool v4; // bl
  AgString v5; // [rsp+28h] [rbp-30h] BYREF
  AgPointer<KOFApplication> v6; // [rsp+38h] [rbp-20h] BYREF

  v0 = AgSingleton<AgFileSystem>::ms_instance;
  if ( !AgSingleton<AgFileSystem>::ms_instance )
  {
    Directory = KOFApplication::getDirectory();
    SystemConfig = AgSystemManager::getSystemConfig();
    AgString::operator=(&SystemConfig->m_directory, Directory);
    if ( !AgSingleton<AgFileSystem>::ms_instance )
    {
      Singleton = AgFileSystem::createSingleton();
      Singleton->onSingletonInit(Singleton);
      AgSingleton<AgFileSystem>::ms_instance = Singleton;
    }
    AgString::AgString(&v5, "TKOFXIV", -1);
    AgPath::clean((AgPath *)&v5);
    AgFileSystem::setMountPointPath(AgMountPoint_SaveData, (const AgPath *)&v5, 1);
    AgString::~AgString(&v5);
    AgString::AgString(&v5, "TKOFXIV", -1);
    AgPath::clean((AgPath *)&v5);
    AgFileSystem::setMountPointPath(AgMountPoint_Config, (const AgPath *)&v5, 1);
    AgString::~AgString(&v5);
    AgString::AgString(&v5, &pnewText, -1);
    AgPath::clean((AgPath *)&v5);
    AgFileSystem::setMountPointPath(AgMountPoint_Content, (const AgPath *)&v5, 1);
    AgString::~AgString(&v5);
    v0 = AgSingleton<AgFileSystem>::ms_instance;
  }
  ((void (__fastcall *)(AgSingleton<AgFileSystem> *, AgPointer<KOFApplication> *, __int64))v0->__vftable[1].~AgSingleton<AgFileSystem>)(
    v0,
    &v6,
    2i64);
  if ( AgMount::waitMounted((AgMount *)v6.m_ptr) )
  {
    AgString::AgString(&v5, "config:/", -1);
    AgPath::clean((AgPath *)&v5);
    v4 = AgDirectory::exists((const AgPath *)&v5) == 0;
    AgString::~AgString(&v5);
    if ( v4 )
    {
      AgString::AgString(&v5, "config:/", -1);
      AgPath::clean((AgPath *)&v5);
      AgDirectory::create((const AgPath *)&v5, 1);
      AgString::~AgString(&v5);
    }
  }
  AgPointer<AgUser>::~AgPointer<AgUser>(&v6);
}

void __fastcall __noreturn kof_main()
{
  Framework::GLManager *v0; // rax
  int v1; // edx
  const char **v2; // r8
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  Framework::GLManager *v6; // rcx
  Framework::GLManager *v7; // rcx
  void *v8; // rax
  _DWORD *v9; // r13
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  extension::GFXIRenderer *v11; // r15
  AppMain *v12; // rsi
  double v13; // xmm15_8
  double v14; // xmm11_8
  double v15; // xmm8_8
  Framework::GLManager *v16; // rcx
  AppMain *v17; // rcx
  AgProgram *Instance; // rax
  double v19; // xmm10_8
  double v20; // xmm1_8
  double v21; // xmm11_8
  Framework::GLManager *v22; // rcx
  GameDataInfo *v23; // rcx
  GAME_MODE v24; // ecx
  int m_FuncST; // eax
  bool v26; // di
  double v27; // xmm6_8
  float v28; // xmm0_4
  int v29; // ecx
  _BOOL8 v30; // r8
  float v31; // xmm0_4
  float v32; // xmm0_4
  int v33; // ebx
  char v34; // r14
  double v35; // xmm7_8
  BattleSystem::BattleController *v36; // rcx
  BattleSystem::BattleController *v37; // rax
  bool v38; // cc
  double v39; // xmm6_8
  float v40; // xmm7_4
  int v41; // edx
  BattleSystem::BattleController *v42; // rcx
  BattleSystem::BattleController *v43; // rax
  float v44; // xmm1_4
  float v45; // xmm0_4
  BattleSystem::BattleController *v46; // rax
  float v47; // xmm3_4
  float v48; // xmm0_4
  bool *v49; // rdx
  long double *v50; // r8
  AgWindowConfig *v51; // r9
  Framework::GLManager *v52; // rcx
  Framework::GLManager *v53; // rcx
  int v54; // eax
  bool v55; // al
  extension::GFXIFontManager *v56; // rcx
  double v57; // xmm0_8
  double v58; // xmm1_8
  double v59; // xmm1_8
  Framework::GLManager *v60; // rbx
  AgPointer<AgDisplay> *v61; // rax
  bool v62; // r8
  int v63; // edx
  AgPointer<AgDisplay> v64; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v65[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+48h] [rbp-B8h]
  int v67; // [rsp+50h] [rbp-B0h]
  AgString v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-98h]
  AgPointer<AgController> keyboard; // [rsp+70h] [rbp-90h] BYREF
  std::function<void __cdecl(void)> v71; // [rsp+80h] [rbp-80h] BYREF
  AgRectangle result; // [rsp+C0h] [rbp-40h] BYREF
  Framework::GLManager *v73; // [rsp+1C0h] [rbp+C0h] BYREF
  BattleSystem::BattleController *v74; // [rsp+1C8h] [rbp+C8h]
  BattleSystem::BattleController *v75; // [rsp+1D0h] [rbp+D0h]
  BattleSystem::BattleController *v76; // [rsp+1D8h] [rbp+D8h]

  v69 = -2i64;
  _p___argv();
  _p___argc();
  v0 = Framework::GLManager::glm;
  if ( !Framework::GLManager::glm )
  {
    v73 = (Framework::GLManager *)operator new(0x2BF8ui64);
    Framework::GLManager::GLManager(v73, v1, v2);
    Framework::GLManager::glm = v0;
  }
  gs_glm = v0;
  GAME_SCREEN_WIDTH = 1920;
  GAME_SCREEN_HEIGHT = 1080;
  AgDisplay::getScreenSize(&result);
  v3 = GAME_SCREEN_WIDTH / 2;
  v4 = GAME_SCREEN_HEIGHT / 2;
  v5 = GAME_SCREEN_HEIGHT / 2;
  v6 = gs_glm;
  gs_glm->m_config.m_targetWidth = GAME_SCREEN_WIDTH / 2;
  v6->m_config.m_targetHeight = v4;
  *(_QWORD *)&v6->m_config.m_buffers = 1i64;
  AgString::AgString(&v68);
  v65[0] = v3;
  v65[1] = v5;
  v67 = 1;
  v66 = 0i64;
  AgString::operator=(&v68, "The King Of Fighters XIV");
  AgSystemManager::getSystemConfig()->m_numGlLoadingContexts = 2;
  ((void (__fastcall *)(AgSingleton<AgSystemManager> *, _DWORD *))AgSingleton<AgSystemManager>::ms_instance->__vftable[2].~AgSingleton<AgSystemManager>)(
    AgSingleton<AgSystemManager>::ms_instance,
    v65);
  Framework::GLManager::startUp(v7, v3, v5);
  if ( _glewDebugMessageCallback )
  {
    AgTrace("[OpenGL Debug] Registering OpenGL debug callback");
    glEnable(0x92E0u);
    glEnable(0x8242u);
    _glewDebugMessageCallback(
      (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *))ActorWeapon::ActionFlagCheck,
      0i64);
    LODWORD(v73) = 0;
    _glewDebugMessageControl(0x1100u, 0x1100u, 0x1100u, 0, (const unsigned int *)&v73, 1u);
  }
  else
  {
    AgTrace("[OpenGL Debug] Failed to register OpenGL debug callback");
  }
  v8 = NtCurrentTeb()->Reserved1[11];
  v9 = *(_DWORD **)v8;
  if ( !*(_DWORD *)(*(_QWORD *)v8 + 12i64) )
  {
    DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                       (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                       &v64,
                       0);
    AgDisplay::lock(DisplayByIndex->m_ptr);
    AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&v64);
    v9[3] = 1;
  }
  v11 = extension::GFXIRenderer::Instance();
  extension::GFXIRenderer::initialize(v11);
  _glewBindBuffer(0x8893u, 0);
  initAppMain(v3, v5, v3, v5, (float)(v3 / GAME_SCREEN_WIDTH), (float)(v5 / GAME_SCREEN_HEIGHT));
  v12 = *(AppMain **)&AppMain::pApp;
  AppMain::processCommandLine(*(AppMain **)&AppMain::pApp);
  LOBYTE(v73) = 0;
  v13 = AgClock::getSystemTime() * 1000.0;
  v14 = DOUBLE_16_66666666666667;
  v15 = 0.0;
  v71._Mystorage._Ptrs[0] = (std::_Func_base<void> *)&std::_Func_impl<_lambda_5d65e3ce2f13fe087e92bf70e6038a07_,std::allocator<int>,void,>::`vftable';
  v71._Mystorage._Ptrs[1] = (std::_Func_base<void> *)v11;
  v71._Mystorage._Ptrs[7] = (std::_Func_base<void> *)&v71;
  Framework::GLManager::startRenderThread(v16, &v71);
  AgInputManager::getFirstController(
    (AgInputManager *)AgSingleton<AgInputManager>::ms_instance,
    &keyboard,
    AgControllerType_Keyboard);
  while ( 1 )
  {
    if ( LODWORD(AgProgram::getInstance()[2].m_refCount)
      || !AgProgram::getInstance()
      || (Instance = AgProgram::getInstance(), (unsigned int)AgProgram::getShutdownRequested(Instance) == 1) )
    {
      v60 = gs_glm;
      if ( v9[3] )
      {
        v61 = AgDisplayManager::getDisplayByIndex(
                (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                &v64,
                0);
        AgDisplay::unlock(v61->m_ptr);
        AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&v64);
        v9[3] = 0;
        v63 = v9[2];
        if ( v63 > 0 )
          Framework::GLManager::LoadingLock(v60, v63 - 1, v62);
      }
      AppMain::onExit(v17);
      ExitProcess(0);
    }
    v19 = AgClock::getSystemTime() * 1000.0;
    v20 = v19 - v13;
    v13 = v19;
    v21 = v14 + v20;
    Framework::GLManager::setCurrentFrameBuffer(v22);
    if ( v11->m_glm )
      v11->m_hal.pObject->BeginFrame(v11->m_hal.pObject);
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > v9[10] )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v23);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v24 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
    v26 = 0;
    if ( (unsigned int)(v24 - 4) > 2 && v24 != GAME_MODE_ONLINETRAINING && highFpsSupport )
    {
      m_FuncST = v12->m_FuncST;
      if ( m_FuncST == 179 || m_FuncST == 42 || m_FuncST == 196 )
        v26 = 1;
    }
    v27 = v21 / 16.66666666666667;
    v28 = v21 / 16.66666666666667;
    v29 = (int)floorf(v28);
    if ( !v26 && !v29 )
    {
      do
        v31 = (AgClock::getSystemTime() * 1000.0 - v19 + v21) / 16.66666666666667;
      while ( !(int)floorf(v31) );
      v13 = AgClock::getSystemTime() * 1000.0;
      v21 = v21 + v13 - v19;
      v27 = (v13 - v19 + v21) / 16.66666666666667;
      v32 = v27;
      v29 = (int)floorf(v32);
    }
    v33 = v29;
    if ( v29 > 4 )
      v33 = 4;
    if ( !v26 > v33 )
      v33 = !v26;
    v34 = 1;
    v35 = (double)v29;
    v14 = v21 - (double)v29 * 16.66666666666667;
    if ( (_BYTE)v73 != 1 || v26 )
    {
      v36 = BattleSystem::BattleController::instance;
    }
    else
    {
      v15 = 0.0;
      v36 = BattleSystem::BattleController::instance;
      if ( !BattleSystem::BattleController::instance )
      {
        v74 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v74);
        v36 = v37;
        BattleSystem::BattleController::instance = v37;
      }
      v36->actSystem.xPlaySpeed.value = 0x10000;
    }
    LOBYTE(v73) = v26;
    if ( !v26 )
      break;
    v38 = v33 <= 0;
    if ( v33 )
      goto LABEL_52;
    v39 = v27 - v35;
    v40 = v39 - v15;
    if ( v40 > 0.0 )
    {
      v15 = v39;
      bBattleLastUpdateFrame = 1;
      AgClock::tick(&gs_program.m_ptr->m_clock);
      if ( AgSilverware::steamAvailable() )
        SteamAPI_RunCallbacks();
      v42 = BattleSystem::BattleController::instance;
      if ( !BattleSystem::BattleController::instance )
      {
        v75 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v75);
        v42 = v43;
        BattleSystem::BattleController::instance = v43;
      }
      v44 = fmaxf(0.000099999997, fminf(1.0, v40));
      if ( v44 <= 1.0 )
        v45 = fmaxf(0.0, v44);
      else
        v45 = *(float *)&FLOAT_1_0;
      v42->actSystem.xPlaySpeed.value = (int)(float)(v45 * 65536.0);
      AppMain::onRunExe_AG_Partial(v12, v41);
      gs_glm->m_secondsElapsedApparent = gs_glm->m_frameProgressSpeed * gs_glm->m_secondsElapsedActualPerFrame
                                       + gs_glm->m_secondsElapsedApparentLastFrame;
      goto LABEL_64;
    }
    v34 = 0;
LABEL_65:
    v54 = v12->m_FuncST;
    v55 = v54 < 177 || v54 > 181;
    if ( v11->m_glm )
    {
      if ( v55 )
      {
        if ( dword_140ACDDE8 > v9[10] )
        {
          Init_thread_header(&dword_140ACDDE8);
          if ( dword_140ACDDE8 == -1 )
          {
            extension::GFXIFontManager::GFXIFontManager(v56);
            atexit((void (__fastcall *)())extension::GFXIFontManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
            Init_thread_footer(&dword_140ACDDE8);
          }
        }
        LOBYTE(v30) = 1;
        v11->m_hal.pObject->SetRenderTarget(
          v11->m_hal.pObject,
          v11->m_screenRenderTargets._Mypair._Myval2._Myfirst[v11->m_glm->m_backBufferIndex].pObject,
          v30);
        v11->m_hal.pObject->BeginScene(v11->m_hal.pObject);
        extension::GFXIFontManager::renderDrawText(&the_instance_3, v11->m_hal.pObject);
        v11->m_hal.pObject->EndScene(v11->m_hal.pObject);
      }
      v11->m_hal.pObject->EndFrame(v11->m_hal.pObject);
    }
    if ( v34 )
      Framework::GLManager::swapBuffer((Framework::GLManager *)v36);
    AgSilverware::postUpdate();
    if ( !v26 )
    {
      v57 = AgClock::getSystemTime() * 1000.0 - v19;
      if ( v12->m_FuncST == 184 )
        v58 = DOUBLE_33_33333333333334;
      else
        v58 = DOUBLE_16_66666666666667;
      v59 = v58 - v57;
      if ( v59 >= 1.0 )
        AgThread::sleep((int)v59);
    }
  }
  v38 = v33 <= 0;
LABEL_52:
  if ( !v38 )
  {
    while ( 1 )
    {
      bBattleLastUpdateFrame = --v33 == 0;
      if ( v26 )
      {
        if ( !v36 )
        {
          v76 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
          BattleSystem::BattleController::BattleController(v76);
          v36 = v46;
          BattleSystem::BattleController::instance = v46;
        }
        *(float *)&v20 = 1.0 - v15;
        v47 = fmaxf(0.000099999997, fminf(1.0, *(float *)&v20));
        if ( v47 <= 1.0 )
          v48 = fmaxf(0.0, v47);
        else
          v48 = *(float *)&FLOAT_1_0;
        v36->actSystem.xPlaySpeed.value = (int)(float)(v48 * 65536.0);
      }
      AgSilverware::preUpdate();
      kof_testKeys(&keyboard, v49, v50, v51);
      Framework::Input::ControllerContext::update(&gs_glm->m_controllerContext);
      AgClock::tick(&gs_program.m_ptr->m_clock);
      if ( AgSilverware::steamAvailable() )
        SteamAPI_RunCallbacks();
      AppMain::onRunExe(v12, *(float *)&v20);
      Framework::GLManager::updateClock(v52);
      v15 = 0.0;
      if ( v33 <= 0 )
        break;
      v36 = BattleSystem::BattleController::instance;
    }
  }
LABEL_64:
  AppMain::onRunDraw(v12);
  Framework::GLManager::swapStackBuffer(v53);
  goto LABEL_65;
}

void __fastcall kof_testKeys(
        AgPointer<AgController> *keyboard,
        bool *highFpsSupport,
        long double *interpFrac,
        AgWindowConfig *config)
{
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Parent; // rdx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v6; // rcx
  std::list<AgControllerComponent *> *p_second; // rcx
  std::_List_node<AgControllerComponent *,void *> *v8; // rcx
  std::_List_node<AgControllerComponent *,void *> *Next; // rax
  AgControllerButtonComponent *Myval; // rdi
  __int64 v11; // rsi
  unsigned int *Myfirst; // rcx
  bool v13; // zf
  AgWindowMode StartingPos; // ebx
  bool v15; // cl
  AgWindowMode v16; // er9
  int v17; // edx
  int v18; // er8
  extension::gfxi_detail::MovieProxy **v19; // rax
  extension::gfxi_detail::MovieProxy *v20; // rbx
  char v21; // al
  AgPointer<AgDisplay> result; // [rsp+38h] [rbp-30h] BYREF
  extension::gfxi_detail::MovieProxy *v23; // [rsp+88h] [rbp+20h]

  Myhead = keyboard->m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  v6 = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= AgControllerComponentType_Buttons )
    {
      v6 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v6 == Myhead || v6->_Myval.first > AgControllerComponentType_Buttons )
    v6 = Myhead;
  if ( v6 == Myhead )
    p_second = &AgController::ms_emptyControllerComponentList;
  else
    p_second = &v6->_Myval.second;
  v8 = p_second->_Mypair._Myval2._Myhead;
  Next = v8->_Next;
  if ( v8->_Next == v8 )
  {
LABEL_15:
    Myval = (AgControllerButtonComponent *)&AgController::ms_emptyControllerComponent;
  }
  else
  {
    while ( 1 )
    {
      Myval = (AgControllerButtonComponent *)Next->_Myval;
      if ( !Myval->m_id )
        break;
      Next = Next->_Next;
      if ( Next == v8 )
        goto LABEL_15;
    }
  }
  v11 = *(_QWORD *)&AppMain::pApp;
  Myfirst = Myval->m_buttons._Myvec._Mypair._Myval2._Myfirst;
  if ( (Myfirst[5] & 0x10) == 0 && (Myfirst[5] & 0x20) == 0
    || (*Myval->m_lastButtons._Myvec._Mypair._Myval2._Myfirst & 0x2000) != 0 )
  {
LABEL_34:
    v13 = (*Myfirst & 0x2000) == 0;
    goto LABEL_35;
  }
  v13 = (*Myfirst & 0x2000) == 0;
  if ( (*Myfirst & 0x2000) != 0 )
  {
    if ( isFirstPress && *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 7352i64) != 42 )
    {
      AgDisplayManager::getDisplayByIndex((AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance, &result, 0);
      StartingPos = Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(result.m_ptr);
      v15 = AgDisplay::getVsyncEnabled(result.m_ptr) != 0;
      if ( StartingPos )
        v16 = AgWindowMode_Windowed;
      else
        v16 = *(_DWORD *)(v11 + 2197468);
      v17 = *(_DWORD *)(v11 + 4i64 * (int)v16 + 2197440);
      v18 = *(_DWORD *)(v11 + 4i64 * (int)v16 + 2197452);
      *(_DWORD *)(v11 + 2197464) = v16;
      AppMain::ResizeDisplay(*(AppMain **)&AppMain::pApp, v17, v18, v16, v15);
      AgControllerButtonComponent::clear(Myval);
      GfxManager::getInstance();
      v20 = *v19;
      v23 = *v19;
      if ( *v19 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v20, 1ui64);
        v20 = v23;
      }
      if ( v20 && Scaleform::GFx::Movie::IsAvailable(v20->m_movie.pObject, "_root.UpdatedWindowingSettings") )
        Scaleform::GFx::Movie::Invoke(v20->m_movie.pObject, "_root.UpdatedWindowingSettings", 0i64, 0i64, 0);
      isFirstPress = 0;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          extension::gfxi_detail::MovieProxy::~MovieProxy(v23);
          operator delete(v23, 0xE8ui64);
        }
      }
      AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
      return;
    }
    goto LABEL_34;
  }
LABEL_35:
  v21 = isFirstPress;
  if ( v13 )
    v21 = 1;
  isFirstPress = v21;
}

