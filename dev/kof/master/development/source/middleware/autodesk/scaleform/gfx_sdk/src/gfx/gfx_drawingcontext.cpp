#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hittest.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::GFx::DrawingContext::DrawingContext(Scaleform::Render::ContextImpl::Context & renCtxt, Scaleform::GFx::ImageCreator * imgCreator); // 0x140358E20
Scaleform::Render::StrokeStyleType::StrokeStyleType(const Scaleform::Render::StrokeStyleType & __that); // 0x140358F70
Scaleform::GFx::DrawingContext::~DrawingContext(); // 0x140358FE0
void Scaleform::GFx::DrawingContext::Clear(); // 0x140359910
void Scaleform::GFx::DrawingContext::SetLineStyle(float lineWidth, unsigned long rgba, bool hinting, unsigned long scaling, unsigned long caps, unsigned long joins, float miterLimit); // 0x14035B450
void Scaleform::GFx::DrawingContext::ChangeLineStyle(float lineWidth, unsigned long rgba, bool hinting, unsigned long scaling, unsigned long caps, unsigned long joins, float miterLimit); // 0x140359750
bool Scaleform::GFx::DrawingContext::SameLineStyle(float lineWidth, unsigned long rgba, bool hinting, unsigned long scaling, unsigned long caps, unsigned long joins, float miterLimit); // 0x14035B340
unsigned long Scaleform::GFx::DrawingContext::SetNewFill(); // 0x14035B500
Scaleform::Render::ComplexFill * Scaleform::GFx::DrawingContext::CreateNewComplexFill(); // 0x140359E30
Scaleform::Render::ComplexFill * Scaleform::GFx::DrawingContext::CreateLineComplexFill(); // 0x140359C40
void Scaleform::GFx::DrawingContext::BeginFill(); // 0x140359630
void Scaleform::GFx::DrawingContext::BeginSolidFill(unsigned long rgba); // 0x140359680
void Scaleform::GFx::DrawingContext::BeginBitmapFill(Scaleform::GFx::FillType fillType, Scaleform::GFx::ImageResource * pimageRes, const Scaleform::Render::Matrix2x4<float> & mtx); // 0x140359300
void Scaleform::GFx::DrawingContext::EndFill(); // 0x14035A1E0
void Scaleform::GFx::DrawingContext::MoveTo(float x, float y); // 0x14035A6B0
void Scaleform::GFx::DrawingContext::LineTo(float x, float y); // 0x14035A630
void Scaleform::GFx::DrawingContext::CurveTo(float cx, float cy, float ax, float ay); // 0x140359F60
void Scaleform::GFx::DrawingContext::NewPath(float x, float y); // 0x14035A7B0
void Scaleform::GFx::DrawingContext::FinishPath(); // 0x14035A280
bool Scaleform::GFx::DrawingContext::AcquirePath(bool newShapeFlag); // 0x140359180
void Scaleform::GFx::DrawingContext::ComputeBound(Scaleform::Render::Rect<float> * pRect); // 0x140359A80
bool Scaleform::GFx::DrawingContext::DefPointTestLocal(const Scaleform::Render::Point<float> & pt, bool testShape, const Scaleform::GFx::DisplayObjectBase * pinst); // 0x14035A010
void Scaleform::GFx::DrawingContext::UpdateRenderNode(); // 0x14035B650
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
};
const unsigned char Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::Sizes[16]; // 0x140749EA0//decompilation failure at 140749EA0!
void __fastcall Scaleform::GFx::DrawingContext::DrawingContext(
        Scaleform::GFx::DrawingContext *this,
        Scaleform::Render::ContextImpl::Context *renCtxt,
        Scaleform::GFx::ImageCreator *imgCreator)
{
  Scaleform::Render::ContextImpl::Context *RenContext; // rsi
  Scaleform::Render::TreeNode::NodeData *v6; // rax
  Scaleform::Render::TreeNode::NodeData *v7; // rdi
  Scaleform::Render::ContextImpl::Entry *EntryHelper; // rax
  Scaleform::Render::TreeContainer *pObject; // rcx
  Scaleform::Render::TreeContainer *v10; // rdi

  this->RefCount = 1;
  this->pPrev = (Scaleform::GFx::DrawingContext *)-1i64;
  this->pNext = (Scaleform::GFx::DrawingContext *)-1i64;
  this->__vftable = (Scaleform::GFx::DrawingContext_vtbl *)&Scaleform::GFx::DrawingContext::`vftable';
  this->pTreeContainer.pObject = 0i64;
  this->RenContext = renCtxt;
  if ( imgCreator )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)imgCreator);
  this->ImgCreator.pObject = imgCreator;
  this->Shapes.pObject = 0i64;
  *(_QWORD *)&this->mFillStyle.Color = 0i64;
  this->mFillStyle.pFill.pObject = 0i64;
  *(_QWORD *)&this->mLineStyle.Width = 0i64;
  *(_QWORD *)&this->mLineStyle.Flags = 0i64;
  *(_QWORD *)&this->mLineStyle.Color = 0i64;
  this->mLineStyle.pFill.pObject = 0i64;
  this->mLineStyle.pDashes.pObject = 0i64;
  *(_QWORD *)&this->ClearToIndex = 0i64;
  *(_QWORD *)&this->PosInfo.StartX = 0i64;
  *(_QWORD *)&this->PosInfo.LastX = 0i64;
  *(_QWORD *)&this->PosInfo.FillBase = 0i64;
  *(_QWORD *)&this->PosInfo.NumFillBits = 0i64;
  *(_QWORD *)&this->PosInfo.Fill0 = 0i64;
  this->PosInfo.Stroke = 0;
  this->PosInfo.Sfactor = 1.0;
  this->PosInfo.Initialized = 0;
  RenContext = this->RenContext;
  this->States = 1;
  this->pPrev = 0i64;
  this->pNext = 0i64;
  v6 = (Scaleform::Render::TreeNode::NodeData *)RenContext->pHeap->Alloc(RenContext->pHeap, 160ui64, 0i64);
  v7 = v6;
  if ( v6 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(v6, ET_Container);
    v7->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeContainer::NodeData::`vftable';
    *(_QWORD *)&v7[1].Type = 0i64;
    v7[1].__vftable = 0i64;
  }
  EntryHelper = Scaleform::Render::ContextImpl::Context::createEntryHelper(RenContext, v7);
  pObject = this->pTreeContainer.pObject;
  v10 = (Scaleform::Render::TreeContainer *)EntryHelper;
  if ( pObject )
  {
    if ( pObject->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(pObject);
  }
  this->pTreeContainer.pObject = v10;
  Scaleform::GFx::DrawingContext::Clear(this);
}

void __fastcall Scaleform::Render::StrokeStyleType::StrokeStyleType(
        Scaleform::Render::StrokeStyleType *this,
        const Scaleform::Render::StrokeStyleType *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  this->Width = __that->Width;
  this->Units = __that->Units;
  this->Flags = __that->Flags;
  this->Miter = __that->Miter;
  this->Color = __that->Color;
  pObject = (Scaleform::RefCountVImpl *)__that->pFill.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->pFill.pObject = __that->pFill.pObject;
  v5 = (Scaleform::RefCountVImpl *)__that->pDashes.pObject;
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  this->pDashes.pObject = __that->pDashes.pObject;
}

void __fastcall Scaleform::GFx::DrawingContext::~DrawingContext(Scaleform::GFx::DrawingContext *this)
{
  bool v1; // zf
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v4; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::Render::TreeContainer *v8; // rcx

  v1 = this->pPrev == 0i64;
  this->__vftable = (Scaleform::GFx::DrawingContext_vtbl *)&Scaleform::GFx::DrawingContext::`vftable';
  if ( !v1 && this->pNext )
  {
    this->pPrev->pNext = this->pNext;
    this->pNext->pPrev = this->pPrev;
    this->pPrev = (Scaleform::GFx::DrawingContext *)-1i64;
    this->pNext = (Scaleform::GFx::DrawingContext *)-1i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->mLineStyle.pDashes.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v4 = (Scaleform::RefCountVImpl *)this->mLineStyle.pFill.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  v5 = (Scaleform::RefCountVImpl *)this->mFillStyle.pFill.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  v6 = (Scaleform::RefCountVImpl *)this->Shapes.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  v7 = (Scaleform::RefCountVImpl *)this->ImgCreator.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  v8 = this->pTreeContainer.pObject;
  if ( v8 )
  {
    v1 = v8->RefCount-- == 1;
    if ( v1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v8);
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

char __fastcall Scaleform::GFx::DrawingContext::AcquirePath(Scaleform::GFx::DrawingContext *this, bool newShapeFlag)
{
  Scaleform::GFx::DrawingContext::PackedShape *pObject; // rcx
  Scaleform::GFx::DrawingContext::PackedShape *v5; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rax
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v8; // [rsp+20h] [rbp-18h] BYREF
  float Multiplier; // [rsp+28h] [rbp-10h]

  pObject = this->Shapes.pObject;
  if ( !pObject || pObject->IsEmpty(pObject) )
    return 0;
  this->States |= 0x80u;
  if ( newShapeFlag && (this->States & 0x10) != 0 )
    Scaleform::GFx::DrawingContext::FinishPath(this);
  if ( (this->States & 8) != 0 )
  {
    v5 = this->Shapes.pObject;
    pContainer = v5->pContainer;
    Multiplier = v5->Multiplier;
    v8.Data = pContainer;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteEndPath(&v8);
    this->States &= ~8u;
  }
  if ( newShapeFlag )
    this->States |= 1u;
  else
    this->States &= ~1u;
  return 1;
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::AddFillStyle(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        const Scaleform::Render::FillStyleType *fill)
{
  Scaleform::Render::FillStyleType *v4; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->FillStyles.Data,
    &this->FillStyles,
    this->FillStyles.Data.Size + 1);
  v4 = &this->FillStyles.Data.Data[this->FillStyles.Data.Size - 1];
  if ( v4 )
  {
    v4->Color = fill->Color;
    pObject = (Scaleform::RefCountVImpl *)fill->pFill.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v4->pFill.pObject = fill->pFill.pObject;
  }
  return LODWORD(this->FillStyles.Data.Size);
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::AddStrokeStyle(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        const Scaleform::Render::StrokeStyleType *stroke)
{
  Scaleform::Render::StrokeStyleType *v4; // rcx

  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->StrokeStyles.Data,
    &this->StrokeStyles,
    this->StrokeStyles.Data.Size + 1);
  v4 = &this->StrokeStyles.Data.Data[this->StrokeStyles.Data.Size - 1];
  if ( v4 )
    Scaleform::Render::StrokeStyleType::StrokeStyleType(v4, stroke);
  return LODWORD(this->StrokeStyles.Data.Size);
}

void __fastcall Scaleform::GFx::DrawingContext::BeginBitmapFill(
        Scaleform::GFx::DrawingContext *this,
        Scaleform::GFx::FillType fillType,
        Scaleform::GFx::ImageResource *pimageRes,
        const Scaleform::Render::Matrix2x4<float> *mtx)
{
  unsigned int v8; // eax
  unsigned int v9; // er15
  Scaleform::GFx::DrawingContext::PackedShape *pObject; // rcx
  char *v11; // rax
  Scaleform::RefCountVImpl *v12; // rbx
  __m128 v13; // xmm0
  __m128 v14; // xmm4
  Scaleform::Render::ImageBase *pImage; // rcx
  Scaleform::Render::ImageBase_vtbl *v16; // rax
  Scaleform::Render::ImageBase *v17; // rbx
  Scaleform::RefCountVImpl *v18; // r14
  Scaleform::MemoryHeap *v19; // rax
  Scaleform::GFx::ImageCreator *v20; // rcx
  Scaleform::Render::ImageBase *v21; // r8
  __int32 v22; // esi
  __int32 v23; // esi
  __int32 v24; // esi
  Scaleform::Render::FillStyleType *v25; // rsi
  Scaleform::RefCountVImpl *v26; // rax
  Scaleform::RefCountVImpl *v27; // rcx
  unsigned int v28; // [rsp+20h] [rbp-99h] BYREF
  Scaleform::RefCountVImpl *v29; // [rsp+28h] [rbp-91h]
  Scaleform::LogMessageId id; // [rsp+30h] [rbp-89h] BYREF
  Scaleform::Render::Matrix2x4<float> v31; // [rsp+40h] [rbp-79h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+60h] [rbp-59h] BYREF
  int v33; // [rsp+80h] [rbp-39h] BYREF
  Scaleform::MemoryHeap *v34; // [rsp+88h] [rbp-31h]
  int v35; // [rsp+90h] [rbp-29h]
  int v36; // [rsp+94h] [rbp-25h]
  __int128 v37; // [rsp+98h] [rbp-21h]
  __int128 v38; // [rsp+A8h] [rbp-11h]

  v8 = Scaleform::GFx::DrawingContext::SetNewFill(this);
  v9 = v8;
  if ( !v8 )
    return;
  pObject = this->Shapes.pObject;
  v29 = 0i64;
  pObject->GetFillStyle(pObject, v8, (Scaleform::Render::FillStyleType *)&v28);
  v11 = (char *)this->RenContext->pHeap->Alloc(this->RenContext->pHeap, 80i64, 0i64);
  v12 = (Scaleform::RefCountVImpl *)v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v11 = &Scaleform::Render::ComplexFill::`vftable';
    *((_DWORD *)v11 + 2) = 1;
    *((_QWORD *)v11 + 2) = 0i64;
    *((_QWORD *)v11 + 3) = 0i64;
    *((_QWORD *)v11 + 4) = 1065353216i64;
    *((_QWORD *)v11 + 5) = 0i64;
    *((_DWORD *)v11 + 12) = 0;
    *(_QWORD *)(v11 + 52) = 1065353216i64;
    *((_DWORD *)v11 + 15) = 0;
    v11[64] = 0;
    *((_DWORD *)v11 + 17) = -1;
  }
  else
  {
    v12 = 0i64;
  }
  if ( v29 )
    Scaleform::RefCountImpl::Release(v29);
  v13 = *(__m128 *)&mtx->M[0][0];
  v29 = v12;
  v14 = _mm_mul_ps(*(__m128 *)&mtx->M[1][0], (__m128)_xmm);
  *(__m128 *)&m.M[0][0] = _mm_mul_ps(v13, (__m128)_xmm);
  *(_OWORD *)&v31.M[0][0] = _xmm;
  *(__m128 *)&m.M[1][0] = v14;
  *(_OWORD *)&v31.M[1][0] = _xmm;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v31, &m);
  pImage = pimageRes->pImage;
  v12[2] = *(Scaleform::RefCountVImpl *)&v31.M[0][0];
  v16 = pImage->__vftable;
  v12[3] = *(Scaleform::RefCountVImpl *)&v31.M[1][0];
  v17 = 0i64;
  if ( v16->GetImageType(pImage) )
  {
    v17 = pimageRes->pImage;
    if ( v17 )
      v17->AddRef(pimageRes->pImage);
    goto LABEL_13;
  }
  if ( this->ImgCreator.pObject )
  {
    v19 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    v20 = this->ImgCreator.pObject;
    v21 = pimageRes->pImage;
    v33 = 3;
    v34 = v19;
    v35 = 1;
    v36 = 1;
    v37 = 0i64;
    v38 = 0i64;
    v17 = v20->CreateImage(v20, (const Scaleform::GFx::ImageCreateInfo *)&v33, v21);
LABEL_13:
    v18 = v29 + 1;
    if ( v17 )
      v17->AddRef(v17);
    goto LABEL_15;
  }
  id.Id = 135168;
  Scaleform::LogDebugMessage((Scaleform::LogMessageId)&id, "ImageCreator is null in BeginBitmapFill");
  v18 = v29 + 1;
LABEL_15:
  if ( v18->__vftable )
    (*((void (__fastcall **)(Scaleform::RefCountVImpl_vtbl *))v18->~RefCountImplCore + 2))(v18->__vftable);
  v18->__vftable = (Scaleform::RefCountVImpl_vtbl *)v17;
  v22 = fillType - 64;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 == 1 )
          LOBYTE(v29[4].__vftable) = 1;
      }
      else
      {
        LOBYTE(v29[4].__vftable) = 0;
      }
    }
    else
    {
      LOBYTE(v29[4].__vftable) = 3;
    }
  }
  else
  {
    LOBYTE(v29[4].__vftable) = 2;
  }
  v25 = &this->Shapes.pObject->FillStyles.Data.Data[v9 - 1];
  v25->Color = v28;
  v26 = v29;
  if ( v29 )
  {
    Scaleform::Render::RenderBuffer::AddRef(v29);
    v26 = v29;
  }
  v27 = (Scaleform::RefCountVImpl *)v25->pFill.pObject;
  if ( v27 )
  {
    Scaleform::RefCountImpl::Release(v27);
    v26 = v29;
  }
  v25->pFill.pObject = (Scaleform::Render::ComplexFill *)v26;
  if ( (this->States & 0x10) != 0 )
  {
    Scaleform::GFx::DrawingContext::FinishPath(this);
    *(_QWORD *)&this->FillStyle0 = 0i64;
    this->StY = 1.1754944e-38;
    this->StX = 1.1754944e-38;
  }
  this->States |= 0x14u;
  if ( v17 )
    v17->Release(v17);
  if ( v29 )
    Scaleform::RefCountImpl::Release(v29);
}

void __fastcall Scaleform::GFx::DrawingContext::BeginFill(Scaleform::GFx::DrawingContext *this)
{
  if ( (this->States & 0x10) != 0 )
  {
    Scaleform::GFx::DrawingContext::FinishPath(this);
    this->StY = 1.1754944e-38;
    this->States |= 0x14u;
    *(_QWORD *)&this->FillStyle0 = 0i64;
    this->StX = 1.1754944e-38;
  }
  else
  {
    this->States |= 0x14u;
  }
}

