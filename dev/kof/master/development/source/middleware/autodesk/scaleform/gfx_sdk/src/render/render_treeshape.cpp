#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"

class Scaleform::Render::TreeCacheShape :
	Scaleform::Render::TreeCacheContainer
{
public:
	TreeCacheShape(Scaleform::Render::TreeShape *, unsigned long);
	virtual ~TreeCacheShape();
	class NodeData;
	Scaleform::Render::TreeShape * GetNode();
	const Scaleform::Render::TreeShape::NodeData * GetNodeData();
	Scaleform::Render::ShapeMeshProvider * GetMeshProvider();
	float GetMorphRatio();
	virtual void HandleChanges(Scaleform::Render::HAL *, unsigned long);
	virtual void UpdateChildSubtree(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, unsigned short);
	virtual void UpdateTransform(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs &, Scaleform::Render::TransformFlags);
};
Scaleform::Render::Scale9GridData::Scale9GridData(const Scaleform::Render::Scale9GridData & __that); // 0x140356490
class Scaleform::Render::TreeCacheShapeLayer :
	Scaleform::Render::TreeCacheMeshBase
{
public:
	TreeCacheShapeLayer(const Scaleform::Render::TreeCacheShapeLayer &);
	TreeCacheShapeLayer(Scaleform::Render::TreeShape *, const Scaleform::Render::SortKey &, unsigned long, unsigned long);
	virtual ~TreeCacheShapeLayer();
	bool IsComplexShape();
	bool HasParentShapeCache();
	const Scaleform::Render::TreeShape::NodeData * GetShapeNodeData();
	Scaleform::Render::ShapeMeshProvider * GetMeshProvider();
	float GetMorphRatio();
	static Scaleform::Render::TreeCacheNode * Create(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::ShapeMeshProvider *, unsigned long, unsigned long, Scaleform::Render::TreeShape *, float);
	static Scaleform::Render::SortKey CreateSortKey(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::ShapeMeshProvider *, unsigned long, unsigned long, Scaleform::Ptr<Scaleform::Render::Image> *, float);
	unsigned long calcMeshGenFlags();
	void getShapeMatrixFrom3D(Scaleform::Render::HAL *, const Scaleform::Render::TreeShape::NodeData *, Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix4x4<float> &);
	void updateSortKey(Scaleform::Render::HAL *);
	void updateSortKeyGradientMorph(Scaleform::Render::HAL *);
	void UpdateCache(Scaleform::Render::TreeCacheContainer *, unsigned short);
	virtual void HandleChanges(Scaleform::Render::HAL *, unsigned long);
	virtual void UpdateChildSubtree(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, unsigned short);
	virtual void UpdateTransform(Scaleform::Render::HAL *, const Scaleform::Render::TreeNode::NodeData *, const Scaleform::Render::TransformArgs &, Scaleform::Render::TransformFlags);
	virtual void propagateMaskFlag(Scaleform::Render::HAL *, unsigned long);
	virtual void propagateScale9Flag(Scaleform::Render::HAL *, unsigned long);
	virtual void propagateEdgeAA(Scaleform::Render::HAL *, Scaleform::Render::EdgeAAMode);
	virtual void propagate3DFlag(Scaleform::Render::HAL *, unsigned long);
	virtual Scaleform::Render::MeshBase * GetMesh(Scaleform::Render::HAL *);
	virtual void RemoveMesh();
	Scaleform::Render::Bundle * GetBundle();
	virtual void forceUpdateImages(Scaleform::Render::HAL *);
private:
	unsigned long getLayer();
	unsigned long calcMeshKey(const Scaleform::Render::ShapeMeshProvider *, const Scaleform::Render::Matrix2x4<float> &, unsigned long, float *, Scaleform::Render::Scale9GridData *, float);
	bool updateMeshKey(Scaleform::Render::HAL *, Scaleform::Render::ShapeMeshProvider *, float, const Scaleform::Render::Matrix2x4<float> &, unsigned long, unsigned long *);
	void updateTexture0Matrix(Scaleform::Render::HAL *);
	Scaleform::Ptr<Scaleform::Render::MeshKey> pMeshKey; // 0xB8
	Scaleform::Ptr<Scaleform::Render::Image> pGradient; // 0xC0
	bool ComplexShape; // 0xC8
	unsigned long Layer; // 0xCC
public:
	Scaleform::Render::TreeCacheShapeLayer & operator=(const Scaleform::Render::TreeCacheShapeLayer &);
};
const Scaleform::Render::TreeShape::NodeData * Scaleform::Render::TreeCacheShapeLayer::GetShapeNodeData(); // 0x140356ED0
Scaleform::Render::ShapeMeshProvider * Scaleform::Render::TreeCacheShapeLayer::GetMeshProvider(); // 0x140356E70
unsigned long Scaleform::Render::TreeCacheShapeLayer::calcMeshGenFlags(); // 0x140357C10
bool Scaleform::Render::TreeShape::NodeData::PropagateUp(Scaleform::Render::ContextImpl::Entry * entry); // 0x1403572E0
Scaleform::Render::TreeCacheNode * Scaleform::Render::TreeShape::NodeData::updateCache(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * pparent, Scaleform::Render::TreeCacheNode * pinsert, Scaleform::Render::TreeNode * pnode, unsigned short depth); // 0x1403585E0
Scaleform::Render::TreeNode * Scaleform::Render::TreeShape::NodeData::CloneCreate(Scaleform::Render::ContextImpl::Context * context); // 0x140356840
Scaleform::Render::TreeCacheShape::TreeCacheShape(Scaleform::Render::TreeShape * pnode, unsigned long flags); // 0x1403565A0
Scaleform::Render::TreeCacheShape::~TreeCacheShape(); // 0x1403565F0
void Scaleform::Render::TreeCacheShape::UpdateTransform(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * shapeData, const Scaleform::Render::TransformArgs & t, Scaleform::Render::TransformFlags flags); // 0x1403577B0
void Scaleform::Render::TreeCacheShape::HandleChanges(Scaleform::Render::HAL * hal, unsigned long changeBits); // 0x140357080
void Scaleform::Render::TreeCacheShape::UpdateChildSubtree(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * pdata, unsigned short depth); // 0x140357560
Scaleform::Render::TreeCacheNode * Scaleform::Render::TreeCacheShapeLayer::Create(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * pparent, Scaleform::Render::ShapeMeshProvider * provider, unsigned long drawLayer, unsigned long flags, Scaleform::Render::TreeShape * shapeNode, float morphRatio); // 0x1403568A0
Scaleform::Render::SortKey Scaleform::Render::TreeCacheShapeLayer::CreateSortKey(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * refNode, Scaleform::Render::ShapeMeshProvider * provider, unsigned long drawLayer, unsigned long flags, Scaleform::Ptr<Scaleform::Render::Image> * gradientImage, float morphRatio); // 0x1403569F0
void Scaleform::Render::TreeCacheShapeLayer::updateSortKey(Scaleform::Render::HAL * hal); // 0x140358AB0
void Scaleform::Render::TreeCacheShapeLayer::updateSortKeyGradientMorph(Scaleform::Render::HAL * hal); // 0x140358CC0
void Scaleform::Render::TreeCacheShapeLayer::updateTexture0Matrix(Scaleform::Render::HAL * hal); // 0x140358D30
void Scaleform::Render::TreeCacheShapeLayer::forceUpdateImages(Scaleform::Render::HAL * hal); // 0x140358020
void Scaleform::Render::TreeCacheShapeLayer::HandleChanges(Scaleform::Render::HAL * hal, unsigned long changeBits); // 0x1403571E0
void Scaleform::Render::TreeCacheShapeLayer::UpdateChildSubtree(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * data, unsigned short depth); // 0x1403576E0
unsigned long Scaleform::Render::TreeCacheShapeLayer::calcMeshKey(const Scaleform::Render::ShapeMeshProvider * pmeshProvider, const Scaleform::Render::Matrix2x4<float> & m, unsigned long drawLayer, float * keyData, Scaleform::Render::Scale9GridData * s9g, float morphRatio); // 0x140357C50
bool Scaleform::Render::TreeCacheShapeLayer::updateMeshKey(Scaleform::Render::HAL * hal, Scaleform::Render::ShapeMeshProvider * provider, float morphRatio, const Scaleform::Render::Matrix2x4<float> & viewMatrix, unsigned long meshGenFlags, unsigned long * meshKeyFlags); // 0x140358790
void Scaleform::Render::TreeCacheShapeLayer::getShapeMatrixFrom3D(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeShape::NodeData * nd, Scaleform::Render::Matrix2x4<float> * mat, const Scaleform::Render::Matrix4x4<float> & viewProj); // 0x140358200
void Scaleform::Render::TreeCacheShapeLayer::UpdateTransform(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * nodeData, const Scaleform::Render::TransformArgs & t, Scaleform::Render::TransformFlags flags); // 0x140357930
Scaleform::Render::MeshBase * Scaleform::Render::TreeCacheShapeLayer::GetMesh(Scaleform::Render::HAL * hal); // 0x140356B70
void Scaleform::Render::TreeCacheShapeLayer::RemoveMesh(); // 0x1403574F0
void Scaleform::Render::TreeCacheShapeLayer::propagateMaskFlag(Scaleform::Render::HAL * hal, unsigned long partOfMask); // 0x140358510
void Scaleform::Render::TreeCacheShapeLayer::propagateScale9Flag(Scaleform::Render::HAL * hal, unsigned long partOfScale9); // 0x140358530
void Scaleform::Render::TreeCacheShapeLayer::propagateEdgeAA(Scaleform::Render::HAL * hal, Scaleform::Render::EdgeAAMode parentEdgeAA); // 0x140358480
void Scaleform::Render::TreeCacheShapeLayer::propagate3DFlag(Scaleform::Render::HAL * hal, unsigned long parent3D); // 0x140358470void __fastcall Scaleform::Render::TreeShape::NodeData::NodeData(
        Scaleform::Render::TreeShape::NodeData *this,
        Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeShape::NodeData> src)
{
  const Scaleform::Render::TreeShape::NodeData *pC; // rax
  Scaleform::Render::ShapeMeshProvider *pObject; // rcx

  Scaleform::Render::TreeNode::NodeData::NodeData(
    this,
    (Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeNode::NodeData>)src.pC);
  this->__vftable = (Scaleform::Render::TreeShape::NodeData_vtbl *)&Scaleform::Render::TreeShape::NodeData::`vftable';
  pC = src.pC;
  pObject = src.pC->pMeshProvider.pObject;
  if ( pObject )
  {
    pObject->AddRef(&pObject->Scaleform::Render::MeshProvider);
    pC = src.pC;
  }
  this->pMeshProvider.pObject = src.pC->pMeshProvider.pObject;
  this->MorphRatio = pC->MorphRatio;
}

void __fastcall Scaleform::Render::Scale9GridData::Scale9GridData(
        Scaleform::Render::Scale9GridData *this,
        const Scaleform::Render::Scale9GridData *__that)
{
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y1; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  this->__vftable = (Scaleform::Render::Scale9GridData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::Scale9GridData_vtbl *)&Scaleform::Render::Scale9GridData::`vftable';
  this->RefCount = 1;
  y2 = __that->S9Rect.y2;
  x2 = __that->S9Rect.x2;
  y1 = __that->S9Rect.y1;
  this->S9Rect.x1 = __that->S9Rect.x1;
  this->S9Rect.y1 = y1;
  this->S9Rect.x2 = x2;
  this->S9Rect.y2 = y2;
  v5 = __that->Bounds.y2;
  v6 = __that->Bounds.x2;
  v7 = __that->Bounds.y1;
  this->Bounds.x1 = __that->Bounds.x1;
  this->Bounds.y1 = v7;
  this->Bounds.x2 = v6;
  this->Bounds.y2 = v5;
  this->ShapeMtx = __that->ShapeMtx;
  this->Scale9Mtx = __that->Scale9Mtx;
  this->ViewMtx = __that->ViewMtx;
}

