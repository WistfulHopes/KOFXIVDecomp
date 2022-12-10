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

void png_write_sig(png_struct_def * png_ptr); // 0x140435D10
void png_write_chunk_header(png_struct_def * png_ptr, unsigned long chunk_name, unsigned long length); // 0x140433BF0
void png_write_chunk_data(png_struct_def * png_ptr, const unsigned char * data, unsigned long long length); // 0x140433B50
void png_write_chunk_end(png_struct_def * png_ptr); // 0x140433BA0
void png_write_complete_chunk(png_struct_def * png_ptr, unsigned long chunk_name, const unsigned char * data, unsigned long long length); // 0x140433CC0
void png_write_chunk(png_struct_def * png_ptr, const unsigned char * chunk_string, const unsigned char * data, unsigned long long length); // 0x140433B20
unsigned long long png_image_size(png_struct_def * png_ptr); // 0x140432FC0
void optimize_cmf(unsigned char * data, unsigned long long data_size); // 0x1404325F0
long png_deflate_claim(png_struct_def * png_ptr, unsigned long owner, unsigned long long data_size); // 0x140432A40
struct compression_state
{
	const unsigned char * input; // 0x0
	unsigned long long input_len; // 0x8
	unsigned long output_len; // 0x10
	unsigned char output[1024]; // 0x14
};
typedef char png_warning_parameters[32][8];
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
long png_text_compress(png_struct_def * png_ptr, unsigned long chunk_name, compression_state * comp, unsigned long prefix_len); // 0x140433150
void png_write_compressed_data_out(png_struct_def * png_ptr, compression_state * comp); // 0x140433D80
unsigned long png_check_keyword(png_struct_def * png_ptr, const char * key, unsigned char * new_key); // 0x140432690
void png_write_IHDR(png_struct_def * png_ptr, unsigned long width, unsigned long height, long bit_depth, long color_type, long compression_type, long filter_type, long interlace_type); // 0x140433370
void png_write_PLTE(png_struct_def * png_ptr, const png_color_struct * palette, unsigned long num_pal); // 0x1404336E0
void png_compress_IDAT(png_struct_def * png_ptr, const unsigned char * input, unsigned long long input_len, long flush); // 0x1404327C0
void png_write_IEND(png_struct_def * png_ptr); // 0x1404332F0
void png_write_gAMA_fixed(png_struct_def * png_ptr, long file_gamma); // 0x140434DD0
void png_write_sRGB(png_struct_def * png_ptr, long srgb_intent); // 0x140435C60
void png_write_iCCP(png_struct_def * png_ptr, const char * name, const unsigned char * profile); // 0x140434F60
void png_write_sPLT(png_struct_def * png_ptr, const png_sPLT_struct * spalette); // 0x140435A30
void png_write_sBIT(png_struct_def * png_ptr, const png_color_8_struct * sbit, long color_type); // 0x1404358A0
void png_write_cHRM_fixed(png_struct_def * png_ptr, const png_xy * xy); // 0x140433A00
void png_write_tRNS(png_struct_def * png_ptr, const unsigned char * trans_alpha, const png_color_16_struct * tran, long num_trans, long color_type); // 0x1404361B0
void png_write_bKGD(png_struct_def * png_ptr, const png_color_16_struct * back, long color_type); // 0x140433820
void png_write_hIST(png_struct_def * png_ptr, const unsigned short * hist, long num_hist); // 0x140434E80
void png_write_tEXt(png_struct_def * png_ptr, const char * key, const char * text, unsigned long long text_len); // 0x140435F20
void png_write_zTXt(png_struct_def * png_ptr, const char * key, const char * text, unsigned long long text_len, long compression); // 0x140436390
void png_write_iTXt(png_struct_def * png_ptr, long compression, const char * key, const char * lang, const char * lang_key, const char * text); // 0x140435100
void png_write_oFFs(png_struct_def * png_ptr, long x_offset, long y_offset, long unit_type); // 0x1404353B0
void png_write_pCAL(png_struct_def * png_ptr, char * purpose, long X0, long X1, long type, long nparams, const char * units, char * * params); // 0x1404354A0
void png_write_sCAL_s(png_struct_def * png_ptr, long unit, const char * width, const char * height); // 0x140435970
void png_write_pHYs(png_struct_def * png_ptr, unsigned long x_pixels_per_unit, unsigned long y_pixels_per_unit, long unit_type); // 0x140435770
void png_write_tIME(png_struct_def * png_ptr, const png_time_struct * mod_time); // 0x140436070
void png_write_start_row(png_struct_def * png_ptr); // 0x140435D90
void png_write_finish_row(png_struct_def * png_ptr); // 0x140434C30
void png_do_write_interlace(png_row_info_struct * row_info, unsigned char * row, long pass); // 0x140432D00
void png_write_find_filter(png_struct_def * png_ptr, png_row_info_struct * row_info); // 0x140433E30void __fastcall optimize_cmf(unsigned __int8 *data, unsigned __int64 data_size)
{
  unsigned int v4; // er8
  unsigned int v5; // er8
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // er8

  if ( data_size <= 0x4000 )
  {
    v4 = *data;
    if ( (*data & 0xF) == 8 && (v4 & 0xF0) <= 0x70 )
    {
      v5 = v4 >> 4;
      v6 = 1 << (v5 + 7);
      if ( data_size <= v6 )
      {
        do
        {
          v6 >>= 1;
          --v5;
        }
        while ( v5 && data_size <= v6 );
        v7 = data[1] & 0xE0;
        v8 = (16 * v5) | 8;
        *data = v8;
        data[1] = v7 - (v7 + (v8 << 8)) % 0x1Fu + 31;
      }
    }
  }
}

__int64 __fastcall png_check_keyword(png_struct_def *png_ptr, const char *key, unsigned __int8 *new_key)
{
  unsigned int v3; // ebx
  int v4; // edi
  const char *v6; // r10
  int v7; // er9
  unsigned __int8 v9; // cl
  int v10; // eax
  char p[8][32]; // [rsp+20h] [rbp-128h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = key;
  v7 = 1;
  if ( !key )
  {
    *new_key = 0;
    return 0i64;
  }
  v9 = *key;
  if ( *key )
  {
    do
    {
      if ( v3 >= 0x4F )
        break;
      ++key;
      if ( (unsigned __int8)(v9 - 33) <= 0x5Du || v9 >= 0xA1u )
      {
        *new_key = v9;
        ++v3;
        ++new_key;
        v7 = 0;
      }
      else if ( v7 )
      {
        if ( !v4 )
          v4 = v9;
      }
      else
      {
        *new_key = 32;
        ++v3;
        ++new_key;
        v10 = v9;
        v7 = 1;
        if ( v9 == 32 )
          v10 = v4;
        v4 = v10;
      }
      v9 = *key;
    }
    while ( *key );
    if ( v3 )
    {
      if ( v7 )
      {
        --v3;
        --new_key;
        if ( !v4 )
          v4 = 32;
      }
    }
  }
  *new_key = 0;
  if ( !v3 )
    return 0i64;
  if ( *key )
  {
    png_warning(png_ptr, "keyword truncated");
  }
  else if ( v4 )
  {
    png_warning_parameter(p, 1, v6);
    png_warning_parameter_signed(p, 2, 4, v4);
    png_formatted_warning(png_ptr, p, "keyword \"@1\": bad character '0x@2'");
  }
  return v3;
}

void __fastcall png_compress_IDAT(
        png_struct_def *png_ptr,
        const unsigned __int8 *input,
        unsigned __int64 input_len,
        int flush)
{
  png_compression_buffer *zbuffer_list; // rax
  png_compression_buffer *v9; // rax
  png_compression_buffer *next; // rdx
  png_compression_buffer *v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  int v16; // esi
  unsigned __int64 zbuffer_size; // r14
  unsigned __int8 *output; // rdi
  unsigned __int64 v19; // rax
  unsigned int v20; // esi
  png_compression_buffer *v21; // rdi
  unsigned __int64 v22; // rax

  if ( png_ptr->zowner != 1229209940 )
  {
    zbuffer_list = png_ptr->zbuffer_list;
    if ( zbuffer_list )
    {
      next = zbuffer_list->next;
      if ( zbuffer_list->next )
      {
        zbuffer_list->next = 0i64;
        do
        {
          v11 = next->next;
          png_free(png_ptr, next);
          next = v11;
        }
        while ( v11 );
      }
    }
    else
    {
      v9 = (png_compression_buffer *)png_malloc(png_ptr, png_ptr->zbuffer_size + 8i64);
      png_ptr->zbuffer_list = v9;
      v9->next = 0i64;
    }
    v12 = png_image_size(png_ptr);
    if ( png_deflate_claim(png_ptr, 0x49444154u, v12) )
      png_error(png_ptr, png_ptr->zstream.msg);
    png_ptr->zstream.next_out = png_ptr->zbuffer_list->output;
    png_ptr->zstream.avail_out = png_ptr->zbuffer_size;
  }
  png_ptr->zstream.next_in = (unsigned __int8 *)input;
  png_ptr->zstream.avail_in = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = 0xFFFFFFFFi64;
      v14 = (unsigned int)flush;
      if ( input_len < 0xFFFFFFFF )
        v13 = (unsigned int)input_len;
      v15 = input_len - v13;
      png_ptr->zstream.avail_in = v13;
      if ( v15 )
        v14 = 0i64;
      v16 = deflate(&png_ptr->zstream, v14);
      input_len = png_ptr->zstream.avail_in + v15;
      png_ptr->zstream.avail_in = 0;
      if ( !png_ptr->zstream.avail_out )
        break;
      if ( v16 )
        goto LABEL_25;
LABEL_22:
      if ( !input_len )
      {
        if ( flush == 4 )
          png_error(png_ptr, "Z_OK on Z_FINISH with output space");
        return;
      }
    }
    zbuffer_size = png_ptr->zbuffer_size;
    output = png_ptr->zbuffer_list->output;
    if ( (png_ptr->mode & 4) == 0 && !png_ptr->compression_type )
    {
      v19 = png_image_size(png_ptr);
      optimize_cmf(output, v19);
    }
    png_write_complete_chunk(png_ptr, 0x49444154u, output, zbuffer_size);
    png_ptr->mode |= 4u;
    png_ptr->zstream.next_out = output;
    png_ptr->zstream.avail_out = zbuffer_size;
    if ( v16 )
      break;
    if ( !flush )
      goto LABEL_22;
  }
LABEL_25:
  if ( v16 != 1 || flush != 4 )
  {
    png_zstream_error(png_ptr, v16);
    png_error(png_ptr, png_ptr->zstream.msg);
  }
  v20 = png_ptr->zbuffer_size - png_ptr->zstream.avail_out;
  v21 = png_ptr->zbuffer_list;
  if ( (png_ptr->mode & 4) == 0 && !png_ptr->compression_type )
  {
    v22 = png_image_size(png_ptr);
    optimize_cmf(v21->output, v22);
  }
  png_write_complete_chunk(png_ptr, 0x49444154u, v21->output, v20);
  png_ptr->mode |= 0xCu;
  png_ptr->zstream.avail_out = 0;
  png_ptr->zstream.next_out = 0i64;
  png_ptr->zowner = 0;
}