void __fastcall Scaleform::GFx::DrawingContext::BeginSolidFill(Scaleform::GFx::DrawingContext *this, unsigned int rgba)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::DrawingContext::PackedShape *v4; // rsi
  __int64 v5; // rbx
  Scaleform::RefCountVImpl *v6; // rcx
  bool v7; // zf

  this->mFillStyle.Color = rgba;
  pObject = (Scaleform::RefCountVImpl *)this->mFillStyle.pFill.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->mFillStyle.pFill.pObject = 0i64;
  v4 = this->Shapes.pObject;
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &v4->FillStyles.Data,
    &v4->FillStyles,
    v4->FillStyles.Data.Size + 1);
  v5 = (__int64)&v4->FillStyles.Data.Data[v4->FillStyles.Data.Size - 1];
  if ( v5 )
  {
    *(_DWORD *)v5 = this->mFillStyle.Color;
    v6 = (Scaleform::RefCountVImpl *)this->mFillStyle.pFill.pObject;
    if ( v6 )
      Scaleform::Render::RenderBuffer::AddRef(v6);
    *(_QWORD *)(v5 + 8) = this->mFillStyle.pFill.pObject;
  }
  v7 = (this->States & 0x10) == 0;
  *(_QWORD *)&this->FillStyle0 = LODWORD(v4->FillStyles.Data.Size);
  if ( !v7 )
  {
    Scaleform::GFx::DrawingContext::FinishPath(this);
    *(_QWORD *)&this->FillStyle0 = 0i64;
    this->StY = 1.1754944e-38;
    this->StX = 1.1754944e-38;
  }
  this->States |= 0x14u;
}

void __fastcall Scaleform::GFx::DrawingContext::ChangeLineStyle(
        Scaleform::GFx::DrawingContext *this,
        float lineWidth,
        unsigned int rgba,
        bool hinting,
        unsigned int scaling,
        unsigned int caps,
        unsigned int joins,
        float miterLimit)
{
  float v8; // xmm6_4
  Scaleform::GFx::DrawingContext::PackedShape *pObject; // rcx
  Scaleform::GFx::DrawingContext::PackedShape *v13; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rax
  Scaleform::GFx::DrawingContext::PackedShape *v15; // rcx
  Scaleform::GFx::DrawingContext::PackedShape *v16; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v17; // rax
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v18; // [rsp+40h] [rbp-48h] BYREF
  float Multiplier; // [rsp+48h] [rbp-40h]

  v8 = lineWidth;
  if ( (rgba & 0xFF000000) != 0 )
  {
    if ( lineWidth <= 0.0 )
      v8 = *(float *)&FLOAT_0_050000001;
    if ( !Scaleform::GFx::DrawingContext::SameLineStyle(this, v8, rgba, hinting, scaling, caps, joins, miterLimit) )
    {
      pObject = this->Shapes.pObject;
      if ( pObject && !pObject->IsEmpty(pObject) )
      {
        this->States |= 0x80u;
        if ( (this->States & 8) != 0 )
        {
          v13 = this->Shapes.pObject;
          pContainer = v13->pContainer;
          Multiplier = v13->Multiplier;
          v18.Data = pContainer;
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteEndPath(&v18);
          this->States &= ~8u;
        }
        this->States &= ~1u;
      }
      Scaleform::GFx::DrawingContext::SetLineStyle(this, v8, rgba, hinting, scaling, caps, joins, miterLimit);
    }
  }
  else if ( this->Shapes.pObject->GetStrokeStyleCount(this->Shapes.pObject) && this->StrokeStyle )
  {
    v15 = this->Shapes.pObject;
    if ( v15 && !v15->IsEmpty(v15) )
    {
      this->States |= 0x80u;
      if ( (this->States & 8) != 0 )
      {
        v16 = this->Shapes.pObject;
        v17 = v16->pContainer;
        Multiplier = v16->Multiplier;
        v18.Data = v17;
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteEndPath(&v18);
        this->States &= ~8u;
      }
      this->States &= ~1u;
    }
    this->States &= ~2u;
    this->StrokeStyle = 0;
  }
}

void __fastcall Scaleform::GFx::DrawingContext::Clear(Scaleform::GFx::DrawingContext *this)
{
  Scaleform::GFx::DrawingContext::PackedShape *v2; // rax
  unsigned int v3; // ebx
  Scaleform::GFx::DrawingContext::PackedShape *v4; // rsi
  Scaleform::MemoryHeap *pHeap; // r8
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::TreeContainer *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax

  v2 = (Scaleform::GFx::DrawingContext::PackedShape *)this->RenContext->pHeap->Alloc(
                                                        this->RenContext->pHeap,
                                                        128i64,
                                                        0i64);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    pHeap = this->RenContext->pHeap;
    v2->__vftable = (Scaleform::GFx::DrawingContext::PackedShape_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v2->RefCount = 1;
    v2->pContainer = &v2->Container;
    v2->Decoder.Decoder.Data = &v2->Container;
    v2->Decoder.OneOverMultiplier = 1.0;
    v2->StartingPos = 0;
    v2->Multiplier = 1.0;
    v2->FillStyles.Data.Data = 0i64;
    v2->FillStyles.Data.Size = 0i64;
    v2->FillStyles.Data.Policy.Capacity = 0i64;
    v2->StrokeStyles.Data.Data = 0i64;
    v2->StrokeStyles.Data.Size = 0i64;
    v2->StrokeStyles.Data.Policy.Capacity = 0i64;
    v2->__vftable = (Scaleform::GFx::DrawingContext::PackedShape_vtbl *)&Scaleform::GFx::DrawingContext::PackedShape::`vftable';
    v2->Container.Data.Data = 0i64;
    v2->Container.Data.Size = 0i64;
    v2->Container.Data.Policy.Capacity = 0i64;
    v2->Container.Data.pHeap = pHeap;
  }
  else
  {
    v4 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->Shapes.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Shapes.pObject = v4;
  v7 = this->pTreeContainer.pObject;
  this->States = 1;
  *(_QWORD *)&this->Ex = 0i64;
  this->StY = 1.1754944e-38;
  this->StX = 1.1754944e-38;
  *(_QWORD *)&this->StrokeStyle = 0i64;
  this->FillStyle1 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)v7 - ((unsigned int)v7 & 0xFFFFF000) - 56) / 56)
                 + 40);
  v9 = *(_QWORD *)(v8 + 144);
  if ( !v9 )
    goto LABEL_10;
  if ( (v9 & 1) == 0 )
  {
    LOBYTE(v3) = *(_QWORD *)(v8 + 152) != 0i64;
    ++v3;
LABEL_10:
    this->ClearToIndex = v3;
    goto LABEL_11;
  }
  this->ClearToIndex = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFEui64) + 8);
LABEL_11:
  this->States = -127;
}

void __fastcall Scaleform::GFx::DrawingContext::ComputeBound(
        Scaleform::GFx::DrawingContext *this,
        Scaleform::Render::Rect<float> *pRect)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  Scaleform::Render::Rect<float> v14; // [rsp+20h] [rbp-38h] BYREF

  Scaleform::GFx::DrawingContext::UpdateRenderNode(this);
  v4 = 0i64;
  v5 = *(_QWORD *)(((unsigned __int64)this->pTreeContainer.pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20);
  v6 = (unsigned int)((int)(LODWORD(this->pTreeContainer.pObject)
                          - ((__int64)this->pTreeContainer.pObject & 0xFFFFF000)
                          - 56)
                    / 56);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v6 + 40) + 144i64);
  if ( v7 )
  {
    v8 = (v7 & 1) != 0 ? *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFFEui64) + 8) : (*(_QWORD *)(*(_QWORD *)(v5 + 8 * v6 + 40)
                                                                                     + 152i64) != 0i64)
                                                                        + 1i64;
    if ( v8 )
    {
      do
      {
        v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pTreeContainer.pObject & 0xFFFFFFFFFFFFF000ui64)
                                              + 0x20)
                                  + 8i64
                                  * (unsigned int)((int)(LODWORD(this->pTreeContainer.pObject)
                                                       - ((__int64)this->pTreeContainer.pObject & 0xFFFFF000)
                                                       - 56)
                                                 / 56)
                                  + 40)
                      + 144i64);
        if ( (*(_BYTE *)v9 & 1) != 0 )
          v9 = (_QWORD *)((*v9 & 0xFFFFFFFFFFFFFFFEui64) + 16);
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v9[v4] & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                    + 8i64 * (unsigned int)((int)(v9[v4] - (v9[v4] & 0xFFFFF000) - 56) / 56)
                                    + 40)
                        + 144i64)
            + 16i64;
        (*(void (__fastcall **)(__int64, Scaleform::Render::Rect<float> *))(*(_QWORD *)v10 + 40i64))(v10, &v14);
        if ( v4 )
        {
          v11 = fmaxf(pRect->x2, v14.x2);
          v12 = fminf(v14.y1, pRect->y1);
          v13 = fmaxf(pRect->y2, v14.y2);
          pRect->x1 = fminf(v14.x1, pRect->x1);
          pRect->x2 = v11;
          pRect->y1 = v12;
          pRect->y2 = v13;
        }
        else
        {
          *pRect = v14;
        }
        ++v4;
      }
      while ( v4 < v8 );
    }
  }
}

Scaleform::RefCountVImpl *__fastcall Scaleform::GFx::DrawingContext::CreateLineComplexFill(
        Scaleform::GFx::DrawingContext *this)
{
  Scaleform::GFx::DrawingContext::PackedShape *pObject; // rsi
  Scaleform::Render::StrokeStyleType *v3; // rcx
  __int64 v4; // rax
  Scaleform::RefCountVImpl *v5; // rbx
  Scaleform::GFx::DrawingContext::PackedShape *v6; // rcx
  __int64 StrokeStyle; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  Scaleform::Render::StrokeStyleType *Data; // rdi
  Scaleform::RefCountVImpl *v11; // rax
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rax
  Scaleform::RefCountVImpl *v14; // rcx
  int v16[6]; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::RefCountVImpl *v17[2]; // [rsp+38h] [rbp-20h]

  if ( (this->States & 2) == 0 )
  {
    pObject = this->Shapes.pObject;
    Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &pObject->StrokeStyles.Data,
      &pObject->StrokeStyles,
      pObject->StrokeStyles.Data.Size + 1);
    v3 = &pObject->StrokeStyles.Data.Data[pObject->StrokeStyles.Data.Size - 1];
    if ( v3 )
      Scaleform::Render::StrokeStyleType::StrokeStyleType(v3, &this->mLineStyle);
    this->StrokeStyle = pObject->StrokeStyles.Data.Size;
  }
  v4 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->RenContext->pHeap->Alloc)(
         this->RenContext->pHeap,
         80i64);
  v5 = (Scaleform::RefCountVImpl *)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v4 = &Scaleform::Render::ComplexFill::`vftable';
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)(v4 + 16) = 0i64;
    *(_QWORD *)(v4 + 24) = 0i64;
    *(_QWORD *)(v4 + 32) = 1065353216i64;
    *(_QWORD *)(v4 + 40) = 0i64;
    *(_DWORD *)(v4 + 48) = 0;
    *(_QWORD *)(v4 + 52) = 1065353216i64;
    *(_DWORD *)(v4 + 60) = 0;
    *(_BYTE *)(v4 + 64) = 0;
    *(_DWORD *)(v4 + 68) = -1;
  }
  else
  {
    v5 = 0i64;
  }
  v6 = this->Shapes.pObject;
  StrokeStyle = this->StrokeStyle;
  *(_OWORD *)v17 = 0i64;
  v6->GetStrokeStyle(v6, StrokeStyle, (Scaleform::Render::StrokeStyleType *)v16);
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  if ( v17[0] )
    Scaleform::RefCountImpl::Release(v17[0]);
  v8 = this->StrokeStyle - 1;
  v17[0] = v5;
  v9 = v8;
  Data = this->Shapes.pObject->StrokeStyles.Data.Data;
  LODWORD(Data[v9].Width) = v16[0];
  LODWORD(Data[v9].Units) = v16[1];
  Data[v9].Flags = v16[2];
  LODWORD(Data[v9].Miter) = v16[3];
  Data[v9].Color = v16[4];
  v11 = v17[0];
  if ( v17[0] )
  {
    Scaleform::Render::RenderBuffer::AddRef(v17[0]);
    v11 = v17[0];
  }
  v12 = (Scaleform::RefCountVImpl *)Data[v9].pFill.pObject;
  if ( v12 )
  {
    Scaleform::RefCountImpl::Release(v12);
    v11 = v17[0];
  }
  Data[v9].pFill.pObject = (Scaleform::Render::ComplexFill *)v11;
  v13 = v17[1];
  if ( v17[1] )
  {
    Scaleform::Render::RenderBuffer::AddRef(v17[1]);
    v13 = v17[1];
  }
  v14 = (Scaleform::RefCountVImpl *)Data[v9].pDashes.pObject;
  if ( v14 )
  {
    Scaleform::RefCountImpl::Release(v14);
    v13 = v17[1];
  }
  Data[v9].pDashes.pObject = (Scaleform::Render::DashArray *)v13;
  if ( v17[1] )
    Scaleform::RefCountImpl::Release(v17[1]);
  if ( v17[0] )
    Scaleform::RefCountImpl::Release(v17[0]);
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  return v5;
}

Scaleform::RefCountVImpl *__fastcall Scaleform::GFx::DrawingContext::CreateNewComplexFill(
        Scaleform::GFx::DrawingContext *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  Scaleform::RefCountVImpl *v4; // rbx
  Scaleform::GFx::DrawingContext::PackedShape *pObject; // rcx
  Scaleform::GFx::DrawingContext::PackedShape *v6; // rax
  __int64 v7; // rdi
  Scaleform::RefCountVImpl *v8; // rax
  Scaleform::RefCountVImpl *v9; // rcx
  int v11; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::RefCountVImpl *v12; // [rsp+28h] [rbp-10h]

  v2 = Scaleform::GFx::DrawingContext::SetNewFill(this);
  v3 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->RenContext->pHeap->Alloc)(
         this->RenContext->pHeap,
         80i64);
  v4 = (Scaleform::RefCountVImpl *)v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v3 = &Scaleform::Render::ComplexFill::`vftable';
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)(v3 + 16) = 0i64;
    *(_QWORD *)(v3 + 24) = 0i64;
    *(_QWORD *)(v3 + 32) = 1065353216i64;
    *(_QWORD *)(v3 + 40) = 0i64;
    *(_DWORD *)(v3 + 48) = 0;
    *(_QWORD *)(v3 + 52) = 1065353216i64;
    *(_DWORD *)(v3 + 60) = 0;
    *(_BYTE *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 68) = -1;
  }
  else
  {
    v4 = 0i64;
  }
  pObject = this->Shapes.pObject;
  v12 = 0i64;
  pObject->GetFillStyle(pObject, v2, (Scaleform::Render::FillStyleType *)&v11);
  if ( v4 )
    Scaleform::Render::RenderBuffer::AddRef(v4);
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  v6 = this->Shapes.pObject;
  v12 = v4;
  v7 = (__int64)&v6->FillStyles.Data.Data[v2 - 1];
  *(_DWORD *)v7 = v11;
  v8 = v12;
  if ( v12 )
  {
    Scaleform::Render::RenderBuffer::AddRef(v12);
    v8 = v12;
  }
  v9 = *(Scaleform::RefCountVImpl **)(v7 + 8);
  if ( v9 )
  {
    Scaleform::RefCountImpl::Release(v9);
    v8 = v12;
  }
  *(_QWORD *)(v7 + 8) = v8;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  return v4;
}

void __fastcall Scaleform::GFx::DrawingContext::CurveTo(
        Scaleform::GFx::DrawingContext *this,
        float cx,
        float cy,
        float ax,
        float ay)
{
  if ( (this->States & 8) == 0 )
    Scaleform::GFx::DrawingContext::NewPath(this, this->Ex, this->Ey);
  Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::QuadTo(
    this->Shapes.pObject,
    &this->PosInfo,
    cx,
    cy,
    ax,
    ay);
  this->States &= ~2u;
  this->States |= 0x80u;
  this->Ex = ax;
  this->Ey = ay;
}

bool __fastcall Scaleform::GFx::DrawingContext::DefPointTestLocal(
        Scaleform::GFx::DrawingContext *this,
        const Scaleform::Render::Point<float> *pt,
        bool testShape,
        const Scaleform::GFx::DisplayObjectBase *pinst)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rbp
  float y; // xmm1_4
  int v16[4]; // [rsp+20h] [rbp-48h] BYREF

  Scaleform::GFx::DrawingContext::UpdateRenderNode(this);
  v7 = 0i64;
  v8 = *(_QWORD *)(((unsigned __int64)this->pTreeContainer.pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20);
  v9 = (unsigned int)((int)(LODWORD(this->pTreeContainer.pObject)
                          - ((__int64)this->pTreeContainer.pObject & 0xFFFFF000)
                          - 56)
                    / 56);
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8 * v9 + 40) + 144i64);
  if ( !v10 )
    return 0;
  v11 = (v10 & 1) != 0 ? *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFFEui64) + 8) : (*(_QWORD *)(*(_QWORD *)(v8 + 8 * v9 + 40)
                                                                                      + 152i64) != 0i64)
                                                                         + 1i64;
  if ( !v11 )
    return 0;
  while ( 1 )
  {
    v12 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pTreeContainer.pObject & 0xFFFFFFFFFFFFF000ui64)
                                           + 0x20)
                               + 8i64
                               * (unsigned int)((int)(LODWORD(this->pTreeContainer.pObject)
                                                    - ((__int64)this->pTreeContainer.pObject & 0xFFFFF000)
                                                    - 56)
                                              / 56)
                               + 40)
                   + 144i64);
    if ( (*(_BYTE *)v12 & 1) != 0 )
      v12 = (_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFEui64) + 16);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((v12[v7] & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                + 8i64 * (unsigned int)((int)(v12[v7] - (v12[v7] & 0xFFFFF000) - 56) / 56)
                                + 40)
                    + 144i64);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v13 + 16) + 40i64))(v13 + 16, v16);
    if ( *(float *)&v16[2] >= pt->x && pt->x >= *(float *)v16 )
    {
      y = pt->y;
      if ( *(float *)&v16[3] >= y && y >= *(float *)&v16[1] )
        break;
    }
    if ( ++v7 >= v11 )
      return 0;
  }
  return !testShape
      || Scaleform::Render::HitTestFill<Scaleform::Render::Matrix2x4<float>>(
           *(const Scaleform::Render::ShapeDataInterface **)(v13 + 88),
           (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152],
           pt->x,
           pt->y);
}

void __fastcall Scaleform::GFx::DrawingContext::EndFill(Scaleform::GFx::DrawingContext *this)
{
  Scaleform::GFx::DrawingContext::FinishPath(this);
  this->StY = 1.1754944e-38;
  *(_QWORD *)&this->FillStyle0 = 0i64;
  this->StX = 1.1754944e-38;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rdi
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  _BYTE *v5; // rcx

  pContainer = this->pContainer;
  v2 = pContainer->Data.Size + 1;
  if ( v2 >= pContainer->Data.Size )
  {
    if ( v2 <= pContainer->Data.Policy.Capacity )
      goto LABEL_7;
    v3 = v2 + (v2 >> 2);
  }
  else
  {
    if ( v2 >= pContainer->Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v3 = pContainer->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->pContainer->Data,
    pContainer->Data.pHeap,
    v3);
LABEL_7:
  v4 = (__int64)(pContainer->Data.Data - 1);
  pContainer->Data.Size = v2;
  v5 = (_BYTE *)(v2 + v4);
  if ( v5 )
    *v5 = 0;
}

void __fastcall Scaleform::GFx::DrawingContext::FinishPath(Scaleform::GFx::DrawingContext *this)
{
  float StX; // xmm1_4
  unsigned __int8 States; // al
  float Ex; // xmm0_4

  StX = this->StX;
  if ( StX != 1.1754944e-38 || this->StY != 1.1754944e-38 || (this->States & 8) != 0 )
  {
    States = this->States;
    if ( (States & 0x10) != 0 )
    {
      Ex = this->Ex;
      this->States = States & 0xEF;
      if ( Ex != StX || this->Ey != this->StY )
        Scaleform::GFx::DrawingContext::LineTo(this, StX, this->StY);
    }
  }
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int idx,
        Scaleform::Render::FillStyleType *p)
{
  Scaleform::Render::ComplexFill *v4; // rax
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::Render::FillStyleType *v6; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v8; // rcx

  if ( idx <= this->FillStyles.Data.Size )
  {
    v6 = &this->FillStyles.Data.Data[idx - 1];
    p->Color = v6->Color;
    pObject = (Scaleform::RefCountVImpl *)v6->pFill.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v8 = (Scaleform::RefCountVImpl *)p->pFill.pObject;
    if ( v8 )
      Scaleform::RefCountImpl::Release(v8);
    v4 = v6->pFill.pObject;
  }
  else
  {
    if ( __TSS0__4__GetFillStyle___ShapeDataPacked_V__ArrayDH_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUFillStyleType_34__Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
    {
      Init_thread_header(&__TSS0__4__GetFillStyle___ShapeDataPacked_V__ArrayDH_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUFillStyleType_34__Z_4HA);
      if ( __TSS0__4__GetFillStyle___ShapeDataPacked_V__ArrayDH_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUFillStyleType_34__Z_4HA == -1 )
      {
        `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.Color = 0;
        `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject = 0i64;
        atexit(`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::`dynamic atexit destructor for 'defaultFillStyle'');
        Init_thread_footer(&__TSS0__4__GetFillStyle___ShapeDataPacked_V__ArrayDH_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUFillStyleType_34__Z_4HA);
      }
    }
    p->Color = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.Color;
    v4 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject;
    if ( `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject);
      v4 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject;
    }
    v5 = (Scaleform::RefCountVImpl *)p->pFill.pObject;
    if ( v5 )
    {
      Scaleform::RefCountImpl::Release(v5);
      p->pFill.pObject = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject;
      return;
    }
  }
  p->pFill.pObject = v4;
}

