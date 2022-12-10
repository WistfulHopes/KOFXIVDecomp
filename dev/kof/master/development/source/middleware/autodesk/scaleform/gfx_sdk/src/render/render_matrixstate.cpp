#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::MatrixState::MatrixState(Scaleform::Render::HAL * phal); // 0x14039AFC0
Scaleform::Render::MatrixState::MatrixState(); // 0x14039B3A0
void Scaleform::Render::MatrixState::SetUserMatrix(const Scaleform::Render::Matrix2x4<float> & user, const Scaleform::Render::Matrix2x4<float> & user3D); // 0x14039C240
void Scaleform::Render::MatrixState::SetUserMatrix(const Scaleform::Render::Matrix2x4<float> & user); // 0x14039C460
void Scaleform::Render::MatrixState::SetViewportMatrix(const Scaleform::Render::Matrix2x4<float> & vp); // 0x14039C470
Scaleform::Render::Viewport Scaleform::Render::MatrixState::SetOrientation(const Scaleform::Render::Viewport & vp); // 0x14039BDB0
void Scaleform::Render::MatrixState::recalculateUVPOC(); // 0x14039C530
void Scaleform::Render::MatrixState::Copy(Scaleform::Render::MatrixState * outmat, Scaleform::Render::MatrixState * inmat); // 0x14039B8E0
void Scaleform::Render::MatrixState::CopyFrom(Scaleform::Render::MatrixState * state); // 0x14039BD40
void Scaleform::Render::MatrixState::CopyTo(Scaleform::Render::MatrixState * state); // 0x14039BD50
const Scaleform::Render::Matrix4x4<float> & Scaleform::Render::MatrixState::updateStereoProjection(float factor); // 0x14039C860
void Scaleform::Render::Viewport::SetStereoViewport(unsigned long display); // 0x14039C200
Scaleform::Render::Matrix2x4<float> & Scaleform::Render::MatrixState::GetFullViewportMatrix(const Scaleform::Render::Size<int> & rtSize); // 0x140319E90
const Scaleform::Render::Matrix4x4<float> & Scaleform::Render::MatrixState::GetUVP(); // 0x14039BD90
Scaleform::Render::MatrixStateFactory::MatrixStateFactory(Scaleform::MemoryHeap * heap); // 0x14039B770
Scaleform::Render::MatrixState * Scaleform::Render::MatrixStateFactory::CreateMatrixState(); // 0x14039BD60void __fastcall Scaleform::Render::MatrixState::MatrixState(
        Scaleform::Render::MatrixState *this,
        Scaleform::Render::HAL *phal)
{
  this->__vftable = (Scaleform::Render::MatrixState_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::MatrixState_vtbl *)&Scaleform::Render::MatrixState::`vftable';
  this->RefCount = 1;
  *(_OWORD *)&this->View2D.M[0][0] = 0x3F800000ui64;
  this->View2D.M[1][0] = 0.0;
  *(_QWORD *)&this->View2D.M[1][1] = 1065353216i64;
  this->View2D.M[1][3] = 0.0;
  *(_OWORD *)&this->View3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->View3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->View3D.M[2][0] = 0ui64;
  this->View3D.M[0][0] = 1.0;
  this->View3D.M[1][1] = 1.0;
  this->View3D.M[2][2] = 1.0;
  *(_OWORD *)&this->Proj3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->Proj3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->Proj3D.M[2][0] = 0ui64;
  *(_OWORD *)&this->Proj3D.M[3][0] = 0ui64;
  this->Proj3D.M[0][0] = 1.0;
  this->Proj3D.M[1][1] = 1.0;
  this->Proj3D.M[2][2] = 1.0;
  this->Proj3D.M[3][3] = 1.0;
  *(_OWORD *)&this->Proj3DLeft.M[0][0] = 0ui64;
  *(_OWORD *)&this->Proj3DLeft.M[1][0] = 0ui64;
  *(_OWORD *)&this->Proj3DLeft.M[2][0] = 0ui64;
  *(_OWORD *)&this->Proj3DLeft.M[3][0] = 0ui64;
  this->Proj3DLeft.M[0][0] = 1.0;
  this->Proj3DLeft.M[1][1] = 1.0;
  this->Proj3DLeft.M[2][2] = 1.0;
  this->Proj3DLeft.M[3][3] = 1.0;
  *(_OWORD *)&this->Proj3DRight.M[0][0] = 0ui64;
  *(_OWORD *)&this->Proj3DRight.M[1][0] = 0ui64;
  *(_OWORD *)&this->Proj3DRight.M[2][0] = 0ui64;
  *(_OWORD *)&this->Proj3DRight.M[3][0] = 0ui64;
  this->Proj3DRight.M[0][0] = 1.0;
  this->Proj3DRight.M[1][1] = 1.0;
  this->Proj3DRight.M[2][2] = 1.0;
  this->Proj3DRight.M[3][3] = 1.0;
  *(_OWORD *)&this->User.M[0][0] = 0x3F800000ui64;
  this->User.M[1][0] = 0.0;
  *(_QWORD *)&this->User.M[1][1] = 1065353216i64;
  this->User.M[1][3] = 0.0;
  *(_OWORD *)&this->User3D.M[0][0] = 0x3F800000ui64;
  this->User3D.M[1][0] = 0.0;
  *(_QWORD *)&this->User3D.M[1][1] = 1065353216i64;
  this->User3D.M[1][3] = 0.0;
  *(_OWORD *)&this->Orient2D.M[0][0] = 0x3F800000ui64;
  this->Orient2D.M[1][0] = 0.0;
  *(_QWORD *)&this->Orient2D.M[1][1] = 1065353216i64;
  this->Orient2D.M[1][3] = 0.0;
  *(_OWORD *)&this->Orient3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->Orient3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->Orient3D.M[2][0] = 0ui64;
  *(_OWORD *)&this->Orient3D.M[3][0] = 0ui64;
  this->Orient3D.M[0][0] = 1.0;
  this->Orient3D.M[1][1] = 1.0;
  this->Orient3D.M[2][2] = 1.0;
  *(_QWORD *)&this->Orient3D.M[3][3] = 1065353216i64;
  *(_QWORD *)&this->ViewRectOriginal.y1 = 0i64;
  *(_QWORD *)&this->ViewRectOriginal.y2 = 0i64;
  *(_QWORD *)&this->ViewRect.y1 = 0i64;
  this->ViewRect.y2 = 0;
  *(_OWORD *)&this->UserView.M[0][0] = 0x3F800000ui64;
  this->UserView.M[1][0] = 0.0;
  *(_QWORD *)&this->UserView.M[1][1] = 1065353216i64;
  this->UserView.M[1][3] = 0.0;
  *(_OWORD *)&this->UVPO.M[0][0] = 0ui64;
  *(_OWORD *)&this->UVPO.M[1][0] = 0ui64;
  *(_OWORD *)&this->UVPO.M[2][0] = 0ui64;
  *(_OWORD *)&this->UVPO.M[3][0] = 0ui64;
  this->UVPO.M[0][0] = 1.0;
  this->UVPO.M[1][1] = 1.0;
  this->UVPO.M[2][2] = 1.0;
  this->UVPO.M[3][3] = 1.0;
  *(_OWORD *)&this->ViewRectCompensated3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->ViewRectCompensated3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->ViewRectCompensated3D.M[2][0] = 0ui64;
  *(_OWORD *)&this->ViewRectCompensated3D.M[3][0] = 0ui64;
  this->ViewRectCompensated3D.M[0][0] = 1.0;
  this->ViewRectCompensated3D.M[1][1] = 1.0;
  this->ViewRectCompensated3D.M[2][2] = 1.0;
  this->ViewRectCompensated3D.M[3][3] = 1.0;
  *(_WORD *)&this->UVPOChanged = 0;
  this->S3DDisplay = StereoCenter;
  this->S3DImpl.pObject = 0i64;
  this->pHAL = phal;
  *(_OWORD *)&this->FullViewportMVP.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&this->FullViewportMVP.M[1][1] = 1065353216i64;
  *(_QWORD *)&this->FullViewportMVP.M[1][2] = 0i64;
  *(_QWORD *)&this->FullViewportMVP.M[0][0] = 0x40000000i64;
  this->FullViewportMVP.M[0][2] = 0.0;
  this->FullViewportMVP.M[0][3] = -1.0;
  this->FullViewportMVP.M[1][0] = 0.0;
  this->FullViewportMVP.M[1][1] = -2.0;
  this->FullViewportMVP.M[1][3] = 1.0;
}

void __fastcall Scaleform::Render::MatrixState::MatrixState(Scaleform::Render::MatrixState *this)
{
  this->__vftable = (Scaleform::Render::MatrixState_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::MatrixState_vtbl *)&Scaleform::Render::MatrixState::`vftable';
  this->RefCount = 1;
  *(_OWORD *)&this->View2D.M[0][0] = 0x3F800000ui64;
  this->View2D.M[1][0] = 0.0;
  *(_QWORD *)&this->View2D.M[1][1] = 1065353216i64;
  this->View2D.M[1][3] = 0.0;
  *(_OWORD *)&this->View3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->View3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->View3D.M[2][0] = 0ui64;
  this->View3D.M[0][0] = 1.0;
  this->View3D.M[1][1] = 1.0;
  this->View3D.M[2][2] = 1.0;
  *(_OWORD *)&this->Proj3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->Proj3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->Proj3D.M[2][0] = 0ui64;
  *(_OWORD *)&this->Proj3D.M[3][0] = 0ui64;
  this->Proj3D.M[0][0] = 1.0;
  this->Proj3D.M[1][1] = 1.0;
  this->Proj3D.M[2][2] = 1.0;
  this->Proj3D.M[3][3] = 1.0;
  *(_OWORD *)&this->Proj3DLeft.M[0][0] = 0ui64;
  *(_OWORD *)&this->Proj3DLeft.M[1][0] = 0ui64;
  *(_OWORD *)&this->Proj3DLeft.M[2][0] = 0ui64;
  *(_OWORD *)&this->Proj3DLeft.M[3][0] = 0ui64;
  this->Proj3DLeft.M[0][0] = 1.0;
  this->Proj3DLeft.M[1][1] = 1.0;
  this->Proj3DLeft.M[2][2] = 1.0;
  this->Proj3DLeft.M[3][3] = 1.0;
  *(_OWORD *)&this->Proj3DRight.M[0][0] = 0ui64;
  *(_OWORD *)&this->Proj3DRight.M[1][0] = 0ui64;
  *(_OWORD *)&this->Proj3DRight.M[2][0] = 0ui64;
  *(_OWORD *)&this->Proj3DRight.M[3][0] = 0ui64;
  this->Proj3DRight.M[0][0] = 1.0;
  this->Proj3DRight.M[1][1] = 1.0;
  this->Proj3DRight.M[2][2] = 1.0;
  this->Proj3DRight.M[3][3] = 1.0;
  *(_OWORD *)&this->User.M[0][0] = 0x3F800000ui64;
  this->User.M[1][0] = 0.0;
  *(_QWORD *)&this->User.M[1][1] = 1065353216i64;
  this->User.M[1][3] = 0.0;
  *(_OWORD *)&this->User3D.M[0][0] = 0x3F800000ui64;
  this->User3D.M[1][0] = 0.0;
  *(_QWORD *)&this->User3D.M[1][1] = 1065353216i64;
  this->User3D.M[1][3] = 0.0;
  *(_OWORD *)&this->Orient2D.M[0][0] = 0x3F800000ui64;
  this->Orient2D.M[1][0] = 0.0;
  *(_QWORD *)&this->Orient2D.M[1][1] = 1065353216i64;
  this->Orient2D.M[1][3] = 0.0;
  *(_OWORD *)&this->Orient3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->Orient3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->Orient3D.M[2][0] = 0ui64;
  *(_OWORD *)&this->Orient3D.M[3][0] = 0ui64;
  this->Orient3D.M[0][0] = 1.0;
  this->Orient3D.M[1][1] = 1.0;
  this->Orient3D.M[2][2] = 1.0;
  *(_QWORD *)&this->Orient3D.M[3][3] = 1065353216i64;
  *(_QWORD *)&this->ViewRectOriginal.y1 = 0i64;
  *(_QWORD *)&this->ViewRectOriginal.y2 = 0i64;
  *(_QWORD *)&this->ViewRect.y1 = 0i64;
  this->ViewRect.y2 = 0;
  *(_OWORD *)&this->UserView.M[0][0] = 0x3F800000ui64;
  this->UserView.M[1][0] = 0.0;
  *(_QWORD *)&this->UserView.M[1][1] = 1065353216i64;
  this->UserView.M[1][3] = 0.0;
  *(_OWORD *)&this->UVPO.M[0][0] = 0ui64;
  *(_OWORD *)&this->UVPO.M[1][0] = 0ui64;
  *(_OWORD *)&this->UVPO.M[2][0] = 0ui64;
  *(_OWORD *)&this->UVPO.M[3][0] = 0ui64;
  this->UVPO.M[0][0] = 1.0;
  this->UVPO.M[1][1] = 1.0;
  this->UVPO.M[2][2] = 1.0;
  this->UVPO.M[3][3] = 1.0;
  *(_OWORD *)&this->ViewRectCompensated3D.M[0][0] = 0ui64;
  *(_OWORD *)&this->ViewRectCompensated3D.M[1][0] = 0ui64;
  *(_OWORD *)&this->ViewRectCompensated3D.M[2][0] = 0ui64;
  *(_OWORD *)&this->ViewRectCompensated3D.M[3][0] = 0ui64;
  this->ViewRectCompensated3D.M[0][0] = 1.0;
  this->ViewRectCompensated3D.M[1][1] = 1.0;
  this->ViewRectCompensated3D.M[2][2] = 1.0;
  this->ViewRectCompensated3D.M[3][3] = 1.0;
  *(_WORD *)&this->UVPOChanged = 0;
  this->S3DDisplay = StereoCenter;
  this->S3DImpl.pObject = 0i64;
  this->pHAL = 0i64;
  *(_OWORD *)&this->FullViewportMVP.M[0][0] = 0x3F800000ui64;
  *(_QWORD *)&this->FullViewportMVP.M[1][1] = 1065353216i64;
  *(_QWORD *)&this->FullViewportMVP.M[1][2] = 0i64;
  *(_QWORD *)&this->FullViewportMVP.M[0][0] = 0x40000000i64;
  this->FullViewportMVP.M[0][2] = 0.0;
  this->FullViewportMVP.M[0][3] = -1.0;
  this->FullViewportMVP.M[1][0] = 0.0;
  this->FullViewportMVP.M[1][1] = -2.0;
  this->FullViewportMVP.M[1][3] = 1.0;
}