__int64 __fastcall png_deflate_claim(png_struct_def *png_ptr, unsigned int owner, unsigned __int64 data_size)
{
  unsigned int zowner; // ecx
  char v7; // al
  int zlib_window_bits; // edi
  int zlib_method; // er12
  int zlib_mem_level; // er13
  int zlib_level; // er15
  int zlib_strategy; // esi
  unsigned int i; // edx
  bool v15; // zf
  unsigned int v16; // edi
  char buffer[4]; // [rsp+40h] [rbp-78h] BYREF
  __int16 v18; // [rsp+44h] [rbp-74h]
  char v19; // [rsp+46h] [rbp-72h]
  char v20; // [rsp+47h] [rbp-71h]
  char v21; // [rsp+48h] [rbp-70h]
  char v22; // [rsp+49h] [rbp-6Fh]

  zowner = png_ptr->zowner;
  if ( zowner )
  {
    buffer[3] = owner;
    buffer[0] = HIBYTE(owner);
    buffer[1] = BYTE2(owner);
    buffer[2] = BYTE1(owner);
    v19 = HIBYTE(zowner);
    v20 = BYTE2(zowner);
    v7 = png_ptr->zowner;
    v21 = BYTE1(zowner);
    v22 = v7;
    v18 = 8250;
    png_safecat(buffer, 0x40ui64, 0xAui64, " using zstream");
    png_warning(png_ptr, buffer);
    if ( png_ptr->zowner == 1229209940 )
    {
      png_ptr->zstream.msg = "in use by IDAT";
      return 4294967294i64;
    }
    png_ptr->zowner = 0;
  }
  zlib_window_bits = png_ptr->zlib_window_bits;
  zlib_method = png_ptr->zlib_method;
  zlib_mem_level = png_ptr->zlib_mem_level;
  zlib_level = png_ptr->zlib_level;
  if ( owner == 1229209940 )
  {
    if ( (png_ptr->flags & 1) != 0 )
      zlib_strategy = png_ptr->zlib_strategy;
    else
      zlib_strategy = png_ptr->do_filter != 8;
  }
  else
  {
    zlib_level = png_ptr->zlib_text_level;
    zlib_method = png_ptr->zlib_text_method;
    zlib_window_bits = png_ptr->zlib_text_window_bits;
    zlib_mem_level = png_ptr->zlib_text_mem_level;
    zlib_strategy = png_ptr->zlib_text_strategy;
  }
  if ( data_size <= 0x4000 )
  {
    for ( i = 1 << (zlib_window_bits - 1); data_size + 262 <= i; --zlib_window_bits )
      i >>= 1;
  }
  if ( (png_ptr->flags & 2) != 0
    && (png_ptr->zlib_set_level != zlib_level
     || png_ptr->zlib_set_method != zlib_method
     || png_ptr->zlib_set_window_bits != zlib_window_bits
     || png_ptr->zlib_set_mem_level != zlib_mem_level
     || png_ptr->zlib_set_strategy != zlib_strategy) )
  {
    if ( (unsigned int)deflateEnd(&png_ptr->zstream) )
      png_warning(png_ptr, "deflateEnd failed (ignored)");
    png_ptr->flags &= ~2u;
  }
  v15 = (png_ptr->flags & 2) == 0;
  png_ptr->zstream.next_in = 0i64;
  png_ptr->zstream.avail_in = 0;
  png_ptr->zstream.next_out = 0i64;
  png_ptr->zstream.avail_out = 0;
  if ( v15 )
  {
    v16 = deflateInit2_(
            (int)png_ptr + 376,
            zlib_level,
            zlib_method,
            zlib_window_bits,
            zlib_mem_level,
            zlib_strategy,
            (__int64)"1.2.7",
            88);
    if ( v16 )
      goto LABEL_24;
    png_ptr->flags |= 2u;
LABEL_28:
    png_ptr->zowner = owner;
    return v16;
  }
  v16 = deflateReset();
  if ( !v16 )
    goto LABEL_28;
LABEL_24:
  png_zstream_error(png_ptr, v16);
  return v16;
}

void __fastcall png_do_write_interlace(png_row_info_struct *row_info, unsigned __int8 *row, int pass)
{
  __int64 v3; // rbx
  png_row_info_struct *v5; // r15
  int pixel_depth; // edx
  __int64 v7; // r12
  unsigned int v8; // er14
  unsigned __int8 *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v11; // ebx
  int v12; // er15
  unsigned __int8 *v13; // rdx
  unsigned int v14; // edi
  int v15; // er11
  unsigned int v16; // ecx
  unsigned __int8 *v17; // r10
  int v18; // er8
  unsigned int v19; // er9
  int v20; // ebx
  bool v21; // zf
  unsigned int v22; // edi
  unsigned int v23; // ecx
  int v24; // er8
  unsigned int v25; // er9
  int v26; // ebx
  unsigned int width; // edi
  unsigned int v28; // ecx
  unsigned int v29; // er9
  int v30; // er8
  int v31; // ebx
  __int64 v32; // rax
  unsigned __int8 v33; // dl

  v3 = pass;
  v5 = row_info;
  if ( pass < 6 )
  {
    pixel_depth = row_info->pixel_depth;
    v7 = pass;
    switch ( pixel_depth )
    {
      case 1:
        width = row_info->width;
        v15 = 0;
        v28 = png_pass_start_2[pass];
        v17 = row;
        v29 = v28;
        v30 = 7;
        if ( v28 >= width )
          goto LABEL_34;
        v31 = png_pass_inc_3[v3];
        do
        {
          v15 |= ((row[(unsigned __int64)v29 >> 3] >> (7 - (v29 & 7))) & 1) << v30;
          if ( v30 )
          {
            --v30;
          }
          else
          {
            *v17 = v15;
            v30 = 7;
            ++v17;
            v15 = 0;
          }
          v29 += v31;
        }
        while ( v29 < width );
        v21 = v30 == 7;
        break;
      case 2:
        v22 = row_info->width;
        v15 = 0;
        v23 = png_pass_start_2[pass];
        v17 = row;
        v24 = 6;
        v25 = png_pass_start_2[v3];
        if ( v23 >= v22 )
          goto LABEL_34;
        v26 = png_pass_inc_3[v3];
        do
        {
          v15 |= ((row[(unsigned __int64)v25 >> 2] >> (2 * (3 - (v25 & 3)))) & 3) << v24;
          if ( v24 )
          {
            v24 -= 2;
          }
          else
          {
            *v17 = v15;
            v24 = 6;
            ++v17;
            v15 = 0;
          }
          v25 += v26;
        }
        while ( v25 < v22 );
        v21 = v24 == 6;
        break;
      case 4:
        v14 = row_info->width;
        v15 = 0;
        v16 = png_pass_start_2[pass];
        v17 = row;
        v18 = 4;
        v19 = png_pass_start_2[v3];
        if ( v16 < v14 )
        {
          v20 = png_pass_inc_3[v3];
          do
          {
            v15 |= ((row[(unsigned __int64)v19 >> 1] >> (4 - 4 * (v19 & 1))) & 0xF) << v18;
            if ( v18 )
            {
              v18 -= 4;
            }
            else
            {
              *v17 = v15;
              v18 = 4;
              ++v17;
              v15 = 0;
            }
            v19 += v20;
          }
          while ( v19 < v14 );
          v21 = v18 == 4;
          break;
        }
LABEL_34:
        v32 = (png_pass_inc_3[v7] - png_pass_start_2[v7] + v5->width - 1) / png_pass_inc_3[v7];
        v33 = v5->pixel_depth;
        v5->width = v32;
        if ( v33 < 8u )
          v5->rowbytes = (v33 * (unsigned __int64)(unsigned int)v32 + 7) >> 3;
        else
          v5->rowbytes = v32 * ((unsigned __int64)v33 >> 3);
        return;
      default:
        v8 = row_info->width;
        v9 = row;
        v10 = (unsigned __int64)row_info->pixel_depth >> 3;
        v11 = png_pass_start_2[pass];
        if ( v11 < row_info->width )
        {
          v12 = png_pass_inc_3[pass];
          do
          {
            v13 = &row[v10 * v11];
            if ( v9 != v13 )
              memmove(v9, v13, v10);
            v9 += v10;
            v11 += v12;
          }
          while ( v11 < v8 );
          v5 = row_info;
        }
        goto LABEL_34;
    }
    if ( !v21 )
      *v17 = v15;
    goto LABEL_34;
  }
}

__int64 __fastcall png_image_size(png_struct_def *png_ptr)
{
  unsigned __int64 rowbytes; // rax
  __int64 height; // rbp
  unsigned __int64 pixel_depth; // rbx
  __int64 v4; // rsi
  int v5; // er8
  int i; // er9
  int v7; // er10
  int v8; // er11
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  int v11; // er10
  int v12; // er11

  rowbytes = png_ptr->rowbytes;
  height = png_ptr->height;
  if ( rowbytes >= 0x8000 || (unsigned int)height >= 0x8000 )
    return 0xFFFFFFFFi64;
  if ( !png_ptr->interlaced )
    return height * (rowbytes + 1);
  pixel_depth = png_ptr->pixel_depth;
  v4 = 0i64;
  v5 = 0;
  for ( i = 8; i >= 2; --i )
  {
    if ( v5 <= 1 )
      LOBYTE(v7) = 3;
    else
      v7 = (i - 1) >> 1;
    if ( v5 <= 1 )
      LOBYTE(v8) = 3;
    else
      v8 = (i - 1) >> 1;
    v9 = ((1 << v7) - (((v5 & 1) << (3 - ((v5 + 1) >> 1))) & 7) + png_ptr->width - 1) >> v8;
    if ( v9 )
    {
      if ( (unsigned int)pixel_depth < 8 )
        v10 = (pixel_depth * v9 + 7) >> 3;
      else
        v10 = v9 * (pixel_depth >> 3);
      if ( v5 <= 2 )
        LOBYTE(v11) = 3;
      else
        v11 = i >> 1;
      if ( v5 <= 2 )
        LOBYTE(v12) = 3;
      else
        v12 = i >> 1;
      v4 += (v10 + 1)
          * ((unsigned __int64)((1 << v11) - ((((v5 & 1) == 0) << (3 - (v5 >> 1))) & 7u) + (_DWORD)height - 1) >> v12);
    }
    ++v5;
  }
  return v4;
}

__int64 __fastcall png_text_compress(
        png_struct_def *png_ptr,
        unsigned int chunk_name,
        compression_state *comp,
        unsigned int prefix_len)
{
  __int64 result; // rax
  unsigned __int64 input_len; // rbp
  int v9; // esi
  png_compression_buffer **p_zbuffer_list; // r14
  unsigned int v11; // ecx
  png_compression_buffer *v12; // rax
  unsigned int zbuffer_size; // ecx
  __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned int v16; // esi

  result = png_deflate_claim(png_ptr, chunk_name, comp->input_len);
  if ( (_DWORD)result )
    return result;
  input_len = comp->input_len;
  v9 = 1024;
  png_ptr->zstream.next_in = (unsigned __int8 *)comp->input;
  p_zbuffer_list = &png_ptr->zbuffer_list;
  png_ptr->zstream.avail_in = 0;
  png_ptr->zstream.next_out = comp->output;
  png_ptr->zstream.avail_out = 1024;
  while ( 1 )
  {
    v11 = -1;
    if ( input_len < 0xFFFFFFFF )
      v11 = input_len;
    input_len -= v11;
    png_ptr->zstream.avail_in = v11;
    if ( png_ptr->zstream.avail_out )
      goto LABEL_11;
    if ( v9 + prefix_len > 0x7FFFFFFF )
      goto LABEL_15;
    v12 = *p_zbuffer_list;
    if ( !*p_zbuffer_list )
      break;
LABEL_10:
    p_zbuffer_list = &v12->next;
    png_ptr->zstream.next_out = v12->output;
    zbuffer_size = png_ptr->zbuffer_size;
    v9 += zbuffer_size;
    png_ptr->zstream.avail_out = zbuffer_size;
LABEL_11:
    v14 = 4i64;
    if ( input_len )
      v14 = 0i64;
    v15 = deflate(&png_ptr->zstream, v14);
    input_len += png_ptr->zstream.avail_in;
    png_ptr->zstream.avail_in = 0;
    if ( v15 )
      goto LABEL_16;
  }
  v12 = (png_compression_buffer *)png_malloc_base(png_ptr, png_ptr->zbuffer_size + 8i64);
  if ( v12 )
  {
    v12->next = 0i64;
    *p_zbuffer_list = v12;
    goto LABEL_10;
  }
LABEL_15:
  v15 = -4;
LABEL_16:
  v16 = v9 - png_ptr->zstream.avail_out;
  comp->output_len = v16;
  png_ptr->zstream.avail_out = 0;
  if ( v16 + prefix_len < 0x7FFFFFFF )
  {
    png_zstream_error(png_ptr, v15);
  }
  else
  {
    png_ptr->zstream.msg = "compressed data too long";
    v15 = -4;
  }
  png_ptr->zowner = 0;
  if ( v15 != 1 || input_len )
    return v15;
  optimize_cmf(comp->output, comp->input_len);
  return 0i64;
}

void __fastcall png_write_IEND(png_struct_def *png_ptr)
{
  unsigned int crc; // edx
  unsigned __int8 data; // [rsp+30h] [rbp+8h] BYREF
  char v4; // [rsp+31h] [rbp+9h]
  char v5; // [rsp+32h] [rbp+Ah]
  char v6; // [rsp+33h] [rbp+Bh]

  if ( png_ptr )
  {
    png_write_chunk_header(png_ptr, 0x49454E44u, 0);
    crc = png_ptr->crc;
    v6 = crc;
    data = HIBYTE(crc);
    v4 = BYTE2(crc);
    v5 = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, &data, 4ui64);
    png_ptr->mode |= 0x10u;
  }
  else
  {
    MEMORY[0x164] |= 0x10u;
  }
}

