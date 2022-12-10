#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"

Scaleform::GFx::LoadStates::LoadStates(); // 0x140345990
Scaleform::GFx::ImageFileInfo::~ImageFileInfo(); // 0x140345CB0
Scaleform::GFx::LoadStates::LoadStates(Scaleform::GFx::LoaderImpl * pimpl, Scaleform::GFx::StateBag * pstates, Scaleform::GFx::MovieDefBindStates * pbindStates); // 0x140345690
Scaleform::GFx::LoadStates::~LoadStates(); // 0x140345F10
Scaleform::GFx::ImageCreator * Scaleform::GFx::LoadStates::GetLoadTimeImageCreator(unsigned long loadConstants); // 0x140347800
Scaleform::GFx::ImageCreator * Scaleform::GFx::LoadStates::GetImageCreator(); // 0x1403477F0
void Scaleform::GFx::LoadStates::SetRelativePathForDataDef(Scaleform::GFx::MovieDataDef * pdef); // 0x140347A30
Scaleform::File * Scaleform::GFx::LoadStates::OpenFile(const char * pfilename, unsigned long loadConstants); // 0x1403478A0
void Scaleform::GFx::LoadStates::BuildURL(Scaleform::String * pdest, const Scaleform::GFx::URLBuilder::LocationInfo & loc); // 0x140346790
Scaleform::GFx::LoadStates * Scaleform::GFx::LoadStates::CloneForImport(); // 0x1403469C0
bool Scaleform::GFx::LoadStates::SubmitBackgroundTask(Scaleform::GFx::LoaderTask * ptask); // 0x140347A80
Scaleform::GFx::LoadProcess::LoadProcess(Scaleform::GFx::MovieDataDef * pdataDef, Scaleform::GFx::LoadStates * pstates, unsigned long loadFlags); // 0x140345500
Scaleform::GFx::LoadProcess::~LoadProcess(); // 0x140345D30
bool Scaleform::GFx::LoadProcess::BeginSWFLoading(Scaleform::File * pfile); // 0x140346730
void Scaleform::GFx::LoadProcess::ReadRgbaTag(Scaleform::Render::Color * pc, Scaleform::GFx::TagType tagType); // 0x140347940
Scaleform::GFx::TimelineDef::Frame Scaleform::GFx::LoadProcess::TagArrayToFrame(Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > & tagArray); // 0x140347AB0
void Scaleform::GFx::LoadProcess::CommitFrameTags(); // 0x140346BE0
void Scaleform::GFx::LoadProcess::CleanupFrameTags(); // 0x1403467C0
Scaleform::GFx::ResourceHandle Scaleform::GFx::LoadProcess::AddDataResource(Scaleform::GFx::ResourceId rid, const Scaleform::GFx::ResourceData & resData); // 0x140346250
Scaleform::GFx::ResourceHandle Scaleform::GFx::LoadProcess::AddFontDataResource(Scaleform::GFx::ResourceId rid, Scaleform::Render::Font * pfontData); // 0x140346360
void Scaleform::GFx::LoadProcess::AddImportData(Scaleform::GFx::ImportData * pnode); // 0x1403466D0
void Scaleform::GFx::LoadProcess::AddImageResource(Scaleform::GFx::ResourceId rid, Scaleform::Render::ImageSource * pimage); // 0x1403464B0
class Scaleform::Ptr<Scaleform::Render::WrapperImageSource>
{
protected:
	Scaleform::Render::WrapperImageSource * pObject; // 0x0
public:
	Ptr<Scaleform::Render::WrapperImageSource>(const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> &);
	Ptr<Scaleform::Render::WrapperImageSource>(Scaleform::Render::WrapperImageSource *);
	Ptr<Scaleform::Render::WrapperImageSource>(Scaleform::Ptr<Scaleform::Render::WrapperImageSource> &, Scaleform::PickType);
	Ptr<Scaleform::Render::WrapperImageSource>(Scaleform::Pickable<Scaleform::Render::WrapperImageSource>);
	Ptr<Scaleform::Render::WrapperImageSource>(Scaleform::Render::WrapperImageSource &);
	Ptr<Scaleform::Render::WrapperImageSource>();
	~Ptr<Scaleform::Render::WrapperImageSource>();
	bool operator==(Scaleform::Render::WrapperImageSource *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> &);
	bool operator!=(Scaleform::Render::WrapperImageSource *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> &);
	Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & operator=(Scaleform::Pickable<Scaleform::Render::WrapperImageSource>);
	const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & operator=(Scaleform::Render::WrapperImageSource &);
	const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & operator=(Scaleform::Render::WrapperImageSource *);
	const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & operator=(const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> &);
	Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & SetPtr(Scaleform::Pickable<Scaleform::Render::WrapperImageSource>);
	Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & SetPtr(Scaleform::Render::WrapperImageSource &);
	Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & SetPtr(Scaleform::Render::WrapperImageSource *);
	Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & SetPtr(const Scaleform::Ptr<Scaleform::Render::WrapperImageSource> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::WrapperImageSource * & GetRawRef();
	Scaleform::Render::WrapperImageSource * GetPtr();
	Scaleform::Render::WrapperImageSource & operator*();
	Scaleform::Render::WrapperImageSource * operator->();
	Scaleform::Render::WrapperImageSource * operator class Scaleform::Render::WrapperImageSource *();
	Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & Pick(Scaleform::Render::WrapperImageSource *);
	Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & Pick(Scaleform::Pickable<Scaleform::Render::WrapperImageSource>);
	Scaleform::Ptr<Scaleform::Render::WrapperImageSource> & Pick(Scaleform::Ptr<Scaleform::Render::WrapperImageSource> &);
};
Scaleform::GFx::FontResourceCreator Scaleform::GFx::static_inst; // 0x1409F9590
void(*Scaleform::GFx::static_inst$initializer$)(); // 0x140739CC8
Scaleform::GFx::FrameBindData * Scaleform::GFx::LoadProcess::CreateFrameBindData(); // 0x140346D20
bool Scaleform::GFx::ImageFileResourceCreator::CreateResource(void * hdata, Scaleform::GFx::ResourceBindData * pbindData, Scaleform::GFx::LoadStates * pls, Scaleform::MemoryHeap * pbindHeap); // 0x140346F60
class Scaleform::Ptr<Scaleform::GFx::ImageFileInfo>
{
protected:
	Scaleform::GFx::ImageFileInfo * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageFileInfo>(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::GFx::ImageFileInfo *);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Ptr<Scaleform::GFx::ImageFileInfo>(Scaleform::GFx::ImageFileInfo &);
	Ptr<Scaleform::GFx::ImageFileInfo>();
	~Ptr<Scaleform::GFx::ImageFileInfo>();
	bool operator==(Scaleform::GFx::ImageFileInfo *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	bool operator!=(Scaleform::GFx::ImageFileInfo *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::GFx::ImageFileInfo &);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(Scaleform::GFx::ImageFileInfo *);
	const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::GFx::ImageFileInfo &);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(Scaleform::GFx::ImageFileInfo *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageFileInfo * & GetRawRef();
	Scaleform::GFx::ImageFileInfo * GetPtr();
	Scaleform::GFx::ImageFileInfo & operator*();
	Scaleform::GFx::ImageFileInfo * operator->();
	Scaleform::GFx::ImageFileInfo * operator struct Scaleform::GFx::ImageFileInfo *();
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::GFx::ImageFileInfo *);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageFileInfo>);
	Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageFileInfo> &);
};
Scaleform::GFx::ResourceData Scaleform::GFx::ImageFileResourceCreator::CreateImageFileResourceData(Scaleform::GFx::ImageFileInfo * prfi); // 0x140346E00
bool Scaleform::GFx::ImageResourceCreator::CreateResource(void * hdata, Scaleform::GFx::ResourceBindData * pbindData, Scaleform::GFx::LoadStates * pls, Scaleform::MemoryHeap * pbindHeap); // 0x1403474D0
Scaleform::GFx::ResourceData Scaleform::GFx::ImageResourceCreator::CreateImageResourceData(Scaleform::Render::ImageSource * pimage); // 0x140346EA0
bool Scaleform::GFx::SubImageResourceCreator::CreateResource(void * hdata, Scaleform::GFx::ResourceBindData * pbindData, Scaleform::GFx::LoadStates * pls, Scaleform::MemoryHeap * pbindHeap); // 0x140347600
Scaleform::GFx::ResourceData Scaleform::GFx::SubImageResourceCreator::CreateSubImageResourceData(Scaleform::GFx::SubImageResourceInfo * pinfo); // 0x140347710
bool Scaleform::GFx::FontResourceCreator::CreateResource(void * hdata, Scaleform::GFx::ResourceBindData * pbindData, Scaleform::GFx::LoadStates * pls, Scaleform::MemoryHeap * pbindHeap); // 0x140345170//decompilation failure at 1409F9590!
//decompilation failure at 140739CC8!
void __fastcall Scaleform::GFx::ImageFileInfo::ImageFileInfo(
        Scaleform::GFx::ImageFileInfo *this,
        const Scaleform::GFx::ImageFileInfo *other)
{
  this->__vftable = (Scaleform::GFx::ImageFileInfo_vtbl *)&Scaleform::RefCountNTSImplCore::`vftable';
  this->RefCount = other->RefCount;
  this->__vftable = (Scaleform::GFx::ImageFileInfo_vtbl *)&Scaleform::GFx::ResourceFileInfo::`vftable';
  this->Format = other->Format;
  this->pExporterInfo = other->pExporterInfo;
  Scaleform::String::String(&this->FileName, &other->FileName);
  this->__vftable = (Scaleform::GFx::ImageFileInfo_vtbl *)&Scaleform::GFx::ImageFileInfo::`vftable';
  Scaleform::String::String(&this->ExportName);
  this->TargetWidth = other->TargetWidth;
  this->TargetHeight = other->TargetHeight;
  this->Use = other->Use;
}

void __fastcall Scaleform::GFx::ImageResource::ImageResource(
        Scaleform::GFx::ImageResource *this,
        Scaleform::Render::Image *pimage,
        const Scaleform::GFx::ResourceKey *key,
        Scaleform::GFx::Resource::ResourceUse use)
{
  Scaleform::GFx::ImageResource::ImageDelegate *p_Delegate; // rdi
  Scaleform::Render::ImageBase *v9; // rcx
  Scaleform::Render::Image *pObject; // rcx

  this->__vftable = (Scaleform::GFx::ImageResource_vtbl *)&Scaleform::GFx::Resource::`vftable';
  p_Delegate = &this->Delegate;
  this->RefCount.Value = 1;
  this->__vftable = (Scaleform::GFx::ImageResource_vtbl *)&Scaleform::GFx::ImageResource::`vftable';
  this->pLib = 0i64;
  this->pImage = 0i64;
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::Render::Image::`vftable';
  this->Delegate.RefCount = 1;
  this->Delegate.pTexture.Value = 0i64;
  this->Delegate.pUpdateSync = 0i64;
  this->Delegate.pInverseMatrix = 0i64;
  this->Delegate.pImage.pObject = 0i64;
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::GFx::ImageResource::ImageDelegate::`vftable';
  AgPointer<AgController>::AgPointer<AgController>((AgPointer<AgMemoryStream> *)&this->Key);
  v9 = this->pImage;
  if ( v9 && v9 != p_Delegate )
    v9->Release(v9);
  if ( pimage )
    pimage->AddRef(pimage);
  pObject = this->Delegate.pImage.pObject;
  if ( pObject )
    pObject->Release(pObject);
  this->Delegate.pImage.pObject = pimage;
  this->pImage = p_Delegate;
  Scaleform::GFx::ResourceKey::operator=(&this->Key, key);
  this->UseType = use;
}

void __fastcall Scaleform::GFx::LoadProcess::LoadProcess(
        Scaleform::GFx::LoadProcess *this,
        Scaleform::GFx::MovieDataDef *pdataDef,
        Scaleform::GFx::LoadStates *pstates,
        unsigned int loadFlags)
{
  __int64 v8; // rcx
  Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > *FrameTags; // rax
  Scaleform::GFx::ParseControl *pObject; // rax
  unsigned int ParseFlags; // eax
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rcx

  Scaleform::GFx::LoaderTask::LoaderTask(this, pstates, Id_MovieDataLoad);
  this->Scaleform::GFx::LoaderTask::Scaleform::GFx::Task::Scaleform::RefCountBase<Scaleform::GFx::Task,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LoadProcess_vtbl *)&Scaleform::GFx::LoadProcess::`vftable'{for `Scaleform::GFx::LoaderTask'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>_vtbl *)&Scaleform::GFx::LoadProcess::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>'};
  this->pBindProcess.pObject = 0i64;
  this->pLoadData.pObject = 0i64;
  Scaleform::GFx::Stream::Stream(&this->ProcessInfo.Stream, 0i64, pdataDef->pData.pObject->pHeap, 0i64, 0i64);
  Scaleform::GFx::MovieHeaderData::MovieHeaderData(&this->ProcessInfo.Header);
  this->ProcessInfo.FileAttributes = 0;
  v8 = 2i64;
  this->pJpegTables.pObject = 0i64;
  FrameTags = this->FrameTags;
  do
  {
    FrameTags->Data.Data = 0i64;
    FrameTags->Data.Size = 0i64;
    FrameTags->Data.Policy.Capacity = 0i64;
    ++FrameTags;
    --v8;
  }
  while ( v8 );
  this->InitActionTags.Data.Data = 0i64;
  this->InitActionTags.Data.Size = 0i64;
  this->InitActionTags.Data.Policy.Capacity = 0i64;
  pObject = pstates->pParseControl.pObject;
  if ( pObject )
    ParseFlags = pObject->ParseFlags;
  else
    ParseFlags = 0;
  this->ParseFlags = ParseFlags;
  v12 = (Scaleform::RefCountVImpl *)pdataDef->pData.pObject;
  if ( v12 )
    Scaleform::Render::RenderBuffer::AddRef(v12);
  v13 = (Scaleform::RefCountVImpl *)this->pLoadData.pObject;
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  this->pLoadData.pObject = pdataDef->pData.pObject;
  this->pDataDef_Unsafe = pdataDef;
  this->pTimelineDef = 0i64;
  this->LoadFlags = loadFlags;
  this->LoadState = LS_LoadingRoot;
  this->ImportIndex = 0;
  *(_QWORD *)&this->ImportDataCount = 0i64;
  this->FontDataCount = 0;
  this->pImportDataLast = 0i64;
  this->pImportData = 0i64;
  this->pResourceDataLast = 0i64;
  this->pResourceData = 0i64;
  this->pFontDataLast = 0i64;
  this->pFontData = 0i64;
  this->pAltStream = 0i64;
  this->pTempBindData = 0i64;
  this->ASInitActionTagsNum = 0;
}

