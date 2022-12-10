#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"

typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
void png_set_bKGD(const png_struct_def * png_ptr, png_info_def * info_ptr, const png_color_16_struct * background); // 0x140415200
void png_set_hIST(const png_struct_def * png_ptr, png_info_def * info_ptr, const unsigned short * hist); // 0x140415230
void png_set_IHDR(const png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long width, unsigned long height, long bit_depth, long color_type, long interlace_type, long compression_type, long filter_type); // 0x140415000
void png_set_oFFs(const png_struct_def * png_ptr, png_info_def * info_ptr, long offset_x, long offset_y, long unit_type); // 0x140415310
void png_set_pCAL(const png_struct_def * png_ptr, png_info_def * info_ptr, const char * purpose, long X0, long X1, long type, long nparams, const char * units, char * * params); // 0x140415340
void png_set_sCAL_s(const png_struct_def * png_ptr, png_info_def * info_ptr, long unit, const char * swidth, const char * sheight); // 0x140415670
void png_set_pHYs(const png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long res_x, unsigned long res_y, long unit_type); // 0x140415610
void png_set_PLTE(png_struct_def * png_ptr, png_info_def * info_ptr, const png_color_struct * palette, long num_palette); // 0x140415100
void png_set_sBIT(const png_struct_def * png_ptr, png_info_def * info_ptr, const png_color_8_struct * sig_bit); // 0x140415640
long png_set_text_2(const png_struct_def * png_ptr, png_info_def * info_ptr, const png_text_struct * text_ptr, long num_text); // 0x140415B60
void png_set_tIME(const png_struct_def * png_ptr, png_info_def * info_ptr, const png_time_struct * mod_time); // 0x1404159D0
void png_set_tRNS(png_struct_def * png_ptr, png_info_def * info_ptr, const unsigned char * trans_alpha, long num_trans, const png_color_16_struct * trans_color); // 0x140415A40
void png_set_sPLT(const png_struct_def * png_ptr, png_info_def * info_ptr, const png_sPLT_struct * entries, long nentries); // 0x140415820
unsigned char check_location(const png_struct_def * png_ptr, long location); // 0x140414F90
void png_set_unknown_chunks(const png_struct_def * png_ptr, png_info_def * info_ptr, const png_unknown_chunk_t * unknowns, long num_unknowns); // 0x140415ED0__int64 __fastcall check_location(const png_struct_def *png_ptr, int location)
{
  int v3; // edx
  int i; // eax

  v3 = location & 0xB;
  if ( !v3 )
  {
    if ( (png_ptr->mode & 0x8000) != 0
      || (png_app_warning(png_ptr, "png_set_unknown_chunks now expects a valid location"),
          v3 = png_ptr->mode & 0xB,
          (png_ptr->mode & 0xB) == 0) )
    {
      png_error(png_ptr, "invalid location in png_set_unknown_chunks");
    }
  }
  for ( i = v3 & -v3; v3 != i; i = v3 & -v3 )
    v3 &= ~i;
  return (unsigned __int8)v3;
}

void __fastcall png_set_IHDR(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        unsigned int width,
        unsigned int height,
        int bit_depth,
        int color_type,
        int interlace_type,
        int compression_type,
        int filter_type)
{
  __int64 v9; // rdi
  unsigned __int8 v11; // al
  unsigned __int8 v12; // cl
  unsigned __int64 v13; // rcx

  if ( png_ptr )
  {
    v9 = width;
    if ( info_ptr )
    {
      info_ptr->height = height;
      info_ptr->compression_type = compression_type;
      info_ptr->interlace_type = interlace_type;
      info_ptr->color_type = color_type;
      info_ptr->filter_type = filter_type;
      info_ptr->width = width;
      info_ptr->bit_depth = bit_depth;
      png_check_IHDR(
        png_ptr,
        width,
        height,
        (unsigned __int8)bit_depth,
        (unsigned __int8)color_type,
        (unsigned __int8)interlace_type,
        (unsigned __int8)compression_type,
        (unsigned __int8)filter_type);
      v11 = info_ptr->color_type;
      if ( v11 == 3 || (v11 & 2) == 0 )
        info_ptr->channels = 1;
      else
        info_ptr->channels = 3;
      if ( (v11 & 4) != 0 )
        ++info_ptr->channels;
      v12 = info_ptr->channels * info_ptr->bit_depth;
      info_ptr->pixel_depth = v12;
      if ( v12 < 8u )
        v13 = (v9 * (unsigned __int64)v12 + 7) >> 3;
      else
        v13 = v9 * ((unsigned __int64)v12 >> 3);
      info_ptr->rowbytes = v13;
    }
  }
}

