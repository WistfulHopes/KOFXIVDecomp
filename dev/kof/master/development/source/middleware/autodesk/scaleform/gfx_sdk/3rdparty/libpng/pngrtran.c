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

void png_set_strip_16(png_struct_def * png_ptr); // 0x140414BD0
struct png_dsort_struct
{
	png_dsort_struct * next; // 0x0
	unsigned char left; // 0x8
	unsigned char right; // 0x9
};
typedef png_dsort_struct * png_dsortp;
typedef png_dsort_struct png_dsort;
typedef png_dsort_struct * * png_dsortpp;
typedef unsigned short * * png_const_uint_16pp;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
void png_set_gamma_fixed(png_struct_def * png_ptr, long scrn_gamma, long file_gamma); // 0x140414A70
void png_set_gamma(png_struct_def * png_ptr, double scrn_gamma, double file_gamma); // 0x140414970
void png_set_palette_to_rgb(png_struct_def * png_ptr); // 0x140414C00
void png_set_expand_gray_1_2_4_to_8(png_struct_def * png_ptr); // 0x140414940
void png_set_gray_to_rgb(png_struct_def * png_ptr); // 0x140414B50
void png_init_palette_transformations(png_struct_def * png_ptr); // 0x140413960
void png_init_rgb_transformations(png_struct_def * png_ptr); // 0x140414670
void png_init_read_transformations(png_struct_def * png_ptr); // 0x140413AF0
void png_read_transform_info(png_struct_def * png_ptr, png_info_def * info_ptr); // 0x140414740
void png_do_unpack(png_row_info_struct * row_info, unsigned char * row); // 0x140413590
void png_do_unshift(png_row_info_struct * row_info, unsigned char * row, const png_color_8_struct * sig_bits); // 0x1404136F0
void png_do_read_swap_alpha(png_row_info_struct * row_info, unsigned char * row); // 0x140412A20
void png_do_read_invert_alpha(png_row_info_struct * row_info, unsigned char * row); // 0x140412950
void png_do_read_filler(png_row_info_struct * row_info, unsigned char * row, unsigned long filler, unsigned long flags); // 0x140412630
void png_do_gray_to_rgb(png_row_info_struct * row_info, unsigned char * row); // 0x140412310
long png_do_rgb_to_gray(png_struct_def * png_ptr, png_row_info_struct * row_info, unsigned char * row); // 0x140413120
void png_do_compose(png_row_info_struct * row_info, unsigned char * row, png_struct_def * png_ptr); // 0x140410510
void png_do_gamma(png_row_info_struct * row_info, unsigned char * row, png_struct_def * png_ptr); // 0x140411E70
void png_do_encode_alpha(png_row_info_struct * row_info, unsigned char * row, png_struct_def * png_ptr); // 0x1404116E0
void png_do_expand_palette(png_row_info_struct * row_info, unsigned char * row, const png_color_struct * palette, const unsigned char * trans_alpha, long num_trans); // 0x140411C10
void png_do_expand(png_row_info_struct * row_info, unsigned char * row, const png_color_16_struct * trans_color); // 0x1404117F0
void png_do_quantize(png_row_info_struct * row_info, unsigned char * row, const unsigned char * palette_lookup, const unsigned char * quantize_lookup); // 0x1404124D0
void png_do_read_transformations(png_struct_def * png_ptr, png_row_info_struct * row_info); // 0x140412B70void __fastcall png_do_compose(png_row_info_struct *row_info, unsigned __int8 *row, png_struct_def *png_ptr)
{
  unsigned __int8 color_type; // r9
  unsigned __int8 *gamma_table; // rbx
  unsigned __int8 *gamma_from_1; // r11
  unsigned __int8 *gamma_to_1; // r12
  unsigned __int16 **gamma_16_table; // r14
  unsigned __int16 **gamma_16_from_1; // r15
  unsigned __int16 **gamma_16_to_1; // r13
  int gamma_shift; // edi
  __int64 width; // rdx
  __int64 v13; // rbp
  unsigned __int8 *v14; // r10
  __int64 v15; // r15
  unsigned __int8 v16; // al
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int16 v21; // r14
  __int16 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned __int8 *v28; // r11
  __int64 v29; // rbx
  unsigned __int8 v30; // al
  __int16 v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // ecx
  __int16 v34; // dx
  unsigned int v35; // eax
  __int16 v36; // dx
  unsigned int v37; // eax
  unsigned __int8 *v38; // r11
  __int64 v39; // r12
  unsigned __int16 v40; // dx
  unsigned __int16 v41; // dx
  unsigned __int8 v42; // ah
  unsigned __int16 v43; // r9
  __int64 v44; // rdx
  int v45; // er10
  int v46; // er9
  unsigned __int16 *v47; // rax
  unsigned int v48; // edx
  unsigned __int16 *v49; // rax
  unsigned int v50; // edx
  unsigned __int16 *v51; // rax
  unsigned __int8 *v52; // r11
  __int64 v53; // rdi
  unsigned __int16 v54; // dx
  int v55; // er9
  int v56; // er10
  unsigned int v57; // edx
  int v58; // ecx
  int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // edx
  int v62; // ecx
  int v63; // ecx
  unsigned int v64; // ecx
  __int64 v65; // r14
  __int16 v66; // dx
  unsigned int v67; // ecx
  unsigned int v68; // eax
  __int64 v69; // r11
  unsigned __int8 v70; // al
  unsigned int v71; // eax
  unsigned __int8 *v72; // r10
  __int64 v73; // r11
  unsigned __int16 v74; // dx
  unsigned __int8 v75; // ah
  int v76; // er9
  int v77; // edx
  unsigned int v78; // ecx
  unsigned __int8 *v79; // r10
  __int64 v80; // r11
  unsigned __int16 v81; // dx
  int v82; // er9
  __int16 v83; // ax
  unsigned __int16 red; // r11
  unsigned __int8 *v85; // r10
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned __int8 v89; // cl
  __int64 v90; // rax
  unsigned __int16 v91; // r9
  unsigned __int8 *v92; // r10
  __int64 v93; // rcx
  unsigned __int16 v94; // r15
  unsigned __int8 *v95; // r11
  __int64 v96; // rbp
  unsigned __int64 v97; // rsi
  unsigned __int16 v98; // dx
  unsigned __int8 v99; // ah
  __int64 v100; // rdx
  unsigned __int16 v101; // r9
  unsigned __int16 v102; // r11
  unsigned __int8 *v103; // r10
  __int64 v104; // r9
  int v105; // ecx
  int v106; // ecx
  int v107; // ecx
  int v108; // ecx
  unsigned __int16 gray; // si
  __int64 v110; // r11
  unsigned __int64 v111; // r9
  unsigned __int16 v112; // dx
  unsigned __int16 v113; // r11
  __int64 v114; // r9
  unsigned __int16 v115; // r11
  __int64 v116; // r9
  __int64 v117; // rax
  unsigned __int16 v118; // r9
  __int64 v119; // rcx
  int v120; // er11
  unsigned __int16 v121; // bp
  __int64 v122; // rsi
  unsigned __int8 v123; // di
  int v124; // er9
  unsigned __int16 v125; // di
  __int64 v126; // rbx
  int v127; // er11
  unsigned __int16 v128; // bp
  __int64 v129; // rsi
  unsigned __int8 v130; // di
  int v131; // er9
  unsigned __int16 v132; // di
  __int64 v133; // rbx
  int v134; // er9
  unsigned __int16 v135; // di
  __int64 v136; // rbx
  __int64 v137; // [rsp+30h] [rbp+8h]

  color_type = row_info->color_type;
  gamma_table = png_ptr->gamma_table;
  gamma_from_1 = png_ptr->gamma_from_1;
  gamma_to_1 = png_ptr->gamma_to_1;
  gamma_16_table = png_ptr->gamma_16_table;
  gamma_16_from_1 = png_ptr->gamma_16_from_1;
  gamma_16_to_1 = png_ptr->gamma_16_to_1;
  gamma_shift = png_ptr->gamma_shift;
  width = row_info->width;
  if ( !color_type )
  {
    v105 = row_info->bit_depth - 1;
    if ( v105 )
    {
      v106 = v105 - 1;
      if ( v106 )
      {
        v107 = v106 - 2;
        if ( v107 )
        {
          v108 = v107 - 4;
          if ( v108 )
          {
            if ( v108 == 8 )
            {
              if ( gamma_16_table )
              {
                if ( (_DWORD)width )
                {
                  gray = png_ptr->trans_color.gray;
                  v110 = width;
                  do
                  {
                    v111 = row[1];
                    if ( (_WORD)v111 + (*row << 8) == gray )
                    {
                      *row = HIBYTE(png_ptr->background.gray);
                      row[1] = png_ptr->background.gray;
                    }
                    else
                    {
                      v112 = gamma_16_table[v111 >> gamma_shift][*row];
                      row[1] = v112;
                      *row = HIBYTE(v112);
                    }
                    row += 2;
                    --v110;
                  }
                  while ( v110 );
                }
              }
              else if ( (_DWORD)width )
              {
                v113 = png_ptr->trans_color.gray;
                v114 = width;
                do
                {
                  if ( row[1] + (*row << 8) == v113 )
                  {
                    *row = HIBYTE(png_ptr->background.gray);
                    row[1] = png_ptr->background.gray;
                  }
                  row += 2;
                  --v114;
                }
                while ( v114 );
              }
            }
          }
          else if ( gamma_table )
          {
            if ( (_DWORD)width )
            {
              v115 = png_ptr->trans_color.gray;
              v116 = width;
              do
              {
                v117 = *row;
                if ( (_WORD)v117 == v115 )
                  *row = png_ptr->background.gray;
                else
                  *row = gamma_table[v117];
                ++row;
                --v116;
              }
              while ( v116 );
            }
          }
          else if ( (_DWORD)width )
          {
            v118 = png_ptr->trans_color.gray;
            v119 = width;
            do
            {
              if ( *row == v118 )
                *row = png_ptr->background.gray;
              ++row;
              --v119;
            }
            while ( v119 );
          }
        }
        else if ( gamma_table )
        {
          v120 = 4;
          if ( (_DWORD)width )
          {
            v121 = png_ptr->trans_color.gray;
            v122 = width;
            do
            {
              v123 = *row;
              if ( ((*row >> v120) & 0xF) == v121 )
                *row = (LOBYTE(png_ptr->background.gray) << v120) | v123 & (3855 >> (4 - v120));
              else
                *row = (gamma_table[(v123 >> v120) & 0xF | (unsigned __int64)(16 * ((v123 >> v120) & 0xFu))] >> 4 << v120) | v123 & (3855 >> (4 - v120));
              if ( v120 )
              {
                v120 -= 4;
              }
              else
              {
                v120 = 4;
                ++row;
              }
              --v122;
            }
            while ( v122 );
          }
        }
        else
        {
          v124 = 4;
          if ( (_DWORD)width )
          {
            v125 = png_ptr->trans_color.gray;
            v126 = width;
            do
            {
              if ( ((*row >> v124) & 0xF) == v125 )
                *row = (LOBYTE(png_ptr->background.gray) << v124) | *row & (3855 >> (4 - v124));
              if ( v124 )
              {
                v124 -= 4;
              }
              else
              {
                v124 = 4;
                ++row;
              }
              --v126;
            }
            while ( v126 );
          }
        }
      }
      else if ( gamma_table )
      {
        v127 = 6;
        if ( (_DWORD)width )
        {
          v128 = png_ptr->trans_color.gray;
          v129 = width;
          do
          {
            v130 = *row;
            if ( ((*row >> v127) & 3) == v128 )
              *row = (LOBYTE(png_ptr->background.gray) << v127) | v130 & (16191 >> (6 - v127));
            else
              *row = (gamma_table[(v130 >> v127) & 3 | (unsigned __int64)(4
                                                                        * ((v130 >> v127) & 3 | (4
                                                                                               * ((v130 >> v127) & 3 | (4 * ((v130 >> v127) & 3u))))))] >> 6 << v127) | v130 & (16191 >> (6 - v127));
            if ( v127 )
            {
              v127 -= 2;
            }
            else
            {
              v127 = 6;
              ++row;
            }
            --v129;
          }
          while ( v129 );
        }
      }
      else
      {
        v131 = 6;
        if ( (_DWORD)width )
        {
          v132 = png_ptr->trans_color.gray;
          v133 = width;
          do
          {
            if ( ((*row >> v131) & 3) == v132 )
              *row = (LOBYTE(png_ptr->background.gray) << v131) | *row & (16191 >> (6 - v131));
            if ( v131 )
            {
              v131 -= 2;
            }
            else
            {
              v131 = 6;
              ++row;
            }
            --v133;
          }
          while ( v133 );
        }
      }
    }
    else
    {
      v134 = 7;
      if ( (_DWORD)width )
      {
        v135 = png_ptr->trans_color.gray;
        v136 = width;
        do
        {
          if ( ((*row >> v134) & 1) == v135 )
            *row = (LOBYTE(png_ptr->background.gray) << v134) | *row & (32639 >> (7 - v134));
          if ( v134 )
          {
            --v134;
          }
          else
          {
            v134 = 7;
            ++row;
          }
          --v136;
        }
        while ( v136 );
      }
    }
    return;
  }
  if ( color_type == 2 )
  {
    if ( row_info->bit_depth == 8 )
    {
      if ( gamma_table )
      {
        if ( (_DWORD)width )
        {
          red = png_ptr->trans_color.red;
          v85 = row + 2;
          v86 = row_info->width;
          do
          {
            v87 = *(v85 - 2);
            if ( __PAIR32__(*(v85 - 1), v87) == __PAIR32__(png_ptr->trans_color.green, red)
              && *v85 == png_ptr->trans_color.blue )
            {
              *(v85 - 2) = png_ptr->background.red;
              *(v85 - 1) = png_ptr->background.green;
              *v85 = png_ptr->background.blue;
            }
            else
            {
              v88 = *(v85 - 1);
              *(v85 - 2) = gamma_table[v87];
              v89 = gamma_table[v88];
              v90 = *v85;
              *(v85 - 1) = v89;
              *v85 = gamma_table[v90];
            }
            v85 += 3;
            --v86;
          }
          while ( v86 );
        }
      }
      else if ( (_DWORD)width )
      {
        v91 = png_ptr->trans_color.red;
        v92 = row + 2;
        v93 = row_info->width;
        do
        {
          if ( *(v92 - 2) == v91 && *(v92 - 1) == png_ptr->trans_color.green && *v92 == png_ptr->trans_color.blue )
          {
            *(v92 - 2) = png_ptr->background.red;
            *(v92 - 1) = png_ptr->background.green;
            *v92 = png_ptr->background.blue;
          }
          v92 += 3;
          --v93;
        }
        while ( v93 );
      }
    }
    else if ( gamma_16_table )
    {
      if ( (_DWORD)width )
      {
        v94 = png_ptr->trans_color.red;
        v95 = row + 2;
        v96 = row_info->width;
        do
        {
          v97 = *(v95 - 1);
          if ( (_WORD)v97 + (*(v95 - 2) << 8) == v94
            && v95[1] + (*v95 << 8) == png_ptr->trans_color.green
            && v95[3] + (v95[2] << 8) == png_ptr->trans_color.blue )
          {
            *(v95 - 2) = HIBYTE(png_ptr->background.red);
            *(v95 - 1) = png_ptr->background.red;
            *v95 = HIBYTE(png_ptr->background.green);
            v95[1] = png_ptr->background.green;
            v95[2] = HIBYTE(png_ptr->background.blue);
            v95[3] = png_ptr->background.blue;
          }
          else
          {
            v98 = gamma_16_table[v97 >> gamma_shift][*(v95 - 2)];
            *(v95 - 1) = v98;
            v99 = HIBYTE(v98);
            v100 = *v95;
            *(v95 - 2) = v99;
            v101 = gamma_16_table[(unsigned __int64)v95[1] >> gamma_shift][v100];
            v95[1] = v101;
            *v95 = HIBYTE(v101);
            LOWORD(v100) = gamma_16_table[(unsigned __int64)v95[3] >> gamma_shift][v95[2]];
            v95[3] = v100;
            v95[2] = BYTE1(v100);
          }
          v95 += 6;
          --v96;
        }
        while ( v96 );
      }
    }
    else if ( (_DWORD)width )
    {
      v102 = png_ptr->trans_color.red;
      v103 = row + 2;
      v104 = row_info->width;
      do
      {
        if ( *(v103 - 1) + (*(v103 - 2) << 8) == v102
          && v103[1] + (*v103 << 8) == png_ptr->trans_color.green
          && v103[3] + (v103[2] << 8) == png_ptr->trans_color.blue )
        {
          *(v103 - 2) = HIBYTE(png_ptr->background.red);
          *(v103 - 1) = png_ptr->background.red;
          *v103 = HIBYTE(png_ptr->background.green);
          v103[1] = png_ptr->background.green;
          v103[2] = HIBYTE(png_ptr->background.blue);
          v103[3] = png_ptr->background.blue;
        }
        v103 += 6;
        --v104;
      }
      while ( v104 );
    }
    return;
  }
  v13 = (png_ptr->flags >> 13) & 1;
  if ( color_type == 4 )
  {
    if ( row_info->bit_depth == 8 )
    {
      if ( !gamma_to_1 || !gamma_from_1 || !gamma_table )
      {
        if ( (_DWORD)width )
        {
          v69 = row_info->width;
          do
          {
            v70 = row[1];
            if ( v70 )
            {
              if ( v70 != 0xFF )
              {
                v71 = (unsigned __int16)(v70 * *row + png_ptr->background.gray * (255 - v70) + 128);
                *row = (unsigned __int16)(v71 + (v71 >> 8)) >> 8;
              }
            }
            else
            {
              *row = png_ptr->background.gray;
            }
            row += 2;
            --v69;
          }
          while ( v69 );
        }
        return;
      }
      if ( !(_DWORD)width )
        return;
      v65 = row_info->width;
      while ( 1 )
      {
        v66 = row[1];
        if ( v66 == 255 )
          break;
        if ( row[1] )
        {
          v68 = (unsigned __int16)(png_ptr->background_1.gray * (255 - v66) + v66 * gamma_to_1[*row] + 128);
          v67 = (v68 + (v68 >> 8)) >> 8;
          if ( !v13 )
            LOBYTE(v67) = gamma_from_1[(unsigned __int8)v67];
          goto LABEL_71;
        }
        *row = png_ptr->background.gray;
LABEL_72:
        row += 2;
        if ( !--v65 )
          return;
      }
      LOBYTE(v67) = gamma_table[*row];
LABEL_71:
      *row = v67;
      goto LABEL_72;
    }
    if ( !gamma_16_table || !gamma_16_from_1 || !gamma_16_to_1 )
    {
      if ( (_DWORD)width )
      {
        v79 = row + 1;
        v80 = row_info->width;
        do
        {
          v81 = v79[2] + (v79[1] << 8);
          if ( v81 )
          {
            if ( v81 != 0xFFFF )
            {
              v82 = v81 * (*v79 + (*(v79 - 1) << 8));
              v83 = (v82
                   + (0xFFFF - v81) * png_ptr->background.gray
                   + 0x8000
                   + ((v82 + (0xFFFF - v81) * (unsigned int)png_ptr->background.gray + 0x8000) >> 16)) >> 16;
              *v79 = v83;
              *(v79 - 1) = HIBYTE(v83);
            }
          }
          else
          {
            *(v79 - 1) = HIBYTE(png_ptr->background.gray);
            *v79 = png_ptr->background.gray;
          }
          v79 += 4;
          --v80;
        }
        while ( v80 );
      }
      return;
    }
    if ( !(_DWORD)width )
      return;
    v72 = row + 1;
    v73 = row_info->width;
    while ( 1 )
    {
      v74 = v72[2] + (v72[1] << 8);
      if ( v74 == 0xFFFF )
        break;
      if ( v74 )
      {
        v76 = v74;
        v77 = v74 * gamma_16_to_1[(unsigned __int64)*v72 >> gamma_shift][*(v72 - 1)];
        v78 = (v77
             + (0xFFFF - v76) * png_ptr->background_1.gray
             + 0x8000
             + ((v77 + (0xFFFF - v76) * (unsigned int)png_ptr->background_1.gray + 0x8000) >> 16)) >> 16;
        if ( !v13 )
          LOWORD(v78) = gamma_16_from_1[(unsigned __int64)(unsigned __int8)v78 >> gamma_shift][(unsigned __int64)(unsigned __int16)v78 >> 8];
        v75 = BYTE1(v78);
        *v72 = v78;
        goto LABEL_94;
      }
      *(v72 - 1) = HIBYTE(png_ptr->background.gray);
      *v72 = png_ptr->background.gray;
LABEL_95:
      v72 += 4;
      if ( !--v73 )
        return;
    }
    v75 = HIBYTE(gamma_16_table[(unsigned __int64)*v72 >> gamma_shift][*(v72 - 1)]);
    *v72 = gamma_16_table[(unsigned __int64)*v72 >> gamma_shift][*(v72 - 1)];
LABEL_94:
    *(v72 - 1) = v75;
    goto LABEL_95;
  }
  if ( color_type != 6 )
    return;
  if ( row_info->bit_depth != 8 )
  {
    if ( !gamma_16_table || !gamma_16_from_1 || !gamma_16_to_1 )
    {
      if ( (_DWORD)width )
      {
        v52 = row + 1;
        v53 = row_info->width;
        do
        {
          v54 = v52[6] + (v52[5] << 8);
          if ( v54 )
          {
            if ( v54 != 0xFFFF )
            {
              v55 = v54;
              v56 = 0xFFFF - v54;
              v57 = (v56 * png_ptr->background.red
                   + v54 * (*v52 + (*(v52 - 1) << 8))
                   + 0x8000
                   + ((unsigned int)(v56 * png_ptr->background.red + v54 * (*v52 + (*(v52 - 1) << 8)) + 0x8000) >> 16)) >> 16;
              v58 = v52[1] << 8;
              *(v52 - 1) = BYTE1(v57);
              v59 = v52[2] + v58;
              *v52 = v57;
              v60 = v56 * png_ptr->background.green + v55 * v59 + 0x8000;
              v61 = (v60 + HIWORD(v60)) >> 16;
              v62 = v52[3] << 8;
              v52[1] = BYTE1(v61);
              v63 = v52[4] + v62;
              v52[2] = v61;
              v64 = v56 * png_ptr->background.blue + v55 * v63 + 0x8000;
              v52[4] = (v64 + HIWORD(v64)) >> 16;
              v52[3] = (v64 + HIWORD(v64)) >> 24;
            }
          }
          else
          {
            *(v52 - 1) = HIBYTE(png_ptr->background.red);
            *v52 = png_ptr->background.red;
            v52[1] = HIBYTE(png_ptr->background.green);
            v52[2] = png_ptr->background.green;
            v52[3] = HIBYTE(png_ptr->background.blue);
            v52[4] = png_ptr->background.blue;
          }
          v52 += 8;
          --v53;
        }
        while ( v53 );
      }
      return;
    }
    if ( !(_DWORD)width )
      return;
    v38 = row + 1;
    v137 = row_info->width;
    v39 = v137;
    while ( 1 )
    {
      v40 = v38[6] + (v38[5] << 8);
      if ( v40 == 0xFFFF )
        break;
      if ( v40 )
      {
        v45 = v40;
        v46 = 0xFFFF - v40;
        v47 = gamma_16_to_1[(unsigned __int64)*v38 >> gamma_shift];
        v48 = (v40 * v47[*(v38 - 1)]
             + 0x8000
             + v46 * png_ptr->background_1.red
             + ((v40 * v47[*(v38 - 1)] + 0x8000 + v46 * (unsigned int)png_ptr->background_1.red) >> 16)) >> 16;
        if ( !v13 )
          LOWORD(v48) = gamma_16_from_1[(unsigned __int64)(unsigned __int8)v48 >> gamma_shift][(unsigned __int64)(unsigned __int16)v48 >> 8];
        *v38 = v48;
        *(v38 - 1) = BYTE1(v48);
        v49 = gamma_16_to_1[(unsigned __int64)v38[2] >> gamma_shift];
        v50 = (v45 * v49[v38[1]]
             + 0x8000
             + v46 * png_ptr->background_1.green
             + ((v45 * v49[v38[1]] + 0x8000 + v46 * (unsigned int)png_ptr->background_1.green) >> 16)) >> 16;
        if ( !v13 )
          LOWORD(v50) = gamma_16_from_1[(unsigned __int64)(unsigned __int8)v50 >> gamma_shift][(unsigned __int64)(unsigned __int16)v50 >> 8];
        v38[2] = v50;
        v38[1] = BYTE1(v50);
        v51 = gamma_16_to_1[(unsigned __int64)v38[4] >> gamma_shift];
        LODWORD(v44) = (v45 * v51[v38[3]]
                      + 0x8000
                      + v46 * png_ptr->background_1.blue
                      + ((v45 * v51[v38[3]] + 0x8000 + v46 * (unsigned int)png_ptr->background_1.blue) >> 16)) >> 16;
        if ( !v13 )
          LOWORD(v44) = gamma_16_from_1[(unsigned __int64)(unsigned __int8)v44 >> gamma_shift][(unsigned __int64)(unsigned __int16)v44 >> 8];
        v39 = v137;
        goto LABEL_48;
      }
      *(v38 - 1) = HIBYTE(png_ptr->background.red);
      *v38 = png_ptr->background.red;
      v38[1] = HIBYTE(png_ptr->background.green);
      v38[2] = png_ptr->background.green;
      v38[3] = HIBYTE(png_ptr->background.blue);
      v38[4] = png_ptr->background.blue;
LABEL_49:
      v38 += 8;
      v137 = --v39;
      if ( !v39 )
        return;
    }
    v41 = gamma_16_table[(unsigned __int64)*v38 >> gamma_shift][*(v38 - 1)];
    *v38 = v41;
    v42 = HIBYTE(v41);
    v44 = v38[1];
    *(v38 - 1) = v42;
    v43 = gamma_16_table[(unsigned __int64)v38[2] >> gamma_shift][v44];
    v38[2] = v43;
    v38[1] = HIBYTE(v43);
    LOWORD(v44) = gamma_16_table[(unsigned __int64)v38[4] >> gamma_shift][v38[3]];
LABEL_48:
    v38[4] = v44;
    v38[3] = BYTE1(v44);
    goto LABEL_49;
  }
  if ( gamma_to_1 && gamma_from_1 && gamma_table )
  {
    if ( (_DWORD)width )
    {
      v14 = row + 1;
      v15 = (unsigned int)width;
      while ( 1 )
      {
        v16 = v14[2];
        if ( v16 == 0xFF )
          break;
        if ( v16 )
        {
          v21 = v16;
          v22 = 255 - v16;
          v23 = (unsigned __int16)(v22 * png_ptr->background_1.red + v16 * gamma_to_1[*(v14 - 1)] + 128);
          v24 = (v23 + (v23 >> 8)) >> 8;
          if ( !v13 )
            LOBYTE(v24) = gamma_from_1[(unsigned __int8)v24];
          v25 = *v14;
          *(v14 - 1) = v24;
          LODWORD(v25) = (unsigned __int16)(png_ptr->background_1.green * v22 + v21 * gamma_to_1[v25] + 128);
          v26 = ((unsigned int)v25 + ((unsigned int)v25 >> 8)) >> 8;
          if ( !v13 )
            LOBYTE(v26) = gamma_from_1[(unsigned __int8)v26];
          v27 = v14[1];
          *v14 = v26;
          LODWORD(v27) = (unsigned __int16)(png_ptr->background_1.blue * v22 + v21 * gamma_to_1[v27] + 128);
          v20 = ((unsigned int)v27 + ((unsigned int)v27 >> 8)) >> 8;
          if ( !v13 )
            LOBYTE(v20) = gamma_from_1[(unsigned __int8)v20];
          goto LABEL_21;
        }
        *(v14 - 1) = png_ptr->background.red;
        *v14 = png_ptr->background.green;
        v14[1] = png_ptr->background.blue;
LABEL_22:
        v14 += 4;
        if ( !--v15 )
          return;
      }
      v17 = *v14;
      *(v14 - 1) = gamma_table[*(v14 - 1)];
      v18 = gamma_table[v17];
      v19 = v14[1];
      *v14 = v18;
      LOBYTE(v20) = gamma_table[v19];
LABEL_21:
      v14[1] = v20;
      goto LABEL_22;
    }
  }
  else if ( (_DWORD)width )
  {
    v28 = row + 1;
    v29 = row_info->width;
    do
    {
      v30 = v28[2];
      if ( v30 )
      {
        if ( v30 != 0xFF )
        {
          v31 = v30;
          v32 = (unsigned __int16)(png_ptr->background.red * (255 - v30) + v30 * *(v28 - 1) + 128);
          v33 = v32 + (v32 >> 8);
          v34 = v31 * *v28;
          LOWORD(v32) = png_ptr->background.green;
          *(v28 - 1) = BYTE1(v33);
          v35 = (unsigned __int16)(v32 * (255 - v31) + v34 + 128);
          v36 = v31 * v28[1];
          *v28 = (unsigned __int16)(v35 + (v35 >> 8)) >> 8;
          v37 = (unsigned __int16)((255 - v31) * png_ptr->background.blue + v36 + 128);
          v28[1] = (unsigned __int16)(v37 + (v37 >> 8)) >> 8;
        }
      }
      else
      {
        *(v28 - 1) = png_ptr->background.red;
        *v28 = png_ptr->background.green;
        v28[1] = png_ptr->background.blue;
      }
      v28 += 4;
      --v29;
    }
    while ( v29 );
  }
}