void __fastcall Scaleform::Render::MatrixStateFactory::MatrixStateFactory(
        Scaleform::Render::MatrixStateFactory *this,
        Scaleform::MemoryHeap *heap)
{
  Scaleform::MemoryHeap *v2; // rax

  this->__vftable = (Scaleform::Render::MatrixStateFactory_vtbl *)&Scaleform::Render::MatrixStateFactory::`vftable';
  v2 = Scaleform::Memory::pGlobalHeap;
  if ( heap )
    v2 = heap;
  this->pHeap = v2;
}

const Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::operator*(
        const Scaleform::Render::Matrix2x4<float> *result,
        const Scaleform::Render::Matrix2x4<float> *m1,
        const Scaleform::Render::Matrix2x4<float> *m2)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm12_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm11_4
  float v9; // xmm0_4
  float v10; // xmm13_4
  unsigned int v11; // xmm5_4
  float v12; // xmm2_4
  unsigned int v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  const Scaleform::Render::Matrix2x4<float> *v18; // rax

  v3 = m2->M[0][3];
  v4 = m2->M[1][1] * m1->M[0][1];
  v5 = m1->M[0][3];
  v6 = m2->M[0][1];
  v7 = v6 * m1->M[1][0];
  v8 = (float)(m2->M[1][0] * m1->M[1][1]) + (float)(m2->M[0][0] * m1->M[1][0]);
  v9 = v6 * m1->M[0][0];
  v10 = m1->M[1][3];
  *(float *)&v11 = (float)(m2->M[1][1] * m1->M[1][1]) + v7;
  v12 = m2->M[1][3];
  result->M[0][0] = (float)(m2->M[1][0] * m1->M[0][1]) + (float)(m2->M[0][0] * m1->M[0][0]);
  *(float *)&v13 = v4 + v9;
  v14 = v12 * m1->M[0][1];
  v15 = v3 * m1->M[0][0];
  v16 = v12 * m1->M[1][1];
  v17 = v3 * m1->M[1][0];
  *(_QWORD *)&result->M[0][1] = v13;
  result->M[0][3] = v5 + (float)(v14 + v15);
  result->M[1][0] = v8;
  *(_QWORD *)&result->M[1][1] = v11;
  v18 = result;
  result->M[1][3] = v10 + (float)(v16 + v17);
  return v18;
}

void __fastcall Scaleform::Render::MatrixState::Copy(
        Scaleform::Render::MatrixState *this,
        Scaleform::Render::MatrixState *outmat,
        Scaleform::Render::MatrixState *inmat)
{
  int y2; // er8
  int x2; // edx
  int y1; // ecx
  int v8; // er8
  int v9; // edx
  int v10; // ecx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::Render::StereoImplBase *v13; // rax
  Scaleform::Render::StereoImplBase *v14; // rbx
  Scaleform::Render::StereoImplBase_vtbl *v15; // rdi
  const Scaleform::Render::StereoParams *v16; // rax

  outmat->View2D = inmat->View2D;
  outmat->View3D = inmat->View3D;
  outmat->Proj3D = inmat->Proj3D;
  outmat->Proj3DLeft = inmat->Proj3DLeft;
  outmat->Proj3DRight = inmat->Proj3DRight;
  outmat->User = inmat->User;
  outmat->User3D = inmat->User3D;
  outmat->Orient2D = inmat->Orient2D;
  outmat->Orient3D = inmat->Orient3D;
  y2 = inmat->ViewRectOriginal.y2;
  x2 = inmat->ViewRectOriginal.x2;
  y1 = inmat->ViewRectOriginal.y1;
  outmat->ViewRectOriginal.x1 = inmat->ViewRectOriginal.x1;
  outmat->ViewRectOriginal.y1 = y1;
  outmat->ViewRectOriginal.x2 = x2;
  outmat->ViewRectOriginal.y2 = y2;
  v8 = inmat->ViewRect.y2;
  v9 = inmat->ViewRect.x2;
  v10 = inmat->ViewRect.y1;
  outmat->ViewRect.x1 = inmat->ViewRect.x1;
  outmat->ViewRect.y1 = v10;
  outmat->ViewRect.x2 = v9;
  outmat->ViewRect.y2 = v8;
  outmat->UserView = inmat->UserView;
  outmat->UVPO = inmat->UVPO;
  outmat->ViewRectCompensated3D = inmat->ViewRectCompensated3D;
  outmat->UVPOChanged = 1;
  outmat->OrientationSet = inmat->OrientationSet;
  if ( inmat->S3DImpl.pObject )
  {
    pObject = (Scaleform::RefCountVImpl *)inmat->S3DImpl.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v12 = (Scaleform::RefCountVImpl *)outmat->S3DImpl.pObject;
    if ( v12 )
      Scaleform::RefCountImpl::Release(v12);
    v13 = inmat->S3DImpl.pObject;
    outmat->S3DImpl.pObject = v13;
    v14 = v13;
    v15 = v13->__vftable;
    v16 = inmat->S3DImpl.pObject->GetParams(inmat->S3DImpl.pObject);
    v15->SetParams(v14, v16);
  }
  outmat->S3DDisplay = inmat->S3DDisplay;
  outmat->pHAL = inmat->pHAL;
}

void __fastcall Scaleform::Render::MatrixState::CopyFrom(
        Scaleform::Render::MatrixState *this,
        Scaleform::Render::MatrixState *state)
{
  this->Copy(this, this, state);
}

void __fastcall Scaleform::Render::MatrixState::CopyTo(
        Scaleform::Render::MatrixState *this,
        Scaleform::Render::MatrixState *state)
{
  this->Copy(this, state, this);
}

void __fastcall Scaleform::Render::MatrixStateFactory::CreateMatrixState(Scaleform::Render::MatrixStateFactory *this)
{
  Scaleform::Render::MatrixState *v1; // rax

  v1 = (Scaleform::Render::MatrixState *)this->pHeap->Alloc(this->pHeap, 704i64, 0i64);
  if ( v1 )
    Scaleform::Render::MatrixState::MatrixState(v1);
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::MatrixState::GetFullViewportMatrix(
        Scaleform::Render::MatrixState *this,
        const Scaleform::Render::Size<int> *rtSize)
{
  return &this->FullViewportMVP;
}

Scaleform::Render::Matrix4x4<float> *__fastcall Scaleform::Render::MatrixState::GetUVP(
        Scaleform::Render::MatrixState *this)
{
  this->recalculateUVPOC(this);
  return &this->UVPO;
}

Scaleform::Render::Viewport *__fastcall Scaleform::Render::MatrixState::SetOrientation(
        Scaleform::Render::MatrixState *this,
        Scaleform::Render::Viewport *result,
        const Scaleform::Render::Viewport *vp)
{
  float BufferWidth; // xmm3_4
  float v7; // xmm1_4
  float BufferHeight; // xmm2_4
  float *p_Orient2D; // rbp
  const Scaleform::Render::Matrix2x4<float> *v10; // rax
  Scaleform::Render::Matrix2x4<float> *v11; // rax
  int Top; // edx
  unsigned int Flags; // ebx
  float Left; // xmm1_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  int ScissorLeft; // ecx
  int ScissorTop; // edx
  int v23; // eax
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm6_4
  Scaleform::Render::Matrix2x4<float> resulta; // [rsp+20h] [rbp-98h] BYREF
  Scaleform::Render::Matrix2x4<float> v32; // [rsp+40h] [rbp-78h] BYREF

  *(_WORD *)&this->UVPOChanged = 1;
  if ( (vp->Flags & 0x30) != 0 )
  {
    if ( (((vp->Flags & 0x30) - 16) & 0xFFFFFFDF) == 0 )
    {
      this->OrientationSet = 1;
      if ( (vp->Flags & 0x30) == 48 )
      {
        BufferWidth = 0.0;
        v7 = FLOAT_N1_0;
        BufferHeight = (float)vp->BufferHeight;
      }
      else
      {
        BufferHeight = 0.0;
        v7 = *(float *)&FLOAT_1_0;
        BufferWidth = (float)vp->BufferWidth;
      }
      this->Orient2D.M[0][3] = BufferWidth;
      LODWORD(this->Orient2D.M[0][1]) = LODWORD(v7) ^ _xmm;
      this->Orient2D.M[1][0] = v7;
      this->Orient2D.M[1][3] = BufferHeight;
      this->Orient2D.M[0][0] = 0.0;
      this->Orient2D.M[0][2] = 0.0;
      *(_QWORD *)&this->Orient2D.M[1][1] = 0i64;
      this->Orient3D.M[0][1] = v7;
      LODWORD(this->Orient3D.M[1][0]) = LODWORD(v7) ^ _xmm;
      this->Orient3D.M[0][0] = 0.0;
      this->Orient3D.M[1][1] = 0.0;
    }
  }
  else
  {
    *(_OWORD *)&this->Orient2D.M[0][0] = 0x3F800000ui64;
    this->Orient2D.M[1][0] = 0.0;
    *(_QWORD *)&this->Orient2D.M[1][1] = 1065353216i64;
    this->Orient2D.M[1][3] = 0.0;
    *(_OWORD *)&this->Orient3D.M[0][0] = 0ui64;
    *(_OWORD *)&this->Orient3D.M[1][0] = 0ui64;
    *(_OWORD *)&this->Orient3D.M[2][0] = 0ui64;
    *(_OWORD *)&this->Orient3D.M[3][0] = 0ui64;
    this->Orient3D.M[0][0] = 1.0;
    this->Orient3D.M[1][1] = 1.0;
    this->Orient3D.M[2][2] = 1.0;
    this->Orient3D.M[3][3] = 1.0;
  }
  p_Orient2D = (float *)&this->Orient2D;
  v10 = Scaleform::Render::operator*(&resulta, &this->User, &this->Orient2D);
  v11 = (Scaleform::Render::Matrix2x4<float> *)Scaleform::Render::operator*(&v32, &this->View2D, v10);
  *(_QWORD *)&result->BufferWidth = 0i64;
  *(_QWORD *)&result->ScissorWidth = 0i64;
  *(_QWORD *)&result->ScissorLeft = 0i64;
  this->UserView = *v11;
  Top = vp->Top;
  Flags = vp->Flags;
  LODWORD(v11) = vp->Left + vp->Width;
  Left = (float)vp->Left;
  result->Flags = Flags;
  v15 = (float)((float)((float)Top * p_Orient2D[1]) + (float)(Left * *p_Orient2D)) + p_Orient2D[3];
  v16 = (float)((float)((float)Top * p_Orient2D[5]) + (float)(Left * p_Orient2D[4])) + p_Orient2D[7];
  v17 = (float)(Top + vp->Height);
  v18 = (float)(v17 * p_Orient2D[1]) + (float)((float)(int)v11 * *p_Orient2D);
  v19 = (float)((float)(v17 * p_Orient2D[5]) + (float)((float)(int)v11 * p_Orient2D[4])) + p_Orient2D[7];
  v20 = v18 + p_Orient2D[3];
  result->Left = (int)ceilf(fminf(v15, v20));
  result->Top = (int)ceilf(fminf(v16, v19));
  result->Width = (int)ceilf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - v20)) & _xmm));
  result->Height = (int)ceilf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16 - v19)) & _xmm));
  if ( (Flags & 4) != 0 )
  {
    ScissorLeft = vp->ScissorLeft;
    ScissorTop = vp->ScissorTop;
    v23 = ScissorLeft + vp->ScissorWidth;
    result->Flags = Flags;
    v24 = (float)((float)((float)ScissorTop * p_Orient2D[1]) + (float)((float)ScissorLeft * *p_Orient2D))
        + p_Orient2D[3];
    v25 = (float)((float)((float)ScissorTop * p_Orient2D[5]) + (float)((float)ScissorLeft * p_Orient2D[4]))
        + p_Orient2D[7];
    v26 = (float)(ScissorTop + vp->ScissorHeight);
    v27 = (float)(v26 * p_Orient2D[1]) + (float)((float)v23 * *p_Orient2D);
    v28 = (float)((float)(v26 * p_Orient2D[5]) + (float)((float)v23 * p_Orient2D[4])) + p_Orient2D[7];
    v29 = v27 + p_Orient2D[3];
    result->ScissorLeft = (int)ceilf(fminf(v24, v29));
    result->ScissorTop = (int)ceilf(fminf(v25, v28));
    result->ScissorWidth = (int)ceilf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - v29)) & _xmm));
    result->ScissorHeight = (int)ceilf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - v28)) & _xmm));
  }
  result->BufferWidth = vp->BufferWidth;
  result->BufferHeight = vp->BufferHeight;
  return result;
}

void __fastcall Scaleform::Render::Viewport::SetStereoViewport(Scaleform::Render::Viewport *this, unsigned int display)
{
  if ( (this->Flags & 0xC0) == 64 )
  {
    this->Height >>= 1;
    this->Top >>= 1;
    if ( display == 2 )
      this->Top += this->BufferHeight >> 1;
  }
  else if ( (this->Flags & 0xC0) == 128 )
  {
    this->Width >>= 1;
    this->Left >>= 1;
    if ( display == 2 )
      this->Left += this->BufferWidth >> 1;
  }
}

void __fastcall Scaleform::Render::MatrixState::SetUserMatrix(
        Scaleform::Render::MatrixState *this,
        const Scaleform::Render::Matrix2x4<float> *user,
        const Scaleform::Render::Matrix2x4<float> *user3D)
{
  const Scaleform::Render::Matrix2x4<float> *v5; // rax
  int v6; // eax
  float v7; // xmm5_4
  float v8; // xmm1_4
  Scaleform::Render::Matrix2x4<float> result; // [rsp+20h] [rbp-58h] BYREF
  Scaleform::Render::Matrix2x4<float> v10; // [rsp+40h] [rbp-38h] BYREF

  this->UVPOChanged = 1;
  this->User = *user;
  v5 = Scaleform::Render::operator*(&result, &this->User, &this->Orient2D);
  this->UserView = *Scaleform::Render::operator*(&v10, &this->View2D, v5);
  this->User3D = *user3D;
  if ( this->ViewRect.x2 - this->ViewRect.x1 <= 0 || this->ViewRect.y2 - this->ViewRect.y1 <= 0 )
  {
    this->User3D.M[0][3] = 0.0;
    this->User3D.M[1][3] = 0.0;
  }
  else
  {
    v6 = this->ViewRect.y2 - this->ViewRect.y1;
    v7 = (float)(this->ViewRect.x2 - this->ViewRect.x1);
    v8 = (float)((float)((float)((float)((float)((float)v6 * 0.5) * this->User3D.M[1][1])
                               + (float)((float)(v7 * 0.5) * this->User3D.M[1][0]))
                       + this->User3D.M[1][3])
               - (float)((float)v6 * 0.5))
       * -2.0;
    this->User3D.M[0][3] = (float)((float)((float)((float)((float)((float)((float)v6 * 0.5) * this->User3D.M[0][1])
                                                         + (float)((float)(v7 * 0.5) * this->User3D.M[0][0]))
                                                 + this->User3D.M[0][3])
                                         - (float)(v7 * 0.5))
                                 * 2.0)
                         / v7;
    this->User3D.M[1][3] = v8 / (float)v6;
  }
}

void __fastcall Scaleform::Render::MatrixState::SetUserMatrix(
        Scaleform::Render::MatrixState *this,
        const Scaleform::Render::Matrix2x4<float> *user)
{
  this->SetUserMatrix(this, user, user);
}

void __fastcall Scaleform::Render::MatrixState::SetViewportMatrix(
        Scaleform::Render::MatrixState *this,
        const Scaleform::Render::Matrix2x4<float> *vp)
{
  const Scaleform::Render::Matrix2x4<float> *v3; // rax
  Scaleform::Render::Matrix2x4<float> result; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::Render::Matrix2x4<float> v5; // [rsp+40h] [rbp-28h] BYREF

  this->View2D = *vp;
  v3 = Scaleform::Render::operator*(&result, &this->User, &this->Orient2D);
  this->UserView = *Scaleform::Render::operator*(&v5, &this->View2D, v3);
}

void __fastcall Scaleform::Render::MatrixState::recalculateUVPOC(Scaleform::Render::MatrixState *this)
{
  Scaleform::Render::Matrix4x4<float> *p_ViewRectCompensated3D; // rsi
  int v3; // kr04_4
  int v4; // er9
  int v5; // kr0C_4
  int v6; // eax
  float v7; // xmm1_4
  int v8; // eax
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // eax
  const Scaleform::Render::Matrix4x4<float> *updated; // rbx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  Scaleform::Render::Matrix4x4<float> m1; // [rsp+28h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix4x4<float> m2; // [rsp+68h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix4x4<float> v18; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::Render::Matrix4x4<float> v19; // [rsp+E8h] [rbp-20h] BYREF

  if ( this->UVPOChanged )
  {
    if ( this->ViewRect.x1 == this->ViewRectOriginal.x1
      && this->ViewRect.x2 == this->ViewRectOriginal.x2
      && this->ViewRect.y1 == this->ViewRectOriginal.y1
      && this->ViewRect.y2 == this->ViewRectOriginal.y2
      || this->ViewRectOriginal.x2 == this->ViewRectOriginal.x1
      && this->ViewRectOriginal.y2 == this->ViewRectOriginal.y1 )
    {
      p_ViewRectCompensated3D = &this->ViewRectCompensated3D;
      this->ViewRectCompensated3D = Scaleform::Render::Matrix4x4<float>::Identity;
    }
    else
    {
      v3 = this->ViewRectOriginal.y1 + this->ViewRectOriginal.y2;
      v4 = (this->ViewRect.x1 + this->ViewRect.x2) / 2 - (this->ViewRectOriginal.x1 + this->ViewRectOriginal.x2) / 2;
      v5 = this->ViewRect.y1 + this->ViewRect.y2;
      memset(&m2, 0, sizeof(m2));
      v6 = this->ViewRectOriginal.x2 - this->ViewRectOriginal.x1;
      m2.M[3][3] = 1.0;
      m2.M[2][2] = 1.0;
      v7 = (float)v6;
      v8 = this->ViewRectOriginal.y2 - this->ViewRectOriginal.y1;
      m2.M[0][0] = v7 / (float)(this->ViewRect.x2 - this->ViewRect.x1);
      v9 = (float)(this->ViewRect.y2 - this->ViewRect.y1);
      memset(&m1, 0, sizeof(m1));
      v10 = (float)v8 / v9;
      v11 = this->ViewRect.x2 - this->ViewRect.x1;
      m1.M[0][0] = 1.0;
      m1.M[1][1] = 1.0;
      m1.M[2][2] = 1.0;
      m1.M[3][3] = 1.0;
      m2.M[1][1] = v10;
      LODWORD(m1.M[0][3]) = COERCE_UNSIGNED_INT((float)((float)v4 + (float)v4) / (float)v11) ^ _xmm;
      p_ViewRectCompensated3D = &this->ViewRectCompensated3D;
      m1.M[1][3] = (float)((float)(v5 / 2 - v3 / 2) + (float)(v5 / 2 - v3 / 2))
                 / (float)(this->ViewRect.y2 - this->ViewRect.y1);
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&this->ViewRectCompensated3D, &m1, &m2);
    }
    updated = Scaleform::Render::MatrixState::updateStereoProjection(this, 1.0);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v19, &this->User3D, p_ViewRectCompensated3D);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v18, &this->Orient3D, updated);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&m1, &v19, &v18);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&m2, &m1, &this->View3D);
    v13 = *(_OWORD *)&m2.M[1][0];
    *(_OWORD *)&this->UVPO.M[0][0] = *(_OWORD *)&m2.M[0][0];
    v14 = *(_OWORD *)&m2.M[2][0];
    *(_OWORD *)&this->UVPO.M[1][0] = v13;
    v15 = *(_OWORD *)&m2.M[3][0];
    *(_OWORD *)&this->UVPO.M[2][0] = v14;
    *(_OWORD *)&this->UVPO.M[3][0] = v15;
    this->UVPOChanged = 0;
  }
}

Scaleform::Render::Matrix4x4<float> *__fastcall Scaleform::Render::MatrixState::updateStereoProjection(
        Scaleform::Render::MatrixState *this,
        float factor)
{
  Scaleform::Render::StereoDisplay S3DDisplay; // edx
  Scaleform::Render::StereoImplBase *pObject; // rax
  Scaleform::Render::Matrix4x4<float> *p_Proj3DLeft; // rbx
  Scaleform::Render::Matrix4x4<float> *p_Proj3DRight; // rbx

  S3DDisplay = this->S3DDisplay;
  if ( S3DDisplay == StereoCenter )
    return &this->Proj3D;
  pObject = this->S3DImpl.pObject;
  if ( !pObject )
    return &this->Proj3D;
  if ( S3DDisplay == StereoLeft )
  {
    p_Proj3DLeft = &this->Proj3DLeft;
    ((void (__fastcall *)(Scaleform::Render::StereoImplBase *, Scaleform::Render::Matrix4x4<float> *, Scaleform::Render::StereoImplBase_vtbl *, Scaleform::Render::Matrix4x4<float> *, _QWORD, _DWORD))pObject->GetStereoProj)(
      pObject,
      &this->Proj3D,
      pObject->__vftable,
      &this->Proj3DLeft,
      0i64,
      LODWORD(factor));
    return p_Proj3DLeft;
  }
  if ( S3DDisplay != StereoRight )
    return &this->Proj3D;
  p_Proj3DRight = &this->Proj3DRight;
  ((void (__fastcall *)(Scaleform::Render::StereoImplBase *, Scaleform::Render::Matrix4x4<float> *, Scaleform::Render::StereoImplBase_vtbl *, _QWORD, Scaleform::Render::Matrix4x4<float> *, _DWORD))pObject->GetStereoProj)(
    pObject,
    &this->Proj3D,
    pObject->__vftable,
    0i64,
    &this->Proj3DRight,
    LODWORD(factor));
  return p_Proj3DRight;
}