__int64 __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  return LODWORD(this->Strokes.Data.Size);
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(
        AgDisplay *this)
{
  return (unsigned int)this->m_windowMode;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int idx,
        Scaleform::Render::StrokeStyleType *p)
{
  Scaleform::Render::ComplexFill *pObject; // rax
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::Render::DashArray *v6; // rax
  Scaleform::RefCountVImpl *v7; // rcx

  if ( idx <= this->StrokeStyles.Data.Size )
  {
    Scaleform::Render::StrokeStyleType::operator=(p, &this->StrokeStyles.Data.Data[idx - 1]);
  }
  else
  {
    if ( __TSS0__4__GetStrokeStyle___ShapeDataPacked_V__ArrayDH_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUStrokeStyleType_34__Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
    {
      Init_thread_header(&__TSS0__4__GetStrokeStyle___ShapeDataPacked_V__ArrayDH_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUStrokeStyleType_34__Z_4HA);
      if ( __TSS0__4__GetStrokeStyle___ShapeDataPacked_V__ArrayDH_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUStrokeStyleType_34__Z_4HA == -1 )
      {
        *(_QWORD *)&`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Width = 0i64;
        *(_QWORD *)&`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Flags = 0i64;
        `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Color = 0;
        *(_OWORD *)&`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject = 0i64;
        atexit(`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::`dynamic atexit destructor for 'defaultStrokeStyle'');
        Init_thread_footer(&__TSS0__4__GetStrokeStyle___ShapeDataPacked_V__ArrayDH_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUStrokeStyleType_34__Z_4HA);
      }
    }
    p->Width = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Width;
    p->Units = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Units;
    p->Flags = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Flags;
    p->Miter = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Miter;
    p->Color = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Color;
    pObject = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject;
    if ( `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject);
      pObject = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject;
    }
    v5 = (Scaleform::RefCountVImpl *)p->pFill.pObject;
    if ( v5 )
    {
      Scaleform::RefCountImpl::Release(v5);
      pObject = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject;
    }
    p->pFill.pObject = pObject;
    v6 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject;
    if ( `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject);
      v6 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject;
    }
    v7 = (Scaleform::RefCountVImpl *)p->pDashes.pObject;
    if ( v7 )
    {
      Scaleform::RefCountImpl::Release(v7);
      v6 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject;
    }
    p->pDashes.pObject = v6;
  }
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Concurrency::details::VirtualProcessorRoot *this)
{
  return this->m_executionResource.m_nodeId;
}

bool __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::IsEmpty(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rdx

  pContainer = this->pContainer;
  return !pContainer || pContainer->Data.Size <= this->StartingPos;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float x,
        float y)
{
  float Multiplier; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // edi
  int v9; // esi
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v10; // [rsp+20h] [rbp-18h] BYREF
  float v11; // [rsp+28h] [rbp-10h]

  Multiplier = this->Multiplier;
  v6 = Multiplier * x;
  v10.Data = this->pContainer;
  v11 = Multiplier;
  v7 = Multiplier * y;
  v8 = (int)v6 - pos->LastX;
  v9 = (int)v7 - pos->LastY;
  if ( (int)v7 == pos->LastY )
  {
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
      &v10,
      v8);
  }
  else if ( v8 )
  {
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
      &v10,
      v8,
      v9);
  }
  else
  {
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
      &v10,
      v9);
  }
  pos->LastX += v8;
  pos->LastY += v9;
}

void __fastcall Scaleform::GFx::DrawingContext::LineTo(Scaleform::GFx::DrawingContext *this, float x, float y)
{
  if ( (this->States & 8) == 0 )
    Scaleform::GFx::DrawingContext::NewPath(this, this->Ex, this->Ey);
  Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::LineTo(
    this->Shapes.pObject,
    &this->PosInfo,
    x,
    y);
  this->States &= ~2u;
  this->States |= 0x80u;
  this->Ex = x;
  this->Ey = y;
}

void __fastcall Scaleform::GFx::DrawingContext::MoveTo(Scaleform::GFx::DrawingContext *this, float x, float y)
{
  unsigned __int8 States; // al
  float StX; // xmm1_4
  __int128 v7[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]

  memset(v7, 0, sizeof(v7));
  LODWORD(v8) = FLOAT_1_0;
  *(_OWORD *)&this->PosInfo.Pos = v7[0];
  BYTE4(v8) = 0;
  States = this->States;
  *(_OWORD *)&this->PosInfo.LastY = v7[1];
  *(_OWORD *)&this->PosInfo.NumStrokeBits = v7[2];
  *(_QWORD *)&this->PosInfo.Sfactor = v8;
  if ( (States & 4) == 0 && (States & 0x10) != 0 )
  {
    StX = this->StX;
    if ( this->Ex != StX || this->Ey != this->StY )
      Scaleform::GFx::DrawingContext::LineTo(this, StX, this->StY);
  }
  Scaleform::GFx::DrawingContext::NewPath(this, x, y);
  this->States &= ~4u;
  this->StX = x;
  this->StY = y;
}

void __fastcall Scaleform::GFx::DrawingContext::NewPath(Scaleform::GFx::DrawingContext *this, float x, float y)
{
  Scaleform::Render::ShapePathType v4; // er8

  Scaleform::GFx::DrawingContext::AcquirePath(this, this->States & 1);
  v4 = Shape_NewPath;
  if ( (this->States & 5) != 0 )
    v4 = Shape_NewLayer;
  Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
    this->Shapes.pObject,
    &this->PosInfo,
    v4,
    this->FillStyle0,
    this->FillStyle1,
    this->StrokeStyle,
    x,
    y);
  this->States &= ~1u;
  this->States |= 0x88u;
  this->Ex = x;
  this->Ey = y;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::QuadTo(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float cx,
        float cy,
        float ax,
        float ay)
{
  float Multiplier; // xmm1_4
  int v8; // edi
  int v9; // ebx
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v10; // [rsp+30h] [rbp-18h] BYREF
  float v11; // [rsp+38h] [rbp-10h]

  Multiplier = this->Multiplier;
  v10.Data = this->pContainer;
  v11 = Multiplier;
  v8 = (int)(float)(Multiplier * ax) - pos->LastX;
  v9 = (int)(float)(Multiplier * ay) - pos->LastY;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteQuad(
    &v10,
    (int)(float)(Multiplier * cx) - pos->LastX,
    (int)(float)(Multiplier * cy) - pos->LastY,
    v8,
    v9);
  pos->LastX += v8;
  pos->LastY += v9;
}

__int64 __fastcall Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
        Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int pos,
        int *data)
{
  __int64 v3; // r9
  __int64 v5; // rdx
  unsigned __int8 *v6; // r8
  unsigned __int8 *v7; // r11
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // r9
  unsigned __int8 v12; // cl
  unsigned int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // er8
  int v17; // edx
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // er8
  int v21; // edx
  int v22; // eax
  unsigned int v23; // er8
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // er8
  int v27; // eax
  int v28; // edx
  int v29; // er9
  unsigned int v30; // er8
  int v31; // er9
  int v32; // er8
  unsigned int v33; // er8
  int v34; // edx
  int v35; // ecx
  unsigned int v36; // er8
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // er8
  unsigned int v40; // er9
  int v41; // edx
  unsigned int v42; // edx
  char v43; // al
  int v44; // ecx
  int v45; // eax
  unsigned int v46; // er8
  unsigned int v47; // er9
  int v48; // edx
  unsigned int v49; // edx
  unsigned __int8 v50; // al
  int v51; // ecx
  int v52; // eax
  unsigned int v53; // er8
  unsigned int v54; // er9
  int v55; // edx
  int v56; // ecx
  unsigned int v57; // edx
  unsigned __int8 v58; // al
  int v59; // ecx
  int v60; // eax
  unsigned int v61; // er8
  unsigned int v62; // er9
  int v63; // edx
  int v64; // ecx
  unsigned int v65; // edx
  unsigned __int8 v66; // al
  int v67; // ecx
  int v68; // eax
  unsigned __int8 v70; // [rsp+0h] [rbp-20h]
  unsigned __int8 v71; // [rsp+1h] [rbp-1Fh] BYREF
  unsigned __int8 v72; // [rsp+2h] [rbp-1Eh]
  unsigned __int8 v73; // [rsp+3h] [rbp-1Dh]
  unsigned __int8 v74; // [rsp+4h] [rbp-1Ch]
  unsigned __int8 v75; // [rsp+5h] [rbp-1Bh]
  unsigned __int8 v76; // [rsp+6h] [rbp-1Ah]
  unsigned __int8 v77; // [rsp+7h] [rbp-19h]
  unsigned __int8 v78; // [rsp+8h] [rbp-18h]
  unsigned __int8 v79; // [rsp+9h] [rbp-17h]
  unsigned __int8 v80; // [rsp+Ah] [rbp-16h]
  unsigned __int8 v81; // [rsp+Bh] [rbp-15h]
  unsigned __int8 v82; // [rsp+Ch] [rbp-14h]
  unsigned __int8 v83; // [rsp+Dh] [rbp-13h]
  unsigned __int8 v84; // [rsp+Eh] [rbp-12h]
  char v85; // [rsp+Fh] [rbp-11h]

  v3 = pos;
  v5 = pos + 1;
  v6 = &v71;
  v7 = this->Data->Data.Data;
  v70 = v7[v3];
  v8 = v70;
  v9 = v70 & 0xF;
  v10 = Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::Sizes[v9];
  if ( Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::Sizes[v9] )
  {
    v11 = Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::Sizes[v9];
    do
    {
      v12 = v7[v5];
      v5 = (unsigned int)(v5 + 1);
      *v6++ = v12;
      --v11;
    }
    while ( v11 );
    v8 = v70;
  }
  v13 = v8;
  switch ( v8 & 0xF )
  {
    case 0:
      *data = 0;
      goto LABEL_7;
    case 1:
      v14 = v71 | (((char)v72 | ((char)v73 << 8)) << 8);
      *data = 0;
      data[1] = (v8 >> 4) | (16 * v14);
      break;
    case 2:
      *data = 1;
LABEL_7:
      data[1] = (16 * (char)v71) | (v8 >> 4);
      break;
    case 3:
      v15 = v71 | (((char)v72 | ((char)v73 << 8)) << 8);
      *data = 1;
      data[1] = (v8 >> 4) | (16 * v15);
      break;
    case 4:
      v16 = (char)v71;
      v17 = (char)(v71 << 6);
      *data = 2;
      data[1] = (v17 | (v8 >> 2)) >> 2;
      data[2] = v16 >> 2;
      break;
    case 5:
      v18 = (v8 >> 4) | (4 * (char)(4 * v71));
      v19 = (4 * (char)v72) | (v71 >> 6);
      *data = 2;
      data[2] = v19;
      data[1] = v18;
      break;
    case 6:
      v20 = v72;
      v21 = v71 | (4 * (char)(v72 << 6));
      *data = 2;
      v22 = (char)v73 << 6;
      data[1] = (v8 >> 4) | (16 * v21);
      data[2] = v22 | (v20 >> 2);
      break;
    case 7:
      v23 = v74;
      v24 = v73 | (4 * (char)(v74 << 6));
      *data = 2;
      v25 = v76 | ((char)v77 << 8);
      data[1] = (v13 >> 4) | (16 * (v71 | ((v72 | (v24 << 8)) << 8)));
      data[2] = (v23 >> 2) | ((v75 | (v25 << 8)) << 6);
      break;
    case 8:
      v26 = v71;
      v27 = (char)(v71 << 7) | (v8 >> 1);
      *data = 3;
      v28 = (char)v72;
      data[1] = v27 >> 3;
      data[2] = (char)(4 * v26) >> 3;
      data[4] = v28 >> 3;
      data[3] = (int)((char)(32 * v28) | (v26 >> 3)) >> 3;
      break;
    case 9:
      v29 = v71 >> 2;
      v30 = v72;
      data[1] = ((char)(32 * v71) | (v8 >> 3)) >> 1;
      v31 = ((char)((_BYTE)v30 << 6) | v29) >> 1;
      v32 = (int)((char)(v73 << 7) | (v30 >> 1)) >> 1;
      data[4] = (char)v73 >> 1;
      *data = 3;
      data[2] = v31;
      data[3] = v32;
      break;
    case 0xA:
      v33 = v71;
      v34 = 2 * (char)(8 * v71);
      *data = 3;
      data[1] = (v8 >> 4) | v34;
      v35 = (v33 >> 5) | (2 * (char)(4 * v72));
      v36 = v72;
      v37 = v73;
      data[2] = v35;
      v38 = 2 * (char)v74;
      data[3] = (2 * (char)(2 * v37)) | (v36 >> 6);
      data[4] = v38 | (v37 >> 7);
      break;
    case 0xB:
      v39 = v71;
      v40 = v73;
      v41 = (v8 >> 4) | (8 * (char)(2 * v71));
      *data = 3;
      data[1] = v41;
      v42 = v74;
      v43 = 8 * v74;
      data[2] = (v39 >> 7) | (2 * (v72 | (4 * (char)((_BYTE)v40 << 6))));
      v44 = (v40 >> 2) | (8 * v43);
      v45 = (char)v75;
      data[3] = v44;
      data[4] = (8 * v45) | (v42 >> 5);
      break;
    case 0xC:
      v46 = v72;
      v47 = v73;
      v48 = (v8 >> 4) | (16 * (v71 | (2 * (char)(v72 << 7))));
      *data = 3;
      data[1] = v48;
      v49 = v75;
      v50 = v75;
      data[2] = (v46 >> 1) | (32 * (char)(4 * v47));
      v51 = (v47 >> 6) | (4 * (v74 | (8 * (char)(32 * v50))));
      v52 = (char)v76;
      data[3] = v51;
      data[4] = (32 * v52) | (v49 >> 3);
      break;
    case 0xD:
      v53 = v72;
      v54 = v74;
      v55 = v71 | (8 * (char)(32 * v72));
      *data = 3;
      v56 = v73 | (4 * (char)((_BYTE)v54 << 6));
      data[1] = (v13 >> 4) | (16 * v55);
      v57 = v76;
      v58 = v76;
      data[2] = (v53 >> 3) | (32 * v56);
      v59 = (v54 >> 2) | ((v75 | (2 * (char)(v58 << 7))) << 6);
      v60 = (char)v77;
      data[3] = v59;
      data[4] = (v60 << 7) | (v57 >> 1);
      break;
    case 0xE:
      v61 = v74;
      v62 = v78;
      v63 = v73 | (8 * (char)(32 * v74));
      *data = 3;
      v64 = v77 | (4 * (char)((_BYTE)v62 << 6));
      data[1] = (v13 >> 4) | (16 * (v71 | ((v72 | (v63 << 8)) << 8)));
      v65 = v82;
      v66 = v82;
      data[2] = (v61 >> 3) | (32 * (v75 | ((v76 | (v64 << 8)) << 8)));
      v67 = (v62 >> 2) | ((v79 | ((v80 | ((v81 | (2 * (char)(v66 << 7))) << 8)) << 8)) << 6);
      v68 = v84;
      data[3] = v67;
      data[4] = (v65 >> 1) | ((v83 | ((v68 | (v85 << 8)) << 8)) << 7);
      break;
    case 0xF:
      *data = 4;
      break;
  }
  return (unsigned int)(v10 + 1);
}