void __fastcall png_write_IHDR(
        png_struct_def *png_ptr,
        unsigned int width,
        unsigned int height,
        int bit_depth,
        int color_type,
        int compression_type,
        int filter_type,
        int interlace_type)
{
  __int64 v9; // r15
  unsigned __int8 v10; // di
  int v12; // eax
  int v13; // eax
  unsigned __int8 v14; // r14
  unsigned __int8 v15; // si
  unsigned __int8 v16; // dl
  unsigned __int8 channels; // r8
  unsigned __int8 v18; // cl
  unsigned __int64 v19; // rcx
  unsigned int crc; // ecx
  unsigned __int8 v21[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 data[16]; // [rsp+28h] [rbp-40h] BYREF

  v9 = width;
  v10 = bit_depth;
  if ( !color_type )
  {
    if ( (unsigned int)bit_depth > 0x10 || (v13 = 65814, !_bittest(&v13, bit_depth)) )
      png_error(png_ptr, "Invalid bit depth for grayscale image");
    goto LABEL_17;
  }
  if ( color_type != 2 )
  {
    if ( color_type != 3 )
    {
      if ( color_type == 4 )
      {
        if ( ((bit_depth - 8) & 0xFFFFFFF7) != 0 )
          png_error(png_ptr, "Invalid bit depth for grayscale+alpha image");
        png_ptr->channels = 2;
      }
      else
      {
        if ( color_type != 6 )
          png_error(png_ptr, "Invalid image color type specified");
        if ( ((bit_depth - 8) & 0xFFFFFFF7) != 0 )
          png_error(png_ptr, "Invalid bit depth for RGBA image");
        png_ptr->channels = 4;
      }
      goto LABEL_18;
    }
    if ( (unsigned int)bit_depth > 8 || (v12 = 278, !_bittest(&v12, bit_depth)) )
      png_error(png_ptr, "Invalid bit depth for paletted image");
LABEL_17:
    png_ptr->channels = 1;
    goto LABEL_18;
  }
  if ( ((bit_depth - 8) & 0xFFFFFFF7) != 0 )
    png_error(png_ptr, "Invalid bit depth for RGB image");
  png_ptr->channels = 3;
LABEL_18:
  v14 = compression_type;
  if ( compression_type )
  {
    png_warning(png_ptr, "Invalid compression type specified");
    v14 = 0;
  }
  v15 = filter_type;
  if ( ((png_ptr->mng_features_permitted & 4) == 0
     || (png_ptr->mode & 0x1000) != 0
     || ((color_type - 2) & 0xFFFFFFFB) != 0
     || filter_type != 64)
    && filter_type )
  {
    png_warning(png_ptr, "Invalid filter type specified");
    v15 = 0;
  }
  v16 = interlace_type;
  if ( (unsigned int)interlace_type > 1 )
  {
    png_warning(png_ptr, "Invalid interlace type specified");
    v16 = 1;
  }
  channels = png_ptr->channels;
  v18 = v10 * channels;
  png_ptr->bit_depth = v10;
  png_ptr->color_type = color_type;
  png_ptr->interlaced = v16;
  png_ptr->filter_type = v15;
  png_ptr->pixel_depth = v10 * channels;
  png_ptr->compression_type = v14;
  png_ptr->width = v9;
  png_ptr->height = height;
  if ( (unsigned __int8)(v10 * channels) < 8u )
    v19 = (v9 * (unsigned __int64)v18 + 7) >> 3;
  else
    v19 = v9 * ((unsigned __int64)v18 >> 3);
  png_ptr->rowbytes = v19;
  data[0] = BYTE3(v9);
  data[1] = BYTE2(v9);
  data[2] = BYTE1(v9);
  data[4] = HIBYTE(height);
  data[5] = BYTE2(height);
  png_ptr->usr_channels = channels;
  data[12] = v16;
  data[6] = BYTE1(height);
  png_ptr->usr_width = v9;
  png_ptr->usr_bit_depth = v10;
  data[3] = v9;
  data[7] = height;
  data[8] = v10;
  data[9] = color_type;
  data[10] = v14;
  data[11] = v15;
  png_write_chunk_header(png_ptr, 0x49484452u, 0xDu);
  png_write_data(png_ptr, data, 0xDui64);
  png_calculate_crc(png_ptr, data, 0xDui64);
  crc = png_ptr->crc;
  v21[3] = crc;
  v21[0] = HIBYTE(crc);
  v21[1] = BYTE2(crc);
  v21[2] = BYTE1(crc);
  png_ptr->io_state = 130;
  png_write_data(png_ptr, v21, 4ui64);
  if ( !png_ptr->do_filter )
  {
    if ( png_ptr->color_type == 3 || png_ptr->bit_depth < 8u )
      png_ptr->do_filter = 8;
    else
      png_ptr->do_filter = -8;
  }
  png_ptr->mode = 1;
}

void __fastcall png_write_PLTE(png_struct_def *png_ptr, const png_color_struct *palette, unsigned int num_pal)
{
  __int64 v4; // rsi
  const char *v6; // rdx
  unsigned __int8 *p_blue; // rdi
  unsigned int crc; // ecx
  unsigned __int8 data; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+31h] [rbp+9h]
  unsigned __int8 v11; // [rsp+32h] [rbp+Ah]
  unsigned __int8 v12; // [rsp+48h] [rbp+20h] BYREF
  char v13; // [rsp+49h] [rbp+21h]
  char v14; // [rsp+4Ah] [rbp+22h]
  char v15; // [rsp+4Bh] [rbp+23h]

  v4 = num_pal;
  if ( (png_ptr->mng_features_permitted & 1) == 0 && !num_pal || num_pal > 0x100 )
  {
    v6 = "Invalid number of colors in palette";
    if ( png_ptr->color_type == 3 )
      png_error(png_ptr, "Invalid number of colors in palette");
    goto LABEL_8;
  }
  if ( (png_ptr->color_type & 2) == 0 )
  {
    v6 = "Ignoring request to write a PLTE chunk in grayscale PNG";
LABEL_8:
    png_warning(png_ptr, v6);
    return;
  }
  png_ptr->num_palette = num_pal;
  png_write_chunk_header(png_ptr, 0x504C5445u, 3 * num_pal);
  if ( (_DWORD)v4 )
  {
    p_blue = &palette->blue;
    do
    {
      data = *(p_blue - 2);
      v10 = *(p_blue - 1);
      v11 = *p_blue;
      png_write_data(png_ptr, &data, 3ui64);
      png_calculate_crc(png_ptr, &data, 3ui64);
      p_blue += 3;
      --v4;
    }
    while ( v4 );
  }
  crc = png_ptr->crc;
  v15 = crc;
  v12 = HIBYTE(crc);
  v13 = BYTE2(crc);
  v14 = BYTE1(crc);
  png_ptr->io_state = 130;
  png_write_data(png_ptr, &v12, 4ui64);
  png_ptr->mode |= 2u;
}

void __fastcall png_write_bKGD(png_struct_def *png_ptr, const png_color_16_struct *back, int color_type)
{
  unsigned __int16 num_palette; // cx
  unsigned __int64 v5; // r8
  unsigned int red; // er8
  unsigned int v7; // er8
  int green_high; // er9
  unsigned __int16 blue; // ax
  bool v10; // zf
  unsigned __int16 gray; // kr00_2
  unsigned int crc; // ecx
  unsigned __int8 v13[4]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 data; // [rsp+24h] [rbp-1Ch] BYREF
  char v15; // [rsp+25h] [rbp-1Bh]
  char v16; // [rsp+26h] [rbp-1Ah]
  char green; // [rsp+27h] [rbp-19h]
  char v18; // [rsp+28h] [rbp-18h]
  char v19; // [rsp+29h] [rbp-17h]

  if ( color_type == 3 )
  {
    num_palette = png_ptr->num_palette;
    if ( (num_palette || (png_ptr->mng_features_permitted & 1) == 0) && back->index >= num_palette )
    {
      png_warning(png_ptr, "Invalid background palette index");
      return;
    }
    data = back->index;
    png_write_chunk_header(png_ptr, 0x624B4744u, 1u);
    png_write_data(png_ptr, &data, 1ui64);
    v5 = 1i64;
  }
  else if ( (color_type & 2) != 0 )
  {
    red = back->red;
    v15 = back->red;
    v7 = red >> 8;
    green_high = HIBYTE(back->green);
    green = back->green;
    blue = back->blue;
    data = v7;
    v10 = png_ptr->bit_depth == 8;
    v16 = green_high;
    v18 = HIBYTE(blue);
    v19 = blue;
    if ( v10 && (unsigned __int8)v7 | (unsigned __int8)(green_high | HIBYTE(blue)) )
    {
      png_warning(png_ptr, "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
      return;
    }
    png_write_chunk_header(png_ptr, 0x624B4744u, 6u);
    png_write_data(png_ptr, &data, 6ui64);
    v5 = 6i64;
  }
  else
  {
    if ( back->gray >= 1 << png_ptr->bit_depth )
    {
      png_warning(png_ptr, "Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
      return;
    }
    gray = back->gray;
    data = HIBYTE(gray);
    v15 = gray;
    png_write_chunk_header(png_ptr, 0x624B4744u, 2u);
    png_write_data(png_ptr, &data, 2ui64);
    v5 = 2i64;
  }
  png_calculate_crc(png_ptr, &data, v5);
  crc = png_ptr->crc;
  v13[3] = crc;
  v13[0] = HIBYTE(crc);
  v13[1] = BYTE2(crc);
  v13[2] = BYTE1(crc);
  png_ptr->io_state = 130;
  png_write_data(png_ptr, v13, 4ui64);
}

void __fastcall png_write_cHRM_fixed(png_struct_def *png_ptr, const png_xy *xy)
{
  unsigned int crc; // edx
  unsigned __int8 data[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 buf[4]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int8 v7[4]; // [rsp+2Ch] [rbp-2Ch] BYREF
  unsigned __int8 v8[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v9[4]; // [rsp+34h] [rbp-24h] BYREF
  unsigned __int8 v10[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v11[4]; // [rsp+3Ch] [rbp-1Ch] BYREF
  unsigned __int8 v12[4]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v13[4]; // [rsp+44h] [rbp-14h] BYREF

  png_save_int_32(buf, xy->whitex);
  png_save_int_32(v7, xy->whitey);
  png_save_int_32(v8, xy->redx);
  png_save_int_32(v9, xy->redy);
  png_save_int_32(v10, xy->greenx);
  png_save_int_32(v11, xy->greeny);
  png_save_int_32(v12, xy->bluex);
  png_save_int_32(v13, xy->bluey);
  if ( png_ptr )
  {
    png_write_chunk_header(png_ptr, 0x6348524Du, 0x20u);
    png_write_data(png_ptr, buf, 0x20ui64);
    png_calculate_crc(png_ptr, buf, 0x20ui64);
    crc = png_ptr->crc;
    data[3] = crc;
    data[0] = HIBYTE(crc);
    data[1] = BYTE2(crc);
    data[2] = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, data, 4ui64);
  }
}

void __fastcall png_write_chunk(
        png_struct_def *png_ptr,
        const unsigned __int8 *chunk_string,
        const unsigned __int8 *data,
        unsigned __int64 length)
{
  png_write_complete_chunk(
    png_ptr,
    ((chunk_string[2] | ((chunk_string[1] | (*chunk_string << 8)) << 8)) << 8) | chunk_string[3],
    data,
    length);
}

void __fastcall png_write_chunk_data(png_struct_def *png_ptr, const unsigned __int8 *data, unsigned __int64 length)
{
  if ( png_ptr && data )
  {
    if ( length )
    {
      png_write_data(png_ptr, data, length);
      png_calculate_crc(png_ptr, data, length);
    }
  }
}

void __fastcall png_write_chunk_end(png_struct_def *png_ptr)
{
  unsigned int crc; // edx
  unsigned __int8 data; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+31h] [rbp+9h]
  char v4; // [rsp+32h] [rbp+Ah]
  char v5; // [rsp+33h] [rbp+Bh]

  if ( png_ptr )
  {
    crc = png_ptr->crc;
    v5 = crc;
    data = HIBYTE(crc);
    v3 = BYTE2(crc);
    v4 = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, &data, 4ui64);
  }
}

void __fastcall png_write_chunk_header(png_struct_def *png_ptr, unsigned int chunk_name, unsigned int length)
{
  unsigned __int8 data[4]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 ptr[4]; // [rsp+24h] [rbp-14h] BYREF

  if ( png_ptr )
  {
    data[3] = length;
    data[0] = HIBYTE(length);
    png_ptr->io_state = 34;
    data[1] = BYTE2(length);
    data[2] = BYTE1(length);
    ptr[0] = HIBYTE(chunk_name);
    ptr[1] = BYTE2(chunk_name);
    ptr[2] = BYTE1(chunk_name);
    ptr[3] = chunk_name;
    png_write_data(png_ptr, data, 8ui64);
    png_ptr->chunk_name = chunk_name;
    png_reset_crc(png_ptr);
    png_calculate_crc(png_ptr, ptr, 4ui64);
    png_ptr->io_state = 66;
  }
}

void __fastcall png_write_complete_chunk(
        png_struct_def *png_ptr,
        unsigned int chunk_name,
        const unsigned __int8 *data,
        unsigned __int64 length)
{
  unsigned int crc; // ecx
  unsigned __int8 dataa; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+31h] [rbp+9h]
  char v10; // [rsp+32h] [rbp+Ah]
  char v11; // [rsp+33h] [rbp+Bh]

  if ( png_ptr )
  {
    if ( length > 0x7FFFFFFF )
      png_error(png_ptr, "length exceeds PNG maxima");
    png_write_chunk_header(png_ptr, chunk_name, length);
    if ( data )
    {
      if ( length )
      {
        png_write_data(png_ptr, data, length);
        png_calculate_crc(png_ptr, data, length);
      }
    }
    crc = png_ptr->crc;
    v11 = crc;
    dataa = HIBYTE(crc);
    v9 = BYTE2(crc);
    v10 = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, &dataa, 4ui64);
  }
}