void __fastcall png_set_PLTE(
        png_struct_def *png_ptr,
        png_info_def *info_ptr,
        const png_color_struct *palette,
        int num_palette)
{
  __int64 v4; // rsi
  bool v8; // zf
  png_color_struct *v9; // rax
  png_color_struct *v10; // rbp

  if ( !png_ptr )
    return;
  v4 = num_palette;
  if ( !info_ptr )
    return;
  if ( (unsigned int)num_palette <= 0x100 )
  {
    v8 = num_palette == 0;
    if ( num_palette > 0 )
    {
      if ( !palette )
        goto LABEL_15;
      v8 = num_palette == 0;
    }
    if ( !v8 || (png_ptr->mng_features_permitted & 1) != 0 )
    {
      png_free_data(png_ptr, info_ptr, 0x1000u, 0);
      v9 = (png_color_struct *)png_calloc(png_ptr, 0x300ui64);
      png_ptr->palette = v9;
      v10 = v9;
      if ( (int)v4 > 0 )
        memmove(v9, palette, 3 * v4);
      info_ptr->free_me |= 0x1000u;
      info_ptr->valid |= 8u;
      info_ptr->palette = v10;
      png_ptr->num_palette = v4;
      info_ptr->num_palette = v4;
      return;
    }
LABEL_15:
    png_error(png_ptr, "Invalid palette");
  }
  if ( info_ptr->color_type == 3 )
    png_error(png_ptr, "Invalid palette length");
  png_warning(png_ptr, "Invalid palette length");
}

void __fastcall png_set_bKGD(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        const png_color_16_struct *background)
{
  __int64 v3; // xmm0_8
  unsigned __int16 gray; // ax

  if ( png_ptr && info_ptr )
  {
    if ( background )
    {
      v3 = *(_QWORD *)&background->index;
      gray = background->gray;
      info_ptr->valid |= 0x20u;
      *(_QWORD *)&info_ptr->background.index = v3;
      info_ptr->background.gray = gray;
    }
  }
}

void __fastcall png_set_hIST(const png_struct_def *png_ptr, png_info_def *info_ptr, const unsigned __int16 *hist)
{
  const png_struct_def *v5; // rdi
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // r8
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 num_palette; // rdx

  if ( png_ptr )
  {
    v5 = png_ptr;
    if ( info_ptr )
    {
      if ( (unsigned __int16)(info_ptr->num_palette - 1) > 0xFFu )
      {
        v8 = "Invalid palette size, hIST allocation skipped";
        goto LABEL_11;
      }
      png_free_data(png_ptr, info_ptr, 8u, 0);
      v6 = (unsigned __int16 *)png_malloc_warn(v5, 0x200ui64);
      info_ptr->hist = v6;
      v7 = v6;
      if ( !v6 )
      {
        v8 = "Insufficient memory for hIST chunk data";
        png_ptr = v5;
LABEL_11:
        png_warning(png_ptr, v8);
        return;
      }
      info_ptr->free_me |= 8u;
      if ( info_ptr->num_palette )
      {
        v9 = 0i64;
        num_palette = info_ptr->num_palette;
        do
        {
          v7[v9] = hist[v9];
          ++v9;
          --num_palette;
        }
        while ( num_palette );
      }
      info_ptr->valid |= 0x40u;
    }
  }
}