void __fastcall png_do_encode_alpha(png_row_info_struct *row_info, unsigned __int8 *row, png_struct_def *png_ptr)
{
  unsigned __int8 color_type; // r11
  unsigned int width; // er9
  unsigned __int8 bit_depth; // al
  unsigned __int8 *gamma_from_1; // r10
  bool v7; // zf
  unsigned int v8; // er11
  unsigned __int8 *i; // rdx
  unsigned __int16 **gamma_16_from_1; // r10
  int gamma_shift; // ebx
  unsigned int v12; // er8
  unsigned __int8 *v13; // rdx
  char v14; // r11
  __int64 v15; // rbx
  unsigned __int16 v16; // r8

  color_type = row_info->color_type;
  width = row_info->width;
  if ( (color_type & 4) == 0 )
    goto LABEL_17;
  bit_depth = row_info->bit_depth;
  if ( bit_depth == 8 )
  {
    gamma_from_1 = png_ptr->gamma_from_1;
    if ( gamma_from_1 )
    {
      v7 = (color_type & 2) == 0;
      v8 = 2;
      if ( !v7 )
        v8 = 4;
      for ( i = &row[v8 - 1]; width; --width )
      {
        *i = gamma_from_1[*i];
        i += v8;
      }
      return;
    }
LABEL_17:
    png_warning(png_ptr, "png_do_encode_alpha: unexpected call");
    return;
  }
  if ( bit_depth != 16 )
    goto LABEL_17;
  gamma_16_from_1 = png_ptr->gamma_16_from_1;
  gamma_shift = png_ptr->gamma_shift;
  if ( !gamma_16_from_1 )
    goto LABEL_17;
  v12 = 4;
  if ( (color_type & 2) != 0 )
    v12 = 8;
  v13 = &row[v12 - 2];
  if ( width )
  {
    v14 = gamma_shift;
    v15 = v12;
    do
    {
      v16 = gamma_16_from_1[(unsigned __int64)v13[1] >> v14][*v13];
      v13[1] = v16;
      *v13 = HIBYTE(v16);
      v13 += v15;
      --width;
    }
    while ( width );
  }
}

