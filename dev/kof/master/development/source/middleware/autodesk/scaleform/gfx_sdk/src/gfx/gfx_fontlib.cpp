#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"

class Scaleform::GFx::FontLibImpl :
	Scaleform::NewOverrideBase<2>
{
public:
	Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> FontMovies; // 0x0
	Scaleform::String FileToSubstitute; // 0x18
	FontLibImpl(Scaleform::GFx::FontLibImpl &);
	FontLibImpl(const Scaleform::GFx::FontLibImpl &);
	FontLibImpl();
	~FontLibImpl();
	Scaleform::GFx::FontLibImpl & operator=(Scaleform::GFx::FontLibImpl &);
	Scaleform::GFx::FontLibImpl & operator=(const Scaleform::GFx::FontLibImpl &);
};
class Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::FontLib::FontLib(); // 0x14030A530
Scaleform::GFx::FontLibImpl::~FontLibImpl(); // 0x14030A720
void Scaleform::GFx::FontLib::AddFontsFrom(Scaleform::GFx::MovieDef * md, bool pin); // 0x14030AA20
bool Scaleform::GFx::FontLib::AreAllMoviesLoaded(); // 0x14030AAE0
void Scaleform::GFx::FontLib::FontResult::SetResult(Scaleform::GFx::MovieDef * pmovieDef, Scaleform::GFx::FontResource * pfont); // 0x14030B0F0
Scaleform::GFx::FontLib::FontResult::~FontResult(); // 0x14030A7B0
Scaleform::GFx::MovieDefBindStates::~MovieDefBindStates(); // 0x14030A7E0
bool Scaleform::GFx::FontLib::FindFont(Scaleform::GFx::FontLib::FontResult * presult, const char * pfontname, unsigned long fontFlags, Scaleform::GFx::MovieDef * puserDef, Scaleform::GFx::StateBag * pstates, Scaleform::GFx::ResourceWeakLib * pweakLib); // 0x14030AB30
void Scaleform::GFx::FontLib::LoadFonts(Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > & fonts); // 0x14030AF00
void Scaleform::GFx::StateBag::SetDefaultFontLibName(const char * defaultFontLib); // 0x14030B040
class Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState>
{
protected:
	Scaleform::GFx::DefaultFontLibNameState * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DefaultFontLibNameState>(const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> &);
	Ptr<Scaleform::GFx::DefaultFontLibNameState>(Scaleform::GFx::DefaultFontLibNameState *);
	Ptr<Scaleform::GFx::DefaultFontLibNameState>(Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DefaultFontLibNameState>(Scaleform::Pickable<Scaleform::GFx::DefaultFontLibNameState>);
	Ptr<Scaleform::GFx::DefaultFontLibNameState>(Scaleform::GFx::DefaultFontLibNameState &);
	Ptr<Scaleform::GFx::DefaultFontLibNameState>();
	~Ptr<Scaleform::GFx::DefaultFontLibNameState>();
	bool operator==(Scaleform::GFx::DefaultFontLibNameState *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> &);
	bool operator!=(Scaleform::GFx::DefaultFontLibNameState *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> &);
	Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & operator=(Scaleform::Pickable<Scaleform::GFx::DefaultFontLibNameState>);
	const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & operator=(Scaleform::GFx::DefaultFontLibNameState &);
	const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & operator=(Scaleform::GFx::DefaultFontLibNameState *);
	const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & operator=(const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> &);
	Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DefaultFontLibNameState>);
	Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & SetPtr(Scaleform::GFx::DefaultFontLibNameState &);
	Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & SetPtr(Scaleform::GFx::DefaultFontLibNameState *);
	Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DefaultFontLibNameState * & GetRawRef();
	Scaleform::GFx::DefaultFontLibNameState * GetPtr();
	Scaleform::GFx::DefaultFontLibNameState & operator*();
	Scaleform::GFx::DefaultFontLibNameState * operator->();
	Scaleform::GFx::DefaultFontLibNameState * operator class Scaleform::GFx::DefaultFontLibNameState *();
	Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & Pick(Scaleform::GFx::DefaultFontLibNameState *);
	Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & Pick(Scaleform::Pickable<Scaleform::GFx::DefaultFontLibNameState>);
	Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> & Pick(Scaleform::Ptr<Scaleform::GFx::DefaultFontLibNameState> &);
};
const char * Scaleform::GFx::StateBag::GetDefaultFontLibName(); // 0x14030AEC0void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::Set<Scaleform::Ptr<Scaleform::Render::Font>>(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *this,
        void *pmemAddr,
        const Scaleform::Ptr<Scaleform::Render::Font> *key)
{
  unsigned __int64 v5; // r8
  __int64 v7; // r10
  __int64 v8; // r9
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >::TableType *pTable; // r10
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 *v14; // rdx
  char *v15; // rdi
  Scaleform::RefCountVImpl *v16; // rcx

  v5 = 5381i64;
  v7 = 8i64;
  do
  {
    v8 = *((unsigned __int8 *)key + --v7);
    v5 = v8 + 65599 * v5;
  }
  while ( v7 );
  pTable = this->pTable;
  if ( !this->pTable )
    goto LABEL_16;
  v10 = v5 & pTable->SizeMask;
  v11 = v10;
  v12 = v10 + 2 * (v10 + 1);
  v13 = *(&pTable->EntryCount + v12) == -2i64;
  v14 = &pTable->EntryCount + v12;
  if ( v13 || v14[1] != v10 )
    goto LABEL_16;
  while ( v14[1] != v10 || (Scaleform::Render::Font *)v14[2] != key->pObject )
  {
    v11 = *v14;
    if ( *v14 == -1i64 )
      goto LABEL_16;
    v14 = &pTable[v11 + 1].EntryCount + v11;
  }
  if ( v11 >= 0 )
  {
    v15 = (char *)pTable + 24 * v11;
    if ( key->pObject )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)key->pObject);
    v16 = (Scaleform::RefCountVImpl *)*((_QWORD *)v15 + 4);
    if ( v16 )
      Scaleform::RefCountImpl::Release(v16);
    *((Scaleform::Ptr<Scaleform::Render::Font> *)v15 + 4) = (Scaleform::Ptr<Scaleform::Render::Font>)key->pObject;
  }
  else
  {
LABEL_16:
    Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::add<Scaleform::Ptr<Scaleform::Render::Font>>(
      this,
      pmemAddr,
      key,
      v5);
  }
}

