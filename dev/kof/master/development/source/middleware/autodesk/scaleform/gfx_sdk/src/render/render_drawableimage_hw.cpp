#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"

void Scaleform::Render::DICommand_CreateTexture::ExecuteHW(Scaleform::Render::DICommandContext & context); // 0x1403C4A50
void Scaleform::Render::DICommand_Clear::ExecuteHW(Scaleform::Render::DICommandContext & context); // 0x1403C4980
void Scaleform::Render::DICommand_ApplyFilter::ExecuteHWGetImages(Scaleform::Render::DrawableImage * * images, Scaleform::Render::Size<float> * readOffsets, const Scaleform::Render::Rect<long> & destClippedRect); // 0x1403C5AE0
void Scaleform::Render::DICommand_ApplyFilter::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & context, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * __formal); // 0x1403C4D00
void Scaleform::Render::DICommand_ColorTransform::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & context, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen); // 0x1403C52A0
void Scaleform::Render::DICommand_Draw::ExecuteHW(Scaleform::Render::DICommandContext & context); // 0x1403C4B10
void Scaleform::Render::DICommand_Draw::ExecuteDiscard(); // 0x1403C4430
void Scaleform::Render::DICommand_Dispose::ExecuteHW(Scaleform::Render::DICommandContext & context); // 0x1403C4A90
void Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_ApplyFilter>::ExecuteHW(Scaleform::Render::DICommandContext & context); // 0x1403C4450
void Scaleform::Render::DICommand_CopyChannel::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & context, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen); // 0x1403C53E0
void Scaleform::Render::DICommand_CopyPixels::ExecuteHWGetImages(Scaleform::Render::DrawableImage * * images, Scaleform::Render::Size<float> * readOffsets, const Scaleform::Render::Rect<long> & destClippedRect); // 0x1403C5B50
void Scaleform::Render::DICommand_CopyPixels::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & context, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen); // 0x1403C5590
bool Scaleform::Render::DICommand_CopyPixels::CalculateDestClippedRect(Scaleform::Render::Rect<long> & dstClippedRect, Scaleform::Render::Point<long> & delta); // 0x1403C4250
void Scaleform::Render::DICommand_FillRect::ExecuteHW(Scaleform::Render::DICommandContext & context); // 0x1403C4C50
void Scaleform::Render::DICommand_Compare::ExecuteHWGetImages(Scaleform::Render::DrawableImage * * images, Scaleform::Render::Size<float> * readOffsets, const Scaleform::Render::Rect<long> & __formal); // 0x1403C5B30
void Scaleform::Render::DICommand_Compare::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & context, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen); // 0x1403C53C0
void Scaleform::Render::DICommand_Merge::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & context, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen); // 0x1403C5630
void Scaleform::Render::DICommand_PaletteMap::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & context, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen); // 0x1403C57D0
void Scaleform::Render::DICommand_Scroll::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & context, Scaleform::Render::Texture * * tex, const Scaleform::Render::Matrix2x4<float> * texgen); // 0x1403C59F0
void Scaleform::Render::DICommand_Threshold::ExecuteHWCopyAction(Scaleform::Render::DICommandContext & __formal, Scaleform::Render::Texture * * __formal, const Scaleform::Render::Matrix2x4<float> * __formal); // 0x14002E7C0bool __fastcall Scaleform::Render::DICommand_CopyPixels::CalculateDestClippedRect(
        Scaleform::Render::DICommand_CopyPixels *this,
        Scaleform::Render::Rect<long> *dstClippedRect,
        Scaleform::Render::Point<long> *delta)
{
  int v4; // edi
  Scaleform::Render::DrawableImage *pObject; // rcx
  int *v8; // rax
  Scaleform::Render::DrawableImage *v9; // rcx
  int v10; // er14
  int v11; // er12
  __int64 *v12; // rax
  int v13; // edx
  bool result; // al
  int v15; // ecx
  int y1; // er15
  int y2; // eax
  int x2; // ecx
  int x1; // esi
  Scaleform::Render::Size<unsigned long> *v20; // rax
  int v21; // er9
  unsigned int Width; // er8
  signed int v23; // ecx
  int v24; // eax
  int v25; // er8
  int y; // ecx
  int v27; // er8
  int v28; // er9
  int v29; // edx
  int v30; // er10
  int v31; // er11
  int v32; // ecx
  int v33; // eax
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __int64 v35; // [rsp+28h] [rbp-50h] BYREF
  char v36[16]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  pObject = this->pSource.pObject;
  if ( pObject )
  {
    v8 = (int *)pObject->GetSize(pObject, (Scaleform::Render::Size<unsigned long> *)&v35);
  }
  else
  {
    v35 = 0i64;
    v8 = (int *)&v35;
  }
  v9 = this->pImage.pObject;
  v10 = *v8;
  v11 = v8[1];
  if ( v9 )
  {
    v12 = (__int64 *)v9->GetSize(v9, (Scaleform::Render::Size<unsigned long> *)&v34);
  }
  else
  {
    v34 = 0i64;
    v12 = &v34;
  }
  v13 = *((_DWORD *)v12 + 1);
  LODWORD(v35) = *(_DWORD *)v12;
  LODWORD(v34) = v13;
  if ( !this->pAlphaSource.pObject )
    return Scaleform::Render::DICommand_SourceRect::CalculateDestClippedRect(this, dstClippedRect, delta);
  v15 = this->DestPoint.y - this->SourceRect.y1;
  delta->x = this->DestPoint.x - this->SourceRect.x1;
  delta->y = v15;
  y1 = this->SourceRect.y1;
  if ( v11 < y1 )
    return 0;
  y2 = this->SourceRect.y2;
  if ( y2 < 0 )
    return 0;
  x2 = this->SourceRect.x2;
  if ( x2 < 0 )
    return 0;
  x1 = this->SourceRect.x1;
  if ( v10 < x1 )
    return 0;
  if ( x1 < 0 )
    x1 = 0;
  if ( v10 > x2 )
    v10 = this->SourceRect.x2;
  if ( y1 < 0 )
    y1 = 0;
  if ( v11 > y2 )
    v11 = this->SourceRect.y2;
  v20 = this->pAlphaSource.pObject->GetSize(this->pAlphaSource.pObject, v36);
  v21 = this->SourceRect.y1 - this->AlphaPoint.y;
  Width = v20->Width;
  v23 = v21 + v20->Height;
  v24 = this->SourceRect.x1 - this->AlphaPoint.x;
  v25 = v24 + Width;
  if ( v11 < v21 || v23 < y1 || v25 < x1 || v10 < v24 )
    return 0;
  if ( x1 <= v24 )
    x1 = this->SourceRect.x1 - this->AlphaPoint.x;
  if ( v10 > v25 )
    v10 = v25;
  if ( y1 <= v21 )
    y1 = this->SourceRect.y1 - this->AlphaPoint.y;
  if ( v11 > v23 )
    v11 = v23;
  y = delta->y;
  v27 = v11 + y;
  v28 = delta->x + x1;
  v29 = v10 + delta->x;
  v30 = y1 + y;
  if ( v11 + y < 0 )
    return 0;
  v31 = v34;
  if ( (int)v34 < v30 )
    return 0;
  v32 = v35;
  if ( (int)v35 < v28 || v29 < 0 )
    return 0;
  v33 = 0;
  if ( v28 > 0 )
    v33 = delta->x + x1;
  dstClippedRect->x1 = v33;
  result = 1;
  if ( v29 > v32 )
    v29 = v32;
  dstClippedRect->x2 = v29;
  if ( v30 > 0 )
    v4 = v30;
  dstClippedRect->y1 = v4;
  if ( v27 > v31 )
    v27 = v31;
  dstClippedRect->y2 = v27;
  return result;
}