void __fastcall Scaleform::GFx::LoadStates::LoadStates(
        Scaleform::GFx::LoadStates *this,
        Scaleform::GFx::LoaderImpl *pimpl,
        Scaleform::GFx::StateBag *pstates,
        Scaleform::GFx::MovieDefBindStates *pbindStates)
{
  Scaleform::GFx::MovieDefBindStates *v4; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::ResourceWeakLib *v10; // r14
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::GFx::MovieDefBindStates *v12; // rax
  Scaleform::GFx::MovieDefBindStates *v13; // rax
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::RefCountVImpl **LogState; // rbx
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::RefCountVImpl *v17; // rcx
  Scaleform::RefCountVImpl *v18; // rax
  Scaleform::GFx::ParseControl *v19; // rbx
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rax
  Scaleform::GFx::ProgressHandler *v22; // rbx
  Scaleform::RefCountVImpl *v23; // rcx
  Scaleform::RefCountVImpl *v24; // rax
  Scaleform::GFx::TaskManager *v25; // rbx
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::RefCountVImpl *v27; // rax
  Scaleform::GFx::ImageFileHandlerRegistry *v28; // rbx
  Scaleform::RefCountVImpl *v29; // rcx
  Scaleform::RefCountVImpl *v30; // rax
  Scaleform::GFx::ZlibSupportBase *v31; // rbx
  Scaleform::RefCountVImpl *v32; // rcx
  Scaleform::RefCountVImpl *v33; // rax
  Scaleform::GFx::ASSupport *v34; // rbx
  Scaleform::RefCountVImpl *v35; // rcx
  Scaleform::Ptr<Scaleform::GFx::LogState> result; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0i64;
  this->__vftable = (Scaleform::GFx::LoadStates_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::LoadStates_vtbl *)&Scaleform::GFx::LoadStates::`vftable';
  this->pBindStates.pObject = 0i64;
  this->pLog.pObject = 0i64;
  this->pParseControl.pObject = 0i64;
  this->pProgressHandler.pObject = 0i64;
  this->pTaskManager.pObject = 0i64;
  this->pImageFileHandlerRegistry.pObject = 0i64;
  this->pZlibSupport.pObject = 0i64;
  this->pAS2Support.pObject = 0i64;
  this->pAS3Support.pObject = 0i64;
  this->pWeakResourceLib.pObject = 0i64;
  this->pLoaderImpl.pObject = 0i64;
  Scaleform::String::String(&this->RelativePath);
  this->ThreadedLoading = 0;
  this->SubstituteFontMovieDefs.Data.Data = 0i64;
  this->SubstituteFontMovieDefs.Data.Size = 0i64;
  this->SubstituteFontMovieDefs.Data.Policy.Capacity = 0i64;
  if ( pimpl )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pimpl);
  pObject = (Scaleform::RefCountVImpl *)this->pLoaderImpl.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pLoaderImpl.pObject = pimpl;
  v10 = pimpl->pWeakResourceLib.pObject;
  if ( v10 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pimpl->pWeakResourceLib.pObject);
  v11 = (Scaleform::RefCountVImpl *)this->pWeakResourceLib.pObject;
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  this->pWeakResourceLib.pObject = v10;
  if ( !pstates )
    pstates = &pimpl->Scaleform::GFx::StateBag;
  v12 = (Scaleform::GFx::MovieDefBindStates *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                Scaleform::Memory::pGlobalHeap,
                                                80i64);
  if ( pbindStates )
  {
    if ( !v12 )
      goto LABEL_17;
    Scaleform::GFx::MovieDefBindStates::MovieDefBindStates(v12, pbindStates);
  }
  else
  {
    if ( !v12 )
      goto LABEL_17;
    Scaleform::GFx::MovieDefBindStates::MovieDefBindStates(v12, pstates);
  }
  v4 = v13;
LABEL_17:
  v14 = (Scaleform::RefCountVImpl *)this->pBindStates.pObject;
  if ( v14 )
    Scaleform::RefCountImpl::Release(v14);
  this->pBindStates.pObject = v4;
  LogState = (Scaleform::RefCountVImpl **)Scaleform::GFx::StateBag::GetLogState(pstates, &result);
  if ( *LogState )
    Scaleform::Render::RenderBuffer::AddRef(*LogState);
  v16 = (Scaleform::RefCountVImpl *)this->pLog.pObject;
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
  v17 = (Scaleform::RefCountVImpl *)result.pObject;
  this->pLog.pObject = (Scaleform::GFx::LogState *)*LogState;
  if ( v17 )
    Scaleform::RefCountImpl::Release(v17);
  v18 = (Scaleform::RefCountVImpl *)pstates->GetStateAddRef(pstates, 16i64);
  v19 = (Scaleform::GFx::ParseControl *)v18;
  if ( v18 )
    Scaleform::Render::RenderBuffer::AddRef(v18);
  v20 = (Scaleform::RefCountVImpl *)this->pParseControl.pObject;
  if ( v20 )
    Scaleform::RefCountImpl::Release(v20);
  this->pParseControl.pObject = v19;
  if ( v19 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v19);
  v21 = (Scaleform::RefCountVImpl *)pstates->GetStateAddRef(pstates, 17i64);
  v22 = (Scaleform::GFx::ProgressHandler *)v21;
  if ( v21 )
    Scaleform::Render::RenderBuffer::AddRef(v21);
  v23 = (Scaleform::RefCountVImpl *)this->pProgressHandler.pObject;
  if ( v23 )
    Scaleform::RefCountImpl::Release(v23);
  this->pProgressHandler.pObject = v22;
  if ( v22 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v22);
  v24 = (Scaleform::RefCountVImpl *)pstates->GetStateAddRef(pstates, 24i64);
  v25 = (Scaleform::GFx::TaskManager *)v24;
  if ( v24 )
    Scaleform::Render::RenderBuffer::AddRef(v24);
  v26 = (Scaleform::RefCountVImpl *)this->pTaskManager.pObject;
  if ( v26 )
    Scaleform::RefCountImpl::Release(v26);
  this->pTaskManager.pObject = v25;
  if ( v25 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v25);
  v27 = (Scaleform::RefCountVImpl *)pstates->GetStateAddRef(pstates, 15i64);
  v28 = (Scaleform::GFx::ImageFileHandlerRegistry *)v27;
  if ( v27 )
    Scaleform::Render::RenderBuffer::AddRef(v27);
  v29 = (Scaleform::RefCountVImpl *)this->pImageFileHandlerRegistry.pObject;
  if ( v29 )
    Scaleform::RefCountImpl::Release(v29);
  this->pImageFileHandlerRegistry.pObject = v28;
  if ( v28 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v28);
  v30 = (Scaleform::RefCountVImpl *)pstates->GetStateAddRef(pstates, 29i64);
  v31 = (Scaleform::GFx::ZlibSupportBase *)v30;
  if ( v30 )
    Scaleform::Render::RenderBuffer::AddRef(v30);
  v32 = (Scaleform::RefCountVImpl *)this->pZlibSupport.pObject;
  if ( v32 )
    Scaleform::RefCountImpl::Release(v32);
  this->pZlibSupport.pObject = v31;
  if ( v31 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v31);
  v33 = (Scaleform::RefCountVImpl *)pstates->GetStateAddRef(pstates, 40i64);
  v34 = (Scaleform::GFx::ASSupport *)v33;
  if ( v33 )
    Scaleform::Render::RenderBuffer::AddRef(v33);
  v35 = (Scaleform::RefCountVImpl *)this->pAS3Support.pObject;
  if ( v35 )
    Scaleform::RefCountImpl::Release(v35);
  this->pAS3Support.pObject = v34;
  if ( v34 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v34);
}

void __fastcall Scaleform::GFx::LoadStates::LoadStates(Scaleform::GFx::LoadStates *this)
{
  this->__vftable = (Scaleform::GFx::LoadStates_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::LoadStates_vtbl *)&Scaleform::GFx::LoadStates::`vftable';
  this->pBindStates.pObject = 0i64;
  this->pLog.pObject = 0i64;
  this->pParseControl.pObject = 0i64;
  this->pProgressHandler.pObject = 0i64;
  this->pTaskManager.pObject = 0i64;
  this->pImageFileHandlerRegistry.pObject = 0i64;
  this->pZlibSupport.pObject = 0i64;
  this->pAS2Support.pObject = 0i64;
  this->pAS3Support.pObject = 0i64;
  this->pWeakResourceLib.pObject = 0i64;
  this->pLoaderImpl.pObject = 0i64;
  Scaleform::String::String(&this->RelativePath);
  this->ThreadedLoading = 0;
  this->SubstituteFontMovieDefs.Data.Data = 0i64;
  this->SubstituteFontMovieDefs.Data.Size = 0i64;
  this->SubstituteFontMovieDefs.Data.Policy.Capacity = 0i64;
}