void __fastcall Scaleform::GFx::FontLib::FontLib(Scaleform::GFx::FontLib *this)
{
  Scaleform::GFx::FontLibImpl *v2; // rbx

  this->SType = 20;
  this->__vftable = (Scaleform::GFx::FontLib_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontLib_vtbl *)&Scaleform::GFx::FontLib::`vftable';
  v2 = (Scaleform::GFx::FontLibImpl *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                        Scaleform::Memory::pGlobalHeap,
                                        32i64);
  if ( v2 )
  {
    v2->FontMovies.Data.Data = 0i64;
    v2->FontMovies.Data.Size = 0i64;
    v2->FontMovies.Data.Policy.Capacity = 0i64;
    Scaleform::String::String(&v2->FileToSubstitute);
  }
  else
  {
    v2 = 0i64;
  }
  this->pImpl = v2;
  Scaleform::String::operator=(&v2->FileToSubstitute, "gfxfontlib.swf");
}

void __fastcall Scaleform::GFx::MovieDefBindStates::MovieDefBindStates(
        Scaleform::GFx::MovieDefBindStates *this,
        Scaleform::GFx::StateBag *psharedState)
{
  Scaleform::GFx::StateBag_vtbl *v3; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::FileOpener *v5; // rdi
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::GFx::URLBuilder *v7; // rdi
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::GFx::ImageCreator *v9; // rdi
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::GFx::ImportVisitor *v11; // rdi
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::GFx::FontPackParams *v13; // rdi
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::GFx::FontCompactorParams *v15; // rdi
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::GFx::ImagePackParamsBase *v17; // rdi
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-28h]
  Scaleform::GFx::ImagePackParamsBase *v21; // [rsp+50h] [rbp-18h]

  this->__vftable = (Scaleform::GFx::MovieDefBindStates_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::MovieDefBindStates_vtbl *)&Scaleform::GFx::MovieDefBindStates::`vftable';
  this->pFileOpener.pObject = 0i64;
  this->pURLBulider.pObject = 0i64;
  this->pImageCreator.pObject = 0i64;
  this->pImageFileHandlerRegistry.pObject = 0i64;
  this->pImportVisitor.pObject = 0i64;
  this->pFontPackParams.pObject = 0i64;
  this->pFontCompactorParams.pObject = 0i64;
  this->pImagePackParams.pObject = 0i64;
  v21 = 0i64;
  v3 = psharedState->__vftable;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0i64;
  v3->GetStatesAddRef(
    psharedState,
    (Scaleform::GFx::State **)&v18,
    `Scaleform::GFx::MovieDefBindStates::MovieDefBindStates'::`2'::stateQuery,
    7u);
  pObject = (Scaleform::RefCountVImpl *)this->pFileOpener.pObject;
  v5 = (Scaleform::GFx::FileOpener *)v18;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFileOpener.pObject = v5;
  v6 = (Scaleform::RefCountVImpl *)this->pURLBulider.pObject;
  v7 = (Scaleform::GFx::URLBuilder *)*((_QWORD *)&v18 + 1);
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  this->pURLBulider.pObject = v7;
  v8 = (Scaleform::RefCountVImpl *)this->pImageCreator.pObject;
  v9 = (Scaleform::GFx::ImageCreator *)v19;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  this->pImageCreator.pObject = v9;
  v10 = (Scaleform::RefCountVImpl *)this->pImportVisitor.pObject;
  v11 = (Scaleform::GFx::ImportVisitor *)*((_QWORD *)&v19 + 1);
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  this->pImportVisitor.pObject = v11;
  v12 = (Scaleform::RefCountVImpl *)this->pFontPackParams.pObject;
  v13 = (Scaleform::GFx::FontPackParams *)v20;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  this->pFontPackParams.pObject = v13;
  v14 = (Scaleform::RefCountVImpl *)this->pFontCompactorParams.pObject;
  v15 = (Scaleform::GFx::FontCompactorParams *)*((_QWORD *)&v20 + 1);
  if ( v14 )
    Scaleform::RefCountImpl::Release(v14);
  this->pFontCompactorParams.pObject = v15;
  v16 = (Scaleform::RefCountVImpl *)this->pImagePackParams.pObject;
  v17 = v21;
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
  this->pImagePackParams.pObject = v17;
}