void __fastcall Scaleform::Render::DICommand_Draw::ExecuteDiscard(Scaleform::Render::DICommand_Draw *this)
{
  Scaleform::Render::DrawableImageContext::AddTreeRootToKillList(this->pImage.pObject->pContext.pObject, this->pRoot);
}

void __fastcall Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_CopyPixels>::ExecuteHW(
        Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold> *this,
        Scaleform::Render::DICommandContext *context)
{
  Scaleform::Render::TextureManager *v4; // rax
  Scaleform::Render::DICommand_SourceRectImpl<Scaleform::Render::DICommand_Threshold>_vtbl *v5; // r9
  Scaleform::Render::TextureManager *v6; // r12
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // r12
  int *v16; // rbx
  Scaleform::Render::RenderTarget *v17; // rax
  Scaleform::Render::HAL *pHAL; // rcx
  __int64 v19; // rcx
  char *v20; // rax
  int v21; // er9
  char *v22; // rdx
  int v23; // er10
  int v24; // er11
  int v25; // er14
  __int64 v26; // r8
  __m128 v27; // xmm0
  __m128 v28; // xmm3
  float v29; // xmm1_4
  float v30; // xmm2_4
  int v31; // ecx
  float v32; // xmm2_4
  int v33; // eax
  Scaleform::Render::HAL *v34; // rcx
  __int64 v35; // rax
  float v36; // xmm3_4
  float v37; // xmm4_4
  __m128 v38; // xmm0
  Scaleform::Render::HAL *v39; // rcx
  Scaleform::Render::HAL *v40; // rdi
  __int64 v41; // rax
  __m128 v42; // xmm3
  Scaleform::Render::HAL_vtbl *v43; // rsi
  __int64 v44; // rax
  float v45; // [rsp+30h] [rbp-D0h] BYREF
  float v46; // [rsp+34h] [rbp-CCh]
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  char v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  float v50; // [rsp+58h] [rbp-A8h]
  float v51; // [rsp+5Ch] [rbp-A4h]
  __m128 v52; // [rsp+60h] [rbp-A0h]
  __int128 v53; // [rsp+70h] [rbp-90h] BYREF
  float v54; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+84h] [rbp-7Ch]
  __int64 v56; // [rsp+8Ch] [rbp-74h]
  float v57; // [rsp+94h] [rbp-6Ch]
  __int64 v58; // [rsp+98h] [rbp-68h]
  __int64 v59[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v60[6]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v61[4]; // [rsp+D0h] [rbp-30h] BYREF
  char v62[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v63; // [rsp+F8h] [rbp-8h] BYREF
  char v64; // [rsp+FCh] [rbp-4h] BYREF

  v4 = context->pHAL->GetTextureManager(context->pHAL);
  v5 = this->__vftable;
  v6 = v4;
  v53 = 0i64;
  v5->CalculateDestClippedRect(this, (Scaleform::Render::Rect<long> *)&v53, (Scaleform::Render::Point<long> *)&v48);
  if ( (HIDWORD(v53) - DWORD1(v53)) * (DWORD2(v53) - (_DWORD)v53) )
  {
    memset(v59, 0, sizeof(v59));
    this->ExecuteHWGetImages(
      this,
      (Scaleform::Render::DrawableImage **)v59,
      (Scaleform::Render::Size<float> *)v60,
      (const Scaleform::Render::Rect<long> *)&v53);
    v7 = 0i64;
    v8 = 3i64;
    v9 = 0i64;
    v10 = 3i64;
    do
    {
      v11 = v59[v9];
      if ( v11 )
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 208i64))(v11);
      else
        v12 = 0i64;
      v13 = v59[v9];
      *(__int64 *)((char *)&v49 + v9 * 8) = v12;
      if ( v13 )
        v14 = (*(__int64 (__fastcall **)(__int64, Scaleform::Render::TextureManager *))(*(_QWORD *)v13 + 168i64))(
                v13,
                v6);
      else
        v14 = 0i64;
      v61[v9++] = v14;
      --v10;
    }
    while ( v10 );
    v15 = this->GetRequireSourceRead(this);
    v16 = 0i64;
    if ( v15 )
    {
      LODWORD(v45) = DWORD2(v53) - v53;
      LODWORD(v46) = HIDWORD(v53) - DWORD1(v53);
      v17 = context->pHAL->CreateTempRenderTarget(context->pHAL, &v45, 0i64);
      pHAL = context->pHAL;
      v16 = (int *)v17;
      v47 = 0;
      v50 = v45;
      v51 = v46;
      v49 = 0i64;
      ((void (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::RenderTarget *, __int64, __int64 *, int *))pHAL->PushRenderTarget)(
        pHAL,
        v17,
        10i64,
        &v49,
        &v47);
    }
    v19 = 3i64;
    v20 = &v63;
    do
    {
      *((_QWORD *)v20 - 1) = 1065353216i64;
      *(_QWORD *)v20 = 0i64;
      *((_DWORD *)v20 + 2) = 0;
      *(_QWORD *)(v20 + 12) = 1065353216i64;
      *((_DWORD *)v20 + 5) = 0;
      v20 += 32;
      --v19;
    }
    while ( v19 );
    v21 = HIDWORD(v53);
    v22 = &v64;
    v23 = DWORD2(v53);
    v24 = DWORD1(v53);
    v25 = v53;
    do
    {
      v26 = v61[v7 / 2];
      if ( v26 )
      {
        v27 = (__m128)COERCE_UNSIGNED_INT((float)(v23 - v25));
        v27.m128_f32[0] = v27.m128_f32[0] / (float)*(int *)(v26 + 56);
        v28 = (__m128)COERCE_UNSIGNED_INT((float)(v21 - v24));
        v28.m128_f32[0] = v28.m128_f32[0] / (float)*(int *)(v26 + 60);
        *(__m128 *)(v22 - 12) = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), *(__m128 *)(v22 - 12));
        v29 = *(float *)&v60[v7];
        *(__m128 *)(v22 + 4) = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), *(__m128 *)(v22 + 4));
        v30 = (float)*(int *)(v26 + 60);
        v27.m128_i32[0] = v60[v7 + 1];
        *(float *)v22 = (float)(v29 / (float)*(int *)(v26 + 56)) + *(float *)v22;
        *((float *)v22 + 4) = (float)(v27.m128_f32[0] / v30) + *((float *)v22 + 4);
      }
      v7 += 2i64;
      v22 += 32;
      --v8;
    }
    while ( v8 );
    this->ExecuteHWCopyAction(
      this,
      context,
      (Scaleform::Render::Texture **)v61,
      (const Scaleform::Render::Matrix2x4<float> *)v62);
    if ( v15 )
    {
      context->pHAL->PopRenderTarget(context->pHAL, 2u);
      v31 = v16[15] - v16[13];
      v32 = (float)v16[10];
      v33 = v16[11];
      v55 = 0i64;
      v56 = 0i64;
      v58 = 0i64;
      v54 = (float)(v16[14] - v16[12]) / v32;
      v57 = (float)v31 / (float)v33;
      v34 = context->pHAL;
      v52.m128_f32[1] = (float)(HIDWORD(v53) - DWORD1(v53));
      *(float *)&v49 = (float)(DWORD2(v53) - v53);
      *((float *)&v49 + 1) = *(float *)&v49 * 0.0;
      v50 = *(float *)&v49 * 0.0;
      v52.m128_f32[0] = v52.m128_f32[1] * 0.0;
      v52.m128_f32[2] = v52.m128_f32[1] * 0.0;
      v51 = (float)(*(float *)&v49 * 0.0) + (float)(int)v53;
      v52.m128_f32[3] = (float)(v52.m128_f32[1] * 0.0) + (float)SDWORD1(v53);
      v35 = (__int64)v34->GetVP(v34);
      v36 = 1.0 / (float)*(int *)(v35 + 16);
      v37 = 1.0 / (float)*(int *)(v35 + 20);
      *(float *)&v49 = *(float *)&v49 * v36;
      *((float *)&v49 + 1) = *((float *)&v49 + 1) * v36;
      v50 = v50 * v36;
      v52.m128_f32[0] = v52.m128_f32[0] * v37;
      v38 = (__m128)v52.m128_u32[2];
      v39 = context->pHAL;
      v52.m128_f32[1] = v52.m128_f32[1] * v37;
      v51 = (float)(v51 * v36) + -0.5;
      v52.m128_f32[2] = v52.m128_f32[2] * v37;
      v52.m128_f32[3] = (float)(v52.m128_f32[3] * v37) + -0.5;
      *(double *)v38.m128_u64 = ((double (__fastcall *)(Scaleform::Render::HAL *))v39->GetViewportScaling)(v39);
      v40 = context->pHAL;
      v41 = *(_QWORD *)v16;
      v42 = v38;
      v42.m128_f32[0] = v38.m128_f32[0] * 2.0;
      *(float *)&v49 = *(float *)&v49 + *(float *)&v49;
      *((float *)&v49 + 1) = *((float *)&v49 + 1) + *((float *)&v49 + 1);
      v50 = v50 + v50;
      v51 = v51 + v51;
      v52 = _mm_mul_ps(v52, _mm_shuffle_ps(v42, v42, 0));
      v43 = v40->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v44 = (*(__int64 (__fastcall **)(int *))(v41 + 24))(v16);
      v43->DrawableCopyback(
        v40,
        (Scaleform::Render::Texture *)v44,
        (const Scaleform::Render::Matrix2x4<float> *)&v49,
        (const Scaleform::Render::Matrix2x4<float> *)&v54,
        -1u);
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)v16 + 40i64))(v16, 0i64);
    }
    if ( v16 )
      (*(void (__fastcall **)(int *))(*(_QWORD *)v16 + 16i64))(v16);
  }
}

