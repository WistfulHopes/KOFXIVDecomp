#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"

void Scaleform::Render::TreeNode::NodeData::ReleaseNodes(); // 0x140315920
bool Scaleform::Render::TreeNode::NodeData::expandByFilterBounds(Scaleform::Render::Rect<float> * bounds, bool boundsEmpty); // 0x140316880
void Scaleform::Render::TreeNode::NodeData::expandByFilterBounds(const Scaleform::Render::Filter * filter, Scaleform::Render::Rect<float> * bounds); // 0x140316C00
void Scaleform::Render::TreeNode::NodeData::updateOriginalBoundState(const Scaleform::Render::Rect<float> & bounds); // 0x140317020
class Scaleform::Ptr<Scaleform::Render::RectRef<float> >
{
protected:
	Scaleform::Render::RectRef<float> * pObject; // 0x0
public:
	Ptr<Scaleform::Render::RectRef<float> >(const Scaleform::Ptr<Scaleform::Render::RectRef<float> > &);
	Ptr<Scaleform::Render::RectRef<float> >(Scaleform::Render::RectRef<float> *);
	Ptr<Scaleform::Render::RectRef<float> >(Scaleform::Ptr<Scaleform::Render::RectRef<float> > &, Scaleform::PickType);
	Ptr<Scaleform::Render::RectRef<float> >(Scaleform::Pickable<Scaleform::Render::RectRef<float> >);
	Ptr<Scaleform::Render::RectRef<float> >(Scaleform::Render::RectRef<float> &);
	Ptr<Scaleform::Render::RectRef<float> >();
	~Ptr<Scaleform::Render::RectRef<float> >();
	bool operator==(Scaleform::Render::RectRef<float> *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::RectRef<float> > &);
	bool operator!=(Scaleform::Render::RectRef<float> *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::RectRef<float> > &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::RectRef<float> > &);
	Scaleform::Ptr<Scaleform::Render::RectRef<float> > & operator=(Scaleform::Pickable<Scaleform::Render::RectRef<float> >);
	const Scaleform::Ptr<Scaleform::Render::RectRef<float> > & operator=(Scaleform::Render::RectRef<float> &);
	const Scaleform::Ptr<Scaleform::Render::RectRef<float> > & operator=(Scaleform::Render::RectRef<float> *);
	const Scaleform::Ptr<Scaleform::Render::RectRef<float> > & operator=(const Scaleform::Ptr<Scaleform::Render::RectRef<float> > &);
	Scaleform::Ptr<Scaleform::Render::RectRef<float> > & SetPtr(Scaleform::Pickable<Scaleform::Render::RectRef<float> >);
	Scaleform::Ptr<Scaleform::Render::RectRef<float> > & SetPtr(Scaleform::Render::RectRef<float> &);
	Scaleform::Ptr<Scaleform::Render::RectRef<float> > & SetPtr(Scaleform::Render::RectRef<float> *);
	Scaleform::Ptr<Scaleform::Render::RectRef<float> > & SetPtr(const Scaleform::Ptr<Scaleform::Render::RectRef<float> > &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::RectRef<float> * & GetRawRef();
	Scaleform::Render::RectRef<float> * GetPtr();
	Scaleform::Render::RectRef<float> & operator*();
	Scaleform::Render::RectRef<float> * operator->();
	Scaleform::Render::RectRef<float> * operator class Scaleform::Render::RectRef<float> *();
	Scaleform::Ptr<Scaleform::Render::RectRef<float> > & Pick(Scaleform::Render::RectRef<float> *);
	Scaleform::Ptr<Scaleform::Render::RectRef<float> > & Pick(Scaleform::Pickable<Scaleform::Render::RectRef<float> >);
	Scaleform::Ptr<Scaleform::Render::RectRef<float> > & Pick(Scaleform::Ptr<Scaleform::Render::RectRef<float> > &);
};
const Scaleform::Render::Matrix2x4<float> & Scaleform::Render::TreeNode::NodeData::M2D(); // 0x1403154A0
void Scaleform::Render::TreeNode::NodeData::CopyGeomData(Scaleform::Render::TreeNode * destNode, const Scaleform::Render::TreeNode & srcNode); // 0x140314BE0
Scaleform::Render::TreeNode * Scaleform::Render::TreeNode::NodeData::CloneCreate(Scaleform::Render::ContextImpl::Context * __formal); // 0x1400470F0
bool Scaleform::Render::TreeNode::NodeData::CloneInit(Scaleform::Render::TreeNode * node, Scaleform::Render::ContextImpl::Context * context); // 0x140314A80
class Scaleform::Ptr<Scaleform::Render::TreeNode>
{
protected:
	Scaleform::Render::TreeNode * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeNode>(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode *);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Ptr<Scaleform::Render::TreeNode> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode &);
	Ptr<Scaleform::Render::TreeNode>();
	~Ptr<Scaleform::Render::TreeNode>();
	bool operator==(Scaleform::Render::TreeNode *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	bool operator!=(Scaleform::Render::TreeNode *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Render::TreeNode &);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Render::TreeNode *);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Render::TreeNode &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Render::TreeNode *);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeNode * & GetRawRef();
	Scaleform::Render::TreeNode * GetPtr();
	Scaleform::Render::TreeNode & operator*();
	Scaleform::Render::TreeNode * operator->();
	Scaleform::Render::TreeNode * operator class Scaleform::Render::TreeNode *();
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Render::TreeNode *);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Ptr<Scaleform::Render::TreeNode> &);
};
typedef Scaleform::Render::RectRef<float> Scaleform::Render::RectFRef;
Scaleform::Render::Matrix3x4<float> Scaleform::Render::Matrix3x4<float>::Identity; // 0x140A72140
void(*Scaleform::Render::Matrix3x4<float>::dentity$initializer$::operator&)(); // 0x140739C90
Scaleform::Render::TreeNode * Scaleform::Render::TreeNode::Clone(Scaleform::Render::ContextImpl::Context * context); // 0x140314840
void Scaleform::Render::TreeNode::Clear3D(); // 0x140314750
void Scaleform::Render::TreeNode::SetMatrix(const Scaleform::Render::Matrix2x4<float> & m); // 0x140316070
void Scaleform::Render::TreeNode::SetMatrix3D(const Scaleform::Render::Matrix3x4<float> & m); // 0x140315F20
void Scaleform::Render::TreeNode::SetVisible(bool visible); // 0x1403167A0
void Scaleform::Render::TreeNode::SetEdgeAAMode(Scaleform::Render::EdgeAAMode edgeAA); // 0x140315CB0
const Scaleform::Render::State * Scaleform::Render::TreeNode::GetState(Scaleform::Render::StateType state); // 0x140315170
void Scaleform::Render::TreeNode::SetScale9Grid(const Scaleform::Render::Rect<float> & rect); // 0x1403164C0
class Scaleform::Ptr<Scaleform::Render::Scale9GridRect>
{
protected:
	Scaleform::Render::Scale9GridRect * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Scale9GridRect>(const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> &);
	Ptr<Scaleform::Render::Scale9GridRect>(Scaleform::Render::Scale9GridRect *);
	Ptr<Scaleform::Render::Scale9GridRect>(Scaleform::Ptr<Scaleform::Render::Scale9GridRect> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Scale9GridRect>(Scaleform::Pickable<Scaleform::Render::Scale9GridRect>);
	Ptr<Scaleform::Render::Scale9GridRect>(Scaleform::Render::Scale9GridRect &);
	Ptr<Scaleform::Render::Scale9GridRect>();
	~Ptr<Scaleform::Render::Scale9GridRect>();
	bool operator==(Scaleform::Render::Scale9GridRect *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> &);
	bool operator!=(Scaleform::Render::Scale9GridRect *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & operator=(Scaleform::Pickable<Scaleform::Render::Scale9GridRect>);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & operator=(Scaleform::Render::Scale9GridRect &);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & operator=(Scaleform::Render::Scale9GridRect *);
	const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & operator=(const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & SetPtr(Scaleform::Pickable<Scaleform::Render::Scale9GridRect>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & SetPtr(Scaleform::Render::Scale9GridRect &);
	Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & SetPtr(Scaleform::Render::Scale9GridRect *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Scale9GridRect> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Scale9GridRect * & GetRawRef();
	Scaleform::Render::Scale9GridRect * GetPtr();
	Scaleform::Render::Scale9GridRect & operator*();
	Scaleform::Render::Scale9GridRect * operator->();
	Scaleform::Render::Scale9GridRect * operator struct Scaleform::Render::Scale9GridRect *();
	Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & Pick(Scaleform::Render::Scale9GridRect *);
	Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & Pick(Scaleform::Pickable<Scaleform::Render::Scale9GridRect>);
	Scaleform::Ptr<Scaleform::Render::Scale9GridRect> & Pick(Scaleform::Ptr<Scaleform::Render::Scale9GridRect> &);
};
void Scaleform::Render::TreeNode::SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> & mat3D); // 0x1403165C0
class Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> >
{
protected:
	Scaleform::Render::Matrix3x4Ref<float> * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Matrix3x4Ref<float> >(const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > &);
	Ptr<Scaleform::Render::Matrix3x4Ref<float> >(Scaleform::Render::Matrix3x4Ref<float> *);
	Ptr<Scaleform::Render::Matrix3x4Ref<float> >(Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > &, Scaleform::PickType);
	Ptr<Scaleform::Render::Matrix3x4Ref<float> >(Scaleform::Pickable<Scaleform::Render::Matrix3x4Ref<float> >);
	Ptr<Scaleform::Render::Matrix3x4Ref<float> >(Scaleform::Render::Matrix3x4Ref<float> &);
	Ptr<Scaleform::Render::Matrix3x4Ref<float> >();
	~Ptr<Scaleform::Render::Matrix3x4Ref<float> >();
	bool operator==(Scaleform::Render::Matrix3x4Ref<float> *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > &);
	bool operator!=(Scaleform::Render::Matrix3x4Ref<float> *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > &);
	Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & operator=(Scaleform::Pickable<Scaleform::Render::Matrix3x4Ref<float> >);
	const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & operator=(Scaleform::Render::Matrix3x4Ref<float> &);
	const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & operator=(Scaleform::Render::Matrix3x4Ref<float> *);
	const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & operator=(const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > &);
	Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & SetPtr(Scaleform::Pickable<Scaleform::Render::Matrix3x4Ref<float> >);
	Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & SetPtr(Scaleform::Render::Matrix3x4Ref<float> &);
	Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & SetPtr(Scaleform::Render::Matrix3x4Ref<float> *);
	Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & SetPtr(const Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Matrix3x4Ref<float> * & GetRawRef();
	Scaleform::Render::Matrix3x4Ref<float> * GetPtr();
	Scaleform::Render::Matrix3x4Ref<float> & operator*();
	Scaleform::Render::Matrix3x4Ref<float> * operator->();
	Scaleform::Render::Matrix3x4Ref<float> * operator class Scaleform::Render::Matrix3x4Ref<float> *();
	Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & Pick(Scaleform::Render::Matrix3x4Ref<float> *);
	Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & Pick(Scaleform::Pickable<Scaleform::Render::Matrix3x4Ref<float> >);
	Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > & Pick(Scaleform::Ptr<Scaleform::Render::Matrix3x4Ref<float> > &);
};
void Scaleform::Render::TreeNode::ClearViewMatrix3D(); // 0x140314810
void Scaleform::Render::TreeNode::SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> & mat3D); // 0x140316160
class Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> >
{
protected:
	Scaleform::Render::Matrix4x4Ref<float> * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Matrix4x4Ref<float> >(const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > &);
	Ptr<Scaleform::Render::Matrix4x4Ref<float> >(Scaleform::Render::Matrix4x4Ref<float> *);
	Ptr<Scaleform::Render::Matrix4x4Ref<float> >(Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > &, Scaleform::PickType);
	Ptr<Scaleform::Render::Matrix4x4Ref<float> >(Scaleform::Pickable<Scaleform::Render::Matrix4x4Ref<float> >);
	Ptr<Scaleform::Render::Matrix4x4Ref<float> >(Scaleform::Render::Matrix4x4Ref<float> &);
	Ptr<Scaleform::Render::Matrix4x4Ref<float> >();
	~Ptr<Scaleform::Render::Matrix4x4Ref<float> >();
	bool operator==(Scaleform::Render::Matrix4x4Ref<float> *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > &);
	bool operator!=(Scaleform::Render::Matrix4x4Ref<float> *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > &);
	Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & operator=(Scaleform::Pickable<Scaleform::Render::Matrix4x4Ref<float> >);
	const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & operator=(Scaleform::Render::Matrix4x4Ref<float> &);
	const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & operator=(Scaleform::Render::Matrix4x4Ref<float> *);
	const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & operator=(const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > &);
	Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & SetPtr(Scaleform::Pickable<Scaleform::Render::Matrix4x4Ref<float> >);
	Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & SetPtr(Scaleform::Render::Matrix4x4Ref<float> &);
	Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & SetPtr(Scaleform::Render::Matrix4x4Ref<float> *);
	Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & SetPtr(const Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Matrix4x4Ref<float> * & GetRawRef();
	Scaleform::Render::Matrix4x4Ref<float> * GetPtr();
	Scaleform::Render::Matrix4x4Ref<float> & operator*();
	Scaleform::Render::Matrix4x4Ref<float> * operator->();
	Scaleform::Render::Matrix4x4Ref<float> * operator class Scaleform::Render::Matrix4x4Ref<float> *();
	Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & Pick(Scaleform::Render::Matrix4x4Ref<float> *);
	Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & Pick(Scaleform::Pickable<Scaleform::Render::Matrix4x4Ref<float> >);
	Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > & Pick(Scaleform::Ptr<Scaleform::Render::Matrix4x4Ref<float> > &);
};
void Scaleform::Render::TreeNode::ClearProjectionMatrix3D(); // 0x1403147E0
void Scaleform::Render::TreeNode::SetBlendMode(Scaleform::Render::BlendMode mode); // 0x140315C50
void Scaleform::Render::TreeNode::SetMaskNode(Scaleform::Render::TreeNode * node); // 0x140315E20
void Scaleform::Render::TreeNode::SetFilters(const Scaleform::Render::FilterSet * filters); // 0x140315D20
void Scaleform::Render::TreeNode::SetOrigScale9Parent(Scaleform::Render::TreeNode * origParent); // 0x1403160E0
void Scaleform::Render::TreeNode::CopyGeomData(const Scaleform::Render::TreeNode & src); // 0x140314E70
void Scaleform::Render::TreeNode::SetRendererString(const char * str); // 0x140316390
const char * Scaleform::Render::TreeNode::GetRendererString(); // 0x140315050
void Scaleform::Render::TreeNode::SetRendererFloat(float f); // 0x140316260
float Scaleform::Render::TreeNode::GetRendererFloat(); // 0x140314FE0
void Scaleform::Render::TreeNode::DisableBatching(bool b); // 0x140314EB0
bool Scaleform::Render::TreeNode::IsBatchingDisabled(); // 0x140315440
Scaleform::Render::TreeNodeArray::ArrayData * Scaleform::Render::TreeNodeArray::allocByCapacity(unsigned long long capacity, unsigned long long size); // 0x140316840
Scaleform::Render::TreeNodeArray::TreeNodeArray(const Scaleform::Render::TreeNodeArray & src); // 0x140314460
void Scaleform::Render::TreeNodeArray::operator=(const Scaleform::Render::TreeNodeArray & src); // 0x1403144A0
bool Scaleform::Render::TreeNodeArray::Insert(unsigned long long index, Scaleform::Render::TreeNode * node); // 0x140315230
bool Scaleform::Render::TreeNodeArray::Remove(unsigned long long index, unsigned long long count); // 0x140315A70
bool Scaleform::Render::TreeContainer::Insert(unsigned long long index, Scaleform::Render::TreeNode * pnode); // 0x1403151C0
void Scaleform::Render::TreeContainer::Remove(unsigned long long index, unsigned long long count); // 0x1403159A0
void Scaleform::Render::TreeContainer::NodeData::ReleaseNodes(); // 0x140315860
bool Scaleform::Render::TreeContainer::NodeData::PropagateUp(Scaleform::Render::ContextImpl::Entry * entry); // 0x1403154B0
Scaleform::Render::TreeCacheNode * Scaleform::Render::TreeContainer::NodeData::updateCache(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * pparent, Scaleform::Render::TreeCacheNode * pinsert, Scaleform::Render::TreeNode * pnode, unsigned short depth); // 0x140316EB0
Scaleform::Render::TreeNode * Scaleform::Render::TreeContainer::NodeData::CloneCreate(Scaleform::Render::ContextImpl::Context * context); // 0x1403148C0
bool Scaleform::Render::TreeContainer::NodeData::CloneInit(Scaleform::Render::TreeNode * node, Scaleform::Render::ContextImpl::Context * context); // 0x140314930
void Scaleform::Render::TreeRoot::SetViewport(const Scaleform::Render::Viewport & vp); // 0x1403166B0//decompilation failure at 140A72140!
//decompilation failure at 140739C90!
void __fastcall Scaleform::Render::TreeNodeArray::TreeNodeArray(
        Scaleform::Render::TreeNodeArray *this,
        const Scaleform::Render::TreeNodeArray *src)
{
  *this = *src;
  if ( ((__int64)src->pNodes[0] & 1) != 0 )
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)(src->pData[0] & 0xFFFFFFFFFFFFFFFEui64), 1);
    this->pData[1] = 0i64;
  }
}

void __fastcall Scaleform::Render::TreeNodeArray::operator=(
        Scaleform::Render::TreeNodeArray *this,
        const Scaleform::Render::TreeNodeArray *src)
{
  unsigned __int64 v3; // rdi
  Scaleform::Render::TreeNode *v5; // rbp
  void *v6; // rdi
  unsigned __int64 v7; // rax

  v3 = this->pData[0];
  v5 = src->pNodes[1];
  if ( ((__int64)src->pNodes[0] & 1) != 0 )
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)(src->pData[0] & 0xFFFFFFFFFFFFFFFEui64), 1);
    v5 = 0i64;
  }
  if ( (v3 & 1) != 0 )
  {
    v6 = (void *)(v3 & 0xFFFFFFFFFFFFFFFEui64);
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)v6, -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
  }
  v7 = src->pData[0];
  this->pData[1] = (unsigned __int64)v5;
  this->pData[0] = v7;
}