void __fastcall Scaleform::Render::TreeCacheShape::TreeCacheShape(
        Scaleform::Render::TreeCacheShape *this,
        Scaleform::Render::TreeShape *pnode,
        unsigned int flags)
{
  Scaleform::Render::TreeCacheNode::TreeCacheNode(this, pnode, flags);
  this->Children.Root.Scaleform::Render::TreeCacheContainer::pPrev = (Scaleform::Render::TreeCacheNode *)&this->SortParentBounds;
  this->Children.Root.pNext = (Scaleform::Render::TreeCacheNode *)&this->SortParentBounds;
  this->CachedChildPattern.pFirst = 0i64;
  this->CachedChildPattern.pLast = 0i64;
  this->CachedChildPattern.Length = 0x80000000;
  this->__vftable = (Scaleform::Render::TreeCacheShape_vtbl *)&Scaleform::Render::TreeCacheShape::`vftable';
}

void __fastcall Scaleform::Render::TreeCacheShape::~TreeCacheShape(Scaleform::Render::TreeCacheShape *this)
{
  Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > *p_Children; // rbx
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rdi
  Scaleform::Render::TreeCacheNode *pNext; // rcx

  p_Children = &this->Children;
  p_SortParentBounds = &this->SortParentBounds;
  this->__vftable = (Scaleform::Render::TreeCacheShape_vtbl *)&Scaleform::Render::TreeCacheShape::`vftable';
  if ( this == (Scaleform::Render::TreeCacheShape *)-112i64 )
    p_SortParentBounds = 0i64;
  while ( (Scaleform::Render::Rect<float> *)p_Children->Root.pNext != p_SortParentBounds )
  {
    pNext = this->Children.Root.pNext;
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->pPrev = pNext->pPrev;
    pNext->pPrev = (Scaleform::Render::TreeCacheNode *)-1i64;
    pNext->pNext = (Scaleform::Render::TreeCacheNode *)-1i64;
    pNext->pPrev = 0i64;
    pNext->pParent = 0i64;
    ((void (__fastcall *)(Scaleform::Render::TreeCacheNode *, __int64))pNext->~TreeCacheNode)(pNext, 1i64);
  }
  Scaleform::Render::TreeCacheContainer::~TreeCacheContainer(this);
}

void __fastcall Scaleform::Render::BundleEntry::ClearBundle(Scaleform::Render::BundleEntry *this)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v3; // rbx
  Scaleform::Render::Bundle *v4; // rcx

  if ( this->pBundle.pObject )
  {
    pObject = this->pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v3 = this->pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v3, this);
    if ( v3 )
      Scaleform::RefCountNTSImpl::Release(v3);
  }
  v4 = this->pBundle.pObject;
  if ( v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
  this->pBundle.pObject = 0i64;
  this->IndexHint = 0;
}

Scaleform::Render::ContextImpl::Entry *__fastcall Scaleform::Render::TreeShape::NodeData::CloneCreate(
        Scaleform::Render::TreeShape::NodeData *this,
        Scaleform::Render::ContextImpl::Context *context)
{
  Scaleform::Render::TreeShape::NodeData *v4; // rax
  Scaleform::Render::ContextImpl::EntryData *v5; // rbx

  v4 = (Scaleform::Render::TreeShape::NodeData *)context->pHeap->Alloc(context->pHeap, 160i64, 0i64);
  v5 = v4;
  if ( v4 )
    Scaleform::Render::TreeShape::NodeData::NodeData(
      v4,
      (Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeShape::NodeData>)this);
  return Scaleform::Render::ContextImpl::Context::createEntryHelper(context, v5);
}

