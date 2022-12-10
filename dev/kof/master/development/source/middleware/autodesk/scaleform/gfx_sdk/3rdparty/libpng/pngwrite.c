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

void write_unknown_chunks(png_struct_def * png_ptr, const png_info_def * info_ptr, unsigned long where); // 0x14040F6A0
void png_write_info_before_PLTE(png_struct_def * png_ptr, const png_info_def * info_ptr); // 0x14040F530
void png_write_info(png_struct_def * png_ptr, const png_info_def * info_ptr); // 0x14040F1C0
void png_write_end(png_struct_def * png_ptr, png_info_def * info_ptr); // 0x14040EC60
png_struct_def * png_create_write_struct(const char * user_png_ver, void * error_ptr, void(*error_fn)(png_struct_def *, const char *), void(*warn_fn)(png_struct_def *, const char *)); // 0x14040EAA0
png_struct_def * png_create_write_struct_2(const char * user_png_ver, void * error_ptr, void(*error_fn)(png_struct_def *, const char *), void(*warn_fn)(png_struct_def *, const char *), void * mem_ptr, void *(*malloc_fn)(png_struct_def *, unsigned long long), void(*free_fn)(png_struct_def *, void *)); // 0x14040EAC0
void png_write_image(png_struct_def * png_ptr, unsigned char * * image); // 0x14040EE20
void png_do_write_intrapixel(png_row_info_struct * row_info, unsigned char * row); // 0x14040EB80
void png_write_flush(png_struct_def * png_ptr); // 0x14040EDD0
struct png_image_write_control
{
	png_image * image; // 0x0
	const void * buffer; // 0x8
	long row_stride; // 0x10
	const void * colormap; // 0x18
	long convert_to_8bit; // 0x20
	const void * first_row; // 0x28
	long long row_bytes; // 0x30
	void * local_row; // 0x38
};
typedef const long * png_const_fixed_point_p;
typedef const double * png_const_doublep;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;png_struct_def *__fastcall png_create_write_struct(
        const char *user_png_ver,
        void *error_ptr,
        void (__fastcall *error_fn)(png_struct_def *, const char *),
        void (__fastcall *warn_fn)(png_struct_def *, const char *))
{
  return png_create_write_struct_2(user_png_ver, error_ptr, error_fn, warn_fn, 0i64, 0i64, 0i64);
}

png_struct_def *__fastcall png_create_write_struct_2(
        const char *user_png_ver,
        void *error_ptr,
        void (__fastcall *error_fn)(png_struct_def *, const char *),
        void (__fastcall *warn_fn)(png_struct_def *, const char *),
        void *mem_ptr,
        void *(__fastcall *malloc_fn)(png_struct_def *, unsigned __int64),
        void (__fastcall *free_fn)(png_struct_def *, void *))
{
  png_struct_def *result; // rax
  png_struct_def *v8; // rbx

  result = png_create_png_struct(user_png_ver, error_ptr, error_fn, warn_fn, mem_ptr, malloc_fn, free_fn);
  v8 = result;
  if ( result )
  {
    result->flags |= 0x200000u;
    result->zbuffer_size = 0x2000;
    result->zlib_strategy = 1;
    result->zlib_level = -1;
    result->zlib_mem_level = 8;
    result->zlib_window_bits = 15;
    result->zlib_method = 8;
    *(_QWORD *)&result->zlib_text_mem_level = 8i64;
    result->zlib_text_level = -1;
    result->zlib_text_window_bits = 15;
    result->zlib_text_method = 8;
    png_set_write_fn(result, 0i64, 0i64, 0i64);
    return v8;
  }
  return result;
}