void __fastcall png_set_oFFs(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        int offset_x,
        int offset_y,
        int unit_type)
{
  if ( png_ptr )
  {
    if ( info_ptr )
    {
      info_ptr->valid |= 0x100u;
      info_ptr->offset_unit_type = unit_type;
      info_ptr->x_offset = offset_x;
      info_ptr->y_offset = offset_y;
    }
  }
}

void __fastcall png_set_pCAL(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        const char *purpose,
        int X0,
        int X1,
        int type,
        int nparams,
        const char *units,
        char **params)
{
  const char *v9; // rsi
  const void **v12; // rdi
  __int64 v13; // rbx
  bool v14; // zf
  int v15; // er12
  int v16; // ebp
  char **v17; // rsi
  const char *v18; // rcx
  unsigned __int64 v19; // rdx
  char *v20; // rax
  const char *v21; // rdx
  __int64 v22; // rbx
  char *v23; // rax
  char **v24; // rax
  __int64 v25; // rbx
  void *v26; // rax

  if ( png_ptr )
  {
    v9 = purpose;
    if ( info_ptr )
    {
      if ( purpose )
      {
        if ( units )
        {
          v12 = (const void **)params;
          if ( nparams <= 0 || params )
          {
            v13 = -1i64;
            do
              v14 = purpose[++v13] == 0;
            while ( !v14 );
            if ( (unsigned int)type > 3 )
              png_error(png_ptr, "Invalid pCAL equation type");
            if ( (unsigned int)nparams > 0xFF )
              png_error(png_ptr, "Invalid pCAL parameter count");
            v15 = 0;
            v16 = 0;
            if ( nparams > 0 )
            {
              v17 = params;
              do
              {
                v18 = *v17;
                if ( !*v17 )
                  goto LABEL_36;
                v19 = -1i64;
                do
                  ++v19;
                while ( v18[v19] );
                if ( !(unsigned int)png_check_fp_string(v18, v19) )
LABEL_36:
                  png_error(png_ptr, "Invalid format for pCAL parameter");
                ++v16;
                ++v17;
              }
              while ( v16 < nparams );
              v9 = purpose;
            }
            v20 = (char *)png_malloc_warn(png_ptr, v13 + 1);
            info_ptr->pcal_purpose = v20;
            if ( v20 )
            {
              memmove(v20, v9, v13 + 1);
              v22 = -1i64;
              info_ptr->pcal_X0 = X0;
              info_ptr->pcal_X1 = X1;
              info_ptr->pcal_type = type;
              info_ptr->pcal_nparams = nparams;
              do
                v14 = units[++v22] == 0;
              while ( !v14 );
              v23 = (char *)png_malloc_warn(png_ptr, v22 + 1);
              info_ptr->pcal_units = v23;
              if ( v23 )
              {
                memmove(v23, units, v22 + 1);
                v24 = (char **)png_malloc_warn(png_ptr, 8i64 * (nparams + 1));
                info_ptr->pcal_params = v24;
                if ( v24 )
                {
                  memset(v24, 0, 8i64 * (nparams + 1));
                  if ( nparams <= 0 )
                  {
LABEL_34:
                    info_ptr->valid |= 0x400u;
                    info_ptr->free_me |= 0x80u;
                    return;
                  }
                  while ( 1 )
                  {
                    v25 = -1i64;
                    do
                      v14 = *((_BYTE *)*v12 + ++v25) == 0;
                    while ( !v14 );
                    v26 = png_malloc_warn(png_ptr, v25 + 1);
                    *(const void **)((char *)v12 + (char *)info_ptr->pcal_params - (char *)params) = v26;
                    if ( !v26 )
                      break;
                    memmove(v26, *v12, v25 + 1);
                    ++v15;
                    ++v12;
                    if ( v15 >= nparams )
                      goto LABEL_34;
                  }
                  v21 = "Insufficient memory for pCAL parameter";
                }
                else
                {
                  v21 = "Insufficient memory for pCAL params";
                }
              }
              else
              {
                v21 = "Insufficient memory for pCAL units";
              }
            }
            else
            {
              v21 = "Insufficient memory for pCAL purpose";
            }
            png_warning(png_ptr, v21);
          }
        }
      }
    }
  }
}

