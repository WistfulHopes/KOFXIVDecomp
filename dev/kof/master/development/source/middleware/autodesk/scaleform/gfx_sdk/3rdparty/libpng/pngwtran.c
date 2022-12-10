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
void png_do_pack(png_row_info_struct * row_info, unsigned char * row, unsigned long bit_depth); // 0x140436500
void png_do_shift(png_row_info_struct * row_info, unsigned char * row, const png_color_8_struct * bit_depth); // 0x140436680
void png_do_write_swap_alpha(png_row_info_struct * row_info, unsigned char * row); // 0x1404369C0
void png_do_write_invert_alpha(png_row_info_struct * row_info, unsigned char * row); // 0x140436900
void png_do_write_transformations(png_struct_def * png_ptr, png_row_info_struct * row_info); // 0x140436AF0void __fastcall png_do_pack(png_row_info_struct *row_info, unsigned __int8 *row, unsigned int bit_depth)
{
  unsigned __int8 v3; // bl
  unsigned int v5; // eax
  int v6; // er8
  unsigned __int8 *v7; // r9
  int v8; // ecx
  __int64 v9; // r10
  unsigned int v10; // eax
  int v11; // er8
  unsigned __int8 *v12; // r9
  int v13; // ecx
  __int64 v14; // r10
  __int64 width; // r9
  unsigned __int8 *v16; // r8
  unsigned __int8 v17; // cl
  int v18; // eax
  unsigned __int8 v19; // dl

  v3 = bit_depth;
  if ( row_info->bit_depth == 8 && row_info->channels == 1 )
  {
    switch ( bit_depth )
    {
      case 1u:
        width = row_info->width;
        v16 = row;
        v17 = 0;
        v18 = 128;
        if ( (_DWORD)width )
        {
          do
          {
            if ( *row )
              v17 |= v18;
            ++row;
            if ( v18 <= 1 )
            {
              *v16 = v17;
              v18 = 128;
              ++v16;
              v17 = 0;
            }
            else
            {
              v18 >>= 1;
            }
            --width;
          }
          while ( width );
          if ( v18 != 128 )
            *v16 = v17;
        }
        break;
      case 2u:
        v10 = row_info->width;
        v11 = 0;
        v12 = row;
        v13 = 6;
        if ( v10 )
        {
          v14 = v10;
          do
          {
            v11 |= (*row & 3) << v13;
            if ( v13 )
            {
              v13 -= 2;
            }
            else
            {
              *v12 = v11;
              v13 = 6;
              ++v12;
              v11 = 0;
            }
            ++row;
            --v14;
          }
          while ( v14 );
          if ( v13 != 6 )
            *v12 = v11;
        }
        break;
      case 4u:
        v5 = row_info->width;
        v6 = 0;
        v7 = row;
        v8 = 4;
        if ( v5 )
        {
          v9 = v5;
          do
          {
            v6 |= (*row & 0xF) << v8;
            if ( v8 )
            {
              v8 -= 4;
            }
            else
            {
              *v7 = v6;
              v8 = 4;
              ++v7;
              v6 = 0;
            }
            ++row;
            --v9;
          }
          while ( v9 );
          if ( v8 != 4 )
            *v7 = v6;
        }
        break;
    }
    v19 = row_info->channels * v3;
    row_info->bit_depth = v3;
    row_info->pixel_depth = v19;
    if ( v19 < 8u )
      row_info->rowbytes = (v19 * (unsigned __int64)row_info->width + 7) >> 3;
    else
      row_info->rowbytes = row_info->width * ((unsigned __int64)v19 >> 3);
  }
}

