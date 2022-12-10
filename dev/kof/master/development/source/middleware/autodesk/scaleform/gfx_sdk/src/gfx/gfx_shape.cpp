#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"

Scaleform::GFx::PathAllocator::PathAllocator(unsigned long pageSize); // 0x1403DE820
Scaleform::GFx::PathAllocator::~PathAllocator(); // 0x1403DE910
unsigned char * Scaleform::GFx::PathAllocator::AllocRawPath(unsigned long sizeInBytes); // 0x1403DE900
unsigned char * Scaleform::GFx::PathAllocator::AllocMemoryBlock(unsigned long sizeForCurrentPage, unsigned long sizeInNewPage); // 0x1403DE840
bool Scaleform::GFx::PathAllocator::ReallocLastBlock(unsigned char * ptr, unsigned long oldSize, unsigned long newSize); // 0x1403DEAD0
Scaleform::Ptr<Scaleform::Render::TreeNode> Scaleform::GFx::ShapeBaseCharacterDef::CreateTreeShape(Scaleform::Render::ContextImpl::Context & context, Scaleform::GFx::MovieDefImpl * defImpl); // 0x1403DE960
class Scaleform::Ptr<Scaleform::Render::TreeShape>
{
protected:
	Scaleform::Render::TreeShape * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeShape>(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Render::TreeShape *);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Ptr<Scaleform::Render::TreeShape> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Ptr<Scaleform::Render::TreeShape>(Scaleform::Render::TreeShape &);
	Ptr<Scaleform::Render::TreeShape>();
	~Ptr<Scaleform::Render::TreeShape>();
	bool operator==(Scaleform::Render::TreeShape *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	bool operator!=(Scaleform::Render::TreeShape *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Render::TreeShape &);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(Scaleform::Render::TreeShape *);
	const Scaleform::Ptr<Scaleform::Render::TreeShape> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Render::TreeShape &);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(Scaleform::Render::TreeShape *);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeShape> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeShape * & GetRawRef();
	Scaleform::Render::TreeShape * GetPtr();
	Scaleform::Render::TreeShape & operator*();
	Scaleform::Render::TreeShape * operator->();
	Scaleform::Render::TreeShape * operator class Scaleform::Render::TreeShape *();
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Render::TreeShape *);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Pickable<Scaleform::Render::TreeShape>);
	Scaleform::Ptr<Scaleform::Render::TreeShape> & Pick(Scaleform::Ptr<Scaleform::Render::TreeShape> &);
};void __fastcall Scaleform::GFx::PathAllocator::PathAllocator(
        Scaleform::GFx::PathAllocator *this,
        unsigned int pageSize)
{
  this->DefaultPageSize = pageSize;
  this->pFirstPage = 0i64;
  this->pLastPage = 0i64;
  this->FreeBytes = 0;
}

void __fastcall Scaleform::GFx::PathAllocator::Clear(Scaleform::GFx::PathAllocator *this)
{
  Scaleform::GFx::PathAllocator::Page *pFirstPage; // rdx
  Scaleform::GFx::PathAllocator::Page *pNext; // rbx

  pFirstPage = this->pFirstPage;
  if ( this->pFirstPage )
  {
    do
    {
      pNext = pFirstPage->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      pFirstPage = pNext;
    }
    while ( pNext );
  }
  this->pFirstPage = 0i64;
  this->pLastPage = 0i64;
  this->FreeBytes = 0;
}

Scaleform::GFx::PathAllocator::Page *__fastcall Scaleform::GFx::PathAllocator::AllocMemoryBlock(
        Scaleform::GFx::PathAllocator *this,
        unsigned int sizeForCurrentPage,
        unsigned int sizeInNewPage)
{
  __int16 v3; // si
  unsigned int FreeBytes; // edi
  Scaleform::GFx::PathAllocator::Page *result; // rax
  Scaleform::GFx::PathAllocator::Page *v7; // rdx
  Scaleform::GFx::PathAllocator::Page *pLastPage; // rax
  bool v9; // zf

  v3 = sizeInNewPage;
  FreeBytes = this->FreeBytes;
  if ( this->pLastPage && FreeBytes >= sizeForCurrentPage )
  {
    v3 = sizeForCurrentPage;
LABEL_11:
    result = (Scaleform::GFx::PathAllocator::Page *)((char *)&this->pLastPage->PageSize
                                                   + this->pLastPage->PageSize
                                                   - (unsigned __int64)FreeBytes
                                                   + 4);
    this->FreeBytes = FreeBytes - v3;
    return result;
  }
  FreeBytes = this->DefaultPageSize;
  if ( sizeInNewPage > FreeBytes )
    FreeBytes = sizeInNewPage;
  result = (Scaleform::GFx::PathAllocator::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    this,
                                                    FreeBytes + 16i64,
                                                    0i64);
  v7 = result;
  if ( result )
  {
    result->pNext = 0i64;
    result->PageSize = FreeBytes;
    pLastPage = this->pLastPage;
    if ( pLastPage )
    {
      pLastPage->pNext = v7;
      this->pLastPage->PageSize -= this->FreeBytes;
    }
    v9 = this->pFirstPage == 0i64;
    this->pLastPage = v7;
    if ( v9 )
      this->pFirstPage = v7;
    goto LABEL_11;
  }
  return result;
}