void __fastcall png_set_pHYs(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        unsigned int res_x,
        unsigned int res_y,
        int unit_type)
{
  if ( png_ptr )
  {
    if ( info_ptr )
    {
      info_ptr->valid |= 0x80u;
      info_ptr->phys_unit_type = unit_type;
      info_ptr->x_pixels_per_unit = res_x;
      info_ptr->y_pixels_per_unit = res_y;
    }
  }
}

void __fastcall png_set_sBIT(const png_struct_def *png_ptr, png_info_def *info_ptr, const png_color_8_struct *sig_bit)
{
  int v3; // eax

  if ( png_ptr && info_ptr )
  {
    if ( sig_bit )
    {
      v3 = *(_DWORD *)&sig_bit->red;
      info_ptr->valid |= 2u;
      *(_DWORD *)&info_ptr->sig_bit.red = v3;
      info_ptr->sig_bit.alpha = sig_bit->alpha;
    }
  }
}

void __fastcall png_set_sCAL_s(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        int unit,
        const char *swidth,
        const char *sheight)
{
  unsigned __int8 v6; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rax

  if ( png_ptr )
  {
    v6 = unit;
    if ( info_ptr )
    {
      if ( (unsigned int)(unit - 1) > 1 )
        png_error(png_ptr, "Invalid sCAL unit");
      if ( !swidth )
        goto LABEL_23;
      v9 = -1i64;
      v10 = -1i64;
      do
        ++v10;
      while ( swidth[v10] );
      if ( !v10 || *swidth == 45 || !(unsigned int)png_check_fp_string(swidth, v10) )
LABEL_23:
        png_error(png_ptr, "Invalid sCAL width");
      if ( !sheight )
        goto LABEL_22;
      do
        ++v9;
      while ( sheight[v9] );
      if ( !v9 || *sheight == 45 || !(unsigned int)png_check_fp_string(sheight, v9) )
LABEL_22:
        png_error(png_ptr, "Invalid sCAL height");
      info_ptr->scal_unit = v6;
      v11 = (char *)png_malloc_warn(png_ptr, v10 + 1);
      info_ptr->scal_s_width = v11;
      if ( v11 )
      {
        memmove(v11, swidth, v10 + 1);
        v12 = (char *)png_malloc_warn(png_ptr, v9 + 1);
        info_ptr->scal_s_height = v12;
        if ( v12 )
        {
          memmove(v12, sheight, v9 + 1);
          info_ptr->valid |= 0x4000u;
          info_ptr->free_me |= 0x100u;
          return;
        }
        png_free(png_ptr, info_ptr->scal_s_width);
        info_ptr->scal_s_width = 0i64;
      }
      png_warning(png_ptr, "Memory allocation failed while processing sCAL");
    }
  }
}