void __fastcall png_write_compressed_data_out(png_struct_def *png_ptr, compression_state *comp)
{
  unsigned int output_len; // esi
  unsigned __int8 *output; // rbp
  png_compression_buffer *zbuffer_list; // rdi
  unsigned int zbuffer_size; // ebx

  output_len = comp->output_len;
  output = comp->output;
  zbuffer_list = png_ptr->zbuffer_list;
  zbuffer_size = 1024;
  while ( 1 )
  {
    if ( zbuffer_size > output_len )
      zbuffer_size = output_len;
    if ( output && zbuffer_size )
    {
      png_write_data(png_ptr, output, zbuffer_size);
      png_calculate_crc(png_ptr, output, zbuffer_size);
    }
    output_len -= zbuffer_size;
    if ( !output_len || !zbuffer_list )
      break;
    zbuffer_size = png_ptr->zbuffer_size;
    output = zbuffer_list->output;
    zbuffer_list = zbuffer_list->next;
  }
  if ( output_len )
    png_error(png_ptr, "error writing ancillary chunked compressed data");
}

void __fastcall png_write_find_filter(png_struct_def *png_ptr, png_row_info_struct *row_info)
{
  unsigned __int8 *row_buf; // r13
  unsigned __int64 v3; // r11
  unsigned int v4; // ebp
  signed __int8 do_filter; // si
  unsigned __int8 *prev_row; // rdi
  signed __int64 num_prev_filters; // r15
  unsigned __int8 *v9; // r12
  unsigned __int64 rowbytes; // r14
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned int v14; // er9
  unsigned int v15; // er8
  signed __int64 i; // rdx
  int v17; // ecx
  unsigned int v18; // eax
  const __m128i *v19; // r8
  const __m128i *v20; // rdx
  __m128i *v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // r9
  char v24; // al
  unsigned __int64 v25; // r10
  char *v26; // rdi
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  signed __int64 v29; // r8
  signed __int64 v30; // rdx
  unsigned __int64 v31; // r10
  unsigned __int8 v32; // r12
  unsigned int v33; // edx
  unsigned int v34; // er10
  unsigned int v35; // edi
  unsigned int v36; // er9
  signed __int64 m; // r8
  int v38; // ecx
  unsigned int v39; // eax
  unsigned __int8 heuristic_method; // r13
  unsigned int v41; // edx
  unsigned int v42; // edi
  unsigned int v43; // er10
  unsigned int v44; // er9
  signed __int64 j; // r8
  int v46; // ecx
  unsigned int v47; // eax
  __int64 v48; // rsi
  unsigned __int8 *v49; // r12
  unsigned __int8 *v50; // r8
  unsigned __int8 *v51; // r10
  unsigned __int64 v52; // r9
  unsigned int v53; // ecx
  __int64 v54; // r12
  __int64 v55; // r10
  unsigned int v56; // ecx
  unsigned int v57; // er9
  unsigned int v58; // er8
  signed __int64 k; // rdx
  int v60; // ecx
  unsigned int v61; // eax
  const __m128i *v62; // rdx
  const __m128i *v63; // r8
  __m128i *v64; // rcx
  unsigned __int64 v65; // r10
  unsigned __int8 *v66; // r9
  __m128i v67; // xmm1
  __m128i v68; // xmm0
  signed __int64 v69; // r8
  signed __int64 v70; // rdx
  unsigned __int64 v71; // r9
  unsigned __int8 *up_row; // r13
  unsigned __int64 v73; // r9
  unsigned __int8 *v74; // rdi
  _BYTE *v75; // r8
  unsigned __int8 *v76; // rsi
  unsigned __int8 v77; // al
  unsigned int v78; // ecx
  int v79; // eax
  unsigned int v80; // er9
  unsigned int v81; // er8
  signed __int64 n; // rdx
  int v83; // ecx
  unsigned int v84; // eax
  unsigned __int8 *avg_row; // r13
  char *v86; // r8
  unsigned __int8 *v87; // rdx
  _BYTE *v88; // r9
  __int64 v89; // r10
  unsigned __int8 v90; // cl
  char v91; // al
  __int64 v92; // rdi
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // eax
  int v96; // ecx
  unsigned int v97; // edx
  unsigned int v98; // esi
  unsigned int v99; // er10
  unsigned int v100; // er9
  signed __int64 ii; // r8
  int v102; // ecx
  unsigned int v103; // eax
  char *v104; // r13
  unsigned __int8 *v105; // rdi
  __int64 v106; // r12
  unsigned __int8 *v107; // r8
  char *v108; // r10
  unsigned __int64 v109; // r9
  unsigned __int8 v110; // cl
  char v111; // al
  unsigned int v112; // ecx
  __int64 v113; // r13
  __int64 v114; // r10
  signed __int64 v115; // rdi
  int v116; // eax
  int v117; // ecx
  unsigned int v118; // ecx
  unsigned int v119; // er9
  unsigned int v120; // er8
  signed __int64 jj; // rdx
  int v122; // ecx
  unsigned int v123; // eax
  unsigned __int8 *v124; // rdx
  char *v125; // r12
  const __m128i *v126; // r9
  __m128i *v127; // r10
  const __m128i *v128; // rdi
  unsigned __int8 *v129; // rdx
  __m128i v130; // xmm1
  __m128i v131; // xmm0
  unsigned __int64 v132; // rcx
  char v133; // al
  char v134; // al
  signed __int64 v135; // rdi
  signed __int64 v136; // r10
  unsigned __int64 v137; // r14
  int v138; // er13
  int v139; // er8
  int v140; // er11
  int v141; // er8
  signed int v142; // esi
  signed int v143; // ebp
  signed int v144; // eax
  unsigned int v145; // er9
  unsigned int v146; // er12
  unsigned int v147; // er10
  unsigned int v148; // er8
  signed __int64 kk; // rdx
  int v150; // ecx
  unsigned int v151; // eax
  unsigned __int8 *v152; // rax
  unsigned __int64 v153; // rsi
  unsigned __int8 *paeth_row; // rdi
  unsigned __int8 *v155; // rcx
  __int64 v156; // rdx
  char *v157; // r10
  _BYTE *v158; // rbp
  _BYTE *v159; // r13
  char v160; // al
  unsigned __int8 v161; // al
  unsigned int v162; // ecx
  int v163; // eax
  unsigned __int8 *v164; // r15
  _BYTE *v165; // r13
  signed __int64 v166; // r11
  __int64 v167; // rbp
  int v168; // eax
  int v169; // ecx
  int v170; // edi
  int v171; // er8
  signed int v172; // ecx
  signed int v173; // eax
  unsigned int v174; // ecx
  unsigned int v175; // er8
  unsigned int v176; // edx
  int v177; // ecx
  unsigned int v178; // eax
  unsigned __int8 *v179; // rcx
  unsigned int flush_dist; // eax
  int v181; // edx
  unsigned __int8 *prev_filters; // r8
  _BYTE *v183; // rcx
  __int64 v184; // r8
  char v185; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v186; // [rsp+28h] [rbp-60h]
  char v187; // [rsp+28h] [rbp-60h]
  unsigned __int8 *sub_row; // [rsp+30h] [rbp-58h]
  unsigned __int8 *v189; // [rsp+30h] [rbp-58h]
  signed __int64 v190; // [rsp+38h] [rbp-50h]
  unsigned int v191; // [rsp+90h] [rbp+8h]
  char v192; // [rsp+90h] [rbp+8h]
  unsigned int v194; // [rsp+A0h] [rbp+18h]
  unsigned __int8 *v195; // [rsp+A8h] [rbp+20h]
  signed int v196; // [rsp+A8h] [rbp+20h]

  row_buf = png_ptr->row_buf;
  v3 = 0i64;
  v4 = 0x7FFFFFFF;
  do_filter = png_ptr->do_filter;
  prev_row = png_ptr->prev_row;
  num_prev_filters = png_ptr->num_prev_filters;
  v9 = row_buf;
  rowbytes = row_info->rowbytes;
  v11 = ((unsigned int)row_info->pixel_depth + 7) >> 3;
  v194 = v11;
  v186 = prev_row;
  sub_row = row_buf;
  v195 = row_buf;
  v191 = 0x7FFFFFFF;
  v190 = num_prev_filters;
  if ( (do_filter & 8) != 0 && do_filter != 8 )
  {
    v191 = 0;
    v4 = 0;
    v12 = 0i64;
    if ( rowbytes )
    {
      do
      {
        v13 = row_buf[v12 + 1];
        if ( v13 >= 0x80 )
          v13 = 256 - v13;
        ++v12;
        v4 += v13;
      }
      while ( v12 < rowbytes );
      v191 = v4;
    }
    if ( png_ptr->heuristic_method == 2 )
    {
      v14 = (unsigned __int16)v4;
      v15 = (v4 >> 10) & 0x3FFFC0;
      if ( num_prev_filters )
      {
        for ( i = 0i64; i < num_prev_filters; ++i )
        {
          if ( !png_ptr->prev_filters[i] )
          {
            v17 = png_ptr->filter_weights[i];
            v14 = (v17 * v14) >> 8;
            v15 = (v17 * v15) >> 8;
          }
        }
      }
      v18 = (v15 * *png_ptr->filter_costs) >> 3;
      if ( v18 <= 0x3FFFC0 )
        v4 = (v18 << 10) + ((v14 * *png_ptr->filter_costs) >> 3);
      else
        v4 = 0x7FFFFFFF;
      v191 = v4;
    }
    v11 = v194;
  }
  if ( do_filter == 16 )
  {
    v19 = (const __m128i *)(row_buf + 1);
    sub_row = png_ptr->sub_row;
    v20 = (const __m128i *)(row_buf + 1);
    v21 = (__m128i *)(sub_row + 1);
    v22 = v11;
    v23 = 0i64;
    if ( v11 )
    {
      v23 = v11;
      do
      {
        v24 = v20->m128i_i8[0];
        v20 = (const __m128i *)((char *)v20 + 1);
        v21->m128i_i8[0] = v24;
        v21 = (__m128i *)((char *)v21 + 1);
        --v22;
      }
      while ( v22 );
    }
    v25 = rowbytes - v23;
    if ( v23 < rowbytes )
    {
      if ( v25 >= 0x20 )
      {
        v26 = &v21->m128i_i8[rowbytes - 1];
        if ( (&v21->m128i_i8[v23] > (char *)&row_buf[rowbytes] || v26 < &v19->m128i_i8[v23])
          && (&v21->m128i_i8[v23] > &v20->m128i_i8[rowbytes - 1] || v26 < &v20->m128i_i8[v23]) )
        {
          do
          {
            v23 += 32i64;
            *v21 = _mm_sub_epi8(_mm_loadu_si128(v20), _mm_loadu_si128(v19));
            v27 = _mm_loadu_si128(v20 + 1);
            v20 += 2;
            v28 = _mm_loadu_si128(v19 + 1);
            v19 += 2;
            v21[1] = _mm_sub_epi8(v27, v28);
            v21 += 2;
          }
          while ( v23 < rowbytes - (v25 & 0x1F) );
        }
        do_filter = png_ptr->do_filter;
      }
      if ( v23 < rowbytes )
      {
        v29 = (char *)v19 - (char *)v21;
        v30 = (char *)v20 - (char *)v21;
        v31 = rowbytes - v23;
        do
        {
          v21->m128i_i8[0] = v21->m128i_i8[v30] - v21->m128i_i8[v29];
          v21 = (__m128i *)((char *)v21 + 1);
          --v31;
        }
        while ( v31 );
      }
    }
  }
  else
  {
    if ( (do_filter & 0x10) != 0 )
    {
      heuristic_method = png_ptr->heuristic_method;
      v41 = 0;
      v42 = v4;
      if ( heuristic_method == 2 )
      {
        v43 = (unsigned __int16)v4;
        v44 = (v4 >> 10) & 0x3FFFC0;
        if ( num_prev_filters )
        {
          for ( j = 0i64; j < num_prev_filters; ++j )
          {
            if ( png_ptr->prev_filters[j] == 1 )
            {
              v46 = png_ptr->inv_filter_weights[j];
              v43 = (v46 * v43) >> 8;
              v44 = (v46 * v44) >> 8;
            }
          }
        }
        v47 = (v44 * png_ptr->inv_filter_costs[1]) >> 3;
        if ( v47 <= 0x3FFFC0 )
          v42 = (v47 << 10) + ((v43 * png_ptr->inv_filter_costs[1]) >> 3);
        else
          v42 = 0x7FFFFFFF;
      }
      v48 = v194;
      v49 = v9 + 1;
      v50 = png_ptr->sub_row + 1;
      v51 = v49;
      v52 = 0i64;
      if ( v194 )
      {
        v52 = v194;
        do
        {
          v53 = *v51;
          *v50 = v53;
          if ( v53 >= 0x80 )
            v53 = 256 - v53;
          ++v51;
          v41 += v53;
          ++v50;
          --v48;
        }
        while ( v48 );
      }
      if ( v52 < rowbytes )
      {
        v54 = v49 - v50;
        v55 = v51 - v50;
        do
        {
          v56 = (unsigned __int8)(v50[v55] - v50[v54]);
          *v50 = v56;
          if ( v56 >= 0x80 )
            v56 = 256 - v56;
          v41 += v56;
          if ( v41 > v42 )
            break;
          ++v50;
          ++v52;
        }
        while ( v52 < rowbytes );
      }
      if ( heuristic_method == 2 )
      {
        v57 = (unsigned __int16)v41;
        v58 = (v41 >> 10) & 0x3FFFC0;
        if ( num_prev_filters )
        {
          for ( k = 0i64; k < num_prev_filters; ++k )
          {
            if ( png_ptr->prev_filters[k] == 1 )
            {
              v60 = png_ptr->inv_filter_weights[k];
              v57 = (v60 * v57) >> 8;
              v58 = (v60 * v58) >> 8;
            }
          }
        }
        v61 = (v58 * png_ptr->inv_filter_costs[1]) >> 3;
        if ( v61 <= 0x3FFFC0 )
          v41 = (v61 << 10) + ((v57 * png_ptr->inv_filter_costs[1]) >> 3);
        else
          v41 = 0x7FFFFFFF;
      }
      do_filter = png_ptr->do_filter;
      v9 = v195;
      prev_row = png_ptr->prev_row;
      if ( v41 < v4 )
      {
        v4 = v41;
        sub_row = png_ptr->sub_row;
        v191 = v41;
      }
    }
    if ( do_filter == 32 )
    {
      v62 = (const __m128i *)(v9 + 1);
      sub_row = png_ptr->up_row;
      v63 = (const __m128i *)(prev_row + 1);
      v64 = (__m128i *)(sub_row + 1);
      v65 = 0i64;
      if ( rowbytes )
      {
        if ( rowbytes >= 0x20 )
        {
          v66 = &sub_row[rowbytes];
          if ( (v64 > (__m128i *)&prev_row[rowbytes] || v66 < (unsigned __int8 *)v63)
            && (v64 > (__m128i *)&v9[rowbytes] || v66 < (unsigned __int8 *)v62) )
          {
            do
            {
              v65 += 32i64;
              *v64 = _mm_sub_epi8(_mm_loadu_si128(v62), _mm_loadu_si128(v63));
              v67 = _mm_loadu_si128(v62 + 1);
              v62 += 2;
              v68 = _mm_loadu_si128(v63 + 1);
              v63 += 2;
              v64[1] = _mm_sub_epi8(v67, v68);
              v64 += 2;
            }
            while ( v65 < (rowbytes & 0xFFFFFFFFFFFFFFE0ui64) );
          }
        }
        if ( v65 < rowbytes )
        {
          v69 = (char *)v63 - (char *)v64;
          v70 = (char *)v62 - (char *)v64;
          v71 = rowbytes - v65;
          do
          {
            v64->m128i_i8[0] = v64->m128i_i8[v70] - v64->m128i_i8[v69];
            v64 = (__m128i *)((char *)v64 + 1);
            --v71;
          }
          while ( v71 );
        }
      }
      goto LABEL_115;
    }
  }
  if ( (do_filter & 0x20) != 0 )
  {
    v32 = png_ptr->heuristic_method;
    v33 = 0;
    v34 = v4;
    if ( v32 == 2 )
    {
      v35 = (unsigned __int16)v4;
      v36 = (v4 >> 10) & 0x3FFFC0;
      if ( num_prev_filters )
      {
        for ( m = 0i64; m < num_prev_filters; ++m )
        {
          if ( png_ptr->prev_filters[m] == 2 )
          {
            v38 = png_ptr->inv_filter_weights[m];
            v35 = (v38 * v35) >> 8;
            v36 = (v38 * v36) >> 8;
          }
        }
      }
      v39 = (v36 * png_ptr->inv_filter_costs[2]) >> 3;
      if ( v39 <= 0x3FFFC0 )
        v34 = (v39 << 10) + ((v35 * png_ptr->inv_filter_costs[2]) >> 3);
      else
        v34 = 0x7FFFFFFF;
    }
    up_row = png_ptr->up_row;
    v73 = 0i64;
    v74 = up_row + 1;
    if ( rowbytes )
    {
      v75 = v195 + 1;
      v76 = (unsigned __int8 *)(png_ptr->prev_row - v195);
      do
      {
        ++v74;
        v77 = *v75 - v75[(_QWORD)v76];
        ++v75;
        v78 = v77;
        v79 = 256 - v77;
        *(v74 - 1) = v78;
        if ( v78 >= 0x80 )
          v78 = v79;
        v33 += v78;
        if ( v33 > v34 )
          break;
        ++v73;
      }
      while ( v73 < rowbytes );
      do_filter = png_ptr->do_filter;
    }
    if ( v32 == 2 )
    {
      v80 = (unsigned __int16)v33;
      v81 = (v33 >> 10) & 0x3FFFC0;
      if ( num_prev_filters )
      {
        for ( n = 0i64; n < num_prev_filters; ++n )
        {
          if ( png_ptr->prev_filters[n] == 2 )
          {
            v83 = png_ptr->filter_weights[n];
            v80 = (v83 * v80) >> 8;
            v81 = (v83 * v81) >> 8;
          }
        }
      }
      v84 = (v81 * png_ptr->filter_costs[2]) >> 3;
      if ( v84 <= 0x3FFFC0 )
        v33 = (v84 << 10) + ((v80 * png_ptr->filter_costs[2]) >> 3);
      else
        v33 = 0x7FFFFFFF;
    }
    if ( v33 < v4 )
    {
      v4 = v33;
      v191 = v33;
      sub_row = up_row;
    }
  }
  if ( do_filter == 64 )
  {
    avg_row = png_ptr->avg_row;
    v86 = (char *)(v195 + 1);
    v87 = png_ptr->prev_row + 1;
    v88 = avg_row + 1;
    if ( v194 )
    {
      v89 = v194;
      LODWORD(v3) = v194;
      do
      {
        v90 = *v87++;
        v91 = *v86++;
        *v88++ = v91 - (v90 >> 1);
        --v89;
      }
      while ( v89 );
    }
    if ( (unsigned int)v3 < rowbytes )
    {
      v92 = v195 + 1 - v87;
      v93 = v86 - (char *)v87;
      v94 = v88 - v87;
      do
      {
        v95 = *v87;
        LODWORD(v3) = v3 + 1;
        v96 = (v87++)[v92];
        v87[v94 - 1] = v87[v93 - 1] - ((unsigned int)(v95 + v96) >> 1);
      }
      while ( (unsigned int)v3 < rowbytes );
    }
    goto LABEL_205;
  }
  v9 = v195;
  if ( (do_filter & 0x40) == 0 )
    goto LABEL_147;
LABEL_115:
  v97 = 0;
  v98 = v4;
  if ( png_ptr->heuristic_method == 2 )
  {
    v99 = (unsigned __int16)v4;
    v100 = (v4 >> 10) & 0x3FFFC0;
    if ( num_prev_filters )
    {
      for ( ii = 0i64; ii < num_prev_filters; ++ii )
      {
        if ( png_ptr->prev_filters[ii] == 3 )
        {
          v102 = png_ptr->inv_filter_weights[ii];
          v99 = (v102 * v99) >> 8;
          v100 = (v102 * v100) >> 8;
        }
      }
    }
    v103 = (v100 * png_ptr->inv_filter_costs[3]) >> 3;
    if ( v103 <= 0x3FFFC0 )
      v98 = (v103 << 10) + ((v99 * png_ptr->inv_filter_costs[3]) >> 3);
    else
      v98 = 0x7FFFFFFF;
  }
  v104 = (char *)(v9 + 1);
  v105 = png_ptr->avg_row + 1;
  v106 = v194;
  v107 = png_ptr->prev_row + 1;
  v108 = v104;
  v109 = 0i64;
  if ( v194 )
  {
    v109 = v194;
    do
    {
      v110 = *v107++;
      v111 = *v108++;
      v112 = (unsigned __int8)(v111 - (v110 >> 1));
      *v105++ = v112;
      if ( v112 >= 0x80 )
        v112 = 256 - v112;
      v97 += v112;
      --v106;
    }
    while ( v106 );
  }
  if ( v109 < rowbytes )
  {
    v113 = v104 - (char *)v107;
    v114 = v108 - (char *)v107;
    v115 = v105 - v107;
    do
    {
      v116 = *v107;
      v117 = v107[v113];
      ++v107;
      v118 = (unsigned __int8)(v107[v114 - 1] - ((unsigned int)(v116 + v117) >> 1));
      v107[v115 - 1] = v118;
      if ( v118 >= 0x80 )
        v118 = 256 - v118;
      v97 += v118;
      if ( v97 > v98 )
        break;
      ++v109;
    }
    while ( v109 < rowbytes );
  }
  if ( png_ptr->heuristic_method == 2 )
  {
    v119 = (unsigned __int16)v97;
    v120 = (v97 >> 10) & 0x3FFFC0;
    if ( num_prev_filters )
    {
      for ( jj = 0i64; jj < num_prev_filters; ++jj )
      {
        if ( !png_ptr->prev_filters[jj] )
        {
          v122 = png_ptr->filter_weights[jj];
          v119 = (v122 * v119) >> 8;
          v120 = (v122 * v120) >> 8;
        }
      }
    }
    v123 = (v120 * png_ptr->filter_costs[3]) >> 3;
    if ( v123 <= 0x3FFFC0 )
      v97 = (v123 << 10) + ((v119 * png_ptr->filter_costs[3]) >> 3);
    else
      v97 = 0x7FFFFFFF;
  }
  do_filter = png_ptr->do_filter;
  if ( v97 < v4 )
  {
    avg_row = png_ptr->avg_row;
    v4 = v97;
    sub_row = avg_row;
    v191 = v97;
  }
  else
  {
LABEL_147:
    avg_row = sub_row;
  }
  if ( do_filter == (signed __int8)0x80 )
  {
    avg_row = png_ptr->paeth_row;
    v124 = v186;
    v125 = (char *)(v195 + 1);
    v126 = (const __m128i *)(v195 + 1);
    v189 = avg_row;
    v127 = (__m128i *)(avg_row + 1);
    v128 = (const __m128i *)(v186 + 1);
    if ( v194 )
    {
      if ( v194 >= 0x20ui64 )
      {
        v129 = &avg_row[v194];
        if ( (v127 > (__m128i *)&v186[v194] || v129 < (unsigned __int8 *)v128)
          && (v127 > (__m128i *)&v195[v194] || v129 < (unsigned __int8 *)v125) )
        {
          do
          {
            v3 += 32i64;
            *v127 = _mm_sub_epi8(_mm_loadu_si128(v126), _mm_loadu_si128(v128));
            v130 = _mm_loadu_si128(v126 + 1);
            v126 += 2;
            v131 = _mm_loadu_si128(v128 + 1);
            v128 += 2;
            v127[1] = _mm_sub_epi8(v130, v131);
            v127 += 2;
          }
          while ( v3 < (v194 & 0xFFFFFFE0) );
        }
        v124 = png_ptr->prev_row;
      }
      if ( v3 < v194 )
      {
        v132 = v194 - v3;
        v3 = v194;
        do
        {
          v133 = v126->m128i_i8[0];
          v126 = (const __m128i *)((char *)v126 + 1);
          v134 = v133 - v128->m128i_i8[0];
          v128 = (const __m128i *)((char *)v128 + 1);
          v127->m128i_i8[0] = v134;
          v127 = (__m128i *)((char *)v127 + 1);
          --v132;
        }
        while ( v132 );
      }
    }
    if ( v3 < rowbytes )
    {
      v135 = (char *)v128 - v125;
      v136 = (char *)v127 - (char *)v126;
      v137 = rowbytes - v3;
      do
      {
        v138 = (unsigned __int8)v125[v124 - v195];
        v139 = (unsigned __int8)v125[v135];
        v140 = (unsigned __int8)*v125++;
        v192 = v139;
        v141 = v139 - v138;
        v142 = abs32(v141);
        v143 = abs32(v140 - v138);
        v144 = abs32(v140 - v138 + v141);
        if ( v142 > v143 || v142 > v144 )
        {
          LOBYTE(v140) = v138;
          if ( v143 <= v144 )
            LOBYTE(v140) = v192;
        }
        v126->m128i_i8[v136] = v126->m128i_i8[0] - v140;
        v126 = (const __m128i *)((char *)v126 + 1);
        --v137;
      }
      while ( v137 );
      avg_row = v189;
    }
  }
  else if ( do_filter < 0 )
  {
    v145 = 0;
    v146 = v4;
    if ( png_ptr->heuristic_method == 2 )
    {
      v147 = (unsigned __int16)v4;
      v148 = (v4 >> 10) & 0x3FFFC0;
      if ( num_prev_filters )
      {
        for ( kk = 0i64; kk < num_prev_filters; ++kk )
        {
          if ( png_ptr->prev_filters[kk] == 4 )
          {
            v150 = png_ptr->inv_filter_weights[kk];
            v147 = (v150 * v147) >> 8;
            v148 = (v150 * v148) >> 8;
          }
        }
      }
      v151 = (v148 * png_ptr->inv_filter_costs[4]) >> 3;
      if ( v151 <= 0x3FFFC0 )
        v146 = (v151 << 10) + ((v147 * png_ptr->inv_filter_costs[4]) >> 3);
      else
        v146 = 0x7FFFFFFF;
    }
    v152 = v195;
    v153 = 0i64;
    paeth_row = png_ptr->paeth_row;
    v155 = v186;
    v156 = v194;
    v157 = (char *)(v195 + 1);
    v158 = paeth_row + 1;
    v159 = v186 + 1;
    if ( v194 )
    {
      v153 = v194;
      do
      {
        v160 = *v157++;
        v161 = v160 - *v159++;
        v162 = v161;
        v163 = 256 - v161;
        *v158++ = v162;
        if ( v162 >= 0x80 )
          v162 = v163;
        v145 += v162;
        --v156;
      }
      while ( v156 );
      v152 = v195;
      v155 = png_ptr->prev_row;
    }
    if ( v153 < rowbytes )
    {
      v164 = v152 + 1;
      v165 = (_BYTE *)(v159 - (v152 + 1));
      v166 = v155 - v152;
      v167 = v158 - v157;
      do
      {
        v168 = v164[v166];
        v169 = (unsigned __int8)v165[(_QWORD)v164];
        v170 = *v164++;
        v185 = v168;
        v171 = v169 - v168;
        v187 = v169;
        v196 = abs32(v170 - v168);
        v172 = abs32(v169 - v168);
        v173 = abs32(v170 - v168 + v171);
        if ( v172 > v196 || v172 > v173 )
        {
          LOBYTE(v170) = v185;
          if ( v196 <= v173 )
            LOBYTE(v170) = v187;
        }
        v174 = (unsigned __int8)(*v157 - v170);
        v157[v167] = v174;
        ++v157;
        if ( v174 >= 0x80 )
          v174 = 256 - v174;
        v145 += v174;
        if ( v145 > v146 )
          break;
        ++v153;
      }
      while ( v153 < rowbytes );
      num_prev_filters = v190;
      v3 = 0i64;
      paeth_row = png_ptr->paeth_row;
    }
    if ( png_ptr->heuristic_method == 2 )
    {
      v175 = (unsigned __int16)v145;
      v176 = (v145 >> 10) & 0x3FFFC0;
      if ( num_prev_filters )
      {
        do
        {
          if ( png_ptr->prev_filters[v3] == 4 )
          {
            v177 = png_ptr->filter_weights[v3];
            v175 = (v177 * v175) >> 8;
            v176 = (v177 * v176) >> 8;
          }
          ++v3;
        }
        while ( (__int64)v3 < num_prev_filters );
      }
      v178 = (v176 * png_ptr->filter_costs[4]) >> 3;
      if ( v178 <= 0x3FFFC0 )
        v145 = (v178 << 10) + ((v175 * png_ptr->filter_costs[4]) >> 3);
      else
        v145 = 0x7FFFFFFF;
    }
    avg_row = sub_row;
    if ( v145 < v191 )
      avg_row = paeth_row;
  }
LABEL_205:
  png_compress_IDAT(png_ptr, avg_row, row_info->rowbytes + 1, 0);
  v179 = png_ptr->prev_row;
  if ( v179 )
  {
    png_ptr->prev_row = png_ptr->row_buf;
    png_ptr->row_buf = v179;
  }
  png_write_finish_row(png_ptr);
  ++png_ptr->flush_rows;
  flush_dist = png_ptr->flush_dist;
  if ( flush_dist && png_ptr->flush_rows >= flush_dist )
    png_write_flush(png_ptr);
  if ( png_ptr->num_prev_filters )
  {
    v181 = 1;
    if ( (unsigned __int64)num_prev_filters > 1 )
    {
      prev_filters = png_ptr->prev_filters;
      v183 = prev_filters + 1;
      v184 = -(__int64)prev_filters;
      do
      {
        ++v181;
        *v183 = *(v183 - 1);
        ++v183;
      }
      while ( (__int64)&v183[v184] < num_prev_filters );
    }
    png_ptr->prev_filters[v181] = *avg_row;
  }
}