void __fastcall Scaleform::Render::TreeNode::Clear3D(Scaleform::Render::TreeNode *this)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(
                   this,
                   (((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                           + 8i64
                                           * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56)
                                                          / 56)
                                           + 40)
                               + 10i64) >> 9) & 1) << 13) | 1u);
  WritableData[1] = *(Scaleform::Render::ContextImpl::EntryData *)&Scaleform::Render::Matrix3x4<float>::Identity.M[0][0];
  WritableData[2] = *(Scaleform::Render::ContextImpl::EntryData *)&Scaleform::Render::Matrix3x4<float>::Identity.M[1][0];
  WritableData[3] = *(Scaleform::Render::ContextImpl::EntryData *)&Scaleform::Render::Matrix3x4<float>::Identity.M[2][0];
  WritableData->Flags &= ~0x200u;
}

void __fastcall Scaleform::Render::TreeNode::ClearProjectionMatrix3D(Scaleform::Render::TreeNode *this)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rbx

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x100000u);
  Scaleform::Render::StateBag::RemoveState((Scaleform::Render::StateBag *)&WritableData[4], State_ProjectionMatrix3D);
  WritableData->Flags &= ~0x1000u;
}

void __fastcall Scaleform::Render::TreeNode::ClearViewMatrix3D(Scaleform::Render::TreeNode *this)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rbx

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x80000u);
  Scaleform::Render::StateBag::RemoveState((Scaleform::Render::StateBag *)&WritableData[4], State_ViewMatrix3D);
  WritableData->Flags &= ~0x800u;
}

Scaleform::Render::TreeNode *__fastcall Scaleform::Render::TreeNode::Clone(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::ContextImpl::Context *context)
{
  __int64 v3; // rdi
  Scaleform::Render::TreeNode *result; // rax
  Scaleform::Render::TreeNode *v5; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  result = (Scaleform::Render::TreeNode *)(*(__int64 (__fastcall **)(__int64, Scaleform::Render::ContextImpl::Context *))(*(_QWORD *)v3 + 64i64))(
                                            v3,
                                            context);
  v5 = result;
  if ( result )
  {
    (*(void (__fastcall **)(__int64, Scaleform::Render::TreeNode *, Scaleform::Render::ContextImpl::Context *))(*(_QWORD *)v3 + 72i64))(
      v3,
      result,
      context);
    return v5;
  }
  return result;
}

