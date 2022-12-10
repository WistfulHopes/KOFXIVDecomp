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

const unsigned char onebppswaptable[256]; // 0x1407526D0
const unsigned char twobppswaptable[256]; // 0x1407527D0
const unsigned char fourbppswaptable[256]; // 0x1407528D0
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
long png_set_interlace_handling(png_struct_def * png_ptr); // 0x14042D780
void png_do_invert(png_row_info_struct * row_info, unsigned char * row); // 0x14042D430
void png_do_swap(png_row_info_struct * row_info, unsigned char * row); // 0x14042D740
void png_do_packswap(png_row_info_struct * row_info, unsigned char * row); // 0x14042D500
void png_do_strip_channel(png_row_info_struct * row_info, unsigned char * row, long at_start); // 0x14042D570
void png_do_bgr(png_row_info_struct * row_info, unsigned char * row); // 0x14042D1B0
void png_do_check_palette_indexes(png_struct_def * png_ptr, png_row_info_struct * row_info); // 0x14042D2B0//decompilation failure at 1407526D0!
//decompilation failure at 1407527D0!
//decompilation failure at 1407528D0!
void __fastcall png_do_bgr(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 color_type; // r8
  unsigned __int8 bit_depth; // r9
  unsigned int width; // eax
  __int64 v5; // r8
  unsigned __int8 v6; // cl
  __int64 v7; // r8
  unsigned __int8 v8; // cl
  unsigned __int8 *v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // al
  unsigned __int8 v13; // cl
  unsigned __int8 *v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al
  unsigned __int8 v18; // cl

  color_type = row_info->color_type;
  if ( (color_type & 2) != 0 )
  {
    bit_depth = row_info->bit_depth;
    width = row_info->width;
    if ( bit_depth == 8 )
    {
      if ( color_type == 2 )
      {
        if ( width )
        {
          v5 = width;
          do
          {
            v6 = *row;
            *row = row[2];
            row[2] = v6;
            row += 3;
            --v5;
          }
          while ( v5 );
        }
      }
      else if ( color_type == 6 && width )
      {
        v7 = row_info->width;
        do
        {
          v8 = *row;
          *row = row[2];
          row[2] = v8;
          row += 4;
          --v7;
        }
        while ( v7 );
      }
    }
    else if ( bit_depth == 16 )
    {
      if ( color_type == 2 )
      {
        if ( width )
        {
          v9 = row + 1;
          v10 = row_info->width;
          do
          {
            v11 = *(v9 - 1);
            *(v9 - 1) = v9[3];
            v12 = v9[4];
            v9[3] = v11;
            v13 = *v9;
            *v9 = v12;
            v9[4] = v13;
            v9 += 6;
            --v10;
          }
          while ( v10 );
        }
      }
      else if ( color_type == 6 && width )
      {
        v14 = row + 1;
        v15 = row_info->width;
        do
        {
          v16 = *(v14 - 1);
          *(v14 - 1) = v14[3];
          v17 = v14[4];
          v14[3] = v16;
          v18 = *v14;
          *v14 = v17;
          v14[4] = v18;
          v14 += 8;
          --v15;
        }
        while ( v15 );
      }
    }
  }
}