void __fastcall Scaleform::Render::DICommand_Clear::ExecuteHW(
        Scaleform::Render::DICommand_Clear *this,
        Scaleform::Render::DICommandContext *context)
{
  Scaleform::Render::Size<unsigned long> *v4; // rax
  Scaleform::Render::HAL *pHAL; // rcx
  float v6; // xmm2_4
  unsigned int Raw; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  Scaleform::Render::HAL::ApplyBlendMode(context->pHAL, Blend_OverwriteAll, 1, 1);
  v4 = this->pImage.pObject->GetSize(this->pImage.pObject, &Raw);
  v8 = -1i64;
  pHAL = context->pHAL;
  v6 = (float)(int)v4->Height + 1.0;
  v9 = (int)(float)((float)(int)v4->Width + 1.0);
  v10 = (int)v6;
  Raw = this->FillColor.Raw;
  ((void (__fastcall *)(Scaleform::Render::HAL *, __int64 *, unsigned int *, _QWORD))pHAL->ClearSolidRectangle)(
    pHAL,
    &v8,
    &Raw,
    0i64);
  Scaleform::Render::HAL::ApplyBlendMode(context->pHAL, Blend_None, 0, 0);
}

void __fastcall Scaleform::Render::DICommand_CreateTexture::ExecuteHW(
        Scaleform::Render::DICommand_CreateTexture *this,
        Scaleform::Render::DICommandContext *context)
{
  Scaleform::Render::TextureManager *v4; // rax

  v4 = context->pHAL->GetTextureManager(context->pHAL);
  Scaleform::Render::DrawableImage::createTextureFromManager(this->pImage.pObject, context->pHAL, v4);
}