Scaleform::Render::PathEdgeType __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord)
{
  return Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
           &this->Decoder,
           pos,
           coord);
}

__int64 __fastcall Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
        Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord)
{
  __int64 result; // rax
  int v7; // er9
  int v8; // er8
  float v9; // xmm1_4
  int data; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+24h] [rbp-24h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+30h] [rbp-18h]

  pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
                &this->Decoder,
                pos->Pos,
                &data);
  switch ( data )
  {
    case 0:
      pos->LastX += v11;
      goto LABEL_10;
    case 1:
      pos->LastY += v11;
      goto LABEL_10;
    case 2:
      pos->LastX += v11;
      pos->LastY += v12;
LABEL_10:
      result = 1i64;
      *coord = (float)pos->LastX * this->OneOverMultiplier;
      coord[1] = (float)pos->LastY * this->OneOverMultiplier;
      return result;
  }
  if ( data != 3 )
    return 0i64;
  result = 2i64;
  v7 = pos->LastX + v13;
  v8 = pos->LastY + v14;
  v9 = (float)(pos->LastY + v12);
  *coord = (float)(pos->LastX + v11) * this->OneOverMultiplier;
  coord[1] = v9 * this->OneOverMultiplier;
  coord[2] = (float)v7 * this->OneOverMultiplier;
  coord[3] = (float)v8 * this->OneOverMultiplier;
  pos->LastX = v7;
  pos->LastY = v8;
  return result;
}

Scaleform::Render::ShapePathType __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadPathInfo(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        unsigned int *styles)
{
  return Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadPathInfo(
           &this->Decoder,
           pos,
           coord,
           styles);
}

__int64 __fastcall Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadPathInfo(
        Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        unsigned int *styles)
{
  __int64 v5; // rdx
  unsigned __int8 *Data; // r10
  unsigned int v10; // esi
  unsigned int v11; // esi
  int v12; // eax
  unsigned int SInt30; // eax
  int StartX; // edx
  int StartY; // ecx

  v5 = pos->Pos;
  Data = this->Decoder.Data->Data.Data;
  v10 = Data[v5];
  if ( (v10 & 1) != 0 )
  {
    v11 = (v10 >> 1) | (Data[(unsigned int)(v5 + 1)] << 7);
    v12 = 2;
  }
  else
  {
    v11 = v10 >> 1;
    v12 = 1;
  }
  pos->Pos += v12;
  if ( v11 )
  {
    pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
                  &this->Decoder,
                  pos->Pos,
                  styles);
    pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
                  &this->Decoder,
                  pos->Pos,
                  styles + 1);
    pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
                  &this->Decoder,
                  pos->Pos,
                  styles + 2);
    pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadSInt30(
                  &this->Decoder,
                  pos->Pos,
                  &pos->StartX);
    SInt30 = Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadSInt30(
               &this->Decoder,
               pos->Pos,
               &pos->StartY);
    StartX = pos->StartX;
    pos->Pos += SInt30;
    StartY = pos->StartY;
    pos->LastX = StartX;
    pos->LastY = StartY;
    *coord = (float)StartX * this->OneOverMultiplier;
    coord[1] = (float)pos->StartY * this->OneOverMultiplier;
  }
  return v11;
}

__int64 __fastcall Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadSInt30(
        Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int pos,
        int *v)
{
  unsigned __int8 *Data; // r11
  int v4; // er9
  int v5; // er9
  __int64 result; // rax
  int v7; // edx

  Data = this->Data->Data.Data;
  v4 = (char)Data[pos];
  if ( (Data[pos] & 3) != 0 )
  {
    if ( (Data[pos] & 3) == 1 )
    {
      *v = (v4 >> 2) & 0x3F | ((char)Data[pos + 1] << 6);
      return 2i64;
    }
    else
    {
      v5 = (v4 >> 2) & 0x3F;
      if ( (Data[pos] & 3) == 2 )
      {
        result = 3i64;
        v7 = v5 | ((Data[pos + 1] | ((char)Data[pos + 2] << 8)) << 6);
      }
      else
      {
        result = 4i64;
        v7 = v5 | ((Data[pos + 1] | ((Data[pos + 2] | ((char)Data[pos + 3] << 8)) << 8)) << 6);
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

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int8 *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (unsigned __int8 *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, unsigned __int8 *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                  Scaleform::Memory::pGlobalHeap,
                                  Data,
                                  (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64,
                                  pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (unsigned __int8 *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                        pheapAddr,
                                        v6,
                                        &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, unsigned __int8 *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 v3; // rbx

  v3 = newSize;
  if ( newSize >= this->Size )
  {
    if ( newSize <= this->Policy.Capacity )
      goto LABEL_3;
    newSize += newSize >> 2;
  }
  else if ( newSize >= this->Policy.Capacity >> 1 )
  {
LABEL_3:
    this->Size = newSize;
    return;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    this,
    pheapAddr,
    newSize);
  this->Size = v3;
}

bool __fastcall Scaleform::GFx::DrawingContext::SameLineStyle(
        Scaleform::GFx::DrawingContext *this,
        float lineWidth,
        unsigned int rgba,
        bool hinting,
        unsigned int scaling,
        unsigned int caps,
        unsigned int joins,
        float miterLimit)
{
  __int64 StrokeStyle; // rdx
  Scaleform::GFx::DrawingContext::PackedShape *pObject; // rcx
  Scaleform::RefCountVImpl *v14; // rdx
  bool v15; // bl
  int v16[6]; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::RefCountVImpl *v17[2]; // [rsp+38h] [rbp-30h]

  if ( !this->Shapes.pObject->GetStrokeStyleCount(this->Shapes.pObject) )
    return 0;
  StrokeStyle = this->StrokeStyle;
  if ( !(_DWORD)StrokeStyle )
    return 0;
  pObject = this->Shapes.pObject;
  *(_OWORD *)v17 = 0i64;
  pObject->GetStrokeStyle(pObject, StrokeStyle, (Scaleform::Render::StrokeStyleType *)v16);
  v14 = v17[0];
  v15 = !v17[0]
     && v16[4] == rgba
     && COERCE_INT(*(float *)v16 * 20.0) == COERCE_INT(lineWidth * 20.0)
     && v16[2] == (joins | caps | scaling | hinting)
     && COERCE_INT(*(float *)&v16[3] * 20.0) == COERCE_INT(miterLimit * 20.0);
  if ( v17[1] )
  {
    Scaleform::RefCountImpl::Release(v17[1]);
    v14 = v17[0];
  }
  if ( v14 )
    Scaleform::RefCountImpl::Release(v14);
  return v15;
}

void __fastcall Scaleform::GFx::DrawingContext::SetLineStyle(
        Scaleform::GFx::DrawingContext *this,
        float lineWidth,
        unsigned int rgba,
        bool hinting,
        unsigned int scaling,
        unsigned int caps,
        unsigned int joins,
        float miterLimit)
{
  Scaleform::GFx::DrawingContext::PackedShape *pObject; // rsi
  Scaleform::Render::StrokeStyleType *v10; // rcx
  unsigned int Size; // eax

  pObject = this->Shapes.pObject;
  this->mLineStyle.Color = rgba;
  this->mLineStyle.Width = lineWidth;
  this->mLineStyle.Flags = joins | caps | scaling | hinting;
  this->mLineStyle.Miter = miterLimit;
  this->mLineStyle.Units = 0.050000001;
  Scaleform::ArrayDataBase<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &pObject->StrokeStyles.Data,
    &pObject->StrokeStyles,
    pObject->StrokeStyles.Data.Size + 1);
  v10 = &pObject->StrokeStyles.Data.Data[pObject->StrokeStyles.Data.Size - 1];
  if ( v10 )
    Scaleform::Render::StrokeStyleType::StrokeStyleType(v10, &this->mLineStyle);
  Size = pObject->StrokeStyles.Data.Size;
  this->States |= 2u;
  this->StrokeStyle = Size;
}

__int64 __fastcall Scaleform::GFx::DrawingContext::SetNewFill(Scaleform::GFx::DrawingContext *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::DrawingContext::PackedShape *v3; // rsi
  __int64 v4; // rbx
  Scaleform::RefCountVImpl *v5; // rcx
  __int64 result; // rax

  this->mFillStyle.Color = 0;
  pObject = (Scaleform::RefCountVImpl *)this->mFillStyle.pFill.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->mFillStyle.pFill.pObject = 0i64;
  v3 = this->Shapes.pObject;
  Scaleform::ArrayDataBase<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &v3->FillStyles.Data,
    &v3->FillStyles,
    v3->FillStyles.Data.Size + 1);
  v4 = (__int64)&v3->FillStyles.Data.Data[v3->FillStyles.Data.Size - 1];
  if ( v4 )
  {
    *(_DWORD *)v4 = this->mFillStyle.Color;
    v5 = (Scaleform::RefCountVImpl *)this->mFillStyle.pFill.pObject;
    if ( v5 )
      Scaleform::Render::RenderBuffer::AddRef(v5);
    *(_QWORD *)(v4 + 8) = this->mFillStyle.pFill.pObject;
  }
  result = LODWORD(v3->FillStyles.Data.Size);
  *(_QWORD *)&this->FillStyle0 = (unsigned int)result;
  return result;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        Scaleform::Render::ShapePathType type,
        unsigned int leftStyle,
        unsigned int rightStyle,
        unsigned int strokeStyle,
        float startX,
        float startY)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rax
  float v10; // xmm6_4
  int v12; // edx
  int v13; // edx
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v14; // [rsp+20h] [rbp-28h] BYREF
  float Multiplier; // [rsp+28h] [rbp-20h]

  pContainer = this->pContainer;
  Multiplier = this->Multiplier;
  v10 = Multiplier;
  v14.Data = pContainer;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
    &v14,
    type);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    leftStyle);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    rightStyle);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    strokeStyle);
  v12 = (int)(float)(v10 * startX);
  pos->LastX = v12;
  pos->StartX = v12;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
    &v14,
    v12);
  v13 = (int)(float)(v10 * startY);
  pos->LastY = v13;
  pos->StartY = v13;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
    &v14,
    v13);
}

