#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitiveprocessor.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textprimitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"

class Scaleform::Render::TextPrepareBuffer :
	Scaleform::Render::RQPrepareBuffer
{
	enum QIPrepareResult
	{
		QIP_Done = 0,
		QIP_NeedCache = 1,
	};
public:
	void StartPrimitive(Scaleform::Render::HAL *, Scaleform::Render::RenderQueueItem &, Scaleform::Render::TextPrimitiveBundle *, Scaleform::Render::TreeCacheText *, Scaleform::Render::TextEmitBuffer *);
	Scaleform::Render::RenderQueueItem::QIPrepareResult ProcessPrimitive(bool);
private:
	TextPrepareBuffer();
	void addTextFieldLayers(bool);
	Scaleform::Render::TextEmitBuffer * pEmitBuffer; // 0x8
	Scaleform::Render::HAL * pHal; // 0x10
	Scaleform::Render::MeshCache * pCache; // 0x18
	Scaleform::Render::TextPrimitiveBundle * pBundle; // 0x20
	unsigned long long ProcessingLayer; // 0x28
	bool LayersPinned; // 0x30
	bool LayersFinished; // 0x31
	Scaleform::Render::TreeCacheText * pRemainingTextFields; // 0x38
	Scaleform::Render::PrimitivePrepareBuffer PPBuffer; // 0x40
};
class Scaleform::Render::TextEmitBuffer :
	Scaleform::Render::RQEmitBuffer
{
	enum MaskStatusType
	{
		Mask_NotInUse = 0,
		Mask_Submitting = 1,
		Mask_InUse = 2,
	};
public:
	void StartEmitting(void *, Scaleform::Render::TextPrimitiveBundle *);
	void EndEmitting();
	void EmitPrimitive(Scaleform::Render::HAL *, Scaleform::Render::TextPrepareBuffer *);
private:
	TextEmitBuffer();
	Scaleform::Render::TextPrimitiveBundle * pBundle; // 0x8
	unsigned long long EmitLayer; // 0x10
	Scaleform::Render::TextEmitBuffer::MaskStatusType MaskStatus; // 0x18
	Scaleform::Render::PrimitiveEmitBuffer PEBuffer; // 0x20
};
void Scaleform::Render::TextPrepareBuffer::addTextFieldLayers(bool startFlag); // 0x1404195C0
Scaleform::Render::RenderQueueItem::QIPrepareResult Scaleform::Render::TextPrepareBuffer::ProcessPrimitive(bool waitForCache); // 0x140418E60
void Scaleform::Render::TextEmitBuffer::EmitPrimitive(Scaleform::Render::HAL * hal, Scaleform::Render::TextPrepareBuffer * prepareBuffer); // 0x140418C80
bool Scaleform::Render::TextLayerPrimitive::AddEntry(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntry * e, Scaleform::Render::Mesh * pmesh, const Scaleform::Render::MatrixPoolImpl::HMatrix & m); // 0x140418BE0
bool Scaleform::Render::TextLayerPrimitive::RemoveEntry(Scaleform::Render::BundleEntry * e); // 0x1404191D0
Scaleform::Render::TextPrimitiveBundle::TextPrimitiveBundle(Scaleform::Render::HAL * hal); // 0x1404189A0
Scaleform::Render::TextPrimitiveBundle::~TextPrimitiveBundle(); // 0x140418A90
void Scaleform::Render::TextPrimitiveBundle::InsertEntry(Scaleform::Render::HAL * hal, unsigned long long index, Scaleform::Render::BundleEntry * entry); // 0x140418E00
void Scaleform::Render::TextPrimitiveBundle::RemoveEntries(unsigned long long index, unsigned long long count); // 0x140419000
void Scaleform::Render::TextPrimitiveBundle::UpdateMesh(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntry * entry); // 0x1404192A0
Scaleform::Render::RenderQueueItem::QIPrepareResult Scaleform::Render::TextPrimitiveBundle::Prepare(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp, bool waitForCache); // 0x140418E10
void Scaleform::Render::TextPrimitiveBundle::EmitToHAL(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp); // 0x140418DC0
void Scaleform::Render::TextPrimitiveBundle::startPrimitive(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::TextPrepareBuffer * prepareBuffer, Scaleform::Render::RenderQueueProcessor & qp); // 0x140419AE0
bool Scaleform::Render::TextPrimitiveBundle::addAndPinBatchLayers(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheText * textCache, Scaleform::Render::TextMeshProvider * tm); // 0x140419310
void Scaleform::Render::TextPrimitiveBundle::removeEntryFromLayers(Scaleform::Render::BundleEntry * e); // 0x1404199B0
void Scaleform::Render::TextPrimitiveBundle::clearBatchLayers(); // 0x1404197D0
class Scaleform::Render::SKI_TextPrimitive :
	Scaleform::Render::SortKeyInterface
{
public:
	SKI_TextPrimitive(Scaleform::Render::SKI_TextPrimitive &);
	SKI_TextPrimitive(const Scaleform::Render::SKI_TextPrimitive &);
	SKI_TextPrimitive();
	static Scaleform::Render::SKI_TextPrimitive Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_TextPrimitive Instance3D; // 0xFFFFFFFFFFFFFFFF
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_TextPrimitive();
	Scaleform::Render::SKI_TextPrimitive & operator=(Scaleform::Render::SKI_TextPrimitive &);
	Scaleform::Render::SKI_TextPrimitive & operator=(const Scaleform::Render::SKI_TextPrimitive &);
};
bool Scaleform::Render::SKI_TextPrimitive::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * __formal, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x140418880
class Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle>
{
protected:
	Scaleform::Render::TextPrimitiveBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextPrimitiveBundle>(const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> &);
	Ptr<Scaleform::Render::TextPrimitiveBundle>(Scaleform::Render::TextPrimitiveBundle *);
	Ptr<Scaleform::Render::TextPrimitiveBundle>(Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextPrimitiveBundle>(Scaleform::Pickable<Scaleform::Render::TextPrimitiveBundle>);
	Ptr<Scaleform::Render::TextPrimitiveBundle>(Scaleform::Render::TextPrimitiveBundle &);
	Ptr<Scaleform::Render::TextPrimitiveBundle>();
	~Ptr<Scaleform::Render::TextPrimitiveBundle>();
	bool operator==(Scaleform::Render::TextPrimitiveBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> &);
	bool operator!=(Scaleform::Render::TextPrimitiveBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> &);
	Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & operator=(Scaleform::Pickable<Scaleform::Render::TextPrimitiveBundle>);
	const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & operator=(Scaleform::Render::TextPrimitiveBundle &);
	const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & operator=(Scaleform::Render::TextPrimitiveBundle *);
	const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> &);
	Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextPrimitiveBundle>);
	Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & SetPtr(Scaleform::Render::TextPrimitiveBundle &);
	Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & SetPtr(Scaleform::Render::TextPrimitiveBundle *);
	Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextPrimitiveBundle * & GetRawRef();
	Scaleform::Render::TextPrimitiveBundle * GetPtr();
	Scaleform::Render::TextPrimitiveBundle & operator*();
	Scaleform::Render::TextPrimitiveBundle * operator->();
	Scaleform::Render::TextPrimitiveBundle * operator class Scaleform::Render::TextPrimitiveBundle *();
	Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & Pick(Scaleform::Render::TextPrimitiveBundle *);
	Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & Pick(Scaleform::Pickable<Scaleform::Render::TextPrimitiveBundle>);
	Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> & Pick(Scaleform::Ptr<Scaleform::Render::TextPrimitiveBundle> &);
};
void(*Scaleform::Render::SKI_TextPrimitive::nstance$initializer$::operator&)(); // 0x140739E58
void(*Scaleform::Render::SKI_TextPrimitive::nstance3D$initializer$::operator&)(); // 0x140739E60
Scaleform::Render::SKI_TextPrimitive Scaleform::Render::SKI_TextPrimitive::Instance; // 0x1409FA480
Scaleform::Render::SKI_TextPrimitive Scaleform::Render::SKI_TextPrimitive::Instance3D; // 0x1409FA490
void Scaleform::Render::SKI_TextPrimitive::DrawBundleEntry(Scaleform::Render::HAL * hal, void * __formal, Scaleform::Render::BundleEntry * p); // 0x140418910
Scaleform::Render::SortKey::SortKey(Scaleform::Render::SortKeyTextType __formal, bool is3D); // 0x140418940//decompilation failure at 140739E58!
//decompilation failure at 140739E60!
//decompilation failure at 1409FA480!
//decompilation failure at 1409FA490!
void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::SortKeyTextType __formal,
        bool is3D)
{
  this->Data = 0i64;
  if ( is3D )
  {
    this->pImpl = &Scaleform::Render::SKI_TextPrimitive::Instance3D;
    Scaleform::Render::SKI_TextPrimitive::Instance3D.AddRef(&Scaleform::Render::SKI_TextPrimitive::Instance3D, 0i64);
  }
  else
  {
    this->pImpl = &Scaleform::Render::SKI_TextPrimitive::Instance;
    Scaleform::Render::SKI_TextPrimitive::Instance.AddRef(&Scaleform::Render::SKI_TextPrimitive::Instance, 0i64);
  }
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::TextPrimitiveBundle(
        Scaleform::Render::TextPrimitiveBundle *this,
        Scaleform::Render::HAL *hal)
{
  this->RefCount = 1;
  this->Scaleform::Render::Bundle::Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::Render::TextPrimitiveBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->NeedUpdate = 1;
  this->FrameId = 0;
  Scaleform::Render::Bundle::UpdateChain(this, hal, 0i64);
  this->NeedUpdate = 1;
  this->Scaleform::Render::Bundle::Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::Render::TextPrimitiveBundle_vtbl *)&Scaleform::Render::TextPrimitiveBundle::`vftable'{for `Scaleform::Render::Bundle'};
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::TextPrimitiveBundle::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  this->Layers.Size = 0i64;
  this->pMaskPrimitive.pObject = 0i64;
}