Scaleform::GFx::PathAllocator::Page *__fastcall Scaleform::GFx::PathAllocator::AllocRawPath(
        Scaleform::GFx::PathAllocator *this,
        unsigned int sizeInBytes)
{
  return Scaleform::GFx::PathAllocator::AllocMemoryBlock(this, sizeInBytes, sizeInBytes);
}

Scaleform::Ptr<Scaleform::Render::TreeNode> *__fastcall Scaleform::GFx::ShapeBaseCharacterDef::CreateTreeShape(
        Scaleform::GFx::ShapeBaseCharacterDef *this,
        Scaleform::Ptr<Scaleform::Render::TreeNode> *result,
        Scaleform::Render::ContextImpl::Context *context,
        Scaleform::GFx::MovieDefImpl *defImpl)
{
  Scaleform::Render::TreeNode::NodeData *v8; // rax
  Scaleform::Render::TreeNode::NodeData *v9; // rbx
  Scaleform::Render::TreeShape *EntryHelper; // rbx
  Scaleform::Render::ShapeMeshProvider *pObject; // rdx
  Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> *v12; // r14
  Scaleform::Render::ShapeMeshProvider *v13; // r8
  Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> resulta; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v8 = (Scaleform::Render::TreeNode::NodeData *)context->pHeap->Alloc(context->pHeap, 160i64, 0i64);
  v9 = v8;
  if ( v8 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(v8, ET_Shape);
    v9->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeShape::NodeData::`vftable';
    v9[1].__vftable = 0i64;
    *(_DWORD *)&v9[1].Type = 0;
  }
  EntryHelper = (Scaleform::Render::TreeShape *)Scaleform::Render::ContextImpl::Context::createEntryHelper(context, v9);
  if ( this->NeedsResolving(this) )
  {
    Scaleform::GFx::MovieDefImpl::BindTaskData::GetShapeMeshProvider(
      defImpl->pBindData.pObject,
      &resulta,
      this->pShapeMeshProvider.pObject);
    pObject = resulta.pObject;
    if ( !resulta.pObject )
    {
      v12 = this->BindResourcesInStyles(this, &v17, &defImpl->pBindData.pObject->ResourceBinding);
      if ( v12->pObject )
        v12->pObject->AddRef(&v12->pObject->Scaleform::Render::MeshProvider);
      if ( resulta.pObject )
        resulta.pObject->Release(&resulta.pObject->Scaleform::Render::MeshProvider);
      v13 = v12->pObject;
      resulta.pObject = v12->pObject;
      if ( v17 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v17 + 16) + 16i64))(v17 + 16);
        v13 = resulta.pObject;
      }
      Scaleform::GFx::MovieDefImpl::BindTaskData::AddShapeMeshProvider(
        defImpl->pBindData.pObject,
        this->pShapeMeshProvider.pObject,
        v13);
      pObject = resulta.pObject;
    }
    Scaleform::Render::TreeShape::SetShape(EntryHelper, pObject);
    if ( resulta.pObject )
      resulta.pObject->Release(&resulta.pObject->Scaleform::Render::MeshProvider);
  }
  else
  {
    Scaleform::Render::TreeShape::SetShape(EntryHelper, this->pShapeMeshProvider.pObject);
  }
  if ( EntryHelper )
    ++EntryHelper->RefCount;
  result->pObject = EntryHelper;
  if ( EntryHelper )
  {
    if ( EntryHelper->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(EntryHelper);
  }
  return result;
}

bool __fastcall Scaleform::GFx::PathAllocator::ReallocLastBlock(
        Scaleform::GFx::PathAllocator *this,
        unsigned __int8 *ptr,
        unsigned int oldSize,
        unsigned int newSize)
{
  Scaleform::GFx::PathAllocator::Page *pLastPage; // r11
  unsigned __int8 *v5; // rbx
  bool result; // al
  unsigned __int64 v7; // rdx

  if ( newSize >= oldSize )
    return 0;
  pLastPage = this->pLastPage;
  if ( !pLastPage )
    return 0;
  if ( ptr - (unsigned __int8 *)pLastPage - 12 >= (int)pLastPage->PageSize )
    return 0;
  v5 = (unsigned __int8 *)(ptr - (unsigned __int8 *)pLastPage - 12);
  if ( pLastPage->PageSize - (unsigned __int64)oldSize - (_QWORD)v5 != this->FreeBytes )
    return 0;
  result = 0;
  v7 = pLastPage->PageSize - (unsigned __int64)newSize - (_QWORD)v5;
  if ( v7 < 0x10000 )
    this->FreeBytes = v7;
  return result;
}

