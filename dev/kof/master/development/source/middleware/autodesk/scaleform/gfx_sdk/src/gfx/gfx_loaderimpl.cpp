#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stringhash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"

void Scaleform::GFx::ExporterInfoImpl::SetData(unsigned short version, Scaleform::GFx::FileTypeConstants::FileFormatType format, const char * pname, const char * pprefix, unsigned long flags, const Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> * codeOffsets); // 0x14030F260
void Scaleform::GFx::ExporterInfoImpl::ReadExporterInfoTag(Scaleform::GFx::Stream * pin, Scaleform::GFx::TagType tagType); // 0x14030EB40
bool Scaleform::GFx::SWFProcessInfo::Initialize(Scaleform::File * pin, Scaleform::GFx::LogState * plog, Scaleform::GFx::ZlibSupportBase * zlib, Scaleform::GFx::ParseControl * pparseControl, bool parseMsg); // 0x14030DE50
Scaleform::GFx::LoaderTask::LoaderTask(Scaleform::GFx::LoadStates * pls, Scaleform::GFx::Task::TaskId id); // 0x14030BC00
Scaleform::GFx::LoaderTask::~LoaderTask(); // 0x14030BED0
Scaleform::GFx::MovieImageLoadTask::~MovieImageLoadTask(); // 0x14030BF20
Scaleform::GFx::LoaderImpl::LoaderImpl(Scaleform::GFx::ResourceLib * plib, bool debugHeap); // 0x14030B870
Scaleform::GFx::LoaderImpl::LoaderImpl(Scaleform::GFx::StateBag * pstates, Scaleform::GFx::ResourceLib * plib, bool debugHeap); // 0x14030BB10
Scaleform::GFx::LoaderImpl::~LoaderImpl(); // 0x14030BE50
Scaleform::GFx::MovieDef * Scaleform::GFx::LoaderImpl::CreateMovie(const char * pfilename, unsigned long loadConstants, unsigned long long memoryArena); // 0x14030C5A0
void Scaleform::GFx::LoaderImpl::RegisterLoadProcess(Scaleform::GFx::LoaderTask * ptask); // 0x14030F100
void Scaleform::GFx::LoaderImpl::UnRegisterLoadProcess(Scaleform::GFx::LoaderTask * ptask); // 0x14030F3D0
void Scaleform::GFx::LoaderImpl::CancelLoading(); // 0x14030C370
class Scaleform::GFx::MovieImageLoadTask :
	Scaleform::GFx::LoaderTask
{
private:
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> pDef; // 0x20
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> pDefImpl; // 0x28
	Scaleform::Ptr<Scaleform::File> pImageFile; // 0x30
	Scaleform::GFx::FileTypeConstants::FileFormatType ImageFormat; // 0x38
	Scaleform::Ptr<Scaleform::GFx::ImageResource> pImageRes; // 0x40
public:
	MovieImageLoadTask(Scaleform::GFx::MovieImageLoadTask &);
	MovieImageLoadTask(const Scaleform::GFx::MovieImageLoadTask &);
	MovieImageLoadTask(Scaleform::GFx::MovieDataDef *, Scaleform::GFx::MovieDefImpl *, Scaleform::File *, Scaleform::GFx::FileTypeConstants::FileFormatType, Scaleform::GFx::LoadStates *);
	virtual void Execute();
	virtual void OnAbandon(bool);
	bool LoadingSucceeded();
	virtual ~MovieImageLoadTask();
	Scaleform::GFx::MovieImageLoadTask & operator=(Scaleform::GFx::MovieImageLoadTask &);
	Scaleform::GFx::MovieImageLoadTask & operator=(const Scaleform::GFx::MovieImageLoadTask &);
};
Scaleform::GFx::MovieImageLoadTask::MovieImageLoadTask(Scaleform::GFx::MovieDataDef * pdef, Scaleform::GFx::MovieDefImpl * pdefImpl, Scaleform::File * pin, Scaleform::GFx::FileTypeConstants::FileFormatType format, Scaleform::GFx::LoadStates * pls); // 0x14030BCE0
Scaleform::GFx::ExporterInfoImpl::~ExporterInfoImpl(); // 0x14030BDD0
void Scaleform::GFx::MovieImageLoadTask::Execute(); // 0x14030DBA0
class Scaleform::Ptr<Scaleform::Render::ImageSource>
{
protected:
	Scaleform::Render::ImageSource * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ImageSource>(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Render::ImageSource *);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Ptr<Scaleform::Render::ImageSource> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Render::ImageSource &);
	Ptr<Scaleform::Render::ImageSource>();
	~Ptr<Scaleform::Render::ImageSource>();
	bool operator==(Scaleform::Render::ImageSource *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	bool operator!=(Scaleform::Render::ImageSource *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Render::ImageSource &);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Render::ImageSource *);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Render::ImageSource &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Render::ImageSource *);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ImageSource * & GetRawRef();
	Scaleform::Render::ImageSource * GetPtr();
	Scaleform::Render::ImageSource & operator*();
	Scaleform::Render::ImageSource * operator->();
	Scaleform::Render::ImageSource * operator class Scaleform::Render::ImageSource *();
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Render::ImageSource *);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Ptr<Scaleform::Render::ImageSource> &);
};
long Scaleform::GFx::StateAccessCount; // 0x140A7211C
void Scaleform::GFx::MovieImageLoadTask::OnAbandon(bool __formal); // 0x14002E7C0
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(Scaleform::GFx::LoadStates * pls, const Scaleform::GFx::URLBuilder::LocationInfo & loc, unsigned long loadConstants, Scaleform::GFx::LoaderImpl::LoadStackItem * ploadStack, unsigned long long memoryArena); // 0x14030C980
class Scaleform::Ptr<Scaleform::GFx::LoadProcess>
{
protected:
	Scaleform::GFx::LoadProcess * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::LoadProcess>(const Scaleform::Ptr<Scaleform::GFx::LoadProcess> &);
	Ptr<Scaleform::GFx::LoadProcess>(Scaleform::GFx::LoadProcess *);
	Ptr<Scaleform::GFx::LoadProcess>(Scaleform::Ptr<Scaleform::GFx::LoadProcess> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::LoadProcess>(Scaleform::Pickable<Scaleform::GFx::LoadProcess>);
	Ptr<Scaleform::GFx::LoadProcess>(Scaleform::GFx::LoadProcess &);
	Ptr<Scaleform::GFx::LoadProcess>();
	~Ptr<Scaleform::GFx::LoadProcess>();
	bool operator==(Scaleform::GFx::LoadProcess *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::LoadProcess> &);
	bool operator!=(Scaleform::GFx::LoadProcess *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::LoadProcess> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::LoadProcess> &);
	Scaleform::Ptr<Scaleform::GFx::LoadProcess> & operator=(Scaleform::Pickable<Scaleform::GFx::LoadProcess>);
	const Scaleform::Ptr<Scaleform::GFx::LoadProcess> & operator=(Scaleform::GFx::LoadProcess &);
	const Scaleform::Ptr<Scaleform::GFx::LoadProcess> & operator=(Scaleform::GFx::LoadProcess *);
	const Scaleform::Ptr<Scaleform::GFx::LoadProcess> & operator=(const Scaleform::Ptr<Scaleform::GFx::LoadProcess> &);
	Scaleform::Ptr<Scaleform::GFx::LoadProcess> & SetPtr(Scaleform::Pickable<Scaleform::GFx::LoadProcess>);
	Scaleform::Ptr<Scaleform::GFx::LoadProcess> & SetPtr(Scaleform::GFx::LoadProcess &);
	Scaleform::Ptr<Scaleform::GFx::LoadProcess> & SetPtr(Scaleform::GFx::LoadProcess *);
	Scaleform::Ptr<Scaleform::GFx::LoadProcess> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::LoadProcess> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::LoadProcess * & GetRawRef();
	Scaleform::GFx::LoadProcess * GetPtr();
	Scaleform::GFx::LoadProcess & operator*();
	Scaleform::GFx::LoadProcess * operator->();
	Scaleform::GFx::LoadProcess * operator class Scaleform::GFx::LoadProcess *();
	Scaleform::Ptr<Scaleform::GFx::LoadProcess> & Pick(Scaleform::GFx::LoadProcess *);
	Scaleform::Ptr<Scaleform::GFx::LoadProcess> & Pick(Scaleform::Pickable<Scaleform::GFx::LoadProcess>);
	Scaleform::Ptr<Scaleform::GFx::LoadProcess> & Pick(Scaleform::Ptr<Scaleform::GFx::LoadProcess> &);
};
class Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask>
{
protected:
	Scaleform::GFx::MovieImageLoadTask * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieImageLoadTask>(const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> &);
	Ptr<Scaleform::GFx::MovieImageLoadTask>(Scaleform::GFx::MovieImageLoadTask *);
	Ptr<Scaleform::GFx::MovieImageLoadTask>(Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieImageLoadTask>(Scaleform::Pickable<Scaleform::GFx::MovieImageLoadTask>);
	Ptr<Scaleform::GFx::MovieImageLoadTask>(Scaleform::GFx::MovieImageLoadTask &);
	Ptr<Scaleform::GFx::MovieImageLoadTask>();
	~Ptr<Scaleform::GFx::MovieImageLoadTask>();
	bool operator==(Scaleform::GFx::MovieImageLoadTask *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> &);
	bool operator!=(Scaleform::GFx::MovieImageLoadTask *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> &);
	Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieImageLoadTask>);
	const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & operator=(Scaleform::GFx::MovieImageLoadTask &);
	const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & operator=(Scaleform::GFx::MovieImageLoadTask *);
	const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> &);
	Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieImageLoadTask>);
	Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & SetPtr(Scaleform::GFx::MovieImageLoadTask &);
	Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & SetPtr(Scaleform::GFx::MovieImageLoadTask *);
	Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieImageLoadTask * & GetRawRef();
	Scaleform::GFx::MovieImageLoadTask * GetPtr();
	Scaleform::GFx::MovieImageLoadTask & operator*();
	Scaleform::GFx::MovieImageLoadTask * operator->();
	Scaleform::GFx::MovieImageLoadTask * operator class Scaleform::GFx::MovieImageLoadTask *();
	Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & Pick(Scaleform::GFx::MovieImageLoadTask *);
	Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieImageLoadTask>);
	Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieImageLoadTask> &);
};
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(Scaleform::GFx::LoadStates * pls, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & bytes, unsigned long loadConstants, Scaleform::GFx::LoaderImpl::LoadStackItem * ploadStack, unsigned long long memoryArena); // 0x14030D1C0
Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Scaleform::GFx::LoaderImpl::ReadProtocolFile(const Scaleform::String & filename); // 0x14030EFA0
void Scaleform::GFx::LoaderImpl::LoadingDone(const char * filename); // 0x14030E5E0
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::LoaderImpl::BindMovieAndWait(Scaleform::GFx::MovieDefImpl * pm, Scaleform::GFx::MovieBindProcess * pbp, Scaleform::GFx::LoadStates * pls, unsigned long loadConstants, Scaleform::GFx::LoaderImpl::LoadStackItem * ploadStack); // 0x14030C200
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::LoaderImpl::CreateMovieDefImpl(Scaleform::GFx::LoadStates * pls, Scaleform::GFx::MovieDataDef * pmd, unsigned long loadConstants, Scaleform::GFx::MovieBindProcess * * ppbindProcess, bool checkCreate, Scaleform::GFx::LoaderImpl::LoadStackItem * ploadStack, unsigned long long memoryArena); // 0x14030C740
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(Scaleform::GFx::LoadStates * pls, Scaleform::GFx::MovieDataDef * pmd, unsigned long loadConstants, unsigned long long memoryArena); // 0x14030D7C0
Scaleform::Render::ImageFileFormat Scaleform::GFx::LoaderImpl::FileFormat2RenderImageFile(Scaleform::GFx::FileTypeConstants::FileFormatType format); // 0x14030DD80
Scaleform::Render::ImageSource * Scaleform::GFx::LoaderImpl::LoadBuiltinImage(Scaleform::File * pfile, Scaleform::GFx::FileTypeConstants::FileFormatType format, Scaleform::GFx::Resource::ResourceUse __formal, Scaleform::GFx::LoadStates * pls, Scaleform::Log * plog, Scaleform::MemoryHeap * pimageHeap); // 0x14030E4C0
Scaleform::GFx::FileTypeConstants::FileFormatType Scaleform::GFx::LoaderImpl::DetectFileFormat(Scaleform::File * pfile); // 0x14030D860
bool Scaleform::GFx::LoaderImpl::IsProtocolImage(const Scaleform::String & url, bool * bilinear, bool * sync); // 0x14030E2E0
void Scaleform::GFx::Translator::TranslateInfo::SetResult(const char * presultTextUTF8, unsigned long long resultUTF8Len); // 0x14030F340
bool Scaleform::GFx::Translator::OnBidirectionalText(const wchar_t * text, unsigned long long textLen, wchar_t * newText, unsigned long * indexMap, bool * mirrorBits); // 0x14030E6E0//decompilation failure at 140A7211C!
Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *__fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::GetAlt<Scaleform::String>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key)
{
  unsigned __int64 v4; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rsi
  __int64 v6; // rax

  if ( this->pTable
    && (v4 = Scaleform::String::BernsteinHashFunctionCIS(
               (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
               *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
               0x1505ui64),
        pTable = this->pTable,
        v6 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String>(
               this,
               key,
               v4 & this->pTable->SizeMask),
        v6 >= 0) )
  {
    return &pTable[2 * v6 + 2];
  }
  else
  {
    return 0i64;
  }
}

char __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::RemoveAlt<Scaleform::String>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key)
{
  unsigned __int64 v5; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // r11
  unsigned __int64 NextInChain; // r9
  Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *v8; // rdi
  __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned __int8 *v11; // rax
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v15; // rbx

  if ( !this->pTable )
    return 0;
  v5 = Scaleform::String::BernsteinHashFunctionCIS(
         (const void *)((key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
         0x1505ui64);
  pTable = this->pTable;
  NextInChain = v5 & this->pTable->SizeMask;
  v8 = (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&this->pTable[2 * NextInChain + 1];
  if ( v8->NextInChain == -2 || v8->HashValue != NextInChain )
    return 0;
  v9 = -1i64;
  v10 = v5 & this->pTable->SizeMask;
  while ( 1 )
  {
    if ( v8->HashValue == v10 )
    {
      v11 = (unsigned __int8 *)((v8->Value.First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v12 = v11[(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (v8->Value.First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64)];
        v13 = *v11 - v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( v12 );
      if ( !v13 )
        break;
    }
    v9 = NextInChain;
    NextInChain = v8->NextInChain;
    if ( v8->NextInChain == -1 )
      return 0;
    v8 = (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&pTable[2 * NextInChain + 1];
  }
  v14 = v8->NextInChain;
  if ( v10 == NextInChain )
  {
    if ( v14 != -1 )
    {
      v15 = &pTable[2 * v14];
      Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::Clear(v8);
      Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
        v8,
        (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v15[1]);
      v8 = (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v15[1];
    }
  }
  else
  {
    pTable[2 * v9 + 1].EntryCount = v14;
  }
  Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::Clear(v8);
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v9; // rdi
  unsigned __int64 EntryCount; // r9
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 v12; // rbx
  Scaleform::StringLH *v13; // r8
  unsigned __int64 SizeMask; // rax
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *i; // rsi
  Scaleform::StringLH *v18; // r13
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rcx

  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = &this->pTable[2 * v7];
  EntryCount = v9[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v9[1].EntryCount = -1i64;
    v9[1].SizeMask = 0i64;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)&v9[2], &key->First);
    pObject = (Scaleform::RefCountVImpl *)key->Second.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
    v9[1].SizeMask = v7;
  }
  else
  {
    v12 = v7;
    do
      v12 = pTable->SizeMask & (v12 + 1);
    while ( pTable[2 * v12 + 1].EntryCount != -2i64 );
    v13 = (Scaleform::StringLH *)&pTable[2 * v12 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v13 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&pTable[2 * v12 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v9[1]);
      Scaleform::String::operator=((Scaleform::String *)&v9[2], &key->First);
      v15 = (Scaleform::RefCountVImpl *)key->Second.pObject;
      if ( v15 )
        Scaleform::Render::RenderBuffer::AddRef(v15);
      v16 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
      if ( v16 )
        Scaleform::RefCountImpl::Release(v16);
      v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
      v9[1].EntryCount = v12;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v13 )
      {
        v18 = v13 + 2;
        v13->HeapTypeBits = EntryCount;
        v13[1].pData = (Scaleform::String::DataDesc *)v9[1].SizeMask;
        Scaleform::StringLH::CopyConstructHelper(v13 + 2, (const Scaleform::String *)&v9[2]);
        v19 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
        if ( v19 )
          Scaleform::Render::RenderBuffer::AddRef(v19);
        v18[1].pData = (Scaleform::String::DataDesc *)v9[2].SizeMask;
      }
      i->EntryCount = v12;
      Scaleform::String::operator=((Scaleform::String *)&v9[2], &key->First);
      v20 = (Scaleform::RefCountVImpl *)key->Second.pObject;
      if ( v20 )
        Scaleform::Render::RenderBuffer::AddRef(v20);
      v21 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
      if ( v21 )
        Scaleform::RefCountImpl::Release(v21);
      v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
      v9[1].EntryCount = -1i64;
    }
    v9[1].SizeMask = v7;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v11; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v12; // rdi
  unsigned __int64 EntryCount; // r9
  Scaleform::RefCountVImpl **pSecond; // r14
  __int64 v15; // rbx
  Scaleform::StringLH *v16; // r8
  unsigned __int64 v17; // rax
  Scaleform::RefCountVImpl **v18; // r14
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *i; // r14
  Scaleform::StringLH *v21; // r13
  Scaleform::RefCountVImpl *v22; // rcx
  Scaleform::RefCountVImpl **v23; // r14
  Scaleform::RefCountVImpl *v24; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[2 * v10];
  EntryCount = v12[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)&v12[2], key->pFirst);
    pSecond = (Scaleform::RefCountVImpl **)key->pSecond;
    if ( *pSecond )
      Scaleform::Render::RenderBuffer::AddRef(*pSecond);
    v12[2].SizeMask = (unsigned __int64)*pSecond;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( v11[2 * v15 + 1].EntryCount != -2i64 );
    v16 = (Scaleform::StringLH *)&v11[2 * v15 + 1];
    v17 = v12[1].SizeMask;
    if ( v17 == v10 )
    {
      if ( v16 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v11[2 * v15 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *)&v12[1]);
      Scaleform::String::operator=((Scaleform::String *)&v12[2], key->pFirst);
      v18 = (Scaleform::RefCountVImpl **)key->pSecond;
      if ( *v18 )
        Scaleform::Render::RenderBuffer::AddRef(*v18);
      v19 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
      if ( v19 )
        Scaleform::RefCountImpl::Release(v19);
      v12[2].SizeMask = (unsigned __int64)*v18;
      v12[1].EntryCount = v15;
    }
    else
    {
      for ( i = &v11[2 * v17 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v16 )
      {
        v16->HeapTypeBits = EntryCount;
        v21 = v16 + 2;
        v16[1].pData = (Scaleform::String::DataDesc *)v12[1].SizeMask;
        Scaleform::StringLH::CopyConstructHelper(v16 + 2, (const Scaleform::String *)&v12[2]);
        v22 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
        if ( v22 )
          Scaleform::Render::RenderBuffer::AddRef(v22);
        v21[1].pData = (Scaleform::String::DataDesc *)v12[2].SizeMask;
      }
      i->EntryCount = v15;
      Scaleform::String::operator=((Scaleform::String *)&v12[2], key->pFirst);
      v23 = (Scaleform::RefCountVImpl **)key->pSecond;
      if ( *v23 )
        Scaleform::Render::RenderBuffer::AddRef(*v23);
      v24 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
      if ( v24 )
        Scaleform::RefCountImpl::Release(v24);
      v12[2].SizeMask = (unsigned __int64)*v23;
      v12[1].EntryCount = -1i64;
    }
  }
  v12[1].SizeMask = v10;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::findIndexCore<Scaleform::String>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        const Scaleform::String *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rbx
  unsigned __int64 EntryCount; // r10
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v6; // r9
  unsigned __int8 *v7; // rax
  int v8; // ecx
  int v9; // edx

  pTable = this->pTable;
  EntryCount = hashValue;
  v6 = &this->pTable[2 * hashValue + 1];
  if ( v6->EntryCount == -2i64 || v6->SizeMask != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v6->SizeMask == hashValue )
    {
      v7 = (unsigned __int8 *)((v6[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v8 = v7[(key->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (v6[1].EntryCount & 0xFFFFFFFFFFFFFFFCui64)];
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
        break;
    }
    EntryCount = v6->EntryCount;
    if ( v6->EntryCount == -1i64 )
      return -1i64;
    v6 = &pTable[2 * EntryCount + 1];
  }
  return EntryCount;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *this,
        const Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *e)
{
  Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor> *p_Value; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx

  p_Value = &e->Value;
  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  Scaleform::StringLH::CopyConstructHelper(&this->Value.First, &e->Value.First);
  pObject = (Scaleform::RefCountVImpl *)p_Value->Second.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Value.Second.pObject = p_Value->Second.pObject;
}

void __fastcall Scaleform::GFx::ImageResource::ImageResource(
        Scaleform::GFx::ImageResource *this,
        Scaleform::Render::ImageSource *pimageSrc,
        Scaleform::GFx::Resource::ResourceUse use)
{
  Scaleform::GFx::ImageResource::ImageDelegate *p_Delegate; // rdi
  Scaleform::Render::ImageBase *pImage; // rcx
  Scaleform::Render::Image *pObject; // rcx
  Scaleform::Render::ImageBase *v9; // rcx

  p_Delegate = &this->Delegate;
  this->pLib = 0i64;
  this->__vftable = (Scaleform::GFx::ImageResource_vtbl *)&Scaleform::GFx::Resource::`vftable';
  this->RefCount.Value = 1;
  this->__vftable = (Scaleform::GFx::ImageResource_vtbl *)&Scaleform::GFx::ImageResource::`vftable';
  this->pImage = 0i64;
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Delegate.RefCount = 1;
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::Render::Image::`vftable';
  this->Delegate.pTexture.Value = 0i64;
  this->Delegate.pUpdateSync = 0i64;
  this->Delegate.pInverseMatrix = 0i64;
  this->Delegate.pImage.pObject = 0i64;
  this->Delegate.__vftable = (Scaleform::GFx::ImageResource::ImageDelegate_vtbl *)&Scaleform::GFx::ImageResource::ImageDelegate::`vftable';
  AgPointer<AgController>::AgPointer<AgController>((AgPointer<AgMemoryStream> *)&this->Key);
  pImage = this->pImage;
  if ( pImage && pImage != p_Delegate )
    pImage->Release(pImage);
  this->pImage = pimageSrc;
  pObject = this->Delegate.pImage.pObject;
  if ( pObject )
    pObject->Release(pObject);
  this->Delegate.pImage.pObject = 0i64;
  v9 = this->pImage;
  if ( v9 )
    v9->AddRef(v9);
  this->UseType = use;
}

void __fastcall Scaleform::GFx::LoaderImpl::LoaderImpl(
        Scaleform::GFx::LoaderImpl *this,
        Scaleform::GFx::ResourceLib *plib,
        bool debugHeap)
{
  Scaleform::GFx::TextKeyMap *v3; // rsi
  Scaleform::GFx::ResourceWeakLib *pWeakLib; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 v9; // rax
  Scaleform::GFx::StateBagImpl *v10; // rbx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  __int64 v13; // rax
  Scaleform::Log *v14; // rbx
  Scaleform::GFx::ImageCreator *v15; // rax
  Scaleform::GFx::State *v16; // rax
  Scaleform::GFx::State *v17; // rbx
  Scaleform::GFx::Clipboard *v18; // rax
  Scaleform::GFx::State *v19; // rax
  Scaleform::GFx::State *v20; // rbx
  Scaleform::GFx::TextKeyMap *v21; // rax
  Scaleform::GFx::TextKeyMap *v22; // rax
  Scaleform::GFx::TextKeyMap *inited; // rbx

  v3 = 0i64;
  this->Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LoaderImpl_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LoaderImpl_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>'};
  this->RefCount = 1;
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>'};
  this->pStateBag.pObject = 0i64;
  this->pWeakResourceLib.pObject = 0i64;
  this->LoadProcesses.Root.pPrev = (Scaleform::GFx::LoadProcessNode *)&this->LoadProcesses;
  this->LoadProcesses.Root.pNext = (Scaleform::GFx::LoadProcessNode *)&this->LoadProcesses;
  Scaleform::Lock::Lock(&this->LoadProcessesLock, 0);
  this->DebugHeap = debugHeap;
  this->HttpFilesOpened.mHash.pTable = 0i64;
  if ( plib )
  {
    pWeakLib = plib->pWeakLib;
    if ( pWeakLib )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)plib->pWeakLib);
    pObject = (Scaleform::RefCountVImpl *)this->pWeakResourceLib.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pWeakResourceLib.pObject = pWeakLib;
  }
  v9 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         96i64);
  v10 = (Scaleform::GFx::StateBagImpl *)v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v9 + 8) = 1;
    *(_QWORD *)(v9 + 16) = &Scaleform::GFx::StateBag::`vftable';
    *(_QWORD *)v9 = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::StateBagImpl,2>'};
    *(_QWORD *)(v9 + 16) = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::StateBag'};
    *(_QWORD *)(v9 + 24) = &Scaleform::GFx::StateBagImpl::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::StateBagImpl>'};
    *(_QWORD *)(v9 + 32) = 0i64;
    *(_QWORD *)(v9 + 40) = 0i64;
    Scaleform::Lock::Lock((Scaleform::Lock *)(v9 + 48), 0);
    v11 = (Scaleform::RefCountVImpl *)v10->pDelegate.pObject;
    if ( v11 )
      Scaleform::RefCountImpl::Release(v11);
    v10->pDelegate.pObject = 0i64;
  }
  else
  {
    v10 = 0i64;
  }
  v12 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  this->pStateBag.pObject = v10;
  if ( v10 )
  {
    v13 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            16i64);
    v14 = (Scaleform::Log *)v13;
    if ( v13 )
    {
      *(_QWORD *)v13 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v13 + 8) = 1;
      *(_QWORD *)v13 = &Scaleform::Log::`vftable';
    }
    else
    {
      v14 = 0i64;
    }
    Scaleform::GFx::StateBag::SetLog(&this->pStateBag.pObject->Scaleform::GFx::StateBag, v14);
    if ( v14 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v14);
    v15 = (Scaleform::GFx::ImageCreator *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                            Scaleform::Memory::pGlobalHeap,
                                            32i64);
    if ( v15 )
    {
      Scaleform::GFx::ImageCreator::ImageCreator(v15, 0i64);
      v17 = v16;
    }
    else
    {
      v17 = 0i64;
    }
    this->pStateBag.pObject->SetState(
      &this->pStateBag.pObject->Scaleform::GFx::StateBag,
      State_OrigNodeBounds|State_MaskNode,
      v17);
    if ( v17 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v17);
    v18 = (Scaleform::GFx::Clipboard *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                         Scaleform::Memory::pGlobalHeap,
                                         64i64);
    if ( v18 )
    {
      Scaleform::GFx::Clipboard::Clipboard(v18);
      v20 = v19;
    }
    else
    {
      v20 = 0i64;
    }
    this->pStateBag.pObject->SetState(
      &this->pStateBag.pObject->Scaleform::GFx::StateBag,
      State_Internal_MaskOwner|0x10,
      v20);
    if ( v20 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v20);
    v21 = (Scaleform::GFx::TextKeyMap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                          Scaleform::Memory::pGlobalHeap,
                                          48i64);
    if ( v21 )
    {
      Scaleform::GFx::TextKeyMap::TextKeyMap(v21);
      v3 = v22;
    }
    inited = Scaleform::GFx::TextKeyMap::InitWindowsKeyMap(v3);
    this->pStateBag.pObject->SetState(
      &this->pStateBag.pObject->Scaleform::GFx::StateBag,
      State_OrigNodeBounds|0x10,
      inited);
    if ( inited )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)inited);
  }
}