void __fastcall png_write_finish_row(png_struct_def *png_ptr)
{
  bool v1; // zf
  unsigned __int8 v2; // bl
  unsigned int v3; // er9
  unsigned int v4; // er10
  unsigned int v5; // er8
  unsigned int v6; // eax
  __int64 usr_channels; // r9

  if ( ++png_ptr->row_number < png_ptr->num_rows )
    return;
  if ( !png_ptr->interlaced )
    goto LABEL_13;
  v1 = (png_ptr->transformations & 2) == 0;
  png_ptr->row_number = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v2 = ++png_ptr->pass;
      if ( v2 >= 7u )
        goto LABEL_13;
      v3 = png_pass_yinc_0[v2];
      v4 = (png_pass_inc_2[v2] - png_pass_start_1[v2] + png_ptr->width - 1) / png_pass_inc_2[v2];
      v5 = png_ptr->height - png_pass_ystart_0[v2];
      png_ptr->usr_width = v4;
      v6 = (v5 + v3 - 1) / v3;
      png_ptr->num_rows = v6;
      if ( v4 && v6 )
        goto LABEL_8;
    }
  }
  v2 = ++png_ptr->pass;
LABEL_8:
  if ( v2 >= 7u )
  {
LABEL_13:
    png_compress_IDAT(png_ptr, 0i64, 0i64, 4);
    return;
  }
  if ( png_ptr->prev_row )
  {
    usr_channels = png_ptr->usr_channels;
    if ( (unsigned int)usr_channels * png_ptr->usr_bit_depth < 8 )
      memset(
        png_ptr->prev_row,
        0,
        ((usr_channels * png_ptr->usr_bit_depth * (unsigned __int64)png_ptr->width + 7) >> 3) + 1);
    else
      memset(
        png_ptr->prev_row,
        0,
        png_ptr->width * ((usr_channels * (unsigned __int64)png_ptr->usr_bit_depth) >> 3) + 1);
  }
}

