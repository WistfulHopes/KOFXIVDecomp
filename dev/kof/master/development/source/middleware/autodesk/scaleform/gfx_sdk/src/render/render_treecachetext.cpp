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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::TreeCacheText::TreeCacheText(Scaleform::Render::TreeText * node, Scaleform::Render::GlyphCache * glyphCache, unsigned long flags); // 0x140385E90
void Scaleform::Render::TreeCacheText::UpdateChildSubtree(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * data, unsigned short depth); // 0x1403863D0
void Scaleform::Render::TreeCacheText::UpdateDistanceFieldUniforms(); // 0x140386440
void Scaleform::Render::TreeCacheText::UpdateTransform(Scaleform::Render::HAL * hal, const Scaleform::Render::TreeNode::NodeData * nodeData, const Scaleform::Render::TransformArgs & t, Scaleform::Render::TransformFlags flags); // 0x140386620
void Scaleform::Render::TreeCacheText::HandleChanges(Scaleform::Render::HAL * hal, unsigned long changeBits); // 0x1403862F0
void Scaleform::Render::TreeCacheText::forceUpdateImages(Scaleform::Render::HAL * hal); // 0x140386CC0
void Scaleform::Render::TreeCacheText::propagateEdgeAA(Scaleform::Render::HAL * hal, Scaleform::Render::EdgeAAMode parentEdgeAA); // 0x140386DF0
void Scaleform::Render::TreeCacheText::propagate3DFlag(Scaleform::Render::HAL * hal, unsigned long parent3D); // 0x140386CD0
void Scaleform::Render::TreeCacheText::propagateMaskFlag(Scaleform::Render::HAL * hal, unsigned long partOfMask); // 0x140386E80
Scaleform::Render::TextMeshProvider * Scaleform::Render::TreeCacheText::GetMeshProvider(); // 0x140386230
Scaleform::Render::TextMeshProvider * Scaleform::Render::TreeCacheText::CreateMeshProvider(Scaleform::Render::HAL * hal); // 0x140385FB0void __fastcall Scaleform::Render::TreeCacheText::TreeCacheText(
        Scaleform::Render::TreeCacheText *this,
        Scaleform::Render::TreeText *node,
        Scaleform::Render::GlyphCache *glyphCache,
        unsigned int flags)
{
  const Scaleform::Render::SortKey *v8; // rax
  Scaleform::Render::SortKey v9; // [rsp+20h] [rbp-18h] BYREF

  Scaleform::Render::SortKey::SortKey(&v9, SortKeyText, (flags & 0x200) != 0);
  Scaleform::Render::TreeCacheMeshBase::TreeCacheMeshBase(this, node, v8, flags);
  v9.pImpl->Release(v9.pImpl, v9.Data);
  *((_QWORD *)&this->M + 1) = 0i64;
  this->__vftable = (Scaleform::Render::TreeCacheText_vtbl *)&Scaleform::Render::TreeCacheText::`vftable';
  Scaleform::Render::TextMeshProvider::TextMeshProvider(&this->TMProvider, glyphCache);
}

Scaleform::Render::TextMeshProvider *__fastcall Scaleform::Render::TreeCacheText::CreateMeshProvider(
        Scaleform::Render::TreeCacheText *this,
        Scaleform::Render::HAL *hal)
{
  const Scaleform::Render::TextLayout *v4; // rsi
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax
  Scaleform::Render::Matrix3x4<float> *Matrix3D; // rax
  unsigned __int16 Flags; // dx
  int v8; // ecx
  int v9; // eax
  Scaleform::Render::TextMeshProvider *p_TMProvider; // rax
  Scaleform::Render::Viewport vp; // [rsp+48h] [rbp-C0h] BYREF
  Scaleform::Render::Matrix4x4<float> m4; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::Render::Matrix4x4<float> result; // [rsp+B8h] [rbp-50h] BYREF

  v4 = *(const Scaleform::Render::TextLayout **)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                        + 0x28)
                                                            + 8i64
                                                            * (unsigned int)((int)((int)&this->pNode[-1]
                                                                                 - ((__int64)this->pNode & 0xFFFFF000))
                                                                           / 56)
                                                            + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                               + 152);
  if ( v4 && this->pRoot )
  {
    *(_QWORD *)&vp.BufferWidth = 0i64;
    memset(&m4, 0, sizeof(m4));
    pHandle = this->M.pHandle;
    m4.M[0][0] = 1.0;
    m4.M[1][1] = 1.0;
    m4.M[2][2] = 1.0;
    m4.M[3][3] = 1.0;
    *(_QWORD *)&vp.Left = 0i64;
    memset(&vp.ScissorLeft, 0, 20);
    vp.Height = 1;
    vp.Width = 1;
    if ( (pHandle->pHeader->Format & 0x10) != 0 )
    {
      Scaleform::Render::TreeCacheNode::GetViewProj(this, &result);
      Matrix3D = Scaleform::Render::MatrixPoolImpl::HMatrix::GetMatrix3D(&this->M);
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&m4, &result, Matrix3D);
      vp = *(Scaleform::Render::Viewport *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                   + 0x28)
                                                       + 8i64
                                                       * (unsigned int)((int)(LODWORD(this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode)
                                                                            - ((__int64)this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode & 0xFFFFF000)
                                                                            - 56)
                                                                      / 56)
                                                       + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                          + 160);
    }
    Flags = this->Flags;
    if ( (Flags & 0x40) != 0 )
      v8 = 2;
    else
      v8 = (Flags & 0xC) == 4;
    v9 = v8 | 8;
    if ( (Flags & 0x80u) == 0 )
      v9 = v8;
    Scaleform::Render::TextMeshProvider::CreateMeshData(&this->TMProvider, hal, v4, &this->M, &m4, &vp, v9);
  }
  if ( (this->TMProvider.Flags & 0x20) != 0 )
    this->UpdateDistanceFieldUniforms(this);
  p_TMProvider = &this->TMProvider;
  if ( (this->TMProvider.Flags & 0x20) == 0 )
    return 0i64;
  return p_TMProvider;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

Scaleform::Render::TextMeshProvider *__fastcall Scaleform::Render::TreeCacheText::GetMeshProvider(
        Scaleform::Render::TreeCacheText *this)
{
  Scaleform::Render::TextMeshProvider *result; // rax

  result = &this->TMProvider;
  if ( (this->TMProvider.Flags & 0x20) == 0 )
    return 0i64;
  return result;
}

void __fastcall Scaleform::Render::Color::GetRGBAFloat(
        Scaleform::Render::Color *this,
        float *pr,
        float *pg,
        float *pb,
        float *pa)
{
  unsigned __int8 Red; // al
  float v6; // xmm0_4
  unsigned __int8 Green; // al
  float v8; // xmm0_4
  float v9; // xmm0_4
  unsigned __int8 Alpha; // al

  Red = this->Channels.Red;
  if ( Red )
    v6 = (float)Red / 255.0;
  else
    v6 = 0.0;
  *pr = v6;
  Green = this->Channels.Green;
  if ( Green )
    v8 = (float)Green / 255.0;
  else
    v8 = 0.0;
  *pg = v8;
  if ( this->Channels.Blue )
    v9 = (float)this->Channels.Blue / 255.0;
  else
    v9 = 0.0;
  *pb = v9;
  Alpha = this->Channels.Alpha;
  if ( Alpha )
    *pa = (float)Alpha / 255.0;
  else
    *pa = 0.0;
}

void __fastcall Scaleform::Render::TreeCacheText::HandleChanges(
        Scaleform::Render::TreeCacheText *this,
        Scaleform::Render::HAL *hal,
        unsigned int changeBits)
{
  char v3; // di
  Scaleform::Render::Bundle *pObject; // rcx
  Scaleform::Render::TreeCacheNode *pParent; // r8
  int v8; // er8
  int v9; // ecx

  v3 = changeBits;
  if ( (changeBits & 0x400) != 0 )
  {
    pObject = this->SorterShapeNode.pBundle.pObject;
    if ( pObject )
      pObject->UpdateMesh(pObject, hal, &this->SorterShapeNode);
    Scaleform::Render::TextMeshProvider::Clear(&this->TMProvider);
  }
  if ( (v3 & 0x20) != 0 )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      v8 = pParent->Flags & 0xC;
      if ( v8 == 12 )
      {
        v9 = 12;
LABEL_12:
        this->propagateEdgeAA(this, hal, (Scaleform::Render::EdgeAAMode)v9);
        return;
      }
    }
    else
    {
      v8 = 4;
    }
    v9 = *(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                               + 8i64
                               * (unsigned int)((__int64)((__int64)&this->pNode[-1]
                                                        - ((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64))
                                              / 56)
                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                  + 10) & 0xC;
    if ( !v9 )
      v9 = v8;
    goto LABEL_12;
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::TreeCacheText::UpdateChildSubtree(
        Scaleform::Render::TreeCacheText *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *data,
        unsigned __int16 depth)
{
  int v4; // er10

  v4 = this->Flags & 0xFFBF | ((unsigned __int8)(2 * (this->Flags & 0x20)) | (unsigned __int8)this->pParent->Flags) & 0xC0;
  if ( data && (data->Flags & 0x200) != 0 )
    v4 |= 0x200u;
  if ( v4 != this->Flags )
    this->Flags = v4;
  if ( data )
    Scaleform::Render::TreeCacheNode::updateMaskCache(this, hal, data, depth, 1);
}

void __fastcall Scaleform::Render::TreeCacheText::UpdateDistanceFieldUniforms(Scaleform::Render::TreeCacheText *this)
{
  Scaleform::Render::TreeNode *pNode; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  __int64 pr; // [rsp+30h] [rbp-78h] BYREF
  __int64 pb; // [rsp+38h] [rbp-70h] BYREF
  __int128 v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+50h] [rbp-58h]
  __int64 v13; // [rsp+58h] [rbp-50h]
  float v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+64h] [rbp-44h]
  float v16; // [rsp+6Ch] [rbp-3Ch]

  if ( (this->TMProvider.Flags & 0x200) != 0 )
  {
    pNode = this->pNode;
    pr = 0i64;
    pb = 0i64;
    v11 = 0i64;
    v12 = 0i64;
    v13 = 0i64;
    v14 = 0.0;
    v15 = 0i64;
    v16 = FLOAT_9_0;
    v3 = (__int64)((unsigned __int128)((__int64)((__int64)&pNode[-1] - ((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64))
                                     * (__int128)0x4924924924924925i64) >> 64) >> 4;
    v4 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                + 8 * ((unsigned int)v3 + (v3 >> 63))
                                + 40) & 0xFFFFFFFFFFFFFFFEui64)
                   + 144);
    if ( *(float *)(v4 + 264) > 0.0 )
    {
      LODWORD(v11) = FLOAT_1_0;
      v14 = fminf(3.0, *(float *)(v4 + 264) * 0.050000001) * 18.0;
      v5 = *(float *)(v4 + 272) * -0.050000001;
      *(float *)&v12 = v5;
      v6 = *(float *)(v4 + 276) * -0.050000001;
      *((float *)&v12 + 1) = v6;
      v7 = (float)(v6 * v6) + (float)(v5 * v5);
      if ( v7 > 4.0 )
      {
        v8 = sqrtf(v7);
        *(float *)&v12 = v5 * (float)(2.0 / v8);
        *((float *)&v12 + 1) = v6 * (float)(2.0 / v8);
      }
      Scaleform::Render::Color::GetRGBAFloat(
        (Scaleform::Render::Color *)(v4 + 284),
        (float *)&pr,
        (float *)&pr + 1,
        (float *)&pb,
        (float *)&pb + 1);
    }
    Scaleform::Render::MatrixPoolImpl::HMatrix::SetUserData(&this->M, &pr, 0x40ui64);
  }
}

void __fastcall Scaleform::Render::TreeCacheText::UpdateTransform(
        Scaleform::Render::TreeCacheText *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TreeNode::NodeData *nodeData,
        const Scaleform::Render::TransformArgs *t,
        Scaleform::Render::TransformFlags flags)
{
  Scaleform::Render::Rect<float> v5; // xmm0
  Scaleform::Render::HAL *pHandle; // rsi
  float y2; // xmm2_4
  float x2; // xmm1_4
  Scaleform::Render::TreeCacheText_vtbl *v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r13
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v16; // rax
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rbx
  float v18; // xmm7_4
  Scaleform::Render::MatrixPoolImpl::DataHeader *v19; // rax
  float v20; // xmm6_4
  float v21; // xmm0_4
  Scaleform::Render::Bundle *v22; // r14
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v23; // rax
  const Scaleform::Render::Matrix4x4<float> *ViewProj; // rbx
  Scaleform::Render::Matrix3x4<float> *Matrix3D; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int meshGenFlags; // er12
  unsigned int v29; // er14
  Scaleform::Render::TextMeshLayer *v30; // rbx
  __int64 Start; // rax
  float SizeScale; // xmm1_4
  Scaleform::Render::TextMeshLayer *v33; // rdx
  float v34; // xmm0_4
  __int64 v35; // rcx
  Scaleform::Render::TextMeshEntry *Data; // rax
  unsigned int v37; // er15
  Scaleform::Render::ToleranceParams *ToleranceParams; // rax
  Scaleform::Render::MeshKey *pObject; // rcx
  const Scaleform::Render::ToleranceParams *v40; // rsi
  Scaleform::Render::MeshKey *MatchingKey; // rax
  Scaleform::Render::MeshKey *v42; // rcx
  Scaleform::Render::MeshKey *v43; // rsi
  Scaleform::Render::Mesh *v44; // rax
  Scaleform::Render::MeshBase *v45; // rax
  Scaleform::Render::MeshBase *v46; // r15
  Scaleform::Render::MeshKey *v47; // rsi
  Scaleform::RefCountVImpl *v48; // rcx
  Scaleform::Render::MeshKey *v49; // rax
  Scaleform::Render::Mesh *v50; // rsi
  Scaleform::RefCountVImpl *v51; // rcx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v52; // rax
  Scaleform::Render::MatrixPoolImpl::HMatrix viewMat; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::MeshKeyManager *v54; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::Viewport vp; // [rsp+58h] [rbp-A8h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::Render::Rect<float> cullRect; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Matrix4x4<float> m4; // [rsp+C0h] [rbp-40h] BYREF

  v5 = t->CullRect;
  viewMat.pHandle = (Scaleform::Render::MatrixPoolImpl::EntryHandle *)hal;
  cullRect = v5;
  pHandle = hal;
  Scaleform::Render::TreeCacheNode::updateCulling(
    this,
    hal,
    nodeData,
    t,
    &cullRect,
    (Scaleform::Render::TransformFlags)(flags | 0x20));
  y2 = nodeData->AproxParentBounds.y2;
  x2 = nodeData->AproxParentBounds.x2;
  v5.x1 = nodeData->AproxParentBounds.y1;
  this->SortParentBounds.x1 = nodeData->AproxParentBounds.x1;
  this->SortParentBounds.y1 = v5.x1;
  this->SortParentBounds.x2 = x2;
  this->SortParentBounds.y2 = y2;
  this->Flags &= ~0x400u;
  v12 = this->__vftable;
  v13 = (__int64)pHandle->GetMatrixPool(pHandle);
  v12->ComputeFinalMatrix(this, t, (Scaleform::Render::MatrixPoolImpl::MatrixPool *)v13, flags);
  v14 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pNode & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                  + 8i64 * (unsigned int)((int)(LODWORD(this->pNode) - ((__int64)this->pNode & 0xFFFFF000) - 56) / 56)
                  + 40) & 0xFFFFFFFFFFFFFFFEui64;
  LODWORD(result.pHandle) = flags & 1;
  v15 = *(_QWORD *)(v14 + 152);
  if ( (flags & 1) == 0 )
  {
LABEL_18:
    if ( (this->TMProvider.Flags & 0x40) != 0 )
    {
      v26 = this->Flags;
      if ( (v26 & 0x40) != 0 )
        v27 = 2;
      else
        v27 = (v26 & 0xC) == 4;
      meshGenFlags = v27 | 8;
      v29 = 0;
      LOBYTE(v26) = v26 & 0x80;
      if ( !(_BYTE)v26 )
        meshGenFlags = v27;
      if ( ((unsigned int (__fastcall *)(Scaleform::Render::TextMeshProvider *, __int64, _QWORD))this->TMProvider.GetLayerCount)(
             &this->TMProvider,
             v26,
             0i64) )
      {
        do
        {
          v30 = &this->TMProvider.Layers.Data.Data[(unsigned __int64)v29];
          if ( ((v30->Type - 8) & 0xFFFFFFFB) == 0 )
          {
            Start = v30->Start;
            SizeScale = v30->SizeScale;
            v33 = &this->TMProvider.Layers.Data.Data[(unsigned __int64)v29];
            *(_OWORD *)&m.M[0][1] = 0ui64;
            v34 = SizeScale * this->TMProvider.HeightRatio;
            v35 = Start;
            Data = this->TMProvider.Entries.Data.Data;
            *(_QWORD *)&m.M[1][2] = 0i64;
            m.M[0][0] = v34;
            m.M[1][1] = v34;
            v37 = Scaleform::Render::TextMeshProvider::CalcVectorParams(
                    pHandle,
                    v33,
                    &Data[v35],
                    &m,
                    SizeScale,
                    &this->M,
                    meshGenFlags,
                    (float *)&m4);
            v54 = pHandle->GetMeshKeyManager(pHandle);
            ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(pHandle);
            pObject = v30->pMeshKey.pObject;
            v40 = ToleranceParams;
            if ( !pObject || !Scaleform::Render::MeshKey::Match(pObject, 0, flags, (const float *)&m4, ToleranceParams) )
            {
              MatchingKey = Scaleform::Render::MeshKeyManager::CreateMatchingKey(
                              v54,
                              v30->pShape.pObject,
                              0,
                              v37,
                              (const float *)&m4,
                              v40);
              v42 = v30->pMeshKey.pObject;
              v43 = MatchingKey;
              if ( v42 )
                Scaleform::Render::MeshKey::Release(v42);
              v30->pMeshKey.pObject = v43;
              if ( !v43->pMesh.pObject )
              {
                LODWORD(v54) = 68;
                v44 = (Scaleform::Render::Mesh *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   this,
                                                   224i64,
                                                   &v54);
                if ( v44 )
                {
                  Scaleform::Render::Mesh::Mesh(v44, v30->pMeshKey.pObject->pKeySet, &m, 0.0, 0, meshGenFlags);
                  v46 = v45;
                }
                else
                {
                  v46 = 0i64;
                }
                v47 = v30->pMeshKey.pObject;
                v48 = (Scaleform::RefCountVImpl *)v47->pMesh.pObject;
                if ( v48 )
                  Scaleform::RefCountImpl::Release(v48);
                v47->pMesh.pObject = v46;
              }
              v49 = v30->pMeshKey.pObject;
              v50 = (Scaleform::Render::Mesh *)v49->pMesh.pObject;
              if ( v50 )
                Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v49->pMesh.pObject);
              v51 = (Scaleform::RefCountVImpl *)v30->pMesh.pObject;
              if ( v51 )
                Scaleform::RefCountImpl::Release(v51);
              v30->pMesh.pObject = v50;
            }
            pHandle = (Scaleform::Render::HAL *)viewMat.pHandle;
          }
          ++v29;
        }
        while ( v29 < this->TMProvider.GetLayerCount(&this->TMProvider) );
      }
    }
    if ( LODWORD(result.pHandle) && (this->TMProvider.Flags & 0x100) != 0 )
    {
      v52 = this->M.pHandle;
      viewMat.pHandle = v52;
      if ( v52 != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
        ++v52->pHeader->RefCount;
      Scaleform::Render::TextMeshProvider::UpdateMaskClearBounds(
        &this->TMProvider,
        &result,
        pHandle,
        (Scaleform::Render::MatrixPoolImpl::HMatrix)&viewMat);
      if ( result.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
        Scaleform::Render::MatrixPoolImpl::DataHeader::Release(result.pHandle->pHeader);
    }
    return;
  }
  if ( (*(_BYTE *)(v15 + 28) & 1) != 0 )
  {
    v16 = this->M.pHandle;
    pHeader = v16->pHeader;
    if ( (v16->pHeader->Format & 0x10) == 0
      && !Scaleform::Render::Matrix2x4<float>::IsFreeRotation(
            (Scaleform::Render::Matrix2x4<float> *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
                                                          + 1],
            0.000001) )
    {
      v18 = FLOAT_N0_5;
      v19 = &pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
                   + 1];
      *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m.M[0][0] = *v19;
      m.M[1][0] = *(float *)&v19[1].pHandle;
      *(_QWORD *)&m.M[1][1] = *(Scaleform::Render::MatrixPoolImpl::EntryHandle **)((char *)&v19[1].pHandle + 4);
      v20 = *(float *)&v19[1].DataPageOffset;
      if ( m.M[0][3] >= 0.0 )
        v21 = FLOAT_0_5;
      else
        v21 = FLOAT_N0_5;
      m.M[0][3] = floorf(m.M[0][3] + v21);
      if ( v20 >= 0.0 )
        v18 = FLOAT_0_5;
      m.M[1][3] = floorf(v20 + v18);
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(&this->M, &m);
    }
  }
  v22 = this->SorterShapeNode.pBundle.pObject;
  if ( v22 && (this->TMProvider.Flags & 0x20) != 0 )
  {
    vp.Height = 1;
    memset(&m4, 0, sizeof(m4));
    *(_QWORD *)&vp.BufferWidth = 0i64;
    *(_QWORD *)&vp.Left = 0i64;
    memset(&vp.ScissorLeft, 0, 20);
    v23 = this->M.pHandle;
    m4.M[0][0] = 1.0;
    m4.M[1][1] = 1.0;
    m4.M[2][2] = 1.0;
    m4.M[3][3] = 1.0;
    vp.Width = 1;
    if ( (v23->pHeader->Format & 0x10) != 0 && this->pRoot )
    {
      ViewProj = Scaleform::Render::TransformArgs::GetViewProj((Scaleform::Render::TransformArgs *)t);
      Matrix3D = Scaleform::Render::MatrixPoolImpl::HMatrix::GetMatrix3D(&this->M);
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&m4, ViewProj, Matrix3D);
      vp = *(Scaleform::Render::Viewport *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode & 0xFFFFFFFFFFFFF000ui64)
                                                                   + 0x28)
                                                       + 8i64
                                                       * (unsigned int)((int)(LODWORD(this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode)
                                                                            - ((__int64)this->pRoot->Scaleform::Render::TreeCacheMeshBase::Scaleform::Render::TreeCacheNode::pNode & 0xFFFFF000)
                                                                            - 56)
                                                                      / 56)
                                                       + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                          + 160);
    }
    if ( Scaleform::Render::TextMeshProvider::NeedsUpdate(
           &this->TMProvider,
           &this->M,
           &m4,
           &vp,
           (const Scaleform::Render::TextFieldParam *)(v15 + 16)) )
    {
      v22->UpdateMesh(v22, pHandle, &this->SorterShapeNode);
      Scaleform::Render::TextMeshProvider::Clear(&this->TMProvider);
      return;
    }
    goto LABEL_18;
  }
}

void __fastcall Scaleform::Render::TreeCacheText::forceUpdateImages(
        Scaleform::Render::TreeCacheText *this,
        Scaleform::Render::HAL *hal)
{
  this->HandleChanges(this, hal, 1024u);
}

void __fastcall Scaleform::Render::TreeCacheText::propagate3DFlag(
        Scaleform::Render::TreeCacheText *this,
        Scaleform::Render::HAL *hal,
        unsigned int parent3D)
{
  __int16 v3; // r14
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v7; // rbx
  Scaleform::Render::Bundle *v8; // rcx
  Scaleform::Render::SortKeyInterface **v9; // rax
  Scaleform::Render::SortKeyInterface **v10; // rbx
  void *Data; // rdx
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  Scaleform::Render::Bundle *v13; // rcx
  Scaleform::Render::SortKey v14; // [rsp+20h] [rbp-18h] BYREF

  v3 = parent3D;
  if ( this->SorterShapeNode.pBundle.pObject )
  {
    pObject = this->SorterShapeNode.pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v7 = this->SorterShapeNode.pBundle.pObject;
    Scaleform::Render::Bundle::RemoveEntry(v7, &this->SorterShapeNode);
    if ( v7 )
      Scaleform::RefCountNTSImpl::Release(v7);
  }
  v8 = this->SorterShapeNode.pBundle.pObject;
  if ( v8 )
    Scaleform::RefCountNTSImpl::Release(v8);
  this->SorterShapeNode.pBundle.pObject = 0i64;
  this->SorterShapeNode.IndexHint = 0;
  Scaleform::Render::SortKey::SortKey(&v14, SortKeyText, (v3 & 0x200) != 0);
  v10 = v9;
  (*v9)->AddRef(*v9, v9[1]);
  this->SorterShapeNode.Key.pImpl->Release(this->SorterShapeNode.Key.pImpl, this->SorterShapeNode.Key.Data);
  Data = v14.Data;
  this->SorterShapeNode.Key.pImpl = *v10;
  pImpl = v14.pImpl;
  this->SorterShapeNode.Key.Data = v10[1];
  pImpl->Release(pImpl, Data);
  v13 = this->SorterShapeNode.pBundle.pObject;
  if ( v13 )
    v13->UpdateMesh(v13, hal, &this->SorterShapeNode);
  Scaleform::Render::TextMeshProvider::Clear(&this->TMProvider);
}

void __fastcall Scaleform::Render::TreeCacheText::propagateEdgeAA(
        Scaleform::Render::TreeCacheText *this,
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
    Scaleform::Render::TextMeshProvider::Clear(&this->TMProvider);
  }
}

void __fastcall Scaleform::Render::TreeCacheText::propagateMaskFlag(
        Scaleform::Render::TreeCacheText *this,
        Scaleform::Render::HAL *hal,
        unsigned int partOfMask)
{
  unsigned int v3; // edx

  v3 = partOfMask | this->Flags & 0xFFBF;
  if ( v3 != this->Flags )
    this->Flags = v3;
}