void __fastcall Scaleform::GFx::FontLibImpl::~FontLibImpl(Scaleform::GFx::FontLibImpl *this)
{
  volatile int *v2; // rbx
  unsigned __int64 Size; // rdi
  Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *i; // rbx

  v2 = (volatile int *)(this->FileToSubstitute.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  Size = this->FontMovies.Data.Size;
  for ( i = &this->FontMovies.Data.Data[Size - 1]; Size; --Size )
  {
    if ( i->pObject )
      Scaleform::GFx::Resource::Release(i->pObject);
    --i;
  }
  if ( this->FontMovies.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::GFx::FontLib::FontResult::~FontResult(Scaleform::GFx::FontLib::FontResult *this)
{
  Scaleform::GFx::MovieDef *pMovieDef; // rcx
  Scaleform::GFx::FontResource *pFontResource; // rcx

  pMovieDef = this->pMovieDef;
  if ( pMovieDef )
    Scaleform::GFx::Resource::Release(pMovieDef);
  pFontResource = this->pFontResource;
  if ( pFontResource )
    Scaleform::GFx::Resource::Release(pFontResource);
}

void __fastcall Scaleform::GFx::MovieDefBindStates::~MovieDefBindStates(Scaleform::GFx::MovieDefBindStates *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx
  Scaleform::RefCountVImpl *v4; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::RefCountVImpl *v9; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->pImagePackParams.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->pFontCompactorParams.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  v4 = (Scaleform::RefCountVImpl *)this->pFontPackParams.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  v5 = (Scaleform::RefCountVImpl *)this->pImportVisitor.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  v6 = (Scaleform::RefCountVImpl *)this->pImageFileHandlerRegistry.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pImageCreator.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  v8 = (Scaleform::RefCountVImpl *)this->pURLBulider.pObject;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  v9 = (Scaleform::RefCountVImpl *)this->pFileOpener.pObject;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::FontLib::AddFontsFrom(
        Scaleform::GFx::FontLib *this,
        Scaleform::GFx::MovieDef *md,
        bool pin)
{
  Scaleform::GFx::ResourceLibBase *pLib; // rax
  Scaleform::RefCountVImpl *v7; // rdi
  Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy> *pImpl; // rbx
  _QWORD *p_pObject; // rbx
  Scaleform::GFx::ResourceLibBase *v10; // rcx

  if ( this->pImpl && md )
  {
    pLib = md[3].pLib;
    v7 = *(Scaleform::RefCountVImpl **)&pLib[1].RefCount;
    if ( v7 )
      Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)&pLib[1].RefCount);
    pImpl = (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy> *)this->pImpl;
    Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      pImpl,
      pImpl,
      pImpl->Size + 1);
    p_pObject = &pImpl->Data[pImpl->Size - 1].pObject;
    if ( p_pObject )
    {
      if ( v7 )
        Scaleform::Render::RenderBuffer::AddRef(v7);
      *p_pObject = v7;
    }
    if ( v7 )
      Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)v7);
    if ( pin )
    {
      v10 = md->pLib;
      if ( v10 )
        v10->PinResource(v10, md);
    }
  }
}