void __fastcall Scaleform::Render::DICommand_Dispose::ExecuteHW(
        Scaleform::Render::DICommand_Dispose *this,
        Scaleform::Render::DICommandContext *context)
{
  Scaleform::Render::DrawableImage *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rax
  Scaleform::RefCountVImpl *v6; // rbx

  pObject = this->pImage.pObject;
  if ( pObject )
  {
    v5 = (Scaleform::RefCountVImpl *)pObject->GetTexture(pObject, 0i64);
    v6 = v5;
    if ( v5 )
      Scaleform::Render::RenderBuffer::AddRef(v5);
    this->pImage.pObject->DrawableImageState |= 0x20u;
    if ( v6 )
    {
      v6->__vftable[3].Release(v6);
      Scaleform::Render::HAL::ForceUpdateImages(context->pHAL, 0i64);
      Scaleform::RefCountImpl::Release(v6);
    }
  }
}

void __fastcall Scaleform::Render::DICommand_Draw::ExecuteHW(
        Scaleform::Render::DICommand_Draw *this,
        Scaleform::Render::DICommandContext *context)
{
  Scaleform::Render::DrawableImageContext *pObject; // r14
  Scaleform::Render::DrawableImageContext_vtbl *v5; // rbx
  Scaleform::Render::ContextImpl::RenderNotify *v6; // rax
  char v7; // bl
  Scaleform::Render::HAL *pHAL; // rcx
  Scaleform::Render::Viewport vpin; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::Render::Color backgroundColor; // [rsp+70h] [rbp+8h] BYREF

  pObject = this->pImage.pObject->pContext.pObject;
  v5 = pObject->__vftable;
  v6 = context->pHAL->GetContextNotify(context->pHAL);
  v5->ExecuteNextCapture(pObject, v6);
  v7 = 0;
  vpin = *context->pHAL->GetVP(context->pHAL);
  if ( (context->pHAL->HALState & 8) != 0 )
  {
    v7 = 1;
    Scaleform::Render::HAL::EndDisplay(context->pHAL);
  }
  context->pHAL->Flush(context->pHAL);
  Scaleform::Render::HAL::ApplyBlendMode(context->pHAL, Blend_Normal, 1, 1);
  Scaleform::Render::HAL::Draw(context->pHAL, this->pRoot);
  context->pHAL->Flush(context->pHAL);
  if ( v7 )
  {
    pHAL = context->pHAL;
    backgroundColor = 0;
    Scaleform::Render::HAL::BeginDisplay(
      pHAL,
      (Scaleform::Render::Color)&backgroundColor,
      &vpin,
      0,
      (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  }
  Scaleform::Render::DrawableImageContext::AddTreeRootToKillList(pObject, this->pRoot);
}

void __fastcall Scaleform::Render::DICommand_FillRect::ExecuteHW(
        Scaleform::Render::DICommand_FillRect *this,
        Scaleform::Render::DICommandContext *context)
{
  char v4; // r8
  bool v5; // zf
  Scaleform::Render::HAL *pHAL; // rcx
  int x2; // eax
  unsigned int Raw; // [rsp+20h] [rbp-28h] BYREF
  int v9[4]; // [rsp+28h] [rbp-20h] BYREF

  Scaleform::Render::HAL::ApplyBlendMode(context->pHAL, Blend_OverwriteAll, 1, 1);
  Raw = this->FillColor.Raw;
  v4 = HIBYTE(Raw);
  v5 = !this->pImage.pObject->Transparent;
  v9[0] = this->ApplyRect.x1;
  if ( v5 )
    v4 = -1;
  pHAL = context->pHAL;
  v9[1] = this->ApplyRect.y1;
  x2 = this->ApplyRect.x2;
  HIBYTE(Raw) = v4;
  v9[2] = x2;
  v9[3] = this->ApplyRect.y2;
  ((void (__fastcall *)(Scaleform::Render::HAL *, int *, unsigned int *, _QWORD))pHAL->ClearSolidRectangle)(
    pHAL,
    v9,
    &Raw,
    0i64);
}

void __fastcall Scaleform::Render::DICommand_ApplyFilter::ExecuteHWCopyAction(
        Scaleform::Render::DICommand_ApplyFilter *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *__formal)
{
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __m128i v9; // xmm4
  Scaleform::Render::Filter *pObject; // r8
  __m128i v11; // xmm1
  float v12; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  Scaleform::Render::Filter *v18; // rdx
  Scaleform::Render::CacheablePrimitive *v19; // rax
  Scaleform::Render::FilterPrimitive *v20; // rdi
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v21; // rax
  Scaleform::Render::CacheablePrimitive *v22; // rax
  Scaleform::Render::CacheablePrimitive *v23; // rbx
  float v24; // xmm0_4
  Scaleform::Render::Texture *v25; // rdx
  Scaleform::Render::HAL *pHAL; // rcx
  float v27; // xmm9_4
  float v28; // xmm8_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  Scaleform::Render::MatrixPoolImpl::HMatrix v31; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::FilterSet v32; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::Render::Rect<float> result; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+80h] [rbp-80h] BYREF
  float v35; // [rsp+A0h] [rbp-60h] BYREF
  float v36; // [rsp+A4h] [rbp-5Ch]
  float v37; // [rsp+A8h] [rbp-58h]
  float v38; // [rsp+ACh] [rbp-54h]
  float v39; // [rsp+B0h] [rbp-50h]
  float v40; // [rsp+B4h] [rbp-4Ch]
  float v41; // [rsp+B8h] [rbp-48h]
  float v42; // [rsp+BCh] [rbp-44h]
  Scaleform::Render::Rect<long> sourceRect; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-20h]

  v6 = _mm_cvtsi32_si128(this->SourceRect.y1);
  v7 = _mm_cvtsi32_si128(this->SourceRect.x2);
  v9 = _mm_cvtsi32_si128(this->SourceRect.y2);
  pObject = this->pFilter.pObject;
  *(_OWORD *)&m.M[1][0] = _xmm;
  v45 = _xmm;
  v11 = _mm_cvtsi32_si128(this->SourceRect.x1);
  *(_OWORD *)&m.M[0][0] = _xmm;
  v44 = _xmm;
  result = 0i64;
  sourceRect.x1 = (int)(float)(_mm_cvtepi32_ps(v11).m128_f32[0] * 20.0);
  sourceRect.y1 = (int)(float)(_mm_cvtepi32_ps(v6).m128_f32[0] * 20.0);
  sourceRect.x2 = (int)(float)(_mm_cvtepi32_ps(v7).m128_f32[0] * 20.0);
  sourceRect.y2 = (int)(float)(_mm_cvtepi32_ps(v9).m128_f32[0] * 20.0);
  Scaleform::Render::DrawableImage::CalcFilterRect(&result, &sourceRect, pObject);
  v12 = floorf(result.x1 - 10.0);
  v13 = floorf(result.y1 - 10.0);
  v14 = ceilf(result.x2 + 10.0);
  v15 = ceilf(result.y2 + 10.0);
  result.x1 = v12 * 0.050000001;
  result.y1 = v13 * 0.050000001;
  result.x2 = v14 * 0.050000001;
  result.y2 = v15 * 0.050000001;
  v16 = (float)(int)(float)(v13 * 0.050000001);
  *(float *)v7.m128i_i32 = (float)(int)((int)result.x1
                                      + (((int)(float)(v14 * 0.050000001) - (int)result.x1 + 31) & 0xFFFFFFE0))
                         - (float)(int)result.x1;
  v17 = (float)(int)((int)result.y1 + (((int)(float)(v15 * 0.050000001) - (int)result.y1 + 31) & 0xFFFFFFE0)) - v16;
  v18 = this->pFilter.pObject;
  m.M[0][0] = m.M[0][0] * *(float *)v7.m128i_i32;
  m.M[0][1] = m.M[0][1] * *(float *)v7.m128i_i32;
  m.M[0][2] = m.M[0][2] * *(float *)v7.m128i_i32;
  m.M[1][1] = m.M[1][1] * v17;
  m.M[1][0] = m.M[1][0] * v17;
  m.M[0][3] = (float)(m.M[0][3] * *(float *)v7.m128i_i32) + (float)(int)(float)(v12 * 0.050000001);
  m.M[1][2] = m.M[1][2] * v17;
  m.M[1][3] = (float)(m.M[1][3] * v17) + v16;
  Scaleform::Render::FilterSet::FilterSet(&v32, v18);
  v19 = (Scaleform::Render::CacheablePrimitive *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   80i64);
  v20 = (Scaleform::Render::FilterPrimitive *)v19;
  if ( v19 )
  {
    Scaleform::Render::CacheablePrimitive::CacheablePrimitive(v19);
    v20->Scaleform::Render::CacheablePrimitive::Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::FilterPrimitive_vtbl *)&Scaleform::Render::FilterPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>'};
    v20->Scaleform::Render::CacheablePrimitive::Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::FilterPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)&v32);
    v20->pFilters.pObject = &v32;
  }
  else
  {
    v20 = 0i64;
  }
  v21 = context->pHAL->GetMatrixPool(context->pHAL);
  Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(v21, &v31, &m, 0);
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(&v31, &m);
  Scaleform::Render::CacheablePrimitive::Insert(v20, 0i64, &v31);
  v22 = (Scaleform::Render::CacheablePrimitive *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   80i64);
  v23 = v22;
  if ( v22 )
  {
    Scaleform::Render::CacheablePrimitive::CacheablePrimitive(v22);
    LODWORD(v23[1].Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable) = 16;
    v23->Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::CacheablePrimitive_vtbl *)&Scaleform::Render::BlendPrimitive::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::CacheablePrimitive,67>'};
    v23->Scaleform::Render::RenderQueueItem::Interface::__vftable = (Scaleform::Render::RenderQueueItem::Interface_vtbl *)&Scaleform::Render::BlendPrimitive::`vftable'{for `Scaleform::Render::RenderQueueItem::Interface'};
  }
  else
  {
    v23 = 0i64;
  }
  context->pHAL->PushBlendMode(context->pHAL, (Scaleform::Render::BlendPrimitive *)v23);
  context->pHAL->PushFilters(context->pHAL, v20);
  v24 = context->pHAL->GetViewportScaling(context->pHAL);
  v25 = tex[1];
  pHAL = context->pHAL;
  DWORD2(v45) = 0;
  v35 = result.x2 - result.x1;
  v40 = result.y2 - result.y1;
  v27 = (float)(result.x2 - result.x1) * 0.0;
  *((float *)&v45 + 1) = (float)(v24 * 2.0) + 0.0;
  v36 = v27;
  v37 = v27;
  v44 = _xmm_bf800000000000000000000040000000;
  v28 = (float)(result.y2 - result.y1) * 0.0;
  *((float *)&v45 + 3) = (float)(-0.0 - (float)((float)(v24 * 2.0) * 0.5)) + 0.0;
  v39 = v28;
  v41 = v28;
  v38 = v27 + result.x1;
  v42 = v28 + result.y1;
  *(float *)&v45 = (float)((float)(v24 * 2.0) * 0.0) + 0.0;
  v29 = 1.0 / (float)(int)v25->ImgSize.Width;
  v30 = 1.0 / (float)(int)v25->ImgSize.Height;
  v39 = v28 * v30;
  v40 = (float)(result.y2 - result.y1) * v30;
  v41 = v28 * v30;
  v42 = (float)(v28 + result.y1) * v30;
  v35 = (float)(result.x2 - result.x1) * v29;
  v36 = v27 * v29;
  v37 = v27 * v29;
  v38 = (float)(v27 + result.x1) * v29;
  pHAL->DrawableCopyback(
    pHAL,
    v25,
    (const Scaleform::Render::Matrix2x4<float> *)&v44,
    (const Scaleform::Render::Matrix2x4<float> *)&v35,
    -1u);
  m.M[1][1] = result.y2 - result.y1;
  m.M[0][0] = result.x2 - result.x1;
  m.M[1][0] = (float)(result.y2 - result.y1) * 0.0;
  m.M[1][2] = m.M[1][0];
  m.M[0][1] = (float)(result.x2 - result.x1) * 0.0;
  m.M[0][2] = m.M[0][1];
  m.M[1][3] = m.M[1][0] + result.y1;
  m.M[0][3] = m.M[0][1] + result.x1;
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(&v31, &m);
  context->pHAL->PopFilters(context->pHAL);
  context->pHAL->PopBlendMode(context->pHAL);
  if ( v23 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v23);
  if ( v31.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(v31.pHandle->pHeader);
  if ( v20 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v20);
  Scaleform::Render::FilterSet::~FilterSet(&v32);
}