Scaleform::Render::TreeCacheMeshBase *__fastcall Scaleform::Render::TreeCacheShapeLayer::Create(
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *pparent,
        Scaleform::Render::ShapeMeshProvider *provider,
        unsigned int drawLayer,
        unsigned int flags,
        Scaleform::Render::TreeShape *shapeNode,
        float morphRatio)
{
  Scaleform::Render::TreeCacheMeshBase *v9; // rax
  Scaleform::Render::TreeCacheMeshBase *v10; // rbx
  bool v11; // zf
  Scaleform::Render::Image *pObject; // rax
  Scaleform::Render::TreeCacheMeshBase_vtbl *v13; // rcx
  int v15; // [rsp+40h] [rbp-28h] BYREF
  Scaleform::Ptr<Scaleform::Render::Image> gradientImage; // [rsp+48h] [rbp-20h] BYREF
  Scaleform::Render::SortKey result; // [rsp+50h] [rbp-18h] BYREF

  gradientImage.pObject = 0i64;
  Scaleform::Render::TreeCacheShapeLayer::CreateSortKey(
    &result,
    hal,
    pparent,
    provider,
    drawLayer,
    flags,
    &gradientImage,
    morphRatio);
  v15 = 71;
  v9 = (Scaleform::Render::TreeCacheMeshBase *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 pparent,
                                                 208i64,
                                                 &v15);
  v10 = v9;
  if ( v9 )
  {
    Scaleform::Render::TreeCacheMeshBase::TreeCacheMeshBase(v9, shapeNode, &result, flags);
    v10->__vftable = (Scaleform::Render::TreeCacheMeshBase_vtbl *)&Scaleform::Render::TreeCacheShapeLayer::`vftable';
    *((_QWORD *)&v10->M + 1) = 0i64;
    v10[1].__vftable = 0i64;
    v11 = result.pImpl->Type == SortKey_MeshProvider;
    *((_DWORD *)&v10[1].__vftable + 3) = drawLayer;
    *((_BYTE *)&v10[1].__vftable + 8) = v11;
    pObject = gradientImage.pObject;
    if ( gradientImage.pObject )
    {
      gradientImage.pObject->AddRef(gradientImage.pObject);
      pObject = gradientImage.pObject;
    }
    v13 = v10[1].__vftable;
    if ( v13 )
    {
      (*((void (__fastcall **)(Scaleform::Render::TreeCacheMeshBase_vtbl *))v13->~TreeCacheNode + 2))(v13);
      pObject = gradientImage.pObject;
    }
    v10[1].__vftable = (Scaleform::Render::TreeCacheMeshBase_vtbl *)pObject;
  }
  else
  {
    v10 = 0i64;
  }
  result.pImpl->Release(result.pImpl, result.Data);
  if ( gradientImage.pObject )
    gradientImage.pObject->Release(gradientImage.pObject);
  return v10;
}

Scaleform::Render::SortKey *__fastcall Scaleform::Render::TreeCacheShapeLayer::CreateSortKey(
        Scaleform::Render::SortKey *result,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *refNode,
        Scaleform::Render::ShapeMeshProvider *provider,
        unsigned int drawLayer,
        unsigned int flags,
        Scaleform::Ptr<Scaleform::Render::Image> *gradientImage,
        float morphRatio)
{
  Scaleform::Render::PrimitiveFill *v8; // rbx
  int v12; // er8
  int v13; // er15
  char v14; // si
  unsigned __int16 v15; // ax
  Scaleform::Render::MeshProvider *v16; // r14
  Scaleform::Render::TextureManager *v17; // rdi
  Scaleform::Render::PrimitiveFillManager *v18; // rbx
  Scaleform::Render::FillData initdata; // [rsp+30h] [rbp-38h] BYREF

  v8 = 0i64;
  v12 = (flags & 0xC) == 4;
  if ( (flags & 0x40) != 0 )
    v12 = 2;
  v13 = v12 | 8;
  if ( (flags & 0x80u) == 0 )
    v13 = v12;
  v14 = (flags & 0x200) != 0;
  do
  {
    v15 = refNode->Flags;
    refNode = refNode->pParent;
    v14 |= (v15 & 0x200) != 0;
  }
  while ( refNode && !v14 );
  v16 = &provider->Scaleform::Render::MeshProvider;
  if ( provider->GetFillCount(&provider->Scaleform::Render::MeshProvider, drawLayer, v13) <= 1 )
  {
    if ( hal )
    {
      v17 = hal->GetTextureManager(hal);
      v18 = hal->GetPrimitiveFillManager(hal);
      Scaleform::Render::FillData::FillData(&initdata, Fill_VColor);
      v16->GetFillData(v16, &initdata, drawLayer, 0, v13);
      v8 = Scaleform::Render::PrimitiveFillManager::CreateFill(v18, &initdata, gradientImage, v17, morphRatio);
    }
    Scaleform::Render::SortKey::SortKey(result, v8, v14);
    if ( v8 )
      Scaleform::RefCountNTSImpl::Release(v8);
  }
  else
  {
    Scaleform::Render::SortKey::SortKey(result, v16, v14);
  }
  return result;
}

Scaleform::Render::MeshStagingNode *__fastcall Scaleform::Render::TreeCacheShapeLayer::GetMesh(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal)
{
  __int64 v4; // rax
  unsigned __int16 Flags; // dx
  int v6; // ecx
  int meshGenFlags; // edi
  bool v8; // zf
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rdx
  const Scaleform::Render::TreeShape::NodeData *ShapeNodeData; // rax
  __int64 v11; // rcx
  Scaleform::Render::TreeNode *pNode; // r10
  Scaleform::Render::TreeNode *v13; // rcx
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::ShapeMeshProvider *MeshProvider; // rax
  Scaleform::Render::MeshStagingNode *v16; // rax
  Scaleform::Render::Matrix2x4<float> mat; // [rsp+40h] [rbp-88h] BYREF
  Scaleform::Render::Matrix4x4<float> result; // [rsp+60h] [rbp-68h] BYREF

  if ( this->pRoot )
  {
    v4 = *((_QWORD *)&this->M + 1);
    if ( !v4 || !*(_QWORD *)(v4 + 24) )
    {
      Flags = this->Flags;
      if ( (Flags & 0x40) != 0 )
        v6 = 2;
      else
        v6 = (Flags & 0xC) == 4;
      meshGenFlags = v6 | 8;
      v8 = (Flags & 0x80u) == 0;
      pHeader = this->M.pHandle->pHeader;
      if ( v8 )
        meshGenFlags = v6;
      if ( (pHeader->Format & 0x10) != 0 )
      {
        Scaleform::Render::TreeCacheNode::GetViewProj(this, &result);
        ShapeNodeData = Scaleform::Render::TreeCacheShapeLayer::GetShapeNodeData(this);
        Scaleform::Render::TreeCacheShapeLayer::getShapeMatrixFrom3D(this, hal, ShapeNodeData, &mat, &result);
      }
      else
      {
        v11 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
            + 1i64;
        *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&mat.M[0][0] = pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
                                                                               + 1];
        *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&mat.M[1][0] = pHeader[v11 + 1];
      }
      pNode = this->pNode;
      if ( pNode )
        v13 = this->pNode;
      else
        v13 = this->pParent->pNode;
      if ( !pNode )
        pNode = this->pParent->pNode;
      Scaleform::Render::TreeCacheShapeLayer::updateMeshKey(
        this,
        hal,
        *(Scaleform::Render::ShapeMeshProvider **)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                          + 0x28)
                                                              + 8i64
                                                              * (unsigned int)((int)((_DWORD)pNode
                                                                                   - ((unsigned int)pNode & 0xFFFFF000)
                                                                                   - 56)
                                                                             / 56)
                                                              + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                 + 144),
        *(float *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                              + 8i64 * (unsigned int)((int)((_DWORD)v13 - ((unsigned int)v13 & 0xFFFFF000) - 56) / 56)
                              + 40) & 0xFFFFFFFFFFFFFFFEui64)
                 + 152),
        &mat,
        meshGenFlags,
        0i64);
      if ( !this->ComplexShape )
      {
        pObject = this->SorterShapeNode.pBundle.pObject;
        if ( pObject )
        {
          if ( *(_QWORD *)(pObject[1].Entries.Data.Policy.Capacity + 32) )
          {
            *(_OWORD *)&result.M[0][0] = _xmm;
            *(_OWORD *)&result.M[1][0] = _xmm;
            MeshProvider = Scaleform::Render::TreeCacheShapeLayer::GetMeshProvider(this);
            MeshProvider->GetFillMatrix(
              &MeshProvider->Scaleform::Render::MeshProvider,
              hal,
              *(Scaleform::Render::MeshBase **)(*((_QWORD *)&this->M + 1) + 24i64),
              (Scaleform::Render::Matrix2x4<float> *)&result,
              this->Layer,
              0,
              meshGenFlags);
            Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(
              &this->M,
              (const Scaleform::Render::Matrix2x4<float> *)&result,
              0);
          }
        }
      }
    }
  }
  v16 = (Scaleform::Render::MeshStagingNode *)*((_QWORD *)&this->M + 1);
  if ( v16 )
    return (Scaleform::Render::MeshStagingNode *)v16->StagingBufferSize;
  return v16;
}

Scaleform::Render::ShapeMeshProvider *__fastcall Scaleform::Render::TreeCacheShapeLayer::GetMeshProvider(
        Scaleform::Render::TreeCacheShapeLayer *this)
{
  Scaleform::Render::TreeNode *pNode; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  pNode = this->pNode;
  if ( !pNode )
    pNode = this->pParent->pNode;
  v2 = (unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64;
  v3 = (__int64)((unsigned __int128)((__int64)((__int64)&pNode[-1] - ((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64))
                                   * (__int128)0x4924924924924925i64) >> 64) >> 4;
  return *(Scaleform::Render::ShapeMeshProvider **)((*(_QWORD *)(*(_QWORD *)(v2 + 40)
                                                               + 8 * ((unsigned int)v3 + (v3 >> 63))
                                                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                  + 144);
}

const Scaleform::Render::TreeShape::NodeData *__fastcall Scaleform::Render::TreeCacheShapeLayer::GetShapeNodeData(
        Scaleform::Render::TreeCacheShapeLayer *this)
{
  Scaleform::Render::TreeNode *pNode; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  pNode = this->pNode;
  if ( !pNode )
    pNode = this->pParent->pNode;
  v2 = (unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64;
  v3 = (__int64)((unsigned __int128)((__int64)((__int64)&pNode[-1] - ((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64))
                                   * (__int128)0x4924924924924925i64) >> 64) >> 4;
  return (const Scaleform::Render::TreeShape::NodeData *)(*(_QWORD *)(*(_QWORD *)(v2 + 40)
                                                                    + 8 * ((unsigned int)v3 + (v3 >> 63))
                                                                    + 40) & 0xFFFFFFFFFFFFFFFEui64);
}

const Scaleform::Render::Matrix4x4<float> *__fastcall Scaleform::Render::TransformArgs::GetViewProj(
        Scaleform::Render::TransformArgs *this)
{
  const Scaleform::Render::ViewMatrix3DState *viewState; // rax
  const Scaleform::Render::ProjectionMatrix3DState *projState; // rcx
  const Scaleform::Render::Matrix4x4<float> *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  Scaleform::Render::Matrix3x4<float> m2; // [rsp+20h] [rbp-C8h] BYREF
  Scaleform::Render::Matrix4x4<float> m1; // [rsp+50h] [rbp-98h] BYREF
  Scaleform::Render::Matrix4x4<float> v10; // [rsp+90h] [rbp-58h] BYREF

  if ( !this->bRecomputeViewProj )
    return &this->ViewProj;
  viewState = this->viewState;
  if ( viewState && (projState = this->projState) != 0i64 )
  {
    m2 = *(Scaleform::Render::Matrix3x4<float> *)(viewState->DataValue + 16);
    m1 = *(Scaleform::Render::Matrix4x4<float> *)(projState->DataValue + 16);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v10, &m1, &m2);
    result = &this->ViewProj;
    v5 = *(_OWORD *)&v10.M[1][0];
    *(_OWORD *)&this->ViewProj.M[0][0] = *(_OWORD *)&v10.M[0][0];
    v6 = *(_OWORD *)&v10.M[2][0];
    *(_OWORD *)&this->ViewProj.M[1][0] = v5;
    v7 = *(_OWORD *)&v10.M[3][0];
    *(_OWORD *)&this->ViewProj.M[2][0] = v6;
    *(_OWORD *)&this->ViewProj.M[3][0] = v7;
    this->bRecomputeViewProj = 0;
  }
  else
  {
    *(_QWORD *)&this->ViewProj.M[0][0] = 0i64;
    *(_QWORD *)&this->ViewProj.M[0][2] = 0i64;
    *(_QWORD *)&this->ViewProj.M[1][0] = 0i64;
    *(_QWORD *)&this->ViewProj.M[1][2] = 0i64;
    *(_QWORD *)&this->ViewProj.M[2][0] = 0i64;
    *(_QWORD *)&this->ViewProj.M[2][2] = 0i64;
    *(_QWORD *)&this->ViewProj.M[3][0] = 0i64;
    *(_QWORD *)&this->ViewProj.M[3][2] = 0i64;
    this->ViewProj.M[0][0] = 1.0;
    this->ViewProj.M[1][1] = 1.0;
    this->ViewProj.M[2][2] = 1.0;
    this->ViewProj.M[3][3] = 1.0;
    this->bRecomputeViewProj = 0;
    return &this->ViewProj;
  }
  return result;
}

void __fastcall Scaleform::Render::TreeCacheShape::HandleChanges(
        Scaleform::Render::TreeCacheShape *this,
        Scaleform::Render::HAL *hal,
        unsigned int changeBits)
{
  char v3; // bl
  Scaleform::Render::TreeCacheNode *pParent; // rcx
  int v7; // er8
  int v8; // ecx
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx
  Scaleform::Render::TreeCacheShapeLayer *pNext; // rbx
  Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > *p_Children; // rax
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rdi
  Scaleform::Render::TreeNode *pNode; // rcx

  v3 = changeBits;
  if ( (changeBits & 0x20) != 0 )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      v7 = pParent->Flags & 0xC;
      if ( v7 == 12 )
      {
        v8 = 12;
LABEL_8:
        this->propagateEdgeAA(this, hal, (Scaleform::Render::EdgeAAMode)v8);
        goto LABEL_9;
      }
    }
    else
    {
      v7 = 4;
    }
    v8 = *(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                               + 8i64
                               * (unsigned int)((__int64)((__int64)&this->pNode[-1]
                                                        - ((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64))
                                              / 56)
                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                  + 10) & 0xC;
    if ( !v8 )
      v8 = v7;
    goto LABEL_8;
  }
LABEL_9:
  if ( (v3 & 0x10) != 0 )
  {
    pRoot = this->pRoot;
    if ( pRoot )
    {
      Scaleform::Render::TreeCacheRoot::AddToUpdate(pRoot, this, 1u);
      pNext = (Scaleform::Render::TreeCacheShapeLayer *)this->Children.Root.pNext;
      p_Children = &this->Children;
      p_SortParentBounds = &this->SortParentBounds;
      if ( !p_Children )
        p_SortParentBounds = 0i64;
      while ( pNext != (Scaleform::Render::TreeCacheShapeLayer *)p_SortParentBounds )
      {
        pNode = pNext->pNode;
        if ( !pNode )
          pNode = pNext->pParent->pNode;
        if ( *(_BYTE *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                               + 8i64
                                               * (unsigned int)((int)((_DWORD)pNode
                                                                    - ((unsigned int)pNode & 0xFFFFF000)
                                                                    - 56)
                                                              / 56)
                                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                  + 144)
                      + 128i64) )
          Scaleform::Render::TreeCacheShapeLayer::updateSortKey(pNext, hal);
        pNext = (Scaleform::Render::TreeCacheShapeLayer *)pNext->pNext;
      }
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::HandleChanges(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        unsigned int changeBits)
{
  char v3; // di
  Scaleform::Render::TreeCacheNode *pParent; // rcx
  int v7; // er8
  int v8; // ecx
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx

  v3 = changeBits;
  if ( (changeBits & 0x20) != 0 )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      v7 = pParent->Flags & 0xC;
      if ( v7 == 12 )
      {
        v8 = 12;
LABEL_8:
        this->propagateEdgeAA(this, hal, (Scaleform::Render::EdgeAAMode)v8);
        goto LABEL_9;
      }
    }
    else
    {
      v7 = 4;
    }
    v8 = *(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                               + 8i64
                               * (unsigned int)((__int64)((__int64)&this->pNode[-1]
                                                        - ((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64))
                                              / 56)
                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                  + 10) & 0xC;
    if ( !v8 )
      v8 = v7;
    goto LABEL_8;
  }
LABEL_9:
  if ( (v3 & 0x10) != 0 )
  {
    pRoot = this->pRoot;
    if ( pRoot )
    {
      Scaleform::Render::TreeCacheRoot::AddToUpdate(pRoot, this, 1u);
      Scaleform::Render::TreeCacheShapeLayer::updateSortKeyGradientMorph(this, hal);
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheMeshBase::HandleRemoveNode(Scaleform::Render::TreeCacheMeshBase *this)
{
  Scaleform::Render::TreeCacheNode::HandleRemoveNode(this);
  this->SorterShapeNode.Removed = 1;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::Render::TreeShape::NodeData::PropagateUp(
        Scaleform::Render::TreeShape::NodeData *this,
        Scaleform::Render::ContextImpl::Entry *entry)
{
  bool v4; // cf
  float x1; // xmm0_4
  float y1; // xmm2_4
  float x2; // xmm1_4
  float y2; // xmm3_4
  Scaleform::Render::ShapeMeshProvider *pObject; // rcx
  float *v10; // rax
  Scaleform::Render::Matrix2x4<float> *v11; // rax
  float v12; // xmm6_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm9_4
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Rect<float> bounds; // [rsp+28h] [rbp-39h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+38h] [rbp-29h] BYREF
  Scaleform::Render::Rect<float> v20; // [rsp+48h] [rbp-19h] BYREF
  Scaleform::Render::Rect<float> v21; // [rsp+58h] [rbp-9h] BYREF

  bounds = 0i64;
  v20 = 0i64;
  v4 = this->AproxLocalBounds.x1 < this->AproxLocalBounds.x2;
  pr = 0i64;
  if ( v4 && this->AproxLocalBounds.y1 < this->AproxLocalBounds.y2 )
  {
    x1 = this->AproxLocalBounds.x1;
    y1 = this->AproxLocalBounds.y1;
    x2 = this->AproxLocalBounds.x2;
    y2 = this->AproxLocalBounds.y2;
  }
  else
  {
    pObject = this->pMeshProvider.pObject;
    if ( !pObject )
    {
LABEL_11:
      y2 = bounds.y2;
      x2 = bounds.x2;
      y1 = bounds.y1;
      x1 = bounds.x1;
      goto LABEL_12;
    }
    v10 = (float *)pObject->GetIdentityBounds(&pObject->Scaleform::Render::MeshProvider, &v21);
    y2 = v10[3];
    x2 = v10[2];
    y1 = v10[1];
    x1 = *v10;
  }
  bounds.y2 = y2;
  bounds.x2 = x2;
  bounds.y1 = y1;
  bounds.x1 = x1;
  if ( x1 < x2 && y1 < y2 )
  {
    v20.x1 = x1;
    v20.y1 = y1;
    v20.x2 = x2;
    v20.y2 = y2;
    Scaleform::Render::TreeNode::NodeData::expandByFilterBounds(this, &bounds, 0);
    if ( (this->Flags & 0x200) != 0 )
    {
      Scaleform::Render::Matrix3x4<float>::EncloseTransform(&this->M34, &pr, &bounds);
    }
    else
    {
      v11 = (Scaleform::Render::Matrix2x4<float> *)Scaleform::Render::TreeNode::NodeData::M2D(this);
      Scaleform::Render::Matrix2x4<float>::EncloseTransform(v11, &pr, &bounds);
    }
    goto LABEL_11;
  }
LABEL_12:
  v12 = pr.y2;
  v13 = pr.x2;
  v14 = pr.y1;
  v15 = pr.x1;
  if ( x1 == this->AproxLocalBounds.x1
    && x2 == this->AproxLocalBounds.x2
    && y1 == this->AproxLocalBounds.y1
    && y2 == this->AproxLocalBounds.y2
    && pr.x1 == x1
    && pr.x2 == x2
    && pr.y1 == y1
    && pr.y2 == y2 )
  {
    return 0;
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(entry, 8u);
  WritableData[7] = (Scaleform::Render::ContextImpl::EntryData)bounds;
  *(float *)&WritableData[8].__vftable = v15;
  *((float *)&WritableData[8].__vftable + 1) = v14;
  *(float *)&WritableData[8].Type = v13;
  *(float *)(&WritableData[8].Flags + 1) = v12;
  Scaleform::Render::TreeNode::NodeData::updateOriginalBoundState(
    (Scaleform::Render::TreeNode::NodeData *)WritableData,
    &v20);
  return this->Flags & 1;
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::RemoveMesh(Scaleform::Render::TreeCacheShapeLayer *this)
{
  Scaleform::Render::MeshKey *v2; // rcx

  v2 = (Scaleform::Render::MeshKey *)*((_QWORD *)&this->M + 1);
  if ( v2 )
    Scaleform::Render::MeshKey::Release(v2);
  *((_QWORD *)&this->M + 1) = 0i64;
}

void __fastcall Scaleform::Render::MeshBase::SetScale9Grid(
        Scaleform::Render::MeshBase *this,
        Scaleform::Render::Scale9GridData *s9g)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( s9g )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)s9g);
  pObject = (Scaleform::RefCountVImpl *)this->pScale9Grid.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pScale9Grid.pObject = s9g;
}

void __fastcall Scaleform::Render::TreeCacheShape::UpdateChildSubtree(
        Scaleform::Render::TreeCacheShape *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *pdata,
        unsigned __int16 depth)
{
  Scaleform::Render::ShapeMeshProvider *v8; // r13
  unsigned int v9; // er15
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rcx
  bool v11; // zf
  Scaleform::Render::TreeCacheNode *pNext; // rcx
  unsigned int v13; // ebx
  Scaleform::Render::TreeCacheNode *i; // r14
  Scaleform::Render::TreeCacheMeshBase *v15; // rax
  Scaleform::Render::TreeCacheMeshBase *v16; // rbp
  Scaleform::Render::Rect<float> *v17; // rdx

  Scaleform::Render::TreeCacheNode::UpdateChildSubtree(this, hal, pdata, depth);
  v8 = (Scaleform::Render::ShapeMeshProvider *)pdata[1].__vftable;
  v9 = v8->GetLayerCount(&v8->Scaleform::Render::MeshProvider);
  p_SortParentBounds = &this->SortParentBounds;
  if ( this == (Scaleform::Render::TreeCacheShape *)-112i64 )
    p_SortParentBounds = 0i64;
  v11 = this->Children.Root.pNext == (Scaleform::Render::TreeCacheNode *)p_SortParentBounds;
  pNext = this->Children.Root.pNext;
  if ( v11 )
  {
    v13 = 0;
    for ( i = pNext->pPrev; v13 < v9; ++v13 )
    {
      v15 = Scaleform::Render::TreeCacheShapeLayer::Create(
              hal,
              this,
              v8,
              v13,
              this->Flags & 0xC | 1u,
              0i64,
              *(float *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                    + 8i64
                                    * (unsigned int)((int)(LODWORD(this->pNode)
                                                         - ((__int64)this->pNode & 0xFFFFF000)
                                                         - 56)
                                                   / 56)
                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                       + 152));
      v16 = v15;
      if ( v15 )
      {
        Scaleform::Render::TreeCacheNode::UpdateInsertIntoParent(v15, hal, this, i, 0i64, depth);
        i = v16;
      }
    }
  }
  else
  {
    v17 = &this->SortParentBounds;
    if ( this == (Scaleform::Render::TreeCacheShape *)-112i64 )
      v17 = 0i64;
    while ( pNext != (Scaleform::Render::TreeCacheNode *)v17 )
    {
      pNext->Depth = depth;
      pNext->pRoot = this->pRoot;
      pNext = pNext->pNext;
    }
  }
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::UpdateChildSubtree(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *data,
        unsigned __int16 depth)
{
  int v8; // ebx

  v8 = this->Flags & 0xFFBF | ((unsigned __int8)(2 * (this->Flags & 0x20)) | (unsigned __int8)this->pParent->Flags) & 0xC0;
  if ( data )
  {
    if ( Scaleform::Render::StateBag::GetState(&data->States, State_Scale9) )
      v8 |= 0x80u;
    if ( (data->Flags & 0x200) != 0 )
      v8 |= 0x200u;
  }
  if ( v8 != this->Flags )
  {
    this->Flags = v8;
    Scaleform::Render::TreeCacheShapeLayer::updateSortKey(this, hal);
  }
  if ( data )
    Scaleform::Render::TreeCacheNode::updateMaskCache(this, hal, data, depth, 1);
}

void __fastcall Scaleform::Render::TreeCacheShape::UpdateTransform(
        Scaleform::Render::TreeCacheShape *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *shapeData,
        const Scaleform::Render::TransformArgs *t,
        Scaleform::Render::TransformFlags flags)
{
  const Scaleform::Render::ViewMatrix3DState *viewState; // rax
  __int128 v7; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y1; // xmm0_4
  Scaleform::Render::TreeCacheShapeLayer *pNext; // rbx
  bool v20; // zf
  Scaleform::Render::Rect<float> *p_SortParentBounds; // rsi
  Scaleform::Render::TransformArgs cullRect; // [rsp+30h] [rbp-D0h] BYREF

  viewState = t->viewState;
  v7 = *(_OWORD *)&t->Cx.M[1][0];
  cullRect.CullRect = t->CullRect;
  *(_OWORD *)&cullRect.Cx.M[1][0] = v7;
  cullRect.viewState = viewState;
  cullRect.projState = t->projState;
  cullRect.bRecomputeViewProj = t->bRecomputeViewProj;
  v10 = *(_OWORD *)&t->ViewProj.M[1][0];
  *(_OWORD *)&cullRect.Mat.M[0][0] = *(_OWORD *)&t->Mat.M[0][0];
  v11 = *(_OWORD *)&t->Mat.M[1][0];
  *(_OWORD *)&cullRect.ViewProj.M[1][0] = v10;
  *(_OWORD *)&cullRect.Mat.M[1][0] = v11;
  v12 = *(_OWORD *)&t->ViewProj.M[3][0];
  *(_OWORD *)&cullRect.Cx.M[0][0] = *(_OWORD *)&t->Cx.M[0][0];
  v13 = *(_OWORD *)&t->ViewProj.M[0][0];
  *(_OWORD *)&cullRect.ViewProj.M[3][0] = v12;
  *(_OWORD *)&cullRect.ViewProj.M[0][0] = v13;
  *(_OWORD *)&cullRect.ViewProj.M[2][0] = *(_OWORD *)&t->ViewProj.M[2][0];
  if ( (flags & 0x80u) != 0 )
  {
    v14 = *(_OWORD *)&t->Mat3D.M[1][0];
    *(_OWORD *)&cullRect.Mat3D.M[0][0] = *(_OWORD *)&t->Mat3D.M[0][0];
    v15 = *(_OWORD *)&t->Mat3D.M[2][0];
    *(_OWORD *)&cullRect.Mat3D.M[1][0] = v14;
    *(_OWORD *)&cullRect.Mat3D.M[2][0] = v15;
  }
  Scaleform::Render::TreeCacheNode::updateCulling(
    this,
    hal,
    shapeData,
    t,
    &cullRect.CullRect,
    (Scaleform::Render::TransformFlags)(flags | 0x20));
  y2 = shapeData->AproxParentBounds.y2;
  x2 = shapeData->AproxParentBounds.x2;
  y1 = shapeData->AproxParentBounds.y1;
  this->SortParentBounds.x1 = shapeData->AproxParentBounds.x1;
  this->SortParentBounds.y1 = y1;
  this->SortParentBounds.x2 = x2;
  this->SortParentBounds.y2 = y2;
  this->Flags &= ~0x400u;
  pNext = (Scaleform::Render::TreeCacheShapeLayer *)this->Children.Root.pNext;
  v20 = &this->Children == 0i64;
  p_SortParentBounds = &this->SortParentBounds;
  if ( v20 )
    p_SortParentBounds = 0i64;
  while ( pNext != (Scaleform::Render::TreeCacheShapeLayer *)p_SortParentBounds )
  {
    Scaleform::Render::TreeCacheShapeLayer::UpdateTransform(
      pNext,
      hal,
      shapeData,
      &cullRect,
      (Scaleform::Render::TransformFlags)(flags & 0xFFFFFFEF));
    pNext = (Scaleform::Render::TreeCacheShapeLayer *)pNext->pNext;
  }
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::UpdateTransform(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *nodeData,
        const Scaleform::Render::TransformArgs *t,
        Scaleform::Render::TransformFlags flags)
{
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y1; // xmm0_4
  Scaleform::Render::TreeCacheShapeLayer_vtbl *v12; // rbx
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v13; // rax
  int v14; // ebx
  char v15; // r12
  const Scaleform::Render::Matrix4x4<float> *ViewProj; // rax
  unsigned __int16 v17; // cx
  int v18; // eax
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  bool v24; // cc
  Scaleform::Render::Bundle *pObject; // rcx
  unsigned int meshKeyFlags[4]; // [rsp+40h] [rbp-81h] BYREF
  Scaleform::Render::Rect<float> cullRect; // [rsp+50h] [rbp-71h] BYREF
  Scaleform::Render::Matrix2x4<float> mat; // [rsp+60h] [rbp-61h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+80h] [rbp-41h] BYREF

  cullRect = t->CullRect;
  Scaleform::Render::TreeCacheNode::updateCulling(
    this,
    hal,
    nodeData,
    t,
    &cullRect,
    (Scaleform::Render::TransformFlags)(flags | 0x20));
  y2 = nodeData->AproxParentBounds.y2;
  x2 = nodeData->AproxParentBounds.x2;
  y1 = nodeData->AproxParentBounds.y1;
  this->SortParentBounds.x1 = nodeData->AproxParentBounds.x1;
  this->SortParentBounds.y1 = y1;
  this->SortParentBounds.x2 = x2;
  this->SortParentBounds.y2 = y2;
  this->Flags &= ~0x400u;
  v12 = this->__vftable;
  v13 = hal->GetMatrixPool(hal);
  v12->ComputeFinalMatrix(this, t, v13, flags);
  if ( (flags & 1) != 0 && *((_QWORD *)&this->M + 1) )
  {
    v14 = 0;
    v15 = 0;
    meshKeyFlags[0] = 0;
    if ( (flags & 0x80u) != 0 && this->pRoot )
    {
      ViewProj = Scaleform::Render::TransformArgs::GetViewProj((Scaleform::Render::TransformArgs *)t);
      Scaleform::Render::TreeCacheShapeLayer::getShapeMatrixFrom3D(
        this,
        hal,
        (const Scaleform::Render::TreeShape::NodeData *)nodeData,
        &mat,
        ViewProj);
    }
    else
    {
      mat = t->Mat;
    }
    v17 = this->Flags;
    if ( (v17 & 0x40) != 0 )
    {
      v14 = 2;
    }
    else if ( (v17 & 0xC) == 4 )
    {
      v14 = 1;
    }
    v18 = v14 | 8;
    if ( (v17 & 0x80u) == 0 )
      v18 = v14;
    if ( Scaleform::Render::TreeCacheShapeLayer::updateMeshKey(
           this,
           hal,
           (Scaleform::Render::ShapeMeshProvider *)nodeData[1].__vftable,
           *(float *)&nodeData[1].Type,
           &mat,
           v18,
           meshKeyFlags) )
    {
      v15 = 1;
      if ( *(float *)&nodeData[1].Type != 0.0 )
        Scaleform::Render::TreeCacheShapeLayer::updateTexture0Matrix(this, hal);
    }
    if ( (this->M.pHandle->pHeader->Format & 0x10) == 0 && (meshKeyFlags[0] & 7) == 3 )
    {
      v19 = t->Mat.M[0][1];
      v20 = t->Mat.M[0][3];
      m.M[0][0] = t->Mat.M[0][0];
      *(_QWORD *)&m.M[0][1] = __PAIR64__(LODWORD(t->Mat.M[0][2]), LODWORD(v19));
      *(_QWORD *)&m.M[1][0] = *(_QWORD *)&t->Mat.M[1][0];
      v21 = FLOAT_N0_5;
      m.M[1][2] = t->Mat.M[1][2];
      if ( v20 >= 0.0 )
        v22 = FLOAT_0_5;
      else
        v22 = FLOAT_N0_5;
      v23 = floorf(v22 + v20);
      v24 = t->Mat.M[1][3] >= 0.0;
      m.M[0][3] = v23;
      if ( v24 )
        v21 = FLOAT_0_5;
      m.M[1][3] = floorf(v21 + t->Mat.M[1][3]);
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(&this->M, &m);
    }
    pObject = this->SorterShapeNode.pBundle.pObject;
    if ( pObject )
    {
      if ( v15 )
        pObject->UpdateMesh(pObject, hal, &this->SorterShapeNode);
    }
  }
}

__int64 __fastcall Scaleform::Render::TreeCacheShapeLayer::calcMeshGenFlags(
        Scaleform::Render::TreeCacheShapeLayer *this)
{
  unsigned __int16 Flags; // r8
  unsigned int v2; // edx
  __int64 result; // rax

  Flags = this->Flags;
  v2 = 0;
  if ( (Flags & 0x40) != 0 )
  {
    result = 10i64;
    if ( (Flags & 0x80) == 0 )
      return 2i64;
  }
  else
  {
    if ( (Flags & 0xC) == 4 )
      v2 = 1;
    result = v2 | 8;
    if ( (Flags & 0x80) == 0 )
      return v2;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::TreeCacheShapeLayer::calcMeshKey(
        Scaleform::Render::TreeCacheShapeLayer *this,
        const Scaleform::Render::ShapeMeshProvider *pmeshProvider,
        const Scaleform::Render::Matrix2x4<float> *m,
        unsigned int drawLayer,
        float *keyData,
        Scaleform::Render::Scale9GridData *s9g,
        float morphRatio)
{
  unsigned int v7; // esi
  Scaleform::Render::ShapeMeshProvider *v9; // rdi
  int v11; // er14
  Scaleform::Render::TreeCacheShapeLayer *pParent; // rdi
  Scaleform::Render::TreeCacheShapeLayer *v13; // rbx
  unsigned __int64 v14; // rsi
  Scaleform::Render::StateBag *State; // rax
  _QWORD *pData; // rax
  Scaleform::Render::TreeCacheShapeLayer *v17; // rax
  Scaleform::Render::StateBag *v18; // rax
  Scaleform::Render::Matrix3x4<float> *v19; // rax
  float v20; // eax
  float v21; // xmm2_4
  float v22; // xmm1_4
  __int128 v23; // xmm0
  Scaleform::Render::Matrix3x4<float> *v24; // rax
  Scaleform::Render::StateBag *v25; // rax
  char *v26; // rax
  float *v27; // rcx
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // eax
  bool v32; // bl
  unsigned int StrokeStyle; // edx
  Scaleform::Render::TreeNode *pNode; // rcx
  int v35; // er9
  unsigned int v36; // ebx
  Scaleform::Render::StrokeStyleType v40; // [rsp+40h] [rbp-78h] BYREF

  v7 = drawLayer;
  v9 = (Scaleform::Render::ShapeMeshProvider *)pmeshProvider;
  v11 = 1;
  if ( SLOBYTE(this->Flags) < 0 )
  {
    pParent = this;
    if ( !this->pNode )
      pParent = (Scaleform::Render::TreeCacheShapeLayer *)this->pParent;
    *(_OWORD *)&v40.Width = _xmm;
    *(_OWORD *)&v40.Color = _xmm;
    if ( pParent )
    {
      v13 = 0i64;
      while ( 1 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)pParent->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                        + 8i64
                        * (unsigned int)((int)(LODWORD(pParent->pNode) - ((__int64)pParent->pNode & 0xFFFFF000) - 56)
                                       / 56)
                        + 40) & 0xFFFFFFFFFFFFFFFEui64;
        State = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v14 + 64), State_OrigScale9Parent);
        if ( State )
          pData = State->pData;
        else
          pData = 0i64;
        if ( pData )
        {
          v17 = (Scaleform::Render::TreeCacheShapeLayer *)pData[3];
          if ( v17 != (Scaleform::Render::TreeCacheShapeLayer *)2989 )
            v13 = v17;
        }
        v18 = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v14 + 64), State_Scale9);
        if ( v18 )
          break;
        v19 = Scaleform::Render::TreeNode::NodeData::M2D((Scaleform::Render::TreeNode::NodeData *)v14);
        Scaleform::Render::Matrix2x4<float>::Append(
          (Scaleform::Render::Matrix2x4<float> *)&v40,
          (const Scaleform::Render::Matrix2x4<float> *)v19);
        if ( v13 )
          pParent = v13;
        else
          pParent = (Scaleform::Render::TreeCacheShapeLayer *)pParent->pParent;
        v13 = 0i64;
        if ( !pParent )
        {
          v9 = (Scaleform::Render::ShapeMeshProvider *)pmeshProvider;
          v7 = drawLayer;
          goto LABEL_25;
        }
      }
      s9g->S9Rect = *(Scaleform::Render::Rect<float> *)(v18->DataValue + 16);
      v20 = *(float *)(v14 + 112);
      v21 = *(float *)(v14 + 124);
      v22 = *(float *)(v14 + 120);
      s9g->Bounds.y1 = *(float *)(v14 + 116);
      v23 = *(_OWORD *)&v40.Width;
      s9g->Bounds.x2 = v22;
      s9g->Bounds.y2 = v21;
      s9g->Bounds.x1 = v20;
      *(_OWORD *)&s9g->ShapeMtx.M[0][0] = v23;
      *(_OWORD *)&s9g->ShapeMtx.M[1][0] = *(_OWORD *)&v40.Color;
      v24 = Scaleform::Render::TreeNode::NodeData::M2D((Scaleform::Render::TreeNode::NodeData *)v14);
      *(_OWORD *)&s9g->Scale9Mtx.M[0][0] = *(_OWORD *)&v24->M[0][0];
      *(_OWORD *)&s9g->Scale9Mtx.M[1][0] = *(_OWORD *)&v24->M[1][0];
      s9g->ViewMtx = *m;
      v25 = Scaleform::Render::StateBag::GetState((Scaleform::Render::StateBag *)(v14 + 64), State_OrigNodeBounds);
      if ( v25 )
      {
        v26 = (char *)v25->pData;
        v27 = (float *)(v26 + 16);
        if ( !v26 )
          v27 = 0i64;
        v28 = v27[3];
        v29 = v27[2];
        v30 = v27[1];
        v31 = *v27;
      }
      else
      {
        v28 = *(float *)(v14 + 124);
        v29 = *(float *)(v14 + 120);
        v30 = *(float *)(v14 + 116);
        v31 = *(float *)(v14 + 112);
      }
      v9 = (Scaleform::Render::ShapeMeshProvider *)pmeshProvider;
      v11 = 17;
      v7 = drawLayer;
      s9g->Bounds.y2 = v28;
      s9g->Bounds.x2 = v29;
      s9g->Bounds.y1 = v30;
      s9g->Bounds.x1 = v31;
    }
    else
    {
      v9 = (Scaleform::Render::ShapeMeshProvider *)pmeshProvider;
    }
  }
LABEL_25:
  v32 = 1;
  if ( (v11 & 0x10) != 0 )
  {
    Scaleform::Render::Scale9GridData::MakeMeshKey(s9g, keyData);
  }
  else
  {
    v32 = Scaleform::Render::MeshKey::CalcMatrixKey(m, keyData, 0i64);
    StrokeStyle = v9->DrawLayers.Data.Data[v7].StrokeStyle;
    if ( StrokeStyle )
    {
      *(_OWORD *)&v40.pFill.pObject = 0i64;
      Scaleform::Render::ShapeMeshProvider::GetStrokeStyle(v9, StrokeStyle, &v40, 0.0);
      v11 = ((v40.Flags & 1) + 2) | 0x20;
      if ( (v40.Flags & 6) != 0 )
        v11 = (v40.Flags & 1) + 2;
      if ( v40.pDashes.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v40.pDashes.pObject);
      if ( v40.pFill.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v40.pFill.pObject);
    }
  }
  pNode = this->pNode;
  v35 = v11 | 0x8000;
  if ( v32 )
    v35 = v11;
  if ( !pNode )
    pNode = this->pParent->pNode;
  v36 = v35 | 0x100;
  if ( !*(_BYTE *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                          + 8i64
                                          * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56)
                                                         / 56)
                                          + 40) & 0xFFFFFFFFFFFFFFFEui64)
                             + 144)
                 + 128i64) )
    v36 = v35;
  keyData[(unsigned int)Scaleform::Render::MeshKey::GetKeySize(v36) - 1] = morphRatio;
  return v36;
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::forceUpdateImages(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal)
{
  Scaleform::Render::TreeNode *pNode; // r9
  Scaleform::Render::TreeNode *v5; // rcx
  Scaleform::Render::MeshKey *v6; // rcx
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx
  Scaleform::Render::TreeCacheNode *pParent; // rdx
  Scaleform::Render::SortKey result; // [rsp+40h] [rbp-18h] BYREF

  pNode = this->pNode;
  if ( pNode )
    v5 = this->pNode;
  else
    v5 = this->pParent->pNode;
  if ( !pNode )
    pNode = this->pParent->pNode;
  Scaleform::Render::TreeCacheShapeLayer::CreateSortKey(
    &result,
    hal,
    this,
    *(Scaleform::Render::ShapeMeshProvider **)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000ui64)
                                                                      + 0x28)
                                                          + 8i64
                                                          * (unsigned int)((int)((_DWORD)v5
                                                                               - ((unsigned int)v5 & 0xFFFFF000)
                                                                               - 56)
                                                                         / 56)
                                                          + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                             + 144),
    this->Layer,
    this->Flags,
    &this->pGradient,
    *(float *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                          + 8i64 * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56) / 56)
                          + 40) & 0xFFFFFFFFFFFFFFFEui64)
             + 152));
  if ( *(_OWORD *)&result == *(_OWORD *)&this->SorterShapeNode.Key )
  {
    if ( *((_QWORD *)&this->M + 1) )
      Scaleform::Render::TreeCacheShapeLayer::updateTexture0Matrix(this, hal);
  }
  else
  {
    Scaleform::Render::BundleEntry::ClearBundle(&this->SorterShapeNode);
    result.pImpl->AddRef(result.pImpl, result.Data);
    this->SorterShapeNode.Key.pImpl->Release(this->SorterShapeNode.Key.pImpl, this->SorterShapeNode.Key.Data);
    this->SorterShapeNode.Key = result;
    this->ComplexShape = this->SorterShapeNode.Key.pImpl->Type == SortKey_MeshProvider;
    v6 = (Scaleform::Render::MeshKey *)*((_QWORD *)&this->M + 1);
    if ( v6 )
      Scaleform::Render::MeshKey::Release(v6);
    *((_QWORD *)&this->M + 1) = 0i64;
    pRoot = this->pRoot;
    if ( pRoot )
    {
      pParent = this->pParent;
      if ( pParent )
        Scaleform::Render::TreeCacheRoot::AddToUpdate(pRoot, pParent, 0x1000401u);
    }
  }
  result.pImpl->Release(result.pImpl, result.Data);
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::getShapeMatrixFrom3D(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeShape::NodeData *nd,
        Scaleform::Render::Matrix2x4<float> *mat,
        const Scaleform::Render::Matrix4x4<float> *viewProj)
{
  Scaleform::Render::ToleranceParams *ToleranceParams; // rdi
  Scaleform::Render::Matrix3x4<float> *Matrix3D; // rax
  unsigned __int64 v11; // rdx
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float src; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+34h] [rbp-E4h]
  __int64 v19; // [rsp+3Ch] [rbp-DCh]
  float y2; // [rsp+44h] [rbp-D4h]
  Scaleform::Render::Rect<float> bounds; // [rsp+50h] [rbp-C8h] BYREF
  Scaleform::Render::Matrix4x4<float> v22; // [rsp+60h] [rbp-B8h] BYREF
  float dst[8]; // [rsp+A0h] [rbp-78h] BYREF

  nd->pMeshProvider.pObject->GetIdentityBounds(&nd->pMeshProvider.pObject->Scaleform::Render::MeshProvider, &bounds);
  ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
  Matrix3D = Scaleform::Render::MatrixPoolImpl::HMatrix::GetMatrix3D(&this->M);
  Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v22, viewProj, Matrix3D);
  v11 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode & 0xFFFFFFFFFFFFF000ui64)
                              + 0x28)
                  + 8i64
                  * (unsigned int)((int)(LODWORD(this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode)
                                       - ((__int64)this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode & 0xFFFFF000)
                                       - 56)
                                 / 56)
                  + 40) & 0xFFFFFFFFFFFFFFFEui64;
  Scaleform::Render::Matrix4x4<float>::TransformHomogeneousAndScaleCorners(
    &v22,
    &bounds,
    (float)*(int *)(v11 + 176),
    (float)*(int *)(v11 + 180),
    dst);
  src = bounds.x1;
  y2 = bounds.y2;
  v18 = *(_QWORD *)&bounds.y1;
  v19 = *(_QWORD *)&bounds.y1;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(mat, &src, dst);
  v12 = mat->M[1][1];
  v13 = mat->M[1][0];
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(mat->M[0][0] * v12) - (float)(mat->M[0][1] * v13))) & _xmm);
  if ( ToleranceParams->MinDet3D > v14 )
  {
    v15 = sqrtf(
            (float)((float)((float)(v13 * 0.70710677) + (float)(v12 * 0.70710677))
                  * (float)((float)(v13 * 0.70710677) + (float)(v12 * 0.70710677)))
          + (float)((float)((float)(mat->M[0][1] * 0.70710677) + (float)(mat->M[0][0] * 0.70710677))
                  * (float)((float)(mat->M[0][1] * 0.70710677) + (float)(mat->M[0][0] * 0.70710677))));
    mat->M[0][0] = v15;
    *(_QWORD *)&mat->M[0][1] = 0i64;
    *(_QWORD *)&mat->M[0][3] = 0i64;
    mat->M[1][1] = v15;
    *(_QWORD *)&mat->M[1][2] = 0i64;
  }
  if ( nd->pMeshProvider.pObject->DrawLayers.Data.Data[this->Layer].StrokeStyle )
  {
    v16 = fmaxf(
            ToleranceParams->MinScale3D,
            sqrtf(
              (float)((float)((float)(mat->M[1][1] * 0.70710677) + (float)(mat->M[1][0] * 0.70710677))
                    * (float)((float)(mat->M[1][1] * 0.70710677) + (float)(mat->M[1][0] * 0.70710677)))
            + (float)((float)((float)(mat->M[0][1] * 0.70710677) + (float)(mat->M[0][0] * 0.70710677))
                    * (float)((float)(mat->M[0][1] * 0.70710677) + (float)(mat->M[0][0] * 0.70710677)))));
    mat->M[0][0] = v16;
    *(_QWORD *)&mat->M[0][1] = 0i64;
    *(_QWORD *)&mat->M[0][3] = 0i64;
    mat->M[1][1] = v16;
    *(_QWORD *)&mat->M[1][2] = 0i64;
  }
}

// attributes: thunk
void __fastcall Scaleform::Render::TreeCacheShapeLayer::propagate3DFlag(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        unsigned int parent3D)
{
  Scaleform::Render::TreeCacheShapeLayer::updateSortKey(this, hal);
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::propagateEdgeAA(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::EdgeAAMode parentEdgeAA)
{
  Scaleform::Render::TreeNode *pNode; // rcx
  Scaleform::Render::EdgeAAMode v5; // eax

  pNode = this->pNode;
  if ( pNode && parentEdgeAA != EdgeAA_Disable )
  {
    v5 = *(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                               + 8i64
                               * (unsigned int)((__int64)((__int64)&pNode[-1]
                                                        - ((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64))
                                              / 56)
                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                  + 10) & 0xC;
    if ( v5 == EdgeAA_Inherit )
      v5 = parentEdgeAA;
    parentEdgeAA = v5;
  }
  if ( (this->Flags & 0xC) != parentEdgeAA )
  {
    this->Flags = parentEdgeAA | this->Flags & 0xFFF3;
    Scaleform::Render::TreeCacheShapeLayer::updateSortKey(this, hal);
  }
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::propagateMaskFlag(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        unsigned int partOfMask)
{
  if ( (partOfMask | this->Flags & 0xFFBF) != this->Flags )
  {
    this->Flags = partOfMask | this->Flags & 0xFFBF;
    Scaleform::Render::TreeCacheShapeLayer::updateSortKey(this, hal);
  }
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::propagateScale9Flag(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        unsigned int partOfScale9)
{
  Scaleform::Render::TreeNode *pNode; // rcx
  unsigned int v7; // ecx

  pNode = this->pNode;
  if ( pNode
    && Scaleform::Render::StateBag::GetState(
         (Scaleform::Render::StateBag *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                + 0x28)
                                                    + 8i64
                                                    * (unsigned int)((int)((_DWORD)pNode
                                                                         - ((unsigned int)pNode & 0xFFFFF000)
                                                                         - 56)
                                                                   / 56)
                                                    + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                       + 64),
         State_Scale9) )
  {
    partOfScale9 |= 0x80u;
  }
  v7 = partOfScale9 | this->Flags & 0xFF7F;
  if ( v7 != this->Flags )
  {
    this->Flags = v7;
    Scaleform::Render::TreeCacheShapeLayer::updateSortKey(this, hal);
  }
}

Scaleform::Render::TreeCacheNode *__fastcall Scaleform::Render::TreeShape::NodeData::updateCache(
        Scaleform::Render::TreeShape::NodeData *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *pparent,
        Scaleform::Render::TreeCacheNode *pinsert,
        Scaleform::Render::TreeNode *pnode,
        unsigned __int16 depth)
{
  Scaleform::Render::TreeShape *shapeNode; // rsi
  Scaleform::Render::TreeCacheNode *pRenderer; // rbx
  Scaleform::Render::ShapeMeshProvider *v12; // r13
  unsigned int v13; // er12
  int v14; // eax
  int v15; // edx
  int flags; // ebx
  Scaleform::Render::TreeCacheShape *v17; // rax
  Scaleform::Render::TreeCacheMeshBase *v18; // rax

  shapeNode = (Scaleform::Render::TreeShape *)pnode;
  pRenderer = pnode->pRenderer;
  if ( pRenderer )
    goto LABEL_17;
  v12 = *(Scaleform::Render::ShapeMeshProvider **)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pnode & 0xFFFFFFFFFFFFF000ui64)
                                                                          + 0x28)
                                                              + 8i64
                                                              * (unsigned int)((int)((_DWORD)pnode
                                                                                   - ((unsigned int)pnode & 0xFFFFF000)
                                                                                   - 56)
                                                                             / 56)
                                                              + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                 + 144);
  v13 = v12->GetLayerCount(&v12->Scaleform::Render::MeshProvider);
  if ( !pparent )
  {
    v14 = 4;
LABEL_6:
    v15 = this->Flags & 0xC;
    if ( !v15 )
      v15 = v14;
    goto LABEL_8;
  }
  v14 = pparent->Flags & 0xC;
  if ( v14 != 12 )
    goto LABEL_6;
  v15 = 12;
LABEL_8:
  flags = v15 | this->Flags & 0x221 | ((unsigned __int8)pparent->Flags | (unsigned __int8)(2 * (this->Flags & 0x20))) & 0xC0;
  if ( Scaleform::Render::StateBag::GetState(&this->States, State_Scale9) )
    flags |= 0x80u;
  if ( v13 == 1 )
  {
    v18 = Scaleform::Render::TreeCacheShapeLayer::Create(hal, pparent, v12, 0, flags, shapeNode, this->MorphRatio);
  }
  else
  {
    LODWORD(pnode) = 71;
    v17 = (Scaleform::Render::TreeCacheShape *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 pparent,
                                                 160i64,
                                                 &pnode);
    if ( !v17 )
      return 0i64;
    Scaleform::Render::TreeCacheShape::TreeCacheShape(v17, shapeNode, flags);
  }
  pRenderer = v18;
  if ( !v18 )
    return 0i64;
  shapeNode->pRenderer = v18;
LABEL_17:
  Scaleform::Render::TreeCacheNode::UpdateInsertIntoParent(pRenderer, hal, pparent, pinsert, this, depth);
  return pRenderer;
}

__int64 __fastcall Scaleform::Render::TreeCacheShapeLayer::updateMeshKey(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::ShapeMeshProvider *provider,
        float morphRatio,
        const Scaleform::Render::Matrix2x4<float> *viewMatrix,
        unsigned int meshGenFlags,
        unsigned int *meshKeyFlags)
{
  Scaleform::Render::ToleranceParams *ToleranceParams; // rax
  unsigned int Layer; // er15
  const Scaleform::Render::ToleranceParams *v11; // rdi
  int v12; // eax
  unsigned int v13; // edx
  int v14; // er14
  Scaleform::Render::MeshKeyManager *v15; // rax
  Scaleform::Render::MeshKey *v16; // rcx
  Scaleform::Render::MeshKeyManager *v17; // rbx
  Scaleform::Render::MeshKey *MatchingKey; // rax
  Scaleform::Render::MeshKey *v19; // rdi
  Scaleform::Render::Scale9GridData *v20; // rsi
  Scaleform::Render::ComplexMesh *v21; // r13
  Scaleform::Render::MeshProvider *pKeySet; // rbx
  Scaleform::Render::PrimitiveFillManager *v23; // rax
  Scaleform::Render::MeshBase *v24; // rax
  Scaleform::Render::MeshBase *v25; // rbx
  Scaleform::Render::Mesh *v26; // rax
  Scaleform::Render::MeshBase *v27; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int8 v29; // bl
  Scaleform::Render::Scale9GridData *v30; // rax
  Scaleform::Render::Scale9GridData *v31; // rax
  Scaleform::Render::MeshKey *v32; // rcx
  int v34; // [rsp+40h] [rbp-168h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-164h]
  int v36; // [rsp+48h] [rbp-160h] BYREF
  int v37; // [rsp+4Ch] [rbp-15Ch] BYREF
  Scaleform::Render::ShapeMeshProvider *pmeshProvider; // [rsp+50h] [rbp-158h]
  Scaleform::Render::Matrix2x4<float> *v39; // [rsp+58h] [rbp-150h]
  Scaleform::Render::Scale9GridData __that; // [rsp+60h] [rbp-148h] BYREF
  float keyData[20]; // [rsp+F0h] [rbp-B8h] BYREF

  v39 = (Scaleform::Render::Matrix2x4<float> *)viewMatrix;
  pmeshProvider = provider;
  v35 = meshGenFlags;
  ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
  Layer = this->Layer;
  v11 = ToleranceParams;
  __that.__vftable = (Scaleform::Render::Scale9GridData_vtbl *)&Scaleform::Render::Scale9GridData::`vftable';
  __that.RefCount = 1;
  v12 = Scaleform::Render::TreeCacheShapeLayer::calcMeshKey(
          this,
          pmeshProvider,
          viewMatrix,
          Layer,
          keyData,
          &__that,
          morphRatio);
  v13 = ((meshGenFlags & 1) << 6) | 0x80;
  if ( (meshGenFlags & 2) == 0 )
    v13 = (meshGenFlags & 1) << 6;
  v14 = v13 | v12;
  if ( meshKeyFlags )
    *meshKeyFlags = v14;
  v15 = hal->GetMeshKeyManager(hal);
  v16 = (Scaleform::Render::MeshKey *)*((_QWORD *)&this->M + 1);
  v17 = v15;
  if ( v16 )
  {
    if ( Scaleform::Render::MeshKey::Match(v16, Layer, v14, keyData, v11) )
    {
LABEL_21:
      v29 = 0;
      goto LABEL_30;
    }
    MatchingKey = Scaleform::Render::MeshKeyManager::CreateMatchingKey(
                    v17,
                    *(Scaleform::Render::MeshKeySet **)(*((_QWORD *)&this->M + 1) + 16i64),
                    Layer,
                    v14,
                    keyData,
                    v11);
  }
  else
  {
    MatchingKey = Scaleform::Render::MeshKeyManager::CreateMatchingKey(v15, pmeshProvider, Layer, v14, keyData, v11);
  }
  v19 = MatchingKey;
  if ( !MatchingKey )
    goto LABEL_21;
  if ( MatchingKey->pMesh.pObject )
    goto LABEL_27;
  if ( !this->ComplexShape )
  {
    v36 = 68;
    v26 = (Scaleform::Render::Mesh *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                       Scaleform::Memory::pGlobalHeap,
                                       this,
                                       224i64,
                                       &v36);
    v20 = 0i64;
    if ( v26 )
    {
      Scaleform::Render::Mesh::Mesh(v26, v19->pKeySet, v39, morphRatio, Layer, meshGenFlags);
      v25 = v27;
      goto LABEL_17;
    }
LABEL_16:
    v25 = 0i64;
    goto LABEL_17;
  }
  v34 = 68;
  v20 = 0i64;
  v21 = (Scaleform::Render::ComplexMesh *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                            Scaleform::Memory::pGlobalHeap,
                                            this,
                                            304i64,
                                            &v34);
  if ( !v21 )
    goto LABEL_16;
  pKeySet = v19->pKeySet;
  v23 = hal->GetPrimitiveFillManager(hal);
  Scaleform::Render::ComplexMesh::ComplexMesh(v21, pKeySet, v23, v39, morphRatio, Layer, v35);
  v25 = v24;
LABEL_17:
  pObject = (Scaleform::RefCountVImpl *)v19->pMesh.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v19->pMesh.pObject = v25;
  if ( !v25 )
  {
    Scaleform::Render::MeshKey::Release(v19);
    goto LABEL_21;
  }
  if ( (v14 & 0x10) != 0 )
  {
    v37 = 2;
    v30 = (Scaleform::Render::Scale9GridData *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 144i64,
                                                 &v37);
    if ( v30 )
    {
      Scaleform::Render::Scale9GridData::Scale9GridData(v30, &__that);
      v20 = v31;
    }
    Scaleform::Render::MeshBase::SetScale9Grid(v19->pMesh.pObject, v20);
    if ( v20 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v20);
  }
LABEL_27:
  v32 = (Scaleform::Render::MeshKey *)*((_QWORD *)&this->M + 1);
  if ( v32 )
    Scaleform::Render::MeshKey::Release(v32);
  *((_QWORD *)&this->M + 1) = v19;
  v29 = 1;
LABEL_30:
  Scaleform::RefCountImplCore::~RefCountImplCore(&__that);
  return v29;
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::updateSortKey(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v5; // rbx
  Scaleform::Render::Bundle *v6; // rcx
  Scaleform::Render::TreeNode *pNode; // r9
  Scaleform::Render::TreeNode *v8; // rcx
  Scaleform::Render::SortKey *v9; // rbx
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  void *Data; // rdx
  Scaleform::Render::MeshKey *v12; // rcx
  Scaleform::Render::TreeCacheRoot *pRoot; // rcx
  Scaleform::Render::TreeCacheNode *pParent; // rdx
  Scaleform::Render::SortKey result; // [rsp+40h] [rbp-18h] BYREF

  if ( this->SorterShapeNode.pBundle.pObject )
  {
    pObject = this->SorterShapeNode.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v5 = this->SorterShapeNode.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v5, &this->SorterShapeNode);
    if ( v5 )
      Scaleform::RefCountNTSImpl::Release(v5);
  }
  v6 = this->SorterShapeNode.pBundle.pObject;
  if ( v6 )
    Scaleform::RefCountNTSImpl::Release(v6);
  this->SorterShapeNode.pBundle.pObject = 0i64;
  this->SorterShapeNode.IndexHint = 0;
  pNode = this->pNode;
  if ( pNode )
    v8 = this->pNode;
  else
    v8 = this->pParent->pNode;
  if ( !pNode )
    pNode = this->pParent->pNode;
  v9 = Scaleform::Render::TreeCacheShapeLayer::CreateSortKey(
         &result,
         hal,
         this,
         *(Scaleform::Render::ShapeMeshProvider **)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                           + 0x28)
                                                               + 8i64
                                                               * (unsigned int)((int)((_DWORD)pNode
                                                                                    - ((unsigned int)pNode & 0xFFFFF000)
                                                                                    - 56)
                                                                              / 56)
                                                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                                  + 144),
         this->Layer,
         this->Flags,
         &this->pGradient,
         *(float *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                               + 8i64 * (unsigned int)((int)((_DWORD)v8 - ((unsigned int)v8 & 0xFFFFF000) - 56) / 56)
                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                  + 152));
  v9->pImpl->AddRef(v9->pImpl, v9->Data);
  this->SorterShapeNode.Key.pImpl->Release(this->SorterShapeNode.Key.pImpl, this->SorterShapeNode.Key.Data);
  pImpl = result.pImpl;
  Data = result.Data;
  this->SorterShapeNode.Key = *v9;
  pImpl->Release(pImpl, Data);
  this->ComplexShape = this->SorterShapeNode.Key.pImpl->Type == SortKey_MeshProvider;
  v12 = (Scaleform::Render::MeshKey *)*((_QWORD *)&this->M + 1);
  if ( v12 )
    Scaleform::Render::MeshKey::Release(v12);
  *((_QWORD *)&this->M + 1) = 0i64;
  pRoot = this->pRoot;
  if ( pRoot )
  {
    pParent = this->pParent;
    if ( pParent )
      Scaleform::Render::TreeCacheRoot::AddToDepthUpdate(pRoot, pParent, 0x1000001u);
  }
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::updateSortKeyGradientMorph(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal)
{
  Scaleform::Render::TreeNode *pNode; // r9

  pNode = this->pNode;
  if ( !pNode )
    pNode = this->pParent->pNode;
  if ( *(_BYTE *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                         + 8i64
                                         * (unsigned int)((int)((_DWORD)pNode - ((unsigned int)pNode & 0xFFFFF000) - 56)
                                                        / 56)
                                         + 40) & 0xFFFFFFFFFFFFFFFEui64)
                            + 144)
                + 128i64) )
    Scaleform::Render::TreeCacheShapeLayer::updateSortKey(this, hal);
}