void __fastcall png_do_expand(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const png_color_16_struct *trans_color)
{
  unsigned __int8 color_type; // al
  unsigned __int64 width; // rsi
  unsigned int gray; // ebp
  unsigned __int8 v9; // al
  int v10; // er8
  unsigned __int8 *v11; // r9
  unsigned __int8 *v12; // r11
  __int64 v13; // rbx
  unsigned __int8 *v14; // r9
  int v15; // er8
  unsigned __int8 *v16; // r11
  __int64 v17; // rbx
  unsigned __int8 *v18; // r9
  unsigned __int8 *v19; // r8
  int v20; // edx
  unsigned __int8 *v21; // r9
  __int64 v22; // r11
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // r8
  unsigned __int8 *v25; // rdx
  unsigned __int64 v26; // r9
  unsigned __int8 v27; // al
  unsigned __int8 *v28; // rdx
  unsigned __int64 rowbytes; // rax
  unsigned __int8 *v30; // rdx
  unsigned __int8 *v31; // rcx
  unsigned __int64 v32; // r9
  unsigned __int8 *v33; // rcx
  unsigned __int8 v34; // al
  unsigned __int8 v35; // al
  unsigned __int8 bit_depth; // al
  char red; // r9
  char green; // r11
  char blue; // bl
  unsigned __int8 *v40; // r8
  unsigned __int8 *v41; // rdx
  __int64 v42; // rcx
  unsigned __int8 *v43; // rdx
  unsigned __int8 v44; // al
  char red_high; // r9
  char green_high; // r11
  unsigned __int8 *v47; // rdx
  char blue_high; // bl
  unsigned __int8 *v49; // rax
  char v50; // bp
  char v51; // di
  char v52; // r15
  __int64 v53; // r8
  unsigned __int8 *v54; // rax
  unsigned __int8 v55; // cl
  unsigned __int64 v56; // rcx

  color_type = row_info->color_type;
  width = row_info->width;
  if ( color_type )
  {
    if ( color_type != 2 || !trans_color )
      return;
    bit_depth = row_info->bit_depth;
    if ( bit_depth == 8 )
    {
      red = trans_color->red;
      green = trans_color->green;
      blue = trans_color->blue;
      v40 = &row[row_info->rowbytes - 1];
      v41 = &row[(unsigned int)(4 * width) - 1];
      if ( (_DWORD)width )
      {
        v42 = row_info->width;
        do
        {
          if ( *(v40 - 2) == red && *(v40 - 1) == green && *v40 == blue )
            *v41 = 0;
          else
            *v41 = -1;
          v43 = v41 - 1;
          *v43 = *v40;
          *(v43 - 1) = *(v40 - 1);
          v44 = *(v40 - 2);
          v40 -= 3;
          *(v43 - 2) = v44;
          v41 = v43 - 3;
          --v42;
        }
        while ( v42 );
      }
    }
    else if ( bit_depth == 16 )
    {
      red_high = HIBYTE(trans_color->red);
      green_high = HIBYTE(trans_color->green);
      v47 = &row[row_info->rowbytes - 1];
      blue_high = HIBYTE(trans_color->blue);
      v49 = &row[(unsigned int)(8 * width) - 1];
      v50 = trans_color->red;
      v51 = trans_color->blue;
      v52 = trans_color->green;
      if ( (_DWORD)width )
      {
        v53 = row_info->width;
        do
        {
          if ( *(v47 - 5) == red_high
            && *(v47 - 4) == v50
            && *(v47 - 3) == green_high
            && *(v47 - 2) == v52
            && *(v47 - 1) == blue_high
            && *v47 == v51 )
          {
            *(_WORD *)(v49 - 1) = 0;
          }
          else
          {
            *(_WORD *)(v49 - 1) = -1;
          }
          v54 = v49 - 2;
          *v54 = *v47;
          *(v54 - 1) = *(v47 - 1);
          *(v54 - 2) = *(v47 - 2);
          *(v54 - 3) = *(v47 - 3);
          *(v54 - 4) = *(v47 - 4);
          v55 = *(v47 - 5);
          v47 -= 6;
          *(v54 - 5) = v55;
          v49 = v54 - 6;
          --v53;
        }
        while ( v53 );
      }
    }
    v35 = 4 * row_info->bit_depth;
    row_info->color_type = 6;
    row_info->channels = 4;
    goto LABEL_69;
  }
  if ( trans_color )
    gray = trans_color->gray;
  else
    gray = 0;
  v9 = row_info->bit_depth;
  if ( v9 < 8u )
  {
    switch ( v9 )
    {
      case 1u:
        v18 = row - 1;
        gray = 255 * (gray & 1);
        v19 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 3];
        v20 = 7 - (((_BYTE)width - 1) & 7);
        v21 = &v18[width];
        v22 = row_info->width;
        if ( (_DWORD)width )
        {
          do
          {
            *v21 = -(((*v19 >> v20) & 1) != 0);
            if ( v20 == 7 )
            {
              v20 = 0;
              --v19;
            }
            else
            {
              ++v20;
            }
            --v21;
            --v22;
          }
          while ( v22 );
        }
        break;
      case 2u:
        gray = 85 * (gray & 3);
        v14 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 2];
        v15 = 6 - 2 * (((_BYTE)width - 1) & 3);
        v16 = &row[width - 1];
        v17 = row_info->width;
        if ( (_DWORD)width )
        {
          do
          {
            *v16 = (*v14 >> v15) & 3 | (4 * ((*v14 >> v15) & 3 | (4 * ((*v14 >> v15) & 3 | (4 * ((*v14 >> v15) & 3))))));
            if ( v15 == 6 )
            {
              v15 = 0;
              --v14;
            }
            else
            {
              v15 += 2;
            }
            --v16;
            --v17;
          }
          while ( v17 );
        }
        break;
      case 4u:
        v10 = 4 - 4 * (((_BYTE)width - 1) & 1);
        gray = 17 * (gray & 0xF);
        v11 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 1];
        v12 = &row[width - 1];
        v13 = row_info->width;
        if ( (_DWORD)width )
        {
          do
          {
            *v12 = (*v11 >> v10) & 0xF | (16 * ((*v11 >> v10) & 0xF));
            if ( v10 == 4 )
            {
              v10 = 0;
              --v11;
            }
            else
            {
              v10 = 4;
            }
            --v12;
            --v13;
          }
          while ( v13 );
        }
        break;
    }
    row_info->bit_depth = 8;
    row_info->rowbytes = width;
    row_info->pixel_depth = 8;
  }
  if ( trans_color )
  {
    v23 = row_info->bit_depth;
    if ( v23 == 8 )
    {
      v24 = &row[width - 1];
      v25 = &row[(unsigned int)(2 * width) - 1];
      v26 = width;
      if ( (_DWORD)width )
      {
        do
        {
          if ( *v24 == (unsigned __int8)gray )
            *v25 = 0;
          else
            *v25 = -1;
          v27 = *v24;
          v28 = v25 - 1;
          --v24;
          *v28 = v27;
          v25 = v28 - 1;
          --v26;
        }
        while ( v26 );
      }
    }
    else if ( v23 == 16 )
    {
      rowbytes = row_info->rowbytes;
      v30 = &row[rowbytes - 1];
      v31 = &row[2 * rowbytes - 1];
      if ( (_DWORD)width )
      {
        v32 = width;
        do
        {
          if ( *(v30 - 1) == gray >> 8 && *v30 == (unsigned __int8)gray )
            *(_WORD *)(v31 - 1) = 0;
          else
            *(_WORD *)(v31 - 1) = -1;
          v33 = v31 - 2;
          *v33 = *v30;
          v34 = *(v30 - 1);
          v30 -= 2;
          *(v33 - 1) = v34;
          v31 = v33 - 2;
          --v32;
        }
        while ( v32 );
      }
    }
    v35 = 2 * row_info->bit_depth;
    row_info->color_type = 4;
    row_info->channels = 2;
LABEL_69:
    row_info->pixel_depth = v35;
    if ( v35 < 8u )
      v56 = (width * v35 + 7) >> 3;
    else
      v56 = width * ((unsigned __int64)v35 >> 3);
    row_info->rowbytes = v56;
  }
}

void __fastcall png_do_expand_palette(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const png_color_struct *palette,
        const unsigned __int8 *trans_alpha,
        int num_trans)
{
  unsigned __int64 width; // rbx
  unsigned __int8 bit_depth; // al
  __int64 v11; // r11
  unsigned __int8 *v12; // r9
  unsigned __int8 *v13; // r8
  unsigned int v14; // edx
  __int64 v15; // r11
  unsigned __int8 *v16; // r9
  unsigned __int8 *v17; // r8
  int v18; // edx
  unsigned __int8 *v19; // r9
  __int64 v20; // r11
  unsigned __int8 *v21; // r8
  int v22; // edx
  unsigned __int8 *v23; // r9
  unsigned __int8 *v24; // r8
  unsigned __int8 *v25; // rdx
  unsigned __int64 v26; // r11
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  unsigned __int8 *v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r9
  unsigned __int8 *v33; // rdx
  __int64 v34; // rcx

  width = row_info->width;
  if ( row_info->color_type == 3 )
  {
    bit_depth = row_info->bit_depth;
    if ( bit_depth < 8u )
    {
      switch ( bit_depth )
      {
        case 1u:
          v19 = row - 1;
          v20 = row_info->width;
          v21 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 3];
          v22 = 7 - (((_BYTE)width - 1) & 7);
          v23 = &v19[width];
          if ( (_DWORD)width )
          {
            do
            {
              *v23 = (*v21 >> v22) & 1;
              if ( v22 == 7 )
              {
                v22 = 0;
                --v21;
              }
              else
              {
                ++v22;
              }
              --v23;
              --v20;
            }
            while ( v20 );
          }
          break;
        case 2u:
          v15 = row_info->width;
          v16 = &row[width - 1];
          v17 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 2];
          v18 = 6 - 2 * (((_BYTE)width - 1) & 3);
          if ( (_DWORD)width )
          {
            do
            {
              *v16 = (*v17 >> v18) & 3;
              if ( v18 == 6 )
              {
                v18 = 0;
                --v17;
              }
              else
              {
                v18 += 2;
              }
              --v16;
              --v15;
            }
            while ( v15 );
          }
          break;
        case 4u:
          v11 = (unsigned int)width;
          v12 = &row[width - 1];
          v13 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 1];
          v14 = 4 * (row_info->width & 1);
          if ( (_DWORD)width )
          {
            do
            {
              *v12 = (*v13 >> v14) & 0xF;
              if ( v14 == 4 )
              {
                v14 = 0;
                --v13;
              }
              else
              {
                v14 += 4;
              }
              --v12;
              --v11;
            }
            while ( v11 );
          }
          break;
      }
      row_info->bit_depth = 8;
      row_info->pixel_depth = 8;
      row_info->rowbytes = width;
    }
    if ( row_info->bit_depth == 8 )
    {
      v24 = &row[width - 1];
      v25 = row - 1;
      if ( num_trans <= 0 )
      {
        v31 = (unsigned int)(3 * width);
        v32 = width;
        v33 = &v25[v31];
        if ( (_DWORD)width )
        {
          do
          {
            v34 = *v24;
            v33 -= 3;
            --v24;
            v33[3] = *(&palette->blue + 2 * v34 + v34);
            v33[2] = *(&palette->green + 2 * v24[1] + v24[1]);
            v33[1] = *(&palette->red + 2 * v24[1] + v24[1]);
            --v32;
          }
          while ( v32 );
        }
        *(_DWORD *)&row_info->color_type = 402851842;
        row_info->rowbytes = v31;
      }
      else
      {
        v26 = width;
        v27 = &v25[(unsigned int)(4 * width)];
        if ( (_DWORD)width )
        {
          do
          {
            v28 = *v24;
            if ( (int)v28 < num_trans )
              *v27 = trans_alpha[v28];
            else
              *v27 = -1;
            v29 = v27 - 1;
            *v29 = *(&palette->blue + 2 * *v24 + *v24);
            *(v29 - 1) = *(&palette->green + 2 * *v24 + *v24);
            v30 = *v24--;
            *(v29 - 2) = *(&palette->red + 2 * v30 + v30);
            v27 = v29 - 3;
            --v26;
          }
          while ( v26 );
        }
        *(_DWORD *)&row_info->color_type = 537135110;
        row_info->rowbytes = (unsigned int)(4 * width);
      }
    }
  }
}