Scaleform::Render::ContextImpl::Entry *__fastcall Scaleform::Render::TreeContainer::NodeData::CloneCreate(
        Scaleform::Render::TreeContainer::NodeData *this,
        Scaleform::Render::ContextImpl::Context *context)
{
  Scaleform::Render::TreeNode::NodeData *v4; // rax
  Scaleform::Render::TreeNode::NodeData *v5; // rbx

  v4 = (Scaleform::Render::TreeNode::NodeData *)context->pHeap->Alloc(context->pHeap, 160i64, 0i64);
  v5 = v4;
  if ( v4 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(
      v4,
      (Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeNode::NodeData>)this);
    v5->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeContainer::NodeData::`vftable';
    *(_QWORD *)&v5[1].Type = 0i64;
    v5[1].__vftable = 0i64;
  }
  return Scaleform::Render::ContextImpl::Context::createEntryHelper(context, v5);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

bool __fastcall Scaleform::Render::TreeContainer::NodeData::CloneInit(
        Scaleform::Render::TreeContainer::NodeData *this,
        Scaleform::Render::TreeNode *node,
        Scaleform::Render::ContextImpl::Context *context)
{
  bool result; // al
  Scaleform::Render::TreeNodeArray *p_Children; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  Scaleform::Render::TreeNode *v13; // rbx

  result = Scaleform::Render::TreeNode::NodeData::CloneInit(this, node, context);
  if ( result )
  {
    p_Children = &this->Children;
    v8 = p_Children->pData[0];
    if ( p_Children->pData[0] )
    {
      v9 = 0i64;
      v10 = (v8 & 1) != 0 ? *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFFEui64) + 8) : (p_Children->pData[1] != 0) + 1i64;
      if ( v10 )
      {
        do
        {
          if ( ((__int64)p_Children->pNodes[0] & 1) != 0 )
            v11 = (p_Children->pData[0] & 0xFFFFFFFFFFFFFFFEui64) + 16;
          else
            v11 = (unsigned __int64)p_Children;
          v12 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v11 + 8 * v9) & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                          + 8i64
                          * (unsigned int)((int)(*(_QWORD *)(v11 + 8 * v9)
                                               - (*(_QWORD *)(v11 + 8 * v9) & 0xFFFFF000)
                                               - 56)
                                         / 56)
                          + 40);
          v13 = (Scaleform::Render::TreeNode *)(*(__int64 (__fastcall **)(__int64, Scaleform::Render::ContextImpl::Context *))(*(_QWORD *)v12 + 64i64))(
                                                 v12,
                                                 context);
          if ( v13 )
            (*(void (__fastcall **)(__int64, Scaleform::Render::TreeNode *, Scaleform::Render::ContextImpl::Context *))(*(_QWORD *)v12 + 72i64))(
              v12,
              v13,
              context);
          Scaleform::Render::TreeContainer::Add((Scaleform::Render::TreeContainer *)node, v13);
          if ( v13 )
          {
            if ( v13->RefCount-- == 1 )
              Scaleform::Render::ContextImpl::Entry::destroyHelper(v13);
          }
          ++v9;
        }
        while ( v9 < v10 );
      }
    }
    return 1;
  }
  return result;
}

char __fastcall Scaleform::Render::TreeNode::NodeData::CloneInit(
        Scaleform::Render::TreeNode::NodeData *this,
        Scaleform::Render::TreeNode *node,
        Scaleform::Render::ContextImpl::Context *context)
{
  Scaleform::Render::StateBag *WritableData; // rbp
  char v7; // si
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  Scaleform::Render::StateBag *v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // ecx
  Scaleform::Render::StateBag *State; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  Scaleform::Render::TreeNode *v16; // rbx

  WritableData = (Scaleform::Render::StateBag *)Scaleform::Render::ContextImpl::Entry::getWritableData(node, 0xFF0000u);
  if ( ((__int64)this->States.pInterface & 1) != 0 )
  {
    v7 = 0;
    v8 = 1i64;
    v9 = 0i64;
  }
  else
  {
    v7 = 0;
    v8 = this->States.ArraySize >> 1;
    v9 = 0i64;
    if ( !v8 )
      return 1;
  }
  do
  {
    v10 = Scaleform::Render::StateBag::GetAt(&this->States, v9);
    v11 = v10->ArraySize & 0xFFFFFFFFFFFFFFFEui64;
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 8);
    else
      v12 = 0;
    if ( v12 == 4 )
    {
      v7 = 1;
    }
    else if ( v12 != 9 )
    {
      Scaleform::Render::StateBag::SetStateVoid(
        WritableData + 4,
        (Scaleform::Render::StateData::Interface *)v11,
        v10->pData);
    }
    ++v9;
  }
  while ( v9 < v8 );
  if ( v7 )
  {
    State = Scaleform::Render::StateBag::GetState(&this->States, State_MaskNode);
    v14 = *(_QWORD *)(*(_QWORD *)((State->DataValue & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                    + 8i64 * (unsigned int)((int)(State->DataValue - (State->DataValue & 0xFFFFF000) - 56) / 56)
                    + 40);
    v15 = (*(__int64 (__fastcall **)(__int64, Scaleform::Render::ContextImpl::Context *))(*(_QWORD *)v14 + 64i64))(
            v14,
            context);
    v16 = (Scaleform::Render::TreeNode *)v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::ContextImpl::Context *))(*(_QWORD *)v14 + 72i64))(
        v14,
        v15,
        context);
    Scaleform::Render::TreeNode::SetMaskNode(node, v16);
    if ( v16 )
    {
      if ( v16->RefCount-- == 1 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v16);
    }
  }
  return 1;
}

void __fastcall Scaleform::Render::TreeNode::NodeData::CopyGeomData(
        Scaleform::Render::TreeNode::NodeData *this,
        Scaleform::Render::TreeNode *destNode,
        const Scaleform::Render::TreeNode *srcNode)
{
  unsigned __int64 v5; // r15
  char *v6; // r10
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rdi
  Scaleform::Render::ContextImpl::Entry *pParent; // rcx
  Scaleform::Render::StateBag *State; // rax
  _OWORD *pData; // rax
  __int128 v14; // xmm3
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  Scaleform::Render::StateBag *v17; // rax
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  Scaleform::Render::StateBag *v21; // rax
  int v22; // ebx
  Scaleform::Render::StateBag *v23; // rcx
  Scaleform::Render::Rect<float> result; // [rsp+20h] [rbp-68h] BYREF
  Scaleform::Render::Matrix4x4<float> mat3D; // [rsp+30h] [rbp-58h] BYREF

  if ( destNode != srcNode )
  {
    v5 = (unsigned __int64)srcNode & 0xFFFFFFFFFFFFF000ui64;
    v6 = (char *)srcNode - ((unsigned __int64)srcNode & 0xFFFFFFFFFFFFF000ui64);
    v8 = *(_QWORD *)(((unsigned __int64)srcNode & 0xFFFFFFFFFFFFF000ui64) + 0x20);
    v9 = (__int64)(v6 - 56) / 56;
    v10 = *(_QWORD *)(v8 + 8i64 * (unsigned int)v9 + 40);
    if ( ((LOBYTE(this->Flags) ^ *(_BYTE *)(*(_QWORD *)(v8 + 8i64 * (unsigned int)(((int)v6 - 56) / 56) + 40) + 10i64)) & 1) != 0 )
    {
      Scaleform::Render::TreeNode::SetVisible(
        destNode,
        *(_BYTE *)(*(_QWORD *)(v8 + 8i64 * (unsigned int)v9 + 40) + 10i64) & 1);
      pParent = destNode->pParent;
      if ( pParent )
      {
        if ( !pParent->PNode.pPrev )
          Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(pParent);
      }
    }
    if ( (*(_WORD *)(v10 + 10) & 0x200) != 0 )
    {
      *(_OWORD *)&this->M34.M[0][0] = *(_OWORD *)(v10 + 16);
      *(_OWORD *)&this->M34.M[1][0] = *(_OWORD *)(v10 + 32);
      *(_OWORD *)&this->M34.M[2][0] = *(_OWORD *)(v10 + 48);
      this->Flags |= 0x200u;
      State = Scaleform::Render::StateBag::GetState(
                (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8i64 * (unsigned int)v9 + 40) + 64i64),
                State_ProjectionMatrix3D);
      if ( State )
      {
        pData = State->pData;
        v14 = pData[2];
        v15 = pData[3];
        v16 = pData[4];
        *(_OWORD *)&mat3D.M[0][0] = pData[1];
        *(_OWORD *)&mat3D.M[1][0] = v14;
        *(_OWORD *)&mat3D.M[2][0] = v15;
        *(_OWORD *)&mat3D.M[3][0] = v16;
        Scaleform::Render::TreeNode::SetProjectionMatrix3D(destNode, &mat3D);
      }
      v17 = Scaleform::Render::StateBag::GetState(
              (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8i64 * (unsigned int)v9 + 40) + 64i64),
              State_ViewMatrix3D);
      if ( v17 )
      {
        v18 = v17->pData;
        v19 = v18[2];
        v20 = v18[3];
        *(_OWORD *)&mat3D.M[0][0] = v18[1];
        *(_OWORD *)&mat3D.M[1][0] = v19;
        *(_OWORD *)&mat3D.M[2][0] = v20;
        Scaleform::Render::TreeNode::SetViewMatrix3D(destNode, (const Scaleform::Render::Matrix3x4<float> *)&mat3D);
      }
    }
    else
    {
      this->M34.M[0][0] = *(float *)(v10 + 16);
      this->M34.M[0][1] = *(float *)(v10 + 20);
      this->M34.M[0][2] = *(float *)(v10 + 24);
      this->M34.M[0][3] = *(float *)(v10 + 28);
      this->M34.M[1][0] = *(float *)(v10 + 32);
      this->M34.M[1][1] = *(float *)(v10 + 36);
      this->M34.M[1][2] = *(float *)(v10 + 40);
      this->M34.M[1][3] = *(float *)(v10 + 44);
    }
    *(_OWORD *)&this->Cx.M[0][0] = *(_OWORD *)(v10 + 80);
    *(_OWORD *)&this->Cx.M[1][0] = *(_OWORD *)(v10 + 96);
    v21 = Scaleform::Render::StateBag::GetState(
            (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8i64 * (unsigned int)v9 + 40) + 64i64),
            State_BlendMode);
    if ( v21 )
      v22 = (int)v21->pData;
    else
      v22 = 0;
    v23 = (Scaleform::Render::StateBag *)&Scaleform::Render::ContextImpl::Entry::getWritableData(destNode, 0x20000u)[4];
    if ( v22 )
      Scaleform::Render::StateBag::SetStateVoid(v23, &Scaleform::Render::BlendState::InterfaceImpl, (void *)v22);
    else
      Scaleform::Render::StateBag::RemoveState(v23, State_BlendMode);
    if ( !destNode->PNode.Scaleform::Render::ContextImpl::Entry::pPrev )
      Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(destNode);
    Scaleform::Render::TreeNode::GetScale9Grid((Scaleform::Render::TreeNode *)srcNode, &result);
    if ( result.x1 < result.x2 && result.y1 < result.y2 )
      Scaleform::Render::TreeNode::SetScale9Grid(destNode, &result);
  }
}

void __fastcall Scaleform::Render::TreeNode::CopyGeomData(
        Scaleform::Render::TreeNode *this,
        const Scaleform::Render::TreeNode *src)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 3u);
  ((void (__fastcall *)(Scaleform::Render::ContextImpl::EntryData *, Scaleform::Render::TreeNode *, const Scaleform::Render::TreeNode *))WritableData->__vftable[1].ConstructCopy)(
    WritableData,
    this,
    src);
}

void __fastcall Scaleform::Render::TreeNode::DisableBatching(Scaleform::Render::TreeNode *this, bool b)
{
  Scaleform::Render::StateBag *WritableData; // rsi
  Scaleform::Render::StateBag *State; // rax
  __int64 pData; // rbx
  __int64 v7; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  WritableData = (Scaleform::Render::StateBag *)Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400000u);
  State = Scaleform::Render::StateBag::GetState(
            (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                  + 0x20)
                                                      + 8i64
                                                      * (unsigned int)((int)((_DWORD)this
                                                                           - ((unsigned int)this & 0xFFFFF000)
                                                                           - 56)
                                                                     / 56)
                                                      + 40)
                                          + 64i64),
            State_UserData);
  if ( State )
  {
    pData = (__int64)State->pData;
    if ( pData )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)State->pData);
  }
  else
  {
    v8 = 2;
    v7 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TreeNode *, __int64, int *, unsigned __int64))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
           Scaleform::Memory::pGlobalHeap,
           this,
           40i64,
           &v8,
           (unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64);
    pData = v7;
    if ( v7 )
    {
      *(_QWORD *)v7 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v7 + 8) = 1;
      *(_QWORD *)v7 = &Scaleform::Render::UserDataState::Data::`vftable';
      Scaleform::StringLH::StringLH((Scaleform::StringLH *)(v7 + 16));
      *(_DWORD *)(pData + 24) = 0;
      *(_BYTE *)(pData + 28) = 0;
      *(_DWORD *)(pData + 32) = 0;
    }
    else
    {
      pData = 0i64;
    }
  }
  *(_DWORD *)(pData + 32) |= 4u;
  *(_BYTE *)(pData + 28) = b;
  Scaleform::Render::StateBag::SetStateVoid(
    WritableData + 4,
    &Scaleform::Render::UserDataState::InterfaceImpl,
    (void *)pData);
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pData);
}

