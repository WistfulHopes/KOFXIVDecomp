#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::Render::PrimitiveBundle::InsertEntry(Scaleform::Render::HAL * hal, unsigned long long index, Scaleform::Render::BundleEntry * entry); // 0x1403ED120
void Scaleform::Render::PrimitiveBundle::RemoveEntries(unsigned long long index, unsigned long long count); // 0x1403ED2E0
void Scaleform::Render::PrimitiveBundle::UpdateMesh(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntry * entry); // 0x1403ED430
Scaleform::Render::ComplexPrimitiveBundle::ComplexPrimitiveBundle(Scaleform::Render::HAL * hal); // 0x1403EBDF0
void Scaleform::Render::ComplexPrimitiveBundle::Draw(Scaleform::Render::HAL * hal); // 0x1403ECD40
void Scaleform::Render::ComplexPrimitiveBundle::InsertEntry(Scaleform::Render::HAL * hal, unsigned long long index, Scaleform::Render::BundleEntry * entry); // 0x1403ECF30
void Scaleform::Render::ComplexPrimitiveBundle::RemoveEntries(unsigned long long index, unsigned long long count); // 0x1403ED200
void Scaleform::Render::ComplexPrimitiveBundle::UpdateMesh(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntry * entry); // 0x1403ED3B0
Scaleform::Render::RenderQueueItem::QIPrepareResult Scaleform::Render::ComplexPrimitiveBundle::Prepare(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp, bool waitForCache); // 0x1403ED190
void Scaleform::Render::ComplexPrimitiveBundle::EmitToHAL(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp); // 0x1403ECDE0
Scaleform::Render::MaskBundle::MaskBundle(Scaleform::Render::HAL * hal); // 0x1403EBF00
void Scaleform::Render::MaskBundle::InsertEntry(Scaleform::Render::HAL * hal, unsigned long long index, Scaleform::Render::BundleEntry * entry); // 0x1403ED080
void Scaleform::Render::MaskBundle::RemoveEntries(unsigned long long index, unsigned long long count); // 0x1403ED290
Scaleform::Render::FilterBundle::FilterBundle(Scaleform::Render::HAL * hal, Scaleform::Render::FilterSet * filters); // 0x1403EBE60
void Scaleform::Render::FilterBundle::InsertEntry(Scaleform::Render::HAL * hal, unsigned long long index, Scaleform::Render::BundleEntry * entry); // 0x1403ECFE0
Scaleform::Render::BlendModeBundle::BlendModeBundle(Scaleform::Render::HAL * hal, Scaleform::Render::BlendMode mode); // 0x1403EBD60
void Scaleform::Render::BlendModeBundle::InsertEntry(Scaleform::Render::HAL * hal, unsigned long long index, Scaleform::Render::BundleEntry * entry); // 0x1403ECE90
void Scaleform::Render::BlendModeBundle::RemoveEntries(unsigned long long index, unsigned long long count); // 0x1403ED240
Scaleform::Render::ViewMatrix3DBundle::ViewMatrix3DBundle(Scaleform::Render::HAL * hal, Scaleform::Render::Matrix3x4Ref<float> * pvm); // 0x1403EC430
Scaleform::Render::UserDataBundle::~UserDataBundle(); // 0x1403EC5A0
Scaleform::Render::ProjectionMatrix3DBundle::ProjectionMatrix3DBundle(Scaleform::Render::HAL * hal, Scaleform::Render::Matrix4x4Ref<float> * ppm); // 0x1403EBF90
Scaleform::Render::UserDataBundle::UserDataBundle(Scaleform::Render::HAL * hal, Scaleform::Render::UserDataState::Data * data); // 0x1403EC390
class Scaleform::Render::SKI_Primitive :
	Scaleform::Render::SortKeyInterface_RefCountImpl
{
public:
	SKI_Primitive(Scaleform::Render::SKI_Primitive &);
	SKI_Primitive(const Scaleform::Render::SKI_Primitive &);
	SKI_Primitive();
	static Scaleform::Render::SKI_Primitive Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_Primitive Instance3D; // 0xFFFFFFFFFFFFFFFF
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_Primitive();
	Scaleform::Render::SKI_Primitive & operator=(Scaleform::Render::SKI_Primitive &);
	Scaleform::Render::SKI_Primitive & operator=(const Scaleform::Render::SKI_Primitive &);
};
bool Scaleform::Render::SKI_Primitive::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * d, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EB7F0
class Scaleform::Ptr<Scaleform::Render::DrawableBundle>
{
protected:
	Scaleform::Render::DrawableBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DrawableBundle>(const Scaleform::Ptr<Scaleform::Render::DrawableBundle> &);
	Ptr<Scaleform::Render::DrawableBundle>(Scaleform::Render::DrawableBundle *);
	Ptr<Scaleform::Render::DrawableBundle>(Scaleform::Ptr<Scaleform::Render::DrawableBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DrawableBundle>(Scaleform::Pickable<Scaleform::Render::DrawableBundle>);
	Ptr<Scaleform::Render::DrawableBundle>(Scaleform::Render::DrawableBundle &);
	Ptr<Scaleform::Render::DrawableBundle>();
	~Ptr<Scaleform::Render::DrawableBundle>();
	bool operator==(Scaleform::Render::DrawableBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DrawableBundle> &);
	bool operator!=(Scaleform::Render::DrawableBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DrawableBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DrawableBundle> &);
	Scaleform::Ptr<Scaleform::Render::DrawableBundle> & operator=(Scaleform::Pickable<Scaleform::Render::DrawableBundle>);
	const Scaleform::Ptr<Scaleform::Render::DrawableBundle> & operator=(Scaleform::Render::DrawableBundle &);
	const Scaleform::Ptr<Scaleform::Render::DrawableBundle> & operator=(Scaleform::Render::DrawableBundle *);
	const Scaleform::Ptr<Scaleform::Render::DrawableBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::DrawableBundle> &);
	Scaleform::Ptr<Scaleform::Render::DrawableBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::DrawableBundle>);
	Scaleform::Ptr<Scaleform::Render::DrawableBundle> & SetPtr(Scaleform::Render::DrawableBundle &);
	Scaleform::Ptr<Scaleform::Render::DrawableBundle> & SetPtr(Scaleform::Render::DrawableBundle *);
	Scaleform::Ptr<Scaleform::Render::DrawableBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DrawableBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DrawableBundle * & GetRawRef();
	Scaleform::Render::DrawableBundle * GetPtr();
	Scaleform::Render::DrawableBundle & operator*();
	Scaleform::Render::DrawableBundle * operator->();
	Scaleform::Render::DrawableBundle * operator class Scaleform::Render::DrawableBundle *();
	Scaleform::Ptr<Scaleform::Render::DrawableBundle> & Pick(Scaleform::Render::DrawableBundle *);
	Scaleform::Ptr<Scaleform::Render::DrawableBundle> & Pick(Scaleform::Pickable<Scaleform::Render::DrawableBundle>);
	Scaleform::Ptr<Scaleform::Render::DrawableBundle> & Pick(Scaleform::Ptr<Scaleform::Render::DrawableBundle> &);
};
class Scaleform::Render::SKI_ComplexPrimitive :
	Scaleform::Render::SortKeyInterface
{
public:
	SKI_ComplexPrimitive(Scaleform::Render::SKI_ComplexPrimitive &);
	SKI_ComplexPrimitive(const Scaleform::Render::SKI_ComplexPrimitive &);
	SKI_ComplexPrimitive();
	static Scaleform::Render::SKI_ComplexPrimitive Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_ComplexPrimitive Instance3D; // 0xFFFFFFFFFFFFFFFF
	virtual void AddRef(void *);
	virtual void Release(void *);
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_ComplexPrimitive();
	Scaleform::Render::SKI_ComplexPrimitive & operator=(Scaleform::Render::SKI_ComplexPrimitive &);
	Scaleform::Render::SKI_ComplexPrimitive & operator=(const Scaleform::Render::SKI_ComplexPrimitive &);
};
void Scaleform::Render::SKI_ComplexPrimitive::AddRef(void * p); // 0x140321FF0
void Scaleform::Render::SKI_ComplexPrimitive::Release(void * p); // 0x1403EB900
bool Scaleform::Render::SKI_ComplexPrimitive::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * __formal, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EB930
class Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle>
{
protected:
	Scaleform::Render::ComplexPrimitiveBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ComplexPrimitiveBundle>(const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> &);
	Ptr<Scaleform::Render::ComplexPrimitiveBundle>(Scaleform::Render::ComplexPrimitiveBundle *);
	Ptr<Scaleform::Render::ComplexPrimitiveBundle>(Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ComplexPrimitiveBundle>(Scaleform::Pickable<Scaleform::Render::ComplexPrimitiveBundle>);
	Ptr<Scaleform::Render::ComplexPrimitiveBundle>(Scaleform::Render::ComplexPrimitiveBundle &);
	Ptr<Scaleform::Render::ComplexPrimitiveBundle>();
	~Ptr<Scaleform::Render::ComplexPrimitiveBundle>();
	bool operator==(Scaleform::Render::ComplexPrimitiveBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> &);
	bool operator!=(Scaleform::Render::ComplexPrimitiveBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> &);
	Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & operator=(Scaleform::Pickable<Scaleform::Render::ComplexPrimitiveBundle>);
	const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & operator=(Scaleform::Render::ComplexPrimitiveBundle &);
	const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & operator=(Scaleform::Render::ComplexPrimitiveBundle *);
	const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> &);
	Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::ComplexPrimitiveBundle>);
	Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & SetPtr(Scaleform::Render::ComplexPrimitiveBundle &);
	Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & SetPtr(Scaleform::Render::ComplexPrimitiveBundle *);
	Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ComplexPrimitiveBundle * & GetRawRef();
	Scaleform::Render::ComplexPrimitiveBundle * GetPtr();
	Scaleform::Render::ComplexPrimitiveBundle & operator*();
	Scaleform::Render::ComplexPrimitiveBundle * operator->();
	Scaleform::Render::ComplexPrimitiveBundle * operator class Scaleform::Render::ComplexPrimitiveBundle *();
	Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & Pick(Scaleform::Render::ComplexPrimitiveBundle *);
	Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & Pick(Scaleform::Pickable<Scaleform::Render::ComplexPrimitiveBundle>);
	Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> & Pick(Scaleform::Ptr<Scaleform::Render::ComplexPrimitiveBundle> &);
};
void Scaleform::Render::SKI_ComplexPrimitive::DrawBundleEntry(Scaleform::Render::HAL * hal, void * __formal, Scaleform::Render::BundleEntry * p); // 0x1403EBA60
Scaleform::Render::SortKey::SortKey(Scaleform::Render::PrimitiveFill * fill, bool is3D); // 0x1403EC0F0
Scaleform::Render::SortKey::SortKey(Scaleform::Render::MeshProvider * fill, bool is3D); // 0x1403EC0A0
class Scaleform::Render::SKI_MaskStart :
	Scaleform::Render::SortKeyInterface
{
public:
	SKI_MaskStart(Scaleform::Render::SKI_MaskStart &);
	SKI_MaskStart(const Scaleform::Render::SKI_MaskStart &);
	SKI_MaskStart(Scaleform::Render::SortKeyType, unsigned long);
	static Scaleform::Render::SKI_MaskStart Combinable_Instance; // 0xFFFFFFFFFFFFFFFF
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual Scaleform::Render::SortKeyTransition GetRangeTransition(void *, const Scaleform::Render::SortKey &);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_MaskStart();
	Scaleform::Render::SKI_MaskStart & operator=(Scaleform::Render::SKI_MaskStart &);
	Scaleform::Render::SKI_MaskStart & operator=(const Scaleform::Render::SKI_MaskStart &);
};
bool Scaleform::Render::SKI_MaskStart::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * __formal, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EBB60
class Scaleform::Ptr<Scaleform::Render::MaskBundle>
{
protected:
	Scaleform::Render::MaskBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MaskBundle>(const Scaleform::Ptr<Scaleform::Render::MaskBundle> &);
	Ptr<Scaleform::Render::MaskBundle>(Scaleform::Render::MaskBundle *);
	Ptr<Scaleform::Render::MaskBundle>(Scaleform::Ptr<Scaleform::Render::MaskBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MaskBundle>(Scaleform::Pickable<Scaleform::Render::MaskBundle>);
	Ptr<Scaleform::Render::MaskBundle>(Scaleform::Render::MaskBundle &);
	Ptr<Scaleform::Render::MaskBundle>();
	~Ptr<Scaleform::Render::MaskBundle>();
	bool operator==(Scaleform::Render::MaskBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MaskBundle> &);
	bool operator!=(Scaleform::Render::MaskBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MaskBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MaskBundle> &);
	Scaleform::Ptr<Scaleform::Render::MaskBundle> & operator=(Scaleform::Pickable<Scaleform::Render::MaskBundle>);
	const Scaleform::Ptr<Scaleform::Render::MaskBundle> & operator=(Scaleform::Render::MaskBundle &);
	const Scaleform::Ptr<Scaleform::Render::MaskBundle> & operator=(Scaleform::Render::MaskBundle *);
	const Scaleform::Ptr<Scaleform::Render::MaskBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::MaskBundle> &);
	Scaleform::Ptr<Scaleform::Render::MaskBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::MaskBundle>);
	Scaleform::Ptr<Scaleform::Render::MaskBundle> & SetPtr(Scaleform::Render::MaskBundle &);
	Scaleform::Ptr<Scaleform::Render::MaskBundle> & SetPtr(Scaleform::Render::MaskBundle *);
	Scaleform::Ptr<Scaleform::Render::MaskBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MaskBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MaskBundle * & GetRawRef();
	Scaleform::Render::MaskBundle * GetPtr();
	Scaleform::Render::MaskBundle & operator*();
	Scaleform::Render::MaskBundle * operator->();
	Scaleform::Render::MaskBundle * operator class Scaleform::Render::MaskBundle *();
	Scaleform::Ptr<Scaleform::Render::MaskBundle> & Pick(Scaleform::Render::MaskBundle *);
	Scaleform::Ptr<Scaleform::Render::MaskBundle> & Pick(Scaleform::Pickable<Scaleform::Render::MaskBundle>);
	Scaleform::Ptr<Scaleform::Render::MaskBundle> & Pick(Scaleform::Ptr<Scaleform::Render::MaskBundle> &);
};
Scaleform::Render::SortKeyTransition Scaleform::Render::SKI_MaskStart::GetRangeTransition(void * __formal, const Scaleform::Render::SortKey & other); // 0x1403EBBF0
void Scaleform::Render::SKI_BlendMode::DrawBundleEntry(Scaleform::Render::HAL * hal, void * __formal, Scaleform::Render::BundleEntry * p); // 0x1403EB6A0
class Scaleform::Render::SKI_MaskEnd :
	Scaleform::Render::SortKeyInterface
{
public:
	SKI_MaskEnd(Scaleform::Render::SKI_MaskEnd &);
	SKI_MaskEnd(const Scaleform::Render::SKI_MaskEnd &);
	SKI_MaskEnd(Scaleform::Render::SortKeyType, unsigned long);
	class RQII_EndMask;
	static Scaleform::Render::SKI_MaskEnd::RQII_EndMask RQII_Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_MaskEnd Instance; // 0xFFFFFFFFFFFFFFFF
	virtual Scaleform::Render::SortKeyTransition GetRangeTransition(void *, const Scaleform::Render::SortKey &);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_MaskEnd();
	Scaleform::Render::SKI_MaskEnd & operator=(Scaleform::Render::SKI_MaskEnd &);
	Scaleform::Render::SKI_MaskEnd & operator=(const Scaleform::Render::SKI_MaskEnd &);
};
class Scaleform::Render::SKI_MaskEnd::RQII_EndMask :
	Scaleform::Render::RenderQueueItem::Interface
{
public:
	virtual void EmitToHAL(Scaleform::Render::RenderQueueItem &, Scaleform::Render::RenderQueueProcessor &);
	RQII_EndMask(Scaleform::Render::SKI_MaskEnd::RQII_EndMask &);
	RQII_EndMask(const Scaleform::Render::SKI_MaskEnd::RQII_EndMask &);
	RQII_EndMask();
	virtual ~RQII_EndMask();
	Scaleform::Render::SKI_MaskEnd::RQII_EndMask & operator=(Scaleform::Render::SKI_MaskEnd::RQII_EndMask &);
	Scaleform::Render::SKI_MaskEnd::RQII_EndMask & operator=(const Scaleform::Render::SKI_MaskEnd::RQII_EndMask &);
};
void Scaleform::Render::SKI_MaskEnd::RQII_EndMask::EmitToHAL(Scaleform::Render::RenderQueueItem & item, Scaleform::Render::RenderQueueProcessor & qp); // 0x1403EBC00
Scaleform::Render::SortKeyTransition Scaleform::Render::SKI_MaskEnd::GetRangeTransition(void * data, const Scaleform::Render::SortKey & other); // 0x1403EBC30
void Scaleform::Render::SKI_MaskEnd::DrawBundleEntry(Scaleform::Render::HAL * hal, void * data, Scaleform::Render::BundleEntry * __formal); // 0x1403EBC50
Scaleform::Render::SortKey::SortKey(Scaleform::Render::SortKeyMaskType maskType); // 0x1403EC140
class Scaleform::Render::SKI_BlendMode :
	Scaleform::Render::SortKeyInterface
{
public:
	SKI_BlendMode(Scaleform::Render::SKI_BlendMode &);
	SKI_BlendMode(const Scaleform::Render::SKI_BlendMode &);
	SKI_BlendMode(Scaleform::Render::SortKeyType, unsigned long);
	static Scaleform::Render::SKI_BlendMode Start_Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_BlendMode StartCacheable_Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_BlendMode End_Instance; // 0xFFFFFFFFFFFFFFFF
	virtual Scaleform::Render::SortKeyTransition GetRangeTransition(void *, const Scaleform::Render::SortKey &);
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_BlendMode();
	Scaleform::Render::SKI_BlendMode & operator=(Scaleform::Render::SKI_BlendMode &);
	Scaleform::Render::SKI_BlendMode & operator=(const Scaleform::Render::SKI_BlendMode &);
};
Scaleform::Render::SortKeyTransition Scaleform::Render::SKI_BlendMode::GetRangeTransition(void * __formal, const Scaleform::Render::SortKey & other); // 0x1403EBCA0
bool Scaleform::Render::SKI_BlendMode::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * d, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EBCC0
class Scaleform::Ptr<Scaleform::Render::BlendModeBundle>
{
protected:
	Scaleform::Render::BlendModeBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::BlendModeBundle>(const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> &);
	Ptr<Scaleform::Render::BlendModeBundle>(Scaleform::Render::BlendModeBundle *);
	Ptr<Scaleform::Render::BlendModeBundle>(Scaleform::Ptr<Scaleform::Render::BlendModeBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::BlendModeBundle>(Scaleform::Pickable<Scaleform::Render::BlendModeBundle>);
	Ptr<Scaleform::Render::BlendModeBundle>(Scaleform::Render::BlendModeBundle &);
	Ptr<Scaleform::Render::BlendModeBundle>();
	~Ptr<Scaleform::Render::BlendModeBundle>();
	bool operator==(Scaleform::Render::BlendModeBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> &);
	bool operator!=(Scaleform::Render::BlendModeBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> &);
	Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & operator=(Scaleform::Pickable<Scaleform::Render::BlendModeBundle>);
	const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & operator=(Scaleform::Render::BlendModeBundle &);
	const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & operator=(Scaleform::Render::BlendModeBundle *);
	const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> &);
	Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::BlendModeBundle>);
	Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & SetPtr(Scaleform::Render::BlendModeBundle &);
	Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & SetPtr(Scaleform::Render::BlendModeBundle *);
	Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::BlendModeBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::BlendModeBundle * & GetRawRef();
	Scaleform::Render::BlendModeBundle * GetPtr();
	Scaleform::Render::BlendModeBundle & operator*();
	Scaleform::Render::BlendModeBundle * operator->();
	Scaleform::Render::BlendModeBundle * operator class Scaleform::Render::BlendModeBundle *();
	Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & Pick(Scaleform::Render::BlendModeBundle *);
	Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & Pick(Scaleform::Pickable<Scaleform::Render::BlendModeBundle>);
	Scaleform::Ptr<Scaleform::Render::BlendModeBundle> & Pick(Scaleform::Ptr<Scaleform::Render::BlendModeBundle> &);
};
Scaleform::Render::SortKey::SortKey(Scaleform::Render::SortKeyType blendKeyType, Scaleform::Render::BlendMode mode); // 0x1403EC2F0
class Scaleform::Render::SKI_Filter :
	Scaleform::Render::SortKeyInterface_RefCountImpl
{
public:
	SKI_Filter(Scaleform::Render::SKI_Filter &);
	SKI_Filter(const Scaleform::Render::SKI_Filter &);
	SKI_Filter(Scaleform::Render::SortKeyType, unsigned long);
	static Scaleform::Render::SKI_Filter Start_Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_Filter End_Instance; // 0xFFFFFFFFFFFFFFFF
	virtual Scaleform::Render::SortKeyTransition GetRangeTransition(void *, const Scaleform::Render::SortKey &);
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_Filter();
	Scaleform::Render::SKI_Filter & operator=(Scaleform::Render::SKI_Filter &);
	Scaleform::Render::SKI_Filter & operator=(const Scaleform::Render::SKI_Filter &);
};
Scaleform::Render::SortKeyTransition Scaleform::Render::SKI_Filter::GetRangeTransition(void * __formal, const Scaleform::Render::SortKey & other); // 0x1403EB5E0
bool Scaleform::Render::SKI_Filter::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * d, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EB600
class Scaleform::Ptr<Scaleform::Render::FilterBundle>
{
protected:
	Scaleform::Render::FilterBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::FilterBundle>(const Scaleform::Ptr<Scaleform::Render::FilterBundle> &);
	Ptr<Scaleform::Render::FilterBundle>(Scaleform::Render::FilterBundle *);
	Ptr<Scaleform::Render::FilterBundle>(Scaleform::Ptr<Scaleform::Render::FilterBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::FilterBundle>(Scaleform::Pickable<Scaleform::Render::FilterBundle>);
	Ptr<Scaleform::Render::FilterBundle>(Scaleform::Render::FilterBundle &);
	Ptr<Scaleform::Render::FilterBundle>();
	~Ptr<Scaleform::Render::FilterBundle>();
	bool operator==(Scaleform::Render::FilterBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::FilterBundle> &);
	bool operator!=(Scaleform::Render::FilterBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::FilterBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::FilterBundle> &);
	Scaleform::Ptr<Scaleform::Render::FilterBundle> & operator=(Scaleform::Pickable<Scaleform::Render::FilterBundle>);
	const Scaleform::Ptr<Scaleform::Render::FilterBundle> & operator=(Scaleform::Render::FilterBundle &);
	const Scaleform::Ptr<Scaleform::Render::FilterBundle> & operator=(Scaleform::Render::FilterBundle *);
	const Scaleform::Ptr<Scaleform::Render::FilterBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::FilterBundle> &);
	Scaleform::Ptr<Scaleform::Render::FilterBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::FilterBundle>);
	Scaleform::Ptr<Scaleform::Render::FilterBundle> & SetPtr(Scaleform::Render::FilterBundle &);
	Scaleform::Ptr<Scaleform::Render::FilterBundle> & SetPtr(Scaleform::Render::FilterBundle *);
	Scaleform::Ptr<Scaleform::Render::FilterBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::FilterBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::FilterBundle * & GetRawRef();
	Scaleform::Render::FilterBundle * GetPtr();
	Scaleform::Render::FilterBundle & operator*();
	Scaleform::Render::FilterBundle * operator->();
	Scaleform::Render::FilterBundle * operator class Scaleform::Render::FilterBundle *();
	Scaleform::Ptr<Scaleform::Render::FilterBundle> & Pick(Scaleform::Render::FilterBundle *);
	Scaleform::Ptr<Scaleform::Render::FilterBundle> & Pick(Scaleform::Pickable<Scaleform::Render::FilterBundle>);
	Scaleform::Ptr<Scaleform::Render::FilterBundle> & Pick(Scaleform::Ptr<Scaleform::Render::FilterBundle> &);
};
Scaleform::Render::SKI_BlendMode::tart_Instance$initializer$::operator~(); // 0x140739DF0
Scaleform::Render::SKI_BlendMode::tartCacheable_Instance$initializer$::operator~(); // 0x140739DF8
void(*Scaleform::Render::SKI_BlendMode::nd_Instance$initializer$::operator++)(); // 0x140739E00
Scaleform::Render::SKI_Filter Scaleform::Render::SKI_Filter::Start_Instance; // 0x1409FA360
Scaleform::Render::SKI_Filter Scaleform::Render::SKI_Filter::End_Instance; // 0x1409FA370
Scaleform::Render::SKI_Filter::tart_Instance$initializer$::operator~(); // 0x140739E08
void(*Scaleform::Render::SKI_Filter::nd_Instance$initializer$::operator++)(); // 0x140739E10
Scaleform::Render::SKI_ViewMatrix3D Scaleform::Render::SKI_ViewMatrix3D::Start_Instance; // 0x1409FA380
Scaleform::Render::SKI_ViewMatrix3D Scaleform::Render::SKI_ViewMatrix3D::End_Instance; // 0x1409FA390
Scaleform::Render::SKI_Primitive Scaleform::Render::SKI_Primitive::Instance; // 0x1409FA2B0
Scaleform::Render::SKI_Primitive Scaleform::Render::SKI_Primitive::Instance3D; // 0x1409FA2C0
Scaleform::Render::SKI_ViewMatrix3D::tart_Instance$initializer$::operator~(); // 0x140739E18
void(*Scaleform::Render::SKI_ViewMatrix3D::nd_Instance$initializer$::operator++)(); // 0x140739E20
Scaleform::Render::SKI_ComplexPrimitive Scaleform::Render::SKI_ComplexPrimitive::Instance; // 0x1409FA2D0
Scaleform::Render::SKI_ComplexPrimitive Scaleform::Render::SKI_ComplexPrimitive::Instance3D; // 0x1409FA2E0
Scaleform::Render::SKI_ProjectionMatrix3D Scaleform::Render::SKI_ProjectionMatrix3D::Start_Instance; // 0x1409FA3A0
Scaleform::Render::SKI_ProjectionMatrix3D Scaleform::Render::SKI_ProjectionMatrix3D::End_Instance; // 0x1409FA3B0
Scaleform::Render::SKI_ProjectionMatrix3D::tart_Instance$initializer$::operator~(); // 0x140739E28
void(*Scaleform::Render::SKI_ProjectionMatrix3D::nd_Instance$initializer$::operator++)(); // 0x140739E30
Scaleform::Render::SKI_UserData Scaleform::Render::SKI_UserData::Start_Instance; // 0x1409FA3C0
Scaleform::Render::SKI_UserData Scaleform::Render::SKI_UserData::End_Instance; // 0x1409FA3D0
void(*Scaleform::Render::SKI_Primitive::nstance$initializer$::operator&)(); // 0x140739DB8
void(*Scaleform::Render::SKI_Primitive::nstance3D$initializer$::operator&)(); // 0x140739DC0
void(*Scaleform::Render::SKI_ComplexPrimitive::nstance$initializer$::operator&)(); // 0x140739DC8
Scaleform::Render::SortKey::SortKey(Scaleform::Render::SortKeyType filterKeyType, const Scaleform::Render::FilterSet * filters); // 0x1403EC290
void(*Scaleform::Render::SKI_ComplexPrimitive::nstance3D$initializer$::operator&)(); // 0x140739DD0
Scaleform::Render::SKI_MaskStart Scaleform::Render::SKI_MaskStart::Combinable_Instance; // 0x1409FA2F0
Scaleform::Render::SKI_UserData::tart_Instance$initializer$::operator~(); // 0x140739E38
void(*Scaleform::Render::SKI_UserData::nd_Instance$initializer$::operator++)(); // 0x140739E40
Scaleform::Render::SKI_MaskEnd::RQII_EndMask Scaleform::Render::SKI_MaskEnd::RQII_Instance; // 0x1409FA300
Scaleform::Render::SKI_MaskEnd Scaleform::Render::SKI_MaskEnd::Instance; // 0x1409FA308
void(*Scaleform::Render::SKI_MaskStart::ombinable_Instance$initializer$::operator->)(); // 0x140739DD8
void(*Scaleform::Render::SKI_MaskEnd::nstance$initializer$::operator&)(); // 0x140739DE0
void(*Scaleform::Render::SKI_MaskEnd::QII_Instance$initializer$::operator())(); // 0x140739DE8
Scaleform::Render::SortKeyInterface * Scaleform::Render::SortKeyMaskInterfaces[3]; // 0x1409FA318
Scaleform::Render::SKI_BlendMode Scaleform::Render::SKI_BlendMode::Start_Instance; // 0x1409FA330
class Scaleform::Render::SKI_ViewMatrix3D :
	Scaleform::Render::SortKeyInterface
{
public:
	SKI_ViewMatrix3D(Scaleform::Render::SKI_ViewMatrix3D &);
	SKI_ViewMatrix3D(const Scaleform::Render::SKI_ViewMatrix3D &);
	SKI_ViewMatrix3D(Scaleform::Render::SortKeyType, unsigned long);
	static Scaleform::Render::SKI_ViewMatrix3D Start_Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_ViewMatrix3D End_Instance; // 0xFFFFFFFFFFFFFFFF
	virtual Scaleform::Render::SortKeyTransition GetRangeTransition(void *, const Scaleform::Render::SortKey &);
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_ViewMatrix3D();
	Scaleform::Render::SKI_ViewMatrix3D & operator=(Scaleform::Render::SKI_ViewMatrix3D &);
	Scaleform::Render::SKI_ViewMatrix3D & operator=(const Scaleform::Render::SKI_ViewMatrix3D &);
};
Scaleform::Render::SKI_BlendMode Scaleform::Render::SKI_BlendMode::StartCacheable_Instance; // 0x1409FA340
Scaleform::Render::SKI_BlendMode Scaleform::Render::SKI_BlendMode::End_Instance; // 0x1409FA350
Scaleform::Render::SortKeyTransition Scaleform::Render::SKI_ViewMatrix3D::GetRangeTransition(void * __formal, const Scaleform::Render::SortKey & other); // 0x1403EB700
bool Scaleform::Render::SKI_ViewMatrix3D::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * d, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EB720
class Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle>
{
protected:
	Scaleform::Render::ViewMatrix3DBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ViewMatrix3DBundle>(const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> &);
	Ptr<Scaleform::Render::ViewMatrix3DBundle>(Scaleform::Render::ViewMatrix3DBundle *);
	Ptr<Scaleform::Render::ViewMatrix3DBundle>(Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ViewMatrix3DBundle>(Scaleform::Pickable<Scaleform::Render::ViewMatrix3DBundle>);
	Ptr<Scaleform::Render::ViewMatrix3DBundle>(Scaleform::Render::ViewMatrix3DBundle &);
	Ptr<Scaleform::Render::ViewMatrix3DBundle>();
	~Ptr<Scaleform::Render::ViewMatrix3DBundle>();
	bool operator==(Scaleform::Render::ViewMatrix3DBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> &);
	bool operator!=(Scaleform::Render::ViewMatrix3DBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> &);
	Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & operator=(Scaleform::Pickable<Scaleform::Render::ViewMatrix3DBundle>);
	const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & operator=(Scaleform::Render::ViewMatrix3DBundle &);
	const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & operator=(Scaleform::Render::ViewMatrix3DBundle *);
	const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> &);
	Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::ViewMatrix3DBundle>);
	Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & SetPtr(Scaleform::Render::ViewMatrix3DBundle &);
	Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & SetPtr(Scaleform::Render::ViewMatrix3DBundle *);
	Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ViewMatrix3DBundle * & GetRawRef();
	Scaleform::Render::ViewMatrix3DBundle * GetPtr();
	Scaleform::Render::ViewMatrix3DBundle & operator*();
	Scaleform::Render::ViewMatrix3DBundle * operator->();
	Scaleform::Render::ViewMatrix3DBundle * operator class Scaleform::Render::ViewMatrix3DBundle *();
	Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & Pick(Scaleform::Render::ViewMatrix3DBundle *);
	Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & Pick(Scaleform::Pickable<Scaleform::Render::ViewMatrix3DBundle>);
	Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> & Pick(Scaleform::Ptr<Scaleform::Render::ViewMatrix3DBundle> &);
};
void Scaleform::Render::SKI_Primitive::DrawBundleEntry(Scaleform::Render::HAL * hal, void * __formal, Scaleform::Render::BundleEntry * p); // 0x1403EB7C0
Scaleform::Render::SortKey::SortKey(Scaleform::Render::SortKeyType vm3DKeyType, const Scaleform::Render::Matrix3x4Ref<float> * viewMat); // 0x1403EC1D0
class Scaleform::Render::SKI_ProjectionMatrix3D :
	Scaleform::Render::SortKeyInterface
{
public:
	SKI_ProjectionMatrix3D(Scaleform::Render::SKI_ProjectionMatrix3D &);
	SKI_ProjectionMatrix3D(const Scaleform::Render::SKI_ProjectionMatrix3D &);
	SKI_ProjectionMatrix3D(Scaleform::Render::SortKeyType, unsigned long);
	static Scaleform::Render::SKI_ProjectionMatrix3D Start_Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_ProjectionMatrix3D End_Instance; // 0xFFFFFFFFFFFFFFFF
	virtual Scaleform::Render::SortKeyTransition GetRangeTransition(void *, const Scaleform::Render::SortKey &);
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	virtual ~SKI_ProjectionMatrix3D();
	Scaleform::Render::SKI_ProjectionMatrix3D & operator=(Scaleform::Render::SKI_ProjectionMatrix3D &);
	Scaleform::Render::SKI_ProjectionMatrix3D & operator=(const Scaleform::Render::SKI_ProjectionMatrix3D &);
};
Scaleform::Render::SortKeyTransition Scaleform::Render::SKI_ProjectionMatrix3D::GetRangeTransition(void * __formal, const Scaleform::Render::SortKey & other); // 0x1403EB910
bool Scaleform::Render::SKI_ProjectionMatrix3D::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * d, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EB9C0
class Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle>
{
protected:
	Scaleform::Render::ProjectionMatrix3DBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ProjectionMatrix3DBundle>(const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> &);
	Ptr<Scaleform::Render::ProjectionMatrix3DBundle>(Scaleform::Render::ProjectionMatrix3DBundle *);
	Ptr<Scaleform::Render::ProjectionMatrix3DBundle>(Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ProjectionMatrix3DBundle>(Scaleform::Pickable<Scaleform::Render::ProjectionMatrix3DBundle>);
	Ptr<Scaleform::Render::ProjectionMatrix3DBundle>(Scaleform::Render::ProjectionMatrix3DBundle &);
	Ptr<Scaleform::Render::ProjectionMatrix3DBundle>();
	~Ptr<Scaleform::Render::ProjectionMatrix3DBundle>();
	bool operator==(Scaleform::Render::ProjectionMatrix3DBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> &);
	bool operator!=(Scaleform::Render::ProjectionMatrix3DBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> &);
	Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & operator=(Scaleform::Pickable<Scaleform::Render::ProjectionMatrix3DBundle>);
	const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & operator=(Scaleform::Render::ProjectionMatrix3DBundle &);
	const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & operator=(Scaleform::Render::ProjectionMatrix3DBundle *);
	const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> &);
	Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::ProjectionMatrix3DBundle>);
	Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & SetPtr(Scaleform::Render::ProjectionMatrix3DBundle &);
	Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & SetPtr(Scaleform::Render::ProjectionMatrix3DBundle *);
	Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ProjectionMatrix3DBundle * & GetRawRef();
	Scaleform::Render::ProjectionMatrix3DBundle * GetPtr();
	Scaleform::Render::ProjectionMatrix3DBundle & operator*();
	Scaleform::Render::ProjectionMatrix3DBundle * operator->();
	Scaleform::Render::ProjectionMatrix3DBundle * operator class Scaleform::Render::ProjectionMatrix3DBundle *();
	Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & Pick(Scaleform::Render::ProjectionMatrix3DBundle *);
	Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & Pick(Scaleform::Pickable<Scaleform::Render::ProjectionMatrix3DBundle>);
	Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> & Pick(Scaleform::Ptr<Scaleform::Render::ProjectionMatrix3DBundle> &);
};
Scaleform::Render::SortKey::SortKey(Scaleform::Render::SortKeyType pm3DKeyType, const Scaleform::Render::Matrix4x4Ref<float> * projMat); // 0x1403EC230
class Scaleform::Render::SKI_UserData :
	Scaleform::Render::SortKeyInterface_RefCountImpl
{
public:
	SKI_UserData(Scaleform::Render::SKI_UserData &);
	SKI_UserData(const Scaleform::Render::SKI_UserData &);
	SKI_UserData(Scaleform::Render::SortKeyType, unsigned long);
	static Scaleform::Render::SKI_UserData Start_Instance; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::SKI_UserData End_Instance; // 0xFFFFFFFFFFFFFFFF
	virtual Scaleform::Render::SortKeyTransition GetRangeTransition(void *, const Scaleform::Render::SortKey &);
	virtual bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	virtual void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	bool AcceptMatch(void *, void *);
	virtual ~SKI_UserData();
	Scaleform::Render::SKI_UserData & operator=(Scaleform::Render::SKI_UserData &);
	Scaleform::Render::SKI_UserData & operator=(const Scaleform::Render::SKI_UserData &);
};
Scaleform::Render::SortKeyTransition Scaleform::Render::SKI_UserData::GetRangeTransition(void * __formal, const Scaleform::Render::SortKey & other); // 0x1403EBA70
bool Scaleform::Render::SKI_UserData::UpdateBundleEntry(Scaleform::Render::HAL * hal, void * d, Scaleform::Render::BundleEntry * p, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EBA90
class Scaleform::Ptr<Scaleform::Render::UserDataBundle>
{
protected:
	Scaleform::Render::UserDataBundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::UserDataBundle>(const Scaleform::Ptr<Scaleform::Render::UserDataBundle> &);
	Ptr<Scaleform::Render::UserDataBundle>(Scaleform::Render::UserDataBundle *);
	Ptr<Scaleform::Render::UserDataBundle>(Scaleform::Ptr<Scaleform::Render::UserDataBundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::UserDataBundle>(Scaleform::Pickable<Scaleform::Render::UserDataBundle>);
	Ptr<Scaleform::Render::UserDataBundle>(Scaleform::Render::UserDataBundle &);
	Ptr<Scaleform::Render::UserDataBundle>();
	~Ptr<Scaleform::Render::UserDataBundle>();
	bool operator==(Scaleform::Render::UserDataBundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::UserDataBundle> &);
	bool operator!=(Scaleform::Render::UserDataBundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::UserDataBundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::UserDataBundle> &);
	Scaleform::Ptr<Scaleform::Render::UserDataBundle> & operator=(Scaleform::Pickable<Scaleform::Render::UserDataBundle>);
	const Scaleform::Ptr<Scaleform::Render::UserDataBundle> & operator=(Scaleform::Render::UserDataBundle &);
	const Scaleform::Ptr<Scaleform::Render::UserDataBundle> & operator=(Scaleform::Render::UserDataBundle *);
	const Scaleform::Ptr<Scaleform::Render::UserDataBundle> & operator=(const Scaleform::Ptr<Scaleform::Render::UserDataBundle> &);
	Scaleform::Ptr<Scaleform::Render::UserDataBundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::UserDataBundle>);
	Scaleform::Ptr<Scaleform::Render::UserDataBundle> & SetPtr(Scaleform::Render::UserDataBundle &);
	Scaleform::Ptr<Scaleform::Render::UserDataBundle> & SetPtr(Scaleform::Render::UserDataBundle *);
	Scaleform::Ptr<Scaleform::Render::UserDataBundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::UserDataBundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::UserDataBundle * & GetRawRef();
	Scaleform::Render::UserDataBundle * GetPtr();
	Scaleform::Render::UserDataBundle & operator*();
	Scaleform::Render::UserDataBundle * operator->();
	Scaleform::Render::UserDataBundle * operator class Scaleform::Render::UserDataBundle *();
	Scaleform::Ptr<Scaleform::Render::UserDataBundle> & Pick(Scaleform::Render::UserDataBundle *);
	Scaleform::Ptr<Scaleform::Render::UserDataBundle> & Pick(Scaleform::Pickable<Scaleform::Render::UserDataBundle>);
	Scaleform::Ptr<Scaleform::Render::UserDataBundle> & Pick(Scaleform::Ptr<Scaleform::Render::UserDataBundle> &);
};
bool Scaleform::Render::SKI_UserData::AcceptMatch(void * d0, void * d1); // 0x1403EBB30
Scaleform::Render::SortKey::SortKey(Scaleform::Render::SortKeyType keyType, Scaleform::Render::UserDataState::Data * data); // 0x1403EC170//decompilation failure at 140739DF0!
//decompilation failure at 140739DF8!
//decompilation failure at 140739E00!
//decompilation failure at 1409FA360!
//decompilation failure at 1409FA370!
//decompilation failure at 140739E08!
//decompilation failure at 140739E10!
//decompilation failure at 1409FA380!
//decompilation failure at 1409FA390!
//decompilation failure at 1409FA2B0!
//decompilation failure at 1409FA2C0!
//decompilation failure at 140739E18!
//decompilation failure at 140739E20!
//decompilation failure at 1409FA2D0!
//decompilation failure at 1409FA2E0!
//decompilation failure at 1409FA3A0!
//decompilation failure at 1409FA3B0!
//decompilation failure at 140739E28!
//decompilation failure at 140739E30!
//decompilation failure at 1409FA3C0!
//decompilation failure at 1409FA3D0!
//decompilation failure at 140739DB8!
//decompilation failure at 140739DC0!
//decompilation failure at 140739DC8!
//decompilation failure at 140739DD0!
//decompilation failure at 1409FA2F0!
//decompilation failure at 140739E38!
//decompilation failure at 140739E40!
//decompilation failure at 1409FA300!
//decompilation failure at 1409FA308!
//decompilation failure at 140739DD8!
//decompilation failure at 140739DE0!
//decompilation failure at 140739DE8!
//decompilation failure at 1409FA318!
//decompilation failure at 1409FA330!
//decompilation failure at 1409FA340!
//decompilation failure at 1409FA350!
void __fastcall Scaleform::Render::BlendModeBundle::BlendModeBundle(
        Scaleform::Render::BlendModeBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BlendMode mode)
{
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::BlendModeBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->NeedUpdate = 1;
  this->FrameId = 0;
  Scaleform::Render::Bundle::UpdateChain(this, hal, 0i64);
  this->NeedUpdate = 1;
  this->__vftable = (Scaleform::Render::BlendModeBundle_vtbl *)&Scaleform::Render::BlendModeBundle::`vftable';
  Scaleform::Render::CacheablePrimitive::CacheablePrimitive(&this->Prim);
  this->Prim.__vftable = (Scaleform::Render::BlendPrimitive_vtbl *)&Scaleform::Render::BlendPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>'};
  this->Prim.__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::BlendPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  this->Prim.BlendModeValue = mode;
}

void __fastcall Scaleform::Render::ComplexPrimitiveBundle::ComplexPrimitiveBundle(
        Scaleform::Render::ComplexPrimitiveBundle *this,
        Scaleform::Render::HAL *hal)
{
  this->RefCount = 1;
  this->Scaleform::Render::Bundle::Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::Render::ComplexPrimitiveBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->NeedUpdate = 1;
  this->FrameId = 0;
  Scaleform::Render::Bundle::UpdateChain(this, hal, 0i64);
  this->NeedUpdate = 1;
  this->Scaleform::Render::Bundle::Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::Render::ComplexPrimitiveBundle_vtbl *)&Scaleform::Render::ComplexPrimitiveBundle::`vftable'{for `Scaleform::Render::Bundle'};
  this->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::ComplexPrimitiveBundle::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  this->Instances.Data.Data = 0i64;
  this->Instances.Data.Size = 0i64;
  this->Instances.Data.Policy.Capacity = 0i64;
}