void __fastcall png_do_shift(png_row_info_struct *row_info, unsigned __int8 *row, const png_color_8_struct *bit_depth)
{
  unsigned __int8 color_type; // r11
  int v6; // edx
  unsigned int v7; // er15
  int green; // ecx
  int red; // edi
  int blue; // eax
  int v11; // esi
  int alpha; // edx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int8 v15; // al
  unsigned __int8 gray; // cl
  unsigned __int64 rowbytes; // r14
  int v18; // ebp
  int v19; // er11
  unsigned int v20; // ebx
  unsigned __int8 v21; // r8
  int v22; // edx
  int v23; // er9
  int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // esi
  unsigned int v27; // er9
  unsigned __int8 v28; // r8
  int v29; // eax
  int i; // er11
  unsigned int v31; // edx
  unsigned int v32; // esi
  unsigned int v33; // ebp
  __int64 v34; // rdx
  int v35; // er9
  unsigned int v36; // er11
  int v37; // er8
  int j; // ebx
  int v39[4]; // [rsp+0h] [rbp-48h]
  int v40[4]; // [rsp+10h] [rbp-38h]

  color_type = row_info->color_type;
  if ( color_type != 3 )
  {
    if ( (color_type & 2) != 0 )
    {
      v6 = row_info->bit_depth;
      v7 = 3;
      green = bit_depth->green;
      red = bit_depth->red;
      v39[1] = v6 - green;
      blue = bit_depth->blue;
      v11 = v6 - red;
      v40[1] = green;
      v39[2] = v6 - blue;
      v40[2] = blue;
    }
    else
    {
      red = bit_depth->gray;
      v7 = 1;
      v11 = row_info->bit_depth - red;
    }
    v40[0] = red;
    v39[0] = v11;
    if ( (color_type & 4) != 0 )
    {
      alpha = bit_depth->alpha;
      v13 = v7;
      v14 = row_info->bit_depth;
      v40[v13] = alpha;
      red = v40[0];
      ++v7;
      v39[v13] = v14 - alpha;
      v11 = v39[0];
    }
    v15 = row_info->bit_depth;
    if ( v15 >= 8u )
    {
      if ( v15 == 8 )
      {
        v25 = 0;
        v26 = v7 * row_info->width;
        if ( v26 )
        {
          do
          {
            v27 = *row;
            v28 = 0;
            v29 = v39[v25 % v7];
            for ( i = -v40[v25 % v7]; v29 > i; v29 -= v40[v25 % v7] )
            {
              if ( v29 <= 0 )
                v31 = v27 >> -(char)v29;
              else
                v31 = v27 << v29;
              v28 |= v31;
            }
            *row = v28;
            ++v25;
            ++row;
          }
          while ( v25 < v26 );
        }
      }
      else
      {
        v32 = 0;
        v33 = v7 * row_info->width;
        if ( v33 )
        {
          do
          {
            v34 = v32 % v7;
            v35 = 0;
            v36 = row[1] + (*row << 8);
            v37 = v39[(unsigned int)v34];
            for ( j = -v40[(unsigned int)v34]; v37 > j; v37 -= v40[v34] )
            {
              if ( v37 <= 0 )
                v35 |= v36 >> -(char)v37;
              else
                v35 |= v36 << v37;
            }
            ++v32;
            *row = BYTE1(v35);
            row[1] = v35;
            row += 2;
          }
          while ( v32 < v33 );
        }
      }
    }
    else
    {
      gray = bit_depth->gray;
      rowbytes = row_info->rowbytes;
      if ( gray == 1 && v15 == 2 )
      {
        v18 = 85;
      }
      else if ( v15 != 4 || (v18 = 17, gray != 3) )
      {
        v18 = 255;
      }
      if ( rowbytes )
      {
        v19 = -red;
        do
        {
          v20 = *row;
          v21 = 0;
          v22 = v11;
          if ( v11 > v19 )
          {
            v23 = -v11;
            do
            {
              if ( v22 <= 0 )
                v24 = v18 & (v20 >> v23);
              else
                v24 = v20 << v22;
              v21 |= v24;
              v22 -= red;
              LOBYTE(v23) = v23 + red;
            }
            while ( v22 > v19 );
          }
          *row++ = v21;
          --rowbytes;
        }
        while ( rowbytes );
      }
    }
  }
}

void __fastcall png_do_write_invert_alpha(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 color_type; // al
  unsigned int width; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned __int8 *v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // al
  __int64 v10; // rcx

  color_type = row_info->color_type;
  if ( color_type == 6 )
  {
    width = row_info->width;
    if ( row_info->bit_depth == 8 )
    {
      if ( width )
      {
        v4 = width;
        do
        {
          row[3] = ~row[3];
          row += 4;
          --v4;
        }
        while ( v4 );
      }
    }
    else if ( width )
    {
      v5 = row_info->width;
      do
      {
        row[6] = ~row[6];
        row[7] = ~row[7];
        row += 8;
        --v5;
      }
      while ( v5 );
    }
  }
  else if ( color_type == 4 )
  {
    v6 = row_info->width;
    if ( row_info->bit_depth == 8 )
    {
      v7 = row;
      if ( v6 )
      {
        v8 = v6;
        do
        {
          v9 = *v7;
          v7 += 2;
          *row = v9;
          row += 2;
          *(row - 1) = ~*(v7 - 1);
          --v8;
        }
        while ( v8 );
      }
    }
    else if ( v6 )
    {
      v10 = row_info->width;
      do
      {
        row[2] = ~row[2];
        row[3] = ~row[3];
        row += 4;
        --v10;
      }
      while ( v10 );
    }
  }
}