void __fastcall png_write_gAMA_fixed(png_struct_def *png_ptr, int file_gamma)
{
  unsigned int crc; // ecx
  unsigned __int8 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+31h] [rbp+9h]
  char v6; // [rsp+32h] [rbp+Ah]
  char v7; // [rsp+33h] [rbp+Bh]
  unsigned __int8 data; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+39h] [rbp+11h]
  char v10; // [rsp+3Ah] [rbp+12h]
  char v11; // [rsp+3Bh] [rbp+13h]

  v11 = file_gamma;
  data = HIBYTE(file_gamma);
  v9 = BYTE2(file_gamma);
  v10 = BYTE1(file_gamma);
  if ( png_ptr )
  {
    png_write_chunk_header(png_ptr, 0x67414D41u, 4u);
    png_write_data(png_ptr, &data, 4ui64);
    png_calculate_crc(png_ptr, &data, 4ui64);
    crc = png_ptr->crc;
    v7 = crc;
    v4 = HIBYTE(crc);
    v5 = BYTE2(crc);
    v6 = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, &v4, 4ui64);
  }
}

void __fastcall png_write_hIST(png_struct_def *png_ptr, const unsigned __int16 *hist, int num_hist)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 i; // rdi
  unsigned __int16 v8; // ax
  unsigned int crc; // ecx
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+41h] [rbp+9h]
  char v12; // [rsp+42h] [rbp+Ah]
  char v13; // [rsp+43h] [rbp+Bh]
  unsigned __int8 data; // [rsp+50h] [rbp+18h] BYREF
  char v15; // [rsp+51h] [rbp+19h]

  v4 = num_hist;
  if ( num_hist <= png_ptr->num_palette )
  {
    png_write_chunk_header(png_ptr, 0x68495354u, 2 * num_hist);
    v6 = v4;
    for ( i = 0i64; i < v6; ++i )
    {
      v8 = hist[i];
      data = HIBYTE(v8);
      v15 = v8;
      png_write_data(png_ptr, &data, 2ui64);
      png_calculate_crc(png_ptr, &data, 2ui64);
    }
    crc = png_ptr->crc;
    v13 = crc;
    v10 = HIBYTE(crc);
    v11 = BYTE2(crc);
    v12 = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, &v10, 4ui64);
  }
  else
  {
    png_warning(png_ptr, "Invalid number of histogram entries specified");
  }
}

void __fastcall png_write_iCCP(png_struct_def *png_ptr, const char *name, const unsigned __int8 *profile)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rdi
  unsigned int v10; // edi
  compression_state comp; // [rsp+20h] [rbp-4A8h] BYREF
  unsigned __int8 data[96]; // [rsp+440h] [rbp-88h] BYREF

  if ( !profile )
    png_error(png_ptr, "No profile for iCCP chunk");
  v5 = profile[3] + ((profile[2] + ((profile[1] + (*profile << 8)) << 8)) << 8);
  if ( v5 < 0x84 )
    png_error(png_ptr, "ICC profile too short");
  if ( (profile[3] & 3) != 0 )
    png_error(png_ptr, "ICC profile length invalid (not a multiple of 4)");
  v8 = png_check_keyword(png_ptr, name, data);
  if ( !v8 )
    png_error(png_ptr, "iCCP: invalid keyword");
  v9 = (unsigned int)(v8 + 1);
  if ( (unsigned int)v9 >= 0x51 )
  {
    _report_rangecheckfailure(v7, v6);
    JUMPOUT(0x1404350F6i64);
  }
  data[v9] = 0;
  v10 = v9 + 1;
  comp.input = profile;
  comp.input_len = v5;
  comp.output_len = 0;
  if ( (unsigned int)png_text_compress(png_ptr, 0x69434350u, &comp, v10) )
    png_error(png_ptr, png_ptr->zstream.msg);
  png_write_chunk_header(png_ptr, 0x69434350u, v10 + comp.output_len);
  if ( png_ptr && v10 )
  {
    png_write_data(png_ptr, data, v10);
    png_calculate_crc(png_ptr, data, v10);
  }
  png_write_compressed_data_out(png_ptr, &comp);
  png_write_chunk_end(png_ptr);
}

void __fastcall png_write_iTXt(
        png_struct_def *png_ptr,
        int compression,
        const char *key,
        const char *lang,
        const char *lang_key,
        const char *text)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // rbp
  int v13; // er8
  __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  const char *v16; // r15
  const char *v17; // r13
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  const char *v21; // r12
  __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  int v24; // er14
  unsigned int v25; // er14
  unsigned int output_len; // eax
  int v27; // [rsp+20h] [rbp-4D8h]
  compression_state comp; // [rsp+30h] [rbp-4C8h] BYREF
  unsigned __int8 new_key[96]; // [rsp+450h] [rbp-A8h] BYREF

  v11 = png_check_keyword(png_ptr, key, new_key);
  if ( !v11 )
    png_error(png_ptr, "iTXt: invalid keyword");
  if ( compression != -1 )
  {
    if ( !compression )
    {
LABEL_6:
      LODWORD(v12) = v11 + 1;
      v13 = 1;
      new_key[(unsigned int)v12] = 1;
      goto LABEL_9;
    }
    if ( compression != 1 )
    {
      if ( compression != 2 )
        png_error(png_ptr, "iTXt: invalid compression");
      goto LABEL_6;
    }
  }
  v12 = (unsigned int)(v11 + 1);
  if ( (unsigned int)v12 >= 0x52 )
  {
    _report_rangecheckfailure(v10, v9);
    JUMPOUT(0x1404353A3i64);
  }
  new_key[v12] = 0;
  v13 = 0;