void __fastcall Scaleform::GFx::MovieDefBindStates::MovieDefBindStates(
        Scaleform::GFx::MovieDefBindStates *this,
        Scaleform::GFx::MovieDefBindStates *pother)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::RefCountVImpl *v17; // rcx

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
  pObject = (Scaleform::RefCountVImpl *)pother->pFileOpener.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->pFileOpener.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->pFileOpener.pObject = pother->pFileOpener.pObject;
  v6 = (Scaleform::RefCountVImpl *)pother->pURLBulider.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pURLBulider.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->pURLBulider.pObject = pother->pURLBulider.pObject;
  v8 = (Scaleform::RefCountVImpl *)pother->pImageCreator.pObject;
  if ( v8 )
    Scaleform::Render::RenderBuffer::AddRef(v8);
  v9 = (Scaleform::RefCountVImpl *)this->pImageCreator.pObject;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  this->pImageCreator.pObject = pother->pImageCreator.pObject;
  v10 = (Scaleform::RefCountVImpl *)pother->pImportVisitor.pObject;
  if ( v10 )
    Scaleform::Render::RenderBuffer::AddRef(v10);
  v11 = (Scaleform::RefCountVImpl *)this->pImportVisitor.pObject;
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  this->pImportVisitor.pObject = pother->pImportVisitor.pObject;
  v12 = (Scaleform::RefCountVImpl *)pother->pFontPackParams.pObject;
  if ( v12 )
    Scaleform::Render::RenderBuffer::AddRef(v12);
  v13 = (Scaleform::RefCountVImpl *)this->pFontPackParams.pObject;
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  this->pFontPackParams.pObject = pother->pFontPackParams.pObject;
  v14 = (Scaleform::RefCountVImpl *)pother->pFontCompactorParams.pObject;
  if ( v14 )
    Scaleform::Render::RenderBuffer::AddRef(v14);
  v15 = (Scaleform::RefCountVImpl *)this->pFontCompactorParams.pObject;
  if ( v15 )
    Scaleform::RefCountImpl::Release(v15);
  this->pFontCompactorParams.pObject = pother->pFontCompactorParams.pObject;
  v16 = (Scaleform::RefCountVImpl *)pother->pImagePackParams.pObject;
  if ( v16 )
    Scaleform::Render::RenderBuffer::AddRef(v16);
  v17 = (Scaleform::RefCountVImpl *)this->pImagePackParams.pObject;
  if ( v17 )
    Scaleform::RefCountImpl::Release(v17);
  this->pImagePackParams.pObject = pother->pImagePackParams.pObject;
}

void __fastcall Scaleform::GFx::SubImageResource::SubImageResource(
        Scaleform::GFx::SubImageResource *this,
        Scaleform::GFx::ImageResource *pbase,
        unsigned int *baseid,
        const Scaleform::Render::Rect<unsigned long> *rect)
{
  Scaleform::Render::SubImage *v8; // rax
  Scaleform::Render::Image *v9; // rax
  Scaleform::Render::Image *v10; // rdi
  unsigned int y2; // er8
  unsigned int x2; // edx
  unsigned int y1; // ecx
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 3;
  v8 = (Scaleform::Render::SubImage *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        pbase->pImage,
                                        64i64,
                                        &v14);
  if ( v8 )
  {
    Scaleform::Render::SubImage::SubImage(v8, (Scaleform::Render::Image *)pbase->pImage, rect);
    v10 = v9;
  }
  else
  {
    v10 = 0i64;
  }
  Scaleform::GFx::ImageResource::ImageResource(this, v10, Use_Bitmap);
  if ( v10 )
    v10->Release(v10);
  this->__vftable = (Scaleform::GFx::SubImageResource_vtbl *)&Scaleform::GFx::SubImageResource::`vftable';
  y2 = rect->y2;
  x2 = rect->x2;
  y1 = rect->y1;
  this->Rect.x1 = rect->x1;
  this->Rect.y1 = y1;
  this->Rect.x2 = x2;
  this->Rect.y2 = y2;
  this->BaseImageId.Id = *baseid;
}

void __fastcall Scaleform::Render::WrapperImageSource::WrapperImageSource(
        Scaleform::Render::WrapperImageSource *this,
        Scaleform::Render::Image *pdelegate)
{
  this->__vftable = (Scaleform::Render::WrapperImageSource_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::WrapperImageSource_vtbl *)&Scaleform::Render::WrapperImageSource::`vftable';
  this->RefCount = 1;
  if ( pdelegate )
  {
    pdelegate->AddRef(pdelegate);
    this->pDelegate.pObject = pdelegate;
  }
  else
  {
    this->pDelegate.pObject = 0i64;
  }
}

