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

png_struct_def * png_create_read_struct(const char * user_png_ver, void * error_ptr, void(*error_fn)(png_struct_def *, const char *), void(*warn_fn)(png_struct_def *, const char *)); // 0x14040DD20
void png_read_info(png_struct_def * png_ptr, png_info_def * info_ptr); // 0x14040E360
void png_read_update_info(png_struct_def * png_ptr, png_info_def * info_ptr); // 0x14040EA50
void png_do_read_intrapixel(png_row_info_struct * row_info, unsigned char * row); // 0x14040DDE0
void png_read_row(png_struct_def * png_ptr, unsigned char * row, unsigned char * dsp_row); // 0x14040E630
void png_read_image(png_struct_def * png_ptr, unsigned char * * image); // 0x14040E270
void png_read_end(png_struct_def * png_ptr, png_info_def * info_ptr); // 0x14040DFB0
void png_read_destroy(png_struct_def * png_ptr); // 0x14040DEC0
void png_destroy_read_struct(png_struct_def * * png_ptr_ptr, png_info_def * * info_ptr_ptr, png_info_def * * end_info_ptr_ptr); // 0x14040DD80
struct png_image_read_control
{
	png_image * image; // 0x0
	void * buffer; // 0x8
	long row_stride; // 0x10
	void * colormap; // 0x18
	const png_color_struct * background; // 0x20
	void * local_row; // 0x28
	void * first_row; // 0x30
	long long row_bytes; // 0x38
	long file_encoding; // 0x40
	long gamma_to_linear; // 0x44
	long colormap_processing; // 0x48
};
typedef const unsigned short * png_const_uint_16p;
typedef const png_color_struct * png_const_colorp;
typedef void * voidp;
typedef const png_color_8_struct * png_const_color_8p;
typedef const png_color_16_struct * png_const_color_16p;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;png_struct_def *__fastcall png_create_read_struct(
        const char *user_png_ver,
        void *error_ptr,
        void (__fastcall *error_fn)(png_struct_def *, const char *),
        void (__fastcall *warn_fn)(png_struct_def *, const char *))
{
  png_struct_def *result; // rax
  png_struct_def *v5; // rbx

  result = png_create_png_struct(user_png_ver, error_ptr, error_fn, warn_fn, 0i64, 0i64, 0i64);
  v5 = result;
  if ( result )
  {
    result->flags |= 0x300000u;
    result->mode = 0x8000;
    result->IDAT_read_size = 0x2000;
    png_set_read_fn(result, 0i64, 0i64);
    return v5;
  }
  return result;
}

void __fastcall png_destroy_read_struct(
        png_struct_def **png_ptr_ptr,
        png_info_def **info_ptr_ptr,
        png_info_def **end_info_ptr_ptr)
{
  png_struct_def *v4; // rbx

  if ( png_ptr_ptr )
  {
    v4 = *png_ptr_ptr;
    if ( *png_ptr_ptr )
    {
      png_destroy_info_struct(*png_ptr_ptr, end_info_ptr_ptr);
      png_destroy_info_struct(v4, info_ptr_ptr);
      *png_ptr_ptr = 0i64;
      png_read_destroy(v4);
      png_destroy_png_struct(v4);
    }
  }
}

void __fastcall png_do_read_intrapixel(png_row_info_struct *row_info, unsigned __int8 *row)
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
          *row += v7;
          row[2] += v7;
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
          v11 = v10 + _byteswap_ushort(*(_WORD *)row);
          v12 = _byteswap_ushort(*((_WORD *)row + 2));
          row[1] = v11;
          v13 = v10 + v12;
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