void __fastcall png_set_sPLT(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        const png_sPLT_struct *entries,
        int nentries)
{
  int v4; // er15
  char *v8; // rsi
  const png_struct_def *v9; // rcx
  const char *v10; // rdx
  __int64 splt_palettes_num; // rax
  char *v12; // rsi
  int *p_nentries; // rdi
  __int64 v14; // rbx
  void *v16; // rax
  void *v17; // rax

  if ( !png_ptr )
    return;
  v4 = nentries;
  if ( !info_ptr || nentries <= 0 || !entries )
    return;
  v8 = png_realloc_array(png_ptr, info_ptr->splt_palettes, info_ptr->splt_palettes_num, nentries, 0x20ui64);
  v9 = png_ptr;
  if ( !v8 )
  {
    v10 = "too many sPLT chunks";
    goto LABEL_21;
  }
  png_free(png_ptr, info_ptr->splt_palettes);
  splt_palettes_num = info_ptr->splt_palettes_num;
  info_ptr->free_me |= 0x20u;
  info_ptr->splt_palettes = (png_sPLT_struct *)v8;
  v12 = &v8[32 * splt_palettes_num];
  p_nentries = &entries->nentries;
  while ( 1 )
  {
    if ( !*((_QWORD *)p_nentries - 3) || !*((_QWORD *)p_nentries - 1) )
    {
      png_app_error(png_ptr, "png_set_sPLT: invalid sPLT");
      goto LABEL_16;
    }
    v14 = -1i64;
    v12[8] = *((_BYTE *)p_nentries - 16);
    while ( *(_BYTE *)(*((_QWORD *)p_nentries - 3) + v14++ + 1) != 0 )
      ;
    v16 = png_malloc_base(png_ptr, v14 + 1);
    *(_QWORD *)v12 = v16;
    if ( !v16 )
      goto LABEL_19;
    memmove(v16, *((const void **)p_nentries - 3), v14 + 1);
    v17 = png_malloc_array(png_ptr, *p_nentries, 0xAui64);
    *((_QWORD *)v12 + 2) = v17;
    if ( !v17 )
      break;
    *((_DWORD *)v12 + 6) = *p_nentries;
    memmove(v17, *((const void **)p_nentries - 1), 10i64 * *p_nentries);
    info_ptr->valid |= 0x2000u;
    ++info_ptr->splt_palettes_num;
    v12 += 32;
LABEL_16:
    p_nentries += 8;
    if ( !--v4 )
      goto LABEL_19;
  }
  png_free(png_ptr, *(void **)v12);
LABEL_19:
  if ( v4 > 0 )
  {
    v10 = "sPLT out of memory";
    v9 = png_ptr;
LABEL_21:
    png_chunk_report(v9, v10, 1);
  }
}

void __fastcall png_set_tIME(const png_struct_def *png_ptr, png_info_def *info_ptr, const png_time_struct *mod_time)
{
  png_time_struct v3; // rax

  if ( png_ptr && info_ptr && mod_time && (png_ptr->mode & 0x200) == 0 )
  {
    if ( (unsigned __int8)(mod_time->month - 1) > 0xBu
      || (unsigned __int8)(mod_time->day - 1) > 0x1Eu
      || mod_time->hour > 0x17u
      || mod_time->minute > 0x3Bu
      || mod_time->second > 0x3Cu )
    {
      png_warning(png_ptr, "Ignoring invalid time value");
    }
    else
    {
      v3 = *mod_time;
      info_ptr->valid |= 0x200u;
      info_ptr->mod_time = v3;
    }
  }
}

void __fastcall png_set_tRNS(
        png_struct_def *png_ptr,
        png_info_def *info_ptr,
        const unsigned __int8 *trans_alpha,
        int num_trans,
        const png_color_16_struct *trans_color)
{
  size_t v5; // rdi
  unsigned __int8 *v9; // rcx
  int v10; // edx
  unsigned __int8 color_type; // cl
  unsigned __int16 gray; // ax

  if ( png_ptr )
  {
    v5 = num_trans;
    if ( info_ptr )
    {
      if ( trans_alpha )
      {
        png_free_data(png_ptr, info_ptr, 0x2000u, 0);
        v9 = (unsigned __int8 *)png_malloc(png_ptr, 0x100ui64);
        info_ptr->trans_alpha = v9;
        png_ptr->trans_alpha = v9;
        if ( (unsigned int)(v5 - 1) <= 0xFF )
          memmove(v9, trans_alpha, v5);
      }
      if ( trans_color )
      {
        v10 = 1 << info_ptr->bit_depth;
        color_type = info_ptr->color_type;
        if ( !color_type && trans_color->gray > v10
          || color_type == 2 && (trans_color->red > v10 || trans_color->green > v10 || trans_color->blue > v10) )
        {
          png_warning(png_ptr, "tRNS chunk has out-of-range samples for bit_depth");
        }
        gray = trans_color->gray;
        if ( !(_DWORD)v5 )
          LODWORD(v5) = 1;
        *(_QWORD *)&info_ptr->trans_color.index = *(_QWORD *)&trans_color->index;
        info_ptr->trans_color.gray = gray;
      }
      info_ptr->num_trans = v5;
      if ( (_DWORD)v5 )
      {
        info_ptr->valid |= 0x10u;
        info_ptr->free_me |= 0x2000u;
      }
    }
  }
}