void __fastcall png_do_write_swap_alpha(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 color_type; // al
  unsigned int width; // eax
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  unsigned __int8 v6; // al
  unsigned __int8 v7; // cl
  unsigned __int8 *v8; // r9
  __int64 v9; // r10
  unsigned __int8 v10; // al
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // r8
  unsigned int v13; // eax
  unsigned __int8 *v14; // r8
  __int64 v15; // r9
  unsigned __int8 v16; // al
  unsigned __int8 v17; // cl
  unsigned __int8 *v18; // r9
  __int64 v19; // r10
  unsigned __int8 v20; // al
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // r8

  color_type = row_info->color_type;
  if ( color_type == 6 )
  {
    width = row_info->width;
    if ( row_info->bit_depth == 8 )
    {
      v4 = row;
      if ( width )
      {
        v5 = width;
        do
        {
          v6 = v4[1];
          row += 4;
          v7 = *v4;
          v4 += 4;
          *(row - 4) = v6;
          *(row - 3) = *(v4 - 2);
          *(row - 2) = *(v4 - 1);
          *(row - 1) = v7;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      v8 = row;
      if ( width )
      {
        v9 = row_info->width;
        do
        {
          v10 = v8[2];
          row += 8;
          v11 = *v8;
          v12 = v8[1];
          v8 += 8;
          *(row - 8) = v10;
          *(row - 7) = *(v8 - 5);
          *(row - 6) = *(v8 - 4);
          *(row - 5) = *(v8 - 3);
          *(row - 4) = *(v8 - 2);
          *(row - 3) = *(v8 - 1);
          *(row - 2) = v11;
          *(row - 1) = v12;
          --v9;
        }
        while ( v9 );
      }
    }
  }
  else if ( color_type == 4 )
  {
    v13 = row_info->width;
    if ( row_info->bit_depth == 8 )
    {
      v14 = row;
      if ( v13 )
      {
        v15 = v13;
        do
        {
          v16 = v14[1];
          row += 2;
          v17 = *v14;
          v14 += 2;
          *(row - 2) = v16;
          *(row - 1) = v17;
          --v15;
        }
        while ( v15 );
      }
    }
    else
    {
      v18 = row;
      if ( v13 )
      {
        v19 = row_info->width;
        do
        {
          v20 = v18[2];
          row += 4;
          v21 = *v18;
          v22 = v18[1];
          v18 += 4;
          *(row - 4) = v20;
          *(row - 3) = *(v18 - 1);
          *(row - 2) = v21;
          *(row - 1) = v22;
          --v19;
        }
        while ( v19 );
      }
    }
  }
}

void __fastcall png_do_write_transformations(png_struct_def *png_ptr, png_row_info_struct *row_info)
{
  void (__fastcall *write_user_transform_fn)(png_struct_def *, png_row_info_struct *, unsigned __int8 *); // rax

  if ( png_ptr )
  {
    if ( (png_ptr->transformations & 0x100000) != 0 )
    {
      write_user_transform_fn = png_ptr->write_user_transform_fn;
      if ( write_user_transform_fn )
        write_user_transform_fn(png_ptr, row_info, png_ptr->row_buf + 1);
    }
    if ( (png_ptr->transformations & 0x8000) != 0 )
      png_do_strip_channel(row_info, png_ptr->row_buf + 1, (png_ptr->flags & 0x80) == 0);
    if ( (png_ptr->transformations & 0x10000) != 0 )
      png_do_packswap(row_info, png_ptr->row_buf + 1);
    if ( (png_ptr->transformations & 4) != 0 )
      png_do_pack(row_info, png_ptr->row_buf + 1, png_ptr->bit_depth);
    if ( (png_ptr->transformations & 0x10) != 0 )
      png_do_swap(row_info, png_ptr->row_buf + 1);
    if ( (png_ptr->transformations & 8) != 0 )
      png_do_shift(row_info, png_ptr->row_buf + 1, &png_ptr->shift);
    if ( (png_ptr->transformations & 0x20000) != 0 )
      png_do_write_swap_alpha(row_info, png_ptr->row_buf + 1);
    if ( (png_ptr->transformations & 0x80000) != 0 )
      png_do_write_invert_alpha(row_info, png_ptr->row_buf + 1);
    if ( (png_ptr->transformations & 1) != 0 )
      png_do_bgr(row_info, png_ptr->row_buf + 1);
    if ( (png_ptr->transformations & 0x20) != 0 )
      png_do_invert(row_info, png_ptr->row_buf + 1);
  }
}