void __fastcall Scaleform::Render::TreeCacheShapeLayer::updateTexture0Matrix(
        Scaleform::Render::TreeCacheShapeLayer *this,
        Scaleform::Render::HAL *hal)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::ShapeMeshProvider *MeshProvider; // rax
  Scaleform::Render::MeshProvider_vtbl *v6; // rdi
  Scaleform::Render::MeshProvider *v7; // rbx
  unsigned int v8; // eax
  Scaleform::Render::Matrix2x4<float> m; // [rsp+40h] [rbp-48h] BYREF

  if ( !this->ComplexShape )
  {
    pObject = this->SorterShapeNode.pBundle.pObject;
    if ( pObject )
    {
      if ( *(_QWORD *)(pObject[1].Entries.Data.Policy.Capacity + 32) )
      {
        *(_OWORD *)&m.M[0][0] = _xmm;
        *(_OWORD *)&m.M[1][0] = _xmm;
        MeshProvider = Scaleform::Render::TreeCacheShapeLayer::GetMeshProvider(this);
        v6 = MeshProvider->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable;
        v7 = &MeshProvider->Scaleform::Render::MeshProvider;
        v8 = Scaleform::Render::TreeCacheShapeLayer::calcMeshGenFlags(this);
        v6->GetFillMatrix(
          v7,
          hal,
          *(Scaleform::Render::MeshBase **)(*((_QWORD *)&this->M + 1) + 24i64),
          &m,
          this->Layer,
          0,
          v8);
        Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(&this->M, &m, 0);
      }
    }
  }
}