void __fastcall Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::~ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>(
        Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> *this)
{
  $0D82BBD2CF53098A49781F21AEF5728E *v1; // r14
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **pData; // rbx

  v1 = &this->8;
  Size = this->Size;
  if ( this->Size <= 2 )
    pData = (Scaleform::RefCountVImpl **)&this->8;
  else
    pData = (Scaleform::RefCountVImpl **)v1->AD.pData;
  for ( ; Size; --Size )
  {
    if ( *pData )
      Scaleform::RefCountImpl::Release(*pData);
    ++pData;
  }
  if ( this->Size > 2 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v1->AD.pData);
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::~TextPrimitiveBundle(
        Scaleform::Render::TextPrimitiveBundle *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->Scaleform::Render::Bundle::Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::Render::TextPrimitiveBundle_vtbl *)&Scaleform::Render::TextPrimitiveBundle::`vftable'{for `Scaleform::Render::Bundle'};
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::TextPrimitiveBundle::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  pObject = (Scaleform::RefCountVImpl *)this->pMaskPrimitive.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::~ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>(&this->Layers);
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::RenderQueueItem::Interface::`vftable';
  this->Scaleform::Render::Bundle::Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::Render::TextPrimitiveBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Entries.Data.Data);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

char __fastcall Scaleform::Render::TextLayerPrimitive::AddEntry(
        Scaleform::Render::TextLayerPrimitive *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntry *e,
        Scaleform::Render::Mesh *pmesh,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m)
{
  Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *p_Entries; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  Scaleform::Render::TextureFormat **Data; // rax
  Scaleform::Render::BundleEntry **v11; // rcx

  if ( !Scaleform::Render::Primitive::Insert(this, hal, this->Meshes.Data.Size, pmesh, m) )
    return 0;
  p_Entries = (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)&this->Entries;
  v8 = p_Entries->Size + 1;
  if ( v8 >= p_Entries->Size )
  {
    if ( v8 > p_Entries->Policy.Capacity )
    {
      v9 = v8 + (v8 >> 2);
      goto LABEL_7;
    }
  }
  else if ( v8 < p_Entries->Policy.Capacity >> 1 )
  {
    v9 = p_Entries->Size + 1;
LABEL_7:
    Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      p_Entries,
      p_Entries,
      v9);
  }
  Data = p_Entries->Data;
  p_Entries->Size = v8;
  v11 = (Scaleform::Render::BundleEntry **)&Data[v8 - 1];
  if ( v11 )
    *v11 = e;
  return 1;
}

void __fastcall Scaleform::Render::SKI_TextPrimitive::DrawBundleEntry(
        Scaleform::Render::SKI_TextPrimitive *this,
        Scaleform::Render::HAL *hal,
        void *__formal,
        Scaleform::Render::BundleEntry *p)
{
  Scaleform::Render::Bundle *pObject; // rax

  pObject = p->pBundle.pObject;
  if ( pObject )
    Scaleform::Render::HAL::Draw(hal, (Scaleform::Render::RenderQueueItem::Interface *)&pObject[1], 0i64);
}

void __fastcall Scaleform::Render::TextEmitBuffer::EmitPrimitive(
        Scaleform::Render::TextEmitBuffer *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TextPrepareBuffer *prepareBuffer)
{
  Scaleform::Render::TextPrimitiveBundle *pBundle; // rax
  char v6; // r14
  unsigned __int64 ProcessingLayer; // rbp
  Scaleform::Render::PrimitivePrepareBuffer *p_PPBuffer; // r12
  Scaleform::Render::PrimitiveEmitBuffer *emitBuffer; // r15
  Scaleform::Render::TextPrimitiveBundle *v10; // rcx
  _QWORD *p_pData; // rdx
  __int64 v12; // rsi
  int v13; // eax

  pBundle = this->pBundle;
  v6 = 1;
  if ( this->pItem == prepareBuffer->pItem )
  {
    ProcessingLayer = prepareBuffer->ProcessingLayer;
    if ( ProcessingLayer < pBundle->Layers.Size )
    {
      ++ProcessingLayer;
      v6 = 0;
    }
  }
  else
  {
    ProcessingLayer = pBundle->Layers.Size;
  }
  if ( this->EmitLayer < ProcessingLayer )
  {
    p_PPBuffer = &prepareBuffer->PPBuffer;
    emitBuffer = &this->PEBuffer;
    do
    {
      v10 = this->pBundle;
      if ( v10->Layers.Size <= 2 )
        p_pData = &v10->Layers.AD.pData;
      else
        p_pData = &v10->Layers.AD.pData->pObject;
      v12 = p_pData[this->EmitLayer];
      v13 = *(_DWORD *)(v12 + 88);
      if ( v13 >= 11 )
      {
        if ( v13 == 11 )
        {
          if ( this->MaskStatus == Mask_NotInUse && v10->pMaskPrimitive.pObject )
          {
            ((void (__fastcall *)(Scaleform::Render::HAL *))hal->PushMask_BeginSubmit)(hal);
            this->MaskStatus = Mask_Submitting;
          }
        }
        else if ( this->MaskStatus == Mask_Submitting )
        {
          hal->EndMaskSubmit(hal);
          this->MaskStatus = Mask_InUse;
        }
      }
      Scaleform::Render::Primitive::emitToHAL(
        (Scaleform::Render::Primitive *)v12,
        hal,
        (void *)v12,
        p_PPBuffer,
        emitBuffer);
      ++this->EmitLayer;
    }
    while ( this->EmitLayer < ProcessingLayer );
  }
  if ( v6 )
  {
    if ( this->MaskStatus )
    {
      hal->PopMask(hal);
      this->MaskStatus = Mask_NotInUse;
    }
    this->pItem = 0i64;
  }
  else
  {
    --this->EmitLayer;
  }
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::EmitToHAL(
        Scaleform::Render::TextPrimitiveBundle *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  $176B5A3B7F51D3CE37785D0F43521823 *v5; // r8
  Scaleform::Render::TextEmitBuffer *v6; // rcx

  if ( qp->QueueEmitFilter == QPF_All )
  {
    v5 = &qp->72;
    v6 = (Scaleform::Render::TextEmitBuffer *)&qp->264;
    if ( item != qp->EmitItemBuffer.pItem )
    {
      v6->pItem = item;
      *(_QWORD *)&qp->EmitItemBufferBytes[8] = (char *)this - 56;
      *(_QWORD *)&qp->EmitItemBufferBytes[16] = 0i64;
      *(_DWORD *)&qp->EmitItemBufferBytes[24] = 0;
      *(_QWORD *)&qp->EmitItemBufferBytes[32] = 0i64;
    }
    Scaleform::Render::TextEmitBuffer::EmitPrimitive(v6, qp->pHAL, (Scaleform::Render::TextPrepareBuffer *)v5);
  }
}

// attributes: thunk
void __fastcall Scaleform::Render::TextPrimitiveBundle::InsertEntry(
        Scaleform::Render::TextPrimitiveBundle *this,
        Scaleform::Render::HAL *hal,
        unsigned __int64 index,
        Scaleform::Render::BundleEntry *entry)
{
  Scaleform::Render::Bundle::InsertEntry(this, hal, index, entry);
}

Scaleform::Render::RenderQueueItem::QIPrepareResult __fastcall Scaleform::Render::TextPrimitiveBundle::Prepare(
        Scaleform::Render::TextPrimitiveBundle *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp,
        bool waitForCache)
{
  $176B5A3B7F51D3CE37785D0F43521823 *v6; // rbx

  if ( qp->QueuePrepareFilter )
    return 0;
  v6 = &qp->72;
  if ( item != qp->PrepareItemBuffer.pItem )
    Scaleform::Render::TextPrimitiveBundle::startPrimitive(
      (Scaleform::Render::TextPrimitiveBundle *)((char *)this - 56),
      item,
      (Scaleform::Render::TextPrepareBuffer *)&qp->72,
      qp);
  return Scaleform::Render::TextPrepareBuffer::ProcessPrimitive(
           (Scaleform::Render::TextPrepareBuffer *)v6,
           waitForCache);
}

__int64 __fastcall Scaleform::Render::TextPrepareBuffer::ProcessPrimitive(
        Scaleform::Render::TextPrepareBuffer *this,
        bool waitForCache)
{
  Scaleform::Render::TextPrimitiveBundle *pBundle; // rax
  __int64 v5; // rcx
  Scaleform::Render::Primitive *v6; // r8

  if ( this->LayersFinished )
  {
    this->PPBuffer.pItem = 0i64;
    Scaleform::Render::TextPrimitiveBundle::clearBatchLayers(this->pBundle);
    Scaleform::Render::TextPrepareBuffer::addTextFieldLayers(this, 0);
    this->LayersFinished = 0;
    this->ProcessingLayer = 0i64;
  }
  if ( this->ProcessingLayer < this->pBundle->Layers.Size )
  {
    do
    {
      pBundle = this->pBundle;
      v5 = pBundle->Layers.Size <= 2 ? (__int64)&pBundle->Layers.8 : (__int64)pBundle->Layers.AD.pData;
      v6 = *(Scaleform::Render::Primitive **)(v5 + 8 * this->ProcessingLayer);
      if ( (unsigned int)Scaleform::Render::Primitive::prepare(
                           v6,
                           this->pHal,
                           v6,
                           &this->PPBuffer,
                           &this->pEmitBuffer->PEBuffer,
                           this->pCache,
                           waitForCache) == 1 )
        return 1i64;
    }
    while ( ++this->ProcessingLayer < this->pBundle->Layers.Size );
  }
  if ( this->LayersPinned )
  {
    Scaleform::Render::TextPrimitiveBundle::unpinLayerBatches(this->pBundle);
    this->LayersPinned = 0;
  }
  if ( this->pRemainingTextFields )
  {
    this->LayersFinished = 1;
    return 1i64;
  }
  return 0i64;
}

void __fastcall Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::RemoveAt(
        Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> *this,
        unsigned __int64 index)
{
  $0D82BBD2CF53098A49781F21AEF5728E *v2; // rdi
  $0D82BBD2CF53098A49781F21AEF5728E *pData; // rax
  Scaleform::RefCountVImpl *v6; // rcx
  unsigned __int8 *v7; // rsi

  v2 = &this->8;
  if ( this->Size <= 2 )
    pData = &this->8;
  else
    pData = ($0D82BBD2CF53098A49781F21AEF5728E *)v2->AD.pData;
  v6 = (Scaleform::RefCountVImpl *)(&pData->AD.pData)[index];
  v7 = &pData->Raw[8 * index];
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  memmove(v7, v7 + 8, 8 * (this->Size - index) - 8);
  if ( --this->Size == 2 )
  {
    *v2 = *($0D82BBD2CF53098A49781F21AEF5728E *)&v2->AD.pData->pObject;
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::RemoveEntries(
        Scaleform::Render::TextPrimitiveBundle *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  Scaleform::Render::TreeCacheNode *pSourceNode; // rbx
  Scaleform::Render::TextMeshProvider *MeshProvider; // rax
  Scaleform::Render::TextMeshProvider *v11; // r14
  Scaleform::Render::TextLayerPrimitive **p_pObject; // rcx
  _QWORD *p_pData; // rax
  Scaleform::Render::TextMeshProvider *v14; // rax
  Scaleform::Render::MaskPrimitive *pObject; // r9
  unsigned __int64 v16; // rdx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rcx
  unsigned __int64 Size; // rax
  Scaleform::Render::MaskPrimitive *v19; // rax
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+78h] [rbp+20h] BYREF

  v3 = count + index;
  v4 = count;
  v5 = index;
  v7 = index;
  if ( index < count + index )
  {
    v8 = 0i64;
    do
    {
      pSourceNode = this->Entries.Data.Data[v7]->pSourceNode;
      MeshProvider = Scaleform::Render::TreeCacheText::GetMeshProvider((Scaleform::Render::TreeCacheText *)pSourceNode);
      v11 = MeshProvider;
      if ( MeshProvider && MeshProvider->pBundle )
      {
        if ( this->Layers.Size )
        {
          do
          {
            if ( this->Layers.Size <= 2 )
              p_pObject = (Scaleform::Render::TextLayerPrimitive **)&this->Layers.8;
            else
              p_pObject = &this->Layers.AD.pData->pObject;
            Scaleform::Render::TextLayerPrimitive::RemoveEntry(
              p_pObject[v8],
              (Scaleform::Render::BundleEntry *)&pSourceNode[1]);
            if ( this->Layers.Size <= 2 )
              p_pData = &this->Layers.AD.pData;
            else
              p_pData = &this->Layers.AD.pData->pObject;
            if ( !*(_DWORD *)(p_pData[v8] + 64i64) )
              Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::RemoveAt(
                &this->Layers,
                v8--);
            ++v8;
          }
          while ( v8 < this->Layers.Size );
        }
        if ( this->pMaskPrimitive.pObject )
        {
          v14 = Scaleform::Render::TreeCacheText::GetMeshProvider((Scaleform::Render::TreeCacheText *)pSourceNode[1].Effects.pEffect);
          if ( v14 && (v14->Flags & 0x100) != 0 )
          {
            Scaleform::Render::TextMeshProvider::GetMaskClearBounds(v14, &result);
            pObject = this->pMaskPrimitive.pObject;
            v16 = 0i64;
            pHandle = result.pHandle;
            Size = pObject->MaskAreas.Data.Size;
            if ( Size )
            {
              while ( pObject->MaskAreas.Data.Data[v16].pHandle != result.pHandle )
              {
                if ( ++v16 >= Size )
                  goto LABEL_23;
              }
              Scaleform::Render::MaskPrimitive::Remove(this->pMaskPrimitive.pObject, v16, 1ui64);
              pHandle = result.pHandle;
            }
LABEL_23:
            if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
              Scaleform::Render::MatrixPoolImpl::DataHeader::Release(pHandle->pHeader);
          }
          v19 = this->pMaskPrimitive.pObject;
          if ( !v19->MaskAreas.Data.Size )
          {
            if ( v19 )
              Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->pMaskPrimitive.pObject);
            this->pMaskPrimitive.pObject = 0i64;
          }
        }
        v8 = 0i64;
        v11->pBundle = 0i64;
        v11->pBundleEntry = 0i64;
      }
      ++v7;
    }
    while ( v7 < v3 );
    v5 = index;
    v4 = count;
  }
  Scaleform::Render::Bundle::RemoveEntries(this, v5, v4);
}

bool __fastcall Scaleform::Render::TextLayerPrimitive::RemoveEntry(
        Scaleform::Render::TextLayerPrimitive *this,
        Scaleform::Render::BundleEntry *e)
{
  unsigned __int64 i; // rdi
  Scaleform::Render::BundleEntry **Data; // rax
  unsigned __int64 Size; // r8
  unsigned __int64 Capacity; // rax

  for ( i = 0i64; i < this->Entries.Data.Size; ++i )
  {
    Data = this->Entries.Data.Data;
    if ( Data[i] == e )
    {
      Size = this->Entries.Data.Size;
      if ( Size == 1 )
      {
        Capacity = this->Entries.Data.Policy.Capacity;
        if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 && Capacity )
        {
          if ( this->Entries.Data.Data )
          {
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
            this->Entries.Data.Data = 0i64;
          }
          this->Entries.Data.Policy.Capacity = 0i64;
        }
        this->Entries.Data.Size = 0i64;
      }
      else
      {
        memmove(&Data[i], &Data[i + 1], 8 * (Size - i) - 8);
        --this->Entries.Data.Size;
      }
      Scaleform::Render::Primitive::Remove(this, i--, 1u);
    }
  }
  return 0;
}

bool __fastcall Scaleform::Render::SKI_TextPrimitive::UpdateBundleEntry(
        Scaleform::Render::SKI_TextPrimitive *this,
        Scaleform::Render::HAL *hal,
        void *__formal,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::TextPrimitiveBundle *v7; // rax
  Scaleform::Render::Bundle *v8; // rax
  Scaleform::Render::Bundle *v9; // rbx
  int v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !p->pBundle.pObject )
  {
    v11 = 67;
    v7 = (Scaleform::Render::TextPrimitiveBundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     tr,
                                                     96i64,
                                                     &v11);
    if ( v7 )
    {
      Scaleform::Render::TextPrimitiveBundle::TextPrimitiveBundle(v7, hal);
      v9 = v8;
    }
    else
    {
      v9 = 0i64;
    }
    Scaleform::Render::BundleEntry::SetBundle(p, v9, 0i64);
    if ( v9 )
      Scaleform::RefCountNTSImpl::Release(v9);
  }
  return p->pBundle.pObject != 0i64;
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::UpdateMesh(
        Scaleform::Render::TextPrimitiveBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntry *entry)
{
  Scaleform::Render::TreeCacheText *pSourceNode; // rdi
  Scaleform::Render::TextMeshProvider *MeshProvider; // rax
  Scaleform::Render::TextMeshProvider *v7; // rbx
  unsigned __int64 pindex; // [rsp+48h] [rbp+20h] BYREF

  if ( Scaleform::Render::Bundle::findEntryIndex(this, &pindex, entry) )
  {
    pSourceNode = (Scaleform::Render::TreeCacheText *)entry->pSourceNode;
    MeshProvider = Scaleform::Render::TreeCacheText::GetMeshProvider(pSourceNode);
    v7 = MeshProvider;
    if ( MeshProvider )
    {
      if ( MeshProvider->pBundle )
      {
        Scaleform::Render::TextPrimitiveBundle::removeEntryFromLayers(this, &pSourceNode->SorterShapeNode);
        v7->pBundle = 0i64;
        v7->pBundleEntry = 0i64;
      }
    }
  }
}

bool __fastcall Scaleform::Render::TextPrimitiveBundle::addAndPinBatchLayers(
        Scaleform::Render::TextPrimitiveBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheText *textCache,
        Scaleform::Render::TextMeshProvider *tm)
{
  Scaleform::Render::TreeCacheText *v6; // rdi
  Scaleform::Render::HAL *v7; // r14
  unsigned int v8; // eax
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  unsigned __int64 Size; // r8
  Scaleform::Render::TextMeshLayer *v12; // r14
  Scaleform::Render::TextLayerType Type; // edx
  _QWORD *p_pData; // rbx
  Scaleform::Render::Primitive *v15; // rbx
  Scaleform::Render::TextLayerType v16; // ecx
  bool v17; // cc
  Scaleform::Render::Primitive *v18; // rax
  Scaleform::Render::TextLayerType v19; // edi
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *inserted; // rdi
  Scaleform::Render::Mesh *pObject; // r9
  const Scaleform::Render::MatrixPoolImpl::HMatrix *m; // rax
  int pHandle; // ecx
  Scaleform::Render::MaskPrimitive *v24; // rax
  Scaleform::Render::MaskPrimitive *v25; // rbx
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v27; // rax
  Scaleform::Render::MaskPrimitive *v28; // rdi
  unsigned __int64 v29; // rbx
  const Scaleform::Render::MatrixPoolImpl::HMatrix *updated; // rax
  int v32; // [rsp+30h] [rbp-48h] BYREF
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+38h] [rbp-40h] BYREF
  Scaleform::Render::TreeCacheText *v35; // [rsp+90h] [rbp+18h] BYREF
  Scaleform::Render::MatrixPoolImpl::HMatrix viewMat; // [rsp+98h] [rbp+20h] BYREF

  v35 = textCache;
  v6 = textCache;
  v7 = hal;
  v8 = tm->GetLayerCount(tm);
  v9 = 0i64;
  LODWORD(viewMat.pHandle) = 0;
  LODWORD(result.pHandle) = v8;
  if ( v8 )
  {
    v10 = 0i64;
    while ( 1 )
    {
      Size = this->Layers.Size;
      v12 = &tm->Layers.Data.Data[v10];
      if ( v9 < Size )
      {
        Type = v12->Type;
        do
        {
          if ( Size <= 2 )
            p_pData = &this->Layers.AD.pData;
          else
            p_pData = &this->Layers.AD.pData->pObject;
          v15 = (Scaleform::Render::Primitive *)p_pData[v9];
          v16 = (Scaleform::Render::TextLayerType)v15[1].Scaleform::RefCountBase<Scaleform::Render::Primitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
          v17 = v16 <= Type;
          if ( v16 >= Type )
          {
            if ( v16 == Type )
            {
              if ( v15->pFill.pObject == v12->pFill.pObject )
                goto LABEL_19;
              v17 = v16 <= Type;
            }
            if ( !v17 || v15->pFill.pObject > v12->pFill.pObject )
              break;
          }
          ++v9;
        }
        while ( v9 < Size );
      }
      v32 = 67;
      v18 = (Scaleform::Render::Primitive *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              this,
                                              120i64,
                                              &v32);
      v15 = v18;
      if ( !v18 )
        break;
      v19 = v12->Type;
      Scaleform::Render::Primitive::Primitive(v18, v12->pFill.pObject);
      LODWORD(v15[1].Scaleform::RefCountBase<Scaleform::Render::Primitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable) = v19;
      v15->Scaleform::RefCountBase<Scaleform::Render::Primitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::Primitive_vtbl *)&Scaleform::Render::TextLayerPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::Primitive,67>'};
      v15->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::TextLayerPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
      *(_QWORD *)&v15[1].RefCount = 0i64;
      v15[1].Scaleform::Render::RenderQueueItem::Interface::__vftable = 0i64;
      v15[1].pFill.pObject = 0i64;
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v15);
      inserted = Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::insertSpot(
                   &this->Layers,
                   v9);
      if ( inserted )
      {
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v15);
        inserted->pObject = (Scaleform::Render::TextLayerPrimitive *)v15;
      }
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v15);
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v15);
      v6 = v35;
LABEL_19:
      pObject = v12->pMesh.pObject;
      m = &v12->M;
      v7 = hal;
      Scaleform::Render::TextLayerPrimitive::AddEntry(
        (Scaleform::Render::TextLayerPrimitive *)v15,
        hal,
        &v6->SorterShapeNode,
        pObject,
        m);
      pHandle = (int)viewMat.pHandle;
      ++v10;
      ++tm->PinCount;
      LODWORD(viewMat.pHandle) = pHandle + 1;
      if ( (unsigned int)(pHandle + 1) >= LODWORD(result.pHandle) )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    if ( (tm->Flags & 0x100) != 0 )
    {
      if ( this->pMaskPrimitive.pObject )
        goto LABEL_28;
      LODWORD(v35) = 67;
      v24 = (Scaleform::Render::MaskPrimitive *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  this,
                                                  48i64,
                                                  &v35);
      v25 = v24;
      if ( v24 )
      {
        v24->Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::MaskPrimitive_vtbl *)&Scaleform::RefCountImplCore::`vftable';
        v24->Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::MaskPrimitive_vtbl *)&Scaleform::Render::MaskPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67>'};
        v24->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::MaskPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
        v24->RefCount = 1;
        v24->MaskAreas.Data.Data = 0i64;
        v24->MaskAreas.Data.Size = 0i64;
        v24->MaskAreas.Data.Policy.Capacity = 0i64;
      }
      else
      {
        v25 = 0i64;
      }
      v26 = (Scaleform::RefCountVImpl *)this->pMaskPrimitive.pObject;
      if ( v26 )
        Scaleform::RefCountImpl::Release(v26);
      this->pMaskPrimitive.pObject = v25;
      if ( v25 )
      {
LABEL_28:
        v27 = v6->M.pHandle;
        viewMat.pHandle = v27;
        if ( v27 != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
          ++v27->pHeader->RefCount;
        v28 = this->pMaskPrimitive.pObject;
        v29 = v28->MaskAreas.Data.Size;
        updated = Scaleform::Render::TextMeshProvider::UpdateMaskClearBounds(
                    tm,
                    &result,
                    v7,
                    (Scaleform::Render::MatrixPoolImpl::HMatrix)&viewMat);
        Scaleform::Render::MaskPrimitive::Insert(v28, v29, updated);
        if ( result.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
          Scaleform::Render::MatrixPoolImpl::DataHeader::Release(result.pHandle->pHeader);
      }
    }
    LOBYTE(v18) = 1;
  }
  return (char)v18;
}