void __fastcall Scaleform::GFx::LoaderImpl::LoaderImpl(
        Scaleform::GFx::LoaderImpl *this,
        Scaleform::GFx::StateBag *pstates,
        Scaleform::GFx::ResourceLib *plib,
        bool debugHeap)
{
  Scaleform::GFx::ResourceWeakLib *pWeakLib; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v10; // rbx
  Scaleform::RefCountVImpl *v11; // rcx

  this->Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LoaderImpl_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LoaderImpl_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>'};
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>'};
  this->pStateBag.pObject = 0i64;
  this->pWeakResourceLib.pObject = 0i64;
  this->LoadProcesses.Root.pPrev = (Scaleform::GFx::LoadProcessNode *)&this->LoadProcesses;
  this->LoadProcesses.Root.pNext = (Scaleform::GFx::LoadProcessNode *)&this->LoadProcesses;
  Scaleform::Lock::Lock(&this->LoadProcessesLock, 0);
  this->DebugHeap = debugHeap;
  this->HttpFilesOpened.mHash.pTable = 0i64;
  if ( plib )
  {
    pWeakLib = plib->pWeakLib;
    if ( pWeakLib )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)plib->pWeakLib);
    pObject = (Scaleform::RefCountVImpl *)this->pWeakResourceLib.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pWeakResourceLib.pObject = pWeakLib;
  }
  v10 = (Scaleform::RefCountVImpl *)&pstates[-2];
  if ( !pstates )
    v10 = 0i64;
  if ( v10 )
    Scaleform::Render::RenderBuffer::AddRef(v10);
  v11 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject;
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  this->pStateBag.pObject = (Scaleform::GFx::StateBagImpl *)v10;
}