__int64 __fastcall png_set_text_2(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        const png_text_struct *text_ptr,
        int num_text)
{
  int v4; // esi
  const png_struct_def *v7; // r10
  int v8; // er8
  int v9; // ebx
  char *v10; // rdi
  int v11; // ebx
  const void **p_lang; // rbp
  __int64 v13; // rcx
  png_text_struct *v14; // rdi
  int v15; // edx
  size_t v16; // r15
  size_t v17; // r14
  size_t v18; // rsi
  _BYTE *v19; // rax
  size_t v20; // rbx
  _BYTE *v22; // rax
  int v23; // eax
  char *v24; // rax
  __int64 v25; // rcx
  char *v26; // rcx
  char *v27; // rcx
  char *v28; // rcx
  int v29; // [rsp+30h] [rbp-48h]

  v4 = num_text;
  v7 = png_ptr;
  if ( !png_ptr || !info_ptr || num_text <= 0 || !text_ptr )
    return 0i64;
  v8 = info_ptr->num_text;
  if ( num_text <= info_ptr->max_text - v8 )
    goto LABEL_11;
  v9 = 0x7FFFFFFF;
  if ( num_text > 0x7FFFFFFF - v8 )
  {
LABEL_26:
    png_chunk_report(v7, "too many text chunks", 1);
    return 1i64;
  }
  if ( v8 + num_text < 2147483639 )
    v9 = (v8 + num_text + 8) & 0xFFFFFFF8;
  v10 = png_realloc_array(png_ptr, info_ptr->text, v8, v9 - v8, 0x38ui64);
  if ( !v10 )
  {
    v7 = png_ptr;
    goto LABEL_26;
  }
  png_free(png_ptr, info_ptr->text);
  info_ptr->free_me |= 0x4000u;
  v7 = png_ptr;
  info_ptr->text = (png_text_struct *)v10;
  info_ptr->max_text = v9;
LABEL_11:
  v11 = 0;
  v29 = 0;
  if ( v4 <= 0 )
    return 0i64;
  p_lang = (const void **)&text_ptr->lang;
  while ( 1 )
  {
    v13 = (__int64)*(p_lang - 4);
    v14 = &info_ptr->text[info_ptr->num_text];
    if ( !v13 )
      goto LABEL_49;
    v15 = *((_DWORD *)p_lang - 10);
    if ( (unsigned int)(v15 + 1) > 3 )
    {
      png_chunk_report(v7, "text compression mode is out of range", 1);
      goto LABEL_49;
    }
    v16 = -1i64;
    do
      ++v16;
    while ( *(_BYTE *)(v13 + v16) );
    if ( v15 <= 0 )
    {
      v17 = 0i64;
LABEL_19:
      v18 = 0i64;
      goto LABEL_20;
    }
    if ( *p_lang )
    {
      v17 = -1i64;
      do
        ++v17;
      while ( *((_BYTE *)*p_lang + v17) );
    }
    else
    {
      v17 = 0i64;
    }
    v22 = p_lang[1];
    if ( !v22 )
      goto LABEL_19;
    v18 = -1i64;
    do
      ++v18;
    while ( v22[v18] );
LABEL_20:
    v19 = *(p_lang - 3);
    if ( v19 && *v19 )
    {
      v20 = -1i64;
      do
        ++v20;
      while ( v19[v20] );
      v14->compression = v15;
    }
    else
    {
      v23 = -1;
      v20 = 0i64;
      if ( v15 > 0 )
        v23 = 1;
      v14->compression = v23;
    }
    v24 = (char *)png_malloc_base(v7, v16 + v17 + v20 + v18 + 4);
    v14->key = v24;
    if ( !v24 )
      break;
    memmove(v24, *(p_lang - 4), v16);
    v14->key[v16] = 0;
    v25 = (__int64)(v14->key + 1);
    if ( *((int *)p_lang - 10) <= 0 )
    {
      v14->lang = 0i64;
      v28 = (char *)(v16 + v25);
      v14->lang_key = 0i64;
    }
    else
    {
      v26 = (char *)(v16 + v25);
      v14->lang = v26;
      memmove(v26, *p_lang, v17);
      v14->lang[v17] = 0;
      v27 = &v14->lang[v17 + 1];
      v14->lang_key = v27;
      memmove(v27, p_lang[1], v18);
      v14->lang_key[v18] = 0;
      v28 = &v14->lang_key[v18 + 1];
    }
    v14->text = v28;
    if ( v20 )
      memmove(v28, *(p_lang - 3), v20);
    v14->text[v20] = 0;
    if ( v14->compression <= 0 )
    {
      ++info_ptr->num_text;
      v4 = num_text;
      v14->text_length = v20;
      v11 = v29;
      v14->itxt_length = 0i64;
    }
    else
    {
      ++info_ptr->num_text;
      v4 = num_text;
      v14->itxt_length = v20;
      v11 = v29;
      v14->text_length = 0i64;
    }
LABEL_49:
    ++v11;
    p_lang += 7;
    v29 = v11;
    if ( v11 >= v4 )
      return 0i64;
    v7 = png_ptr;
  }
  png_chunk_report(png_ptr, "text chunk: out of memory", 1);
  return 1i64;
}