LABEL_9:
  v14 = (unsigned int)(v12 + 1);
  v27 = v13;
  if ( (unsigned int)v14 >= 0x52 )
  {
    _report_rangecheckfailure(v10, v9);
    __debugbreak();
  }
  new_key[v14] = 0;
  v15 = (unsigned int)(v14 + 1);
  v16 = &pnewText;
  v17 = &pnewText;
  if ( lang )
    v17 = lang;
  v18 = -1i64;
  v19 = -1i64;
  do
    ++v19;
  while ( v17[v19] );
  v20 = v19 + 1;
  v21 = &pnewText;
  v22 = -1i64;
  if ( lang_key )
    v21 = lang_key;
  do
    ++v22;
  while ( v21[v22] );
  v23 = v22 + 1;
  v24 = 0x7FFFFFFF;
  if ( text )
    v16 = text;
  if ( v20 <= (unsigned int)(0x7FFFFFFF - v15) )
    v24 = v20 + v15;
  if ( v23 <= (unsigned int)(0x7FFFFFFF - v24) )
    v25 = v23 + v24;
  else
    v25 = 0x7FFFFFFF;
  comp.input = (const unsigned __int8 *)v16;
  do
    ++v18;
  while ( v16[v18] );
  comp.input_len = v18;
  comp.output_len = 0;
  if ( v13 )
  {
    if ( (unsigned int)png_text_compress(png_ptr, 0x69545874u, &comp, v25) )
      png_error(png_ptr, png_ptr->zstream.msg);
    output_len = comp.output_len;
  }
  else
  {
    if ( v18 > 0x7FFFFFFF - v25 )
      png_error(png_ptr, "iTXt: uncompressed text too long");
    output_len = comp.input_len;
    comp.output_len = comp.input_len;
  }
  png_write_chunk_header(png_ptr, 0x69545874u, output_len + v25);
  if ( png_ptr && v15 )
  {
    png_write_data(png_ptr, new_key, v15);
    png_calculate_crc(png_ptr, new_key, v15);
  }
  png_write_chunk_data(png_ptr, (const unsigned __int8 *)v17, v20);
  png_write_chunk_data(png_ptr, (const unsigned __int8 *)v21, v23);
  if ( v27 )
    png_write_compressed_data_out(png_ptr, &comp);
  else
    png_write_chunk_data(png_ptr, (const unsigned __int8 *)v16, comp.input_len);
  png_write_chunk_end(png_ptr);
}

void __fastcall png_write_oFFs(png_struct_def *png_ptr, int x_offset, int y_offset, int unit_type)
{
  unsigned __int8 v4; // di
  unsigned int crc; // edx
  unsigned __int8 data[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 buf[4]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int8 v11[12]; // [rsp+2Ch] [rbp-2Ch] BYREF

  v4 = unit_type;
  if ( unit_type >= 2 )
    png_warning(png_ptr, "Unrecognized unit type for oFFs chunk");
  png_save_int_32(buf, x_offset);
  png_save_int_32(v11, y_offset);
  v11[4] = v4;
  if ( png_ptr )
  {
    png_write_chunk_header(png_ptr, 0x6F464673u, 9u);
    png_write_data(png_ptr, buf, 9ui64);
    png_calculate_crc(png_ptr, buf, 9ui64);
    crc = png_ptr->crc;
    data[3] = crc;
    data[0] = HIBYTE(crc);
    data[1] = BYTE2(crc);
    data[2] = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, data, 4ui64);
  }
}

void __fastcall png_write_pCAL(
        png_struct_def *png_ptr,
        char *purpose,
        int X0,
        int X1,
        int type,
        int nparams,
        const char *units,
        char **params)
{
  const unsigned __int8 **v9; // r14
  int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdi
  unsigned int v15; // er15
  _BYTE *v16; // rax
  int v17; // er9
  _BYTE *v18; // r13
  char *v19; // r10
  __int64 *v20; // r8
  __int64 v21; // rcx
  _BOOL8 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  signed __int64 v25; // r15
  unsigned __int64 v26; // rdi
  const unsigned __int8 *v27; // rsi
  unsigned int crc; // ecx
  int i; // [rsp+20h] [rbp-C8h] BYREF
  int v30; // [rsp+24h] [rbp-C4h]
  unsigned __int8 buf[4]; // [rsp+28h] [rbp-C0h] BYREF
  unsigned __int8 v32[20]; // [rsp+2Ch] [rbp-BCh] BYREF
  unsigned __int8 new_key[80]; // [rsp+40h] [rbp-A8h] BYREF

  v9 = (const unsigned __int8 **)params;
  v30 = X1;
  i = X0;
  if ( type >= 4 )
    png_error(png_ptr, "Unrecognized equation type for pCAL chunk");
  v10 = png_check_keyword(png_ptr, purpose, new_key);
  if ( !v10 )
    png_error(png_ptr, "pCAL: invalid keyword");
  v11 = v10 + 1;
  v12 = -1i64;
  do
    ++v12;
  while ( units[v12] );
  v13 = v11;
  v14 = (nparams != 0) + v12;
  v15 = v14 + v11 + 10;
  v16 = png_malloc(png_ptr, 8i64 * nparams);
  v17 = 0;
  v18 = v16;
  if ( nparams > 0 )
  {
    v19 = (char *)((char *)params - v16);
    v20 = (__int64 *)v16;
    do
    {
      v21 = -1i64;
      do
        ++v21;
      while ( *(_BYTE *)(*(__int64 *)((char *)v20 + (_QWORD)v19) + v21) );
      v22 = v17++ != nparams - 1;
      v23 = v21 + v22;
      *v20 = v23;
      v15 += v23;
      ++v20;
    }
    while ( v17 < nparams );
  }
  png_write_chunk_header(png_ptr, 0x7043414Cu, v15);
  if ( png_ptr && v13 )
  {
    png_write_data(png_ptr, new_key, v13);
    png_calculate_crc(png_ptr, new_key, v13);
  }
  png_save_int_32(buf, i);
  png_save_int_32(v32, v30);
  v32[4] = type;
  v32[5] = nparams;
  if ( png_ptr )
  {
    png_write_data(png_ptr, buf, 0xAui64);
    png_calculate_crc(png_ptr, buf, 0xAui64);
    if ( units )
    {
      if ( v14 )
      {
        png_write_data(png_ptr, (const unsigned __int8 *)units, v14);
        png_calculate_crc(png_ptr, (const unsigned __int8 *)units, v14);
      }
    }
  }
  if ( nparams > 0 )
  {
    v24 = (unsigned int)nparams;
    v25 = v18 - (_BYTE *)params;
    do
    {
      v26 = *(unsigned __int64 *)((char *)v9 + v25);
      v27 = *v9;
      if ( png_ptr && v27 && v26 )
      {
        png_write_data(png_ptr, *v9, *(unsigned __int64 *)((char *)v9 + v25));
        png_calculate_crc(png_ptr, v27, v26);
      }
      ++v9;
      --v24;
    }
    while ( v24 );
  }
  png_free(png_ptr, v18);
  if ( png_ptr )
  {
    crc = png_ptr->crc;
    HIBYTE(i) = crc;
    LOBYTE(i) = HIBYTE(crc);
    BYTE1(i) = BYTE2(crc);
    BYTE2(i) = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, (const unsigned __int8 *)&i, 4ui64);
  }
}

void __fastcall png_write_pHYs(
        png_struct_def *png_ptr,
        unsigned int x_pixels_per_unit,
        unsigned int y_pixels_per_unit,
        int unit_type)
{
  unsigned __int8 v4; // bp
  unsigned int crc; // edx
  unsigned __int8 v9[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 data[16]; // [rsp+28h] [rbp-20h] BYREF

  v4 = unit_type;
  if ( unit_type >= 2 )
    png_warning(png_ptr, "Unrecognized unit type for pHYs chunk");
  data[3] = x_pixels_per_unit;
  data[0] = HIBYTE(x_pixels_per_unit);
  data[1] = BYTE2(x_pixels_per_unit);
  data[2] = BYTE1(x_pixels_per_unit);
  data[4] = HIBYTE(y_pixels_per_unit);
  data[5] = BYTE2(y_pixels_per_unit);
  data[6] = BYTE1(y_pixels_per_unit);
  data[7] = y_pixels_per_unit;
  data[8] = v4;
  if ( png_ptr )
  {
    png_write_chunk_header(png_ptr, 0x70485973u, 9u);
    png_write_data(png_ptr, data, 9ui64);
    png_calculate_crc(png_ptr, data, 9ui64);
    crc = png_ptr->crc;
    v9[3] = crc;
    v9[0] = HIBYTE(crc);
    v9[1] = BYTE2(crc);
    v9[2] = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, v9, 4ui64);
  }
}

void __fastcall png_write_sBIT(png_struct_def *png_ptr, const png_color_8_struct *sbit, int color_type)
{
  char v3; // r11
  unsigned __int8 usr_bit_depth; // al
  unsigned __int8 red; // r8
  unsigned __int8 green; // r9
  unsigned __int8 blue; // r10
  unsigned __int64 v8; // r9
  unsigned __int8 gray; // al
  unsigned __int8 alpha; // al
  unsigned __int8 data; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int8 v12; // [rsp+41h] [rbp+19h]
  unsigned __int8 v13; // [rsp+42h] [rbp+1Ah]

  v3 = color_type;
  if ( (color_type & 2) != 0 )
  {
    usr_bit_depth = 8;
    if ( color_type != 3 )
      usr_bit_depth = png_ptr->usr_bit_depth;
    red = sbit->red;
    if ( !sbit->red )
      goto LABEL_19;
    if ( red > usr_bit_depth )
      goto LABEL_19;
    green = sbit->green;
    if ( !green )
      goto LABEL_19;
    if ( green > usr_bit_depth )
      goto LABEL_19;
    blue = sbit->blue;
    if ( !blue || blue > usr_bit_depth )
      goto LABEL_19;
    v12 = sbit->green;
    v8 = 3i64;
    data = red;
    v13 = blue;
  }
  else
  {
    gray = sbit->gray;
    if ( !gray || gray > png_ptr->usr_bit_depth )
      goto LABEL_19;
    data = sbit->gray;
    v8 = 1i64;
  }
  if ( (v3 & 4) == 0 )
  {
LABEL_18:
    png_write_complete_chunk(png_ptr, 0x73424954u, &data, v8);
    return;
  }
  alpha = sbit->alpha;
  if ( alpha && alpha <= png_ptr->usr_bit_depth )
  {
    *(&data + v8++) = alpha;
    goto LABEL_18;
  }
LABEL_19:
  png_warning(png_ptr, "Invalid sBIT depth specified");
}

void __fastcall png_write_sCAL_s(png_struct_def *png_ptr, int unit, const char *width, const char *height)
{
  size_t v4; // rbx
  __int64 v6; // rdi
  unsigned __int8 data; // [rsp+20h] [rbp-78h] BYREF
  char v9[63]; // [rsp+21h] [rbp-77h] BYREF

  v4 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( width[v6] );
  do
    ++v4;
  while ( height[v4] );
  if ( v4 + v6 + 2 <= 0x40 )
  {
    data = unit;
    memmove(v9, width, v6 + 1);
    memmove(&v9[v6 + 1], height, v4);
    png_write_complete_chunk(png_ptr, 0x7343414Cu, &data, v4 + v6 + 2);
  }
  else
  {
    png_warning(png_ptr, "Can't write sCAL (buffer too small)");
  }
}

void __fastcall png_write_sPLT(png_struct_def *png_ptr, const png_sPLT_struct *spalette)
{
  int nentries; // er12
  unsigned __int8 *p_depth; // r14
  bool v4; // zf
  char *name; // rdx
  unsigned __int64 v7; // r15
  int v9; // er12
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  png_sPLT_entry_struct *entries; // rbx
  unsigned __int16 *p_blue; // rbx
  unsigned __int16 v16; // cx
  __int16 v17; // ax
  __int16 v18; // ax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // cx
  unsigned int crc; // ecx
  unsigned __int8 v23[8]; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int8 data; // [rsp+28h] [rbp-41h] BYREF
  char v25; // [rsp+29h] [rbp-40h]
  char v26; // [rsp+2Ah] [rbp-3Fh]
  char v27; // [rsp+2Bh] [rbp-3Eh]
  char v28; // [rsp+2Ch] [rbp-3Dh]
  char v29; // [rsp+2Dh] [rbp-3Ch]
  char v30; // [rsp+2Eh] [rbp-3Bh]
  char v31; // [rsp+2Fh] [rbp-3Ah]
  char v32; // [rsp+30h] [rbp-39h]
  char v33; // [rsp+31h] [rbp-38h]
  unsigned __int8 new_key[80]; // [rsp+40h] [rbp-29h] BYREF

  nentries = spalette->nentries;
  p_depth = &spalette->depth;
  v4 = spalette->depth == 8;
  name = spalette->name;
  v7 = 10i64;
  if ( v4 )
    v7 = 6i64;
  v9 = v7 * nentries;
  v10 = png_check_keyword(png_ptr, name, new_key);
  v11 = v10;
  if ( !v10 )
    png_error(png_ptr, "sPLT: invalid keyword");
  png_write_chunk_header(png_ptr, 0x73504C54u, v10 + v9 + 2);
  v12 = v11 + 1;
  v13 = v11 + 1;
  if ( png_ptr )
  {
    if ( v12 )
    {
      png_write_data(png_ptr, new_key, v13);
      png_calculate_crc(png_ptr, new_key, v13);
    }
    if ( p_depth )
    {
      png_write_data(png_ptr, p_depth, 1ui64);
      png_calculate_crc(png_ptr, p_depth, 1ui64);
    }
  }
  entries = spalette->entries;
  if ( entries < &entries[spalette->nentries] )
  {
    p_blue = &entries->blue;
    do
    {
      if ( *p_depth == 8 )
      {
        data = *((_BYTE *)p_blue - 4);
        v25 = *((_BYTE *)p_blue - 2);
        v26 = *(_BYTE *)p_blue;
        v27 = *((_BYTE *)p_blue + 2);
        v16 = p_blue[2];
        v28 = HIBYTE(v16);
        v29 = v16;
      }
      else
      {
        v17 = *(p_blue - 2);
        data = HIBYTE(v17);
        v25 = v17;
        v18 = *(p_blue - 1);
        v26 = HIBYTE(v18);
        v27 = v18;
        v19 = *p_blue;
        v29 = *p_blue;
        v28 = HIBYTE(v19);
        v20 = p_blue[1];
        v30 = HIBYTE(v20);
        v31 = v20;
        v21 = p_blue[2];
        v32 = HIBYTE(v21);
        v33 = v21;
      }
      if ( png_ptr )
      {
        png_write_data(png_ptr, &data, v7);
        png_calculate_crc(png_ptr, &data, v7);
      }
      p_blue += 5;
    }
    while ( (png_sPLT_entry_struct *)(p_blue - 2) < &spalette->entries[spalette->nentries] );
  }
  if ( png_ptr )
  {
    crc = png_ptr->crc;
    v23[3] = crc;
    v23[0] = HIBYTE(crc);
    v23[1] = BYTE2(crc);
    v23[2] = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, v23, 4ui64);
  }
}