void __fastcall png_read_destroy(png_struct_def *png_ptr)
{
  png_destroy_gamma_table(png_ptr);
  png_free(png_ptr, png_ptr->big_row_buf);
  png_free(png_ptr, png_ptr->big_prev_row);
  png_free(png_ptr, png_ptr->read_buffer);
  png_free(png_ptr, png_ptr->palette_lookup);
  png_free(png_ptr, png_ptr->quantize_index);
  if ( (png_ptr->free_me & 0x1000) != 0 )
    png_zfree(png_ptr, png_ptr->palette);
  png_ptr->free_me &= ~0x1000u;
  if ( (png_ptr->free_me & 0x2000) != 0 )
    png_free(png_ptr, png_ptr->trans_alpha);
  png_ptr->free_me &= ~0x2000u;
  inflateEnd(&png_ptr->zstream);
  png_free(png_ptr, png_ptr->save_buffer);
  png_free(png_ptr, png_ptr->unknown_chunk.data);
  png_free(png_ptr, png_ptr->chunk_list);
}

void __fastcall png_read_end(png_struct_def *png_ptr, png_info_def *info_ptr)
{
  unsigned int chunk_header; // eax
  unsigned int chunk_name; // edi
  unsigned int v6; // esi
  int v7; // er14

  if ( png_ptr )
  {
    if ( !(unsigned int)png_chunk_unknown_handling(png_ptr, 0x49444154u) )
      png_read_finish_IDAT(png_ptr);
    if ( png_ptr->color_type == 3 && png_ptr->num_palette_max > png_ptr->num_palette )
      png_benign_error(png_ptr, "Read palette index exceeding num_palette");
    do
    {
      chunk_header = png_read_chunk_header(png_ptr);
      chunk_name = png_ptr->chunk_name;
      v6 = chunk_header;
      if ( chunk_name == 1229278788 )
      {
        png_handle_IEND(png_ptr, info_ptr, chunk_header);
      }
      else if ( chunk_name == 1229472850 )
      {
        png_handle_IHDR(png_ptr, info_ptr, chunk_header);
      }
      else if ( info_ptr )
      {
        v7 = png_chunk_unknown_handling(png_ptr, chunk_name);
        if ( v7 )
        {
          if ( chunk_name == 1229209940 && (v6 || (png_ptr->mode & 0x2000) != 0) )
            png_benign_error(png_ptr, "Too many IDATs found");
          png_handle_unknown(png_ptr, info_ptr, v6, v7);
          if ( chunk_name == 1347179589 )
            png_ptr->mode |= 2u;
        }
        else
        {
          switch ( chunk_name )
          {
            case 0x49444154u:
              if ( v6 || (png_ptr->mode & 0x2000) != 0 )
                png_benign_error(png_ptr, "Too many IDATs found");
              png_crc_finish(png_ptr, v6);
              break;
            case 0x504C5445u:
              png_handle_PLTE(png_ptr, info_ptr, v6);
              break;
            case 0x624B4744u:
              png_handle_bKGD(png_ptr, info_ptr, v6);
              break;
            case 0x6348524Du:
              png_handle_cHRM(png_ptr, info_ptr, v6);
              break;
            case 0x67414D41u:
              png_handle_gAMA(png_ptr, info_ptr, v6);
              break;
            case 0x68495354u:
              png_handle_hIST(png_ptr, info_ptr, v6);
              break;
            case 0x6F464673u:
              png_handle_oFFs(png_ptr, info_ptr, v6);
              break;
            case 0x7043414Cu:
              png_handle_pCAL(png_ptr, info_ptr, v6);
              break;
            case 0x7343414Cu:
              png_handle_sCAL(png_ptr, info_ptr, v6);
              break;
            case 0x70485973u:
              png_handle_pHYs(png_ptr, info_ptr, v6);
              break;
            case 0x73424954u:
              png_handle_sBIT(png_ptr, info_ptr, v6);
              break;
            case 0x73524742u:
              png_handle_sRGB(png_ptr, info_ptr, v6);
              break;
            case 0x69434350u:
              png_handle_iCCP(png_ptr, info_ptr, v6);
              break;
            case 0x73504C54u:
              png_handle_sPLT(png_ptr, info_ptr, v6);
              break;
            case 0x74455874u:
              png_handle_tEXt(png_ptr, info_ptr, v6);
              break;
            case 0x74494D45u:
              png_handle_tIME(png_ptr, info_ptr, v6);
              break;
            case 0x74524E53u:
              png_handle_tRNS(png_ptr, info_ptr, v6);
              break;
            case 0x7A545874u:
              png_handle_zTXt(png_ptr, info_ptr, v6);
              break;
            case 0x69545874u:
              png_handle_iTXt(png_ptr, info_ptr, v6);
              break;
            default:
              png_handle_unknown(png_ptr, info_ptr, v6, 0);
              break;
          }
        }
      }
      else
      {
        png_crc_finish(png_ptr, chunk_header);
      }
    }
    while ( (png_ptr->mode & 0x10) == 0 );
  }
}