float __fastcall Scaleform::Render::TreeNode::GetRendererFloat(Scaleform::Render::TreeNode *this)
{
  Scaleform::Render::StateBag *State; // rax

  State = Scaleform::Render::StateBag::GetState(
            (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                  + 0x20)
                                                      + 8i64
                                                      * (unsigned int)((int)((_DWORD)this
                                                                           - ((unsigned int)this & 0xFFFFF000)
                                                                           - 56)
                                                                     / 56)
                                                      + 40)
                                          + 64i64),
            State_UserData);
  if ( State )
    return *(float *)(State->DataValue + 24);
  else
    return 0.0;
}

Scaleform::Render::StateBag *__fastcall Scaleform::Render::TreeNode::GetRendererString(
        Scaleform::Render::TreeNode *this)
{
  Scaleform::Render::StateBag *result; // rax

  result = Scaleform::Render::StateBag::GetState(
             (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                   + 0x20)
                                                       + 8i64
                                                       * (unsigned int)((int)((_DWORD)this
                                                                            - ((unsigned int)this & 0xFFFFF000)
                                                                            - 56)
                                                                      / 56)
                                                       + 40)
                                           + 64i64),
             State_UserData);
  if ( result )
    return (Scaleform::Render::StateBag *)((*(_QWORD *)(result->DataValue + 16) & 0xFFFFFFFFFFFFFFFCui64) + 12);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::TreeNode::GetScale9Grid(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::Render::StateBag *State; // rax
  unsigned __int128 v4; // xmm0
  Scaleform::Render::Rect<float> *v5; // rax

  State = Scaleform::Render::StateBag::GetState(
            (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                  + 0x20)
                                                      + 8i64
                                                      * (unsigned int)((int)((_DWORD)this
                                                                           - ((unsigned int)this & 0xFFFFF000)
                                                                           - 56)
                                                                     / 56)
                                                      + 40)
                                          + 64i64),
            State_Scale9);
  if ( State )
    v4 = *(_OWORD *)(State->DataValue + 16);
  else
    v4 = 0i64;
  LODWORD(result->x1) = v4;
  *(_QWORD *)&result->y1 = v4 >> 32;
  v5 = result;
  result->y2 = *((float *)&v4 + 3);
  return v5;
}

Scaleform::Render::StateBag *__fastcall Scaleform::Render::TreeNode::GetState(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::StateType state)
{
  return Scaleform::Render::StateBag::GetState(
           (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                 + 0x20)
                                                     + 8i64
                                                     * (unsigned int)((int)((_DWORD)this
                                                                          - ((unsigned int)this & 0xFFFFF000)
                                                                          - 56)
                                                                    / 56)
                                                     + 40)
                                         + 64i64),
           state);
}

_BOOL8 __fastcall Scaleform::Render::TreeContainer::Insert(
        Scaleform::Render::TreeContainer *this,
        unsigned __int64 index,
        Scaleform::Render::TreeNode *pnode)
{
  Scaleform::Render::TreeNodeArray *WritableData; // rax
  bool v7; // bl

  WritableData = (Scaleform::Render::TreeNodeArray *)Scaleform::Render::ContextImpl::Entry::getWritableData(
                                                       this,
                                                       0x100u);
  v7 = Scaleform::Render::TreeNodeArray::Insert(WritableData + 9, index, pnode);
  if ( v7 )
  {
    ++pnode->RefCount;
    pnode->pParent = this;
    if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
      Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
  }
  return v7;
}

bool __fastcall Scaleform::Render::TreeNodeArray::Insert(
        Scaleform::Render::TreeNodeArray *this,
        unsigned __int64 index,
        Scaleform::Render::TreeNode *node)
{
  unsigned __int64 v3; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v8; // rcx
  Scaleform::Render::TreeNodeArray::ArrayData *v9; // rdi
  unsigned __int64 Size; // rdx
  unsigned __int64 v11; // r15
  Scaleform::Render::TreeNode **v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r8

  v3 = this->pData[0];
  if ( !this->pData[0] )
  {
    this->pData[0] = (unsigned __int64)node;
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  if ( ((__int64)this->pNodes[0] & 1) == 0 )
  {
    if ( !this->pData[1] )
    {
      if ( !index )
        this->pData[1] = v3;
      this->pData[index] = (unsigned __int64)node;
      LOBYTE(v7) = 1;
      return (char)v7;
    }
    v7 = (_QWORD *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TreeNodeArray *, __int64))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
                     Scaleform::Memory::pGlobalHeap,
                     this,
                     64i64);
    v8 = (unsigned __int64)v7;
    if ( !v7 )
      return (char)v7;
    *(_DWORD *)v7 = 1;
    v7[1] = 3i64;
    if ( index )
    {
      if ( index != 1 )
      {
        if ( index == 2 )
        {
          v7[2] = this->pData[0];
          v7[3] = this->pNodes[1];
        }
        goto LABEL_16;
      }
      v7[2] = this->pData[0];
    }
    else
    {
      v7[3] = this->pData[0];
    }
    v7[4] = this->pNodes[1];
LABEL_16:
    v7[index + 2] = node;
    LOBYTE(v7) = 1;
    this->pData[1] = 6i64;
    this->pData[0] = v8 | 1;
    return (char)v7;
  }
  v9 = (Scaleform::Render::TreeNodeArray::ArrayData *)(v3 & 0xFFFFFFFFFFFFFFFEui64);
  Size = v9->Size;
  v11 = Size + 1;
  if ( Size + 1 > this->pData[1] )
  {
    v14 = (((Size >> 1) + Size + 1) & 0xFFFFFFFFFFFFFFFCui64) + 2;
    v7 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 8 * v14 + 16, 0i64);
    v15 = (unsigned __int64)v7;
    if ( v7 )
    {
      *(_DWORD *)v7 = 1;
      v7[1] = v11;
      if ( index )
        memmove(v7 + 2, v9->pNodes, 8 * index);
      *(_QWORD *)(v15 + 8 * index + 16) = node;
      v16 = v9->Size;
      if ( index < v16 )
        memmove((void *)(v15 + 8 * (index + 3)), &v9->pNodes[index], 8 * (v16 - index));
      Scaleform::Render::TreeNodeArray::ArrayData::Release(v9);
      this->pData[1] = v14;
      this->pData[0] = v15 | 1;
      LOBYTE(v7) = 1;
    }
  }
  else
  {
    if ( Size > index )
    {
      v12 = &v9->pNodes[Size];
      v13 = Size - index;
      do
      {
        *v12 = *(v12 - 1);
        --v12;
        --v13;
      }
      while ( v13 );
    }
    v9->pNodes[index] = node;
    LOBYTE(v7) = 1;
    ++v9->Size;
  }
  return (char)v7;
}

Scaleform::Render::StateBag *__fastcall Scaleform::Render::TreeNode::IsBatchingDisabled(
        Scaleform::Render::TreeNode *this)
{
  Scaleform::Render::StateBag *result; // rax

  result = Scaleform::Render::StateBag::GetState(
             (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                   + 0x20)
                                                       + 8i64
                                                       * (unsigned int)((int)((_DWORD)this
                                                                            - ((unsigned int)this & 0xFFFFF000)
                                                                            - 56)
                                                                      / 56)
                                                       + 40)
                                           + 64i64),
             State_UserData);
  if ( result )
    return (Scaleform::Render::StateBag *)*(unsigned __int8 *)(result->DataValue + 28);
  return result;
}

Scaleform::Render::Matrix3x4<float> *__fastcall Scaleform::Render::TreeNode::NodeData::M2D(
        Scaleform::Render::TreeNode::NodeData *this)
{
  return &this->M34;
}