void __fastcall Scaleform::GFx::LoaderTask::LoaderTask(
        Scaleform::GFx::LoaderTask *this,
        Scaleform::GFx::LoadStates *pls,
        Scaleform::GFx::Task::TaskId id)
{
  this->ThisTaskId = id;
  this->__vftable = (Scaleform::GFx::LoaderTask_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::LoaderTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::LoaderTask_vtbl *)&Scaleform::GFx::LoaderTask::`vftable';
  this->CurrentState = State_Idle;
  if ( pls )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pls);
  this->pLoadStates.pObject = pls;
  Scaleform::GFx::LoaderImpl::RegisterLoadProcess(pls->pLoaderImpl.pObject, this);
}

void __fastcall Scaleform::GFx::MovieHeaderData::MovieHeaderData(Scaleform::GFx::MovieHeaderData *this)
{
  this->Version = -1;
  this->FileLength = 0;
  *(_QWORD *)&this->FrameRect.x1 = 0i64;
  *(_QWORD *)&this->FrameRect.x2 = 0i64;
  this->FPS = 1.0;
  this->SWFFlags = 0;
  Scaleform::String::String(&this->mExporterInfo.Prefix);
  Scaleform::String::String(&this->mExporterInfo.SWFName);
  this->mExporterInfo.CodeOffsets.Data.Data = 0i64;
  this->mExporterInfo.CodeOffsets.Data.Size = 0i64;
  this->mExporterInfo.CodeOffsets.Data.Policy.Capacity = 0i64;
  this->mExporterInfo.SI.Format = File_Unopened;
  this->mExporterInfo.SI.pSWFName = 0i64;
  this->mExporterInfo.SI.pPrefix = 0i64;
  this->mExporterInfo.SI.ExportFlags = 0;
  this->mExporterInfo.SI.Version = 0;
  this->FrameCount = 1;
}

void __fastcall Scaleform::GFx::MovieImageLoadTask::MovieImageLoadTask(
        Scaleform::GFx::MovieImageLoadTask *this,
        Scaleform::GFx::MovieDataDef *pdef,
        Scaleform::GFx::MovieDefImpl *pdefImpl,
        Scaleform::File *pin,
        Scaleform::GFx::FileTypeConstants::FileFormatType format,
        Scaleform::GFx::LoadStates *pls)
{
  this->__vftable = (Scaleform::GFx::MovieImageLoadTask_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::MovieImageLoadTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  this->RefCount = 1;
  this->ThisTaskId = Id_MovieImageLoad;
  this->__vftable = (Scaleform::GFx::MovieImageLoadTask_vtbl *)&Scaleform::GFx::LoaderTask::`vftable';
  this->CurrentState = State_Idle;
  if ( pls )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pls);
  this->pLoadStates.pObject = pls;
  Scaleform::GFx::LoaderImpl::RegisterLoadProcess(pls->pLoaderImpl.pObject, this);
  this->__vftable = (Scaleform::GFx::MovieImageLoadTask_vtbl *)&Scaleform::GFx::MovieImageLoadTask::`vftable';
  if ( pdef )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdef);
  this->pDef.pObject = pdef;
  if ( pdefImpl )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdefImpl);
  this->pDefImpl.pObject = pdefImpl;
  if ( pin )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pin);
  this->pImageFile.pObject = pin;
  this->ImageFormat = format;
  this->pImageRes.pObject = 0i64;
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rdi
  Scaleform::RefCountVImpl *SizeMask; // rcx
  volatile int *v6; // rbx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
      {
        SizeMask = (Scaleform::RefCountVImpl *)pTable[v2 + 2].SizeMask;
        if ( SizeMask )
          Scaleform::RefCountImpl::Release(SizeMask);
        v6 = (volatile int *)(pTable[v2 + 2].EntryCount & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
        pTable[v2 + 1].EntryCount = -2i64;
      }
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::ExporterInfoImpl::~ExporterInfoImpl(Scaleform::GFx::ExporterInfoImpl *this)
{
  volatile int *v2; // rbx
  volatile int *v3; // rbx

  if ( this->CodeOffsets.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v2 = (volatile int *)(this->SWFName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  v3 = (volatile int *)(this->Prefix.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
}

void __fastcall Scaleform::GFx::LoaderImpl::~LoaderImpl(Scaleform::GFx::LoaderImpl *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx

  this->Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::LoaderImpl_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>'};
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::GFx::StateBag'};
  this->Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>_vtbl *)&Scaleform::GFx::LoaderImpl::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>'};
  Scaleform::GFx::LoaderImpl::CancelLoading(this);
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(&this->HttpFilesOpened.mHash);
  Scaleform::Lock::~Lock(&this->LoadProcessesLock);
  pObject = (Scaleform::RefCountVImpl *)this->pWeakResourceLib.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  this->Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::LoaderImpl>_vtbl *)&Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::`vftable';
  this->Scaleform::GFx::StateBag::__vftable = (Scaleform::GFx::StateBag_vtbl *)&Scaleform::GFx::StateBag::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::LoaderTask::~LoaderTask(Scaleform::GFx::LoaderTask *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::GFx::LoaderTask_vtbl *)&Scaleform::GFx::LoaderTask::`vftable';
  Scaleform::GFx::LoaderImpl::UnRegisterLoadProcess(this->pLoadStates.pObject->pLoaderImpl.pObject, this);
  pObject = (Scaleform::RefCountVImpl *)this->pLoadStates.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->__vftable = (Scaleform::GFx::LoaderTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::MovieImageLoadTask::~MovieImageLoadTask(Scaleform::GFx::MovieImageLoadTask *this)
{
  Scaleform::GFx::ImageResource *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx
  Scaleform::GFx::MovieDefImpl *v4; // rcx
  Scaleform::GFx::MovieDataDef *v5; // rcx
  Scaleform::GFx::LoadStates *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  pObject = this->pImageRes.pObject;
  if ( pObject )
    Scaleform::GFx::Resource::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->pImageFile.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  v4 = this->pDefImpl.pObject;
  if ( v4 )
    Scaleform::GFx::Resource::Release(v4);
  v5 = this->pDef.pObject;
  if ( v5 )
    Scaleform::GFx::Resource::Release(v5);
  v6 = this->pLoadStates.pObject;
  this->__vftable = (Scaleform::GFx::MovieImageLoadTask_vtbl *)&Scaleform::GFx::LoaderTask::`vftable';
  Scaleform::GFx::LoaderImpl::UnRegisterLoadProcess(v6->pLoaderImpl.pObject, this);
  v7 = (Scaleform::RefCountVImpl *)this->pLoadStates.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->__vftable = (Scaleform::GFx::MovieImageLoadTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::LoaderImpl::BindMovieAndWait(
        Scaleform::GFx::MovieDefImpl *pm,
        Scaleform::GFx::MovieBindProcess *pbp,
        Scaleform::GFx::LoadStates *pls,
        unsigned int loadConstants,
        Scaleform::GFx::LoaderImpl::LoadStackItem *ploadStack)
{
  char v5; // si
  Scaleform::GFx::LoaderImpl::LoadStackItem *v9; // rdi
  Scaleform::GFx::LoaderImpl::LoadStackItem *v10; // rax
  unsigned int v11; // edx
  const char *v12; // rax
  const char *v13; // rax
  char *pData; // r8
  Scaleform::StringBuffer v16; // [rsp+20h] [rbp-38h] BYREF

  v5 = loadConstants;
  if ( pbp && ((loadConstants & 1) != 0 || !Scaleform::GFx::LoadStates::SubmitBackgroundTask(pls, pbp)) )
    pbp->Execute(pbp);
  v9 = ploadStack;
  v10 = ploadStack;
  if ( !ploadStack )
  {
LABEL_8:
    if ( (v5 & 1) != 0 )
    {
      v11 = 512;
    }
    else
    {
      if ( (v5 & 2) == 0 )
        return pm;
      v11 = 256;
    }
    if ( !Scaleform::GFx::MovieDefImpl::BindTaskData::WaitForBindStateFlags(pm->pBindData.pObject, v11) )
      goto LABEL_20;
    return pm;
  }
  while ( v10->pDefImpl != pm )
  {
    v10 = v10->pNext;
    if ( !v10 )
      goto LABEL_8;
  }
  if ( !v10->pNext )
    return pm;
  if ( !pls->pLog.pObject )
  {
LABEL_20:
    Scaleform::GFx::Resource::Release(pm);
    return 0i64;
  }
  Scaleform::StringBuffer::StringBuffer(&v16, Scaleform::Memory::pGlobalHeap);
  do
  {
    v12 = v9->pDefImpl->GetFileURL(v9->pDefImpl);
    Scaleform::StringBuffer::AppendString(&v16, v12, -1i64);
    Scaleform::StringBuffer::AppendChar(&v16, 0xAu);
    v9 = v9->pNext;
  }
  while ( v9 );
  v13 = pm->GetFileURL(pm);
  Scaleform::StringBuffer::AppendString(&v16, v13, -1i64);
  pData = (char *)&pnewText;
  if ( v16.pData )
    pData = v16.pData;
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
    &pls->pLog.pObject->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
    "Recursive import detected. Import stack:\n%s",
    pData);
  Scaleform::StringBuffer::~StringBuffer(&v16);
  Scaleform::GFx::Resource::Release(pm);
  return 0i64;
}