void __fastcall Scaleform::GFx::DrawingContext::UpdateRenderNode(Scaleform::GFx::DrawingContext *this)
{
  unsigned int ClearToIndex; // eax
  Scaleform::GFx::DrawingContext::PackedShape *pObject; // rcx
  Scaleform::GFx::DrawingContext::PackedShape *v4; // rcx
  unsigned int FillStyle0; // er14
  unsigned int StrokeStyle; // er15
  Scaleform::GFx::DrawingContext::PackedShape *v7; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rax
  Scaleform::Render::ShapeMeshProvider *v9; // rax
  Scaleform::Render::ShapeMeshProvider *v10; // rax
  Scaleform::Render::ShapeMeshProvider *v11; // rbp
  Scaleform::Render::TreeShape *v12; // rbx
  Scaleform::GFx::DrawingContext::PackedShape *v13; // rax
  Scaleform::GFx::DrawingContext::PackedShape *v14; // rsi
  Scaleform::MemoryHeap *pHeap; // rdx
  Scaleform::RefCountVImpl *v16; // rcx
  unsigned int v17; // eax
  bool v18; // zf
  unsigned int v19; // eax
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v20; // [rsp+20h] [rbp-28h] BYREF
  float Multiplier; // [rsp+28h] [rbp-20h]

  this->States &= ~0x80u;
  ClearToIndex = this->ClearToIndex;
  if ( ClearToIndex )
  {
    Scaleform::Render::TreeContainer::Remove(this->pTreeContainer.pObject, 0i64, ClearToIndex);
    this->ClearToIndex = 0;
  }
  pObject = this->Shapes.pObject;
  if ( pObject && !pObject->IsEmpty(pObject) )
  {
    v4 = this->Shapes.pObject;
    FillStyle0 = this->FillStyle0;
    StrokeStyle = this->StrokeStyle;
    if ( v4 && !v4->IsEmpty(v4) )
    {
      this->States |= 0x80u;
      if ( (this->States & 0x10) != 0 )
        Scaleform::GFx::DrawingContext::FinishPath(this);
      if ( (this->States & 8) != 0 )
      {
        v7 = this->Shapes.pObject;
        pContainer = v7->pContainer;
        Multiplier = v7->Multiplier;
        v20.Data = pContainer;
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteEndPath(&v20);
        this->States &= ~8u;
      }
      this->States |= 1u;
    }
    Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(this->Shapes.pObject);
    v9 = (Scaleform::Render::ShapeMeshProvider *)this->RenContext->pHeap->Alloc(this->RenContext->pHeap, 144i64, 0i64);
    if ( v9 )
    {
      Scaleform::Render::ShapeMeshProvider::ShapeMeshProvider(v9, this->Shapes.pObject, 0i64);
      v11 = v10;
    }
    else
    {
      v11 = 0i64;
    }
    v12 = Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeShape>(this->RenContext);
    Scaleform::Render::TreeShape::SetShape(v12, v11);
    Scaleform::Render::TreeContainer::Add(this->pTreeContainer.pObject, v12);
    v13 = (Scaleform::GFx::DrawingContext::PackedShape *)this->RenContext->pHeap->Alloc(
                                                           this->RenContext->pHeap,
                                                           128i64,
                                                           0i64);
    v14 = v13;
    if ( v13 )
    {
      pHeap = this->RenContext->pHeap;
      v13->pContainer = &v13->Container;
      v13->__vftable = (Scaleform::GFx::DrawingContext::PackedShape_vtbl *)&Scaleform::RefCountImplCore::`vftable';
      v13->RefCount = 1;
      v13->Decoder.Decoder.Data = &v13->Container;
      v13->Decoder.OneOverMultiplier = 1.0;
      v13->StartingPos = 0;
      v13->Multiplier = 1.0;
      v13->FillStyles.Data.Data = 0i64;
      v13->FillStyles.Data.Size = 0i64;
      v13->FillStyles.Data.Policy.Capacity = 0i64;
      v13->StrokeStyles.Data.Data = 0i64;
      v13->StrokeStyles.Data.Size = 0i64;
      v13->StrokeStyles.Data.Policy.Capacity = 0i64;
      v13->__vftable = (Scaleform::GFx::DrawingContext::PackedShape_vtbl *)&Scaleform::GFx::DrawingContext::PackedShape::`vftable';
      v13->Container.Data.Data = 0i64;
      v13->Container.Data.Size = 0i64;
      v13->Container.Data.Policy.Capacity = 0i64;
      v13->Container.Data.pHeap = pHeap;
    }
    else
    {
      v14 = 0i64;
    }
    v16 = (Scaleform::RefCountVImpl *)this->Shapes.pObject;
    if ( v16 )
      Scaleform::RefCountImpl::Release(v16);
    this->Shapes.pObject = v14;
    if ( FillStyle0 )
    {
      v17 = Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::AddFillStyle(
              this->Shapes.pObject,
              &this->mFillStyle);
      v18 = (this->States & 0x10) == 0;
      this->FillStyle0 = v17;
      if ( !v18 )
      {
        Scaleform::GFx::DrawingContext::FinishPath(this);
        *(_QWORD *)&this->FillStyle0 = 0i64;
        this->StY = 1.1754944e-38;
        this->StX = 1.1754944e-38;
      }
      this->States |= 0x14u;
    }
    if ( StrokeStyle )
    {
      v19 = Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::AddStrokeStyle(
              this->Shapes.pObject,
              &this->mLineStyle);
      this->States |= 2u;
      this->StrokeStyle = v19;
    }
    if ( v12 )
    {
      v18 = v12->RefCount-- == 1;
      if ( v18 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v12);
    }
    if ( v11 )
      v11->Release(&v11->Scaleform::Render::MeshProvider);
  }
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteEndPath(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx
  _BYTE *v6; // rcx

  Data = this->Data;
  v2 = this->Data->Data.Size + 1;
  if ( v2 >= this->Data->Data.Size )
  {
    if ( v2 <= Data->Data.Policy.Capacity )
      goto LABEL_7;
    v3 = v2 + (v2 >> 2);
  }
  else
  {
    if ( v2 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_7;
    v3 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v3);
LABEL_7:
  result = 1i64;
  v5 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v2;
  v6 = (_BYTE *)(v2 + v5);
  if ( v6 )
    *v6 = 15;
  return result;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int x)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned int v3; // eax
  char v6; // bp
  const Scaleform::MemoryHeap *pHeap; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  _BYTE *v11; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v12; // rdi
  int v13; // esi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  _BYTE *v17; // rcx
  char v19; // bp
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  _BYTE *v22; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v23; // rdi
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  _BYTE *v27; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v28; // rdi
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  _BYTE *v32; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v33; // rdi
  int v34; // esi
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  _BYTE *v38; // rcx

  Data = this->Data;
  v3 = x + 2048;
  v6 = 16 * x;
  pHeap = this->Data->Data.pHeap;
  v8 = this->Data->Data.Size + 1;
  if ( v3 <= 0xFFF )
  {
    if ( v8 >= Data->Data.Size )
    {
      if ( v8 <= Data->Data.Policy.Capacity )
        goto LABEL_8;
      v9 = v8 + (v8 >> 2);
    }
    else
    {
      if ( v8 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_8;
      v9 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      pHeap,
      v9);
LABEL_8:
    v10 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v8;
    v11 = (_BYTE *)(v8 + v10);
    if ( v11 )
      *v11 = v6;
    v12 = this->Data;
    v13 = x >> 4;
    v14 = this->Data->Data.Size + 1;
    if ( v14 >= this->Data->Data.Size )
    {
      if ( v14 > v12->Data.Policy.Capacity )
      {
        v15 = v14 + (v14 >> 2);
        goto LABEL_15;
      }
    }
    else if ( v14 < v12->Data.Policy.Capacity >> 1 )
    {
      v15 = this->Data->Data.Size + 1;
LABEL_15:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v12->Data,
        this->Data->Data.pHeap,
        v15);
    }
    v16 = (__int64)(v12->Data.Data - 1);
    v12->Data.Size = v14;
    v17 = (_BYTE *)(v14 + v16);
    if ( v17 )
      *v17 = v13;
    return 2i64;
  }
  v19 = v6 | 1;
  if ( v8 >= Data->Data.Size )
  {
    if ( v8 <= Data->Data.Policy.Capacity )
      goto LABEL_25;
    v20 = v8 + (v8 >> 2);
  }
  else
  {
    if ( v8 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_25;
    v20 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &Data->Data,
    pHeap,
    v20);
LABEL_25:
  v21 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v8;
  v22 = (_BYTE *)(v8 + v21);
  if ( v22 )
    *v22 = v19;
  v23 = this->Data;
  v24 = this->Data->Data.Size + 1;
  if ( v24 >= this->Data->Data.Size )
  {
    if ( v24 <= v23->Data.Policy.Capacity )
      goto LABEL_33;
    v25 = v24 + (v24 >> 2);
  }
  else
  {
    if ( v24 >= v23->Data.Policy.Capacity >> 1 )
      goto LABEL_33;
    v25 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v25);
LABEL_33:
  v26 = (__int64)(v23->Data.Data - 1);
  v23->Data.Size = v24;
  v27 = (_BYTE *)(v24 + v26);
  if ( v27 )
    *v27 = x >> 4;
  v28 = this->Data;
  v29 = this->Data->Data.Size + 1;
  if ( v29 >= this->Data->Data.Size )
  {
    if ( v29 <= v28->Data.Policy.Capacity )
      goto LABEL_41;
    v30 = v29 + (v29 >> 2);
  }
  else
  {
    if ( v29 >= v28->Data.Policy.Capacity >> 1 )
      goto LABEL_41;
    v30 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v30);
LABEL_41:
  v31 = (__int64)(v28->Data.Data - 1);
  v28->Data.Size = v29;
  v32 = (_BYTE *)(v29 + v31);
  if ( v32 )
    *v32 = x >> 12;
  v33 = this->Data;
  v34 = x >> 20;
  v35 = this->Data->Data.Size + 1;
  if ( v35 >= this->Data->Data.Size )
  {
    if ( v35 > v33->Data.Policy.Capacity )
    {
      v36 = v35 + (v35 >> 2);
      goto LABEL_48;
    }
  }
  else if ( v35 < v33->Data.Policy.Capacity >> 1 )
  {
    v36 = this->Data->Data.Size + 1;
LABEL_48:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v33->Data,
      this->Data->Data.pHeap,
      v36);
  }
  v37 = (__int64)(v33->Data.Data - 1);
  v33->Data.Size = v35;
  v38 = (_BYTE *)(v35 + v37);
  if ( v38 )
    *v38 = v34;
  return 3i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int x,
        int y)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  _BYTE *v10; // rcx
  char v11; // bl
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  _BYTE *v16; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v18; // r14
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  _BYTE *v22; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v23; // r14
  char v24; // bl
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  _BYTE *v28; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v29; // rdi
  int v30; // esi
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  _BYTE *v34; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v35; // r14
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  _BYTE *v39; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v40; // r14
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // r8
  __int64 v43; // rcx
  _BYTE *v44; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v45; // rdi
  char v46; // bp
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  _BYTE *v50; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v51; // rdi
  int v52; // esi
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  _BYTE *v56; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v57; // r14
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // r8
  __int64 v60; // rcx
  _BYTE *v61; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v62; // r14
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // r8
  __int64 v65; // rcx
  _BYTE *v66; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v67; // r14
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // r8
  __int64 v70; // rcx
  _BYTE *v71; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v72; // r14
  unsigned __int64 v73; // rdi
  unsigned __int64 v74; // r8
  __int64 v75; // rcx
  _BYTE *v76; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v77; // r14
  char v78; // bl
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // r8
  __int64 v81; // rcx
  _BYTE *v82; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v83; // rdi
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // r8
  __int64 v86; // rcx
  _BYTE *v87; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v88; // rdi
  unsigned __int64 v89; // rbx
  unsigned __int64 v90; // r8
  __int64 v91; // rcx
  _BYTE *v92; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v93; // rdi
  int v94; // esi
  unsigned __int64 v95; // rbx
  unsigned __int64 v96; // r8
  __int64 v97; // rcx
  _BYTE *v98; // rcx

  if ( (unsigned int)(x + 32) <= 0x3F && (unsigned int)(y + 32) <= 0x3F )
  {
    Data = this->Data;
    v7 = this->Data->Data.Size + 1;
    if ( v7 >= this->Data->Data.Size )
    {
      if ( v7 <= Data->Data.Policy.Capacity )
        goto LABEL_9;
      v8 = v7 + (v7 >> 2);
    }
    else
    {
      if ( v7 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_9;
      v8 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v8);
LABEL_9:
    v9 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v7;
    v10 = (_BYTE *)(v7 + v9);
    if ( v10 )
      *v10 = (16 * x) | 4;
    v11 = (4 * y) | (x >> 4) & 3;
    v12 = this->Data;
    v13 = this->Data->Data.Size + 1;
    if ( v13 >= this->Data->Data.Size )
    {
      if ( v13 > v12->Data.Policy.Capacity )
      {
        v14 = v13 + (v13 >> 2);
        goto LABEL_16;
      }
    }
    else if ( v13 < v12->Data.Policy.Capacity >> 1 )
    {
      v14 = this->Data->Data.Size + 1;
LABEL_16:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v14);
    }
    v15 = (__int64)(v12->Data.Data - 1);
    v12->Data.Size = v13;
    v16 = (_BYTE *)(v13 + v15);
    if ( v16 )
      *v16 = v11;
    return 2i64;
  }
  if ( (unsigned int)(x + 512) <= 0x3FF && (unsigned int)(y + 512) <= 0x3FF )
  {
    v18 = this->Data;
    v19 = this->Data->Data.Size + 1;
    if ( v19 >= this->Data->Data.Size )
    {
      if ( v19 <= v18->Data.Policy.Capacity )
        goto LABEL_28;
      v20 = v19 + (v19 >> 2);
    }
    else
    {
      if ( v19 >= v18->Data.Policy.Capacity >> 1 )
        goto LABEL_28;
      v20 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v20);
LABEL_28:
    v21 = (__int64)(v18->Data.Data - 1);
    v18->Data.Size = v19;
    v22 = (_BYTE *)(v19 + v21);
    if ( v22 )
      *v22 = (16 * x) | 5;
    v23 = this->Data;
    v24 = ((_BYTE)y << 6) | (x >> 4) & 0x3F;
    v25 = this->Data->Data.Size + 1;
    if ( v25 >= this->Data->Data.Size )
    {
      if ( v25 <= v23->Data.Policy.Capacity )
        goto LABEL_36;
      v26 = v25 + (v25 >> 2);
    }
    else
    {
      if ( v25 >= v23->Data.Policy.Capacity >> 1 )
        goto LABEL_36;
      v26 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v26);
LABEL_36:
    v27 = (__int64)(v23->Data.Data - 1);
    v23->Data.Size = v25;
    v28 = (_BYTE *)(v25 + v27);
    if ( v28 )
      *v28 = v24;
    v29 = this->Data;
    v30 = y >> 2;
    v31 = this->Data->Data.Size + 1;
    if ( v31 >= this->Data->Data.Size )
    {
      if ( v31 > v29->Data.Policy.Capacity )
      {
        v32 = v31 + (v31 >> 2);
        goto LABEL_43;
      }
    }
    else if ( v31 < v29->Data.Policy.Capacity >> 1 )
    {
      v32 = this->Data->Data.Size + 1;
LABEL_43:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v29->Data,
        this->Data->Data.pHeap,
        v32);
    }
    v33 = (__int64)(v29->Data.Data - 1);
    v29->Data.Size = v31;
    v34 = (_BYTE *)(v31 + v33);
    if ( v34 )
      *v34 = v30;
    return 3i64;
  }
  if ( (unsigned int)(x + 0x2000) <= 0x3FFF && (unsigned int)(y + 0x2000) <= 0x3FFF )
  {
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
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v37);
LABEL_55:
    v38 = (__int64)(v35->Data.Data - 1);
    v35->Data.Size = v36;
    v39 = (_BYTE *)(v36 + v38);
    if ( v39 )
      *v39 = (16 * x) | 6;
    v40 = this->Data;
    v41 = this->Data->Data.Size + 1;
    if ( v41 >= this->Data->Data.Size )
    {
      if ( v41 <= v40->Data.Policy.Capacity )
        goto LABEL_63;
      v42 = v41 + (v41 >> 2);
    }
    else
    {
      if ( v41 >= v40->Data.Policy.Capacity >> 1 )
        goto LABEL_63;
      v42 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v42);
LABEL_63:
    v43 = (__int64)(v40->Data.Data - 1);
    v40->Data.Size = v41;
    v44 = (_BYTE *)(v41 + v43);
    if ( v44 )
      *v44 = x >> 4;
    v45 = this->Data;
    v46 = (x >> 12) & 3 | (4 * y);
    v47 = this->Data->Data.Size + 1;
    if ( v47 >= this->Data->Data.Size )
    {
      if ( v47 <= v45->Data.Policy.Capacity )
        goto LABEL_71;
      v48 = v47 + (v47 >> 2);
    }
    else
    {
      if ( v47 >= v45->Data.Policy.Capacity >> 1 )
        goto LABEL_71;
      v48 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v48);
LABEL_71:
    v49 = (__int64)(v45->Data.Data - 1);
    v45->Data.Size = v47;
    v50 = (_BYTE *)(v47 + v49);
    if ( v50 )
      *v50 = v46;
    v51 = this->Data;
    v52 = y >> 6;
    v53 = this->Data->Data.Size + 1;
    if ( v53 >= this->Data->Data.Size )
    {
      if ( v53 > v51->Data.Policy.Capacity )
      {
        v54 = v53 + (v53 >> 2);
        goto LABEL_78;
      }
    }
    else if ( v53 < v51->Data.Policy.Capacity >> 1 )
    {
      v54 = this->Data->Data.Size + 1;
LABEL_78:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v51->Data,
        this->Data->Data.pHeap,
        v54);
    }
    v55 = (__int64)(v51->Data.Data - 1);
    v51->Data.Size = v53;
    v56 = (_BYTE *)(v53 + v55);
    if ( v56 )
      *v56 = v52;
    return 4i64;
  }
  v57 = this->Data;
  v58 = this->Data->Data.Size + 1;
  if ( v58 >= this->Data->Data.Size )
  {
    if ( v58 <= v57->Data.Policy.Capacity )
      goto LABEL_88;
    v59 = v58 + (v58 >> 2);
  }
  else
  {
    if ( v58 >= v57->Data.Policy.Capacity >> 1 )
      goto LABEL_88;
    v59 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v59);
LABEL_88:
  v60 = (__int64)(v57->Data.Data - 1);
  v57->Data.Size = v58;
  v61 = (_BYTE *)(v58 + v60);
  if ( v61 )
    *v61 = (16 * x) | 7;
  v62 = this->Data;
  v63 = this->Data->Data.Size + 1;
  if ( v63 >= this->Data->Data.Size )
  {
    if ( v63 <= v62->Data.Policy.Capacity )
      goto LABEL_96;
    v64 = v63 + (v63 >> 2);
  }
  else
  {
    if ( v63 >= v62->Data.Policy.Capacity >> 1 )
      goto LABEL_96;
    v64 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v64);
LABEL_96:
  v65 = (__int64)(v62->Data.Data - 1);
  v62->Data.Size = v63;
  v66 = (_BYTE *)(v63 + v65);
  if ( v66 )
    *v66 = x >> 4;
  v67 = this->Data;
  v68 = this->Data->Data.Size + 1;
  if ( v68 >= this->Data->Data.Size )
  {
    if ( v68 <= v67->Data.Policy.Capacity )
      goto LABEL_104;
    v69 = v68 + (v68 >> 2);
  }
  else
  {
    if ( v68 >= v67->Data.Policy.Capacity >> 1 )
      goto LABEL_104;
    v69 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v69);
LABEL_104:
  v70 = (__int64)(v67->Data.Data - 1);
  v67->Data.Size = v68;
  v71 = (_BYTE *)(v68 + v70);
  if ( v71 )
    *v71 = x >> 12;
  v72 = this->Data;
  v73 = this->Data->Data.Size + 1;
  if ( v73 >= this->Data->Data.Size )
  {
    if ( v73 <= v72->Data.Policy.Capacity )
      goto LABEL_112;
    v74 = v73 + (v73 >> 2);
  }
  else
  {
    if ( v73 >= v72->Data.Policy.Capacity >> 1 )
      goto LABEL_112;
    v74 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v74);
LABEL_112:
  v75 = (__int64)(v72->Data.Data - 1);
  v72->Data.Size = v73;
  v76 = (_BYTE *)(v73 + v75);
  if ( v76 )
    *v76 = x >> 20;
  v77 = this->Data;
  v78 = (4 * y) | (x >> 28) & 3;
  v79 = this->Data->Data.Size + 1;
  if ( v79 >= this->Data->Data.Size )
  {
    if ( v79 <= v77->Data.Policy.Capacity )
      goto LABEL_120;
    v80 = v79 + (v79 >> 2);
  }
  else
  {
    if ( v79 >= v77->Data.Policy.Capacity >> 1 )
      goto LABEL_120;
    v80 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v80);
LABEL_120:
  v81 = (__int64)(v77->Data.Data - 1);
  v77->Data.Size = v79;
  v82 = (_BYTE *)(v79 + v81);
  if ( v82 )
    *v82 = v78;
  v83 = this->Data;
  v84 = this->Data->Data.Size + 1;
  if ( v84 >= this->Data->Data.Size )
  {
    if ( v84 <= v83->Data.Policy.Capacity )
      goto LABEL_128;
    v85 = v84 + (v84 >> 2);
  }
  else
  {
    if ( v84 >= v83->Data.Policy.Capacity >> 1 )
      goto LABEL_128;
    v85 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v85);
LABEL_128:
  v86 = (__int64)(v83->Data.Data - 1);
  v83->Data.Size = v84;
  v87 = (_BYTE *)(v84 + v86);
  if ( v87 )
    *v87 = y >> 6;
  v88 = this->Data;
  v89 = this->Data->Data.Size + 1;
  if ( v89 >= this->Data->Data.Size )
  {
    if ( v89 <= v88->Data.Policy.Capacity )
      goto LABEL_136;
    v90 = v89 + (v89 >> 2);
  }
  else
  {
    if ( v89 >= v88->Data.Policy.Capacity >> 1 )
      goto LABEL_136;
    v90 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v90);
