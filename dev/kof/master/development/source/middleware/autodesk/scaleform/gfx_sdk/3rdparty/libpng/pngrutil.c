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

typedef const png_sPLT_struct * png_const_sPLT_tp;
typedef const png_unknown_chunk_t * png_const_unknown_chunkp;
typedef const png_text_struct * png_const_textp;
typedef unsigned long * png_uint_32p;
typedef const unsigned long * png_const_uint_32p;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
void png_read_sig(png_struct_def * png_ptr, png_info_def * info_ptr); // 0x1404321D0
unsigned long png_read_chunk_header(png_struct_def * png_ptr); // 0x140431B80
void png_crc_read(png_struct_def * png_ptr, unsigned char * buf, unsigned long length); // 0x14042DFE0
long png_crc_finish(png_struct_def * png_ptr, unsigned long skip); // 0x14042DF00
long png_crc_error(png_struct_def * png_ptr); // 0x14042DE40
unsigned char * png_read_buffer(png_struct_def * png_ptr, unsigned long long new_size, long warn); // 0x140431AD0
long png_inflate_claim(png_struct_def * png_ptr, unsigned long owner); // 0x1404315A0
long png_inflate(png_struct_def * png_ptr, unsigned long owner, long finish, const unsigned char * input, unsigned long * input_size_ptr, unsigned char * output, unsigned long long * output_size_ptr); // 0x1404313F0
long png_decompress_chunk(png_struct_def * png_ptr, unsigned long chunklength, unsigned long prefix_size, unsigned long long * newlength, long terminate); // 0x14042E030
long png_inflate_read(png_struct_def * png_ptr, unsigned char * read_buffer, unsigned long read_size, unsigned long * chunk_bytes, unsigned char * next_out, unsigned long long * out_size, long finish); // 0x1404316B0
void png_handle_IHDR(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042E730
void png_handle_PLTE(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042E950
void png_handle_IEND(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042E6C0
void png_handle_gAMA(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042F0C0
void png_handle_sBIT(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x1404301E0
void png_handle_cHRM(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042EDA0
void png_handle_sRGB(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x140430920
void png_handle_iCCP(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042F350
void png_handle_sPLT(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x140430610
void png_handle_tRNS(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x140430D80
void png_handle_bKGD(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042EB80
void png_handle_hIST(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042F1C0
void png_handle_pHYs(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x140430080
void png_handle_oFFs(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042FBF0
void png_handle_pCAL(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042FD50
void png_handle_sCAL(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x1404303A0
void png_handle_tIME(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x140430C40
void png_handle_tEXt(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x140430A40
void png_handle_zTXt(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x140431190
void png_handle_iTXt(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length); // 0x14042F8E0
long png_cache_unknown_chunk(png_struct_def * png_ptr, unsigned long length); // 0x14042D7B0
void png_handle_unknown(png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long length, long keep); // 0x140431000
void png_combine_row(const png_struct_def * png_ptr, unsigned char * dp, long display); // 0x14042D8F0
void png_do_read_interlace(png_row_info_struct * row_info, unsigned char * row, long pass, unsigned long transformations); // 0x14042E290
void png_read_filter_row_sub(png_row_info_struct * row_info, unsigned char * row, const unsigned char * prev_row); // 0x140431F70
void png_read_filter_row_up(png_row_info_struct * row_info, unsigned char * row, const unsigned char * prev_row); // 0x140431FB0
void png_read_filter_row_avg(png_row_info_struct * row_info, unsigned char * row, const unsigned char * prev_row); // 0x140431D60
void png_read_filter_row_paeth_1byte_pixel(png_row_info_struct * row_info, unsigned char * row, const unsigned char * prev_row); // 0x140431DC0
void png_read_filter_row_paeth_multibyte_pixel(png_row_info_struct * row_info, unsigned char * row, const unsigned char * prev_row); // 0x140431E90
void png_read_filter_row(png_struct_def * pp, png_row_info_struct * row_info, unsigned char * row, const unsigned char * prev_row, long filter); // 0x140431CB0
void png_read_IDAT_data(png_struct_def * png_ptr, unsigned char * output, unsigned long long avail_out); // 0x140431840
void png_read_finish_IDAT(png_struct_def * png_ptr); // 0x140432040
void png_read_finish_row(png_struct_def * png_ptr); // 0x1404320C0
void png_read_start_row(png_struct_def * png_ptr); // 0x1404322A0__int64 __fastcall png_cache_unknown_chunk(png_struct_def *png_ptr, unsigned int length)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 user_chunk_malloc_max; // rsi
  unsigned __int8 *data; // rdx
  unsigned __int8 *v6; // rsi

  v2 = length;
  user_chunk_malloc_max = -1i64;
  data = png_ptr->unknown_chunk.data;
  if ( data )
  {
    png_free(png_ptr, data);
    png_ptr->unknown_chunk.data = 0i64;
  }
  if ( png_ptr->user_chunk_malloc_max - 1 <= 0xFFFFFFFFFFFFFFFDui64 )
    user_chunk_malloc_max = png_ptr->user_chunk_malloc_max;
  if ( v2 <= user_chunk_malloc_max )
  {
    png_ptr->unknown_chunk.name[0] = HIBYTE(png_ptr->chunk_name);
    png_ptr->unknown_chunk.name[1] = BYTE2(png_ptr->chunk_name);
    png_ptr->unknown_chunk.name[2] = BYTE1(png_ptr->chunk_name);
    png_ptr->unknown_chunk.name[3] = png_ptr->chunk_name;
    png_ptr->unknown_chunk.name[4] = 0;
    png_ptr->unknown_chunk.location = png_ptr->mode;
    png_ptr->unknown_chunk.size = v2;
    if ( (_DWORD)v2 )
      png_ptr->unknown_chunk.data = (unsigned __int8 *)png_malloc_warn(png_ptr, v2);
    else
      png_ptr->unknown_chunk.data = 0i64;
  }
  v6 = png_ptr->unknown_chunk.data;
  if ( v6 )
  {
    if ( (_DWORD)v2 )
    {
      png_read_data(png_ptr, png_ptr->unknown_chunk.data, v2);
      png_calculate_crc(png_ptr, v6, v2);
    }
  }
  else if ( (_DWORD)v2 )
  {
    png_crc_finish(png_ptr, v2);
    png_chunk_benign_error(png_ptr, "unknown chunk exceeds memory limits");
    return 0i64;
  }
  png_crc_finish(png_ptr, 0);
  return 1i64;
}

void __fastcall png_combine_row(const png_struct_def *png_ptr, unsigned __int8 *dp, int display)
{
  __int64 v3; // r9
  unsigned __int64 transformed_pixel_depth; // rbp
  unsigned __int8 *v5; // rdi
  __int64 width; // rsi
  unsigned __int64 pass; // r11
  unsigned __int8 *v11; // r13
  unsigned __int64 info_rowbytes; // rdx
  unsigned __int64 v13; // rcx
  int v14; // er14
  unsigned __int64 v15; // rcx
  unsigned int transformations; // er12
  unsigned int v17; // eax
  unsigned int v18; // er8
  unsigned int v19; // edx
  signed __int64 v20; // rdi
  unsigned __int8 v21; // al
  int v22; // ecx
  unsigned __int8 v23; // al
  unsigned int v24; // ebp
  __int64 v25; // rax
  unsigned __int8 *v26; // rbx
  unsigned __int8 *v27; // rdi
  unsigned int v28; // esi
  unsigned int v29; // er14
  unsigned int v30; // ebp
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  signed __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int16 v37; // ax
  signed __int64 v38; // rdi
  unsigned int v39; // eax
  unsigned __int64 v40; // r8
  unsigned __int8 v41; // [rsp+50h] [rbp+8h]

  v3 = 0i64;
  transformed_pixel_depth = png_ptr->transformed_pixel_depth;
  v5 = png_ptr->row_buf + 1;
  width = png_ptr->width;
  pass = png_ptr->pass;
  v41 = 0;
  v11 = 0i64;
  if ( !png_ptr->transformed_pixel_depth )
    png_error(png_ptr, "internal row logic error");
  info_rowbytes = png_ptr->info_rowbytes;
  if ( info_rowbytes )
  {
    v13 = (unsigned int)transformed_pixel_depth < 8 ? (transformed_pixel_depth * width + 7) >> 3 : width
                                                                                                 * ((unsigned __int64)png_ptr->transformed_pixel_depth >> 3);
    if ( info_rowbytes != v13 )
      png_error(png_ptr, "internal row size calculation error");
  }
  if ( !(_DWORD)width )
    png_error(png_ptr, "internal row width error");
  LOBYTE(v14) = (transformed_pixel_depth * width) & 7;
  if ( (_BYTE)v14 )
  {
    if ( (unsigned int)transformed_pixel_depth < 8 )
      v15 = (transformed_pixel_depth * width + 7) >> 3;
    else
      v15 = width * (transformed_pixel_depth >> 3);
    v11 = &dp[v15 - 1];
    v41 = *v11;
    if ( (png_ptr->transformations & 0x10000) != 0 )
      v14 = 255 << v14;
    else
      v14 = 255 >> v14;
  }
  if ( !png_ptr->interlaced
    || (transformations = png_ptr->transformations, (transformations & 2) == 0)
    || (unsigned int)pass >= 6
    || display && (display != 1 || (pass & 1) == 0) )
  {
    if ( (unsigned int)transformed_pixel_depth < 8 )
      v40 = (transformed_pixel_depth * width + 7) >> 3;
    else
      v40 = width * (transformed_pixel_depth >> 3);
    memmove(dp, v5, v40);
LABEL_93:
    if ( v11 )
      *v11 = v41 & v14 | *v11 & ~(_BYTE)v14;
    return;
  }
  v17 = ((pass & 1) << (3 - (unsigned __int8)((unsigned int)(pass + 1) >> 1))) & 7;
  if ( (unsigned int)width <= v17 )
    return;
  if ( (unsigned int)transformed_pixel_depth < 8 )
  {
    v18 = 8 / (unsigned int)transformed_pixel_depth;
    if ( (transformations & 0x10000) != 0 )
    {
      if ( display )
      {
        if ( (_DWORD)transformed_pixel_depth != 1 )
        {
          LOBYTE(v3) = (_DWORD)transformed_pixel_depth != 2;
          ++v3;
        }
        v19 = display_mask[0][v3][pass >> 1];
      }
      else
      {
        if ( (_DWORD)transformed_pixel_depth != 1 )
        {
          LOBYTE(v3) = (_DWORD)transformed_pixel_depth != 2;
          ++v3;
        }
        v19 = row_mask[0][v3][pass];
      }
    }
    else if ( display )
    {
      if ( (_DWORD)transformed_pixel_depth != 1 )
      {
        LOBYTE(v3) = (_DWORD)transformed_pixel_depth != 2;
        ++v3;
      }
      v19 = display_mask[1][v3][pass >> 1];
    }
    else
    {
      if ( (_DWORD)transformed_pixel_depth != 1 )
      {
        LOBYTE(v3) = (_DWORD)transformed_pixel_depth != 2;
        ++v3;
      }
      v19 = row_mask[1][v3][pass];
    }
    v20 = v5 - dp;
    while ( 1 )
    {
      v21 = v19;
      v19 = __ROR4__(v19, 8);
      v22 = v21;
      if ( v21 )
      {
        v23 = dp[v20];
        if ( v22 != 255 )
          v23 = *dp & ~(_BYTE)v22 | v22 & v23;
        *dp = v23;
      }
      if ( (unsigned int)width <= v18 )
        break;
      LODWORD(width) = width - v18;
      ++dp;
    }
    goto LABEL_93;
  }
  if ( (transformed_pixel_depth & 7) != 0 )
    png_error(png_ptr, "invalid user transform pixel depth");
  v24 = (unsigned int)transformed_pixel_depth >> 3;
  v25 = v24 * v17;
  v26 = &dp[v25];
  v27 = &v5[v25];
  v28 = v24 * width - v25;
  if ( display )
  {
    v29 = v28;
    if ( v24 << ((unsigned int)(6 - pass) >> 1) <= v28 )
      v29 = v24 << ((unsigned int)(6 - pass) >> 1);
  }
  else
  {
    v29 = v24;
  }
  v30 = v24 << ((unsigned int)(7 - pass) >> 1);
  switch ( v29 )
  {
    case 1u:
      for ( *v26 = *v27; v28 > v30; *v26 = *v27 )
      {
        v27 += v30;
        v26 += v30;
        v28 -= v30;
      }
      break;
    case 2u:
      while ( 1 )
      {
        *v26 = *v27;
        v26[1] = v27[1];
        if ( v28 <= v30 )
          break;
        v28 -= v30;
        v27 += v30;
        v26 += v30;
        if ( v28 <= 1 )
        {
          *v26 = *v27;
          return;
        }
      }
      break;
    case 3u:
      *v26 = *v27;
      v26[1] = v27[1];
      for ( v26[2] = v27[2]; v28 > v30; v26[2] = v27[2] )
      {
        v27 += v30;
        v26 += v30;
        v28 -= v30;
        *v26 = *v27;
        v26[1] = v27[1];
      }
      break;
    default:
      if ( v29 >= 0x10
        || (((unsigned __int8)v26 | (unsigned __int8)v27) & 1) != 0
        || (((unsigned __int8)v29 | (unsigned __int8)v30) & 1) != 0 )
      {
        memmove(v26, v27, v29);
        while ( v28 > v30 )
        {
          v27 += v30;
          v26 += v30;
          v28 -= v30;
          v39 = v28;
          if ( v29 <= v28 )
            v39 = v29;
          v29 = v39;
          memmove(v26, v27, v39);
        }
      }
      else if ( (((unsigned __int8)v26 | (unsigned __int8)v27) & 3) != 0
             || (((unsigned __int8)v29 | (unsigned __int8)v30) & 3) != 0 )
      {
        v35 = (unsigned __int64)(v30 - v29) >> 1;
        while ( 1 )
        {
          v36 = v29;
          do
          {
            v37 = *(_WORD *)v27;
            v27 += 2;
            *(_WORD *)v26 = v37;
            v26 += 2;
            v36 -= 2i64;
          }
          while ( v36 );
          if ( v28 <= v30 )
            break;
          v28 -= v30;
          v26 += 2 * v35;
          v27 += 2 * v35;
          if ( v29 > v28 )
          {
            v38 = v27 - v26;
            do
            {
              *v26 = v26[v38];
              ++v26;
              --v28;
            }
            while ( v28 );
            return;
          }
        }
      }
      else
      {
        v31 = (unsigned __int64)(v30 - v29) >> 2;
        while ( 1 )
        {
          v32 = v29;
          do
          {
            v33 = *(_DWORD *)v27;
            v27 += 4;
            *(_DWORD *)v26 = v33;
            v26 += 4;
            v32 -= 4i64;
          }
          while ( v32 );
          if ( v28 <= v30 )
            break;
          v28 -= v30;
          v26 += 4 * v31;
          v27 += 4 * v31;
          if ( v29 > v28 )
          {
            v34 = v27 - v26;
            do
            {
              *v26 = v26[v34];
              ++v26;
              --v28;
            }
            while ( v28 );
            return;
          }
        }
      }
      break;
  }
}

__int64 __fastcall png_crc_error(png_struct_def *png_ptr)
{
  BOOL v2; // edi
  unsigned int v3; // esi
  unsigned __int8 data; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v6; // [rsp+31h] [rbp+9h]
  unsigned __int8 v7; // [rsp+32h] [rbp+Ah]
  unsigned __int8 v8; // [rsp+33h] [rbp+Bh]

  v2 = 1;
  if ( (png_ptr->chunk_name & 0x20000000) != 0 )
  {
    v3 = 0;
    v2 = (png_ptr->flags & 0x300) != 768;
  }
  else
  {
    v3 = 0;
    if ( (png_ptr->flags & 0x800) != 0 )
      v2 = 0;
  }
  png_ptr->io_state = 129;
  png_read_data(png_ptr, &data, 4ui64);
  if ( !v2 )
    return 0i64;
  LOBYTE(v3) = v8 + ((v7 + ((v6 + (data << 8)) << 8)) << 8) != png_ptr->crc;
  return v3;
}

__int64 __fastcall png_crc_finish(png_struct_def *png_ptr, unsigned int skip)
{
  unsigned int v2; // ebx
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned __int8 data[1024]; // [rsp+20h] [rbp-418h] BYREF

  v2 = skip;
  while ( v2 )
  {
    v4 = 1024;
    if ( v2 < 0x400 )
      v4 = v2;
    v2 -= v4;
    if ( png_ptr )
    {
      v5 = v4;
      png_read_data(png_ptr, data, v4);
      png_calculate_crc(png_ptr, data, v5);
    }
  }
  if ( !(unsigned int)png_crc_error(png_ptr) )
    return 0i64;
  if ( (png_ptr->chunk_name & 0x20000000) != 0 )
    v6 = (png_ptr->flags & 0x200) == 0;
  else
    v6 = png_ptr->flags & 0x400;
  if ( !v6 )
    png_chunk_error(png_ptr, "CRC error");
  png_chunk_warning(png_ptr, "CRC error");
  return 1i64;
}

void __fastcall png_crc_read(png_struct_def *png_ptr, unsigned __int8 *buf, unsigned int length)
{
  if ( png_ptr )
  {
    png_read_data(png_ptr, buf, length);
    png_calculate_crc(png_ptr, buf, length);
  }
}

__int64 __fastcall png_decompress_chunk(
        png_struct_def *png_ptr,
        unsigned int chunklength,
        unsigned int prefix_size,
        unsigned __int64 *newlength,
        int terminate)
{
  int v5; // esi
  unsigned __int64 user_chunk_malloc_max; // rcx
  size_t v8; // r12
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int chunk_name; // edx
  unsigned int v15; // er13
  const unsigned __int8 *v16; // r9
  unsigned int v17; // ebx
  unsigned __int64 v18; // rbp
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // rsi
  unsigned __int8 *read_buffer; // rax
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+80h] [rbp+8h]
  unsigned int input_size_ptr; // [rsp+90h] [rbp+18h] BYREF

  v5 = terminate;
  user_chunk_malloc_max = -1i64;
  v8 = prefix_size;
  if ( png_ptr->user_chunk_malloc_max - 1 <= 0xFFFFFFFFFFFFFFFDui64 )
    user_chunk_malloc_max = png_ptr->user_chunk_malloc_max;
  v11 = prefix_size + (terminate != 0);
  if ( user_chunk_malloc_max < v11 )
  {
    png_zstream_error(png_ptr, -4);
    return 4294967292i64;
  }
  else
  {
    v12 = user_chunk_malloc_max - v11;
    if ( v12 < *newlength )
      *newlength = v12;
    v13 = png_inflate_claim(png_ptr, png_ptr->chunk_name);
    if ( v13 )
    {
      if ( v13 == 1 )
        return (unsigned int)-7;
      return v13;
    }
    else
    {
      chunk_name = png_ptr->chunk_name;
      v15 = chunklength - v8;
      v16 = &png_ptr->read_buffer[v8];
      input_size_ptr = v15;
      v17 = png_inflate(png_ptr, chunk_name, 1, v16, &input_size_ptr, 0i64, newlength);
      if ( v17 == 1 )
      {
        if ( (unsigned int)inflateReset(&png_ptr->zstream) )
        {
          png_zstream_error(png_ptr, 1);
          v17 = -7;
        }
        else
        {
          v23 = *newlength;
          v18 = *newlength + v8 + (v5 != 0);
          v19 = (unsigned __int8 *)png_malloc_base(png_ptr, v18);
          v20 = v19;
          if ( v19 )
          {
            v17 = png_inflate(
                    png_ptr,
                    png_ptr->chunk_name,
                    v17,
                    &png_ptr->read_buffer[v8],
                    &input_size_ptr,
                    &v19[v8],
                    newlength);
            if ( v17 == 1 )
            {
              if ( v23 == *newlength )
              {
                if ( terminate )
                  v20[v8 + *newlength] = 0;
                if ( (_DWORD)v8 )
                  memmove(v20, png_ptr->read_buffer, v8);
                read_buffer = png_ptr->read_buffer;
                png_ptr->read_buffer = v20;
                v20 = read_buffer;
                png_ptr->read_buffer_size = v18;
              }
              else
              {
                v17 = -7;
              }
            }
            else if ( !v17 )
            {
              v17 = -7;
            }
            png_free(png_ptr, v20);
            if ( v17 == 1 && v15 != input_size_ptr )
              png_chunk_benign_error(png_ptr, "extra compressed data");
          }
          else
          {
            v17 = -4;
            png_zstream_error(png_ptr, -4);
          }
        }
      }
      else if ( !v17 )
      {
        v17 = -7;
      }
      result = v17;
      png_ptr->zowner = 0;
    }
  }
  return result;
}

void __fastcall png_do_read_interlace(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        int pass,
        unsigned int transformations)
{
  unsigned int width; // edx
  __int64 v8; // rax
  int pixel_depth; // er8
  __int64 v10; // r12
  unsigned int v11; // er14
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // er14
  unsigned __int8 *v15; // rbp
  unsigned __int8 *v16; // rbx
  __int64 v17; // rsi
  int v18; // er11
  int v19; // er8
  unsigned __int8 *v20; // r15
  unsigned __int8 *v21; // r9
  int v22; // edi
  int v23; // er11
  int v24; // er8
  unsigned int v25; // er14
  int v26; // ebp
  int v27; // esi
  char v28; // bl
  __int64 v29; // r10
  int v30; // er11
  int v31; // er8
  unsigned __int8 *v32; // r15
  unsigned __int8 *v33; // r9
  int v34; // edi
  int v35; // er11
  int v36; // er8
  unsigned int v37; // er14
  int v38; // ebp
  int v39; // esi
  char v40; // bl
  __int64 v41; // r10
  unsigned __int8 *v42; // r9
  unsigned __int8 *v43; // r15
  char v44; // r8
  int v45; // edi
  unsigned int v46; // er14
  int v47; // ebx
  int v48; // er8
  int v49; // esi
  int v50; // ebp
  char v51; // r11
  __int64 v52; // r10
  unsigned __int8 v53; // al
  unsigned __int64 v54; // rcx
  unsigned int v55; // [rsp+20h] [rbp-58h]
  char Src[8]; // [rsp+28h] [rbp-50h] BYREF

  if ( row && row_info )
  {
    width = row_info->width;
    v8 = pass;
    pixel_depth = row_info->pixel_depth;
    v10 = (unsigned int)png_pass_inc[v8];
    v11 = v10 * row_info->width;
    v55 = v11;
    switch ( pixel_depth )
    {
      case 1:
        v42 = &row[(unsigned __int64)(v11 - 1) >> 3];
        v43 = &row[(unsigned __int64)(width - 1) >> 3];
        if ( (transformations & 0x10000) != 0 )
        {
          v44 = v11 - 1;
          v45 = 7;
          v46 = 0;
          v47 = ((_BYTE)width - 1) & 7;
          v48 = v44 & 7;
          v49 = -1;
          v50 = 0;
        }
        else
        {
          v47 = 7 - (((_BYTE)width - 1) & 7);
          v48 = 7 - (((_BYTE)v11 - 1) & 7);
          v46 = 0;
          v45 = 0;
          v50 = 7;
          v49 = 1;
        }
        if ( width )
        {
          do
          {
            v51 = (*v43 >> v47) & 1;
            if ( (int)v10 > 0 )
            {
              v52 = v10;
              do
              {
                *v42 = (v51 << v48) | *v42 & (32639 >> (7 - v48));
                if ( v48 == v50 )
                {
                  v48 = v45;
                  --v42;
                }
                else
                {
                  v48 += v49;
                }
                --v52;
              }
              while ( v52 );
            }
            if ( v47 == v50 )
            {
              v47 = v45;
              --v43;
            }
            else
            {
              v47 += v49;
            }
            ++v46;
          }
          while ( v46 < row_info->width );
        }
        break;
      case 2:
        v30 = ((_BYTE)width - 1) & 3;
        v31 = ((_BYTE)v11 - 1) & 3;
        v32 = &row[(unsigned __int64)(width - 1) >> 2];
        v33 = &row[(unsigned __int64)(v11 - 1) >> 2];
        if ( (transformations & 0x10000) != 0 )
        {
          v34 = 6;
          v35 = 2 * v30;
          v36 = 2 * v31;
          v37 = 0;
          v38 = 0;
          v39 = -2;
        }
        else
        {
          v35 = 6 - 2 * v30;
          v36 = 6 - 2 * v31;
          v37 = 0;
          v34 = 0;
          v38 = 6;
          v39 = 2;
        }
        if ( width )
        {
          do
          {
            v40 = (*v32 >> v35) & 3;
            if ( (int)v10 > 0 )
            {
              v41 = v10;
              do
              {
                *v33 = (v40 << v36) | *v33 & (16191 >> (6 - v36));
                if ( v36 == v38 )
                {
                  v36 = v34;
                  --v33;
                }
                else
                {
                  v36 += v39;
                }
                --v41;
              }
              while ( v41 );
            }
            if ( v35 == v38 )
            {
              v35 = v34;
              --v32;
            }
            else
            {
              v35 += v39;
            }
            ++v37;
          }
          while ( v37 < row_info->width );
        }
        break;
      case 4:
        v18 = ((_BYTE)width - 1) & 1;
        v19 = ((_BYTE)v11 - 1) & 1;
        v20 = &row[(unsigned __int64)(width - 1) >> 1];
        v21 = &row[(unsigned __int64)(v11 - 1) >> 1];
        if ( (transformations & 0x10000) != 0 )
        {
          v22 = 4;
          v23 = 4 * v18;
          v24 = 4 * v19;
          v25 = 0;
          v26 = 0;
          v27 = -4;
        }
        else
        {
          v26 = 4;
          v23 = 4 - 4 * v18;
          v27 = 4;
          v24 = 4 - 4 * v19;
          v25 = 0;
          v22 = 0;
        }
        if ( width )
        {
          do
          {
            v28 = (*v20 >> v23) & 0xF;
            if ( (int)v10 > 0 )
            {
              v29 = v10;
              do
              {
                *v21 = (v28 << v24) | *v21 & (3855 >> (4 - v24));
                if ( v24 == v26 )
                {
                  v24 = v22;
                  --v21;
                }
                else
                {
                  v24 += v27;
                }
                --v29;
              }
              while ( v29 );
            }
            if ( v23 == v26 )
            {
              v23 = v22;
              --v20;
            }
            else
            {
              v23 += v27;
            }
            ++v25;
          }
          while ( v25 < row_info->width );
        }
        break;
      default:
        v12 = (unsigned __int64)row_info->pixel_depth >> 3;
        v13 = v11 - 1;
        v14 = 0;
        v15 = &row[v12 * (width - 1)];
        v16 = &row[v12 * v13];
        if ( width )
        {
          do
          {
            memmove(Src, v15, v12);
            if ( (int)v10 > 0 )
            {
              v17 = v10;
              do
              {
                memmove(v16, Src, v12);
                v16 -= v12;
                --v17;
              }
              while ( v17 );
            }
            v15 -= v12;
            ++v14;
          }
          while ( v14 < row_info->width );
        }
        break;
    }
    v53 = row_info->pixel_depth;
    row_info->width = v55;
    if ( v53 < 8u )
      v54 = (v55 * (unsigned __int64)v53 + 7) >> 3;
    else
      v54 = v55 * ((unsigned __int64)v53 >> 3);
    row_info->rowbytes = v54;
  }
}

void __fastcall png_handle_IEND(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // ecx

  mode = png_ptr->mode;
  if ( (mode & 5) != 5 )
    png_chunk_error(png_ptr, "out of place");
  png_ptr->mode = mode | 0x18;
  png_crc_finish(png_ptr, length);
  if ( length )
    png_chunk_benign_error(png_ptr, "invalid");
}

void __fastcall png_handle_IHDR(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  unsigned int v6; // er8
  unsigned int v7; // er9
  int color_type; // edx
  int bit_depth; // er10
  int compression_type; // er11
  int interlace_type; // esi
  int filter_type; // edi
  unsigned __int8 v13; // cl
  unsigned __int64 v14; // rcx
  unsigned __int8 data[11]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int8 v16; // [rsp+5Bh] [rbp-2Dh]
  unsigned __int8 v17; // [rsp+5Ch] [rbp-2Ch]

  mode = png_ptr->mode;
  if ( (mode & 1) != 0 )
    png_chunk_error(png_ptr, "out of place");
  if ( length != 13 )
    png_chunk_error(png_ptr, "invalid");
  png_ptr->mode = mode | 1;
  png_read_data(png_ptr, data, 0xDui64);
  png_calculate_crc(png_ptr, data, 0xDui64);
  png_crc_finish(png_ptr, 0);
  v6 = data[3] + ((data[2] + ((data[1] + (data[0] << 8)) << 8)) << 8);
  if ( v6 > 0x7FFFFFFF )
    png_error(png_ptr, "PNG unsigned integer out of range");
  v7 = data[7] + ((data[6] + ((data[5] + (data[4] << 8)) << 8)) << 8);
  if ( v7 > 0x7FFFFFFF )
    png_error(png_ptr, "PNG unsigned integer out of range");
  color_type = data[9];
  bit_depth = data[8];
  compression_type = data[10];
  interlace_type = v17;
  filter_type = v16;
  png_ptr->filter_type = v16;
  png_ptr->width = v6;
  png_ptr->height = v7;
  png_ptr->bit_depth = bit_depth;
  png_ptr->interlaced = interlace_type;
  png_ptr->color_type = color_type;
  png_ptr->compression_type = compression_type;
  switch ( (_BYTE)color_type )
  {
    case 2:
      png_ptr->channels = 3;
      break;
    case 4:
      png_ptr->channels = 2;
      break;
    case 6:
      png_ptr->channels = 4;
      break;
    default:
      png_ptr->channels = 1;
      break;
  }
  v13 = bit_depth * png_ptr->channels;
  png_ptr->pixel_depth = v13;
  if ( v13 < 8u )
    v14 = (v6 * (unsigned __int64)v13 + 7) >> 3;
  else
    v14 = v6 * ((unsigned __int64)v13 >> 3);
  png_ptr->rowbytes = v14;
  png_set_IHDR(png_ptr, info_ptr, v6, v7, bit_depth, color_type, interlace_type, compression_type, filter_type);
}

void __fastcall png_handle_PLTE(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  const char *v6; // rdx
  png_struct_def *v7; // rcx
  bool v8; // zf
  unsigned int v9; // ebp
  unsigned __int8 *p_blue; // rsi
  __int64 v11; // r14
  unsigned int valid; // edi
  unsigned __int8 data[16]; // [rsp+20h] [rbp-348h] BYREF
  png_color_struct palette; // [rsp+30h] [rbp-338h] BYREF

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 2) != 0 )
    png_chunk_error(png_ptr, (const char *)&colorspace);
  if ( (mode & 4) != 0 )
  {
    png_crc_finish(png_ptr, length);
    v6 = "out of place";
LABEL_5:
    v7 = png_ptr;
LABEL_6:
    png_chunk_benign_error(v7, v6);
    return;
  }
  v8 = (png_ptr->color_type & 2) == 0;
  png_ptr->mode = mode | 2;
  if ( v8 )
  {
    png_crc_finish(png_ptr, length);
    v6 = "ignored in grayscale PNG";
    goto LABEL_5;
  }
  if ( length > 0x300 || length != 3 * (length / 3) )
  {
    png_crc_finish(png_ptr, length);
    v6 = "invalid";
    v7 = png_ptr;
    if ( png_ptr->color_type == 3 )
      png_chunk_error(png_ptr, "invalid");
    goto LABEL_6;
  }
  v9 = (int)length / 3;
  if ( (int)length / 3 > 0 )
  {
    p_blue = &palette.blue;
    v11 = v9;
    do
    {
      png_read_data(png_ptr, data, 3ui64);
      png_calculate_crc(png_ptr, data, 3ui64);
      *(p_blue - 2) = data[0];
      p_blue += 3;
      *(p_blue - 4) = data[1];
      *(p_blue - 3) = data[2];
      --v11;
    }
    while ( v11 );
  }
  png_crc_finish(png_ptr, 0);
  png_set_PLTE(png_ptr, info_ptr, &palette, v9);
  if ( png_ptr->num_trans )
    goto LABEL_18;
  if ( !info_ptr )
    return;
  if ( (info_ptr->valid & 0x10) != 0 )
  {
LABEL_18:
    png_ptr->num_trans = 0;
    if ( info_ptr )
      info_ptr->num_trans = 0;
    png_chunk_benign_error(png_ptr, "tRNS must be after");
  }
  if ( info_ptr )
  {
    valid = info_ptr->valid;
    if ( (valid & 0x40) != 0 )
      png_chunk_benign_error(png_ptr, "hIST must be after");
    if ( (valid & 0x20) != 0 )
    {
      v6 = "bKGD must be after";
      goto LABEL_5;
    }
  }
}

void __fastcall png_handle_bKGD(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // ecx
  unsigned __int8 color_type; // al
  const char *v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned __int8 v10; // al
  unsigned __int16 num_palette; // dx
  png_color_struct *v12; // rdx
  png_color_16_struct background; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 data; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 v15; // [rsp+31h] [rbp-Fh]
  unsigned __int8 v16; // [rsp+32h] [rbp-Eh]
  unsigned __int8 v17; // [rsp+33h] [rbp-Dh]
  unsigned __int8 v18; // [rsp+34h] [rbp-Ch]
  unsigned __int8 v19; // [rsp+35h] [rbp-Bh]

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 || (color_type = png_ptr->color_type, color_type == 3) && (mode & 2) == 0 )
  {
    png_crc_finish(png_ptr, length);
    v7 = "out of place";
    goto LABEL_26;
  }
  if ( info_ptr && (info_ptr->valid & 0x20) != 0 )
  {
    png_crc_finish(png_ptr, length);
    v7 = (const char *)&colorspace;
  }
  else
  {
    if ( color_type == 3 )
      v8 = 1;
    else
      v8 = 2 * (color_type & 2 | 1);
    if ( length == v8 )
    {
      v9 = v8;
      png_read_data(png_ptr, &data, v8);
      png_calculate_crc(png_ptr, &data, v9);
      if ( (unsigned int)png_crc_finish(png_ptr, 0) )
        return;
      v10 = png_ptr->color_type;
      if ( v10 == 3 )
      {
        background.index = data;
        if ( info_ptr && (num_palette = info_ptr->num_palette) != 0 )
        {
          if ( data >= num_palette )
          {
            v7 = "invalid index";
            goto LABEL_26;
          }
          v12 = &png_ptr->palette[data];
          background.red = v12->red;
          background.green = v12->green;
          background.blue = v12->blue;
        }
        else
        {
          *(_DWORD *)&background.green = 0;
          background.red = 0;
        }
      }
      else
      {
        background.index = 0;
        if ( (v10 & 2) == 0 )
        {
          background.gray = v15 + (data << 8);
          background.blue = background.gray;
          background.green = background.gray;
          background.red = background.gray;
          png_set_bKGD(png_ptr, info_ptr, &background);
          return;
        }
        background.red = v15 + (data << 8);
        background.green = v17 + (v16 << 8);
        background.blue = v19 + (v18 << 8);
      }
      background.gray = 0;
      png_set_bKGD(png_ptr, info_ptr, &background);
      return;
    }
    png_crc_finish(png_ptr, length);
    v7 = "invalid";
  }
LABEL_26:
  png_chunk_benign_error(png_ptr, v7);
}

void __fastcall png_handle_cHRM(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  int v6; // er8
  int v7; // edx
  int v8; // er11
  int v9; // esi
  int v10; // er14
  int v11; // er15
  int v12; // er10
  int v13; // er9
  signed __int16 flags; // ax
  const char *v15; // rdx
  png_xy xy; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int8 data; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int8 v18; // [rsp+41h] [rbp-3Fh]
  unsigned __int8 v19; // [rsp+42h] [rbp-3Eh]
  unsigned __int8 v20; // [rsp+43h] [rbp-3Dh]
  unsigned __int8 v21; // [rsp+44h] [rbp-3Ch]
  unsigned __int8 v22; // [rsp+45h] [rbp-3Bh]
  unsigned __int8 v23; // [rsp+46h] [rbp-3Ah]
  unsigned __int8 v24; // [rsp+47h] [rbp-39h]
  unsigned __int8 v25; // [rsp+48h] [rbp-38h]
  unsigned __int8 v26; // [rsp+49h] [rbp-37h]
  unsigned __int8 v27; // [rsp+4Ah] [rbp-36h]
  unsigned __int8 v28; // [rsp+4Bh] [rbp-35h]
  unsigned __int8 v29; // [rsp+4Ch] [rbp-34h]
  unsigned __int8 v30; // [rsp+4Dh] [rbp-33h]
  unsigned __int8 v31; // [rsp+4Eh] [rbp-32h]
  unsigned __int8 v32; // [rsp+4Fh] [rbp-31h]
  unsigned __int8 v33; // [rsp+50h] [rbp-30h]
  unsigned __int8 v34; // [rsp+51h] [rbp-2Fh]
  unsigned __int8 v35; // [rsp+52h] [rbp-2Eh]
  unsigned __int8 v36; // [rsp+53h] [rbp-2Dh]
  unsigned __int8 v37; // [rsp+54h] [rbp-2Ch]
  unsigned __int8 v38; // [rsp+55h] [rbp-2Bh]
  unsigned __int8 v39; // [rsp+56h] [rbp-2Ah]
  unsigned __int8 v40; // [rsp+57h] [rbp-29h]
  unsigned __int8 v41; // [rsp+58h] [rbp-28h]
  unsigned __int8 v42; // [rsp+59h] [rbp-27h]
  unsigned __int8 v43; // [rsp+5Ah] [rbp-26h]
  unsigned __int8 v44; // [rsp+5Bh] [rbp-25h]
  unsigned __int8 v45; // [rsp+5Ch] [rbp-24h]
  unsigned __int8 v46; // [rsp+5Dh] [rbp-23h]
  unsigned __int8 v47; // [rsp+5Eh] [rbp-22h]
  unsigned __int8 v48; // [rsp+5Fh] [rbp-21h]

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 6) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
    return;
  }
  if ( length != 32 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "invalid");
    return;
  }
  png_read_data(png_ptr, &data, 0x20ui64);
  png_calculate_crc(png_ptr, &data, 0x20ui64);
  if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
  {
    v6 = -1;
    v7 = -1;
    v8 = -1;
    v9 = -1;
    v10 = -1;
    v11 = -1;
    if ( v20 + ((v19 + ((v18 + (data << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
      v7 = v20 + ((v19 + ((v18 + (data << 8)) << 8)) << 8);
    xy.whitex = v7;
    if ( v24 + ((v23 + ((v22 + (v21 << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
      v8 = v24 + ((v23 + ((v22 + (v21 << 8)) << 8)) << 8);
    xy.whitey = v8;
    if ( v28 + ((v27 + ((v26 + (v25 << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
      v10 = v28 + ((v27 + ((v26 + (v25 << 8)) << 8)) << 8);
    xy.redx = v10;
    if ( v32 + ((v31 + ((v30 + (v29 << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
      v11 = v32 + ((v31 + ((v30 + (v29 << 8)) << 8)) << 8);
    xy.redy = v11;
    if ( v36 + ((v35 + ((v34 + (v33 << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
      v9 = v36 + ((v35 + ((v34 + (v33 << 8)) << 8)) << 8);
    xy.greenx = v9;
    v12 = -1;
    v13 = -1;
    if ( v40 + ((v39 + ((v38 + (v37 << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
      v12 = v40 + ((v39 + ((v38 + (v37 << 8)) << 8)) << 8);
    xy.greeny = v12;
    if ( v44 + ((v43 + ((v42 + (v41 << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
      v13 = v44 + ((v43 + ((v42 + (v41 << 8)) << 8)) << 8);
    xy.bluex = v13;
    if ( v48 + ((v47 + ((v46 + (v45 << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
      v6 = v48 + ((v47 + ((v46 + (v45 << 8)) << 8)) << 8);
    xy.bluey = v6;
    if ( v7 == -1 || v8 == -1 || v10 == -1 || v11 == -1 || v9 == -1 || v12 == -1 || v13 == -1 || v6 == -1 )
    {
      v15 = "invalid values";
    }
    else
    {
      flags = png_ptr->colorspace.flags;
      if ( flags < 0 )
        return;
      if ( (flags & 0x10) == 0 )
      {
        png_ptr->colorspace.flags = flags | 0x10;
        png_colorspace_set_chromaticities(png_ptr, &png_ptr->colorspace, &xy, 1);
        png_colorspace_sync(png_ptr, info_ptr);
        return;
      }
      png_ptr->colorspace.flags = flags | 0x8000;
      png_colorspace_sync(png_ptr, info_ptr);
      v15 = (const char *)&colorspace;
    }
    png_chunk_benign_error(png_ptr, v15);
  }
}

void __fastcall png_handle_gAMA(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  int v6; // er8
  unsigned __int8 data; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v8; // [rsp+31h] [rbp+9h]
  unsigned __int8 v9; // [rsp+32h] [rbp+Ah]
  unsigned __int8 v10; // [rsp+33h] [rbp+Bh]

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 6) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
  }
  else if ( length == 4 )
  {
    png_read_data(png_ptr, &data, 4ui64);
    png_calculate_crc(png_ptr, &data, 4ui64);
    if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
    {
      v6 = -1;
      if ( v10 + ((v9 + ((v8 + (data << 8)) << 8)) << 8) <= 0x7FFFFFFFu )
        v6 = v10 + ((v9 + ((v8 + (data << 8)) << 8)) << 8);
      png_colorspace_set_gamma(png_ptr, &png_ptr->colorspace, v6);
      png_colorspace_sync(png_ptr, info_ptr);
    }
  }
  else
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "invalid");
  }
}

void __fastcall png_handle_hIST(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  int num_palette; // eax
  unsigned int v7; // ecx
  unsigned __int16 *v8; // rdi
  __int64 v9; // rbp
  unsigned __int8 data[16]; // [rsp+20h] [rbp-248h] BYREF
  unsigned __int16 hist[256]; // [rsp+30h] [rbp-238h] BYREF

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 || (mode & 2) == 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
  }
  else if ( info_ptr && (info_ptr->valid & 0x40) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, (const char *)&colorspace);
  }
  else
  {
    num_palette = png_ptr->num_palette;
    v7 = length >> 1;
    if ( length >> 1 == num_palette && v7 <= 0x100 )
    {
      if ( v7 )
      {
        v8 = hist;
        v9 = v7;
        do
        {
          png_read_data(png_ptr, data, 2ui64);
          png_calculate_crc(png_ptr, data, 2ui64);
          *v8++ = data[1] + (data[0] << 8);
          --v9;
        }
        while ( v9 );
      }
      if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
        png_set_hIST(png_ptr, info_ptr, hist);
    }
    else
    {
      png_crc_finish(png_ptr, length);
      png_chunk_benign_error(png_ptr, "invalid");
    }
  }
}

void __fastcall png_handle_iCCP(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  unsigned int v4; // er15
  char *msg; // r14
  signed __int16 flags; // ax
  unsigned int v9; // esi
  unsigned __int8 *v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v15; // esi
  unsigned __int8 *buffer; // rax
  unsigned __int8 *v17; // r12
  unsigned int adler; // er9
  unsigned __int64 v19; // rsi
  char *v20; // rax
  bool v21; // zf
  unsigned int chunk_bytes; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 out_size; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v25; // [rsp+58h] [rbp-A8h]
  unsigned __int64 size; // [rsp+60h] [rbp-A0h]
  unsigned __int8 profile[16]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  __int128 v32; // [rsp+C0h] [rbp-40h]
  __int128 v33; // [rsp+D0h] [rbp-30h]
  __int128 v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+F0h] [rbp-10h]
  char data[96]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int8 read_buffer[1024]; // [rsp+160h] [rbp+60h] BYREF

  mode = png_ptr->mode;
  v24 = 0;
  v4 = length;
  msg = 0i64;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 6) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
    return;
  }
  if ( length < 9 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "too short");
    return;
  }
  flags = png_ptr->colorspace.flags;
  if ( flags < 0 )
  {
    png_crc_finish(png_ptr, length);
    return;
  }
  if ( (flags & 4) != 0 )
  {
    msg = "too many profiles";
  }
  else
  {
    v9 = 81;
    if ( length < 0x51 )
      v9 = length;
    png_read_data(png_ptr, (unsigned __int8 *)data, v9);
    png_calculate_crc(png_ptr, (const unsigned __int8 *)data, v9);
    v4 -= v9;
    v10 = (unsigned __int8 *)data;
    chunk_bytes = v4;
    v11 = 0;
    v12 = 2;
    while ( v11 < v9 && *v10 )
    {
      if ( v12 - 1 >= v9 || !v10[1] )
      {
        ++v11;
        break;
      }
      if ( v12 >= v9 || !v10[2] )
      {
        v11 += 2;
        break;
      }
      if ( v12 + 1 >= v9 || !v10[3] )
      {
        v11 += 3;
        break;
      }
      if ( v12 + 2 >= v9 || !v10[4] )
      {
        v11 += 4;
        break;
      }
      v10 += 5;
      v11 += 5;
      v12 += 5;
      if ( v12 >= 0x52 )
        break;
    }
    if ( v11 - 1 > 0x4E )
    {
      msg = "bad keyword";
    }
    else
    {
      v13 = v11 + 1;
      if ( (unsigned int)v13 >= v9 || (size = v11 + 1, data[v13]) )
      {
        msg = "bad compression method";
      }
      else
      {
        if ( !png_inflate_claim(png_ptr, 0x69434350u) )
        {
          out_size = 132i64;
          png_ptr->zstream.next_in = (unsigned __int8 *)&data[v11 + 2];
          png_ptr->zstream.avail_in = v9 - v11 - 2;
          png_inflate_read(png_ptr, read_buffer, 0x400u, &chunk_bytes, profile, &out_size, 0);
          if ( !out_size )
          {
            v14 = profile[3] + ((profile[2] + ((profile[1] + (profile[0] << 8)) << 8)) << 8);
            if ( !png_icc_check_length(png_ptr, &png_ptr->colorspace, data, v14)
              || !png_icc_check_header(png_ptr, &png_ptr->colorspace, data, v14, profile, png_ptr->color_type) )
            {
              goto LABEL_53;
            }
            v15 = HIBYTE(v35) + ((BYTE2(v35) + ((BYTE1(v35) + ((unsigned __int8)v35 << 8)) << 8)) << 8);
            buffer = png_read_buffer(png_ptr, v14, 2);
            v17 = buffer;
            if ( !buffer )
            {
              msg = "out of memory";
              goto LABEL_53;
            }
            *(_OWORD *)buffer = *(_OWORD *)profile;
            *((_OWORD *)buffer + 1) = v28;
            *((_OWORD *)buffer + 2) = v29;
            *((_OWORD *)buffer + 3) = v30;
            *((_OWORD *)buffer + 4) = v31;
            *((_OWORD *)buffer + 5) = v32;
            *((_OWORD *)buffer + 6) = v33;
            *((_OWORD *)buffer + 7) = v34;
            *((_DWORD *)buffer + 32) = v35;
            v25 = (unsigned int)(12 * v15);
            out_size = v25;
            png_inflate_read(png_ptr, read_buffer, 0x400u, &chunk_bytes, buffer + 132, &out_size, 0);
            if ( !out_size )
            {
              if ( png_icc_check_tag_table(png_ptr, &png_ptr->colorspace, data, v14, v17) )
              {
                out_size = v14 - v25 - 132;
                png_inflate_read(png_ptr, read_buffer, 0x400u, &chunk_bytes, &v17[v25 + 132], &out_size, 1);
                v4 = chunk_bytes;
                if ( !chunk_bytes || (png_ptr->flags & 0x100000) != 0 )
                {
                  if ( out_size )
                  {
                    msg = "truncated";
                  }
                  else
                  {
                    if ( chunk_bytes )
                      png_chunk_warning(png_ptr, "extra compressed data");
                    png_crc_finish(png_ptr, v4);
                    adler = png_ptr->zstream.adler;
                    v24 = 1;
                    png_icc_set_sRGB(png_ptr, &png_ptr->colorspace, v17, adler);
                    if ( !info_ptr )
                      goto LABEL_49;
                    png_free_data(png_ptr, info_ptr, 0x10u, 0);
                    v19 = size;
                    v20 = (char *)png_malloc_base(png_ptr, size);
                    info_ptr->iccp_name = v20;
                    if ( v20 )
                    {
                      memmove(v20, data, v19);
                      info_ptr->free_me |= 0x10u;
                      info_ptr->valid |= 0x1000u;
                      info_ptr->iccp_proflen = v14;
                      info_ptr->iccp_profile = v17;
                      png_ptr->read_buffer = 0i64;
                    }
                    else
                    {
                      msg = "out of memory";
                      png_ptr->colorspace.flags |= 0x8000u;
                    }
                    png_colorspace_sync(png_ptr, info_ptr);
                    if ( !msg )
                    {
LABEL_49:
                      png_ptr->zowner = 0;
                      return;
                    }
                  }
                }
                else
                {
                  msg = "extra compressed data";
                }
LABEL_54:
                v21 = v24 == 0;
                png_ptr->zowner = 0;
                if ( !v21 )
                  goto LABEL_61;
                goto LABEL_60;
              }
LABEL_53:
              v4 = chunk_bytes;
              goto LABEL_54;
            }
          }
          msg = png_ptr->zstream.msg;
          goto LABEL_53;
        }
        msg = png_ptr->zstream.msg;
      }
    }
  }
LABEL_60:
  png_crc_finish(png_ptr, v4);
LABEL_61:
  png_ptr->colorspace.flags |= 0x8000u;
  png_colorspace_sync(png_ptr, info_ptr);
  if ( msg )
    png_chunk_benign_error(png_ptr, msg);
}

void __fastcall png_handle_iTXt(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int user_chunk_cache_max; // eax
  unsigned __int64 v5; // rsi
  unsigned int v7; // eax
  unsigned int mode; // eax
  unsigned __int8 *read_buffer; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // rax
  unsigned int v13; // ebx
  unsigned __int8 *v14; // rax
  char *msg; // rdx
  unsigned __int8 v16; // r14
  unsigned int v17; // ebx
  __int64 v18; // r12
  unsigned __int8 *v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // r15
  unsigned __int8 *v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  png_text_struct text_ptr; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 newlength; // [rsp+A0h] [rbp+8h] BYREF

  user_chunk_cache_max = png_ptr->user_chunk_cache_max;
  v5 = length;
  if ( user_chunk_cache_max )
  {
    if ( user_chunk_cache_max == 1 )
    {
      png_crc_finish(png_ptr, length);
      return;
    }
    v7 = user_chunk_cache_max - 1;
    png_ptr->user_chunk_cache_max = v7;
    if ( v7 == 1 )
    {
      png_crc_finish(png_ptr, length);
      png_chunk_benign_error(png_ptr, "no space in chunk cache");
      return;
    }
  }
  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
    png_ptr->mode = mode | 8;
  read_buffer = png_ptr->read_buffer;
  v10 = length + 1;
  if ( read_buffer )
  {
    if ( v10 <= png_ptr->read_buffer_size )
      goto LABEL_15;
    v11 = png_ptr->read_buffer;
    png_ptr->read_buffer = 0i64;
    png_ptr->read_buffer_size = 0i64;
    png_free(png_ptr, v11);
  }
  v12 = (unsigned __int8 *)png_malloc_base(png_ptr, (unsigned int)(v5 + 1));
  read_buffer = v12;
  if ( v12 )
  {
    png_ptr->read_buffer = v12;
    png_ptr->read_buffer_size = v10;
  }
  else
  {
    png_chunk_warning(png_ptr, "insufficient memory to read chunk");
  }
LABEL_15:
  if ( !read_buffer )
  {
    png_crc_finish(png_ptr, v5);
    png_chunk_benign_error(png_ptr, "out of memory");
    return;
  }
  png_read_data(png_ptr, read_buffer, v5);
  png_calculate_crc(png_ptr, read_buffer, v5);
  if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
  {
    v13 = 0;
    if ( !(_DWORD)v5 )
      goto LABEL_48;
    v14 = read_buffer;
    do
    {
      if ( !*v14 )
        break;
      ++v13;
      ++v14;
    }
    while ( v13 < (unsigned int)v5 );
    if ( v13 - 1 > 0x4E )
    {
LABEL_48:
      msg = "bad keyword";
      goto LABEL_49;
    }
    if ( v13 + 5 > (unsigned int)v5 )
      goto LABEL_24;
    v16 = read_buffer[v13 + 1];
    if ( v16 && (v16 != 1 || read_buffer[v13 + 2]) )
    {
      msg = "bad compression info";
      goto LABEL_49;
    }
    v17 = v13 + 3;
    v18 = v17;
    if ( v17 < (unsigned int)v5 )
    {
      v19 = &read_buffer[v17];
      do
      {
        if ( !*v19 )
          break;
        ++v17;
        ++v19;
      }
      while ( v17 < (unsigned int)v5 );
    }
    v20 = v17 + 1;
    v21 = v20;
    if ( v20 < (unsigned int)v5 )
    {
      v22 = &read_buffer[v20];
      do
      {
        if ( !*v22 )
          break;
        ++v20;
        ++v22;
      }
      while ( v20 < (unsigned int)v5 );
    }
    v23 = v20 + 1;
    if ( v16 )
    {
      if ( (unsigned int)v23 < (unsigned int)v5 )
      {
        newlength = -1i64;
        if ( (unsigned int)png_decompress_chunk(png_ptr, v5, v23, &newlength, 1) == 1 )
        {
          read_buffer = png_ptr->read_buffer;
        }
        else
        {
          msg = png_ptr->zstream.msg;
          if ( msg )
            goto LABEL_49;
        }
        v24 = newlength;
LABEL_46:
        read_buffer[v23 + v24] = 0;
        text_ptr.itxt_length = v24;
        text_ptr.key = (char *)read_buffer;
        text_ptr.compression = 2 - (v16 != 0);
        text_ptr.text_length = 0i64;
        text_ptr.lang = (char *)&read_buffer[v18];
        text_ptr.lang_key = (char *)&read_buffer[v21];
        text_ptr.text = (char *)&read_buffer[v23];
        if ( !png_set_text_2(png_ptr, info_ptr, &text_ptr, 1) )
          return;
        msg = "insufficient memory";
        goto LABEL_49;
      }
    }
    else if ( (unsigned int)v23 <= (unsigned int)v5 )
    {
      v24 = (unsigned int)(v5 - v23);
      goto LABEL_46;
    }
LABEL_24:
    msg = "truncated";
LABEL_49:
    png_chunk_benign_error(png_ptr, msg);
  }
}

void __fastcall png_handle_oFFs(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  unsigned __int8 data[16]; // [rsp+30h] [rbp-28h] BYREF

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
  }
  else if ( info_ptr && (info_ptr->valid & 0x100) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, (const char *)&colorspace);
  }
  else if ( length == 9 )
  {
    png_read_data(png_ptr, data, 9ui64);
    png_calculate_crc(png_ptr, data, 9ui64);
    if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
      png_set_oFFs(
        png_ptr,
        info_ptr,
        data[3] + (data[1] << 16) + (data[2] << 8) + (data[0] << 24),
        data[7] + (data[4] << 24) + (data[5] << 16) + (data[6] << 8),
        data[8]);
  }
  else
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "invalid");
  }
}

void __fastcall png_handle_pCAL(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int8 *read_buffer; // r15
  unsigned __int8 *v9; // rdx
  unsigned __int8 *v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int8 *v12; // rcx
  unsigned __int8 v13; // bp
  _BYTE *v14; // r12
  int v15; // er13
  unsigned __int8 v16; // al
  const char *v17; // rdx
  _BYTE *i; // rbx
  char **params; // rax
  char **v20; // r12
  char *units; // [rsp+50h] [rbp-48h]
  unsigned __int8 v22; // [rsp+A0h] [rbp+8h]
  int X1; // [rsp+B8h] [rbp+20h]

  mode = png_ptr->mode;
  v5 = length;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
    return;
  }
  if ( info_ptr && (info_ptr->valid & 0x400) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, (const char *)&colorspace);
    return;
  }
  v6 = length + 1;
  v7 = 0i64;
  read_buffer = png_ptr->read_buffer;
  if ( read_buffer )
  {
    if ( v6 <= png_ptr->read_buffer_size )
      goto LABEL_12;
    v9 = png_ptr->read_buffer;
    png_ptr->read_buffer = 0i64;
    png_ptr->read_buffer_size = 0i64;
    png_free(png_ptr, v9);
  }
  v10 = (unsigned __int8 *)png_malloc_base(png_ptr, (unsigned int)(v5 + 1));
  read_buffer = v10;
  if ( !v10 )
  {
    png_crc_finish(png_ptr, v5);
    png_chunk_benign_error(png_ptr, "out of memory");
    return;
  }
  png_ptr->read_buffer = v10;
  png_ptr->read_buffer_size = v6;
LABEL_12:
  png_crc_read(png_ptr, read_buffer, v5);
  if ( (unsigned int)png_crc_finish(png_ptr, 0) )
    return;
  v11 = (unsigned __int64)&read_buffer[v5];
  v12 = read_buffer;
  for ( read_buffer[v5] = 0; *v12; ++v12 )
    ;
  if ( v11 <= (unsigned __int64)(v12 + 12) )
  {
    png_chunk_benign_error(png_ptr, "invalid");
    return;
  }
  v13 = v12[10];
  v14 = v12 + 11;
  units = (char *)(v12 + 11);
  v15 = v12[4] + (v12[1] << 24) + (v12[3] << 8) + (v12[2] << 16);
  v16 = v12[9];
  X1 = v12[8] + (v12[5] << 24) + (v12[7] << 8) + (v12[6] << 16);
  v22 = v16;
  if ( v16 )
  {
    switch ( v16 )
    {
      case 1u:
        if ( v13 != 3 )
          goto LABEL_28;
        break;
      case 2u:
        if ( v13 != 3 )
          goto LABEL_28;
        break;
      case 3u:
        if ( v13 == 4 )
          break;
        goto LABEL_28;
      default:
        png_chunk_benign_error(png_ptr, "unrecognized equation type");
        break;
    }
LABEL_32:
    for ( i = v14; *i; ++i )
      ;
    params = (char **)png_malloc_warn(png_ptr, 8i64 * v13);
    v20 = params;
    if ( params )
    {
      if ( !v13 )
      {
LABEL_42:
        png_set_pCAL(png_ptr, info_ptr, (const char *)read_buffer, v15, X1, v22, v13, units, params);
        png_free(png_ptr, v20);
        return;
      }
      while ( 1 )
      {
        params[v7] = ++i;
        if ( (unsigned __int64)i > v11 )
          break;
        while ( *i )
        {
          if ( (unsigned __int64)++i > v11 )
            goto LABEL_40;
        }
        if ( ++v7 >= v13 )
          goto LABEL_42;
      }
LABEL_40:
      png_free(png_ptr, params);
      v17 = "invalid data";
    }
    else
    {
      v17 = "out of memory";
    }
    goto LABEL_29;
  }
  if ( v13 == 2 )
    goto LABEL_32;
LABEL_28:
  v17 = "invalid parameter count";
LABEL_29:
  png_chunk_benign_error(png_ptr, v17);
}

void __fastcall png_handle_pHYs(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  unsigned __int8 data[16]; // [rsp+30h] [rbp-28h] BYREF

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
  }
  else if ( info_ptr && SLOBYTE(info_ptr->valid) < 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, (const char *)&colorspace);
  }
  else if ( length == 9 )
  {
    png_read_data(png_ptr, data, 9ui64);
    png_calculate_crc(png_ptr, data, 9ui64);
    if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
      png_set_pHYs(
        png_ptr,
        info_ptr,
        data[3] + ((data[2] + ((data[1] + (data[0] << 8)) << 8)) << 8),
        data[7] + ((data[6] + ((data[5] + (data[4] << 8)) << 8)) << 8),
        data[8]);
  }
  else
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "invalid");
  }
}

void __fastcall png_handle_sBIT(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  unsigned int channels; // esi
  unsigned __int8 bit_depth; // bp
  unsigned int v9; // eax
  unsigned __int8 *p_data; // rcx
  bool v11; // zf
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 data; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v15; // [rsp+41h] [rbp+9h]
  unsigned __int8 v16; // [rsp+42h] [rbp+Ah]
  unsigned __int8 v17; // [rsp+43h] [rbp+Bh]

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 6) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
  }
  else if ( info_ptr && (info_ptr->valid & 2) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, (const char *)&colorspace);
  }
  else
  {
    if ( png_ptr->color_type == 3 )
    {
      channels = 3;
      bit_depth = 8;
    }
    else
    {
      channels = png_ptr->channels;
      bit_depth = png_ptr->bit_depth;
    }
    if ( length == channels && length <= 4 )
    {
      v17 = bit_depth;
      v16 = bit_depth;
      v15 = bit_depth;
      data = bit_depth;
      png_read_data(png_ptr, &data, channels);
      png_calculate_crc(png_ptr, &data, channels);
      v9 = png_crc_finish(png_ptr, 0);
      if ( !v9 )
      {
        if ( channels )
        {
          p_data = &data;
          while ( *p_data && *p_data <= bit_depth )
          {
            ++v9;
            ++p_data;
            if ( v9 >= channels )
              goto LABEL_18;
          }
          png_chunk_benign_error(png_ptr, "invalid");
        }
        else
        {
LABEL_18:
          v11 = (png_ptr->color_type & 2) == 0;
          v12 = data;
          png_ptr->sig_bit.red = data;
          if ( v11 )
          {
            png_ptr->sig_bit.gray = v12;
            png_ptr->sig_bit.green = v12;
            png_ptr->sig_bit.blue = v12;
            v13 = v15;
          }
          else
          {
            png_ptr->sig_bit.green = v15;
            png_ptr->sig_bit.blue = v16;
            v13 = v17;
          }
          png_ptr->sig_bit.alpha = v13;
          png_set_sBIT(png_ptr, info_ptr, &png_ptr->sig_bit);
        }
      }
    }
    else
    {
      png_chunk_benign_error(png_ptr, "invalid");
      png_crc_finish(png_ptr, length);
    }
  }
}

void __fastcall png_handle_sCAL(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rbp
  char *read_buffer; // rdi
  unsigned __int8 *v9; // rax
  unsigned __int64 v10; // r14
  const char *v11; // rdx
  png_struct_def *v12; // rcx
  char v13; // al
  unsigned __int64 v14; // rsi
  int statep; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 whereami; // [rsp+78h] [rbp+20h] BYREF

  mode = png_ptr->mode;
  v5 = length;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
    return;
  }
  if ( info_ptr && (info_ptr->valid & 0x4000) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, (const char *)&colorspace);
    return;
  }
  if ( length < 4 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "invalid");
    return;
  }
  v7 = length + 1;
  read_buffer = (char *)png_ptr->read_buffer;
  if ( read_buffer )
  {
    if ( v7 <= png_ptr->read_buffer_size )
      goto LABEL_14;
    png_ptr->read_buffer = 0i64;
    png_ptr->read_buffer_size = 0i64;
    png_free(png_ptr, read_buffer);
  }
  v9 = (unsigned __int8 *)png_malloc_base(png_ptr, (unsigned int)(v5 + 1));
  read_buffer = (char *)v9;
  if ( !v9 )
  {
    png_chunk_benign_error(png_ptr, "out of memory");
    png_crc_finish(png_ptr, v5);
    return;
  }
  png_ptr->read_buffer = v9;
  png_ptr->read_buffer_size = v7;
LABEL_14:
  png_crc_read(png_ptr, (unsigned __int8 *)read_buffer, v5);
  read_buffer[v5] = 0;
  v10 = v5;
  if ( (unsigned int)png_crc_finish(png_ptr, 0) )
    return;
  if ( (unsigned __int8)(*read_buffer - 1) <= 1u )
  {
    whereami = 1i64;
    statep = 0;
    if ( !(unsigned int)png_check_fp_number(read_buffer, v5, &statep, &whereami)
      || whereami >= v5
      || (v13 = read_buffer[whereami], v14 = whereami + 1, ++whereami, v13) )
    {
      v11 = "bad width format";
    }
    else if ( (statep & 0x188) == 264 )
    {
      statep = 0;
      if ( (unsigned int)png_check_fp_number(read_buffer, v10, &statep, &whereami) && whereami == v10 )
      {
        v12 = png_ptr;
        if ( (statep & 0x188) == 264 )
        {
          png_set_sCAL_s(png_ptr, info_ptr, (unsigned __int8)*read_buffer, read_buffer + 1, &read_buffer[v14]);
          return;
        }
        v11 = "non-positive height";
        goto LABEL_18;
      }
      v11 = "bad height format";
    }
    else
    {
      v11 = "non-positive width";
    }
  }
  else
  {
    v11 = "invalid unit";
  }
  v12 = png_ptr;
LABEL_18:
  png_chunk_benign_error(v12, v11);
}

void __fastcall png_handle_sPLT(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int user_chunk_cache_max; // eax
  __int64 v5; // r14
  unsigned int v7; // eax
  unsigned int mode; // eax
  unsigned __int64 v9; // rbx
  unsigned __int8 *read_buffer; // rbp
  int v11; // esi
  unsigned __int8 *v12; // rax
  unsigned __int8 *i; // rbx
  unsigned __int8 *v14; // rbx
  unsigned int v15; // ecx
  unsigned __int8 *v16; // rbx
  png_sPLT_entry_struct *v17; // r8
  __int64 v18; // r9
  unsigned __int16 v19; // ax
  unsigned __int8 *v20; // rbx
  __int16 v21; // dx
  __int16 v22; // ax
  png_sPLT_struct entries; // [rsp+20h] [rbp-38h] BYREF

  user_chunk_cache_max = png_ptr->user_chunk_cache_max;
  v5 = length;
  if ( user_chunk_cache_max )
  {
    if ( user_chunk_cache_max == 1 )
    {
      png_crc_finish(png_ptr, length);
      return;
    }
    v7 = user_chunk_cache_max - 1;
    png_ptr->user_chunk_cache_max = v7;
    if ( v7 == 1 )
    {
      png_warning(png_ptr, "No space in chunk cache for sPLT");
      png_crc_finish(png_ptr, v5);
      return;
    }
  }
  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
    return;
  }
  v9 = length + 1;
  read_buffer = png_ptr->read_buffer;
  v11 = 0;
  if ( read_buffer )
  {
    if ( v9 <= png_ptr->read_buffer_size )
      goto LABEL_14;
    png_ptr->read_buffer = 0i64;
    png_ptr->read_buffer_size = 0i64;
    png_free(png_ptr, read_buffer);
  }
  v12 = (unsigned __int8 *)png_malloc_base(png_ptr, (unsigned int)(v5 + 1));
  read_buffer = v12;
  if ( !v12 )
  {
    png_crc_finish(png_ptr, v5);
    png_chunk_benign_error(png_ptr, "out of memory");
    return;
  }
  png_ptr->read_buffer = v12;
  png_ptr->read_buffer_size = v9;
LABEL_14:
  png_crc_read(png_ptr, read_buffer, v5);
  if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
  {
    read_buffer[v5] = 0;
    for ( i = read_buffer; *i; ++i )
      ;
    v14 = i + 1;
    if ( v14 <= &read_buffer[v5 - 2] )
    {
      v15 = 10;
      entries.depth = *v14;
      v16 = v14 + 1;
      if ( entries.depth == 8 )
        v15 = 6;
      if ( ((int)v5 + (int)read_buffer - (int)v16) % v15 )
      {
        png_warning(png_ptr, "sPLT chunk has bad length");
      }
      else
      {
        entries.nentries = ((int)v5 + (int)read_buffer - (int)v16) / v15;
        entries.entries = (png_sPLT_entry_struct *)png_malloc_warn(png_ptr, 10i64 * entries.nentries);
        v17 = entries.entries;
        if ( entries.entries )
        {
          if ( entries.nentries > 0 )
          {
            v18 = 0i64;
            while ( 1 )
            {
              if ( entries.depth == 8 )
              {
                v17[v18].red = *v16;
                v17[v18].green = v16[1];
                v17[v18].blue = v16[2];
                v19 = v16[3];
                v20 = v16 + 4;
                v17[v18].alpha = v19;
              }
              else
              {
                v17[v18].red = v16[1] + (*v16 << 8);
                v17[v18].green = v16[3] + (v16[2] << 8);
                v17[v18].blue = v16[5] + (v16[4] << 8);
                v17[v18].alpha = v16[7] + (v16[6] << 8);
                v20 = v16 + 8;
              }
              v21 = *v20;
              ++v11;
              v22 = v20[1];
              v16 = v20 + 2;
              v17[v18++].frequency = v22 + (v21 << 8);
              if ( v11 >= entries.nentries )
                break;
              v17 = entries.entries;
            }
          }
          entries.name = (char *)read_buffer;
          png_set_sPLT(png_ptr, info_ptr, &entries, 1);
          png_free(png_ptr, entries.entries);
        }
        else
        {
          png_warning(png_ptr, "sPLT chunk requires too much memory");
        }
      }
    }
    else
    {
      png_warning(png_ptr, "malformed sPLT chunk");
    }
  }
}

void __fastcall png_handle_sRGB(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  signed __int16 flags; // ax
  unsigned __int8 data; // [rsp+30h] [rbp+8h] BYREF

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 6) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "out of place");
  }
  else if ( length == 1 )
  {
    png_read_data(png_ptr, &data, 1ui64);
    png_calculate_crc(png_ptr, &data, 1ui64);
    if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
    {
      flags = png_ptr->colorspace.flags;
      if ( flags >= 0 )
      {
        if ( (flags & 4) != 0 )
        {
          png_ptr->colorspace.flags = flags | 0x8000;
          png_colorspace_sync(png_ptr, info_ptr);
          png_chunk_benign_error(png_ptr, "too many profiles");
        }
        else
        {
          png_colorspace_set_sRGB(png_ptr, &png_ptr->colorspace, data);
          png_colorspace_sync(png_ptr, info_ptr);
        }
      }
    }
  }
  else
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, "invalid");
  }
}

void __fastcall png_handle_tEXt(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int user_chunk_cache_max; // eax
  unsigned __int64 v5; // rsi
  unsigned int v7; // eax
  unsigned int mode; // eax
  unsigned __int8 *read_buffer; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // rax
  unsigned __int8 *i; // rax
  char *v14; // rcx
  unsigned __int64 v15; // rax
  png_text_struct text_ptr; // [rsp+20h] [rbp-48h] BYREF

  user_chunk_cache_max = png_ptr->user_chunk_cache_max;
  v5 = length;
  if ( user_chunk_cache_max )
  {
    if ( user_chunk_cache_max == 1 )
    {
      png_crc_finish(png_ptr, length);
      return;
    }
    v7 = user_chunk_cache_max - 1;
    png_ptr->user_chunk_cache_max = v7;
    if ( v7 == 1 )
    {
      png_crc_finish(png_ptr, length);
      png_chunk_benign_error(png_ptr, "no space in chunk cache");
      return;
    }
  }
  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
    png_ptr->mode = mode | 8;
  read_buffer = png_ptr->read_buffer;
  v10 = length + 1;
  if ( read_buffer )
  {
    if ( v10 <= png_ptr->read_buffer_size )
      goto LABEL_14;
    v11 = png_ptr->read_buffer;
    png_ptr->read_buffer = 0i64;
    png_ptr->read_buffer_size = 0i64;
    png_free(png_ptr, v11);
  }
  v12 = (unsigned __int8 *)png_malloc_base(png_ptr, (unsigned int)(v5 + 1));
  read_buffer = v12;
  if ( !v12 )
  {
    png_chunk_warning(png_ptr, "insufficient memory to read chunk");
    png_chunk_benign_error(png_ptr, "out of memory");
    return;
  }
  png_ptr->read_buffer = v12;
  png_ptr->read_buffer_size = v10;
LABEL_14:
  png_read_data(png_ptr, read_buffer, v5);
  png_calculate_crc(png_ptr, read_buffer, v5);
  if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
  {
    read_buffer[v5] = 0;
    for ( i = read_buffer; *i; ++i )
      ;
    text_ptr.key = (char *)read_buffer;
    v14 = (char *)(i + 1);
    text_ptr.itxt_length = 0i64;
    if ( i == &read_buffer[v5] )
      v14 = (char *)i;
    v15 = -1i64;
    text_ptr.text = v14;
    text_ptr.compression = -1;
    *(_OWORD *)&text_ptr.lang = 0i64;
    do
      ++v15;
    while ( v14[v15] );
    text_ptr.text_length = v15;
    if ( png_set_text_2(png_ptr, info_ptr, &text_ptr, 1) )
      png_warning(png_ptr, "Insufficient memory to process text chunk");
  }
}

void __fastcall png_handle_tIME(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int mode; // eax
  png_time_struct mod_time; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 data[8]; // [rsp+28h] [rbp-20h] BYREF

  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( info_ptr && (info_ptr->valid & 0x200) != 0 )
  {
    png_crc_finish(png_ptr, length);
    png_chunk_benign_error(png_ptr, (const char *)&colorspace);
  }
  else
  {
    if ( (mode & 4) != 0 )
      png_ptr->mode = mode | 8;
    if ( length == 7 )
    {
      png_read_data(png_ptr, data, 7ui64);
      png_calculate_crc(png_ptr, data, 7ui64);
      if ( !(unsigned int)png_crc_finish(png_ptr, 0) )
      {
        mod_time.second = data[6];
        mod_time.minute = data[5];
        mod_time.hour = data[4];
        mod_time.day = data[3];
        mod_time.month = data[2];
        mod_time.year = data[1] + (data[0] << 8);
        png_set_tIME(png_ptr, info_ptr, &mod_time);
      }
    }
    else
    {
      png_crc_finish(png_ptr, length);
      png_chunk_benign_error(png_ptr, "invalid");
    }
  }
}

void __fastcall png_handle_tRNS(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned __int64 v4; // rsi
  unsigned int mode; // ecx
  const char *v7; // rdx
  unsigned __int8 color_type; // al
  png_struct_def *v9; // rcx
  __int16 v10; // dx
  __int16 v11; // dx
  __int16 v12; // ax
  unsigned __int16 v13; // dx
  __int16 v14; // ax
  unsigned __int8 data[4]; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int8 ptr[12]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int8 trans_alpha[256]; // [rsp+40h] [rbp-128h] BYREF

  v4 = length;
  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
  {
LABEL_3:
    png_crc_finish(png_ptr, length);
    v7 = "out of place";
LABEL_24:
    png_chunk_benign_error(png_ptr, v7);
    return;
  }
  if ( info_ptr && (info_ptr->valid & 0x10) != 0 )
  {
    png_crc_finish(png_ptr, length);
    v7 = (const char *)&colorspace;
    goto LABEL_24;
  }
  color_type = png_ptr->color_type;
  if ( color_type )
  {
    if ( color_type == 2 )
    {
      v9 = png_ptr;
      if ( length != 6 )
        goto LABEL_9;
      png_read_data(png_ptr, ptr, 6ui64);
      png_calculate_crc(png_ptr, ptr, 6ui64);
      v11 = ptr[0];
      png_ptr->num_trans = 1;
      v12 = ptr[3];
      png_ptr->trans_color.red = ptr[1] + (v11 << 8);
      v13 = v12 + (ptr[2] << 8);
      v14 = ptr[5];
      png_ptr->trans_color.green = v13;
      png_ptr->trans_color.blue = v14 + (ptr[4] << 8);
    }
    else
    {
      if ( color_type != 3 )
      {
        png_crc_finish(png_ptr, length);
        v7 = "invalid with alpha channel";
        goto LABEL_24;
      }
      if ( (mode & 2) == 0 )
        goto LABEL_3;
      if ( length > png_ptr->num_palette || length - 1 > 0xFF )
      {
        png_crc_finish(png_ptr, length);
        v7 = "invalid";
        goto LABEL_24;
      }
      png_read_data(png_ptr, trans_alpha, length);
      png_calculate_crc(png_ptr, trans_alpha, v4);
      png_ptr->num_trans = v4;
    }
  }
  else
  {
    v9 = png_ptr;
    if ( length != 2 )
    {
LABEL_9:
      png_crc_finish(v9, length);
      v7 = "invalid";
      goto LABEL_24;
    }
    png_read_data(png_ptr, data, 2ui64);
    png_calculate_crc(png_ptr, data, 2ui64);
    v10 = data[0];
    png_ptr->num_trans = 1;
    png_ptr->trans_color.gray = data[1] + (v10 << 8);
  }
  if ( (unsigned int)png_crc_finish(png_ptr, 0) )
    png_ptr->num_trans = 0;
  else
    png_set_tRNS(png_ptr, info_ptr, trans_alpha, png_ptr->num_trans, &png_ptr->trans_color);
}

void __fastcall png_handle_unknown(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length, int keep)
{
  int v4; // esi
  int unknown_default; // edi
  int v8; // eax
  unsigned int user_chunk_cache_max; // ecx
  unsigned __int8 *data; // rdx

  v4 = 0;
  unknown_default = keep;
  if ( png_ptr->read_user_chunk_fn )
  {
    if ( !(unsigned int)png_cache_unknown_chunk(png_ptr, length) )
      goto LABEL_24;
    v8 = png_ptr->read_user_chunk_fn(png_ptr, &png_ptr->unknown_chunk);
    if ( v8 < 0 )
      png_chunk_error(png_ptr, "error in user chunk");
    if ( v8 )
      goto LABEL_23;
    if ( unknown_default < 2 )
    {
      if ( png_ptr->unknown_default < 2 )
      {
        png_chunk_warning(png_ptr, "Saving unknown chunk:");
        png_app_warning(png_ptr, "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks");
      }
      goto LABEL_17;
    }
  }
  else
  {
    if ( !keep )
      unknown_default = png_ptr->unknown_default;
    if ( unknown_default == 3 || unknown_default == 2 && (png_ptr->chunk_name & 0x20000000) != 0 )
    {
      if ( !(unsigned int)png_cache_unknown_chunk(png_ptr, length) )
        goto LABEL_24;
    }
    else
    {
      png_crc_finish(png_ptr, length);
    }
  }
  if ( unknown_default == 3 )
    goto LABEL_18;
  if ( unknown_default != 2 )
    goto LABEL_24;
LABEL_17:
  if ( (png_ptr->chunk_name & 0x20000000) == 0 )
    goto LABEL_24;
LABEL_18:
  user_chunk_cache_max = png_ptr->user_chunk_cache_max;
  if ( !user_chunk_cache_max )
  {
LABEL_22:
    png_set_unknown_chunks(png_ptr, info_ptr, &png_ptr->unknown_chunk, 1);
LABEL_23:
    v4 = 1;
    goto LABEL_24;
  }
  if ( user_chunk_cache_max == 1 )
    goto LABEL_24;
  if ( user_chunk_cache_max != 2 )
  {
    png_ptr->user_chunk_cache_max = user_chunk_cache_max - 1;
    goto LABEL_22;
  }
  png_ptr->user_chunk_cache_max = 1;
  png_chunk_benign_error(png_ptr, "no space in chunk cache");
LABEL_24:
  data = png_ptr->unknown_chunk.data;
  if ( data )
    png_free(png_ptr, data);
  png_ptr->unknown_chunk.data = 0i64;
  if ( !v4 && (png_ptr->chunk_name & 0x20000000) == 0 )
    png_chunk_error(png_ptr, "unhandled critical chunk");
}

void __fastcall png_handle_zTXt(png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int length)
{
  unsigned int user_chunk_cache_max; // eax
  unsigned __int64 v5; // rsi
  unsigned int v7; // eax
  unsigned int mode; // eax
  unsigned __int8 *read_buffer; // rbp
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rax
  unsigned int v12; // edi
  unsigned __int8 *v13; // rax
  char *msg; // rdx
  unsigned __int8 *v15; // rcx
  unsigned __int64 v16; // rdx
  png_text_struct text_ptr; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 newlength; // [rsp+90h] [rbp+8h] BYREF

  user_chunk_cache_max = png_ptr->user_chunk_cache_max;
  v5 = length;
  if ( user_chunk_cache_max )
  {
    if ( user_chunk_cache_max == 1 )
    {
      png_crc_finish(png_ptr, length);
      return;
    }
    v7 = user_chunk_cache_max - 1;
    png_ptr->user_chunk_cache_max = v7;
    if ( v7 == 1 )
    {
      png_crc_finish(png_ptr, length);
      png_chunk_benign_error(png_ptr, "no space in chunk cache");
      return;
    }
  }
  mode = png_ptr->mode;
  if ( (mode & 1) == 0 )
    png_chunk_error(png_ptr, "missing IHDR");
  if ( (mode & 4) != 0 )
    png_ptr->mode = mode | 8;
  read_buffer = png_ptr->read_buffer;
  if ( read_buffer )
  {
    if ( length <= png_ptr->read_buffer_size )
      goto LABEL_14;
    v10 = png_ptr->read_buffer;
    png_ptr->read_buffer = 0i64;
    png_ptr->read_buffer_size = 0i64;
    png_free(png_ptr, v10);
  }
  v11 = (unsigned __int8 *)png_malloc_base(png_ptr, v5);
  read_buffer = v11;
  if ( !v11 )
  {
    png_crc_finish(png_ptr, v5);
    msg = "out of memory";
    goto LABEL_31;
  }
  png_ptr->read_buffer = v11;
  png_ptr->read_buffer_size = v5;
LABEL_14:
  png_read_data(png_ptr, read_buffer, v5);
  png_calculate_crc(png_ptr, read_buffer, v5);
  if ( (unsigned int)png_crc_finish(png_ptr, 0) )
    return;
  v12 = 0;
  if ( !(_DWORD)v5 )
    goto LABEL_29;
  v13 = read_buffer;
  do
  {
    if ( !*v13 )
      break;
    ++v12;
    ++v13;
  }
  while ( v12 < (unsigned int)v5 );
  if ( v12 - 1 <= 0x4E )
  {
    if ( v12 + 3 <= (unsigned int)v5 )
    {
      if ( read_buffer[v12 + 1] )
      {
        msg = "unknown compression type";
      }
      else
      {
        newlength = -1i64;
        if ( (unsigned int)png_decompress_chunk(png_ptr, v5, v12 + 2, &newlength, 1) == 1 )
        {
          v15 = png_ptr->read_buffer;
          v16 = newlength;
          v15[newlength + 2 + v12] = 0;
          text_ptr.key = (char *)v15;
          text_ptr.text_length = v16;
          text_ptr.text = (char *)&v15[v12 + 2];
          text_ptr.compression = 0;
          memset(&text_ptr.itxt_length, 0, 24);
          if ( !png_set_text_2(png_ptr, info_ptr, &text_ptr, 1) )
            return;
          msg = "insufficient memory";
        }
        else
        {
          msg = png_ptr->zstream.msg;
          if ( !msg )
            return;
        }
      }
    }
    else
    {
      msg = "truncated";
    }
  }
  else
  {
LABEL_29:
    msg = "bad keyword";
  }
LABEL_31:
  png_chunk_benign_error(png_ptr, msg);
}

__int64 __fastcall png_inflate(
        png_struct_def *png_ptr,
        unsigned int owner,
        int finish,
        const unsigned __int8 *input,
        unsigned int *input_size_ptr,
        unsigned __int8 *output,
        unsigned __int64 *output_size_ptr)
{
  unsigned __int64 v8; // rsi
  unsigned int v9; // edi
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ebp
  unsigned int v18; // edi
  unsigned __int64 v19; // rsi
  char v21; // [rsp+40h] [rbp-448h] BYREF

  if ( png_ptr->zowner == owner )
  {
    v8 = *output_size_ptr;
    v9 = *input_size_ptr;
    png_ptr->zstream.next_in = (unsigned __int8 *)input;
    png_ptr->zstream.avail_in = 0;
    png_ptr->zstream.avail_out = 0;
    if ( output )
      png_ptr->zstream.next_out = output;
    do
    {
      v11 = png_ptr->zstream.avail_in + v9;
      v12 = -1;
      if ( v11 != -1 )
        v12 = v11;
      v13 = -1;
      v9 = v11 - v12;
      png_ptr->zstream.avail_in = v12;
      v14 = png_ptr->zstream.avail_out + v8;
      if ( !output )
      {
        v13 = 1024;
        png_ptr->zstream.next_out = (unsigned __int8 *)&v21;
      }
      if ( v14 < v13 )
        v13 = v14;
      png_ptr->zstream.avail_out = v13;
      v8 = v14 - v13;
      if ( v8 )
      {
        v15 = 0i64;
      }
      else
      {
        v15 = 2i64;
        if ( finish )
          v15 = 4i64;
      }
      v16 = inflate(&png_ptr->zstream, v15);
      v17 = v16;
    }
    while ( !v16 );
    if ( !output )
      png_ptr->zstream.next_out = 0i64;
    v18 = png_ptr->zstream.avail_in + v9;
    v19 = png_ptr->zstream.avail_out + v8;
    if ( v19 )
      *output_size_ptr -= v19;
    if ( v18 )
      *input_size_ptr -= v18;
    png_zstream_error(png_ptr, v16);
    return v17;
  }
  else
  {
    png_ptr->zstream.msg = "zstream unclaimed";
    return 4294967294i64;
  }
}

__int64 __fastcall png_inflate_claim(png_struct_def *png_ptr, unsigned int owner)
{
  unsigned int zowner; // ecx
  char v5; // al
  bool v6; // zf
  z_stream_s *p_zstream; // rcx
  unsigned int v8; // edi
  char buffer[64]; // [rsp+20h] [rbp-58h] BYREF

  zowner = png_ptr->zowner;
  if ( zowner )
  {
    buffer[0] = HIBYTE(zowner);
    buffer[1] = BYTE2(zowner);
    v5 = png_ptr->zowner;
    buffer[2] = BYTE1(zowner);
    buffer[3] = v5;
    png_safecat(buffer, 0x40ui64, 4ui64, " using zstream");
    png_chunk_warning(png_ptr, buffer);
    png_ptr->zowner = 0;
  }
  v6 = (png_ptr->flags & 2) == 0;
  p_zstream = &png_ptr->zstream;
  png_ptr->zstream.next_in = 0i64;
  png_ptr->zstream.avail_in = 0;
  png_ptr->zstream.next_out = 0i64;
  png_ptr->zstream.avail_out = 0;
  if ( v6 )
  {
    v8 = inflateInit_(p_zstream, "1.2.7", 88i64);
    if ( v8 )
      goto LABEL_5;
    png_ptr->flags |= 2u;
LABEL_9:
    png_ptr->zowner = owner;
    return v8;
  }
  v8 = inflateReset(p_zstream);
  if ( !v8 )
    goto LABEL_9;
LABEL_5:
  png_zstream_error(png_ptr, v8);
  return v8;
}

__int64 __fastcall png_inflate_read(
        png_struct_def *png_ptr,
        unsigned __int8 *read_buffer,
        unsigned int read_size,
        unsigned int *chunk_bytes,
        unsigned __int8 *next_out,
        unsigned __int64 *out_size,
        int finish)
{
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rdx
  unsigned int v14; // edi

  if ( png_ptr->zowner == png_ptr->chunk_name )
  {
    png_ptr->zstream.next_out = next_out;
    png_ptr->zstream.avail_out = 0;
    do
    {
      if ( !png_ptr->zstream.avail_in )
      {
        if ( read_size > *chunk_bytes )
          read_size = *chunk_bytes;
        *chunk_bytes -= read_size;
        if ( read_size )
        {
          png_read_data(png_ptr, read_buffer, read_size);
          png_calculate_crc(png_ptr, read_buffer, read_size);
        }
        png_ptr->zstream.next_in = read_buffer;
        png_ptr->zstream.avail_in = read_size;
      }
      if ( !png_ptr->zstream.avail_out )
      {
        v11 = *out_size;
        v12 = -1;
        if ( *out_size < 0xFFFFFFFF )
          v12 = *out_size;
        png_ptr->zstream.avail_out = v12;
        *out_size = v11 - v12;
      }
      if ( *chunk_bytes )
      {
        v13 = 0i64;
      }
      else
      {
        v13 = 2i64;
        if ( finish )
          v13 = 4i64;
      }
      v14 = inflate(&png_ptr->zstream, v13);
    }
    while ( !v14 && (*out_size || png_ptr->zstream.avail_out) );
    *out_size += png_ptr->zstream.avail_out;
    png_ptr->zstream.avail_out = 0;
    png_zstream_error(png_ptr, v14);
    return v14;
  }
  else
  {
    png_ptr->zstream.msg = "zstream unclaimed";
    return 4294967294i64;
  }
}

void __fastcall png_read_IDAT_data(png_struct_def *png_ptr, unsigned __int8 *output, unsigned __int64 avail_out)
{
  unsigned int chunk_header; // eax
  bool v7; // zf
  unsigned int IDAT_read_size; // er14
  unsigned __int8 *read_buffer; // rsi
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rax
  unsigned int v12; // ecx
  int v13; // edx
  __int64 v14; // rcx
  char *msg; // rdx
  png_struct_def *v16; // rcx
  char v17; // [rsp+20h] [rbp-438h] BYREF

  png_ptr->zstream.next_out = output;
  if ( !output )
    avail_out = 0i64;
  png_ptr->zstream.avail_out = 0;
  while ( 1 )
  {
    if ( png_ptr->zstream.avail_in )
      goto LABEL_16;
    if ( !png_ptr->idat_size )
    {
      do
      {
        png_crc_finish(png_ptr, 0);
        chunk_header = png_read_chunk_header(png_ptr);
        v7 = png_ptr->chunk_name == 1229209940;
        png_ptr->idat_size = chunk_header;
        if ( !v7 )
          png_error(png_ptr, "Not enough image data");
      }
      while ( !chunk_header );
    }
    IDAT_read_size = png_ptr->IDAT_read_size;
    read_buffer = png_ptr->read_buffer;
    if ( IDAT_read_size > png_ptr->idat_size )
      IDAT_read_size = png_ptr->idat_size;
    if ( !read_buffer )
      goto LABEL_13;
    if ( IDAT_read_size > png_ptr->read_buffer_size )
    {
      v10 = png_ptr->read_buffer;
      png_ptr->read_buffer = 0i64;
      png_ptr->read_buffer_size = 0i64;
      png_free(png_ptr, v10);
LABEL_13:
      v11 = (unsigned __int8 *)png_malloc_base(png_ptr, IDAT_read_size);
      read_buffer = v11;
      if ( !v11 )
        png_chunk_error(png_ptr, "insufficient memory to read chunk");
      png_ptr->read_buffer = v11;
      png_ptr->read_buffer_size = IDAT_read_size;
    }
    png_read_data(png_ptr, read_buffer, IDAT_read_size);
    png_calculate_crc(png_ptr, read_buffer, IDAT_read_size);
    png_ptr->idat_size -= IDAT_read_size;
    png_ptr->zstream.next_in = read_buffer;
    png_ptr->zstream.avail_in = IDAT_read_size;
LABEL_16:
    if ( output )
    {
      v12 = -1;
      if ( avail_out < 0xFFFFFFFF )
        v12 = avail_out;
      avail_out -= v12;
      png_ptr->zstream.avail_out = v12;
    }
    else
    {
      png_ptr->zstream.avail_out = 1024;
      png_ptr->zstream.next_out = (unsigned __int8 *)&v17;
    }
    v13 = inflate(&png_ptr->zstream, 0i64);
    v14 = output ? png_ptr->zstream.avail_out : 1024i64 - png_ptr->zstream.avail_out;
    avail_out += v14;
    png_ptr->zstream.avail_out = 0;
    if ( v13 == 1 )
      break;
    if ( v13 )
    {
      png_zstream_error(png_ptr, v13);
      msg = png_ptr->zstream.msg;
      v16 = png_ptr;
      if ( output )
        png_chunk_error(png_ptr, msg);
LABEL_36:
      png_chunk_benign_error(v16, msg);
      return;
    }
    if ( !avail_out )
      return;
  }
  png_ptr->mode |= 8u;
  png_ptr->flags |= 8u;
  png_ptr->zstream.next_out = 0i64;
  if ( png_ptr->zstream.avail_in || png_ptr->idat_size )
    png_chunk_benign_error(png_ptr, "Extra compressed data");
  if ( avail_out )
  {
    v16 = png_ptr;
    if ( output )
      png_error(png_ptr, "Not enough image data");
    msg = "Too much image data";
    goto LABEL_36;
  }
}

unsigned __int8 *__fastcall png_read_buffer(png_struct_def *png_ptr, unsigned __int64 new_size, int warn)
{
  unsigned __int8 *read_buffer; // rdi
  unsigned __int8 *v7; // rax

  read_buffer = png_ptr->read_buffer;
  if ( read_buffer )
  {
    if ( new_size <= png_ptr->read_buffer_size )
      return read_buffer;
    png_ptr->read_buffer = 0i64;
    png_ptr->read_buffer_size = 0i64;
    png_free(png_ptr, read_buffer);
  }
  v7 = (unsigned __int8 *)png_malloc_base(png_ptr, new_size);
  read_buffer = v7;
  if ( v7 )
  {
    png_ptr->read_buffer = v7;
    png_ptr->read_buffer_size = new_size;
  }
  else if ( warn < 2 )
  {
    if ( !warn )
      png_chunk_error(png_ptr, "insufficient memory to read chunk");
    png_chunk_warning(png_ptr, "insufficient memory to read chunk");
  }
  return read_buffer;
}

__int64 __fastcall png_read_chunk_header(png_struct_def *png_ptr)
{
  unsigned int v2; // ebx
  unsigned int chunk_name; // er8
  int i; // ecx
  unsigned __int8 data[4]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 ptr[4]; // [rsp+24h] [rbp-14h] BYREF

  png_ptr->io_state = 33;
  png_read_data(png_ptr, data, 8ui64);
  v2 = data[3] + ((data[2] + ((data[1] + (data[0] << 8)) << 8)) << 8);
  if ( v2 > 0x7FFFFFFF )
    png_error(png_ptr, "PNG unsigned integer out of range");
  png_ptr->chunk_name = ptr[3] | ((ptr[2] | ((ptr[1] | (ptr[0] << 8)) << 8)) << 8);
  png_reset_crc(png_ptr);
  png_calculate_crc(png_ptr, ptr, 4ui64);
  chunk_name = png_ptr->chunk_name;
  for ( i = 1; i <= 4; ++i )
  {
    if ( (unsigned int)(unsigned __int8)chunk_name - 65 > 0x39 || (unsigned int)(unsigned __int8)chunk_name - 91 <= 5 )
      png_chunk_error(png_ptr, "invalid chunk type");
    chunk_name >>= 8;
  }
  png_ptr->io_state = 65;
  return v2;
}

void __fastcall png_read_filter_row(
        png_struct_def *pp,
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const unsigned __int8 *prev_row,
        int filter)
{
  int pixel_depth; // er10
  void (__fastcall *v6)(png_row_info_struct *, unsigned __int8 *, const unsigned __int8 *); // rax

  if ( (unsigned int)(filter - 1) <= 3 )
  {
    if ( !pp->read_filter[0] )
    {
      pixel_depth = pp->pixel_depth;
      pp->read_filter[0] = png_read_filter_row_sub;
      pp->read_filter[1] = png_read_filter_row_up;
      pp->read_filter[2] = png_read_filter_row_avg;
      v6 = png_read_filter_row_paeth_multibyte_pixel;
      if ( (unsigned int)(pixel_depth + 7) >> 3 == 1 )
        v6 = png_read_filter_row_paeth_1byte_pixel;
      pp->read_filter[3] = v6;
    }
    pp->read_filter[filter - 1](row_info, row, prev_row);
  }
}

void __fastcall png_read_filter_row_avg(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const unsigned __int8 *prev_row)
{
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  __int64 v8; // r10
  signed __int64 v9; // r8
  int v10; // ecx
  int v11; // eax

  v3 = ((unsigned int)row_info->pixel_depth + 7) >> 3;
  v4 = v3;
  v5 = row_info->rowbytes - v3;
  if ( v3 )
  {
    v6 = v3;
    do
    {
      v7 = *prev_row++;
      *row++ += v7 >> 1;
      --v6;
    }
    while ( v6 );
  }
  if ( v5 )
  {
    v8 = -v4;
    v9 = prev_row - row;
    do
    {
      v10 = row[v8];
      v11 = (row++)[v9];
      *(row - 1) += (unsigned int)(v11 + v10) >> 1;
      --v5;
    }
    while ( v5 );
  }
}

void __fastcall png_read_filter_row_paeth_1byte_pixel(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const unsigned __int8 *prev_row)
{
  unsigned __int8 *v3; // r10
  int v4; // esi
  const unsigned __int8 *v5; // r15
  unsigned __int8 *v6; // r9
  unsigned __int8 v7; // cl
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  int v10; // edi
  signed int v11; // er11
  signed int v12; // ebp
  signed int v13; // eax

  v3 = row + 1;
  v4 = *prev_row;
  v5 = prev_row + 1;
  v6 = &row[row_info->rowbytes];
  v7 = v4 + *row;
  v8 = 0i64;
  *row = v7;
  v9 = v6 - (row + 1);
  if ( row + 1 > v6 )
    v9 = 0i64;
  if ( v9 )
  {
    do
    {
      v10 = *v5++;
      v11 = abs32(v10 - v4);
      v12 = abs32(v7 - v4);
      v13 = abs32(v7 - v4 + v10 - v4);
      if ( v12 < v11 )
      {
        v11 = v12;
        v7 = v10;
      }
      if ( v13 < v11 )
        v7 = v4;
      ++v8;
      v7 += *v3;
      v4 = v10;
      *v3++ = v7;
    }
    while ( v8 < v9 );
  }
}

void __fastcall png_read_filter_row_paeth_multibyte_pixel(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const unsigned __int8 *prev_row)
{
  unsigned __int8 *v4; // r9
  __int64 v5; // r10
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int8 *v9; // rdi
  __int64 v10; // r15
  int v11; // ebp
  int v12; // er14
  unsigned __int8 v13; // r10
  signed int v14; // ebx
  signed int v15; // esi
  signed int v16; // eax

  v4 = row;
  v5 = ((unsigned int)row_info->pixel_depth + 7) >> 3;
  v6 = &row[v5];
  v7 = 0i64;
  v8 = v6 - v4;
  if ( v4 > v6 )
    v8 = 0i64;
  if ( v8 )
  {
    do
    {
      ++v7;
      *v4++ += *prev_row++;
    }
    while ( v7 < v8 );
  }
  v9 = &v6[row_info->rowbytes - v5];
  if ( v4 < v9 )
  {
    v10 = -v5;
    do
    {
      v11 = prev_row[v10];
      v12 = *prev_row++;
      v13 = v4[v10];
      v14 = abs32(v12 - v11);
      v15 = abs32(v13 - v11);
      v16 = abs32(v13 - v11 + v12 - v11);
      if ( v15 < v14 )
      {
        v14 = v15;
        v13 = v12;
      }
      if ( v16 < v14 )
        v13 = v11;
      *v4++ += v13;
    }
    while ( v4 < v9 );
  }
}

void __fastcall png_read_filter_row_sub(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const unsigned __int8 *prev_row)
{
  unsigned __int64 rowbytes; // r9
  unsigned __int64 v4; // rax
  unsigned __int8 *v5; // r8
  unsigned __int8 *v6; // rdx
  unsigned __int8 v7; // cl

  rowbytes = row_info->rowbytes;
  v4 = ((unsigned int)row_info->pixel_depth + 7) >> 3;
  v5 = &row[v4];
  if ( v4 < rowbytes )
  {
    v6 = &row[-v4];
    do
    {
      v7 = v6[v4++];
      *v5++ += v7;
    }
    while ( v4 < rowbytes );
  }
}

void __fastcall png_read_filter_row_up(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const unsigned __int8 *prev_row)
{
  unsigned __int64 rowbytes; // r9
  unsigned __int64 v4; // rcx
  __m128i v5; // xmm1
  signed __int64 v6; // r8
  unsigned __int64 v7; // r9

  rowbytes = row_info->rowbytes;
  v4 = 0i64;
  if ( rowbytes )
  {
    if ( rowbytes >= 0x20 && (row > &prev_row[rowbytes - 1] || &row[rowbytes - 1] < prev_row) )
    {
      do
      {
        v4 += 32i64;
        *(__m128i *)row = _mm_add_epi8(
                            _mm_loadu_si128((const __m128i *)prev_row),
                            _mm_loadu_si128((const __m128i *)row));
        v5 = _mm_loadu_si128((const __m128i *)prev_row + 1);
        prev_row += 32;
        *((__m128i *)row + 1) = _mm_add_epi8(v5, _mm_loadu_si128((const __m128i *)row + 1));
        row += 32;
      }
      while ( v4 < (rowbytes & 0xFFFFFFFFFFFFFFE0ui64) );
    }
    if ( v4 < rowbytes )
    {
      v6 = prev_row - row;
      v7 = rowbytes - v4;
      do
      {
        *row += row[v6];
        ++row;
        --v7;
      }
      while ( v7 );
    }
  }
}

void __fastcall png_read_finish_IDAT(png_struct_def *png_ptr)
{
  unsigned int flags; // eax
  unsigned int idat_size; // edx

  if ( (png_ptr->flags & 8) == 0 )
  {
    png_read_IDAT_data(png_ptr, 0i64, 0i64);
    flags = png_ptr->flags;
    png_ptr->zstream.next_out = 0i64;
    if ( (flags & 8) == 0 )
    {
      png_ptr->mode |= 8u;
      png_ptr->flags = flags | 8;
    }
  }
  if ( png_ptr->zowner == 1229209940 )
  {
    idat_size = png_ptr->idat_size;
    png_ptr->zstream.next_in = 0i64;
    png_ptr->zstream.avail_in = 0;
    png_ptr->zowner = 0;
    png_crc_finish(png_ptr, idat_size);
  }
}

void __fastcall png_read_finish_row(png_struct_def *png_ptr)
{
  unsigned __int64 rowbytes; // r8
  unsigned __int8 v3; // r9
  bool v4; // zf
  unsigned int v5; // er10
  unsigned int v6; // eax

  if ( ++png_ptr->row_number >= png_ptr->num_rows )
  {
    if ( png_ptr->interlaced )
    {
      rowbytes = png_ptr->rowbytes;
      png_ptr->row_number = 0;
      memset(png_ptr->prev_row, 0, rowbytes + 1);
      while ( 1 )
      {
        v3 = ++png_ptr->pass;
        if ( v3 >= 7u )
          break;
        v4 = (png_ptr->transformations & 2) == 0;
        v5 = (png_ptr->width - png_pass_start[v3] + png_pass_inc_0[v3] - 1) / png_pass_inc_0[v3];
        png_ptr->iwidth = v5;
        if ( v4 )
        {
          v6 = (png_pass_yinc[v3] - png_pass_ystart[v3] + png_ptr->height - 1) / png_pass_yinc[v3];
          png_ptr->num_rows = v6;
          if ( !v6 || !v5 )
            continue;
        }
        return;
      }
    }
    png_read_finish_IDAT(png_ptr);
  }
}

void __fastcall png_read_sig(png_struct_def *png_ptr, png_info_def *info_ptr)
{
  unsigned __int8 sig_bytes; // al
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi

  sig_bytes = png_ptr->sig_bytes;
  if ( sig_bytes < 8u )
  {
    v5 = sig_bytes;
    v6 = 8i64 - sig_bytes;
    png_ptr->io_state = 17;
    png_read_data(png_ptr, &info_ptr->signature[sig_bytes], v6);
    png_ptr->sig_bytes = 8;
    if ( png_sig_cmp(info_ptr->signature, (unsigned int)v5, v6) )
    {
      if ( v5 < 4 )
      {
        if ( png_sig_cmp(info_ptr->signature, (unsigned int)v5, v6 - 4) )
          png_error(png_ptr, "Not a PNG file");
      }
      png_error(png_ptr, "PNG file corrupted by ASCII conversion");
    }
    if ( v5 < 3 )
      png_ptr->mode |= 0x1000u;
  }
}

void __fastcall png_read_start_row(png_struct_def *png_ptr)
{
  unsigned int height; // eax
  unsigned int width; // er10
  unsigned int transformations; // er8
  int pixel_depth; // edx
  unsigned __int8 color_type; // al
  unsigned int v7; // er8
  int v8; // ecx
  unsigned __int8 v9; // al
  int v10; // eax
  unsigned __int8 v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // rdx
  unsigned __int64 rowbytes; // r8
  unsigned __int8 *read_buffer; // rdx

  png_init_read_transformations(png_ptr);
  height = png_ptr->height;
  if ( png_ptr->interlaced )
  {
    if ( (png_ptr->transformations & 2) == 0 )
      height = (height + 7) >> 3;
    width = png_ptr->width;
    png_ptr->num_rows = height;
    png_ptr->iwidth = (width - png_pass_start_0[png_ptr->pass] + png_pass_inc_1[png_ptr->pass] - 1)
                    / png_pass_inc_1[png_ptr->pass];
  }
  else
  {
    width = png_ptr->width;
    png_ptr->iwidth = width;
    png_ptr->num_rows = height;
  }
  transformations = png_ptr->transformations;
  pixel_depth = png_ptr->pixel_depth;
  if ( (transformations & 4) != 0 && png_ptr->bit_depth < 8u )
    pixel_depth = 8;
  if ( (transformations & 0x1000) != 0 )
  {
    color_type = png_ptr->color_type;
    if ( color_type == 3 )
    {
      pixel_depth = 24;
      if ( png_ptr->num_trans )
        pixel_depth = 32;
    }
    else if ( color_type )
    {
      if ( color_type == 2 && png_ptr->num_trans )
        pixel_depth = 4 * pixel_depth / 3;
    }
    else
    {
      if ( pixel_depth < 8 )
        pixel_depth = 8;
      if ( png_ptr->num_trans )
        pixel_depth *= 2;
    }
  }
  if ( (transformations & 0x200) != 0 )
  {
    if ( (transformations & 0x1000) != 0 )
    {
      if ( png_ptr->bit_depth < 0x10u )
        pixel_depth *= 2;
    }
    else
    {
      png_ptr->transformations = transformations & 0xFFFFFDFF;
    }
  }
  v7 = png_ptr->transformations;
  v8 = 64;
  if ( (v7 & 0x8000) != 0 )
  {
    v9 = png_ptr->color_type;
    if ( v9 )
    {
      if ( (unsigned __int8)(v9 - 2) > 1u )
        goto LABEL_36;
      v10 = 64;
      if ( pixel_depth <= 32 )
        v10 = 32;
    }
    else
    {
      v10 = 32;
      if ( pixel_depth <= 8 )
        v10 = 16;
    }
    pixel_depth = v10;
  }
LABEL_36:
  if ( (v7 & 0x4000) != 0 )
  {
    if ( png_ptr->num_trans && (v7 & 0x1000) != 0
      || (png_ptr->transformations & 0x8000) != 0
      || (v11 = png_ptr->color_type, v11 == 4) )
    {
      if ( pixel_depth <= 16 )
        v8 = 32;
      pixel_depth = v8;
    }
    else if ( pixel_depth > 8 )
    {
      pixel_depth = 48;
      if ( v11 == 6 )
        pixel_depth = 64;
    }
    else
    {
      pixel_depth = 24;
      if ( v11 == 6 )
        pixel_depth = 32;
    }
  }
  if ( (v7 & 0x100000) != 0 && png_ptr->user_transform_depth * png_ptr->user_transform_channels > pixel_depth )
    pixel_depth = png_ptr->user_transform_depth * png_ptr->user_transform_channels;
  png_ptr->maximum_pixel_depth = pixel_depth;
  png_ptr->transformed_pixel_depth = 0;
  v12 = (width + 7) & 0xFFFFFFF8;
  if ( pixel_depth < 8 )
    v13 = (unsigned __int64)(v12 * pixel_depth + 7) >> 3;
  else
    v13 = v12 * ((unsigned __int64)pixel_depth >> 3);
  v14 = ((pixel_depth + 7) >> 3) + v13 + 49;
  if ( v14 > png_ptr->old_big_row_buf_size )
  {
    png_free(png_ptr, png_ptr->big_row_buf);
    png_free(png_ptr, png_ptr->big_prev_row);
    if ( png_ptr->interlaced )
      v15 = (unsigned __int8 *)png_calloc(png_ptr, v14);
    else
      v15 = (unsigned __int8 *)png_malloc(png_ptr, v14);
    png_ptr->big_row_buf = v15;
    v16 = (unsigned __int8 *)png_malloc(png_ptr, v14);
    v17 = png_ptr->big_row_buf + 32;
    png_ptr->big_prev_row = v16;
    png_ptr->old_big_row_buf_size = v14;
    png_ptr->row_buf = &v17[-((unsigned __int8)v17 & 0xF) - 1];
    png_ptr->prev_row = &v16[-(((_BYTE)v16 + 32) & 0xF) + 31];
  }
  rowbytes = png_ptr->rowbytes;
  if ( rowbytes == -1i64 )
    png_error(png_ptr, "Row has too many bytes to allocate in memory");
  memset(png_ptr->prev_row, 0, rowbytes + 1);
  read_buffer = png_ptr->read_buffer;
  if ( read_buffer )
  {
    png_ptr->read_buffer_size = 0i64;
    png_ptr->read_buffer = 0i64;
    png_free(png_ptr, read_buffer);
  }
  if ( (unsigned int)png_inflate_claim(png_ptr, 0x49444154u) )
    png_error(png_ptr, png_ptr->zstream.msg);
  png_ptr->flags |= 0x40u;
}