void __fastcall Scaleform::GFx::LoaderImpl::CancelLoading(Scaleform::GFx::LoaderImpl *this)
{
  Scaleform::RefCountVImpl *v2; // rbx
  Scaleform::GFx::LoaderImpl *i; // rsi

  v2 = (Scaleform::RefCountVImpl *)this->pStateBag.pObject->GetStateAddRef(
                                     &this->pStateBag.pObject->Scaleform::GFx::StateBag,
                                     24i64);
  if ( v2 )
  {
    Scaleform::Lock::DoLock(&this->LoadProcessesLock);
    for ( i = (Scaleform::GFx::LoaderImpl *)this->LoadProcesses.Root.pNext;
          i != (Scaleform::GFx::LoaderImpl *)&this->LoadProcesses;
          i = (Scaleform::GFx::LoaderImpl *)this->LoadProcesses.Root.pNext )
    {
      i->Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable[1].~RefCountImplCore = *(void (__fastcall **)(Scaleform::RefCountImplCore *))&i->RefCount;
      **(_QWORD **)&i->RefCount = i->Scaleform::RefCountBase<Scaleform::GFx::LoaderImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::StateBag_vtbl *))v2->Release)(
        v2,
        i->Scaleform::GFx::StateBag::__vftable);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, i);
    }
    Scaleform::Lock::Unlock(&this->LoadProcessesLock);
    Scaleform::RefCountImpl::Release(v2);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2>,Scaleform::ArrayDefaultPolicy>>::Clear(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMAbcFile *,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329>,Scaleform::ArrayDefaultPolicy> > *this)
{
  unsigned __int64 Capacity; // rax

  if ( this->Data.Size && (Capacity = this->Data.Policy.Capacity, (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0) && Capacity )
  {
    if ( this->Data.Data )
    {
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->Data.Data = 0i64;
    }
    this->Data.Policy.Capacity = 0i64;
    this->Data.Size = 0i64;
  }
  else
  {
    this->Data.Size = 0i64;
  }
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>::Clear(
        Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  volatile int *v3; // rbx

  pObject = (Scaleform::RefCountVImpl *)this->Value.Second.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (volatile int *)(this->Value.First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  this->NextInChain = -2i64;
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::LoaderImpl::CreateMovie(
        Scaleform::GFx::LoaderImpl *this,
        const char *pfilename,
        unsigned int loadConstants,
        unsigned __int64 memoryArena)
{
  Scaleform::GFx::LoadStates *v8; // rax
  Scaleform::GFx::MovieDefImpl *v9; // rsi
  Scaleform::GFx::LoadStates *v10; // rax
  Scaleform::GFx::LoadStates *v11; // rdi
  void *v12; // rbx
  void *v13; // rbx
  Scaleform::GFx::MovieDefImpl *v14; // rax
  void *v15; // rbx
  void *v16; // rbx
  Scaleform::String src; // [rsp+30h] [rbp-48h] BYREF
  Scaleform::String v19; // [rsp+38h] [rbp-40h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo loc; // [rsp+40h] [rbp-38h] BYREF

  v8 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 144i64, 0i64);
  v9 = 0i64;
  if ( v8 )
  {
    Scaleform::GFx::LoadStates::LoadStates(v8, this, 0i64, 0i64);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  if ( (loadConstants & 0x40) != 0 )
    v11->ThreadedLoading = 1;
  if ( v11->pWeakResourceLib.pObject )
  {
    Scaleform::String::String(&v19, &pnewText);
    Scaleform::String::String(&src, pfilename);
    loc.Use = File_Regular;
    Scaleform::String::String(&loc.FileName, &src);
    Scaleform::String::String(&loc.ParentPath, &v19);
    v12 = (void *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
    v13 = (void *)(v19.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v19.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13);
    v14 = Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(v11, &loc, loadConstants, 0i64, memoryArena);
    v15 = (void *)(loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v9 = v14;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
    v16 = (void *)(loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v16);
  }
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
  return v9;
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::LoaderImpl::CreateMovieDefImpl(
        Scaleform::GFx::LoadStates *pls,
        Scaleform::GFx::MovieDataDef *pmd,
        unsigned int loadConstants,
        Scaleform::GFx::MovieBindProcess **ppbindProcess,
        bool checkCreate,
        Scaleform::GFx::LoaderImpl::LoadStackItem *ploadStack,
        unsigned __int64 memoryArena)
{
  Scaleform::GFx::MovieDefBindStates *pObject; // rbx
  Scaleform::GFx::MovieDefImpl *v10; // rdi
  Scaleform::GFx::MovieDefImpl *v13; // rax
  Scaleform::GFx::MovieDefImpl *v14; // rax
  Scaleform::GFx::MovieDefImpl *v15; // rbx
  Scaleform::GFx::MovieBindProcess *v16; // rax
  Scaleform::GFx::MovieBindProcess *v17; // rax
  void *v18; // rbx
  const char *Error; // rax
  Scaleform::GFx::ResourceLib::BindHandle phandle; // [rsp+50h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceKey result; // [rsp+60h] [rbp-28h] BYREF
  Scaleform::String v23; // [rsp+90h] [rbp+8h] BYREF

  pObject = pls->pBindStates.pObject;
  v10 = 0i64;
  phandle.State = RS_Unbound;
  phandle.pResource = 0i64;
  Scaleform::GFx::MovieDefImpl::CreateMovieKey(&result, pmd, pObject);
  if ( Scaleform::GFx::ResourceWeakLib::BindResourceKey(pls->pWeakResourceLib.pObject, &phandle, &result) == RS_NeedsResolve )
  {
    v13 = (Scaleform::GFx::MovieDefImpl *)Scaleform::Memory::pGlobalHeap->Alloc(
                                            Scaleform::Memory::pGlobalHeap,
                                            120i64,
                                            0i64);
    if ( v13 )
    {
      Scaleform::GFx::MovieDefImpl::MovieDefImpl(
        v13,
        pmd,
        pObject,
        pls->pLoaderImpl.pObject,
        loadConstants,
        pls->pLoaderImpl.pObject->pStateBag.pObject,
        Scaleform::Memory::pGlobalHeap,
        0,
        memoryArena);
      v15 = v14;
    }
    else
    {
      v15 = 0i64;
    }
    if ( ppbindProcess )
    {
      v16 = (Scaleform::GFx::MovieBindProcess *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  96i64);
      if ( v16 )
        Scaleform::GFx::MovieBindProcess::MovieBindProcess(v16, pls, v15, ploadStack);
      else
        v17 = 0i64;
      *ppbindProcess = v17;
      if ( !v17 )
      {
        if ( v15 )
          Scaleform::GFx::Resource::Release(v15);
        goto LABEL_12;
      }
    }
    if ( !v15 )
    {
LABEL_12:
      Scaleform::String::String(
        &v23,
        "Failed to bind SWF file \"",
        (const char *)((pmd->pData.pObject->FileURL.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        "\"\n");
      Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(
        phandle.pSlot,
        (const char *)((v23.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      v18 = (void *)(v23.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v23.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18);
      goto LABEL_17;
    }
    Scaleform::GFx::ResourceLib::ResourceSlot::Resolve(phandle.pSlot, v15);
LABEL_16:
    v10 = v15;
    goto LABEL_17;
  }
  v15 = (Scaleform::GFx::MovieDefImpl *)Scaleform::GFx::ResourceLib::BindHandle::WaitForResolve(&phandle);
  if ( v15 )
    goto LABEL_16;
  if ( pls->pLog.pObject )
  {
    if ( phandle.State < RS_WaitingResolve )
      Error = &pnewText;
    else
      Error = Scaleform::GFx::ResourceLib::ResourceSlot::GetError(phandle.pSlot);
    Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
      &pls->pLog.pObject->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
      "%s",
      Error);
  }
LABEL_17:
  if ( result.pKeyInterface )
    result.pKeyInterface->Release(result.pKeyInterface, result.hKeyData);
  if ( phandle.State == RS_Available )
  {
    Scaleform::GFx::Resource::Release(phandle.pResource);
  }
  else if ( phandle.State >= RS_WaitingResolve )
  {
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)phandle.pResource);
  }
  return v10;
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(
        Scaleform::GFx::LoadStates *pls,
        const Scaleform::GFx::URLBuilder::LocationInfo *loc,
        unsigned int loadConstants,
        Scaleform::GFx::LoaderImpl::LoadStackItem *ploadStack,
        unsigned __int64 memoryArena)
{
  Scaleform::GFx::MovieDefImpl *v6; // r12
  unsigned int v9; // ecx
  Scaleform::GFx::MovieDefBindStates *v10; // rax
  __int64 v11; // rbx
  Scaleform::GFx::MovieDataDef *v12; // rdi
  __int64 v13; // r15
  Scaleform::RefCountVImpl *v14; // rsi
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // er14
  Scaleform::GFx::FileOpener *v18; // rcx
  __int64 v19; // rax
  char IsProtocol; // al
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v21; // rax
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v22; // r14
  Scaleform::MemoryFile *v23; // rax
  Scaleform::File *v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  Scaleform::String *v27; // rax
  char v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  char v31; // al
  void *v32; // r14
  unsigned __int64 Length; // rax
  Scaleform::String *v34; // rax
  const Scaleform::String *v35; // rax
  void *v36; // r14
  void *v37; // r14
  Scaleform::String::DataDesc *pData; // rax
  const char *v39; // r9
  const char *v40; // rdx
  unsigned __int64 v41; // rdi
  Scaleform::GFx::MovieDataDef *v42; // rax
  Scaleform::GFx::MovieDataDef *v43; // rax
  int v44; // eax
  Scaleform::GFx::LoadProcess *v45; // rax
  __int64 v46; // rax
  Scaleform::GFx::MovieBindProcess **v47; // r9
  Scaleform::GFx::MovieDefImpl *MovieDefImpl; // rax
  char v49; // al
  Scaleform::GFx::MovieDefImpl *v50; // rdx
  void *v51; // r14
  Scaleform::GFx::Resource *v52; // rax
  Scaleform::GFx::LogState *v53; // r14
  const char *Error; // rax
  Scaleform::GFx::MovieBindProcess **v55; // r9
  Scaleform::GFx::MovieDefImpl *v56; // rax
  Scaleform::Render::DepthStencilSurface *v57; // r14
  Scaleform::GFx::MovieImageLoadTask *v58; // rax
  Scaleform::RefCountVImpl *v59; // rax
  Scaleform::RefCountVImpl *v60; // r14
  void *v61; // rbx
  Scaleform::String pdest; // [rsp+40h] [rbp-41h] BYREF
  unsigned int loadConstantsa; // [rsp+48h] [rbp-39h]
  Scaleform::GFx::MovieDefImpl *pdefImpl; // [rsp+50h] [rbp-31h]
  Scaleform::String pimageCreator; // [rsp+58h] [rbp-29h] BYREF
  Scaleform::GFx::ResourceLib::BindHandle phandle; // [rsp+60h] [rbp-21h] BYREF
  int v68; // [rsp+70h] [rbp-11h]
  Scaleform::GFx::FileTypeConstants::FileFormatType format; // [rsp+74h] [rbp-Dh]
  __int64 v70; // [rsp+78h] [rbp-9h] BYREF
  Scaleform::String v71; // [rsp+80h] [rbp-1h] BYREF
  Scaleform::GFx::LogState *pObject; // [rsp+88h] [rbp+7h]
  Scaleform::GFx::ResourceKey result; // [rsp+90h] [rbp+Fh] BYREF
  Scaleform::GFx::FileOpener *pfileOpener; // [rsp+E0h] [rbp+5Fh] BYREF
  char v75; // [rsp+F0h] [rbp+6Fh]
  Scaleform::GFx::LoaderImpl::LoadStackItem *ploadStacka; // [rsp+F8h] [rbp+77h]

  ploadStacka = ploadStack;
  v6 = 0i64;
  LODWORD(v71.pData) = 0;
  Scaleform::String::String(&pdest);
  Scaleform::GFx::LoadStates::BuildURL(pls, &pdest, loc);
  pObject = pls->pLog.pObject;
  v9 = loadConstants | 0x11;
  v10 = pls->pBindStates.pObject;
  v11 = 0i64;
  phandle.State = RS_Unbound;
  v12 = 0i64;
  phandle.pResource = 0i64;
  v13 = 0i64;
  pdefImpl = 0i64;
  v14 = 0i64;
  v15 = v10->pImagePackParams.pObject == 0i64;
  v75 = 0;
  if ( v15 )
    v9 = loadConstants;
  v70 = 0i64;
  loadConstantsa = v9;
  v16 = v9 >> 4;
  v17 = v9;
  format = File_Unopened;
  LOBYTE(v16) = (v9 & 0x10) == 0;
  v68 = v16;
  pimageCreator.pData = (Scaleform::String::DataDesc *)Scaleform::GFx::LoadStates::GetLoadTimeImageCreator(pls, v9);
  v18 = pls->pBindStates.pObject->pFileOpener.pObject;
  pfileOpener = v18;
  if ( v18 )
  {
    v19 = v18->GetFileModifyTime(v18, (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
    v18 = pfileOpener;
  }
  else
  {
    v19 = 0i64;
  }
  Scaleform::GFx::MovieDataDef::CreateMovieFileKey(
    &result,
    (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    v19,
    v18,
    (Scaleform::GFx::ImageCreator *)pimageCreator.pData);
  if ( Scaleform::GFx::ResourceWeakLib::BindResourceKey(pls->pWeakResourceLib.pObject, &phandle, &result) == RS_NeedsResolve )
  {
    IsProtocol = Scaleform::GFx::URLBuilder::IsProtocol(&pdest);
    LODWORD(pfileOpener) = 1;
    if ( IsProtocol )
    {
      v21 = Scaleform::GFx::LoaderImpl::ReadProtocolFile(pls->pLoaderImpl.pObject, &pdest);
      v22 = v21;
      if ( !v21 || !v21->Data.Size )
        goto LABEL_15;
      v23 = (Scaleform::MemoryFile *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                       Scaleform::Memory::pGlobalHeap,
                                       48i64);
      if ( !v23 )
      {
LABEL_14:
        if ( v14 )
        {
          v28 = 0;
LABEL_20:
          v75 = 0;
LABEL_21:
          if ( (v28 & 1) != 0 )
          {
            v32 = (void *)(pimageCreator.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                   (volatile int *)((pimageCreator.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                   -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v32);
          }
          if ( v75 )
          {
            Length = Scaleform::String::GetLength(&pdest);
            v34 = Scaleform::String::Substring(&pdest, &v71, 0i64, Length - 3);
            v35 = Scaleform::String::operator+(v34, &pimageCreator, "dds");
            Scaleform::String::operator=(&pdest, v35);
            v36 = (void *)(pimageCreator.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                   (volatile int *)((pimageCreator.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                   -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v36);
            v37 = (void *)(v71.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                   (volatile int *)((v71.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                   -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v37);
            v17 = loadConstantsa;
            pData = (Scaleform::String::DataDesc *)Scaleform::GFx::LoadStates::OpenFile(
                                                     pls,
                                                     (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                                                     loadConstantsa);
            pimageCreator.pData = pData;
            if ( v14 )
            {
              Scaleform::RefCountImpl::Release(v14);
              pData = pimageCreator.pData;
            }
            v14 = (Scaleform::RefCountVImpl *)pData;
          }
          else
          {
            v17 = loadConstantsa;
          }
          if ( !v14 )
          {
            Scaleform::String::String(
              (Scaleform::String *)&pfileOpener,
              "Loader failed to open \"",
              (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
              "\"\n");
LABEL_63:
            Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(
              phandle.pSlot,
              (const char *)(((unsigned __int64)pfileOpener & 0xFFFFFFFFFFFFFFFCui64) + 12));
            v51 = (void *)((unsigned __int64)pfileOpener & 0xFFFFFFFFFFFFFFFCui64);
            if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                   (volatile int *)(((unsigned __int64)pfileOpener & 0xFFFFFFFFFFFFFFFCui64) + 8),
                   -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v51);
            goto LABEL_108;
          }
          format = Scaleform::GFx::LoaderImpl::DetectFileFormat((Scaleform::File *)v14);
          switch ( format )
          {
            case File_SWF:
              if ( (v17 & 0x80000) == 0 )
                goto $LN2_3;
              v39 = "\" - GFX file format expected";
              v40 = "Failed loading SWF file \"";
              goto LABEL_61;
            case File_GFX:
              goto $LN2_3;
            case File_JPEG:
            case File_PNG:
            case File_GIF:
            case File_TGA:
            case File_DDS:
            case File_HDR:
            case File_BMP:
            case File_DIB:
            case File_PFM:
            case File_TIFF:
            case File_PVR:
            case File_ETC:
            case File_SIF:
            case File_GXT:
            case File_GNF:
            case File_KTX:
              if ( (v17 & 0x10000) == 0 )
                goto LABEL_60;
              LODWORD(pfileOpener) = 2;
$LN2_3:
              v41 = pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
              v42 = (Scaleform::GFx::MovieDataDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                      Scaleform::Memory::pGlobalHeap,
                                                      72i64);
              if ( v42 )
              {
                Scaleform::GFx::MovieDataDef::MovieDataDef(
                  v42,
                  &result,
                  (Scaleform::GFx::MovieDataDef::MovieDataType)pfileOpener,
                  (const char *)(v41 + 12),
                  0i64,
                  (v17 & 0x10000000) != 0,
                  memoryArena);
                v12 = v43;
              }
              else
              {
                v12 = 0i64;
              }
              if ( !v12 )
                goto LABEL_51;
              Scaleform::GFx::LoadStates::SetRelativePathForDataDef(pls, v12);
              v44 = (int)pfileOpener;
              if ( (_DWORD)pfileOpener != 1 )
                goto LABEL_54;
              v45 = (Scaleform::GFx::LoadProcess *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     1056i64,
                                                     0i64);
              if ( v45 )
              {
                Scaleform::GFx::LoadProcess::LoadProcess(v45, v12, pls, v17);
                v11 = v46;
              }
              if ( !v11 )
                goto LABEL_50;
              if ( !Scaleform::GFx::LoadProcess::BeginSWFLoading(
                      (Scaleform::GFx::LoadProcess *)v11,
                      (Scaleform::File *)v14) )
              {
                Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
LABEL_50:
                v11 = 0i64;
                Scaleform::GFx::Resource::Release(v12);
                v12 = 0i64;
LABEL_51:
                Scaleform::String::String(
                  (Scaleform::String *)&pfileOpener,
                  "Failed to load SWF file \"",
                  (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  "\"\n");
                goto LABEL_63;
              }
              if ( (_BYTE)v68 )
              {
                v44 = (int)pfileOpener;
LABEL_54:
                v47 = (Scaleform::GFx::MovieBindProcess **)&v70;
                if ( v44 != 1 )
                  v47 = 0i64;
                MovieDefImpl = Scaleform::GFx::LoaderImpl::CreateMovieDefImpl(
                                 pls,
                                 v12,
                                 v17,
                                 v47,
                                 1,
                                 ploadStacka,
                                 memoryArena);
                v13 = v70;
                pdefImpl = MovieDefImpl;
              }
              Scaleform::GFx::ResourceLib::ResourceSlot::Resolve(phandle.pSlot, v12);
              v49 = 1;
              v50 = pdefImpl;
              v75 = 1;
              if ( (_BYTE)v68 )
                goto LABEL_75;
              if ( pdefImpl )
                goto LABEL_77;
              break;
            default:
LABEL_60:
              v39 = "\"";
              v40 = "Unknown file format at URL \"";
LABEL_61:
              Scaleform::String::String(
                (Scaleform::String *)&pfileOpener,
                v40,
                (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                v39);
              if ( pObject )
                Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
                  &pObject->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
                  "%s",
                  (const char *)(((unsigned __int64)pfileOpener & 0xFFFFFFFFFFFFFFFCui64) + 12));
              goto LABEL_63;
          }
          goto LABEL_72;
        }
LABEL_15:
        v25 = Scaleform::String::GetLength(&pdest);
        v26 = Scaleform::String::GetLength(&pdest);
        v27 = Scaleform::String::Substring(&pdest, &pimageCreator, v26 - 3, v25);
        v28 = 1;
        v29 = 0i64;
        v30 = v27->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
        while ( 1 )
        {
          v31 = *(_BYTE *)(v30 + v29++ + 12);
          if ( v31 != aPng_1[v29 - 1] )
            goto LABEL_20;
          if ( v29 == 4 )
          {
            v75 = 1;
            goto LABEL_21;
          }
        }
      }
      Scaleform::MemoryFile::MemoryFile(v23, &pdest, v22->Data.Data, v22->Data.Size);
    }
    else
    {
      v24 = Scaleform::GFx::LoadStates::OpenFile(
              pls,
              (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
              v17);
    }
    v14 = (Scaleform::RefCountVImpl *)v24;
    goto LABEL_14;
  }
  v52 = Scaleform::GFx::ResourceLib::BindHandle::WaitForResolve(&phandle);
  v12 = (Scaleform::GFx::MovieDataDef *)v52;
  if ( !v52 )
  {
    v53 = pObject;
    if ( pObject )
    {
      if ( phandle.State < RS_WaitingResolve )
        Error = &pnewText;
      else
        Error = Scaleform::GFx::ResourceLib::ResourceSlot::GetError(phandle.pSlot);
      Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
        &v53->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
        "%s",
        Error);
    }
    goto LABEL_108;
  }
  LODWORD(pfileOpener) = v52[2].RefCount.Value;
  Scaleform::GFx::LoadStates::SetRelativePathForDataDef(pls, (Scaleform::GFx::MovieDataDef *)v52);
LABEL_72:
  v55 = (Scaleform::GFx::MovieBindProcess **)&v70;
  if ( (_DWORD)pfileOpener != 1 )
    v55 = 0i64;
  v56 = Scaleform::GFx::LoaderImpl::CreateMovieDefImpl(pls, v12, v17, v55, 0, ploadStacka, memoryArena);
  v13 = v70;
  v50 = v56;
  pdefImpl = v56;
  v49 = v75;
LABEL_75:
  if ( v50 )
  {
    if ( v49 )
    {
LABEL_77:
      if ( (_DWORD)pfileOpener == 1 )
      {
        v15 = (v17 & 0x10) == 0;
        v57 = (Scaleform::Render::DepthStencilSurface *)v13;
        if ( !v15 )
          v57 = 0i64;
        if ( v57 )
          Scaleform::Render::DepthStencilBuffer::initSurface((Scaleform::Render::DepthStencilBuffer *)v11, v57);
        if ( v13 )
          *(_QWORD *)(v11 + 880) = *(_QWORD *)(v13 + 88);
        if ( (loadConstantsa & 1) != 0
          || !Scaleform::GFx::LoadStates::SubmitBackgroundTask(pls, (Scaleform::GFx::LoaderTask *)v11) )
        {
          (*(void (__fastcall **)(__int64, Scaleform::GFx::MovieDefImpl *))(*(_QWORD *)v11 + 8i64))(v11, v50);
        }
        if ( v57 )
        {
          if ( v13 )
            Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v13);
          v13 = 0i64;
        }
        if ( v11 )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
        v11 = 0i64;
        if ( v14 )
          Scaleform::RefCountImpl::Release(v14);
        v14 = 0i64;
      }
      else
      {
        v58 = (Scaleform::GFx::MovieImageLoadTask *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                      Scaleform::Memory::pGlobalHeap,
                                                      72i64);
        if ( v58 )
        {
          Scaleform::GFx::MovieImageLoadTask::MovieImageLoadTask(
            v58,
            v12,
            pdefImpl,
            (Scaleform::File *)v14,
            format,
            pls);
          v60 = v59;
        }
        else
        {
          v60 = 0i64;
        }
        if ( (loadConstantsa & 0x11) != 0
          || !Scaleform::GFx::LoadStates::SubmitBackgroundTask(pls, (Scaleform::GFx::LoaderTask *)v60) )
        {
          v60->AddRef(v60);
          if ( !v60[4].__vftable )
          {
            if ( pdefImpl )
              Scaleform::GFx::Resource::Release(pdefImpl);
            Scaleform::RefCountImpl::Release(v60);
            goto LABEL_108;
          }
        }
        if ( v60 )
          Scaleform::RefCountImpl::Release(v60);
      }
    }
    v6 = Scaleform::GFx::LoaderImpl::BindMovieAndWait(
           pdefImpl,
           (Scaleform::GFx::MovieBindProcess *)v13,
           pls,
           loadConstantsa,
           ploadStacka);
  }
LABEL_108:
  if ( result.pKeyInterface )
    result.pKeyInterface->Release(result.pKeyInterface, result.hKeyData);
  if ( v14 )
    Scaleform::RefCountImpl::Release(v14);
  if ( v11 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
  if ( v13 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v13);
  if ( v12 )
    Scaleform::GFx::Resource::Release(v12);
  if ( phandle.State == RS_Available )
  {
    Scaleform::GFx::Resource::Release(phandle.pResource);
  }
  else if ( phandle.State >= RS_WaitingResolve )
  {
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)phandle.pResource);
  }
  v61 = (void *)(pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v61);
  return v6;
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(
        Scaleform::GFx::LoadStates *pls,
        const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *bytes,
        unsigned int loadConstants,
        Scaleform::GFx::LoaderImpl::LoadStackItem *ploadStack,
        unsigned __int64 memoryArena)
{
  const void *RawTicks; // rdi
  Scaleform::GFx::MovieDefBindStates *pObject; // rcx
  Scaleform::GFx::LogState *v9; // rax
  Scaleform::GFx::MovieDefImpl *v10; // r12
  unsigned int v11; // er13
  __int64 v12; // rbx
  bool v13; // zf
  Scaleform::GFx::MovieDataDef *v14; // r14
  Scaleform::RefCountVImpl *v15; // rsi
  Scaleform::GFx::LoadStates *v16; // r15
  void *v17; // rdi
  unsigned __int64 v18; // r15
  int v19; // eax
  Scaleform::String::DataDesc *pData; // r15
  Scaleform::GFx::MovieDataDef::MovieDataType v21; // er14
  Scaleform::GFx::MovieDataDef *v22; // rax
  Scaleform::GFx::MovieDataDef *v23; // rax
  Scaleform::GFx::LoadProcess *v24; // rax
  __int64 v25; // rax
  Scaleform::RefCountVImpl **v26; // r9
  int v27; // esi
  Scaleform::RefCountVImpl *v28; // r15
  Scaleform::GFx::MovieImageLoadTask *v29; // rax
  Scaleform::RefCountVImpl *v30; // rax
  Scaleform::RefCountVImpl *v31; // rsi
  volatile int *v32; // r15
  int pdefImpl; // [rsp+40h] [rbp-C0h]
  Scaleform::GFx::MovieDefImpl *pdefImpla; // [rsp+40h] [rbp-C0h]
  Scaleform::RefCountVImpl *v36; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::GFx::LoadStates *pstates; // [rsp+50h] [rbp-B0h]
  Scaleform::String v38; // [rsp+58h] [rbp-A8h] BYREF
  Scaleform::GFx::ResourceLib::BindHandle phandle; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::FileTypeConstants::FileFormatType format[2]; // [rsp+70h] [rbp-90h]
  Scaleform::String v41; // [rsp+78h] [rbp-88h] BYREF
  Scaleform::String v42; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-78h]
  Scaleform::GFx::LoaderImpl::LoadStackItem *ploadStacka; // [rsp+90h] [rbp-70h]
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *v45; // [rsp+98h] [rbp-68h]
  Scaleform::GFx::ResourceKey result; // [rsp+A0h] [rbp-60h] BYREF
  char dest[128]; // [rsp+B0h] [rbp-50h] BYREF

  v43 = memoryArena;
  ploadStacka = ploadStack;
  v38.pData = (Scaleform::String::DataDesc *)bytes;
  pstates = pls;
  RawTicks = (const void *)Scaleform::Timer::GetRawTicks();
  Scaleform::SFsprintf(dest, 0x80ui64, "*Bytes@%p*", RawTicks);
  pObject = pls->pBindStates.pObject;
  v9 = pls->pLog.pObject;
  v10 = 0i64;
  phandle.State = RS_Unbound;
  v11 = loadConstants | 0x11;
  phandle.pResource = 0i64;
  v12 = 0i64;
  v45 = (Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *)v9;
  v13 = pObject->pImagePackParams.pObject == 0i64;
  v36 = 0i64;
  if ( v13 )
    v11 = loadConstants;
  v14 = 0i64;
  v15 = 0i64;
  Scaleform::GFx::MovieDataDef::CreateMovieFileKey(&result, dest, (__int64)RawTicks, 0i64, 0i64);
  v16 = pstates;
  Scaleform::GFx::ResourceWeakLib::BindResourceKey(pstates->pWeakResourceLib.pObject, &phandle, &result);
  v17 = Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 48i64, 0i64);
  pdefImpl = 1;
  if ( v17 )
  {
    v18 = *(_QWORD *)v38.HeapTypeBits;
    *(_QWORD *)format = *(_QWORD *)&v38.pData->RefCount;
    *(_QWORD *)v17 = &Scaleform::RefCountImplCore::`vftable';
    *((_DWORD *)v17 + 2) = 1;
    *(_QWORD *)v17 = &Scaleform::MemoryFile::`vftable';
    Scaleform::String::String((Scaleform::String *)v17 + 2, dest);
    v19 = format[0];
    *((Scaleform::GFx::FileTypeConstants::FileFormatType *)v17 + 8) = format[0];
    *((_QWORD *)v17 + 3) = v18;
    *((_DWORD *)v17 + 9) = 0;
    if ( v18 && v19 > 0 )
    {
      v16 = pstates;
      *((_BYTE *)v17 + 40) = 1;
    }
    else
    {
      v16 = pstates;
      *((_BYTE *)v17 + 40) = 0;
    }
  }
  else
  {
    v17 = 0i64;
  }
  format[0] = Scaleform::GFx::LoaderImpl::DetectFileFormat((Scaleform::File *)v17);
  switch ( format[0] )
  {
    case File_SWF:
      if ( (v11 & 0x80000) == 0 )
        goto $LN6_51;
      Scaleform::String::String(&v41, "Failed loading SWF file \"", dest, "\" - GFX file format expected");
      if ( v45 )
        Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
          v45 + 3,
          "%s",
          (const char *)((v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(
        phandle.pSlot,
        (const char *)((v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      pData = v41.pData;
      goto LABEL_66;
    case File_GFX:
$LN6_51:
      v21 = MT_Flash;
      goto LABEL_17;
    case File_JPEG:
    case File_PNG:
    case File_GIF:
    case File_TGA:
    case File_DDS:
    case File_HDR:
    case File_BMP:
    case File_DIB:
    case File_PFM:
    case File_TIFF:
    case File_PVR:
    case File_ETC:
    case File_SIF:
    case File_GXT:
    case File_GNF:
      if ( (v11 & 0x10000) == 0 )
        goto LABEL_63;
      v21 = MT_Image;
      pdefImpl = 2;
LABEL_17:
      v22 = (Scaleform::GFx::MovieDataDef *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                              Scaleform::Memory::pGlobalHeap,
                                              72i64);
      if ( v22 )
      {
        Scaleform::GFx::MovieDataDef::MovieDataDef(v22, &result, v21, dest, 0i64, (v11 & 0x10000000) != 0, v43);
        v14 = v23;
      }
      else
      {
        v14 = 0i64;
      }
      if ( !v14 )
        goto LABEL_28;
      Scaleform::GFx::LoadStates::SetRelativePathForDataDef(v16, v14);
      if ( pdefImpl != 1 )
        goto LABEL_29;
      v24 = (Scaleform::GFx::LoadProcess *)Scaleform::Memory::pGlobalHeap->Alloc(
                                             Scaleform::Memory::pGlobalHeap,
                                             1056i64,
                                             0i64);
      if ( v24 )
      {
        Scaleform::GFx::LoadProcess::LoadProcess(v24, v14, v16, v11);
        v12 = v25;
      }
      if ( !v12 )
        goto LABEL_27;
      if ( Scaleform::GFx::LoadProcess::BeginSWFLoading((Scaleform::GFx::LoadProcess *)v12, (Scaleform::File *)v17) )
      {
LABEL_29:
        v26 = &v36;
        v27 = pdefImpl;
        if ( pdefImpl != 1 )
          v26 = 0i64;
        pdefImpla = Scaleform::GFx::LoaderImpl::CreateMovieDefImpl(
                      v16,
                      v14,
                      v11,
                      (Scaleform::GFx::MovieBindProcess **)v26,
                      1,
                      ploadStacka,
                      v43);
        Scaleform::GFx::ResourceLib::ResourceSlot::Resolve(phandle.pSlot, v14);
        if ( pdefImpla )
        {
          if ( v27 == 1 )
          {
            v15 = v36;
            v28 = v36;
            if ( (v11 & 0x10) != 0 )
              v28 = 0i64;
            if ( v28 )
              Scaleform::Render::DepthStencilBuffer::initSurface(
                (Scaleform::Render::DepthStencilBuffer *)v12,
                (Scaleform::Render::DepthStencilSurface *)v28);
            if ( v15 )
              *(_QWORD *)(v12 + 880) = *(_QWORD *)&v15[5].RefCount;
            if ( (v11 & 1) != 0
              || !Scaleform::GFx::LoadStates::SubmitBackgroundTask(pstates, (Scaleform::GFx::LoaderTask *)v12) )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8i64))(v12);
            }
            if ( v28 )
            {
              if ( v15 )
                Scaleform::RefCountImpl::Release(v15);
              v15 = 0i64;
            }
            if ( v12 )
              Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
            v12 = 0i64;
            if ( v17 )
              Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v17);
            v16 = pstates;
            v17 = 0i64;
LABEL_62:
            v10 = Scaleform::GFx::LoaderImpl::BindMovieAndWait(
                    pdefImpla,
                    (Scaleform::GFx::MovieBindProcess *)v15,
                    v16,
                    v11,
                    ploadStacka);
            goto LABEL_68;
          }
          v29 = (Scaleform::GFx::MovieImageLoadTask *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        72i64);
          if ( v29 )
          {
            Scaleform::GFx::MovieImageLoadTask::MovieImageLoadTask(
              v29,
              v14,
              pdefImpla,
              (Scaleform::File *)v17,
              format[0],
              v16);
            v31 = v30;
          }
          else
          {
            v31 = 0i64;
          }
          if ( (v11 & 0x11) == 0
            && Scaleform::GFx::LoadStates::SubmitBackgroundTask(v16, (Scaleform::GFx::LoaderTask *)v31)
            || (v31->AddRef(v31), v31[4].__vftable) )
          {
            if ( v31 )
              Scaleform::RefCountImpl::Release(v31);
            v15 = v36;
            goto LABEL_62;
          }
          Scaleform::GFx::Resource::Release(pdefImpla);
          Scaleform::RefCountImpl::Release(v31);
        }
        v15 = v36;
        goto LABEL_68;
      }
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
LABEL_27:
      v12 = 0i64;
      Scaleform::GFx::Resource::Release(v14);
      v14 = 0i64;
LABEL_28:
      Scaleform::String::String(&v38, "Failed to load SWF file \"", dest, "\"\n");
      Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(
        phandle.pSlot,
        (const char *)((v38.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      pData = v38.pData;
LABEL_66:
      v32 = (volatile int *)((unsigned __int64)pData & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v32 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v32);
LABEL_68:
      if ( result.pKeyInterface )
        result.pKeyInterface->Release(result.pKeyInterface, result.hKeyData);
      if ( v17 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v17);
      if ( v12 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
      if ( v15 )
        Scaleform::RefCountImpl::Release(v15);
      if ( v14 )
        Scaleform::GFx::Resource::Release(v14);
      if ( phandle.State == RS_Available )
      {
        Scaleform::GFx::Resource::Release(phandle.pResource);
      }
      else if ( phandle.State >= RS_WaitingResolve )
      {
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)phandle.pResource);
      }
      return v10;
    default:
LABEL_63:
      Scaleform::String::String(&v42, "Unknown file format at URL \"", dest, "\"");
      if ( v45 )
        Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
          v45 + 3,
          "%s",
          (const char *)((v42.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(
        phandle.pSlot,
        (const char *)((v42.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
      pData = v42.pData;
      goto LABEL_66;
  }
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(
        Scaleform::GFx::LoadStates *pls,
        Scaleform::GFx::MovieDataDef *pmd,
        unsigned int loadConstants,
        unsigned __int64 memoryArena)
{
  Scaleform::GFx::MovieDefImpl *v8; // rdi
  Scaleform::GFx::MovieDefImpl *v9; // rax
  Scaleform::RefCountVImpl *v10; // rbx
  Scaleform::GFx::MovieBindProcess *ppbindProcess; // [rsp+68h] [rbp+10h] BYREF

  if ( pmd )
    Scaleform::GFx::LoadStates::SetRelativePathForDataDef(pls, pmd);
  v8 = 0i64;
  ppbindProcess = 0i64;
  v9 = Scaleform::GFx::LoaderImpl::CreateMovieDefImpl(pls, pmd, loadConstants, &ppbindProcess, 0, 0i64, memoryArena);
  v10 = (Scaleform::RefCountVImpl *)ppbindProcess;
  if ( v9 )
    v8 = Scaleform::GFx::LoaderImpl::BindMovieAndWait(v9, ppbindProcess, pls, loadConstants, 0i64);
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  return v8;
}

__int64 __fastcall Scaleform::GFx::LoaderImpl::DetectFileFormat(Scaleform::File *pfile)
{
  int v3; // eax
  Scaleform::File_vtbl *v4; // r9
  unsigned int v5; // ebx
  int v6; // esi
  char v7; // dl
  char v8; // al
  int v9; // eax
  const char *v10; // rax
  const char *v11; // rax
  int v12; // [rsp+30h] [rbp+10h] BYREF

  if ( !pfile )
    return 0i64;
  v3 = ((__int64 (*)(void))pfile->Tell)();
  v4 = pfile->__vftable;
  v5 = 1;
  v12 = 0;
  v6 = v3;
  if ( v4->Read(pfile, (unsigned __int8 *)&v12, 4) > 0 )
  {
    v7 = v12;
    switch ( (char)v12 )
    {
      case 52:
        ((void (__fastcall *)(Scaleform::File *, __int64))pfile->Seek)(pfile, 44i64);
        v9 = pfile->Read(pfile, (unsigned __int8 *)&v12, 3);
        v7 = v12;
        if ( v9 != 3 || (_BYTE)v12 != 80 )
          goto LABEL_33;
        if ( *(_WORD *)((char *)&v12 + 1) == 21078 )
          v5 = 21;
        goto LABEL_38;
      case 67:
      case 70:
        v8 = BYTE1(v12);
        if ( BYTE1(v12) == 87 )
        {
          if ( BYTE2(v12) == 83 )
            v5 = 2;
        }
        else if ( *(_WORD *)((char *)&v12 + 1) == 22598 )
        {
          v5 = 3;
        }
        goto LABEL_34;
      case 68:
        v8 = BYTE1(v12);
        if ( *(_WORD *)((char *)&v12 + 1) == 21316 )
          v5 = 14;
        goto LABEL_34;
      case 71:
        v8 = BYTE1(v12);
        if ( BYTE1(v12) == 73 )
        {
          if ( HIWORD(v12) == 14406 )
            v5 = 12;
        }
        else if ( BYTE1(v12) == 70 )
        {
          if ( BYTE2(v12) == 88 )
            v5 = 3;
        }
        else if ( BYTE1(v12) == 88 && HIWORD(v12) == 84 )
        {
          v5 = 24;
        }
        goto LABEL_34;
      case -119:
        v8 = BYTE1(v12);
        if ( *(_WORD *)((char *)&v12 + 1) == 20048 && HIBYTE(v12) == 71 )
          v5 = 11;
        goto LABEL_34;
      case -85:
        v8 = BYTE1(v12);
        if ( *(_WORD *)((char *)&v12 + 1) == 21579 && HIBYTE(v12) == 88 )
          v5 = 27;
        goto LABEL_34;
      case -1:
        v8 = BYTE1(v12);
        if ( BYTE1(v12) == 0xD8 )
          v5 = 10;
        goto LABEL_34;
      default:
LABEL_33:
        v8 = BYTE1(v12);
LABEL_34:
        if ( v7 == 71 && v8 == 78 && BYTE2(v12) == 70 )
          v5 = 26;
LABEL_38:
        pfile->Seek(pfile, v6, 0);
        if ( v5 == 1 )
        {
          v10 = pfile->GetFilePath(pfile);
          if ( v10 )
          {
            v11 = strrchr(v10, 46);
            if ( v11 )
            {
              if ( !Scaleform::String::CompareNoCase(v11, ".tga") )
                v5 = 13;
            }
          }
        }
        break;
    }
  }
  return v5;
}

void __fastcall Scaleform::GFx::MovieImageLoadTask::Execute(Scaleform::GFx::MovieImageLoadTask *this)
{
  Scaleform::GFx::LoadStates *pObject; // rdx
  Scaleform::MemoryHeap *pimageHeap; // rbx
  Scaleform::Log *plog; // rax
  Scaleform::Render::ImageSource *BuiltinImage; // r14
  Scaleform::GFx::ImageResource *v6; // rax
  Scaleform::GFx::ImageResource *v7; // rax
  Scaleform::GFx::ImageResource *v8; // rbx
  Scaleform::GFx::ImageResource *v9; // rcx
  Scaleform::File *v10; // r12
  Scaleform::Log *GlobalLog; // r15
  Scaleform::GFx::State *v12; // rax
  Scaleform::GFx::ImageResource *v13; // rsi
  Scaleform::GFx::MovieDataDef *v14; // rdi
  Scaleform::GFx::ImageCreator *v15; // rbx
  unsigned int v16; // eax
  bool inited; // di
  Scaleform::GFx::MovieDataDef *v18; // rcx
  unsigned int FileLength; // edi
  Scaleform::GFx::MovieDefImpl::BindTaskData *v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // edx
  Scaleform::GFx::ImageResource *v23; // rcx

  pObject = this->pLoadStates.pObject;
  pimageHeap = pObject->pWeakResourceLib.pObject->pImageHeap.pObject;
  plog = (Scaleform::Log *)pObject->pLog.pObject;
  if ( plog )
  {
    plog = (Scaleform::Log *)plog[2].__vftable;
    if ( !plog )
      plog = Scaleform::Log::GetGlobalLog();
  }
  BuiltinImage = Scaleform::GFx::LoaderImpl::LoadBuiltinImage(
                   this->pImageFile.pObject,
                   this->ImageFormat,
                   Use_Bitmap,
                   this->pLoadStates.pObject,
                   plog,
                   pimageHeap);
  if ( BuiltinImage )
  {
    v6 = (Scaleform::GFx::ImageResource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pimageHeap->Alloc)(
                                            pimageHeap,
                                            104i64);
    if ( v6 )
    {
      Scaleform::GFx::ImageResource::ImageResource(v6, BuiltinImage, Use_Bitmap);
      v8 = v7;
    }
    else
    {
      v8 = 0i64;
    }
    v9 = this->pImageRes.pObject;
    if ( v9 )
      Scaleform::GFx::Resource::Release(v9);
    this->pImageRes.pObject = v8;
  }
  if ( !this->pImageRes.pObject )
  {
    v22 = 4;
    goto LABEL_23;
  }
  v10 = this->pImageFile.pObject;
  GlobalLog = (Scaleform::Log *)this->pLoadStates.pObject->pLog.pObject;
  if ( GlobalLog )
  {
    GlobalLog = (Scaleform::Log *)GlobalLog[2].__vftable;
    if ( !GlobalLog )
      GlobalLog = Scaleform::Log::GetGlobalLog();
  }
  v12 = this->pDefImpl.pObject->GetStateAddRef(&this->pDefImpl.pObject->Scaleform::GFx::StateBag, 14i64);
  v13 = this->pImageRes.pObject;
  v14 = this->pDef.pObject;
  v15 = (Scaleform::GFx::ImageCreator *)v12;
  v16 = v10->GetLength(v10);
  inited = Scaleform::GFx::MovieDataDef::LoadTaskData::InitImageFileMovieDef(
             v14->pData.pObject,
             v16,
             v13,
             v15,
             GlobalLog,
             1);
  if ( v15 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v15);
  if ( inited )
  {
    v18 = this->pDef.pObject;
    FileLength = v18->pData.pObject->Header.FileLength;
    v20 = this->pDefImpl.pObject->pBindData.pObject;
    v21 = v18->GetLoadingFrame(v18);
    Scaleform::GFx::MovieDefImpl::BindTaskData::UpdateBindingFrame(v20, v21, FileLength);
    v22 = 770;
LABEL_23:
    Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(this->pDefImpl.pObject->pBindData.pObject, v22);
    goto LABEL_24;
  }
  Scaleform::GFx::MovieDefImpl::BindTaskData::SetBindState(this->pDefImpl.pObject->pBindData.pObject, 4u);
  v23 = this->pImageRes.pObject;
  if ( v23 )
    Scaleform::GFx::Resource::Release(v23);
  this->pImageRes.pObject = 0i64;
LABEL_24:
  if ( BuiltinImage )
    BuiltinImage->Release(BuiltinImage);
}

__int64 __fastcall Scaleform::GFx::LoaderImpl::FileFormat2RenderImageFile(
        Scaleform::GFx::FileTypeConstants::FileFormatType format)
{
  __int64 result; // rax

  switch ( format )
  {
    case File_JPEG:
      result = 2i64;
      break;
    case File_PNG:
      result = 4i64;
      break;
    case File_TGA:
      result = 5i64;
      break;
    case File_DDS:
      result = 3i64;
      break;
    case File_PVR:
      result = 6i64;
      break;
    case File_SIF:
      result = 11i64;
      break;
    case File_GXT:
      result = 8i64;
      break;
    case File_GNF:
      result = 10i64;
      break;
    case File_KTX:
      result = 7i64;
      break;
    default:
      result = 1i64;
      break;
  }
  return result;
}

Scaleform::GFx::StateBag *__fastcall Scaleform::GFx::LoaderImpl::GetStateBagImpl(Scaleform::GFx::LoaderImpl *this)
{
  Scaleform::GFx::StateBag_vtbl *v1; // rdx
  Scaleform::GFx::StateBag *result; // rax

  v1 = this->Scaleform::GFx::StateBag::__vftable;
  result = (Scaleform::GFx::StateBag *)&v1->SetState;
  if ( !v1 )
    return 0i64;
  return result;
}

char __fastcall Scaleform::GFx::SWFProcessInfo::Initialize(
        Scaleform::GFx::SWFProcessInfo *this,
        Scaleform::File *pin,
        Scaleform::GFx::LogState *plog,
        Scaleform::GFx::ZlibSupportBase *zlib,
        Scaleform::GFx::ParseControl *pparseControl,
        bool parseMsg)
{
  Scaleform::RefCountVImpl *v9; // rbx
  bool v10; // di
  Scaleform::RefCountVImpl_vtbl *v11; // rax
  Scaleform::RefCountVImpl_vtbl *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int Id; // ecx
  __int64 Id_high; // r9
  int v17; // eax
  int v18; // er12
  unsigned int v20; // eax
  char v21; // di
  Scaleform::File *v22; // rdi
  Scaleform::Log *pObject; // rax
  signed int v24; // eax
  __int64 Pos; // r9
  unsigned __int8 *pBuffer; // rdx
  int v27; // ecx
  signed int v28; // eax
  __int64 v29; // r9
  unsigned __int8 *v30; // rdx
  int v31; // ecx
  bool v32; // zf
  unsigned int v33; // edi
  signed int v34; // eax
  __int64 v35; // r10
  unsigned __int16 v36; // r9
  int TagOffset; // edx
  signed int v38; // eax
  __int64 v39; // r9
  unsigned __int16 v40; // r8
  Scaleform::LogMessageId messageId; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-54h] BYREF
  Scaleform::GFx::TagInfo pTagInfo; // [rsp+38h] [rbp-50h] BYREF

  v9 = (Scaleform::RefCountVImpl *)pin;
  v10 = 0;
  this->FileStartPos = pin->Tell(pin);
  v11 = v9->__vftable;
  messageId.Id = 0;
  ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::LogMessageId *, __int64))v11[3].AddRef)(
    v9,
    &messageId,
    4i64);
  v12 = v9->__vftable;
  v42 = 0;
  ((void (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *, __int64))v12[3].AddRef)(v9, &v42, 4i64);
  v13 = v42;
  v14 = v42 + this->FileStartPos;
  this->Header.FileLength = v42;
  this->FileEndPos = v14;
  Id = messageId.Id;
  Id_high = HIBYTE(messageId.Id);
  v17 = messageId.Id & 0xFFFFFF;
  this->NextActionBlock = 0;
  this->Header.Version = Id_high;
  this->Header.SWFFlags = 0;
  v18 = (unsigned __int8)Id;
  this->FileAttributes = 0;
  if ( v17 != 5461830 && v17 != 5461827 && v17 != 5785159 && v17 != 5785155 )
  {
    if ( plog )
      Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
        &plog->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
        "Loader read failed - file does not start with a SWF header");
    return 0;
  }
  v20 = 0;
  if ( (Id & 0xFF0000) == 5767168 )
    v20 = 16;
  this->Header.SWFFlags = v20;
  if ( (unsigned __int8)Id == 67 )
    this->Header.SWFFlags |= 1u;
  if ( plog )
  {
    if ( pparseControl && (pparseControl->ParseFlags & 1) != 0 )
      v10 = parseMsg;
    if ( v10 )
    {
      messageId.Id = 20480;
      Scaleform::Log::LogMessageById(
        (Scaleform::Log *)plog,
        (Scaleform::LogMessageId)&messageId,
        "SWF File version = %d, File length = %d\n",
        Id_high,
        v13);
    }
  }
  Scaleform::Render::RenderBuffer::AddRef(v9);
  if ( v18 != 67 )
  {
LABEL_25:
    pObject = plog->pLog.pObject;
    if ( !pObject )
      pObject = Scaleform::Log::GetGlobalLog();
    Scaleform::GFx::Stream::Initialize(&this->Stream, (Scaleform::File *)v9, pObject, pparseControl);
    Scaleform::GFx::Stream::ReadRect(&this->Stream, &this->Header.FrameRect);
    v24 = this->Stream.DataSize - this->Stream.Pos;
    this->Stream.UnusedBits = 0;
    if ( v24 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&this->Stream, 2);
    Pos = this->Stream.Pos;
    pBuffer = this->Stream.pBuffer;
    v27 = pBuffer[Pos];
    LODWORD(pBuffer) = pBuffer[(unsigned int)(Pos + 1)];
    this->Stream.Pos = Pos + 2;
    this->Header.FPS = (float)(v27 | ((_DWORD)pBuffer << 8)) * 0.00390625;
    v28 = this->Stream.DataSize - this->Stream.Pos;
    this->Stream.UnusedBits = 0;
    if ( v28 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(&this->Stream, 2);
    v29 = this->Stream.Pos;
    v30 = this->Stream.pBuffer;
    v31 = v30[v29];
    LODWORD(v30) = v30[(unsigned int)(v29 + 1)];
    this->Stream.Pos = v29 + 2;
    v32 = (this->Header.SWFFlags & 0x10) == 0;
    this->Header.FrameCount = v31 | ((_DWORD)v30 << 8);
    if ( v32 )
    {
      if ( this->Header.Version < 9
        || this->Stream.Pos + this->Stream.FilePos - this->Stream.DataSize >= this->FileEndPos )
      {
        goto LABEL_54;
      }
      if ( Scaleform::GFx::Stream::OpenTag(&this->Stream, &pTagInfo) == Tag_FileAttributes )
      {
        v38 = this->Stream.DataSize - this->Stream.Pos;
        this->Stream.UnusedBits = 0;
        if ( v38 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&this->Stream, 2);
        v39 = this->Stream.Pos;
        v40 = this->Stream.pBuffer[v39] | (this->Stream.pBuffer[(unsigned int)(v39 + 1)] << 8);
        this->Stream.Pos = v39 + 2;
        this->FileAttributes = v40;
      }
      Scaleform::GFx::Stream::CloseTag(&this->Stream);
      TagOffset = pTagInfo.TagOffset;
    }
    else
    {
      if ( this->Stream.Pos + this->Stream.FilePos - this->Stream.DataSize < this->FileEndPos )
      {
        if ( Scaleform::GFx::Stream::OpenTag(&this->Stream) != Tag_ExporterInfo )
        {
          Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
            &plog->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
            "Loader read failed - no mExporterInfo tag in GFX file header");
          goto LABEL_45;
        }
        Scaleform::GFx::ExporterInfoImpl::ReadExporterInfoTag(
          &this->Header.mExporterInfo,
          &this->Stream,
          Tag_ExporterInfo);
        Scaleform::GFx::Stream::CloseTag(&this->Stream);
      }
      if ( this->Header.Version < 9
        || (v33 = this->Stream.Pos + this->Stream.FilePos - this->Stream.DataSize, v33 >= this->FileEndPos) )
      {
LABEL_54:
        v21 = 1;
        goto LABEL_55;
      }
      while ( Scaleform::GFx::Stream::OpenTag(&this->Stream, &pTagInfo) >= Tag_ExporterInfo )
        Scaleform::GFx::Stream::CloseTag(&this->Stream);
      if ( pTagInfo.TagType == Tag_FileAttributes )
      {
        v34 = this->Stream.DataSize - this->Stream.Pos;
        this->Stream.UnusedBits = 0;
        if ( v34 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&this->Stream, 2);
        v35 = this->Stream.Pos;
        v36 = this->Stream.pBuffer[v35] | (this->Stream.pBuffer[(unsigned int)(v35 + 1)] << 8);
        this->Stream.Pos = v35 + 2;
        this->FileAttributes = v36;
      }
      Scaleform::GFx::Stream::CloseTag(&this->Stream);
      TagOffset = v33;
    }
    Scaleform::GFx::Stream::SetPosition(&this->Stream, TagOffset);
    goto LABEL_54;
  }
  if ( zlib )
  {
    if ( v10 )
    {
      messageId.Id = 20480;
      Scaleform::Log::LogMessageById(
        (Scaleform::Log *)plog,
        (Scaleform::LogMessageId)&messageId,
        "SWF file is compressed.\n");
    }
    v22 = zlib->CreateZlibFile(zlib, v9);
    Scaleform::RefCountImpl::Release(v9);
    v9 = (Scaleform::RefCountVImpl *)v22;
    this->FileEndPos = this->Header.FileLength - 8;
    goto LABEL_25;
  }
  if ( !plog )
  {
LABEL_45:
    v21 = 0;
    goto LABEL_55;
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
    &plog->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
    "Loader - unable to read compressed SWF data; GFxZlibState is not set.");
  v21 = 0;
LABEL_55:
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  return v21;
}

char __fastcall Scaleform::GFx::LoaderImpl::IsProtocolImage(const Scaleform::String *url, bool *bilinear, bool *sync)
{
  int v6; // edi
  __int64 v7; // rbx
  BOOL v8; // er12
  unsigned __int64 v9; // rcx
  char v10; // al
  bool v11; // zf
  bool v12; // bp
  void *v13; // rbx
  Scaleform::String *v14; // rax
  bool v15; // bp
  void *v16; // rbx
  void *v17; // rbx
  void *v19; // rbx
  Scaleform::String v20; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::String result; // [rsp+78h] [rbp+20h] BYREF

  if ( Scaleform::String::GetLength((Scaleform::String *)url) <= 6 )
    return 0;
  v6 = *(char *)((url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  if ( (unsigned int)(v6 - 65) <= 0x19 )
    v6 += 32;
  if ( v6 != 105 && v6 != 115 )
    return 0;
  v7 = 0i64;
  v8 = v6 == 115;
  Scaleform::String::ToLower((Scaleform::String *)url, &result);
  v9 = Scaleform::String::Substring(&result, &v20, v6 == 115, (unsigned int)(v8 + 6))->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  while ( 1 )
  {
    v10 = *(_BYTE *)(v9 + v7++ + 12);
    v11 = v10 == aImg[v7 - 1];
    if ( v10 != aImg[v7 - 1] )
      break;
    if ( v7 == 7 )
    {
      v11 = v10 == aImg[6];
      break;
    }
  }
  v12 = v11;
  v13 = (void *)(v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13);
  if ( !v12 )
  {
    v14 = Scaleform::String::Substring(&result, &v20, v6 == 115, (unsigned int)(v8 + 8));
    v15 = strcmp((const char *)((v14->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12), "imgps://") == 0;
    v16 = (void *)(v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v16);
    if ( v15 )
    {
      if ( bilinear )
        *bilinear = 0;
      goto LABEL_20;
    }
    v19 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v19);
    return 0;
  }
  if ( bilinear )
    *bilinear = 1;
LABEL_20:
  if ( sync )
    *sync = v6 == 115;
  v17 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
  return 1;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

Scaleform::Render::ImageSource *__fastcall Scaleform::GFx::LoaderImpl::LoadBuiltinImage(
        Scaleform::File *pfile,
        __int64 format,
        __int64 __formal,
        Scaleform::GFx::LoadStates *pls,
        Scaleform::Log *plog,
        Scaleform::MemoryHeap *pimageHeap)
{
  Scaleform::GFx::FileTypeConstants::FileFormatType v7; // ebx
  __int64 v9; // rdi
  const char *v10; // rsi
  Scaleform::Render::ImageFileFormat v11; // er15
  Scaleform::GFx::ImageFileHandlerRegistry *pObject; // rbx
  Scaleform::Render::ImageFileReader *Reader; // rax
  Scaleform::Render::ImageFileReader *v15; // rcx
  Scaleform::Render::ImageFileReader_vtbl *v16; // rax
  int v17; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::MemoryHeap *v18; // [rsp+28h] [rbp-40h]
  __int128 v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+40h] [rbp-28h]

  v7 = (int)format;
  v9 = 0i64;
  v10 = (const char *)((__int64 (__fastcall *)(Scaleform::File *, __int64, __int64))pfile->GetFilePath)(
                        pfile,
                        format,
                        __formal);
  v11 = (unsigned int)Scaleform::GFx::LoaderImpl::FileFormat2RenderImageFile(v7);
  if ( v11 != ImageFile_Unknown )
  {
    pObject = pls->pImageFileHandlerRegistry.pObject;
    if ( !pObject )
    {
      if ( plog )
        Scaleform::Log::LogError(plog, "Image file handler registry is not installed - can't load image data");
      return (Scaleform::Render::ImageSource *)v9;
    }
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pls->pImageFileHandlerRegistry.pObject);
    Reader = Scaleform::Render::ImageFileHandlerRegistry::GetReader(
               &pObject->Scaleform::Render::ImageFileHandlerRegistry,
               v11);
    v15 = Reader;
    if ( Reader )
    {
      v18 = pimageHeap;
      v16 = Reader->__vftable;
      v17 = 0;
      v19 = 0i64;
      v20 = 0;
      v9 = (__int64)v16->ReadImageSource(v15, pfile, (const Scaleform::Render::ImageCreateArgs *)&v17);
    }
    else if ( plog )
    {
      Scaleform::Log::LogError(plog, "Can't load image %s - appropriate reader is not installed.", v10);
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pObject);
      return (Scaleform::Render::ImageSource *)v9;
    }
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pObject);
    return (Scaleform::Render::ImageSource *)v9;
  }
  if ( plog )
    Scaleform::Log::LogMessage(plog, "Default image loader failed to load '%s'", v10);
  return 0i64;
}

void __fastcall Scaleform::GFx::LoaderImpl::LoadingDone(Scaleform::GFx::LoaderImpl *this, const char *filename)
{
  void *v3; // rbx
  Scaleform::String key; // [rsp+30h] [rbp+8h] BYREF

  Scaleform::String::String(&key, filename);
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::RemoveAlt<Scaleform::String>(
    &this->HttpFilesOpened.mHash,
    &key);
  v3 = (void *)(key.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((key.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3);
}

void Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogError(
        Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *this,
        const char *pfmt,
        ...)
{
  Scaleform::GFx::LogBase<Scaleform::GFx::LogState> *v2; // rax
  __int64 *v3; // rcx
  Scaleform::Log *GlobalLog; // rax
  __int64 v5; // rax
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  const char *v7; // [rsp+48h] [rbp+10h]
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, pfmt);
  v7 = pfmt;
  v2 = this - 3;
  if ( !this )
    v2 = 0i64;
  v3 = (__int64 *)v2[4].__vftable;
  if ( !v3 )
  {
    GlobalLog = Scaleform::Log::GetGlobalLog();
    pfmt = v7;
    v3 = (__int64 *)GlobalLog;
  }
  v5 = *v3;
  v6[0] = 200704;
  (*(void (__fastcall **)(__int64 *, int *, const char *, __int64 *))(v5 + 8))(v3, v6, pfmt, (__int64 *)va);
}

void Scaleform::Log::LogMessage(Scaleform::Log *this, const char *fmt, ...)
{
  Scaleform::Log_vtbl *v2; // rax
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, fmt);
  v2 = this->__vftable;
  v3[0] = 4096;
  ((void (__fastcall *)(Scaleform::Log *, int *, const char *, __int64 *))v2->LogMessageVarg)(
    this,
    v3,
    fmt,
    (__int64 *)va);
}

void __fastcall Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *this,
        const char *pfmt)
{
  ;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

__int64 __fastcall Scaleform::GFx::Translator::OnBidirectionalText(
        Scaleform::GFx::Translator *this,
        const wchar_t *text,
        unsigned __int64 textLen,
        wchar_t *newText,
        unsigned int *indexMap,
        bool *mirrorBits)
{
  unsigned __int64 v6; // r10
  unsigned __int8 v7; // r11
  wchar_t *v8; // rbx
  int v11; // esi
  unsigned __int64 v12; // rdi
  wchar_t v13; // r9
  unsigned __int64 v14; // rax
  int v15; // er8
  int v16; // er14
  int v17; // eax
  unsigned __int64 v18; // rax
  int v19; // er8
  int v20; // er12
  int v21; // eax
  unsigned __int64 v22; // r11
  int v23; // ecx
  wchar_t v24; // cx
  unsigned __int64 v25; // rax
  int v26; // er8
  int v27; // eax
  __int64 v28; // rbp
  __int64 v29; // r9
  wchar_t v30; // si
  unsigned __int64 v31; // rbx
  int v32; // er8
  int v33; // eax
  int v34; // er8
  int v35; // eax
  int v36; // ecx
  __int64 v37; // r9
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // rax
  wchar_t *v40; // r8
  bool *v41; // rcx
  __int64 v42; // r10
  unsigned int *v43; // rdx
  int v45; // [rsp+0h] [rbp-48h]
  unsigned __int8 v46; // [rsp+60h] [rbp+18h]

  v6 = textLen - 1;
  v7 = 0;
  v45 = 0;
  v8 = newText;
  v11 = 0;
  v12 = 0i64;
  if ( textLen )
  {
    while ( 1 )
    {
      v13 = text[v12];
      v14 = (unsigned __int64)v13 >> 8;
      v15 = Scaleform::UnicodeRightToLeftBits[v14];
      if ( !Scaleform::UnicodeRightToLeftBits[v14] )
        break;
      if ( v15 == 1 )
      {
        v16 = 1;
      }
      else
      {
        v17 = Scaleform::UnicodeRightToLeftBits[v15 + ((v13 >> 4) & 0xF)];
        v16 = _bittest(&v17, v13 & 0xF);
        if ( !v16 )
          goto LABEL_9;
      }
LABEL_10:
      v46 = 1;
LABEL_11:
      v18 = (unsigned __int64)v13 >> 8;
      v19 = Scaleform::UnicodeDirectionNeutralBits[v18];
      if ( Scaleform::UnicodeDirectionNeutralBits[v18] )
      {
        if ( v19 == 1 )
        {
          v20 = 1;
        }
        else
        {
          v21 = Scaleform::UnicodeDirectionNeutralBits[v19 + ((v13 >> 4) & 0xF)];
          v20 = _bittest(&v21, v13 & 0xF);
        }
      }
      else
      {
        v20 = 0;
      }
      v22 = v12 + 1;
      v23 = v16;
      if ( v12 + 1 < textLen )
      {
        v24 = text[v12 + 1];
        v25 = (unsigned __int64)v24 >> 8;
        v26 = Scaleform::UnicodeRightToLeftBits[v25];
        if ( Scaleform::UnicodeRightToLeftBits[v25] )
        {
          if ( v26 == 1 )
          {
            v23 = 1;
          }
          else
          {
            v27 = Scaleform::UnicodeRightToLeftBits[v26 + ((v24 >> 4) & 0xF)];
            v23 = _bittest(&v27, v24 & 0xF);
          }
        }
        else
        {
          v23 = 0;
        }
      }
      if ( v16 || v20 )
      {
        if ( (v11 || v23) && v20 )
        {
          switch ( v13 )
          {
            case '(':
              v8[v6] = 41;
              break;
            case ')':
              v8[v6] = 40;
              break;
            case '<':
              v8[v6] = 62;
              break;
            case '>':
              v8[v6] = 60;
              break;
            case '[':
              v8[v6] = 93;
              break;
            case ']':
              v8[v6] = 91;
              break;
            case '{':
              v8[v6] = 125;
              break;
            case '}':
              v8[v6] = 123;
              break;
            default:
              goto LABEL_53;
          }
        }
        else
        {
LABEL_53:
          v8[v6] = v13;
        }
        indexMap[v6] = v12++;
        mirrorBits[v6--] = 0;
      }
      else
      {
        v28 = 1i64;
        v29 = 0i64;
        if ( v22 < textLen )
        {
          do
          {
            v30 = text[v22];
            v31 = (unsigned __int64)v30 >> 8;
            v32 = Scaleform::UnicodeRightToLeftBits[v31];
            if ( Scaleform::UnicodeRightToLeftBits[v31] )
            {
              if ( v32 == 1 )
                break;
              v33 = Scaleform::UnicodeRightToLeftBits[v32 + ((v30 >> 4) & 0xF)];
              if ( _bittest(&v33, v30 & 0xF) )
                break;
            }
            v34 = Scaleform::UnicodeDirectionNeutralBits[v31];
            if ( Scaleform::UnicodeDirectionNeutralBits[v31] )
            {
              if ( v34 == 1 )
              {
                v35 = 1;
              }
              else
              {
                v36 = Scaleform::UnicodeDirectionNeutralBits[v34 + ((v30 >> 4) & 0xF)];
                v35 = _bittest(&v36, v30 & 0xF);
              }
            }
            else
            {
              v35 = 0;
            }
            ++v22;
            ++v28;
            ++v29;
            if ( !v35 )
              v29 = 0i64;
          }
          while ( v22 < textLen );
          v8 = newText;
          v11 = v45;
        }
        v37 = v29 - v28;
        v38 = v37 + v6;
        v39 = v37 + v6 + 1;
        if ( v39 <= v6 )
        {
          v40 = &v8[v39];
          v41 = &mirrorBits[v39];
          v42 = -v37;
          v43 = &indexMap[v39];
          do
          {
            ++v43;
            *v40++ = text[v12];
            *(v43 - 1) = v12++;
            *v41++ = 0;
            --v42;
          }
          while ( v42 );
        }
        v6 = v38;
      }
      if ( v20 )
        v16 = v11;
      v45 = v16;
      v11 = v16;
      if ( v12 >= textLen )
        return v46;
      v7 = v46;
    }
    v16 = 0;
LABEL_9:
    v46 = 0;
    if ( !v7 )
      goto LABEL_11;
    goto LABEL_10;
  }
  return 0i64;
}

void __fastcall Scaleform::GFx::ExporterInfoImpl::ReadExporterInfoTag(
        Scaleform::GFx::ExporterInfoImpl *this,
        Scaleform::GFx::Stream *pin,
        Scaleform::GFx::TagType tagType)
{
  unsigned __int64 v3; // rbp
  signed int v4; // eax
  __int64 Pos; // r8
  unsigned __int16 v7; // r13
  int v8; // eax
  unsigned __int8 *pBuffer; // r9
  unsigned int v10; // edx
  int v11; // er10
  signed int v12; // eax
  __int64 v13; // r8
  unsigned __int8 *v14; // rdx
  unsigned int *Data; // r12
  unsigned __int64 v16; // r15
  unsigned __int64 Capacity; // r14
  signed int v18; // eax
  __int64 v19; // r8
  unsigned __int16 v20; // r9
  __int64 v21; // r13
  signed int v22; // eax
  unsigned __int64 v23; // rdi
  unsigned __int8 *v24; // r9
  unsigned int v25; // edx
  int v26; // esi
  unsigned __int64 v27; // r8
  int *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  bool v31; // zf
  const char *v32; // rax
  const char *v33; // rdi
  const char *v34; // rdx
  const char *v35; // rsi
  unsigned __int64 v36; // r8
  void *v37; // rbx
  void *v38; // rbx
  unsigned __int16 v39; // [rsp+50h] [rbp-78h]
  unsigned int v40; // [rsp+54h] [rbp-74h]
  Scaleform::String v41; // [rsp+58h] [rbp-70h] BYREF
  Scaleform::String pstr; // [rsp+60h] [rbp-68h] BYREF
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int8 v45; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v46; // [rsp+E8h] [rbp+20h]

  v3 = 0i64;
  v4 = pin->DataSize - pin->Pos;
  v40 = 0;
  pin->UnusedBits = 0;
  if ( v4 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(pin, 2);
  Pos = pin->Pos;
  v7 = pin->pBuffer[Pos] | (pin->pBuffer[(unsigned int)(Pos + 1)] << 8);
  pin->Pos = Pos + 2;
  v39 = v7;
  if ( v7 >= 0x10Au )
  {
    v8 = pin->DataSize - (Pos + 2);
    pin->UnusedBits = 0;
    if ( v8 < 4 )
      Scaleform::GFx::Stream::PopulateBuffer(pin, 4);
    pBuffer = pin->pBuffer;
    v10 = pin->Pos;
    v11 = pBuffer[v10] | ((((pBuffer[v10 + 2] | (pBuffer[v10 + 3] << 8)) << 8) | pBuffer[v10 + 1]) << 8);
    pin->Pos = v10 + 4;
    v40 = v11;
  }
  v12 = pin->DataSize - pin->Pos;
  pin->UnusedBits = 0;
  if ( v12 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(pin, 2);
  v13 = pin->Pos;
  v14 = pin->pBuffer;
  v45 = v14[(unsigned int)(v13 + 1)];
  v46 = v14[v13];
  pin->Pos = v13 + 2;
  Scaleform::String::String(&pstr);
  Scaleform::String::String(&v41);
  Scaleform::GFx::Stream::ReadStringWithLength(pin, &pstr);
  Scaleform::GFx::Stream::ReadStringWithLength(pin, &v41);
  memset(&pheapAddr, 0, sizeof(pheapAddr));
  Data = 0i64;
  v16 = 0i64;
  Capacity = 0i64;
  if ( v7 >= 0x401u )
  {
    v18 = pin->DataSize - pin->Pos;
    pin->UnusedBits = 0;
    if ( v18 < 2 )
      Scaleform::GFx::Stream::PopulateBuffer(pin, 2);
    v19 = pin->Pos;
    v20 = pin->pBuffer[v19] | (pin->pBuffer[(unsigned int)(v19 + 1)] << 8);
    pin->Pos = v19 + 2;
    if ( v20 )
    {
      v21 = v20;
      while ( 1 )
      {
        v22 = pin->DataSize - pin->Pos;
        pin->UnusedBits = 0;
        if ( v22 < 4 )
          Scaleform::GFx::Stream::PopulateBuffer(pin, 4);
        v23 = v16 + 1;
        v24 = pin->pBuffer;
        v25 = pin->Pos;
        v26 = v24[v25] | ((((v24[v25 + 2] | (v24[v25 + 3] << 8)) << 8) | v24[v25 + 1]) << 8);
        pin->Pos = v25 + 4;
        if ( v16 + 1 >= v16 )
        {
          if ( v23 > Capacity )
          {
            v27 = v23 + (v23 >> 2);
            goto LABEL_21;
          }
        }
        else if ( v23 < Capacity >> 1 )
        {
          v27 = v16 + 1;
LABEL_21:
          Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &pheapAddr,
            &pheapAddr,
            v27);
          Data = pheapAddr.Data;
          Capacity = pheapAddr.Policy.Capacity;
        }
        pheapAddr.Size = v16 + 1;
        v28 = (int *)&Data[v16++];
        if ( v28 )
          *v28 = v26;
        if ( !--v21 )
        {
          v7 = v39;
          break;
        }
      }
    }
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pin,
    "  ExportInfo: tagType = %d, tool ver = %d.%d, imgfmt = %d, prefix = '%s', swfname = '%s', flags = 0x%X\n");
  v29 = pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  v30 = v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  this->SI.Format = v46 | (v45 << 8);
  v31 = v29 == -12i64;
  v32 = (const char *)(v29 + 12);
  this->SI.Version = v7;
  v33 = &pnewText;
  v34 = &pnewText;
  if ( !v31 )
    v34 = v32;
  Scaleform::String::operator=(&this->Prefix, v34);
  v35 = (const char *)(v30 + 12);
  if ( v35 )
    v33 = v35;
  Scaleform::String::operator=(&this->SWFName, v33);
  this->SI.pSWFName = (const char *)((this->SWFName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  this->SI.pPrefix = (const char *)((this->Prefix.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  this->SI.ExportFlags = v40;
  if ( v16 >= this->CodeOffsets.Data.Size )
  {
    if ( v16 <= this->CodeOffsets.Data.Policy.Capacity )
      goto LABEL_36;
    v36 = v16 + (v16 >> 2);
  }
  else
  {
    if ( v16 >= this->CodeOffsets.Data.Policy.Capacity >> 1 )
      goto LABEL_36;
    v36 = v16;
  }
  Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->CodeOffsets.Data,
    &this->CodeOffsets,
    v36);
LABEL_36:
  this->CodeOffsets.Data.Size = v16;
  if ( v16 )
  {
    do
    {
      this->CodeOffsets.Data.Data[v3] = Data[v3];
      ++v3;
    }
    while ( v3 < this->CodeOffsets.Data.Size );
  }
  if ( Data )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
  v37 = (void *)(v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v41.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v37);
  v38 = (void *)(pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((pstr.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v38);
}

Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *__fastcall Scaleform::GFx::LoaderImpl::ReadProtocolFile(
        Scaleform::GFx::LoaderImpl *this,
        const Scaleform::String *filename)
{
  Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *p_HttpFilesOpened; // rbp
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *v5; // rax
  unsigned __int64 *p_SizeMask; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeRef key; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  Scaleform::RefCountVImpl *v14; // [rsp+80h] [rbp+18h] BYREF

  p_HttpFilesOpened = &this->HttpFilesOpened;
  v5 = Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::GetAlt<Scaleform::String>(
         (Scaleform::HashSetBase<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *)&this->HttpFilesOpened,
         filename);
  if ( v5 )
  {
    p_SizeMask = &v5->SizeMask;
    if ( p_SizeMask )
      return (Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *)(*p_SizeMask + 16);
  }
  v13 = 2;
  v8 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 40i64, &v13);
  v9 = v8;
  if ( v8 )
  {
    v8[1] = 0i64;
    v8[2] = 0i64;
    v8[3] = 0i64;
    v8[4] = 0i64;
    *v8 = &Scaleform::RefCountImplCore::`vftable';
    *v8 = &Scaleform::GFx::LoaderImpl::HttpFileCache::`vftable';
    *((_DWORD *)v8 + 2) = 1;
    v8[2] = 0i64;
    v8[3] = 0i64;
    v8[4] = 0i64;
  }
  else
  {
    v9 = 0i64;
  }
  if ( Scaleform::GFx::URLBuilder::SendURLRequest(
         (Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *)(v9 + 2),
         filename,
         Url_Method_Get,
         0i64,
         0,
         0i64,
         0i64) )
  {
    v14 = (Scaleform::RefCountVImpl *)v9;
    v10 = (_QWORD *)(filename->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    key.pSecond = (const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *)&v14;
    key.pFirst = filename;
    v11 = Scaleform::String::BernsteinHashFunctionCIS((char *)v10 + 12, *v10 & 0x7FFFFFFFFFFFFFFFi64, 0x1505ui64);
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
      &p_HttpFilesOpened->mHash,
      p_HttpFilesOpened,
      &key,
      v11);
    if ( v14 )
      Scaleform::RefCountImpl::Release(v14);
    return (Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *)(v9 + 2);
  }
  else
  {
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v9);
    return 0i64;
  }
}

void __fastcall Scaleform::GFx::LoaderImpl::RegisterLoadProcess(
        Scaleform::GFx::LoaderImpl *this,
        Scaleform::GFx::LoaderTask *ptask)
{
  Scaleform::GFx::LoadProcessNode *v4; // rax
  Scaleform::GFx::LoadProcessNode *v5; // r8
  Scaleform::GFx::LoadProcessNode *pPrev; // rax

  Scaleform::Lock::DoLock(&this->LoadProcessesLock);
  v4 = (Scaleform::GFx::LoadProcessNode *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                            Scaleform::Memory::pGlobalHeap,
                                            24i64);
  v5 = v4;
  if ( v4 )
  {
    v4->pPrev = (Scaleform::GFx::LoadProcessNode *)-1i64;
    v4->pNext = (Scaleform::GFx::LoadProcessNode *)-1i64;
    v4->pTask = ptask;
  }
  else
  {
    v5 = 0i64;
  }
  pPrev = this->LoadProcesses.Root.pPrev;
  v5->pNext = (Scaleform::GFx::LoadProcessNode *)&this->LoadProcesses;
  v5->pPrev = pPrev;
  this->LoadProcesses.Root.pPrev->pNext = v5;
  this->LoadProcesses.Root.pPrev = v5;
  Scaleform::Lock::Unlock(&this->LoadProcessesLock);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned int *Data; // rdx
  unsigned __int64 v5; // rdi
  unsigned int *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, 4 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (unsigned int *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 4 * v5, &v7);
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

void __fastcall Scaleform::ArrayData<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::GFx::`anonymous namespace'::Range,Scaleform::AllocatorGH<Scaleform::GFx::`anonymous namespace'::Range,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

__int64 __fastcall Scaleform::SFiswspace(wchar_t charCode)
{
  unsigned __int64 v1; // rax
  int v2; // er8
  int v4; // edx
  int v5; // ecx

  v1 = (unsigned __int64)charCode >> 8;
  v2 = Scaleform::UnicodeSpaceBits[v1];
  if ( !Scaleform::UnicodeSpaceBits[v1] )
    return 0i64;
  if ( v2 == 1 )
    return 1i64;
  v4 = charCode & 0xF;
  v5 = Scaleform::UnicodeSpaceBits[v2 + ((charCode >> 4) & 0xF)];
  return _bittest(&v5, v4);
}

void __fastcall Scaleform::Render::DepthStencilBuffer::initSurface(
        Scaleform::Render::DepthStencilBuffer *this,
        Scaleform::Render::DepthStencilSurface *surface)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( surface )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)surface);
  pObject = (Scaleform::RefCountVImpl *)this->pSurface.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pSurface.pObject = surface;
}

void __fastcall Scaleform::GFx::ExporterInfoImpl::SetData(
        Scaleform::GFx::ExporterInfoImpl *this,
        unsigned __int16 version,
        Scaleform::GFx::FileTypeConstants::FileFormatType format,
        const char *pname,
        const char *pprefix,
        unsigned int flags,
        const Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> *codeOffsets)
{
  const char *v7; // rdi
  const char *v9; // rdx
  Scaleform::Array<unsigned long,2,Scaleform::ArrayDefaultPolicy> *p_CodeOffsets; // rcx
  unsigned __int64 i; // rax

  v7 = &pnewText;
  this->SI.Version = version;
  this->SI.Format = format;
  v9 = &pnewText;
  if ( pprefix )
    v9 = pprefix;
  Scaleform::String::operator=(&this->Prefix, v9);
  if ( pname )
    v7 = pname;
  Scaleform::String::operator=(&this->SWFName, v7);
  p_CodeOffsets = &this->CodeOffsets;
  this->SI.pSWFName = (const char *)((this->SWFName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  this->SI.pPrefix = (const char *)((this->Prefix.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  this->SI.ExportFlags = flags;
  if ( codeOffsets )
  {
    Scaleform::ArrayData<unsigned long,Scaleform::AllocatorGH<unsigned long,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      &p_CodeOffsets->Data,
      codeOffsets->Data.Size);
    for ( i = 0i64; i < this->CodeOffsets.Data.Size; ++i )
      this->CodeOffsets.Data.Data[i] = codeOffsets->Data.Data[i];
  }
  else
  {
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *,2>,Scaleform::ArrayDefaultPolicy>>::Clear((Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMAbcFile *,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329>,Scaleform::ArrayDefaultPolicy> > *)p_CodeOffsets);
  }
}

void __fastcall Scaleform::GFx::Translator::TranslateInfo::SetResult(
        Scaleform::GFx::Translator::TranslateInfo *this,
        const char *presultTextUTF8,
        unsigned __int64 resultUTF8Len)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rdi

  if ( presultTextUTF8 )
  {
    v3 = resultUTF8Len;
    if ( resultUTF8Len == -1i64 )
    {
      v3 = -1i64;
      do
        ++v3;
      while ( presultTextUTF8[v3] );
    }
    v6 = (int)(Scaleform::UTF8Util::GetLength(presultTextUTF8, -1i64) + 1);
    Scaleform::WStringBuffer::Resize(this->pResult, v6);
    Scaleform::UTF8Util::DecodeStringSafe(this->pResult->pText, v6, presultTextUTF8, v3);
    this->Flags |= 1u;
  }
}

void __fastcall Scaleform::GFx::LoaderImpl::UnRegisterLoadProcess(
        Scaleform::GFx::LoaderImpl *this,
        Scaleform::GFx::LoaderTask *ptask)
{
  Scaleform::Lock *p_LoadProcessesLock; // rbx
  Scaleform::GFx::LoadProcessNode *pNext; // rdx
  Scaleform::List<Scaleform::GFx::LoadProcessNode,Scaleform::GFx::LoadProcessNode,Scaleform::ListNode<Scaleform::GFx::LoadProcessNode> > *p_LoadProcesses; // rdi

  p_LoadProcessesLock = &this->LoadProcessesLock;
  Scaleform::Lock::DoLock(&this->LoadProcessesLock);
  pNext = this->LoadProcesses.Root.pNext;
  p_LoadProcesses = &this->LoadProcesses;
  if ( pNext != (Scaleform::GFx::LoadProcessNode *)p_LoadProcesses )
  {
    while ( pNext->pTask != ptask )
    {
      pNext = pNext->pNext;
      if ( pNext == (Scaleform::GFx::LoadProcessNode *)p_LoadProcesses )
        goto LABEL_6;
    }
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->Scaleform::ListNode<Scaleform::GFx::LoadProcessNode>::$7B31634AFEB70DB90C787BDB11DB4927::pPrev = pNext->pPrev;
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
LABEL_6:
  Scaleform::Lock::Unlock(p_LoadProcessesLock);
}

void __fastcall Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor> *v9; // rsi
  unsigned __int64 v10; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  volatile int *v12; // rbx
  int v13; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > v14; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v13 = 2;
    v6 = 0i64;
    v14.pTable = 0i64;
    v14.pTable = (Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v13);
    v14.pTable->EntryCount = 0i64;
    v14.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v14.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor> *)&this->pTable[v6];
        if ( v9[1].First.HeapTypeBits != -2i64 )
        {
          v10 = Scaleform::String::BernsteinHashFunctionCIS(
                  (const void *)((v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  *(_QWORD *)(v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                  0x1505ui64);
          Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::add<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>>(
            &v14,
            pheapAddr,
            v9 + 2,
            v10);
          pObject = (Scaleform::RefCountVImpl *)v9[2].Second.pObject;
          if ( pObject )
            Scaleform::RefCountImpl::Release(pObject);
          v12 = (volatile int *)(v9[2].First.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v12 + 2, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v12);
          v9[1].First.HeapTypeBits = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v14.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::~HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache>,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>(this);
  }
}