void __fastcall png_do_check_palette_indexes(png_struct_def *png_ptr, png_row_info_struct *row_info)
{
  int num_palette; // er9
  unsigned __int8 *row_buf; // r10
  unsigned __int8 *v4; // rax
  unsigned int v5; // er9
  int v6; // edx
  int v7; // er8
  int num_palette_max; // er8
  unsigned int v9; // edx
  signed int v10; // edx

  num_palette = png_ptr->num_palette;
  if ( num_palette < 1 << row_info->bit_depth && (_WORD)num_palette )
  {
    row_buf = png_ptr->row_buf;
    v4 = &row_buf[row_info->rowbytes];
    v5 = -(row_info->width * row_info->pixel_depth) & 7;
    switch ( row_info->bit_depth )
    {
      case 1u:
        for ( ; v4 > row_buf; --v4 )
        {
          if ( *v4 >> v5 )
            png_ptr->num_palette_max = 1;
          LOBYTE(v5) = 0;
        }
        break;
      case 2u:
        if ( v4 > row_buf )
        {
          num_palette_max = png_ptr->num_palette_max;
          do
          {
            v9 = *v4 >> v5;
            if ( (unsigned __int8)(v9 & 3) > num_palette_max )
              num_palette_max = (*v4 >> v5) & 3;
            if ( (int)((v9 >> 2) & 3) > num_palette_max )
              num_palette_max = (v9 >> 2) & 3;
            if ( (int)((v9 >> 4) & 3) > num_palette_max )
              num_palette_max = (v9 >> 4) & 3;
            v10 = v9 >> 6;
            if ( v10 > num_palette_max )
              num_palette_max = v10;
            LOBYTE(v5) = 0;
            --v4;
          }
          while ( v4 > row_buf );
          png_ptr->num_palette_max = num_palette_max;
        }
        break;
      case 4u:
        if ( v4 > row_buf )
        {
          v7 = png_ptr->num_palette_max;
          do
          {
            if ( ((*v4 >> v5) & 0xF) > v7 )
              v7 = (*v4 >> v5) & 0xF;
            if ( (int)((unsigned int)(*v4 >> v5) >> 4) > v7 )
              v7 = (unsigned int)(*v4 >> v5) >> 4;
            LOBYTE(v5) = 0;
            --v4;
          }
          while ( v4 > row_buf );
          png_ptr->num_palette_max = v7;
        }
        break;
      default:
        if ( row_info->bit_depth == 8 && v4 > row_buf )
        {
          v6 = png_ptr->num_palette_max;
          do
          {
            if ( *v4 > v6 )
              v6 = *v4;
            --v4;
          }
          while ( v4 > row_buf );
          png_ptr->num_palette_max = v6;
        }
        break;
    }
  }
}

void __fastcall png_do_invert(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 color_type; // al
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __m128i si128; // xmm1
  unsigned __int64 v6; // rcx
  unsigned __int64 rowbytes; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // rdx
  unsigned __int64 v11; // rcx

  color_type = row_info->color_type;
  if ( color_type )
  {
    if ( color_type == 4 )
    {
      if ( row_info->bit_depth == 8 )
      {
        rowbytes = row_info->rowbytes;
        if ( rowbytes )
        {
          v8 = ((rowbytes - 1) >> 1) + 1;
          do
          {
            *row = ~*row;
            row += 2;
            --v8;
          }
          while ( v8 );
        }
      }
      else if ( row_info->bit_depth == 16 )
      {
        v9 = row_info->rowbytes;
        if ( v9 )
        {
          v10 = row + 1;
          v11 = ((v9 - 1) >> 2) + 1;
          do
          {
            *(v10 - 1) = ~*(v10 - 1);
            *v10 = ~*v10;
            v10 += 4;
            --v11;
          }
          while ( v11 );
        }
      }
    }
  }
  else
  {
    v3 = row_info->rowbytes;
    v4 = 0i64;
    if ( v3 )
    {
      if ( v3 >= 0x20 )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        do
        {
          v4 += 32i64;
          *(__m128i *)row = _mm_andnot_si128(_mm_loadu_si128((const __m128i *)row), si128);
          *((__m128i *)row + 1) = _mm_andnot_si128(_mm_loadu_si128((const __m128i *)row + 1), si128);
          row += 32;
        }
        while ( v4 < (v3 & 0xFFFFFFFFFFFFFFE0ui64) );
      }
      if ( v4 < v3 )
      {
        v6 = v3 - v4;
        do
        {
          *row = ~*row;
          ++row;
          --v6;
        }
        while ( v6 );
      }
    }
  }
}

void __fastcall png_do_packswap(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 bit_depth; // al
  unsigned __int64 rowbytes; // r8
  const unsigned __int8 *v4; // r9
  __int64 v5; // r10
  __int64 v6; // rax

  bit_depth = row_info->bit_depth;
  if ( bit_depth < 8u )
  {
    rowbytes = row_info->rowbytes;
    switch ( bit_depth )
    {
      case 1u:
        v4 = onebppswaptable;
        break;
      case 2u:
        v4 = twobppswaptable;
        break;
      case 4u:
        v4 = fourbppswaptable;
        break;
      default:
        return;
    }
    if ( row > &row[rowbytes] )
      rowbytes = 0i64;
    if ( rowbytes )
    {
      v5 = -(__int64)row;
      do
      {
        v6 = *row++;
        *(row - 1) = v4[v6];
      }
      while ( (unsigned __int64)&row[v5] < rowbytes );
    }
  }
}