void __fastcall Scaleform::Render::DICommand_ColorTransform::ExecuteHWCopyAction(
        Scaleform::Render::DICommand_ColorTransform *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  Scaleform::Render::DrawableImage *pObject; // rax
  __int128 v9; // xmm1
  Scaleform::Render::Cxform v10; // [rsp+20h] [rbp-58h] BYREF

  Scaleform::Render::HAL::ApplyBlendMode(
    context->pHAL,
    (Scaleform::Render::BlendMode)(this->pImage.pObject->Transparent + 15),
    1,
    1);
  Scaleform::Render::Cxform::Cxform(&v10);
  pObject = this->pImage.pObject;
  v9 = *(_OWORD *)&this->CxBuffer[16];
  *(_OWORD *)&v10.M[0][0] = *(_OWORD *)this->CxBuffer;
  *(_OWORD *)&v10.M[1][0] = v9;
  if ( !pObject->Transparent )
  {
    v10.M[0][0] = v10.M[0][0] * (float)(v10.M[0][3] + v10.M[1][3]);
    v10.M[1][0] = v10.M[1][0] * (float)(v10.M[0][3] + v10.M[1][3]);
    v10.M[0][1] = v10.M[0][1] * (float)(v10.M[0][3] + v10.M[1][3]);
    v10.M[1][1] = v10.M[1][1] * (float)(v10.M[0][3] + v10.M[1][3]);
    v10.M[0][2] = v10.M[0][2] * (float)(v10.M[0][3] + v10.M[1][3]);
    v10.M[1][2] = v10.M[1][2] * (float)(v10.M[0][3] + v10.M[1][3]);
    LODWORD(v10.M[0][3]) = FLOAT_1_0;
    v10.M[1][3] = 0.0;
  }
  context->pHAL->DrawableCxform(context->pHAL, tex + 1, &texgen[1], &v10);
}

