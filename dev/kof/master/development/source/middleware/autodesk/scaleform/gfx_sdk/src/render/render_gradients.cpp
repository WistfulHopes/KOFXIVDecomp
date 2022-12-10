#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"

Scaleform::Render::GradientData::GradientData(Scaleform::Render::GradientType type, unsigned short recordCount, bool linearRgb); // 0x1403E6DA0
bool Scaleform::Render::GradientData::SetRecordCount(unsigned short count, bool tmpHeap); // 0x1403E82E0
void Scaleform::Render::GradientData::SetLerp(const Scaleform::Render::GradientData * data1, const Scaleform::Render::GradientData * data2, float morphRatio); // 0x1403E81E0
unsigned long long Scaleform::Render::GradientData::GetHashValue(float morphRatio); // 0x1403E7FE0
bool Scaleform::Render::GradientData::operator==(const Scaleform::Render::GradientData & other); // 0x1403E74D0
unsigned long Scaleform::Render::GradientData::CalcImageSize(); // 0x1403E7650
class Scaleform::Render::GradientRamp
{
	enum <unnamed-enum-RampSize>
	{
		RampSize = 256,
		R = 0,
		G = 1,
		B = 2,
		A = 3,
	};
public:
	GradientRamp(const Scaleform::Render::GradientRecord *, unsigned long, float);
	GradientRamp();
	void WriteRGBA(unsigned long, unsigned char *);
	const unsigned char * GetRampBytes();
	struct ColorType;
private:
	static unsigned short applyGammaDir(unsigned char, float);
	static Scaleform::Render::GradientRamp::ColorType applyGammaDir(const Scaleform::Render::Color &, float);
	static unsigned char applyGammaInv(unsigned short, float);
	static void blendColors(unsigned char *, const Scaleform::Render::GradientRamp::ColorType &, const Scaleform::Render::GradientRamp::ColorType &, long, long);
	static void blendColors(unsigned char *, const Scaleform::Render::GradientRamp::ColorType &, const Scaleform::Render::GradientRamp::ColorType &, long, long, float);
	unsigned char Ramp[1024]; // 0x0
};
struct Scaleform::Render::GradientRamp::ColorType
{
	unsigned short r; // 0x0
	unsigned short g; // 0x2
	unsigned short b; // 0x4
	unsigned short a; // 0x6
	ColorType(unsigned short, unsigned short, unsigned short, unsigned short);
	ColorType();
};
Scaleform::Render::GradientRamp::GradientRamp(const Scaleform::Render::GradientRecord * records, unsigned long recordCount, float gamma); // 0x1403E6EC0
class Scaleform::Render::FocalRadialGradient
{
public:
	void Init(float, float, float);
	float Calculate(float, float);
private:
	float Radius; // 0x0
	float FocusX; // 0x4
	float FocusY; // 0x8
	float Radius2; // 0xC
	float Multiplier; // 0x10
};
const unsigned long Scaleform::Render::GradientData::ImageSizeTable[18]; // 0x14074ECD0
void Scaleform::Render::FocalRadialGradient::Init(float r, float fx, float fy); // 0x1403E8120
Scaleform::Render::GradientImage::GradientImage(Scaleform::Render::PrimitiveFillManager * mng, Scaleform::Render::GradientData * data, float morphRatio); // 0x1403E6E00
bool Scaleform::Render::GradientImage::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x1403E7AE0
Scaleform::Render::Texture * Scaleform::Render::GradientImage::GetTexture(Scaleform::Render::TextureManager * pmanager); // 0x1403E8060//decompilation failure at 14074ECD0!
void __fastcall Scaleform::Render::GradientData::GradientData(
        Scaleform::Render::GradientData *this,
        Scaleform::Render::GradientType type,
        unsigned __int16 recordCount,
        bool linearRgb)
{
  this->__vftable = (Scaleform::Render::GradientData_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::GradientData_vtbl *)&Scaleform::Render::GradientData::`vftable';
  this->RecordCount = 0;
  this->pRecords = 0i64;
  this->FocalRatio = 0.0;
  this->pMorphTo = 0i64;
  this->Type = type;
  this->RefCount = 1;
  this->LinearRGB = linearRgb;
  Scaleform::Render::GradientData::SetRecordCount(this, recordCount, 0);
}

void __fastcall Scaleform::Render::GradientImage::GradientImage(
        Scaleform::Render::GradientImage *this,
        Scaleform::Render::PrimitiveFillManager *mng,
        Scaleform::Render::GradientData *data,
        float morphRatio)
{
  unsigned int v6; // eax

  this->__vftable = (Scaleform::Render::GradientImage_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::GradientImage_vtbl *)&Scaleform::Render::Image::`vftable';
  this->pTexture.Value = 0i64;
  this->pUpdateSync = 0i64;
  this->pInverseMatrix = 0i64;
  this->__vftable = (Scaleform::Render::GradientImage_vtbl *)&Scaleform::Render::GradientImage::`vftable';
  this->pManager = mng;
  if ( data )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)data);
  this->pData.pObject = data;
  this->Size.Width = 1;
  this->Size.Height = 1;
  this->MorphRatio = morphRatio;
  if ( data )
  {
    if ( data->Type )
    {
      v6 = Scaleform::Render::GradientData::CalcImageSize(data);
      this->Size.Height = v6;
      this->Size.Width = v6;
    }
    else
    {
      this->Size.Width = 256;
      this->Size.Height = 1;
    }
  }
}

void __fastcall Scaleform::Render::GradientRamp::GradientRamp(
        Scaleform::Render::GradientRamp *this,
        const Scaleform::Render::GradientRecord *records,
        unsigned int recordCount,
        float gamma)
{
  const Scaleform::Render::GradientRecord *v4; // r9
  unsigned __int8 *p_Red; // r15
  unsigned int Ratio; // ebx
  float v8; // xmm6_4
  __int64 v9; // rcx
  Scaleform::Render::GradientRamp *v10; // rdi
  unsigned __int8 *v11; // r12
  unsigned int v12; // eax
  __int16 v13; // di
  float v14; // xmm0_4
  __int64 v15; // rsi
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  unsigned __int16 v21; // ax
  __int16 v22; // di
  float v23; // xmm0_4
  __int64 v24; // r15
  float v25; // xmm0_4
  float v26; // xmm0_4
  __int64 v27; // r13
  float v28; // xmm0_4
  float v29; // xmm0_4
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned __int16 v32; // r12
  unsigned int v33; // edx
  __int64 v34; // rdi
  unsigned int v35; // er15
  int v36; // er8
  int v37; // er9
  int v38; // er12
  int v39; // er10
  int v40; // er11
  int v41; // er13
  int v42; // ecx
  __int64 v43; // rsi
  int v44; // ebx
  int v45; // ecx
  int v46; // eax
  __int64 v47; // kr00_8
  __int64 v48; // kr08_8
  int v49; // eax
  int v50; // edx
  int v51; // edi
  int v52; // er8
  unsigned int v53; // er12
  int v54; // esi
  int v55; // ecx
  int v56; // er13
  __int16 v57; // r8
  int v58; // ecx
  int v59; // er15
  int v60; // eax
  int v61; // ebx
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm0_4
  float v65; // xmm0_4
  __int64 v66; // rcx
  int v67; // eax
  bool v68; // zf
  __int64 v69; // rcx
  __int64 v70; // rdi
  Scaleform::Render::GradientRamp *v71; // rdi
  __int64 i; // rcx
  char v73; // [rsp+20h] [rbp-E0h]
  __int16 v74; // [rsp+22h] [rbp-DEh]
  __int16 v75; // [rsp+24h] [rbp-DCh]
  unsigned __int16 v76; // [rsp+26h] [rbp-DAh]
  int v77; // [rsp+28h] [rbp-D8h]
  unsigned int v78; // [rsp+2Ch] [rbp-D4h]
  int v79; // [rsp+30h] [rbp-D0h]
  int v80; // [rsp+38h] [rbp-C8h]
  int v81; // [rsp+3Ch] [rbp-C4h]
  int v82; // [rsp+40h] [rbp-C0h]
  int v83; // [rsp+44h] [rbp-BCh]
  char v84; // [rsp+48h] [rbp-B8h] BYREF
  int v85; // [rsp+4Ch] [rbp-B4h]
  __int64 v86; // [rsp+50h] [rbp-B0h]
  __int64 v87; // [rsp+58h] [rbp-A8h]
  __int64 v88; // [rsp+60h] [rbp-A0h]
  __int64 v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  __int64 v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h]
  __int64 v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  int v96; // [rsp+140h] [rbp+40h]
  int v97; // [rsp+140h] [rbp+40h]
  int v98; // [rsp+140h] [rbp+40h]
  int v99; // [rsp+140h] [rbp+40h]
  unsigned int v100; // [rsp+148h] [rbp+48h]
  char v101; // [rsp+151h] [rbp+51h]

  v84 = 0;
  v4 = records;
  if ( !recordCount || !records )
  {
    v84 = 0;
    v4 = (const Scaleform::Render::GradientRecord *)&v84;
    v85 = -16777216;
    recordCount = 1;
  }
  p_Red = &v4->ColorV.Channels.Red;
  LOBYTE(v96) = v4->ColorV.Channels.Red;
  BYTE1(v96) = v4->ColorV.Channels.Green;
  BYTE2(v96) = v4->ColorV.Channels.Blue;
  HIBYTE(v96) = v4->ColorV.Channels.Alpha;
  v93 = (__int64)&v4->ColorV.Raw + 2;
  if ( recordCount <= 1 )
  {
    v71 = this;
    for ( i = 256i64; i; --i )
    {
      *(_DWORD *)v71->Ramp = v96;
      v71 = (Scaleform::Render::GradientRamp *)((char *)v71 + 4);
    }
    return;
  }
  Ratio = v4->Ratio;
  v8 = 1.0 / gamma;
  if ( v4->Ratio )
  {
    v9 = v4->Ratio;
    v10 = this;
    while ( v9 )
    {
      *(_DWORD *)v10->Ramp = v96;
      v10 = (Scaleform::Render::GradientRamp *)((char *)v10 + 4);
      --v9;
    }
  }
  v11 = &v4[1].ColorV.Channels.Red;
  v94 = (__int64)&v4[1].ColorV.Raw + 2;
  v95 = recordCount - 1;
  do
  {
    v12 = *(v11 - 6);
    v13 = p_Red[1];
    if ( v12 < Ratio )
      v12 = Ratio;
    v100 = v12;
    v14 = powf((float)*p_Red / 255.0, gamma);
    v15 = (unsigned int)(int)floorf((float)(v14 * 65535.0) + 0.5);
    v16 = (float)*(p_Red - 1);
    v91 = v15;
    v73 = v15;
    v17 = powf(v16 / 255.0, gamma);
    v18 = floorf((float)(v17 * 65535.0) + 0.5);
    v86 = (unsigned int)(int)v18;
    v74 = (int)v18;
    v19 = powf((float)*(p_Red - 2) / 255.0, gamma);
    v20 = floorf((float)(v19 * 65535.0) + 0.5);
    v87 = (unsigned int)(int)v20;
    v75 = (int)v20;
    v21 = v13 | (v13 << 8);
    v22 = v11[1];
    v76 = v21;
    v23 = powf((float)*v11 / 255.0, gamma);
    v24 = (unsigned int)(int)floorf((float)(v23 * 65535.0) + 0.5);
    v25 = (float)*(v11 - 1);
    v88 = v24;
    v26 = powf(v25 / 255.0, gamma);
    v27 = (unsigned int)(int)floorf((float)(v26 * 65535.0) + 0.5);
    v28 = (float)*(v11 - 2);
    v89 = v27;
    v29 = powf(v28 / 255.0, gamma);
    v30 = (int)floorf((float)(v29 * 65535.0) + 0.5);
    v92 = v30;
    v31 = v100;
    v32 = v22 | (v22 << 8);
    v101 = HIBYTE(v32);
    v33 = v100 - Ratio;
    if ( gamma == 1.0 )
    {
      if ( Ratio >= v100 )
        goto LABEL_23;
      v34 = 4 * Ratio;
      v35 = v33 - 1;
      v36 = 0;
      v37 = 0;
      v38 = v32 - v76;
      v39 = 0;
      v40 = 0;
      v41 = (unsigned __int16)v30 - (unsigned __int16)v87;
      v42 = (unsigned __int16)v88 - (unsigned __int16)v15;
      v43 = v33;
      v79 = v42;
      v78 = v100;
      v44 = (unsigned __int16)v89 - (unsigned __int16)v86;
      do
      {
        v45 = v35 | (v35 << 8);
        if ( v45 < 1 )
          v45 = 1;
        v46 = v40;
        v40 += v79;
        LOBYTE(v97) = v73 + v46 / v45;
        v47 = v39;
        v39 += v44;
        BYTE1(v97) = v74 + v47 / v45;
        v48 = v37;
        v37 += v41;
        BYTE2(v97) = v75 + v48 / v45;
        v49 = v36;
        v50 = v36 >> 31;
        v36 += v38;
        HIBYTE(v97) = v76 + __SPAIR64__(v50, v49) / v45;
        *(_DWORD *)&this->Ramp[v34] = v97;
        v34 = (unsigned int)(v34 + 4);
        --v43;
      }
      while ( v43 );
    }
    else
    {
      if ( Ratio >= v100 )
        goto LABEL_23;
      v51 = v33 - 1;
      v52 = v32;
      v53 = 4 * Ratio;
      v54 = (v33 - 1) | ((v33 - 1) << 8);
      v82 = (unsigned __int16)v30 - (unsigned __int16)v87;
      v55 = (unsigned __int16)v27;
      v56 = 0;
      v83 = v52 - v76;
      v57 = v91;
      v81 = v55 - (unsigned __int16)v86;
      v58 = (unsigned __int16)v24;
      v59 = 0;
      v60 = 0;
      v80 = v58 - (unsigned __int16)v91;
      v78 = v100;
      v61 = 0;
      v77 = 0;
      v90 = v33;
      do
      {
        v62 = powf((float)(unsigned __int16)(v57 + v60 / v51) / 65535.0, v8);
        LOBYTE(v98) = (int)floorf((float)(v62 * 255.0) + 0.5);
        v63 = powf((float)(unsigned __int16)(v86 + v61 / v51) / 65535.0, v8);
        BYTE1(v98) = (int)floorf((float)(v63 * 255.0) + 0.5);
        v64 = powf((float)(unsigned __int16)(v87 + v59 / v51) / 65535.0, v8);
        v65 = floorf((float)(v64 * 255.0) + 0.5);
        v61 += v81;
        v59 += v82;
        v57 = v91;
        v66 = v53;
        v53 += 4;
        BYTE2(v98) = (int)v65;
        v67 = v56;
        v56 += v83;
        HIBYTE(v98) = v76 + v67 / v54;
        *(_DWORD *)&this->Ramp[v66] = v98;
        v60 = v80 + v77;
        v68 = v90-- == 1;
        v77 += v80;
      }
      while ( !v68 );
    }
    v31 = v100;
    BYTE1(v30) = BYTE1(v92);
    BYTE1(v27) = BYTE1(v89);
    BYTE1(v24) = BYTE1(v88);
    HIBYTE(v32) = v101;
    Ratio = v78;
LABEL_23:
    LOBYTE(v99) = BYTE1(v24);
    HIBYTE(v99) = HIBYTE(v32);
    p_Red = (unsigned __int8 *)(v93 + 8);
    v11 = (unsigned __int8 *)(v94 + 8);
    v68 = v95-- == 1;
    BYTE1(v99) = BYTE1(v27);
    BYTE2(v99) = BYTE1(v30);
    v93 += 8i64;
    v94 += 8i64;
  }
  while ( !v68 );
  if ( v31 < 0x100 )
  {
    v69 = 4 * v31;
    v70 = 256 - v31;
    do
    {
      *(_DWORD *)&this->Ramp[v69] = v99;
      v69 = (unsigned int)(v69 + 4);
      --v70;
    }
    while ( v70 );
  }
}

char __fastcall Scaleform::Render::GradientData::operator==(
        Scaleform::Render::GradientData *this,
        const Scaleform::Render::GradientData *other)
{
  unsigned __int16 RecordCount; // r9
  __int64 v4; // rcx
  unsigned int v5; // er11
  Scaleform::Render::GradientRecord *pRecords; // r9
  Scaleform::Render::GradientRecord *v7; // r10

  RecordCount = this->RecordCount;
  if ( RecordCount == other->RecordCount
    && this->Type == other->Type
    && this->FocalRatio == other->FocalRatio
    && this->LinearRGB == other->LinearRGB )
  {
    v4 = 0i64;
    v5 = RecordCount;
    if ( !RecordCount )
      return 1;
    pRecords = other->pRecords;
    v7 = this->pRecords;
    while ( v7[v4].Ratio == pRecords[v4].Ratio && v7[v4].ColorV.Raw == pRecords[v4].ColorV.Raw )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v5 )
        return 1;
    }
  }
  return 0;
}

__int64 __fastcall Scaleform::Render::GradientData::CalcImageSize(Scaleform::Render::GradientData *this)
{
  unsigned int RecordCount; // edi
  unsigned int v2; // er8
  float v3; // xmm3_4
  Scaleform::Render::GradientRecord *pRecords; // r10
  unsigned int v5; // er11
  unsigned __int8 *p_Green; // r9
  __int64 v7; // rbx
  float v8; // xmm4_4
  __int64 v9; // kr00_8
  __int64 v10; // kr08_8
  __int64 v11; // kr10_8
  float v12; // xmm4_4
  __int64 v13; // kr18_8
  __int64 v14; // kr20_8
  __int64 v15; // kr28_8
  float v16; // xmm4_4
  __int64 v17; // kr30_8
  __int64 v18; // kr38_8
  __int64 v19; // kr40_8
  __int64 v20; // rbx
  float v21; // xmm4_4
  __int64 v22; // kr48_8
  __int64 v23; // kr50_8
  __int64 v24; // kr58_8
  Scaleform::Render::GradientRecord *v25; // r11
  unsigned __int8 *v26; // r9
  __int64 v27; // r10
  float v28; // xmm4_4
  __int64 v29; // kr60_8
  __int64 v30; // kr68_8
  __int64 v31; // kr70_8
  float v32; // xmm4_4
  __int64 v33; // rax

  RecordCount = this->RecordCount;
  v2 = 1;
  v3 = 0.0;
  if ( RecordCount <= 1 )
    return 64i64;
  if ( RecordCount - 1 >= 4 )
  {
    pRecords = this->pRecords;
    v5 = 2;
    p_Green = &pRecords[2].ColorV.Channels.Green;
    do
    {
      v7 = v5 - 2;
      v8 = (float)*(p_Green - 13) - (float)pRecords[v7].Ratio;
      if ( v8 > 0.0 )
      {
        v9 = pRecords[v7].ColorV.Channels.Red - *(p_Green - 7);
        v10 = pRecords[v7].ColorV.Channels.Green - *(p_Green - 8);
        v11 = pRecords[v7].ColorV.Channels.Blue - *(p_Green - 9);
        v3 = fmaxf(
               (float)(int)abs32(pRecords[v7].ColorV.Channels.Alpha - *(p_Green - 6)) / v8,
               fmaxf(
                 (float)(int)((HIDWORD(v11) ^ v11) - HIDWORD(v11)) / v8,
                 fmaxf(
                   (float)(int)((HIDWORD(v10) ^ v10) - HIDWORD(v10)) / v8,
                   fmaxf((float)(int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) / v8, v3))));
      }
      v12 = (float)*(p_Green - 5) - (float)pRecords[v2].Ratio;
      if ( v12 > 0.0 )
      {
        v13 = pRecords[v2].ColorV.Channels.Red - p_Green[1];
        v14 = pRecords[v2].ColorV.Channels.Green - *p_Green;
        v15 = pRecords[v2].ColorV.Channels.Blue - *(p_Green - 1);
        v3 = fmaxf(
               (float)(int)abs32(pRecords[v2].ColorV.Channels.Alpha - p_Green[2]) / v12,
               fmaxf(
                 (float)(int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) / v12,
                 fmaxf(
                   (float)(int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) / v12,
                   fmaxf((float)(int)((HIDWORD(v13) ^ v13) - HIDWORD(v13)) / v12, v3))));
      }
      v16 = (float)p_Green[3] - (float)pRecords[v5].Ratio;
      if ( v16 > 0.0 )
      {
        v17 = pRecords[v5].ColorV.Channels.Red - p_Green[9];
        v18 = pRecords[v5].ColorV.Channels.Green - p_Green[8];
        v19 = pRecords[v5].ColorV.Channels.Blue - p_Green[7];
        v3 = fmaxf(
               (float)(int)abs32(pRecords[v5].ColorV.Channels.Alpha - p_Green[10]) / v16,
               fmaxf(
                 (float)(int)((HIDWORD(v19) ^ v19) - HIDWORD(v19)) / v16,
                 fmaxf(
                   (float)(int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) / v16,
                   fmaxf((float)(int)((HIDWORD(v17) ^ v17) - HIDWORD(v17)) / v16, v3))));
      }
      v20 = v5 + 1;
      v21 = (float)p_Green[11] - (float)pRecords[v20].Ratio;
      if ( v21 > 0.0 )
      {
        v22 = pRecords[v20].ColorV.Channels.Red - p_Green[17];
        v23 = pRecords[v20].ColorV.Channels.Green - p_Green[16];
        v24 = pRecords[v20].ColorV.Channels.Blue - p_Green[15];
        v3 = fmaxf(
               (float)(int)abs32(pRecords[v20].ColorV.Channels.Alpha - p_Green[18]) / v21,
               fmaxf(
                 (float)(int)((HIDWORD(v24) ^ v24) - HIDWORD(v24)) / v21,
                 fmaxf(
                   (float)(int)((HIDWORD(v23) ^ v23) - HIDWORD(v23)) / v21,
                   fmaxf((float)(int)((HIDWORD(v22) ^ v22) - HIDWORD(v22)) / v21, v3))));
      }
      p_Green += 32;
      v2 += 4;
      v5 += 4;
    }
    while ( v2 < RecordCount - 3 );
  }
  if ( v2 < RecordCount )
  {
    v25 = this->pRecords;
    v26 = &v25[v2].ColorV.Channels.Green;
    do
    {
      v27 = v2 - 1;
      v28 = (float)*(v26 - 5) - (float)v25[v27].Ratio;
      if ( v28 > 0.0 )
      {
        v29 = v25[v27].ColorV.Channels.Red - v26[1];
        v30 = v25[v27].ColorV.Channels.Green - *v26;
        v31 = v25[v27].ColorV.Channels.Blue - *(v26 - 1);
        v3 = fmaxf(
               (float)(int)abs32(v25[v27].ColorV.Channels.Alpha - v26[2]) / v28,
               fmaxf(
                 (float)(int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) / v28,
                 fmaxf(
                   (float)(int)((HIDWORD(v30) ^ v30) - HIDWORD(v30)) / v28,
                   fmaxf((float)(int)((HIDWORD(v29) ^ v29) - HIDWORD(v29)) / v28, v3))));
      }
      v26 += 8;
      ++v2;
    }
    while ( v2 < RecordCount );
  }
  if ( v3 == 0.0 )
    return 64i64;
  if ( this->LinearRGB )
    v3 = v3 * 1.5;
  if ( this->Type == 2 )
  {
    v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this->FocalRatio) & _xmm);
    if ( v32 > 0.5 )
      v3 = v3 / (float)(1.01 - v32);
  }
  v33 = (unsigned int)(int)sqrtf((float)(fmaxf(0.0, v3) + 0.18000001) * 5.0);
  if ( (unsigned int)v33 >= 0x12 )
    v33 = 17i64;
  return Scaleform::Render::GradientData::ImageSizeTable[v33];
}

char __fastcall Scaleform::Render::GradientImage::Decode(
        Scaleform::Render::GradientImage *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  unsigned int v4; // edi
  Scaleform::Render::GradientData *pObject; // r13
  unsigned __int8 *pData; // rsi
  const Scaleform::Render::GradientData *pMorphTo; // r8
  float v11; // xmm3_4
  unsigned int Height; // ecx
  unsigned int Width; // edx
  int v14; // ebx
  __int64 v15; // rcx
  int *v16; // rdi
  signed int v17; // eax
  unsigned int v18; // er15
  float v19; // xmm8_4
  float v20; // xmm9_4
  unsigned __int8 *v21; // rsi
  int v22; // er12
  float FocusY; // xmm14_4
  float FocusX; // xmm15_4
  int v25; // edi
  char *v26; // rbx
  float v27; // xmm0_4
  int v28; // eax
  float v29; // xmm0_4
  float v30; // xmm10_4
  float v31; // xmm11_4
  float v32; // xmm12_4
  float v33; // xmm6_4
  float v34; // xmm0_4
  int v35; // eax
  Scaleform::Render::ImagePlane pplane; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::Render::GradientData v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-78h]
  void *v41; // [rsp+90h] [rbp-70h]
  void (__fastcall *v42)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *); // [rsp+98h] [rbp-68h]
  Scaleform::Render::FocalRadialGradient v43; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::GradientRamp v44; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+4C0h] [rbp+3C0h] BYREF
  char v46; // [rsp+4C4h] [rbp+3C4h] BYREF

  v4 = 0;
  v42 = copyScanline;
  v41 = arg;
  memset(&pplane, 0, sizeof(pplane));
  Scaleform::Render::ImageData::GetPlane(pdest, 0, &pplane);
  pObject = this->pData.pObject;
  pData = pplane.pData;
  if ( pObject )
  {
    pMorphTo = pObject->pMorphTo;
    v39.__vftable = (Scaleform::Render::GradientData_vtbl *)&Scaleform::Render::GradientData::`vftable';
    v39.RefCount = 1;
    *(_DWORD *)&v39.LinearRGB = 0;
    v39.pRecords = 0i64;
    v39.FocalRatio = 0.0;
    v39.pMorphTo = 0i64;
    if ( pMorphTo )
    {
      Scaleform::Render::GradientData::SetLerp(&v39, pObject, pMorphTo, this->MorphRatio);
      pObject = &v39;
    }
    if ( pObject->LinearRGB )
      v11 = FLOAT_2_1700001;
    else
      v11 = *(float *)&FLOAT_1_0;
    Scaleform::Render::GradientRamp::GradientRamp(&v44, pObject->pRecords, pObject->RecordCount, v11);
    Height = this->Size.Height;
    v40 = pplane.Pitch * (Height - 1);
    if ( pObject->Type )
    {
      Width = this->Size.Width;
      v14 = *(_DWORD *)&v44.Ramp[1020];
      if ( Width )
      {
        v15 = Width;
        v16 = &v45;
        while ( v15 )
        {
          *v16++ = v14;
          --v15;
        }
      }
      copyScanline(pData, (const unsigned __int8 *)&v45, 4 * Width, 0i64, arg);
      copyScanline(&pData[v40], (const unsigned __int8 *)&v45, 4 * this->Size.Width, 0i64, arg);
      v17 = this->Size.Width;
      v45 = v14;
      v18 = v17 - 1;
      *(_DWORD *)&v44.Ramp[4 * v17 + 1020] = v14;
      v19 = (float)v17 * 0.5;
      v20 = v19 - 1.0;
      if ( pObject->Type == 2 )
        Scaleform::Render::FocalRadialGradient::Init(&v43, v20, v20 * pObject->FocalRatio, 0.0);
      v21 = &pData[pplane.Pitch];
      v22 = 1;
      if ( v18 > 1 )
      {
        FocusY = v43.FocusY;
        FocusX = v43.FocusX;
        do
        {
          v25 = 1;
          v26 = &v46;
          if ( pObject->Type == 1 )
          {
            do
            {
              v27 = sqrtf(
                      (float)((float)((float)((float)v25 - v19) + 0.5) * (float)((float)((float)v25 - v19) + 0.5))
                    + (float)((float)((float)((float)v22 - v19) + 0.5) * (float)((float)((float)v22 - v19) + 0.5)));
              v28 = (int)floorf((float)((float)(v27 * 256.0) / v20) + 0.5);
              if ( v28 > 255 )
                v28 = 255;
              ++v25;
              *(_DWORD *)v26 = *(_DWORD *)&v44.Ramp[4 * v28];
              v26 += 4;
            }
            while ( v25 < v18 );
          }
          else
          {
            v29 = (float)((float)((float)v22 - v19) + 0.5) - FocusY;
            v30 = FocusX * v29;
            v31 = v29 * v29;
            v32 = FocusY * v29;
            do
            {
              v33 = (float)((float)((float)v25 - v19) + 0.5) - FocusX;
              v34 = sqrtf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)(v33 * v33) + v31)
                                                                            * v43.Radius2)
                                                                    - (float)((float)((float)(FocusY * v33) - v30)
                                                                            * (float)((float)(FocusY * v33) - v30)))) & _xmm));
              v35 = (int)floorf(
                           (float)((float)((float)((float)(v34 + (float)((float)(FocusX * v33) + v32)) * v43.Multiplier)
                                         * 256.0)
                                 / v20)
                         + 0.5);
              if ( v35 > 255 )
                v35 = 255;
              ++v25;
              *(_DWORD *)v26 = *(_DWORD *)&v44.Ramp[4 * v35];
              v26 += 4;
            }
            while ( v25 < v18 );
          }
          v42(v21, (const unsigned __int8 *)&v45, 4 * this->Size.Width, 0i64, v41);
          v21 += pplane.Pitch;
          ++v22;
        }
        while ( v22 < v18 );
      }
    }
    else if ( Height )
    {
      do
      {
        copyScanline(pData, v44.Ramp, 4 * this->Size.Width, 0i64, arg);
        ++v4;
      }
      while ( v4 < this->Size.Height );
    }
    v39.__vftable = (Scaleform::Render::GradientData_vtbl *)&Scaleform::Render::GradientData::`vftable';
    if ( v39.pRecords )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    Scaleform::RefCountImplCore::~RefCountImplCore(&v39);
  }
  else
  {
    v45 = 0;
    copyScanline(pplane.pData, (const unsigned __int8 *)&v45, 4ui64, 0i64, arg);
  }
  return 1;
}

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

unsigned __int64 __fastcall Scaleform::Render::GradientData::GetHashValue(
        Scaleform::Render::GradientData *this,
        float morphRatio)
{
  __int64 Type; // r9
  Scaleform::Render::GradientRecord *pRecords; // r10
  __int64 RecordCount; // r11
  __int64 Raw; // rdx
  __int64 Ratio; // rax

  Type = this->Type;
  if ( this->RecordCount )
  {
    pRecords = this->pRecords;
    RecordCount = this->RecordCount;
    do
    {
      Raw = pRecords->ColorV.Raw;
      Ratio = pRecords->Ratio;
      ++pRecords;
      Type ^= Raw ^ Ratio ^ ((unsigned __int64)(unsigned int)Raw >> 16);
      --RecordCount;
    }
    while ( RecordCount );
  }
  if ( this->pMorphTo )
    return Type ^ LOWORD(morphRatio) ^ ((unsigned __int64)LODWORD(morphRatio) >> 16);
  else
    return Type;
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::GradientImage::GetSize(
        Scaleform::Render::GradientImage *this,
        Scaleform::Render::Size<unsigned long> *result)
{
  *result = this->Size;
  return result;
}

Scaleform::GFx::MovieImpl *__fastcall Scaleform::Render::GradientImage::GetTexture(
        Scaleform::Render::GradientImage *this,
        Scaleform::Render::TextureManager *pmanager)
{
  Scaleform::Render::TextureManager *pObject; // rax
  Scaleform::Render::TextureManager_vtbl *v6; // rdi
  Scaleform::Render::ImageFormat v7; // eax
  Scaleform::GFx::MovieImpl *v8; // rbx

  if ( this->pTexture.Value )
  {
    pObject = (Scaleform::Render::TextureManager *)this->pTexture.Value->pManagerLocks.pObject;
    if ( pObject )
      pObject = (Scaleform::Render::TextureManager *)pObject->Scaleform::Render::ImageUpdateSync::__vftable;
    if ( pObject == pmanager )
      return (Scaleform::GFx::MovieImpl *)this->pTexture.Value;
  }
  if ( !pmanager )
    return 0i64;
  this->pTexture.Value = 0i64;
  v6 = pmanager->Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v7 = this->GetFormat(this);
  v8 = (Scaleform::GFx::MovieImpl *)v6->CreateTexture(pmanager, v7, 1u, &this->Size, 1u, this, 0i64);
  Scaleform::GFx::KeyboardState::SetListener((Scaleform::GFx::ASMovieRootBase *)this, v8);
  return v8;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

void __fastcall Scaleform::Render::FocalRadialGradient::Init(
        Scaleform::Render::FocalRadialGradient *this,
        float r,
        float fx,
        float fy)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm3_4

  this->Radius = r;
  this->FocusX = fx;
  this->FocusY = fy;
  this->Radius2 = r * r;
  v4 = (float)(r * r) - (float)((float)(fx * fx) + (float)(fy * fy));
  if ( v4 == 0.0 )
  {
    if ( fx != 0.0 )
    {
      if ( fx >= 0.0 )
        v5 = fx - 1.0;
      else
        v5 = fx + 1.0;
      this->FocusX = v5;
    }
    if ( fy != 0.0 )
    {
      if ( fy >= 0.0 )
        v6 = fy - 1.0;
      else
        v6 = fy + 1.0;
      this->FocusY = v6;
    }
    v4 = (float)(r * r) - (float)((float)(this->FocusX * this->FocusX) + (float)(this->FocusY * this->FocusY));
  }
  this->Multiplier = r / v4;
}

void __fastcall Scaleform::Render::GradientData::SetLerp(
        Scaleform::Render::GradientData *this,
        const Scaleform::Render::GradientData *data1,
        const Scaleform::Render::GradientData *data2,
        float morphRatio)
{
  unsigned __int16 i; // bp
  Scaleform::Render::GradientRecord *pRecords; // rdx
  Scaleform::Render::GradientRecord *v9; // rcx
  __int64 v10; // rbx
  float Ratio; // xmm0_4
  float v12; // xmm6_4
  unsigned int Raw; // edx
  Scaleform::Render::GradientRecord *v14; // rax
  Scaleform::Render::Color c1; // [rsp+70h] [rbp+8h] BYREF
  Scaleform::Render::Color result; // [rsp+78h] [rbp+10h] BYREF
  Scaleform::Render::Color c2; // [rsp+88h] [rbp+20h] BYREF

  this->Type = data1->Type;
  Scaleform::Render::GradientData::SetRecordCount(this, data1->RecordCount, 1);
  for ( i = 0; i < this->RecordCount; v14[v10].ColorV.Raw = Raw )
  {
    pRecords = data2->pRecords;
    v9 = data1->pRecords;
    v10 = i;
    c2 = (Scaleform::Render::Color)pRecords[i].ColorV.Raw;
    c1 = (Scaleform::Render::Color)v9[i].ColorV.Raw;
    Ratio = (float)v9[i].Ratio;
    v12 = (float)((float)((float)pRecords[i++].Ratio - Ratio) * morphRatio) + Ratio;
    Raw = Scaleform::Render::Color::Blend(&result, &c1.Channels.Blue, &c2.Channels.Blue, morphRatio)->Raw;
    v14 = this->pRecords;
    v14[v10].Ratio = (int)v12;
  }
  this->FocalRatio = (float)((float)(data2->FocalRatio - data1->FocalRatio) * morphRatio) + data1->FocalRatio;
}

bool __fastcall Scaleform::Render::GradientData::SetRecordCount(
        Scaleform::Render::GradientData *this,
        unsigned __int16 count,
        bool tmpHeap)
{
  __int64 v5; // rax
  Scaleform::MemoryHeap_vtbl *v6; // rax
  Scaleform::Render::GradientRecord *v7; // rsi
  unsigned __int16 RecordCount; // ax
  Scaleform::Render::GradientRecord *v9; // rdx
  __int64 v10; // r8
  char *v11; // rcx

  if ( count == this->RecordCount )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v6 = Scaleform::Memory::pGlobalHeap->__vftable;
    if ( tmpHeap )
      v5 = (__int64)v6->Alloc(Scaleform::Memory::pGlobalHeap, 8i64 * count, 0i64);
    else
      v5 = (__int64)v6->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 8i64 * count, 0i64);
    v7 = (Scaleform::Render::GradientRecord *)v5;
    if ( v5 )
    {
      if ( this->pRecords )
      {
        RecordCount = this->RecordCount;
        if ( count < RecordCount )
          RecordCount = count;
        if ( RecordCount )
        {
          v9 = v7;
          v10 = RecordCount;
          do
          {
            v11 = (char *)this->pRecords + (char *)v9++ - (char *)v7;
            v9[-1].Ratio = *v11;
            v9[-1].ColorV.Raw = *((_DWORD *)v11 + 1);
            --v10;
          }
          while ( v10 );
        }
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pRecords);
      }
      this->pRecords = v7;
      LOBYTE(v5) = 1;
      this->RecordCount = count;
    }
  }
  return v5;
}