char __fastcall Scaleform::GFx::FontLib::AreAllMoviesLoaded(Scaleform::GFx::FontLib *this)
{
  Scaleform::GFx::FontLibImpl *pImpl; // r8
  unsigned __int64 Size; // r9
  __int64 v3; // rdx
  Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *i; // r8

  pImpl = this->pImpl;
  if ( !pImpl )
    return 1;
  Size = pImpl->FontMovies.Data.Size;
  v3 = 0i64;
  if ( !Size )
    return 1;
  for ( i = pImpl->FontMovies.Data.Data; i->pObject->pData.pObject->LoadState >= LS_LoadFinished; ++i )
  {
    if ( ++v3 >= Size )
      return 1;
  }
  return 0;
}

char __fastcall Scaleform::GFx::FontLib::FindFont(
        Scaleform::GFx::FontLib *this,
        Scaleform::GFx::FontLib::FontResult *presult,
        const char *pfontname,
        unsigned int fontFlags,
        Scaleform::GFx::MovieDef *puserDef,
        Scaleform::GFx::StateBag *pstates,
        Scaleform::GFx::ResourceWeakLib *pweakLib)
{
  Scaleform::GFx::FontLibImpl *pImpl; // r10
  __int16 v8; // r12
  Scaleform::GFx::MovieDefImpl *Movie_LoadState; // rbx
  unsigned int v12; // er14
  char v13; // r15
  Scaleform::GFx::MovieDataDef *pObject; // rbp
  Scaleform::GFx::FontDataUseNode *volatile Value; // rdi
  int v16; // esi
  int v17; // esi
  Scaleform::Render::Font *v18; // rcx
  const char *v19; // rax
  char v20; // di
  Scaleform::GFx::LoadStates *v21; // rax
  Scaleform::GFx::LoadStates *v22; // rax
  Scaleform::GFx::LoadStates *v23; // rdi
  Scaleform::RefCountVImpl *v24; // rcx
  Scaleform::GFx::LoaderImpl *v25; // rax
  Scaleform::GFx::LoaderImpl *v26; // rax
  Scaleform::GFx::LoaderImpl *v27; // rbp
  Scaleform::GFx::MovieDefBindStates *v28; // rax
  Scaleform::GFx::MovieDefBindStates *v29; // rax
  Scaleform::GFx::MovieDefBindStates *v30; // rdi
  Scaleform::GFx::LoadStates *v31; // rax
  Scaleform::GFx::LoadStates *v32; // rax
  Scaleform::GFx::LoadStates *v33; // rsi
  unsigned int v34; // er8
  Scaleform::RefCountVImpl **v35; // rdi
  Scaleform::GFx::FontResource *v36; // r8
  Scaleform::GFx::MovieDataDef *pmd; // [rsp+20h] [rbp-58h]
  Scaleform::GFx::ResourceBindData pdata; // [rsp+28h] [rbp-50h] BYREF
  unsigned int index; // [rsp+98h] [rbp+20h]

  pImpl = this->pImpl;
  v8 = fontFlags & 0x313;
  if ( !pImpl )
    return 0;
  Movie_LoadState = 0i64;
  v12 = 0;
  v13 = 0;
  index = 0;
  pmd = 0i64;
  if ( !pImpl->FontMovies.Data.Size )
    goto LABEL_16;
  do
  {
    if ( v13 )
    {
      pObject = pmd;
      goto LABEL_21;
    }
    pObject = pImpl->FontMovies.Data.Data[v12].pObject;
    pmd = pObject;
    Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForLoadFinish(pObject->pData.pObject);
    Value = pObject->pData.pObject->BindData.pFonts.Value;
    if ( Value )
    {
      v16 = 3;
      if ( (v8 & 0x300) != 0 )
        v16 = 771;
      v17 = v8 & 0x10 | v16;
      while ( 1 )
      {
        v18 = Value->pFontData.pObject;
        if ( (v17 & v18->Flags) == (v8 & 0x313) )
        {
          v19 = v18->GetName(v18);
          if ( !Scaleform::String::CompareNoCase(v19, pfontname) )
            break;
        }
        Value = Value->pNext.Value;
        if ( !Value )
          goto LABEL_14;
      }
      v13 = 1;
      index = Value->BindIndex;
    }
LABEL_14:
    ++v12;
    pImpl = this->pImpl;
  }
  while ( v12 < pImpl->FontMovies.Data.Size );
  if ( !v13 )
    goto LABEL_16;
LABEL_21:
  if ( puserDef )
  {
    v21 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(
                                          Scaleform::Memory::pGlobalHeap,
                                          144i64,
                                          0i64);
    if ( v21 )
    {
      Scaleform::GFx::LoadStates::LoadStates(
        v21,
        *(Scaleform::GFx::LoaderImpl **)&puserDef[1].RefCount.Value,
        pstates,
        (Scaleform::GFx::MovieDefBindStates *)puserDef[1].pLib);
      v23 = v22;
    }
    else
    {
      v23 = 0i64;
    }
    Movie_LoadState = Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(
                        v23,
                        pObject,
                        puserDef[3].pLib[2].RefCount | 1u,
                        0i64);
    if ( v23 )
    {
      v24 = (Scaleform::RefCountVImpl *)v23;
LABEL_43:
      Scaleform::RefCountImpl::Release(v24);
    }
  }
  else
  {
    if ( !pweakLib )
      goto LABEL_16;
    v25 = (Scaleform::GFx::LoaderImpl *)Scaleform::Memory::pGlobalHeap->Alloc(
                                          Scaleform::Memory::pGlobalHeap,
                                          128i64,
                                          0i64);
    if ( v25 )
    {
      Scaleform::GFx::LoaderImpl::LoaderImpl(v25, pstates, pweakLib->pStrongLib, 0);
      v27 = v26;
    }
    else
    {
      v27 = 0i64;
    }
    v28 = (Scaleform::GFx::MovieDefBindStates *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  80i64);
    if ( v28 )
    {
      Scaleform::GFx::MovieDefBindStates::MovieDefBindStates(v28, pstates);
      v30 = v29;
    }
    else
    {
      v30 = 0i64;
    }
    v31 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(
                                          Scaleform::Memory::pGlobalHeap,
                                          144i64,
                                          0i64);
    if ( v31 )
    {
      Scaleform::GFx::LoadStates::LoadStates(v31, v27, pstates, v30);
      v33 = v32;
    }
    else
    {
      v33 = 0i64;
    }
    Movie_LoadState = Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(v33, pmd, 1u, 0i64);
    if ( v33 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v33);
    if ( v30 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v30);
    if ( v27 )
    {
      v24 = (Scaleform::RefCountVImpl *)v27;
      goto LABEL_43;
    }
  }
  if ( !Movie_LoadState )
    goto LABEL_16;
  pdata = 0i64;
  if ( !Movie_LoadState->pBindData.pObject->ResourceBinding.Frozen )
  {
    v34 = index;
    goto LABEL_52;
  }
  v34 = index;
  if ( index >= Movie_LoadState->pBindData.pObject->ResourceBinding.ResourceCount )
  {
LABEL_52:
    Scaleform::GFx::ResourceBinding::GetResourceData_Locked(
      &Movie_LoadState->pBindData.pObject->ResourceBinding,
      &pdata,
      v34);
    v36 = (Scaleform::GFx::FontResource *)pdata.pResource.pObject;
    goto LABEL_53;
  }
  v35 = (Scaleform::RefCountVImpl **)&Movie_LoadState->pBindData.pObject->ResourceBinding.pResources[index];
  if ( *v35 )
  {
    Scaleform::Render::RenderBuffer::AddRef(*v35);
    if ( pdata.pResource.pObject )
      Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
  }
  v36 = (Scaleform::GFx::FontResource *)*v35;
  pdata = *(Scaleform::GFx::ResourceBindData *)v35;
LABEL_53:
  if ( v36 )
  {
    Scaleform::GFx::FontLib::FontResult::SetResult(presult, Movie_LoadState, v36);
    v20 = 1;
    if ( pdata.pResource.pObject )
      Scaleform::GFx::Resource::Release(pdata.pResource.pObject);
    goto LABEL_17;
  }
LABEL_16:
  v20 = 0;
LABEL_17:
  if ( Movie_LoadState )
    Scaleform::GFx::Resource::Release(Movie_LoadState);
  return v20;
}