void __fastcall Scaleform::GFx::ImageFileInfo::~ImageFileInfo(Scaleform::GFx::ImageFileInfo *this)
{
  volatile int *v2; // rbx
  volatile int *v3; // rbx

  v2 = (volatile int *)(this->ExportName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  v3 = (volatile int *)(this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

void __fastcall Scaleform::GFx::LoadProcess::~LoadProcess(Scaleform::GFx::LoadProcess *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v3; // rax
  Scaleform::GFx::LoadUpdateSync *v4; // rsi
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  void *v7; // rbx
  Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > *p_InitActionTags; // rsi
  __int64 v9; // rbx
  Scaleform::GFx::ExecuteTag **Data; // rdx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::String path; // [rsp+30h] [rbp+8h] BYREF

  this->Scaleform::GFx::LoaderTask::Scaleform::GFx::Task::Scaleform::RefCountBase<Scaleform::GFx::Task,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LoadProcess_vtbl *)&Scaleform::GFx::LoadProcess::`vftable'{for `Scaleform::GFx::LoaderTask'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>_vtbl *)&Scaleform::GFx::LoadProcess::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>'};
  Scaleform::String::String(
    &path,
    (const char *)((this->pLoadData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
  if ( Scaleform::GFx::URLBuilder::IsProtocol(&path) )
    Scaleform::GFx::LoaderImpl::LoadingDone(
      this->pLoadStates.pObject->pLoaderImpl.pObject,
      (const char *)((path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
  pObject = (Scaleform::RefCountVImpl *)this->pJpegTables.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pJpegTables.pObject = 0i64;
  v3 = this->pLoadData.pObject;
  v4 = v3->pFrameUpdate.pObject;
  if ( v4 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v3->pFrameUpdate.pObject);
  Scaleform::GFx::Stream::ShutDown(&this->ProcessInfo.Stream);
  v5 = (Scaleform::RefCountVImpl *)this->pLoadData.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->pLoadData.pObject = 0i64;
  v6 = (Scaleform::RefCountVImpl *)this->pBindProcess.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  this->pBindProcess.pObject = 0i64;
  if ( v4 )
  {
    Scaleform::Mutex::DoLock(&v4->mMutex);
    v4->LoadFinished = 1;
    Scaleform::WaitCondition::NotifyAll(&v4->WC);
    Scaleform::Mutex::Unlock(&v4->mMutex);
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v4);
  }
  v7 = (void *)(path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  p_InitActionTags = &this->InitActionTags;
  if ( this->InitActionTags.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v9 = 2i64;
  do
  {
    Data = p_InitActionTags[-1].Data.Data;
    --p_InitActionTags;
    --v9;
    if ( Data )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
  while ( v9 );
  v11 = (Scaleform::RefCountVImpl *)this->pJpegTables.pObject;
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  Scaleform::GFx::ExporterInfoImpl::~ExporterInfoImpl(&this->ProcessInfo.Header.mExporterInfo);
  Scaleform::GFx::Stream::~Stream(&this->ProcessInfo.Stream);
  v12 = (Scaleform::RefCountVImpl *)this->pLoadData.pObject;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  v13 = (Scaleform::RefCountVImpl *)this->pBindProcess.pObject;
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  this->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>_vtbl *)&Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::`vftable';
  Scaleform::GFx::LoaderTask::~LoaderTask(this);
}

void __fastcall Scaleform::GFx::LoadStates::~LoadStates(Scaleform::GFx::LoadStates *this)
{
  unsigned __int64 Size; // rsi
  Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *i; // rbx
  volatile int *v4; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::RefCountVImpl *v15; // rcx

  this->__vftable = (Scaleform::GFx::LoadStates_vtbl *)&Scaleform::GFx::LoadStates::`vftable';
  Size = this->SubstituteFontMovieDefs.Data.Size;
  for ( i = &this->SubstituteFontMovieDefs.Data.Data[Size - 1]; Size; --Size )
  {
    if ( i->pObject )
      Scaleform::GFx::Resource::Release(i->pObject);
    --i;
  }
  if ( this->SubstituteFontMovieDefs.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v4 = (volatile int *)(this->RelativePath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
  pObject = (Scaleform::RefCountVImpl *)this->pLoaderImpl.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v6 = (Scaleform::RefCountVImpl *)this->pWeakResourceLib.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pAS3Support.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  v8 = (Scaleform::RefCountVImpl *)this->pAS2Support.pObject;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  v9 = (Scaleform::RefCountVImpl *)this->pZlibSupport.pObject;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  v10 = (Scaleform::RefCountVImpl *)this->pImageFileHandlerRegistry.pObject;
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  v11 = (Scaleform::RefCountVImpl *)this->pTaskManager.pObject;
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  v12 = (Scaleform::RefCountVImpl *)this->pProgressHandler.pObject;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  v13 = (Scaleform::RefCountVImpl *)this->pParseControl.pObject;
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  v14 = (Scaleform::RefCountVImpl *)this->pLog.pObject;
  if ( v14 )
    Scaleform::RefCountImpl::Release(v14);
  v15 = (Scaleform::RefCountVImpl *)this->pBindStates.pObject;
  if ( v15 )
    Scaleform::RefCountImpl::Release(v15);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::GFx::ResourceHandle *__fastcall Scaleform::GFx::LoadProcess::AddDataResource(
        Scaleform::GFx::LoadProcess *this,
        Scaleform::GFx::ResourceHandle *result,
        unsigned int *rid,
        const Scaleform::GFx::ResourceData *resData)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v8; // rsi
  unsigned __int64 BytesLeft; // rdx
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx
  Scaleform::GFx::ResourceDataNode *pCurrent; // rbx
  Scaleform::GFx::ResourceId rida; // [rsp+40h] [rbp+8h] BYREF

  pObject = this->pLoadData.pObject;
  rida.Id = *rid;
  Scaleform::GFx::MovieDataDef::LoadTaskData::AddNewResourceHandle(pObject, result, (Scaleform::GFx::ResourceId)&rida);
  v8 = this->pLoadData.pObject;
  BytesLeft = v8->TagMemAllocator.BytesLeft;
  p_TagMemAllocator = &v8->TagMemAllocator;
  if ( BytesLeft < 0x20 )
  {
    pCurrent = (Scaleform::GFx::ResourceDataNode *)Scaleform::GFx::DataAllocator::OverflowAlloc(
                                                     p_TagMemAllocator,
                                                     0x20ui64);
  }
  else
  {
    pCurrent = (Scaleform::GFx::ResourceDataNode *)p_TagMemAllocator->pCurrent;
    p_TagMemAllocator->pCurrent += 32;
    v8->TagMemAllocator.BytesLeft = BytesLeft - 32;
  }
  if ( pCurrent )
  {
    pCurrent->Data.pInterface = 0i64;
    pCurrent->Data.hData = 0i64;
    pCurrent->pNext.Value = 0i64;
    if ( resData->pInterface )
      resData->pInterface->AddRef(resData->pInterface, resData->hData);
    if ( pCurrent->Data.pInterface )
      pCurrent->Data.pInterface->Release(pCurrent->Data.pInterface, pCurrent->Data.hData);
    pCurrent->Data.pInterface = resData->pInterface;
    pCurrent->Data.hData = resData->hData;
    pCurrent->BindIndex = result->BindIndex;
    if ( !this->pResourceData )
      this->pResourceData = pCurrent;
    if ( v8->BindData.pResourceNodes.Value )
      v8->BindData.pResourceNodesLast->pNext.Value = pCurrent;
    else
      v8->BindData.pResourceNodes.Value = pCurrent;
    v8->BindData.pResourceNodesLast = pCurrent;
    ++this->ResourceDataCount;
  }
  return result;
}

Scaleform::GFx::ResourceHandle *__fastcall Scaleform::GFx::LoadProcess::AddFontDataResource(
        Scaleform::GFx::LoadProcess *this,
        Scaleform::GFx::ResourceHandle *result,
        unsigned int *rid,
        Scaleform::Render::Font *pfontData)
{
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx
  unsigned __int64 BytesLeft; // rdx
  Scaleform::GFx::FontDataUseNode *pCurrent; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rdi
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::GFx::ResourceData resData; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceId rida; // [rsp+60h] [rbp+8h] BYREF

  Scaleform::GFx::static_inst.AddRef(&Scaleform::GFx::static_inst, pfontData);
  rida.Id = *rid;
  resData.pInterface = &Scaleform::GFx::static_inst;
  resData.hData = pfontData;
  Scaleform::GFx::LoadProcess::AddDataResource(this, result, &rida.Id, &resData);
  p_TagMemAllocator = &this->pLoadData.pObject->TagMemAllocator;
  BytesLeft = this->pLoadData.pObject->TagMemAllocator.BytesLeft;
  if ( BytesLeft < 0x20 )
  {
    pCurrent = (Scaleform::GFx::FontDataUseNode *)Scaleform::GFx::DataAllocator::OverflowAlloc(
                                                    p_TagMemAllocator,
                                                    0x20ui64);
  }
  else
  {
    pCurrent = (Scaleform::GFx::FontDataUseNode *)p_TagMemAllocator->pCurrent;
    p_TagMemAllocator->pCurrent += 32;
    p_TagMemAllocator->BytesLeft = BytesLeft - 32;
  }
  if ( pCurrent )
  {
    pCurrent->Id.Id = 0x40000;
    pCurrent->pFontData.pObject = 0i64;
    pCurrent->BindIndex = 0;
    pCurrent->pNext.Value = 0i64;
    pObject = this->pLoadData.pObject;
    pCurrent->Id.Id = *rid;
    if ( pfontData )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfontData);
    v12 = (Scaleform::RefCountVImpl *)pCurrent->pFontData.pObject;
    if ( v12 )
      Scaleform::RefCountImpl::Release(v12);
    pCurrent->pFontData.pObject = pfontData;
    pCurrent->BindIndex = result->BindIndex;
    if ( !this->pFontData )
      this->pFontData = pCurrent;
    if ( pObject->BindData.pFonts.Value )
      pObject->BindData.pFontsLast->pNext.Value = pCurrent;
    else
      pObject->BindData.pFonts.Value = pCurrent;
    pObject->BindData.pFontsLast = pCurrent;
    ++this->FontDataCount;
  }
  Scaleform::GFx::static_inst.Release(&Scaleform::GFx::static_inst, pfontData);
  return result;
}

void __fastcall Scaleform::GFx::LoadProcess::AddImageResource(
        Scaleform::GFx::LoadProcess *this,
        unsigned int *rid,
        Scaleform::Render::ImageSource *pimage)
{
  Scaleform::GFx::ImageCreator *v6; // rcx
  Scaleform::GFx::ImageCreator_vtbl *v7; // rax
  Scaleform::Render::Image *v8; // rbx
  Scaleform::GFx::ImageResource *v9; // rax
  Scaleform::GFx::Resource *v10; // rax
  Scaleform::GFx::Resource *v11; // rdi
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::Render::Image *v13; // rbx
  Scaleform::Render::WrapperImageSource *v14; // rax
  Scaleform::Render::ImageSource *v15; // rax
  Scaleform::Render::ImageSource *v16; // rdi
  Scaleform::GFx::ResourceData result; // [rsp+20h] [rbp-49h] BYREF
  char v18[40]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v19; // [rsp+58h] [rbp-11h]
  Scaleform::GFx::ResourceHandle v20; // [rsp+68h] [rbp-1h] BYREF
  Scaleform::GFx::ImageCreateInfo info; // [rsp+78h] [rbp+Fh] BYREF
  Scaleform::GFx::ResourceId rida; // [rsp+E0h] [rbp+77h] BYREF

  if ( pimage )
  {
    if ( SLOBYTE(this->LoadFlags) >= 0
      && (v6 = this->pLoadStates.pObject->pBindStates.pObject->pImageCreator.pObject) != 0i64 )
    {
      v7 = v6->__vftable;
      *(_QWORD *)&v18[8] = this->pLoadData.pObject->pHeap;
      *(_DWORD *)v18 = 1;
      *(_DWORD *)&v18[16] = 1;
      *(_DWORD *)&v18[20] = 1;
      *(_OWORD *)&v18[24] = 0i64;
      v19 = 0i64;
      v8 = (Scaleform::Render::Image *)((__int64 (__fastcall *)(Scaleform::GFx::ImageCreator *, char *))v7->CreateImage)(
                                         v6,
                                         v18);
      v9 = (Scaleform::GFx::ImageResource *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&v18[8] + 80i64))(
                                              *(_QWORD *)&v18[8],
                                              104i64);
      if ( v9 )
      {
        Scaleform::GFx::ImageResource::ImageResource(v9, v8, Use_Bitmap);
        v11 = v10;
      }
      else
      {
        v11 = 0i64;
      }
      if ( this->LoadState == LS_LoadingRoot )
      {
        pObject = this->pLoadData.pObject;
        rida.Id = *rid;
        Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(pObject, (Scaleform::GFx::ResourceId)&rida, v11);
      }
      if ( v11 )
        Scaleform::GFx::Resource::Release(v11);
      if ( v8 )
        v8->Release(v8);
    }
    else
    {
      info.pHeap = this->pLoadData.pObject->pHeap;
      info.Type = Create_FileImage;
      info.Use = 1;
      info.RUse = Use_Bitmap;
      memset(&info.pLog, 0, 32);
      Scaleform::GFx::ImageCreator::ImageCreator((Scaleform::GFx::ImageCreator *)v18, 0i64);
      v13 = Scaleform::GFx::ImageCreator::CreateImage((Scaleform::GFx::ImageCreator *)v18, &info, pimage);
      v14 = (Scaleform::Render::WrapperImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))info.pHeap->Alloc)(
                                                       info.pHeap,
                                                       24i64);
      if ( v14 )
      {
        Scaleform::Render::WrapperImageSource::WrapperImageSource(v14, v13);
        v16 = v15;
      }
      else
      {
        v16 = 0i64;
      }
      Scaleform::GFx::ImageResourceCreator::CreateImageResourceData(&result, v16);
      rida.Id = *rid;
      Scaleform::GFx::LoadProcess::AddDataResource(this, &v20, &rida.Id, &result);
      if ( v20.HType == RH_Pointer && v20.pResource )
        Scaleform::GFx::Resource::Release(v20.pResource);
      if ( result.pInterface )
        result.pInterface->Release(result.pInterface, result.hData);
      if ( v16 )
        v16->Release(v16);
      if ( v13 )
        v13->Release(v13);
      if ( *(_QWORD *)&v18[24] )
        Scaleform::RefCountImpl::Release(*(Scaleform::RefCountVImpl **)&v18[24]);
      *(_QWORD *)v18 = &Scaleform::GFx::State::`vftable';
      Scaleform::RefCountImplCore::~RefCountImplCore((Scaleform::RefCountImplCore *)v18);
    }
  }
}

void __fastcall Scaleform::GFx::LoadProcess::AddImportData(
        Scaleform::GFx::LoadProcess *this,
        Scaleform::GFx::ImportData *pnode)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // r8

  pnode->ImportIndex = this->ImportIndex++;
  if ( !this->pImportData )
    this->pImportData = pnode;
  pObject = this->pLoadData.pObject;
  if ( pObject->BindData.pImports.Value )
    pObject->BindData.pImportsLast->pNext.Value = pnode;
  else
    pObject->BindData.pImports.Value = pnode;
  pObject->BindData.pImportsLast = pnode;
  ++this->ImportDataCount;
}

void __fastcall Scaleform::GFx::ImageFileKeyInterface::AddRef(
        Scaleform::Render::StateData::Interface_RefCountImpl *this,
        void *data,
        Scaleform::Render::StateData::Interface::RefBehaviour __formal)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)data);
}

bool __fastcall Scaleform::GFx::LoadProcess::BeginSWFLoading(Scaleform::GFx::LoadProcess *this, Scaleform::File *pfile)
{
  bool result; // al

  result = Scaleform::GFx::SWFProcessInfo::Initialize(
             &this->ProcessInfo,
             pfile,
             this->pLoadStates.pObject->pLog.pObject,
             this->pLoadStates.pObject->pZlibSupport.pObject,
             this->pLoadStates.pObject->pParseControl.pObject,
             1);
  if ( result )
  {
    this->pLoadData.pObject->FileAttributes = this->ProcessInfo.FileAttributes;
    Scaleform::GFx::MovieDataDef::LoadTaskData::BeginSWFLoading(this->pLoadData.pObject, &this->ProcessInfo.Header);
    return 1;
  }
  return result;
}

void __fastcall Scaleform::GFx::LoadStates::BuildURL(
        Scaleform::GFx::LoadStates *this,
        Scaleform::String *pdest,
        const Scaleform::GFx::URLBuilder::LocationInfo *loc)
{
  Scaleform::GFx::URLBuilder *pObject; // rcx

  pObject = this->pBindStates.pObject->pURLBulider.pObject;
  if ( pObject )
    ((void (__fastcall *)(Scaleform::GFx::URLBuilder *, Scaleform::String *, const Scaleform::GFx::URLBuilder::LocationInfo *, Scaleform::String *))pObject->BuildURL)(
      pObject,
      pdest,
      loc,
      pdest);
  else
    Scaleform::GFx::URLBuilder::DefaultBuildURL(pdest, loc);
}

void __fastcall Scaleform::GFx::LoadProcess::CleanupFrameTags(Scaleform::GFx::LoadProcess *this)
{
  unsigned __int64 i; // rdi
  Scaleform::GFx::ExecuteTag *v3; // rcx
  unsigned __int64 j; // rdi
  Scaleform::GFx::ExecuteTag *v5; // rcx
  unsigned __int64 k; // rdi
  Scaleform::GFx::ExecuteTag *v7; // rcx
  unsigned __int64 Capacity; // rax
  Scaleform::GFx::ExecuteTag **Data; // rdx
  Scaleform::GFx::ExecuteTag **v10; // rax
  unsigned __int64 v11; // rax
  Scaleform::GFx::ExecuteTag **v12; // rdx
  Scaleform::GFx::ExecuteTag **v13; // rax
  unsigned __int64 v14; // rax
  Scaleform::GFx::ExecuteTag **v15; // rdx
  Scaleform::GFx::ExecuteTag **v16; // rax
  int v17; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0i64; i < this->FrameTags[1].Data.Size; ++i )
  {
    v3 = this->FrameTags[1].Data.Data[i];
    ((void (__fastcall *)(Scaleform::GFx::ExecuteTag *, _QWORD))v3->~ExecuteTag)(v3, 0i64);
  }
  for ( j = 0i64; j < this->FrameTags[0].Data.Size; ++j )
  {
    v5 = this->FrameTags[0].Data.Data[j];
    ((void (__fastcall *)(Scaleform::GFx::ExecuteTag *, _QWORD))v5->~ExecuteTag)(v5, 0i64);
  }
  for ( k = 0i64; k < this->InitActionTags.Data.Size; ++k )
  {
    v7 = this->InitActionTags.Data.Data[k];
    ((void (__fastcall *)(Scaleform::GFx::ExecuteTag *, _QWORD))v7->~ExecuteTag)(v7, 0i64);
  }
  if ( this->FrameTags[1].Data.Size )
  {
    Capacity = this->FrameTags[1].Data.Policy.Capacity;
    if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    {
      if ( Capacity )
      {
        Data = this->FrameTags[1].Data.Data;
        if ( Data )
        {
          v10 = (Scaleform::GFx::ExecuteTag **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 Data,
                                                 256i64);
        }
        else
        {
          v17 = 2;
          v10 = (Scaleform::GFx::ExecuteTag **)Scaleform::Memory::pGlobalHeap->Alloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 256i64,
                                                 &v17);
        }
        this->FrameTags[1].Data.Data = v10;
        this->FrameTags[1].Data.Policy.Capacity = 32i64;
      }
    }
  }
  this->FrameTags[1].Data.Size = 0i64;
  if ( this->FrameTags[0].Data.Size )
  {
    v11 = this->FrameTags[0].Data.Policy.Capacity;
    if ( (v11 & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    {
      if ( v11 )
      {
        v12 = this->FrameTags[0].Data.Data;
        if ( v12 )
        {
          v13 = (Scaleform::GFx::ExecuteTag **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 v12,
                                                 256i64);
        }
        else
        {
          v17 = 2;
          v13 = (Scaleform::GFx::ExecuteTag **)Scaleform::Memory::pGlobalHeap->Alloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 256i64,
                                                 &v17);
        }
        this->FrameTags[0].Data.Data = v13;
        this->FrameTags[0].Data.Policy.Capacity = 32i64;
      }
    }
  }
  this->FrameTags[0].Data.Size = 0i64;
  if ( this->InitActionTags.Data.Size )
  {
    v14 = this->InitActionTags.Data.Policy.Capacity;
    if ( (v14 & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    {
      if ( v14 )
      {
        v15 = this->InitActionTags.Data.Data;
        if ( v15 )
        {
          v16 = (Scaleform::GFx::ExecuteTag **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 v15,
                                                 256i64);
        }
        else
        {
          v17 = 2;
          v16 = (Scaleform::GFx::ExecuteTag **)Scaleform::Memory::pGlobalHeap->Alloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 256i64,
                                                 &v17);
        }
        this->InitActionTags.Data.Data = v16;
        this->InitActionTags.Data.Policy.Capacity = 32i64;
      }
    }
  }
  this->InitActionTags.Data.Size = 0i64;
}

Scaleform::GFx::LoadStates *__fastcall Scaleform::GFx::LoadStates::CloneForImport(Scaleform::GFx::LoadStates *this)
{
  Scaleform::GFx::MovieDefBindStates *v2; // rax
  _QWORD *v3; // rbx
  Scaleform::RefCountVImpl *v4; // rax
  Scaleform::RefCountVImpl *v5; // rsi
  Scaleform::GFx::LoadStates *v6; // rax
  _QWORD *v7; // rax
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::RefCountVImpl *v17; // rcx
  Scaleform::RefCountVImpl *v18; // rcx
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::RefCountVImpl *v22; // rcx
  Scaleform::RefCountVImpl *v23; // rcx
  Scaleform::RefCountVImpl *v24; // rcx
  Scaleform::RefCountVImpl *v25; // rcx
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::RefCountVImpl *v27; // rcx
  Scaleform::RefCountVImpl *v28; // rcx

  v2 = (Scaleform::GFx::MovieDefBindStates *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                               Scaleform::Memory::pGlobalHeap,
                                               80i64);
  v3 = 0i64;
  if ( v2 )
  {
    Scaleform::GFx::MovieDefBindStates::MovieDefBindStates(v2, this->pBindStates.pObject);
    v5 = v4;
  }
  else
  {
    v5 = 0i64;
  }
  v6 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 144i64, 0i64);
  if ( v6 )
  {
    Scaleform::GFx::LoadStates::LoadStates(v6);
    v3 = v7;
    if ( v7 )
    {
      if ( v5 )
        Scaleform::Render::RenderBuffer::AddRef(v5);
      v8 = (Scaleform::RefCountVImpl *)v3[2];
      if ( v8 )
        Scaleform::RefCountImpl::Release(v8);
      v3[2] = v5;
      pObject = (Scaleform::RefCountVImpl *)this->pLoaderImpl.pObject;
      if ( pObject )
        Scaleform::Render::RenderBuffer::AddRef(pObject);
      v10 = (Scaleform::RefCountVImpl *)v3[12];
      if ( v10 )
        Scaleform::RefCountImpl::Release(v10);
      v3[12] = this->pLoaderImpl.pObject;
      v11 = (Scaleform::RefCountVImpl *)this->pLog.pObject;
      if ( v11 )
        Scaleform::Render::RenderBuffer::AddRef(v11);
      v12 = (Scaleform::RefCountVImpl *)v3[3];
      if ( v12 )
        Scaleform::RefCountImpl::Release(v12);
      v3[3] = this->pLog.pObject;
      v13 = (Scaleform::RefCountVImpl *)this->pProgressHandler.pObject;
      if ( v13 )
        Scaleform::Render::RenderBuffer::AddRef(v13);
      v14 = (Scaleform::RefCountVImpl *)v3[5];
      if ( v14 )
        Scaleform::RefCountImpl::Release(v14);
      v3[5] = this->pProgressHandler.pObject;
      v15 = (Scaleform::RefCountVImpl *)this->pTaskManager.pObject;
      if ( v15 )
        Scaleform::Render::RenderBuffer::AddRef(v15);
      v16 = (Scaleform::RefCountVImpl *)v3[6];
      if ( v16 )
        Scaleform::RefCountImpl::Release(v16);
      v3[6] = this->pTaskManager.pObject;
      v17 = (Scaleform::RefCountVImpl *)this->pParseControl.pObject;
      if ( v17 )
        Scaleform::Render::RenderBuffer::AddRef(v17);
      v18 = (Scaleform::RefCountVImpl *)v3[4];
      if ( v18 )
        Scaleform::RefCountImpl::Release(v18);
      v3[4] = this->pParseControl.pObject;
      v19 = (Scaleform::RefCountVImpl *)this->pWeakResourceLib.pObject;
      if ( v19 )
        Scaleform::Render::RenderBuffer::AddRef(v19);
      v20 = (Scaleform::RefCountVImpl *)v3[11];
      if ( v20 )
        Scaleform::RefCountImpl::Release(v20);
      v3[11] = this->pWeakResourceLib.pObject;
      v21 = (Scaleform::RefCountVImpl *)this->pImageFileHandlerRegistry.pObject;
      if ( v21 )
        Scaleform::Render::RenderBuffer::AddRef(v21);
      v22 = (Scaleform::RefCountVImpl *)v3[7];
      if ( v22 )
        Scaleform::RefCountImpl::Release(v22);
      v3[7] = this->pImageFileHandlerRegistry.pObject;
      v23 = (Scaleform::RefCountVImpl *)this->pZlibSupport.pObject;
      if ( v23 )
        Scaleform::Render::RenderBuffer::AddRef(v23);
      v24 = (Scaleform::RefCountVImpl *)v3[8];
      if ( v24 )
        Scaleform::RefCountImpl::Release(v24);
      v3[8] = this->pZlibSupport.pObject;
      v25 = (Scaleform::RefCountVImpl *)this->pAS2Support.pObject;
      if ( v25 )
        Scaleform::Render::RenderBuffer::AddRef(v25);
      v26 = (Scaleform::RefCountVImpl *)v3[9];
      if ( v26 )
        Scaleform::RefCountImpl::Release(v26);
      v3[9] = this->pAS2Support.pObject;
      v27 = (Scaleform::RefCountVImpl *)this->pAS3Support.pObject;
      if ( v27 )
        Scaleform::Render::RenderBuffer::AddRef(v27);
      v28 = (Scaleform::RefCountVImpl *)v3[10];
      if ( v28 )
        Scaleform::RefCountImpl::Release(v28);
      v3[10] = this->pAS3Support.pObject;
    }
  }
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  return (Scaleform::GFx::LoadStates *)v3;
}

void __fastcall Scaleform::GFx::LoadProcess::CommitFrameTags(Scaleform::GFx::LoadProcess *this)
{
  __int64 LoadState; // rcx
  Scaleform::GFx::LoadStates *pObject; // rax
  Scaleform::GFx::LogState *v4; // rdi
  Scaleform::GFx::TimelineIODef_vtbl *v5; // rbx
  Scaleform::GFx::TimelineDef::Frame *v6; // rax
  Scaleform::GFx::LogState *v7; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *v8; // rsi
  Scaleform::GFx::MovieDataDef::LoadTaskData_vtbl *v9; // rdi
  Scaleform::GFx::TimelineDef::Frame *v10; // rax
  Scaleform::GFx::MovieDataDef::LoadTaskData *v11; // rsi
  Scaleform::GFx::LogState *v12; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData_vtbl *v13; // rdi
  Scaleform::GFx::TimelineDef::Frame *v14; // rax
  Scaleform::GFx::TimelineDef::Frame result; // [rsp+20h] [rbp-18h] BYREF

  LoadState = this->LoadState;
  pObject = this->pLoadStates.pObject;
  if ( (_DWORD)LoadState == 1 )
  {
    v4 = pObject->pLog.pObject;
    v5 = this->pTimelineDef->__vftable;
    v6 = Scaleform::GFx::LoadProcess::TagArrayToFrame(this, &result, &this->FrameTags[1]);
    v5->SetLoadingPlaylistFrame(this->pTimelineDef, v6, v4);
  }
  else
  {
    v7 = pObject->pLog.pObject;
    v8 = this->pLoadData.pObject;
    v9 = v8->__vftable;
    v10 = Scaleform::GFx::LoadProcess::TagArrayToFrame(
            this,
            &result,
            (Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > *)((char *)this->FrameTags + 16 * LoadState + 8 * LoadState));
    v9->SetLoadingPlaylistFrame(v8, v10, v7);
    v11 = this->pLoadData.pObject;
    v12 = this->pLoadStates.pObject->pLog.pObject;
    v13 = v11->__vftable;
    v14 = Scaleform::GFx::LoadProcess::TagArrayToFrame(this, &result, &this->InitActionTags);
    v13->SetLoadingInitActionFrame(v11, v14, v12);
  }
}

Scaleform::Render::Image *__fastcall Scaleform::Render::WrapperImageSource::CreateCompatibleImage(
        Scaleform::Render::WrapperImageSource *this,
        const Scaleform::Render::ImageCreateArgs *args)
{
  if ( !((unsigned __int8 (__fastcall *)(Scaleform::Render::WrapperImageSource *))this->IsDecodeOnlyImageCompatible)(this) )
    return Scaleform::Render::ImageSource::CreateCompatibleImage(this, args);
  this->pDelegate.pObject->AddRef(this->pDelegate.pObject);
  return this->pDelegate.pObject;
}

Scaleform::GFx::FrameBindData *__fastcall Scaleform::GFx::LoadProcess::CreateFrameBindData(
        Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::DataAllocator *p_TagMemAllocator; // rcx
  unsigned __int64 BytesLeft; // r8
  unsigned __int8 *pCurrent; // rdx
  Scaleform::GFx::FrameBindData *result; // rax

  p_TagMemAllocator = &this->pLoadData.pObject->TagMemAllocator;
  BytesLeft = p_TagMemAllocator->BytesLeft;
  if ( BytesLeft < 0x38 )
  {
    pCurrent = (unsigned __int8 *)Scaleform::GFx::DataAllocator::OverflowAlloc(p_TagMemAllocator, 0x38ui64);
  }
  else
  {
    pCurrent = p_TagMemAllocator->pCurrent;
    p_TagMemAllocator->pCurrent += 56;
    p_TagMemAllocator->BytesLeft = BytesLeft - 56;
  }
  if ( !pCurrent )
    return 0i64;
  *(_QWORD *)pCurrent = 0i64;
  *((_QWORD *)pCurrent + 1) = 0i64;
  *((_DWORD *)pCurrent + 4) = 0;
  *((_QWORD *)pCurrent + 3) = 0i64;
  *((_QWORD *)pCurrent + 4) = 0i64;
  *((_QWORD *)pCurrent + 5) = 0i64;
  *((_QWORD *)pCurrent + 6) = 0i64;
  *((_DWORD *)pCurrent + 3) = this->ImportDataCount;
  *((_QWORD *)pCurrent + 3) = this->pImportData;
  *((_DWORD *)pCurrent + 2) = this->FontDataCount;
  result = (Scaleform::GFx::FrameBindData *)pCurrent;
  *((_QWORD *)pCurrent + 4) = this->pFontData;
  *((_DWORD *)pCurrent + 4) = this->ResourceDataCount;
  *((_QWORD *)pCurrent + 5) = this->pResourceData;
  *(_QWORD *)&this->ImportDataCount = 0i64;
  this->FontDataCount = 0;
  this->pImportData = 0i64;
  this->pResourceData = 0i64;
  this->pFontData = 0i64;
  return result;
}

Scaleform::GFx::ResourceData *__fastcall Scaleform::GFx::ImageFileResourceCreator::CreateImageFileResourceData(
        Scaleform::GFx::ResourceData *result,
        Scaleform::GFx::ImageFileInfo *prfi)
{
  Scaleform::GFx::ResourceData *v4; // rax

  if ( dword_140A72348 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A72348);
    if ( dword_140A72348 == -1 )
    {
      atexit(Scaleform::GFx::ImageFileResourceCreator::CreateImageFileResourceData_::_2_::_dynamic_atexit_destructor_for__inst__);
      Init_thread_footer(&dword_140A72348);
    }
  }
  inst.AddRef(&inst, prfi);
  result->pInterface = &inst;
  v4 = result;
  result->hData = prfi;
  return v4;
}

Scaleform::GFx::ResourceData *__fastcall Scaleform::GFx::ImageResourceCreator::CreateImageResourceData(
        Scaleform::GFx::ResourceData *result,
        Scaleform::Render::ImageSource *pimage)
{
  Scaleform::GFx::ResourceData *v4; // rax

  if ( dword_140A7234C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A7234C);
    if ( dword_140A7234C == -1 )
    {
      atexit(Scaleform::GFx::ImageResourceCreator::CreateImageResourceData_::_2_::_dynamic_atexit_destructor_for__inst__);
      Init_thread_footer(&dword_140A7234C);
    }
  }
  if ( pimage )
  {
    inst_0.AddRef(&inst_0, pimage);
    result->pInterface = &inst_0;
    v4 = result;
    result->hData = pimage;
  }
  else
  {
    result->pInterface = 0i64;
    result->hData = 0i64;
    return result;
  }
  return v4;
}

bool __fastcall Scaleform::GFx::FontResourceCreator::CreateResource(
        Scaleform::GFx::FontResourceCreator *this,
        void *hdata,
        Scaleform::GFx::ResourceBindData *pbindData,
        Scaleform::GFx::LoadStates *pls,
        Scaleform::MemoryHeap *pbindHeap)
{
  Scaleform::GFx::Resource *v5; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rcx
  Scaleform::GFx::MovieDefImpl *pObject; // r12
  Scaleform::GFx::FontDataUseNode *volatile Value; // rbx
  Scaleform::Render::Font *v13; // rsi
  int v14; // edi
  const char *v15; // rsi
  int v16; // edx
  const char *v17; // rax
  bool v18; // zf
  Scaleform::GFx::FontResource *v19; // rax
  Scaleform::GFx::Resource *v20; // rax
  unsigned int BindIndex; // er8
  __int64 v23; // rbx

  v5 = 0i64;
  v9 = 0;
  if ( pls->SubstituteFontMovieDefs.Data.Size )
  {
    v10 = 0i64;
    while ( 1 )
    {
      pObject = pls->SubstituteFontMovieDefs.Data.Data[v10].pObject;
      Value = pObject->pBindData.pObject->pDataDef.pObject->pData.pObject->BindData.pFonts.Value;
      if ( Value )
        break;
LABEL_10:
      v10 = ++v9;
      if ( v9 >= pls->SubstituteFontMovieDefs.Data.Size )
      {
        v5 = 0i64;
        goto LABEL_12;
      }
    }
    while ( 1 )
    {
      v13 = Value->pFontData.pObject;
      if ( v13->GetGlyphShapeCount(v13) )
      {
        v14 = v13->Flags & 0x303;
        v15 = v13->GetName(v13);
        v16 = 3;
        if ( (v14 & 0x300) != 0 )
          v16 = 771;
        if ( (*((_DWORD *)hdata + 7) & (v14 & 0x10 | v16)) == (v14 & 0x313) )
        {
          v17 = (const char *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)hdata + 8i64))(hdata);
          if ( !Scaleform::String::CompareNoCase(v17, v15) )
            break;
        }
      }
      Value = Value->pNext.Value;
      if ( !Value )
        goto LABEL_10;
    }
    BindIndex = Value->BindIndex;
    if ( pObject->pBindData.pObject->ResourceBinding.Frozen
      && BindIndex < pObject->pBindData.pObject->ResourceBinding.ResourceCount )
    {
      v23 = (__int64)&pObject->pBindData.pObject->ResourceBinding.pResources[BindIndex];
      if ( *(_QWORD *)v23 )
        Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)v23);
      if ( pbindData->pResource.pObject )
        Scaleform::GFx::Resource::Release(pbindData->pResource.pObject);
      pbindData->pResource.pObject = *(Scaleform::GFx::Resource **)v23;
      pbindData->pBinding = *(Scaleform::GFx::ResourceBinding **)(v23 + 8);
      return 1;
    }
    else
    {
      Scaleform::GFx::ResourceBinding::GetResourceData_Locked(
        &pObject->pBindData.pObject->ResourceBinding,
        pbindData,
        BindIndex);
      return 1;
    }
  }
  else
  {
LABEL_12:
    if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)hdata + 152i64))(hdata)
      && (*(__int64 (__fastcall **)(void *))(*(_QWORD *)hdata + 8i64))(hdata) )
    {
      *((_DWORD *)hdata + 7) |= 0x40u;
    }
    v18 = pbindData->pResource.pObject == 0i64;
    if ( !pbindData->pResource.pObject )
    {
      v19 = (Scaleform::GFx::FontResource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pbindHeap->Alloc)(
                                              pbindHeap,
                                              64i64);
      if ( v19 )
      {
        Scaleform::GFx::FontResource::FontResource(v19, (Scaleform::Render::Font *)hdata, pbindData->pBinding);
        v5 = v20;
      }
      if ( pbindData->pResource.pObject )
        Scaleform::GFx::Resource::Release(pbindData->pResource.pObject);
      pbindData->pResource.pObject = v5;
      v18 = v5 == 0i64;
    }
    return !v18;
  }
}

__int64 __fastcall Scaleform::GFx::ImageFileResourceCreator::CreateResource(
        Scaleform::GFx::ImageFileResourceCreator *this,
        void *hdata,
        Scaleform::GFx::ResourceBindData *pbindData,
        Scaleform::GFx::LoadStates *pls)
{
  Scaleform::GFx::ResourceBindData *v4; // rdi
  Scaleform::GFx::ImageFileInfo *v7; // rax
  Scaleform::GFx::Resource *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  _DWORD *v11; // rax
  Scaleform::GFx::URLBuilder *pObject; // rcx
  Scaleform::GFx::MovieDefBindStates *v13; // r8
  Scaleform::GFx::ImageCreator *v14; // r9
  Scaleform::GFx::FileOpener *v15; // r8
  Scaleform::GFx::ResourceWeakLib *v16; // rcx
  Scaleform::GFx::MovieDefBindStates *v17; // rcx
  Scaleform::Render::Image *v18; // rdi
  Scaleform::GFx::ImageCreator *v19; // rsi
  Scaleform::GFx::ImageFileHandlerRegistry *v20; // rdi
  Scaleform::GFx::FileOpener *v21; // rcx
  Scaleform::GFx::LogState *v22; // rax
  Scaleform::Log *GlobalLog; // rax
  __int64 v24; // rax
  Scaleform::GFx::FileTypeConstants::FileFormatType v25; // ecx
  __int64 v26; // rax
  void *v27; // rsi
  Scaleform::GFx::ImageFileHandlerRegistry *v28; // rdi
  Scaleform::GFx::LogState *v29; // rax
  __int64 v30; // rcx
  Scaleform::Log *v31; // rax
  Scaleform::GFx::ImageCreator_vtbl *v32; // rax
  Scaleform::Render::Image_vtbl *v33; // rax
  __m128 v34; // xmm3
  __m128 v35; // xmm2
  Scaleform::Render::Image_vtbl *v36; // rax
  Scaleform::GFx::ImageResource *v37; // rax
  Scaleform::GFx::Resource *v38; // rax
  unsigned __int8 v39; // di
  const char *Error; // rax
  void *v41; // rbx
  void *v42; // rbx
  void *v43; // rbx
  Scaleform::String v45; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::GFx::FileOpener *v46; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::GFx::ResourceLib::BindHandle phandle; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::MemoryHeap *pimageHeap; // [rsp+50h] [rbp-B0h]
  Scaleform::GFx::ResourceBindData *v49; // [rsp+58h] [rbp-A8h]
  Scaleform::GFx::ResourceKey result; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo loc; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::MemoryHeap *v53; // [rsp+98h] [rbp-68h]
  int v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+A4h] [rbp-5Ch]
  Scaleform::Log *v56; // [rsp+A8h] [rbp-58h]
  __int128 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  Scaleform::Render::ImageFileFormat v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  Scaleform::String v61; // [rsp+D8h] [rbp-28h] BYREF
  int v62; // [rsp+E0h] [rbp-20h]
  int v63; // [rsp+E4h] [rbp-1Ch]
  int v64; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::MemoryHeap *v65; // [rsp+F8h] [rbp-8h]
  int v66; // [rsp+100h] [rbp+0h]
  int v67; // [rsp+104h] [rbp+4h]
  __int128 v68; // [rsp+108h] [rbp+8h]
  __int128 v69; // [rsp+118h] [rbp+18h]
  __m128 v70; // [rsp+130h] [rbp+30h] BYREF
  __m128 v71; // [rsp+140h] [rbp+40h]

  v4 = pbindData;
  v49 = pbindData;
  v7 = (Scaleform::GFx::ImageFileInfo *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                          Scaleform::Memory::pGlobalHeap,
                                          56i64);
  v8 = 0i64;
  if ( v7 )
  {
    Scaleform::GFx::ImageFileInfo::ImageFileInfo(v7, (const Scaleform::GFx::ImageFileInfo *)hdata);
    v10 = v9;
  }
  else
  {
    v10 = 0i64;
  }
  if ( *(_DWORD *)(v10 + 16) == 1 )
  {
    v11 = *(_DWORD **)(v10 + 24);
    if ( v11 )
      *(_DWORD *)(v10 + 16) = *v11;
  }
  loc.Use = File_ImageImport;
  Scaleform::String::String(&loc.FileName, (const Scaleform::String *)hdata + 4);
  Scaleform::String::String(&loc.ParentPath, &pls->RelativePath);
  pObject = pls->pBindStates.pObject->pURLBulider.pObject;
  if ( pObject )
    pObject->BuildURL(pObject, (Scaleform::String *)(v10 + 32), &loc);
  else
    Scaleform::GFx::URLBuilder::DefaultBuildURL((Scaleform::String *)(v10 + 32), &loc);
  v13 = pls->pBindStates.pObject;
  v14 = v13->pImageCreator.pObject;
  v15 = v13->pFileOpener.pObject;
  pimageHeap = pls->pWeakResourceLib.pObject->pImageHeap.pObject;
  Scaleform::GFx::ImageResource::CreateImageFileKey(&result, (Scaleform::GFx::ImageFileInfo *)v10, v15, v14, pimageHeap);
  Scaleform::String::String(&v45);
  v16 = pls->pWeakResourceLib.pObject;
  phandle.State = RS_Unbound;
  phandle.pResource = 0i64;
  if ( Scaleform::GFx::ResourceWeakLib::BindResourceKey(v16, &phandle, &result) == RS_NeedsResolve )
  {
    v17 = pls->pBindStates.pObject;
    v18 = 0i64;
    v19 = v17->pImageCreator.pObject;
    if ( !v19 )
      goto LABEL_29;
    if ( *((_QWORD *)hdata + 3) )
    {
      v53 = pimageHeap;
      v55 = *((_DWORD *)hdata + 11);
      v52 = 2;
      v54 = 0;
      v56 = 0i64;
      v57 = 0i64;
      v58 = 0i64;
      Scaleform::String::String(&v61);
      v20 = pls->pImageFileHandlerRegistry.pObject;
      v21 = pls->pBindStates.pObject->pFileOpener.pObject;
      v22 = pls->pLog.pObject;
      v46 = v21;
      if ( v22 )
      {
        GlobalLog = v22->pLog.pObject;
        if ( !GlobalLog )
        {
          GlobalLog = Scaleform::Log::GetGlobalLog();
          v21 = v46;
        }
      }
      else
      {
        GlobalLog = 0i64;
      }
      v56 = GlobalLog;
      v24 = *((_QWORD *)hdata + 3);
      *(_QWORD *)&v57 = v21;
      v25 = *((_DWORD *)hdata + 4);
      v60 = v24;
      *((_QWORD *)&v57 + 1) = v20;
      v59 = Scaleform::GFx::LoaderImpl::FileFormat2RenderImageFile(v25);
      v62 = *((unsigned __int16 *)hdata + 20);
      v63 = *((unsigned __int16 *)hdata + 21);
      Scaleform::String::operator=(&v61, (const Scaleform::String *)hdata + 6);
      v26 = (__int64)v19->LoadExportedImage(
                       v19,
                       (const Scaleform::GFx::ImageCreateExportInfo *)&v52,
                       (const Scaleform::String *)(v10 + 32));
      v27 = (void *)(v61.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      v18 = (Scaleform::Render::Image *)v26;
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v61.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v27);
    }
    else
    {
      v28 = pls->pImageFileHandlerRegistry.pObject;
      v65 = pimageHeap;
      v67 = *((_DWORD *)hdata + 11);
      v29 = pls->pLog.pObject;
      v64 = 1;
      v66 = 0;
      v68 = 0i64;
      v69 = 0i64;
      v30 = (__int64)v17->pFileOpener.pObject;
      v46 = (Scaleform::GFx::FileOpener *)v30;
      if ( v29 )
      {
        v31 = v29->pLog.pObject;
        if ( !v31 )
        {
          v31 = Scaleform::Log::GetGlobalLog();
          v30 = (__int64)v46;
        }
      }
      else
      {
        v31 = 0i64;
      }
      *(_QWORD *)&v68 = v31;
      v32 = v19->__vftable;
      *((_QWORD *)&v68 + 1) = v30;
      *(_QWORD *)&v69 = v28;
      v18 = v32->LoadImageFile(
              v19,
              (const Scaleform::GFx::ImageCreateInfo *)&v64,
              (const Scaleform::String *)(v10 + 32));
    }
    if ( !v18 )
      goto LABEL_29;
    v33 = v18->__vftable;
    v70 = (__m128)_xmm;
    v71 = (__m128)_xmm;
    v33->GetSize(v18, (Scaleform::Render::Size<unsigned long> *)&v46);
    v34 = (__m128)COERCE_UNSIGNED_INT((float)*((unsigned __int16 *)hdata + 21));
    v34.m128_f32[0] = v34.m128_f32[0] / (float)SHIDWORD(v46);
    v35 = (__m128)COERCE_UNSIGNED_INT((float)*((unsigned __int16 *)hdata + 20));
    v36 = v18->__vftable;
    v35.m128_f32[0] = v35.m128_f32[0] / (float)(int)v46;
    v70 = _mm_mul_ps(v70, _mm_shuffle_ps(v35, v35, 0));
    v71 = _mm_mul_ps(v71, _mm_shuffle_ps(v34, v34, 0));
    v36->SetMatrix(v18, (const Scaleform::Render::Matrix2x4<float> *)&v70, 0i64);
    v37 = (Scaleform::GFx::ImageResource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pimageHeap->Alloc)(
                                             pimageHeap,
                                             104i64);
    if ( v37 )
    {
      Scaleform::GFx::ImageResource::ImageResource(
        v37,
        v18,
        &result,
        *((Scaleform::GFx::Resource::ResourceUse *)hdata + 11));
      v8 = v38;
    }
    if ( v8 )
    {
      Scaleform::GFx::ResourceLib::ResourceSlot::Resolve(phandle.pSlot, v8);
    }
    else
    {
LABEL_29:
      Scaleform::String::operator=(&v45, "Failed to load image '");
      Scaleform::String::operator+=(&v45, (const Scaleform::String *)(v10 + 32));
      Scaleform::String::AppendString(&v45, "'", -1i64);
      Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(
        phandle.pSlot,
        (const char *)((v45.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
    }
    if ( v18 )
      v18->Release(v18);
    v4 = v49;
  }
  else
  {
    v8 = Scaleform::GFx::ResourceLib::BindHandle::WaitForResolve(&phandle);
    if ( v8 )
      goto LABEL_39;
    if ( phandle.State < RS_WaitingResolve )
    {
      Scaleform::String::operator=(&v45, &pnewText);
    }
    else
    {
      Error = Scaleform::GFx::ResourceLib::ResourceSlot::GetError(phandle.pSlot);
      Scaleform::String::operator=(&v45, Error);
    }
  }
  if ( !v8 )
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
      &pls->pLog.pObject->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
      "%s",
      (const char *)((v45.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
    v39 = 0;
    goto LABEL_43;
  }
LABEL_39:
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v8);
  if ( v4->pResource.pObject )
    Scaleform::GFx::Resource::Release(v4->pResource.pObject);
  v4->pResource.pObject = v8;
  v39 = 1;
  Scaleform::GFx::Resource::Release(v8);
LABEL_43:
  if ( phandle.State == RS_Available )
  {
    Scaleform::GFx::Resource::Release(phandle.pResource);
  }
  else if ( phandle.State >= RS_WaitingResolve )
  {
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)phandle.pResource);
  }
  v41 = (void *)(v45.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v45.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v41);
  if ( result.pKeyInterface )
    result.pKeyInterface->Release(result.pKeyInterface, result.hKeyData);
  v42 = (void *)(loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v42);
  v43 = (void *)(loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v43);
  Scaleform::RefCountNTSImpl::Release((Scaleform::RefCountNTSImpl *)v10);
  return v39;
}

char __fastcall Scaleform::GFx::ImageResourceCreator::CreateResource(
        Scaleform::GFx::ImageResourceCreator *this,
        void *hdata,
        Scaleform::GFx::ResourceBindData *pbindData,
        Scaleform::GFx::LoadStates *pls,
        Scaleform::MemoryHeap *pbindHeap)
{
  Scaleform::Log *GlobalLog; // rcx
  Scaleform::GFx::ImageFileHandlerRegistry *pObject; // rsi
  Scaleform::GFx::FileOpener *v10; // rbp
  Scaleform::GFx::LogState *v11; // rax
  Scaleform::GFx::MovieDefBindStates *v12; // rax
  Scaleform::GFx::ImageCreator *v13; // rcx
  Scaleform::Render::Image *v15; // rsi
  char v16; // bl
  Scaleform::GFx::ImageResource *v17; // rax
  Scaleform::RefCountVImpl *v18; // rax
  Scaleform::GFx::Resource *v19; // rdi
  int v20; // [rsp+20h] [rbp-58h] BYREF
  Scaleform::MemoryHeap *v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int128 v23; // [rsp+38h] [rbp-40h]
  __int128 v24; // [rsp+48h] [rbp-30h]

  GlobalLog = 0i64;
  pObject = pls->pImageFileHandlerRegistry.pObject;
  v21 = pbindHeap;
  v22 = 0i64;
  v23 = 0i64;
  v20 = 1;
  v24 = 0i64;
  v10 = pls->pBindStates.pObject->pFileOpener.pObject;
  v11 = pls->pLog.pObject;
  if ( v11 )
  {
    GlobalLog = v11->pLog.pObject;
    if ( !GlobalLog )
      GlobalLog = Scaleform::Log::GetGlobalLog();
  }
  v12 = pls->pBindStates.pObject;
  *((_QWORD *)&v23 + 1) = v10;
  *(_QWORD *)&v23 = GlobalLog;
  *(_QWORD *)&v24 = pObject;
  v21 = pbindHeap;
  v13 = v12->pImageCreator.pObject;
  if ( !v13 )
    return 0;
  v15 = v13->CreateImage(v13, (const Scaleform::GFx::ImageCreateInfo *)&v20, (Scaleform::Render::ImageSource *)hdata);
  if ( !v15 )
    return 0;
  v17 = (Scaleform::GFx::ImageResource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pbindHeap->Alloc)(
                                           pbindHeap,
                                           104i64);
  if ( v17
    && (Scaleform::GFx::ImageResource::ImageResource(v17, v15, Use_Bitmap),
        (v19 = (Scaleform::GFx::Resource *)v18) != 0i64) )
  {
    Scaleform::Render::RenderBuffer::AddRef(v18);
    if ( pbindData->pResource.pObject )
      Scaleform::GFx::Resource::Release(pbindData->pResource.pObject);
    pbindData->pResource.pObject = v19;
    v16 = 1;
    Scaleform::GFx::Resource::Release(v19);
  }
  else
  {
    v16 = 0;
  }
  v15->Release(v15);
  return v16;
}

char __fastcall Scaleform::GFx::SubImageResourceCreator::CreateResource(
        Scaleform::GFx::SubImageResourceCreator *this,
        void *hdata,
        Scaleform::GFx::ResourceBindData *pbindData,
        Scaleform::GFx::LoadStates *pls,
        Scaleform::MemoryHeap *pbindHeap)
{
  Scaleform::GFx::ImageResource *v5; // rbx
  Scaleform::GFx::Resource *v6; // rsi
  unsigned int v9; // eax
  Scaleform::GFx::Resource *Resource; // rax
  Scaleform::GFx::ImageResource *v11; // r14
  Scaleform::GFx::SubImageResource *v13; // rax
  Scaleform::GFx::Resource *v14; // rax
  Scaleform::GFx::ResourceHandle phandle; // [rsp+30h] [rbp-28h] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+68h] [rbp+10h] BYREF

  v5 = (Scaleform::GFx::ImageResource *)*((_QWORD *)hdata + 3);
  v6 = 0i64;
  if ( !v5 )
  {
    v9 = *((_DWORD *)hdata + 4);
    phandle.HType = RH_Pointer;
    phandle.pResource = 0i64;
    rid.Id = v9;
    Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(
      *(Scaleform::GFx::MovieDataDef::LoadTaskData **)(*(_QWORD *)&pbindData->pBinding->pOwnerDefRes[4].pLib[1].RefCount
                                                     + 64i64),
      &phandle,
      (Scaleform::GFx::ResourceId)&rid);
    Resource = Scaleform::GFx::ResourceHandle::GetResource(&phandle, pbindData->pBinding);
    v11 = (Scaleform::GFx::ImageResource *)Resource;
    if ( Resource
      && (((__int64 (__fastcall *)(Scaleform::GFx::Resource *))Resource->GetResourceTypeCode)(Resource) & 0xFF00) == 256 )
    {
      v5 = v11;
    }
    if ( phandle.HType == RH_Pointer && phandle.pResource )
      Scaleform::GFx::Resource::Release(phandle.pResource);
    if ( !v5 )
      return 0;
  }
  v13 = (Scaleform::GFx::SubImageResource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, _QWORD, Scaleform::GFx::LoadStates *))pbindHeap->Alloc)(
                                              pbindHeap,
                                              128i64,
                                              0i64,
                                              pls);
  if ( v13 )
  {
    rid.Id = 0;
    Scaleform::GFx::SubImageResource::SubImageResource(
      v13,
      v5,
      &rid.Id,
      (const Scaleform::Render::Rect<unsigned long> *)hdata + 2);
    v6 = v14;
  }
  if ( pbindData->pResource.pObject )
    Scaleform::GFx::Resource::Release(pbindData->pResource.pObject);
  pbindData->pResource.pObject = v6;
  return 1;
}

Scaleform::GFx::ResourceData *__fastcall Scaleform::GFx::SubImageResourceCreator::CreateSubImageResourceData(
        Scaleform::GFx::ResourceData *result,
        Scaleform::GFx::SubImageResourceInfo *pinfo)
{
  Scaleform::GFx::ResourceData *v4; // rax

  if ( dword_140A72350 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A72350);
    if ( dword_140A72350 == -1 )
    {
      atexit(Scaleform::GFx::SubImageResourceCreator::CreateSubImageResourceData_::_2_::_dynamic_atexit_destructor_for__inst__);
      Init_thread_footer(&dword_140A72350);
    }
  }
  inst_1.AddRef(&inst_1, pinfo);
  result->pInterface = &inst_1;
  v4 = result;
  result->hData = pinfo;
  return v4;
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::Decode(Scaleform::DelegatedFile *this)
{
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->GetErrorCode)(this->pFile.pObject);
}

void __fastcall Scaleform::GFx::LoadProcess::Execute(Scaleform::GFx::LoadProcess *this)
{
  Scaleform::GFx::MovieDataDef::LoadTaskData::Read(this->pLoadData.pObject, this, this->pBindProcess.pObject);
}

AgAudioChannelData *__fastcall AgAudioChannel::getInternalData(AgAudioChannel *this)
{
  return this->m_internalData;
}

Scaleform::GFx::ResourceId *__fastcall Scaleform::GFx::SubImageResource::GetBaseImageId(
        Scaleform::GFx::SubImageResource *this,
        Scaleform::GFx::ResourceId *result)
{
  result->Id = (unsigned int)this->BaseImageId;
  return result;
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::GetFormat(Scaleform::DelegatedFile *this)
{
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Tell)(this->pFile.pObject);
}

Scaleform::GFx::ImageCreator *__fastcall Scaleform::GFx::LoadStates::GetImageCreator(Scaleform::GFx::LoadStates *this)
{
  return this->pBindStates.pObject->pImageCreator.pObject;
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::GetImageType(Scaleform::Render::MorphInterpolator *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetStrokeStyleCount)(this->pShapeData.pObject);
}

Scaleform::GFx::ImageCreator *__fastcall Scaleform::GFx::LoadStates::GetLoadTimeImageCreator(
        Scaleform::GFx::LoadStates *this,
        unsigned int loadConstants)
{
  Scaleform::GFx::ImageCreator *result; // rax
  Scaleform::GFx::MovieDefBindStates *pObject; // rcx

  result = 0i64;
  if ( (loadConstants & 0x80u) == 0 )
  {
    pObject = this->pBindStates.pObject;
    if ( pObject->pImageCreator.pObject )
      return pObject->pImageCreator.pObject;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::GetMipmapCount(Scaleform::DelegatedFile *this)
{
  return this->pFile.pObject->LGetLength(this->pFile.pObject);
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::WrapperImageSource::GetSize(
        Scaleform::Render::WrapperImageSource *this,
        Scaleform::Render::Size<unsigned long> *result)
{
  ((void (__fastcall *)(Scaleform::Render::Image *))this->pDelegate.pObject->GetSize)(this->pDelegate.pObject);
  return result;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

void __fastcall Scaleform::GFx::LoadProcess::OnAbandon(Scaleform::GFx::LoadProcess *this, bool started)
{
  Scaleform::GFx::MovieBindProcess *pObject; // rcx
  Scaleform::GFx::MovieDefImpl::BindTaskData *v5; // rcx

  if ( started )
    Scaleform::GFx::MovieDataDef::LoadTaskData::OnMovieDataDefRelease(this->pLoadData.pObject);
  pObject = this->pBindProcess.pObject;
  if ( pObject && !started )
  {
    v5 = pObject->pBindData.pObject;
    if ( v5 )
      Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(v5, 3u);
  }
}

Scaleform::File *__fastcall Scaleform::GFx::LoadStates::OpenFile(
        Scaleform::GFx::LoadStates *this,
        const char *pfilename,
        unsigned int loadConstants)
{
  Scaleform::GFx::LogState *v5; // rcx
  Scaleform::Log *pObject; // r8

  if ( this->pBindStates.pObject->pFileOpener.pObject )
  {
    if ( (loadConstants & 0x200000) != 0 )
    {
      pObject = 0i64;
    }
    else
    {
      pObject = this->pLog.pObject->pLog.pObject;
      if ( !pObject )
        pObject = Scaleform::Log::GetGlobalLog();
    }
    return this->pBindStates.pObject->pFileOpener.pObject->OpenFileEx(
             this->pBindStates.pObject->pFileOpener.pObject,
             pfilename,
             pObject,
             33i64,
             438);
  }
  else
  {
    v5 = this->pLog.pObject;
    if ( v5 )
    {
      if ( (loadConstants & 0x200000) == 0 )
        Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
          &v5->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
          "Loader failed to open '%s', FileOpener not installe",
          pfilename);
    }
    return 0i64;
  }
}

void __fastcall Scaleform::GFx::LoadProcess::ReadRgbaTag(
        Scaleform::GFx::LoadProcess *this,
        Scaleform::Render::Color *pc,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rax

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)this->pAltStream;
  if ( tagType > Tag_DefineShape2 )
  {
    if ( !pAltStream )
      pAltStream = &this->ProcessInfo;
    Scaleform::GFx::Stream::ReadRgba(&pAltStream->Stream, pc);
  }
  else
  {
    if ( !pAltStream )
      pAltStream = &this->ProcessInfo;
    Scaleform::GFx::Stream::ReadRgb(&pAltStream->Stream, pc);
  }
}

void __fastcall Scaleform::GFx::GFxSystemFontResourceKeyInterface::Release(
        Scaleform::GFx::GFxMovieDefImplKeyInterface *this,
        void *hdata)
{
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)hdata);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::ExecuteTag **Data; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  Scaleform::GFx::ExecuteTag **v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    v5 = 32i64;
    if ( newCapacity >= 0x20 )
      v5 = newCapacity;
    v6 = (v5 + 15) & 0xFFFFFFFFFFFFFFF0ui64;
    if ( Data )
    {
      v7 = (Scaleform::GFx::ExecuteTag **)Scaleform::Memory::pGlobalHeap->Realloc(
                                            Scaleform::Memory::pGlobalHeap,
                                            Data,
                                            8 * v6);
      this->Policy.Capacity = v6;
      this->Data = v7;
    }
    else
    {
      v8 = 2;
      this->Data = (Scaleform::GFx::ExecuteTag **)Scaleform::Memory::pGlobalHeap->Alloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    8 * v6,
                                                    &v8);
      this->Policy.Capacity = v6;
    }
  }
}

void __fastcall Scaleform::GFx::LoadStates::SetRelativePathForDataDef(
        Scaleform::GFx::LoadStates *this,
        Scaleform::GFx::MovieDataDef *pdef)
{
  Scaleform::String *p_RelativePath; // rbx

  p_RelativePath = &this->RelativePath;
  Scaleform::String::operator=(
    &this->RelativePath,
    (const char *)((pdef->pData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
  if ( !Scaleform::GFx::URLBuilder::ExtractFilePath(p_RelativePath) )
    Scaleform::String::Clear(p_RelativePath);
}

bool __fastcall Scaleform::GFx::LoadStates::SubmitBackgroundTask(
        Scaleform::GFx::LoadStates *this,
        Scaleform::GFx::LoaderTask *ptask)
{
  Scaleform::GFx::TaskManager *pObject; // rcx

  pObject = this->pTaskManager.pObject;
  return pObject && pObject->AddTask(pObject, ptask);
}

Scaleform::GFx::TimelineDef::Frame *__fastcall Scaleform::GFx::LoadProcess::TagArrayToFrame(
        Scaleform::GFx::LoadProcess *this,
        Scaleform::GFx::TimelineDef::Frame *result,
        Scaleform::Array<Scaleform::GFx::ExecuteTag *,2,Scaleform::ArrayConstPolicy<32,16,0> > *tagArray)
{
  unsigned __int64 Size; // rax
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // r8
  size_t v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 BytesLeft; // r9
  Scaleform::GFx::ExecuteTag **pCurrent; // rcx

  Size = tagArray->Data.Size;
  result->pTagPtrList = 0i64;
  result->TagCount = 0;
  if ( Size )
  {
    pObject = this->pLoadData.pObject;
    v7 = 8 * Size;
    v8 = (8 * Size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
    BytesLeft = pObject->TagMemAllocator.BytesLeft;
    if ( v8 > BytesLeft )
    {
      pCurrent = (Scaleform::GFx::ExecuteTag **)Scaleform::GFx::DataAllocator::OverflowAlloc(
                                                  &pObject->TagMemAllocator,
                                                  v8);
    }
    else
    {
      pCurrent = (Scaleform::GFx::ExecuteTag **)pObject->TagMemAllocator.pCurrent;
      pObject->TagMemAllocator.BytesLeft = BytesLeft - v8;
      pObject->TagMemAllocator.pCurrent = (unsigned __int8 *)pCurrent + v8;
    }
    result->pTagPtrList = pCurrent;
    if ( pCurrent )
    {
      memmove(pCurrent, tagArray->Data.Data, v7);
      result->TagCount = tagArray->Data.Size;
    }
    if ( tagArray->Data.Size && (tagArray->Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
      Scaleform::ArrayDataBase<Scaleform::GFx::ExecuteTag *,Scaleform::AllocatorGH<Scaleform::GFx::ExecuteTag *,2>,Scaleform::ArrayConstPolicy<32,16,0>>::Reserve(
        &tagArray->Data,
        tagArray,
        0i64);
    tagArray->Data.Size = 0i64;
  }
  return result;
}