void __fastcall png_write_sRGB(png_struct_def *png_ptr, int srgb_intent)
{
  unsigned __int8 v2; // di
  unsigned int crc; // ecx
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+31h] [rbp+9h]
  char v7; // [rsp+32h] [rbp+Ah]
  char v8; // [rsp+33h] [rbp+Bh]
  unsigned __int8 data; // [rsp+38h] [rbp+10h] BYREF

  v2 = srgb_intent;
  if ( srgb_intent >= 4 )
    png_warning(png_ptr, "Invalid sRGB rendering intent specified");
  data = v2;
  if ( png_ptr )
  {
    png_write_chunk_header(png_ptr, 0x73524742u, 1u);
    png_write_data(png_ptr, &data, 1ui64);
    png_calculate_crc(png_ptr, &data, 1ui64);
    crc = png_ptr->crc;
    v8 = crc;
    v5 = HIBYTE(crc);
    v6 = BYTE2(crc);
    v7 = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, &v5, 4ui64);
  }
}

void __fastcall png_write_sig(png_struct_def *png_ptr)
{
  __int64 sig_bytes; // rdx
  int v3[2]; // [rsp+20h] [rbp-18h] BYREF

  sig_bytes = png_ptr->sig_bytes;
  v3[0] = 1196314761;
  v3[1] = 169478669;
  png_ptr->io_state = 18;
  png_write_data(png_ptr, (const unsigned __int8 *)v3 + sig_bytes, 8 - (int)sig_bytes);
  if ( png_ptr->sig_bytes < 3u )
    png_ptr->mode |= 0x1000u;
}

void __fastcall png_write_start_row(png_struct_def *png_ptr)
{
  int v2; // edx
  unsigned __int64 v3; // rcx
  unsigned __int8 pixel_depth; // al
  unsigned __int64 v5; // rdi
  unsigned __int8 *v6; // rax
  bool v7; // zf
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rax
  unsigned int height; // eax

  v2 = png_ptr->usr_bit_depth * png_ptr->usr_channels;
  if ( v2 < 8 )
    v3 = (v2 * (unsigned __int64)png_ptr->width + 7) >> 3;
  else
    v3 = png_ptr->width * ((unsigned __int64)v2 >> 3);
  pixel_depth = png_ptr->pixel_depth;
  v5 = v3 + 1;
  png_ptr->maximum_pixel_depth = v2;
  png_ptr->transformed_pixel_depth = pixel_depth;
  v6 = (unsigned __int8 *)png_malloc(png_ptr, v3 + 1);
  v7 = (png_ptr->do_filter & 0x10) == 0;
  png_ptr->row_buf = v6;
  *v6 = 0;
  if ( !v7 )
  {
    v8 = (unsigned __int8 *)png_malloc(png_ptr, png_ptr->rowbytes + 1);
    png_ptr->sub_row = v8;
    *v8 = 1;
  }
  if ( (png_ptr->do_filter & 0xE0) != 0 )
  {
    v9 = (unsigned __int8 *)png_calloc(png_ptr, v5);
    v7 = (png_ptr->do_filter & 0x20) == 0;
    png_ptr->prev_row = v9;
    if ( !v7 )
    {
      v10 = (unsigned __int8 *)png_malloc(png_ptr, png_ptr->rowbytes + 1);
      png_ptr->up_row = v10;
      *v10 = 2;
    }
    if ( (png_ptr->do_filter & 0x40) != 0 )
    {
      v11 = (unsigned __int8 *)png_malloc(png_ptr, png_ptr->rowbytes + 1);
      png_ptr->avg_row = v11;
      *v11 = 3;
    }
    if ( (png_ptr->do_filter & 0x80u) != 0 )
    {
      v12 = (unsigned __int8 *)png_malloc(png_ptr, png_ptr->rowbytes + 1);
      png_ptr->paeth_row = v12;
      *v12 = 4;
    }
  }
  height = png_ptr->height;
  if ( !png_ptr->interlaced || (png_ptr->transformations & 2) != 0 )
  {
    png_ptr->num_rows = height;
    png_ptr->usr_width = png_ptr->width;
  }
  else
  {
    png_ptr->num_rows = (height + 7) >> 3;
    png_ptr->usr_width = (png_ptr->width + 7) >> 3;
  }
}

void __fastcall png_write_tEXt(png_struct_def *png_ptr, const char *key, const char *text, unsigned __int64 text_len)
{
  int v6; // ebp
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebp
  unsigned int crc; // ecx
  unsigned __int8 data[16]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int8 new_key[80]; // [rsp+30h] [rbp-78h] BYREF

  v6 = png_check_keyword(png_ptr, key, new_key);
  if ( !v6 )
    png_error(png_ptr, "tEXt: invalid keyword");
  if ( text && *text )
  {
    v7 = -1i64;
    do
      ++v7;
    while ( text[v7] );
  }
  else
  {
    v7 = 0i64;
  }
  if ( v7 > (unsigned int)(2147483646 - v6) )
    png_error(png_ptr, "tEXt: text too long");
  png_write_chunk_header(png_ptr, 0x74455874u, v7 + v6 + 1);
  v8 = v6 + 1;
  v9 = v6 + 1;
  if ( png_ptr && v8 )
  {
    png_write_data(png_ptr, new_key, v9);
    png_calculate_crc(png_ptr, new_key, v9);
  }
  if ( v7 )
    png_write_chunk_data(png_ptr, (const unsigned __int8 *)text, v7);
  if ( png_ptr )
  {
    crc = png_ptr->crc;
    data[3] = crc;
    data[0] = HIBYTE(crc);
    data[1] = BYTE2(crc);
    data[2] = BYTE1(crc);
    png_ptr->io_state = 130;
    png_write_data(png_ptr, data, 4ui64);
  }
}

void __fastcall png_write_tIME(png_struct_def *png_ptr, const png_time_struct *mod_time)
{
  unsigned __int8 month; // r11
  unsigned __int8 day; // r9
  unsigned __int8 hour; // r8
  unsigned __int8 second; // r10
  unsigned __int16 year; // cx
  unsigned int crc; // edx
  unsigned __int8 v9[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 data[12]; // [rsp+24h] [rbp-24h] BYREF

  month = mod_time->month;
  if ( (unsigned __int8)(month - 1) > 0xBu
    || (day = mod_time->day, (unsigned __int8)(day - 1) > 0x1Eu)
    || (hour = mod_time->hour, hour > 0x17u)
    || (second = mod_time->second, second > 0x3Cu) )
  {
    png_warning(png_ptr, "Invalid time specified for tIME chunk");
  }
  else
  {
    year = mod_time->year;
    data[1] = mod_time->year;
    data[0] = HIBYTE(year);
    data[5] = mod_time->minute;
    data[2] = month;
    data[3] = day;
    data[4] = hour;
    data[6] = second;
    if ( png_ptr )
    {
      png_write_chunk_header(png_ptr, 0x74494D45u, 7u);
      png_write_data(png_ptr, data, 7ui64);
      png_calculate_crc(png_ptr, data, 7ui64);
      crc = png_ptr->crc;
      v9[3] = crc;
      v9[0] = HIBYTE(crc);
      v9[1] = BYTE2(crc);
      v9[2] = BYTE1(crc);
      png_ptr->io_state = 130;
      png_write_data(png_ptr, v9, 4ui64);
    }
  }
}

void __fastcall png_write_tRNS(
        png_struct_def *png_ptr,
        const unsigned __int8 *trans_alpha,
        const png_color_16_struct *tran,
        int num_trans,
        int color_type)
{
  const char *v7; // rdx
  unsigned __int16 gray; // kr00_2
  unsigned __int64 v9; // r8
  unsigned int red; // edx
  unsigned __int16 green; // ax
  unsigned int v12; // edx
  int v13; // er8
  unsigned __int16 blue; // ax
  bool v15; // zf
  unsigned int crc; // ecx
  unsigned __int8 v17[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 data; // [rsp+24h] [rbp-24h] BYREF
  char v19; // [rsp+25h] [rbp-23h]
  char v20; // [rsp+26h] [rbp-22h]
  char v21; // [rsp+27h] [rbp-21h]
  char v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+29h] [rbp-1Fh]

  if ( color_type == 3 )
  {
    if ( num_trans > 0 && num_trans <= png_ptr->num_palette )
    {
      png_write_complete_chunk(png_ptr, 0x74524E53u, trans_alpha, num_trans);
      return;
    }
    v7 = "Invalid number of transparent colors specified";
    goto LABEL_17;
  }
  if ( color_type )
  {
    if ( color_type != 2 )
    {
      v7 = "Can't write tRNS with an alpha channel";
      goto LABEL_17;
    }
    red = tran->red;
    v19 = tran->red;
    green = tran->green;
    v12 = red >> 8;
    v13 = HIBYTE(green);
    v21 = green;
    blue = tran->blue;
    data = v12;
    v15 = png_ptr->bit_depth == 8;
    v20 = v13;
    v22 = HIBYTE(blue);
    v23 = blue;
    if ( v15 && (unsigned __int8)v12 | (unsigned __int8)(v13 | HIBYTE(blue)) )
    {
      v7 = "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8";
      goto LABEL_17;
    }
    png_write_chunk_header(png_ptr, 0x74524E53u, 6u);
    png_write_data(png_ptr, &data, 6ui64);
    v9 = 6i64;
LABEL_15:
    png_calculate_crc(png_ptr, &data, v9);
    png_ptr->io_state = 130;
    crc = png_ptr->crc;
    v17[3] = crc;
    v17[0] = HIBYTE(crc);
    v17[1] = BYTE2(crc);
    v17[2] = BYTE1(crc);
    png_write_data(png_ptr, v17, 4ui64);
    return;
  }
  if ( tran->gray < 1 << png_ptr->bit_depth )
  {
    gray = tran->gray;
    data = HIBYTE(gray);
    v19 = gray;
    png_write_chunk_header(png_ptr, 0x74524E53u, 2u);
    png_write_data(png_ptr, &data, 2ui64);
    v9 = 2i64;
    goto LABEL_15;
  }
  v7 = "Ignoring attempt to write tRNS chunk out-of-range for bit_depth";
LABEL_17:
  png_app_warning(png_ptr, v7);
}

void __fastcall png_write_zTXt(
        png_struct_def *png_ptr,
        const char *key,
        const char *text,
        unsigned __int64 text_len,
        int compression)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  compression_state comp; // [rsp+20h] [rbp-4A8h] BYREF
  unsigned __int8 new_key[96]; // [rsp+440h] [rbp-88h] BYREF

  if ( compression == -1 )
  {
    png_write_tEXt(png_ptr, key, text, 0i64);
  }
  else
  {
    if ( compression )
      png_error(png_ptr, "zTXt: invalid compression type");
    v9 = png_check_keyword(png_ptr, key, new_key);
    if ( !v9 )
      png_error(png_ptr, "zTXt: invalid keyword");
    v10 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v10 >= 0x51 )
    {
      _report_rangecheckfailure(v8, v7);
      JUMPOUT(0x1404364F7i64);
    }
    new_key[v10] = 0;
    v11 = (unsigned int)(v10 + 1);
    if ( text )
    {
      v12 = -1i64;
      do
        ++v12;
      while ( text[v12] );
    }
    else
    {
      v12 = 0i64;
    }
    comp.input = (const unsigned __int8 *)text;
    comp.input_len = v12;
    comp.output_len = 0;
    if ( (unsigned int)png_text_compress(png_ptr, 0x7A545874u, &comp, v11) )
      png_error(png_ptr, png_ptr->zstream.msg);
    png_write_chunk_header(png_ptr, 0x7A545874u, v11 + comp.output_len);
    if ( png_ptr )
    {
      if ( v11 )
      {
        png_write_data(png_ptr, new_key, v11);
        png_calculate_crc(png_ptr, new_key, v11);
      }
    }
    png_write_compressed_data_out(png_ptr, &comp);
    png_write_chunk_end(png_ptr);
  }
}