void __fastcall png_do_gamma(png_row_info_struct *row_info, unsigned __int8 *row, png_struct_def *png_ptr)
{
  unsigned __int8 bit_depth; // al
  unsigned __int8 *gamma_table; // rsi
  unsigned __int16 **gamma_16_table; // r14
  int gamma_shift; // er15
  __int64 width; // rbp
  unsigned __int8 color_type; // cl
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned __int16 v14; // r8
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int16 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // r8
  unsigned __int16 v27; // r8
  unsigned __int16 v28; // r8
  unsigned __int8 *v29; // r13
  __int64 v30; // rdx
  unsigned __int8 v31; // di
  __int64 v32; // r9
  unsigned __int8 v33; // al
  __int64 v34; // r10
  unsigned __int8 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int16 v40; // r8
  unsigned __int8 *v41; // [rsp+30h] [rbp+8h]

  bit_depth = row_info->bit_depth;
  gamma_table = png_ptr->gamma_table;
  gamma_16_table = png_ptr->gamma_16_table;
  gamma_shift = png_ptr->gamma_shift;
  width = row_info->width;
  v41 = row;
  if ( bit_depth <= 8u && gamma_table || bit_depth == 16 && gamma_16_table )
  {
    color_type = row_info->color_type;
    if ( color_type )
    {
      switch ( color_type )
      {
        case 2u:
          if ( bit_depth == 8 )
          {
            if ( (_DWORD)width )
            {
              v22 = width;
              do
              {
                v23 = *row;
                row += 3;
                *(row - 3) = gamma_table[v23];
                *(row - 2) = gamma_table[*(row - 2)];
                *(row - 1) = gamma_table[*(row - 1)];
                --v22;
              }
              while ( v22 );
            }
          }
          else if ( (_DWORD)width )
          {
            v24 = width;
            do
            {
              v25 = row[1];
              row += 6;
              v26 = gamma_16_table[v25 >> gamma_shift][*(row - 6)];
              *(row - 5) = v26;
              *(row - 6) = HIBYTE(v26);
              v27 = gamma_16_table[(unsigned __int64)*(row - 3) >> gamma_shift][*(row - 4)];
              *(row - 3) = v27;
              *(row - 4) = HIBYTE(v27);
              v28 = gamma_16_table[(unsigned __int64)*(row - 1) >> gamma_shift][*(row - 2)];
              *(row - 1) = v28;
              *(row - 2) = HIBYTE(v28);
              --v24;
            }
            while ( v24 );
          }
          break;
        case 4u:
          if ( bit_depth == 8 )
          {
            if ( (_DWORD)width )
            {
              v17 = width;
              do
              {
                v18 = *row;
                row += 2;
                *(row - 2) = gamma_table[v18];
                --v17;
              }
              while ( v17 );
            }
          }
          else if ( (_DWORD)width )
          {
            v19 = width;
            do
            {
              v20 = row[1];
              row += 4;
              v21 = gamma_16_table[v20 >> gamma_shift][*(row - 4)];
              *(row - 3) = v21;
              *(row - 4) = HIBYTE(v21);
              --v19;
            }
            while ( v19 );
          }
          break;
        case 6u:
          if ( bit_depth == 8 )
          {
            if ( (_DWORD)width )
            {
              v10 = width;
              do
              {
                v11 = *row;
                row += 4;
                *(row - 4) = gamma_table[v11];
                *(row - 3) = gamma_table[*(row - 3)];
                *(row - 2) = gamma_table[*(row - 2)];
                --v10;
              }
              while ( v10 );
            }
          }
          else if ( (_DWORD)width )
          {
            v12 = width;
            do
            {
              v13 = row[1];
              row += 8;
              v14 = gamma_16_table[v13 >> gamma_shift][*(row - 8)];
              *(row - 7) = v14;
              *(row - 8) = HIBYTE(v14);
              v15 = gamma_16_table[(unsigned __int64)*(row - 5) >> gamma_shift][*(row - 6)];
              *(row - 5) = v15;
              *(row - 6) = HIBYTE(v15);
              v16 = gamma_16_table[(unsigned __int64)*(row - 3) >> gamma_shift][*(row - 4)];
              *(row - 3) = v16;
              *(row - 4) = HIBYTE(v16);
              --v12;
            }
            while ( v12 );
          }
          break;
      }
    }
    else
    {
      if ( bit_depth == 2 )
      {
        v29 = row;
        if ( (_DWORD)width )
        {
          v30 = ((unsigned int)(width - 1) >> 2) + 1;
          do
          {
            v31 = *v29++;
            v32 = v31 & 3;
            *(v29 - 1) = gamma_table[v31 & 0xC0 | ((v31 & 0xC0 | ((v31 & 0xC0 | ((unsigned __int64)(v31 & 0xC0) >> 2)) >> 2)) >> 2)] & 0xC0 | ((unsigned __int8)(gamma_table[v31 & 0x30 | ((v31 & 0x30 | ((unsigned __int64)(v31 & 0x30) >> 2)) >> 2) | (4 * (v31 & 0x30u))] & 0xC3 | ((unsigned __int8)((gamma_table[v32 | (4 * ((unsigned int)v32 | (4 * ((unsigned int)v32 | (4 * (_DWORD)v32)))))] >> 2) | gamma_table[v31 & 0xC | ((unsigned __int64)(v31 & 0xC) >> 2) | (4 * (v31 & 0xC | (4 * (v31 & 0xCu))))] & 0xCF) >> 2)) >> 2);
            --v30;
          }
          while ( v30 );
          row = v41;
        }
      }
      v33 = row_info->bit_depth;
      if ( v33 == 4 )
      {
        if ( (_DWORD)width )
        {
          v34 = ((unsigned int)(width - 1) >> 1) + 1;
          do
          {
            v35 = *row++;
            *(row - 1) = gamma_table[v35 & 0xF0 | ((unsigned __int64)(v35 & 0xF0) >> 4)] & 0xF0 | (gamma_table[v35 & 0xF | (unsigned __int64)(16 * (v35 & 0xFu))] >> 4);
            --v34;
          }
          while ( v34 );
        }
      }
      else if ( v33 == 8 )
      {
        if ( (_DWORD)width )
        {
          v36 = width;
          do
          {
            v37 = *row++;
            *(row - 1) = gamma_table[v37];
            --v36;
          }
          while ( v36 );
        }
      }
      else if ( v33 == 16 && (_DWORD)width )
      {
        v38 = width;
        do
        {
          v39 = row[1];
          row += 2;
          v40 = gamma_16_table[v39 >> gamma_shift][*(row - 2)];
          *(row - 1) = v40;
          *(row - 2) = HIBYTE(v40);
          --v38;
        }
        while ( v38 );
      }
    }
  }
}

void __fastcall png_do_gray_to_rgb(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 bit_depth; // al
  __int64 width; // r10
  unsigned __int8 color_type; // cl
  __int64 v6; // r8
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v8; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // r11
  unsigned __int8 *v11; // r8
  unsigned __int8 *v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // r8
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rax
  unsigned __int8 v17; // cl
  __int64 v18; // r11
  unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // rdx
  unsigned __int8 v21; // al
  unsigned __int8 v22; // cl
  unsigned __int8 channels; // al
  unsigned __int8 v24; // cl

  bit_depth = row_info->bit_depth;
  width = row_info->width;
  if ( bit_depth >= 8u )
  {
    color_type = row_info->color_type;
    if ( (color_type & 2) == 0 )
    {
      if ( color_type )
      {
        if ( color_type == 4 )
        {
          if ( bit_depth == 8 )
          {
            v14 = width;
            v15 = &row[2 * width - 1];
            v16 = &v15[2 * width];
            if ( (_DWORD)width )
            {
              do
              {
                v17 = *v15;
                v15 -= 2;
                *v16 = v17;
                v16 -= 4;
                v16[3] = v15[1];
                v16[2] = v15[1];
                v16[1] = v15[1];
                --v14;
              }
              while ( v14 );
            }
          }
          else
          {
            v18 = width;
            v19 = &row[4 * width - 1];
            v20 = &v19[4 * width];
            if ( (_DWORD)width )
            {
              do
              {
                v21 = *v19;
                v19 -= 4;
                *v20 = v21;
                v20 -= 8;
                v20[7] = v19[3];
                v20[6] = v19[2];
                v20[5] = v19[1];
                v20[4] = v19[2];
                v20[3] = v19[1];
                v20[2] = v19[2];
                v20[1] = v19[1];
                --v18;
              }
              while ( v18 );
            }
          }
        }
      }
      else if ( bit_depth == 8 )
      {
        v6 = (unsigned int)width;
        v7 = &row[width - 1];
        v8 = &v7[2 * width];
        if ( (_DWORD)width )
        {
          do
          {
            v9 = *v7--;
            *v8 = v9;
            v8 -= 3;
            v8[2] = v7[1];
            v8[1] = v7[1];
            --v6;
          }
          while ( v6 );
        }
      }
      else
      {
        v10 = width;
        v11 = &row[2 * width - 1];
        v12 = &v11[4 * width];
        if ( (_DWORD)width )
        {
          do
          {
            v13 = *v11;
            v11 -= 2;
            *v12 = v13;
            v12 -= 6;
            v12[5] = v11[1];
            v12[4] = v11[2];
            v12[3] = v11[1];
            v12[2] = v11[2];
            v12[1] = v11[1];
            --v10;
          }
          while ( v10 );
        }
      }
      row_info->channels += 2;
      v22 = row_info->bit_depth;
      channels = row_info->channels;
      row_info->color_type |= 2u;
      v24 = channels * v22;
      row_info->pixel_depth = v24;
      if ( v24 < 8u )
        row_info->rowbytes = (width * (unsigned __int64)v24 + 7) >> 3;
      else
        row_info->rowbytes = width * ((unsigned __int64)v24 >> 3);
    }
  }
}