void __fastcall Scaleform::Render::FilterBundle::FilterBundle(
        Scaleform::Render::FilterBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::FilterSet *filters)
{
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::FilterBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->NeedUpdate = 1;
  this->FrameId = 0;
  Scaleform::Render::Bundle::UpdateChain(this, hal, 0i64);
  this->NeedUpdate = 1;
  this->__vftable = (Scaleform::Render::FilterBundle_vtbl *)&Scaleform::Render::FilterBundle::`vftable';
  Scaleform::Render::CacheablePrimitive::CacheablePrimitive(&this->Prim);
  this->Prim.__vftable = (Scaleform::Render::FilterPrimitive_vtbl *)&Scaleform::Render::FilterPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>'};
  this->Prim.__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::FilterPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  if ( filters )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)filters);
  this->Prim.pFilters.pObject = filters;
}

void __fastcall Scaleform::Render::MaskBundle::MaskBundle(
        Scaleform::Render::MaskBundle *this,
        Scaleform::Render::HAL *hal)
{
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::MaskBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->NeedUpdate = 1;
  this->FrameId = 0;
  Scaleform::Render::Bundle::UpdateChain(this, hal, 0i64);
  this->NeedUpdate = 1;
  this->__vftable = (Scaleform::Render::MaskBundle_vtbl *)&Scaleform::Render::MaskBundle::`vftable';
  this->Prim.__vftable = (Scaleform::Render::MaskPrimitive_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Prim.__vftable = (Scaleform::Render::MaskPrimitive_vtbl *)&Scaleform::Render::MaskPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MaskPrimitive,67>'};
  this->Prim.__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::MaskPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  this->Prim.RefCount = 1;
  this->Prim.MaskAreas.Data.Data = 0i64;
  this->Prim.MaskAreas.Data.Size = 0i64;
  this->Prim.MaskAreas.Data.Policy.Capacity = 0i64;
}

void __fastcall Scaleform::Render::ProjectionMatrix3DBundle::ProjectionMatrix3DBundle(
        Scaleform::Render::ProjectionMatrix3DBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::Matrix4x4Ref<float> *ppm)
{
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::ProjectionMatrix3DBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->NeedUpdate = 1;
  this->FrameId = 0;
  Scaleform::Render::Bundle::UpdateChain(this, hal, 0i64);
  this->NeedUpdate = 1;
  this->__vftable = (Scaleform::Render::ProjectionMatrix3DBundle_vtbl *)&Scaleform::Render::ProjectionMatrix3DBundle::`vftable';
  this->Prim.__vftable = (Scaleform::Render::ProjectionMatrix3DPrimitive_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Prim.__vftable = (Scaleform::Render::ProjectionMatrix3DPrimitive_vtbl *)&Scaleform::Render::ProjectionMatrix3DPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::ProjectionMatrix3DPrimitive,67>'};
  this->Prim.__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::ProjectionMatrix3DPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  this->Prim.RefCount = 1;
  *(_QWORD *)&this->Prim.ProjectionMatrix.M[0][0] = 0i64;
  *(_QWORD *)&this->Prim.ProjectionMatrix.M[0][2] = 0i64;
  *(_QWORD *)&this->Prim.ProjectionMatrix.M[1][0] = 0i64;
  *(_QWORD *)&this->Prim.ProjectionMatrix.M[1][2] = 0i64;
  *(_QWORD *)&this->Prim.ProjectionMatrix.M[2][0] = 0i64;
  *(_QWORD *)&this->Prim.ProjectionMatrix.M[2][2] = 0i64;
  *(_QWORD *)&this->Prim.ProjectionMatrix.M[3][0] = 0i64;
  *(_QWORD *)&this->Prim.ProjectionMatrix.M[3][2] = 0i64;
  this->Prim.ProjectionMatrix.M[0][0] = 1.0;
  this->Prim.ProjectionMatrix.M[1][1] = 1.0;
  this->Prim.ProjectionMatrix.M[2][2] = 1.0;
  this->Prim.ProjectionMatrix.M[3][3] = 1.0;
  this->Prim.bHasProjectionMatrix = 0;
  if ( ppm )
  {
    v5 = *(_OWORD *)&ppm->M[1][0];
    v6 = *(_OWORD *)&ppm->M[2][0];
    v7 = *(_OWORD *)&ppm->M[3][0];
    *(_OWORD *)&this->Prim.ProjectionMatrix.M[0][0] = *(_OWORD *)&ppm->M[0][0];
    *(_OWORD *)&this->Prim.ProjectionMatrix.M[1][0] = v5;
    *(_OWORD *)&this->Prim.ProjectionMatrix.M[2][0] = v6;
    *(_OWORD *)&this->Prim.ProjectionMatrix.M[3][0] = v7;
    this->Prim.bHasProjectionMatrix = 1;
  }
}

void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::MeshProvider *fill,
        bool is3D)
{
  this->Data = fill;
  if ( is3D )
  {
    this->pImpl = &Scaleform::Render::SKI_ComplexPrimitive::Instance3D;
    ((void (*)(void))Scaleform::Render::SKI_ComplexPrimitive::Instance3D.AddRef)();
  }
  else
  {
    this->pImpl = &Scaleform::Render::SKI_ComplexPrimitive::Instance;
    ((void (*)(void))Scaleform::Render::SKI_ComplexPrimitive::Instance.AddRef)();
  }
}

void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::PrimitiveFill *fill,
        bool is3D)
{
  this->Data = fill;
  if ( is3D )
  {
    this->pImpl = &Scaleform::Render::SKI_Primitive::Instance3D;
    ((void (*)(void))Scaleform::Render::SKI_Primitive::Instance3D.AddRef)();
  }
  else
  {
    this->pImpl = &Scaleform::Render::SKI_Primitive::Instance;
    ((void (*)(void))Scaleform::Render::SKI_Primitive::Instance.AddRef)();
  }
}

void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::SortKeyMaskType maskType)
{
  Scaleform::Render::SortKeyInterface *v3; // rcx

  v3 = Scaleform::Render::SortKeyMaskInterfaces[maskType];
  this->pImpl = v3;
  this->Data = (void *)maskType;
  ((void (__fastcall *)(Scaleform::Render::SortKeyInterface *))v3->AddRef)(v3);
}

void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::SortKeyType keyType,
        Scaleform::Render::UserDataState::Data *data)
{
  if ( keyType == SortKey_UserDataStart )
  {
    this->Data = data;
    this->pImpl = &Scaleform::Render::SKI_UserData::Start_Instance;
    Scaleform::Render::SKI_UserData::Start_Instance.AddRef(&Scaleform::Render::SKI_UserData::Start_Instance, data);
  }
  else
  {
    this->Data = 0i64;
    this->pImpl = &Scaleform::Render::SKI_UserData::End_Instance;
    ((void (__fastcall *)(Scaleform::Render::SKI_UserData *, _QWORD, Scaleform::Render::UserDataState::Data *))Scaleform::Render::SKI_UserData::End_Instance.AddRef)(
      &Scaleform::Render::SKI_UserData::End_Instance,
      0i64,
      data);
  }
}

void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::SortKeyType vm3DKeyType,
        const Scaleform::Render::Matrix3x4Ref<float> *viewMat)
{
  if ( vm3DKeyType == SortKey_ViewMatrix3DStart )
  {
    this->Data = (void *)viewMat;
    this->pImpl = &Scaleform::Render::SKI_ViewMatrix3D::Start_Instance;
    Scaleform::Render::SKI_ViewMatrix3D::Start_Instance.AddRef(
      &Scaleform::Render::SKI_ViewMatrix3D::Start_Instance,
      (void *)viewMat);
  }
  else
  {
    this->Data = 0i64;
    this->pImpl = &Scaleform::Render::SKI_ViewMatrix3D::End_Instance;
    ((void (__fastcall *)(Scaleform::Render::SKI_ViewMatrix3D *, _QWORD, const Scaleform::Render::Matrix3x4Ref<float> *))Scaleform::Render::SKI_ViewMatrix3D::End_Instance.AddRef)(
      &Scaleform::Render::SKI_ViewMatrix3D::End_Instance,
      0i64,
      viewMat);
  }
}

void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::SortKeyType pm3DKeyType,
        const Scaleform::Render::Matrix4x4Ref<float> *projMat)
{
  if ( pm3DKeyType == SortKey_ProjectionMatrix3DStart )
  {
    this->Data = (void *)projMat;
    this->pImpl = &Scaleform::Render::SKI_ProjectionMatrix3D::Start_Instance;
    Scaleform::Render::SKI_ProjectionMatrix3D::Start_Instance.AddRef(
      &Scaleform::Render::SKI_ProjectionMatrix3D::Start_Instance,
      (void *)projMat);
  }
  else
  {
    this->Data = 0i64;
    this->pImpl = &Scaleform::Render::SKI_ProjectionMatrix3D::End_Instance;
    ((void (__fastcall *)(Scaleform::Render::SKI_ProjectionMatrix3D *, _QWORD, const Scaleform::Render::Matrix4x4Ref<float> *))Scaleform::Render::SKI_ProjectionMatrix3D::End_Instance.AddRef)(
      &Scaleform::Render::SKI_ProjectionMatrix3D::End_Instance,
      0i64,
      projMat);
  }
}

void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::SortKeyType filterKeyType,
        const Scaleform::Render::FilterSet *filters)
{
  if ( filterKeyType == SortKey_FilterStart )
  {
    this->Data = (void *)filters;
    this->pImpl = &Scaleform::Render::SKI_Filter::Start_Instance;
    Scaleform::Render::SKI_Filter::Start_Instance.AddRef(
      &Scaleform::Render::SKI_Filter::Start_Instance,
      (void *)filters);
  }
  else
  {
    this->Data = 0i64;
    this->pImpl = &Scaleform::Render::SKI_Filter::End_Instance;
    ((void (__fastcall *)(Scaleform::Render::SKI_Filter *, _QWORD, const Scaleform::Render::FilterSet *))Scaleform::Render::SKI_Filter::End_Instance.AddRef)(
      &Scaleform::Render::SKI_Filter::End_Instance,
      0i64,
      filters);
  }
}

void __fastcall Scaleform::Render::SortKey::SortKey(
        Scaleform::Render::SortKey *this,
        Scaleform::Render::SortKeyType blendKeyType,
        Scaleform::Render::BlendMode mode)
{
  void *v3; // rdi
  bool IsTargetAllocationNeededForBlendMode; // al

  v3 = (void *)(int)mode;
  if ( blendKeyType == SortKey_BlendModeStart )
  {
    IsTargetAllocationNeededForBlendMode = Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode(mode);
    this->Data = v3;
    if ( IsTargetAllocationNeededForBlendMode )
    {
      this->pImpl = &Scaleform::Render::SKI_BlendMode::StartCacheable_Instance;
      ((void (*)(void))Scaleform::Render::SKI_BlendMode::StartCacheable_Instance.AddRef)();
    }
    else
    {
      this->pImpl = &Scaleform::Render::SKI_BlendMode::Start_Instance;
      ((void (*)(void))Scaleform::Render::SKI_BlendMode::Start_Instance.AddRef)();
    }
  }
  else
  {
    this->pImpl = &Scaleform::Render::SKI_BlendMode::End_Instance;
    this->Data = (void *)mode;
    ((void (*)(void))Scaleform::Render::SKI_BlendMode::End_Instance.AddRef)();
  }
}

void __fastcall Scaleform::Render::UserDataBundle::UserDataBundle(
        Scaleform::Render::UserDataBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::UserDataState::Data *data)
{
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::UserDataBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->NeedUpdate = 1;
  this->FrameId = 0;
  Scaleform::Render::Bundle::UpdateChain(this, hal, 0i64);
  this->NeedUpdate = 1;
  this->__vftable = (Scaleform::Render::UserDataBundle_vtbl *)&Scaleform::Render::UserDataBundle::`vftable';
  this->Prim.__vftable = (Scaleform::Render::UserDataPrimitive_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Prim.__vftable = (Scaleform::Render::UserDataPrimitive_vtbl *)&Scaleform::Render::UserDataPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67>'};
  this->Prim.__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::UserDataPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  this->Prim.RefCount = 1;
  if ( data )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)data);
  this->Prim.pUserData.pObject = data;
}