bool __fastcall Scaleform::Render::TreeContainer::NodeData::PropagateUp(
        Scaleform::Render::TreeContainer::NodeData *this,
        Scaleform::Render::ContextImpl::Entry *entry)
{
  Scaleform::Render::TreeNodeArray *p_Children; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v6; // r11
  float x2; // xmm2_4
  unsigned __int64 v8; // r9
  float y1; // xmm3_4
  char v10; // di
  float x1; // xmm4_4
  float y2; // xmm1_4
  __int64 v13; // rdx
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  Scaleform::Render::Matrix3x4<float> *p_M34; // rcx
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  Scaleform::Render::ContextImpl::EntryData *v24; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rdi
  Scaleform::Render::Rect<float> v27; // [rsp+20h] [rbp-39h] BYREF
  Scaleform::Render::Rect<float> bounds; // [rsp+30h] [rbp-29h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+40h] [rbp-19h] BYREF

  p_Children = &this->Children;
  v4 = this->Children.pData[0];
  if ( v4 )
  {
    if ( ((__int64)p_Children->pNodes[0] & 1) != 0 )
      v4 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFEui64) + 8);
    else
      v4 = (this->Children.pData[1] != 0) + 1i64;
  }
  v6 = p_Children->pData[0];
  if ( p_Children->pData[0] )
  {
    if ( ((__int64)p_Children->pNodes[0] & 1) != 0 )
      v6 = (v6 & 0xFFFFFFFFFFFFFFFEui64) + 16;
    else
      v6 = (unsigned __int64)&this->Children;
  }
  bounds = 0i64;
  x2 = 0.0;
  v8 = 0i64;
  y1 = 0.0;
  v10 = 1;
  x1 = 0.0;
  v27 = 0i64;
  y2 = 0.0;
  pr = 0i64;
  if ( v4 )
  {
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v6 + 8 * v8) & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                      + 8i64
                      * (unsigned int)((int)(*(_DWORD *)(v6 + 8 * v8) - (*(_DWORD *)(v6 + 8 * v8) & 0xFFFFF000) - 56)
                                     / 56)
                      + 40);
      if ( (*(_BYTE *)(v13 + 10) & 1) != 0 && *(float *)(v13 + 128) < *(float *)(v13 + 136) )
      {
        v14 = *(float *)(v13 + 132);
        if ( v14 < *(float *)(v13 + 140) )
        {
          if ( v10 )
          {
            y2 = *(float *)(v13 + 140);
            y1 = *(float *)(v13 + 132);
            x2 = *(float *)(v13 + 136);
            v10 = 0;
            x1 = *(float *)(v13 + 128);
            bounds.x1 = x1;
            bounds.x2 = x2;
            bounds.y2 = y2;
            bounds.y1 = v14;
          }
          else
          {
            v15 = *(float *)(v13 + 128);
            if ( x1 > v15 )
            {
              bounds.x1 = *(float *)(v13 + 128);
              x1 = v15;
            }
            v16 = *(float *)(v13 + 136);
            if ( x2 <= v16 )
            {
              bounds.x2 = *(float *)(v13 + 136);
              x2 = v16;
            }
            v17 = *(float *)(v13 + 132);
            if ( y1 > v17 )
            {
              bounds.y1 = *(float *)(v13 + 132);
              y1 = v17;
            }
            v18 = *(float *)(v13 + 140);
            if ( y2 <= v18 )
            {
              bounds.y2 = *(float *)(v13 + 140);
              y2 = v18;
            }
          }
        }
      }
      ++v8;
    }
    while ( v8 < v4 );
    if ( !v10 )
    {
      v27.x1 = x1;
      v27.y1 = y1;
      v27.x2 = x2;
      v27.y2 = y2;
      Scaleform::Render::TreeNode::NodeData::expandByFilterBounds(this, &bounds, 0);
      p_M34 = &this->M34;
      if ( (this->Flags & 0x200) != 0 )
        Scaleform::Render::Matrix3x4<float>::EncloseTransform(p_M34, &pr, &bounds);
      else
        Scaleform::Render::Matrix2x4<float>::EncloseTransform(
          (Scaleform::Render::Matrix2x4<float> *)p_M34,
          &pr,
          &bounds);
      x1 = bounds.x1;
      y1 = bounds.y1;
      x2 = bounds.x2;
      y2 = bounds.y2;
    }
  }
  v20 = pr.x1;
  v21 = pr.y1;
  v22 = pr.x2;
  v23 = pr.y2;
  if ( x1 == this->AproxLocalBounds.x1
    && x2 == this->AproxLocalBounds.x2
    && y1 == this->AproxLocalBounds.y1
    && y2 == this->AproxLocalBounds.y2
    && pr.x1 == this->AproxParentBounds.x1
    && pr.x2 == this->AproxParentBounds.x2
    && pr.y1 == this->AproxParentBounds.y1
    && pr.y2 == this->AproxParentBounds.y2 )
  {
    if ( entry->pPrev )
    {
      v24 = Scaleform::Render::ContextImpl::Entry::getWritableData(entry, 0) + 9;
      if ( ((__int64)v24->__vftable & 1) != 0 )
        *(_QWORD *)&v24->Type = 0i64;
    }
    return 0;
  }
  else
  {
    WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(entry, 9u);
    WritableData[7] = (Scaleform::Render::ContextImpl::EntryData)bounds;
    *(float *)&WritableData[8].__vftable = v20;
    *((float *)&WritableData[8].__vftable + 1) = v21;
    *(float *)&WritableData[8].Type = v22;
    *(float *)(&WritableData[8].Flags + 1) = v23;
    Scaleform::Render::TreeNode::NodeData::updateOriginalBoundState(
      (Scaleform::Render::TreeNode::NodeData *)WritableData,
      &v27);
    if ( entry->pPrev && ((__int64)WritableData[9].__vftable & 1) != 0 )
      *(_QWORD *)&WritableData[9].Type = 0i64;
    return this->Flags & 1;
  }
}

void __fastcall Scaleform::Render::TreeNodeArray::ArrayData::Release(Scaleform::Render::TreeNodeArray::ArrayData *this)
{
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this);
}

void __fastcall Scaleform::Render::TreeContainer::NodeData::ReleaseNodes(
        Scaleform::Render::TreeContainer::NodeData *this)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  Scaleform::Render::TreeNodeArray *p_Children; // rbx
  Scaleform::Render::ContextImpl::Entry *v6; // rcx

  v1 = this->Children.pData[0];
  if ( v1 )
  {
    v3 = (v1 & 1) != 0 ? *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFEui64) + 8) : (this->Children.pData[1] != 0) + 1i64;
    if ( v3 )
    {
      v4 = this->Children.pData[0];
      if ( v4 )
      {
        if ( (v4 & 1) != 0 )
          p_Children = (Scaleform::Render::TreeNodeArray *)((v4 & 0xFFFFFFFFFFFFFFFEui64) + 16);
        else
          p_Children = &this->Children;
      }
      else
      {
        p_Children = 0i64;
      }
      do
      {
        --v3;
        *(_QWORD *)(p_Children->pData[0] + 32) = 0i64;
        v6 = (Scaleform::Render::ContextImpl::Entry *)p_Children->pData[0];
        if ( (*(_QWORD *)(p_Children->pData[0] + 8))-- == 1i64 )
          Scaleform::Render::ContextImpl::Entry::destroyHelper(v6);
        p_Children = (Scaleform::Render::TreeNodeArray *)((char *)p_Children + 8);
      }
      while ( v3 );
    }
  }
  Scaleform::Render::TreeNode::NodeData::ReleaseNodes(this);
}

void __fastcall Scaleform::Render::TreeNode::NodeData::ReleaseNodes(Scaleform::Render::TreeNode::NodeData *this)
{
  Scaleform::Render::StateBag *State; // rax
  Scaleform::Render::StateBag *v3; // rdi
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  if ( (this->Flags & 0x10) != 0 )
  {
    State = Scaleform::Render::StateBag::GetState(&this->States, State_MaskNode);
    v3 = State;
    if ( State )
    {
      WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(
                       (Scaleform::Render::ContextImpl::Entry *)State->pData,
                       0x80u);
      *(_QWORD *)(v3->DataValue + 32) = 0i64;
      WritableData->Flags &= ~0x20u;
      Scaleform::Render::StateBag::RemoveState(
        (Scaleform::Render::StateBag *)&WritableData[4],
        State_Internal_MaskOwner);
    }
  }
  Scaleform::Render::StateBag::ReleaseNodes(&this->States);
}

void __fastcall Scaleform::Render::TreeContainer::Remove(
        Scaleform::Render::TreeContainer *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  Scaleform::Render::TreeNodeArray *v6; // r15
  unsigned __int64 v7; // rax
  Scaleform::Render::ContextImpl::Entry **v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  Scaleform::Render::ContextImpl::Entry *v11; // rcx

  if ( count )
  {
    v6 = (Scaleform::Render::TreeNodeArray *)&Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x200u)[9];
    v7 = v6->pData[0];
    if ( v6->pData[0] || index )
    {
      if ( (v7 & 1) != 0 )
        v9 = (v7 & 0xFFFFFFFFFFFFFFFEui64) + 16;
      else
        v9 = (unsigned __int64)v6;
      v8 = (Scaleform::Render::ContextImpl::Entry **)(v9 + 8 * index);
    }
    else
    {
      v8 = 0i64;
    }
    v10 = count;
    do
    {
      --v10;
      (*v8)->pParent = 0i64;
      v11 = *v8;
      if ( (*v8)->RefCount-- == 1 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v11);
      ++v8;
    }
    while ( v10 );
    if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
      Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
    Scaleform::Render::TreeNodeArray::Remove(v6, index, count);
  }
}