Scaleform::RefCountVImpl *__fastcall Scaleform::GFx::StateBag::GetDefaultFontLibName(Scaleform::GFx::StateBag *this)
{
  Scaleform::RefCountVImpl *result; // rax
  unsigned __int64 v2; // rbx

  result = (Scaleform::RefCountVImpl *)this->GetStateAddRef(this, 21i64);
  if ( result )
  {
    v2 = *(_QWORD *)&result[1].RefCount & 0xFFFFFFFFFFFFFFFCui64;
    Scaleform::RefCountImpl::Release(result);
    return (Scaleform::RefCountVImpl *)(v2 + 12);
  }
  return result;
}

void __fastcall Scaleform::GFx::FontLib::LoadFonts(
        Scaleform::GFx::FontLib *this,
        Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > *fonts)
{
  Scaleform::GFx::FontLibImpl *pImpl; // rax
  unsigned int v5; // esi
  __int64 v6; // rdx
  Scaleform::GFx::MovieDataDef *pObject; // rbx
  const Scaleform::Ptr<Scaleform::Render::Font> *i; // rbx

  pImpl = this->pImpl;
  if ( pImpl )
  {
    v5 = 0;
    if ( pImpl->FontMovies.Data.Size )
    {
      v6 = 0i64;
      do
      {
        pObject = pImpl->FontMovies.Data.Data[v6].pObject;
        Scaleform::GFx::MovieDataDef::LoadTaskData::WaitForLoadFinish(pObject->pData.pObject);
        for ( i = (const Scaleform::Ptr<Scaleform::Render::Font> *)pObject->pData.pObject->BindData.pFonts.Value;
              i;
              i = (const Scaleform::Ptr<Scaleform::Render::Font> *)i[3].pObject )
        {
          Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font>>>>::Set<Scaleform::Ptr<Scaleform::Render::Font>>(
            fonts,
            fonts,
            i + 1);
        }
        pImpl = this->pImpl;
        v6 = ++v5;
      }
      while ( v5 < pImpl->FontMovies.Data.Size );
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                            Scaleform::Memory::pGlobalHeap,
                                                                            Data,
                                                                            8 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                                  Scaleform::Memory::pGlobalHeap,
                                                                                  8 * v5,
                                                                                  &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( i->pObject )
        Scaleform::GFx::Resource::Release(i->pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::StateBag::SetDefaultFontLibName(
        Scaleform::GFx::StateBag *this,
        const char *defaultFontLib)
{
  __int64 v4; // rdi

  v4 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         32i64);
  if ( v4 )
  {
    *(_QWORD *)v4 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &Scaleform::GFx::DefaultFontLibNameState::`vftable';
    *(_DWORD *)(v4 + 16) = 21;
    Scaleform::StringLH::StringLH((Scaleform::StringLH *)(v4 + 24));
    Scaleform::String::operator=((Scaleform::String *)(v4 + 24), defaultFontLib);
  }
  else
  {
    v4 = 0i64;
  }
  this->SetState(this, State_ViewMatrix3D|0x10, (Scaleform::GFx::State *)v4);
  if ( v4 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v4);
}

void __fastcall Scaleform::GFx::FontLib::FontResult::SetResult(
        Scaleform::GFx::FontLib::FontResult *this,
        Scaleform::GFx::MovieDef *pmovieDef,
        Scaleform::GFx::FontResource *pfont)
{
  Scaleform::GFx::FontResource *pFontResource; // rcx

  if ( pmovieDef )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pmovieDef);
  if ( pfont )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfont);
  if ( this->pMovieDef )
    Scaleform::GFx::Resource::Release(this->pMovieDef);
  pFontResource = this->pFontResource;
  if ( pFontResource )
    Scaleform::GFx::Resource::Release(pFontResource);
  this->pMovieDef = pmovieDef;
  this->pFontResource = pfont;
}