void __fastcall Scaleform::Render::TextPrepareBuffer::addTextFieldLayers(
        Scaleform::Render::TextPrepareBuffer *this,
        bool startFlag)
{
  Scaleform::Render::TreeCacheText *pRemainingTextFields; // r12
  Scaleform::Render::TreeCacheText *v5; // r15
  Scaleform::Render::TextPrimitiveBundle *pBundle; // rsi
  unsigned __int64 i; // rbp
  _QWORD *p_pData; // rdi
  __int64 v9; // rdi
  unsigned __int64 j; // rbx
  Scaleform::Render::TextMeshProvider *MeshProvider; // rax
  Scaleform::Render::TextMeshProvider *v12; // rbx
  Scaleform::Render::TextPrimitiveBundle *v13; // rax

  pRemainingTextFields = this->pRemainingTextFields;
  if ( pRemainingTextFields )
  {
    do
    {
      v5 = (Scaleform::Render::TreeCacheText *)*((_QWORD *)&this->pRemainingTextFields->M + 1);
      if ( !this->LayersPinned )
      {
        pBundle = this->pBundle;
        for ( i = 0i64; i < pBundle->Layers.Size; ++i )
        {
          if ( pBundle->Layers.Size <= 2 )
            p_pData = &pBundle->Layers.AD.pData;
          else
            p_pData = &pBundle->Layers.AD.pData->pObject;
          v9 = p_pData[i];
          for ( j = 0i64; j < *(_QWORD *)(v9 + 104); ++MeshProvider->PinCount )
            MeshProvider = Scaleform::Render::TreeCacheText::GetMeshProvider(*(Scaleform::Render::TreeCacheText **)(*(_QWORD *)(*(_QWORD *)(v9 + 96) + 8 * j++) + 56i64));
        }
        this->LayersPinned = 1;
      }
      v12 = Scaleform::Render::TreeCacheText::GetMeshProvider(this->pRemainingTextFields);
      if ( !v12 )
      {
        v12 = Scaleform::Render::TreeCacheText::CreateMeshProvider(this->pRemainingTextFields, this->pHal);
        if ( !v12 )
          break;
      }
      Scaleform::Render::TextMeshProvider::AddToInUseList(v12);
      if ( Scaleform::Render::TextPrimitiveBundle::addAndPinBatchLayers(
             this->pBundle,
             this->pHal,
             this->pRemainingTextFields,
             v12) )
      {
        v13 = this->pBundle;
        v12->pBundleEntry = &this->pRemainingTextFields->SorterShapeNode;
        v12->pBundle = v13;
      }
      *((_QWORD *)&this->pRemainingTextFields->M + 1) = 0i64;
      this->pRemainingTextFields = v5;
    }
    while ( v5 );
  }
  if ( !startFlag && pRemainingTextFields == this->pRemainingTextFields )
    this->pRemainingTextFields = 0i64;
}

Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *__fastcall Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>::allocInsertCopy(
        Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> *this,
        unsigned __int64 index,
        Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *source,
        unsigned __int64 size,
        unsigned __int64 allocSize)
{
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *result; // rax
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *v9; // rbx

  result = (Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                      Scaleform::Memory::pGlobalHeap,
                                                                      this,
                                                                      8 * allocSize,
                                                                      0i64);
  v9 = result;
  if ( result )
  {
    if ( index )
      memmove(result, source, 8 * index);
    if ( index < size )
      memmove(&v9[index + 1], &source[index], 8 * (size - index));
    return v9;
  }
  return result;
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::clearBatchLayers(Scaleform::Render::TextPrimitiveBundle *this)
{
  unsigned __int64 i; // rbx
  Scaleform::Render::TextMeshProvider *MeshProvider; // rax
  unsigned __int64 Size; // rsi
  $0D82BBD2CF53098A49781F21AEF5728E *v5; // r14
  Scaleform::RefCountVImpl **pData; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  for ( i = 0i64; i < this->Entries.Data.Size; ++i )
  {
    MeshProvider = Scaleform::Render::TreeCacheText::GetMeshProvider((Scaleform::Render::TreeCacheText *)this->Entries.Data.Data[i]->pSourceNode);
    if ( MeshProvider )
    {
      MeshProvider->pBundle = 0i64;
      MeshProvider->pBundleEntry = 0i64;
    }
  }
  Size = this->Layers.Size;
  v5 = &this->Layers.8;
  if ( Size <= 2 )
    pData = (Scaleform::RefCountVImpl **)&this->Layers.8;
  else
    pData = (Scaleform::RefCountVImpl **)v5->AD.pData;
  for ( ; Size; --Size )
  {
    if ( *pData )
      Scaleform::RefCountImpl::Release(*pData);
    ++pData;
  }
  if ( this->Layers.Size > 2 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5->AD.pData);
  this->Layers.Size = 0i64;
  pObject = (Scaleform::RefCountVImpl *)this->pMaskPrimitive.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pMaskPrimitive.pObject = 0i64;
}

Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *__fastcall Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::insertSpot(
        Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2> *this,
        unsigned __int64 index)
{
  unsigned __int64 Size; // r9
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *v5; // rdi
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *inserted; // rax
  unsigned __int64 allocSize; // rsi
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *v9; // rax
  Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *v10; // r14

  Size = this->Size;
  if ( this->Size < 2 )
  {
    if ( index < Size )
      memmove(&this->Raw[8 * index + 8], &(&this->AD.pData)[index], 8 * (Size - index));
    v5 = (Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *)&(&this->AD.pData)[index];
    goto LABEL_15;
  }
  if ( this->Size == 2 )
  {
    inserted = Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>::allocInsertCopy(
                 this,
                 index,
                 (Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> *)&this->8,
                 2ui64,
                 4ui64);
    if ( !inserted )
      return 0i64;
    v5 = &inserted[index];
    this->AD.pData = inserted;
    this->AD.Reserve = 4i64;
  }
  else
  {
    if ( Size < this->AD.Reserve )
    {
      if ( index < Size )
        memmove(&this->AD.pData[index + 1], &this->AD.pData[index], 8 * (Size - index));
      v5 = &this->AD.pData[index];
      goto LABEL_15;
    }
    allocSize = (Size + 4) & 0xFFFFFFFFFFFFFFFCui64;
    v9 = Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>::allocInsertCopy(
           this,
           index,
           this->AD.pData,
           Size,
           allocSize);
    v10 = v9;
    if ( !v9 )
      return 0i64;
    v5 = &v9[index];
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->AD.pData);
    this->AD.pData = v10;
    this->AD.Reserve = allocSize;
  }
LABEL_15:
  ++this->Size;
  return v5;
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::removeEntryFromLayers(
        Scaleform::Render::TextPrimitiveBundle *this,
        Scaleform::Render::BundleEntry *e)
{
  unsigned __int64 i; // rdi
  Scaleform::Render::TextLayerPrimitive **p_pObject; // rcx
  _QWORD *p_pData; // rax
  Scaleform::Render::TextMeshProvider *MeshProvider; // rax
  Scaleform::Render::MaskPrimitive *pObject; // r9
  unsigned __int64 v9; // rdx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rcx
  unsigned __int64 Size; // rax
  Scaleform::Render::MaskPrimitive *v12; // rax
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0i64; i < this->Layers.Size; ++i )
  {
    if ( this->Layers.Size <= 2 )
      p_pObject = (Scaleform::Render::TextLayerPrimitive **)&this->Layers.8;
    else
      p_pObject = &this->Layers.AD.pData->pObject;
    Scaleform::Render::TextLayerPrimitive::RemoveEntry(p_pObject[i], e);
    if ( this->Layers.Size <= 2 )
      p_pData = &this->Layers.AD.pData;
    else
      p_pData = &this->Layers.AD.pData->pObject;
    if ( !*(_DWORD *)(p_pData[i] + 64i64) )
      Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::RemoveAt(
        &this->Layers,
        i--);
  }
  if ( this->pMaskPrimitive.pObject )
  {
    MeshProvider = Scaleform::Render::TreeCacheText::GetMeshProvider((Scaleform::Render::TreeCacheText *)e->pSourceNode);
    if ( MeshProvider && (MeshProvider->Flags & 0x100) != 0 )
    {
      Scaleform::Render::TextMeshProvider::GetMaskClearBounds(MeshProvider, &result);
      pObject = this->pMaskPrimitive.pObject;
      v9 = 0i64;
      pHandle = result.pHandle;
      Size = pObject->MaskAreas.Data.Size;
      if ( Size )
      {
        while ( pObject->MaskAreas.Data.Data[v9].pHandle != result.pHandle )
        {
          if ( ++v9 >= Size )
            goto LABEL_19;
        }
        Scaleform::Render::MaskPrimitive::Remove(this->pMaskPrimitive.pObject, v9, 1ui64);
        pHandle = result.pHandle;
      }
LABEL_19:
      if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
        Scaleform::Render::MatrixPoolImpl::DataHeader::Release(pHandle->pHeader);
    }
    v12 = this->pMaskPrimitive.pObject;
    if ( !v12->MaskAreas.Data.Size )
    {
      if ( v12 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->pMaskPrimitive.pObject);
      this->pMaskPrimitive.pObject = 0i64;
    }
  }
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::startPrimitive(
        Scaleform::Render::TextPrimitiveBundle *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::TextPrepareBuffer *prepareBuffer,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  Scaleform::Render::TreeCacheText *v4; // rbp
  unsigned __int64 i; // rbx
  Scaleform::Render::TreeCacheNode *pSourceNode; // rsi
  Scaleform::Render::TextMeshProvider *MeshProvider; // rax
  Scaleform::Render::HAL *pHAL; // rcx
  Scaleform::Render::MeshCache *v13; // rax

  v4 = 0i64;
  for ( i = 0i64; i < this->Entries.Data.Size; ++i )
  {
    pSourceNode = this->Entries.Data.Data[i]->pSourceNode;
    MeshProvider = Scaleform::Render::TreeCacheText::GetMeshProvider((Scaleform::Render::TreeCacheText *)pSourceNode);
    if ( MeshProvider && MeshProvider->pBundle == this )
    {
      Scaleform::Render::TextMeshProvider::AddToInUseList(MeshProvider);
    }
    else
    {
      *(_QWORD *)&pSourceNode[1].Depth = v4;
      v4 = (Scaleform::Render::TreeCacheText *)pSourceNode;
    }
  }
  pHAL = qp->pHAL;
  prepareBuffer->pItem = item;
  prepareBuffer->pEmitBuffer = (Scaleform::Render::TextEmitBuffer *)&qp->264;
  prepareBuffer->pHal = pHAL;
  v13 = pHAL->GetMeshCache(pHAL);
  prepareBuffer->pBundle = this;
  prepareBuffer->pCache = v13;
  prepareBuffer->pRemainingTextFields = v4;
  prepareBuffer->ProcessingLayer = 0i64;
  *(_WORD *)&prepareBuffer->LayersPinned = 0;
  prepareBuffer->PPBuffer.pItem = 0i64;
  Scaleform::Render::TextPrepareBuffer::addTextFieldLayers(prepareBuffer, 1);
}

void __fastcall Scaleform::Render::TextPrimitiveBundle::unpinLayerBatches(Scaleform::Render::TextPrimitiveBundle *this)
{
  unsigned __int64 i; // rbp
  _QWORD *p_pData; // rdi
  __int64 v4; // rdi
  unsigned __int64 j; // rbx
  Scaleform::Render::TextMeshProvider *MeshProvider; // rax

  for ( i = 0i64; i < this->Layers.Size; ++i )
  {
    if ( this->Layers.Size <= 2 )
      p_pData = &this->Layers.AD.pData;
    else
      p_pData = &this->Layers.AD.pData->pObject;
    v4 = p_pData[i];
    for ( j = 0i64; j < *(_QWORD *)(v4 + 104); --MeshProvider->PinCount )
      MeshProvider = Scaleform::Render::TreeCacheText::GetMeshProvider(*(Scaleform::Render::TreeCacheText **)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 8 * j++) + 56i64));
  }
}