void __fastcall png_set_unknown_chunks(
        const png_struct_def *png_ptr,
        png_info_def *info_ptr,
        const png_unknown_chunk_t *unknowns,
        int num_unknowns)
{
  int v4; // esi
  png_unknown_chunk_t *v8; // rbx
  __int64 unknown_chunks_num; // rax
  unsigned __int64 *p_size; // rdi
  png_unknown_chunk_t *v11; // rbx
  unsigned __int8 *v12; // rax

  if ( png_ptr )
  {
    v4 = num_unknowns;
    if ( info_ptr )
    {
      if ( num_unknowns > 0 && unknowns )
      {
        v8 = (png_unknown_chunk_t *)png_realloc_array(
                                      png_ptr,
                                      info_ptr->unknown_chunks,
                                      info_ptr->unknown_chunks_num,
                                      num_unknowns,
                                      0x20ui64);
        if ( !v8 )
        {
          png_chunk_report(png_ptr, "too many unknown chunks", 1);
          return;
        }
        png_free(png_ptr, info_ptr->unknown_chunks);
        unknown_chunks_num = info_ptr->unknown_chunks_num;
        p_size = &unknowns->size;
        info_ptr->free_me |= 0x200u;
        info_ptr->unknown_chunks = v8;
        v11 = &v8[unknown_chunks_num];
        while ( 1 )
        {
          *(_DWORD *)v11->name = *((_DWORD *)p_size - 4);
          v11->name[4] = 0;
          v11->location = check_location(png_ptr, *((unsigned __int8 *)p_size + 8));
          if ( !*p_size )
            break;
          v12 = (unsigned __int8 *)png_malloc_base(png_ptr, *p_size);
          v11->data = v12;
          if ( v12 )
          {
            memmove(v12, (const void *)*(p_size - 1), *p_size);
            v11->size = *p_size;
            goto LABEL_13;
          }
          png_chunk_report(png_ptr, "unknown chunk: out of memory", 1);
LABEL_14:
          --v4;
          p_size += 4;
          if ( v4 <= 0 )
            return;
        }
        v11->data = 0i64;
        v11->size = 0i64;
LABEL_13:
        ++v11;
        ++info_ptr->unknown_chunks_num;
        goto LABEL_14;
      }
    }
  }
}