LABEL_136:
  v91 = (__int64)(v88->Data.Data - 1);
  v88->Data.Size = v89;
  v92 = (_BYTE *)(v89 + v91);
  if ( v92 )
    *v92 = y >> 14;
  v93 = this->Data;
  v94 = y >> 22;
  v95 = this->Data->Data.Size + 1;
  if ( v95 >= this->Data->Data.Size )
  {
    if ( v95 > v93->Data.Policy.Capacity )
    {
      v96 = v95 + (v95 >> 2);
      goto LABEL_143;
    }
  }
  else if ( v95 < v93->Data.Policy.Capacity >> 1 )
  {
    v96 = this->Data->Data.Size + 1;
LABEL_143:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v93->Data,
      this->Data->Data.pHeap,
      v96);
  }
  v97 = (__int64)(v93->Data.Data - 1);
  v93->Data.Size = v95;
  v98 = (_BYTE *)(v95 + v97);
  if ( v98 )
    *v98 = v94;
  return 8i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteQuad(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int cx,
        int cy,
        int ax,
        int ay)
{
  int v6; // eax
  int v7; // ecx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // r12
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v16; // r15
  char v17; // bl
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  _BYTE *v21; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v22; // rsi
  char v23; // di
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  _BYTE *v27; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v29; // r12
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  _BYTE *v33; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v34; // r12
  char v35; // bl
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  _BYTE *v39; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v40; // r15
  char v41; // si
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  _BYTE *v45; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v46; // rsi
  char v47; // di
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r8
  __int64 v50; // rcx
  _BYTE *v51; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v52; // r12
  unsigned __int64 v53; // r15
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  _BYTE *v56; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v57; // r12
  char v58; // bl
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r8
  __int64 v61; // rcx
  _BYTE *v62; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v63; // r15
  char v64; // si
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // r8
  __int64 v67; // rcx
  _BYTE *v68; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v69; // rsi
  char v70; // di
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // r8
  __int64 v73; // rcx
  _BYTE *v74; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v75; // rdi
  unsigned __int64 v76; // rbx
  unsigned __int64 v77; // r8
  __int64 v78; // rcx
  _BYTE *v79; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v80; // r12
  unsigned __int64 v81; // r15
  unsigned __int64 v82; // r8
  __int64 v83; // rcx
  _BYTE *v84; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v85; // r12
  char v86; // bl
  unsigned __int64 v87; // r15
  unsigned __int64 v88; // r8
  __int64 v89; // rcx
  _BYTE *v90; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v91; // r15
  unsigned __int64 v92; // rbx
  unsigned __int64 v93; // r8
  __int64 v94; // rcx
  _BYTE *v95; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v96; // r15
  char v97; // si
  unsigned __int64 v98; // rbx
  unsigned __int64 v99; // r8
  __int64 v100; // rcx
  _BYTE *v101; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v102; // rsi
  char v103; // di
  unsigned __int64 v104; // rbx
  unsigned __int64 v105; // r8
  __int64 v106; // rcx
  _BYTE *v107; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v108; // rdi
  unsigned __int64 v109; // rbx
  unsigned __int64 v110; // r8
  __int64 v111; // rcx
  _BYTE *v112; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v113; // r12
  unsigned __int64 v114; // r15
  unsigned __int64 v115; // r8
  __int64 v116; // rcx
  _BYTE *v117; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v118; // r12
  unsigned __int64 v119; // r15
  unsigned __int64 v120; // r8
  __int64 v121; // rcx
  _BYTE *v122; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v123; // r12
  char v124; // bl
  unsigned __int64 v125; // r15
  unsigned __int64 v126; // r8
  __int64 v127; // rcx
  _BYTE *v128; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v129; // r15
  char v130; // si
  unsigned __int64 v131; // rbx
  unsigned __int64 v132; // r8
  __int64 v133; // rcx
  _BYTE *v134; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v135; // rsi
  unsigned __int64 v136; // rbx
  unsigned __int64 v137; // r8
  __int64 v138; // rcx
  _BYTE *v139; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v140; // rsi
  char v141; // di
  unsigned __int64 v142; // rbx
  unsigned __int64 v143; // r8
  __int64 v144; // rcx
  _BYTE *v145; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v146; // rdi
  unsigned __int64 v147; // rbx
  unsigned __int64 v148; // r8
  __int64 v149; // rcx
  _BYTE *v150; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v151; // r12
  unsigned __int64 v152; // r15
  unsigned __int64 v153; // r8
  __int64 v154; // rcx
  _BYTE *v155; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v156; // r12
  unsigned __int64 v157; // r15
  unsigned __int64 v158; // r8
  __int64 v159; // rcx
  _BYTE *v160; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v161; // r12
  char v162; // bl
  unsigned __int64 v163; // r15
  unsigned __int64 v164; // r8
  __int64 v165; // rcx
  _BYTE *v166; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v167; // r15
  unsigned __int64 v168; // rbx
  unsigned __int64 v169; // r8
  __int64 v170; // rcx
  _BYTE *v171; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v172; // r15
  char v173; // si
  unsigned __int64 v174; // rbx
  unsigned __int64 v175; // r8
  __int64 v176; // rcx
  _BYTE *v177; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v178; // rsi
  unsigned __int64 v179; // rbx
  unsigned __int64 v180; // r8
  __int64 v181; // rcx
  _BYTE *v182; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v183; // rsi
  char v184; // di
  unsigned __int64 v185; // rbx
  unsigned __int64 v186; // r8
  __int64 v187; // rcx
  _BYTE *v188; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v189; // rdi
  unsigned __int64 v190; // rbx
  unsigned __int64 v191; // r8
  __int64 v192; // rcx
  _BYTE *v193; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v194; // r12
  unsigned __int64 v195; // r15
  unsigned __int64 v196; // r8
  __int64 v197; // rcx
  _BYTE *v198; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v199; // r12
  unsigned __int64 v200; // r15
  unsigned __int64 v201; // r8
  __int64 v202; // rcx
  _BYTE *v203; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v204; // r12
  unsigned __int64 v205; // r15
  unsigned __int64 v206; // r8
  __int64 v207; // rcx
  _BYTE *v208; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v209; // r12
  unsigned __int64 v210; // r15
  unsigned __int64 v211; // r8
  __int64 v212; // rcx
  _BYTE *v213; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v214; // r12
  char v215; // bl
  unsigned __int64 v216; // r15
  unsigned __int64 v217; // r8
  __int64 v218; // rcx
  _BYTE *v219; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v220; // r15
  unsigned __int64 v221; // rbx
  unsigned __int64 v222; // r8
  __int64 v223; // rcx
  _BYTE *v224; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v225; // r15
  unsigned __int64 v226; // rbx
  unsigned __int64 v227; // r8
  __int64 v228; // rcx
  _BYTE *v229; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v230; // r15
  unsigned __int64 v231; // rbx
  unsigned __int64 v232; // r8
  __int64 v233; // rcx
  _BYTE *v234; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v235; // r15
  char v236; // si
  unsigned __int64 v237; // rbx
  unsigned __int64 v238; // r8
  __int64 v239; // rcx
  _BYTE *v240; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v241; // rbx
  unsigned __int8 *v242; // rdx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v243; // rbx
  unsigned __int8 *v244; // rdx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v245; // rbx
  unsigned __int8 *v246; // rdx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v247; // rbx
  unsigned __int8 *v248; // rdx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v249; // rbx
  unsigned __int8 *v250; // rdx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v251; // rbx
  unsigned __int8 *v252; // rdx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v253; // rbx
  unsigned __int8 *v254; // rdx

  v6 = cx;
  if ( cy > cx )
    v6 = cy;
  v7 = cx;
  if ( cy < cx )
    v7 = cy;
  if ( ax < v7 )
    v7 = ax;
  if ( ax > v6 )
    v6 = ax;
  if ( ay < v7 )
    v7 = ay;
  if ( ay > v6 )
    v6 = ay;
  if ( v7 >= -16 && v6 <= 15 )
  {
    Data = this->Data;
    v12 = this->Data->Data.Size + 1;
    if ( v12 >= this->Data->Data.Size )
    {
      if ( v12 <= Data->Data.Policy.Capacity )
        goto LABEL_21;
      v13 = v12 + (v12 >> 2);
    }
    else
    {
      if ( v12 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_21;
      v13 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v13);
LABEL_21:
    v14 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v12;
    v15 = (_BYTE *)(v12 + v14);
    if ( v15 )
      *v15 = (16 * cx) | 8;
    v16 = this->Data;
    v17 = ((_BYTE)ax << 6) | (2 * cy) & 0x3F | (cx >> 4) & 1;
    v18 = this->Data->Data.Size + 1;
    if ( v18 >= this->Data->Data.Size )
    {
      if ( v18 <= v16->Data.Policy.Capacity )
        goto LABEL_29;
      v19 = v18 + (v18 >> 2);
    }
    else
    {
      if ( v18 >= v16->Data.Policy.Capacity >> 1 )
        goto LABEL_29;
      v19 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v19);
LABEL_29:
    v20 = (__int64)(v16->Data.Data - 1);
    v16->Data.Size = v18;
    v21 = (_BYTE *)(v18 + v20);
    if ( v21 )
      *v21 = v17;
    v22 = this->Data;
    v23 = (8 * ay) | (ax >> 2) & 7;
    v24 = this->Data->Data.Size + 1;
    if ( v24 >= this->Data->Data.Size )
    {
      if ( v24 > v22->Data.Policy.Capacity )
      {
        v25 = v24 + (v24 >> 2);
        goto LABEL_36;
      }
    }
    else if ( v24 < v22->Data.Policy.Capacity >> 1 )
    {
      v25 = this->Data->Data.Size + 1;
LABEL_36:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v25);
    }
    v26 = (__int64)(v22->Data.Data - 1);
    v22->Data.Size = v24;
    v27 = (_BYTE *)(v24 + v26);
    if ( v27 )
      *v27 = v23;
    return 3i64;
  }
  if ( v7 >= -64 && v6 <= 63 )
  {
    v29 = this->Data;
    v30 = this->Data->Data.Size + 1;
    if ( v30 >= this->Data->Data.Size )
    {
      if ( v30 <= v29->Data.Policy.Capacity )
        goto LABEL_48;
      v31 = v30 + (v30 >> 2);
    }
    else
    {
      if ( v30 >= v29->Data.Policy.Capacity >> 1 )
        goto LABEL_48;
      v31 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v31);
LABEL_48:
    v32 = (__int64)(v29->Data.Data - 1);
    v29->Data.Size = v30;
    v33 = (_BYTE *)(v30 + v32);
    if ( v33 )
      *v33 = (16 * cx) | 9;
    v34 = this->Data;
    v35 = (8 * cy) | (cx >> 4) & 7;
    v36 = this->Data->Data.Size + 1;
    if ( v36 >= this->Data->Data.Size )
    {
      if ( v36 <= v34->Data.Policy.Capacity )
        goto LABEL_56;
      v37 = v36 + (v36 >> 2);
    }
    else
    {
      if ( v36 >= v34->Data.Policy.Capacity >> 1 )
        goto LABEL_56;
      v37 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v37);
LABEL_56:
    v38 = (__int64)(v34->Data.Data - 1);
    v34->Data.Size = v36;
    v39 = (_BYTE *)(v36 + v38);
    if ( v39 )
      *v39 = v35;
    v40 = this->Data;
    v41 = (4 * ax) | (cy >> 5) & 3;
    v42 = this->Data->Data.Size + 1;
    if ( v42 >= this->Data->Data.Size )
    {
      if ( v42 <= v40->Data.Policy.Capacity )
        goto LABEL_64;
      v43 = v42 + (v42 >> 2);
    }
    else
    {
      if ( v42 >= v40->Data.Policy.Capacity >> 1 )
        goto LABEL_64;
      v43 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v43);
LABEL_64:
    v44 = (__int64)(v40->Data.Data - 1);
    v40->Data.Size = v42;
    v45 = (_BYTE *)(v42 + v44);
    if ( v45 )
      *v45 = v41;
    v46 = this->Data;
    v47 = (2 * ay) | (ax >> 6) & 1;
    v48 = this->Data->Data.Size + 1;
    if ( v48 >= this->Data->Data.Size )
    {
      if ( v48 > v46->Data.Policy.Capacity )
      {
        v49 = v48 + (v48 >> 2);
        goto LABEL_71;
      }
    }
    else if ( v48 < v46->Data.Policy.Capacity >> 1 )
    {
      v49 = this->Data->Data.Size + 1;
LABEL_71:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v49);
    }
    v50 = (__int64)(v46->Data.Data - 1);
    v46->Data.Size = v48;
    v51 = (_BYTE *)(v48 + v50);
    if ( v51 )
      *v51 = v47;
    return 4i64;
  }
  if ( v7 >= -256 && v6 <= 255 )
  {
    v52 = this->Data;
    v53 = this->Data->Data.Size + 1;
    if ( v53 >= this->Data->Data.Size )
    {
      if ( v53 <= v52->Data.Policy.Capacity )
        goto LABEL_83;
      v54 = v53 + (v53 >> 2);
    }
    else
    {
      if ( v53 >= v52->Data.Policy.Capacity >> 1 )
        goto LABEL_83;
      v54 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v54);
LABEL_83:
    v55 = (__int64)(v52->Data.Data - 1);
    v52->Data.Size = v53;
    v56 = (_BYTE *)(v53 + v55);
    if ( v56 )
      *v56 = (16 * cx) | 0xA;
    v57 = this->Data;
    v58 = (32 * cy) | (cx >> 4) & 0x1F;
    v59 = this->Data->Data.Size + 1;
    if ( v59 >= this->Data->Data.Size )
    {
      if ( v59 <= v57->Data.Policy.Capacity )
        goto LABEL_91;
      v60 = v59 + (v59 >> 2);
    }
    else
    {
      if ( v59 >= v57->Data.Policy.Capacity >> 1 )
        goto LABEL_91;
      v60 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v60);
LABEL_91:
    v61 = (__int64)(v57->Data.Data - 1);
    v57->Data.Size = v59;
    v62 = (_BYTE *)(v59 + v61);
    if ( v62 )
      *v62 = v58;
    v63 = this->Data;
    v64 = ((_BYTE)ax << 6) | (cy >> 3) & 0x3F;
    v65 = this->Data->Data.Size + 1;
    if ( v65 >= this->Data->Data.Size )
    {
      if ( v65 <= v63->Data.Policy.Capacity )
        goto LABEL_99;
      v66 = v65 + (v65 >> 2);
    }
    else
    {
      if ( v65 >= v63->Data.Policy.Capacity >> 1 )
        goto LABEL_99;
      v66 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v66);
LABEL_99:
    v67 = (__int64)(v63->Data.Data - 1);
    v63->Data.Size = v65;
    v68 = (_BYTE *)(v65 + v67);
    if ( v68 )
      *v68 = v64;
    v69 = this->Data;
    v70 = ((_BYTE)ay << 7) | (ax >> 2) & 0x7F;
    v71 = this->Data->Data.Size + 1;
    if ( v71 >= this->Data->Data.Size )
    {
      if ( v71 <= v69->Data.Policy.Capacity )
        goto LABEL_107;
      v72 = v71 + (v71 >> 2);
    }
    else
    {
      if ( v71 >= v69->Data.Policy.Capacity >> 1 )
        goto LABEL_107;
      v72 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v72);
LABEL_107:
    v73 = (__int64)(v69->Data.Data - 1);
    v69->Data.Size = v71;
    v74 = (_BYTE *)(v71 + v73);
    if ( v74 )
      *v74 = v70;
    v75 = this->Data;
    v76 = this->Data->Data.Size + 1;
    if ( v76 >= this->Data->Data.Size )
    {
      if ( v76 > v75->Data.Policy.Capacity )
      {
        v77 = v76 + (v76 >> 2);
        goto LABEL_114;
      }
    }
    else if ( v76 < v75->Data.Policy.Capacity >> 1 )
    {
      v77 = this->Data->Data.Size + 1;
LABEL_114:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v77);
    }
    v78 = (__int64)(v75->Data.Data - 1);
    v75->Data.Size = v76;
    v79 = (_BYTE *)(v76 + v78);
    if ( v79 )
      *v79 = ay >> 1;
    return 5i64;
  }
  if ( v7 >= -1024 && v6 <= 1023 )
  {
    v80 = this->Data;
    v81 = this->Data->Data.Size + 1;
    if ( v81 >= this->Data->Data.Size )
    {
      if ( v81 <= v80->Data.Policy.Capacity )
        goto LABEL_126;
      v82 = v81 + (v81 >> 2);
    }
    else
    {
      if ( v81 >= v80->Data.Policy.Capacity >> 1 )
        goto LABEL_126;
      v82 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v82);
LABEL_126:
    v83 = (__int64)(v80->Data.Data - 1);
    v80->Data.Size = v81;
    v84 = (_BYTE *)(v81 + v83);
    if ( v84 )
      *v84 = (16 * cx) | 0xB;
    v85 = this->Data;
    v86 = ((_BYTE)cy << 7) | (cx >> 4) & 0x7F;
    v87 = this->Data->Data.Size + 1;
    if ( v87 >= this->Data->Data.Size )
    {
      if ( v87 <= v85->Data.Policy.Capacity )
        goto LABEL_134;
      v88 = v87 + (v87 >> 2);
    }
    else
    {
      if ( v87 >= v85->Data.Policy.Capacity >> 1 )
        goto LABEL_134;
      v88 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v88);
LABEL_134:
    v89 = (__int64)(v85->Data.Data - 1);
    v85->Data.Size = v87;
    v90 = (_BYTE *)(v87 + v89);
    if ( v90 )
      *v90 = v86;
    v91 = this->Data;
    v92 = this->Data->Data.Size + 1;
    if ( v92 >= this->Data->Data.Size )
    {
      if ( v92 <= v91->Data.Policy.Capacity )
        goto LABEL_142;
      v93 = v92 + (v92 >> 2);
    }
    else
    {
      if ( v92 >= v91->Data.Policy.Capacity >> 1 )
        goto LABEL_142;
      v93 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v93);
LABEL_142:
    v94 = (__int64)(v91->Data.Data - 1);
    v91->Data.Size = v92;
    v95 = (_BYTE *)(v92 + v94);
    if ( v95 )
      *v95 = cy >> 1;
    v96 = this->Data;
    v97 = (4 * ax) | (cy >> 9) & 3;
    v98 = this->Data->Data.Size + 1;
    if ( v98 >= this->Data->Data.Size )
    {
      if ( v98 <= v96->Data.Policy.Capacity )
        goto LABEL_150;
      v99 = v98 + (v98 >> 2);
    }
    else
    {
      if ( v98 >= v96->Data.Policy.Capacity >> 1 )
        goto LABEL_150;
      v99 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v99);
LABEL_150:
    v100 = (__int64)(v96->Data.Data - 1);
    v96->Data.Size = v98;
    v101 = (_BYTE *)(v98 + v100);
    if ( v101 )
      *v101 = v97;
    v102 = this->Data;
    v103 = (32 * ay) | (ax >> 6) & 0x1F;
    v104 = this->Data->Data.Size + 1;
    if ( v104 >= this->Data->Data.Size )
    {
      if ( v104 <= v102->Data.Policy.Capacity )
        goto LABEL_158;
      v105 = v104 + (v104 >> 2);
    }
    else
    {
      if ( v104 >= v102->Data.Policy.Capacity >> 1 )
        goto LABEL_158;
      v105 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v105);
LABEL_158:
    v106 = (__int64)(v102->Data.Data - 1);
    v102->Data.Size = v104;
    v107 = (_BYTE *)(v104 + v106);
    if ( v107 )
      *v107 = v103;
    v108 = this->Data;
    v109 = this->Data->Data.Size + 1;
    if ( v109 >= this->Data->Data.Size )
    {
      if ( v109 > v108->Data.Policy.Capacity )
      {
        v110 = v109 + (v109 >> 2);
        goto LABEL_165;
      }
    }
    else if ( v109 < v108->Data.Policy.Capacity >> 1 )
    {
      v110 = this->Data->Data.Size + 1;
LABEL_165:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v110);
    }
    v111 = (__int64)(v108->Data.Data - 1);
    v108->Data.Size = v109;
    v112 = (_BYTE *)(v109 + v111);
    if ( v112 )
      *v112 = ay >> 3;
    return 6i64;
  }
  if ( v7 >= -4096 && v6 <= 4095 )
  {
    v113 = this->Data;
    v114 = this->Data->Data.Size + 1;
    if ( v114 >= this->Data->Data.Size )
    {
      if ( v114 <= v113->Data.Policy.Capacity )
        goto LABEL_177;
      v115 = v114 + (v114 >> 2);
    }
    else
    {
      if ( v114 >= v113->Data.Policy.Capacity >> 1 )
        goto LABEL_177;
      v115 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v115);
LABEL_177:
    v116 = (__int64)(v113->Data.Data - 1);
    v113->Data.Size = v114;
    v117 = (_BYTE *)(v114 + v116);
    if ( v117 )
      *v117 = (16 * cx) | 0xC;
    v118 = this->Data;
    v119 = this->Data->Data.Size + 1;
    if ( v119 >= this->Data->Data.Size )
    {
      if ( v119 <= v118->Data.Policy.Capacity )
        goto LABEL_185;
      v120 = v119 + (v119 >> 2);
    }
    else
    {
      if ( v119 >= v118->Data.Policy.Capacity >> 1 )
        goto LABEL_185;
      v120 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v120);
LABEL_185:
    v121 = (__int64)(v118->Data.Data - 1);
    v118->Data.Size = v119;
    v122 = (_BYTE *)(v119 + v121);
    if ( v122 )
      *v122 = cx >> 4;
    v123 = this->Data;
    v124 = (2 * cy) | (cx >> 12) & 1;
    v125 = this->Data->Data.Size + 1;
    if ( v125 >= this->Data->Data.Size )
    {
      if ( v125 <= v123->Data.Policy.Capacity )
        goto LABEL_193;
      v126 = v125 + (v125 >> 2);
    }
    else
    {
      if ( v125 >= v123->Data.Policy.Capacity >> 1 )
        goto LABEL_193;
      v126 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v126);
LABEL_193:
    v127 = (__int64)(v123->Data.Data - 1);
    v123->Data.Size = v125;
    v128 = (_BYTE *)(v125 + v127);
    if ( v128 )
      *v128 = v124;
    v129 = this->Data;
    v130 = ((_BYTE)ax << 6) | (cy >> 7) & 0x3F;
    v131 = this->Data->Data.Size + 1;
    if ( v131 >= this->Data->Data.Size )
    {
      if ( v131 <= v129->Data.Policy.Capacity )
        goto LABEL_201;
      v132 = v131 + (v131 >> 2);
    }
    else
    {
      if ( v131 >= v129->Data.Policy.Capacity >> 1 )
        goto LABEL_201;
      v132 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v132);
LABEL_201:
    v133 = (__int64)(v129->Data.Data - 1);
    v129->Data.Size = v131;
    v134 = (_BYTE *)(v131 + v133);
    if ( v134 )
      *v134 = v130;
    v135 = this->Data;
    v136 = this->Data->Data.Size + 1;
    if ( v136 >= this->Data->Data.Size )
    {
      if ( v136 <= v135->Data.Policy.Capacity )
        goto LABEL_209;
      v137 = v136 + (v136 >> 2);
    }
    else
    {
      if ( v136 >= v135->Data.Policy.Capacity >> 1 )
        goto LABEL_209;
      v137 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v137);
LABEL_209:
    v138 = (__int64)(v135->Data.Data - 1);
    v135->Data.Size = v136;
    v139 = (_BYTE *)(v136 + v138);
    if ( v139 )
      *v139 = ax >> 2;
    v140 = this->Data;
    v141 = (8 * ay) | (ax >> 10) & 7;
    v142 = this->Data->Data.Size + 1;
    if ( v142 >= this->Data->Data.Size )
    {
      if ( v142 <= v140->Data.Policy.Capacity )
        goto LABEL_217;
      v143 = v142 + (v142 >> 2);
    }
    else
    {
      if ( v142 >= v140->Data.Policy.Capacity >> 1 )
        goto LABEL_217;
      v143 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v143);
LABEL_217:
    v144 = (__int64)(v140->Data.Data - 1);
    v140->Data.Size = v142;
    v145 = (_BYTE *)(v142 + v144);
    if ( v145 )
      *v145 = v141;
    v146 = this->Data;
    v147 = this->Data->Data.Size + 1;
    if ( v147 >= this->Data->Data.Size )
    {
      if ( v147 > v146->Data.Policy.Capacity )
      {
        v148 = v147 + (v147 >> 2);
        goto LABEL_224;
      }
    }
    else if ( v147 < v146->Data.Policy.Capacity >> 1 )
    {
      v148 = this->Data->Data.Size + 1;
LABEL_224:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v148);
    }
    v149 = (__int64)(v146->Data.Data - 1);
    v146->Data.Size = v147;
    v150 = (_BYTE *)(v147 + v149);
    if ( v150 )
      *v150 = ay >> 5;
    return 7i64;
  }
  if ( v7 >= -16384 && v6 <= 0x3FFF )
  {
    v151 = this->Data;
    v152 = this->Data->Data.Size + 1;
    if ( v152 >= this->Data->Data.Size )
    {
      if ( v152 <= v151->Data.Policy.Capacity )
        goto LABEL_236;
      v153 = v152 + (v152 >> 2);
    }
    else
    {
      if ( v152 >= v151->Data.Policy.Capacity >> 1 )
        goto LABEL_236;
      v153 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v153);
LABEL_236:
    v154 = (__int64)(v151->Data.Data - 1);
    v151->Data.Size = v152;
    v155 = (_BYTE *)(v152 + v154);
    if ( v155 )
      *v155 = (16 * cx) | 0xD;
    v156 = this->Data;
    v157 = this->Data->Data.Size + 1;
    if ( v157 >= this->Data->Data.Size )
    {
      if ( v157 <= v156->Data.Policy.Capacity )
        goto LABEL_244;
      v158 = v157 + (v157 >> 2);
    }
    else
    {
      if ( v157 >= v156->Data.Policy.Capacity >> 1 )
        goto LABEL_244;
      v158 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v158);
LABEL_244:
    v159 = (__int64)(v156->Data.Data - 1);
    v156->Data.Size = v157;
    v160 = (_BYTE *)(v157 + v159);
    if ( v160 )
      *v160 = cx >> 4;
    v161 = this->Data;
    v162 = (8 * cy) | (cx >> 12) & 7;
    v163 = this->Data->Data.Size + 1;
    if ( v163 >= this->Data->Data.Size )
    {
      if ( v163 <= v161->Data.Policy.Capacity )
        goto LABEL_252;
      v164 = v163 + (v163 >> 2);
    }
    else
    {
      if ( v163 >= v161->Data.Policy.Capacity >> 1 )
        goto LABEL_252;
      v164 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v164);
LABEL_252:
    v165 = (__int64)(v161->Data.Data - 1);
    v161->Data.Size = v163;
    v166 = (_BYTE *)(v163 + v165);
    if ( v166 )
      *v166 = v162;
    v167 = this->Data;
    v168 = this->Data->Data.Size + 1;
    if ( v168 >= this->Data->Data.Size )
    {
      if ( v168 <= v167->Data.Policy.Capacity )
        goto LABEL_260;
      v169 = v168 + (v168 >> 2);
    }
    else
    {
      if ( v168 >= v167->Data.Policy.Capacity >> 1 )
        goto LABEL_260;
      v169 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v169);
LABEL_260:
    v170 = (__int64)(v167->Data.Data - 1);
    v167->Data.Size = v168;
    v171 = (_BYTE *)(v168 + v170);
    if ( v171 )
      *v171 = cy >> 5;
    v172 = this->Data;
    v173 = (4 * ax) | (cy >> 13) & 3;
    v174 = this->Data->Data.Size + 1;
    if ( v174 >= this->Data->Data.Size )
    {
      if ( v174 <= v172->Data.Policy.Capacity )
        goto LABEL_268;
      v175 = v174 + (v174 >> 2);
    }
    else
    {
      if ( v174 >= v172->Data.Policy.Capacity >> 1 )
        goto LABEL_268;
      v175 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v175);
LABEL_268:
    v176 = (__int64)(v172->Data.Data - 1);
    v172->Data.Size = v174;
    v177 = (_BYTE *)(v174 + v176);
    if ( v177 )
      *v177 = v173;
    v178 = this->Data;
    v179 = this->Data->Data.Size + 1;
    if ( v179 >= this->Data->Data.Size )
    {
      if ( v179 <= v178->Data.Policy.Capacity )
        goto LABEL_276;
      v180 = v179 + (v179 >> 2);
    }
    else
    {
      if ( v179 >= v178->Data.Policy.Capacity >> 1 )
        goto LABEL_276;
      v180 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v180);
LABEL_276:
    v181 = (__int64)(v178->Data.Data - 1);
    v178->Data.Size = v179;
    v182 = (_BYTE *)(v179 + v181);
    if ( v182 )
      *v182 = ax >> 6;
    v183 = this->Data;
    v184 = (2 * ay) | (ax >> 14) & 1;
    v185 = this->Data->Data.Size + 1;
    if ( v185 >= this->Data->Data.Size )
    {
      if ( v185 <= v183->Data.Policy.Capacity )
        goto LABEL_284;
      v186 = v185 + (v185 >> 2);
    }
    else
    {
      if ( v185 >= v183->Data.Policy.Capacity >> 1 )
        goto LABEL_284;
      v186 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v186);
LABEL_284:
    v187 = (__int64)(v183->Data.Data - 1);
    v183->Data.Size = v185;
    v188 = (_BYTE *)(v185 + v187);
    if ( v188 )
      *v188 = v184;
    v189 = this->Data;
    v190 = this->Data->Data.Size + 1;
    if ( v190 >= this->Data->Data.Size )
    {
      if ( v190 > v189->Data.Policy.Capacity )
      {
        v191 = v190 + (v190 >> 2);
        goto LABEL_291;
      }
    }
    else if ( v190 < v189->Data.Policy.Capacity >> 1 )
    {
      v191 = this->Data->Data.Size + 1;
LABEL_291:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v191);
    }
    v192 = (__int64)(v189->Data.Data - 1);
    v189->Data.Size = v190;
    v193 = (_BYTE *)(v190 + v192);
    if ( v193 )
      *v193 = ay >> 7;
    return 8i64;
  }
  v194 = this->Data;
  v195 = this->Data->Data.Size + 1;
  if ( v195 >= this->Data->Data.Size )
  {
    if ( v195 <= v194->Data.Policy.Capacity )
      goto LABEL_301;
    v196 = v195 + (v195 >> 2);
  }
  else
  {
    if ( v195 >= v194->Data.Policy.Capacity >> 1 )
      goto LABEL_301;
    v196 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v196);