void __fastcall Scaleform::Render::DICommand_Compare::ExecuteHWCopyAction(
        Scaleform::Render::DICommand_Compare *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  context->pHAL->DrawableCompare(context->pHAL, tex, texgen);
}

void __fastcall Scaleform::Render::DICommand_CopyChannel::ExecuteHWCopyAction(
        Scaleform::Render::DICommand_CopyChannel *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  char *v5; // rax
  __int64 v6; // r8
  int v10; // er10
  unsigned int v11; // edx
  char v12; // r9
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int64 *v16; // rcx
  int v17[10]; // [rsp+20h] [rbp-A8h] BYREF
  char v18; // [rsp+48h] [rbp-80h] BYREF
  __int64 v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20[7]; // [rsp+68h] [rbp-60h] BYREF

  v5 = &v18;
  v6 = 2i64;
  do
  {
    *((_QWORD *)v5 - 5) = 0i64;
    *((_QWORD *)v5 - 4) = 0i64;
    *((_QWORD *)v5 - 3) = 0i64;
    *((_QWORD *)v5 - 2) = 0i64;
    *((_QWORD *)v5 - 1) = 0i64;
    *(_QWORD *)v5 = 0i64;
    *((_QWORD *)v5 + 1) = 0i64;
    *((_QWORD *)v5 + 2) = 0i64;
    *((_DWORD *)v5 - 10) = 1065353216;
    *((_DWORD *)v5 - 5) = 1065353216;
    *(_DWORD *)v5 = 1065353216;
    *((_DWORD *)v5 + 5) = 1065353216;
    v5 += 64;
    --v6;
  }
  while ( v6 );
  v10 = 0;
  v11 = 0;
  v12 = 1;
  v13 = this->DestChannel - 1;
  if ( this->DestChannel != Channel_Red )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 2;
      if ( v15 )
      {
        if ( v15 == 4 )
          v11 = 3;
        else
          v12 = 0;
      }
      else
      {
        v11 = 2;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  switch ( this->SourceChannel )
  {
    case Channel_Red:
      goto LABEL_16;
    case Channel_Green:
      v16 = (__int64 *)((char *)&v19 + 4);
      break;
    case Channel_Blue:
      v16 = v20;
      break;
    case Channel_Alpha:
      v16 = (__int64 *)((char *)v20 + 4);
      break;
    default:
      v12 = 0;
LABEL_16:
      v16 = &v19;
      break;
  }
  v17[5 * v11] = 0;
  v19 = 0i64;
  memset(v20, 0, sizeof(v20));
  if ( v12 )
    LODWORD(v16[2 * v11]) = 1065353216;
  LOBYTE(v10) = this->pImage.pObject->Transparent;
  Scaleform::Render::HAL::ApplyBlendMode(context->pHAL, (Scaleform::Render::BlendMode)(v10 + 15), 1, 1);
  context->pHAL->DrawableCopyChannel(context->pHAL, tex, texgen, (const Scaleform::Render::Matrix4x4<float> *)v17);
}

void __fastcall Scaleform::Render::DICommand_CopyPixels::ExecuteHWCopyAction(
        Scaleform::Render::DICommand_CopyPixels *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  Scaleform::Render::DrawableImage *pObject; // rax
  bool MergeAlpha; // [rsp+20h] [rbp-68h]
  bool Transparent; // [rsp+28h] [rbp-60h]
  __int128 v11[2]; // [rsp+30h] [rbp-58h] BYREF

  pObject = this->pImage.pObject;
  v11[0] = _xmm_bf800000000000000000000040000000;
  v11[1] = _xmm;
  Scaleform::Render::HAL::ApplyBlendMode(context->pHAL, (Scaleform::Render::BlendMode)(pObject->Transparent + 15), 1, 1);
  Transparent = this->pImage.pObject->Transparent;
  MergeAlpha = this->MergeAlpha;
  context->pHAL->DrawableCopyPixels(
    context->pHAL,
    tex,
    texgen,
    (const Scaleform::Render::Matrix2x4<float> *)v11,
    MergeAlpha,
    Transparent);
}

void __fastcall Scaleform::Render::DICommand_Merge::ExecuteHWCopyAction(
        Scaleform::Render::DICommand_Merge *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  int *v5; // rax
  __int64 v7; // r8
  signed int AlphaMultiplier; // edx
  signed int RedMultiplier; // eax
  float v11; // xmm1_4
  signed int GreenMultiplier; // eax
  float v13; // xmm5_4
  signed int BlueMultiplier; // eax
  float v15; // xmm1_4
  float v16; // xmm4_4
  Scaleform::Render::DrawableImage *pObject; // rax
  int v18[10]; // [rsp+20h] [rbp-A8h] BYREF
  int v19[21]; // [rsp+48h] [rbp-80h] BYREF
  float v20; // [rsp+9Ch] [rbp-2Ch]

  v5 = v19;
  v7 = 2i64;
  do
  {
    *((_QWORD *)v5 - 5) = 0i64;
    *((_QWORD *)v5 - 4) = 0i64;
    *((_QWORD *)v5 - 3) = 0i64;
    *((_QWORD *)v5 - 2) = 0i64;
    *((_QWORD *)v5 - 1) = 0i64;
    *(_QWORD *)v5 = 0i64;
    *((_QWORD *)v5 + 1) = 0i64;
    *((_QWORD *)v5 + 2) = 0i64;
    *(v5 - 10) = 1065353216;
    *(v5 - 5) = 1065353216;
    *v5 = 1065353216;
    v5[5] = 1065353216;
    v5 += 16;
    --v7;
  }
  while ( v7 );
  AlphaMultiplier = 256;
  RedMultiplier = 256;
  if ( this->RedMultiplier < 0x100 )
    RedMultiplier = this->RedMultiplier;
  v11 = (float)RedMultiplier;
  GreenMultiplier = 256;
  if ( this->GreenMultiplier < 0x100 )
    GreenMultiplier = this->GreenMultiplier;
  v13 = (float)GreenMultiplier;
  BlueMultiplier = 256;
  if ( this->BlueMultiplier < 0x100 )
    BlueMultiplier = this->BlueMultiplier;
  v15 = v11 * 0.00390625;
  if ( this->AlphaMultiplier < 0x100 )
    AlphaMultiplier = this->AlphaMultiplier;
  v16 = (float)BlueMultiplier;
  *(float *)&v19[6] = v15;
  pObject = this->pImage.pObject;
  *(float *)&v19[11] = v13 * 0.00390625;
  *(float *)&v19[16] = v16 * 0.00390625;
  v20 = (float)AlphaMultiplier * 0.00390625;
  *(float *)v18 = 1.0 - v15;
  *(float *)&v18[5] = 1.0 - (float)(v13 * 0.00390625);
  *(float *)v19 = 1.0 - (float)(v16 * 0.00390625);
  *(float *)&v19[5] = 1.0 - v20;
  Scaleform::Render::HAL::ApplyBlendMode(context->pHAL, (Scaleform::Render::BlendMode)(pObject->Transparent + 15), 1, 1);
  context->pHAL->DrawableMerge(context->pHAL, tex, texgen, (const Scaleform::Render::Matrix4x4<float> *)v18);
}

void __fastcall Scaleform::Render::DICommand_PaletteMap::ExecuteHWCopyAction(
        Scaleform::Render::DICommand_PaletteMap *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  Scaleform::Render::DICommand_PaletteMap_vtbl *v6; // rax
  Scaleform::Render::Size<unsigned long> *v9; // rax
  Scaleform::Render::DrawableImage *pObject; // rcx
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  int *v13; // rax
  float v14; // xmm6_4
  float v15; // xmm7_4
  Scaleform::Render::Size<unsigned long> *v16; // rax
  float v17; // xmm4_4
  Scaleform::Render::Size<unsigned long> v18; // [rsp+30h] [rbp-29h] BYREF
  char v19[8]; // [rsp+38h] [rbp-21h] BYREF
  __m128 v20; // [rsp+40h] [rbp-19h] BYREF
  __m128 v21; // [rsp+50h] [rbp-9h]

  v6 = this->__vftable;
  v20 = (__m128)_xmm;
  v21 = (__m128)_xmm;
  if ( v6->GetRequireSourceRead(this) )
  {
    v20 = (__m128)_xmm_bf800000000000000000000040000000;
    v21 = (__m128)_xmm;
  }
  else
  {
    v9 = this->pImage.pObject->GetSize(this->pImage.pObject, &v18);
    pObject = this->pImage.pObject;
    v11 = (__m128)COERCE_UNSIGNED_INT((float)(this->SourceRect.x2 - this->SourceRect.x1));
    v11.m128_f32[0] = v11.m128_f32[0] / (float)(int)v9->Width;
    v12 = (__m128)COERCE_UNSIGNED_INT((float)(this->SourceRect.y2 - this->SourceRect.y1));
    v12.m128_f32[0] = v12.m128_f32[0] / (float)(int)v9->Height;
    v20 = _mm_mul_ps(v20, _mm_shuffle_ps(v11, v11, 0));
    v21 = _mm_mul_ps(v21, _mm_shuffle_ps(v12, v12, 0));
    v13 = (int *)pObject->GetSize(pObject, &v18);
    v14 = (float)*v13;
    v15 = (float)v13[1];
    v16 = this->pImage.pObject->GetSize(this->pImage.pObject, v19);
    v11.m128_f32[0] = v20.m128_f32[3]
                    + (float)((float)((float)this->DestPoint.x - (float)((float)(int)v16->Width * 0.5)) / v14);
    v17 = v21.m128_f32[3] + (float)((float)((float)this->DestPoint.y - (float)((float)(int)v16->Height * 0.5)) / v15);
    v20.m128_f32[0] = v20.m128_f32[0] + v20.m128_f32[0];
    v20.m128_f32[1] = v20.m128_f32[1] + v20.m128_f32[1];
    v20.m128_f32[3] = v11.m128_f32[0] + v11.m128_f32[0];
    v20.m128_f32[2] = v20.m128_f32[2] + v20.m128_f32[2];
    v21.m128_f32[0] = v21.m128_f32[0] * -2.0;
    v21.m128_f32[2] = v21.m128_f32[2] * -2.0;
    v21.m128_f32[1] = v21.m128_f32[1] * -2.0;
    v21.m128_f32[3] = v17 * -2.0;
  }
  context->pHAL->DrawablePaletteMap(
    context->pHAL,
    tex,
    texgen,
    (const Scaleform::Render::Matrix2x4<float> *)&v20,
    this->ChannelMask,
    this->Channels);
}

void __fastcall Scaleform::Render::DICommand_Scroll::ExecuteHWCopyAction(
        Scaleform::Render::DICommand_Scroll *this,
        Scaleform::Render::DICommandContext *context,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  double v8; // xmm0_8
  Scaleform::Render::DrawableImage *pObject; // rax
  Scaleform::Render::HAL *pHAL; // rcx
  __int128 v11; // [rsp+30h] [rbp-58h] BYREF
  float v12; // [rsp+40h] [rbp-48h]
  float v13; // [rsp+44h] [rbp-44h]
  int v14; // [rsp+48h] [rbp-40h]
  float v15; // [rsp+4Ch] [rbp-3Ch]

  v8 = ((double (__fastcall *)(Scaleform::Render::HAL *))context->pHAL->GetViewportScaling)(context->pHAL);
  pObject = this->pImage.pObject;
  pHAL = context->pHAL;
  v14 = 0;
  v13 = (float)(*(float *)&v8 * 2.0) + 0.0;
  v11 = _xmm_bf800000000000000000000040000000;
  v12 = (float)((float)(*(float *)&v8 * 2.0) * 0.0) + 0.0;
  v15 = (float)(-0.0 - (float)((float)(*(float *)&v8 * 2.0) * 0.5)) + 0.0;
  Scaleform::Render::HAL::ApplyBlendMode(pHAL, (Scaleform::Render::BlendMode)(pObject->Transparent + 15), 1, 1);
  context->pHAL->DrawableCopyback(
    context->pHAL,
    *tex,
    (const Scaleform::Render::Matrix2x4<float> *)&v11,
    &texgen[1],
    -1u);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::DICommand_ApplyFilter::ExecuteHWGetImages(
        Scaleform::Render::DICommand_ApplyFilter *this,
        Scaleform::Render::DrawableImage **images,
        Scaleform::Render::Size<float> *readOffsets,
        const Scaleform::Render::Rect<long> *destClippedRect)
{
  __m128i v4; // xmm0
  float y1; // xmm1_4
  float v6; // xmm1_4

  *images = this->pImage.pObject;
  v4 = _mm_cvtsi32_si128(destClippedRect->x1);
  y1 = (float)destClippedRect->y1;
  images[1] = this->pSource.pObject;
  readOffsets->Height = y1;
  LODWORD(readOffsets->Width) = _mm_cvtepi32_ps(v4).m128_u32[0];
  v6 = (float)this->SourceRect.y1;
  readOffsets[1].Width = (float)this->SourceRect.x1;
  readOffsets[1].Height = v6;
}

void __fastcall Scaleform::Render::DICommand_Compare::ExecuteHWGetImages(
        Scaleform::Render::DICommand_Compare *this,
        Scaleform::Render::DrawableImage **images,
        Scaleform::Render::Size<float> *readOffsets,
        const Scaleform::Render::Rect<long> *__formal)
{
  Scaleform::Render::DrawableImage *pObject; // rax

  *images = this->pSource.pObject;
  pObject = this->pImageCompare1.pObject;
  *readOffsets = 0i64;
  images[1] = pObject;
  readOffsets[1] = 0i64;
}

void __fastcall Scaleform::Render::DICommand_CopyPixels::ExecuteHWGetImages(
        Scaleform::Render::DICommand_CopyPixels *this,
        Scaleform::Render::DrawableImage **images,
        Scaleform::Render::Size<float> *readOffsets,
        const Scaleform::Render::Rect<long> *destClippedRect)
{
  __m128i v5; // xmm1
  __m128i v7; // xmm0
  int v9; // er11
  int v10; // ebx
  int v11; // er9
  int v12; // er8
  int y1; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx

  *images = this->pImage.pObject;
  v5 = _mm_cvtsi32_si128(destClippedRect->y1);
  v7 = _mm_cvtsi32_si128(destClippedRect->x1);
  images[1] = this->pSource.pObject;
  LODWORD(readOffsets->Height) = _mm_cvtepi32_ps(v5).m128_u32[0];
  LODWORD(readOffsets->Width) = _mm_cvtepi32_ps(v7).m128_u32[0];
  v9 = -this->AlphaPoint.x;
  v10 = -this->AlphaPoint.y;
  v11 = -this->DestPoint.x;
  if ( this->DestPoint.x > 0 )
    v11 = 0;
  v12 = -this->DestPoint.y;
  if ( this->DestPoint.y > 0 )
    v12 = 0;
  if ( v11 > 0 )
    v9 -= v11;
  if ( v12 > 0 )
    v10 -= v12;
  y1 = this->SourceRect.y1;
  if ( v9 < 0 )
    v9 = 0;
  if ( v10 < 0 )
    v10 = 0;
  v14 = v11 + this->SourceRect.x1;
  v15 = v10 + v12 + y1;
  images[2] = this->pAlphaSource.pObject;
  v16 = v9 + v14;
  if ( v16 < 0 )
    v16 = 0;
  if ( v15 < 0 )
    v15 = 0;
  readOffsets[1].Width = (float)v16;
  readOffsets[1].Height = (float)v15;
  v17 = -this->SourceRect.x1 - v11;
  if ( v17 < 0 )
    v17 = 0;
  v18 = -this->SourceRect.y1 - v12;
  if ( v18 < 0 )
    v18 = 0;
  v19 = v11 + this->AlphaPoint.x + v17;
  if ( v19 < 0 )
    v19 = 0;
  v20 = v12 + this->AlphaPoint.y + v18;
  if ( v20 < 0 )
    v20 = 0;
  readOffsets[2].Width = (float)v19;
  readOffsets[2].Height = (float)v20;
}