void __fastcall png_read_image(png_struct_def *png_ptr, unsigned __int8 **image)
{
  int v4; // ebx
  __int64 height; // r14
  __int64 v6; // rbp
  unsigned __int8 **v7; // rbx
  __int64 v8; // rsi

  if ( png_ptr )
  {
    if ( (png_ptr->flags & 0x40) != 0 )
    {
      if ( png_ptr->interlaced && (png_ptr->transformations & 2) == 0 )
      {
        png_warning(png_ptr, "Interlace handling should be turned on when using png_read_image");
        png_ptr->num_rows = png_ptr->height;
      }
      v4 = png_set_interlace_handling(png_ptr);
    }
    else
    {
      v4 = png_set_interlace_handling(png_ptr);
      if ( (png_ptr->flags & 0x40) != 0 )
        png_app_error(png_ptr, "png_start_read_image/png_read_update_info: duplicate call");
      else
        png_read_start_row(png_ptr);
    }
    height = png_ptr->height;
    if ( v4 > 0 )
    {
      v6 = (unsigned int)v4;
      do
      {
        v7 = image;
        if ( (_DWORD)height )
        {
          v8 = height;
          do
          {
            png_read_row(png_ptr, *v7++, 0i64);
            --v8;
          }
          while ( v8 );
        }
        --v6;
      }
      while ( v6 );
    }
  }
}

void __fastcall png_read_info(png_struct_def *png_ptr, png_info_def *info_ptr)
{
  unsigned int chunk_header; // eax
  unsigned int chunk_name; // edi
  unsigned int v6; // esi
  unsigned int mode; // eax
  int v8; // eax

  if ( png_ptr && info_ptr )
  {
    png_read_sig(png_ptr, info_ptr);
    while ( 1 )
    {
      chunk_header = png_read_chunk_header(png_ptr);
      chunk_name = png_ptr->chunk_name;
      v6 = chunk_header;
      mode = png_ptr->mode;
      if ( chunk_name == 1229209940 )
        break;
      if ( (mode & 4) != 0 )
        png_ptr->mode = mode | 8;
      if ( chunk_name == 1229472850 )
      {
        png_handle_IHDR(png_ptr, info_ptr, v6);
      }
      else if ( chunk_name == 1229278788 )
      {
        png_handle_IEND(png_ptr, info_ptr, v6);
      }
      else
      {
LABEL_11:
        v8 = png_chunk_unknown_handling(png_ptr, chunk_name);
        if ( v8 )
        {
          png_handle_unknown(png_ptr, info_ptr, v6, v8);
          if ( chunk_name == 1347179589 )
          {
            png_ptr->mode |= 2u;
          }
          else if ( chunk_name == 1229209940 )
          {
            png_ptr->idat_size = 0;
            return;
          }
        }
        else
        {
          switch ( chunk_name )
          {
            case 0x504C5445u:
              png_handle_PLTE(png_ptr, info_ptr, v6);
              break;
            case 0x49444154u:
              png_ptr->idat_size = v6;
              return;
            case 0x624B4744u:
              png_handle_bKGD(png_ptr, info_ptr, v6);
              break;
            case 0x6348524Du:
              png_handle_cHRM(png_ptr, info_ptr, v6);
              break;
            case 0x67414D41u:
              png_handle_gAMA(png_ptr, info_ptr, v6);
              break;
            case 0x68495354u:
              png_handle_hIST(png_ptr, info_ptr, v6);
              break;
            case 0x6F464673u:
              png_handle_oFFs(png_ptr, info_ptr, v6);
              break;
            case 0x7043414Cu:
              png_handle_pCAL(png_ptr, info_ptr, v6);
              break;
            case 0x7343414Cu:
              png_handle_sCAL(png_ptr, info_ptr, v6);
              break;
            case 0x70485973u:
              png_handle_pHYs(png_ptr, info_ptr, v6);
              break;
            case 0x73424954u:
              png_handle_sBIT(png_ptr, info_ptr, v6);
              break;
            case 0x73524742u:
              png_handle_sRGB(png_ptr, info_ptr, v6);
              break;
            case 0x69434350u:
              png_handle_iCCP(png_ptr, info_ptr, v6);
              break;
            case 0x73504C54u:
              png_handle_sPLT(png_ptr, info_ptr, v6);
              break;
            case 0x74455874u:
              png_handle_tEXt(png_ptr, info_ptr, v6);
              break;
            case 0x74494D45u:
              png_handle_tIME(png_ptr, info_ptr, v6);
              break;
            case 0x74524E53u:
              png_handle_tRNS(png_ptr, info_ptr, v6);
              break;
            case 0x7A545874u:
              png_handle_zTXt(png_ptr, info_ptr, v6);
              break;
            case 0x69545874u:
              png_handle_iTXt(png_ptr, info_ptr, v6);
              break;
            default:
              png_handle_unknown(png_ptr, info_ptr, v6, 0);
              break;
          }
        }
      }
    }
    if ( (mode & 1) == 0 )
      png_chunk_error(png_ptr, "Missing IHDR before IDAT");
    if ( png_ptr->color_type == 3 && (mode & 2) == 0 )
      png_chunk_error(png_ptr, "Missing PLTE before IDAT");
    if ( (mode & 8) != 0 )
      png_chunk_benign_error(png_ptr, "Too many IDATs found");
    png_ptr->mode |= 4u;
    goto LABEL_11;
  }
}