void __fastcall png_do_strip_channel(png_row_info_struct *row_info, unsigned __int8 *row, int at_start)
{
  unsigned __int64 rowbytes; // r11
  unsigned __int8 channels; // cl
  unsigned __int8 *v6; // r11
  unsigned __int8 *v8; // rax
  unsigned __int8 bit_depth; // cl
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int8 v14; // cl
  __int64 v15; // rcx
  unsigned __int8 *i; // rdx
  unsigned __int8 v17; // cl
  bool v18; // zf
  unsigned __int8 v19; // cl
  __int64 v20; // rcx
  unsigned __int8 *j; // rdx
  unsigned __int8 v22; // cl
  __int64 v23; // rcx
  unsigned __int8 *k; // rdx
  unsigned __int8 v25; // cl

  rowbytes = row_info->rowbytes;
  channels = row_info->channels;
  v6 = &row[rowbytes];
  v8 = row;
  if ( channels == 2 )
  {
    bit_depth = row_info->bit_depth;
    if ( bit_depth == 8 )
    {
      if ( at_start )
      {
        v10 = 1i64;
      }
      else
      {
        v8 = row + 1;
        v10 = 2i64;
      }
      v11 = &row[v10];
      v12 = 0i64;
      v13 = (unsigned __int64)(v6 - v11 + 1) >> 1;
      if ( v11 > v6 )
        v13 = 0i64;
      if ( v13 )
      {
        do
        {
          v14 = *v11;
          v11 += 2;
          *v8 = v14;
          ++v12;
          ++v8;
        }
        while ( v12 < v13 );
      }
      row_info->pixel_depth = 8;
    }
    else
    {
      if ( bit_depth != 16 )
        return;
      if ( at_start )
      {
        v15 = 2i64;
      }
      else
      {
        v8 = row + 2;
        v15 = 4i64;
      }
      for ( i = &row[v15]; i < v6; v8 += 2 )
      {
        *v8 = *i;
        v17 = i[1];
        i += 4;
        v8[1] = v17;
      }
      row_info->pixel_depth = 16;
    }
    v18 = row_info->color_type == 4;
    row_info->channels = 1;
    if ( v18 )
    {
      row_info->color_type = 0;
      row_info->rowbytes = v8 - row;
      return;
    }
  }
  else
  {
    if ( channels != 4 )
      return;
    v19 = row_info->bit_depth;
    if ( v19 == 8 )
    {
      if ( at_start )
      {
        v20 = 1i64;
      }
      else
      {
        v8 = row + 3;
        v20 = 4i64;
      }
      for ( j = &row[v20]; j < v6; v8 += 3 )
      {
        *v8 = *j;
        v8[1] = j[1];
        v22 = j[2];
        j += 4;
        v8[2] = v22;
      }
      row_info->pixel_depth = 24;
    }
    else
    {
      if ( v19 != 16 )
        return;
      if ( at_start )
      {
        v23 = 2i64;
      }
      else
      {
        v8 = row + 6;
        v23 = 8i64;
      }
      for ( k = &row[v23]; k < v6; v8 += 6 )
      {
        *v8 = *k;
        v8[1] = k[1];
        v8[2] = k[2];
        v8[3] = k[3];
        v8[4] = k[4];
        v25 = k[5];
        k += 8;
        v8[5] = v25;
      }
      row_info->pixel_depth = 48;
    }
    v18 = row_info->color_type == 6;
    row_info->channels = 3;
    if ( v18 )
      row_info->color_type = 2;
  }
  row_info->rowbytes = v8 - row;
}

void __fastcall png_do_swap(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  unsigned __int8 v4; // cl

  if ( row_info->bit_depth == 16 )
  {
    v2 = row_info->width * row_info->channels;
    if ( v2 )
    {
      v3 = v2;
      do
      {
        v4 = *row;
        *row = row[1];
        row[1] = v4;
        row += 2;
        --v3;
      }
      while ( v3 );
    }
  }
}

__int64 __fastcall png_set_interlace_handling(png_struct_def *png_ptr)
{
  if ( !png_ptr || !png_ptr->interlaced )
    return 1i64;
  png_ptr->transformations |= 2u;
  return 7i64;
}