LABEL_301:
  v197 = (__int64)(v194->Data.Data - 1);
  v194->Data.Size = v195;
  v198 = (_BYTE *)(v195 + v197);
  if ( v198 )
    *v198 = (16 * cx) | 0xE;
  v199 = this->Data;
  v200 = this->Data->Data.Size + 1;
  if ( v200 >= this->Data->Data.Size )
  {
    if ( v200 <= v199->Data.Policy.Capacity )
      goto LABEL_309;
    v201 = v200 + (v200 >> 2);
  }
  else
  {
    if ( v200 >= v199->Data.Policy.Capacity >> 1 )
      goto LABEL_309;
    v201 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v201);
LABEL_309:
  v202 = (__int64)(v199->Data.Data - 1);
  v199->Data.Size = v200;
  v203 = (_BYTE *)(v200 + v202);
  if ( v203 )
    *v203 = cx >> 4;
  v204 = this->Data;
  v205 = this->Data->Data.Size + 1;
  if ( v205 >= this->Data->Data.Size )
  {
    if ( v205 <= v204->Data.Policy.Capacity )
      goto LABEL_317;
    v206 = v205 + (v205 >> 2);
  }
  else
  {
    if ( v205 >= v204->Data.Policy.Capacity >> 1 )
      goto LABEL_317;
    v206 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v206);
LABEL_317:
  v207 = (__int64)(v204->Data.Data - 1);
  v204->Data.Size = v205;
  v208 = (_BYTE *)(v205 + v207);
  if ( v208 )
    *v208 = cx >> 12;
  v209 = this->Data;
  v210 = this->Data->Data.Size + 1;
  if ( v210 >= this->Data->Data.Size )
  {
    if ( v210 <= v209->Data.Policy.Capacity )
      goto LABEL_325;
    v211 = v210 + (v210 >> 2);
  }
  else
  {
    if ( v210 >= v209->Data.Policy.Capacity >> 1 )
      goto LABEL_325;
    v211 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v211);
LABEL_325:
  v212 = (__int64)(v209->Data.Data - 1);
  v209->Data.Size = v210;
  v213 = (_BYTE *)(v210 + v212);
  if ( v213 )
    *v213 = cx >> 20;
  v214 = this->Data;
  v215 = (8 * cy) | (cx >> 28) & 7;
  v216 = this->Data->Data.Size + 1;
  if ( v216 >= this->Data->Data.Size )
  {
    if ( v216 <= v214->Data.Policy.Capacity )
      goto LABEL_333;
    v217 = v216 + (v216 >> 2);
  }
  else
  {
    if ( v216 >= v214->Data.Policy.Capacity >> 1 )
      goto LABEL_333;
    v217 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v217);
LABEL_333:
  v218 = (__int64)(v214->Data.Data - 1);
  v214->Data.Size = v216;
  v219 = (_BYTE *)(v216 + v218);
  if ( v219 )
    *v219 = v215;
  v220 = this->Data;
  v221 = this->Data->Data.Size + 1;
  if ( v221 >= this->Data->Data.Size )
  {
    if ( v221 <= v220->Data.Policy.Capacity )
      goto LABEL_341;
    v222 = v221 + (v221 >> 2);
  }
  else
  {
    if ( v221 >= v220->Data.Policy.Capacity >> 1 )
      goto LABEL_341;
    v222 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v222);
LABEL_341:
  v223 = (__int64)(v220->Data.Data - 1);
  v220->Data.Size = v221;
  v224 = (_BYTE *)(v221 + v223);
  if ( v224 )
    *v224 = cy >> 5;
  v225 = this->Data;
  v226 = this->Data->Data.Size + 1;
  if ( v226 >= this->Data->Data.Size )
  {
    if ( v226 <= v225->Data.Policy.Capacity )
      goto LABEL_349;
    v227 = v226 + (v226 >> 2);
  }
  else
  {
    if ( v226 >= v225->Data.Policy.Capacity >> 1 )
      goto LABEL_349;
    v227 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v227);
LABEL_349:
  v228 = (__int64)(v225->Data.Data - 1);
  v225->Data.Size = v226;
  v229 = (_BYTE *)(v226 + v228);
  if ( v229 )
    *v229 = cy >> 13;
  v230 = this->Data;
  v231 = this->Data->Data.Size + 1;
  if ( v231 >= this->Data->Data.Size )
  {
    if ( v231 <= v230->Data.Policy.Capacity )
      goto LABEL_357;
    v232 = v231 + (v231 >> 2);
  }
  else
  {
    if ( v231 >= v230->Data.Policy.Capacity >> 1 )
      goto LABEL_357;
    v232 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v232);
LABEL_357:
  v233 = (__int64)(v230->Data.Data - 1);
  v230->Data.Size = v231;
  v234 = (_BYTE *)(v231 + v233);
  if ( v234 )
    *v234 = cy >> 21;
  v235 = this->Data;
  v236 = (4 * ax) | (cy >> 29) & 3;
  v237 = this->Data->Data.Size + 1;
  if ( v237 >= this->Data->Data.Size )
  {
    if ( v237 > v235->Data.Policy.Capacity )
    {
      v238 = v237 + (v237 >> 2);
      goto LABEL_364;
    }
  }
  else if ( v237 < v235->Data.Policy.Capacity >> 1 )
  {
    v238 = this->Data->Data.Size + 1;
LABEL_364:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v238);
  }
  v239 = (__int64)(v235->Data.Data - 1);
  v235->Data.Size = v237;
  v240 = (_BYTE *)(v237 + v239);
  if ( v240 )
    *v240 = v236;
  v241 = this->Data;
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data->Data,
    this->Data->Data.pHeap,
    this->Data->Data.Size + 1);
  v242 = &v241->Data.Data[v241->Data.Size - 1];
  if ( v242 )
    *v242 = ax >> 6;
  v243 = this->Data;
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data->Data,
    this->Data->Data.pHeap,
    this->Data->Data.Size + 1);
  v244 = &v243->Data.Data[v243->Data.Size - 1];
  if ( v244 )
    *v244 = ax >> 14;
  v245 = this->Data;
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data->Data,
    this->Data->Data.pHeap,
    this->Data->Data.Size + 1);
  v246 = &v245->Data.Data[v245->Data.Size - 1];
  if ( v246 )
    *v246 = ax >> 22;
  v247 = this->Data;
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data->Data,
    this->Data->Data.pHeap,
    this->Data->Data.Size + 1);
  v248 = &v247->Data.Data[v247->Data.Size - 1];
  if ( v248 )
    *v248 = (2 * ay) | (ax >> 30) & 1;
  v249 = this->Data;
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data->Data,
    this->Data->Data.pHeap,
    this->Data->Data.Size + 1);
  v250 = &v249->Data.Data[v249->Data.Size - 1];
  if ( v250 )
    *v250 = ay >> 7;
  v251 = this->Data;
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data->Data,
    this->Data->Data.pHeap,
    this->Data->Data.Size + 1);
  v252 = &v251->Data.Data[v251->Data.Size - 1];
  if ( v252 )
    *v252 = ay >> 15;
  v253 = this->Data;
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data->Data,
    this->Data->Data.pHeap,
    this->Data->Data.Size + 1);
  v254 = &v253->Data.Data[v253->Data.Size - 1];
  if ( v254 )
    *v254 = ay >> 23;
  return 16i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int v)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rsi
  unsigned __int64 v5; // rdi
  char v6; // bl
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  _BYTE *v9; // rcx
  char v11; // bp
  char v12; // bp
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v16; // rsi
  int v17; // ebx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  _BYTE *v21; // rcx
  unsigned int v22; // eax
  const Scaleform::MemoryHeap *pHeap; // rdx
  char v24; // bp
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  _BYTE *v27; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  _BYTE *v32; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v33; // rsi
  int v34; // ebx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  _BYTE *v38; // rcx
  char v39; // bp
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  _BYTE *v42; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v43; // rsi
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  _BYTE *v47; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  _BYTE *v52; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v53; // rsi
  int v54; // ebx
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // r8
  __int64 v57; // rcx
  _BYTE *v58; // rcx

  Data = this->Data;
  v5 = this->Data->Data.Size + 1;
  if ( (unsigned int)(v + 32) <= 0x3F )
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
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        Data->Data.pHeap,
        v7);
    }
    v8 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v5;
    v9 = (_BYTE *)(v5 + v8);
    if ( v9 )
      *v9 = v6;
    return 1i64;
  }
  v11 = 4 * v;
  if ( (unsigned int)(v + 0x2000) <= 0x3FFF )
  {
    v12 = v11 | 1;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 <= Data->Data.Policy.Capacity )
        goto LABEL_18;
      v13 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_18;
      v13 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data->Data.pHeap,
      v13);