void __fastcall png_do_write_intrapixel(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 color_type; // al
  unsigned __int8 bit_depth; // r8
  unsigned int width; // er9
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int16 v10; // r8
  __int16 v11; // r9
  unsigned __int16 v12; // cx
  __int16 v13; // cx

  color_type = row_info->color_type;
  if ( (color_type & 2) != 0 )
  {
    bit_depth = row_info->bit_depth;
    width = row_info->width;
    if ( bit_depth == 8 )
    {
      if ( color_type == 2 )
      {
        v5 = 3i64;
      }
      else
      {
        if ( color_type != 6 )
          return;
        v5 = 4i64;
      }
      if ( width )
      {
        v6 = row_info->width;
        do
        {
          v7 = row[1];
          *row -= v7;
          row[2] -= v7;
          row += v5;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      if ( bit_depth != 16 )
        return;
      if ( color_type == 2 )
      {
        v8 = 6i64;
      }
      else
      {
        if ( color_type != 6 )
          return;
        v8 = 8i64;
      }
      if ( width )
      {
        v9 = row_info->width;
        do
        {
          v10 = _byteswap_ushort(*((_WORD *)row + 1));
          v11 = _byteswap_ushort(*(_WORD *)row) - v10;
          v12 = _byteswap_ushort(*((_WORD *)row + 2));
          row[1] = v11;
          v13 = v12 - v10;
          *row = HIBYTE(v11);
          row[5] = v13;
          row[4] = HIBYTE(v13);
          row += v8;
          --v9;
        }
        while ( v9 );
      }
    }
  }
}

void __fastcall png_write_end(png_struct_def *png_ptr, png_info_def *info_ptr)
{
  int v4; // ebp
  png_text_struct *text; // rdx
  __int64 v6; // rsi
  int compression; // ecx

  if ( png_ptr )
  {
    if ( (png_ptr->mode & 4) == 0 )
      png_error(png_ptr, "No IDATs written into file");
    if ( png_ptr->num_palette_max > png_ptr->num_palette )
      png_benign_error(png_ptr, "Wrote palette index exceeding num_palette");
    if ( info_ptr )
    {
      if ( (info_ptr->valid & 0x200) != 0 && (png_ptr->mode & 0x200) == 0 )
        png_write_tIME(png_ptr, &info_ptr->mod_time);
      v4 = 0;
      if ( info_ptr->num_text > 0 )
      {
        text = info_ptr->text;
        v6 = 0i64;
        while ( 1 )
        {
          compression = text[v6].compression;
          if ( compression > 0 )
            break;
          if ( compression < 0 )
          {
            if ( compression == -1 )
            {
              png_write_tEXt(png_ptr, text[v6].key, text[v6].text, 0i64);
              goto LABEL_17;
            }
          }
          else
          {
            png_write_zTXt(png_ptr, text[v6].key, text[v6].text, 0i64, compression);
            text = info_ptr->text;
            text[v6].compression = -2;
          }
LABEL_18:
          ++v4;
          ++v6;
          if ( v4 >= info_ptr->num_text )
            goto LABEL_19;
        }
        png_write_iTXt(png_ptr, compression, text[v6].key, text[v6].lang, text[v6].lang_key, text[v6].text);
LABEL_17:
        text = info_ptr->text;
        text[v6].compression = -3;
        goto LABEL_18;
      }
LABEL_19:
      write_unknown_chunks(png_ptr, info_ptr, 8u);
    }
    png_ptr->mode |= 8u;
    png_write_IEND(png_ptr);
  }
}

void __fastcall png_write_flush(png_struct_def *png_ptr)
{
  if ( png_ptr )
  {
    if ( png_ptr->row_number < png_ptr->num_rows )
    {
      png_compress_IDAT(png_ptr, 0i64, 0i64, 2);
      png_ptr->flush_rows = 0;
      png_flush(png_ptr);
    }
  }
}

void __fastcall png_write_image(png_struct_def *png_ptr, unsigned __int8 **image)
{
  unsigned __int8 **v2; // rdi
  int v4; // er12
  int v5; // er13
  unsigned int v6; // er15
  const void **v7; // r14
  const void *v8; // rbp
  unsigned __int8 interlaced; // si
  unsigned __int8 usr_channels; // cl
  __int64 usr_width; // r9
  unsigned __int8 usr_bit_depth; // al
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // r8
  unsigned __int8 *row_buf; // rax
  unsigned __int8 *v16; // rdi
  unsigned __int8 pass; // al
  void (__fastcall *write_row_fn)(png_struct_def *, unsigned int, int); // rax
  png_row_info_struct row_info; // [rsp+28h] [rbp-60h] BYREF

  if ( png_ptr )
  {
    v2 = image;
    v4 = 0;
    v5 = png_set_interlace_handling(png_ptr);
    if ( v5 > 0 )
    {
      do
      {
        v6 = 0;
        v7 = (const void **)v2;
        if ( png_ptr->height )
        {
          do
          {
            v8 = *v7;
            if ( !png_ptr->row_number && !png_ptr->pass )
            {
              if ( (png_ptr->mode & 0x400) == 0 )
                png_error(png_ptr, "png_write_info was never called before png_write_row");
              png_write_start_row(png_ptr);
            }
            interlaced = png_ptr->interlaced;
            if ( interlaced && (png_ptr->transformations & 2) != 0 )
            {
              switch ( png_ptr->pass )
              {
                case 0u:
                  if ( (png_ptr->row_number & 7) != 0 )
                    goto LABEL_34;
                  break;
                case 1u:
                  if ( (png_ptr->row_number & 7) != 0 || png_ptr->width < 5 )
                    goto LABEL_34;
                  break;
                case 2u:
                  if ( (png_ptr->row_number & 7) != 4 )
                    goto LABEL_34;
                  break;
                case 3u:
                  if ( (png_ptr->row_number & 3) != 0 || png_ptr->width < 3 )
                    goto LABEL_34;
                  break;
                case 4u:
                  if ( (png_ptr->row_number & 3) != 2 )
                    goto LABEL_34;
                  break;
                case 5u:
                  if ( (png_ptr->row_number & 1) != 0 || png_ptr->width < 2 )
                    goto LABEL_34;
                  break;
                case 6u:
                  if ( (png_ptr->row_number & 1) != 0 )
                    break;
                  goto LABEL_34;
                default:
                  break;
              }
            }
            usr_channels = png_ptr->usr_channels;
            usr_width = png_ptr->usr_width;
            row_info.color_type = png_ptr->color_type;
            usr_bit_depth = png_ptr->usr_bit_depth;
            row_info.width = usr_width;
            v13 = usr_channels * usr_bit_depth;
            row_info.channels = usr_channels;
            row_info.bit_depth = usr_bit_depth;
            row_info.pixel_depth = usr_channels * usr_bit_depth;
            if ( (unsigned __int8)(usr_channels * usr_bit_depth) < 8u )
              v14 = (usr_width * (unsigned __int64)v13 + 7) >> 3;
            else
              v14 = usr_width * ((unsigned __int64)v13 >> 3);
            row_buf = png_ptr->row_buf;
            row_info.rowbytes = v14;
            v16 = row_buf + 1;
            memmove(row_buf + 1, v8, v14);
            if ( interlaced
              && (pass = png_ptr->pass, pass < 6u)
              && (png_ptr->transformations & 2) != 0
              && (png_do_write_interlace(&row_info, v16, pass), !row_info.width) )
            {
LABEL_34:
              png_write_finish_row(png_ptr);
            }
            else
            {
              if ( png_ptr->transformations )
                png_do_write_transformations(png_ptr, &row_info);
              if ( row_info.pixel_depth != png_ptr->pixel_depth
                || row_info.pixel_depth != png_ptr->transformed_pixel_depth )
              {
                png_error(png_ptr, "internal write transform logic error");
              }
              if ( (png_ptr->mng_features_permitted & 4) != 0 && png_ptr->filter_type == 64 )
                png_do_write_intrapixel(&row_info, png_ptr->row_buf + 1);
              if ( row_info.color_type == 3 && png_ptr->num_palette_max >= 0 )
                png_do_check_palette_indexes(png_ptr, &row_info);
              png_write_find_filter(png_ptr, &row_info);
              write_row_fn = png_ptr->write_row_fn;
              if ( write_row_fn )
                write_row_fn(png_ptr, png_ptr->row_number, png_ptr->pass);
            }
            ++v6;
            ++v7;
          }
          while ( v6 < png_ptr->height );
          v2 = image;
        }
        ++v4;
      }
      while ( v4 < v5 );
    }
  }
}

void __fastcall png_write_info(png_struct_def *png_ptr, const png_info_def *info_ptr)
{
  int v4; // ebp
  __int64 num_trans; // r10
  int v6; // er8
  unsigned __int8 *trans_alpha; // rcx
  __m128i si128; // xmm2
  unsigned __int8 *v9; // rdx
  __m128i v10; // xmm0
  unsigned __int8 *v11; // rcx
  __int64 v12; // rdx
  int i; // esi
  png_text_struct *text; // rcx
  __int64 v15; // rsi
  int compression; // edx

  if ( png_ptr && info_ptr )
  {
    png_write_info_before_PLTE(png_ptr, info_ptr);
    if ( (info_ptr->valid & 8) != 0 )
    {
      png_write_PLTE(png_ptr, info_ptr->palette, info_ptr->num_palette);
    }
    else if ( info_ptr->color_type == 3 )
    {
      png_error(png_ptr, "Valid palette required for paletted images");
    }
    v4 = 0;
    if ( (info_ptr->valid & 0x10) != 0 )
    {
      if ( (png_ptr->transformations & 0x80000) != 0 && info_ptr->color_type == 3 )
      {
        num_trans = info_ptr->num_trans;
        v6 = 0;
        if ( (unsigned int)num_trans >= 0x20 )
        {
          trans_alpha = info_ptr->trans_alpha;
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          v9 = trans_alpha + 16;
          do
          {
            v10 = _mm_loadu_si128((const __m128i *)v9 - 1);
            v9 += 32;
            v6 += 32;
            *((__m128i *)v9 - 3) = _mm_sub_epi8(si128, v10);
            *((__m128i *)v9 - 2) = _mm_sub_epi8(si128, _mm_loadu_si128((const __m128i *)v9 - 2));
          }
          while ( (__int64)&v9[-16i64 - (_QWORD)trans_alpha] < ((unsigned int)num_trans & 0xFFFFFFE0) );
        }
        if ( v6 < num_trans )
        {
          v11 = &info_ptr->trans_alpha[v6];
          v12 = num_trans - v6;
          do
          {
            *v11 = ~*v11;
            ++v11;
            --v12;
          }
          while ( v12 );
        }
      }
      png_write_tRNS(png_ptr, info_ptr->trans_alpha, &info_ptr->trans_color, info_ptr->num_trans, info_ptr->color_type);
    }
    if ( (info_ptr->valid & 0x20) != 0 )
      png_write_bKGD(png_ptr, &info_ptr->background, info_ptr->color_type);
    if ( (info_ptr->valid & 0x40) != 0 )
      png_write_hIST(png_ptr, info_ptr->hist, info_ptr->num_palette);
    if ( (info_ptr->valid & 0x100) != 0 )
      png_write_oFFs(png_ptr, info_ptr->x_offset, info_ptr->y_offset, info_ptr->offset_unit_type);
    if ( (info_ptr->valid & 0x400) != 0 )
      png_write_pCAL(
        png_ptr,
        info_ptr->pcal_purpose,
        info_ptr->pcal_X0,
        info_ptr->pcal_X1,
        info_ptr->pcal_type,
        info_ptr->pcal_nparams,
        info_ptr->pcal_units,
        info_ptr->pcal_params);
    if ( (info_ptr->valid & 0x4000) != 0 )
      png_write_sCAL_s(png_ptr, info_ptr->scal_unit, info_ptr->scal_s_width, info_ptr->scal_s_height);
    if ( SLOBYTE(info_ptr->valid) < 0 )
      png_write_pHYs(png_ptr, info_ptr->x_pixels_per_unit, info_ptr->y_pixels_per_unit, info_ptr->phys_unit_type);
    if ( (info_ptr->valid & 0x200) != 0 )
    {
      png_write_tIME(png_ptr, &info_ptr->mod_time);
      png_ptr->mode |= 0x200u;
    }
    if ( (info_ptr->valid & 0x2000) != 0 )
    {
      for ( i = 0; i < info_ptr->splt_palettes_num; ++i )
        png_write_sPLT(png_ptr, &info_ptr->splt_palettes[i]);
    }
    if ( info_ptr->num_text > 0 )
    {
      text = info_ptr->text;
      v15 = 0i64;
      while ( 1 )
      {
        compression = text[v15].compression;
        if ( compression > 0 )
          break;
        if ( compression )
        {
          if ( compression == -1 )
          {
            png_write_tEXt(png_ptr, text[v15].key, text[v15].text, 0i64);
            goto LABEL_42;
          }
        }
        else
        {
          png_write_zTXt(png_ptr, text[v15].key, text[v15].text, 0i64, 0);
          text = info_ptr->text;
          text[v15].compression = -2;
        }
LABEL_43:
        ++v4;
        ++v15;
        if ( v4 >= info_ptr->num_text )
          goto LABEL_44;
      }
      png_write_iTXt(png_ptr, compression, text[v15].key, text[v15].lang, text[v15].lang_key, text[v15].text);
LABEL_42:
      text = info_ptr->text;
      text[v15].compression = -3;
      goto LABEL_43;
    }
LABEL_44:
    write_unknown_chunks(png_ptr, info_ptr, 2u);
  }
}

void __fastcall png_write_info_before_PLTE(png_struct_def *png_ptr, const png_info_def *info_ptr)
{
  signed __int16 flags; // ax
  unsigned int valid; // ecx
  signed __int16 v6; // ax

  if ( png_ptr && info_ptr && (png_ptr->mode & 0x400) == 0 )
  {
    png_write_sig(png_ptr);
    if ( (png_ptr->mode & 0x1000) != 0 && png_ptr->mng_features_permitted )
    {
      png_warning(png_ptr, "MNG features are not allowed in a PNG datastream");
      png_ptr->mng_features_permitted = 0;
    }
    png_write_IHDR(
      png_ptr,
      info_ptr->width,
      info_ptr->height,
      info_ptr->bit_depth,
      info_ptr->color_type,
      info_ptr->compression_type,
      info_ptr->filter_type,
      info_ptr->interlace_type);
    flags = info_ptr->colorspace.flags;
    if ( flags >= 0 && (flags & 8) != 0 && (info_ptr->valid & 1) != 0 )
      png_write_gAMA_fixed(png_ptr, info_ptr->colorspace.gamma);
    if ( (info_ptr->colorspace.flags & 0x8000u) == 0 )
    {
      valid = info_ptr->valid;
      if ( (valid & 0x1000) != 0 )
      {
        if ( (valid & 0x800) != 0 )
          png_app_warning(png_ptr, "profile matches sRGB but writing iCCP instead");
        png_write_iCCP(png_ptr, info_ptr->iccp_name, info_ptr->iccp_profile);
      }
      else if ( (info_ptr->valid & 0x800) != 0 )
      {
        png_write_sRGB(png_ptr, info_ptr->colorspace.rendering_intent);
      }
    }
    if ( (info_ptr->valid & 2) != 0 )
      png_write_sBIT(png_ptr, &info_ptr->sig_bit, info_ptr->color_type);
    v6 = info_ptr->colorspace.flags;
    if ( v6 >= 0 && (v6 & 0x10) != 0 && (info_ptr->valid & 4) != 0 )
      png_write_cHRM_fixed(png_ptr, &info_ptr->colorspace.end_points_xy);
    write_unknown_chunks(png_ptr, info_ptr, 1u);
    png_ptr->mode |= 0x400u;
  }
}

void __fastcall write_unknown_chunks(png_struct_def *png_ptr, const png_info_def *info_ptr, unsigned int where)
{
  __int64 unknown_chunks_num; // rax
  unsigned __int8 v4; // r14
  png_unknown_chunk_t *unknown_chunks; // rbx
  unsigned __int64 *p_size; // rbx
  int v9; // eax

  unknown_chunks_num = info_ptr->unknown_chunks_num;
  v4 = where;
  if ( (_DWORD)unknown_chunks_num )
  {
    unknown_chunks = info_ptr->unknown_chunks;
    if ( unknown_chunks < &unknown_chunks[unknown_chunks_num] )
    {
      p_size = &unknown_chunks->size;
      do
      {
        if ( (v4 & (_BYTE)p_size[1]) != 0 )
        {
          v9 = png_handle_as_unknown(png_ptr, (const unsigned __int8 *)p_size - 16);
          if ( v9 != 1 && ((*((_BYTE *)p_size - 13) & 0x20) != 0 || v9 == 3 || !v9 && png_ptr->unknown_default == 3) )
          {
            if ( !*p_size )
              png_warning(png_ptr, "Writing zero-length unknown chunk");
            png_write_chunk(
              png_ptr,
              (const unsigned __int8 *)p_size - 16,
              (const unsigned __int8 *)*(p_size - 1),
              *p_size);
          }
        }
        p_size += 4;
      }
      while ( (png_unknown_chunk_t *)(p_size - 2) < &info_ptr->unknown_chunks[info_ptr->unknown_chunks_num] );
    }
  }
}