void __fastcall png_read_row(png_struct_def *png_ptr, unsigned __int8 *row, unsigned __int8 *dsp_row)
{
  __int64 iwidth; // rcx
  unsigned __int64 v7; // r8
  bool v8; // zf
  unsigned int row_number; // ecx
  unsigned int v10; // ecx
  unsigned __int8 *row_buf; // r8
  unsigned __int8 v12; // al
  unsigned __int8 *v13; // rbp
  unsigned __int8 transformed_pixel_depth; // al
  unsigned __int8 pixel_depth; // al
  unsigned int transformations; // er9
  unsigned __int8 pass; // al
  int v18; // er8
  unsigned __int8 *v19; // rdx
  void (__fastcall *read_row_fn)(png_struct_def *, unsigned int, int); // rax
  png_row_info_struct row_info; // [rsp+30h] [rbp-38h] BYREF

  if ( !png_ptr )
    return;
  if ( (png_ptr->flags & 0x40) == 0 )
    png_read_start_row(png_ptr);
  iwidth = png_ptr->iwidth;
  row_info.color_type = png_ptr->color_type;
  row_info.bit_depth = png_ptr->bit_depth;
  row_info.channels = png_ptr->channels;
  row_info.pixel_depth = png_ptr->pixel_depth;
  row_info.width = iwidth;
  if ( row_info.pixel_depth < 8u )
    v7 = (iwidth * (unsigned __int64)row_info.pixel_depth + 7) >> 3;
  else
    v7 = iwidth * ((unsigned __int64)row_info.pixel_depth >> 3);
  v8 = png_ptr->interlaced == 0;
  row_info.rowbytes = v7;
  if ( v8 || (png_ptr->transformations & 2) == 0 )
  {
LABEL_40:
    if ( (png_ptr->mode & 4) == 0 )
      png_error(png_ptr, "Invalid attempt to read row data");
    png_read_IDAT_data(png_ptr, png_ptr->row_buf, v7 + 1);
    row_buf = png_ptr->row_buf;
    v12 = *row_buf;
    if ( *row_buf )
    {
      if ( v12 >= 5u )
        png_error(png_ptr, "bad adaptive filter value");
      png_read_filter_row(png_ptr, &row_info, row_buf + 1, (const unsigned __int8 *)png_ptr->prev_row + 1, v12);
    }
    v13 = png_ptr->row_buf;
    memmove(png_ptr->prev_row, v13, row_info.rowbytes + 1);
    if ( (png_ptr->mng_features_permitted & 4) != 0 && png_ptr->filter_type == 64 )
      png_do_read_intrapixel(&row_info, v13 + 1);
    if ( png_ptr->transformations )
      png_do_read_transformations(png_ptr, &row_info);
    transformed_pixel_depth = png_ptr->transformed_pixel_depth;
    if ( transformed_pixel_depth )
    {
      if ( transformed_pixel_depth != row_info.pixel_depth )
        png_error(png_ptr, "internal sequential row size calculation error");
    }
    else
    {
      pixel_depth = row_info.pixel_depth;
      png_ptr->transformed_pixel_depth = row_info.pixel_depth;
      if ( pixel_depth > png_ptr->maximum_pixel_depth )
        png_error(png_ptr, "sequential row overflow");
    }
    if ( png_ptr->interlaced && (transformations = png_ptr->transformations, (transformations & 2) != 0) )
    {
      pass = png_ptr->pass;
      if ( pass < 6u )
        png_do_read_interlace(&row_info, png_ptr->row_buf + 1, pass, transformations);
      if ( dsp_row )
        png_combine_row(png_ptr, dsp_row, 1);
      if ( !row )
        goto LABEL_66;
      v18 = 0;
      v19 = row;
    }
    else
    {
      if ( row )
        png_combine_row(png_ptr, row, -1);
      if ( !dsp_row )
        goto LABEL_66;
      v18 = -1;
      v19 = dsp_row;
    }
    png_combine_row(png_ptr, v19, v18);
LABEL_66:
    png_read_finish_row(png_ptr);
    read_row_fn = png_ptr->read_row_fn;
    if ( read_row_fn )
      read_row_fn(png_ptr, png_ptr->row_number, png_ptr->pass);
    return;
  }
  switch ( png_ptr->pass )
  {
    case 0u:
      if ( (png_ptr->row_number & 7) == 0 )
        goto LABEL_40;
      if ( dsp_row )
        png_combine_row(png_ptr, dsp_row, 1);
      break;
    case 1u:
      if ( (png_ptr->row_number & 7) == 0 && png_ptr->width >= 5 )
        goto LABEL_40;
      if ( dsp_row )
        png_combine_row(png_ptr, dsp_row, 1);
      break;
    case 2u:
      row_number = png_ptr->row_number;
      if ( (row_number & 7) == 4 )
        goto LABEL_40;
      if ( dsp_row && (row_number & 4) != 0 )
        png_combine_row(png_ptr, dsp_row, 1);
      break;
    case 3u:
      if ( (png_ptr->row_number & 3) == 0 && png_ptr->width >= 3 )
        goto LABEL_40;
      if ( dsp_row )
        png_combine_row(png_ptr, dsp_row, 1);
      break;
    case 4u:
      v10 = png_ptr->row_number;
      if ( (v10 & 3) == 2 )
        goto LABEL_40;
      if ( dsp_row && (v10 & 2) != 0 )
        png_combine_row(png_ptr, dsp_row, 1);
      break;
    case 5u:
      if ( (png_ptr->row_number & 1) == 0 && png_ptr->width >= 2 )
        goto LABEL_40;
      if ( dsp_row )
        png_combine_row(png_ptr, dsp_row, 1);
      break;
    default:
      if ( (png_ptr->row_number & 1) != 0 )
        goto LABEL_40;
      break;
  }
  png_read_finish_row(png_ptr);
}

void __fastcall png_read_update_info(png_struct_def *png_ptr, png_info_def *info_ptr)
{
  if ( png_ptr )
  {
    if ( (png_ptr->flags & 0x40) != 0 )
    {
      png_app_error(png_ptr, "png_read_update_info/png_start_read_image: duplicate call");
    }
    else
    {
      png_read_start_row(png_ptr);
      png_read_transform_info(png_ptr, info_ptr);
    }
  }
}