LABEL_18:
    v14 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v5;
    v15 = (_BYTE *)(v5 + v14);
    if ( v15 )
      *v15 = v12;
    v16 = this->Data;
    v17 = v >> 6;
    v18 = this->Data->Data.Size + 1;
    if ( v18 >= this->Data->Data.Size )
    {
      if ( v18 > v16->Data.Policy.Capacity )
      {
        v19 = v18 + (v18 >> 2);
        goto LABEL_25;
      }
    }
    else if ( v18 < v16->Data.Policy.Capacity >> 1 )
    {
      v19 = this->Data->Data.Size + 1;
LABEL_25:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v19);
    }
    v20 = (__int64)(v16->Data.Data - 1);
    v16->Data.Size = v18;
    v21 = (_BYTE *)(v18 + v20);
    if ( v21 )
      *v21 = v17;
    return 2i64;
  }
  v22 = v + 0x200000;
  pHeap = Data->Data.pHeap;
  if ( v22 <= 0x3FFFFF )
  {
    v24 = v11 | 2;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 <= Data->Data.Policy.Capacity )
        goto LABEL_36;
      v25 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_36;
      v25 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      pHeap,
      v25);
LABEL_36:
    v26 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v5;
    v27 = (_BYTE *)(v5 + v26);
    if ( v27 )
      *v27 = v24;
    v28 = this->Data;
    v29 = this->Data->Data.Size + 1;
    if ( v29 >= this->Data->Data.Size )
    {
      if ( v29 <= v28->Data.Policy.Capacity )
        goto LABEL_44;
      v30 = v29 + (v29 >> 2);
    }
    else
    {
      if ( v29 >= v28->Data.Policy.Capacity >> 1 )
        goto LABEL_44;
      v30 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v30);
LABEL_44:
    v31 = (__int64)(v28->Data.Data - 1);
    v28->Data.Size = v29;
    v32 = (_BYTE *)(v29 + v31);
    if ( v32 )
      *v32 = v >> 6;
    v33 = this->Data;
    v34 = v >> 14;
    v35 = this->Data->Data.Size + 1;
    if ( v35 >= this->Data->Data.Size )
    {
      if ( v35 > v33->Data.Policy.Capacity )
      {
        v36 = v35 + (v35 >> 2);
        goto LABEL_51;
      }
    }
    else if ( v35 < v33->Data.Policy.Capacity >> 1 )
    {
      v36 = this->Data->Data.Size + 1;
LABEL_51:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v36);
    }
    v37 = (__int64)(v33->Data.Data - 1);
    v33->Data.Size = v35;
    v38 = (_BYTE *)(v35 + v37);
    if ( v38 )
      *v38 = v34;
    return 3i64;
  }
  v39 = v11 | 3;
  if ( v5 >= Data->Data.Size )
  {
    if ( v5 <= Data->Data.Policy.Capacity )
      goto LABEL_61;
    v40 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_61;
    v40 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &Data->Data,
    pHeap,
    v40);
LABEL_61:
  v41 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v5;
  v42 = (_BYTE *)(v5 + v41);
  if ( v42 )
    *v42 = v39;
  v43 = this->Data;
  v44 = this->Data->Data.Size + 1;
  if ( v44 >= this->Data->Data.Size )
  {
    if ( v44 <= v43->Data.Policy.Capacity )
      goto LABEL_69;
    v45 = v44 + (v44 >> 2);
  }
  else
  {
    if ( v44 >= v43->Data.Policy.Capacity >> 1 )
      goto LABEL_69;
    v45 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v45);
LABEL_69:
  v46 = (__int64)(v43->Data.Data - 1);
  v43->Data.Size = v44;
  v47 = (_BYTE *)(v44 + v46);
  if ( v47 )
    *v47 = v >> 6;
  v48 = this->Data;
  v49 = this->Data->Data.Size + 1;
  if ( v49 >= this->Data->Data.Size )
  {
    if ( v49 <= v48->Data.Policy.Capacity )
      goto LABEL_77;
    v50 = v49 + (v49 >> 2);
  }
  else
  {
    if ( v49 >= v48->Data.Policy.Capacity >> 1 )
      goto LABEL_77;
    v50 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v50);
LABEL_77:
  v51 = (__int64)(v48->Data.Data - 1);
  v48->Data.Size = v49;
  v52 = (_BYTE *)(v49 + v51);
  if ( v52 )
    *v52 = v >> 14;
  v53 = this->Data;
  v54 = v >> 22;
  v55 = this->Data->Data.Size + 1;
  if ( v55 >= this->Data->Data.Size )
  {
    if ( v55 > v53->Data.Policy.Capacity )
    {
      v56 = v55 + (v55 >> 2);
      goto LABEL_84;
    }
  }
  else if ( v55 < v53->Data.Policy.Capacity >> 1 )
  {
    v56 = this->Data->Data.Size + 1;
LABEL_84:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v56);
  }
  v57 = (__int64)(v53->Data.Data - 1);
  v53->Data.Size = v55;
  v58 = (_BYTE *)(v55 + v57);
  if ( v58 )
    *v58 = v54;
  return 4i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int v)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned __int64 v5; // rbx
  bool v6; // cc
  const Scaleform::MemoryHeap *pHeap; // rdx
  char v8; // si
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  _BYTE *v11; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v16; // rdi
  unsigned int v17; // esi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  _BYTE *v21; // rcx

  Data = this->Data;
  v5 = this->Data->Data.Size + 1;
  v6 = v <= 0x7F;
  pHeap = this->Data->Data.pHeap;
  if ( v6 )
  {
    v8 = 2 * v;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 > Data->Data.Policy.Capacity )
      {
        v9 = v5 + (v5 >> 2);
        goto LABEL_7;
      }
    }
    else if ( v5 < Data->Data.Policy.Capacity >> 1 )
    {
      v9 = this->Data->Data.Size + 1;
LABEL_7:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        pHeap,
        v9);
    }
    v10 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v5;
    v11 = (_BYTE *)(v5 + v10);
    if ( v11 )
      *v11 = v8;
    return 1i64;
  }
  if ( v5 >= Data->Data.Size )
  {
    if ( v5 <= Data->Data.Policy.Capacity )
      goto LABEL_17;
    v13 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_17;
    v13 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &Data->Data,
    pHeap,
    v13);
LABEL_17:
  v14 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v5;
  v15 = (_BYTE *)(v5 + v14);
  if ( v15 )
    *v15 = (2 * v) | 1;
  v16 = this->Data;
  v17 = v >> 7;
  v18 = this->Data->Data.Size + 1;
  if ( v18 >= this->Data->Data.Size )
  {
    if ( v18 > v16->Data.Policy.Capacity )
    {
      v19 = v18 + (v18 >> 2);
      goto LABEL_24;
    }
  }
  else if ( v18 < v16->Data.Policy.Capacity >> 1 )
  {
    v19 = this->Data->Data.Size + 1;
LABEL_24:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v16->Data,
      this->Data->Data.pHeap,
      v19);
  }
  v20 = (__int64)(v16->Data.Data - 1);
  v16->Data.Size = v18;
  v21 = (_BYTE *)(v18 + v20);
  if ( v21 )
    *v21 = v17;
  return 2i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int v)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rsi
  unsigned __int64 v5; // rdi
  bool v6; // cc
  const Scaleform::MemoryHeap *pHeap; // rdx
  char v8; // bl
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  _BYTE *v11; // rcx
  char v13; // bp
  char v14; // bp
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  _BYTE *v17; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v18; // rsi
  unsigned int v19; // ebx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  _BYTE *v23; // rcx
  char v24; // bp
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  _BYTE *v27; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  _BYTE *v32; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v33; // rsi
  unsigned int v34; // ebx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  _BYTE *v38; // rcx
  char v39; // bp
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  _BYTE *v42; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v43; // rsi
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  _BYTE *v47; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  _BYTE *v52; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v53; // rsi
  unsigned int v54; // ebx
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // r8
  __int64 v57; // rcx
  _BYTE *v58; // rcx

  Data = this->Data;
  v5 = this->Data->Data.Size + 1;
  v6 = v <= 0x3F;
  pHeap = this->Data->Data.pHeap;
  if ( v6 )
  {
    v8 = 4 * v;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 > Data->Data.Policy.Capacity )
      {
        v9 = v5 + (v5 >> 2);
        goto LABEL_7;
      }
    }
    else if ( v5 < Data->Data.Policy.Capacity >> 1 )
    {
      v9 = this->Data->Data.Size + 1;
LABEL_7:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        pHeap,
        v9);
    }
    v10 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v5;
    v11 = (_BYTE *)(v5 + v10);
    if ( v11 )
      *v11 = v8;
    return 1i64;
  }
  v13 = 4 * v;
  if ( v <= 0x3FFF )
  {
    v14 = v13 | 1;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 <= Data->Data.Policy.Capacity )
        goto LABEL_18;
      v15 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_18;
      v15 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      pHeap,
      v15);
LABEL_18:
    v16 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v5;
    v17 = (_BYTE *)(v5 + v16);
    if ( v17 )
      *v17 = v14;
    v18 = this->Data;
    v19 = v >> 6;
    v20 = this->Data->Data.Size + 1;
    if ( v20 >= this->Data->Data.Size )
    {
      if ( v20 > v18->Data.Policy.Capacity )
      {
        v21 = v20 + (v20 >> 2);
        goto LABEL_25;
      }
    }
    else if ( v20 < v18->Data.Policy.Capacity >> 1 )
    {
      v21 = this->Data->Data.Size + 1;
LABEL_25:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v21);
    }
    v22 = (__int64)(v18->Data.Data - 1);
    v18->Data.Size = v20;
    v23 = (_BYTE *)(v20 + v22);
    if ( v23 )
      *v23 = v19;
    return 2i64;
  }
  if ( v <= 0x3FFFFF )
  {
    v24 = v13 | 2;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 <= Data->Data.Policy.Capacity )
        goto LABEL_36;
      v25 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_36;
      v25 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      pHeap,
      v25);
LABEL_36:
    v26 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v5;
    v27 = (_BYTE *)(v5 + v26);
    if ( v27 )
      *v27 = v24;
    v28 = this->Data;
    v29 = this->Data->Data.Size + 1;
    if ( v29 >= this->Data->Data.Size )
    {
      if ( v29 <= v28->Data.Policy.Capacity )
        goto LABEL_44;
      v30 = v29 + (v29 >> 2);
    }
    else
    {
      if ( v29 >= v28->Data.Policy.Capacity >> 1 )
        goto LABEL_44;
      v30 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v30);
LABEL_44:
    v31 = (__int64)(v28->Data.Data - 1);
    v28->Data.Size = v29;
    v32 = (_BYTE *)(v29 + v31);
    if ( v32 )
      *v32 = v >> 6;
    v33 = this->Data;
    v34 = v >> 14;
    v35 = this->Data->Data.Size + 1;
    if ( v35 >= this->Data->Data.Size )
    {
      if ( v35 > v33->Data.Policy.Capacity )
      {
        v36 = v35 + (v35 >> 2);
        goto LABEL_51;
      }
    }
    else if ( v35 < v33->Data.Policy.Capacity >> 1 )
    {
      v36 = this->Data->Data.Size + 1;
LABEL_51:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data->Data.pHeap,
        v36);
    }
    v37 = (__int64)(v33->Data.Data - 1);
    v33->Data.Size = v35;
    v38 = (_BYTE *)(v35 + v37);
    if ( v38 )
      *v38 = v34;
    return 3i64;
  }
  v39 = v13 | 3;
  if ( v5 >= Data->Data.Size )
  {
    if ( v5 <= Data->Data.Policy.Capacity )
      goto LABEL_61;
    v40 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_61;
    v40 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &Data->Data,
    pHeap,
    v40);
LABEL_61:
  v41 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v5;
  v42 = (_BYTE *)(v5 + v41);
  if ( v42 )
    *v42 = v39;
  v43 = this->Data;
  v44 = this->Data->Data.Size + 1;
  if ( v44 >= this->Data->Data.Size )
  {
    if ( v44 <= v43->Data.Policy.Capacity )
      goto LABEL_69;
    v45 = v44 + (v44 >> 2);
  }
  else
  {
    if ( v44 >= v43->Data.Policy.Capacity >> 1 )
      goto LABEL_69;
    v45 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v45);
LABEL_69:
  v46 = (__int64)(v43->Data.Data - 1);
  v43->Data.Size = v44;
  v47 = (_BYTE *)(v44 + v46);
  if ( v47 )
    *v47 = v >> 6;
  v48 = this->Data;
  v49 = this->Data->Data.Size + 1;
  if ( v49 >= this->Data->Data.Size )
  {
    if ( v49 <= v48->Data.Policy.Capacity )
      goto LABEL_77;
    v50 = v49 + (v49 >> 2);
  }
  else
  {
    if ( v49 >= v48->Data.Policy.Capacity >> 1 )
      goto LABEL_77;
    v50 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v50);
LABEL_77:
  v51 = (__int64)(v48->Data.Data - 1);
  v48->Data.Size = v49;
  v52 = (_BYTE *)(v49 + v51);
  if ( v52 )
    *v52 = v >> 14;
  v53 = this->Data;
  v54 = v >> 22;
  v55 = this->Data->Data.Size + 1;
  if ( v55 >= this->Data->Data.Size )
  {
    if ( v55 > v53->Data.Policy.Capacity )
    {
      v56 = v55 + (v55 >> 2);
      goto LABEL_84;
    }
  }
  else if ( v55 < v53->Data.Policy.Capacity >> 1 )
  {
    v56 = this->Data->Data.Size + 1;
LABEL_84:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data->Data.pHeap,
      v56);
  }
  v57 = (__int64)(v53->Data.Data - 1);
  v53->Data.Size = v55;
  v58 = (_BYTE *)(v55 + v57);
  if ( v58 )
    *v58 = v54;
  return 4i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int y)
{
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned int v3; // eax
  char v6; // bp
  const Scaleform::MemoryHeap *pHeap; // rdx
  unsigned __int64 v8; // rbx
  char v9; // bp
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE *v12; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v13; // rdi
  int v14; // esi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  _BYTE *v18; // rcx
  char v20; // bp
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  _BYTE *v23; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v24; // rdi
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  _BYTE *v28; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v29; // rdi
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  _BYTE *v33; // rcx
  Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v34; // rdi
  int v35; // esi
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  _BYTE *v39; // rcx

  Data = this->Data;
  v3 = y + 2048;
  v6 = 16 * y;
  pHeap = this->Data->Data.pHeap;
  v8 = this->Data->Data.Size + 1;
  if ( v3 <= 0xFFF )
  {
    v9 = v6 | 2;
    if ( v8 >= Data->Data.Size )
    {
      if ( v8 <= Data->Data.Policy.Capacity )
        goto LABEL_8;
      v10 = v8 + (v8 >> 2);
    }
    else
    {
      if ( v8 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_8;
      v10 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      pHeap,
      v10);
LABEL_8:
    v11 = (__int64)(Data->Data.Data - 1);
    Data->Data.Size = v8;
    v12 = (_BYTE *)(v8 + v11);
    if ( v12 )
      *v12 = v9;
    v13 = this->Data;
    v14 = y >> 4;
    v15 = this->Data->Data.Size + 1;
    if ( v15 >= this->Data->Data.Size )
    {
      if ( v15 > v13->Data.Policy.Capacity )
      {
        v16 = v15 + (v15 >> 2);
        goto LABEL_15;
      }
    }
    else if ( v15 < v13->Data.Policy.Capacity >> 1 )
    {
      v16 = this->Data->Data.Size + 1;
LABEL_15:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v13->Data,
        this->Data->Data.pHeap,
        v16);
    }
    v17 = (__int64)(v13->Data.Data - 1);
    v13->Data.Size = v15;
    v18 = (_BYTE *)(v15 + v17);
    if ( v18 )
      *v18 = v14;
    return 2i64;
  }
  v20 = v6 | 3;
  if ( v8 >= Data->Data.Size )
  {
    if ( v8 <= Data->Data.Policy.Capacity )
      goto LABEL_25;
    v21 = v8 + (v8 >> 2);
  }
  else
  {
    if ( v8 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_25;
    v21 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &Data->Data,
    pHeap,
    v21);
LABEL_25:
  v22 = (__int64)(Data->Data.Data - 1);
  Data->Data.Size = v8;
  v23 = (_BYTE *)(v8 + v22);
  if ( v23 )
    *v23 = v20;
  v24 = this->Data;
  v25 = this->Data->Data.Size + 1;
  if ( v25 >= this->Data->Data.Size )
  {
    if ( v25 <= v24->Data.Policy.Capacity )
      goto LABEL_33;
    v26 = v25 + (v25 >> 2);
  }
  else
  {
    if ( v25 >= v24->Data.Policy.Capacity >> 1 )
      goto LABEL_33;
    v26 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v26);
LABEL_33:
  v27 = (__int64)(v24->Data.Data - 1);
  v24->Data.Size = v25;
  v28 = (_BYTE *)(v25 + v27);
  if ( v28 )
    *v28 = y >> 4;
  v29 = this->Data;
  v30 = this->Data->Data.Size + 1;
  if ( v30 >= this->Data->Data.Size )
  {
    if ( v30 <= v29->Data.Policy.Capacity )
      goto LABEL_41;
    v31 = v30 + (v30 >> 2);
  }
  else
  {
    if ( v30 >= v29->Data.Policy.Capacity >> 1 )
      goto LABEL_41;
    v31 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data->Data.pHeap,
    v31);
LABEL_41:
  v32 = (__int64)(v29->Data.Data - 1);
  v29->Data.Size = v30;
  v33 = (_BYTE *)(v30 + v32);
  if ( v33 )
    *v33 = y >> 12;
  v34 = this->Data;
  v35 = y >> 20;
  v36 = this->Data->Data.Size + 1;
  if ( v36 >= this->Data->Data.Size )
  {
    if ( v36 > v34->Data.Policy.Capacity )
    {
      v37 = v36 + (v36 >> 2);
      goto LABEL_48;
    }
  }
  else if ( v36 < v34->Data.Policy.Capacity >> 1 )
  {
    v37 = this->Data->Data.Size + 1;
LABEL_48:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v34->Data,
      this->Data->Data.pHeap,
      v37);
  }
  v38 = (__int64)(v34->Data.Data - 1);
  v34->Data.Size = v36;
  v39 = (_BYTE *)(v36 + v38);
  if ( v39 )
    *v39 = v35;
  return 3i64;
}