bool __fastcall Scaleform::Render::TreeNodeArray::Remove(
        Scaleform::Render::TreeNodeArray *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  Scaleform::Render::TreeNode *v6; // rax
  Scaleform::Render::TreeNodeArray::ArrayData *v7; // rax
  Scaleform::Render::TreeNodeArray::ArrayData *v8; // rdi
  unsigned __int64 Size; // r8
  unsigned __int64 v10; // r8
  bool v11; // cf
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  Scaleform::Render::TreeNodeArray::ArrayData *v15; // r15
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  volatile int *v19; // rcx
  unsigned __int64 v20; // rbp

  if ( !count )
    goto LABEL_10;
  if ( ((__int64)this->pNodes[0] & 1) == 0 )
  {
    v6 = this->pNodes[1];
    if ( !v6 )
    {
      LOBYTE(v7) = 1;
      this->pData[0] = 0i64;
      return (char)v7;
    }
    if ( count == 2 )
    {
      LOBYTE(v7) = 1;
      *this = 0ui64;
      return (char)v7;
    }
    if ( !index )
      this->pData[0] = (unsigned __int64)v6;
    this->pData[1] = 0i64;
LABEL_10:
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  v8 = (Scaleform::Render::TreeNodeArray::ArrayData *)(this->pData[0] & 0xFFFFFFFFFFFFFFFEui64);
  Size = v8->Size;
  v11 = Size == count;
  v10 = Size - count;
  if ( !v11 && v10 != 1 )
  {
    v13 = this->pData[1];
    if ( v13 && (v13 >> 1 < v10 || v13 <= 0xA) )
      v14 = v13;
    else
      v14 = ((v10 + 1) & 0xFFFFFFFFFFFFFFFCui64) + 2;
    if ( v14 == v13 )
    {
      if ( index < v10 )
      {
        v17 = index + 2;
        v18 = v10 - index;
        v19 = &v8->RefCount + 2 * v17;
        v20 = 2 * count;
        do
        {
          *(_QWORD *)v19 = *(_QWORD *)&v19[v20];
          v19 += 2;
          --v18;
        }
        while ( v18 );
      }
      v8->Size = v10;
    }
    else
    {
      v7 = Scaleform::Render::TreeNodeArray::allocByCapacity(this, v14, v10);
      v15 = v7;
      if ( !v7 )
        return (char)v7;
      if ( index )
        memmove(v7->pNodes, v8->pNodes, 8 * index);
      v16 = v8->Size;
      if ( index + count < v16 )
        memmove(&v15->pNodes[index], &v8->pNodes[index] + count, 8 * (v16 - index - count));
      Scaleform::Render::TreeNodeArray::ArrayData::Release(v8);
      this->pData[0] = (unsigned __int64)v15 | 1;
    }
    this->pData[1] = v14;
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  if ( v10 == 1 )
  {
    if ( index )
      v12 = (unsigned __int64)v8->pNodes[0];
    else
      v12 = (unsigned __int64)v8->pNodes[count];
    this->pData[0] = v12;
  }
  else
  {
    this->pData[0] = 0i64;
  }
  this->pData[1] = 0i64;
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&v8->RefCount, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
  LOBYTE(v7) = 1;
  return (char)v7;
}

void __fastcall Scaleform::Render::TreeNode::SetBlendMode(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::BlendMode mode)
{
  void *v2; // rdi
  Scaleform::Render::StateBag *v4; // rcx

  v2 = (void *)(int)mode;
  v4 = (Scaleform::Render::StateBag *)&Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x20000u)[4];
  if ( (_DWORD)v2 )
    Scaleform::Render::StateBag::SetStateVoid(v4, &Scaleform::Render::BlendState::InterfaceImpl, v2);
  else
    Scaleform::Render::StateBag::RemoveState(v4, State_BlendMode);
  if ( !this->PNode.Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeNode::SetEdgeAAMode(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::EdgeAAMode edgeAA)
{
  __int16 v2; // bx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v2 = edgeAA;
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0xC) != edgeAA )
  {
    WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x20u);
    WritableData->Flags &= 0xFFF3u;
    WritableData->Flags |= v2;
  }
}

void __fastcall Scaleform::Render::TreeNode::SetFilters(
        Scaleform::Render::TreeNode *this,
        const Scaleform::Render::FilterSet *filters)
{
  Scaleform::RefCountVImpl *v4; // rbx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rdi
  Scaleform::Render::ContextImpl::EntryData *v6; // rbx

  if ( filters && (unsigned int)Scaleform::Render::FilterSet::GetFilterCount((Scaleform::Render::FilterSet *)filters) )
  {
    v4 = (Scaleform::RefCountVImpl *)Scaleform::Render::FilterSet::Clone(
                                       (Scaleform::Render::FilterSet *)filters,
                                       1,
                                       0i64);
    WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x200002u);
    Scaleform::Render::StateBag::SetStateVoid(
      (Scaleform::Render::StateBag *)&WritableData[4],
      &Scaleform::Render::FilterState::InterfaceImpl,
      v4);
    WritableData->Flags |= 0x400u;
    if ( v4 )
      Scaleform::RefCountImpl::Release(v4);
  }
  else
  {
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                               + 8i64
                               * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                               + 40)
                   + 10i64) & 0x400) == 0 )
      return;
    v6 = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x200002u);
    Scaleform::Render::StateBag::RemoveState((Scaleform::Render::StateBag *)&v6[4], State_Filter);
    v6->Flags &= ~0x400u;
  }
  if ( !this->PNode.Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeNode::SetMaskNode(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::TreeNode *node)
{
  Scaleform::Render::StateBag *WritableData; // rax
  Scaleform::Render::StateBag *v5; // rdi
  Scaleform::Render::ContextImpl::EntryData *v6; // rax
  Scaleform::Render::StateBag *State; // rax
  Scaleform::Render::StateBag *v8; // rsi
  Scaleform::Render::ContextImpl::EntryData *v9; // rax

  WritableData = (Scaleform::Render::StateBag *)Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x40000u);
  v5 = WritableData;
  if ( node )
  {
    v6 = Scaleform::Render::ContextImpl::Entry::getWritableData(node, 0x80u);
    node->pParent = this;
    v6->Flags |= 0x20u;
    Scaleform::Render::StateBag::SetStateVoid(
      (Scaleform::Render::StateBag *)&v6[4],
      &Scaleform::Render::Internal_MaskOwnerState::InterfaceImpl,
      this);
    WORD1(v5->DataValue) |= 0x10u;
    Scaleform::Render::StateBag::SetStateVoid(v5 + 4, &Scaleform::Render::MaskNodeState::InterfaceImpl, node);
  }
  else
  {
    State = Scaleform::Render::StateBag::GetState(WritableData + 4, State_MaskNode);
    v8 = State;
    if ( State )
    {
      v9 = Scaleform::Render::ContextImpl::Entry::getWritableData(
             (Scaleform::Render::ContextImpl::Entry *)State->pData,
             0x80u);
      *(_QWORD *)(v8->DataValue + 32) = 0i64;
      v9->Flags &= ~0x20u;
      Scaleform::Render::StateBag::RemoveState((Scaleform::Render::StateBag *)&v9[4], State_Internal_MaskOwner);
      Scaleform::Render::StateBag::RemoveState(v5 + 4, State_MaskNode);
      WORD1(v5->DataValue) &= ~0x10u;
    }
  }
  if ( !this->PNode.Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeNode::SetMatrix3D(
        Scaleform::Render::TreeNode *this,
        const Scaleform::Render::Matrix3x4<float> *m)
{
  int v4; // edi
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::ContextImpl::Entry *pParent; // rbx
  Scaleform::Render::ContextImpl::EntryData *v7; // rax

  v4 = (((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                               + 8i64
                               * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                               + 40)
                   + 10i64) & 0x200) == 0) << 13) | 1;
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, v4);
  WritableData[1] = *(Scaleform::Render::ContextImpl::EntryData *)&m->M[0][0];
  WritableData[2] = *(Scaleform::Render::ContextImpl::EntryData *)&m->M[1][0];
  WritableData[3] = *(Scaleform::Render::ContextImpl::EntryData *)&m->M[2][0];
  WritableData->Flags |= 0x200u;
  if ( (v4 & 0x2000) != 0 )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      do
      {
        v7 = Scaleform::Render::ContextImpl::Entry::getWritableData(pParent, v4);
        v7->Flags |= 0x4000u;
        if ( !pParent->PNode.pPrev )
          Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(pParent);
        pParent = pParent->pParent;
      }
      while ( pParent
           && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pParent & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                    + 8i64
                                    * (unsigned int)((int)((_DWORD)pParent - ((unsigned int)pParent & 0xFFFFF000) - 56)
                                                   / 56)
                                    + 40)
                        + 10i64) & 0x200) == 0 );
    }
  }
  if ( !this->PNode.Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeNode::SetMatrix(
        Scaleform::Render::TreeNode *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 1u);
  WritableData[1] = *(Scaleform::Render::ContextImpl::EntryData *)&m->M[0][0];
  *(float *)(&WritableData[1].Flags + 1) = m->M[0][3];
  WritableData[2] = *(Scaleform::Render::ContextImpl::EntryData *)&m->M[1][0];
  if ( !this->PNode.Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeNode::SetOrigScale9Parent(
        Scaleform::Render::TreeNode *this,
        Scaleform::Render::TreeNode *origParent)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rbx
  Scaleform::Render::StateBag *v5; // rcx

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x10000u);
  v5 = (Scaleform::Render::StateBag *)&WritableData[4];
  if ( origParent )
  {
    Scaleform::Render::StateBag::SetStateVoid(v5, &Scaleform::Render::OrigScale9ParentState::InterfaceImpl, origParent);
    WritableData->Flags |= 0x2000u;
  }
  else
  {
    Scaleform::Render::StateBag::RemoveState(v5, State_OrigScale9Parent);
    WritableData->Flags &= ~0x2000u;
  }
  if ( !this->PNode.Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeNode::SetProjectionMatrix3D(
        Scaleform::Render::TreeNode *this,
        const Scaleform::Render::Matrix4x4<float> *mat3D)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::ContextImpl::EntryData *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x100000u);
  v8 = 2;
  v5 = WritableData;
  v6 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 80i64, &v8);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 0i64;
    v6[3] = 0i64;
    v6[4] = 0i64;
    v6[5] = 0i64;
    v6[6] = 0i64;
    v6[7] = 0i64;
    v6[8] = 0i64;
    v6[9] = 0i64;
    *((_DWORD *)v6 + 4) = 1065353216;
    *((_DWORD *)v6 + 9) = 1065353216;
    *((_DWORD *)v6 + 14) = 1065353216;
    *((_DWORD *)v6 + 19) = 1065353216;
    *v6 = &Scaleform::RefCountImplCore::`vftable';
    *v6 = &Scaleform::Render::Matrix4x4Ref<float>::`vftable';
    *((_DWORD *)v6 + 2) = 1;
  }
  else
  {
    v7 = 0i64;
  }
  *((_OWORD *)v7 + 1) = *(_OWORD *)&mat3D->M[0][0];
  *((_OWORD *)v7 + 2) = *(_OWORD *)&mat3D->M[1][0];
  *((_OWORD *)v7 + 3) = *(_OWORD *)&mat3D->M[2][0];
  *((_OWORD *)v7 + 4) = *(_OWORD *)&mat3D->M[3][0];
  Scaleform::Render::StateBag::SetStateVoid(
    (Scaleform::Render::StateBag *)&v5[4],
    &Scaleform::Render::ProjectionMatrix3DState::InterfaceImpl,
    v7);
  v5->Flags |= 0x1000u;
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
}

