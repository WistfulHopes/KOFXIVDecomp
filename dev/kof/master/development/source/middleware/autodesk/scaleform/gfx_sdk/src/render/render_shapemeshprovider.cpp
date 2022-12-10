#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_boundbox.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hittest.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"

class Scaleform::Render::MorphInterpolator :
	Scaleform::Render::ShapeDataInterface
{
public:
	MorphInterpolator(Scaleform::Render::MorphInterpolator &);
	MorphInterpolator(const Scaleform::Render::MorphInterpolator &);
	MorphInterpolator(Scaleform::Render::ShapeDataInterface *, Scaleform::Render::MorphShapeData *, float, const Scaleform::Render::ShapePosInfo &);
	virtual unsigned long GetFillStyleCount();
	virtual unsigned long GetStrokeStyleCount();
	virtual void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	virtual void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
	virtual unsigned long GetStartingPos();
	virtual Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	virtual Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
	virtual void SkipPathData(Scaleform::Render::ShapePosInfo *);
	virtual void Rewind();
private:
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> pShapeData; // 0x10
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> pMorphData; // 0x18
	float MorphRatio; // 0x20
	Scaleform::Render::ShapePosInfo Pos2; // 0x24
	Scaleform::Render::ShapePosInfo Pos2s; // 0x5C
public:
	virtual ~MorphInterpolator();
	Scaleform::Render::MorphInterpolator & operator=(Scaleform::Render::MorphInterpolator &);
	Scaleform::Render::MorphInterpolator & operator=(const Scaleform::Render::MorphInterpolator &);
};
unsigned long Scaleform::Render::MorphInterpolator::GetFillStyleCount(); // 0x14034F970
unsigned long Scaleform::Render::MorphInterpolator::GetStrokeStyleCount(); // 0x14034FC20
void Scaleform::Render::MorphInterpolator::GetFillStyle(unsigned long idx, Scaleform::Render::FillStyleType * f1); // 0x14034F8B0
void Scaleform::Render::MorphInterpolator::GetStrokeStyle(unsigned long idx, Scaleform::Render::StrokeStyleType * s1); // 0x14034FA60
unsigned long Scaleform::Render::MorphInterpolator::GetStartingPos(); // 0x14034FA20
Scaleform::Render::ShapePathType Scaleform::Render::MorphInterpolator::ReadPathInfo(Scaleform::Render::ShapePosInfo * pos1, float * coord1, unsigned long * styles1); // 0x1403505D0
Scaleform::Render::PathEdgeType Scaleform::Render::MorphInterpolator::ReadEdge(Scaleform::Render::ShapePosInfo * pos1, float * coord1); // 0x1403504A0
void Scaleform::Render::MorphInterpolator::SkipPathData(Scaleform::Render::ShapePosInfo * pos1); // 0x140350AE0
void Scaleform::Render::MorphInterpolator::Rewind(); // 0x140350970
Scaleform::Render::MorphShapeData::MorphShapeData(Scaleform::Render::ShapeDataInterface * morphTo); // 0x14034E390
Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(Scaleform::Render::ShapeDataInterface * shape, Scaleform::Render::ShapeDataInterface * shapeMorph); // 0x14034E4C0
Scaleform::Render::MorphShapeData::~MorphShapeData(); // 0x14034E5E0
Scaleform::Render::ShapeMeshProvider::~ShapeMeshProvider(); // 0x14034E670
void Scaleform::Render::ShapeMeshProvider::AttachShape(Scaleform::Render::ShapeDataInterface * shape, Scaleform::Render::ShapeDataInterface * shapeMorph); // 0x14034E9E0
void Scaleform::Render::ShapeMeshProvider::createMorphData(); // 0x140353DB0
void Scaleform::Render::ShapeMeshProvider::countComplexFills(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> & paths, unsigned long long i1, unsigned long long i2, Scaleform::Render::ShapeMeshProvider::DrawLayerType * dl); // 0x140353610
void Scaleform::Render::ShapeMeshProvider::createDrawLayers(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> & paths, unsigned long long i1, unsigned long long i2); // 0x140353970
void Scaleform::Render::ShapeMeshProvider::acquireShapeData(); // 0x1403511A0
bool Scaleform::Render::ShapeMeshProvider::checkI9gMergedSlice(); // 0x140353240
bool Scaleform::Render::ShapeMeshProvider::checkI9gLayer(const Scaleform::Render::ShapeMeshProvider::DrawLayerType & dl); // 0x1403530D0
void Scaleform::Render::ShapeMeshProvider::GetStrokeStyle(unsigned long idx, Scaleform::Render::StrokeStyleType * s1, float morphRatio); // 0x14034FB40
void Scaleform::Render::ShapeMeshProvider::addFill(Scaleform::Render::MeshGenerator * gen, const Scaleform::Render::ToleranceParams & param, const Scaleform::Render::TransformerBase * tr, unsigned long startPos, float morphRatio); // 0x140351F40
void Scaleform::Render::ShapeMeshProvider::addToStrokeSorter(Scaleform::Render::MeshGenerator * gen, const Scaleform::Render::ToleranceParams & param, const Scaleform::Render::TransformerBase * tr, unsigned long startPos, unsigned long strokeStyleIdx, float snapOffset, float morphRatio); // 0x140352B60
void Scaleform::Render::ShapeMeshProvider::addStroke(Scaleform::Render::MeshGenerator * gen, Scaleform::Render::TessBase * stroker, const Scaleform::Render::ToleranceParams & param, const Scaleform::Render::TransformerBase * tr, unsigned long startPos, unsigned long strokeStyleIdx, float snapOffset, float morphRatio); // 0x140352880
void Scaleform::Render::ShapeMeshProvider::addStroke(Scaleform::Render::MeshGenerator * gen, const Scaleform::Render::ToleranceParams & param, const Scaleform::Render::TransformerBase * tr, unsigned long startPos, unsigned long strokeStyleIdx, float snapOffset, float morphRatio); // 0x1403525A0
bool Scaleform::Render::ShapeMeshProvider::createNullMesh(Scaleform::Render::VertexOutput * pout, unsigned long drawLayer, unsigned long meshGenFlags); // 0x140354D50
bool Scaleform::Render::ShapeMeshProvider::acquireTessMeshes(Scaleform::Render::TessBase * tess, const Scaleform::Render::Matrix2x4<float> & mtx, Scaleform::Render::VertexOutput * pout, unsigned long drawLayerIdx, unsigned long strokeStyleIdx, unsigned long meshGenFlags, float morphRatio); // 0x1403515B0
class Scaleform::ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2>
{
	struct ValueType;
private:
	ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2>(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2> &);
public:
	ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2>();
	void Clear();
	void PushBack(const Scaleform::Render::VertexOutput::Fill &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	Scaleform::Render::VertexOutput::Fill & operator[](unsigned long long);
	const Scaleform::Render::VertexOutput::Fill & operator[](unsigned long long);
	Scaleform::Render::VertexOutput::Fill & At(unsigned long long);
	const Scaleform::Render::VertexOutput::Fill & At(unsigned long long);
	Scaleform::Render::VertexOutput::Fill ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2> & operator=(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	Scaleform::Render::VertexOutput::Fill Static[16]; // 0x18
	Scaleform::Render::VertexOutput::Fill * Data; // 0x218
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayStaticBuffPOD<unsigned int,16,2>
{
	typedef unsigned long ValueType;
private:
	ArrayStaticBuffPOD<unsigned int,16,2>(const Scaleform::ArrayStaticBuffPOD<unsigned int,16,2> &);
public:
	ArrayStaticBuffPOD<unsigned int,16,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<unsigned int,16,2>();
	void Clear();
	void PushBack(const unsigned long &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	unsigned long & operator[](unsigned long long);
	const unsigned long & operator[](unsigned long long);
	unsigned long & At(unsigned long long);
	const unsigned long & At(unsigned long long);
	unsigned long ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<unsigned int,16,2> & operator=(const Scaleform::ArrayStaticBuffPOD<unsigned int,16,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	unsigned long Static[16]; // 0x18
	unsigned long * Data; // 0x58
public:
	void __dflt_ctor_closure();
};
const unsigned char Scaleform::Render::Factors[4]; // 0x140749AD0
bool Scaleform::Render::ShapeMeshProvider::tessellateFill(Scaleform::Render::HAL * hal, const Scaleform::Render::Scale9GridInfo * s9g, unsigned long drawLayerIdx, Scaleform::Render::MeshBase * pmesh, Scaleform::Render::VertexOutput * pout, unsigned long meshGenFlags); // 0x140355500
class Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > :
	Scaleform::Render::TransformerBase
{
public:
	const Scaleform::Render::Matrix2x4<float> * Tr; // 0x8
	TransformerWrapper<Scaleform::Render::Matrix2x4<float> >(Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > &);
	TransformerWrapper<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > &);
	TransformerWrapper<Scaleform::Render::Matrix2x4<float> >(const Scaleform::Render::Matrix2x4<float> *);
	TransformerWrapper<Scaleform::Render::Matrix2x4<float> >();
	virtual void Transform(float *, float *);
	virtual float GetScale();
	virtual float GetXScale();
	virtual float GetYScale();
	virtual ~TransformerWrapper<Scaleform::Render::Matrix2x4<float> >();
	Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > & operator=(Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > &);
	Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > & operator=(const Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > &);
};
class Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> :
	Scaleform::Render::TransformerBase
{
public:
	const Scaleform::Render::Scale9GridInfo * Tr; // 0x8
	TransformerWrapper<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> &);
	TransformerWrapper<Scaleform::Render::Scale9GridInfo>(const Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> &);
	TransformerWrapper<Scaleform::Render::Scale9GridInfo>(const Scaleform::Render::Scale9GridInfo *);
	TransformerWrapper<Scaleform::Render::Scale9GridInfo>();
	virtual void Transform(float *, float *);
	virtual float GetScale();
	virtual float GetXScale();
	virtual float GetYScale();
	virtual ~TransformerWrapper<Scaleform::Render::Scale9GridInfo>();
	Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> & operator=(const Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> &);
};
bool Scaleform::Render::ShapeMeshProvider::tessellateStroke(Scaleform::Render::HAL * hal, const Scaleform::Render::Scale9GridInfo * s9g, unsigned long strokeStyleIdx, unsigned long drawLayerIdx, Scaleform::Render::MeshBase * pmesh, Scaleform::Render::VertexOutput * pout, unsigned long meshGenFlags); // 0x140355D50
Scaleform::Render::Rect<float> Scaleform::Render::ShapeMeshProvider::getLayerBounds(unsigned long drawLayer); // 0x1403552A0
bool Scaleform::Render::ShapeMeshProvider::generateImage9Grid(Scaleform::Render::HAL * hal, Scaleform::Render::Scale9GridInfo * s9g, Scaleform::Render::VertexOutput * verOut, unsigned long drawLayer); // 0x140354E40
bool Scaleform::Render::ShapeMeshProvider::GetData(Scaleform::Render::HAL * hal, Scaleform::Render::MeshBase * mesh, Scaleform::Render::VertexOutput * verOut, unsigned long meshGenFlags); // 0x14034F340
class Scaleform::Ptr<Scaleform::Render::Scale9GridInfo>
{
protected:
	Scaleform::Render::Scale9GridInfo * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Scale9GridInfo>(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::Scale9GridInfo *);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Ptr<Scaleform::Render::Scale9GridInfo>(Scaleform::Render::Scale9GridInfo &);
	Ptr<Scaleform::Render::Scale9GridInfo>();
	~Ptr<Scaleform::Render::Scale9GridInfo>();
	bool operator==(Scaleform::Render::Scale9GridInfo *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	bool operator!=(Scaleform::Render::Scale9GridInfo *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Render::Scale9GridInfo &);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(Scaleform::Render::Scale9GridInfo *);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & operator=(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Render::Scale9GridInfo &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(Scaleform::Render::Scale9GridInfo *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Scale9GridInfo * & GetRawRef();
	Scaleform::Render::Scale9GridInfo * GetPtr();
	Scaleform::Render::Scale9GridInfo & operator*();
	Scaleform::Render::Scale9GridInfo * operator->();
	Scaleform::Render::Scale9GridInfo * operator struct Scaleform::Render::Scale9GridInfo *();
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Render::Scale9GridInfo *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Pickable<Scaleform::Render::Scale9GridInfo>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> & Pick(Scaleform::Ptr<Scaleform::Render::Scale9GridInfo> &);
};
Scaleform::Render::ComplexFill * Scaleform::Render::ShapeMeshProvider::getComplexFill(unsigned long drawLayer, unsigned long fillIndex, unsigned long * imgFillStyle); // 0x1403551B0
Scaleform::Render::Matrix2x4<float> Scaleform::Render::ShapeMeshProvider::getMorphMatrix(unsigned long drawLayer, unsigned long fillIndex); // 0x1403553D0
unsigned long Scaleform::Render::ShapeMeshProvider::GetFillCount(unsigned long drawLayer, unsigned long meshGenFlags); // 0x14034F4A0
void Scaleform::Render::ShapeMeshProvider::GetFillData(Scaleform::Render::FillData * pdata, unsigned long drawLayer, unsigned long fillIndex, unsigned long meshGenFlags); // 0x14034F4B0
void Scaleform::Render::ShapeMeshProvider::computeImgAdjustMatrix(const Scaleform::Render::Scale9GridData * s9g, unsigned long drawLayer, unsigned long imgFillStyle, Scaleform::Render::Matrix2x4<float> * mtx); // 0x140353310
void Scaleform::Render::ShapeMeshProvider::GetFillMatrix(Scaleform::Render::HAL * hal, Scaleform::Render::MeshBase * mesh, Scaleform::Render::Matrix2x4<float> * matrix, unsigned long drawLayer, unsigned long fillIndex, unsigned long meshGenFlags); // 0x14034F620
Scaleform::Render::Rect<float> Scaleform::Render::ShapeMeshProvider::GetBounds(const Scaleform::Render::Matrix2x4<float> & m); // 0x14034ED50
Scaleform::Render::Rect<float> Scaleform::Render::ShapeMeshProvider::GetCorrectBounds(const Scaleform::Render::Matrix2x4<float> & m, float morphRatio, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams * tol); // 0x14034EFC0
bool Scaleform::Render::ShapeMeshProvider::HitTestShape(const Scaleform::Render::Matrix2x4<float> & m, float x, float y, float morphRatio, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams * tol, Scaleform::Render::Scale9GridInfo * s9g); // 0x14034FC90//decompilation failure at 140749AD0!
__int64 __fastcall Scaleform::Render::AddStrokeToSorter<Scaleform::Render::Matrix2x4<float>>(
        const Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapePosInfo *pos,
        unsigned int strokeStyleIdx,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::StrokeGenerator *gen)
{
  Scaleform::Render::StrokeSorter *p_mStrokeSorter; // r14
  char v10; // r12
  __int128 v11; // xmm6
  __int128 v12; // xmm7
  __int128 v13; // xmm8
  __int64 v14; // xmm9_8
  Scaleform::Render::ShapePathType i; // er15
  float v16; // xmm2_4
  Scaleform::Render::PathEdgeType j; // eax
  float v18; // xmm2_4
  float v19; // xmm11_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm9_4
  float v23; // xmm12_4
  float v24; // xmm10_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm11_4
  float v31; // xmm6_4
  BOOL y3; // [rsp+28h] [rbp-B1h]
  float v34; // [rsp+48h] [rbp-91h] BYREF
  float v35; // [rsp+4Ch] [rbp-8Dh]
  float v36; // [rsp+50h] [rbp-89h]
  float v37; // [rsp+54h] [rbp-85h]
  float x4; // [rsp+58h] [rbp-81h]
  float y4; // [rsp+5Ch] [rbp-7Dh]
  char v40[8]; // [rsp+60h] [rbp-79h] BYREF
  int v41; // [rsp+68h] [rbp-71h]

  p_mStrokeSorter = &gen->mStrokeSorter;
  v10 = 1;
  gen->mStrokeSorter.Clear(&gen->mStrokeSorter);
  v11 = *(_OWORD *)&pos->Pos;
  v12 = *(_OWORD *)&pos->LastY;
  v13 = *(_OWORD *)&pos->NumStrokeBits;
  v14 = *(_QWORD *)&pos->Sfactor;
  for ( i = shape->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, pos, &v34, (unsigned int *)v40);
        i;
        i = shape->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, pos, &v34, (unsigned int *)v40) )
  {
    if ( i == Shape_NewLayer && !v10 )
      break;
    if ( v41 == strokeStyleIdx )
    {
      v16 = (float)((float)(v35 * trans->M[1][1]) + (float)(v34 * trans->M[1][0])) + trans->M[1][3];
      v34 = (float)((float)(v34 * trans->M[0][0]) + (float)(v35 * trans->M[0][1])) + trans->M[0][3];
      v35 = v16;
      Scaleform::Render::StrokeSorter::AddVertexNV(p_mStrokeSorter, v34, v16, 1u);
      for ( j = shape->ReadEdge((Scaleform::Render::ShapeDataInterface *)shape, pos, &v34);
            j;
            j = shape->ReadEdge((Scaleform::Render::ShapeDataInterface *)shape, pos, &v34) )
      {
        switch ( j )
        {
          case Edge_LineTo:
            v18 = (float)((float)(v35 * trans->M[1][1]) + (float)(v34 * trans->M[1][0])) + trans->M[1][3];
            v34 = (float)((float)(v34 * trans->M[0][0]) + (float)(v35 * trans->M[0][1])) + trans->M[0][3];
            v35 = v18;
            Scaleform::Render::StrokeSorter::AddVertexNV(p_mStrokeSorter, v34, v18, 1u);
            break;
          case Edge_QuadTo:
            v19 = (float)((float)(trans->M[0][0] * v36) + (float)(trans->M[0][1] * v37)) + trans->M[0][3];
            v20 = (float)(trans->M[1][0] * v34) + (float)(trans->M[1][1] * v35);
            v21 = (float)(trans->M[1][0] * v36) + (float)(trans->M[1][1] * v37);
            v34 = (float)((float)(trans->M[0][0] * v34) + (float)(trans->M[0][1] * v35)) + trans->M[0][3];
            v36 = v19;
            v22 = v21 + trans->M[1][3];
            v35 = v20 + trans->M[1][3];
            v37 = v22;
            Scaleform::Render::StrokeSorter::AddQuad(p_mStrokeSorter, v34, v35, v19, v22);
            break;
          case Edge_CubicTo:
            v23 = trans->M[0][0];
            v24 = trans->M[1][1];
            v25 = trans->M[1][3];
            v26 = trans->M[0][3];
            v27 = trans->M[0][1] * y4;
            v28 = (float)(trans->M[0][0] * v36) + (float)(trans->M[0][1] * v37);
            v29 = trans->M[1][0] * v36;
            v30 = (float)((float)(v24 * v35) + (float)(trans->M[1][0] * v34)) + v25;
            v31 = trans->M[1][0] * x4;
            v34 = (float)((float)(trans->M[0][0] * v34) + (float)(trans->M[0][1] * v35)) + v26;
            v35 = v30;
            v36 = v28 + v26;
            x4 = (float)((float)(v23 * x4) + v27) + v26;
            v37 = (float)((float)(v24 * v37) + v29) + v25;
            y4 = (float)((float)(v24 * y4) + v31) + v25;
            Scaleform::Render::StrokeSorter::AddCubic(p_mStrokeSorter, v34, v30, v28 + v26, v37, x4, y4);
            break;
        }
      }
      LOBYTE(y3) = 0;
      p_mStrokeSorter->FinalizePath(p_mStrokeSorter, 0, 0, 0, y3);
    }
    else
    {
      shape->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, pos);
    }
    v11 = *(_OWORD *)&pos->Pos;
    v12 = *(_OWORD *)&pos->LastY;
    v10 = 0;
    v13 = *(_OWORD *)&pos->NumStrokeBits;
    v14 = *(_QWORD *)&pos->Sfactor;
  }
  *(_OWORD *)&pos->Pos = v11;
  *(_OWORD *)&pos->LastY = v12;
  *(_OWORD *)&pos->NumStrokeBits = v13;
  *(_QWORD *)&pos->Sfactor = v14;
  Scaleform::Render::StrokeSorter::Sort(p_mStrokeSorter);
  return (unsigned int)i;
}

__int64 __fastcall Scaleform::Render::AddStrokeToSorter<Scaleform::Render::TransformerBase>(
        const Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapePosInfo *pos,
        unsigned int strokeStyleIdx,
        const Scaleform::Render::TransformerBase *trans,
        Scaleform::Render::StrokeGenerator *gen)
{
  Scaleform::Render::StrokeSorter *p_mStrokeSorter; // rsi
  char v10; // r12
  __int128 v11; // xmm6
  __int128 v12; // xmm7
  __int128 v13; // xmm8
  __int64 v14; // xmm9_8
  Scaleform::Render::ShapePathType i; // er15
  Scaleform::Render::PathEdgeType j; // eax
  BOOL y3; // [rsp+28h] [rbp-71h]
  float x; // [rsp+48h] [rbp-51h] BYREF
  float y; // [rsp+4Ch] [rbp-4Dh] BYREF
  float x3; // [rsp+50h] [rbp-49h] BYREF
  float v22; // [rsp+54h] [rbp-45h] BYREF
  float x4; // [rsp+58h] [rbp-41h] BYREF
  float y4; // [rsp+5Ch] [rbp-3Dh] BYREF
  char v25[8]; // [rsp+60h] [rbp-39h] BYREF
  int v26; // [rsp+68h] [rbp-31h]

  p_mStrokeSorter = &gen->mStrokeSorter;
  v10 = 1;
  gen->mStrokeSorter.Clear(&gen->mStrokeSorter);
  v11 = *(_OWORD *)&pos->Pos;
  v12 = *(_OWORD *)&pos->LastY;
  v13 = *(_OWORD *)&pos->NumStrokeBits;
  v14 = *(_QWORD *)&pos->Sfactor;
  for ( i = shape->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, pos, &x, (unsigned int *)v25);
        i;
        i = shape->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, pos, &x, (unsigned int *)v25) )
  {
    if ( i == Shape_NewLayer && !v10 )
      break;
    if ( v26 == strokeStyleIdx )
    {
      trans->Transform((Scaleform::Render::TransformerBase *)trans, &x, &y);
      Scaleform::Render::StrokeSorter::AddVertexNV(p_mStrokeSorter, x, y, 1u);
      for ( j = shape->ReadEdge((Scaleform::Render::ShapeDataInterface *)shape, pos, &x);
            j;
            j = shape->ReadEdge((Scaleform::Render::ShapeDataInterface *)shape, pos, &x) )
      {
        switch ( j )
        {
          case Edge_LineTo:
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x, &y);
            Scaleform::Render::StrokeSorter::AddVertexNV(p_mStrokeSorter, x, y, 1u);
            break;
          case Edge_QuadTo:
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x, &y);
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x3, &v22);
            Scaleform::Render::StrokeSorter::AddQuad(p_mStrokeSorter, x, y, x3, v22);
            break;
          case Edge_CubicTo:
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x, &y);
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x3, &v22);
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x4, &y4);
            Scaleform::Render::StrokeSorter::AddCubic(p_mStrokeSorter, x, y, x3, v22, x4, y4);
            break;
        }
      }
      LOBYTE(y3) = 0;
      p_mStrokeSorter->FinalizePath(p_mStrokeSorter, 0, 0, 0, y3);
    }
    else
    {
      shape->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, pos);
    }
    v11 = *(_OWORD *)&pos->Pos;
    v12 = *(_OWORD *)&pos->LastY;
    v10 = 0;
    v13 = *(_OWORD *)&pos->NumStrokeBits;
    v14 = *(_QWORD *)&pos->Sfactor;
  }
  *(_OWORD *)&pos->Pos = v11;
  *(_OWORD *)&pos->LastY = v12;
  *(_OWORD *)&pos->NumStrokeBits = v13;
  *(_QWORD *)&pos->Sfactor = v14;
  Scaleform::Render::StrokeSorter::Sort(p_mStrokeSorter);
  return (unsigned int)i;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ComputeBoundsFillAndStrokesSimplified<Scaleform::Render::Matrix2x4<float>>(
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::BoundEdges edgesToCheck)
{
  result->x1 = 1.0e30;
  result->y1 = 1.0e30;
  result->x2 = -1.0e30;
  result->y2 = -1.0e30;
  Scaleform::Render::ExpandBoundsToFill<Scaleform::Render::Matrix2x4<float>>(shape, trans, result, edgesToCheck);
  if ( shape->GetStrokeStyleCount((Scaleform::Render::ShapeDataInterface *)shape) )
  {
    shape->Rewind((Scaleform::Render::ShapeDataInterface *)shape);
    Scaleform::Render::ExpandBoundsToStrokesSimplified<Scaleform::Render::Matrix2x4<float>>(shape, trans, result);
  }
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ComputeBoundsRoundStroke<Scaleform::Render::Matrix2x4<float>>(
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        unsigned int *styles)
{
  Scaleform::Render::ShapeDataInterface_vtbl *v8; // r9
  __int64 v11; // rdx
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm6_4
  float x2; // xmm3_4
  float y2; // xmm1_4
  float y1; // xmm0_4
  float v19; // xmm6_4
  float v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+38h] [rbp-40h]
  Scaleform::RefCountVImpl *v23[2]; // [rsp+48h] [rbp-30h]

  result->x1 = 1.0e30;
  v8 = shape->__vftable;
  result->y1 = 1.0e30;
  result->x2 = -1.0e30;
  result->y2 = -1.0e30;
  v11 = styles[2];
  *(_OWORD *)v23 = 0i64;
  v8->GetStrokeStyle((Scaleform::Render::ShapeDataInterface *)shape, v11, (Scaleform::Render::StrokeStyleType *)&v21);
  v12 = *(float *)&FLOAT_1_0;
  v13 = v22 & 6;
  if ( (v22 & 6) == 0 )
  {
    v14 = (float)((float)((float)(trans->M[0][1] * 0.70710677) + (float)(trans->M[0][0] * 0.70710677))
                * (float)((float)(trans->M[0][1] * 0.70710677) + (float)(trans->M[0][0] * 0.70710677)))
        + (float)((float)((float)(trans->M[1][1] * 0.70710677) + (float)(trans->M[1][0] * 0.70710677))
                * (float)((float)(trans->M[1][1] * 0.70710677) + (float)(trans->M[1][0] * 0.70710677)));
    goto LABEL_7;
  }
  if ( v13 == 2 )
  {
    v14 = (float)(trans->M[0][0] * trans->M[0][0]) + (float)(trans->M[1][0] * trans->M[1][0]);
    goto LABEL_7;
  }
  if ( v13 == 4 )
  {
    v14 = (float)(trans->M[0][1] * trans->M[0][1]) + (float)(trans->M[1][1] * trans->M[1][1]);
LABEL_7:
    v12 = sqrtf(v14);
  }
  v15 = v21 * v12;
  Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(shape, trans, pos, coord, result);
  x2 = result->x2;
  if ( x2 >= result->x1 )
  {
    y2 = result->y2;
    y1 = result->y1;
    if ( y2 >= y1 )
    {
      v19 = v15 * 0.5;
      result->x1 = result->x1 - v19;
      result->y1 = y1 - v19;
      result->x2 = x2 + v19;
      result->y2 = y2 + v19;
    }
  }
  if ( v23[1] )
    Scaleform::RefCountImpl::Release(v23[1]);
  if ( v23[0] )
    Scaleform::RefCountImpl::Release(v23[0]);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ComputeBoundsRoundStrokeSorter<Scaleform::Render::Matrix2x4<float>>(
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapePosInfo *pos,
        unsigned int strokeStyleIdx,
        const Scaleform::Render::Matrix2x4<float> *trans,
        float scaledWidth,
        Scaleform::Render::StrokeGenerator *gen)
{
  const Scaleform::Render::Matrix2x4<float> *v8; // r9
  Scaleform::Render::StrokeGenerator *v10; // r13
  unsigned int Size; // eax
  Scaleform::Render::StrokeSorter::PathType **Pages; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 v16; // r15
  float v17; // xmm9_4
  float v18; // xmm8_4
  unsigned int v19; // esi
  unsigned int v20; // ecx
  Scaleform::Render::StrokeSorter::PathType *v21; // r8
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int8 v25; // al
  unsigned int v26; // ecx
  float v27; // xmm6_4
  Scaleform::Render::StrokeSorter::PathType *v28; // r8
  unsigned int v29; // edx
  unsigned __int64 v30; // rcx
  float *p_x; // rdx
  float v32; // xmm7_4
  float v33; // xmm0_4
  float v34; // xmm5_4
  float v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm5_4
  float v43; // xmm0_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float x2; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  unsigned int v54; // ecx
  float v55; // xmm14_4
  Scaleform::Render::StrokeSorter::PathType *v56; // r8
  unsigned int v57; // edx
  unsigned __int64 v58; // rcx
  unsigned int v59; // esi
  float *v60; // rbp
  unsigned int v61; // ecx
  float v62; // xmm15_4
  Scaleform::Render::StrokeSorter::PathType *v63; // r8
  unsigned int v64; // edx
  unsigned __int64 v65; // rcx
  float *v66; // r14
  float v67; // xmm13_4
  float v68; // xmm12_4
  float v69; // xmm3_4
  float v70; // xmm7_4
  float v71; // xmm1_4
  float v72; // xmm5_4
  float v73; // xmm0_4
  float v74; // xmm4_4
  float x1; // xmm0_4
  float v76; // xmm2_4
  float v77; // xmm12_4
  float v78; // xmm3_4
  float v79; // xmm7_4
  float v80; // xmm1_4
  float v81; // xmm5_4
  float v82; // xmm0_4
  float v83; // xmm4_4
  float v84; // xmm0_4
  float v85; // xmm2_4
  float v86; // xmm6_4
  float v87; // xmm12_4
  float v88; // xmm14_4
  float v89; // xmm7_4
  float v90; // xmm5_4
  float v91; // xmm4_4
  float v92; // xmm0_4
  float v93; // xmm3_4
  float v94; // xmm0_4
  float v95; // xmm2_4
  float v96; // xmm7_4
  float v97; // xmm5_4
  float v98; // xmm4_4
  float v99; // xmm0_4
  float v100; // xmm3_4
  float v101; // xmm0_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm0_4
  float v105; // xmm0_4
  float y2; // xmm1_4
  float v107; // xmm2_4
  Scaleform::Render::Rect<float> *v108; // rax
  float v109; // xmm4_4
  float y1; // xmm3_4
  float v111; // xmm3_4
  float v112; // xmm2_4
  float v113; // xmm4_4
  unsigned int v114; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v115; // [rsp+38h] [rbp-E0h]
  __int64 Size_low; // [rsp+40h] [rbp-D8h]
  float t2; // [rsp+120h] [rbp+8h] BYREF

  result->x1 = 1.0e30;
  v8 = trans;
  result->y1 = 1.0e30;
  result->x2 = -1.0e30;
  result->y2 = -1.0e30;
  v10 = gen;
  Scaleform::Render::AddStrokeToSorter<Scaleform::Render::Matrix2x4<float>>(shape, pos, strokeStyleIdx, v8, gen);
  Size = v10->mStrokeSorter.OutPaths.Size;
  if ( !Size )
    goto LABEL_42;
  Pages = v10->mStrokeSorter.OutPaths.Pages;
  v13 = 0i64;
  v14 = Size;
  v115 = 0i64;
  Size_low = LODWORD(v10->mStrokeSorter.OutPaths.Size);
  do
  {
    v15 = v13 >> 4;
    v16 = v13 & 0xF;
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0;
    v114 = Pages[v13 >> 4][v16].numVer & 0xFFFFFFF;
    if ( !v114 )
      goto LABEL_41;
    do
    {
      v20 = v19;
      v21 = v10->mStrokeSorter.OutPaths.Pages[v15];
      v22 = v21[v16].numVer & 0xFFFFFFF;
      if ( v19 >= v22 )
        v20 = v19 - v22;
      v23 = v21[v16].start + v20;
      ++v19;
      v24 = (__int64)&v10->mStrokeSorter.OutVertices.Pages[v23 >> 4][v23 & 0xF];
      v25 = *(_BYTE *)(v24 + 12);
      if ( v25 < 2u )
      {
        v18 = *(float *)(v24 + 4);
        v17 = *(float *)v24;
        v105 = fminf(result->x1, *(float *)v24);
        result->y1 = fminf(result->y1, v18);
        y2 = result->y2;
        result->x1 = v105;
        v53 = fmaxf(y2, v18);
        v52 = fmaxf(result->x2, v17);
      }
      else if ( v25 == 2 )
      {
        v26 = v19;
        v27 = *(float *)v24;
        v28 = v10->mStrokeSorter.OutPaths.Pages[v15];
        v29 = v28[v16].numVer & 0xFFFFFFF;
        if ( v19 >= v29 )
          v26 = v19 - v29;
        v30 = v28[v16].start + v26;
        ++v19;
        p_x = &v10->mStrokeSorter.OutVertices.Pages[v30 >> 4][v30 & 0xF].x;
        v32 = *p_x;
        v33 = (float)((float)(v27 + v27) - v17) - *p_x;
        if ( v33 != 0.0 )
        {
          v34 = (float)(v27 - v17) / v33;
          if ( v34 > 0.0 && v34 < 1.0 )
          {
            v35 = (float)((float)(*(float *)(v24 + 4) - v18) * v34) + v18;
            v36 = (float)((float)((float)((float)((float)(p_x[1] - *(float *)(v24 + 4)) * v34) + *(float *)(v24 + 4))
                                - v35)
                        * v34)
                + v35;
            v37 = (float)((float)((float)((float)((float)(v32 - v27) * v34) + v27)
                                - (float)((float)((float)(v27 - v17) * v34) + v17))
                        * v34)
                + (float)((float)((float)(v27 - v17) * v34) + v17);
            v38 = fminf(result->x1, v37);
            result->y1 = fminf(result->y1, v36);
            v39 = result->y2;
            result->x1 = v38;
            v40 = fmaxf(result->x2, v37);
            result->y2 = fmaxf(v39, v36);
            result->x2 = v40;
          }
        }
        v41 = *(float *)(v24 + 4);
        v42 = p_x[1];
        v43 = (float)((float)(v41 + v41) - v18) - v42;
        if ( v43 != 0.0 )
        {
          v44 = (float)(v41 - v18) / v43;
          if ( v44 > 0.0 && v44 < 1.0 )
          {
            v45 = (float)((float)((float)((float)((float)(v42 - v41) * v44) + v41)
                                - (float)((float)((float)(v41 - v18) * v44) + v18))
                        * v44)
                + (float)((float)((float)(v41 - v18) * v44) + v18);
            v46 = (float)((float)((float)((float)((float)(v32 - v27) * v44) + v27)
                                - (float)((float)((float)(v27 - v17) * v44) + v17))
                        * v44)
                + (float)((float)((float)(v27 - v17) * v44) + v17);
            v47 = fminf(result->x1, v46);
            result->y1 = fminf(result->y1, v45);
            v48 = fmaxf(result->y2, v45);
            result->x1 = v47;
            v49 = fmaxf(result->x2, v46);
            result->y2 = v48;
            result->x2 = v49;
          }
        }
        v17 = v32;
        v50 = fminf(result->y1, v42);
        v18 = v42;
        result->x1 = fminf(result->x1, v32);
        x2 = result->x2;
        result->y1 = v50;
        v52 = fmaxf(x2, v32);
        v53 = fmaxf(result->y2, v42);
      }
      else
      {
        if ( v25 != 3 )
          continue;
        v54 = v19;
        v55 = *(float *)v24;
        v56 = v10->mStrokeSorter.OutPaths.Pages[v15];
        v57 = v56[v16].numVer & 0xFFFFFFF;
        if ( v19 >= v57 )
          v54 = v19 - v57;
        v58 = v56[v16].start + v54;
        v59 = v19 + 1;
        v60 = &v10->mStrokeSorter.OutVertices.Pages[v58 >> 4][v58 & 0xF].x;
        v61 = v59;
        v62 = *v60;
        v63 = v10->mStrokeSorter.OutPaths.Pages[v15];
        v64 = v63[v16].numVer & 0xFFFFFFF;
        if ( v59 >= v64 )
          v61 = v59 - v64;
        v65 = v63[v16].start + v61;
        v19 = v59 + 1;
        v66 = &v10->mStrokeSorter.OutVertices.Pages[v65 >> 4][v65 & 0xF].x;
        v67 = *v66;
        Scaleform::Render::Math2D::CubicCurveExtremum(v17, *(float *)v24, *v60, *v66, (float *)&gen, &t2);
        v68 = *(float *)&gen;
        if ( *(float *)&gen > 0.0 && *(float *)&gen < 1.0 )
        {
          v69 = *(float *)(v24 + 4);
          v70 = (float)((float)(v62 - v55) * *(float *)&gen) + v55;
          v71 = (float)((float)(v60[1] - v69) * *(float *)&gen) + v69;
          v72 = (float)((float)(v70 - (float)((float)((float)(v55 - v17) * *(float *)&gen) + v17)) * *(float *)&gen)
              + (float)((float)((float)(v55 - v17) * *(float *)&gen) + v17);
          v73 = (float)((float)(v71 - (float)((float)((float)(v69 - v18) * *(float *)&gen) + v18)) * *(float *)&gen)
              + (float)((float)((float)(v69 - v18) * *(float *)&gen) + v18);
          v74 = (float)((float)((float)((float)((float)((float)((float)((float)(v66[1] - v60[1]) * *(float *)&gen)
                                                              + v60[1])
                                                      - v71)
                                              * *(float *)&gen)
                                      + v71)
                              - v73)
                      * *(float *)&gen)
              + v73;
          x1 = result->x1;
          result->y1 = fminf(result->y1, v74);
          result->y2 = fmaxf(result->y2, v74);
          v76 = (float)((float)((float)((float)((float)((float)((float)((float)(v67 - v62) * v68) + v62) - v70) * v68)
                                      + v70)
                              - v72)
                      * v68)
              + v72;
          result->x1 = fminf(x1, v76);
          result->x2 = fmaxf(result->x2, v76);
        }
        v77 = t2;
        if ( t2 > 0.0 && t2 < 1.0 )
        {
          v78 = *(float *)(v24 + 4);
          v79 = (float)((float)(v62 - v55) * t2) + v55;
          v80 = (float)((float)(v60[1] - v78) * t2) + v78;
          v81 = (float)((float)(v79 - (float)((float)((float)(v55 - v17) * t2) + v17)) * t2)
              + (float)((float)((float)(v55 - v17) * t2) + v17);
          v82 = (float)((float)(v80 - (float)((float)((float)(v78 - v18) * t2) + v18)) * t2)
              + (float)((float)((float)(v78 - v18) * t2) + v18);
          v83 = (float)((float)((float)((float)((float)((float)((float)((float)(v66[1] - v60[1]) * t2) + v60[1]) - v80)
                                              * t2)
                                      + v80)
                              - v82)
                      * t2)
              + v82;
          v84 = result->x1;
          result->y1 = fminf(result->y1, v83);
          result->y2 = fmaxf(result->y2, v83);
          v85 = (float)((float)((float)((float)((float)((float)((float)((float)(v67 - v62) * v77) + v62) - v79) * v77)
                                      + v79)
                              - v81)
                      * v77)
              + v81;
          result->x1 = fminf(v84, v85);
          result->x2 = fmaxf(result->x2, v85);
        }
        v86 = v66[1];
        v87 = v60[1];
        v88 = *(float *)(v24 + 4);
        Scaleform::Render::Math2D::CubicCurveExtremum(v18, v88, v87, v86, (float *)&gen, &t2);
        v89 = *(float *)&gen;
        if ( *(float *)&gen > 0.0 && *(float *)&gen < 1.0 )
        {
          v90 = (float)((float)(v62 - *(float *)v24) * *(float *)&gen) + *(float *)v24;
          v91 = (float)((float)(v90 - (float)((float)((float)(*(float *)v24 - v17) * *(float *)&gen) + v17))
                      * *(float *)&gen)
              + (float)((float)((float)(*(float *)v24 - v17) * *(float *)&gen) + v17);
          v92 = (float)((float)((float)((float)((float)(v87 - v88) * *(float *)&gen) + v88)
                              - (float)((float)((float)(v88 - v18) * *(float *)&gen) + v18))
                      * *(float *)&gen)
              + (float)((float)((float)(v88 - v18) * *(float *)&gen) + v18);
          v93 = (float)((float)((float)((float)((float)((float)((float)((float)(v86 - v87) * *(float *)&gen) + v87)
                                                      - (float)((float)((float)(v87 - v88) * *(float *)&gen) + v88))
                                              * *(float *)&gen)
                                      + (float)((float)((float)(v87 - v88) * *(float *)&gen) + v88))
                              - v92)
                      * *(float *)&gen)
              + v92;
          v94 = result->x1;
          result->y1 = fminf(result->y1, v93);
          result->y2 = fmaxf(result->y2, v93);
          v95 = (float)((float)((float)((float)((float)((float)((float)((float)(v67 - v62) * v89) + v62) - v90) * v89)
                                      + v90)
                              - v91)
                      * v89)
              + v91;
          result->x1 = fminf(v94, v95);
          result->x2 = fmaxf(result->x2, v95);
        }
        v96 = t2;
        if ( t2 > 0.0 && t2 < 1.0 )
        {
          v97 = (float)((float)(v62 - *(float *)v24) * t2) + *(float *)v24;
          v98 = (float)((float)(v97 - (float)((float)((float)(*(float *)v24 - v17) * t2) + v17)) * t2)
              + (float)((float)((float)(*(float *)v24 - v17) * t2) + v17);
          v99 = (float)((float)((float)((float)((float)(v87 - v88) * t2) + v88)
                              - (float)((float)((float)(v88 - v18) * t2) + v18))
                      * t2)
              + (float)((float)((float)(v88 - v18) * t2) + v18);
          v100 = (float)((float)((float)((float)((float)((float)((float)((float)(v86 - v87) * t2) + v87)
                                                       - (float)((float)((float)(v87 - v88) * t2) + v88))
                                               * t2)
                                       + (float)((float)((float)(v87 - v88) * t2) + v88))
                               - v99)
                       * t2)
               + v99;
          v101 = result->x1;
          result->y1 = fminf(result->y1, v100);
          result->y2 = fmaxf(result->y2, v100);
          v102 = (float)((float)((float)((float)((float)((float)((float)((float)(v67 - v62) * v96) + v62) - v97) * v96)
                                       + v97)
                               - v98)
                       * v96)
               + v98;
          result->x1 = fminf(v101, v102);
          result->x2 = fmaxf(result->x2, v102);
        }
        v17 = v67;
        v103 = fminf(result->y1, v86);
        v18 = v86;
        result->x1 = fminf(result->x1, v67);
        v104 = result->x2;
        result->y1 = v103;
        v52 = fmaxf(v104, v67);
        v53 = fmaxf(result->y2, v86);
      }
      result->x2 = v52;
      result->y2 = v53;
    }
    while ( v19 < v114 );
    v13 = v115;
    v14 = Size_low;
    Pages = v10->mStrokeSorter.OutPaths.Pages;
LABEL_41:
    ++v13;
    --v14;
    v115 = v13;
    Size_low = v14;
  }
  while ( v14 );
LABEL_42:
  v107 = result->x2;
  v108 = result;
  if ( v107 >= result->x1 )
  {
    v109 = result->y2;
    y1 = result->y1;
    if ( v109 >= y1 )
    {
      v111 = y1 - (float)(scaledWidth * 0.5);
      v112 = v107 + (float)(scaledWidth * 0.5);
      v113 = v109 + (float)(scaledWidth * 0.5);
      result->x1 = result->x1 - (float)(scaledWidth * 0.5);
      result->y1 = v111;
      result->x2 = v112;
      result->y2 = v113;
    }
  }
  return v108;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ComputeBoundsSingleStroke<Scaleform::Render::Matrix2x4<float>>(
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapePosInfo *pos,
        unsigned int strokeStyleIdx,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol)
{
  Scaleform::Render::ShapeDataInterface_vtbl *v7; // rax
  __int16 v12; // di
  float v13; // xmm1_4
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17; // eax
  Scaleform::Render::StrokerTypes::LineJoinType v19; // ecx
  Scaleform::Render::StrokerTypes::LineCapType v20; // er8
  Scaleform::Render::StrokerTypes::LineCapType v21; // edx
  int v22; // edi
  float v23; // xmm0_4
  float v24; // xmm6_4
  unsigned int v25; // er12
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm9_4
  Scaleform::Render::VertexPath *p_mPath; // rcx
  unsigned int v30; // edi
  unsigned int v31; // er15
  __int64 v32; // r9
  Scaleform::Render::StrokeSorter::PathType *v33; // r8
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned __int64 v36; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v37; // rbx
  unsigned __int8 segType; // al
  __int64 v39; // r9
  Scaleform::Render::StrokeSorter::PathType *v40; // r8
  unsigned int v41; // ecx
  unsigned int v42; // edx
  unsigned __int64 v43; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v44; // rdx
  __int64 v45; // r10
  unsigned int v46; // ecx
  Scaleform::Render::StrokeSorter::PathType *v47; // r8
  unsigned int v48; // edx
  unsigned __int64 v49; // rcx
  unsigned int v50; // edi
  Scaleform::Render::StrokeSorter::VertexType *v51; // r11
  unsigned int v52; // ecx
  Scaleform::Render::StrokeSorter::PathType *v53; // r8
  unsigned int v54; // edx
  unsigned __int64 v55; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v56; // rdx
  unsigned __int64 Size; // r8
  unsigned int v58; // edx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  Scaleform::Render::VertexBasic *v62; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  Scaleform::RefCountVImpl *v65; // rcx
  float v66; // [rsp+50h] [rbp-98h] BYREF
  int v67; // [rsp+58h] [rbp-90h]
  float v68; // [rsp+5Ch] [rbp-8Ch]
  Scaleform::RefCountVImpl *v69[2]; // [rsp+68h] [rbp-80h]

  v7 = shape->__vftable;
  *(_OWORD *)v69 = 0i64;
  v7->GetStrokeStyle(
    (Scaleform::Render::ShapeDataInterface *)shape,
    strokeStyleIdx,
    (Scaleform::Render::StrokeStyleType *)&v66);
  v12 = v67;
  v13 = *(float *)&FLOAT_1_0;
  v14 = v67 & 6;
  if ( (v67 & 6) == 0 )
  {
    v15 = (float)((float)((float)(trans->M[1][1] * 0.70710677) + (float)(trans->M[1][0] * 0.70710677))
                * (float)((float)(trans->M[1][1] * 0.70710677) + (float)(trans->M[1][0] * 0.70710677)))
        + (float)((float)((float)(trans->M[0][1] * 0.70710677) + (float)(trans->M[0][0] * 0.70710677))
                * (float)((float)(trans->M[0][1] * 0.70710677) + (float)(trans->M[0][0] * 0.70710677)));
    goto LABEL_7;
  }
  if ( v14 == 2 )
  {
    v15 = (float)(trans->M[0][0] * trans->M[0][0]) + (float)(trans->M[1][0] * trans->M[1][0]);
    goto LABEL_7;
  }
  if ( v14 == 4 )
  {
    v15 = (float)(trans->M[0][1] * trans->M[0][1]) + (float)(trans->M[1][1] * trans->M[1][1]);
LABEL_7:
    v13 = sqrtf(v15);
  }
  v16 = v66 * v13;
  v17 = v12 & 0x30;
  if ( (v12 & 0x30) != 0 || (v12 & 0xC0) != 0 )
  {
    v19 = RoundJoin;
    v20 = RoundCap;
    v21 = RoundCap;
    if ( v17 == 16 )
    {
      v19 = BevelJoin;
    }
    else if ( v17 == 32 )
    {
      v19 = MiterJoin;
    }
    if ( (v12 & 0xC0) == 64 )
    {
      v20 = ButtCap;
    }
    else if ( (v12 & 0xC0) == 128 )
    {
      v20 = SquareCap;
    }
    v22 = v12 & 0x300;
    if ( v22 == 256 )
    {
      v21 = ButtCap;
    }
    else if ( v22 == 512 )
    {
      v21 = SquareCap;
    }
    gen->mStroker.LineJoin = v19;
    gen->mStroker.Width = v16 * 0.5;
    v23 = v68;
    gen->mStroker.EndLineCap = v21;
    gen->mStroker.MiterLimit = v23;
    gen->mStroker.StartLineCap = v20;
    Scaleform::Render::Stroker::SetToleranceParam(&gen->mStroker, tol);
    Scaleform::Render::AddStrokeToSorter<Scaleform::Render::Matrix2x4<float>>(shape, pos, strokeStyleIdx, trans, gen);
    gen->mStroker.Clear(&gen->mStroker);
    v24 = *((float *)&_xmm_f149f2caf149f2ca7149f2ca7149f2ca + 3);
    v25 = 0;
    v26 = *((float *)&_xmm_f149f2caf149f2ca7149f2ca7149f2ca + 2);
    v27 = *((float *)&_xmm_f149f2caf149f2ca7149f2ca7149f2ca + 1);
    v28 = *(float *)&_xmm_f149f2caf149f2ca7149f2ca7149f2ca;
    if ( LODWORD(gen->mStrokeSorter.OutPaths.Size) )
    {
      p_mPath = &gen->mPath;
      do
      {
        p_mPath->Clear(p_mPath);
        v30 = 0;
        v31 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v25 >> 4][v25 & 0xF].numVer & 0xFFFFFFF;
        if ( v31 )
        {
          do
          {
            v32 = v25 & 0xF;
            v33 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v25 >> 4];
            v34 = v30;
            v35 = v33[v32].numVer & 0xFFFFFFF;
            if ( v30 >= v35 )
              v34 = v30 - v35;
            v36 = v33[v32].start + v34;
            ++v30;
            v37 = &gen->mStrokeSorter.OutVertices.Pages[v36 >> 4][v36 & 0xF];
            segType = v37->segType;
            if ( segType < 2u )
            {
              ((void (__fastcall *)(Scaleform::Render::Stroker *))gen->mStroker.AddVertex)(&gen->mStroker);
            }
            else if ( segType == 2 )
            {
              v39 = v25 & 0xF;
              v40 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v25 >> 4];
              v41 = v30;
              v42 = v40[v39].numVer & 0xFFFFFFF;
              if ( v30 >= v42 )
                v41 = v30 - v42;
              v43 = v40[v39].start + v41;
              ++v30;
              v44 = &gen->mStrokeSorter.OutVertices.Pages[v43 >> 4][v43 & 0xF];
              Scaleform::Render::TessellateQuadCurve(&gen->mStroker, tol, v37->x, v37->y, v44->x, v44->y);
            }
            else if ( segType == 3 )
            {
              v45 = v25 & 0xF;
              v46 = v30;
              v47 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v25 >> 4];
              v48 = v47[v45].numVer & 0xFFFFFFF;
              if ( v30 >= v48 )
                v46 = v30 - v48;
              v49 = v47[v45].start + v46;
              v50 = v30 + 1;
              v51 = &gen->mStrokeSorter.OutVertices.Pages[v49 >> 4][v49 & 0xF];
              v52 = v50;
              v53 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v25 >> 4];
              v54 = v53[v45].numVer & 0xFFFFFFF;
              if ( v50 >= v54 )
                v52 = v50 - v54;
              v55 = v53[v45].start + v52;
              v30 = v50 + 1;
              v56 = &gen->mStrokeSorter.OutVertices.Pages[v55 >> 4][v55 & 0xF];
              Scaleform::Render::TessellateCubicCurve(
                &gen->mStroker,
                tol,
                v37->x,
                v37->y,
                v51->x,
                v51->y,
                v56->x,
                v56->y);
            }
          }
          while ( v30 < v31 );
        }
        Scaleform::Render::Stroker::GenerateStroke(&gen->mStroker, &gen->mPath);
        Size = gen->mPath.Vertices.Size;
        v58 = 0;
        if ( Size )
        {
          v59 = 0i64;
          do
          {
            v60 = v59;
            v61 = v59 & 0xF;
            v62 = gen->mPath.Vertices.Pages[v60 >> 4];
            x = v62[v61].x;
            y = v62[v61].y;
            if ( x <= v28 )
              v28 = v62[v61].x;
            if ( y <= v27 )
              v27 = v62[v61].y;
            if ( v26 <= x )
              v26 = v62[v61].x;
            if ( v24 <= y )
              v24 = v62[v61].y;
            v59 = ++v58;
          }
          while ( v58 < Size );
        }
        ++v25;
        p_mPath = &gen->mPath;
      }
      while ( v25 < LODWORD(gen->mStrokeSorter.OutPaths.Size) );
    }
    v65 = v69[1];
    result->x1 = v28;
    result->y1 = v27;
    result->x2 = v26;
    result->y2 = v24;
    if ( v65 )
      Scaleform::RefCountImpl::Release(v65);
    if ( v69[0] )
      Scaleform::RefCountImpl::Release(v69[0]);
    return result;
  }
  else
  {
    Scaleform::Render::ComputeBoundsRoundStrokeSorter<Scaleform::Render::Matrix2x4<float>>(
      result,
      shape,
      pos,
      strokeStyleIdx,
      trans,
      v66 * v13,
      gen);
    if ( v69[1] )
      Scaleform::RefCountImpl::Release(v69[1]);
    if ( v69[0] )
      Scaleform::RefCountImpl::Release(v69[0]);
    return result;
  }
}

void __fastcall Scaleform::Render::ExpandBoundsToFill<Scaleform::Render::Matrix2x4<float>>(
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::Rect<float> *bounds,
        Scaleform::Render::BoundEdges edgesToCheck)
{
  Scaleform::Render::ShapeDataInterface_vtbl *v8; // rax
  bool v9; // zf
  Scaleform::Render::ShapePosInfo pos; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+68h] [rbp-1h] BYREF
  int v12; // [rsp+6Ch] [rbp+3h]
  float coord[6]; // [rsp+78h] [rbp+Fh] BYREF

  pos.Pos = shape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
  v8 = shape->__vftable;
  LODWORD(pos.Sfactor) = FLOAT_1_0;
  memset(&pos.StartX, 0, 44);
  pos.Initialized = 0;
  if ( v8->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, &pos, coord, (unsigned int *)&v11) )
  {
    do
    {
      if ( edgesToCheck )
      {
        if ( edgesToCheck != Bound_FillEdges )
        {
          if ( edgesToCheck == Bound_AllEdges )
            goto LABEL_11;
          goto LABEL_5;
        }
        v9 = v11 == v12;
      }
      else
      {
        v9 = (v11 == 0) == (v12 == 0);
      }
      if ( !v9 )
      {
LABEL_11:
        Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(shape, trans, &pos, coord, bounds);
        continue;
      }
LABEL_5:
      shape->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, &pos);
    }
    while ( shape->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, &pos, coord, (unsigned int *)&v11) );
  }
}

void __fastcall Scaleform::Render::ExpandBoundsToLayerStrokes<Scaleform::Render::Matrix2x4<float>>(
        const Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapePosInfo *pos,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol,
        Scaleform::Render::Rect<float> *bounds)
{
  __int128 v6; // xmm0
  const Scaleform::Render::ToleranceParams *v7; // rsi
  __int128 v8; // xmm1
  const Scaleform::Render::Matrix2x4<float> *v10; // rdi
  Scaleform::Render::ShapeDataInterface_vtbl *v12; // rax
  __int128 v14; // xmm0
  char v15; // bl
  Scaleform::Render::ShapePathType i; // eax
  float x2; // xmm4_4
  float x1; // xmm5_4
  float y2; // xmm2_4
  float y1; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  unsigned __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned int v26; // ebx
  Scaleform::MemoryHeap_vtbl *v27; // rax
  _QWORD *v28; // rax
  char v29; // cl
  unsigned __int64 v30; // r8
  Scaleform::Render::ShapeDataInterface_vtbl *v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  _QWORD *v34; // rdx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // [rsp+40h] [rbp-A9h] BYREF
  _QWORD *v38; // [rsp+48h] [rbp-A1h]
  Scaleform::MemoryHeap *pHeap; // [rsp+50h] [rbp-99h]
  Scaleform::Render::Rect<float> result; // [rsp+60h] [rbp-89h] BYREF
  Scaleform::Render::ShapePosInfo posa; // [rsp+70h] [rbp-79h] BYREF
  const Scaleform::Render::Matrix2x4<float> *v42; // [rsp+B0h] [rbp-39h]
  const Scaleform::Render::ToleranceParams *v43; // [rsp+B8h] [rbp-31h]
  char v44; // [rsp+C0h] [rbp-29h] BYREF
  unsigned int strokeStyleIdx; // [rsp+C8h] [rbp-21h]
  float v46[6]; // [rsp+D0h] [rbp-19h] BYREF

  v6 = *(_OWORD *)&pos->Pos;
  v7 = tol;
  v8 = *(_OWORD *)&pos->LastY;
  v38 = (__int64 *)((char *)&v37 + 4);
  v10 = trans;
  pHeap = gen->Heap1.pHeap;
  v12 = shape->__vftable;
  *(_OWORD *)&posa.Pos = v6;
  v42 = trans;
  v14 = *(_OWORD *)&pos->NumStrokeBits;
  v43 = tol;
  v15 = 1;
  *(_OWORD *)&posa.LastY = v8;
  v37 = 32i64;
  *(_QWORD *)&v8 = *(_QWORD *)&pos->Sfactor;
  *(_OWORD *)&posa.NumStrokeBits = v14;
  *(_QWORD *)&posa.Sfactor = v8;
  for ( i = v12->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, pos, v46, (unsigned int *)&v44);
        i;
        i = v31->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, pos, v46, (unsigned int *)&v44) )
  {
    if ( i == Shape_NewLayer && !v15 )
      break;
    if ( strokeStyleIdx
      && (strokeStyleIdx >= (unsigned int)v37
       || (*((_DWORD *)v38 + ((unsigned __int64)strokeStyleIdx >> 5)) & (1 << (strokeStyleIdx & 0x1F))) == 0) )
    {
      Scaleform::Render::ComputeBoundsSingleStroke<Scaleform::Render::Matrix2x4<float>>(
        &result,
        shape,
        &posa,
        strokeStyleIdx,
        v10,
        gen,
        v7);
      x2 = result.x2;
      x1 = result.x1;
      if ( result.x2 >= result.x1 )
      {
        y2 = result.y2;
        y1 = result.y1;
        if ( result.y2 >= result.y1 )
        {
          v21 = fminf(fminf(bounds->y1, result.y1), result.y2);
          bounds->x1 = fminf(fminf(bounds->x1, result.x1), result.x2);
          v22 = bounds->x2;
          bounds->y1 = v21;
          v23 = fmaxf(fmaxf(bounds->y2, y1), y2);
          bounds->x2 = fmaxf(fmaxf(v22, x1), x2);
          bounds->y2 = v23;
        }
      }
      v24 = strokeStyleIdx;
      if ( strokeStyleIdx >= (unsigned int)v37 )
      {
        v25 = (unsigned int)(v37 + 31) >> 5;
        v26 = 2 * v25;
        if ( (strokeStyleIdx + 32) >> 5 >= 2 * (int)v25 )
          v26 = (strokeStyleIdx + 32) >> 5;
        if ( v26 > (unsigned int)v25 )
        {
          v27 = pHeap->__vftable;
          if ( v38 == (__int64 *)((char *)&v37 + 4) )
          {
            v38 = v27->Alloc(pHeap, 4i64 * v26, 0i64);
            *(_DWORD *)v38 = HIDWORD(v37);
            v28 = v38;
          }
          else
          {
            v28 = v27->Realloc(pHeap, v38, 4i64 * v26);
            v38 = v28;
          }
          memset((char *)v28 + 4 * v25, 0, 4i64 * (v26 - (unsigned int)v25));
          LODWORD(v37) = 32 * v26;
        }
      }
      v7 = v43;
      v29 = v24 & 0x1F;
      v30 = v24 >> 5;
      v10 = v42;
      *((_DWORD *)v38 + v30) |= 1 << v29;
    }
    shape->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, pos);
    v31 = shape->__vftable;
    v32 = *(_OWORD *)&pos->LastY;
    *(_OWORD *)&posa.Pos = *(_OWORD *)&pos->Pos;
    v15 = 0;
    v33 = *(_OWORD *)&pos->NumStrokeBits;
    *(_OWORD *)&posa.LastY = v32;
    *(_QWORD *)&v32 = *(_QWORD *)&pos->Sfactor;
    *(_OWORD *)&posa.NumStrokeBits = v33;
    *(_QWORD *)&posa.Sfactor = v32;
  }
  v34 = v38;
  v35 = *(_OWORD *)&posa.LastY;
  *(_OWORD *)&pos->Pos = *(_OWORD *)&posa.Pos;
  v36 = *(_OWORD *)&posa.NumStrokeBits;
  *(_OWORD *)&pos->LastY = v35;
  *(_QWORD *)&v35 = *(_QWORD *)&posa.Sfactor;
  *(_OWORD *)&pos->NumStrokeBits = v36;
  *(_QWORD *)&pos->Sfactor = v35;
  if ( v34 != (__int64 *)((char *)&v37 + 4) )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))pHeap->Free)(pHeap);
}

void __fastcall Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        Scaleform::Render::Rect<float> *bounds)
{
  float v5; // xmm2_4
  float v7; // xmm3_4
  Scaleform::Render::Rect<float> *v9; // rdi
  Scaleform::Render::ShapeDataInterface_vtbl *v12; // rax
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float x2; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm10_4
  float v19; // xmm9_4
  Scaleform::Render::PathEdgeType i; // eax
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm3_4
  float v33; // xmm6_4
  float v34; // xmm5_4
  float v35; // xmm0_4
  float v36; // xmm4_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm5_4
  float v40; // xmm0_4
  float y2; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  float x1; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  float v58; // xmm3_4
  float v59; // xmm2_4
  float v60; // xmm7_4
  float v61; // xmm7_4
  float v62; // xmm12_4
  float v63; // xmm14_4
  float v64; // xmm15_4
  float v65; // xmm3_4
  float v66; // xmm1_4
  float v67; // xmm6_4
  float v68; // xmm4_4
  float v69; // xmm12_4
  float v70; // xmm7_4
  float v71; // xmm1_4
  float v72; // xmm0_4
  float v73; // xmm1_4
  float v74; // xmm12_4
  float v75; // xmm8_4
  float v76; // xmm4_4
  float v77; // xmm2_4
  float v78; // xmm7_4
  float v79; // xmm0_4
  float v80; // xmm5_4
  float v81; // xmm3_4
  float v82; // xmm2_4
  float v83; // xmm3_4
  float v84; // xmm0_4
  float v85; // xmm2_4
  float v86; // xmm8_4
  float v87; // xmm12_4
  float v88; // xmm14_4
  float v89; // xmm7_4
  float v90; // xmm6_4
  float v91; // xmm5_4
  float v92; // xmm4_4
  float v93; // xmm2_4
  float v94; // xmm0_4
  float v95; // xmm8_4
  float v96; // xmm0_4
  float v97; // xmm2_4
  float v98; // xmm12_4
  float v99; // xmm8_4
  float v100; // xmm4_4
  float v101; // xmm2_4
  float v102; // xmm7_4
  float v103; // xmm0_4
  float v104; // xmm5_4
  float v105; // xmm3_4
  float v106; // xmm2_4
  float v107; // xmm3_4
  float v108; // xmm0_4
  float v109; // xmm2_4
  float v110; // xmm3_4
  float v111; // xmm2_4
  float v112; // xmm1_4
  float v113; // xmm0_4
  float v114; // xmm1_4
  float t2; // [rsp+F0h] [rbp+8h] BYREF

  v5 = *coord;
  v7 = coord[1];
  v9 = bounds;
  v12 = shape->__vftable;
  *coord = (float)((float)(*coord * trans->M[0][0]) + (float)(v7 * trans->M[0][1])) + trans->M[0][3];
  v13 = (float)((float)(v7 * trans->M[1][1]) + (float)(v5 * trans->M[1][0])) + trans->M[1][3];
  coord[1] = v13;
  v14 = *coord;
  v15 = fminf(v9->y1, v13);
  v9->x1 = fminf(v9->x1, *coord);
  x2 = v9->x2;
  v9->y1 = v15;
  v17 = fmaxf(v9->y2, v13);
  v9->x2 = fmaxf(x2, v14);
  v9->y2 = v17;
  v18 = *coord;
  v19 = coord[1];
  for ( i = v12->ReadEdge((Scaleform::Render::ShapeDataInterface *)shape, pos, coord);
        i;
        i = shape->ReadEdge((Scaleform::Render::ShapeDataInterface *)shape, pos, coord) )
  {
    switch ( i )
    {
      case Edge_LineTo:
        v21 = *coord;
        v22 = coord[1];
        *coord = (float)((float)(*coord * trans->M[0][0]) + (float)(v22 * trans->M[0][1])) + trans->M[0][3];
        v23 = (float)((float)(v22 * trans->M[1][1]) + (float)(v21 * trans->M[1][0])) + trans->M[1][3];
        coord[1] = v23;
        v24 = *coord;
        v25 = fminf(v9->y1, v23);
        v9->x1 = fminf(v9->x1, *coord);
        v26 = v9->x2;
        v9->y1 = v25;
        v27 = fmaxf(v9->y2, v23);
        v9->x2 = fmaxf(v26, v24);
        v9->y2 = v27;
        v18 = *coord;
        v19 = coord[1];
        break;
      case Edge_QuadTo:
        v28 = *coord;
        v29 = coord[1];
        *coord = (float)((float)(v29 * trans->M[0][1]) + (float)(*coord * trans->M[0][0])) + trans->M[0][3];
        coord[1] = (float)((float)(v29 * trans->M[1][1]) + (float)(v28 * trans->M[1][0])) + trans->M[1][3];
        v30 = coord[2];
        v31 = coord[3];
        coord[2] = (float)((float)(v31 * trans->M[0][1]) + (float)(v30 * trans->M[0][0])) + trans->M[0][3];
        v32 = (float)((float)(v31 * trans->M[1][1]) + (float)(v30 * trans->M[1][0])) + trans->M[1][3];
        coord[3] = v32;
        v33 = *coord;
        v34 = coord[2];
        v35 = (float)((float)(v33 + v33) - v18) - v34;
        if ( v35 != 0.0 )
        {
          v36 = (float)(v33 - v18) / v35;
          if ( v36 > 0.0 && v36 < 1.0 )
          {
            v37 = (float)((float)(coord[1] - v19) * v36) + v19;
            v38 = (float)((float)((float)((float)((float)(v32 - coord[1]) * v36) + coord[1]) - v37) * v36) + v37;
            v39 = (float)((float)((float)((float)((float)(v34 - v33) * v36) + v33)
                                - (float)((float)((float)(v33 - v18) * v36) + v18))
                        * v36)
                + (float)((float)((float)(v33 - v18) * v36) + v18);
            v40 = fminf(v9->x1, v39);
            v9->y1 = fminf(v9->y1, v38);
            y2 = v9->y2;
            v9->x1 = v40;
            v42 = fmaxf(v9->x2, v39);
            v9->y2 = fmaxf(y2, v38);
            v9->x2 = v42;
          }
        }
        v43 = coord[1];
        v44 = coord[3];
        v45 = (float)((float)(v43 + v43) - v19) - v44;
        if ( v45 != 0.0 )
        {
          v46 = (float)(v43 - v19) / v45;
          if ( v46 > 0.0 && v46 < 1.0 )
          {
            v47 = (float)((float)((float)((float)((float)(v44 - v43) * v46) + v43)
                                - (float)((float)((float)(v43 - v19) * v46) + v19))
                        * v46)
                + (float)((float)((float)(v43 - v19) * v46) + v19);
            x1 = v9->x1;
            v49 = (float)((float)((float)((float)((float)(coord[2] - *coord) * v46) + *coord)
                                - (float)((float)((float)(*coord - v18) * v46) + v18))
                        * v46)
                + (float)((float)((float)(*coord - v18) * v46) + v18);
            v9->y1 = fminf(v9->y1, v47);
            v9->y2 = fmaxf(v9->y2, v47);
            v9->x1 = fminf(x1, v49);
            v9->x2 = fmaxf(v9->x2, v49);
          }
        }
        v50 = coord[3];
        v51 = coord[2];
        v52 = fminf(v9->y1, v50);
        v9->x1 = fminf(v9->x1, v51);
        v53 = v9->x2;
        v9->y1 = v52;
        v54 = fmaxf(v9->y2, v50);
        v9->x2 = fmaxf(v53, v51);
        v9->y2 = v54;
        v18 = coord[2];
        v19 = coord[3];
        break;
      case Edge_CubicTo:
        v55 = *coord;
        v56 = coord[1];
        *coord = (float)((float)(v56 * trans->M[0][1]) + (float)(*coord * trans->M[0][0])) + trans->M[0][3];
        coord[1] = (float)((float)(v56 * trans->M[1][1]) + (float)(v55 * trans->M[1][0])) + trans->M[1][3];
        v57 = coord[2];
        v58 = coord[3];
        coord[2] = (float)((float)(v58 * trans->M[0][1]) + (float)(v57 * trans->M[0][0])) + trans->M[0][3];
        coord[3] = (float)((float)(v58 * trans->M[1][1]) + (float)(v57 * trans->M[1][0])) + trans->M[1][3];
        v59 = coord[4];
        v60 = coord[5];
        coord[4] = (float)((float)(v60 * trans->M[0][1]) + (float)(v59 * trans->M[0][0])) + trans->M[0][3];
        v61 = (float)((float)(v60 * trans->M[1][1]) + (float)(v59 * trans->M[1][0])) + trans->M[1][3];
        coord[5] = v61;
        v62 = coord[4];
        v63 = coord[2];
        v64 = *coord;
        Scaleform::Render::Math2D::CubicCurveExtremum(v18, *coord, v63, v62, (float *)&bounds, &t2);
        if ( *(float *)&bounds > 0.0 && *(float *)&bounds < 1.0 )
        {
          v65 = coord[1];
          v67 = (float)((float)(v63 - v64) * *(float *)&bounds) + v64;
          v66 = (float)((float)(coord[3] - v65) * *(float *)&bounds) + v65;
          v68 = (float)((float)(v67 - (float)((float)((float)(v64 - v18) * *(float *)&bounds) + v18)) * *(float *)&bounds)
              + (float)((float)((float)(v64 - v18) * *(float *)&bounds) + v18);
          v69 = (float)((float)((float)((float)((float)((float)((float)((float)(v62 - v63) * *(float *)&bounds) + v63)
                                                      - v67)
                                              * *(float *)&bounds)
                                      + v67)
                              - v68)
                      * *(float *)&bounds)
              + v68;
          v70 = (float)((float)((float)((float)((float)((float)((float)((float)(v61 - coord[3]) * *(float *)&bounds)
                                                              + coord[3])
                                                      - v66)
                                              * *(float *)&bounds)
                                      + v66)
                              - (float)((float)((float)(v66
                                                      - (float)((float)((float)(v65 - v19) * *(float *)&bounds) + v19))
                                              * *(float *)&bounds)
                                      + (float)((float)((float)(v65 - v19) * *(float *)&bounds) + v19)))
                      * *(float *)&bounds)
              + (float)((float)((float)(v66 - (float)((float)((float)(v65 - v19) * *(float *)&bounds) + v19))
                              * *(float *)&bounds)
                      + (float)((float)((float)(v65 - v19) * *(float *)&bounds) + v19));
          v71 = fminf(v9->y1, v70);
          v9->x1 = fminf(v9->x1, v69);
          v72 = v9->x2;
          v9->y1 = v71;
          v73 = fmaxf(v9->y2, v70);
          v9->x2 = fmaxf(v72, v69);
          v9->y2 = v73;
        }
        v74 = t2;
        if ( t2 > 0.0 && t2 < 1.0 )
        {
          v75 = coord[2];
          v76 = (float)((float)(coord[1] - v19) * t2) + v19;
          v77 = (float)((float)(coord[3] - coord[1]) * t2) + coord[1];
          v78 = (float)((float)(v75 - *coord) * t2) + *coord;
          v79 = (float)((float)(v77 - v76) * t2) + v76;
          v80 = (float)((float)(v78 - (float)((float)((float)(*coord - v18) * t2) + v18)) * t2)
              + (float)((float)((float)(*coord - v18) * t2) + v18);
          v81 = (float)((float)((float)((float)((float)(coord[5] - coord[3]) * t2) + coord[3]) - v77) * t2) + v77;
          v82 = coord[4];
          v83 = (float)((float)(v81 - v79) * t2) + v79;
          v84 = v9->x1;
          v9->y1 = fminf(v9->y1, v83);
          v9->y2 = fmaxf(v9->y2, v83);
          v85 = (float)((float)((float)((float)((float)((float)((float)((float)(v82 - v75) * v74) + v75) - v78) * v74)
                                      + v78)
                              - v80)
                      * v74)
              + v80;
          v9->x1 = fminf(v84, v85);
          v9->x2 = fmaxf(v9->x2, v85);
        }
        v86 = coord[5];
        v87 = coord[3];
        v88 = coord[1];
        Scaleform::Render::Math2D::CubicCurveExtremum(v19, v88, v87, v86, (float *)&bounds, &t2);
        v89 = *(float *)&bounds;
        if ( *(float *)&bounds > 0.0 && *(float *)&bounds < 1.0 )
        {
          v90 = coord[2];
          v91 = (float)((float)(v90 - *coord) * *(float *)&bounds) + *coord;
          v92 = (float)((float)(v91 - (float)((float)((float)(*coord - v18) * *(float *)&bounds) + v18))
                      * *(float *)&bounds)
              + (float)((float)((float)(*coord - v18) * *(float *)&bounds) + v18);
          v93 = coord[4];
          v94 = (float)((float)((float)((float)((float)(v87 - v88) * *(float *)&bounds) + v88)
                              - (float)((float)((float)(v88 - v19) * *(float *)&bounds) + v19))
                      * *(float *)&bounds)
              + (float)((float)((float)(v88 - v19) * *(float *)&bounds) + v19);
          v95 = (float)((float)((float)((float)((float)((float)((float)((float)(v86 - v87) * *(float *)&bounds) + v87)
                                                      - (float)((float)((float)(v87 - v88) * *(float *)&bounds) + v88))
                                              * *(float *)&bounds)
                                      + (float)((float)((float)(v87 - v88) * *(float *)&bounds) + v88))
                              - v94)
                      * *(float *)&bounds)
              + v94;
          v96 = v9->x1;
          v9->y1 = fminf(v9->y1, v95);
          v9->y2 = fmaxf(v9->y2, v95);
          v97 = (float)((float)((float)((float)((float)((float)((float)((float)(v93 - v90) * v89) + v90) - v91) * v89)
                                      + v91)
                              - v92)
                      * v89)
              + v92;
          v9->x1 = fminf(v96, v97);
          v9->x2 = fmaxf(v9->x2, v97);
        }
        v98 = t2;
        if ( t2 > 0.0 && t2 < 1.0 )
        {
          v99 = coord[2];
          v100 = (float)((float)(coord[1] - v19) * t2) + v19;
          v101 = (float)((float)(coord[3] - coord[1]) * t2) + coord[1];
          v102 = (float)((float)(v99 - *coord) * t2) + *coord;
          v103 = (float)((float)(v101 - v100) * t2) + v100;
          v104 = (float)((float)(v102 - (float)((float)((float)(*coord - v18) * t2) + v18)) * t2)
               + (float)((float)((float)(*coord - v18) * t2) + v18);
          v105 = (float)((float)((float)((float)((float)(coord[5] - coord[3]) * t2) + coord[3]) - v101) * t2) + v101;
          v106 = coord[4];
          v107 = (float)((float)(v105 - v103) * t2) + v103;
          v108 = v9->x1;
          v9->y1 = fminf(v9->y1, v107);
          v9->y2 = fmaxf(v9->y2, v107);
          v109 = (float)((float)((float)((float)((float)((float)((float)((float)(v106 - v99) * v98) + v99) - v102) * v98)
                                       + v102)
                               - v104)
                       * v98)
               + v104;
          v9->x1 = fminf(v108, v109);
          v9->x2 = fmaxf(v9->x2, v109);
        }
        v110 = coord[5];
        v111 = coord[4];
        v112 = fminf(v9->y1, v110);
        v9->x1 = fminf(v9->x1, v111);
        v113 = v9->x2;
        v9->y1 = v112;
        v114 = fmaxf(v9->y2, v110);
        v9->x2 = fmaxf(v113, v111);
        v9->y2 = v114;
        v18 = coord[4];
        v19 = coord[5];
        break;
    }
  }
}

void __fastcall Scaleform::Render::ExpandBoundsToStrokes<Scaleform::Render::Matrix2x4<float>>(
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol,
        Scaleform::Render::Rect<float> *bounds)
{
  __int128 v9; // xmm6
  __int128 v10; // xmm7
  __int128 v11; // xmm8
  Scaleform::Render::ShapeDataInterface_vtbl *v12; // rax
  __int64 v13; // xmm9_8
  Scaleform::Render::ShapePosInfo pos; // [rsp+30h] [rbp-99h] BYREF
  __int64 v15; // [rsp+68h] [rbp-61h]
  unsigned int v16[4]; // [rsp+70h] [rbp-59h] BYREF
  float v17[6]; // [rsp+80h] [rbp-49h] BYREF

  pos.StartY = shape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
  memset(&pos.LastX, 0, 44);
  v9 = *(_OWORD *)&pos.StartY;
  v10 = 0u;
  v11 = 0u;
  BYTE4(v15) = 0;
  v12 = shape->__vftable;
  LODWORD(v15) = FLOAT_1_0;
  v13 = v15;
  if ( v12->ReadPathInfo(
         (Scaleform::Render::ShapeDataInterface *)shape,
         (Scaleform::Render::ShapePosInfo *)&pos.StartY,
         v17,
         v16) )
  {
    do
    {
      v15 = v13;
      *(_OWORD *)&pos.StartY = v9;
      *(_OWORD *)&pos.StrokeBase = v10;
      *(_OWORD *)&pos.Fill1 = v11;
      Scaleform::Render::ExpandBoundsToLayerStrokes<Scaleform::Render::Matrix2x4<float>>(
        shape,
        (Scaleform::Render::ShapePosInfo *)&pos.StartY,
        trans,
        gen,
        tol,
        bounds);
      v9 = *(_OWORD *)&pos.StartY;
      v10 = *(_OWORD *)&pos.StrokeBase;
      v11 = *(_OWORD *)&pos.Fill1;
      v13 = v15;
    }
    while ( shape->ReadPathInfo(
              (Scaleform::Render::ShapeDataInterface *)shape,
              (Scaleform::Render::ShapePosInfo *)&pos.StartY,
              v17,
              v16) );
  }
}

void __fastcall Scaleform::Render::ExpandBoundsToStrokesSimplified<Scaleform::Render::Matrix2x4<float>>(
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::Matrix2x4<float> *trans,
        Scaleform::Render::Rect<float> *bounds)
{
  float x2; // xmm4_4
  float x1; // xmm5_4
  float y2; // xmm2_4
  float y1; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  Scaleform::Render::Rect<float> result; // [rsp+30h] [rbp-39h] BYREF
  Scaleform::Render::ShapePosInfo pos; // [rsp+40h] [rbp-29h] BYREF
  unsigned int styles[4]; // [rsp+78h] [rbp+Fh] BYREF
  float coord[6]; // [rsp+88h] [rbp+1Fh] BYREF

  pos.Pos = shape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
  LODWORD(pos.Sfactor) = FLOAT_1_0;
  memset(&pos.StartX, 0, 44);
  pos.Initialized = 0;
  while ( shape->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, &pos, coord, styles) )
  {
    if ( styles[2] )
    {
      Scaleform::Render::ComputeBoundsRoundStroke<Scaleform::Render::Matrix2x4<float>>(
        &result,
        shape,
        trans,
        &pos,
        coord,
        styles);
      x2 = result.x2;
      x1 = result.x1;
      if ( result.x2 >= result.x1 )
      {
        y2 = result.y2;
        y1 = result.y1;
        if ( result.y2 >= result.y1 )
        {
          v10 = fminf(fminf(bounds->y1, result.y1), result.y2);
          bounds->x1 = fminf(fminf(bounds->x1, result.x1), result.x2);
          v11 = bounds->x2;
          bounds->y1 = v10;
          v12 = fmaxf(fmaxf(bounds->y2, y1), y2);
          bounds->x2 = fmaxf(fmaxf(v11, x1), x2);
          bounds->y2 = v12;
        }
      }
    }
    else
    {
      shape->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, &pos);
    }
  }
}

char __fastcall Scaleform::Render::HitTestFill<Scaleform::Render::Matrix2x4<float>>(
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::Matrix2x4<float> *trans,
        float x,
        float y)
{
  float v5; // xmm12_4
  Scaleform::Render::ShapeDataInterface_vtbl *v8; // rax
  int v9; // esi
  Scaleform::Render::ShapePathType v10; // eax
  Scaleform::Render::ShapeDataInterface_vtbl *v11; // rax
  float v12; // xmm14_4
  float v13; // xmm13_4
  Scaleform::Render::PathEdgeType v14; // eax
  float v15; // xmm7_4
  float v16; // xmm1_4
  float v17; // xmm4_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm8_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm0_4
  float x3; // xmm11_4
  float y3; // xmm9_4
  float y2; // xmm8_4
  int v27; // eax
  float v28; // xmm8_4
  float v29; // xmm11_4
  float v30; // xmm3_4
  float v31; // xmm9_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm5_4
  float v35; // xmm0_4
  float v36; // xmm10_4
  float v37; // xmm6_4
  unsigned int v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+6Ch] [rbp-94h]
  __int64 v41; // [rsp+74h] [rbp-8Ch]
  __int64 v42; // [rsp+7Ch] [rbp-84h]
  __int64 v43; // [rsp+84h] [rbp-7Ch]
  __int64 v44; // [rsp+8Ch] [rbp-74h]
  int v45; // [rsp+94h] [rbp-6Ch]
  Tween::EasingType v46; // [rsp+98h] [rbp-68h]
  char v47; // [rsp+9Ch] [rbp-64h]
  float v48; // [rsp+A0h] [rbp-60h] BYREF
  float v49; // [rsp+A4h] [rbp-5Ch]
  float v50; // [rsp+A8h] [rbp-58h]
  float v51; // [rsp+ACh] [rbp-54h]
  float v52; // [rsp+B0h] [rbp-50h]
  float v53; // [rsp+B4h] [rbp-4Ch]
  int v54[4]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = x;
  v39 = shape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
  v8 = shape->__vftable;
  v46 = FLOAT_1_0;
  v40 = 0i64;
  v41 = 0i64;
  v9 = 0;
  v42 = 0i64;
  v43 = 0i64;
  v44 = 0i64;
  v45 = 0;
  v47 = 0;
  v10 = v8->ReadPathInfo(
          (Scaleform::Render::ShapeDataInterface *)shape,
          (Scaleform::Render::ShapePosInfo *)&v39,
          &v48,
          (unsigned int *)v54);
  if ( v10 == Shape_EndShape )
    return v9 != 0;
  while ( v10 != Shape_NewLayer )
  {
LABEL_5:
    v11 = shape->__vftable;
    if ( (v54[0] == 0) == (v54[1] == 0) )
    {
      v11->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, (Scaleform::Render::ShapePosInfo *)&v39);
    }
    else
    {
      v12 = (float)((float)(v49 * trans->M[0][1]) + (float)(v48 * trans->M[0][0])) + trans->M[0][3];
      v13 = (float)((float)(v49 * trans->M[1][1]) + (float)(v48 * trans->M[1][0])) + trans->M[1][3];
      v48 = v12;
      v49 = v13;
      v14 = v11->ReadEdge((Scaleform::Render::ShapeDataInterface *)shape, (Scaleform::Render::ShapePosInfo *)&v39, &v48);
      if ( v14 )
      {
        while ( 1 )
        {
          if ( v14 == Edge_LineTo )
          {
            v15 = v12;
            v16 = v13;
            v17 = (float)((float)(v49 * trans->M[0][1]) + (float)(v48 * trans->M[0][0])) + trans->M[0][3];
            v49 = (float)((float)(v49 * trans->M[1][1]) + (float)(v48 * trans->M[1][0])) + trans->M[1][3];
            v18 = v49;
            v48 = v17;
            v19 = v17;
            if ( v13 > v49 )
            {
              v15 = v17;
              v19 = v12;
              v16 = v49;
              v18 = v13;
            }
            if ( y >= v16
              && v18 > y
              && (float)((float)((float)(v5 - v19) * (float)(v18 - v16)) - (float)((float)(y - v18) * (float)(v19 - v15))) > 0.0 )
            {
              v9 ^= 1u;
            }
            v12 = v17;
            v13 = v49;
            goto LABEL_20;
          }
          if ( v14 == Edge_QuadTo )
            break;
          if ( v14 == Edge_CubicTo )
          {
            v28 = trans->M[0][1];
            v29 = trans->M[0][0];
            v30 = trans->M[0][3];
            v31 = trans->M[1][1];
            v32 = trans->M[1][0];
            v33 = trans->M[1][3];
            v34 = (float)(trans->M[0][0] * v50) + (float)(v28 * v51);
            v35 = v32 * v50;
            v36 = (float)((float)(v31 * v49) + (float)(v32 * v48)) + v33;
            v37 = v32 * v52;
            v48 = (float)((float)(trans->M[0][0] * v48) + (float)(v28 * v49)) + v30;
            v49 = v36;
            v50 = v34 + v30;
            v52 = (float)((float)(v29 * v52) + (float)(v28 * v53)) + v30;
            v51 = (float)((float)(v31 * v51) + v35) + v33;
            v53 = (float)((float)(v31 * v53) + v37) + v33;
            v27 = Scaleform::Render::Math2D::CheckCubicIntersection(
                    v9,
                    v12,
                    v13,
                    v48,
                    v36,
                    v34 + v30,
                    v51,
                    v52,
                    v53,
                    x,
                    y);
            v12 = v52;
            v13 = v53;
            v5 = x;
            goto LABEL_19;
          }
LABEL_20:
          v14 = shape->ReadEdge(
                  (Scaleform::Render::ShapeDataInterface *)shape,
                  (Scaleform::Render::ShapePosInfo *)&v39,
                  &v48);
          if ( v14 == Edge_EndPath )
            goto LABEL_23;
        }
        v20 = trans->M[1][1];
        v21 = trans->M[1][0];
        v22 = v21 * v50;
        v23 = v21 * v48;
        x3 = (float)((float)(trans->M[0][0] * v50) + (float)(trans->M[0][1] * v51)) + trans->M[0][3];
        v48 = (float)((float)(trans->M[0][0] * v48) + (float)(trans->M[0][1] * v49)) + trans->M[0][3];
        y3 = (float)((float)(v20 * v51) + v22) + trans->M[1][3];
        y2 = (float)((float)(v20 * v49) + v23) + trans->M[1][3];
        v50 = x3;
        v49 = y2;
        v51 = y3;
        v27 = Scaleform::Render::Math2D::CheckQuadraticIntersection(v9, v12, v13, v48, y2, x3, y3, v5, y);
        v12 = v50;
        v13 = v51;
LABEL_19:
        v9 = v27;
        goto LABEL_20;
      }
    }
LABEL_23:
    v10 = shape->ReadPathInfo(
            (Scaleform::Render::ShapeDataInterface *)shape,
            (Scaleform::Render::ShapePosInfo *)&v39,
            &v48,
            (unsigned int *)v54);
    if ( v10 == Shape_EndShape )
      return v9 != 0;
  }
  if ( !v9 )
  {
    v9 = 0;
    goto LABEL_5;
  }
  return 1;
}

char __fastcall Scaleform::Render::HitTestFill<Scaleform::Render::TransformerBase>(
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::TransformerBase *trans,
        float x,
        float y)
{
  Scaleform::Render::ShapeDataInterface_vtbl *v7; // rax
  int v8; // edi
  Scaleform::Render::ShapePathType v9; // eax
  float v10; // xmm7_4
  float v11; // xmm6_4
  Scaleform::Render::PathEdgeType v12; // eax
  float v13; // xmm10_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  int v17; // eax
  __int64 v19[6]; // [rsp+64h] [rbp-A4h] BYREF
  int v20; // [rsp+94h] [rbp-74h]
  Tween::EasingType v21; // [rsp+98h] [rbp-70h]
  char v22; // [rsp+9Ch] [rbp-6Ch]
  float x2; // [rsp+A0h] [rbp-68h] BYREF
  float y2; // [rsp+A4h] [rbp-64h] BYREF
  float x3; // [rsp+A8h] [rbp-60h] BYREF
  float y3; // [rsp+ACh] [rbp-5Ch] BYREF
  float x4; // [rsp+B0h] [rbp-58h] BYREF
  float y4; // [rsp+B4h] [rbp-54h] BYREF
  int v29[4]; // [rsp+B8h] [rbp-50h] BYREF

  HIDWORD(v19[0]) = shape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
  v7 = shape->__vftable;
  v21 = FLOAT_1_0;
  memset(&v19[1], 0, 40);
  v8 = 0;
  v20 = 0;
  v22 = 0;
  v9 = v7->ReadPathInfo(
         (Scaleform::Render::ShapeDataInterface *)shape,
         (Scaleform::Render::ShapePosInfo *)((char *)v19 + 4),
         &x2,
         (unsigned int *)v29);
  if ( v9 == Shape_EndShape )
    return v8 != 0;
  while ( v9 != Shape_NewLayer )
  {
LABEL_5:
    if ( (v29[0] == 0) == (v29[1] == 0) )
    {
      shape->SkipPathData(
        (Scaleform::Render::ShapeDataInterface *)shape,
        (Scaleform::Render::ShapePosInfo *)((char *)v19 + 4));
    }
    else
    {
      trans->Transform((Scaleform::Render::TransformerBase *)trans, &x2, &y2);
      v10 = x2;
      v11 = y2;
      v12 = shape->ReadEdge(
              (Scaleform::Render::ShapeDataInterface *)shape,
              (Scaleform::Render::ShapePosInfo *)((char *)v19 + 4),
              &x2);
      if ( v12 )
      {
        while ( 1 )
        {
          if ( v12 == Edge_LineTo )
          {
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x2, &y2);
            v13 = v10;
            v14 = v11;
            v15 = x2;
            v16 = y2;
            if ( v11 > y2 )
            {
              v13 = x2;
              v15 = v10;
              v14 = y2;
              v16 = v11;
            }
            if ( y >= v14
              && v16 > y
              && (float)((float)((float)(x - v15) * (float)(v16 - v14)) - (float)((float)(y - v16) * (float)(v15 - v13))) > 0.0 )
            {
              v8 ^= 1u;
            }
            v10 = x2;
            v11 = y2;
            goto LABEL_20;
          }
          if ( v12 == Edge_QuadTo )
            break;
          if ( v12 == Edge_CubicTo )
          {
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x2, &y2);
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x3, &y3);
            trans->Transform((Scaleform::Render::TransformerBase *)trans, &x4, &y4);
            v17 = Scaleform::Render::Math2D::CheckCubicIntersection(v8, v10, v11, x2, y2, x3, y3, x4, y4, x, y);
            v10 = x4;
            v11 = y4;
            goto LABEL_19;
          }
LABEL_20:
          v12 = shape->ReadEdge(
                  (Scaleform::Render::ShapeDataInterface *)shape,
                  (Scaleform::Render::ShapePosInfo *)((char *)v19 + 4),
                  &x2);
          if ( v12 == Edge_EndPath )
            goto LABEL_23;
        }
        trans->Transform((Scaleform::Render::TransformerBase *)trans, &x2, &y2);
        trans->Transform((Scaleform::Render::TransformerBase *)trans, &x3, &y3);
        v17 = Scaleform::Render::Math2D::CheckQuadraticIntersection(v8, v10, v11, x2, y2, x3, y3, x, y);
        v10 = x3;
        v11 = y3;
LABEL_19:
        v8 = v17;
        goto LABEL_20;
      }
    }
LABEL_23:
    v9 = shape->ReadPathInfo(
           (Scaleform::Render::ShapeDataInterface *)shape,
           (Scaleform::Render::ShapePosInfo *)((char *)v19 + 4),
           &x2,
           (unsigned int *)v29);
    if ( v9 == Shape_EndShape )
      return v8 != 0;
  }
  if ( !v8 )
  {
    v8 = 0;
    goto LABEL_5;
  }
  return 1;
}

__int64 __fastcall Scaleform::Render::HitTestLayerStrokes<Scaleform::Render::TransformerBase>(
        const Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapePosInfo *pos,
        const Scaleform::Render::TransformerBase *trans,
        float x,
        float y,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol)
{
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  const Scaleform::Render::ToleranceParams *v9; // rdi
  char v11; // bl
  Scaleform::Render::ShapeDataInterface_vtbl *v14; // rax
  __int128 v15; // xmm0
  Scaleform::Render::ShapePathType v16; // eax
  unsigned __int64 v17; // rdi
  __int64 v18; // r14
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 *v21; // rax
  unsigned __int64 v22; // r8
  char v23; // cl
  Scaleform::Render::ShapeDataInterface_vtbl *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned __int8 v27; // bl
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v32; // [rsp+50h] [rbp-B8h]
  Scaleform::Render::ShapePosInfo posa; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h]
  const Scaleform::Render::ToleranceParams *v35; // [rsp+A0h] [rbp-68h]
  char v36; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int strokeStyleIdx; // [rsp+B0h] [rbp-58h]
  float v38[6]; // [rsp+B8h] [rbp-50h] BYREF

  v7 = *(_OWORD *)&pos->Pos;
  v8 = *(_OWORD *)&pos->LastY;
  v9 = tol;
  v11 = 1;
  v32 = (__int64 *)((char *)&v31 + 4);
  *(_QWORD *)&posa.Pos = gen->Heap1.pHeap;
  v14 = shape->__vftable;
  *(_OWORD *)&posa.StartY = v7;
  v35 = tol;
  v15 = *(_OWORD *)&pos->NumStrokeBits;
  v31 = 32i64;
  *(_OWORD *)&posa.StrokeBase = v8;
  *(_QWORD *)&v8 = *(_QWORD *)&pos->Sfactor;
  *(_OWORD *)&posa.Fill1 = v15;
  v34 = v8;
  v16 = v14->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, pos, v38, (unsigned int *)&v36);
  if ( v16 )
  {
    while ( v16 != Shape_NewLayer || v11 )
    {
      if ( strokeStyleIdx
        && (strokeStyleIdx >= (unsigned int)v31
         || (*((_DWORD *)v32 + ((unsigned __int64)strokeStyleIdx >> 5)) & (1 << (strokeStyleIdx & 0x1F))) == 0) )
      {
        if ( Scaleform::Render::HitTestSingleStroke<Scaleform::Render::TransformerBase>(
               shape,
               (Scaleform::Render::ShapePosInfo *)&posa.StartY,
               strokeStyleIdx,
               trans,
               x,
               y,
               gen,
               v9) )
        {
          v27 = 1;
          goto LABEL_19;
        }
        v17 = strokeStyleIdx;
        if ( strokeStyleIdx >= (unsigned int)v31 )
        {
          v18 = (unsigned int)(v31 + 31) >> 5;
          v19 = 2 * v18;
          if ( (strokeStyleIdx + 32) >> 5 >= 2 * (int)v18 )
            v19 = (strokeStyleIdx + 32) >> 5;
          if ( v19 > (unsigned int)v18 )
          {
            v20 = **(_QWORD **)&posa.Pos;
            if ( v32 == (__int64 *)((char *)&v31 + 4) )
            {
              v32 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v20 + 80))(
                                 *(_QWORD *)&posa.Pos,
                                 4i64 * v19,
                                 0i64);
              *(_DWORD *)v32 = HIDWORD(v31);
              v21 = v32;
            }
            else
            {
              v21 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(v20 + 88))(
                                 *(_QWORD *)&posa.Pos,
                                 v32,
                                 4i64 * v19);
              v32 = v21;
            }
            memset((char *)v21 + 4 * v18, 0, 4i64 * (v19 - (unsigned int)v18));
            LODWORD(v31) = 32 * v19;
          }
        }
        v22 = v17 >> 5;
        v23 = v17 & 0x1F;
        v9 = v35;
        *((_DWORD *)v32 + v22) |= 1 << v23;
      }
      shape->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, pos);
      v24 = shape->__vftable;
      v25 = *(_OWORD *)&pos->LastY;
      *(_OWORD *)&posa.StartY = *(_OWORD *)&pos->Pos;
      v11 = 0;
      v26 = *(_OWORD *)&pos->NumStrokeBits;
      *(_OWORD *)&posa.StrokeBase = v25;
      *(_QWORD *)&v25 = *(_QWORD *)&pos->Sfactor;
      *(_OWORD *)&posa.Fill1 = v26;
      v34 = v25;
      v16 = v24->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)shape, pos, v38, (unsigned int *)&v36);
      if ( v16 == Shape_EndShape )
        break;
    }
  }
  v27 = 0;
  v28 = *(_OWORD *)&posa.StrokeBase;
  *(_OWORD *)&pos->Pos = *(_OWORD *)&posa.StartY;
  v29 = *(_OWORD *)&posa.Fill1;
  *(_OWORD *)&pos->LastY = v28;
  *(_QWORD *)&v28 = v34;
  *(_OWORD *)&pos->NumStrokeBits = v29;
  *(_QWORD *)&pos->Sfactor = v28;
LABEL_19:
  if ( v32 != (__int64 *)((char *)&v31 + 4) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&posa.Pos + 96i64))(*(_QWORD *)&posa.Pos);
  return v27;
}

char __fastcall Scaleform::Render::HitTestRoundJoinStroke<Scaleform::Render::TransformerBase>(
        const Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapePosInfo *pos,
        unsigned int strokeStyleIdx,
        const Scaleform::Render::TransformerBase *trans,
        float scaledWidth,
        float x,
        float y,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol)
{
  unsigned int v9; // er12
  Scaleform::Render::VertexPath *p_mPath; // r14
  unsigned int numVer; // er15
  unsigned int v12; // edi
  unsigned int v13; // er15
  __int64 v14; // r9
  Scaleform::Render::StrokeSorter::PathType *v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned __int64 v18; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v19; // rbx
  unsigned __int8 segType; // al
  __int64 v21; // r9
  Scaleform::Render::StrokeSorter::PathType *v22; // r8
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned __int64 v25; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v26; // rdx
  __int64 v27; // r10
  unsigned int v28; // ecx
  Scaleform::Render::StrokeSorter::PathType *v29; // r8
  unsigned int v30; // edx
  unsigned __int64 v31; // rcx
  unsigned int v32; // edi
  Scaleform::Render::StrokeSorter::VertexType *v33; // r11
  unsigned int v34; // ecx
  Scaleform::Render::StrokeSorter::PathType *v35; // r8
  unsigned int v36; // edx
  unsigned __int64 v37; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v38; // rdx

  Scaleform::Render::AddStrokeToSorter<Scaleform::Render::TransformerBase>(shape, pos, strokeStyleIdx, trans, gen);
  v9 = 0;
  if ( !LODWORD(gen->mStrokeSorter.OutPaths.Size) )
    return 0;
  p_mPath = &gen->mPath;
  while ( 1 )
  {
    numVer = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v9 >> 4][v9 & 0xF].numVer;
    p_mPath->Clear(&gen->mPath);
    v12 = 0;
    v13 = numVer & 0xFFFFFFF;
    if ( v13 )
    {
      do
      {
        v14 = v9 & 0xF;
        v15 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v9 >> 4];
        v16 = v12;
        v17 = v15[v14].numVer & 0xFFFFFFF;
        if ( v12 >= v17 )
          v16 = v12 - v17;
        v18 = v15[v14].start + v16;
        ++v12;
        v19 = &gen->mStrokeSorter.OutVertices.Pages[v18 >> 4][v18 & 0xF];
        segType = v19->segType;
        if ( segType < 2u )
        {
          ((void (__fastcall *)(Scaleform::Render::VertexPath *))p_mPath->AddVertex)(&gen->mPath);
        }
        else if ( segType == 2 )
        {
          v21 = v9 & 0xF;
          v22 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v9 >> 4];
          v23 = v12;
          v24 = v22[v21].numVer & 0xFFFFFFF;
          if ( v12 >= v24 )
            v23 = v12 - v24;
          v25 = v22[v21].start + v23;
          ++v12;
          v26 = &gen->mStrokeSorter.OutVertices.Pages[v25 >> 4][v25 & 0xF];
          Scaleform::Render::TessellateQuadCurve(&gen->mPath, tol, v19->x, v19->y, v26->x, v26->y);
        }
        if ( v19->segType == 3 )
        {
          v27 = v9 & 0xF;
          v28 = v12;
          v29 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v9 >> 4];
          v30 = v29[v27].numVer & 0xFFFFFFF;
          if ( v12 >= v30 )
            v28 = v12 - v30;
          v31 = v29[v27].start + v28;
          v32 = v12 + 1;
          v33 = &gen->mStrokeSorter.OutVertices.Pages[v31 >> 4][v31 & 0xF];
          v34 = v32;
          v35 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v9 >> 4];
          v36 = v35[v27].numVer & 0xFFFFFFF;
          if ( v32 >= v36 )
            v34 = v32 - v36;
          v37 = v35[v27].start + v34;
          v12 = v32 + 1;
          v38 = &gen->mStrokeSorter.OutVertices.Pages[v37 >> 4][v37 & 0xF];
          Scaleform::Render::TessellateCubicCurve(&gen->mPath, tol, v19->x, v19->y, v33->x, v33->y, v38->x, v38->y);
        }
      }
      while ( v12 < v13 );
    }
    if ( Scaleform::Render::HitTestRoundStroke(&gen->mPath, scaledWidth, x, y) )
      break;
    if ( ++v9 >= LODWORD(gen->mStrokeSorter.OutPaths.Size) )
      return 0;
  }
  return 1;
}

char __fastcall Scaleform::Render::HitTestShapeStrokes<Scaleform::Render::TransformerBase>(
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::TransformerBase *trans,
        float x,
        float y,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol)
{
  __int128 v8; // xmm6
  __int128 v9; // xmm7
  __int128 v10; // xmm8
  Scaleform::Render::ShapeDataInterface_vtbl *v11; // rax
  __int64 v12; // xmm9_8
  Scaleform::Render::ShapePosInfo pos; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+78h] [rbp-90h]
  unsigned int v16[4]; // [rsp+80h] [rbp-88h] BYREF
  float v17[6]; // [rsp+90h] [rbp-78h] BYREF

  pos.StartY = shape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
  memset(&pos.LastX, 0, 44);
  v8 = *(_OWORD *)&pos.StartY;
  v9 = 0u;
  v10 = 0u;
  BYTE4(v15) = 0;
  v11 = shape->__vftable;
  LODWORD(v15) = FLOAT_1_0;
  v12 = v15;
  if ( v11->ReadPathInfo(
         (Scaleform::Render::ShapeDataInterface *)shape,
         (Scaleform::Render::ShapePosInfo *)&pos.StartY,
         v17,
         v16) == Shape_EndShape )
    return 0;
  while ( 1 )
  {
    v15 = v12;
    *(_OWORD *)&pos.StartY = v8;
    *(_OWORD *)&pos.StrokeBase = v9;
    *(_OWORD *)&pos.Fill1 = v10;
    if ( (unsigned __int8)Scaleform::Render::HitTestLayerStrokes<Scaleform::Render::TransformerBase>(
                            shape,
                            (Scaleform::Render::ShapePosInfo *)&pos.StartY,
                            trans,
                            x,
                            y,
                            gen,
                            tol) )
      break;
    v8 = *(_OWORD *)&pos.StartY;
    v9 = *(_OWORD *)&pos.StrokeBase;
    v10 = *(_OWORD *)&pos.Fill1;
    v12 = v15;
    if ( shape->ReadPathInfo(
           (Scaleform::Render::ShapeDataInterface *)shape,
           (Scaleform::Render::ShapePosInfo *)&pos.StartY,
           v17,
           v16) == Shape_EndShape )
      return 0;
  }
  return 1;
}

__int64 __fastcall Scaleform::Render::HitTestSingleStroke<Scaleform::Render::TransformerBase>(
        const Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapePosInfo *pos,
        unsigned int strokeStyleIdx,
        const Scaleform::Render::TransformerBase *trans,
        float x,
        float y,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol)
{
  __int16 v12; // ax
  int v13; // er9
  float scaledWidth; // xmm2_4
  int v15; // ecx
  unsigned __int8 v16; // bl
  Scaleform::Render::StrokerTypes::LineJoinType v17; // edx
  Scaleform::Render::StrokerTypes::LineCapType v18; // er9
  Scaleform::Render::StrokerTypes::LineCapType v19; // er8
  int v20; // eax
  float v21; // xmm0_4
  unsigned int v22; // er12
  unsigned int v23; // edi
  unsigned int v24; // er15
  __int64 v25; // r9
  Scaleform::Render::StrokeSorter::PathType *v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned __int64 v29; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v30; // rbx
  unsigned __int8 segType; // al
  __int64 v32; // r9
  Scaleform::Render::StrokeSorter::PathType *v33; // r8
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned __int64 v36; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v37; // rdx
  __int64 v38; // r10
  unsigned int v39; // ecx
  Scaleform::Render::StrokeSorter::PathType *v40; // r8
  unsigned int v41; // edx
  unsigned __int64 v42; // rcx
  unsigned int v43; // edi
  Scaleform::Render::StrokeSorter::VertexType *v44; // r11
  unsigned int v45; // ecx
  Scaleform::Render::StrokeSorter::PathType *v46; // r8
  unsigned int v47; // edx
  unsigned __int64 v48; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v49; // rdx
  float v51; // [rsp+50h] [rbp-78h] BYREF
  int v52; // [rsp+58h] [rbp-70h]
  float v53; // [rsp+5Ch] [rbp-6Ch]
  __int128 v54; // [rsp+68h] [rbp-60h]

  v54 = 0i64;
  shape->GetStrokeStyle(
    (Scaleform::Render::ShapeDataInterface *)shape,
    strokeStyleIdx,
    (Scaleform::Render::StrokeStyleType *)&v51);
  v12 = v52;
  v13 = v52 & 6;
  if ( (v52 & 6) == 0 )
  {
    trans->GetScale((Scaleform::Render::TransformerBase *)trans);
    goto LABEL_7;
  }
  if ( v13 == 2 )
  {
    trans->GetXScale((Scaleform::Render::TransformerBase *)trans);
    goto LABEL_7;
  }
  if ( v13 == 4 )
  {
    trans->GetYScale((Scaleform::Render::TransformerBase *)trans);
LABEL_7:
    v12 = v52;
  }
  scaledWidth = v51 * 1.0;
  v15 = v12 & 0x30;
  if ( (v12 & 0x30) != 0 || (v12 & 0xC0) != 0 )
  {
    v17 = RoundJoin;
    v18 = RoundCap;
    v19 = RoundCap;
    if ( v15 == 16 )
    {
      v17 = BevelJoin;
    }
    else if ( v15 == 32 )
    {
      v17 = MiterJoin;
    }
    if ( (v12 & 0xC0) == 64 )
    {
      v18 = ButtCap;
    }
    else if ( (v12 & 0xC0) == 128 )
    {
      v18 = SquareCap;
    }
    v20 = v12 & 0x300;
    if ( v20 == 256 )
    {
      v19 = ButtCap;
    }
    else if ( v20 == 512 )
    {
      v19 = SquareCap;
    }
    v21 = v53;
    gen->mStroker.LineJoin = v17;
    gen->mStroker.Width = scaledWidth * 0.5;
    gen->mStroker.MiterLimit = v21;
    gen->mStroker.StartLineCap = v18;
    gen->mStroker.EndLineCap = v19;
    Scaleform::Render::Stroker::SetToleranceParam(&gen->mStroker, tol);
    Scaleform::Render::AddStrokeToSorter<Scaleform::Render::TransformerBase>(shape, pos, strokeStyleIdx, trans, gen);
    gen->mStroker.Clear(&gen->mStroker);
    v22 = 0;
    if ( LODWORD(gen->mStrokeSorter.OutPaths.Size) )
    {
      while ( 1 )
      {
        gen->mPath.Clear(&gen->mPath);
        v23 = 0;
        v24 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v22 >> 4][v22 & 0xF].numVer & 0xFFFFFFF;
        if ( v24 )
        {
          do
          {
            v25 = v22 & 0xF;
            v26 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v22 >> 4];
            v27 = v23;
            v28 = v26[v25].numVer & 0xFFFFFFF;
            if ( v23 >= v28 )
              v27 = v23 - v28;
            v29 = v26[v25].start + v27;
            ++v23;
            v30 = &gen->mStrokeSorter.OutVertices.Pages[v29 >> 4][v29 & 0xF];
            segType = v30->segType;
            if ( segType < 2u )
            {
              ((void (__fastcall *)(Scaleform::Render::Stroker *))gen->mStroker.AddVertex)(&gen->mStroker);
            }
            else if ( segType == 2 )
            {
              v32 = v22 & 0xF;
              v33 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v22 >> 4];
              v34 = v23;
              v35 = v33[v32].numVer & 0xFFFFFFF;
              if ( v23 >= v35 )
                v34 = v23 - v35;
              v36 = v33[v32].start + v34;
              ++v23;
              v37 = &gen->mStrokeSorter.OutVertices.Pages[v36 >> 4][v36 & 0xF];
              Scaleform::Render::TessellateQuadCurve(&gen->mStroker, tol, v30->x, v30->y, v37->x, v37->y);
            }
            else if ( segType == 3 )
            {
              v38 = v22 & 0xF;
              v39 = v23;
              v40 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v22 >> 4];
              v41 = v40[v38].numVer & 0xFFFFFFF;
              if ( v23 >= v41 )
                v39 = v23 - v41;
              v42 = v40[v38].start + v39;
              v43 = v23 + 1;
              v44 = &gen->mStrokeSorter.OutVertices.Pages[v42 >> 4][v42 & 0xF];
              v45 = v43;
              v46 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)v22 >> 4];
              v47 = v46[v38].numVer & 0xFFFFFFF;
              if ( v43 >= v47 )
                v45 = v43 - v47;
              v48 = v46[v38].start + v45;
              v23 = v43 + 1;
              v49 = &gen->mStrokeSorter.OutVertices.Pages[v48 >> 4][v48 & 0xF];
              Scaleform::Render::TessellateCubicCurve(
                &gen->mStroker,
                tol,
                v30->x,
                v30->y,
                v44->x,
                v44->y,
                v49->x,
                v49->y);
            }
          }
          while ( v23 < v24 );
        }
        Scaleform::Render::Stroker::GenerateStroke(&gen->mStroker, &gen->mPath);
        if ( Scaleform::Render::HitTestGeneralStroke(&gen->mPath, x, y) )
          break;
        if ( ++v22 >= LODWORD(gen->mStrokeSorter.OutPaths.Size) )
          goto LABEL_42;
      }
      v16 = 1;
    }
    else
    {
LABEL_42:
      v16 = 0;
    }
  }
  else
  {
    v16 = Scaleform::Render::HitTestRoundJoinStroke<Scaleform::Render::TransformerBase>(
            shape,
            pos,
            strokeStyleIdx,
            trans,
            scaledWidth,
            x,
            y,
            gen,
            tol);
  }
  if ( *((_QWORD *)&v54 + 1) )
    Scaleform::RefCountImpl::Release(*((Scaleform::RefCountVImpl **)&v54 + 1));
  if ( (_QWORD)v54 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v54);
  return v16;
}

void __fastcall Scaleform::Render::MorphShapeData::MorphShapeData(
        Scaleform::Render::MorphShapeData *this,
        Scaleform::Render::ShapeDataInterface *morphTo)
{
  this->__vftable = (Scaleform::Render::MorphShapeData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::MorphShapeData_vtbl *)&Scaleform::Render::MorphShapeData::`vftable';
  if ( morphTo )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)morphTo);
  this->pMorphTo.pObject = morphTo;
  this->Container1.Data.Data = 0i64;
  this->Container1.Data.Size = 0i64;
  this->Container1.Data.Policy.Capacity = 0i64;
  this->Container2.Data.Data = 0i64;
  this->Container2.Data.Size = 0i64;
  this->Container2.Data.Policy.Capacity = 0i64;
  this->ShapeData1.__vftable = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->ShapeData1.RefCount = 1;
  this->ShapeData1.__vftable = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >_vtbl *)&Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::`vftable';
  this->ShapeData1.Status = Status_Clean;
  this->ShapeData1.Fills.Data.Data = 0i64;
  this->ShapeData1.Fills.Data.Size = 0i64;
  this->ShapeData1.Fills.Data.Policy.Capacity = 0i64;
  this->ShapeData1.Strokes.Data.Data = 0i64;
  this->ShapeData1.Strokes.Data.Size = 0i64;
  this->ShapeData1.Strokes.Data.Policy.Capacity = 0i64;
  this->ShapeData1.Data = &this->Container1;
  *(_QWORD *)&this->ShapeData1.StartingPos = 0i64;
  *(_QWORD *)&this->ShapeData1.StartY = 0i64;
  this->ShapeData1.LastY = 0.0;
  this->ShapeData2.__vftable = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->ShapeData2.RefCount = 1;
  this->ShapeData2.__vftable = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >_vtbl *)&Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::`vftable';
  this->ShapeData2.Status = Status_Clean;
  this->ShapeData2.Fills.Data.Data = 0i64;
  this->ShapeData2.Fills.Data.Size = 0i64;
  this->ShapeData2.Fills.Data.Policy.Capacity = 0i64;
  this->ShapeData2.Strokes.Data.Data = 0i64;
  this->ShapeData2.Strokes.Data.Size = 0i64;
  this->ShapeData2.Strokes.Data.Policy.Capacity = 0i64;
  this->ShapeData2.Data = &this->Container2;
  *(_QWORD *)&this->ShapeData2.StartingPos = 0i64;
  *(_QWORD *)&this->ShapeData2.StartY = 0i64;
  this->ShapeData2.LastY = 0.0;
}

void __fastcall Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapeDataInterface *shapeMorph)
{
  Scaleform::Render::MorphShapeData *v3; // rdi
  Scaleform::Render::MorphShapeData *v7; // rax
  Scaleform::Render::MorphShapeData *v8; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0i64;
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::ShapeMeshProvider_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::ShapeMeshProvider_vtbl *)&Scaleform::Render::MeshProvider_KeySupport::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>'};
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable = (Scaleform::Render::MeshProvider_vtbl *)&Scaleform::Render::MeshProvider_KeySupport::`vftable'{for `Scaleform::Render::MeshProvider'};
  this->RefCount = 1;
  this->hKeySet.pManager.Value = 0i64;
  this->hKeySet.pKeySet = 0i64;
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::ShapeMeshProvider_vtbl *)&Scaleform::Render::ShapeMeshProvider::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>'};
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable = (Scaleform::Render::MeshProvider_vtbl *)&Scaleform::Render::ShapeMeshProvider::`vftable'{for `Scaleform::Render::MeshProvider'};
  this->DrawLayers.Data.Data = 0i64;
  this->DrawLayers.Data.Size = 0i64;
  this->DrawLayers.Data.Policy.Capacity = 0i64;
  this->FillToStyleTable.Data.Data = 0i64;
  this->FillToStyleTable.Data.Size = 0i64;
  this->FillToStyleTable.Data.Policy.Capacity = 0i64;
  if ( shape )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)shape);
  this->pShapeData.pObject = shape;
  this->pMorphData.pObject = 0i64;
  *(_QWORD *)&this->IdentityBounds.x1 = 0i64;
  *(_QWORD *)&this->IdentityBounds.x2 = 0i64;
  *(_WORD *)&this->GradientMorph = 0;
  if ( shapeMorph )
  {
    v10 = 71;
    v7 = (Scaleform::Render::MorphShapeData *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                Scaleform::Memory::pGlobalHeap,
                                                this,
                                                280i64,
                                                &v10);
    if ( v7 )
    {
      Scaleform::Render::MorphShapeData::MorphShapeData(v7, shapeMorph);
      v3 = v8;
    }
    pObject = (Scaleform::RefCountVImpl *)this->pMorphData.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pMorphData.pObject = v3;
    Scaleform::Render::ShapeMeshProvider::createMorphData(this);
  }
  Scaleform::Render::ShapeMeshProvider::acquireShapeData(this);
}

void __fastcall Scaleform::Render::MorphShapeData::~MorphShapeData(Scaleform::Render::MorphShapeData *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>(&this->ShapeData2.Strokes.Data);
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>(&this->ShapeData2.Fills.Data);
  Scaleform::RefCountImplCore::~RefCountImplCore(&this->ShapeData2);
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>(&this->ShapeData1.Strokes.Data);
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>(&this->ShapeData1.Fills.Data);
  Scaleform::RefCountImplCore::~RefCountImplCore(&this->ShapeData1);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Container2.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Container1.Data.Data);
  pObject = (Scaleform::RefCountVImpl *)this->pMorphTo.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::ShapeMeshProvider::~ShapeMeshProvider(Scaleform::Render::ShapeMeshProvider *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx

  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::ShapeMeshProvider_vtbl *)&Scaleform::Render::ShapeMeshProvider::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>'};
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable = (Scaleform::Render::MeshProvider_vtbl *)&Scaleform::Render::ShapeMeshProvider::`vftable'{for `Scaleform::Render::MeshProvider'};
  if ( this->hKeySet.pKeySet )
    Scaleform::Render::MeshKeySetHandle::releaseCache(&this->hKeySet);
  pObject = (Scaleform::RefCountVImpl *)this->pMorphData.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->pShapeData.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->FillToStyleTable.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->DrawLayers.Data.Data);
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::ShapeMeshProvider_vtbl *)&Scaleform::Render::MeshProvider_KeySupport::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>'};
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable = (Scaleform::Render::MeshProvider_vtbl *)&Scaleform::Render::MeshProvider_KeySupport::`vftable'{for `Scaleform::Render::MeshProvider'};
  Scaleform::Render::MeshKeySetHandle::releaseCache(&this->hKeySet);
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable = (Scaleform::Render::MeshProvider_vtbl *)&Scaleform::Render::MeshProvider::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::MeshProvider_RCImpl::AddRef(Scaleform::Render::MeshProvider_RCImpl *this)
{
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)&this[-1].RefCount);
}

void __fastcall Scaleform::Render::ShapeMeshProvider::AttachShape(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::ShapeDataInterface *shape,
        Scaleform::Render::ShapeDataInterface *shapeMorph)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::MorphShapeData *v7; // rax
  Scaleform::Render::MorphShapeData *v8; // rax
  Scaleform::Render::MorphShapeData *v9; // rdi
  Scaleform::RefCountVImpl *v10; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( shape )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)shape);
  pObject = (Scaleform::RefCountVImpl *)this->pShapeData.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pShapeData.pObject = shape;
  if ( shapeMorph )
  {
    v11 = 71;
    v7 = (Scaleform::Render::MorphShapeData *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                Scaleform::Memory::pGlobalHeap,
                                                this,
                                                280i64,
                                                &v11);
    if ( v7 )
    {
      Scaleform::Render::MorphShapeData::MorphShapeData(v7, shapeMorph);
      v9 = v8;
    }
    else
    {
      v9 = 0i64;
    }
    v10 = (Scaleform::RefCountVImpl *)this->pMorphData.pObject;
    if ( v10 )
      Scaleform::RefCountImpl::Release(v10);
    this->pMorphData.pObject = v9;
    Scaleform::Render::ShapeMeshProvider::createMorphData(this);
  }
  Scaleform::Render::ShapeMeshProvider::acquireShapeData(this);
}

void __fastcall Scaleform::Render::MeshGenerator::Clear(Scaleform::Render::MeshGenerator *this)
{
  this->mTess.Clear(&this->mTess);
  this->mStroker.Clear(&this->mStroker);
  this->mStrokeSorter.Clear(&this->mStrokeSorter);
  this->mHairliner.Clear(&this->mHairliner);
  this->mStrokerAA.Clear(&this->mStrokerAA);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->Heap1);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->Heap2);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->Heap3);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->Heap4);
}

void __fastcall Scaleform::Render::Math2D::CubicCurveExtremum(
        float x1,
        float x2,
        float x3,
        float x4,
        float *t1,
        float *t2)
{
  float v7; // xmm7_4
  float v8; // xmm2_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4

  *t1 = -1.0;
  *t2 = -1.0;
  v7 = x4 - (float)(x3 * 3.0);
  v8 = x2 - x1;
  v9 = (float)(v7 + (float)(x2 * 3.0)) - x1;
  v10 = (float)(x3 - (float)(x2 + x2)) + x1;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
  if ( v11 <= 0.001 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm) > 0.001 )
      *t1 = v8 / (float)(v10 * -2.0);
  }
  else
  {
    v12 = (float)(v10 * v10) - (float)(v8 * v9);
    if ( v12 <= 0.0 )
    {
      if ( v12 == 0.0 )
        *(_DWORD *)t1 = COERCE_UNSIGNED_INT(v10 / v9) ^ _xmm;
    }
    else
    {
      v13 = sqrtf(v12);
      *(_DWORD *)t1 = COERCE_UNSIGNED_INT((float)(v10 - v13) / v9) ^ _xmm;
      *(_DWORD *)t2 = COERCE_UNSIGNED_INT((float)(v13 + v10) / v9) ^ _xmm;
    }
  }
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::CubicTo(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        float cx1,
        float cy1,
        float cx2,
        float cy2,
        float ax,
        float ay)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  unsigned __int8 *v12; // rax
  float v13; // xmm7_4
  float v14; // xmm6_4
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v15; // [rsp+60h] [rbp+8h] BYREF

  Data = this->Data;
  Size = Data->Data.Size;
  v15.Data = Data;
  v10 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v10 > Data->Data.Policy.Capacity )
    {
      v11 = v10 + (v10 >> 2);
      goto LABEL_6;
    }
  }
  else if ( v10 < Data->Data.Policy.Capacity >> 1 )
  {
    v11 = Size + 1;
LABEL_6:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v11);
  }
  v12 = Data->Data.Data;
  Data->Data.Size = v10;
  v12[v10 - 1] = 5;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v15,
    cx1);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v15,
    cy1);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v15,
    cx2);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v15,
    cy2);
  v13 = ax;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v15,
    ax);
  v14 = ay;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v15,
    ay);
  this->LastX = v13;
  this->LastY = v14;
  this->Status = Status_EdgeTo;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Formatter::GetPrevStr(
        Scaleform::Render::MeshProvider *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m,
        float morphRatio)
{
  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ShapeMeshProvider::GetBounds(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  unsigned __int64 Capacity; // rbx
  const Scaleform::Render::ShapeDataInterface *v7; // rbx
  unsigned int v8; // eax
  Scaleform::Render::ShapeDataInterface_vtbl *v9; // rax
  const Scaleform::Render::ShapeDataInterface *v10; // rbx
  unsigned int v11; // eax
  Scaleform::Render::ShapeDataInterface_vtbl *v12; // rax
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  Scaleform::Render::ShapePosInfo pos; // [rsp+30h] [rbp-69h] BYREF
  Scaleform::Render::Rect<float> bounds; // [rsp+70h] [rbp-29h] BYREF
  int v19; // [rsp+80h] [rbp-19h] BYREF
  int v20; // [rsp+84h] [rbp-15h]
  Scaleform::Render::Rect<float> coord; // [rsp+90h] [rbp-9h] BYREF
  float v22[6]; // [rsp+B0h] [rbp+17h] BYREF

  Capacity = this->FillToStyleTable.Data.Policy.Capacity;
  if ( Capacity )
  {
    v7 = (const Scaleform::Render::ShapeDataInterface *)(Capacity + 72);
    bounds = (Scaleform::Render::Rect<float>)_xmm_f149f2caf149f2ca7149f2ca7149f2ca;
    v8 = v7->GetStartingPos((Scaleform::Render::ShapeDataInterface *)v7);
    pos.Sfactor = 1.0;
    pos.Pos = v8;
    v9 = v7->__vftable;
    memset(&pos.StartX, 0, 44);
    pos.Initialized = 0;
    if ( v9->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)v7, &pos, &coord.x1, (unsigned int *)&v19) )
    {
      do
      {
        if ( (v19 == 0) == (v20 == 0) )
          v7->SkipPathData((Scaleform::Render::ShapeDataInterface *)v7, &pos);
        else
          Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(v7, m, &pos, &coord.x1, &bounds);
      }
      while ( v7->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)v7, &pos, &coord.x1, (unsigned int *)&v19) );
    }
    if ( v7->GetStrokeStyleCount((Scaleform::Render::ShapeDataInterface *)v7) )
    {
      v7->Rewind((Scaleform::Render::ShapeDataInterface *)v7);
      Scaleform::Render::ExpandBoundsToStrokesSimplified<Scaleform::Render::Matrix2x4<float>>(v7, m, &bounds);
    }
    v10 = (const Scaleform::Render::ShapeDataInterface *)(this->FillToStyleTable.Data.Policy.Capacity + 176);
    coord = (Scaleform::Render::Rect<float>)_xmm_f149f2caf149f2ca7149f2ca7149f2ca;
    v11 = v10->GetStartingPos((Scaleform::Render::ShapeDataInterface *)v10);
    memset(&pos.StartX, 0, 44);
    pos.Pos = v11;
    v12 = v10->__vftable;
    pos.Sfactor = 1.0;
    pos.Initialized = 0;
    if ( v12->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)v10, &pos, v22, (unsigned int *)&v19) )
    {
      do
      {
        if ( (v19 == 0) == (v20 == 0) )
          v10->SkipPathData((Scaleform::Render::ShapeDataInterface *)v10, &pos);
        else
          Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(v10, m, &pos, v22, &coord);
      }
      while ( v10->ReadPathInfo((Scaleform::Render::ShapeDataInterface *)v10, &pos, v22, (unsigned int *)&v19) );
    }
    if ( v10->GetStrokeStyleCount((Scaleform::Render::ShapeDataInterface *)v10) )
    {
      v10->Rewind((Scaleform::Render::ShapeDataInterface *)v10);
      Scaleform::Render::ExpandBoundsToStrokesSimplified<Scaleform::Render::Matrix2x4<float>>(v10, m, &coord);
    }
    v13 = fmaxf(bounds.x2, coord.x2);
    v14 = fminf(coord.y1, bounds.y1);
    v15 = fmaxf(bounds.y2, coord.y2);
    result->x1 = fminf(coord.x1, bounds.x1);
    result->x2 = v13;
    result->y1 = v14;
    result->y2 = v15;
  }
  else
  {
    Scaleform::Render::ComputeBoundsFillAndStrokesSimplified<Scaleform::Render::Matrix2x4<float>>(
      result,
      (const Scaleform::Render::ShapeDataInterface *)this->FillToStyleTable.Data.Size,
      m,
      Bound_OuterEdges);
  }
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ShapeMeshProvider::GetCorrectBounds(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m,
        float morphRatio,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol)
{
  int v10; // eax
  Scaleform::RefCountVImpl *Capacity; // r14
  Scaleform::RefCountVImpl *Size; // rbx
  Scaleform::Render::ShapeDataInterface_vtbl *v13; // rax
  __int128 v14; // xmm3
  __int128 v15; // xmm2
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  unsigned int v18; // eax
  Scaleform::Render::ShapeDataInterface shape; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::RefCountVImpl *v21; // [rsp+40h] [rbp-C0h]
  Scaleform::RefCountVImpl *v22; // [rsp+48h] [rbp-B8h]
  float v23; // [rsp+50h] [rbp-B0h]
  __int128 v24; // [rsp+54h] [rbp-ACh]
  __int128 v25; // [rsp+64h] [rbp-9Ch]
  __int128 v26; // [rsp+74h] [rbp-8Ch]
  __int64 v27; // [rsp+84h] [rbp-7Ch]
  __int128 v28; // [rsp+8Ch] [rbp-74h]
  __int128 v29; // [rsp+9Ch] [rbp-64h]
  __int128 v30; // [rsp+ACh] [rbp-54h]
  __int64 v31; // [rsp+BCh] [rbp-44h]
  Scaleform::Render::ShapePosInfo pos; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::ShapePosInfo v33; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v34[48]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v35; // [rsp+170h] [rbp+70h]
  int v36[4]; // [rsp+178h] [rbp+78h] BYREF
  int v37[4]; // [rsp+188h] [rbp+88h] BYREF
  float coord[6]; // [rsp+198h] [rbp+98h] BYREF
  float v39[6]; // [rsp+1B0h] [rbp+B0h] BYREF

  v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)this->FillToStyleTable.Data.Size + 48i64))(this->FillToStyleTable.Data.Size);
  Capacity = (Scaleform::RefCountVImpl *)this->FillToStyleTable.Data.Policy.Capacity;
  Size = (Scaleform::RefCountVImpl *)this->FillToStyleTable.Data.Size;
  *(_DWORD *)v34 = v10;
  v13 = (Scaleform::Render::ShapeDataInterface_vtbl *)&Scaleform::Render::MorphInterpolator::`vftable';
  shape.__vftable = (Scaleform::Render::ShapeDataInterface_vtbl *)&Scaleform::Render::MorphInterpolator::`vftable';
  LODWORD(v35) = 1065353216;
  BYTE4(v35) = 0;
  shape.RefCount = 1;
  memset(&v34[4], 0, 44);
  if ( Size )
  {
    Scaleform::Render::RenderBuffer::AddRef(Size);
    v13 = shape.__vftable;
  }
  v21 = Size;
  if ( Capacity )
  {
    Scaleform::Render::RenderBuffer::AddRef(Capacity);
    v13 = shape.__vftable;
  }
  v14 = *(_OWORD *)v34;
  v22 = Capacity;
  v15 = *(_OWORD *)&v34[16];
  result->x1 = 1.0e30;
  v16 = *(_OWORD *)&v34[32];
  result->y1 = 1.0e30;
  v17 = v35;
  v24 = v14;
  result->x2 = -1.0e30;
  v25 = v15;
  result->y2 = -1.0e30;
  v26 = v16;
  v28 = v14;
  v29 = v15;
  v30 = v16;
  v23 = morphRatio;
  v27 = v17;
  v31 = v17;
  v18 = v13->GetStartingPos(&shape);
  if ( gen )
  {
    pos.Pos = v18;
    memset(&pos.StartX, 0, 44);
    pos.Sfactor = 1.0;
    pos.Initialized = 0;
    while ( shape.ReadPathInfo(&shape, &pos, coord, (unsigned int *)v36) )
    {
      if ( (v36[0] == 0) == (v36[1] == 0) )
        shape.SkipPathData(&shape, &pos);
      else
        Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(&shape, m, &pos, coord, result);
    }
    if ( shape.GetStrokeStyleCount(&shape) )
    {
      shape.Rewind(&shape);
      Scaleform::Render::ExpandBoundsToStrokes<Scaleform::Render::Matrix2x4<float>>(&shape, m, gen, tol, result);
    }
  }
  else
  {
    v33.Pos = v18;
    memset(&v33.StartX, 0, 44);
    v33.Sfactor = 1.0;
    v33.Initialized = 0;
    while ( shape.ReadPathInfo(&shape, &v33, v39, (unsigned int *)v37) )
    {
      if ( (v37[0] == 0) == (v37[1] == 0) )
        shape.SkipPathData(&shape, &v33);
      else
        Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(&shape, m, &v33, v39, result);
    }
    if ( shape.GetStrokeStyleCount(&shape) )
    {
      shape.Rewind(&shape);
      Scaleform::Render::ExpandBoundsToStrokesSimplified<Scaleform::Render::Matrix2x4<float>>(&shape, m, result);
    }
  }
  if ( v22 )
    Scaleform::RefCountImpl::Release(v22);
  if ( v21 )
    Scaleform::RefCountImpl::Release(v21);
  Scaleform::RefCountImplCore::~RefCountImplCore(&shape);
  return result;
}

_BOOL8 __fastcall Scaleform::Render::ShapeMeshProvider::GetData(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MeshBase *mesh,
        Scaleform::Render::VertexOutput *verOut,
        unsigned int meshGenFlags)
{
  __int64 drawLayer; // rsi
  Scaleform::Render::Scale9GridInfo *v7; // rbx
  Scaleform::Render::Scale9GridInfo *v11; // rax
  Scaleform::Render::Scale9GridData *pObject; // rdx
  Scaleform::Render::Scale9GridInfo *v13; // rax
  bool Image9Grid; // al
  Scaleform::Render::Scale9GridInfo *v15; // rax
  Scaleform::Render::Scale9GridInfo *v16; // rax
  unsigned int v17; // er9
  Scaleform::Render::ShapeMeshProvider *v18; // rcx
  bool v19; // di
  Scaleform::Render::Matrix2x4<float> viewMtx; // [rsp+40h] [rbp-68h] BYREF

  drawLayer = mesh->Layer;
  v7 = 0i64;
  if ( !mesh->pScale9Grid.pObject )
  {
LABEL_8:
    v17 = *((_DWORD *)&this->hKeySet.pManager.Value->RefCount + 5 * drawLayer + 1);
    v18 = (Scaleform::Render::ShapeMeshProvider *)((char *)this - 16);
    if ( v17 )
      Image9Grid = Scaleform::Render::ShapeMeshProvider::tessellateStroke(
                     v18,
                     hal,
                     v7,
                     v17,
                     drawLayer,
                     mesh,
                     verOut,
                     meshGenFlags);
    else
      Image9Grid = Scaleform::Render::ShapeMeshProvider::tessellateFill(
                     v18,
                     hal,
                     v7,
                     drawLayer,
                     mesh,
                     verOut,
                     meshGenFlags);
    goto LABEL_11;
  }
  if ( !*((_DWORD *)&this->hKeySet.pManager.Value->KeySetLock.cs + 5 * drawLayer) )
  {
    v15 = (Scaleform::Render::Scale9GridInfo *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 448i64,
                                                 0i64);
    if ( v15 )
    {
      Scaleform::Render::Scale9GridInfo::Scale9GridInfo(
        v15,
        mesh->pScale9Grid.pObject,
        &mesh->pScale9Grid.pObject->ViewMtx);
      v7 = v16;
    }
    goto LABEL_8;
  }
  v11 = (Scaleform::Render::Scale9GridInfo *)Scaleform::Memory::pGlobalHeap->Alloc(
                                               Scaleform::Memory::pGlobalHeap,
                                               448i64,
                                               0i64);
  if ( v11 )
  {
    pObject = mesh->pScale9Grid.pObject;
    *(_OWORD *)&viewMtx.M[0][0] = _xmm;
    *(_OWORD *)&viewMtx.M[1][0] = _xmm;
    Scaleform::Render::Scale9GridInfo::Scale9GridInfo(v11, pObject, &viewMtx);
    v7 = v13;
  }
  Image9Grid = Scaleform::Render::ShapeMeshProvider::generateImage9Grid(
                 (Scaleform::Render::ShapeMeshProvider *)((char *)this - 16),
                 hal,
                 v7,
                 verOut,
                 drawLayer);
LABEL_11:
  v19 = Image9Grid;
  if ( v7 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
  return v19;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall Scaleform::Render::ShapeMeshProvider::GetFillCount(
        Scaleform::Render::ShapeMeshProvider *this,
        unsigned int drawLayer,
        unsigned int meshGenFlags)
{
  return *((unsigned int *)&this->hKeySet.pManager.Value->RefCount + 5 * drawLayer);
}

void __fastcall Scaleform::Render::ShapeMeshProvider::GetFillData(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::FillData *pdata,
        unsigned int drawLayer,
        unsigned int fillIndex,
        unsigned int meshGenFlags)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  const Scaleform::Render::VertexFormat *v9; // rax
  Scaleform::Render::ComplexFill *ComplexFill; // rax
  Scaleform::Render::GradientData *pObject; // rdx
  __int64 v12; // rax
  Scaleform::Render::Image *v13; // rcx
  Scaleform::Render::Image *v14; // rax
  __int64 v15; // rax
  Scaleform::Render::ImageFillMode fm; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::Render::FillData v17; // [rsp+28h] [rbp-30h] BYREF

  v5 = drawLayer;
  if ( (meshGenFlags & 2) != 0 )
  {
    Scaleform::Render::FillData::FillData(&v17, Fill_Mask);
    pdata->Type = *(_DWORD *)v8;
    pdata->Color = *(_DWORD *)(v8 + 8);
    pdata->pGradient = *(Scaleform::Render::GradientData **)(v8 + 8);
    pdata->pGradient = *(Scaleform::Render::GradientData **)(v8 + 8);
    pdata->PrimFill = *(_DWORD *)(v8 + 16);
    pdata->FillMode.Fill = *(_BYTE *)(v8 + 20);
    v9 = &Scaleform::Render::VertexXY16iCF32::Format;
LABEL_11:
    pdata->pVFormat = v9;
    return;
  }
  ComplexFill = Scaleform::Render::ShapeMeshProvider::getComplexFill(
                  (Scaleform::Render::ShapeMeshProvider *)((char *)this - 16),
                  drawLayer,
                  fillIndex,
                  0i64);
  if ( !ComplexFill )
  {
    Scaleform::Render::FillData::FillData(&v17, Fill_VColor);
    goto LABEL_10;
  }
  pObject = ComplexFill->pGradient.pObject;
  if ( pObject )
  {
    Scaleform::Render::FillData::FillData(&v17, pObject);
LABEL_10:
    pdata->Type = *(_DWORD *)v12;
    pdata->Color = *(_DWORD *)(v12 + 8);
    pdata->pGradient = *(Scaleform::Render::GradientData **)(v12 + 8);
    pdata->pGradient = *(Scaleform::Render::GradientData **)(v12 + 8);
    pdata->PrimFill = *(_DWORD *)(v12 + 16);
    pdata->FillMode.Fill = *(_BYTE *)(v12 + 20);
    v9 = *(const Scaleform::Render::VertexFormat **)(v12 + 24);
    goto LABEL_11;
  }
  v13 = ComplexFill->pImage.pObject;
  fm.Fill = ComplexFill->FillMode.Fill;
  v14 = v13->GetAsImage(v13);
  Scaleform::Render::FillData::FillData(&v17, v14, &fm.Fill);
  pdata->Type = *(_DWORD *)v15;
  pdata->Color = *(_DWORD *)(v15 + 8);
  pdata->pGradient = *(Scaleform::Render::GradientData **)(v15 + 8);
  pdata->pGradient = *(Scaleform::Render::GradientData **)(v15 + 8);
  pdata->PrimFill = *(_DWORD *)(v15 + 16);
  pdata->FillMode.Fill = *(_BYTE *)(v15 + 20);
  pdata->pVFormat = *(const Scaleform::Render::VertexFormat **)(v15 + 24);
  if ( *((_DWORD *)&this->hKeySet.pManager.Value->KeySetLock.cs + 5 * v5) && (meshGenFlags & 8) != 0 )
  {
    pdata->PrimFill = PrimFill_UVTexture;
    v9 = &Scaleform::Render::Image9GridVertex::Format;
    goto LABEL_11;
  }
}

void __fastcall Scaleform::Render::ShapeMeshProvider::GetFillMatrix(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MeshBase *mesh,
        Scaleform::Render::Matrix2x4<float> *matrix,
        unsigned int drawLayer,
        unsigned int fillIndex)
{
  float *ComplexFill; // rax
  float *v11; // rsi
  __m128 v12; // xmm6
  Scaleform::Render::ShapeMeshProvider *v13; // r15
  const Scaleform::Render::Matrix2x4<float> *MorphMatrix; // rax
  __m128 v15; // xmm2
  Scaleform::Render::Scale9GridData *pObject; // rdx
  Scaleform::Render::TextureManager *v17; // rax
  unsigned int imgFillStyle; // [rsp+30h] [rbp-71h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-6Dh]
  Scaleform::Render::ShapeMeshProvider *v20; // [rsp+38h] [rbp-69h]
  Scaleform::Render::Matrix2x4<float> m; // [rsp+40h] [rbp-61h] BYREF
  Scaleform::Render::Matrix2x4<float> result; // [rsp+60h] [rbp-41h] BYREF

  v19 = fillIndex;
  v20 = (Scaleform::Render::ShapeMeshProvider *)((char *)this - 16);
  imgFillStyle = 0;
  ComplexFill = (float *)Scaleform::Render::ShapeMeshProvider::getComplexFill(
                           (Scaleform::Render::ShapeMeshProvider *)((char *)this - 16),
                           drawLayer,
                           fillIndex,
                           &imgFillStyle);
  v11 = ComplexFill;
  if ( ComplexFill )
  {
    matrix->M[0][0] = ComplexFill[8];
    matrix->M[0][1] = ComplexFill[9];
    matrix->M[0][2] = ComplexFill[10];
    matrix->M[0][3] = ComplexFill[11];
    matrix->M[1][0] = ComplexFill[12];
    matrix->M[1][1] = ComplexFill[13];
    matrix->M[1][2] = ComplexFill[14];
    matrix->M[1][3] = ComplexFill[15];
    if ( mesh )
    {
      if ( !this->FillToStyleTable.Data.Policy.Capacity
        || (v12 = _mm_shuffle_ps((__m128)LODWORD(mesh->MorphRatio), (__m128)LODWORD(mesh->MorphRatio), 0),
            v12.m128_f32[0] == 0.0) )
      {
        v13 = v20;
      }
      else
      {
        v13 = v20;
        MorphMatrix = Scaleform::Render::ShapeMeshProvider::getMorphMatrix(v20, &result, drawLayer, v19);
        *(_OWORD *)&m.M[0][0] = _xmm;
        *(_OWORD *)&m.M[1][0] = _xmm;
        Scaleform::Render::Matrix2x4<float>::SetInverse(&m, MorphMatrix);
        *(_OWORD *)&result.M[0][0] = _xmm;
        *(_OWORD *)&result.M[1][0] = _xmm;
        Scaleform::Render::Matrix2x4<float>::SetInverse(&result, (const Scaleform::Render::Matrix2x4<float> *)v11 + 1);
        v15 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(*(__m128 *)&m.M[1][0], *(__m128 *)&result.M[1][0]), v12),
                *(__m128 *)&result.M[1][0]);
        *(__m128 *)&matrix->M[0][0] = _mm_add_ps(
                                        _mm_mul_ps(_mm_sub_ps(*(__m128 *)&m.M[0][0], *(__m128 *)&result.M[0][0]), v12),
                                        *(__m128 *)&result.M[0][0]);
        *(__m128 *)&matrix->M[1][0] = v15;
        Scaleform::Render::Matrix2x4<float>::Invert(matrix);
      }
      pObject = mesh->pScale9Grid.pObject;
      if ( pObject )
      {
        *(_OWORD *)&result.M[0][0] = _xmm;
        *(_OWORD *)&result.M[1][0] = _xmm;
        Scaleform::Render::ShapeMeshProvider::computeImgAdjustMatrix(v13, pObject, drawLayer, imgFillStyle, &result);
        *(_OWORD *)&m.M[0][0] = _xmm;
        *(_OWORD *)&m.M[1][0] = _xmm;
        Scaleform::Render::Matrix2x4<float>::SetInverse(&m, &result);
        Scaleform::Render::Matrix2x4<float>::Prepend(matrix, &m);
      }
    }
    if ( *((_QWORD *)v11 + 2) )
    {
      v17 = hal->GetTextureManager(hal);
      (*(void (__fastcall **)(_QWORD, Scaleform::Render::Matrix2x4<float> *, Scaleform::Render::TextureManager *))(**((_QWORD **)v11 + 2) + 176i64))(
        *((_QWORD *)v11 + 2),
        &result,
        v17);
      Scaleform::Render::Matrix2x4<float>::Append(matrix, &result);
    }
  }
  else
  {
    *(_QWORD *)&matrix->M[0][0] = 1065353216i64;
    *(_QWORD *)&matrix->M[0][2] = 0i64;
    matrix->M[1][0] = 0.0;
    *(_QWORD *)&matrix->M[1][1] = 1065353216i64;
    matrix->M[1][3] = 0.0;
  }
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int idx,
        Scaleform::Render::FillStyleType *p)
{
  Scaleform::Render::FillStyleType *v4; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  v4 = &this->Fills.Data.Data[idx - 1];
  p->Color = v4->Color;
  pObject = (Scaleform::RefCountVImpl *)v4->pFill.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v6 = (Scaleform::RefCountVImpl *)p->pFill.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  p->pFill.pObject = v4->pFill.pObject;
}

void __fastcall Scaleform::Render::MorphInterpolator::GetFillStyle(
        Scaleform::Render::MorphInterpolator *this,
        unsigned int idx,
        Scaleform::Render::FillStyleType *f1)
{
  Scaleform::Render::MorphShapeData *pObject; // rcx
  float MorphRatio; // xmm3_4
  Scaleform::Render::Color result; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::Render::Color v9; // [rsp+28h] [rbp-20h] BYREF
  Scaleform::RefCountVImpl *v10; // [rsp+30h] [rbp-18h]
  Scaleform::Render::Color c2; // [rsp+50h] [rbp+8h] BYREF
  Scaleform::Render::Color c1; // [rsp+68h] [rbp+20h] BYREF

  ((void (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetFillStyle)(this->pShapeData.pObject);
  pObject = this->pMorphData.pObject;
  if ( pObject && this->MorphRatio != 0.0 )
  {
    v10 = 0i64;
    pObject->pMorphTo.pObject->GetFillStyle(pObject->pMorphTo.pObject, idx, (Scaleform::Render::FillStyleType *)&v9);
    if ( !f1->pFill.pObject )
    {
      MorphRatio = this->MorphRatio;
      c2 = v9;
      c1 = (Scaleform::Render::Color)f1->Color;
      f1->Color = Scaleform::Render::Color::Blend(&result, &c1.Channels.Blue, &c2.Channels.Blue, MorphRatio)->Raw;
    }
    if ( v10 )
      Scaleform::RefCountImpl::Release(v10);
  }
}

__int64 __fastcall Scaleform::Render::ShapeMeshProvider::GetLayerCount(Concurrency::details::ContextBase *this)
{
  return this->m_id;
}

__int64 __fastcall Scaleform::Render::MorphInterpolator::GetFillStyleCount(Scaleform::Render::MorphInterpolator *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetFillStyleCount)(this->pShapeData.pObject);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::MeshProvider::GetIdentityBounds(
        Scaleform::Render::MeshProvider *this,
        Scaleform::Render::Rect<float> *result)
{
  this->GetBounds(
    this,
    result,
    (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ShapeMeshProvider::GetIdentityBounds(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::Rect<float> *result)
{
  result->x1 = *(float *)&this->pMorphData.pObject;
  result->y1 = *((float *)&this->pMorphData.pObject + 1);
  result->x2 = *((float *)&this->pMorphData + 2);
  result->y2 = *((float *)&this->pMorphData + 3);
  return result;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

double __fastcall Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::GetScale(
        Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> *this)
{
  double result; // xmm0_8

  *(float *)&result = Scaleform::Render::Scale9GridInfo::GetScale((Scaleform::Render::Scale9GridInfo *)this->Tr);
  return result;
}

double __fastcall Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float>>::GetScale(
        Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > *this)
{
  const Scaleform::Render::Matrix2x4<float> *Tr; // rax
  double result; // xmm0_8

  Tr = this->Tr;
  *(_QWORD *)&result = LODWORD(Tr->M[1][1]);
  *(float *)&result = sqrtf(
                        (float)((float)((float)(*(float *)&result * 0.70710677) + (float)(Tr->M[1][0] * 0.70710677))
                              * (float)((float)(*(float *)&result * 0.70710677) + (float)(Tr->M[1][0] * 0.70710677)))
                      + (float)((float)((float)(Tr->M[0][1] * 0.70710677) + (float)(Tr->M[0][0] * 0.70710677))
                              * (float)((float)(Tr->M[0][1] * 0.70710677) + (float)(Tr->M[0][0] * 0.70710677))));
  return result;
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Concurrency::details::VirtualProcessorRoot *this)
{
  return this->m_executionResource.m_nodeId;
}

__int64 __fastcall Scaleform::Render::MorphInterpolator::GetStartingPos(Scaleform::Render::MorphInterpolator *this)
{
  Scaleform::Render::MorphShapeData *pObject; // rax

  pObject = this->pMorphData.pObject;
  if ( pObject )
    return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *))pObject->ShapeData1.GetStartingPos)(&pObject->ShapeData1);
  else
    return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetStartingPos)(this->pShapeData.pObject);
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int idx,
        Scaleform::Render::StrokeStyleType *p)
{
  Scaleform::Render::StrokeStyleType::operator=(p, &this->Strokes.Data.Data[idx - 1]);
}

void __fastcall Scaleform::Render::MorphInterpolator::GetStrokeStyle(
        Scaleform::Render::MorphInterpolator *this,
        unsigned int idx,
        Scaleform::Render::StrokeStyleType *s1)
{
  Scaleform::Render::MorphShapeData *pObject; // rcx
  bool v7; // zf
  float MorphRatio; // xmm3_4
  Scaleform::Render::Color result; // [rsp+20h] [rbp-38h] BYREF
  int v10[6]; // [rsp+28h] [rbp-30h] BYREF
  Scaleform::RefCountVImpl *v11[2]; // [rsp+40h] [rbp-18h]
  Scaleform::Render::Color c2; // [rsp+60h] [rbp+8h] BYREF
  Scaleform::Render::Color c1; // [rsp+78h] [rbp+20h] BYREF

  ((void (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetStrokeStyle)(this->pShapeData.pObject);
  pObject = this->pMorphData.pObject;
  if ( pObject && this->MorphRatio != 0.0 )
  {
    *(_OWORD *)v11 = 0i64;
    pObject->pMorphTo.pObject->GetStrokeStyle(pObject->pMorphTo.pObject, idx, (Scaleform::Render::StrokeStyleType *)v10);
    v7 = s1->pFill.pObject == 0i64;
    s1->Width = (float)((float)(*(float *)v10 - s1->Width) * this->MorphRatio) + s1->Width;
    if ( v7 )
    {
      MorphRatio = this->MorphRatio;
      c2 = (Scaleform::Render::Color)v10[4];
      c1 = (Scaleform::Render::Color)s1->Color;
      s1->Color = Scaleform::Render::Color::Blend(&result, &c1.Channels.Blue, &c2.Channels.Blue, MorphRatio)->Raw;
    }
    if ( v11[1] )
      Scaleform::RefCountImpl::Release(v11[1]);
    if ( v11[0] )
      Scaleform::RefCountImpl::Release(v11[0]);
  }
}

void __fastcall Scaleform::Render::ShapeMeshProvider::GetStrokeStyle(
        Scaleform::Render::ShapeMeshProvider *this,
        unsigned int idx,
        Scaleform::Render::StrokeStyleType *s1,
        float morphRatio)
{
  Scaleform::Render::MorphShapeData *pObject; // rcx
  bool v8; // zf
  Scaleform::Render::Color c1; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::Render::Color result; // [rsp+24h] [rbp-44h] BYREF
  int v11[6]; // [rsp+28h] [rbp-40h] BYREF
  Scaleform::RefCountVImpl *v12[2]; // [rsp+40h] [rbp-28h]
  Scaleform::Render::Color c2; // [rsp+70h] [rbp+8h] BYREF

  ((void (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetStrokeStyle)(this->pShapeData.pObject);
  pObject = this->pMorphData.pObject;
  if ( pObject && morphRatio != 0.0 )
  {
    *(_OWORD *)v12 = 0i64;
    pObject->pMorphTo.pObject->GetStrokeStyle(pObject->pMorphTo.pObject, idx, (Scaleform::Render::StrokeStyleType *)v11);
    v8 = s1->pFill.pObject == 0i64;
    s1->Width = (float)((float)(*(float *)v11 - s1->Width) * morphRatio) + s1->Width;
    if ( v8 )
    {
      c2 = (Scaleform::Render::Color)v11[4];
      c1 = (Scaleform::Render::Color)s1->Color;
      s1->Color = Scaleform::Render::Color::Blend(&result, &c1.Channels.Blue, &c2.Channels.Blue, morphRatio)->Raw;
    }
    if ( v12[1] )
      Scaleform::RefCountImpl::Release(v12[1]);
    if ( v12[0] )
      Scaleform::RefCountImpl::Release(v12[0]);
  }
}

__int64 __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  return LODWORD(this->Strokes.Data.Size);
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::GetImageType(Scaleform::Render::MorphInterpolator *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetStrokeStyleCount)(this->pShapeData.pObject);
}

double __fastcall Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::GetXScale(
        Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> *this)
{
  double result; // xmm0_8

  *(float *)&result = Scaleform::Render::Scale9GridInfo::GetXScale((Scaleform::Render::Scale9GridInfo *)this->Tr);
  return result;
}

double __fastcall Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float>>::GetXScale(
        Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > *this)
{
  const Scaleform::Render::Matrix2x4<float> *Tr; // rax
  double result; // xmm0_8

  Tr = this->Tr;
  *(_QWORD *)&result = LODWORD(Tr->M[0][0]);
  *(float *)&result = sqrtf((float)(*(float *)&result * *(float *)&result) + (float)(Tr->M[1][0] * Tr->M[1][0]));
  return result;
}

double __fastcall Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::GetYScale(
        Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> *this)
{
  double result; // xmm0_8

  *(float *)&result = Scaleform::Render::Scale9GridInfo::GetYScale((Scaleform::Render::Scale9GridInfo *)this->Tr);
  return result;
}

double __fastcall Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float>>::GetYScale(
        Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > *this)
{
  const Scaleform::Render::Matrix2x4<float> *Tr; // rax
  double result; // xmm0_8

  Tr = this->Tr;
  *(_QWORD *)&result = LODWORD(Tr->M[0][1]);
  *(float *)&result = sqrtf((float)(*(float *)&result * *(float *)&result) + (float)(Tr->M[1][1] * Tr->M[1][1]));
  return result;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

__int64 __fastcall Scaleform::Render::ShapeMeshProvider::HitTestShape(
        Scaleform::Render::ShapeMeshProvider *this,
        const Scaleform::Render::Matrix2x4<float> *m,
        float x,
        float y,
        float morphRatio,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol,
        Scaleform::Render::Scale9GridInfo *s9g)
{
  unsigned int v10; // eax
  Scaleform::RefCountVImpl *pObject; // rdi
  Scaleform::RefCountVImpl *v12; // rbx
  Scaleform::Render::TransformerBase *p_trans; // rbx
  unsigned __int8 v14; // bl
  char v15; // al
  Scaleform::Render::TransformerBase trans; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::Render::Scale9GridInfo *v18; // [rsp+40h] [rbp-C8h]
  void **v19; // [rsp+48h] [rbp-C0h] BYREF
  const Scaleform::Render::Matrix2x4<float> *v20; // [rsp+50h] [rbp-B8h]
  _BYTE v21[48]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h]
  Scaleform::Render::ShapeDataInterface shape; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::RefCountVImpl *v24; // [rsp+A8h] [rbp-60h]
  Scaleform::RefCountVImpl *v25; // [rsp+B0h] [rbp-58h]
  float v26; // [rsp+B8h] [rbp-50h]
  __int128 v27; // [rsp+BCh] [rbp-4Ch]
  __int128 v28; // [rsp+CCh] [rbp-3Ch]
  __int128 v29; // [rsp+DCh] [rbp-2Ch]
  __int64 v30; // [rsp+ECh] [rbp-1Ch]
  __int128 v31; // [rsp+F4h] [rbp-14h]
  __int128 v32; // [rsp+104h] [rbp-4h]
  __int128 v33; // [rsp+114h] [rbp+Ch]
  __int64 v34; // [rsp+124h] [rbp+1Ch]

  v10 = this->pShapeData.pObject->GetStartingPos(this->pShapeData.pObject);
  pObject = (Scaleform::RefCountVImpl *)this->pMorphData.pObject;
  v12 = (Scaleform::RefCountVImpl *)this->pShapeData.pObject;
  *(_DWORD *)v21 = v10;
  shape.__vftable = (Scaleform::Render::ShapeDataInterface_vtbl *)&Scaleform::Render::MorphInterpolator::`vftable';
  BYTE4(v22) = 0;
  shape.RefCount = 1;
  memset(&v21[4], 0, 44);
  LODWORD(v22) = FLOAT_1_0;
  if ( v12 )
    Scaleform::Render::RenderBuffer::AddRef(v12);
  v24 = v12;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v19 = &Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float>>::`vftable';
  trans.__vftable = (Scaleform::Render::TransformerBase_vtbl *)&Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::`vftable';
  v26 = morphRatio;
  v25 = pObject;
  v30 = v22;
  v34 = v22;
  v20 = 0i64;
  v18 = 0i64;
  v27 = *(_OWORD *)v21;
  v28 = *(_OWORD *)&v21[16];
  v29 = *(_OWORD *)&v21[32];
  v31 = *(_OWORD *)v21;
  v32 = *(_OWORD *)&v21[16];
  v33 = *(_OWORD *)&v21[32];
  if ( s9g )
    v18 = s9g;
  else
    v20 = m;
  p_trans = (Scaleform::Render::TransformerBase *)&v19;
  if ( s9g )
    p_trans = &trans;
  if ( gen )
  {
    if ( Scaleform::Render::HitTestFill<Scaleform::Render::TransformerBase>(&shape, p_trans, x, y) )
    {
      v14 = 1;
      goto LABEL_18;
    }
    if ( !shape.GetStrokeStyleCount(&shape) )
    {
      v14 = 0;
      goto LABEL_18;
    }
    shape.Rewind(&shape);
    v15 = Scaleform::Render::HitTestShapeStrokes<Scaleform::Render::TransformerBase>(&shape, p_trans, x, y, gen, tol);
  }
  else
  {
    v15 = Scaleform::Render::HitTestFill<Scaleform::Render::Matrix2x4<float>>(&shape, m, x, y);
  }
  v14 = v15;
LABEL_18:
  trans.__vftable = (Scaleform::Render::TransformerBase_vtbl *)&Scaleform::Render::TransformerBase::`vftable';
  v19 = &Scaleform::Render::TransformerBase::`vftable';
  if ( v25 )
    Scaleform::RefCountImpl::Release(v25);
  if ( v24 )
    Scaleform::RefCountImpl::Release(v24);
  Scaleform::RefCountImplCore::~RefCountImplCore(&shape);
  return v14;
}

__int64 __fastcall Scaleform::Render::ShapeMeshProvider::HitTestShape(
        Scaleform::Render::ShapeMeshProvider *this,
        const Scaleform::Render::Matrix2x4<float> *m,
        float x,
        float y,
        float morphRatio,
        Scaleform::Render::StrokeGenerator *gen,
        const Scaleform::Render::ToleranceParams *tol)
{
  return Scaleform::Render::ShapeMeshProvider::HitTestShape(
           (Scaleform::Render::ShapeMeshProvider *)((char *)this - 16),
           m,
           x,
           y,
           morphRatio,
           gen,
           tol,
           0i64);
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::Matrix2x4<float>::Invert(
        Scaleform::Render::Matrix2x4<float> *this)
{
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-28h] BYREF

  m = *this;
  Scaleform::Render::Matrix2x4<float>::SetInverse(this, &m);
  return this;
}

bool __fastcall Scaleform::Render::Matrix2x4<float>::IsFreeRotation(
        Scaleform::Render::Matrix2x4<float> *this,
        float epsilon)
{
  return (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(this->M[0][1] * 0.0) + this->M[0][0]) + 0.0)) & _xmm) > epsilon
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(this->M[1][1] * 0.0) + this->M[1][0]) + 0.0)) & _xmm) > epsilon;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        float x,
        float y)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int8 *v8; // rax
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v9; // [rsp+50h] [rbp+8h] BYREF

  Data = this->Data;
  v9.Data = Data;
  Size = Data->Data.Size;
  v6 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v6 > Data->Data.Policy.Capacity )
    {
      v7 = v6 + (v6 >> 2);
      goto LABEL_6;
    }
  }
  else if ( v6 < Data->Data.Policy.Capacity >> 1 )
  {
    v7 = Size + 1;
LABEL_6:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v7);
  }
  v8 = Data->Data.Data;
  Data->Data.Size = v6;
  v8[v6 - 1] = 3;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v9,
    x);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v9,
    y);
  this->LastX = x;
  this->LastY = y;
  this->Status = Status_EdgeTo;
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        float x,
        float y)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int8 *v8; // rax
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v9; // [rsp+50h] [rbp+8h] BYREF

  Data = this->Data;
  v9.Data = Data;
  Size = Data->Data.Size;
  v6 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v6 > Data->Data.Policy.Capacity )
    {
      v7 = v6 + (v6 >> 2);
      goto LABEL_6;
    }
  }
  else if ( v6 < Data->Data.Policy.Capacity >> 1 )
  {
    v7 = Size + 1;
LABEL_6:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v7);
  }
  v8 = Data->Data.Data;
  Data->Data.Size = v6;
  v8[v6 - 1] = 2;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v9,
    x);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v9,
    y);
  this->StartX = x;
  this->StartY = y;
  this->LastX = x;
  this->LastY = y;
  this->Status = Status_MoveTo;
}

void __fastcall Scaleform::ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2>::PushBack(
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2> *this,
        const Scaleform::Render::VertexOutput::Fill *val)
{
  unsigned __int64 Size; // rax
  unsigned __int64 v5; // rdx
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v7; // rdx
  Scaleform::Render::VertexOutput::Fill *v8; // rax
  Scaleform::Render::VertexOutput::Fill *Static; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  unsigned __int64 Reserved; // r8
  Scaleform::Render::VertexOutput::Fill *Data; // rdx
  unsigned __int64 v14; // r8
  Scaleform::Render::VertexOutput::Fill *v15; // rax
  unsigned __int64 v16; // rcx

  Size = this->Size;
  if ( Size >= 0x10 )
  {
    if ( Size == 16 )
    {
      v5 = 2 * this->Reserved;
      this->Reserved = v5;
      pHeap = this->pHeap;
      v7 = 32 * v5;
      if ( pHeap )
        v8 = (Scaleform::Render::VertexOutput::Fill *)pHeap->Alloc(pHeap, v7, 0i64);
      else
        v8 = (Scaleform::Render::VertexOutput::Fill *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        this,
                                                        v7,
                                                        0i64);
      this->Data = v8;
      Static = this->Static;
      v10 = 4i64;
      do
      {
        v8 += 4;
        v11 = *(_OWORD *)&Static->VertexCount;
        Static += 4;
        *(_OWORD *)&v8[-4].VertexCount = v11;
        *(_OWORD *)&v8[-4].FillIndex0 = *(_OWORD *)&Static[-4].FillIndex0;
        *(_OWORD *)&v8[-3].VertexCount = *(_OWORD *)&Static[-3].VertexCount;
        *(_OWORD *)&v8[-3].FillIndex0 = *(_OWORD *)&Static[-3].FillIndex0;
        *(_OWORD *)&v8[-2].VertexCount = *(_OWORD *)&Static[-2].VertexCount;
        *(_OWORD *)&v8[-2].FillIndex0 = *(_OWORD *)&Static[-2].FillIndex0;
        *(_OWORD *)&v8[-1].VertexCount = *(_OWORD *)&Static[-1].VertexCount;
        *(_OWORD *)&v8[-1].FillIndex0 = *(_OWORD *)&Static[-1].FillIndex0;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      Reserved = this->Reserved;
      if ( Size >= Reserved )
      {
        Data = this->Data;
        v14 = 2 * Reserved;
        this->Reserved = v14;
        this->Data = (Scaleform::Render::VertexOutput::Fill *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                Data,
                                                                32 * v14);
      }
    }
    v15 = this->Data;
    v16 = this->Size;
    *(_OWORD *)&v15[v16].VertexCount = *(_OWORD *)&val->VertexCount;
    *(_OWORD *)&v15[v16].FillIndex0 = *(_OWORD *)&val->FillIndex0;
    ++this->Size;
  }
  else
  {
    this->Static[Size] = *val;
    ++this->Size;
  }
}

void __fastcall Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2>::PushBack(
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> *this,
        const Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *val)
{
  unsigned __int64 Size; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *v8; // rax
  Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *Static; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  unsigned __int64 Reserved; // rcx
  Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *Data; // rdx
  unsigned __int64 v14; // rcx
  Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *v15; // rax

  Size = this->Size;
  if ( Size >= 0x20 )
  {
    if ( Size == 32 )
    {
      v6 = 2 * this->Reserved;
      this->Reserved = v6;
      pHeap = this->pHeap;
      if ( pHeap )
        v8 = (Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *)pHeap->Alloc(pHeap, 24 * v6, 0i64);
      else
        v8 = (Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                        Scaleform::Memory::pGlobalHeap,
                                                                        this,
                                                                        24 * v6,
                                                                        0i64);
      this->Data = v8;
      Static = this->Static;
      v10 = 6i64;
      do
      {
        v8 = (Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *)((char *)v8 + 128);
        v11 = *(_OWORD *)&Static->ShapeLayer;
        Static = (Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *)((char *)Static + 128);
        *(_OWORD *)&v8[-6].Styles[2] = v11;
        *(_OWORD *)v8[-5].Styles = *(_OWORD *)Static[-5].Styles;
        *(_OWORD *)&v8[-4].ShapeLayer = *(_OWORD *)&Static[-4].ShapeLayer;
        *(_OWORD *)&v8[-4].Styles[2] = *(_OWORD *)&Static[-4].Styles[2];
        *(_OWORD *)v8[-3].Styles = *(_OWORD *)Static[-3].Styles;
        *(_OWORD *)&v8[-2].ShapeLayer = *(_OWORD *)&Static[-2].ShapeLayer;
        *(_OWORD *)&v8[-2].Styles[2] = *(_OWORD *)&Static[-2].Styles[2];
        *(_OWORD *)v8[-1].Styles = *(_OWORD *)Static[-1].Styles;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      Reserved = this->Reserved;
      if ( Size >= Reserved )
      {
        Data = this->Data;
        this->Reserved = 2 * Reserved;
        this->Data = (Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                                Scaleform::Memory::pGlobalHeap,
                                                                                Data,
                                                                                48 * Reserved);
      }
    }
    v14 = this->Size;
    v15 = this->Data;
    *(_OWORD *)&v15[v14].ShapeLayer = *(_OWORD *)&val->ShapeLayer;
    *(_QWORD *)&v15[v14].Styles[2] = *(_QWORD *)&val->Styles[2];
    ++this->Size;
  }
  else
  {
    v5 = Size;
    *(_OWORD *)&this->Static[v5].ShapeLayer = *(_OWORD *)&val->ShapeLayer;
    *(_QWORD *)&this->Static[v5].Styles[2] = *(_QWORD *)&val->Styles[2];
    ++this->Size;
  }
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::QuadTo(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        float cx,
        float cy,
        float ax,
        float ay)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int8 *v10; // rax
  float v11; // xmm6_4
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v12; // [rsp+60h] [rbp+8h] BYREF

  Data = this->Data;
  Size = Data->Data.Size;
  v12.Data = Data;
  v8 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v8 > Data->Data.Policy.Capacity )
    {
      v9 = v8 + (v8 >> 2);
      goto LABEL_6;
    }
  }
  else if ( v8 < Data->Data.Policy.Capacity >> 1 )
  {
    v9 = Size + 1;
LABEL_6:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v9);
  }
  v10 = Data->Data.Data;
  Data->Data.Size = v8;
  v10[v8 - 1] = 4;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v12,
    cx);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v12,
    cy);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v12,
    ax);
  v11 = ay;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
    &v12,
    ay);
  this->LastX = ax;
  this->LastY = v11;
  this->Status = Status_EdgeTo;
}

__int64 __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord)
{
  __int64 v3; // r9
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rax
  __int64 v6; // r11
  unsigned __int8 v7; // bl
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 result; // rax
  int v14; // [rsp+10h] [rbp+10h]
  int v15; // [rsp+10h] [rbp+10h]
  int v16; // [rsp+10h] [rbp+10h]

  v3 = pos->Pos;
  Data = this->Data;
  v6 = (unsigned int)(v3 + 1);
  v7 = Data->Data.Data[v3];
  pos->Pos = v6;
  if ( v7 == 6 )
    return 0i64;
  BYTE1(v14) = Data->Data.Data[(unsigned int)(v3 + 2)];
  LOBYTE(v14) = Data->Data.Data[v6];
  BYTE2(v14) = Data->Data.Data[(unsigned int)(v3 + 3)];
  HIBYTE(v14) = Data->Data.Data[(unsigned int)(v3 + 4)];
  *(_DWORD *)coord = v14;
  pos->Pos += 4;
  v8 = pos->Pos;
  BYTE1(v14) = Data->Data.Data[(unsigned int)(v8 + 1)];
  LOBYTE(v14) = Data->Data.Data[v8];
  BYTE2(v14) = Data->Data.Data[(unsigned int)(v8 + 2)];
  HIBYTE(v14) = Data->Data.Data[(unsigned int)(v8 + 3)];
  *((_DWORD *)coord + 1) = v14;
  pos->Pos += 4;
  v9 = pos->Pos;
  if ( (unsigned __int8)(v7 - 4) > 1u )
    return 1i64;
  BYTE1(v15) = Data->Data.Data[(unsigned int)(v9 + 1)];
  LOBYTE(v15) = Data->Data.Data[v9];
  BYTE2(v15) = Data->Data.Data[(unsigned int)(v9 + 2)];
  HIBYTE(v15) = Data->Data.Data[(unsigned int)(v9 + 3)];
  *((_DWORD *)coord + 2) = v15;
  pos->Pos += 4;
  v10 = pos->Pos;
  BYTE1(v15) = Data->Data.Data[(unsigned int)(v10 + 1)];
  LOBYTE(v15) = Data->Data.Data[v10];
  BYTE2(v15) = Data->Data.Data[(unsigned int)(v10 + 2)];
  HIBYTE(v15) = Data->Data.Data[(unsigned int)(v10 + 3)];
  *((_DWORD *)coord + 3) = v15;
  pos->Pos += 4;
  v11 = pos->Pos;
  if ( v7 != 5 )
    return 2i64;
  BYTE1(v16) = Data->Data.Data[(unsigned int)(v11 + 1)];
  LOBYTE(v16) = Data->Data.Data[v11];
  BYTE2(v16) = Data->Data.Data[(unsigned int)(v11 + 2)];
  HIBYTE(v16) = Data->Data.Data[(unsigned int)(v11 + 3)];
  *((_DWORD *)coord + 4) = v16;
  pos->Pos += 4;
  v12 = pos->Pos;
  BYTE1(v16) = Data->Data.Data[(unsigned int)(v12 + 1)];
  LOBYTE(v16) = Data->Data.Data[v12];
  BYTE2(v16) = Data->Data.Data[(unsigned int)(v12 + 2)];
  HIBYTE(v16) = Data->Data.Data[(unsigned int)(v12 + 3)];
  result = 3i64;
  *((_DWORD *)coord + 5) = v16;
  pos->Pos += 4;
  return result;
}

__int64 __fastcall Scaleform::Render::MorphInterpolator::ReadEdge(
        Scaleform::Render::MorphInterpolator *this,
        Scaleform::Render::ShapePosInfo *pos1,
        float *coord1)
{
  Scaleform::Render::MorphShapeData *pObject; // rcx
  unsigned int v7; // esi
  int v8[6]; // [rsp+20h] [rbp-38h] BYREF

  pObject = this->pMorphData.pObject;
  if ( !pObject )
    return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *, Scaleform::Render::ShapePosInfo *))this->pShapeData.pObject->ReadEdge)(
             this->pShapeData.pObject,
             pos1);
  v7 = ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *, Scaleform::Render::ShapePosInfo *))pObject->ShapeData1.ReadEdge)(
         &pObject->ShapeData1,
         pos1);
  this->pMorphData.pObject->ShapeData2.ReadEdge(&this->pMorphData.pObject->ShapeData2, &this->Pos2, (float *)v8);
  if ( v7 )
  {
    *coord1 = (float)((float)(*(float *)v8 - *coord1) * this->MorphRatio) + *coord1;
    coord1[1] = (float)((float)(*(float *)&v8[1] - coord1[1]) * this->MorphRatio) + coord1[1];
    if ( v7 - 2 <= 1 )
    {
      coord1[2] = (float)((float)(*(float *)&v8[2] - coord1[2]) * this->MorphRatio) + coord1[2];
      coord1[3] = (float)((float)(*(float *)&v8[3] - coord1[3]) * this->MorphRatio) + coord1[3];
      if ( v7 == 3 )
      {
        coord1[4] = (float)((float)(*(float *)&v8[4] - coord1[4]) * this->MorphRatio) + coord1[4];
        coord1[5] = (float)((float)(*(float *)&v8[5] - coord1[5]) * this->MorphRatio) + coord1[5];
      }
    }
  }
  return v7;
}

__int64 __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadPathInfo(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        unsigned int *styles)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v10; // ebp
  unsigned __int8 v11; // r8
  __int64 v12; // rbx
  int v13; // esi
  unsigned __int8 *v14; // rdi
  unsigned int v15; // er9
  unsigned int v16; // er9
  int v17; // ecx
  int v18; // er8
  __int64 v19; // rbx
  unsigned __int8 *v20; // rdi
  unsigned int v21; // er9
  unsigned int v22; // er9
  int v23; // ecx
  int v24; // er8
  __int64 v25; // rbx
  unsigned __int8 *v26; // rdi
  unsigned int v27; // er9
  unsigned int v28; // er9
  int v29; // er8
  __int64 v30; // r9
  __int64 v31; // r9
  unsigned __int8 *v32; // r8
  int v33; // [rsp+20h] [rbp+8h]

  Data = this->Data;
  v6 = pos->Pos;
  if ( v6 >= Data->Data.Size )
    return 0i64;
  v10 = 1;
  v11 = Data->Data.Data[v6];
  pos->Pos = v6 + 1;
  if ( v11 == 7 )
    return 0i64;
  if ( !v11 )
  {
    v10 = 2;
    pos->Pos = v6 + 2;
  }
  v12 = pos->Pos;
  v13 = 4;
  v14 = Data->Data.Data;
  v15 = Data->Data.Data[v12];
  if ( (Data->Data.Data[v12] & 3) != 0 )
  {
    if ( (Data->Data.Data[v12] & 3) == 1 )
    {
      *styles = (v15 >> 2) | (v14[(unsigned int)(v12 + 1)] << 6);
      v17 = 2;
    }
    else
    {
      v16 = v15 >> 2;
      if ( (Data->Data.Data[v12] & 3) == 2 )
      {
        v17 = 3;
        v18 = v16 | ((v14[(unsigned int)(v12 + 1)] | (v14[(unsigned int)(v12 + 2)] << 8)) << 6);
      }
      else
      {
        v17 = 4;
        v18 = v16 | ((v14[(unsigned int)(v12 + 1)] | ((v14[(unsigned int)(v12 + 2)] | (v14[(unsigned int)(v12 + 3)] << 8)) << 8)) << 6);
      }
      *styles = v18;
    }
  }
  else
  {
    v17 = 1;
    *styles = v15 >> 2;
  }
  pos->Pos += v17;
  v19 = pos->Pos;
  v20 = Data->Data.Data;
  v21 = Data->Data.Data[v19];
  if ( (Data->Data.Data[v19] & 3) != 0 )
  {
    if ( (Data->Data.Data[v19] & 3) == 1 )
    {
      styles[1] = (v21 >> 2) | (v20[(unsigned int)(v19 + 1)] << 6);
      v23 = 2;
    }
    else
    {
      v22 = v21 >> 2;
      if ( (Data->Data.Data[v19] & 3) == 2 )
      {
        v23 = 3;
        v24 = v22 | ((v20[(unsigned int)(v19 + 1)] | (v20[(unsigned int)(v19 + 2)] << 8)) << 6);
      }
      else
      {
        v23 = 4;
        v24 = v22 | ((v20[(unsigned int)(v19 + 1)] | ((v20[(unsigned int)(v19 + 2)] | (v20[(unsigned int)(v19 + 3)] << 8)) << 8)) << 6);
      }
      styles[1] = v24;
    }
  }
  else
  {
    v23 = 1;
    styles[1] = v21 >> 2;
  }
  pos->Pos += v23;
  v25 = pos->Pos;
  v26 = Data->Data.Data;
  v27 = Data->Data.Data[v25];
  if ( (Data->Data.Data[v25] & 3) != 0 )
  {
    if ( (Data->Data.Data[v25] & 3) == 1 )
    {
      v13 = 2;
      styles[2] = (v27 >> 2) | (v26[(unsigned int)(v25 + 1)] << 6);
    }
    else
    {
      v28 = v27 >> 2;
      if ( (Data->Data.Data[v25] & 3) == 2 )
      {
        v13 = 3;
        v29 = v28 | ((v26[(unsigned int)(v25 + 1)] | (v26[(unsigned int)(v25 + 2)] << 8)) << 6);
      }
      else
      {
        v29 = v28 | ((v26[(unsigned int)(v25 + 1)] | ((v26[(unsigned int)(v25 + 2)] | (v26[(unsigned int)(v25 + 3)] << 8)) << 8)) << 6);
      }
      styles[2] = v29;
    }
  }
  else
  {
    v13 = 1;
    styles[2] = v27 >> 2;
  }
  pos->Pos += v13 + 1;
  v30 = pos->Pos;
  BYTE1(v33) = Data->Data.Data[(unsigned int)(v30 + 1)];
  LOBYTE(v33) = Data->Data.Data[v30];
  BYTE2(v33) = Data->Data.Data[(unsigned int)(v30 + 2)];
  HIBYTE(v33) = Data->Data.Data[(unsigned int)(v30 + 3)];
  *(_DWORD *)coord = v33;
  pos->Pos += 4;
  v31 = pos->Pos;
  v32 = Data->Data.Data;
  result = v10;
  LOBYTE(v33) = v32[v31];
  BYTE1(v33) = v32[(unsigned int)(v31 + 1)];
  BYTE2(v33) = v32[(unsigned int)(v31 + 2)];
  HIBYTE(v33) = v32[(unsigned int)(v31 + 3)];
  *((_DWORD *)coord + 1) = v33;
  pos->Pos += 4;
  return result;
}

__int64 __fastcall Scaleform::Render::MorphInterpolator::ReadPathInfo(
        Scaleform::Render::MorphInterpolator *this,
        Scaleform::Render::ShapePosInfo *pos1,
        float *coord1,
        unsigned int *styles1)
{
  Scaleform::Render::MorphShapeData *pObject; // rcx
  Scaleform::Render::ShapePathType v8; // esi
  int v9[6]; // [rsp+20h] [rbp-48h] BYREF
  char v10[16]; // [rsp+38h] [rbp-30h] BYREF

  pObject = this->pMorphData.pObject;
  if ( !pObject )
    return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *, Scaleform::Render::ShapePosInfo *, float *, unsigned int *))this->pShapeData.pObject->ReadPathInfo)(
             this->pShapeData.pObject,
             pos1,
             coord1,
             styles1);
  v8 = pObject->ShapeData1.ReadPathInfo(&pObject->ShapeData1, pos1, coord1, styles1);
  this->pMorphData.pObject->ShapeData2.ReadPathInfo(
    &this->pMorphData.pObject->ShapeData2,
    &this->Pos2,
    (float *)v9,
    (unsigned int *)v10);
  if ( v8 )
  {
    *coord1 = (float)((float)(*(float *)v9 - *coord1) * this->MorphRatio) + *coord1;
    coord1[1] = (float)((float)(*(float *)&v9[1] - coord1[1]) * this->MorphRatio) + coord1[1];
  }
  return (unsigned int)v8;
}

__int64 __fastcall Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
        Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int pos,
        unsigned int *v)
{
  unsigned __int8 *Data; // r11
  unsigned int v4; // er9
  unsigned int v5; // er9
  __int64 result; // rax
  int v7; // edx

  Data = this->Data->Data.Data;
  v4 = Data[pos];
  if ( (Data[pos] & 3) != 0 )
  {
    if ( (Data[pos] & 3) == 1 )
    {
      *v = (v4 >> 2) | (Data[pos + 1] << 6);
      return 2i64;
    }
    else
    {
      v5 = v4 >> 2;
      if ( (Data[pos] & 3) == 2 )
      {
        result = 3i64;
        v7 = v5 | ((Data[pos + 1] | (Data[pos + 2] << 8)) << 6);
      }
      else
      {
        result = 4i64;
        v7 = v5 | ((Data[pos + 1] | ((Data[pos + 2] | (Data[pos + 3] << 8)) << 8)) << 6);
      }
      *v = v7;
    }
  }
  else
  {
    result = 1i64;
    *v = v4 >> 2;
  }
  return result;
}

void __fastcall Scaleform::Render::MeshProvider_RCImpl::Release(Scaleform::Render::MeshProvider_RCImpl *this)
{
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)&this[-1].RefCount);
}

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int8 *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v6);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = 2;
      this->Data = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        pheapAddr,
                                        v6,
                                        &v8);
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

void __fastcall Scaleform::ArrayDataBase<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned int,Scaleform::AllocatorLH_POD<unsigned int,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned int *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned int *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 4 * v6;
      if ( Data )
      {
        v8 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (unsigned int *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ShapeMeshProvider::DrawLayerType,Scaleform::AllocatorLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::ShapeMeshProvider::DrawLayerType,Scaleform::AllocatorLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 20 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::ShapeMeshProvider::DrawLayerType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                      Scaleform::Memory::pGlobalHeap,
                                                                      Data,
                                                                      v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::ShapeMeshProvider::DrawLayerType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 40 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                                       Scaleform::Memory::pGlobalHeap,
                                                                                       Data,
                                                                                       v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::Render::ComplexFill> *p_pFill; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    if ( v7 )
    {
      p_pFill = &this->Data[v7 - 1 + newSize].pFill;
      do
      {
        pObject = (Scaleform::RefCountVImpl *)p_pFill[1].pObject;
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
        if ( p_pFill->pObject )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p_pFill->pObject);
        p_pFill -= 5;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Render::MorphInterpolator::Rewind(Scaleform::Render::MorphInterpolator *this)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0

  v1 = *(_OWORD *)&this->Pos2s.LastY;
  *(_OWORD *)&this->Pos2.Pos = *(_OWORD *)&this->Pos2s.Pos;
  v2 = *(_OWORD *)&this->Pos2s.NumStrokeBits;
  *(_OWORD *)&this->Pos2.LastY = v1;
  *(_QWORD *)&v1 = *(_QWORD *)&this->Pos2s.Sfactor;
  *(_OWORD *)&this->Pos2.NumStrokeBits = v2;
  *(_QWORD *)&this->Pos2.Sfactor = v1;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::Matrix2x4<float>::SetParlToParl(
        Scaleform::Render::Matrix2x4<float> *this,
        const float *src,
        const float *dst)
{
  float v3; // xmm6_4
  float v4; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  unsigned int v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  unsigned int v12; // xmm1_4
  float v13; // xmm0_4
  unsigned int v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  Scaleform::Render::Matrix2x4<float> m; // [rsp+20h] [rbp-68h] BYREF
  Scaleform::Render::Matrix2x4<float> v19; // [rsp+40h] [rbp-48h] BYREF

  v3 = src[1];
  v4 = *src;
  v6 = src[4] - *src;
  v7 = src[2] - *src;
  v8 = src[3];
  *(float *)&v9 = src[5] - v3;
  this->M[0][3] = *src;
  v10 = v8 - v3;
  this->M[1][3] = v3;
  this->M[0][1] = v6;
  this->M[0][0] = v7;
  this->M[1][1] = *(float *)&v9;
  this->M[1][0] = v10;
  this->M[0][2] = 0.0;
  this->M[1][2] = 0.0;
  v11 = dst[2] - *dst;
  *(float *)&v12 = dst[4] - *dst;
  v19.M[0][3] = *dst;
  v19.M[1][3] = dst[1];
  m.M[0][3] = v4;
  v19.M[0][0] = v11;
  v13 = dst[3];
  *(_QWORD *)&v19.M[0][1] = v12;
  *(float *)&v14 = dst[5] - v19.M[1][3];
  m.M[1][0] = v10;
  *(_QWORD *)&m.M[1][1] = v9;
  m.M[1][3] = v3;
  v19.M[1][0] = v13 - v19.M[1][3];
  v15 = this->M[0][0];
  *(_QWORD *)&v19.M[1][1] = v14;
  v16 = this->M[0][1];
  m.M[0][0] = v15;
  *(_QWORD *)&m.M[0][1] = LODWORD(v16);
  Scaleform::Render::Matrix2x4<float>::SetInverse(this, &m);
  Scaleform::Render::Matrix2x4<float>::Append(this, &v19);
  return this;
}

void __fastcall Scaleform::Render::MorphInterpolator::SkipPathData(
        Scaleform::Render::MorphInterpolator *this,
        Scaleform::Render::ShapePosInfo *pos1)
{
  Scaleform::Render::MorphShapeData *pObject; // rcx
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *p_ShapeData2; // rcx

  pObject = this->pMorphData.pObject;
  if ( pObject )
  {
    pObject->ShapeData1.SkipPathData(&pObject->ShapeData1, pos1);
    pos1 = &this->Pos2;
    p_ShapeData2 = &this->pMorphData.pObject->ShapeData2;
  }
  else
  {
    p_ShapeData2 = (Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *)this->pShapeData.pObject;
  }
  p_ShapeData2->SkipPathData(p_ShapeData2, pos1);
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartLayer(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  unsigned __int8 *v5; // rax

  Data = this->Data;
  v3 = Data->Data.Size + 1;
  if ( v3 >= Data->Data.Size )
  {
    if ( v3 > Data->Data.Policy.Capacity )
    {
      v4 = v3 + (v3 >> 2);
      goto LABEL_6;
    }
  }
  else if ( v3 < Data->Data.Policy.Capacity >> 1 )
  {
    v4 = Data->Data.Size + 1;
LABEL_6:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v4);
  }
  v5 = Data->Data.Data;
  Data->Data.Size = v3;
  v5[v3 - 1] = 0;
  this->Status = Status_StartLayer;
}

void __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int leftStyle,
        unsigned int rightStyle,
        unsigned int strokeStyle)
{
  bool v4; // zf
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r8
  unsigned __int8 *v13; // rax
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = this->Status == Status_Clean;
  Data = this->Data;
  v14.Data = Data;
  if ( v4 )
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartLayer(this);
  Size = Data->Data.Size;
  v11 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v11 > Data->Data.Policy.Capacity )
    {
      v12 = v11 + (v11 >> 2);
      goto LABEL_8;
    }
  }
  else if ( v11 < Data->Data.Policy.Capacity >> 1 )
  {
    v12 = Size + 1;
LABEL_8:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v12);
  }
  v13 = Data->Data.Data;
  Data->Data.Size = v11;
  v13[v11 - 1] = 1;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    leftStyle);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    rightStyle);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    strokeStyle);
  this->Status = Status_StartPath;
}

void __fastcall Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::Transform(
        Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo> *this,
        float *x,
        float *y)
{
  Scaleform::Render::Scale9GridInfo::Transform((Scaleform::Render::Scale9GridInfo *)this->Tr, x, y);
}

void __fastcall Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float>>::Transform(
        Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> > *this,
        float *x,
        float *y)
{
  float *Tr; // rax
  float v4; // xmm2_4
  float v5; // xmm3_4

  Tr = (float *)this->Tr;
  v4 = *x;
  v5 = *y;
  *x = (float)((float)(*y * Tr[1]) + (float)(*x * *Tr)) + Tr[3];
  *y = (float)((float)(v5 * Tr[5]) + (float)(v4 * Tr[4])) + Tr[7];
}

void __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteFloat(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        float v)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int8 *v6; // rcx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int8 *v10; // rcx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int8 *v14; // rcx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int8 *v18; // rcx

  Data = this->Data;
  v4 = this->Data->Data.Size + 1;
  if ( v4 >= this->Data->Data.Size )
  {
    if ( v4 <= Data->Data.Policy.Capacity )
      goto LABEL_7;
    v5 = v4 + (v4 >> 2);
  }
  else
  {
    if ( v4 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v5 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v5);
LABEL_7:
  v6 = Data->Data.Data;
  Data->Data.Size = v4;
  v6[v4 - 1] = LOBYTE(v);
  v7 = this->Data;
  v8 = this->Data->Data.Size + 1;
  if ( v8 >= this->Data->Data.Size )
  {
    if ( v8 <= v7->Data.Policy.Capacity )
      goto LABEL_13;
    v9 = v8 + (v8 >> 2);
  }
  else
  {
    if ( v8 >= v7->Data.Policy.Capacity >> 1 )
      goto LABEL_13;
    v9 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v9);
LABEL_13:
  v10 = v7->Data.Data;
  v7->Data.Size = v8;
  v10[v8 - 1] = BYTE1(v);
  v11 = this->Data;
  v12 = this->Data->Data.Size + 1;
  if ( v12 >= this->Data->Data.Size )
  {
    if ( v12 <= v11->Data.Policy.Capacity )
      goto LABEL_19;
    v13 = v12 + (v12 >> 2);
  }
  else
  {
    if ( v12 >= v11->Data.Policy.Capacity >> 1 )
      goto LABEL_19;
    v13 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v13);
LABEL_19:
  v14 = v11->Data.Data;
  v11->Data.Size = v12;
  v14[v12 - 1] = BYTE2(v);
  v15 = this->Data;
  v16 = this->Data->Data.Size + 1;
  if ( v16 >= this->Data->Data.Size )
  {
    if ( v16 > v15->Data.Policy.Capacity )
    {
      v17 = v16 + (v16 >> 2);
      goto LABEL_24;
    }
  }
  else if ( v16 < v15->Data.Policy.Capacity >> 1 )
  {
    v17 = this->Data->Data.Size + 1;
LABEL_24:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v17);
  }
  v18 = v15->Data.Data;
  v15->Data.Size = v16;
  v18[v16 - 1] = HIBYTE(v);
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int v)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // bl
  unsigned __int64 v7; // r8
  unsigned __int8 *v8; // rax
  char v10; // bp
  unsigned __int8 v11; // bp
  unsigned __int64 v12; // r8
  unsigned __int8 *v13; // rax
  unsigned int v14; // ebx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // bp
  unsigned __int64 v20; // r8
  unsigned __int8 *v21; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v22; // rdi
  unsigned int v23; // ebp
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r8
  unsigned __int8 *v26; // rax
  unsigned int v27; // ebx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v28; // rdi
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r8
  unsigned __int8 *v31; // rax
  unsigned __int8 v32; // bp
  unsigned __int64 v33; // r8
  unsigned __int8 *v34; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v35; // rdi
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r8
  unsigned __int8 *v38; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v39; // rdi
  unsigned int v40; // ebp
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // r8
  unsigned __int8 *v43; // rax
  unsigned int v44; // ebx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v45; // rdi
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // r8
  unsigned __int8 *v48; // rax

  Data = this->Data;
  v5 = this->Data->Data.Size + 1;
  if ( v <= 0x3F )
  {
    v6 = 4 * v;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 > Data->Data.Policy.Capacity )
      {
        v7 = v5 + (v5 >> 2);
        goto LABEL_7;
      }
    }
    else if ( v5 < Data->Data.Policy.Capacity >> 1 )
    {
      v7 = this->Data->Data.Size + 1;
LABEL_7:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &Data->Data,
        Data,
        v7);
    }
    v8 = Data->Data.Data;
    Data->Data.Size = v5;
    v8[v5 - 1] = v6;
    return 1i64;
  }
  v10 = 4 * v;
  if ( v <= 0x3FFF )
  {
    v11 = v10 | 1;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 <= Data->Data.Policy.Capacity )
        goto LABEL_16;
      v12 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_16;
      v12 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v12);
LABEL_16:
    v13 = Data->Data.Data;
    Data->Data.Size = v5;
    v14 = v >> 6;
    v13[v5 - 1] = v11;
    v15 = this->Data;
    v16 = this->Data->Data.Size + 1;
    if ( v16 >= this->Data->Data.Size )
    {
      if ( v16 > v15->Data.Policy.Capacity )
      {
        v17 = v16 + (v16 >> 2);
        goto LABEL_21;
      }
    }
    else if ( v16 < v15->Data.Policy.Capacity >> 1 )
    {
      v17 = this->Data->Data.Size + 1;
LABEL_21:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v15->Data,
        v15,
        v17);
    }
    v18 = v15->Data.Data;
    v15->Data.Size = v16;
    v18[v16 - 1] = v14;
    return 2i64;
  }
  if ( v <= 0x3FFFFF )
  {
    v19 = v10 | 2;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 <= Data->Data.Policy.Capacity )
        goto LABEL_30;
      v20 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_30;
      v20 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v20);
LABEL_30:
    v21 = Data->Data.Data;
    Data->Data.Size = v5;
    v21[v5 - 1] = v19;
    v22 = this->Data;
    v23 = v >> 6;
    v24 = this->Data->Data.Size + 1;
    if ( v24 >= this->Data->Data.Size )
    {
      if ( v24 <= v22->Data.Policy.Capacity )
        goto LABEL_36;
      v25 = v24 + (v24 >> 2);
    }
    else
    {
      if ( v24 >= v22->Data.Policy.Capacity >> 1 )
        goto LABEL_36;
      v25 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v22->Data,
      v22,
      v25);
LABEL_36:
    v26 = v22->Data.Data;
    v22->Data.Size = v24;
    v27 = v >> 14;
    v26[v24 - 1] = v23;
    v28 = this->Data;
    v29 = this->Data->Data.Size + 1;
    if ( v29 >= this->Data->Data.Size )
    {
      if ( v29 > v28->Data.Policy.Capacity )
      {
        v30 = v29 + (v29 >> 2);
        goto LABEL_41;
      }
    }
    else if ( v29 < v28->Data.Policy.Capacity >> 1 )
    {
      v30 = this->Data->Data.Size + 1;
LABEL_41:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v28->Data,
        v28,
        v30);
    }
    v31 = v28->Data.Data;
    v28->Data.Size = v29;
    v31[v29 - 1] = v27;
    return 3i64;
  }
  v32 = v10 | 3;
  if ( v5 >= Data->Data.Size )
  {
    if ( v5 <= Data->Data.Policy.Capacity )
      goto LABEL_49;
    v33 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_49;
    v33 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &Data->Data,
    Data,
    v33);
LABEL_49:
  v34 = Data->Data.Data;
  Data->Data.Size = v5;
  v34[v5 - 1] = v32;
  v35 = this->Data;
  v36 = this->Data->Data.Size + 1;
  if ( v36 >= this->Data->Data.Size )
  {
    if ( v36 <= v35->Data.Policy.Capacity )
      goto LABEL_55;
    v37 = v36 + (v36 >> 2);
  }
  else
  {
    if ( v36 >= v35->Data.Policy.Capacity >> 1 )
      goto LABEL_55;
    v37 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &v35->Data,
    v35,
    v37);
LABEL_55:
  v38 = v35->Data.Data;
  v35->Data.Size = v36;
  v38[v36 - 1] = v >> 6;
  v39 = this->Data;
  v40 = v >> 14;
  v41 = this->Data->Data.Size + 1;
  if ( v41 >= this->Data->Data.Size )
  {
    if ( v41 <= v39->Data.Policy.Capacity )
      goto LABEL_61;
    v42 = v41 + (v41 >> 2);
  }
  else
  {
    if ( v41 >= v39->Data.Policy.Capacity >> 1 )
      goto LABEL_61;
    v42 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &v39->Data,
    v39,
    v42);
LABEL_61:
  v43 = v39->Data.Data;
  v39->Data.Size = v41;
  v44 = v >> 22;
  v43[v41 - 1] = v40;
  v45 = this->Data;
  v46 = this->Data->Data.Size + 1;
  if ( v46 >= this->Data->Data.Size )
  {
    if ( v46 > v45->Data.Policy.Capacity )
    {
      v47 = v46 + (v46 >> 2);
      goto LABEL_66;
    }
  }
  else if ( v46 < v45->Data.Policy.Capacity >> 1 )
  {
    v47 = this->Data->Data.Size + 1;
LABEL_66:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v45->Data,
      v45,
      v47);
  }
  v48 = v45->Data.Data;
  v45->Data.Size = v46;
  v48[v46 - 1] = v44;
  return 4i64;
}

void __fastcall Scaleform::Render::ShapeMeshProvider::acquireShapeData(Scaleform::Render::ShapeMeshProvider *this)
{
  Scaleform::Render::MorphShapeData *pObject; // rbx
  Scaleform::Render::ShapeDataInterface *p_ShapeData1; // rbx
  int v4; // eax
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  char v7; // r12
  unsigned int v8; // er15
  Scaleform::Render::ShapePathType i; // eax
  Scaleform::Render::ShapeDataInterface_vtbl *v10; // rax
  unsigned int v11; // edi
  unsigned __int64 Capacity; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 Size; // r9
  unsigned int ShapeLayer; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *Data; // rax
  __int64 v19; // r15
  Scaleform::Render::MeshProvider_vtbl *v20; // rax
  __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *v25; // rdx
  __int64 v26; // r15
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *v27; // rdi
  int v28; // [rsp+20h] [rbp-E0h] BYREF
  int v29; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+2Ch] [rbp-D4h]
  __int64 v31; // [rsp+3Ch] [rbp-C4h]
  __int64 v32; // [rsp+44h] [rbp-BCh]
  __int64 v33; // [rsp+4Ch] [rbp-B4h]
  int v34; // [rsp+54h] [rbp-ACh]
  Tween::EasingType v35; // [rsp+58h] [rbp-A8h]
  char v36; // [rsp+5Ch] [rbp-A4h]
  Scaleform::Render::ShapeMeshProvider::TmpPathInfoType val; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v38[2]; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> paths; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v40; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned int v41; // [rsp+3C4h] [rbp+2C4h]
  unsigned int v42; // [rsp+3C8h] [rbp+2C8h]
  float v43[6]; // [rsp+3D0h] [rbp+2D0h] BYREF

  pObject = this->pMorphData.pObject;
  if ( pObject )
    p_ShapeData1 = &pObject->ShapeData1;
  else
    p_ShapeData1 = this->pShapeData.pObject;
  v4 = p_ShapeData1->GetStartingPos(p_ShapeData1);
  v5 = 0i64;
  paths.Reserved = 32i64;
  v6 = v4;
  v29 = v4;
  paths.pHeap = Scaleform::Memory::pGlobalHeap;
  v30 = 0i64;
  v31 = 0i64;
  paths.Data = paths.Static;
  v35 = FLOAT_1_0;
  v32 = 0i64;
  v7 = 1;
  v33 = 0i64;
  v8 = 0;
  v34 = 0;
  v36 = 0;
  paths.Size = 0i64;
  this->Strokes = 0;
  for ( i = p_ShapeData1->ReadPathInfo(p_ShapeData1, (Scaleform::Render::ShapePosInfo *)&v29, v43, &v40);
        i;
        i = p_ShapeData1->ReadPathInfo(p_ShapeData1, (Scaleform::Render::ShapePosInfo *)&v29, v43, &v40) )
  {
    if ( i == Shape_NewLayer && !v7 )
      ++v8;
    val.Styles[0] = v40;
    val.Styles[1] = v41;
    val.Styles[2] = v42;
    v10 = p_ShapeData1->__vftable;
    val.Pos = v6;
    v11 = 0;
    val.ShapeLayer = v8;
    if ( v10->ReadEdge(p_ShapeData1, (Scaleform::Render::ShapePosInfo *)&v29, (float *)v38) )
    {
      do
        ++v11;
      while ( p_ShapeData1->ReadEdge(p_ShapeData1, (Scaleform::Render::ShapePosInfo *)&v29, (float *)v38) );
    }
    val.EdgeCount = v11;
    if ( v11 && (v40 || v41 || v42) )
    {
      Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2>::PushBack(&paths, &val);
      v7 = 0;
    }
    v6 = v29;
  }
  if ( this->DrawLayers.Data.Size )
  {
    Capacity = this->DrawLayers.Data.Policy.Capacity;
    if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    {
      if ( Capacity )
      {
        if ( this->DrawLayers.Data.Data )
        {
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          this->DrawLayers.Data.Data = 0i64;
        }
        this->DrawLayers.Data.Policy.Capacity = 0i64;
      }
    }
  }
  this->DrawLayers.Data.Size = 0i64;
  if ( this->FillToStyleTable.Data.Size )
  {
    v13 = this->FillToStyleTable.Data.Policy.Capacity;
    if ( (v13 & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    {
      if ( v13 )
      {
        if ( this->FillToStyleTable.Data.Data )
        {
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          this->FillToStyleTable.Data.Data = 0i64;
        }
        this->FillToStyleTable.Data.Policy.Capacity = 0i64;
      }
    }
  }
  Size = paths.Size;
  ShapeLayer = 0;
  this->FillToStyleTable.Data.Size = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  if ( Size )
  {
    Data = paths.Data;
    v19 = 0i64;
    do
    {
      if ( ShapeLayer != Data[v19].ShapeLayer )
      {
        Scaleform::Render::ShapeMeshProvider::createDrawLayers(this, &paths, v16, v17);
        Data = paths.Data;
        v16 = v17;
        Size = paths.Size;
        ShapeLayer = paths.Data[v19].ShapeLayer;
      }
      ++v17;
      ++v19;
    }
    while ( v17 < Size );
  }
  Scaleform::Render::ShapeMeshProvider::createDrawLayers(this, &paths, v16, Size);
  v20 = this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable;
  v38[0] = _xmm;
  v38[1] = _xmm;
  v21 = (__int64)v20->GetBounds(
                   &this->Scaleform::Render::MeshProvider,
                   (Scaleform::Render::Rect<float> *)&val,
                   (const Scaleform::Render::Matrix2x4<float> *)v38);
  v22 = *(float *)(v21 + 8);
  v23 = *(float *)(v21 + 4);
  v24 = *(float *)(v21 + 12);
  LODWORD(v21) = *(_DWORD *)v21;
  this->IdentityBounds.y1 = v23;
  this->IdentityBounds.x2 = v22;
  this->IdentityBounds.y2 = v24;
  LODWORD(this->IdentityBounds.x1) = v21;
  if ( this->IdentityBounds.x1 >= v22 || this->IdentityBounds.y1 >= v24 )
  {
    *(_QWORD *)&this->IdentityBounds.x1 = 0i64;
    *(_QWORD *)&this->IdentityBounds.x2 = 0i64;
  }
  if ( Scaleform::Render::ShapeMeshProvider::checkI9gMergedSlice(this) )
  {
    if ( this->DrawLayers.Data.Size <= 1 )
    {
      if ( !this->DrawLayers.Data.Policy.Capacity )
        Scaleform::ArrayDataBase<Scaleform::Render::ShapeMeshProvider::DrawLayerType,Scaleform::AllocatorLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &this->DrawLayers.Data,
          &this->DrawLayers,
          1ui64);
    }
    else if ( (this->DrawLayers.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) > 2
           && this->DrawLayers.Data.Policy.Capacity != 1 )
    {
      v25 = this->DrawLayers.Data.Data;
      if ( v25 )
      {
        this->DrawLayers.Data.Data = (Scaleform::Render::ShapeMeshProvider::DrawLayerType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                                              Scaleform::Memory::pGlobalHeap,
                                                                                              v25,
                                                                                              80i64);
      }
      else
      {
        v28 = 2;
        this->DrawLayers.Data.Data = (Scaleform::Render::ShapeMeshProvider::DrawLayerType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                                              Scaleform::Memory::pGlobalHeap,
                                                                                              &this->DrawLayers,
                                                                                              80i64,
                                                                                              &v28);
      }
      this->DrawLayers.Data.Policy.Capacity = 4i64;
    }
    this->DrawLayers.Data.Size = 1i64;
    this->DrawLayers.Data.Data->Image9GridType = I9gMergedSlice;
  }
  else if ( this->DrawLayers.Data.Size )
  {
    v26 = 0i64;
    do
    {
      v27 = &this->DrawLayers.Data.Data[v26];
      if ( !v27->StrokeStyle
        && Scaleform::Render::ShapeMeshProvider::checkI9gLayer(this, &this->DrawLayers.Data.Data[v26]) )
      {
        v27->Image9GridType = I9gNormalSlice;
      }
      ++v5;
      ++v26;
    }
    while ( v5 < this->DrawLayers.Data.Size );
  }
  if ( paths.Data != paths.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

_BOOL8 __fastcall Scaleform::Render::ShapeMeshProvider::acquireTessMeshes(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::TessBase *tess,
        const Scaleform::Render::Matrix2x4<float> *mtx,
        Scaleform::Render::VertexOutput *pout,
        unsigned int drawLayerIdx,
        unsigned int strokeStyleIdx,
        unsigned int meshGenFlags,
        float morphRatio)
{
  unsigned int v9; // esi
  Scaleform::Render::TessBase *v11; // r12
  Scaleform::Render::ShapeMeshProvider *v12; // r13
  Scaleform::Render::TessBase_vtbl *v13; // rax
  unsigned int v14; // er15
  unsigned int v15; // er14
  unsigned int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  __int128 *v21; // rax
  unsigned int v22; // er9
  unsigned int i; // er8
  unsigned int v24; // edi
  float v25; // eax
  Scaleform::Render::TessBase_vtbl *v26; // r8
  float v27; // ebx
  float v28; // ecx
  int v29; // eax
  Scaleform::Render::VertexOutput *v30; // rdx
  unsigned int v31; // er9
  unsigned int v32; // er8
  Scaleform::Log *GlobalLog; // rax
  Scaleform::Render::VertexOutput *v34; // rbx
  bool NullMesh; // bl
  unsigned int v36; // er14
  unsigned int v37; // er15
  unsigned int v38; // esi
  __int64 v39; // rcx
  Scaleform::Render::TessBase_vtbl *v40; // rax
  Scaleform::Render::TessBase_vtbl *v41; // rax
  unsigned int v42; // ebx
  unsigned int v43; // edi
  char *v44; // rsi
  __int64 v45; // r12
  char *v46; // rbx
  float v47; // xmm0_4
  float v48; // xmm0_4
  int v49; // eax
  float v50; // xmm0_4
  float v51; // xmm0_4
  unsigned int Color; // eax
  unsigned __int64 v53; // rax
  unsigned int v54; // edi
  Scaleform::Render::MorphShapeData *pObject; // rcx
  unsigned int v56; // edi
  Scaleform::Render::MorphShapeData *v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // edi
  Scaleform::Render::MorphShapeData *v60; // rcx
  unsigned __int64 v61; // rcx
  char v62; // al
  Scaleform::Render::TessBase_vtbl *v63; // rax
  unsigned int v64; // edi
  unsigned int v65; // esi
  unsigned int v66; // er13
  Scaleform::Render::VertexOutput::Fill *v67; // r15
  Scaleform::Render::VertexOutput *v68; // r14
  int v69; // ebx
  Scaleform::Render::Color c1; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::Color c2; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v73; // [rsp+38h] [rbp-C8h]
  Scaleform::Render::VertexOutput *v74; // [rsp+40h] [rbp-C0h]
  unsigned int v75; // [rsp+48h] [rbp-B8h]
  unsigned int v76; // [rsp+4Ch] [rbp-B4h]
  unsigned int Raw; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::RefCountVImpl *v78; // [rsp+58h] [rbp-A8h]
  unsigned int v79; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::RefCountVImpl *v80; // [rsp+68h] [rbp-98h]
  Scaleform::Render::VertexOutput::Fill *v81; // [rsp+70h] [rbp-90h]
  Scaleform::Render::Color v82; // [rsp+78h] [rbp-88h] BYREF
  Scaleform::RefCountVImpl *v83; // [rsp+80h] [rbp-80h]
  Scaleform::Render::Color v84; // [rsp+88h] [rbp-78h] BYREF
  Scaleform::RefCountVImpl *v85; // [rsp+90h] [rbp-70h]
  Scaleform::Render::Color result; // [rsp+98h] [rbp-68h] BYREF
  Scaleform::Render::Color v87; // [rsp+9Ch] [rbp-64h] BYREF
  Scaleform::Render::Color v88; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::TessBase *v89; // [rsp+A8h] [rbp-58h]
  Scaleform::Render::ShapeMeshProvider *v90; // [rsp+B0h] [rbp-50h]
  Scaleform::Render::StrokeStyleType s1; // [rsp+B8h] [rbp-48h] BYREF
  char v92[4]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v93; // [rsp+E4h] [rbp-1Ch]
  unsigned int v94; // [rsp+E8h] [rbp-18h]
  int v95; // [rsp+ECh] [rbp-14h]
  int v96; // [rsp+F8h] [rbp-8h]
  Scaleform::Render::Matrix2x4<float> v97; // [rsp+100h] [rbp+0h] BYREF
  Scaleform::MemoryHeap *v98; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v99; // [rsp+128h] [rbp+28h]
  unsigned __int64 v100; // [rsp+130h] [rbp+30h]
  __int128 v101[4]; // [rsp+138h] [rbp+38h] BYREF
  __int128 *v102; // [rsp+178h] [rbp+78h]
  Scaleform::Render::Matrix2x4<float> v103; // [rsp+180h] [rbp+80h] BYREF
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2> v104; // [rsp+1A0h] [rbp+A0h] BYREF
  char v105[4]; // [rsp+3C0h] [rbp+2C0h] BYREF
  char v106; // [rsp+3C4h] [rbp+2C4h] BYREF
  char v107[12]; // [rsp+FC0h] [rbp+EC0h] BYREF
  char v108; // [rsp+FCCh] [rbp+ECCh] BYREF
  unsigned __int16 v109[768]; // [rsp+23C0h] [rbp+22C0h] BYREF

  v9 = 0;
  v11 = tess;
  v104.pHeap = Scaleform::Memory::pGlobalHeap;
  v12 = this;
  v98 = Scaleform::Memory::pGlobalHeap;
  v90 = this;
  v102 = v101;
  v13 = tess->__vftable;
  v104.Data = v104.Static;
  v74 = pout;
  v89 = tess;
  *(_OWORD *)&s1.pFill.pObject = 0i64;
  v104.Size = 0i64;
  v104.Reserved = 16i64;
  v99 = 0i64;
  v100 = 16i64;
  if ( !v13->GetMeshCount(tess) || !v11->GetVertexCount(v11) )
  {
    v31 = meshGenFlags;
    v30 = pout;
    v32 = drawLayerIdx;
    goto LABEL_99;
  }
  v14 = meshGenFlags;
  v15 = drawLayerIdx;
  if ( strokeStyleIdx )
  {
    Scaleform::Render::ShapeMeshProvider::GetStrokeStyle(v12, strokeStyleIdx, &s1, morphRatio);
  }
  else
  {
    v16 = ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *))v12->pShapeData.pObject->GetFillStyleCount)(v12->pShapeData.pObject)
        + 1;
    if ( v16 )
    {
      v17 = v99;
      v18 = v16;
      while ( v17 < 0x10 )
      {
        *((_DWORD *)v101 + v17) = 0;
LABEL_17:
        v17 = ++v99;
        if ( !--v18 )
          goto LABEL_18;
      }
      v19 = v100;
      if ( v17 == 16 )
      {
        v20 = 2 * v100;
        v100 *= 2i64;
        if ( v98 )
          v21 = (__int128 *)v98->Alloc(v98, 4 * v20, 0i64);
        else
          v21 = (__int128 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                              Scaleform::Memory::pGlobalHeap,
                              &v98,
                              8 * v19,
                              0i64);
        v102 = v21;
        *v21 = v101[0];
        v21[1] = v101[1];
        v21[2] = v101[2];
        v21[3] = v101[3];
      }
      else
      {
        if ( v17 < v100 )
        {
LABEL_16:
          *((_DWORD *)v102 + v17) = 0;
          goto LABEL_17;
        }
        v100 *= 2i64;
        v102 = (__int128 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v102, 8 * v19);
      }
      v17 = v99;
      goto LABEL_16;
    }
LABEL_18:
    v22 = v12->GetFillCount(&v12->Scaleform::Render::MeshProvider, drawLayerIdx, meshGenFlags);
    for ( i = 0; i < v22; ++i )
      *((_DWORD *)v102 + v12->FillToStyleTable.Data.Data[i + v12->DrawLayers.Data.Data[drawLayerIdx].StartFill]) = i;
  }
  *(_OWORD *)&v97.M[0][0] = _xmm;
  *(_OWORD *)&v97.M[1][0] = _xmm;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v97, mtx);
  v11->Transform(v11, &v97);
  ((void (__fastcall *)(Scaleform::Render::TessBase *, Scaleform::Render::Matrix2x4<float> *))v11->StretchTo)(
    v11,
    &v103);
  v24 = 0;
  if ( v11->GetMeshCount(v11) )
  {
    do
    {
      v11->GetMesh(v11, v24, (Scaleform::Render::TessMesh *)v92);
      LODWORD(v25) = v11->GetMeshVertexCount(v11, v24);
      v26 = v11->__vftable;
      v97.M[0][0] = v25;
      v27 = v25;
      LODWORD(v28) = 3
                   * ((__int64 (__fastcall *)(Scaleform::Render::TessBase *, _QWORD))v26->GetMeshTriangleCount)(
                       v11,
                       v24);
      v97.M[0][1] = v28;
      if ( v27 != 0.0 && v28 != 0.0 )
      {
        *(_QWORD *)&v97.M[0][2] = &Scaleform::Render::VertexXY16iCF32::Format;
        *(_QWORD *)&v97.M[1][0] = 0i64;
        if ( !strokeStyleIdx )
        {
          v97.M[1][0] = *((float *)v102 + v93);
          v97.M[1][1] = *((float *)v102 + v94);
        }
        v29 = 1;
        LODWORD(v97.M[1][3]) = v24;
        if ( (v95 & 0x8000) != 0 )
          v29 = 3;
        LODWORD(v97.M[1][2]) = v29;
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::VertexOutput::Fill,16,2>::PushBack(
          &v104,
          (const Scaleform::Render::VertexOutput::Fill *)&v97);
        v9 += v96;
      }
      ++v24;
    }
    while ( v24 < v11->GetMeshCount(v11) );
    v15 = drawLayerIdx;
    v14 = meshGenFlags;
  }
  if ( !v104.Size )
  {
    v30 = v74;
    v31 = v14;
    v32 = v15;
LABEL_99:
    NullMesh = Scaleform::Render::ShapeMeshProvider::createNullMesh(v12, v30, v32, v31);
    goto LABEL_100;
  }
  if ( v9 > 0xFFFF )
  {
    GlobalLog = Scaleform::Log::GetGlobalLog();
    if ( GlobalLog || (GlobalLog = Scaleform::Log::GetDefaultLog()) != 0i64 )
      Scaleform::Log::LogWarning(
        GlobalLog,
        "Render_ShapeMeshProvider: More than 65535 vertices, the shape cannot be displayed");
    v30 = v74;
    v31 = v14;
    v32 = v15;
    goto LABEL_99;
  }
  v34 = v74;
  if ( !v74->BeginOutput(v74, v104.Data, v104.Size, &v103) )
  {
    NullMesh = 0;
    goto LABEL_100;
  }
  v36 = 0;
  v37 = 0;
  v38 = 0;
  c1 = 0;
  c2 = 0;
  v78 = 0i64;
  v80 = 0i64;
  v73 = 0;
  if ( !v104.Size )
    goto LABEL_94;
  v39 = 0i64;
  do
  {
    v40 = v11->__vftable;
    v81 = &v104.Data[v39];
    v40->GetMesh(v11, v81->MeshIndex, (Scaleform::Render::TessMesh *)v92);
    v41 = v11->__vftable;
    v42 = 0;
    v75 = 0;
    v76 = v41->GetVertices(v11, (Scaleform::Render::TessMesh *)v92, (Scaleform::Render::TessVertex *)v107, 256u);
    v43 = v76;
    if ( !v76 )
      goto LABEL_86;
    do
    {
      if ( !v43 )
        goto LABEL_85;
      v44 = &v106;
      v45 = v43;
      v46 = &v108;
      do
      {
        v47 = *((float *)v46 - 3);
        if ( v47 >= 0.0 )
          v48 = v47 + 0.5;
        else
          v48 = v47 - 0.5;
        v49 = (int)floorf(v48);
        v50 = *((float *)v46 - 2);
        *((_WORD *)v44 - 2) = v49;
        if ( v50 >= 0.0 )
          v51 = v50 + 0.5;
        else
          v51 = v50 - 0.5;
        *((_WORD *)v44 - 1) = (int)floorf(v51);
        if ( strokeStyleIdx )
        {
          Color = s1.Color;
        }
        else
        {
          v53 = *((unsigned __int16 *)v46 + 2);
          *(_DWORD *)v44 = 0;
          if ( (v53 & 0x8000u) != 0i64 )
            goto LABEL_83;
          if ( (v53 & 0x10) != 0 )
          {
            v54 = *(unsigned __int16 *)v46;
            if ( v36 != v54 )
            {
              v12->pShapeData.pObject->GetFillStyle(
                v12->pShapeData.pObject,
                *(unsigned __int16 *)v46,
                (Scaleform::Render::FillStyleType *)&Raw);
              pObject = v12->pMorphData.pObject;
              if ( pObject && morphRatio != 0.0 )
              {
                v83 = 0i64;
                pObject->pMorphTo.pObject->GetFillStyle(
                  pObject->pMorphTo.pObject,
                  v54,
                  (Scaleform::Render::FillStyleType *)&v82);
                if ( !v78 )
                {
                  c2 = v82;
                  c1 = (Scaleform::Render::Color)Raw;
                  Raw = Scaleform::Render::Color::Blend(&result, &c1.Channels.Blue, &c2.Channels.Blue, morphRatio)->Raw;
                }
                if ( v83 )
                  Scaleform::RefCountImpl::Release(v83);
              }
              v36 = *(unsigned __int16 *)v46;
            }
            v56 = *((unsigned __int16 *)v46 + 1);
            if ( v37 != v56 )
            {
              v12->pShapeData.pObject->GetFillStyle(
                v12->pShapeData.pObject,
                *((unsigned __int16 *)v46 + 1),
                (Scaleform::Render::FillStyleType *)&v79);
              v57 = v12->pMorphData.pObject;
              if ( v57 && morphRatio != 0.0 )
              {
                v85 = 0i64;
                v57->pMorphTo.pObject->GetFillStyle(
                  v57->pMorphTo.pObject,
                  v56,
                  (Scaleform::Render::FillStyleType *)&v84);
                if ( !v80 )
                {
                  c2 = v84;
                  c1 = (Scaleform::Render::Color)v79;
                  v79 = Scaleform::Render::Color::Blend(&v87, &c1.Channels.Blue, &c2.Channels.Blue, morphRatio)->Raw;
                }
                if ( v85 )
                  Scaleform::RefCountImpl::Release(v85);
              }
              v37 = *((unsigned __int16 *)v46 + 1);
            }
            Color = ((Raw | v79) >> 1) & 0x7F7F7F7F;
          }
          else
          {
            v58 = (v53 >> 5) & 1;
            v59 = *(unsigned __int16 *)&v46[2 * v58];
            if ( v36 != v59 )
            {
              v12->pShapeData.pObject->GetFillStyle(
                v12->pShapeData.pObject,
                *(unsigned __int16 *)&v46[2 * v58],
                (Scaleform::Render::FillStyleType *)&Raw);
              v60 = v12->pMorphData.pObject;
              if ( v60 && morphRatio != 0.0 )
              {
                *(_QWORD *)&v97.M[0][2] = 0i64;
                v60->pMorphTo.pObject->GetFillStyle(
                  v60->pMorphTo.pObject,
                  v59,
                  (Scaleform::Render::FillStyleType *)&v97);
                if ( !v78 )
                {
                  c2 = (Scaleform::Render::Color)LODWORD(v97.M[0][0]);
                  c1 = (Scaleform::Render::Color)Raw;
                  Raw = Scaleform::Render::Color::Blend(&v88, &c1.Channels.Blue, &c2.Channels.Blue, morphRatio)->Raw;
                }
                if ( *(_QWORD *)&v97.M[0][2] )
                  Scaleform::RefCountImpl::Release(*(Scaleform::RefCountVImpl **)&v97.M[0][2]);
              }
              v36 = *(unsigned __int16 *)&v46[2 * (((unsigned __int64)*((unsigned __int16 *)v46 + 2) >> 5) & 1)];
            }
            Color = Raw;
          }
        }
        *(_DWORD *)v44 = Color;
LABEL_83:
        v61 = *((unsigned __int16 *)v46 + 2);
        v62 = *((_WORD *)v46 + 2);
        v46 += 20;
        v44[4] = Scaleform::Render::Factors[v62 & 3];
        v44[5] = Scaleform::Render::Factors[(v61 >> 2) & 3];
        v44 += 12;
        --v45;
      }
      while ( v45 );
      v43 = v76;
      v11 = v89;
      v42 = v75;
      v38 = v73;
      c2 = (Scaleform::Render::Color)v37;
      c1 = (Scaleform::Render::Color)v36;
LABEL_85:
      v74->SetVertices(v74, v38, v42, v105, v43);
      v63 = v11->__vftable;
      v42 += v43;
      v75 = v42;
      v76 = v63->GetVertices(v11, (Scaleform::Render::TessMesh *)v92, (Scaleform::Render::TessVertex *)v107, 256u);
      v43 = v76;
    }
    while ( v76 );
LABEL_86:
    v64 = 0;
    v65 = v11->GetMeshTriangleCount(v11, v81->MeshIndex);
    if ( v65 )
    {
      v66 = v73;
      v67 = v81;
      v68 = v74;
      do
      {
        v69 = 256;
        if ( v64 + 256 > v65 )
        {
          v69 = v65 - v64;
          if ( v65 == v64 )
            break;
        }
        v11->GetTrianglesI16(v11, v67->MeshIndex, v109, v64, v69);
        v68->SetIndices(v68, v66, 3 * v64, v109, 3 * v69);
        v64 += v69;
      }
      while ( v64 < v65 );
      v36 = c1.Raw;
      v37 = c2.Raw;
      v12 = v90;
    }
    v38 = v73 + 1;
    v39 = v38;
    ++v73;
  }
  while ( v38 < v104.Size );
  v34 = v74;
LABEL_94:
  v34->EndOutput(v34);
  NullMesh = 1;
  if ( v80 )
    Scaleform::RefCountImpl::Release(v80);
  if ( v78 )
    Scaleform::RefCountImpl::Release(v78);
LABEL_100:
  if ( v102 != v101 )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v102 = v101;
  v99 = 0i64;
  if ( v104.Data != v104.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v104.Size = 0i64;
  v104.Data = v104.Static;
  if ( s1.pDashes.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)s1.pDashes.pObject);
  if ( s1.pFill.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)s1.pFill.pObject);
  return NullMesh;
}

void __fastcall Scaleform::Render::ShapeMeshProvider::addFill(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::MeshGenerator *gen,
        const Scaleform::Render::ToleranceParams *param,
        const Scaleform::Render::TransformerBase *tr,
        unsigned int startPos,
        float morphRatio)
{
  Scaleform::RefCountVImpl *pObject; // rsi
  Scaleform::RefCountVImpl *v8; // rbx
  char v11; // r14
  int v12; // ebx
  Scaleform::Render::Tessellator *p_mTess; // r14
  int v14; // esi
  int v15; // er15
  int v16; // ebx
  Scaleform::Render::ShapeMeshProvider *v17; // r15
  unsigned int v18; // edx
  __int64 *v19; // rcx
  __int64 v20; // rax
  bool v21; // si
  unsigned int v22; // er10
  __int64 *v23; // rcx
  __int64 v24; // rax
  bool v25; // bl
  unsigned __int64 Size; // rax
  BOOL x3; // [rsp+20h] [rbp-E0h]
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+4Ch] [rbp-B4h]
  __int64 v30; // [rsp+54h] [rbp-ACh]
  __int64 v31; // [rsp+5Ch] [rbp-A4h]
  __int64 v32; // [rsp+64h] [rbp-9Ch]
  __int64 v33; // [rsp+6Ch] [rbp-94h]
  int v34; // [rsp+74h] [rbp-8Ch]
  int v35; // [rsp+78h] [rbp-88h]
  char v36; // [rsp+7Ch] [rbp-84h]
  _BYTE v37[48]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h]
  Scaleform::Render::ShapeMeshProvider *v39; // [rsp+B8h] [rbp-48h]
  Scaleform::RefCountImplCore v40; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::RefCountVImpl *v41; // [rsp+D0h] [rbp-30h]
  Scaleform::RefCountVImpl *v42; // [rsp+D8h] [rbp-28h]
  float v43; // [rsp+E0h] [rbp-20h]
  __int128 v44[3]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v45; // [rsp+114h] [rbp+14h]
  __int128 v46; // [rsp+11Ch] [rbp+1Ch]
  __int128 v47; // [rsp+12Ch] [rbp+2Ch]
  __int128 v48; // [rsp+13Ch] [rbp+3Ch]
  __int64 v49; // [rsp+14Ch] [rbp+4Ch]
  char v50[8]; // [rsp+160h] [rbp+60h] BYREF
  Scaleform::RefCountVImpl *v51; // [rsp+168h] [rbp+68h]
  char v52[8]; // [rsp+170h] [rbp+70h] BYREF
  Scaleform::RefCountVImpl *v53; // [rsp+178h] [rbp+78h]
  float x2; // [rsp+180h] [rbp+80h] BYREF
  float y2; // [rsp+184h] [rbp+84h] BYREF
  float v56; // [rsp+188h] [rbp+88h] BYREF
  float y3; // [rsp+18Ch] [rbp+8Ch] BYREF
  float x4; // [rsp+190h] [rbp+90h] BYREF
  float y4; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v60; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v61; // [rsp+19Ch] [rbp+9Ch]
  int v62[6]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v63[6]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v64[16]; // [rsp+1D8h] [rbp+D8h] BYREF

  v28 = startPos;
  *(_DWORD *)v37 = startPos;
  v39 = this;
  pObject = (Scaleform::RefCountVImpl *)this->pShapeData.pObject;
  v8 = (Scaleform::RefCountVImpl *)this->pMorphData.pObject;
  v29 = 0i64;
  v30 = 0i64;
  v11 = 1;
  v31 = 0i64;
  v32 = 0i64;
  v33 = 0i64;
  v34 = 0;
  v35 = 1065353216;
  v36 = 0;
  LODWORD(v38) = 1065353216;
  BYTE4(v38) = 0;
  v40.RefCount = 1;
  v40.__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::Render::MorphInterpolator::`vftable';
  memset(&v37[4], 0, 44);
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v41 = pObject;
  if ( v8 )
    Scaleform::Render::RenderBuffer::AddRef(v8);
  v42 = v8;
  v43 = morphRatio;
  v45 = v38;
  v49 = v38;
  v44[0] = *(_OWORD *)v37;
  v44[1] = *(_OWORD *)&v37[16];
  v44[2] = *(_OWORD *)&v37[32];
  v46 = *(_OWORD *)v37;
  v47 = *(_OWORD *)&v37[16];
  v48 = *(_OWORD *)&v37[32];
  while ( 1 )
  {
    if ( v42 )
    {
      v12 = (*(__int64 (__fastcall **)(volatile int *, unsigned int *, float *, unsigned int *))(*(_QWORD *)&v42[4].RefCount
                                                                                               + 64i64))(
              &v42[4].RefCount,
              &v28,
              &x2,
              &v60);
      ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int128 *, int *, char *))v42[11].__vftable[2].Release)(
        &v42[11],
        v44,
        v63,
        v64);
      if ( !v12 )
        break;
      x2 = x2 + (float)((float)(*(float *)v63 - x2) * v43);
      y2 = y2 + (float)((float)(*(float *)&v63[1] - y2) * v43);
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *, float *, unsigned int *))v41->__vftable[2].Release)(
              v41,
              &v28,
              &x2,
              &v60);
    }
    if ( !v12 || !v11 && v12 == 2 )
      break;
    v11 = 0;
    if ( v60 == v61 )
    {
      if ( v42 )
      {
        (*(void (__fastcall **)(volatile int *, unsigned int *))(*(_QWORD *)&v42[4].RefCount + 80i64))(
          &v42[4].RefCount,
          &v28);
        ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int128 *))v42[11].__vftable[3].AddRef)(&v42[11], v44);
      }
      else
      {
        ((void (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *))v41->__vftable[3].AddRef)(v41, &v28);
      }
    }
    else
    {
      tr->Transform((Scaleform::Render::TransformerBase *)tr, &x2, &y2);
      p_mTess = &gen->mTess;
      ((void (__fastcall *)(Scaleform::Render::Tessellator *))gen->mTess.AddVertex)(&gen->mTess);
      v14 = 0;
      while ( 1 )
      {
        v15 = v14;
        if ( v42 )
        {
          v16 = (*(__int64 (__fastcall **)(volatile int *, unsigned int *, float *))(*(_QWORD *)&v42[4].RefCount + 72i64))(
                  &v42[4].RefCount,
                  &v28,
                  &x2);
          ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int128 *, int *))v42[11].__vftable[3].~RefCountImplCore)(
            &v42[11],
            v44,
            v62);
          if ( !v16 )
            break;
          x2 = x2 + (float)((float)(*(float *)v62 - x2) * v43);
          y2 = y2 + (float)((float)(*(float *)&v62[1] - y2) * v43);
          if ( (unsigned int)(v16 - 2) <= 1 )
          {
            v56 = v56 + (float)((float)(*(float *)&v62[2] - v56) * v43);
            y3 = y3 + (float)((float)(*(float *)&v62[3] - y3) * v43);
            if ( v16 == 3 )
            {
              x4 = x4 + (float)((float)(*(float *)&v62[4] - x4) * v43);
              y4 = y4 + (float)((float)(*(float *)&v62[5] - y4) * v43);
            }
          }
        }
        else
        {
          v16 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *, float *))v41->__vftable[3].~RefCountImplCore)(
                  v41,
                  &v28,
                  &x2);
        }
        if ( !v16 )
          break;
        ++v14;
        switch ( v16 )
        {
          case 1:
            tr->Transform((Scaleform::Render::TransformerBase *)tr, &x2, &y2);
            ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&gen->mTess);
            break;
          case 2:
            tr->Transform((Scaleform::Render::TransformerBase *)tr, &x2, &y2);
            tr->Transform((Scaleform::Render::TransformerBase *)tr, &v56, &y3);
            Scaleform::Render::TessellateQuadCurve(&gen->mTess, param, x2, y2, v56, y3);
            break;
          case 3:
            tr->Transform((Scaleform::Render::TransformerBase *)tr, &x2, &y2);
            tr->Transform((Scaleform::Render::TransformerBase *)tr, &v56, &y3);
            tr->Transform((Scaleform::Render::TransformerBase *)tr, &x4, &y4);
            Scaleform::Render::TessellateCubicCurve(&gen->mTess, param, x2, y2, v56, y3, x4, y4);
            break;
          default:
            v14 = v15;
            break;
        }
      }
      if ( v14 )
      {
        v17 = v39;
        v18 = v61;
        v19 = (__int64 *)v39->pShapeData.pObject;
        if ( v61 )
        {
          v20 = *v19;
          v51 = 0i64;
          (*(void (__fastcall **)(__int64 *, _QWORD, char *))(v20 + 32))(v19, v61, v50);
          v21 = v51 != 0i64;
          if ( v51 )
            Scaleform::RefCountImpl::Release(v51);
          v18 = v61;
        }
        else
        {
          v21 = 0;
        }
        v22 = v60;
        v23 = (__int64 *)v17->pShapeData.pObject;
        if ( v60 )
        {
          v24 = *v23;
          v53 = 0i64;
          (*(void (__fastcall **)(__int64 *, _QWORD, char *))(v24 + 32))(v23, v60, v52);
          v25 = v53 != 0i64;
          if ( v53 )
            Scaleform::RefCountImpl::Release(v53);
          v18 = v61;
          v22 = v60;
        }
        else
        {
          v25 = 0;
        }
        LOBYTE(x3) = v21;
        p_mTess->FinalizePath(&gen->mTess, v22, v18, v25, x3);
        v11 = 0;
      }
      else
      {
        Size = gen->mTess.SrcVertices.Size;
        v11 = 0;
        if ( Size )
          gen->mTess.SrcVertices.Size = Size - 1;
      }
    }
  }
  if ( v42 )
    Scaleform::RefCountImpl::Release(v42);
  if ( v41 )
    Scaleform::RefCountImpl::Release(v41);
  Scaleform::RefCountImplCore::~RefCountImplCore(&v40);
}

void __fastcall Scaleform::Render::ShapeMeshProvider::addStroke(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::MeshGenerator *gen,
        const Scaleform::Render::ToleranceParams *param,
        const Scaleform::Render::TransformerBase *tr,
        unsigned int startPos,
        unsigned int strokeStyleIdx,
        float snapOffset,
        float morphRatio)
{
  unsigned int i; // er12
  unsigned int v11; // edi
  unsigned int v12; // er15
  __int64 v13; // r9
  Scaleform::Render::StrokeSorter::PathType *v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v18; // rbx
  __int64 v19; // r10
  unsigned int v20; // ecx
  Scaleform::Render::StrokeSorter::PathType *v21; // r8
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  unsigned int v24; // edi
  Scaleform::Render::StrokeSorter::VertexType *v25; // r11
  unsigned int v26; // ecx
  Scaleform::Render::StrokeSorter::PathType *v27; // r8
  unsigned int v28; // edx
  unsigned __int64 v29; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v30; // rdx
  __int64 v31; // r9
  Scaleform::Render::StrokeSorter::PathType *v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v36; // rdx

  Scaleform::Render::ShapeMeshProvider::addToStrokeSorter(
    this,
    gen,
    param,
    tr,
    startPos,
    strokeStyleIdx,
    snapOffset,
    morphRatio);
  gen->mStroker.Clear(&gen->mStroker);
  for ( i = 0; i < LODWORD(gen->mStrokeSorter.OutPaths.Size); ++i )
  {
    v11 = 0;
    v12 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4][i & 0xF].numVer & 0xFFFFFFF;
    if ( v12 )
    {
      do
      {
        v13 = i & 0xF;
        v14 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4];
        v15 = v11;
        v16 = v14[v13].numVer & 0xFFFFFFF;
        if ( v11 >= v16 )
          v15 = v11 - v16;
        v17 = v14[v13].start + v15;
        ++v11;
        v18 = &gen->mStrokeSorter.OutVertices.Pages[v17 >> 4][v17 & 0xF];
        switch ( v18->segType )
        {
          case 1u:
            ((void (__fastcall *)(Scaleform::Render::Stroker *))gen->mStroker.AddVertex)(&gen->mStroker);
            break;
          case 2u:
            v31 = i & 0xF;
            v32 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4];
            v33 = v11;
            v34 = v32[v31].numVer & 0xFFFFFFF;
            if ( v11 >= v34 )
              v33 = v11 - v34;
            v35 = v32[v31].start + v33;
            ++v11;
            v36 = &gen->mStrokeSorter.OutVertices.Pages[v35 >> 4][v35 & 0xF];
            Scaleform::Render::TessellateQuadCurve(&gen->mStroker, param, v18->x, v18->y, v36->x, v36->y);
            break;
          case 3u:
            v19 = i & 0xF;
            v20 = v11;
            v21 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4];
            v22 = v21[v19].numVer & 0xFFFFFFF;
            if ( v11 >= v22 )
              v20 = v11 - v22;
            v23 = v21[v19].start + v20;
            v24 = v11 + 1;
            v25 = &gen->mStrokeSorter.OutVertices.Pages[v23 >> 4][v23 & 0xF];
            v26 = v24;
            v27 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4];
            v28 = v27[v19].numVer & 0xFFFFFFF;
            if ( v24 >= v28 )
              v26 = v24 - v28;
            v29 = v27[v19].start + v26;
            v11 = v24 + 1;
            v30 = &gen->mStrokeSorter.OutVertices.Pages[v29 >> 4][v29 & 0xF];
            Scaleform::Render::TessellateCubicCurve(
              &gen->mStroker,
              param,
              v18->x,
              v18->y,
              v25->x,
              v25->y,
              v30->x,
              v30->y);
            break;
        }
      }
      while ( v11 < v12 );
    }
    Scaleform::Render::Stroker::GenerateStroke(&gen->mStroker, &gen->mTess);
  }
}

void __fastcall Scaleform::Render::ShapeMeshProvider::addStroke(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::MeshGenerator *gen,
        Scaleform::Render::TessBase *stroker,
        const Scaleform::Render::ToleranceParams *param,
        const Scaleform::Render::TransformerBase *tr,
        unsigned int startPos,
        unsigned int strokeStyleIdx,
        float snapOffset,
        float morphRatio)
{
  unsigned int i; // er12
  unsigned int v13; // edi
  unsigned int v14; // er15
  __int64 v15; // r9
  Scaleform::Render::StrokeSorter::PathType *v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v20; // rbx
  __int64 v21; // r10
  unsigned int v22; // ecx
  Scaleform::Render::StrokeSorter::PathType *v23; // r8
  unsigned int v24; // edx
  unsigned __int64 v25; // rcx
  unsigned int v26; // edi
  Scaleform::Render::StrokeSorter::VertexType *v27; // r11
  unsigned int v28; // ecx
  Scaleform::Render::StrokeSorter::PathType *v29; // r8
  unsigned int v30; // edx
  unsigned __int64 v31; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v32; // rdx
  __int64 v33; // r9
  Scaleform::Render::StrokeSorter::PathType *v34; // r8
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned __int64 v37; // rcx
  Scaleform::Render::StrokeSorter::VertexType *v38; // rdx
  BOOL x3; // [rsp+20h] [rbp-48h]

  Scaleform::Render::ShapeMeshProvider::addToStrokeSorter(
    this,
    gen,
    param,
    tr,
    startPos,
    strokeStyleIdx,
    snapOffset,
    morphRatio);
  stroker->Clear(stroker);
  for ( i = 0; i < LODWORD(gen->mStrokeSorter.OutPaths.Size); ++i )
  {
    v13 = 0;
    v14 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4][i & 0xF].numVer & 0xFFFFFFF;
    if ( v14 )
    {
      do
      {
        v15 = i & 0xF;
        v16 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4];
        v17 = v13;
        v18 = v16[v15].numVer & 0xFFFFFFF;
        if ( v13 >= v18 )
          v17 = v13 - v18;
        v19 = v16[v15].start + v17;
        ++v13;
        v20 = &gen->mStrokeSorter.OutVertices.Pages[v19 >> 4][v19 & 0xF];
        switch ( v20->segType )
        {
          case 1u:
            ((void (__fastcall *)(Scaleform::Render::TessBase *))stroker->AddVertex)(stroker);
            break;
          case 2u:
            v33 = i & 0xF;
            v34 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4];
            v35 = v13;
            v36 = v34[v33].numVer & 0xFFFFFFF;
            if ( v13 >= v36 )
              v35 = v13 - v36;
            v37 = v34[v33].start + v35;
            ++v13;
            v38 = &gen->mStrokeSorter.OutVertices.Pages[v37 >> 4][v37 & 0xF];
            Scaleform::Render::TessellateQuadCurve(stroker, param, v20->x, v20->y, v38->x, v38->y);
            break;
          case 3u:
            v21 = i & 0xF;
            v22 = v13;
            v23 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4];
            v24 = v23[v21].numVer & 0xFFFFFFF;
            if ( v13 >= v24 )
              v22 = v13 - v24;
            v25 = v23[v21].start + v22;
            v26 = v13 + 1;
            v27 = &gen->mStrokeSorter.OutVertices.Pages[v25 >> 4][v25 & 0xF];
            v28 = v26;
            v29 = gen->mStrokeSorter.OutPaths.Pages[(unsigned __int64)i >> 4];
            v30 = v29[v21].numVer & 0xFFFFFFF;
            if ( v26 >= v30 )
              v28 = v26 - v30;
            v31 = v29[v21].start + v28;
            v13 = v26 + 1;
            v32 = &gen->mStrokeSorter.OutVertices.Pages[v31 >> 4][v31 & 0xF];
            Scaleform::Render::TessellateCubicCurve(stroker, param, v20->x, v20->y, v27->x, v27->y, v32->x, v32->y);
            break;
        }
      }
      while ( v13 < v14 );
    }
    LOBYTE(x3) = 0;
    stroker->FinalizePath(stroker, 0, 0, 0, x3);
  }
}

void __fastcall Scaleform::Render::ShapeMeshProvider::addToStrokeSorter(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::MeshGenerator *gen,
        const Scaleform::Render::ToleranceParams *param,
        const Scaleform::Render::TransformerBase *tr,
        unsigned int startPos,
        unsigned int strokeStyleIdx,
        float snapOffset,
        float morphRatio)
{
  Scaleform::RefCountVImpl *pObject; // rdi
  Scaleform::RefCountVImpl *v13; // rbx
  char v14; // si
  int v15; // ebx
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19; // ebx
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  Scaleform::Render::DashArray *v23; // rdi
  float v24; // xmm0_4
  BOOL y3; // [rsp+20h] [rbp-E0h]
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+44h] [rbp-BCh]
  __int64 v28; // [rsp+4Ch] [rbp-B4h]
  __int64 v29; // [rsp+54h] [rbp-ACh]
  __int64 v30; // [rsp+5Ch] [rbp-A4h]
  __int64 v31; // [rsp+64h] [rbp-9Ch]
  int v32; // [rsp+6Ch] [rbp-94h]
  int v33; // [rsp+70h] [rbp-90h]
  char v34; // [rsp+74h] [rbp-8Ch]
  _BYTE v35[48]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h]
  Scaleform::RefCountImplCore v37; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::RefCountVImpl *v38; // [rsp+C0h] [rbp-40h]
  Scaleform::RefCountVImpl *v39; // [rsp+C8h] [rbp-38h]
  float v40; // [rsp+D0h] [rbp-30h]
  __int128 v41[3]; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v42; // [rsp+104h] [rbp+4h]
  __int128 v43; // [rsp+10Ch] [rbp+Ch]
  __int128 v44; // [rsp+11Ch] [rbp+1Ch]
  __int128 v45; // [rsp+12Ch] [rbp+2Ch]
  __int64 v46; // [rsp+13Ch] [rbp+3Ch]
  Scaleform::Render::StrokeStyleType s1; // [rsp+150h] [rbp+50h] BYREF
  float x; // [rsp+178h] [rbp+78h] BYREF
  float y; // [rsp+17Ch] [rbp+7Ch]
  float x3; // [rsp+180h] [rbp+80h]
  float v51; // [rsp+184h] [rbp+84h]
  float x4; // [rsp+188h] [rbp+88h]
  float y4; // [rsp+18Ch] [rbp+8Ch]
  int v54[6]; // [rsp+190h] [rbp+90h] BYREF
  char v55[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v56; // [rsp+1B0h] [rbp+B0h]
  int v57[6]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v58[16]; // [rsp+1D0h] [rbp+D0h] BYREF

  v27 = 0i64;
  v28 = 0i64;
  v29 = 0i64;
  v30 = 0i64;
  v31 = 0i64;
  v32 = 0;
  v34 = 0;
  BYTE4(v36) = 0;
  v26 = startPos;
  v33 = 1065353216;
  *(_DWORD *)v35 = startPos;
  memset(&v35[4], 0, 44);
  LODWORD(v36) = 1065353216;
  *(_OWORD *)&s1.pFill.pObject = 0i64;
  Scaleform::Render::ShapeMeshProvider::GetStrokeStyle(this, strokeStyleIdx, &s1, morphRatio);
  pObject = (Scaleform::RefCountVImpl *)this->pMorphData.pObject;
  v13 = (Scaleform::RefCountVImpl *)this->pShapeData.pObject;
  v37.__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::Render::MorphInterpolator::`vftable';
  v37.RefCount = 1;
  if ( v13 )
    Scaleform::Render::RenderBuffer::AddRef(v13);
  v38 = v13;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v39 = pObject;
  v14 = 1;
  v41[0] = *(_OWORD *)v35;
  v41[1] = *(_OWORD *)&v35[16];
  v41[2] = *(_OWORD *)&v35[32];
  v43 = *(_OWORD *)v35;
  v44 = *(_OWORD *)&v35[16];
  v45 = *(_OWORD *)&v35[32];
  v40 = morphRatio;
  v42 = v36;
  v46 = v36;
  while ( 1 )
  {
LABEL_6:
    if ( v39 )
    {
      v15 = (*(__int64 (__fastcall **)(volatile int *, unsigned int *, float *, char *))(*(_QWORD *)&v39[4].RefCount
                                                                                       + 64i64))(
              &v39[4].RefCount,
              &v26,
              &x,
              v55);
      ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int128 *, int *, char *))v39[11].__vftable[2].Release)(
        &v39[11],
        v41,
        v57,
        v58);
      if ( v15 )
      {
        v16 = x + (float)((float)(*(float *)v57 - x) * v40);
        x = v16;
        v17 = y + (float)((float)(*(float *)&v57[1] - y) * v40);
        y = v17;
        goto LABEL_9;
      }
    }
    else
    {
      v15 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *, float *, char *))v38->__vftable[2].Release)(
              v38,
              &v26,
              &x,
              v55);
    }
    v16 = x;
    v17 = y;
LABEL_9:
    if ( !v15 || !v14 && v15 == 2 )
      break;
    v14 = 0;
    if ( v56 == strokeStyleIdx )
    {
      v18 = v16;
LABEL_14:
      Scaleform::Render::StrokeSorter::AddVertexNV(&gen->mStrokeSorter, v18, v17, 1u);
      while ( v39 )
      {
        v19 = (*(__int64 (__fastcall **)(volatile int *, unsigned int *, float *))(*(_QWORD *)&v39[4].RefCount + 72i64))(
                &v39[4].RefCount,
                &v26,
                &x);
        ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int128 *, int *))v39[11].__vftable[3].~RefCountImplCore)(
          &v39[11],
          v41,
          v54);
        if ( !v19 )
          goto LABEL_17;
        v21 = x3;
        v22 = v51;
        v20 = x + (float)((float)(*(float *)v54 - x) * v40);
        x = v20;
        v17 = y + (float)((float)(*(float *)&v54[1] - y) * v40);
        y = v17;
        if ( (unsigned int)(v19 - 2) <= 1 )
        {
          v21 = x3 + (float)((float)(*(float *)&v54[2] - x3) * v40);
          v22 = v51 + (float)((float)(*(float *)&v54[3] - v51) * v40);
          x3 = v21;
          v51 = v22;
          if ( v19 == 3 )
          {
            x4 = x4 + (float)((float)(*(float *)&v54[4] - x4) * v40);
            y4 = y4 + (float)((float)(*(float *)&v54[5] - y4) * v40);
          }
        }
LABEL_18:
        switch ( v19 )
        {
          case 0:
            LOBYTE(y3) = 0;
            gen->mStrokeSorter.FinalizePath(&gen->mStrokeSorter, 0, 0, 0, y3);
            goto LABEL_6;
          case 1:
            v18 = v20;
            goto LABEL_14;
          case 2:
            Scaleform::Render::StrokeSorter::AddQuad(&gen->mStrokeSorter, v20, v17, v21, v22);
            break;
          case 3:
            Scaleform::Render::StrokeSorter::AddCubic(&gen->mStrokeSorter, v20, v17, v21, v22, x4, y4);
            break;
        }
      }
      v19 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *, float *))v38->__vftable[3].~RefCountImplCore)(
              v38,
              &v26,
              &x);
LABEL_17:
      v20 = x;
      v17 = y;
      v21 = x3;
      v22 = v51;
      goto LABEL_18;
    }
    if ( v39 )
    {
      (*(void (__fastcall **)(volatile int *, unsigned int *))(*(_QWORD *)&v39[4].RefCount + 80i64))(
        &v39[4].RefCount,
        &v26);
      ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int128 *))v39[11].__vftable[3].AddRef)(&v39[11], v41);
    }
    else
    {
      ((void (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *))v38->__vftable[3].AddRef)(v38, &v26);
    }
  }
  Scaleform::Render::StrokeSorter::Sort(&gen->mStrokeSorter);
  v23 = s1.pDashes.pObject;
  if ( s1.pDashes.pObject )
  {
    v24 = tr->GetScale((Scaleform::Render::TransformerBase *)tr);
    Scaleform::Render::StrokeSorter::GenerateDashes(&gen->mStrokeSorter, v23, param, v24);
  }
  Scaleform::Render::StrokeSorter::Transform(&gen->mStrokeSorter, tr);
  if ( (s1.Flags & 1) != 0 )
  {
    if ( !s1.pDashes.pObject )
      Scaleform::Render::StrokeSorter::Snap(&gen->mStrokeSorter, snapOffset, snapOffset);
  }
  else if ( snapOffset > 0.0 )
  {
    Scaleform::Render::StrokeSorter::AddOffset(&gen->mStrokeSorter, snapOffset, snapOffset);
  }
  if ( v39 )
    Scaleform::RefCountImpl::Release(v39);
  if ( v38 )
    Scaleform::RefCountImpl::Release(v38);
  Scaleform::RefCountImplCore::~RefCountImplCore(&v37);
  if ( s1.pDashes.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)s1.pDashes.pObject);
  if ( s1.pFill.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)s1.pFill.pObject);
}

char __fastcall Scaleform::Render::ShapeMeshProvider::checkI9gLayer(
        Scaleform::Render::ShapeMeshProvider *this,
        const Scaleform::Render::ShapeMeshProvider::DrawLayerType *dl)
{
  unsigned int StartPos; // eax
  Scaleform::Render::ShapeDataInterface *pObject; // rcx
  __int64 v6; // rdx
  Scaleform::Render::ShapeDataInterface *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rbx
  char v9; // [rsp+20h] [rbp-29h] BYREF
  Scaleform::RefCountVImpl *v10; // [rsp+28h] [rbp-21h]
  unsigned int v11; // [rsp+30h] [rbp-19h] BYREF
  __int64 v12; // [rsp+34h] [rbp-15h]
  __int64 v13; // [rsp+3Ch] [rbp-Dh]
  __int64 v14; // [rsp+44h] [rbp-5h]
  __int64 v15; // [rsp+4Ch] [rbp+3h]
  __int64 v16; // [rsp+54h] [rbp+Bh]
  int v17; // [rsp+5Ch] [rbp+13h]
  Tween::EasingType v18; // [rsp+60h] [rbp+17h]
  char v19; // [rsp+64h] [rbp+1Bh]
  unsigned int v20; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned int v21; // [rsp+6Ch] [rbp+23h]
  int v22; // [rsp+70h] [rbp+27h]
  float v23[6]; // [rsp+78h] [rbp+2Fh] BYREF

  if ( this->pMorphData.pObject )
    return 0;
  StartPos = dl->StartPos;
  pObject = this->pShapeData.pObject;
  v18 = FLOAT_1_0;
  v11 = StartPos;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0;
  v19 = 0;
  if ( (unsigned int)pObject->ReadPathInfo(pObject, (Scaleform::Render::ShapePosInfo *)&v11, v23, &v20) - 1 > 1 )
    return 0;
  v6 = v21;
  if ( (v20 == 0) == (v21 == 0) || v22 )
    return 0;
  v7 = this->pShapeData.pObject;
  v10 = 0i64;
  if ( v20 )
    v6 = v20;
  v7->GetFillStyle(v7, v6, (Scaleform::Render::FillStyleType *)&v9);
  v8 = v10;
  if ( !v10 )
    return 0;
  if ( !v10[1].__vftable
    || Scaleform::Render::Matrix2x4<float>::IsFreeRotation((Scaleform::Render::Matrix2x4<float> *)&v10[2], 0.000001)
    || ((__int64)v8[4].__vftable & 1) == 0 )
  {
LABEL_17:
    if ( v8 )
      Scaleform::RefCountImpl::Release(v8);
    return 0;
  }
  this->pShapeData.pObject->SkipPathData(this->pShapeData.pObject, (Scaleform::Render::ShapePosInfo *)&v11);
  if ( (((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *, unsigned int *, float *, unsigned int *))this->pShapeData.pObject->ReadPathInfo)(
          this->pShapeData.pObject,
          &v11,
          v23,
          &v20) & 0xFFFFFFFD) != 0 )
  {
    v8 = v10;
    goto LABEL_17;
  }
  if ( v10 )
    Scaleform::RefCountImpl::Release(v10);
  return 1;
}

bool __fastcall Scaleform::Render::ShapeMeshProvider::checkI9gMergedSlice(Scaleform::Render::ShapeMeshProvider *this)
{
  int v3; // edi
  Scaleform::RefCountVImpl_vtbl *v4; // rbx
  unsigned int v5; // esi
  Scaleform::Render::ShapeDataInterface *pObject; // rcx
  Scaleform::RefCountVImpl_vtbl *v7; // rax
  char v8; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::RefCountVImpl *v9; // [rsp+28h] [rbp-10h]

  if ( this->pMorphData.pObject )
    return 0;
  v3 = 0;
  if ( this->DrawLayers.Data.Size == 9
    && this->pShapeData.pObject->GetFillStyleCount(this->pShapeData.pObject) == 9
    && !this->pShapeData.pObject->GetStrokeStyleCount(this->pShapeData.pObject) )
  {
    v4 = 0i64;
    v5 = 0;
    while ( 1 )
    {
      pObject = this->pShapeData.pObject;
      v9 = 0i64;
      pObject->GetFillStyle(pObject, ++v5, (Scaleform::Render::FillStyleType *)&v8);
      if ( !v9 )
        break;
      v7 = v9[1].__vftable;
      if ( v7 && (!v4 || v4 == v7) )
        ++v3;
      v4 = v9[1].__vftable;
      Scaleform::RefCountImpl::Release(v9);
      if ( v5 >= 9 )
        return v3 == 9;
    }
  }
  return 0;
}

void __fastcall Scaleform::Render::ShapeMeshProvider::computeImgAdjustMatrix(
        Scaleform::Render::ShapeMeshProvider *this,
        const Scaleform::Render::Scale9GridData *s9g,
        unsigned int drawLayer,
        unsigned int imgFillStyle,
        Scaleform::Render::Matrix2x4<float> *mtx)
{
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *Data; // rax
  char v9; // r14
  Scaleform::Render::ShapeDataInterface *pObject; // rcx
  int StartPos; // edx
  Scaleform::Render::ShapeDataInterface_vtbl *v12; // rax
  Scaleform::Render::ShapePathType i; // eax
  float x2; // xmm7_4
  float x1; // xmm9_4
  bool v16; // cc
  float y1; // xmm6_4
  float y2; // xmm8_4
  Scaleform::Render::ShapePosInfo pos; // [rsp+34h] [rbp-D4h] BYREF
  char v20; // [rsp+6Ch] [rbp-9Ch]
  _QWORD trans[5]; // [rsp+70h] [rbp-98h] BYREF
  Scaleform::Render::Scale9GridInfo v22; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::Render::Rect<float> bounds; // [rsp+258h] [rbp+150h] BYREF
  float x; // [rsp+268h] [rbp+160h] BYREF
  float y[3]; // [rsp+26Ch] [rbp+164h] BYREF
  int v26[4]; // [rsp+278h] [rbp+170h] BYREF
  float coord[6]; // [rsp+288h] [rbp+180h] BYREF

  *(_OWORD *)&trans[1] = _xmm;
  Data = this->DrawLayers.Data.Data;
  v9 = 1;
  pObject = this->pShapeData.pObject;
  StartPos = Data[drawLayer].StartPos;
  *(_DWORD *)&pos.Initialized = FLOAT_1_0;
  pos.StartX = StartPos;
  memset(&pos.StartY, 0, 44);
  v20 = 0;
  v12 = pObject->__vftable;
  bounds = (Scaleform::Render::Rect<float>)_xmm_f149f2caf149f2ca7149f2ca7149f2ca;
  *(_OWORD *)&trans[3] = _xmm;
  for ( i = v12->ReadPathInfo(pObject, (Scaleform::Render::ShapePosInfo *)&pos.StartX, coord, (unsigned int *)v26);
        i;
        i = this->pShapeData.pObject->ReadPathInfo(
              this->pShapeData.pObject,
              (Scaleform::Render::ShapePosInfo *)&pos.StartX,
              coord,
              (unsigned int *)v26) )
  {
    if ( !v9 && i == Shape_NewLayer )
      break;
    v9 = 0;
    if ( v26[0] == imgFillStyle || v26[1] == imgFillStyle )
      Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(
        this->pShapeData.pObject,
        (const Scaleform::Render::Matrix2x4<float> *)&trans[1],
        (Scaleform::Render::ShapePosInfo *)&pos.StartX,
        coord,
        &bounds);
    else
      this->pShapeData.pObject->SkipPathData(this->pShapeData.pObject, (Scaleform::Render::ShapePosInfo *)&pos.StartX);
  }
  x2 = bounds.x2;
  x1 = bounds.x1;
  v16 = bounds.x2 <= bounds.x1;
  *(_QWORD *)&mtx->M[0][2] = 0i64;
  mtx->M[1][0] = 0.0;
  mtx->M[1][3] = 0.0;
  *(_QWORD *)&mtx->M[0][0] = 1065353216i64;
  *(_QWORD *)&mtx->M[1][1] = 1065353216i64;
  if ( !v16 )
  {
    y1 = bounds.y1;
    y2 = bounds.y2;
    if ( bounds.y2 > bounds.y1 )
    {
      *(_OWORD *)&trans[1] = _xmm;
      *(_OWORD *)&trans[3] = _xmm;
      Scaleform::Render::Scale9GridInfo::Scale9GridInfo(
        &v22,
        s9g,
        (const Scaleform::Render::Matrix2x4<float> *)&trans[1]);
      bounds.x1 = x1;
      bounds.y1 = y1;
      bounds.x2 = x2;
      bounds.y2 = y1;
      x = x2;
      y[0] = y2;
      Scaleform::Render::Scale9GridInfo::Transform(&v22, &bounds.x1, &bounds.y1);
      Scaleform::Render::Scale9GridInfo::Transform(&v22, &bounds.x2, &bounds.y2);
      Scaleform::Render::Scale9GridInfo::Transform(&v22, &x, y);
      trans[1] = __PAIR64__(LODWORD(y1), LODWORD(x1));
      trans[2] = __PAIR64__(LODWORD(y1), LODWORD(x2));
      trans[3] = __PAIR64__(LODWORD(y2), LODWORD(x2));
      Scaleform::Render::Matrix2x4<float>::SetParlToParl(mtx, (const float *)&trans[1], &bounds.x1);
      Scaleform::RefCountImplCore::~RefCountImplCore(&v22);
    }
  }
}

void __fastcall Scaleform::Render::ShapeMeshProvider::countComplexFills(
        Scaleform::Render::ShapeMeshProvider *this,
        const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> *paths,
        unsigned __int64 i1,
        unsigned __int64 i2,
        Scaleform::Render::ShapeMeshProvider::DrawLayerType *dl)
{
  const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> *v5; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *Data; // rax
  unsigned int v10; // ebx
  Scaleform::RefCountVImpl *v11; // r8
  unsigned int v12; // esi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned int *v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // ebx
  Scaleform::MemoryHeap_vtbl *v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  unsigned int v21; // esi
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r8
  unsigned int *v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // ebx
  Scaleform::MemoryHeap_vtbl *v27; // rax
  _QWORD *v28; // rax
  char v29[8]; // [rsp+20h] [rbp-30h] BYREF
  Scaleform::RefCountVImpl *v30; // [rsp+28h] [rbp-28h]
  __int64 v31; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-18h]
  Scaleform::MemoryHeap *v33; // [rsp+40h] [rbp-10h]

  v32 = (__int64 *)((char *)&v31 + 4);
  v5 = paths;
  v33 = Scaleform::Memory::pGlobalHeap;
  *(_QWORD *)&dl->StartFill = LODWORD(this->FillToStyleTable.Data.Size);
  v31 = 32i64;
  if ( i1 < i2 )
  {
    v7 = i1;
    v8 = i2 - i1;
    while ( 1 )
    {
      Data = v5->Data;
      v10 = Data[v7].Styles[0];
      if ( v10 != Data[v7].Styles[1] )
        break;
LABEL_46:
      v5 = paths;
      ++v7;
      if ( !--v8 )
      {
        if ( v32 != (__int64 *)((char *)&v31 + 4) )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))v33->Free)(v33);
        return;
      }
    }
    v11 = 0i64;
    v30 = 0i64;
    if ( !v10 )
      goto LABEL_24;
    this->pShapeData.pObject->GetFillStyle(this->pShapeData.pObject, v10, (Scaleform::Render::FillStyleType *)v29);
    v11 = v30;
    v12 = 0;
    if ( v30 )
      v12 = v10;
    if ( v12 < (unsigned int)v31 && (*((_DWORD *)v32 + ((unsigned __int64)v12 >> 5)) & (1 << (v12 & 0x1F))) != 0 )
    {
LABEL_24:
      v20 = paths->Data[v7].Styles[1];
      if ( !v20 )
        goto LABEL_44;
      this->pShapeData.pObject->GetFillStyle(this->pShapeData.pObject, v20, (Scaleform::Render::FillStyleType *)v29);
      v11 = v30;
      v21 = 0;
      if ( v30 )
        v21 = v20;
      if ( v21 < (unsigned int)v31 && (*((_DWORD *)v32 + ((unsigned __int64)v21 >> 5)) & (1 << (v21 & 0x1F))) != 0 )
        goto LABEL_44;
      v22 = this->FillToStyleTable.Data.Size + 1;
      if ( v22 >= this->FillToStyleTable.Data.Size )
      {
        if ( v22 > this->FillToStyleTable.Data.Policy.Capacity )
        {
          v23 = v22 + (v22 >> 2);
          goto LABEL_34;
        }
      }
      else if ( v22 < this->FillToStyleTable.Data.Policy.Capacity >> 1 )
      {
        v23 = this->FillToStyleTable.Data.Size + 1;
LABEL_34:
        Scaleform::ArrayDataBase<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &this->FillToStyleTable.Data,
          &this->FillToStyleTable,
          v23);
      }
      v24 = this->FillToStyleTable.Data.Data;
      this->FillToStyleTable.Data.Size = v22;
      v24[v22 - 1] = v21;
      ++dl->FillCount;
      if ( v21 >= (unsigned int)v31 )
      {
        v25 = (unsigned int)(v31 + 31) >> 5;
        v26 = 2 * v25;
        if ( (v21 + 32) >> 5 >= 2 * (int)v25 )
          v26 = (v21 + 32) >> 5;
        if ( v26 > (unsigned int)v25 )
        {
          v27 = v33->__vftable;
          if ( v32 == (__int64 *)((char *)&v31 + 4) )
          {
            v32 = v27->Alloc(v33, 4i64 * v26, 0i64);
            *(_DWORD *)v32 = HIDWORD(v31);
            v28 = v32;
          }
          else
          {
            v28 = v27->Realloc(v33, v32, 4i64 * v26);
            v32 = v28;
          }
          memset((char *)v28 + 4 * v25, 0, 4i64 * (v26 - (unsigned int)v25));
          LODWORD(v31) = 32 * v26;
        }
      }
      *((_DWORD *)v32 + ((unsigned __int64)v21 >> 5)) |= 1 << (v21 & 0x1F);
      v11 = v30;
LABEL_44:
      if ( v11 )
        Scaleform::RefCountImpl::Release(v11);
      goto LABEL_46;
    }
    v13 = this->FillToStyleTable.Data.Size + 1;
    if ( v13 >= this->FillToStyleTable.Data.Size )
    {
      if ( v13 > this->FillToStyleTable.Data.Policy.Capacity )
      {
        v14 = v13 + (v13 >> 2);
        goto LABEL_14;
      }
    }
    else if ( v13 < this->FillToStyleTable.Data.Policy.Capacity >> 1 )
    {
      v14 = this->FillToStyleTable.Data.Size + 1;
LABEL_14:
      Scaleform::ArrayDataBase<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->FillToStyleTable.Data,
        &this->FillToStyleTable,
        v14);
    }
    v15 = this->FillToStyleTable.Data.Data;
    this->FillToStyleTable.Data.Size = v13;
    v15[v13 - 1] = v12;
    ++dl->FillCount;
    if ( v12 >= (unsigned int)v31 )
    {
      v16 = (unsigned int)(v31 + 31) >> 5;
      v17 = 2 * v16;
      if ( (v12 + 32) >> 5 >= 2 * (int)v16 )
        v17 = (v12 + 32) >> 5;
      if ( v17 > (unsigned int)v16 )
      {
        v18 = v33->__vftable;
        if ( v32 == (__int64 *)((char *)&v31 + 4) )
        {
          v32 = v18->Alloc(v33, 4i64 * v17, 0i64);
          *(_DWORD *)v32 = HIDWORD(v31);
          v19 = v32;
        }
        else
        {
          v19 = v18->Realloc(v33, v32, 4i64 * v17);
          v32 = v19;
        }
        memset((char *)v19 + 4 * v16, 0, 4i64 * (v17 - (unsigned int)v16));
        LODWORD(v31) = 32 * v17;
      }
    }
    *((_DWORD *)v32 + ((unsigned __int64)v12 >> 5)) |= 1 << (v12 & 0x1F);
    v11 = v30;
    goto LABEL_24;
  }
}

void __fastcall Scaleform::Render::ShapeMeshProvider::createDrawLayers(
        Scaleform::Render::ShapeMeshProvider *this,
        const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> *paths,
        unsigned __int64 i1,
        unsigned __int64 i2)
{
  const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> *v4; // rsi
  _QWORD *v5; // rdx
  Scaleform::MemoryHeap *v7; // r9
  Scaleform::Render::ShapeMeshProvider::TmpPathInfoType *Data; // rax
  unsigned int v9; // er10
  Scaleform::Render::ShapeMeshProvider *v11; // rbx
  unsigned int Pos; // edi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  Scaleform::ArrayDataBase<Scaleform::Render::ShapeMeshProvider::DrawLayerType,Scaleform::AllocatorLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2>,Scaleform::ArrayDefaultPolicy> *p_Data; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm0
  Scaleform::MemoryHeap_vtbl *v21; // rax
  _QWORD *v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rsi
  unsigned int v25; // edi
  Scaleform::MemoryHeap_vtbl *v26; // rax
  _QWORD *v27; // rax
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r12
  unsigned int v30; // esi
  int v31; // er14
  unsigned __int64 v32; // r15
  Scaleform::ArrayDataBase<Scaleform::Render::ShapeMeshProvider::DrawLayerType,Scaleform::AllocatorLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2>,Scaleform::ArrayDefaultPolicy> *v33; // rdi
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r8
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int64 v39; // rdi
  unsigned int v40; // ebx
  Scaleform::MemoryHeap_vtbl *v41; // rax
  _QWORD *v42; // rax
  unsigned __int64 v43; // [rsp+38h] [rbp-29h]
  Scaleform::Render::ShapeMeshProvider::DrawLayerType v44; // [rsp+40h] [rbp-21h] BYREF
  __int64 v45; // [rsp+58h] [rbp-9h] BYREF
  _QWORD *v46; // [rsp+60h] [rbp-1h]
  Scaleform::MemoryHeap *v47; // [rsp+68h] [rbp+7h]
  unsigned int v50; // [rsp+D8h] [rbp+77h]

  if ( i2 <= i1 )
    return;
  v4 = paths;
  v5 = (__int64 *)((char *)&v45 + 4);
  v7 = Scaleform::Memory::pGlobalHeap;
  v46 = (__int64 *)((char *)&v45 + 4);
  Data = v4->Data;
  v9 = 32;
  v45 = 32i64;
  v47 = Scaleform::Memory::pGlobalHeap;
  v11 = this;
  v43 = 24 * i1;
  Pos = Data[i1].Pos;
  v50 = Pos;
  if ( i1 >= i2 )
    goto LABEL_52;
  v13 = i1;
  v14 = i2 - i1;
  do
  {
    if ( v4->Data[v13].Styles[0] == v4->Data[v13].Styles[1] || v9 && (*(_DWORD *)v5 & 1) != 0 )
      goto LABEL_19;
    Scaleform::Render::ShapeMeshProvider::countComplexFills(v11, v4, i1, i2, &v44);
    v44.StartPos = Pos;
    p_Data = &v11->DrawLayers.Data;
    *(_QWORD *)&v44.StrokeStyle = 0i64;
    v16 = v11->DrawLayers.Data.Size + 1;
    if ( v16 >= p_Data->Size )
    {
      if ( v16 > p_Data->Policy.Capacity )
      {
        v17 = v16 + (v16 >> 2);
        goto LABEL_12;
      }
    }
    else if ( v16 < p_Data->Policy.Capacity >> 1 )
    {
      v17 = v16;
LABEL_12:
      Scaleform::ArrayDataBase<Scaleform::Render::ShapeMeshProvider::DrawLayerType,Scaleform::AllocatorLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        p_Data,
        p_Data,
        v17);
    }
    v18 = p_Data->Data;
    v19 = v16;
    v20 = *(_OWORD *)&v44.StartPos;
    p_Data->Size = v16;
    *(_OWORD *)&v18[v19 - 1].StartPos = v20;
    v18[v19 - 1].Image9GridType = I9gNone;
    if ( !(_DWORD)v45 )
    {
      v21 = v47->__vftable;
      if ( v46 == (__int64 *)((char *)&v45 + 4) )
      {
        v46 = v21->Alloc(v47, 4ui64, 0i64);
        *(_DWORD *)v46 = HIDWORD(v45);
        v22 = v46;
      }
      else
      {
        v22 = v21->Realloc(v47, v46, 4ui64);
        v46 = v22;
      }
      memset(v22, 0, 4ui64);
      LODWORD(v45) = 32;
    }
    *(_DWORD *)v46 |= 1u;
    v7 = v47;
    v5 = v46;
    v9 = v45;
LABEL_19:
    v23 = v4->Data[v13].Styles[2];
    if ( (_DWORD)v23 )
    {
      if ( (unsigned int)v23 >= v9 )
      {
        v24 = (v9 + 31) >> 5;
        v25 = 2 * v24;
        if ( (unsigned int)(v23 + 32) >> 5 >= 2 * (int)v24 )
          v25 = (unsigned int)(v23 + 32) >> 5;
        if ( v25 > (unsigned int)v24 )
        {
          v26 = v7->__vftable;
          if ( v5 == (__int64 *)((char *)&v45 + 4) )
          {
            v46 = v26->Alloc(v7, 4i64 * v25, 0i64);
            *(_DWORD *)v46 = HIDWORD(v45);
            v27 = v46;
          }
          else
          {
            v27 = v26->Realloc(v7, v5, 4i64 * v25);
            v46 = v27;
          }
          memset((char *)v27 + 4 * v24, 0, 4i64 * (v25 - (unsigned int)v24));
          v5 = v46;
          LODWORD(v45) = 32 * v25;
        }
        v4 = paths;
      }
      *((_DWORD *)v5 + (v23 >> 5)) |= 1 << (v23 & 0x1F);
      v7 = v47;
      v5 = v46;
      v9 = v45;
    }
    v11 = this;
    ++v13;
    Pos = v50;
    --v14;
  }
  while ( v14 );
  v28 = v43;
  if ( i1 < i2 )
  {
    v29 = i2 - i1;
    while ( 1 )
    {
      v30 = *(unsigned int *)((char *)&v4->Data->Styles[2] + v28);
      if ( v30 )
      {
        if ( v30 < v9 )
        {
          v31 = 1 << (v30 & 0x1F);
          v32 = 4 * ((unsigned __int64)v30 >> 5);
          if ( (v31 & *(_DWORD *)((_BYTE *)v5 + v32)) != 0 )
            break;
        }
      }
LABEL_51:
      v4 = paths;
      v28 += 24i64;
      Pos = v50;
      if ( !--v29 )
        goto LABEL_52;
    }
    v44.StartPos = Pos;
    v33 = &v11->DrawLayers.Data;
    v34 = v11->DrawLayers.Data.Size + 1;
    v44.FillCount = 1;
    v44.StartFill = 0;
    v44.StrokeStyle = v30;
    if ( v34 >= v33->Size )
    {
      if ( v34 > v33->Policy.Capacity )
      {
        v35 = v34 + (v34 >> 2);
LABEL_41:
        Scaleform::ArrayDataBase<Scaleform::Render::ShapeMeshProvider::DrawLayerType,Scaleform::AllocatorLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          v33,
          v33,
          v35);
      }
    }
    else if ( v34 < v33->Policy.Capacity >> 1 )
    {
      v35 = v34;
      goto LABEL_41;
    }
    v36 = v33->Data;
    v37 = v34;
    v38 = *(_OWORD *)&v44.StartPos;
    v33->Size = v34;
    *(_OWORD *)&v36[v37 - 1].StartPos = v38;
    v36[v37 - 1].Image9GridType = I9gNone;
    if ( v30 >= (unsigned int)v45 )
    {
      v39 = (unsigned int)(v45 + 31) >> 5;
      v40 = 2 * v39;
      if ( (v30 + 32) >> 5 >= 2 * (int)v39 )
        v40 = (v30 + 32) >> 5;
      if ( v40 > (unsigned int)v39 )
      {
        v41 = v47->__vftable;
        if ( v46 == (__int64 *)((char *)&v45 + 4) )
        {
          v46 = v41->Alloc(v47, 4i64 * v40, 0i64);
          *(_DWORD *)v46 = HIDWORD(v45);
          v42 = v46;
        }
        else
        {
          v42 = v41->Realloc(v47, v46, 4i64 * v40);
          v46 = v42;
        }
        memset((char *)v42 + 4 * v39, 0, 4i64 * (v40 - (unsigned int)v39));
        LODWORD(v45) = 32 * v40;
      }
    }
    v11 = this;
    *(_DWORD *)((char *)v46 + v32) &= ~v31;
    v7 = v47;
    v5 = v46;
    v9 = v45;
    this->Strokes = 1;
    goto LABEL_51;
  }
LABEL_52:
  if ( v5 != (__int64 *)((char *)&v45 + 4) )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))v7->Free)(v7);
}

void __fastcall Scaleform::Render::ShapeMeshProvider::createMorphData(Scaleform::Render::ShapeMeshProvider *this)
{
  Scaleform::Render::ShapeDataInterface *pObject; // r15
  Scaleform::Render::ShapeDataInterface *v3; // r12
  unsigned int v4; // ebx
  Scaleform::Render::ShapeDataInterface_vtbl *v5; // rax
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::Render::ShapeDataInterface_vtbl *v7; // rax
  unsigned int v8; // ebx
  Scaleform::Render::ShapeDataInterface_vtbl *v9; // rax
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::Render::ShapeDataInterface_vtbl *v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  Scaleform::Render::MorphShapeData *v14; // rbx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rsi
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *p_ShapeData2; // rbx
  Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> *p_Fills; // rcx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v18; // rsi
  char v19; // r13
  Scaleform::Render::ShapePathType v20; // ebx
  Scaleform::Render::ShapePathType v21; // eax
  Scaleform::Render::MorphShapeData *v22; // r14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v23; // rsi
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r8
  unsigned __int8 *v26; // rax
  Scaleform::Render::MorphShapeData *v27; // r14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v28; // rbx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r8
  unsigned __int8 *v31; // rax
  float v32; // xmm9_4
  float v33; // xmm8_4
  float v34; // xmm6_4
  float v35; // xmm7_4
  Scaleform::Render::ShapeDataInterface_vtbl *v36; // rax
  __int128 v37; // xmm14
  __int128 v38; // xmm15
  __int128 v39; // xmm10
  __int128 v40; // xmm11
  __int128 v41; // xmm12
  __int64 v42; // xmm13_8
  Scaleform::Render::PathEdgeType v43; // ebx
  Scaleform::Render::PathEdgeType v44; // eax
  Scaleform::Render::MorphShapeData *v45; // r14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v46; // rbx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // r8
  unsigned __int8 *v49; // rax
  Scaleform::Render::MorphShapeData *v50; // r14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v51; // rbx
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // r8
  unsigned __int8 *v54; // rax
  Scaleform::Render::MorphShapeData *v55; // r14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v56; // rbx
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // r8
  unsigned __int8 *v59; // rax
  Scaleform::Render::MorphShapeData *v60; // r14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v61; // rbx
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // r8
  unsigned __int8 *v64; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v65; // rsi
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // r8
  unsigned __int8 *v68; // rax
  Scaleform::Render::MorphShapeData *v69; // r14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v70; // rbx
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // r8
  unsigned __int8 *v73; // rax
  Scaleform::Render::MorphShapeData *v74; // r14
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus v75; // eax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v76; // rsi
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // r8
  unsigned __int8 *v79; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v80; // rsi
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // r8
  unsigned __int8 *v83; // rax
  Scaleform::Render::MorphShapeData *v84; // rsi
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus v85; // eax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v86; // rdi
  unsigned __int64 v87; // rbx
  unsigned __int64 v88; // r8
  unsigned __int8 *v89; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v90; // rdi
  unsigned __int64 v91; // rbx
  unsigned __int64 v92; // r8
  unsigned __int8 *v93; // rax
  Scaleform::Render::MorphShapeData *v94; // r14
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus v95; // eax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v96; // rsi
  unsigned __int64 v97; // rbx
  unsigned __int64 v98; // r8
  unsigned __int8 *v99; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v100; // rsi
  unsigned __int64 v101; // rbx
  unsigned __int64 v102; // r8
  unsigned __int8 *v103; // rax
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus v104; // eax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v105; // rdi
  unsigned __int64 v106; // rbx
  unsigned __int64 v107; // r8
  unsigned __int8 *v108; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v109; // rdi
  unsigned __int64 v110; // rbx
  unsigned __int64 v111; // r8
  unsigned __int8 *v112; // rax
  Scaleform::Render::MorphShapeData *v113; // r14
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus Status; // eax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v115; // rbx
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // rsi
  unsigned __int64 v118; // r8
  unsigned __int8 *v119; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v120; // rbx
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rsi
  unsigned __int64 v123; // r8
  unsigned __int8 *v124; // rax
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus v125; // eax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v126; // rbx
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // rdi
  unsigned __int64 v129; // r8
  unsigned __int8 *v130; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v131; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v133; // rdi
  unsigned __int64 v134; // r8
  unsigned __int8 *v135; // rax
  __int64 v136; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::RefCountVImpl *v137; // [rsp+50h] [rbp-B8h]
  __int128 v138; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v139[48]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v140; // [rsp+98h] [rbp-70h]
  _BYTE v141[48]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v142; // [rsp+D0h] [rbp-38h]
  char v143; // [rsp+D8h] [rbp-30h] BYREF
  Scaleform::RefCountVImpl *v144[2]; // [rsp+F0h] [rbp-18h]
  char v145; // [rsp+100h] [rbp-8h] BYREF
  Scaleform::RefCountVImpl *v146[2]; // [rsp+118h] [rbp+10h]
  unsigned int leftStyle; // [rsp+128h] [rbp+20h] BYREF
  unsigned int rightStyle; // [rsp+12Ch] [rbp+24h]
  unsigned int strokeStyle; // [rsp+130h] [rbp+28h]
  float x; // [rsp+138h] [rbp+30h] BYREF
  float y; // [rsp+13Ch] [rbp+34h]
  float cx2; // [rsp+140h] [rbp+38h]
  float cy2; // [rsp+144h] [rbp+3Ch]
  float v154; // [rsp+148h] [rbp+40h]
  float v155; // [rsp+14Ch] [rbp+44h]
  float cx1; // [rsp+150h] [rbp+48h] BYREF
  float cy; // [rsp+154h] [rbp+4Ch]
  float v158; // [rsp+158h] [rbp+50h]
  float ay; // [rsp+15Ch] [rbp+54h]
  float v160; // [rsp+160h] [rbp+58h]
  float v161; // [rsp+164h] [rbp+5Ch]
  unsigned int v162[4]; // [rsp+168h] [rbp+60h] BYREF

  pObject = this->pShapeData.pObject;
  v3 = this->pMorphData.pObject->pMorphTo.pObject;
  if ( pObject->GetFillStyleCount(pObject) )
  {
    v4 = 1;
    do
    {
      v5 = pObject->__vftable;
      v137 = 0i64;
      v5->GetFillStyle(pObject, v4, (Scaleform::Render::FillStyleType *)&v136);
      v6 = v137;
      if ( v137 )
      {
        if ( *(_QWORD *)&v137[1].RefCount )
        {
          v7 = v3->__vftable;
          *((_QWORD *)&v138 + 1) = 0i64;
          v7->GetFillStyle(v3, v4, (Scaleform::Render::FillStyleType *)&v138);
          if ( !Scaleform::Render::GradientData::operator==(
                  *(Scaleform::Render::GradientData **)&v137[1].RefCount,
                  *(const Scaleform::Render::GradientData **)(*((_QWORD *)&v138 + 1) + 24i64)) )
          {
            *(_QWORD *)(*(_QWORD *)&v137[1].RefCount + 40i64) = *(_QWORD *)(*((_QWORD *)&v138 + 1) + 24i64);
            this->GradientMorph = 1;
          }
          if ( *((_QWORD *)&v138 + 1) )
            Scaleform::RefCountImpl::Release(*((Scaleform::RefCountVImpl **)&v138 + 1));
          v6 = v137;
        }
        if ( v6 )
          Scaleform::RefCountImpl::Release(v6);
      }
      ++v4;
    }
    while ( v4 - 1 < pObject->GetFillStyleCount(pObject) );
  }
  if ( pObject->GetStrokeStyleCount(pObject) )
  {
    v8 = 1;
    do
    {
      v9 = pObject->__vftable;
      *(_OWORD *)v144 = 0i64;
      v9->GetStrokeStyle(pObject, v8, (Scaleform::Render::StrokeStyleType *)&v143);
      v10 = v144[0];
      if ( v144[0] && *(_QWORD *)&v144[0][1].RefCount )
      {
        v11 = v3->__vftable;
        *(_OWORD *)v146 = 0i64;
        v11->GetStrokeStyle(v3, v8, (Scaleform::Render::StrokeStyleType *)&v145);
        if ( !Scaleform::Render::GradientData::operator==(
                *(Scaleform::Render::GradientData **)&v144[0][1].RefCount,
                *(const Scaleform::Render::GradientData **)&v146[0][1].RefCount) )
        {
          *(_QWORD *)(*(_QWORD *)&v144[0][1].RefCount + 40i64) = *(_QWORD *)&v146[0][1].RefCount;
          this->GradientMorph = 1;
        }
        if ( v146[1] )
          Scaleform::RefCountImpl::Release(v146[1]);
        if ( v146[0] )
          Scaleform::RefCountImpl::Release(v146[0]);
        v10 = v144[0];
      }
      if ( v144[1] )
      {
        Scaleform::RefCountImpl::Release(v144[1]);
        v10 = v144[0];
      }
      if ( v10 )
        Scaleform::RefCountImpl::Release(v10);
      ++v8;
    }
    while ( v8 - 1 < pObject->GetStrokeStyleCount(pObject) );
  }
  v12 = pObject->GetStartingPos(pObject);
  v13 = v3->GetStartingPos(v3);
  *(_DWORD *)v139 = v12;
  v14 = this->pMorphData.pObject;
  memset(&v139[4], 0, 44);
  LODWORD(v140) = 1065353216;
  BYTE4(v140) = 0;
  *(_DWORD *)v141 = v13;
  memset(&v141[4], 0, 44);
  LODWORD(v142) = 1065353216;
  BYTE4(v142) = 0;
  v14->ShapeData1.Status = Status_Clean;
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &v14->ShapeData1.Fills.Data,
    &v14->ShapeData1.Fills,
    0i64);
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &v14->ShapeData1.Strokes.Data,
    &v14->ShapeData1.Strokes,
    0i64);
  Data = v14->ShapeData1.Data;
  if ( Data->Data.Size && (Data->Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v14->ShapeData1.Data->Data,
      v14->ShapeData1.Data,
      0i64);
  Data->Data.Size = 0i64;
  *(_QWORD *)&v14->ShapeData1.StartX = 0i64;
  *(_QWORD *)&v14->ShapeData1.LastX = 0i64;
  p_ShapeData2 = &this->pMorphData.pObject->ShapeData2;
  p_Fills = &this->pMorphData.pObject->ShapeData2.Fills;
  p_ShapeData2->Status = Status_Clean;
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &p_Fills->Data,
    &p_ShapeData2->Fills,
    0i64);
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &p_ShapeData2->Strokes.Data,
    &p_ShapeData2->Strokes,
    0i64);
  v18 = p_ShapeData2->Data;
  if ( v18->Data.Size && (v18->Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &p_ShapeData2->Data->Data,
      p_ShapeData2->Data,
      0i64);
  v18->Data.Size = 0i64;
  v19 = 1;
  *(_QWORD *)&p_ShapeData2->StartX = 0i64;
  *(_QWORD *)&p_ShapeData2->LastX = 0i64;
LABEL_36:
  v20 = pObject->ReadPathInfo(pObject, (Scaleform::Render::ShapePosInfo *)v139, &x, &leftStyle);
  v21 = v3->ReadPathInfo(v3, (Scaleform::Render::ShapePosInfo *)v141, &cx1, v162);
  if ( v20 == Shape_EndShape || v21 == Shape_EndShape )
  {
    v113 = this->pMorphData.pObject;
    Status = v113->ShapeData1.Status;
    if ( Status == Status_EndShape || Status == Status_Clean )
    {
LABEL_198:
      v84 = this->pMorphData.pObject;
      v125 = v84->ShapeData2.Status;
      if ( v125 == Status_EndShape || v125 == Status_Clean )
        return;
      if ( v125 == Status_EndPath )
      {
LABEL_208:
        v131 = v84->ShapeData2.Data;
        Size = v131->Data.Size;
        v133 = Size + 1;
        if ( Size + 1 >= Size )
        {
          if ( v133 > v131->Data.Policy.Capacity )
          {
            v134 = v133 + (v133 >> 2);
            goto LABEL_213;
          }
        }
        else if ( v133 < v131->Data.Policy.Capacity >> 1 )
        {
          v134 = Size + 1;
LABEL_213:
          Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &v84->ShapeData2.Data->Data,
            v84->ShapeData2.Data,
            v134);
        }
        v135 = v131->Data.Data;
        v131->Data.Size = v133;
        v135[v133 - 1] = 7;
        goto LABEL_215;
      }
      v126 = v84->ShapeData2.Data;
      v127 = v126->Data.Size;
      v128 = v127 + 1;
      if ( v127 + 1 >= v127 )
      {
        if ( v128 > v126->Data.Policy.Capacity )
        {
          v129 = v128 + (v128 >> 2);
          goto LABEL_206;
        }
      }
      else if ( v128 < v126->Data.Policy.Capacity >> 1 )
      {
        v129 = v127 + 1;
LABEL_206:
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &v84->ShapeData2.Data->Data,
          v84->ShapeData2.Data,
          v129);
      }
      v130 = v126->Data.Data;
      v126->Data.Size = v128;
      v130[v128 - 1] = 6;
      v84->ShapeData2.Status = Status_EndPath;
      goto LABEL_208;
    }
    if ( Status == Status_EndPath )
    {
LABEL_191:
      v120 = v113->ShapeData1.Data;
      v121 = v120->Data.Size;
      v122 = v121 + 1;
      if ( v121 + 1 >= v121 )
      {
        if ( v122 > v120->Data.Policy.Capacity )
        {
          v123 = v122 + (v122 >> 2);
          goto LABEL_196;
        }
      }
      else if ( v122 < v120->Data.Policy.Capacity >> 1 )
      {
        v123 = v121 + 1;
LABEL_196:
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &v113->ShapeData1.Data->Data,
          v113->ShapeData1.Data,
          v123);
      }
      v124 = v120->Data.Data;
      v120->Data.Size = v122;
      v124[v122 - 1] = 7;
      v113->ShapeData1.Status = Status_EndShape;
      goto LABEL_198;
    }
    v115 = v113->ShapeData1.Data;
    v116 = v115->Data.Size;
    v117 = v116 + 1;
    if ( v116 + 1 >= v116 )
    {
      if ( v117 > v115->Data.Policy.Capacity )
      {
        v118 = v117 + (v117 >> 2);
        goto LABEL_189;
      }
    }
    else if ( v117 < v115->Data.Policy.Capacity >> 1 )
    {
      v118 = v116 + 1;
LABEL_189:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v113->ShapeData1.Data->Data,
        v113->ShapeData1.Data,
        v118);
    }
    v119 = v115->Data.Data;
    v115->Data.Size = v117;
    v119[v117 - 1] = 6;
    v113->ShapeData1.Status = Status_EndPath;
    goto LABEL_191;
  }
  if ( v20 == Shape_NewLayer || v19 )
  {
    v22 = this->pMorphData.pObject;
    v23 = v22->ShapeData1.Data;
    v24 = v23->Data.Size + 1;
    if ( v24 >= v23->Data.Size )
    {
      if ( v24 <= v23->Data.Policy.Capacity )
        goto LABEL_46;
      v25 = v24 + (v24 >> 2);
    }
    else
    {
      if ( v24 >= v23->Data.Policy.Capacity >> 1 )
        goto LABEL_46;
      v25 = v23->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v22->ShapeData1.Data->Data,
      v22->ShapeData1.Data,
      v25);
LABEL_46:
    v26 = v23->Data.Data;
    v23->Data.Size = v24;
    v26[v24 - 1] = 0;
    v22->ShapeData1.Status = Status_StartLayer;
    v27 = this->pMorphData.pObject;
    v28 = v27->ShapeData2.Data;
    v29 = v28->Data.Size + 1;
    if ( v29 >= v28->Data.Size )
    {
      if ( v29 > v28->Data.Policy.Capacity )
      {
        v30 = v29 + (v29 >> 2);
        goto LABEL_51;
      }
    }
    else if ( v29 < v28->Data.Policy.Capacity >> 1 )
    {
      v30 = v28->Data.Size + 1;
LABEL_51:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v27->ShapeData2.Data->Data,
        v27->ShapeData2.Data,
        v30);
    }
    v31 = v28->Data.Data;
    v19 = 0;
    v28->Data.Size = v29;
    v31[v29 - 1] = 0;
    v27->ShapeData2.Status = Status_StartLayer;
  }
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
    &this->pMorphData.pObject->ShapeData1,
    leftStyle,
    rightStyle,
    strokeStyle);
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
    &this->pMorphData.pObject->ShapeData2,
    leftStyle,
    rightStyle,
    strokeStyle);
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
    &this->pMorphData.pObject->ShapeData1,
    x,
    y);
  Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
    &this->pMorphData.pObject->ShapeData2,
    cx1,
    cy);
LABEL_54:
  v32 = cy;
  v33 = cx1;
LABEL_55:
  v34 = x;
  v35 = y;
  while ( 1 )
  {
    while ( 1 )
    {
      v36 = pObject->__vftable;
      v37 = *(_OWORD *)v139;
      v38 = *(_OWORD *)&v139[16];
      v39 = *(_OWORD *)v141;
      v40 = *(_OWORD *)&v141[16];
      v41 = *(_OWORD *)&v141[32];
      v42 = v142;
      v138 = *(_OWORD *)&v139[32];
      v136 = v140;
      v43 = v36->ReadEdge(pObject, (Scaleform::Render::ShapePosInfo *)v139, &x);
      v44 = v3->ReadEdge(v3, (Scaleform::Render::ShapePosInfo *)v141, &cx1);
      if ( v43 == Edge_EndPath )
      {
        v45 = this->pMorphData.pObject;
        if ( v44 )
        {
          *(_OWORD *)v141 = v39;
          *(_OWORD *)&v141[16] = v40;
          *(_OWORD *)&v141[32] = v41;
          v142 = v42;
          v46 = v45->ShapeData1.Data;
          v47 = v46->Data.Size + 1;
          if ( v47 >= v46->Data.Size )
          {
            if ( v47 <= v46->Data.Policy.Capacity )
              goto LABEL_64;
            v48 = v47 + (v47 >> 2);
          }
          else
          {
            if ( v47 >= v46->Data.Policy.Capacity >> 1 )
              goto LABEL_64;
            v48 = v46->Data.Size + 1;
          }
          Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &v45->ShapeData1.Data->Data,
            v45->ShapeData1.Data,
            v48);
LABEL_64:
          v49 = v46->Data.Data;
          v46->Data.Size = v47;
          v49[v47 - 1] = 6;
          v45->ShapeData1.Status = Status_EndPath;
          v50 = this->pMorphData.pObject;
          v51 = v50->ShapeData2.Data;
          v52 = v51->Data.Size + 1;
          if ( v52 >= v51->Data.Size )
          {
            if ( v52 <= v51->Data.Policy.Capacity )
              goto LABEL_70;
            v53 = v52 + (v52 >> 2);
          }
          else
          {
            if ( v52 >= v51->Data.Policy.Capacity >> 1 )
              goto LABEL_70;
            v53 = v51->Data.Size + 1;
          }
          Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &v50->ShapeData2.Data->Data,
            v50->ShapeData2.Data,
            v53);
LABEL_70:
          v54 = v51->Data.Data;
          v51->Data.Size = v52;
          v54[v52 - 1] = 6;
          v50->ShapeData2.Status = Status_EndPath;
          if ( pObject->ReadPathInfo(pObject, (Scaleform::Render::ShapePosInfo *)v139, &x, &leftStyle) )
          {
            Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
              &this->pMorphData.pObject->ShapeData1,
              leftStyle,
              rightStyle,
              strokeStyle);
            Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
              &this->pMorphData.pObject->ShapeData2,
              leftStyle,
              rightStyle,
              strokeStyle);
            Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
              &this->pMorphData.pObject->ShapeData1,
              x,
              y);
            Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
              &this->pMorphData.pObject->ShapeData2,
              v33,
              v32);
            goto LABEL_55;
          }
          v74 = this->pMorphData.pObject;
          v75 = v74->ShapeData1.Status;
          if ( v75 == Status_EndShape || v75 == Status_Clean )
          {
LABEL_130:
            v84 = this->pMorphData.pObject;
            v85 = v84->ShapeData2.Status;
            if ( v85 == Status_EndShape || v85 == Status_Clean )
              return;
            if ( v85 == Status_EndPath )
            {
LABEL_140:
              v90 = v84->ShapeData2.Data;
              v91 = v90->Data.Size + 1;
              if ( v91 >= v90->Data.Size )
              {
                if ( v91 > v90->Data.Policy.Capacity )
                {
                  v92 = v91 + (v91 >> 2);
                  goto LABEL_145;
                }
              }
              else if ( v91 < v90->Data.Policy.Capacity >> 1 )
              {
                v92 = v90->Data.Size + 1;
LABEL_145:
                Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
                  &v84->ShapeData2.Data->Data,
                  v84->ShapeData2.Data,
                  v92);
              }
              v93 = v90->Data.Data;
              v90->Data.Size = v91;
              v93[v91 - 1] = 7;
              goto LABEL_215;
            }
            v86 = v84->ShapeData2.Data;
            v87 = v86->Data.Size + 1;
            if ( v87 >= v86->Data.Size )
            {
              if ( v87 > v86->Data.Policy.Capacity )
              {
                v88 = v87 + (v87 >> 2);
                goto LABEL_138;
              }
            }
            else if ( v87 < v86->Data.Policy.Capacity >> 1 )
            {
              v88 = v86->Data.Size + 1;
LABEL_138:
              Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
                &v84->ShapeData2.Data->Data,
                v84->ShapeData2.Data,
                v88);
            }
            v89 = v86->Data.Data;
            v86->Data.Size = v87;
            v89[v87 - 1] = 6;
            v84->ShapeData2.Status = Status_EndPath;
            goto LABEL_140;
          }
          if ( v75 == Status_EndPath )
          {
LABEL_123:
            v80 = v74->ShapeData1.Data;
            v81 = v80->Data.Size + 1;
            if ( v81 >= v80->Data.Size )
            {
              if ( v81 > v80->Data.Policy.Capacity )
              {
                v82 = v81 + (v81 >> 2);
                goto LABEL_128;
              }
            }
            else if ( v81 < v80->Data.Policy.Capacity >> 1 )
            {
              v82 = v80->Data.Size + 1;
LABEL_128:
              Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
                &v74->ShapeData1.Data->Data,
                v74->ShapeData1.Data,
                v82);
            }
            v83 = v80->Data.Data;
            v80->Data.Size = v81;
            v83[v81 - 1] = 7;
            v74->ShapeData1.Status = Status_EndShape;
            goto LABEL_130;
          }
          v76 = v74->ShapeData1.Data;
          v77 = v76->Data.Size + 1;
          if ( v77 >= v76->Data.Size )
          {
            if ( v77 > v76->Data.Policy.Capacity )
            {
              v78 = v77 + (v77 >> 2);
              goto LABEL_121;
            }
          }
          else if ( v77 < v76->Data.Policy.Capacity >> 1 )
          {
            v78 = v76->Data.Size + 1;
LABEL_121:
            Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
              &v74->ShapeData1.Data->Data,
              v74->ShapeData1.Data,
              v78);
          }
          v79 = v76->Data.Data;
          v76->Data.Size = v77;
          v79[v77 - 1] = 6;
          v74->ShapeData1.Status = Status_EndPath;
          goto LABEL_123;
        }
        v65 = v45->ShapeData1.Data;
        v66 = v65->Data.Size + 1;
        if ( v66 >= v65->Data.Size )
        {
          if ( v66 <= v65->Data.Policy.Capacity )
            goto LABEL_106;
          v67 = v66 + (v66 >> 2);
        }
        else
        {
          if ( v66 >= v65->Data.Policy.Capacity >> 1 )
            goto LABEL_106;
          v67 = v65->Data.Size + 1;
        }
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &v45->ShapeData1.Data->Data,
          v45->ShapeData1.Data,
          v67);
LABEL_106:
        v68 = v65->Data.Data;
        v65->Data.Size = v66;
        v68[v66 - 1] = 6;
        v45->ShapeData1.Status = Status_EndPath;
        v69 = this->pMorphData.pObject;
        v70 = v69->ShapeData2.Data;
        v71 = v70->Data.Size + 1;
        if ( v71 >= v70->Data.Size )
        {
          if ( v71 > v70->Data.Policy.Capacity )
          {
            v72 = v71 + (v71 >> 2);
            goto LABEL_111;
          }
        }
        else if ( v71 < v70->Data.Policy.Capacity >> 1 )
        {
          v72 = v70->Data.Size + 1;
LABEL_111:
          Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &v69->ShapeData2.Data->Data,
            v69->ShapeData2.Data,
            v72);
        }
        v73 = v70->Data.Data;
        v70->Data.Size = v71;
        v73[v71 - 1] = 6;
        v69->ShapeData2.Status = Status_EndPath;
        goto LABEL_36;
      }
      if ( v44 == Edge_EndPath )
        break;
      if ( v43 != v44 )
      {
        if ( v43 == Edge_LineTo )
        {
          if ( v44 != Edge_QuadTo )
            goto LABEL_95;
          cx2 = x;
          cy2 = y;
          x = (float)(v34 + x) * 0.5;
          y = (float)(v35 + y) * 0.5;
          goto LABEL_97;
        }
        if ( v43 == Edge_QuadTo )
        {
          if ( v44 == Edge_LineTo )
          {
            v158 = cx1;
            ay = cy;
            cx1 = (float)(v33 + cx1) * 0.5;
            cy = (float)(v32 + cy) * 0.5;
          }
          goto LABEL_97;
        }
      }
      switch ( v43 )
      {
        case Edge_LineTo:
LABEL_95:
          Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
            &this->pMorphData.pObject->ShapeData1,
            x,
            y);
          Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
            &this->pMorphData.pObject->ShapeData2,
            cx1,
            cy);
          goto LABEL_54;
        case Edge_QuadTo:
LABEL_97:
          Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::QuadTo(
            &this->pMorphData.pObject->ShapeData1,
            x,
            y,
            cx2,
            cy2);
          Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::QuadTo(
            &this->pMorphData.pObject->ShapeData2,
            cx1,
            cy,
            v158,
            ay);
          v34 = cx2;
          v35 = cy2;
          v33 = v158;
          v32 = ay;
          break;
        case Edge_CubicTo:
          Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::CubicTo(
            &this->pMorphData.pObject->ShapeData1,
            x,
            y,
            cx2,
            cy2,
            v154,
            v155);
          Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::CubicTo(
            &this->pMorphData.pObject->ShapeData2,
            cx1,
            cy,
            v158,
            ay,
            v160,
            v161);
          v34 = v154;
          v35 = v155;
          v33 = v160;
          v32 = v161;
          break;
      }
    }
    v55 = this->pMorphData.pObject;
    *(_OWORD *)&v139[32] = v138;
    *(_OWORD *)v139 = v37;
    *(_OWORD *)&v139[16] = v38;
    v140 = v136;
    v56 = v55->ShapeData1.Data;
    v57 = v56->Data.Size + 1;
    if ( v57 >= v56->Data.Size )
    {
      if ( v57 <= v56->Data.Policy.Capacity )
        goto LABEL_79;
      v58 = v57 + (v57 >> 2);
    }
    else
    {
      if ( v57 >= v56->Data.Policy.Capacity >> 1 )
        goto LABEL_79;
      v58 = v56->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v55->ShapeData1.Data->Data,
      v55->ShapeData1.Data,
      v58);
LABEL_79:
    v59 = v56->Data.Data;
    v56->Data.Size = v57;
    v59[v57 - 1] = 6;
    v55->ShapeData1.Status = Status_EndPath;
    v60 = this->pMorphData.pObject;
    v61 = v60->ShapeData2.Data;
    v62 = v61->Data.Size + 1;
    if ( v62 >= v61->Data.Size )
    {
      if ( v62 <= v61->Data.Policy.Capacity )
        goto LABEL_85;
      v63 = v62 + (v62 >> 2);
    }
    else
    {
      if ( v62 >= v61->Data.Policy.Capacity >> 1 )
        goto LABEL_85;
      v63 = v61->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v60->ShapeData2.Data->Data,
      v60->ShapeData2.Data,
      v63);
LABEL_85:
    v64 = v61->Data.Data;
    v61->Data.Size = v62;
    v64[v62 - 1] = 6;
    v60->ShapeData2.Status = Status_EndPath;
    if ( v3->ReadPathInfo(v3, (Scaleform::Render::ShapePosInfo *)v141, &cx1, v162) == Shape_EndShape )
      break;
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
      &this->pMorphData.pObject->ShapeData1,
      leftStyle,
      rightStyle,
      strokeStyle);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
      &this->pMorphData.pObject->ShapeData2,
      leftStyle,
      rightStyle,
      strokeStyle);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
      &this->pMorphData.pObject->ShapeData1,
      v34,
      v35);
    Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::MoveTo(
      &this->pMorphData.pObject->ShapeData2,
      cx1,
      cy);
    v33 = cx1;
    v32 = cy;
  }
  v94 = this->pMorphData.pObject;
  v95 = v94->ShapeData1.Status;
  if ( v95 != Status_EndShape && v95 )
  {
    if ( v95 != Status_EndPath )
    {
      v96 = v94->ShapeData1.Data;
      v97 = v96->Data.Size + 1;
      if ( v97 >= v96->Data.Size )
      {
        if ( v97 > v96->Data.Policy.Capacity )
        {
          v98 = v97 + (v97 >> 2);
LABEL_155:
          Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &v94->ShapeData1.Data->Data,
            v94->ShapeData1.Data,
            v98);
        }
      }
      else if ( v97 < v96->Data.Policy.Capacity >> 1 )
      {
        v98 = v96->Data.Size + 1;
        goto LABEL_155;
      }
      v99 = v96->Data.Data;
      v96->Data.Size = v97;
      v99[v97 - 1] = 6;
      v94->ShapeData1.Status = Status_EndPath;
    }
    v100 = v94->ShapeData1.Data;
    v101 = v100->Data.Size + 1;
    if ( v101 >= v100->Data.Size )
    {
      if ( v101 > v100->Data.Policy.Capacity )
      {
        v102 = v101 + (v101 >> 2);
LABEL_162:
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &v94->ShapeData1.Data->Data,
          v94->ShapeData1.Data,
          v102);
      }
    }
    else if ( v101 < v100->Data.Policy.Capacity >> 1 )
    {
      v102 = v100->Data.Size + 1;
      goto LABEL_162;
    }
    v103 = v100->Data.Data;
    v100->Data.Size = v101;
    v103[v101 - 1] = 7;
    v94->ShapeData1.Status = Status_EndShape;
  }
  v84 = this->pMorphData.pObject;
  v104 = v84->ShapeData2.Status;
  if ( v104 != Status_EndShape && v104 )
  {
    if ( v104 != Status_EndPath )
    {
      v105 = v84->ShapeData2.Data;
      v106 = v105->Data.Size + 1;
      if ( v106 >= v105->Data.Size )
      {
        if ( v106 > v105->Data.Policy.Capacity )
        {
          v107 = v106 + (v106 >> 2);
LABEL_172:
          Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &v84->ShapeData2.Data->Data,
            v84->ShapeData2.Data,
            v107);
        }
      }
      else if ( v106 < v105->Data.Policy.Capacity >> 1 )
      {
        v107 = v105->Data.Size + 1;
        goto LABEL_172;
      }
      v108 = v105->Data.Data;
      v105->Data.Size = v106;
      v108[v106 - 1] = 6;
      v84->ShapeData2.Status = Status_EndPath;
    }
    v109 = v84->ShapeData2.Data;
    v110 = v109->Data.Size + 1;
    if ( v110 >= v109->Data.Size )
    {
      if ( v110 > v109->Data.Policy.Capacity )
      {
        v111 = v110 + (v110 >> 2);
LABEL_179:
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &v84->ShapeData2.Data->Data,
          v84->ShapeData2.Data,
          v111);
      }
    }
    else if ( v110 < v109->Data.Policy.Capacity >> 1 )
    {
      v111 = v109->Data.Size + 1;
      goto LABEL_179;
    }
    v112 = v109->Data.Data;
    v109->Data.Size = v110;
    v112[v110 - 1] = 7;
LABEL_215:
    v84->ShapeData2.Status = Status_EndShape;
  }
}

char __fastcall Scaleform::Render::ShapeMeshProvider::createNullMesh(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::VertexOutput *pout,
        unsigned int drawLayer,
        unsigned int meshGenFlags)
{
  Scaleform::Render::VertexOutput_vtbl *v5; // rax
  char result; // al
  __int64 v7; // [rsp+30h] [rbp-68h] BYREF
  int v8[2]; // [rsp+38h] [rbp-60h] BYREF
  const Scaleform::Render::VertexFormat *pVFormat; // [rsp+40h] [rbp-58h]
  __int64 v10; // [rsp+48h] [rbp-50h]
  __int64 v11; // [rsp+50h] [rbp-48h]
  Scaleform::Render::FillData v12; // [rsp+58h] [rbp-40h] BYREF
  __int16 v13; // [rsp+78h] [rbp-20h] BYREF
  int v14; // [rsp+7Ah] [rbp-1Eh]

  v7 = 0i64;
  v14 = 0;
  v13 = 0;
  Scaleform::Render::FillData::FillData(&v12, Fill_VColor);
  pVFormat = v12.pVFormat;
  v5 = pout->__vftable;
  v8[0] = 1;
  v8[1] = 3;
  v10 = 0i64;
  v11 = 0i64;
  result = v5->BeginOutput(
             pout,
             (const Scaleform::Render::VertexOutput::Fill *)v8,
             1u,
             (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  if ( result )
  {
    pout->SetVertices(pout, 0, 0, &v7, 1u);
    pout->SetIndices(pout, 0, 0, (unsigned __int16 *)&v13, 3u);
    pout->EndOutput(pout);
    return 1;
  }
  return result;
}

char __fastcall Scaleform::Render::ShapeMeshProvider::generateImage9Grid(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::Scale9GridInfo *s9g,
        Scaleform::Render::VertexOutput *verOut,
        unsigned int drawLayer)
{
  Scaleform::Render::Rect<float> *LayerBounds; // rax
  Scaleform::Render::Rect<float> v10; // xmm0
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *Data; // rax
  Scaleform::Render::ShapeDataInterface *pObject; // rcx
  Scaleform::Render::ShapeDataInterface *v13; // rcx
  __int64 v14; // rdx
  Scaleform::Render::TextureManager *v15; // rax
  Scaleform::Render::VertexOutput_vtbl *v16; // rax
  Scaleform::Render::VertexOutput_vtbl *v18; // rax
  unsigned int StartPos; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+34h] [rbp-CCh]
  __int64 v21; // [rsp+3Ch] [rbp-C4h]
  __int64 v22; // [rsp+44h] [rbp-BCh]
  __int64 v23; // [rsp+4Ch] [rbp-B4h]
  __int64 v24; // [rsp+54h] [rbp-ACh]
  int v25; // [rsp+5Ch] [rbp-A4h]
  Tween::EasingType v26; // [rsp+60h] [rbp-A0h]
  char v27; // [rsp+64h] [rbp-9Ch]
  Scaleform::RefCountVImpl *v28[2]; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::Rect<float> result; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int128 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-50h]
  Scaleform::Render::Rect<float> imgRect; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::Render::Matrix2x4<float> uvMatrix; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::Scale9GridTess v36; // [rsp+F0h] [rbp-10h] BYREF
  int v37[4]; // [rsp+330h] [rbp+230h] BYREF
  float v38[6]; // [rsp+340h] [rbp+240h] BYREF
  __int16 v39; // [rsp+358h] [rbp+258h] BYREF
  int v40; // [rsp+35Ah] [rbp+25Ah]

  if ( this->DrawLayers.Data.Data[drawLayer].Image9GridType == I9gMergedSlice )
  {
    LayerBounds = (Scaleform::Render::Rect<float> *)v28;
    *(Scaleform::Render::Rect<float> *)v28 = this->IdentityBounds;
  }
  else
  {
    LayerBounds = Scaleform::Render::ShapeMeshProvider::getLayerBounds(this, &result, drawLayer);
  }
  v10 = *LayerBounds;
  Data = this->DrawLayers.Data.Data;
  imgRect = v10;
  StartPos = Data[drawLayer].StartPos;
  pObject = this->pShapeData.pObject;
  v26 = FLOAT_1_0;
  v20 = 0i64;
  v21 = 0i64;
  v22 = 0i64;
  v23 = 0i64;
  v24 = 0i64;
  v25 = 0;
  v27 = 0;
  pObject->ReadPathInfo(pObject, (Scaleform::Render::ShapePosInfo *)&StartPos, v38, (unsigned int *)v37);
  v13 = this->pShapeData.pObject;
  v14 = (unsigned int)v37[1];
  if ( v37[0] )
    v14 = (unsigned int)v37[0];
  v28[1] = 0i64;
  v13->GetFillStyle(v13, v14, (Scaleform::Render::FillStyleType *)v28);
  v15 = hal->GetTextureManager(hal);
  (*((void (__fastcall **)(Scaleform::RefCountVImpl_vtbl *, Scaleform::Render::Matrix2x4<float> *, Scaleform::Render::TextureManager *))v28[1][1].~RefCountImplCore
   + 23))(
    v28[1][1].__vftable,
    &uvMatrix,
    v15);
  Scaleform::Render::Scale9GridTess::Scale9GridTess(
    &v36,
    Scaleform::Memory::pGlobalHeap,
    s9g,
    &imgRect,
    &uvMatrix,
    (const Scaleform::Render::Matrix2x4<float> *)&v28[1][2]);
  if ( LODWORD(v36.Indices.Size) )
  {
    LODWORD(result.x1) = v36.VerCount;
    *(_QWORD *)&result.x2 = &Scaleform::Render::Image9GridVertex::Format;
    v16 = verOut->__vftable;
    result.y1 = *(float *)&v36.Indices.Size;
    v30 = 0i64;
    v31 = 0i64;
    v32 = _xmm;
    v33 = _xmm;
    if ( !v16->BeginOutput(
            verOut,
            (const Scaleform::Render::VertexOutput::Fill *)&result,
            1u,
            (const Scaleform::Render::Matrix2x4<float> *)&v32) )
    {
      if ( v36.Indices.Data != v36.Indices.Static )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      v36.Indices.Data = v36.Indices.Static;
      v36.Indices.Size = 0i64;
      if ( v28[1] )
        Scaleform::RefCountImpl::Release(v28[1]);
      return 0;
    }
    verOut->SetVertices(verOut, 0, 0, &v36, v36.VerCount);
    verOut->SetIndices(verOut, 0, 0, v36.Indices.Data, v36.Indices.Size);
    goto LABEL_20;
  }
  v40 = 0;
  *((_QWORD *)&v32 + 1) = &Scaleform::Render::Image9GridVertex::Format;
  v18 = verOut->__vftable;
  v39 = 0;
  *(_QWORD *)&v32 = 0x300000001i64;
  result = 0i64;
  v33 = 0ui64;
  if ( v18->BeginOutput(
         verOut,
         (const Scaleform::Render::VertexOutput::Fill *)&v32,
         1u,
         (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]) )
  {
    verOut->SetVertices(verOut, 0, 0, &result, 1u);
    verOut->SetIndices(verOut, 0, 0, (unsigned __int16 *)&v39, 3u);
LABEL_20:
    verOut->EndOutput(verOut);
    if ( v36.Indices.Data != v36.Indices.Static )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    v36.Indices.Data = v36.Indices.Static;
    v36.Indices.Size = 0i64;
    if ( v28[1] )
      Scaleform::RefCountImpl::Release(v28[1]);
    return 1;
  }
  if ( v36.Indices.Data != v36.Indices.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v36.Indices.Data = v36.Indices.Static;
  v36.Indices.Size = 0i64;
  if ( !v28[1] )
    return 0;
  Scaleform::RefCountImpl::Release(v28[1]);
  return 0;
}

Scaleform::RefCountVImpl *__fastcall Scaleform::Render::ShapeMeshProvider::getComplexFill(
        Scaleform::Render::ShapeMeshProvider *this,
        unsigned int drawLayer,
        unsigned int fillIndex,
        unsigned int *imgFillStyle)
{
  __int64 v5; // rdx
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *Data; // rax
  unsigned int StrokeStyle; // er9
  unsigned int v8; // edi
  Scaleform::Render::ShapeDataInterface *v9; // rcx
  Scaleform::RefCountVImpl *v10; // rbx
  Scaleform::Render::ShapeDataInterface *pObject; // rcx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::RefCountVImpl *v14; // rbx
  char v15; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::RefCountVImpl *v16; // [rsp+28h] [rbp-40h]
  char v17; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::RefCountVImpl *v18[2]; // [rsp+48h] [rbp-20h]

  v5 = drawLayer;
  Data = this->DrawLayers.Data.Data;
  StrokeStyle = Data[v5].StrokeStyle;
  if ( StrokeStyle )
  {
    pObject = this->pShapeData.pObject;
    *(_OWORD *)v18 = 0i64;
    pObject->GetStrokeStyle(pObject, StrokeStyle, (Scaleform::Render::StrokeStyleType *)&v17);
    v13 = v18[0];
    v14 = v18[0];
    if ( v18[1] )
    {
      Scaleform::RefCountImpl::Release(v18[1]);
      v13 = v18[0];
    }
    if ( v13 )
      Scaleform::RefCountImpl::Release(v13);
    return v14;
  }
  else
  {
    v8 = this->FillToStyleTable.Data.Data[fillIndex + Data[v5].StartFill];
    if ( v8 )
    {
      v9 = this->pShapeData.pObject;
      v16 = 0i64;
      v9->GetFillStyle(v9, v8, (Scaleform::Render::FillStyleType *)&v15);
      v10 = v16;
      if ( imgFillStyle )
        *imgFillStyle = v8;
      if ( v10 )
        Scaleform::RefCountImpl::Release(v10);
      return v10;
    }
    else
    {
      return 0i64;
    }
  }
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ShapeMeshProvider::getLayerBounds(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::Rect<float> *result,
        unsigned int drawLayer)
{
  char v5; // di
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *Data; // rax
  Scaleform::Render::ShapeDataInterface *pObject; // rcx
  unsigned int StartPos; // edx
  Scaleform::Render::ShapeDataInterface_vtbl *v9; // rax
  Scaleform::Render::ShapePathType i; // eax
  Scaleform::Render::ShapePosInfo pos; // [rsp+30h] [rbp-49h] BYREF
  Scaleform::Render::Matrix2x4<float> trans; // [rsp+70h] [rbp-9h] BYREF
  int v14[4]; // [rsp+90h] [rbp+17h] BYREF
  float coord[6]; // [rsp+A0h] [rbp+27h] BYREF

  *(_OWORD *)&trans.M[1][0] = _xmm;
  v5 = 1;
  Data = this->DrawLayers.Data.Data;
  pObject = this->pShapeData.pObject;
  StartPos = Data[drawLayer].StartPos;
  LODWORD(pos.Sfactor) = FLOAT_1_0;
  pos.Pos = StartPos;
  memset(&pos.StartX, 0, 44);
  pos.Initialized = 0;
  v9 = pObject->__vftable;
  result->x1 = 1.0e30;
  result->y1 = 1.0e30;
  result->x2 = -1.0e30;
  result->y2 = -1.0e30;
  *(_OWORD *)&trans.M[0][0] = _xmm;
  for ( i = v9->ReadPathInfo(pObject, &pos, coord, (unsigned int *)v14);
        i;
        i = this->pShapeData.pObject->ReadPathInfo(this->pShapeData.pObject, &pos, coord, (unsigned int *)v14) )
  {
    if ( !v5 && i == Shape_NewLayer )
      break;
    v5 = 0;
    if ( v14[0] || v14[1] )
      Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(
        this->pShapeData.pObject,
        &trans,
        &pos,
        coord,
        result);
    else
      this->pShapeData.pObject->SkipPathData(this->pShapeData.pObject, &pos);
  }
  return result;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::ShapeMeshProvider::getMorphMatrix(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::Matrix2x4<float> *result,
        unsigned int drawLayer,
        __int64 fillIndex)
{
  __int64 v5; // r8
  Scaleform::Render::ShapeMeshProvider::DrawLayerType *Data; // rax
  __int64 StrokeStyle; // rdx
  __int64 v8; // rdx
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::Render::MorphShapeData *pObject; // rax
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rcx
  char v14[8]; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::RefCountVImpl *v15; // [rsp+28h] [rbp-40h]
  char v16[24]; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::RefCountVImpl *v17[2]; // [rsp+48h] [rbp-20h]

  v5 = drawLayer;
  Data = this->DrawLayers.Data.Data;
  StrokeStyle = Data[v5].StrokeStyle;
  if ( !(_DWORD)StrokeStyle )
  {
    v8 = this->FillToStyleTable.Data.Data[(unsigned int)(fillIndex + Data[v5].StartFill)];
    v15 = 0i64;
    this->pMorphData.pObject->pMorphTo.pObject->GetFillStyle(
      this->pMorphData.pObject->pMorphTo.pObject,
      v8,
      (Scaleform::Render::FillStyleType *)v14);
    v9 = v15;
    *(Scaleform::RefCountVImpl *)&result->M[0][0] = v15[2];
    result->M[0][3] = *((float *)&v9[2].RefCount + 1);
    *(Scaleform::RefCountVImpl *)&result->M[1][0] = v9[3];
    result->M[1][3] = *((float *)&v9[3].RefCount + 1);
    Scaleform::RefCountImpl::Release(v9);
    return result;
  }
  pObject = this->pMorphData.pObject;
  *(_OWORD *)v17 = 0i64;
  ((void (__fastcall *)(Scaleform::Render::ShapeDataInterface *, __int64, char *, __int64))pObject->pMorphTo.pObject->GetStrokeStyle)(
    pObject->pMorphTo.pObject,
    StrokeStyle,
    v16,
    fillIndex);
  v12 = v17[0];
  if ( v17[0] )
  {
    result->M[0][0] = *(float *)&v17[0][2].__vftable;
    result->M[0][1] = *((float *)&v12[2].__vftable + 1);
    LODWORD(result->M[0][2]) = v12[2].RefCount;
    result->M[0][3] = *((float *)&v12[2].RefCount + 1);
    result->M[1][0] = *(float *)&v12[3].__vftable;
    result->M[1][1] = *((float *)&v12[3].__vftable + 1);
    LODWORD(result->M[1][2]) = v12[3].RefCount;
    result->M[1][3] = *((float *)&v12[3].RefCount + 1);
    if ( !v17[1] )
      goto LABEL_8;
    v13 = v17[1];
LABEL_7:
    Scaleform::RefCountImpl::Release(v13);
    v12 = v17[0];
LABEL_8:
    if ( v12 )
      Scaleform::RefCountImpl::Release(v12);
    return result;
  }
  v13 = v17[1];
  *(_QWORD *)&result->M[0][0] = 1065353216i64;
  *(_QWORD *)&result->M[0][2] = 0i64;
  result->M[1][0] = 0.0;
  *(_QWORD *)&result->M[1][1] = 1065353216i64;
  result->M[1][3] = 0.0;
  if ( v13 )
    goto LABEL_7;
  return result;
}

char __fastcall Scaleform::Render::ShapeMeshProvider::tessellateFill(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::Scale9GridInfo *s9g,
        unsigned int drawLayerIdx,
        Scaleform::Render::MeshBase *pmesh,
        Scaleform::Render::VertexOutput *pout,
        unsigned int meshGenFlags)
{
  Scaleform::Render::MeshGenerator *v11; // rax
  float morphRatio; // xmm6_4
  Scaleform::Render::Matrix2x4<float> *p_ViewMatrix; // r14
  Scaleform::Render::MeshGenerator *v14; // rsi
  __int128 v15; // xmm0
  Scaleform::Render::TransformerBase *p_tr; // r12
  bool v17; // di
  _QWORD *v18; // r14
  unsigned int v19; // er15
  _QWORD *v20; // rbx
  unsigned int v21; // edi
  unsigned __int64 MaxPages; // rax
  Scaleform::Render::LinearHeap::PageType *v23; // rbx
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v25; // rax
  Scaleform::Render::LinearHeap::PageType *v26; // rbx
  Scaleform::MemoryHeap *v27; // rcx
  unsigned __int64 v28; // rax
  Scaleform::Render::LinearHeap::PageType *v29; // rbx
  Scaleform::MemoryHeap *v30; // rcx
  unsigned __int64 v31; // rax
  Scaleform::Render::LinearHeap::PageType *v32; // rbx
  Scaleform::MemoryHeap *v33; // rcx
  float v34; // xmm1_4
  unsigned __int64 v35; // rax
  Scaleform::Render::LinearHeap::PageType *v36; // rbx
  Scaleform::MemoryHeap *v37; // rcx
  unsigned __int64 v38; // rax
  Scaleform::Render::LinearHeap::PageType *v39; // rbx
  Scaleform::MemoryHeap *v40; // rcx
  unsigned __int64 v41; // rax
  Scaleform::Render::LinearHeap::PageType *v42; // rbx
  Scaleform::MemoryHeap *v43; // rcx
  unsigned __int64 v44; // rax
  Scaleform::Render::LinearHeap::PageType *v45; // rbx
  Scaleform::MemoryHeap *v46; // rcx
  unsigned __int64 v48; // rax
  Scaleform::Render::LinearHeap::PageType *v49; // rbx
  Scaleform::MemoryHeap *v50; // rcx
  unsigned __int64 v51; // rax
  Scaleform::Render::LinearHeap::PageType *v52; // rbx
  Scaleform::MemoryHeap *v53; // rcx
  unsigned __int64 v54; // rax
  Scaleform::Render::LinearHeap::PageType *v55; // rbx
  Scaleform::MemoryHeap *v56; // rcx
  unsigned __int64 v57; // rax
  Scaleform::Render::LinearHeap::PageType *v58; // rbx
  Scaleform::MemoryHeap *v59; // rcx
  Scaleform::Render::TransformerBase tr; // [rsp+58h] [rbp-A8h] BYREF
  const Scaleform::Render::Scale9GridInfo *v62; // [rsp+60h] [rbp-A0h]
  void **v63; // [rsp+68h] [rbp-98h] BYREF
  Scaleform::Render::Matrix2x4<float> *p_m2; // [rsp+70h] [rbp-90h]
  Scaleform::Render::ToleranceParams param; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::Render::Matrix2x4<float> m2; // [rsp+D0h] [rbp-30h] BYREF
  float key[20]; // [rsp+F0h] [rbp-10h] BYREF

  v11 = hal->GetMeshGen(hal);
  morphRatio = pmesh->MorphRatio;
  p_ViewMatrix = &pmesh->ViewMatrix;
  v14 = v11;
  param = *Scaleform::Render::HAL::GetToleranceParams(hal);
  v63 = &Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float>>::`vftable';
  tr.__vftable = (Scaleform::Render::TransformerBase_vtbl *)&Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::`vftable';
  p_m2 = 0i64;
  v62 = 0i64;
  *(_OWORD *)&m2.M[0][0] = _xmm;
  *(_OWORD *)&m2.M[1][0] = _xmm;
  if ( s9g )
  {
    v15 = *(_OWORD *)&p_ViewMatrix->M[0][0];
    v62 = s9g;
    p_tr = &tr;
    *(_OWORD *)&m2.M[0][0] = v15;
    *(_OWORD *)&m2.M[1][0] = *(_OWORD *)&pmesh->ViewMatrix.M[1][0];
  }
  else
  {
    if ( !Scaleform::Render::MeshKey::CalcMatrixKey(p_ViewMatrix, key, &m2) )
      return Scaleform::Render::ShapeMeshProvider::createNullMesh(this, pout, drawLayerIdx, meshGenFlags);
    p_m2 = &m2;
    p_tr = (Scaleform::Render::TransformerBase *)&v63;
  }
  v18 = &v14->mTess.__vftable;
  v19 = 0;
  v20 = &v14->mStroker.__vftable;
  v21 = meshGenFlags;
  while ( 1 )
  {
    (*(void (__fastcall **)(Scaleform::Render::Tessellator *))(*v18 + 8i64))(&v14->mTess);
    (*(void (__fastcall **)(_QWORD *))(*v20 + 8i64))(v20);
    v14->mStrokeSorter.Clear(&v14->mStrokeSorter);
    v14->mHairliner.Clear(&v14->mHairliner);
    v14->mStrokerAA.Clear(&v14->mStrokerAA);
    MaxPages = v14->Heap1.MaxPages;
    if ( MaxPages )
    {
      v23 = &v14->Heap1.pPagePool[MaxPages - 1];
      do
      {
        --v14->Heap1.MaxPages;
        if ( v23->pStart )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap1.pHeap->Free)(v14->Heap1.pHeap);
        --v23;
      }
      while ( v14->Heap1.MaxPages );
      pHeap = v14->Heap1.pHeap;
      --v14->Heap1.MaxPages;
      pHeap->Free(pHeap, v14->Heap1.pPagePool);
    }
    v14->Heap1.pLastPage = 0i64;
    v14->Heap1.pPagePool = 0i64;
    v14->Heap1.MaxPages = 0i64;
    v25 = v14->Heap2.MaxPages;
    if ( v25 )
    {
      v26 = &v14->Heap2.pPagePool[v25 - 1];
      do
      {
        --v14->Heap2.MaxPages;
        if ( v26->pStart )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap2.pHeap->Free)(v14->Heap2.pHeap);
        --v26;
      }
      while ( v14->Heap2.MaxPages );
      v27 = v14->Heap2.pHeap;
      --v14->Heap2.MaxPages;
      v27->Free(v27, v14->Heap2.pPagePool);
    }
    v14->Heap2.pLastPage = 0i64;
    v14->Heap2.pPagePool = 0i64;
    v14->Heap2.MaxPages = 0i64;
    v28 = v14->Heap3.MaxPages;
    if ( v28 )
    {
      v29 = &v14->Heap3.pPagePool[v28 - 1];
      do
      {
        --v14->Heap3.MaxPages;
        if ( v29->pStart )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap3.pHeap->Free)(v14->Heap3.pHeap);
        --v29;
      }
      while ( v14->Heap3.MaxPages );
      v30 = v14->Heap3.pHeap;
      --v14->Heap3.MaxPages;
      v30->Free(v30, v14->Heap3.pPagePool);
    }
    v14->Heap3.pLastPage = 0i64;
    v14->Heap3.pPagePool = 0i64;
    v14->Heap3.MaxPages = 0i64;
    v31 = v14->Heap4.MaxPages;
    if ( v31 )
    {
      v32 = &v14->Heap4.pPagePool[v31 - 1];
      do
      {
        --v14->Heap4.MaxPages;
        if ( v32->pStart )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap4.pHeap->Free)(v14->Heap4.pHeap);
        --v32;
      }
      while ( v14->Heap4.MaxPages );
      v33 = v14->Heap4.pHeap;
      --v14->Heap4.MaxPages;
      v33->Free(v33, v14->Heap4.pPagePool);
    }
    v14->Heap4.pLastPage = 0i64;
    v14->Heap4.pPagePool = 0i64;
    v14->Heap4.MaxPages = 0i64;
    Scaleform::Render::Tessellator::SetFillRule(&v14->mTess, FillEvenOdd);
    Scaleform::Render::Tessellator::SetToleranceParam(&v14->mTess, &param);
    if ( (v21 & 3) == 1 )
      v34 = param.EdgeAAScale * 0.5;
    else
      v34 = 0.0;
    Scaleform::Render::Tessellator::SetEdgeAAWidth(&v14->mTess, v34);
    Scaleform::Render::ShapeMeshProvider::addFill(
      this,
      v14,
      &param,
      p_tr,
      this->DrawLayers.Data.Data[drawLayerIdx].StartPos,
      morphRatio);
    if ( (v21 & 1) != 0 && LODWORD(v14->mTess.SrcVertices.Size) >= 0x8000 )
    {
      Scaleform::Render::MeshGenerator::Clear(v14);
      Scaleform::Render::Tessellator::SetEdgeAAWidth(&v14->mTess, 0.0);
      Scaleform::Render::ShapeMeshProvider::addFill(
        this,
        v14,
        &param,
        p_tr,
        this->DrawLayers.Data.Data[drawLayerIdx].StartPos,
        morphRatio);
      v21 &= ~1u;
    }
    Scaleform::Render::Tessellator::Tessellate(&v14->mTess, 0);
    if ( (*(unsigned int (__fastcall **)(Scaleform::Render::Tessellator *))(*v18 + 72i64))(&v14->mTess) < 0xFFFF )
      break;
    v20 = &v14->mStroker.__vftable;
    v21 &= ~1u;
    ++v19;
    param.CurveTolerance = param.CurveTolerance * 4.0;
    if ( v19 >= 4 )
    {
      (*(void (__fastcall **)(Scaleform::Render::Tessellator *))(*v18 + 8i64))(&v14->mTess);
      v14->mStroker.Clear(&v14->mStroker);
      v14->mStrokeSorter.Clear(&v14->mStrokeSorter);
      v14->mHairliner.Clear(&v14->mHairliner);
      v14->mStrokerAA.Clear(&v14->mStrokerAA);
      v35 = v14->Heap1.MaxPages;
      if ( v35 )
      {
        v36 = &v14->Heap1.pPagePool[v35 - 1];
        do
        {
          --v14->Heap1.MaxPages;
          if ( v36->pStart )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap1.pHeap->Free)(v14->Heap1.pHeap);
          --v36;
        }
        while ( v14->Heap1.MaxPages );
        v37 = v14->Heap1.pHeap;
        --v14->Heap1.MaxPages;
        v37->Free(v37, v14->Heap1.pPagePool);
      }
      v14->Heap1.pLastPage = 0i64;
      v14->Heap1.pPagePool = 0i64;
      v14->Heap1.MaxPages = 0i64;
      v38 = v14->Heap2.MaxPages;
      if ( v38 )
      {
        v39 = &v14->Heap2.pPagePool[v38 - 1];
        do
        {
          --v14->Heap2.MaxPages;
          if ( v39->pStart )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap2.pHeap->Free)(v14->Heap2.pHeap);
          --v39;
        }
        while ( v14->Heap2.MaxPages );
        v40 = v14->Heap2.pHeap;
        --v14->Heap2.MaxPages;
        v40->Free(v40, v14->Heap2.pPagePool);
      }
      v14->Heap2.pLastPage = 0i64;
      v14->Heap2.pPagePool = 0i64;
      v14->Heap2.MaxPages = 0i64;
      v41 = v14->Heap3.MaxPages;
      if ( v41 )
      {
        v42 = &v14->Heap3.pPagePool[v41 - 1];
        do
        {
          --v14->Heap3.MaxPages;
          if ( v42->pStart )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap3.pHeap->Free)(v14->Heap3.pHeap);
          --v42;
        }
        while ( v14->Heap3.MaxPages );
        v43 = v14->Heap3.pHeap;
        --v14->Heap3.MaxPages;
        v43->Free(v43, v14->Heap3.pPagePool);
      }
      v14->Heap3.pLastPage = 0i64;
      v14->Heap3.pPagePool = 0i64;
      v14->Heap3.MaxPages = 0i64;
      v44 = v14->Heap4.MaxPages;
      if ( v44 )
      {
        v45 = &v14->Heap4.pPagePool[v44 - 1];
        do
        {
          --v14->Heap4.MaxPages;
          if ( v45->pStart )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap4.pHeap->Free)(v14->Heap4.pHeap);
          --v45;
        }
        while ( v14->Heap4.MaxPages );
        v46 = v14->Heap4.pHeap;
        --v14->Heap4.MaxPages;
        v46->Free(v46, v14->Heap4.pPagePool);
      }
      v14->Heap4.pLastPage = 0i64;
      v14->Heap4.pPagePool = 0i64;
      v14->Heap4.MaxPages = 0i64;
      return Scaleform::Render::ShapeMeshProvider::createNullMesh(this, pout, drawLayerIdx, v21);
    }
  }
  v17 = Scaleform::Render::ShapeMeshProvider::acquireTessMeshes(
          this,
          &v14->mTess,
          &m2,
          pout,
          drawLayerIdx,
          0,
          v21,
          morphRatio);
  (*(void (__fastcall **)(Scaleform::Render::Tessellator *))(*v18 + 8i64))(&v14->mTess);
  v14->mStroker.Clear(&v14->mStroker);
  v14->mStrokeSorter.Clear(&v14->mStrokeSorter);
  v14->mHairliner.Clear(&v14->mHairliner);
  v14->mStrokerAA.Clear(&v14->mStrokerAA);
  v48 = v14->Heap1.MaxPages;
  if ( v48 )
  {
    v49 = &v14->Heap1.pPagePool[v48 - 1];
    do
    {
      --v14->Heap1.MaxPages;
      if ( v49->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap1.pHeap->Free)(v14->Heap1.pHeap);
      --v49;
    }
    while ( v14->Heap1.MaxPages );
    v50 = v14->Heap1.pHeap;
    --v14->Heap1.MaxPages;
    v50->Free(v50, v14->Heap1.pPagePool);
  }
  v14->Heap1.pLastPage = 0i64;
  v14->Heap1.pPagePool = 0i64;
  v14->Heap1.MaxPages = 0i64;
  v51 = v14->Heap2.MaxPages;
  if ( v51 )
  {
    v52 = &v14->Heap2.pPagePool[v51 - 1];
    do
    {
      --v14->Heap2.MaxPages;
      if ( v52->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap2.pHeap->Free)(v14->Heap2.pHeap);
      --v52;
    }
    while ( v14->Heap2.MaxPages );
    v53 = v14->Heap2.pHeap;
    --v14->Heap2.MaxPages;
    v53->Free(v53, v14->Heap2.pPagePool);
  }
  v14->Heap2.pLastPage = 0i64;
  v14->Heap2.pPagePool = 0i64;
  v14->Heap2.MaxPages = 0i64;
  v54 = v14->Heap3.MaxPages;
  if ( v54 )
  {
    v55 = &v14->Heap3.pPagePool[v54 - 1];
    do
    {
      --v14->Heap3.MaxPages;
      if ( v55->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap3.pHeap->Free)(v14->Heap3.pHeap);
      --v55;
    }
    while ( v14->Heap3.MaxPages );
    v56 = v14->Heap3.pHeap;
    --v14->Heap3.MaxPages;
    v56->Free(v56, v14->Heap3.pPagePool);
  }
  v14->Heap3.pLastPage = 0i64;
  v14->Heap3.pPagePool = 0i64;
  v14->Heap3.MaxPages = 0i64;
  v57 = v14->Heap4.MaxPages;
  if ( v57 )
  {
    v58 = &v14->Heap4.pPagePool[v57 - 1];
    do
    {
      --v14->Heap4.MaxPages;
      if ( v58->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v14->Heap4.pHeap->Free)(v14->Heap4.pHeap);
      --v58;
    }
    while ( v14->Heap4.MaxPages );
    v59 = v14->Heap4.pHeap;
    --v14->Heap4.MaxPages;
    v59->Free(v59, v14->Heap4.pPagePool);
  }
  v14->Heap4.pLastPage = 0i64;
  v14->Heap4.pPagePool = 0i64;
  v14->Heap4.MaxPages = 0i64;
  return v17;
}

__int64 __fastcall Scaleform::Render::ShapeMeshProvider::tessellateStroke(
        Scaleform::Render::ShapeMeshProvider *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::Scale9GridInfo *s9g,
        unsigned int strokeStyleIdx,
        unsigned int drawLayerIdx,
        Scaleform::Render::MeshBase *pmesh,
        Scaleform::Render::VertexOutput *pout,
        unsigned int meshGenFlags)
{
  Scaleform::Render::MeshGenerator *v12; // rax
  float MorphRatio; // xmm12_4
  Scaleform::Render::MeshGenerator *v14; // rsi
  float v15; // xmm9_4
  float v16; // xmm7_4
  float v17; // xmm11_4
  float v18; // xmm8_4
  float v19; // xmm6_4
  float v20; // xmm10_4
  Scaleform::Render::ToleranceParams *ToleranceParams; // rax
  float v22; // xmm3_4
  unsigned __int8 NullMesh; // bl
  char v24; // di
  float v25; // xmm12_4
  float v26; // xmm0_4
  float v27; // xmm10_4
  Scaleform::Render::TransformerBase *tr; // r15
  float Units; // xmm0_4
  __int16 Flags; // bx
  int v31; // eax
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  float snapOffset; // xmm8_4
  bool v36; // al
  bool v37; // cl
  Scaleform::Render::TessBase *p_mHairliner; // rbx
  int v39; // edx
  int v40; // eax
  int v41; // er8
  int v42; // er9
  int v43; // ebx
  float v44; // xmm6_4
  float v45; // xmm6_4
  float v46; // xmm7_4
  unsigned int startPos; // [rsp+5Ch] [rbp-ACh]
  float v50; // [rsp+60h] [rbp-A8h]
  float v51; // [rsp+68h] [rbp-A0h]
  float v52; // [rsp+70h] [rbp-98h]
  Scaleform::Render::ToleranceParams *param; // [rsp+78h] [rbp-90h]
  Scaleform::Render::StrokeStyleType s1; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::TransformerBase v55; // [rsp+B0h] [rbp-58h] BYREF
  const Scaleform::Render::Scale9GridInfo *v56; // [rsp+B8h] [rbp-50h]
  void **v57; // [rsp+C0h] [rbp-48h] BYREF
  Scaleform::Render::Matrix2x4<float> *p_mtx; // [rsp+C8h] [rbp-40h]
  Scaleform::Render::Matrix2x4<float> mtx; // [rsp+D8h] [rbp-30h] BYREF

  v12 = hal->GetMeshGen(hal);
  MorphRatio = pmesh->MorphRatio;
  v14 = v12;
  v15 = pmesh->ViewMatrix.M[0][0];
  v16 = pmesh->ViewMatrix.M[0][1];
  v17 = pmesh->ViewMatrix.M[0][3];
  v18 = pmesh->ViewMatrix.M[1][0];
  v19 = pmesh->ViewMatrix.M[1][1];
  v20 = pmesh->ViewMatrix.M[1][3];
  v51 = pmesh->ViewMatrix.M[0][2];
  v52 = pmesh->ViewMatrix.M[1][2];
  v50 = MorphRatio;
  ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
  v22 = pmesh->MorphRatio;
  param = ToleranceParams;
  *(_OWORD *)&s1.pFill.pObject = 0i64;
  Scaleform::Render::ShapeMeshProvider::GetStrokeStyle(this, strokeStyleIdx, &s1, v22);
  if ( !HIBYTE(s1.Color) )
  {
    Scaleform::Render::MeshGenerator::Clear(v14);
    NullMesh = Scaleform::Render::ShapeMeshProvider::createNullMesh(this, pout, drawLayerIdx, meshGenFlags);
    goto LABEL_66;
  }
  startPos = this->DrawLayers.Data.Data[drawLayerIdx].StartPos;
  if ( s1.Miter < 1.0 )
    s1.Miter = 1.0;
  v24 = s1.Flags & 1;
  if ( (s1.Flags & 1) != 0 )
  {
    v25 = FLOAT_N0_5;
    if ( v17 >= 0.0 )
      v26 = FLOAT_0_5;
    else
      v26 = FLOAT_N0_5;
    v17 = floorf(v17 + v26);
    if ( v20 >= 0.0 )
      v25 = FLOAT_0_5;
    v27 = v20 + v25;
    MorphRatio = v50;
    v20 = floorf(v27);
  }
  v57 = &Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float>>::`vftable';
  v55.__vftable = (Scaleform::Render::TransformerBase_vtbl *)&Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::`vftable';
  mtx.M[0][0] = v15;
  *(_QWORD *)&mtx.M[0][1] = __PAIR64__(LODWORD(v51), LODWORD(v16));
  mtx.M[0][3] = v17;
  mtx.M[1][0] = v18;
  *(_QWORD *)&mtx.M[1][1] = __PAIR64__(LODWORD(v52), LODWORD(v19));
  mtx.M[1][3] = v20;
  p_mtx = 0i64;
  v56 = 0i64;
  if ( s9g )
    v56 = s9g;
  else
    p_mtx = &mtx;
  tr = (Scaleform::Render::TransformerBase *)&v57;
  if ( s9g )
    tr = &v55;
  Scaleform::Render::MeshGenerator::Clear(v14);
  Units = s1.Units;
  Flags = s1.Flags;
  if ( !s9g )
  {
    v31 = s1.Flags & 6;
    if ( (s1.Flags & 6) != 0 )
    {
      if ( v31 == 2 )
      {
        v32 = (float)(v18 * v18) + (float)(v15 * v15);
LABEL_25:
        Units = sqrtf(v32);
        goto LABEL_26;
      }
      if ( v31 != 4 )
        goto LABEL_26;
    }
    else
    {
      v16 = (float)(v16 * 0.70710677) + (float)(v15 * 0.70710677);
      v19 = (float)(v19 * 0.70710677) + (float)(v18 * 0.70710677);
    }
    v32 = (float)(v19 * v19) + (float)(v16 * v16);
    goto LABEL_25;
  }
LABEL_26:
  v33 = FLOAT_0_5;
  v34 = s1.Width * Units;
  if ( (meshGenFlags & 3) != 1 )
  {
    v33 = 0.0;
    v34 = floorf(v34) + 1.0;
  }
  if ( v24 )
  {
    if ( v34 < 1.26 || ((int)ceilf(v34 - 0.25) & 1) != 0 )
      snapOffset = FLOAT_0_5;
    else
      snapOffset = 0.0;
  }
  else
  {
    snapOffset = *(float *)&FLOAT_0_25;
  }
  v36 = (s1.Color & 0xFF000000) >= 0xF0000000 && !s1.pFill.pObject;
  v37 = 0;
  if ( (meshGenFlags & 2) == 0 )
    v37 = v36;
  if ( v34 < 1.25 && !v37 && v33 > 0.0 )
  {
    if ( v34 >= 1.0 )
      v33 = (float)(v34 - 1.0) + v33;
    p_mHairliner = &v14->mHairliner;
    v14->mHairliner.Width = v33 + v33;
    Scaleform::Render::Hairliner::SetToleranceParam(&v14->mHairliner, param);
    Scaleform::Render::ShapeMeshProvider::addStroke(
      this,
      v14,
      &v14->mHairliner,
      param,
      tr,
      startPos,
      strokeStyleIdx,
      snapOffset,
      MorphRatio);
    Scaleform::Render::Hairliner::Tessellate(&v14->mHairliner);
    goto LABEL_65;
  }
  v39 = 2;
  v40 = Flags & 0x30;
  v41 = 2;
  v42 = 2;
  if ( v40 == 16 )
  {
    v41 = 3;
  }
  else if ( v40 == 32 )
  {
    v41 = 0;
  }
  if ( (Flags & 0xC0) == 64 )
  {
    v42 = 0;
  }
  else if ( (Flags & 0xC0) == 128 )
  {
    v42 = 1;
  }
  v43 = Flags & 0x300;
  if ( v43 == 256 )
  {
    v39 = 0;
  }
  else if ( v43 == 512 )
  {
    v39 = 1;
  }
  v44 = v34 - (float)(v33 + v33);
  if ( v44 < 0.1 )
  {
    if ( !v37 )
    {
      v33 = v33 + -0.050000001;
      v44 = *(float *)&FLOAT_0_1;
      goto LABEL_64;
    }
    v44 = 0.0;
  }
  if ( !v37 )
  {
LABEL_64:
    v14->mStroker.EndLineCap = v39;
    v14->mStroker.LineJoin = v41;
    v14->mStroker.StartLineCap = v42;
    v14->mStroker.Width = v44 * 0.5;
    v14->mStroker.MiterLimit = s1.Miter;
    Scaleform::Render::Stroker::SetToleranceParam(&v14->mStroker, param);
    p_mHairliner = &v14->mTess;
    Scaleform::Render::Tessellator::SetFillRule(&v14->mTess, (Scaleform::Render::Tessellator::FillRuleType)2);
    Scaleform::Render::Tessellator::SetEdgeAAWidth(&v14->mTess, v33 * param->EdgeAAScale);
    Scaleform::Render::ShapeMeshProvider::addStroke(
      this,
      v14,
      param,
      tr,
      startPos,
      strokeStyleIdx,
      snapOffset,
      MorphRatio);
    Scaleform::Render::Tessellator::Tessellate(&v14->mTess, 0);
    goto LABEL_65;
  }
  p_mHairliner = &v14->mStrokerAA;
  v45 = v44 * 0.5;
  v14->mStrokerAA.WidthRight = v45;
  v14->mStrokerAA.WidthLeft = v45;
  v46 = (float)(v33 * param->EdgeAAScale) + (float)(v33 * param->EdgeAAScale);
  v14->mStrokerAA.AaWidthRight = v46;
  v14->mStrokerAA.AaWidthLeft = v46;
  v14->mStrokerAA.EndLineCap = v39;
  v14->mStrokerAA.LineJoin = v41;
  v14->mStrokerAA.StartLineCap = v42;
  v14->mStrokerAA.MiterLimit = s1.Miter;
  Scaleform::Render::StrokerAA::SetToleranceParam(&v14->mStrokerAA, param);
  Scaleform::Render::ShapeMeshProvider::addStroke(
    this,
    v14,
    &v14->mStrokerAA,
    param,
    tr,
    startPos,
    strokeStyleIdx,
    snapOffset,
    MorphRatio);
LABEL_65:
  NullMesh = Scaleform::Render::ShapeMeshProvider::acquireTessMeshes(
               this,
               p_mHairliner,
               &mtx,
               pout,
               drawLayerIdx,
               strokeStyleIdx,
               meshGenFlags,
               MorphRatio);
  Scaleform::Render::MeshGenerator::Clear(v14);
  v55.__vftable = (Scaleform::Render::TransformerBase_vtbl *)&Scaleform::Render::TransformerBase::`vftable';
  v57 = &Scaleform::Render::TransformerBase::`vftable';
LABEL_66:
  if ( s1.pDashes.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)s1.pDashes.pObject);
  if ( s1.pFill.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)s1.pFill.pObject);
  return NullMesh;
}