void __fastcall Scaleform::Render::ViewMatrix3DBundle::ViewMatrix3DBundle(
        Scaleform::Render::ViewMatrix3DBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::Matrix3x4Ref<float> *pvm)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm0

  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::ViewMatrix3DBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->NeedUpdate = 1;
  this->FrameId = 0;
  Scaleform::Render::Bundle::UpdateChain(this, hal, 0i64);
  this->NeedUpdate = 1;
  this->__vftable = (Scaleform::Render::ViewMatrix3DBundle_vtbl *)&Scaleform::Render::ViewMatrix3DBundle::`vftable';
  this->Prim.__vftable = (Scaleform::Render::ViewMatrix3DPrimitive_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Prim.__vftable = (Scaleform::Render::ViewMatrix3DPrimitive_vtbl *)&Scaleform::Render::ViewMatrix3DPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::ViewMatrix3DPrimitive,67>'};
  this->Prim.__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::ViewMatrix3DPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  this->Prim.RefCount = 1;
  *(_QWORD *)&this->Prim.ViewMatrix.M[0][0] = 0i64;
  *(_QWORD *)&this->Prim.ViewMatrix.M[0][2] = 0i64;
  *(_QWORD *)&this->Prim.ViewMatrix.M[1][0] = 0i64;
  *(_QWORD *)&this->Prim.ViewMatrix.M[1][2] = 0i64;
  *(_QWORD *)&this->Prim.ViewMatrix.M[2][0] = 0i64;
  *(_QWORD *)&this->Prim.ViewMatrix.M[2][2] = 0i64;
  this->Prim.ViewMatrix.M[0][0] = 1.0;
  this->Prim.ViewMatrix.M[1][1] = 1.0;
  this->Prim.ViewMatrix.M[2][2] = 1.0;
  this->Prim.bHasViewMatrix = 0;
  if ( pvm )
  {
    v5 = *(_OWORD *)&pvm->M[1][0];
    v6 = *(_OWORD *)&pvm->M[2][0];
    *(_OWORD *)&this->Prim.ViewMatrix.M[0][0] = *(_OWORD *)&pvm->M[0][0];
    *(_OWORD *)&this->Prim.ViewMatrix.M[1][0] = v5;
    *(_OWORD *)&this->Prim.ViewMatrix.M[2][0] = v6;
    this->Prim.bHasViewMatrix = 1;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *i; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    pObject = (Scaleform::RefCountVImpl *)i->pMesh.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    if ( i->M.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
      Scaleform::Render::MatrixPoolImpl::DataHeader::Release(i->M.pHandle->pHeader);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::MatrixPoolImpl::HMatrix,Scaleform::AllocatorLH<Scaleform::Render::MatrixPoolImpl::HMatrix,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Render::MatrixPoolImpl::HMatrix *i; // rbx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    if ( i->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
      Scaleform::Render::MatrixPoolImpl::DataHeader::Release(i->pHandle->pHeader);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::Render::UserDataBundle::~UserDataBundle(Scaleform::Render::UserDataBundle *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->Prim.__vftable = (Scaleform::Render::UserDataPrimitive_vtbl *)&Scaleform::Render::UserDataPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::UserDataPrimitive,67>'};
  this->Prim.__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::UserDataPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  pObject = (Scaleform::RefCountVImpl *)this->Prim.pUserData.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Prim.__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::RenderQueueItem::Interface::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(&this->Prim);
  this->__vftable = (Scaleform::Render::UserDataBundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Entries.Data.Data);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

bool __fastcall Scaleform::Render::SKI_UserData::AcceptMatch(Scaleform::Render::SKI_UserData *this, void *d0, void *d1)
{
  if ( d0 != d1 )
    return 0;
  if ( !d0 )
    return 1;
  return (*((_BYTE *)d0 + 32) & 4) == 0 || !*((_BYTE *)d0 + 28);
}

void __fastcall Scaleform::Render::SKI_ComplexPrimitive::AddRef(
        Scaleform::Render::SingleThreadCommandQueue *this,
        Scaleform::Render::ThreadCommand *command)
{
  if ( command )
    command->Execute(command);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::SortKeyInterface_RefCountImpl::AddRef(
        Scaleform::Render::SortKeyInterface_RefCountImpl *this,
        void *p)
{
  if ( p )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)p);
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::Primitive::MeshEntry>::DestructArray(
        Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rdi
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *v3; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    do
    {
      pObject = (Scaleform::RefCountVImpl *)v3->pMesh.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      if ( v3->M.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
        Scaleform::Render::MatrixPoolImpl::DataHeader::Release(v3->M.pHandle->pHeader);
      --v3;
      --v2;
    }
    while ( v2 );
  }
}

void __fastcall Scaleform::Render::ComplexPrimitiveBundle::Draw(
        Scaleform::Render::ComplexPrimitiveBundle *this,
        Scaleform::Render::HAL *hal)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 i; // rbx
  Scaleform::Render::RenderQueueItem::Interface *v6; // rdx
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *v7; // rax
  unsigned __int64 v8; // rcx
  Scaleform::Render::ComplexMesh *pObject; // rdx
  Scaleform::Ptr<Scaleform::Render::ComplexMesh> *p_pMesh; // rax

  Size = this->Instances.Data.Size;
  for ( i = 0i64; i < Size; ++i )
  {
    v6 = &this->Scaleform::Render::RenderQueueItem::Interface;
    if ( !this )
      v6 = 0i64;
    Scaleform::Render::HAL::Draw(hal, v6, (void *)i);
    v7 = &this->Instances.Data.Data[i];
    v8 = this->Instances.Data.Size - 1;
    pObject = v7->pMesh.pObject;
    if ( i < v8 )
    {
      p_pMesh = &v7[1].pMesh;
      do
      {
        if ( p_pMesh->pObject != pObject )
          break;
        ++i;
        p_pMesh += 2;
      }
      while ( i < v8 );
    }
  }
}

void __fastcall Scaleform::Render::SKI_Filter::DrawBundleEntry(
        Scaleform::Render::SKI_UserData *this,
        Scaleform::Render::HAL *hal,
        void *__formal,
        Scaleform::Render::BundleEntry *p)
{
  Scaleform::Render::Bundle *pObject; // rdx
  Scaleform::Render::Bundle *v6; // rax
  Scaleform::Render::RenderQueueItem::Interface *p_Entries; // rdx

  pObject = p->pBundle.pObject;
  if ( pObject )
  {
    v6 = pObject + 1;
    p_Entries = (Scaleform::Render::RenderQueueItem::Interface *)&pObject[1].Entries;
    if ( !v6 )
      p_Entries = 0i64;
    Scaleform::Render::HAL::Draw(hal, p_Entries, 0i64);
  }
}

void __fastcall Scaleform::Render::SKI_ComplexPrimitive::DrawBundleEntry(
        Scaleform::Render::SKI_ComplexPrimitive *this,
        Scaleform::Render::HAL *hal,
        void *__formal,
        Scaleform::Render::BundleEntry *p)
{
  Scaleform::Render::ComplexPrimitiveBundle *pObject; // rcx

  pObject = (Scaleform::Render::ComplexPrimitiveBundle *)p->pBundle.pObject;
  if ( pObject )
    Scaleform::Render::ComplexPrimitiveBundle::Draw(pObject, hal);
}

void __fastcall Scaleform::Render::SKI_MaskEnd::DrawBundleEntry(
        Scaleform::Render::SKI_MaskEnd *this,
        Scaleform::Render::HAL *hal,
        void *data,
        Scaleform::Render::BundleEntry *__formal)
{
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = (__int64)data;
  v4[0] = (__int64)&Scaleform::Render::SKI_MaskEnd::RQII_Instance;
  ((void (__fastcall *)(Scaleform::Render::HAL *, __int64 *, void *, Scaleform::Render::BundleEntry *))hal->Draw)(
    hal,
    v4,
    data,
    __formal);
}

void __fastcall Scaleform::Render::SKI_ProjectionMatrix3D::DrawBundleEntry(
        Scaleform::Render::SKI_ViewMatrix3D *this,
        Scaleform::Render::HAL *hal,
        void *__formal,
        Scaleform::Render::BundleEntry *p)
{
  Scaleform::Render::Bundle *pObject; // rdx
  int *p_RefCount; // rax
  Scaleform::Render::RenderQueueItem::Interface *p_Size; // rdx

  pObject = p->pBundle.pObject;
  if ( pObject )
  {
    p_RefCount = &pObject[1].RefCount;
    p_Size = (Scaleform::Render::RenderQueueItem::Interface *)&pObject[1].Entries.Data.Size;
    if ( !p_RefCount )
      p_Size = 0i64;
    Scaleform::Render::HAL::Draw(hal, p_Size, 0i64);
  }
}

void __fastcall Scaleform::Render::ComplexPrimitiveBundle::EmitToHAL(
        Scaleform::Render::ComplexPrimitiveBundle *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  __int64 v5; // rax
  char *Data; // rbx
  __int64 v7; // r9
  __int64 v8; // rsi
  char *v9; // rcx
  __int64 v10; // r8
  char *v11; // rdx
  _QWORD *v12; // rax
  Scaleform::Render::ComplexMesh *v13; // rdx
  __int64 v14[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( qp->QueueEmitFilter == QPF_All )
  {
    v5 = *(_QWORD *)&this->RefCount;
    Data = (char *)item->Data;
    v7 = 16i64 * (_QWORD)Data;
    v8 = v5 + 16i64 * (_QWORD)Data;
    if ( item != qp->PrepareItemBuffer.pItem )
    {
      if ( *(_QWORD *)(v8 + 8) )
      {
        v9 = (char *)item->Data;
        v10 = *(_QWORD *)(v5 + v7 + 8);
        v11 = (char *)this->Entries.Data.Data - 1;
        if ( Data < v11 )
        {
          v12 = (_QWORD *)(v7 + v5 + 24);
          do
          {
            if ( *v12 != v10 )
              break;
            ++v9;
            v12 += 2;
          }
          while ( v9 < v11 );
        }
        v13 = *(Scaleform::Render::ComplexMesh **)(v8 + 8);
        v14[0] = v8;
        v14[2] = 16i64;
        v14[1] = v9 - Data + 1;
        qp->pHAL->DrawProcessedComplexMeshes(
          qp->pHAL,
          v13,
          (const Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix> *)v14);
      }
    }
  }
}

void __fastcall Scaleform::Render::SKI_MaskEnd::RQII_EndMask::EmitToHAL(
        Scaleform::Render::SKI_MaskEnd::RQII_EndMask *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp)
{
  int Data; // eax
  Scaleform::Render::HAL *pHAL; // rcx

  if ( qp->QueueEmitFilter == QPF_All )
  {
    Data = (int)item->Data;
    pHAL = qp->pHAL;
    if ( Data == 1 )
    {
      pHAL->EndMaskSubmit(pHAL);
    }
    else if ( Data == 2 )
    {
      pHAL->PopMask(pHAL);
    }
  }
}

__int64 __fastcall Scaleform::Render::SKI_BlendMode::GetRangeTransition(
        Scaleform::Render::SKI_BlendMode *this,
        void *__formal,
        const Scaleform::Render::SortKey *other)
{
  if ( other->pImpl->Type == SortKey_BlendModeEnd && this->Type == SortKey_BlendModeStart )
    return 2i64;
  else
    return 0i64;
}

__int64 __fastcall Scaleform::Render::SKI_Filter::GetRangeTransition(
        Scaleform::Render::SKI_Filter *this,
        void *__formal,
        const Scaleform::Render::SortKey *other)
{
  if ( other->pImpl->Type == SortKey_FilterEnd && this->Type == SortKey_FilterStart )
    return 2i64;
  else
    return 0i64;
}

__int64 __fastcall Scaleform::Render::SKI_MaskEnd::GetRangeTransition(
        Scaleform::Render::SKI_MaskEnd *this,
        void *data,
        const Scaleform::Render::SortKey *other)
{
  __int64 result; // rax

  result = 0i64;
  if ( other->pImpl->Type == SortKey_MaskEnd )
    return 2i64;
  return result;
}

_BOOL8 __fastcall Scaleform::Render::SKI_MaskStart::GetRangeTransition(
        Scaleform::Render::SKI_MaskStart *this,
        void *__formal,
        const Scaleform::Render::SortKey *other)
{
  return other->pImpl->Type == SortKey_MaskEnd;
}

__int64 __fastcall Scaleform::Render::SKI_ProjectionMatrix3D::GetRangeTransition(
        Scaleform::Render::SKI_ProjectionMatrix3D *this,
        void *__formal,
        const Scaleform::Render::SortKey *other)
{
  if ( other->pImpl->Type == SortKey_ProjectionMatrix3DEnd && this->Type == SortKey_ProjectionMatrix3DStart )
    return 2i64;
  else
    return 0i64;
}

__int64 __fastcall Scaleform::Render::SKI_UserData::GetRangeTransition(
        Scaleform::Render::SKI_UserData *this,
        void *__formal,
        const Scaleform::Render::SortKey *other)
{
  if ( other->pImpl->Type == SortKey_UserDataEnd && this->Type == SortKey_UserDataStart )
    return 2i64;
  else
    return 0i64;
}

__int64 __fastcall Scaleform::Render::SKI_ViewMatrix3D::GetRangeTransition(
        Scaleform::Render::SKI_ViewMatrix3D *this,
        void *__formal,
        const Scaleform::Render::SortKey *other)
{
  if ( other->pImpl->Type == SortKey_ViewMatrix3DEnd && this->Type == SortKey_ViewMatrix3DStart )
    return 2i64;
  else
    return 0i64;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *val)
{
  unsigned __int64 Size; // rbp
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *v10; // rdi
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data,
    this,
    Size + 1);
  if ( Size + 1 > Size )
  {
    v7 = &this->Data.Data[Size];
    v8 = 1i64;
    do
    {
      if ( v7 )
      {
        v7->M.pHandle = &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
        v7->pMesh.pObject = 0i64;
      }
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = this->Data.Size;
  if ( index < v9 - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 16 * (v9 - index) - 16);
  v10 = &this->Data.Data[index];
  if ( v10 )
  {
    pHandle = val->M.pHandle;
    v10->M.pHandle = val->M.pHandle;
    if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
      ++pHandle->pHeader->RefCount;
    pObject = (Scaleform::RefCountVImpl *)val->pMesh.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v10->pMesh.pObject = val->pMesh.pObject;
  }
}

void __fastcall Scaleform::Render::BlendModeBundle::InsertEntry(
        Scaleform::Render::BlendModeBundle *this,
        Scaleform::Render::HAL *hal,
        unsigned __int64 index,
        Scaleform::Render::BundleEntry *entry)
{
  Scaleform::Render::CacheEffect *i; // rbx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v8; // rax
  Scaleform::Render::MatrixPoolImpl::HMatrix m; // [rsp+30h] [rbp+8h] BYREF

  Scaleform::Render::Bundle::InsertEntry(this, hal, index, entry);
  for ( i = entry->pSourceNode->Effects.pEffect; i; i = i->pNext )
  {
    if ( i->GetType(i) == State_BlendMode )
      break;
  }
  v8 = (Scaleform::Render::MatrixPoolImpl::EntryHandle *)i[1].__vftable;
  m.pHandle = v8;
  if ( v8 != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++v8->pHeader->RefCount;
  Scaleform::Render::CacheablePrimitive::Insert(&this->Prim, index, &m);
  if ( m.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(m.pHandle->pHeader);
}

void __fastcall Scaleform::Render::ComplexPrimitiveBundle::InsertEntry(
        Scaleform::Render::ComplexPrimitiveBundle *this,
        Scaleform::Render::HAL *hal,
        unsigned __int64 index,
        Scaleform::Render::BundleEntry *entry)
{
  Scaleform::Render::TreeCacheNode *pSourceNode; // rbx
  Scaleform::RefCountVImpl *v9; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pMask; // rcx
  Scaleform::Render::ComplexMesh *v11; // rdi
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry val; // [rsp+20h] [rbp-18h] BYREF

  Scaleform::Render::Bundle::InsertEntry(this, hal, index, entry);
  pSourceNode = entry->pSourceNode;
  v9 = (Scaleform::RefCountVImpl *)((__int64 (__fastcall *)(Scaleform::Render::TreeCacheNode *, Scaleform::Render::HAL *))pSourceNode->__vftable[1].HandleChanges)(
                                     pSourceNode,
                                     hal);
  pMask = (Scaleform::Render::MatrixPoolImpl::EntryHandle *)pSourceNode[1].pMask;
  v11 = (Scaleform::Render::ComplexMesh *)v9;
  val.M.pHandle = pMask;
  if ( pMask != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++pMask->pHeader->RefCount;
  if ( v9 )
    Scaleform::Render::RenderBuffer::AddRef(v9);
  val.pMesh.pObject = v11;
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    &this->Instances,
    index,
    &val);
  if ( val.pMesh.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)val.pMesh.pObject);
  if ( val.M.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(val.M.pHandle->pHeader);
}

void __fastcall Scaleform::Render::FilterBundle::InsertEntry(
        Scaleform::Render::FilterBundle *this,
        Scaleform::Render::HAL *hal,
        unsigned __int64 index,
        Scaleform::Render::BundleEntry *entry)
{
  Scaleform::Render::CacheEffect *i; // rbx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v8; // rax
  Scaleform::Render::MatrixPoolImpl::HMatrix m; // [rsp+30h] [rbp+8h] BYREF

  Scaleform::Render::Bundle::InsertEntry(this, hal, index, entry);
  for ( i = entry->pSourceNode->Effects.pEffect; i; i = i->pNext )
  {
    if ( i->GetType(i) == State_Filter )
      break;
  }
  v8 = (Scaleform::Render::MatrixPoolImpl::EntryHandle *)i[1].__vftable;
  m.pHandle = v8;
  if ( v8 != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++v8->pHeader->RefCount;
  Scaleform::Render::CacheablePrimitive::Insert(&this->Prim, index, &m);
  if ( m.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(m.pHandle->pHeader);
}

void __fastcall Scaleform::Render::MaskBundle::InsertEntry(
        Scaleform::Render::MaskBundle *this,
        Scaleform::Render::HAL *hal,
        unsigned __int64 index,
        Scaleform::Render::BundleEntry *entry)
{
  Scaleform::Render::CacheEffect *i; // rbx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pNext; // rax
  Scaleform::Render::MatrixPoolImpl::HMatrix m; // [rsp+30h] [rbp+8h] BYREF

  Scaleform::Render::Bundle::InsertEntry(this, hal, index, entry);
  for ( i = entry->pSourceNode->Effects.pEffect; i; i = i->pNext )
  {
    if ( i->GetType(i) == State_MaskNode )
      break;
  }
  pNext = (Scaleform::Render::MatrixPoolImpl::EntryHandle *)i[9].pNext;
  m.pHandle = pNext;
  if ( pNext != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++pNext->pHeader->RefCount;
  Scaleform::Render::MaskPrimitive::Insert(&this->Prim, index, &m);
  if ( m.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(m.pHandle->pHeader);
}

void __fastcall Scaleform::Render::PrimitiveBundle::InsertEntry(
        Scaleform::Render::PrimitiveBundle *this,
        Scaleform::Render::HAL *hal,
        unsigned __int64 index,
        Scaleform::Render::BundleEntry *entry)
{
  unsigned int v5; // esi
  Scaleform::Render::TreeCacheNode *pSourceNode; // rcx
  const Scaleform::Render::MatrixPoolImpl::HMatrix *m; // rbx
  Scaleform::Render::Mesh *v10; // rax

  v5 = index;
  Scaleform::Render::Bundle::InsertEntry(this, hal, index, entry);
  pSourceNode = entry->pSourceNode;
  m = (const Scaleform::Render::MatrixPoolImpl::HMatrix *)&pSourceNode[1].pMask;
  v10 = (Scaleform::Render::Mesh *)((__int64 (__fastcall *)(Scaleform::Render::TreeCacheNode *, Scaleform::Render::HAL *))pSourceNode->__vftable[1].HandleChanges)(
                                     pSourceNode,
                                     hal);
  Scaleform::Render::Primitive::Insert(&this->Prim, hal, v5, v10, m);
}

__int64 __fastcall Scaleform::Render::ComplexPrimitiveBundle::Prepare(
        Scaleform::Render::ComplexPrimitiveBundle *this,
        Scaleform::Render::RenderQueueItem *item,
        Scaleform::Render::RenderQueueProcessor *qp,
        bool waitForCache)
{
  if ( qp->QueuePrepareFilter == QPF_All )
  {
    if ( !Scaleform::Render::MeshCache::PrepareComplexMesh(
            (Scaleform::Render::MeshCache *)qp->Caches.pCaches[0],
            qp->pHAL,
            *(Scaleform::Render::ComplexMesh **)(*(_QWORD *)&this->RefCount + 16 * (__int64)item->Data + 8),
            waitForCache)
      && item != qp->PrepareItemBuffer.pItem )
    {
      qp->PrepareItemBuffer.pItem = item;
      return 1i64;
    }
    qp->PrepareItemBuffer.pItem = 0i64;
  }
  return 0i64;
}

void __fastcall Scaleform::Render::SKI_ComplexPrimitive::Release(
        Scaleform::Render::SKI_ComplexPrimitive *this,
        void *p)
{
  if ( p )
    (*(void (__fastcall **)(void *))(*(_QWORD *)p + 16i64))(p);
}

void __fastcall Scaleform::Render::SortKeyInterface_RefCountImpl::Release(
        Scaleform::Render::SortKeyInterface_RefCountImpl *this,
        void *p)
{
  if ( p )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p);
}

void __fastcall Scaleform::Render::FilterBundle::RemoveEntries(
        Scaleform::Render::FilterBundle *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  Scaleform::Render::CacheablePrimitive::Remove(&this->Prim, (unsigned int)index, (unsigned int)count);
  Scaleform::Render::Bundle::RemoveEntries(this, index, count);
}

void __fastcall Scaleform::Render::ComplexPrimitiveBundle::RemoveEntries(
        Scaleform::Render::ComplexPrimitiveBundle *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveMultipleAt(
    &this->Instances,
    index,
    count);
  Scaleform::Render::Bundle::RemoveEntries(this, index, count);
}

void __fastcall Scaleform::Render::MaskBundle::RemoveEntries(
        Scaleform::Render::MaskBundle *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  Scaleform::Render::MaskPrimitive::Remove(&this->Prim, (unsigned int)index, (unsigned int)count);
  Scaleform::Render::Bundle::RemoveEntries(this, index, count);
}

void __fastcall Scaleform::Render::PrimitiveBundle::RemoveEntries(
        Scaleform::Render::PrimitiveBundle *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  Scaleform::Render::Primitive::Remove(&this->Prim, index, count);
  Scaleform::Render::Bundle::RemoveEntries(this, index, count);
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveMultipleAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        unsigned __int64 num)
{
  if ( this->Data.Size == num )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::Primitive::MeshEntry>::DestructArray(&this->Data.Data[index], num);
    memmove(&this->Data.Data[index], &this->Data.Data[index + num], 16 * (this->Data.Size - index - num));
    this->Data.Size -= num;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::Button::CharToRec *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::Button::CharToRec *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 16 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::Button::CharToRec *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::GFx::Button::CharToRec *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          pheapAddr,
                                                          v7,
                                                          &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,Scaleform::AllocatorLH<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::Primitive::MeshEntry>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Render::BundleEntry::SetBundle(
        Scaleform::Render::BundleEntry *this,
        Scaleform::Render::Bundle *b,
        unsigned __int64 indexHint)
{
  Scaleform::Render::Bundle *pObject; // rax
  unsigned __int16 v4; // bp
  Scaleform::Render::Bundle *v7; // rbx
  Scaleform::Render::Bundle *v8; // rcx

  pObject = this->pBundle.pObject;
  v4 = indexHint;
  if ( pObject )
  {
    if ( pObject != b )
    {
      ++pObject->RefCount;
      v7 = this->pBundle.pObject;
      Scaleform::Render::Bundle::RemoveEntry(v7, this);
      if ( v7 )
        Scaleform::RefCountNTSImpl::Release(v7);
    }
  }
  if ( b )
    ++b->RefCount;
  v8 = this->pBundle.pObject;
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
  this->pBundle.pObject = b;
  this->IndexHint = v4;
}

bool __fastcall Scaleform::Render::SKI_BlendMode::UpdateBundleEntry(
        Scaleform::Render::SKI_BlendMode *this,
        Scaleform::Render::HAL *hal,
        void *d,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::BlendMode v6; // ebx
  Scaleform::Render::BlendModeBundle *v8; // rax
  Scaleform::Render::Bundle *v9; // rax
  Scaleform::Render::Bundle *v10; // rbx
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v6 = (int)d;
  if ( !p->pBundle.pObject )
  {
    v12 = 67;
    v8 = (Scaleform::Render::BlendModeBundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 tr,
                                                 136i64,
                                                 &v12);
    if ( v8 )
    {
      Scaleform::Render::BlendModeBundle::BlendModeBundle(v8, hal, v6);
      v10 = v9;
    }
    else
    {
      v10 = 0i64;
    }
    Scaleform::Render::BundleEntry::SetBundle(p, v10, 0i64);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
  }
  return p->pBundle.pObject != 0i64;
}

bool __fastcall Scaleform::Render::SKI_ComplexPrimitive::UpdateBundleEntry(
        Scaleform::Render::SKI_ComplexPrimitive *this,
        Scaleform::Render::HAL *hal,
        void *__formal,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::ComplexPrimitiveBundle *v7; // rax
  Scaleform::Render::Bundle *v8; // rax
  Scaleform::Render::Bundle *v9; // rbx
  int v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !p->pBundle.pObject )
  {
    v11 = 67;
    v7 = (Scaleform::Render::ComplexPrimitiveBundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        tr,
                                                        88i64,
                                                        &v11);
    if ( v7 )
    {
      Scaleform::Render::ComplexPrimitiveBundle::ComplexPrimitiveBundle(v7, hal);
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

bool __fastcall Scaleform::Render::SKI_Filter::UpdateBundleEntry(
        Scaleform::Render::SKI_Filter *this,
        Scaleform::Render::HAL *hal,
        void *d,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::FilterBundle *v8; // rax
  Scaleform::Render::Bundle *v9; // rax
  Scaleform::Render::Bundle *v10; // rbx
  int v12; // [rsp+48h] [rbp+20h] BYREF

  if ( !p->pBundle.pObject )
  {
    v12 = 67;
    v8 = (Scaleform::Render::FilterBundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              tr,
                                              136i64,
                                              &v12);
    if ( v8 )
    {
      Scaleform::Render::FilterBundle::FilterBundle(v8, hal, (Scaleform::Render::FilterSet *)d);
      v10 = v9;
    }
    else
    {
      v10 = 0i64;
    }
    Scaleform::Render::BundleEntry::SetBundle(p, v10, 0i64);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
  }
  return p->pBundle.pObject != 0i64;
}

bool __fastcall Scaleform::Render::SKI_MaskStart::UpdateBundleEntry(
        Scaleform::Render::SKI_MaskStart *this,
        Scaleform::Render::HAL *hal,
        void *__formal,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::MaskBundle *v7; // rax
  Scaleform::Render::Bundle *v8; // rax
  Scaleform::Render::Bundle *v9; // rbx
  int v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !p->pBundle.pObject )
  {
    v11 = 67;
    v7 = (Scaleform::Render::MaskBundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                            Scaleform::Memory::pGlobalHeap,
                                            tr,
                                            104i64,
                                            &v11);
    if ( v7 )
    {
      Scaleform::Render::MaskBundle::MaskBundle(v7, hal);
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

bool __fastcall Scaleform::Render::SKI_Primitive::UpdateBundleEntry(
        Scaleform::Render::SKI_Primitive *this,
        Scaleform::Render::HAL *hal,
        void *d,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::TreeCacheRoot *v8; // r14
  Scaleform::Render::Bundle *v9; // rax
  Scaleform::Render::Bundle *v10; // rbx
  int v12; // [rsp+58h] [rbp+20h] BYREF

  if ( !p->pBundle.pObject )
  {
    Scaleform::Render::SKI_Primitive::Instance.AddRef(&Scaleform::Render::SKI_Primitive::Instance, d);
    v8 = tr;
    v12 = 67;
    v9 = (Scaleform::Render::Bundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        tr,
                                        152i64,
                                        &v12);
    v10 = v9;
    if ( v9 )
    {
      v9->RefCount = 1;
      v9->__vftable = (Scaleform::Render::Bundle_vtbl *)&Scaleform::Render::Bundle::`vftable';
      v9->Entries.Data.Data = 0i64;
      v9->Entries.Data.Size = 0i64;
      v9->Entries.Data.Policy.Capacity = 0i64;
      v9->NeedUpdate = 1;
      v9->FrameId = 0;
      Scaleform::Render::Bundle::UpdateChain(v9, hal, 0i64);
      v10->NeedUpdate = 1;
      v10->__vftable = (Scaleform::Render::Bundle_vtbl *)&Scaleform::Render::PrimitiveBundle::`vftable';
      v10[1].__vftable = (Scaleform::Render::Bundle_vtbl *)v8;
      Scaleform::Render::Primitive::Primitive(
        (Scaleform::Render::Primitive *)&v10[1].RefCount,
        (Scaleform::Render::PrimitiveFill *)d);
    }
    else
    {
      v10 = 0i64;
    }
    Scaleform::Render::BundleEntry::SetBundle(p, v10, 0i64);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
    Scaleform::Render::SKI_Primitive::Instance.Release(&Scaleform::Render::SKI_Primitive::Instance, d);
  }
  return p->pBundle.pObject != 0i64;
}

bool __fastcall Scaleform::Render::SKI_ProjectionMatrix3D::UpdateBundleEntry(
        Scaleform::Render::SKI_ProjectionMatrix3D *this,
        Scaleform::Render::HAL *hal,
        void *d,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::ProjectionMatrix3DBundle *v8; // rax
  Scaleform::Render::Bundle *v9; // rax
  Scaleform::Render::Bundle *v10; // rbx
  int v12; // [rsp+48h] [rbp+20h] BYREF

  if ( !p->pBundle.pObject )
  {
    v12 = 67;
    v8 = (Scaleform::Render::ProjectionMatrix3DBundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          tr,
                                                          176i64,
                                                          &v12);
    if ( v8 )
    {
      Scaleform::Render::ProjectionMatrix3DBundle::ProjectionMatrix3DBundle(
        v8,
        hal,
        (Scaleform::Render::Matrix4x4Ref<float> *)d);
      v10 = v9;
    }
    else
    {
      v10 = 0i64;
    }
    Scaleform::Render::BundleEntry::SetBundle(p, v10, 0i64);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
  }
  return p->pBundle.pObject != 0i64;
}

bool __fastcall Scaleform::Render::SKI_UserData::UpdateBundleEntry(
        Scaleform::Render::SKI_UserData *this,
        Scaleform::Render::HAL *hal,
        void *d,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::UserDataBundle *v8; // rax
  Scaleform::Render::Bundle *v9; // rax
  Scaleform::Render::Bundle *v10; // rbx
  int v12; // [rsp+48h] [rbp+20h] BYREF

  if ( !p->pBundle.pObject )
  {
    v12 = 67;
    v8 = (Scaleform::Render::UserDataBundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                Scaleform::Memory::pGlobalHeap,
                                                tr,
                                                88i64,
                                                &v12);
    if ( v8 )
    {
      Scaleform::Render::UserDataBundle::UserDataBundle(v8, hal, (Scaleform::Render::UserDataState::Data *)d);
      v10 = v9;
    }
    else
    {
      v10 = 0i64;
    }
    Scaleform::Render::BundleEntry::SetBundle(p, v10, 0i64);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
  }
  return p->pBundle.pObject != 0i64;
}

bool __fastcall Scaleform::Render::SKI_ViewMatrix3D::UpdateBundleEntry(
        Scaleform::Render::SKI_ViewMatrix3D *this,
        Scaleform::Render::HAL *hal,
        void *d,
        Scaleform::Render::BundleEntry *p,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::ViewMatrix3DBundle *v8; // rax
  Scaleform::Render::Bundle *v9; // rax
  Scaleform::Render::Bundle *v10; // rbx
  int v12; // [rsp+48h] [rbp+20h] BYREF

  if ( !p->pBundle.pObject )
  {
    v12 = 67;
    v8 = (Scaleform::Render::ViewMatrix3DBundle *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    tr,
                                                    160i64,
                                                    &v12);
    if ( v8 )
    {
      Scaleform::Render::ViewMatrix3DBundle::ViewMatrix3DBundle(v8, hal, (Scaleform::Render::Matrix3x4Ref<float> *)d);
      v10 = v9;
    }
    else
    {
      v10 = 0i64;
    }
    Scaleform::Render::BundleEntry::SetBundle(p, v10, 0i64);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
  }
  return p->pBundle.pObject != 0i64;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

void __fastcall Scaleform::Render::ComplexPrimitiveBundle::UpdateMesh(
        Scaleform::Render::ComplexPrimitiveBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntry *entry)
{
  Scaleform::Render::TreeCacheNode *pSourceNode; // rcx
  Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *v7; // rbx
  Scaleform::RefCountVImpl *v8; // rax
  Scaleform::RefCountVImpl *v9; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int64 pindex; // [rsp+48h] [rbp+20h] BYREF

  if ( Scaleform::Render::Bundle::findEntryIndex(this, &pindex, entry) )
  {
    pSourceNode = entry->pSourceNode;
    v7 = &this->Instances.Data.Data[pindex];
    v8 = (Scaleform::RefCountVImpl *)((__int64 (__fastcall *)(Scaleform::Render::TreeCacheNode *, Scaleform::Render::HAL *))pSourceNode->__vftable[1].HandleChanges)(
                                       pSourceNode,
                                       hal);
    v9 = v8;
    if ( v8 )
      Scaleform::Render::RenderBuffer::AddRef(v8);
    pObject = (Scaleform::RefCountVImpl *)v7->pMesh.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    v7->pMesh.pObject = (Scaleform::Render::ComplexMesh *)v9;
  }
}

void __fastcall Scaleform::Render::PrimitiveBundle::UpdateMesh(
        Scaleform::Render::PrimitiveBundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntry *entry)
{
  Scaleform::Render::Mesh *v6; // rax
  unsigned __int64 pindex; // [rsp+48h] [rbp+20h] BYREF

  if ( Scaleform::Render::Bundle::findEntryIndex(this, &pindex, entry) )
  {
    v6 = (Scaleform::Render::Mesh *)((__int64 (__fastcall *)(Scaleform::Render::TreeCacheNode *, Scaleform::Render::HAL *))entry->pSourceNode->__vftable[1].HandleChanges)(
                                      entry->pSourceNode,
                                      hal);
    Scaleform::Render::Primitive::SetMesh(&this->Prim, pindex, v6);
  }
}