void __fastcall Scaleform::Render::TreeNode::SetRendererFloat(Scaleform::Render::TreeNode *this, float f)
{
  Scaleform::Render::StateBag *WritableData; // rdi
  Scaleform::Render::StateBag *State; // rax
  __int64 pData; // rbx
  __int64 v6; // rax
  int v7; // [rsp+58h] [rbp+10h] BYREF

  WritableData = (Scaleform::Render::StateBag *)Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400000u);
  State = Scaleform::Render::StateBag::GetState(
            (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                  + 0x20)
                                                      + 8i64
                                                      * (unsigned int)((int)((_DWORD)this
                                                                           - ((unsigned int)this & 0xFFFFF000)
                                                                           - 56)
                                                                     / 56)
                                                      + 40)
                                          + 64i64),
            State_UserData);
  if ( State )
  {
    pData = (__int64)State->pData;
    if ( pData )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)State->pData);
  }
  else
  {
    v7 = 2;
    v6 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TreeNode *, __int64, int *, unsigned __int64, int))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
           Scaleform::Memory::pGlobalHeap,
           this,
           40i64,
           &v7,
           (unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64,
           (int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56);
    pData = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v6 + 8) = 1;
      *(_QWORD *)v6 = &Scaleform::Render::UserDataState::Data::`vftable';
      Scaleform::StringLH::StringLH((Scaleform::StringLH *)(v6 + 16));
      *(_DWORD *)(pData + 24) = 0;
      *(_BYTE *)(pData + 28) = 0;
      *(_DWORD *)(pData + 32) = 0;
    }
    else
    {
      pData = 0i64;
    }
  }
  *(_DWORD *)(pData + 32) |= 2u;
  *(float *)(pData + 24) = f;
  Scaleform::Render::StateBag::SetStateVoid(
    WritableData + 4,
    &Scaleform::Render::UserDataState::InterfaceImpl,
    (void *)pData);
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pData);
}

void __fastcall Scaleform::Render::TreeNode::SetRendererString(Scaleform::Render::TreeNode *this, const char *str)
{
  Scaleform::Render::StateBag *WritableData; // rsi
  Scaleform::Render::StateBag *State; // rax
  __int64 pData; // rbx
  __int64 v7; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  WritableData = (Scaleform::Render::StateBag *)Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400000u);
  State = Scaleform::Render::StateBag::GetState(
            (Scaleform::Render::StateBag *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                  + 0x20)
                                                      + 8i64
                                                      * (unsigned int)((int)((_DWORD)this
                                                                           - ((unsigned int)this & 0xFFFFF000)
                                                                           - 56)
                                                                     / 56)
                                                      + 40)
                                          + 64i64),
            State_UserData);
  if ( State )
  {
    pData = (__int64)State->pData;
    if ( pData )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)State->pData);
  }
  else
  {
    v8 = 2;
    v7 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TreeNode *, __int64, int *, unsigned __int64))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
           Scaleform::Memory::pGlobalHeap,
           this,
           40i64,
           &v8,
           (unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64);
    pData = v7;
    if ( v7 )
    {
      *(_QWORD *)v7 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v7 + 8) = 1;
      *(_QWORD *)v7 = &Scaleform::Render::UserDataState::Data::`vftable';
      Scaleform::StringLH::StringLH((Scaleform::StringLH *)(v7 + 16));
      *(_DWORD *)(pData + 24) = 0;
      *(_BYTE *)(pData + 28) = 0;
      *(_DWORD *)(pData + 32) = 0;
    }
    else
    {
      pData = 0i64;
    }
  }
  Scaleform::String::operator=((Scaleform::String *)(pData + 16), str);
  *(_DWORD *)(pData + 32) |= 1u;
  Scaleform::Render::StateBag::SetStateVoid(
    WritableData + 4,
    &Scaleform::Render::UserDataState::InterfaceImpl,
    (void *)pData);
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pData);
}

void __fastcall Scaleform::Render::TreeNode::SetScale9Grid(
        Scaleform::Render::TreeNode *this,
        const Scaleform::Render::Rect<float> *rect)
{
  Scaleform::Render::StateBag *WritableData; // rax
  Scaleform::Render::StateBag *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  void *v8; // r8
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax
  int v12; // [rsp+38h] [rbp+10h] BYREF

  WritableData = (Scaleform::Render::StateBag *)Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x10000u);
  v5 = WritableData;
  if ( rect->x2 <= rect->x1 || rect->y2 <= rect->y1 )
  {
    Scaleform::Render::StateBag::RemoveState(WritableData + 4, State_Scale9);
  }
  else
  {
    v12 = 71;
    v6 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 32i64, &v12);
    v7 = v6;
    if ( v6 )
    {
      v8 = v6;
      *v6 = &Scaleform::RefCountImplCore::`vftable';
      *((_DWORD *)v6 + 2) = 1;
      *v6 = &Scaleform::Render::Scale9GridRect::`vftable';
      v6[2] = 0i64;
      v6[3] = 0i64;
      y2 = rect->y2;
      x2 = rect->x2;
      x1 = rect->x1;
      *((_DWORD *)v7 + 5) = LODWORD(rect->y1);
      *((float *)v7 + 6) = x2;
      *((float *)v7 + 7) = y2;
      *((float *)v7 + 4) = x1;
      Scaleform::Render::StateBag::SetStateVoid(v5 + 4, &Scaleform::Render::Scale9State::InterfaceImpl, v8);
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
    }
  }
}

void __fastcall Scaleform::Render::TreeNode::SetViewMatrix3D(
        Scaleform::Render::TreeNode *this,
        const Scaleform::Render::Matrix3x4<float> *mat3D)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::ContextImpl::EntryData *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x80000u);
  v8 = 2;
  v5 = WritableData;
  v6 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 64i64, &v8);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 0i64;
    v6[3] = 0i64;
    v6[4] = 0i64;
    v6[5] = 0i64;
    v6[6] = 0i64;
    v6[7] = 0i64;
    *((_DWORD *)v6 + 4) = 1065353216;
    *((_DWORD *)v6 + 9) = 1065353216;
    *((_DWORD *)v6 + 14) = 1065353216;
    *v6 = &Scaleform::RefCountImplCore::`vftable';
    *v6 = &Scaleform::Render::Matrix3x4Ref<float>::`vftable';
    *((_DWORD *)v6 + 2) = 1;
  }
  else
  {
    v7 = 0i64;
  }
  *((_OWORD *)v7 + 1) = *(_OWORD *)&mat3D->M[0][0];
  *((_OWORD *)v7 + 2) = *(_OWORD *)&mat3D->M[1][0];
  *((_OWORD *)v7 + 3) = *(_OWORD *)&mat3D->M[2][0];
  Scaleform::Render::StateBag::SetStateVoid(
    (Scaleform::Render::StateBag *)&v5[4],
    &Scaleform::Render::ViewMatrix3DState::InterfaceImpl,
    v7);
  v5->Flags |= 0x800u;
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
}

void __fastcall Scaleform::Render::TreeRoot::SetViewport(
        Scaleform::Render::TreeRoot *this,
        const Scaleform::Render::Viewport *vp)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 160i64) != vp->BufferWidth
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 164i64) != vp->BufferHeight
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 168i64) != vp->Left
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 172i64) != vp->Top
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 176i64) != vp->Width
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 180i64) != vp->Height
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 184i64) != vp->ScissorLeft
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 188i64) != vp->ScissorTop
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 192i64) != vp->ScissorWidth
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 196i64) != vp->ScissorHeight
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 200i64) != vp->Flags )
  {
    WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x1000u);
    WritableData[10] = *(Scaleform::Render::ContextImpl::EntryData *)&vp->BufferWidth;
    WritableData[11] = *(Scaleform::Render::ContextImpl::EntryData *)&vp->Width;
    WritableData[12] = *(Scaleform::Render::ContextImpl::EntryData *)&vp->ScissorWidth;
  }
}

void __fastcall Scaleform::Render::TreeNode::SetVisible(Scaleform::Render::TreeNode *this, bool visible)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::ContextImpl::Entry *pParent; // rcx

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 1) != visible )
  {
    WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 4u);
    WritableData->Flags &= ~1u;
    WritableData->Flags |= visible;
    pParent = this->pParent;
    if ( pParent )
    {
      if ( !pParent->PNode.pPrev )
        Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(pParent);
    }
  }
}

Scaleform::Render::TreeNodeArray::ArrayData *__fastcall Scaleform::Render::TreeNodeArray::allocByCapacity(
        Scaleform::Render::TreeNodeArray *this,
        unsigned __int64 capacity,
        unsigned __int64 size)
{
  Scaleform::Render::TreeNodeArray::ArrayData *result; // rax

  result = (Scaleform::Render::TreeNodeArray::ArrayData *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                            Scaleform::Memory::pGlobalHeap,
                                                            this,
                                                            8 * capacity + 16,
                                                            0i64);
  if ( result )
  {
    result->RefCount = 1;
    result->Size = size;
  }
  return result;
}