void __fastcall png_do_quantize(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        const unsigned __int8 *palette_lookup,
        const unsigned __int8 *quantize_lookup)
{
  __int64 width; // r11
  unsigned __int8 color_type; // al
  unsigned __int8 *v8; // r9
  __int64 v9; // rdi
  unsigned __int8 v10; // al
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int8 *v13; // r9
  __int64 v14; // rdi
  unsigned __int8 v15; // al
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int8 bit_depth; // al
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax

  width = row_info->width;
  if ( row_info->bit_depth != 8 )
    return;
  color_type = row_info->color_type;
  if ( color_type == 2 && palette_lookup )
  {
    v8 = row;
    if ( (_DWORD)width )
    {
      v9 = (unsigned int)width;
      do
      {
        ++v8;
        v10 = row[1];
        v11 = *row & 0xF8;
        v12 = row[2];
        row += 3;
        *(v8 - 1) = palette_lookup[(v12 >> 3) | (4 * (v10 & 0xF8 | (unsigned __int64)(32 * v11)))];
        --v9;
      }
      while ( v9 );
    }
LABEL_13:
    bit_depth = row_info->bit_depth;
    row_info->color_type = 3;
    row_info->channels = 1;
    row_info->pixel_depth = bit_depth;
    if ( bit_depth < 8u )
      v19 = (width * (unsigned __int64)bit_depth + 7) >> 3;
    else
      v19 = width * ((unsigned __int64)bit_depth >> 3);
    row_info->rowbytes = v19;
    return;
  }
  if ( color_type == 6 && palette_lookup )
  {
    v13 = row;
    if ( (_DWORD)width )
    {
      v14 = row_info->width;
      do
      {
        ++v13;
        v15 = row[1];
        v16 = *row & 0xF8;
        v17 = row[2];
        row += 4;
        *(v13 - 1) = palette_lookup[(v17 >> 3) | (4 * (v15 & 0xF8 | (unsigned __int64)(32 * v16)))];
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_13;
  }
  if ( color_type == 3 && quantize_lookup && (_DWORD)width )
  {
    v20 = row_info->width;
    do
    {
      v21 = *row++;
      *(row - 1) = quantize_lookup[v21];
      --v20;
    }
    while ( v20 );
  }
}

void __fastcall png_do_read_filler(
        png_row_info_struct *row_info,
        unsigned __int8 *row,
        unsigned int filler,
        unsigned int flags)
{
  unsigned __int8 color_type; // al
  __int64 width; // rbx
  unsigned __int8 v6; // r10
  unsigned int v7; // edi
  unsigned __int8 v9; // al
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned __int8 v14; // al
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int8 v19; // al
  unsigned __int8 bit_depth; // al
  unsigned __int8 *v21; // r8
  unsigned __int8 *v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  __int64 v25; // r8
  unsigned __int8 *v26; // rdx
  unsigned __int8 *v27; // rcx
  unsigned __int8 v28; // al
  unsigned __int8 *v29; // r8
  unsigned __int8 *v30; // rdx
  __int64 v31; // rcx
  unsigned __int8 *v32; // rdx
  __int64 v33; // r8
  unsigned __int8 *v34; // rcx
  unsigned __int8 v35; // al

  color_type = row_info->color_type;
  width = row_info->width;
  v6 = filler;
  v7 = filler >> 8;
  if ( color_type )
  {
    if ( color_type == 2 )
    {
      bit_depth = row_info->bit_depth;
      if ( bit_depth == 8 )
      {
        if ( (flags & 0x80u) == 0 )
        {
          v25 = row_info->width;
          v26 = &row[2 * width + width];
          v27 = &v26[width];
          if ( (_DWORD)width )
          {
            do
            {
              v28 = *(v26 - 1);
              v26 -= 3;
              *(v27 - 1) = v28;
              v27 -= 4;
              v27[2] = v26[1];
              v27[1] = *v26;
              *v27 = v6;
              --v25;
            }
            while ( v25 );
          }
          *(_WORD *)&row_info->channels = 8196;
          row_info->rowbytes = (unsigned int)(4 * width);
        }
        else
        {
          v21 = &row[2 * width + width];
          v22 = &v21[width];
          if ( (unsigned int)width > 1 )
          {
            v23 = (unsigned int)(width - 1);
            do
            {
              *(v22 - 1) = v6;
              v24 = *(v21 - 1);
              v21 -= 3;
              *(v22 - 2) = v24;
              *(v22 - 3) = v21[1];
              v22 -= 4;
              *v22 = *v21;
              --v23;
            }
            while ( v23 );
          }
          *(v22 - 1) = v6;
          row_info->rowbytes = (unsigned int)(4 * width);
          *(_WORD *)&row_info->channels = 8196;
        }
      }
      else if ( bit_depth == 16 )
      {
        if ( (flags & 0x80u) == 0 )
        {
          v32 = &row[6 * width];
          v33 = row_info->width;
          v34 = &v32[2 * width];
          if ( (_DWORD)width )
          {
            do
            {
              v35 = *(v32 - 1);
              v32 -= 6;
              *(v34 - 1) = v35;
              v34 -= 8;
              v34[6] = v32[4];
              v34[5] = v32[3];
              v34[4] = v32[2];
              v34[3] = v32[1];
              v34[2] = *v32;
              v34[1] = v7;
              *v34 = v6;
              --v33;
            }
            while ( v33 );
          }
        }
        else
        {
          v29 = &row[6 * width];
          v30 = &v29[2 * width];
          if ( (unsigned int)width > 1 )
          {
            v31 = (unsigned int)(width - 1);
            do
            {
              *(v30 - 1) = v7;
              v29 -= 6;
              *(v30 - 2) = v6;
              *(v30 - 3) = v29[5];
              *(v30 - 4) = v29[4];
              *(v30 - 5) = v29[3];
              *(v30 - 6) = v29[2];
              *(v30 - 7) = v29[1];
              v30 -= 8;
              *v30 = *v29;
              --v31;
            }
            while ( v31 );
          }
          *(v30 - 1) = v7;
          *(v30 - 2) = v6;
        }
        *(_WORD *)&row_info->channels = 16388;
        row_info->rowbytes = (unsigned int)(8 * width);
      }
    }
  }
  else
  {
    v9 = row_info->bit_depth;
    if ( v9 == 8 )
    {
      v10 = &row[width];
      v11 = &v10[width];
      if ( (flags & 0x80u) == 0 )
      {
        v13 = width;
        if ( (_DWORD)width )
        {
          do
          {
            v14 = *--v10;
            *(v11 - 1) = v14;
            v11 -= 2;
            *v11 = v6;
            --v13;
          }
          while ( v13 );
        }
        *(_WORD *)&row_info->channels = 4098;
        row_info->rowbytes = (unsigned int)(2 * width);
      }
      else
      {
        if ( (unsigned int)width > 1 )
        {
          v12 = (unsigned int)(width - 1);
          do
          {
            *(v11 - 1) = v6;
            --v10;
            v11 -= 2;
            *v11 = *v10;
            --v12;
          }
          while ( v12 );
        }
        *(v11 - 1) = v6;
        row_info->rowbytes = (unsigned int)(2 * width);
        *(_WORD *)&row_info->channels = 4098;
      }
    }
    else if ( v9 == 16 )
    {
      v15 = &row[2 * width];
      v16 = &v15[2 * width];
      if ( (flags & 0x80u) == 0 )
      {
        v18 = width;
        if ( (_DWORD)width )
        {
          do
          {
            v19 = *(v15 - 1);
            v15 -= 2;
            *(v16 - 1) = v19;
            v16 -= 4;
            v16[2] = *v15;
            v16[1] = v7;
            *v16 = v6;
            --v18;
          }
          while ( v18 );
        }
        *(_WORD *)&row_info->channels = 8194;
        row_info->rowbytes = (unsigned int)(4 * width);
      }
      else
      {
        if ( (unsigned int)width > 1 )
        {
          v17 = (unsigned int)(width - 1);
          do
          {
            *(v16 - 1) = v7;
            v15 -= 2;
            *(v16 - 2) = v6;
            *(v16 - 3) = v15[1];
            v16 -= 4;
            *v16 = *v15;
            --v17;
          }
          while ( v17 );
        }
        *(v16 - 1) = v7;
        *(v16 - 2) = v6;
        row_info->rowbytes = (unsigned int)(4 * width);
        *(_WORD *)&row_info->channels = 8194;
      }
    }
  }
}

void __fastcall png_do_read_invert_alpha(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 color_type; // al
  __int64 width; // r8
  unsigned __int8 *v4; // rcx
  __int64 v5; // rdx
  unsigned __int8 *v6; // rdx
  __int64 v7; // r9
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // rdx
  __int64 v10; // r9
  char v11; // al
  unsigned __int8 *v12; // rdx
  __int64 v13; // r9

  color_type = row_info->color_type;
  width = row_info->width;
  if ( color_type == 6 )
  {
    if ( row_info->bit_depth == 8 )
    {
      v4 = &row[row_info->rowbytes];
      if ( (_DWORD)width )
      {
        v5 = (unsigned int)width;
        do
        {
          *(v4 - 1) = ~*(v4 - 1);
          v4 -= 4;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      v6 = &row[row_info->rowbytes];
      if ( (_DWORD)width )
      {
        v7 = row_info->width;
        do
        {
          *(v6 - 1) = ~*(v6 - 1);
          *(v6 - 2) = ~*(v6 - 2);
          v6 -= 8;
          --v7;
        }
        while ( v7 );
      }
    }
  }
  else if ( color_type == 4 )
  {
    if ( row_info->bit_depth == 8 )
    {
      v8 = &row[row_info->rowbytes];
      v9 = v8;
      if ( (_DWORD)width )
      {
        v10 = width;
        do
        {
          v11 = *(v8 - 1);
          v8 -= 2;
          v9 -= 2;
          v9[1] = ~v11;
          *v9 = *v8;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v12 = &row[row_info->rowbytes];
      if ( (_DWORD)width )
      {
        v13 = row_info->width;
        do
        {
          *(v12 - 1) = ~*(v12 - 1);
          *(v12 - 2) = ~*(v12 - 2);
          v12 -= 4;
          --v13;
        }
        while ( v13 );
      }
    }
  }
}

void __fastcall png_do_read_swap_alpha(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 color_type; // al
  unsigned int width; // er10
  unsigned __int8 *v4; // rdx
  unsigned __int8 *v5; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl
  unsigned __int8 *v9; // r8
  unsigned __int8 *v10; // r9
  __int64 v11; // r11
  unsigned __int8 v12; // al
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // dl
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // cl
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // r9
  __int64 v21; // r11
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // r8

  color_type = row_info->color_type;
  width = row_info->width;
  if ( color_type == 6 )
  {
    if ( row_info->bit_depth == 8 )
    {
      v4 = &row[row_info->rowbytes];
      v5 = v4;
      if ( width )
      {
        v6 = width;
        do
        {
          v7 = *(v4 - 2);
          v5 -= 4;
          v8 = *(v4 - 1);
          v4 -= 4;
          v5[3] = v7;
          v5[2] = v4[1];
          v5[1] = *v4;
          *v5 = v8;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      v9 = &row[row_info->rowbytes];
      v10 = v9;
      if ( width )
      {
        v11 = row_info->width;
        do
        {
          v12 = *(v9 - 3);
          v10 -= 8;
          v13 = *(v9 - 1);
          v14 = *(v9 - 2);
          v9 -= 8;
          v10[7] = v12;
          v10[6] = v9[4];
          v10[5] = v9[3];
          v10[4] = v9[2];
          v10[3] = v9[1];
          v10[2] = *v9;
          v10[1] = v13;
          *v10 = v14;
          --v11;
        }
        while ( v11 );
      }
    }
  }
  else if ( color_type == 4 )
  {
    if ( row_info->bit_depth == 8 )
    {
      v15 = &row[row_info->rowbytes];
      v16 = v15;
      if ( width )
      {
        v17 = row_info->width;
        do
        {
          v18 = *(v15 - 1);
          v15 -= 2;
          *(v16 - 1) = *v15;
          v16 -= 2;
          *v16 = v18;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v19 = &row[row_info->rowbytes];
      v20 = v19;
      if ( width )
      {
        v21 = row_info->width;
        do
        {
          v22 = *(v19 - 3);
          v20 -= 4;
          v23 = *(v19 - 1);
          v24 = *(v19 - 2);
          v19 -= 4;
          v20[3] = v22;
          v20[2] = *v19;
          v20[1] = v23;
          *v20 = v24;
          --v21;
        }
        while ( v21 );
      }
    }
  }
}

void __fastcall png_do_read_transformations(png_struct_def *png_ptr, png_row_info_struct *row_info)
{
  unsigned __int8 *row_buf; // rdx
  unsigned int transformations; // eax
  png_color_16_struct *p_trans_color; // r8
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // er10
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // r8
  unsigned __int8 *i; // r9
  int v13; // ecx
  int v14; // eax
  int channels; // ecx
  unsigned __int8 v16; // al
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned __int64 rowbytes; // rax
  unsigned __int8 *v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  int v24; // ecx
  unsigned __int8 v25; // al
  unsigned int v26; // ecx
  unsigned int v27; // er9
  unsigned __int64 v28; // rcx
  unsigned __int8 *v29; // r8
  unsigned __int8 *j; // rdx
  unsigned __int8 v31; // al
  unsigned __int64 v32; // rax
  void (__fastcall *read_user_transform_fn)(png_struct_def *, png_row_info_struct *, unsigned __int8 *); // rax
  unsigned __int8 user_transform_depth; // al
  unsigned __int8 user_transform_channels; // al
  unsigned __int8 v36; // cl
  __int64 width; // rax

  row_buf = png_ptr->row_buf;
  if ( !row_buf )
    png_error(png_ptr, "NULL row buffer");
  if ( (png_ptr->flags & 0x4040) == 0x4000 )
    png_error(png_ptr, "Uninitialized row");
  transformations = png_ptr->transformations;
  if ( (transformations & 0x1000) != 0 )
  {
    if ( row_info->color_type == 3 )
    {
      png_do_expand_palette(row_info, row_buf + 1, png_ptr->palette, png_ptr->trans_alpha, png_ptr->num_trans);
    }
    else
    {
      if ( png_ptr->num_trans && (transformations & 0x2000000) != 0 )
        p_trans_color = &png_ptr->trans_color;
      else
        p_trans_color = 0i64;
      png_do_expand(row_info, row_buf + 1, p_trans_color);
    }
  }
  if ( (png_ptr->transformations & 0x40080) == 0x40000 && ((row_info->color_type - 4) & 0xFD) == 0 )
    png_do_strip_channel(row_info, png_ptr->row_buf + 1, 0);
  if ( (png_ptr->transformations & 0x600000) != 0 && png_do_rgb_to_gray(png_ptr, row_info, png_ptr->row_buf + 1) )
  {
    v7 = png_ptr->transformations & 0x600000;
    png_ptr->rgb_to_gray_status = 1;
    if ( v7 == 0x400000 )
      png_warning(png_ptr, "png_do_rgb_to_gray found nongray pixel");
    if ( (png_ptr->transformations & 0x600000) == 0x200000 )
      png_error(png_ptr, "png_do_rgb_to_gray found nongray pixel");
  }
  if ( (png_ptr->transformations & 0x4000) != 0 && (png_ptr->mode & 0x800) == 0 )
    png_do_gray_to_rgb(row_info, png_ptr->row_buf + 1);
  if ( SLOBYTE(png_ptr->transformations) < 0 )
    png_do_compose(row_info, png_ptr->row_buf + 1, png_ptr);
  v8 = png_ptr->transformations;
  if ( (v8 & 0x602000) == 0x2000
    && ((v8 & 0x80u) == 0 || !png_ptr->num_trans && (png_ptr->color_type & 4) == 0)
    && png_ptr->color_type != 3 )
  {
    png_do_gamma(row_info, png_ptr->row_buf + 1, png_ptr);
  }
  if ( (png_ptr->transformations & 0x40080) == 262272 && ((row_info->color_type - 4) & 0xFD) == 0 )
    png_do_strip_channel(row_info, png_ptr->row_buf + 1, 0);
  if ( (png_ptr->transformations & 0x800000) != 0 && (row_info->color_type & 4) != 0 )
    png_do_encode_alpha(row_info, png_ptr->row_buf + 1, png_ptr);
  v9 = png_ptr->transformations;
  if ( (v9 & 0x4000000) != 0 )
  {
    v10 = png_ptr->row_buf + 1;
    if ( row_info->bit_depth == 16 )
    {
      v11 = png_ptr->row_buf + 1;
      for ( i = &v10[row_info->rowbytes]; v10 < i; *(v11 - 1) = ((unsigned int)(0xFFFF * (v14 - v13 + 128)) >> 24) + v13 )
      {
        v13 = *v10;
        ++v11;
        v14 = v10[1];
        v10 += 2;
      }
      channels = row_info->channels;
      v16 = row_info->channels;
      row_info->bit_depth = 8;
      v17 = row_info->width * channels;
      row_info->pixel_depth = 8 * v16;
      row_info->rowbytes = v17;
    }
  }
  if ( (v9 & 0x400) != 0 )
  {
    v18 = (__int64)(png_ptr->row_buf + 1);
    if ( row_info->bit_depth == 16 )
    {
      rowbytes = row_info->rowbytes;
      v20 = png_ptr->row_buf + 1;
      v21 = (rowbytes + 1) >> 1;
      if ( v18 > rowbytes + v18 )
        v21 = 0i64;
      if ( v21 )
      {
        v22 = -v18;
        do
        {
          v23 = *(_BYTE *)v18;
          v18 += 2i64;
          *v20++ = v23;
        }
        while ( (unsigned __int64)&v20[v22] < v21 );
      }
      v24 = row_info->channels;
      v25 = row_info->channels;
      row_info->bit_depth = 8;
      v26 = row_info->width * v24;
      row_info->pixel_depth = 8 * v25;
      row_info->rowbytes = v26;
    }
  }
  if ( (v9 & 0x40) != 0 )
  {
    png_do_quantize(row_info, png_ptr->row_buf + 1, png_ptr->palette_lookup, png_ptr->quantize_index);
    if ( !row_info->rowbytes )
      png_error(png_ptr, "png_do_quantize returned rowbytes=0");
  }
  v27 = png_ptr->transformations;
  if ( (v27 & 0x200) != 0 && row_info->bit_depth == 8 && row_info->color_type != 3 )
  {
    v28 = row_info->rowbytes;
    v29 = &png_ptr->row_buf[v28 + 1];
    for ( j = &v29[v28]; j > v29; *j = v31 )
    {
      v31 = *--v29;
      *(j - 1) = v31;
      j -= 2;
    }
    v32 = 2 * row_info->rowbytes;
    row_info->bit_depth = 16;
    row_info->rowbytes = v32;
    row_info->pixel_depth = 16 * row_info->channels;
  }
  if ( (v27 & 0x4000) != 0 && (png_ptr->mode & 0x800) != 0 )
    png_do_gray_to_rgb(row_info, png_ptr->row_buf + 1);
  if ( (png_ptr->transformations & 0x20) != 0 )
    png_do_invert(row_info, png_ptr->row_buf + 1);
  if ( (png_ptr->transformations & 0x80000) != 0 )
    png_do_read_invert_alpha(row_info, png_ptr->row_buf + 1);
  if ( (png_ptr->transformations & 8) != 0 )
    png_do_unshift(row_info, png_ptr->row_buf + 1, &png_ptr->shift);
  if ( (png_ptr->transformations & 4) != 0 )
    png_do_unpack(row_info, png_ptr->row_buf + 1);
  if ( row_info->color_type == 3 && png_ptr->num_palette_max >= 0 )
    png_do_check_palette_indexes(png_ptr, row_info);
  if ( (png_ptr->transformations & 1) != 0 )
    png_do_bgr(row_info, png_ptr->row_buf + 1);
  if ( (png_ptr->transformations & 0x10000) != 0 )
    png_do_packswap(row_info, png_ptr->row_buf + 1);
  if ( (png_ptr->transformations & 0x8000) != 0 )
    png_do_read_filler(row_info, png_ptr->row_buf + 1, png_ptr->filler, png_ptr->flags);
  if ( (png_ptr->transformations & 0x20000) != 0 )
    png_do_read_swap_alpha(row_info, png_ptr->row_buf + 1);
  if ( (png_ptr->transformations & 0x10) != 0 )
    png_do_swap(row_info, png_ptr->row_buf + 1);
  if ( (png_ptr->transformations & 0x100000) != 0 )
  {
    read_user_transform_fn = png_ptr->read_user_transform_fn;
    if ( read_user_transform_fn )
      read_user_transform_fn(png_ptr, row_info, png_ptr->row_buf + 1);
    user_transform_depth = png_ptr->user_transform_depth;
    if ( user_transform_depth )
      row_info->bit_depth = user_transform_depth;
    user_transform_channels = png_ptr->user_transform_channels;
    if ( user_transform_channels )
      row_info->channels = user_transform_channels;
    v36 = row_info->bit_depth * row_info->channels;
    width = row_info->width;
    row_info->pixel_depth = v36;
    if ( v36 < 8u )
      row_info->rowbytes = (width * (unsigned __int64)v36 + 7) >> 3;
    else
      row_info->rowbytes = width * ((unsigned __int64)v36 >> 3);
  }
}

__int64 __fastcall png_do_rgb_to_gray(png_struct_def *png_ptr, png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 color_type; // al
  unsigned int v4; // esi
  png_row_info_struct *v5; // r12
  __int64 width; // r10
  int rgb_to_gray_green_coeff; // edi
  int rgb_to_gray_red_coeff; // er13
  int v10; // er15
  unsigned __int64 v11; // r14
  unsigned __int8 *gamma_to_1; // r11
  unsigned __int8 *v13; // r9
  __int64 v14; // rbx
  unsigned __int8 *gamma_from_1; // r12
  unsigned __int8 v16; // r10
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // al
  unsigned __int8 *gamma_table; // rcx
  unsigned __int8 *v20; // rdx
  __int64 v21; // r11
  unsigned __int8 v22; // r9
  unsigned __int8 v23; // r10
  unsigned __int8 v24; // al
  unsigned __int8 *v25; // rdi
  __int64 v26; // r12
  __int16 v27; // dx
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // r9
  __int16 v30; // ax
  unsigned __int16 v31; // dx
  unsigned __int16 **gamma_16_table; // r9
  unsigned __int64 v33; // rdx
  unsigned __int16 *v34; // rax
  unsigned __int64 v35; // r11
  unsigned __int16 **gamma_16_to_1; // rdx
  int v37; // er10
  char gamma_shift; // cl
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int8 *v41; // rdx
  __int64 v42; // r11
  __int16 v43; // cx
  unsigned __int16 v44; // r9
  unsigned __int16 v45; // r10
  __int16 v46; // ax
  unsigned __int16 v47; // cx
  unsigned int v48; // ecx
  unsigned __int8 channels; // al
  unsigned __int8 bit_depth; // cl
  unsigned __int8 v51; // cl
  __int64 result; // rax
  unsigned int v54; // [rsp+58h] [rbp+20h]

  color_type = row_info->color_type;
  v4 = 0;
  v5 = row_info;
  if ( (color_type & 1) != 0 || (color_type & 2) == 0 )
    return v4;
  width = row_info->width;
  rgb_to_gray_green_coeff = png_ptr->rgb_to_gray_green_coeff;
  rgb_to_gray_red_coeff = png_ptr->rgb_to_gray_red_coeff;
  v10 = 0x8000 - rgb_to_gray_green_coeff - rgb_to_gray_red_coeff;
  v11 = ((unsigned __int64)color_type >> 2) & 1;
  v54 = row_info->width;
  if ( row_info->bit_depth != 8 )
  {
    if ( !png_ptr->gamma_16_to_1 || !png_ptr->gamma_16_from_1 )
    {
      v41 = row;
      if ( (_DWORD)width )
      {
        v42 = width;
        do
        {
          v43 = row[5];
          v44 = _byteswap_ushort(*(_WORD *)row);
          v45 = _byteswap_ushort(*((_WORD *)row + 1));
          v46 = row[4] << 8;
          row += 6;
          v47 = v46 | v43;
          if ( v44 != v45 || v44 != v47 )
            v4 |= 1u;
          v48 = (rgb_to_gray_red_coeff * v44 + rgb_to_gray_green_coeff * v45 + v10 * (unsigned int)v47 + 0x4000) >> 15;
          *v41 = BYTE1(v48);
          v41[1] = v48;
          v41 += 2;
          if ( v11 )
          {
            *v41 = *row;
            v41[1] = row[1];
            v41 += 2;
            row += 2;
          }
          --v42;
        }
        while ( v42 );
        goto LABEL_50;
      }
      goto LABEL_51;
    }
    v25 = row;
    if ( !(_DWORD)width )
      goto LABEL_51;
    v26 = row_info->width;
    while ( 1 )
    {
      v27 = row[4];
      v28 = _byteswap_ushort(*(_WORD *)row);
      v29 = _byteswap_ushort(*((_WORD *)row + 1));
      v30 = row[5];
      row += 6;
      v31 = v30 | (v27 << 8);
      if ( v28 != v29 || v28 != v31 )
        break;
      gamma_16_table = png_ptr->gamma_16_table;
      if ( gamma_16_table )
      {
        v33 = (unsigned __int64)v28 >> 8;
        v34 = gamma_16_table[(unsigned __int64)(unsigned __int8)v28 >> LOBYTE(png_ptr->gamma_shift)];
LABEL_37:
        v28 = v34[v33];
      }
      *v25 = HIBYTE(v28);
      v25[1] = v28;
      v25 += 2;
      if ( v11 )
      {
        *v25 = *row;
        v25[1] = row[1];
        v25 += 2;
        row += 2;
      }
      if ( !--v26 )
      {
        v5 = row_info;
        goto LABEL_50;
      }
    }
    v35 = v31;
    gamma_16_to_1 = png_ptr->gamma_16_to_1;
    v37 = rgb_to_gray_red_coeff
        * gamma_16_to_1[(unsigned __int64)(unsigned __int8)v28 >> LOWORD(png_ptr->gamma_shift)][(unsigned __int64)v28 >> 8]
        + png_ptr->rgb_to_gray_green_coeff
        * gamma_16_to_1[(unsigned __int64)(unsigned __int8)v29 >> LOWORD(png_ptr->gamma_shift)][(unsigned __int64)v29 >> 8];
    gamma_shift = png_ptr->gamma_shift;
    v39 = (unsigned __int16)((v37
                            + v10
                            * (unsigned int)gamma_16_to_1[(unsigned __int64)(unsigned __int8)v35 >> gamma_shift][v35 >> 8]
                            + 0x4000) >> 15);
    v40 = (unsigned __int64)(unsigned __int8)v39 >> gamma_shift;
    v33 = v39 >> 8;
    v4 |= 1u;
    v34 = png_ptr->gamma_16_from_1[v40];
    goto LABEL_37;
  }
  if ( png_ptr->gamma_from_1 && (gamma_to_1 = png_ptr->gamma_to_1) != 0i64 )
  {
    v13 = row;
    if ( (_DWORD)width )
    {
      v14 = (unsigned int)width;
      gamma_from_1 = png_ptr->gamma_from_1;
      do
      {
        v16 = *row;
        v17 = row[1];
        v18 = row[2];
        row += 3;
        if ( v16 == v17 && v16 == v18 )
        {
          gamma_table = png_ptr->gamma_table;
          if ( gamma_table )
            v16 = gamma_table[v16];
          *v13 = v16;
        }
        else
        {
          v4 |= 1u;
          *v13 = gamma_from_1[(unsigned __int64)(rgb_to_gray_green_coeff * gamma_to_1[v17]
                                               + v10 * gamma_to_1[v18]
                                               + rgb_to_gray_red_coeff * (unsigned int)gamma_to_1[v16]
                                               + 0x4000) >> 15];
        }
        ++v13;
        if ( v11 )
          *v13++ = *row++;
        --v14;
      }
      while ( v14 );
      v5 = row_info;
LABEL_50:
      LODWORD(width) = v54;
    }
  }
  else
  {
    v20 = row;
    if ( (_DWORD)width )
    {
      v21 = width;
      do
      {
        v22 = *row;
        v23 = row[1];
        v24 = row[2];
        row += 3;
        if ( v22 == v23 && v22 == v24 )
        {
          *v20 = v22;
        }
        else
        {
          v4 |= 1u;
          *v20 = (rgb_to_gray_red_coeff * v22 + rgb_to_gray_green_coeff * v23 + v10 * (unsigned int)v24) >> 15;
        }
        ++v20;
        if ( v11 )
          *v20++ = *row++;
        --v21;
      }
      while ( v21 );
      goto LABEL_50;
    }
  }
LABEL_51:
  v5->channels -= 2;
  channels = v5->channels;
  bit_depth = v5->bit_depth;
  v5->color_type &= ~2u;
  v51 = channels * bit_depth;
  v5->pixel_depth = v51;
  if ( v51 >= 8u )
  {
    result = v4;
    v5->rowbytes = (unsigned int)width * ((unsigned __int64)v51 >> 3);
    return result;
  }
  v5->rowbytes = ((unsigned int)width * (unsigned __int64)v51 + 7) >> 3;
  return v4;
}

void __fastcall png_do_unpack(png_row_info_struct *row_info, unsigned __int8 *row)
{
  unsigned __int8 bit_depth; // al
  __int64 width; // rbx
  __int64 v5; // r10
  unsigned __int8 *v6; // r9
  unsigned __int8 *v7; // r8
  int v8; // edx
  __int64 v9; // r10
  unsigned __int8 *v10; // r9
  unsigned __int8 *v11; // r8
  int v12; // edx
  __int64 v13; // r10
  unsigned __int8 *v14; // r9
  unsigned __int8 *v15; // r8
  int v16; // edx
  int channels; // ecx
  unsigned __int8 v18; // al

  bit_depth = row_info->bit_depth;
  if ( bit_depth < 8u )
  {
    width = row_info->width;
    switch ( bit_depth )
    {
      case 1u:
        v13 = row_info->width;
        v14 = &row[width - 1];
        v15 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 3];
        v16 = 7 - (((_BYTE)width - 1) & 7);
        if ( (_DWORD)width )
        {
          do
          {
            *v14 = (*v15 >> v16) & 1;
            if ( v16 == 7 )
            {
              v16 = 0;
              --v15;
            }
            else
            {
              ++v16;
            }
            --v14;
            --v13;
          }
          while ( v13 );
        }
        break;
      case 2u:
        v9 = row_info->width;
        v10 = &row[width - 1];
        v11 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 2];
        v12 = 2 * (3 - (((_BYTE)width - 1) & 3));
        if ( (_DWORD)width )
        {
          do
          {
            *v10 = (*v11 >> v12) & 3;
            if ( v12 == 6 )
            {
              v12 = 0;
              --v11;
            }
            else
            {
              v12 += 2;
            }
            --v10;
            --v9;
          }
          while ( v9 );
        }
        break;
      case 4u:
        v5 = (unsigned int)width;
        v6 = &row[width - 1];
        v7 = &row[(unsigned __int64)(unsigned int)(width - 1) >> 1];
        v8 = 4 * (1 - (((_BYTE)width - 1) & 1));
        if ( (_DWORD)width )
        {
          do
          {
            *v6 = (*v7 >> v8) & 0xF;
            if ( v8 == 4 )
            {
              v8 = 0;
              --v7;
            }
            else
            {
              v8 = 4;
            }
            --v6;
            --v5;
          }
          while ( v5 );
        }
        break;
    }
    channels = row_info->channels;
    v18 = row_info->channels;
    row_info->bit_depth = 8;
    row_info->pixel_depth = 8 * v18;
    row_info->rowbytes = (unsigned int)(width * channels);
  }
}

void __fastcall png_do_unshift(png_row_info_struct *row_info, unsigned __int8 *row, const png_color_8_struct *sig_bits)
{
  int color_type; // er11
  int bit_depth; // er9
  int green; // eax
  int v8; // ecx
  int blue; // eax
  unsigned int v10; // er8
  int gray; // eax
  __int64 v12; // rax
  __int64 v13; // r10
  int v14; // er11
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rdi
  int v18; // ebx
  unsigned __int8 *v19; // rdi
  __int64 v20; // r11
  int v21; // ecx
  __int64 v22; // r11
  int v23; // er9
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // r11
  int v27; // er9
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned int v30; // eax
  char v31; // cl
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v35; // r9
  char v36; // cl
  int v37; // er8
  __int64 v38; // r10
  unsigned __int8 v39; // al
  unsigned __int64 rowbytes; // rcx
  __int64 v41; // r8
  unsigned __int8 v42; // al
  int v43[4]; // [rsp+0h] [rbp-28h]

  color_type = row_info->color_type;
  if ( color_type != 3 )
  {
    bit_depth = row_info->bit_depth;
    if ( (color_type & 2) != 0 )
    {
      green = sig_bits->green;
      v43[0] = bit_depth - sig_bits->red;
      v8 = bit_depth - green;
      blue = sig_bits->blue;
      v43[1] = v8;
      v10 = 3;
      v43[2] = bit_depth - blue;
    }
    else
    {
      gray = sig_bits->gray;
      v10 = 1;
      v43[0] = bit_depth - gray;
    }
    if ( (color_type & 4) != 0 )
    {
      v12 = v10++;
      v43[v12] = bit_depth - sig_bits->alpha;
    }
    v13 = v10;
    v14 = 0;
    v15 = 0i64;
    if ( v10 )
    {
      do
      {
        v16 = v43[v15];
        if ( v16 <= 0 || v16 >= bit_depth )
          v43[v15] = 0;
        else
          v14 = 1;
        ++v15;
      }
      while ( v15 < v10 );
      if ( v14 )
      {
        switch ( bit_depth )
        {
          case 2:
            rowbytes = row_info->rowbytes;
            if ( row > &row[rowbytes] )
              rowbytes = 0i64;
            if ( rowbytes )
            {
              v41 = -(__int64)row;
              do
              {
                v42 = *row++;
                *(row - 1) = (v42 >> 1) & 0x55;
              }
              while ( (unsigned __int64)&row[v41] < rowbytes );
            }
            break;
          case 4:
            v35 = row_info->rowbytes;
            v36 = v43[0];
            v37 = (16 * (15 >> SLOBYTE(v43[0]))) | (15 >> SLOBYTE(v43[0]));
            if ( row > &row[v35] )
              v35 = 0i64;
            if ( v35 )
            {
              v38 = -(__int64)row;
              do
              {
                v39 = *row++;
                *(row - 1) = v37 & (v39 >> v36);
              }
              while ( (unsigned __int64)&row[v38] < v35 );
            }
            break;
          case 8:
            v26 = row_info->rowbytes;
            v27 = 0;
            if ( row > &row[v26] )
              v26 = 0i64;
            if ( v26 )
            {
              v28 = 0i64;
              v29 = -(__int64)row;
              do
              {
                v30 = *row++;
                v31 = v43[v28];
                v32 = v28 + 1;
                *(row - 1) = v30 >> v31;
                v33 = v27 + 1;
                v27 = 0;
                if ( v32 < v13 )
                  v27 = v33;
                v34 = 0i64;
                if ( v32 < v13 )
                  v34 = v32;
                v28 = v34;
              }
              while ( (unsigned __int64)&row[v29] < v26 );
            }
            break;
          case 16:
            v17 = row_info->rowbytes;
            v18 = 0;
            v19 = &row[v17];
            if ( row < v19 )
            {
              v20 = 0i64;
              do
              {
                v21 = v43[v20];
                v22 = v20 + 1;
                v23 = (row[1] + (*row << 8)) >> v21;
                *row = BYTE1(v23);
                v24 = v18 + 1;
                row[1] = v23;
                v18 = 0;
                row += 2;
                if ( v22 < v10 )
                  v18 = v24;
                v25 = 0i64;
                if ( v22 < v10 )
                  v25 = v22;
                v20 = v25;
              }
              while ( row < v19 );
            }
            break;
        }
      }
    }
  }
}

void __fastcall png_init_palette_transformations(png_struct_def *png_ptr)
{
  unsigned __int16 num_trans; // bx
  int v2; // er9
  int v4; // er10
  int v5; // eax
  unsigned __int8 *trans_alpha; // rcx
  unsigned int transformations; // er10
  png_color_struct *v8; // rdx
  unsigned __int8 *v9; // rcx
  __m128i si128; // xmm2
  unsigned __int8 *v11; // rdx
  __m128i v12; // xmm0
  unsigned __int8 *v13; // rax
  __int64 v14; // rdx

  num_trans = png_ptr->num_trans;
  v2 = 0;
  v4 = 0;
  if ( num_trans )
  {
    v5 = 0;
    trans_alpha = png_ptr->trans_alpha;
    do
    {
      if ( *trans_alpha != 0xFF )
      {
        if ( *trans_alpha )
          goto LABEL_10;
        v4 = 1;
      }
      ++v5;
      ++trans_alpha;
    }
    while ( v5 < num_trans );
  }
  png_ptr->transformations &= ~0x800000u;
  png_ptr->flags &= ~0x2000u;
  if ( !v4 )
    png_ptr->transformations &= 0xFFFFFE7F;
LABEL_10:
  transformations = png_ptr->transformations;
  if ( (transformations & 0x1100) == 4352 )
  {
    v8 = &png_ptr->palette[png_ptr->background.index];
    png_ptr->background.red = v8->red;
    png_ptr->background.green = v8->green;
    png_ptr->background.blue = v8->blue;
    if ( (transformations & 0x2080000) == 0x80000 )
    {
      if ( num_trans >= 0x20u )
      {
        v9 = png_ptr->trans_alpha;
        si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        v11 = v9 + 16;
        do
        {
          v12 = _mm_loadu_si128((const __m128i *)v11 - 1);
          v11 += 32;
          v2 += 32;
          *((__m128i *)v11 - 3) = _mm_sub_epi8(si128, v12);
          *((__m128i *)v11 - 2) = _mm_sub_epi8(si128, _mm_loadu_si128((const __m128i *)v11 - 2));
        }
        while ( (__int64)&v11[-16i64 - (_QWORD)v9] < (num_trans & 0xFFE0u) );
      }
      if ( v2 < (__int64)num_trans )
      {
        v13 = &png_ptr->trans_alpha[v2];
        v14 = num_trans - (__int64)v2;
        do
        {
          *v13 = ~*v13;
          ++v13;
          --v14;
        }
        while ( v14 );
      }
    }
  }
}

void __fastcall png_init_read_transformations(png_struct_def *png_ptr)
{
  int v1; // ebp
  int gamma; // ecx
  int v4; // esi
  int v5; // edi
  int screen_gamma; // er8
  int v7; // ecx
  unsigned int transformations; // ecx
  unsigned __int16 red; // ax
  unsigned int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned __int16 gray; // ax
  unsigned int v15; // ebp
  __int64 num_trans; // rdi
  unsigned __int8 v17; // r15
  unsigned __int8 green; // r13
  png_color_struct *palette; // r10
  unsigned __int8 blue; // si
  unsigned __int8 *trans_alpha; // r11
  unsigned __int8 *p_blue; // r10
  __int16 v23; // r14
  unsigned __int8 v24; // al
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // er10
  unsigned __int8 background_gamma_type; // al
  png_color_struct *v29; // r12
  __int64 v30; // r14
  unsigned __int8 *v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int8 v35; // r15
  unsigned __int8 *gamma_to_1; // rax
  unsigned __int8 v37; // di
  unsigned __int8 v38; // r11
  unsigned __int8 v39; // al
  int v40; // esi
  char v41; // al
  unsigned int v42; // ecx
  char v43; // al
  unsigned int v44; // ecx
  char v45; // al
  unsigned int v46; // ecx
  unsigned __int8 v47; // al
  unsigned int v48; // ecx
  __int64 v49; // r13
  int v50; // eax
  unsigned __int8 *v51; // rdi
  __int64 v52; // rsi
  unsigned __int8 *v53; // r14
  unsigned __int8 v54; // al
  unsigned __int8 *v55; // r10
  __int16 v56; // cx
  unsigned __int8 *gamma_from_1; // r11
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int16 v61; // r9
  unsigned __int8 v62; // cl
  unsigned __int8 *v63; // rdx
  __int64 v64; // rax
  unsigned __int8 v65; // cl
  __int64 v66; // rax
  int v67; // esi
  BOOL v68; // er14
  BOOL v69; // ebp
  unsigned __int16 v70; // ax
  unsigned __int16 v71; // cx
  unsigned __int16 v72; // ax
  unsigned __int16 v73; // ax
  unsigned int v74; // edx
  unsigned __int16 v75; // ax
  unsigned int v76; // edx
  unsigned __int16 v77; // ax
  unsigned int v78; // edx
  unsigned __int16 v79; // ax
  unsigned int v80; // edx
  __int64 num_palette; // r9
  unsigned __int8 *gamma_table; // r8
  unsigned __int8 *v83; // rdx
  __int64 v84; // rax
  unsigned __int8 v85; // cl
  __int64 v86; // rax
  unsigned __int8 v87; // cl
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  char v91; // r10
  png_color_struct *v92; // rax
  __int64 v93; // r9
  int v94; // er10
  __int64 v95; // r9
  unsigned __int8 *p_green; // rax
  int v97; // er8
  unsigned __int8 *v98; // rax
  int res; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v100; // [rsp+78h] [rbp+10h]
  unsigned __int8 v101; // [rsp+80h] [rbp+18h]
  __int16 v102; // [rsp+88h] [rbp+20h]

  v1 = 0;
  gamma = png_ptr->colorspace.gamma;
  v4 = 0;
  v5 = 100000;
  if ( gamma )
  {
    screen_gamma = png_ptr->screen_gamma;
    if ( screen_gamma )
    {
      if ( !(unsigned int)png_muldiv(&res, gamma, screen_gamma, 100000) || png_gamma_significant(res) )
        v4 = 1;
    }
    else
    {
      png_ptr->screen_gamma = png_reciprocal(gamma);
    }
  }
  else
  {
    v7 = png_ptr->screen_gamma;
    if ( v7 )
    {
      png_ptr->colorspace.gamma = png_reciprocal(v7);
    }
    else
    {
      png_ptr->colorspace.gamma = 100000;
      png_ptr->screen_gamma = 100000;
    }
  }
  png_ptr->colorspace.flags |= 1u;
  if ( v4 )
    png_ptr->transformations |= 0x2000u;
  else
    png_ptr->transformations &= ~0x2000u;
  transformations = png_ptr->transformations;
  if ( (transformations & 0x40080) == 0x40000 )
  {
    png_ptr->num_trans = 0;
    png_ptr->flags &= ~0x2000u;
    png_ptr->transformations = transformations & 0xFD7FFEFF;
  }
  if ( !png_gamma_significant(png_ptr->screen_gamma) )
  {
    png_ptr->transformations &= ~0x800000u;
    png_ptr->flags &= ~0x2000u;
  }
  if ( (png_ptr->transformations & 0x600000) != 0 )
    png_colorspace_set_rgb_coefficients(png_ptr);
  if ( (png_ptr->transformations & 0x100) != 0 )
  {
    if ( (png_ptr->color_type & 2) != 0 )
      goto LABEL_27;
  }
  else
  {
    if ( (png_ptr->transformations & 0x4080) != 16512 )
      goto LABEL_27;
    red = png_ptr->background.red;
    if ( red != png_ptr->background.green || red != png_ptr->background.blue )
      goto LABEL_27;
    png_ptr->background.gray = red;
  }
  png_ptr->mode |= 0x800u;
LABEL_27:
  if ( png_ptr->color_type == 3 )
    png_init_palette_transformations(png_ptr);
  else
    png_init_rgb_transformations(png_ptr);
  v10 = png_ptr->transformations;
  if ( (v10 & 0x380) == 640 && png_ptr->bit_depth != 16 )
  {
    png_ptr->background.red = (255 * ((unsigned int)png_ptr->background.red + 129)) >> 16;
    v11 = png_ptr->background.blue + 129;
    png_ptr->background.green = (255 * ((unsigned int)png_ptr->background.green + 129)) >> 16;
    v12 = 255 * v11;
    v13 = png_ptr->background.gray + 129;
    png_ptr->background.blue = HIWORD(v12);
    png_ptr->background.gray = (unsigned int)(255 * v13) >> 16;
  }
  if ( (v10 & 0x4000400) != 0 && (v10 & 0x80u) != 0 && (v10 & 0x100) == 0 && png_ptr->bit_depth == 16 )
  {
    png_ptr->background.red *= 257;
    png_ptr->background.green *= 257;
    png_ptr->background.blue *= 257;
    png_ptr->background.gray *= 257;
  }
  gray = png_ptr->background.gray;
  *(_QWORD *)&png_ptr->background_1.index = *(_QWORD *)&png_ptr->background.index;
  png_ptr->background_1.gray = gray;
  if ( (v10 & 0x2000) == 0
    && ((v10 & 0x600000) == 0
     || !png_gamma_significant(png_ptr->colorspace.gamma) && !png_gamma_significant(png_ptr->screen_gamma))
    && (SLOBYTE(png_ptr->transformations) >= 0
     || !png_gamma_significant(png_ptr->colorspace.gamma)
     && !png_gamma_significant(png_ptr->screen_gamma)
     && (png_ptr->background_gamma_type != 3 || !png_gamma_significant(png_ptr->background_gamma)))
    && ((png_ptr->transformations & 0x800000) == 0 || !png_gamma_significant(png_ptr->screen_gamma)) )
  {
    v15 = png_ptr->transformations;
    if ( (v15 & 0x80u) != 0 && png_ptr->color_type == 3 )
    {
      num_trans = png_ptr->num_trans;
      v17 = png_ptr->background.red;
      green = png_ptr->background.green;
      palette = png_ptr->palette;
      blue = png_ptr->background.blue;
      LOBYTE(res) = v17;
      BYTE1(res) = green;
      if ( num_trans )
      {
        trans_alpha = png_ptr->trans_alpha;
        p_blue = &palette->blue;
        v23 = res;
        do
        {
          v24 = *trans_alpha;
          if ( *trans_alpha )
          {
            if ( v24 != 0xFF )
            {
              v25 = (unsigned __int16)(v24 * *(p_blue - 2) + v17 * (255 - v24) + 128);
              *(p_blue - 2) = (unsigned __int16)(v25 + (v25 >> 8)) >> 8;
              *(p_blue - 1) = (unsigned __int16)(*trans_alpha * *(p_blue - 1)
                                               + green * (255 - *trans_alpha)
                                               + 128
                                               + ((unsigned __int16)(*trans_alpha * *(p_blue - 1)
                                                                   + green * (255 - *trans_alpha)
                                                                   + 128) >> 8)) >> 8;
              v26 = (unsigned __int16)(*trans_alpha * *p_blue + blue * (255 - *trans_alpha) + 128);
              *p_blue = (unsigned __int16)(v26 + (v26 >> 8)) >> 8;
            }
          }
          else
          {
            *((_WORD *)p_blue - 1) = v23;
            *p_blue = blue;
          }
          ++trans_alpha;
          p_blue += 3;
          --num_trans;
        }
        while ( num_trans );
      }
      png_ptr->transformations = v15 & 0xFFFFFF7F;
    }
    goto LABEL_114;
  }
  png_build_gamma_table(png_ptr, png_ptr->bit_depth);
  v27 = png_ptr->transformations;
  if ( (v27 & 0x80u) == 0 )
  {
    if ( png_ptr->color_type == 3
      && ((png_ptr->transformations & 0x600000) == 0 || (png_ptr->transformations & 0x1000) == 0) )
    {
      num_palette = png_ptr->num_palette;
      if ( png_ptr->num_palette )
      {
        gamma_table = png_ptr->gamma_table;
        v83 = &png_ptr->palette->blue;
        do
        {
          v84 = *(v83 - 2);
          v83 += 3;
          v85 = gamma_table[v84];
          v86 = *(v83 - 4);
          *(v83 - 5) = v85;
          v87 = gamma_table[v86];
          v88 = *(v83 - 3);
          *(v83 - 4) = v87;
          *(v83 - 3) = gamma_table[v88];
          --num_palette;
        }
        while ( num_palette );
      }
      png_ptr->transformations = v27 & 0xFFFFDFFF;
    }
  }
  else
  {
    if ( (v27 & 0x600000) != 0 )
      png_warning(png_ptr, "libpng does not support gamma+background+rgb_to_gray");
    if ( png_ptr->color_type == 3 )
    {
      background_gamma_type = png_ptr->background_gamma_type;
      v29 = png_ptr->palette;
      v30 = png_ptr->num_palette;
      if ( background_gamma_type == 2 )
      {
        v31 = png_ptr->gamma_table;
        v32 = png_ptr->background.red;
        v33 = png_ptr->background.green;
        v34 = png_ptr->background.blue;
        LOBYTE(v102) = v31[v32];
        v35 = v31[v34];
        HIBYTE(v102) = v31[v33];
        gamma_to_1 = png_ptr->gamma_to_1;
        v37 = gamma_to_1[v33];
        v38 = gamma_to_1[v32];
        v39 = gamma_to_1[v34];
        v100 = v37;
      }
      else
      {
        switch ( background_gamma_type )
        {
          case 1u:
            v40 = png_ptr->screen_gamma;
            break;
          case 2u:
            v40 = png_reciprocal(png_ptr->colorspace.gamma);
            v5 = png_reciprocal2(png_ptr->colorspace.gamma, png_ptr->screen_gamma);
            break;
          case 3u:
            v40 = png_reciprocal(png_ptr->background_gamma);
            v5 = png_reciprocal2(png_ptr->background_gamma, png_ptr->screen_gamma);
            break;
          default:
            v40 = 100000;
            break;
        }
        if ( png_gamma_significant(v5) )
        {
          v41 = png_gamma_8bit_correct(png_ptr->background.red, v5);
          v42 = png_ptr->background.green;
          LOBYTE(v102) = v41;
          v43 = png_gamma_8bit_correct(v42, v5);
          v44 = png_ptr->background.blue;
          HIBYTE(v102) = v43;
          v35 = png_gamma_8bit_correct(v44, v5);
        }
        else
        {
          v35 = png_ptr->background.blue;
          LOBYTE(v102) = png_ptr->background.red;
          HIBYTE(v102) = png_ptr->background.green;
        }
        if ( png_gamma_significant(v40) )
        {
          v45 = png_gamma_8bit_correct(png_ptr->background.red, v40);
          v46 = png_ptr->background.green;
          LOBYTE(res) = v45;
          v47 = png_gamma_8bit_correct(v46, v40);
          v48 = png_ptr->background.blue;
          v100 = v47;
          v39 = png_gamma_8bit_correct(v48, v40);
          v38 = res;
LABEL_78:
          v101 = v39;
          v49 = v30;
          if ( !(_DWORD)v30 )
          {
LABEL_88:
            png_ptr->transformations &= 0xFFFFDF7F;
            goto LABEL_114;
          }
          v50 = png_ptr->num_trans;
          v51 = &v29->blue;
          v52 = 0i64;
          while ( v1 < v50 )
          {
            v53 = &png_ptr->trans_alpha[v52];
            v54 = *v53;
            if ( *v53 == 0xFF )
              break;
            if ( v54 )
            {
              v55 = png_ptr->gamma_to_1;
              v56 = v38;
              gamma_from_1 = png_ptr->gamma_from_1;
              v58 = (unsigned __int16)(v56 * (255 - v54) + v54 * v55[*(v51 - 2)] + 128);
              LOBYTE(v56) = gamma_from_1[(unsigned __int16)(v58 + (v58 >> 8)) >> 8];
              v59 = *(v51 - 1);
              *(v51 - 2) = v56;
              LODWORD(v59) = (unsigned __int16)(v100 * (255 - *v53) + *v53 * v55[v59] + 128);
              LOBYTE(v56) = gamma_from_1[(unsigned __int16)(v59 + ((unsigned int)v59 >> 8)) >> 8];
              v60 = *v51;
              *(v51 - 1) = v56;
              v61 = v101 * (255 - *v53) + *v53 * v55[v60] + 128;
              v62 = gamma_from_1[(unsigned __int16)(v61 + HIBYTE(v61)) >> 8];
LABEL_86:
              *v51 = v62;
              goto LABEL_87;
            }
            *((_WORD *)v51 - 1) = v102;
            *v51 = v35;
LABEL_87:
            v50 = png_ptr->num_trans;
            ++v1;
            v38 = res;
            ++v52;
            v51 += 3;
            if ( v52 >= v49 )
              goto LABEL_88;
          }
          v63 = png_ptr->gamma_table;
          v64 = *(v51 - 1);
          *(v51 - 2) = v63[*(v51 - 2)];
          v65 = v63[v64];
          v66 = *v51;
          *(v51 - 1) = v65;
          v62 = v63[v66];
          goto LABEL_86;
        }
        v38 = png_ptr->background.red;
        v100 = png_ptr->background.green;
        v39 = png_ptr->background.blue;
      }
      LOBYTE(res) = v38;
      goto LABEL_78;
    }
    switch ( png_ptr->background_gamma_type )
    {
      case 1u:
        v67 = png_ptr->screen_gamma;
        break;
      case 2u:
        v67 = png_reciprocal(png_ptr->colorspace.gamma);
        v5 = png_reciprocal2(png_ptr->colorspace.gamma, png_ptr->screen_gamma);
        break;
      case 3u:
        v67 = png_reciprocal(png_ptr->background_gamma);
        v5 = png_reciprocal2(png_ptr->background_gamma, png_ptr->screen_gamma);
        break;
      default:
        png_error(png_ptr, "invalid background gamma type");
    }
    v68 = png_gamma_significant(v67);
    v69 = png_gamma_significant(v5);
    if ( v68 )
      png_ptr->background_1.gray = png_gamma_correct(png_ptr, png_ptr->background.gray, v67);
    if ( v69 )
      png_ptr->background.gray = png_gamma_correct(png_ptr, png_ptr->background.gray, v5);
    v70 = png_ptr->background.red;
    if ( v70 == png_ptr->background.green
      && v70 == png_ptr->background.blue
      && (v71 = png_ptr->background.gray, v70 == v71) )
    {
      v72 = png_ptr->background_1.gray;
      png_ptr->background_1.blue = v72;
      png_ptr->background_1.green = v72;
      png_ptr->background_1.red = v72;
      png_ptr->background.blue = v71;
      png_ptr->background.green = v71;
      png_ptr->background.red = v71;
      png_ptr->background_gamma_type = 1;
    }
    else
    {
      if ( v68 )
      {
        v73 = png_gamma_correct(png_ptr, v70, v67);
        v74 = png_ptr->background.green;
        png_ptr->background_1.red = v73;
        v75 = png_gamma_correct(png_ptr, v74, v67);
        v76 = png_ptr->background.blue;
        png_ptr->background_1.green = v75;
        png_ptr->background_1.blue = png_gamma_correct(png_ptr, v76, v67);
      }
      if ( v69 )
      {
        v77 = png_gamma_correct(png_ptr, png_ptr->background.red, v5);
        v78 = png_ptr->background.green;
        png_ptr->background.red = v77;
        v79 = png_gamma_correct(png_ptr, v78, v5);
        v80 = png_ptr->background.blue;
        png_ptr->background.green = v79;
        png_ptr->background.blue = png_gamma_correct(png_ptr, v80, v5);
      }
      png_ptr->background_gamma_type = 1;
    }
  }
LABEL_114:
  if ( (png_ptr->transformations & 0x1008) == 8 && png_ptr->color_type == 3 )
  {
    v89 = png_ptr->sig_bit.red;
    v90 = png_ptr->num_palette;
    png_ptr->transformations &= ~8u;
    v91 = 8 - v89;
    if ( (unsigned int)(8 - v89 - 1) <= 6 && v90 )
    {
      v92 = png_ptr->palette;
      v93 = (unsigned int)v90;
      do
      {
        v92->red >>= v91;
        ++v92;
        --v93;
      }
      while ( v93 );
    }
    v94 = 8 - png_ptr->sig_bit.green;
    if ( (unsigned int)(v94 - 1) <= 6 && v90 )
    {
      v95 = v90;
      p_green = &png_ptr->palette->green;
      do
      {
        *p_green >>= v94;
        p_green += 3;
        --v95;
      }
      while ( v95 );
    }
    v97 = 8 - png_ptr->sig_bit.blue;
    if ( (unsigned int)(v97 - 1) <= 6 && v90 )
    {
      v98 = &png_ptr->palette->blue;
      do
      {
        *v98 >>= v97;
        v98 += 3;
        --v90;
      }
      while ( v90 );
    }
  }
}

void __fastcall png_init_rgb_transformations(png_struct_def *png_ptr)
{
  unsigned __int8 color_type; // dl
  unsigned int transformations; // er10
  unsigned __int16 gray; // r8
  unsigned __int16 v4; // dx

  color_type = png_ptr->color_type;
  if ( (color_type & 4) == 0 )
  {
    png_ptr->transformations &= ~0x800000u;
    png_ptr->flags &= ~0x2000u;
    if ( !png_ptr->num_trans )
      png_ptr->transformations &= 0xFFFFFE7F;
  }
  transformations = png_ptr->transformations;
  if ( (transformations & 0x1100) == 4352 && (color_type & 2) == 0 )
  {
    gray = png_ptr->background.gray;
    v4 = png_ptr->trans_color.gray;
    switch ( png_ptr->bit_depth )
    {
      case 1u:
        gray *= 255;
        v4 *= 255;
        break;
      case 2u:
        gray *= 85;
        v4 *= 85;
        break;
      case 4u:
        gray *= 17;
        v4 *= 17;
        break;
    }
    png_ptr->background.blue = gray;
    png_ptr->background.green = gray;
    png_ptr->background.red = gray;
    if ( (transformations & 0x2000000) == 0 )
    {
      png_ptr->trans_color.blue = v4;
      png_ptr->trans_color.green = v4;
      png_ptr->trans_color.red = v4;
    }
  }
}

void __fastcall png_read_transform_info(png_struct_def *png_ptr, png_info_def *info_ptr)
{
  unsigned int transformations; // er8
  unsigned __int8 color_type; // al
  bool v5; // zf
  unsigned __int8 v6; // al
  unsigned __int16 gray; // ax
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 user_transform_depth; // al
  unsigned __int8 user_transform_channels; // cl
  unsigned __int8 channels; // al
  unsigned __int8 v13; // cl
  __int64 width; // rax
  unsigned __int64 v15; // rcx

  transformations = png_ptr->transformations;
  if ( (transformations & 0x1000) != 0 )
  {
    color_type = info_ptr->color_type;
    if ( color_type == 3 )
    {
      v5 = png_ptr->num_trans == 0;
      v6 = 2;
      info_ptr->bit_depth = 8;
      if ( !v5 )
        v6 = 6;
      info_ptr->num_trans = 0;
      info_ptr->color_type = v6;
      if ( !png_ptr->palette )
        png_error(png_ptr, "Palette is NULL in indexed image");
    }
    else
    {
      if ( png_ptr->num_trans && (transformations & 0x2000000) != 0 )
        info_ptr->color_type = color_type | 4;
      if ( info_ptr->bit_depth < 8u )
        info_ptr->bit_depth = 8;
      info_ptr->num_trans = 0;
    }
  }
  if ( (transformations & 0x80u) != 0 )
  {
    gray = png_ptr->background.gray;
    *(_QWORD *)&info_ptr->background.index = *(_QWORD *)&png_ptr->background.index;
    info_ptr->background.gray = gray;
  }
  v5 = info_ptr->bit_depth == 16;
  info_ptr->colorspace.gamma = png_ptr->colorspace.gamma;
  if ( v5 )
  {
    if ( (transformations & 0x4000000) != 0 )
      info_ptr->bit_depth = 8;
    if ( (transformations & 0x400) != 0 )
      info_ptr->bit_depth = 8;
  }
  if ( (transformations & 0x4000) != 0 )
    info_ptr->color_type |= 2u;
  if ( (transformations & 0x600000) != 0 )
    info_ptr->color_type &= ~2u;
  if ( (transformations & 0x40) != 0
    && ((info_ptr->color_type - 2) & 0xFB) == 0
    && png_ptr->palette_lookup
    && info_ptr->bit_depth == 8 )
  {
    info_ptr->color_type = 3;
  }
  if ( (transformations & 0x200) != 0 && info_ptr->bit_depth == 8 && info_ptr->color_type != 3 )
    info_ptr->bit_depth = 16;
  if ( (transformations & 4) != 0 && info_ptr->bit_depth < 8u )
    info_ptr->bit_depth = 8;
  v8 = info_ptr->color_type;
  if ( v8 == 3 || (v8 & 2) == 0 )
    info_ptr->channels = 1;
  else
    info_ptr->channels = 3;
  if ( (transformations & 0x40000) != 0 )
  {
    info_ptr->num_trans = 0;
    info_ptr->color_type = v8 & 0xFB;
  }
  v9 = info_ptr->color_type;
  if ( (v9 & 4) != 0 )
    ++info_ptr->channels;
  if ( (transformations & 0x8000) != 0 && (v9 & 0xFD) == 0 )
  {
    ++info_ptr->channels;
    if ( (transformations & 0x1000000) != 0 )
      info_ptr->color_type = v9 | 4;
  }
  if ( (transformations & 0x100000) != 0 )
  {
    user_transform_depth = png_ptr->user_transform_depth;
    if ( info_ptr->bit_depth < user_transform_depth )
      info_ptr->bit_depth = user_transform_depth;
    user_transform_channels = png_ptr->user_transform_channels;
    channels = info_ptr->channels;
    if ( channels < user_transform_channels )
      channels = user_transform_channels;
    info_ptr->channels = channels;
  }
  v13 = info_ptr->channels * info_ptr->bit_depth;
  width = info_ptr->width;
  info_ptr->pixel_depth = v13;
  if ( v13 < 8u )
    v15 = (width * (unsigned __int64)v13 + 7) >> 3;
  else
    v15 = width * ((unsigned __int64)v13 >> 3);
  info_ptr->rowbytes = v15;
  png_ptr->info_rowbytes = v15;
}

void __fastcall png_set_expand_gray_1_2_4_to_8(png_struct_def *png_ptr)
{
  unsigned int flags; // eax

  if ( png_ptr )
  {
    flags = png_ptr->flags;
    if ( (flags & 0x40) != 0 )
    {
      png_app_error(png_ptr, "invalid after png_start_read_image or png_read_update_info");
    }
    else
    {
      png_ptr->flags = flags | 0x4000;
      png_ptr->transformations |= 0x1000u;
    }
  }
}

void __fastcall png_set_gamma(png_struct_def *png_ptr, long double scrn_gamma, long double file_gamma)
{
  double v4; // xmm6_8
  double v5; // xmm0_8
  int v6; // edi
  double v7; // xmm0_8

  v4 = scrn_gamma;
  if ( file_gamma > 0.0 && file_gamma < 128.0 )
    file_gamma = file_gamma * 100000.0;
  v5 = floor(file_gamma + 0.5);
  if ( v5 > 2147483647.0 || v5 < -2147483647.0 )
    png_fixed_error(png_ptr, "gamma value");
  v6 = (int)v5;
  if ( scrn_gamma > 0.0 && scrn_gamma < 128.0 )
    v4 = scrn_gamma * 100000.0;
  v7 = floor(v4 + 0.5);
  if ( v7 > 2147483647.0 || v7 < -2147483647.0 )
    png_fixed_error(png_ptr, "gamma value");
  png_set_gamma_fixed(png_ptr, (int)v7, v6);
}

void __fastcall png_set_gamma_fixed(png_struct_def *png_ptr, int scrn_gamma, int file_gamma)
{
  unsigned int flags; // eax

  if ( png_ptr )
  {
    flags = png_ptr->flags;
    if ( (flags & 0x40) != 0 )
    {
      png_app_error(png_ptr, "invalid after png_start_read_image or png_read_update_info");
    }
    else
    {
      png_ptr->flags = flags | 0x4000;
      if ( scrn_gamma == -1 || scrn_gamma == -100000 )
      {
        png_ptr->flags |= 0x1000u;
        scrn_gamma = 220000;
      }
      else if ( scrn_gamma == -2 || scrn_gamma == -50000 )
      {
        scrn_gamma = 151724;
      }
      if ( file_gamma == -1 || file_gamma == -100000 )
      {
        png_ptr->flags |= 0x1000u;
        file_gamma = 45455;
      }
      else if ( file_gamma == -2 || file_gamma == -50000 )
      {
        file_gamma = 65909;
      }
      else if ( file_gamma <= 0 )
      {
        png_error(png_ptr, "invalid file gamma in png_set_gamma");
      }
      if ( scrn_gamma <= 0 )
        png_error(png_ptr, "invalid screen gamma in png_set_gamma");
      png_ptr->colorspace.flags |= 1u;
      png_ptr->colorspace.gamma = file_gamma;
      png_ptr->screen_gamma = scrn_gamma;
    }
  }
}

void __fastcall png_set_gray_to_rgb(png_struct_def *png_ptr)
{
  unsigned int flags; // eax
  int v3; // eax

  if ( png_ptr )
  {
    flags = png_ptr->flags;
    if ( (flags & 0x40) != 0 )
    {
      png_app_error(png_ptr, "invalid after png_start_read_image or png_read_update_info");
    }
    else
    {
      v3 = flags | 0x4000;
      png_ptr->flags = v3;
      if ( (v3 & 0x40) != 0 )
      {
        png_app_error(png_ptr, "invalid after png_start_read_image or png_read_update_info");
        png_ptr->transformations |= 0x4000u;
      }
      else
      {
        png_ptr->flags = v3 | 0x4000;
        png_ptr->transformations |= 0x1000u;
        png_ptr->transformations |= 0x4000u;
      }
    }
  }
}

void __fastcall png_set_tRNS_to_alpha(png_struct_def *png_ptr)
{
  unsigned int flags; // eax

  if ( png_ptr )
  {
    flags = png_ptr->flags;
    if ( (flags & 0x40) != 0 )
    {
      png_app_error(png_ptr, "invalid after png_start_read_image or png_read_update_info");
    }
    else
    {
      png_ptr->flags = flags | 0x4000;
      png_ptr->transformations |= 0x2001000u;
    }
  }
}

void __fastcall png_set_strip_16(png_struct_def *png_ptr)
{
  unsigned int flags; // eax

  if ( png_ptr )
  {
    flags = png_ptr->flags;
    if ( (flags & 0x40) != 0 )
    {
      png_app_error(png_ptr, "invalid after png_start_read_image or png_read_update_info");
    }
    else
    {
      png_ptr->flags = flags | 0x4000;
      png_ptr->transformations |= 0x400u;
    }
  }
}