bool __fastcall Scaleform::Render::TreeNode::NodeData::expandByFilterBounds(
        Scaleform::Render::TreeNode::NodeData *this,
        Scaleform::Render::Rect<float> *bounds,
        bool boundsEmpty)
{
  Scaleform::Render::StateBag *State; // rax
  Scaleform::Render::FilterSet *Log; // rax
  Scaleform::Render::FilterSet *v7; // rsi
  unsigned int v8; // edi
  int v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  Scaleform::Render::Filter *Filter; // rax
  Scaleform::Render::Filter *v14; // rcx
  int Type; // eax
  float v16; // xmm6_4
  float x1; // xmm11_4
  float v18; // xmm8_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm10_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm11_4
  float v25; // xmm8_4
  Scaleform::Render::FilterType v26; // eax
  float v27; // xmm0_4
  float v28; // xmm9_4
  bool v29; // cc
  float v30; // xmm0_4
  float v31; // xmm0_4

  if ( boundsEmpty )
    return boundsEmpty;
  State = Scaleform::Render::StateBag::GetState(&this->States, State_Filter);
  if ( State )
  {
    Log = (Scaleform::Render::FilterSet *)Scaleform::GFx::Stream::GetLog((AgDisplay *)State);
    v7 = Log;
    if ( Log )
    {
      v8 = 0;
      if ( (unsigned int)Scaleform::Render::FilterSet::GetFilterCount(Log) )
      {
        v9 = _xmm;
        v10 = FLOAT_0_5;
        v11 = *(float *)&FLOAT_1_0;
        v12 = *(float *)&FLOAT_0_050000001;
        do
        {
          Filter = Scaleform::Render::FilterSet::GetFilter(v7, v8);
          v14 = Filter;
          if ( Filter )
          {
            Type = Filter->Type;
            if ( Type >= 0 )
            {
              if ( Type <= 5 )
              {
                if ( ((Type - 3) & 0xFFFFFFFD) != 0 )
                  v16 = v11;
                else
                  v16 = FLOAT_2_0;
                x1 = bounds->x1;
                v18 = *(float *)&v14[1].RefCount * v12;
                v19 = (float)SHIDWORD(v14[1].__vftable);
                v20 = (float)((float)((float)((float)(*((float *)&v14[1].RefCount + 1) * v12) + v11) * 20.0) * v19)
                    * v16;
                v21 = bounds->y1 - v20;
                v22 = v20 + bounds->y2;
                v23 = (float)((float)((float)(v18 + v11) * 20.0) * v19) * v16;
                bounds->y1 = v21;
                v24 = x1 - v23;
                bounds->y2 = v22;
                v25 = v23 + bounds->x2;
                bounds->x1 = v24;
                bounds->x2 = v25;
                v26 = v14->Type;
                if ( v26 == Filter_Shadow || (unsigned int)(v26 - 3) <= 2 )
                {
                  v27 = *(float *)&v14[1].Type;
                  v28 = *(float *)&v14[1].Frozen;
                  v29 = v27 <= 0.0;
                  v30 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v27) & _xmm) * v16;
                  if ( v29 )
                  {
                    bounds->x1 = v24 - ceilf(v30);
                    bounds->x2 = v25 + 0.0;
                  }
                  else
                  {
                    bounds->x1 = v24;
                    bounds->x2 = ceilf(v30) + v25;
                  }
                  v31 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v28) & _xmm) * v16;
                  if ( v28 <= 0.0 )
                  {
                    bounds->y1 = v21 - ceilf(v31);
                    bounds->y2 = v22 + 0.0;
                  }
                  else
                  {
                    bounds->y1 = v21;
                    bounds->y2 = ceilf(v31) + v22;
                  }
                  v11 = *(float *)&FLOAT_1_0;
                }
                bounds->x1 = floorf(bounds->x1 - 10.0);
                bounds->y1 = floorf(bounds->y1 - 10.0);
                bounds->x2 = ceilf(bounds->x2 + 10.0);
                v9 = _xmm;
                v10 = FLOAT_0_5;
                v12 = *(float *)&FLOAT_0_050000001;
                bounds->y2 = ceilf(bounds->y2 + 10.0);
              }
              else if ( Type == 10 )
              {
                bounds->x2 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v14[2].__vftable + 1) * v10) & v9)
                                   * 20.0)
                           + bounds->x2;
                bounds->y2 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v14[2].RefCount * v10) & v9) * 20.0)
                           + bounds->y2;
              }
            }
          }
          ++v8;
        }
        while ( v8 < (unsigned int)Scaleform::Render::FilterSet::GetFilterCount(v7) );
      }
    }
  }
  return 0;
}

void __fastcall Scaleform::Render::TreeNode::NodeData::expandByFilterBounds(
        const Scaleform::Render::Filter *filter,
        Scaleform::Render::Rect<float> *bounds)
{
  Scaleform::Render::FilterType Type; // eax
  float v4; // xmm6_4
  float v5; // xmm2_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm11_4
  float v9; // xmm7_4
  float v10; // xmm13_4
  float v11; // xmm8_4
  Scaleform::Render::FilterType v12; // eax
  float v13; // xmm0_4
  bool v14; // cc
  float v15; // xmm12_4
  float v16; // xmm0_4
  float v17; // xmm0_4

  if ( filter )
  {
    Type = filter->Type;
    if ( Type >= Filter_Blur )
    {
      if ( Type <= Filter_GradientBevel )
      {
        if ( ((Type - 3) & 0xFFFFFFFD) != 0 )
          v4 = *(float *)&FLOAT_1_0;
        else
          v4 = FLOAT_2_0;
        v5 = (float)SHIDWORD(filter[1].__vftable);
        v6 = (float)((float)((float)((float)(*((float *)&filter[1].RefCount + 1) * 0.050000001) + 1.0) * 20.0) * v5)
           * v4;
        v7 = (float)((float)((float)((float)(*(float *)&filter[1].RefCount * 0.050000001) + 1.0) * 20.0) * v5) * v4;
        v8 = bounds->y1 - v6;
        v9 = v6 + bounds->y2;
        v10 = bounds->x1 - v7;
        v11 = v7 + bounds->x2;
        bounds->y1 = v8;
        bounds->y2 = v9;
        bounds->x1 = v10;
        bounds->x2 = v11;
        v12 = filter->Type;
        if ( v12 == Filter_Shadow || (unsigned int)(v12 - 3) <= 2 )
        {
          v13 = *(float *)&filter[1].Type;
          v14 = v13 <= 0.0;
          v15 = *(float *)&filter[1].Frozen;
          v16 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm) * v4;
          if ( v14 )
          {
            bounds->x1 = v10 - ceilf(v16);
            bounds->x2 = v11 + 0.0;
          }
          else
          {
            bounds->x1 = v10;
            bounds->x2 = ceilf(v16) + v11;
          }
          v17 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm) * v4;
          if ( v15 <= 0.0 )
          {
            bounds->y1 = v8 - ceilf(v17);
            bounds->y2 = v9 + 0.0;
          }
          else
          {
            bounds->y1 = v8;
            bounds->y2 = ceilf(v17) + v9;
          }
        }
        bounds->x1 = floorf(bounds->x1 - 10.0);
        bounds->y1 = floorf(bounds->y1 - 10.0);
        bounds->x2 = ceilf(bounds->x2 + 10.0);
        bounds->y2 = ceilf(bounds->y2 + 10.0);
      }
      else if ( Type == Filter_DisplacementMap )
      {
        bounds->x2 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&filter[2].__vftable + 1) * 0.5) & _xmm) * 20.0)
                   + bounds->x2;
        bounds->y2 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&filter[2].RefCount * 0.5) & _xmm) * 20.0)
                   + bounds->y2;
      }
    }
  }
}

Scaleform::Render::TreeCacheNode *__fastcall Scaleform::Render::TreeContainer::NodeData::updateCache(
        Scaleform::Render::TreeContainer::NodeData *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *pparent,
        Scaleform::Render::TreeCacheNode *pinsert,
        Scaleform::Render::TreeNode *pnode,
        unsigned __int16 depth)
{
  Scaleform::Render::TreeNode *v6; // rsi
  Scaleform::Render::TreeCacheNode *pRenderer; // rbx
  int v12; // eax
  int v13; // er8
  unsigned __int16 Flags; // dx
  int v15; // er14
  bool v16; // r13
  Scaleform::Render::TreeCacheNode *v17; // rax
  int v18; // er8

  v6 = pnode;
  pRenderer = pnode->pRenderer;
  if ( pRenderer )
    goto LABEL_17;
  if ( pparent )
  {
    v12 = pparent->Flags & 0xC;
    if ( v12 == 12 )
    {
      v13 = 12;
      goto LABEL_8;
    }
  }
  else
  {
    v12 = 4;
  }
  v13 = this->Flags & 0xC;
  if ( !v13 )
    v13 = v12;
LABEL_8:
  Flags = this->Flags;
  LODWORD(pnode) = 71;
  v15 = v13 | Flags & 1 | 0x60;
  if ( (Flags & 0x20) == 0 )
    v15 = v13 | Flags & 1;
  v16 = (Flags & 0x200) != 0;
  v17 = (Scaleform::Render::TreeCacheNode *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              pparent,
                                              160i64,
                                              &pnode);
  pRenderer = v17;
  if ( v17 )
  {
    v18 = v15 | 0x200;
    if ( !v16 )
      v18 = v15;
    Scaleform::Render::TreeCacheNode::TreeCacheNode(v17, v6, v18);
    pRenderer->__vftable = (Scaleform::Render::TreeCacheNode_vtbl *)&Scaleform::Render::TreeCacheContainer::`vftable';
    pRenderer[1].__vftable = (Scaleform::Render::TreeCacheNode_vtbl *)&pRenderer->SortParentBounds;
    *((_QWORD *)&pRenderer[1].__vftable + 1) = &pRenderer->SortParentBounds;
    pRenderer[1].pPrev = 0i64;
    pRenderer[1].pNext = 0i64;
    LODWORD(pRenderer[1].pRoot) = 0x80000000;
  }
  else
  {
    pRenderer = 0i64;
  }
  v6->pRenderer = pRenderer;
  if ( !pRenderer )
    return 0i64;
LABEL_17:
  Scaleform::Render::TreeCacheNode::UpdateInsertIntoParent(pRenderer, hal, pparent, pinsert, this, depth);
  return pRenderer;
}

void __fastcall Scaleform::Render::TreeNode::NodeData::updateOriginalBoundState(
        Scaleform::Render::TreeNode::NodeData *this,
        const Scaleform::Render::Rect<float> *bounds)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( this->AproxLocalBounds.x1 == bounds->x1
    && this->AproxLocalBounds.x2 == bounds->x2
    && this->AproxLocalBounds.y1 == bounds->y1
    && this->AproxLocalBounds.y2 == bounds->y2 )
  {
    if ( Scaleform::Render::StateBag::GetState(&this->States, State_OrigNodeBounds) )
      Scaleform::Render::StateBag::RemoveState(&this->States, State_OrigNodeBounds);
  }
  else
  {
    v6 = 2;
    v4 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 32i64, &v6);
    v5 = v4;
    if ( v4 )
    {
      v4[1] = 0i64;
      v4[2] = 0i64;
      v4[3] = 0i64;
      *v4 = &Scaleform::RefCountImplCore::`vftable';
      *v4 = &Scaleform::Render::Scale9GridRect::`vftable';
      *((_DWORD *)v4 + 2) = 1;
    }
    else
    {
      v5 = 0i64;
    }
    *((_DWORD *)v5 + 4) = LODWORD(bounds->x1);
    *((_DWORD *)v5 + 5) = LODWORD(bounds->y1);
    *((_DWORD *)v5 + 6) = LODWORD(bounds->x2);
    *((_DWORD *)v5 + 7) = LODWORD(bounds->y2);
    Scaleform::Render::StateBag::SetStateVoid(&this->States, &Scaleform::Render::OrigNodeBoundsState::InterfaceImpl, v5);
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
  }
}

