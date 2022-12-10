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

png_xy sRGB_xy; // 0x140750470
const unsigned char D50_nCIEXYZ[12]; // 0x140750490
const <unnamed-tag> png_sRGB_checks[7]; // 0x1407504A0
const unsigned short png_sRGB_table[256]; // 0x140750580
const unsigned short png_sRGB_base[512]; // 0x140750780
const unsigned char png_sRGB_delta[512]; // 0x140750B80
typedef png_info_def * png_infop;
typedef png_info_def * * png_infopp;
typedef void(*png_read_status_ptr)(png_struct_def *, unsigned long, long);
typedef void(*png_free_ptr)(png_struct_def *, void *);
typedef png_sPLT_entry_struct * png_sPLT_entryp;
typedef png_text_struct * png_textp;
typedef char * * png_charpp;
typedef const png_time_struct * png_const_timep;
typedef unsigned long png_uint_32;
typedef void(*png_progressive_info_ptr)(png_struct_def *, png_info_def *);
typedef png_row_info_struct png_row_info;
typedef unsigned long long png_size_t;
typedef void *(*alloc_func)(void *, unsigned long, unsigned long);
typedef z_stream_s * z_streamp;
typedef long png_fixed_point;
typedef png_color_struct png_color;
typedef png_unknown_chunk_t png_unknown_chunk;
typedef unsigned short * png_uint_16p;
typedef const unsigned char * png_const_bytep;
typedef void(*png_flush_ptr)(png_struct_def *);
typedef const png_struct_def * png_const_structrp;
typedef const char * png_const_charp;
void png_set_sig_bytes(png_struct_def * png_ptr, long num_bytes); // 0x14040D7C0
typedef void(*png_user_transform_ptr)(png_struct_def *, png_row_info_struct *, unsigned char *);
typedef png_unknown_chunk_t * png_unknown_chunkp;
typedef void * png_voidp;
typedef void(*png_error_ptr)(png_struct_def *, const char *);
typedef png_text_struct png_text;
typedef void(*png_rw_ptr)(png_struct_def *, unsigned char *, unsigned long long);
typedef void(*png_longjmp_ptr)(_SETJMP_FLOAT128 *, long);
typedef unsigned char * png_bytep;
typedef png_struct_def * png_structp;
typedef void(*png_write_status_ptr)(png_struct_def *, unsigned long, long);
typedef unsigned short png_uint_16;
typedef _iobuf * png_FILE_p;
typedef void(*png_progressive_end_ptr)(png_struct_def *, png_info_def *);
typedef void * voidpf;
typedef unsigned long long * png_size_tp;
typedef png_control * png_controlp;
typedef png_struct_def png_struct;
typedef void(*free_func)(void *, void *);
typedef z_stream_s z_stream;
typedef png_color_16_struct png_color_16;
typedef png_compression_buffer * png_compression_bufferp;
typedef png_struct_def * png_structrp;
long png_sig_cmp(const unsigned char * sig, unsigned long long start, unsigned long long num_to_check); // 0x14040D800
typedef long png_int_32;
typedef long * png_fixed_point_p;
typedef png_sPLT_struct * png_sPLT_tp;
typedef png_image * png_imagep;
typedef long(*png_user_chunk_ptr)(png_struct_def *, png_unknown_chunk_t *);
typedef unsigned short * * png_uint_16pp;
typedef char * png_charp;
typedef png_info_def * png_inforp;
typedef png_colorspace * png_colorspacerp;
typedef unsigned long long png_alloc_size_t;
typedef png_info_def png_info;
typedef png_color_8_struct png_color_8;
typedef void(*png_progressive_row_ptr)(png_struct_def *, unsigned char *, unsigned long, long);
typedef void *(*png_malloc_ptr)(png_struct_def *, unsigned long long);
typedef png_color_struct * png_colorp;
typedef png_time_struct png_time;
typedef png_struct_def * * png_structpp;
typedef png_row_info_struct * png_row_infop;
typedef png_sPLT_entry_struct png_sPLT_entry;
typedef png_sPLT_struct png_sPLT_t;
typedef unsigned char png_byte;
typedef unsigned char * * png_bytepp;
typedef unsigned long uInt;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
void * png_zalloc(void * png_ptr, unsigned long items, unsigned long size); // 0x14040DBE0
void png_zfree(void * png_ptr, void * ptr); // 0x14040DC20
void png_reset_crc(png_struct_def * png_ptr); // 0x14040D770
void png_calculate_crc(png_struct_def * png_ptr, const unsigned char * ptr, unsigned long long length); // 0x14040B490
long png_user_version_check(png_struct_def * png_ptr, const char * user_png_ver); // 0x14040D890
png_struct_def * png_create_png_struct(const char * user_png_ver, void * error_ptr, void(*error_fn)(png_struct_def *, const char *), void(*warn_fn)(png_struct_def *, const char *), void * mem_ptr, void *(*malloc_fn)(png_struct_def *, unsigned long long), void(*free_fn)(png_struct_def *, void *)); // 0x14040C550
png_info_def * png_create_info_struct(const png_struct_def * png_ptr); // 0x14040C500
void png_destroy_info_struct(const png_struct_def * png_ptr, png_info_def * * info_ptr_ptr); // 0x14040C8D0
void png_free_data(const png_struct_def * png_ptr, png_info_def * info_ptr, unsigned long mask, long num); // 0x14040C930
void * png_get_io_ptr(const png_struct_def * png_ptr); // 0x14040CF10
void png_save_int_32(unsigned char * buf, long i); // 0x14040D7A0
long png_handle_as_unknown(const png_struct_def * png_ptr, const unsigned char * chunk_name); // 0x14040CF20
long png_chunk_unknown_handling(const png_struct_def * png_ptr, unsigned long chunk_name); // 0x14040B9A0
void png_zstream_error(png_struct_def * png_ptr, long ret); // 0x14040DC30
long png_colorspace_check_gamma(const png_struct_def * png_ptr, png_colorspace * colorspace, long gAMA, long from); // 0x14040BA30
void png_colorspace_set_gamma(const png_struct_def * png_ptr, png_colorspace * colorspace, long gAMA); // 0x14040BCF0
void png_colorspace_sync(const png_struct_def * png_ptr, png_info_def * info_ptr); // 0x14040C260
long png_xy_from_XYZ(png_xy * xy, const png_XYZ * XYZ); // 0x14040D9C0
long png_XYZ_from_xy(png_XYZ * XYZ, const png_xy * xy); // 0x14040A780
long png_colorspace_endpoints_match(const png_xy * xy1, const png_xy * xy2, long delta); // 0x14040BB20
long png_colorspace_set_xy_and_XYZ(const png_struct_def * png_ptr, png_colorspace * colorspace, const png_xy * xy, const png_XYZ * XYZ, long preferred); // 0x14040C160
long png_colorspace_set_chromaticities(const png_struct_def * png_ptr, png_colorspace * colorspace, const png_xy * xy, long preferred); // 0x14040BC20
long is_ICC_signature(unsigned long long it); // 0x14040A6E0
long png_icc_profile_error(const png_struct_def * png_ptr, png_colorspace * colorspace, const char * name, unsigned long long value, const char * reason); // 0x14040D410
long png_colorspace_set_sRGB(const png_struct_def * png_ptr, png_colorspace * colorspace, long intent); // 0x14040BFC0
long png_icc_check_length(const png_struct_def * png_ptr, png_colorspace * colorspace, const char * name, unsigned long profile_length); // 0x14040D260
long png_icc_check_header(const png_struct_def * png_ptr, png_colorspace * colorspace, const char * name, unsigned long profile_length, const unsigned char * profile, long color_type); // 0x14040CF60
long png_icc_check_tag_table(const png_struct_def * png_ptr, png_colorspace * colorspace, const char * name, unsigned long profile_length, const unsigned char * profile); // 0x14040D2B0
long png_compare_ICC_profile_with_sRGB(const png_struct_def * png_ptr, const unsigned char * profile, unsigned long adler); // 0x14040C300
void png_icc_set_sRGB(const png_struct_def * png_ptr, png_colorspace * colorspace, const unsigned char * profile, unsigned long adler); // 0x14040D5C0
void png_colorspace_set_rgb_coefficients(png_struct_def * png_ptr); // 0x14040BD80
void png_check_IHDR(const png_struct_def * png_ptr, unsigned long width, unsigned long height, long bit_depth, long color_type, long interlace_type, long compression_type, long filter_type); // 0x14040B540
long png_check_fp_number(const char * string, unsigned long long size, long * statep, unsigned long long * whereami); // 0x14040B770
long png_check_fp_string(const char * string, unsigned long long size); // 0x14040B940
long png_muldiv(long * res, long a, long times, long divisor); // 0x14040D630
long png_reciprocal(long a); // 0x14040D6C0
long png_gamma_significant(long gamma_val); // 0x14040CEF0
long png_reciprocal2(long a, long b); // 0x14040D710
unsigned char png_gamma_8bit_correct(unsigned long value, long gamma_val); // 0x14040CDC0
unsigned short png_gamma_correct(png_struct_def * png_ptr, unsigned long value, long gamma_val); // 0x14040CE20
void png_build_16bit_table(png_struct_def * png_ptr, unsigned short * * * ptable, const unsigned long shift, const long gamma_val); // 0x14040ACD0
void png_build_16to8_table(png_struct_def * png_ptr, unsigned short * * * ptable, const unsigned long shift, const long gamma_val); // 0x14040AEA0
void png_build_8bit_table(png_struct_def * png_ptr, unsigned char * * ptable, const long gamma_val); // 0x14040B0B0
void png_destroy_gamma_table(png_struct_def * png_ptr); // 0x14040C750
void png_build_gamma_table(png_struct_def * png_ptr, long bit_depth); // 0x14040B1B0//decompilation failure at 140750470!
//decompilation failure at 140750490!
//decompilation failure at 1407504A0!
//decompilation failure at 140750580!
//decompilation failure at 140750780!
//decompilation failure at 140750B80!
_BOOL8 __fastcall is_ICC_signature(unsigned __int64 it)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  _BOOL8 result; // rax

  v1 = 0x7FFFFFE03FF0001i64;
  v2 = (it >> 24) - 32;
  result = 0;
  if ( v2 <= 0x3A && _bittest64(&v1, v2) || (it >> 24) - 97 <= 0x19 )
  {
    if ( (v3 = BYTE2(it) - 32i64, v3 <= 0x3A) && _bittest64(&v1, v3) || (unsigned __int64)BYTE2(it) - 97 <= 0x19 )
    {
      if ( (v4 = BYTE1(it) - 32i64, v4 <= 0x3A) && _bittest64(&v1, v4) || (unsigned __int64)BYTE1(it) - 97 <= 0x19 )
      {
        v5 = (unsigned __int8)it;
        v6 = (unsigned __int8)it - 32i64;
        if ( v6 <= 0x3A )
        {
          if ( _bittest64(&v1, v6) )
            return 1;
        }
        if ( (unsigned __int64)(v5 - 97) <= 0x19 )
          return 1;
      }
    }
  }
  return result;
}

__int64 __fastcall png_XYZ_from_xy(png_XYZ *XYZ, const png_xy *xy)
{
  int redy; // esi
  unsigned int greenx; // edi
  int greeny; // er14
  unsigned int bluex; // er13
  int bluey; // er15
  unsigned int whitex; // er12
  int whitey; // ecx
  int v11; // esi
  int v12; // edi
  double v13; // xmm0_8
  int v14; // eax
  int v15; // er14
  double v16; // xmm0_8
  int v17; // eax
  int v18; // eax
  double v19; // xmm0_8
  int v20; // edi
  int v21; // er12
  double v22; // xmm0_8
  int v23; // eax
  int v24; // er13
  int v25; // er15
  int v26; // er14
  double v27; // xmm0_8
  int v28; // edi
  int v29; // eax
  double v30; // xmm0_8
  int v31; // esi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int times; // [rsp+A8h] [rbp+10h] BYREF
  int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  if ( xy->redx > 0x186A0u )
    return 1i64;
  redy = xy->redy;
  if ( redy < 0 || redy > 100000 - xy->redx )
    return 1i64;
  greenx = xy->greenx;
  if ( greenx > 0x186A0 )
    return 1i64;
  greeny = xy->greeny;
  if ( greeny < 0 || greeny > (int)(100000 - greenx) )
    return 1i64;
  bluex = xy->bluex;
  if ( bluex > 0x186A0 )
    return 1i64;
  bluey = xy->bluey;
  if ( bluey < 0 || bluey > (int)(100000 - bluex) )
    return 1i64;
  whitex = xy->whitex;
  if ( whitex > 0x186A0 )
    return 1i64;
  whitey = xy->whitey;
  if ( whitey < 0 || whitey > (int)(100000 - whitex) )
    return 1i64;
  v11 = redy - bluey;
  v12 = greenx - bluex;
  if ( v12 && v11 )
  {
    v13 = floor((double)v12 * (double)v11 / 7.0 + 0.5);
    if ( v13 > 2147483647.0 || v13 < -2147483648.0 )
      return 2i64;
    times = (int)v13;
  }
  else
  {
    times = 0;
  }
  v14 = xy->redx - bluex;
  v37 = v14;
  v15 = greeny - bluey;
  if ( v15 && v14 )
  {
    v16 = floor((double)v15 * (double)v14 / 7.0 + 0.5);
    if ( v16 > 2147483647.0 || v16 < -2147483648.0 )
      return 2i64;
    v17 = (int)v16;
  }
  else
  {
    v17 = 0;
  }
  times -= v17;
  v18 = xy->whitey - bluey;
  v38 = v18;
  if ( v12 && v18 )
  {
    v19 = floor((double)v12 * (double)v18 / 7.0 + 0.5);
    if ( v19 > 2147483647.0 || v19 < -2147483648.0 )
      return 2i64;
    v20 = (int)v19;
  }
  else
  {
    v20 = 0;
  }
  v21 = whitex - bluex;
  if ( v15 && v21 )
  {
    v22 = floor((double)v15 * (double)v21 / 7.0 + 0.5);
    if ( v22 > 2147483647.0 || v22 < -2147483648.0 )
      return 2i64;
    v23 = (int)v22;
  }
  else
  {
    v23 = 0;
  }
  v24 = times;
  v25 = xy->whitey;
  if ( !png_muldiv(&times, v25, times, v20 - v23) )
    return 1i64;
  v26 = times;
  if ( times <= v25 )
    return 1i64;
  if ( v11 && v21 )
  {
    v27 = floor((double)v11 * (double)v21 / 7.0 + 0.5);
    if ( v27 > 2147483647.0 || v27 < -2147483648.0 )
      return 2i64;
    v28 = (int)v27;
    v29 = 0;
  }
  else
  {
    v29 = 0;
    v28 = 0;
  }
  if ( v37 && v38 )
  {
    v30 = floor((double)v37 * (double)v38 / 7.0 + 0.5);
    if ( v30 <= 2147483647.0 && v30 >= -2147483648.0 )
    {
      v29 = (int)v30;
      goto LABEL_50;
    }
    return 2i64;
  }
LABEL_50:
  if ( !png_muldiv(&times, v25, v24, v28 - v29) )
    return 1i64;
  v31 = times;
  if ( times <= v25 )
    return 1i64;
  v32 = png_reciprocal(v25);
  v33 = v32 - png_reciprocal(v26);
  v34 = v33 - png_reciprocal(v31);
  if ( v34 <= 0
    || !png_muldiv(&XYZ->red_X, xy->redx, 100000, v26)
    || !png_muldiv(&XYZ->red_Y, xy->redy, 100000, v26)
    || !png_muldiv(&XYZ->red_Z, 100000 - xy->redx - xy->redy, 100000, v26)
    || !png_muldiv(&XYZ->green_X, xy->greenx, 100000, v31)
    || !png_muldiv(&XYZ->green_Y, xy->greeny, 100000, v31)
    || !png_muldiv(&XYZ->green_Z, 100000 - xy->greeny - xy->greenx, 100000, v31)
    || !png_muldiv(&XYZ->blue_X, xy->bluex, v34, 100000)
    || !png_muldiv(&XYZ->blue_Y, xy->bluey, v34, 100000) )
  {
    return 1i64;
  }
  return png_muldiv(&XYZ->blue_Z, 100000 - xy->bluey - xy->bluex, v34, 100000) == 0;
}

void __fastcall png_build_16bit_table(
        png_struct_def *png_ptr,
        unsigned __int16 ***ptable,
        const unsigned int shift,
        const int gamma_val)
{
  char v6; // bp
  unsigned int v7; // esi
  int v8; // er12
  int v9; // er14
  unsigned __int16 **v10; // rax
  unsigned int v11; // edi
  unsigned __int16 **i; // r13
  unsigned __int16 *v13; // rbx
  unsigned int k; // esi
  double v15; // xmm0_8
  unsigned int j; // er8
  unsigned int v17; // eax
  unsigned int v19; // [rsp+C8h] [rbp+10h]

  v6 = 8 - shift;
  v7 = 1 << (8 - shift);
  v8 = 1 << (15 - shift);
  v9 = (1 << (16 - shift)) - 1;
  v19 = v7;
  v10 = (unsigned __int16 **)png_calloc(png_ptr, 8i64 * v7);
  v11 = 0;
  *ptable = v10;
  for ( i = v10; v11 < v7; ++i )
  {
    v13 = (unsigned __int16 *)png_malloc(png_ptr, 0x200ui64);
    *i = v13;
    if ( (unsigned int)(gamma_val - 95000) <= 0x2710 )
    {
      for ( j = 0; j < 0x100; ++j )
      {
        v17 = v11 + (j << v6);
        if ( shift )
          v17 = (v8 + 0xFFFF * v17) / v9;
        *v13++ = v17;
      }
    }
    else
    {
      for ( k = 0; k < 0x100; ++k )
      {
        v15 = pow((double)(int)(v11 + (k << (8 - shift))) / (double)v9, (double)gamma_val * 0.00001);
        *v13++ = (int)floor(v15 * 65535.0 + 0.5);
      }
      v7 = v19;
    }
    ++v11;
  }
}

void __fastcall png_build_16to8_table(
        png_struct_def *png_ptr,
        unsigned __int16 ***ptable,
        const unsigned int shift,
        const int gamma_val)
{
  char v6; // r12
  char v7; // r13
  __int64 v8; // r15
  __int64 v9; // rdi
  unsigned __int16 **v10; // rax
  unsigned __int16 **v11; // rsi
  unsigned __int16 **v12; // rbx
  unsigned int v13; // ebx
  unsigned int i; // ebp
  double v15; // xmm0_8
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  int v26; // [rsp+98h] [rbp+10h]
  char v27; // [rsp+A0h] [rbp+18h]

  v27 = 16 - shift;
  v6 = 8 - shift;
  v7 = shift;
  v8 = (unsigned int)(1 << (8 - shift));
  v26 = 1 << (8 - shift);
  v9 = v8;
  v10 = (unsigned __int16 **)png_calloc(png_ptr, 8 * v8);
  *ptable = v10;
  v11 = v10;
  if ( (_DWORD)v8 )
  {
    v12 = v10;
    do
    {
      *v12++ = (unsigned __int16 *)png_malloc(png_ptr, 0x200ui64);
      --v9;
    }
    while ( v9 );
  }
  v13 = 0;
  for ( i = 0; i < 0xFF; ++i )
  {
    if ( (unsigned int)(unsigned __int16)(257 * i) + 127 > 0xFFFD )
    {
      LOWORD(v16) = 257 * i + 128;
    }
    else
    {
      v15 = pow((double)((unsigned __int16)(257 * i) + 128) / 65535.0, (double)gamma_val * 0.00001);
      v16 = (int)floor(v15 * 65535.0 + 0.5);
    }
    v17 = (((unsigned __int16)v16 << v27) - (unsigned int)(unsigned __int16)v16 + 0x8000) / 0xFFFF + 1;
    if ( v13 < v17 )
    {
      v18 = v17 - v13;
      v19 = v13;
      v20 = v18;
      v13 += v18;
      do
      {
        v21 = (0xFFui64 >> v7) & v19;
        v22 = v19++ >> v6;
        v11[v21][v22] = 257 * i;
        --v20;
      }
      while ( v20 );
    }
  }
  if ( v13 < v26 << 8 )
  {
    v23 = v13;
    do
    {
      v24 = v13 & (255 >> v7);
      v25 = v23 >> v6;
      ++v13;
      ++v23;
      v11[v24][v25] = -1;
    }
    while ( v13 < v26 << 8 );
  }
}

void __fastcall png_build_8bit_table(png_struct_def *png_ptr, unsigned __int8 **ptable, const int gamma_val)
{
  unsigned __int8 *v5; // rax
  unsigned int v6; // ebx
  unsigned __int8 *v7; // rdi
  double v8; // xmm0_8
  int v9; // eax

  v5 = (unsigned __int8 *)png_malloc(png_ptr, 0x100ui64);
  *ptable = v5;
  v6 = 0;
  v7 = v5;
  if ( (unsigned int)(gamma_val - 95000) <= 0x2710 )
  {
    do
      *v7++ = v6++;
    while ( v6 < 0x100 );
  }
  else
  {
    do
    {
      if ( v6 - 1 > 0xFD )
      {
        LOBYTE(v9) = v6;
      }
      else
      {
        v8 = pow((double)(int)v6 / 255.0, (double)gamma_val * 0.00001);
        v9 = (int)floor(v8 * 255.0 + 0.5);
      }
      *v7 = v9;
      ++v6;
      ++v7;
    }
    while ( v6 < 0x100 );
  }
}

void __fastcall png_build_gamma_table(png_struct_def *png_ptr, int bit_depth)
{
  int v4; // edx
  int v5; // eax
  double v6; // xmm0_8
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  unsigned __int8 red; // dl
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  unsigned __int8 v13; // cl
  int v14; // edi
  unsigned int v15; // esi
  int screen_gamma; // eax
  double v17; // xmm0_8
  int v18; // eax
  int v19; // edx
  int v20; // eax
  double v21; // xmm0_8
  int v22; // ecx
  int gamma; // eax

  if ( png_ptr->gamma_table || png_ptr->gamma_16_table )
  {
    png_warning(png_ptr, "gamma table being rebuilt");
    png_destroy_gamma_table(png_ptr);
  }
  if ( bit_depth > 8 )
  {
    if ( (png_ptr->color_type & 2) != 0 )
    {
      red = png_ptr->sig_bit.red;
      if ( png_ptr->sig_bit.green > red )
        red = png_ptr->sig_bit.green;
      if ( png_ptr->sig_bit.blue > red )
        red = png_ptr->sig_bit.blue;
    }
    else
    {
      red = png_ptr->sig_bit.gray;
    }
    if ( (unsigned __int8)(red - 1) > 0xEu )
      v11 = 0;
    else
      v11 = 16 - red;
    v12 = png_ptr->transformations & 0x4000400;
    if ( v12 && v11 < 5u )
    {
      v13 = 5;
    }
    else
    {
      v13 = v11;
      if ( v11 > 8u )
        v13 = 8;
    }
    v14 = 0;
    v15 = v13;
    png_ptr->gamma_shift = v13;
    if ( v12 )
    {
      screen_gamma = png_ptr->screen_gamma;
      if ( screen_gamma <= 0 )
      {
        v18 = 100000;
      }
      else
      {
        v17 = floor((double)png_ptr->colorspace.gamma * 0.00001 * (double)screen_gamma + 0.5);
        if ( v17 > 2147483647.0 || v17 < -2147483648.0 )
          v18 = 0;
        else
          v18 = (int)v17;
      }
      png_build_16to8_table(png_ptr, &png_ptr->gamma_16_table, v15, v18);
    }
    else
    {
      v19 = png_ptr->screen_gamma;
      if ( v19 <= 0 )
        v20 = 100000;
      else
        v20 = png_reciprocal2(png_ptr->colorspace.gamma, v19);
      png_build_16bit_table(png_ptr, &png_ptr->gamma_16_table, v15, v20);
    }
    if ( (png_ptr->transformations & 0x600080) != 0 )
    {
      v21 = floor(1.0e10 / (double)png_ptr->colorspace.gamma + 0.5);
      if ( v21 <= 2147483647.0 && v21 >= -2147483648.0 )
        v14 = (int)v21;
      png_build_16bit_table(png_ptr, &png_ptr->gamma_16_to_1, v15, v14);
      v22 = png_ptr->screen_gamma;
      if ( v22 <= 0 )
        gamma = png_ptr->colorspace.gamma;
      else
        gamma = png_reciprocal(v22);
      png_build_16bit_table(png_ptr, &png_ptr->gamma_16_from_1, v15, gamma);
    }
  }
  else
  {
    v4 = png_ptr->screen_gamma;
    if ( v4 <= 0 )
      v5 = 100000;
    else
      v5 = png_reciprocal2(png_ptr->colorspace.gamma, v4);
    png_build_8bit_table(png_ptr, &png_ptr->gamma_table, v5);
    if ( (png_ptr->transformations & 0x600080) != 0 )
    {
      v6 = floor(1.0e10 / (double)png_ptr->colorspace.gamma + 0.5);
      if ( v6 > 2147483647.0 || v6 < -2147483648.0 )
        v7 = 0;
      else
        v7 = (int)v6;
      png_build_8bit_table(png_ptr, &png_ptr->gamma_to_1, v7);
      v8 = png_ptr->screen_gamma;
      if ( v8 <= 0 )
        v9 = png_ptr->colorspace.gamma;
      else
        v9 = png_reciprocal(v8);
      png_build_8bit_table(png_ptr, &png_ptr->gamma_from_1, v9);
    }
  }
}

void __fastcall png_calculate_crc(png_struct_def *png_ptr, const unsigned __int8 *ptr, unsigned __int64 length)
{
  unsigned __int64 v3; // rdi
  __int64 crc; // rcx
  unsigned int v7; // ebx

  v3 = length;
  if ( (png_ptr->chunk_name & 0x20000000) != 0 )
  {
    if ( (png_ptr->flags & 0x300) == 768 )
      return;
  }
  else if ( (png_ptr->flags & 0x800) != 0 )
  {
    return;
  }
  if ( length )
  {
    crc = png_ptr->crc;
    do
    {
      v7 = v3;
      if ( !(_DWORD)v3 )
        v7 = -1;
      LODWORD(crc) = crc32(crc, ptr, v7);
      ptr += v7;
      v3 -= v7;
    }
    while ( v3 );
    png_ptr->crc = crc;
  }
}

void __fastcall png_check_IHDR(
        const png_struct_def *png_ptr,
        unsigned int width,
        unsigned int height,
        int bit_depth,
        int color_type,
        int interlace_type,
        int compression_type,
        int filter_type)
{
  int v8; // edi
  int v13; // eax
  int v14; // eax

  v8 = 0;
  if ( !width )
  {
    png_warning(png_ptr, "Image width is zero in IHDR");
    v8 = 1;
  }
  if ( !height )
  {
    png_warning(png_ptr, "Image height is zero in IHDR");
    v8 = 1;
  }
  if ( width > png_ptr->user_width_max )
  {
    png_warning(png_ptr, "Image width exceeds user limit in IHDR");
    v8 = 1;
  }
  if ( height > png_ptr->user_height_max )
  {
    png_warning(png_ptr, "Image height exceeds user limit in IHDR");
    v8 = 1;
  }
  if ( width > 0x7FFFFFFF )
  {
    png_warning(png_ptr, "Invalid image width in IHDR");
    v8 = 1;
  }
  if ( height > 0x7FFFFFFF )
  {
    png_warning(png_ptr, "Invalid image height in IHDR");
    v8 = 1;
  }
  if ( (unsigned int)bit_depth > 0x10 || (v13 = 65814, !_bittest(&v13, bit_depth)) )
  {
    png_warning(png_ptr, "Invalid bit depth in IHDR");
    v8 = 1;
  }
  if ( (unsigned int)color_type > 6 || (v14 = 93, !_bittest(&v14, color_type)) )
  {
    png_warning(png_ptr, "Invalid color type in IHDR");
    v8 = 1;
  }
  if ( color_type == 3 )
  {
    if ( bit_depth <= 8 )
      goto LABEL_26;
LABEL_25:
    png_warning(png_ptr, "Invalid color type/bit depth combination in IHDR");
    v8 = 1;
    goto LABEL_26;
  }
  if ( ((color_type - 2) & 0xFFFFFFF9) == 0 && color_type != 8 && bit_depth < 8 )
    goto LABEL_25;
LABEL_26:
  if ( interlace_type >= 2 )
  {
    png_warning(png_ptr, "Unknown interlace method in IHDR");
    v8 = 1;
  }
  if ( compression_type )
  {
    png_warning(png_ptr, "Unknown compression method in IHDR");
    v8 = 1;
  }
  if ( (png_ptr->mode & 0x1000) != 0 && png_ptr->mng_features_permitted )
    png_warning(png_ptr, "MNG features are not allowed in a PNG datastream");
  if ( filter_type )
  {
    if ( (png_ptr->mng_features_permitted & 4) == 0
      || filter_type != 64
      || (png_ptr->mode & 0x1000) != 0
      || ((color_type - 2) & 0xFFFFFFFB) != 0 )
    {
      png_warning(png_ptr, "Unknown filter method in IHDR");
      v8 = 1;
    }
    if ( (png_ptr->mode & 0x1000) != 0 )
    {
      png_warning(png_ptr, "Invalid filter method in IHDR");
      goto LABEL_42;
    }
  }
  if ( v8 == 1 )
LABEL_42:
    png_error(png_ptr, "Invalid IHDR data");
}

__int64 __fastcall png_check_fp_number(
        const char *string,
        unsigned __int64 size,
        int *statep,
        unsigned __int64 *whereami)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // eax
  int v7; // er8

  v4 = *whereami;
  v5 = *statep;
  if ( *whereami < size )
  {
    while ( 2 )
    {
      switch ( string[v4] )
      {
        case '+':
          v7 = 4;
          goto LABEL_9;
        case '-':
          v7 = 132;
          goto LABEL_9;
        case '.':
          v7 = 16;
          goto LABEL_9;
        case '0':
          v7 = 8;
          goto LABEL_9;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          v7 = 264;
          goto LABEL_9;
        case 'E':
        case 'e':
          v7 = 32;
LABEL_9:
          switch ( (v7 & 0x3C) + (v5 & 3) - 4 )
          {
            case 0u:
              if ( (v5 & 0x3C) == 0 )
              {
                v5 |= v7;
                break;
              }
              goto $PNG_FP_End;
            case 2u:
              if ( (v5 & 0x3C) == 0 )
              {
                v5 |= 4u;
                break;
              }
              goto $PNG_FP_End;
            case 4u:
              if ( (v5 & 0x10) != 0 )
                v5 = v5 & 0x1C0 | 0x11;
              goto $LN23_46;
            case 5u:
$LN23_46:
              v5 |= v7 | 0x40;
              break;
            case 6u:
              v5 |= 0x48u;
              break;
            case 0xCu:
              if ( (v5 & 0x10) != 0 )
                goto $PNG_FP_End;
              if ( (v5 & 8) != 0 )
                v5 |= v7;
              else
                v5 = v7 | v5 & 0x1C0 | 1;
              break;
            case 0x1Cu:
            case 0x1Du:
              if ( (v5 & 8) == 0 )
                goto $PNG_FP_End;
              v5 = v5 & 0x1C0 | 2;
              break;
            default:
              goto $PNG_FP_End;
          }
          if ( ++v4 >= size )
            break;
          continue;
        default:
          goto $PNG_FP_End;
      }
      break;
    }
  }
$PNG_FP_End:
  *statep = v5;
  *whereami = v4;
  return (v5 >> 3) & 1;
}

__int64 __fastcall png_check_fp_string(const char *string, unsigned __int64 size)
{
  int statep; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 whereami; // [rsp+48h] [rbp+20h] BYREF

  statep = 0;
  whereami = 0i64;
  if ( (unsigned int)png_check_fp_number(string, size, &statep, &whereami) && (whereami == size || !string[whereami]) )
    return (unsigned int)statep;
  else
    return 0i64;
}

__int64 __fastcall png_chunk_unknown_handling(const png_struct_def *png_ptr, unsigned int chunk_name)
{
  unsigned int num_chunk_list; // eax
  unsigned __int8 *chunk_list; // rcx
  unsigned __int8 *v4; // rax
  int v6; // [rsp+0h] [rbp-18h]

  HIBYTE(v6) = chunk_name;
  LOBYTE(v6) = HIBYTE(chunk_name);
  BYTE1(v6) = BYTE2(chunk_name);
  BYTE2(v6) = BYTE1(chunk_name);
  if ( !png_ptr )
    return 0i64;
  num_chunk_list = png_ptr->num_chunk_list;
  if ( !num_chunk_list )
    return 0i64;
  chunk_list = png_ptr->chunk_list;
  v4 = &chunk_list[5 * num_chunk_list];
  while ( 1 )
  {
    v4 -= 5;
    if ( v6 == *(_DWORD *)v4 )
      break;
    if ( v4 <= chunk_list )
      return 0i64;
  }
  return v4[4];
}

__int64 __fastcall png_colorspace_check_gamma(
        const png_struct_def *png_ptr,
        png_colorspace *colorspace,
        int gAMA,
        int from)
{
  unsigned __int16 flags; // bp
  int gamma; // eax
  unsigned int v8; // ebx
  double v9; // xmm0_8
  int v10; // eax

  flags = colorspace->flags;
  if ( (flags & 1) == 0 )
    return 1i64;
  gamma = colorspace->gamma;
  v8 = 0;
  if ( gAMA )
  {
    if ( !gamma )
    {
      v10 = 0;
LABEL_8:
      if ( (unsigned int)(v10 - 95000) > 0x2710 )
        goto LABEL_9;
      return 1i64;
    }
    v9 = floor((double)gamma * 100000.0 / (double)gAMA + 0.5);
    if ( v9 <= 2147483647.0 && v9 >= -2147483648.0 )
    {
      v10 = (int)v9;
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( (flags & 0x20) != 0 || from == 2 )
  {
    png_chunk_report(png_ptr, "gamma value does not match sRGB", 2);
    LOBYTE(v8) = from == 2;
    return v8;
  }
  else
  {
    png_chunk_report(png_ptr, "gamma value does not match libpng estimate", 0);
    LOBYTE(v8) = from == 1;
    return v8;
  }
}

_BOOL8 __fastcall png_colorspace_endpoints_match(const png_xy *xy1, const png_xy *xy2, int delta)
{
  int whitex; // er10
  int whitey; // er10
  int redy; // er10
  int greenx; // er10
  int greeny; // er10
  int bluex; // er10
  int bluey; // er9
  int v10; // edx
  _BOOL8 result; // rax

  whitex = xy1->whitex;
  result = 0;
  if ( whitex >= xy2->whitex - delta && whitex <= xy2->whitex + delta )
  {
    whitey = xy1->whitey;
    if ( whitey >= xy2->whitey - delta
      && whitey <= xy2->whitey + delta
      && xy1->redx >= xy2->redx - delta
      && xy1->redx <= xy2->redx + delta )
    {
      redy = xy1->redy;
      if ( redy >= xy2->redy - delta && redy <= xy2->redy + delta )
      {
        greenx = xy1->greenx;
        if ( greenx >= xy2->greenx - delta && greenx <= xy2->greenx + delta )
        {
          greeny = xy1->greeny;
          if ( greeny >= xy2->greeny - delta && greeny <= xy2->greeny + delta )
          {
            bluex = xy1->bluex;
            if ( bluex >= xy2->bluex - delta && bluex <= xy2->bluex + delta )
            {
              bluey = xy2->bluey;
              v10 = xy1->bluey;
              if ( v10 >= bluey - delta && v10 <= bluey + delta )
                return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

int __fastcall png_colorspace_set_chromaticities(
        const png_struct_def *png_ptr,
        png_colorspace *colorspace,
        const png_xy *xy,
        int preferred)
{
  int v8; // ecx
  int v9; // eax
  png_xy xya; // [rsp+30h] [rbp-58h] BYREF
  png_XYZ XYZ; // [rsp+50h] [rbp-38h] BYREF

  v8 = png_XYZ_from_xy(&XYZ, xy);
  if ( !v8 )
  {
    v9 = png_xy_from_XYZ(&xya, &XYZ);
    if ( v9 )
      v8 = v9;
    else
      v8 = !png_colorspace_endpoints_match(xy, &xya, 5);
  }
  if ( !v8 )
    return png_colorspace_set_xy_and_XYZ(png_ptr, colorspace, xy, &XYZ, preferred);
  colorspace->flags |= 0x8000u;
  if ( v8 != 1 )
    png_error(png_ptr, (const char *)&::colorspace.rendering_intent);
  png_benign_error(png_ptr, (const char *)&::colorspace.end_points_XYZ.green_X);
  return 0;
}

void __fastcall png_colorspace_set_gamma(const png_struct_def *png_ptr, png_colorspace *colorspace, int gAMA)
{
  const char *v5; // rdx

  if ( (unsigned int)(gAMA - 16) > 0x2540BE30 )
  {
    v5 = "gamma value out of range";
    goto LABEL_9;
  }
  if ( (png_ptr->mode & 0x8000) != 0 && (colorspace->flags & 8) != 0 )
  {
    v5 = (const char *)&::colorspace;
LABEL_9:
    colorspace->flags |= 0x8000u;
    png_chunk_report(png_ptr, v5, 1);
    return;
  }
  if ( (colorspace->flags & 0x8000u) == 0 )
  {
    if ( (unsigned int)png_colorspace_check_gamma(png_ptr, colorspace, gAMA, 1) )
    {
      colorspace->gamma = gAMA;
      colorspace->flags |= 9u;
    }
  }
}

void __fastcall png_colorspace_set_rgb_coefficients(png_struct_def *png_ptr)
{
  int red_Y; // eax
  int green_Y; // ebx
  int blue_Y; // er15
  int v5; // ebp
  int v6; // er14
  double v7; // xmm0_8
  int v8; // esi
  double v9; // xmm0_8
  int v10; // ebx
  double v11; // xmm0_8
  int v12; // ecx
  int v13; // eax

  if ( png_ptr->rgb_to_gray_coefficients_set || (png_ptr->colorspace.flags & 2) == 0 )
    return;
  red_Y = png_ptr->colorspace.end_points_XYZ.red_Y;
  green_Y = png_ptr->colorspace.end_points_XYZ.green_Y;
  blue_Y = png_ptr->colorspace.end_points_XYZ.blue_Y;
  v5 = red_Y + blue_Y + green_Y;
  if ( v5 <= 0 || red_Y < 0 )
    goto LABEL_40;
  v6 = 0;
  if ( red_Y )
  {
    v7 = floor((double)red_Y * 32768.0 / (double)v5 + 0.5);
    if ( v7 > 2147483647.0 || v7 < -2147483648.0 )
      goto LABEL_40;
    v8 = (int)v7;
  }
  else
  {
    v8 = 0;
  }
  if ( (unsigned int)v8 > 0x8000 || green_Y < 0 )
    goto LABEL_40;
  if ( green_Y )
  {
    v9 = floor((double)green_Y * 32768.0 / (double)v5 + 0.5);
    if ( v9 > 2147483647.0 || v9 < -2147483648.0 )
      goto LABEL_40;
    v10 = (int)v9;
  }
  else
  {
    v10 = 0;
  }
  if ( (unsigned int)v10 > 0x8000 || blue_Y < 0 )
    goto LABEL_40;
  if ( blue_Y )
  {
    v11 = floor((double)blue_Y * 32768.0 / (double)v5 + 0.5);
    if ( v11 <= 2147483647.0 && v11 >= -2147483648.0 )
    {
      v6 = (int)v11;
      goto LABEL_23;
    }
LABEL_40:
    png_error(png_ptr, "internal error handling cHRM->XYZ");
  }
LABEL_23:
  if ( (unsigned int)v6 > 0x8000 )
    goto LABEL_40;
  v12 = v8 + v6 + v10;
  if ( v12 > 32769 )
    goto LABEL_40;
  if ( v12 > 0x8000 )
  {
    v13 = -1;
LABEL_29:
    if ( v8 > v10 )
      goto LABEL_33;
    if ( v10 >= v6 )
    {
      v10 += v13;
      goto LABEL_36;
    }
    if ( v8 >= v10 )
    {
LABEL_33:
      if ( v8 >= v6 )
      {
        v8 += v13;
        goto LABEL_36;
      }
    }
    v6 += v13;
    goto LABEL_36;
  }
  if ( v12 < 0x8000 )
  {
    v13 = 1;
    goto LABEL_29;
  }
LABEL_36:
  if ( v8 + v6 + v10 != 0x8000 )
    png_error(png_ptr, "internal error handling cHRM coefficients");
  png_ptr->rgb_to_gray_red_coeff = v8;
  png_ptr->rgb_to_gray_green_coeff = v10;
}

int __fastcall png_colorspace_set_sRGB(const png_struct_def *png_ptr, png_colorspace *colorspace, int intent)
{
  unsigned __int16 v4; // si
  signed __int16 flags; // dx
  const char *reason; // rax
  double v9; // xmm0_8
  int v10; // eax

  v4 = intent;
  flags = colorspace->flags;
  if ( flags < 0 )
    return 0;
  if ( (unsigned int)intent > 3 )
  {
    reason = "invalid sRGB rendering intent";
    return png_icc_profile_error(png_ptr, colorspace, "sRGB", (unsigned int)intent, reason);
  }
  if ( (flags & 4) == 0 || colorspace->rendering_intent == intent )
  {
    if ( (flags & 0x20) != 0 )
    {
      png_benign_error(png_ptr, "duplicate sRGB information ignored");
      return 0;
    }
    if ( (flags & 2) != 0 && !png_colorspace_endpoints_match(&sRGB_xy, &colorspace->end_points_xy, 100) )
      png_chunk_report(png_ptr, "cHRM chunk does not match sRGB", 2);
    if ( (colorspace->flags & 1) != 0 )
    {
      if ( colorspace->gamma )
      {
        v9 = floor((double)colorspace->gamma * 100000.0 / 45455.0 + 0.5);
        if ( v9 > 2147483647.0 || v9 < -2147483648.0 )
          goto LABEL_19;
        v10 = (int)v9;
      }
      else
      {
        v10 = 0;
      }
      if ( (unsigned int)(v10 - 95000) > 0x2710 )
LABEL_19:
        png_chunk_report(png_ptr, "gamma value does not match sRGB", 2);
    }
    colorspace->rendering_intent = v4;
    *(_OWORD *)&colorspace->end_points_xy.redx = *(_OWORD *)&sRGB_xy.redx;
    colorspace->gamma = 45455;
    *(_OWORD *)&colorspace->end_points_xy.bluex = *(_OWORD *)&sRGB_xy.bluex;
    colorspace->end_points_XYZ = sRGB_XYZ;
    colorspace->flags |= 0xE7u;
    return 1;
  }
  reason = "inconsistent rendering intents";
  return png_icc_profile_error(png_ptr, colorspace, "sRGB", (unsigned int)intent, reason);
}

__int64 __fastcall png_colorspace_set_xy_and_XYZ(
        const png_struct_def *png_ptr,
        png_colorspace *colorspace,
        const png_xy *xy,
        const png_XYZ *XYZ,
        int preferred)
{
  signed __int16 flags; // r11
  int blue_Z; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int16 v15; // r11
  unsigned __int16 v16; // r11

  flags = colorspace->flags;
  if ( flags < 0 )
    return 0i64;
  if ( preferred >= 2 || (flags & 2) == 0 )
    goto LABEL_9;
  if ( !png_colorspace_endpoints_match(xy, &colorspace->end_points_xy, 100) )
  {
    colorspace->flags = flags | 0x8000;
    png_benign_error(png_ptr, (const char *)&::colorspace.end_points_xy.greeny);
    return 0i64;
  }
  if ( !preferred )
    return 1i64;
LABEL_9:
  blue_Z = XYZ->blue_Z;
  v12 = *(_OWORD *)&xy->bluex;
  *(_OWORD *)&colorspace->end_points_xy.redx = *(_OWORD *)&xy->redx;
  colorspace->flags = flags | 2;
  v13 = *(_OWORD *)&XYZ->red_X;
  *(_OWORD *)&colorspace->end_points_xy.bluex = v12;
  v14 = *(_OWORD *)&XYZ->green_Y;
  *(_OWORD *)&colorspace->end_points_XYZ.red_X = v13;
  *(_OWORD *)&colorspace->end_points_XYZ.green_Y = v14;
  colorspace->end_points_XYZ.blue_Z = blue_Z;
  if ( png_colorspace_endpoints_match(xy, &sRGB_xy, 1000) )
    v16 = v15 | 0x40;
  else
    v16 = v15 & 0xFFBF;
  colorspace->flags = v16;
  return 2i64;
}

void __fastcall png_colorspace_sync(const png_struct_def *png_ptr, png_info_def *info_ptr)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  signed __int16 flags; // ax

  if ( info_ptr )
  {
    v2 = *(_DWORD *)&png_ptr->colorspace.rendering_intent;
    v3 = *(_OWORD *)&png_ptr->colorspace.end_points_xy.greeny;
    *(_OWORD *)&info_ptr->colorspace.gamma = *(_OWORD *)&png_ptr->colorspace.gamma;
    v4 = *(_OWORD *)&png_ptr->colorspace.end_points_xy.whitey;
    *(_OWORD *)&info_ptr->colorspace.end_points_xy.greeny = v3;
    v5 = *(_OWORD *)&png_ptr->colorspace.end_points_XYZ.green_X;
    *(_OWORD *)&info_ptr->colorspace.end_points_xy.whitey = v4;
    *(_QWORD *)&v4 = *(_QWORD *)&png_ptr->colorspace.end_points_XYZ.blue_Y;
    *(_OWORD *)&info_ptr->colorspace.end_points_XYZ.green_X = v5;
    *(_QWORD *)&info_ptr->colorspace.end_points_XYZ.blue_Y = v4;
    *(_DWORD *)&info_ptr->colorspace.rendering_intent = v2;
    flags = info_ptr->colorspace.flags;
    if ( flags >= 0 )
    {
      if ( (flags & 0x80u) == 0 )
        info_ptr->valid &= ~0x800u;
      else
        info_ptr->valid |= 0x800u;
      if ( (flags & 2) != 0 )
        info_ptr->valid |= 4u;
      else
        info_ptr->valid &= ~4u;
      if ( (flags & 1) != 0 )
        info_ptr->valid |= 1u;
      else
        info_ptr->valid &= ~1u;
    }
    else
    {
      info_ptr->valid &= 0xFFFFE7FA;
      png_free_data(png_ptr, info_ptr, 0x10u, -1);
    }
  }
}

__int64 __fastcall png_compare_ICC_profile_with_sRGB(
        const png_struct_def *png_ptr,
        const unsigned __int8 *profile,
        unsigned int adler)
{
  unsigned int v5; // er11
  int v7; // er9
  int v8; // er8
  unsigned int *v9; // rdx
  int v10; // er8
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  const $49616501A4DC9908797B0D4004704D66 *v15; // rbx

  v5 = 0;
  v7 = profile[87];
  v8 = (profile[86] + ((profile[85] + (profile[84] << 8)) << 8)) << 8;
  v9 = &png_sRGB_checks[0].md5[1];
  v10 = v7 + v8;
  while ( v10 != *(v9 - 1)
       || profile[91] + ((profile[90] + ((profile[89] + (profile[88] << 8)) << 8)) << 8) != *v9
       || profile[95] + ((profile[94] + ((profile[93] + (profile[92] << 8)) << 8)) << 8) != v9[1]
       || profile[99] + ((profile[98] + ((profile[97] + (profile[96] << 8)) << 8)) << 8) != v9[2] )
  {
    ++v5;
    v9 += 8;
    if ( v5 >= 7 )
      return 0i64;
  }
  v11 = profile[3] + ((profile[2] + ((profile[1] + (*profile << 8)) << 8)) << 8);
  v12 = v5;
  if ( v11 != png_sRGB_checks[v12].length
    || profile[67] + ((profile[66] + ((profile[65] + (profile[64] << 8)) << 8)) << 8) != png_sRGB_checks[v12].intent )
  {
    goto LABEL_19;
  }
  if ( !adler )
  {
    v13 = adler32(0i64, 0i64, 0i64);
    adler = adler32(v13, profile, v11);
  }
  if ( adler != png_sRGB_checks[v12].adler
    || (v14 = crc32(0i64, 0i64, 0i64), (unsigned int)crc32(v14, profile, v11) != png_sRGB_checks[v12].crc) )
  {
LABEL_19:
    png_chunk_report(png_ptr, "Not recognizing known sRGB profile that has been edited", 0);
    return 0i64;
  }
  v15 = &png_sRGB_checks[v12];
  if ( png_sRGB_checks[v12].is_broken )
  {
    png_chunk_report(png_ptr, "known incorrect sRGB profile", 2);
    return (unsigned int)v15->is_broken + 1;
  }
  else
  {
    if ( !png_sRGB_checks[v12].have_md5 )
      png_chunk_report(png_ptr, "out-of-date sRGB profile with no signature", 0);
    return (unsigned int)v15->is_broken + 1;
  }
}

png_info_def *__fastcall png_create_info_struct(const png_struct_def *png_ptr)
{
  void *v2; // rax
  void *v3; // rbx

  if ( !png_ptr )
    return 0i64;
  v2 = png_malloc_base(png_ptr, 0x158ui64);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x158ui64);
  return (png_info_def *)v3;
}

png_struct_def *__fastcall png_create_png_struct(
        const char *user_png_ver,
        void *error_ptr,
        void (__fastcall *error_fn)(png_struct_def *, const char *),
        void (__fastcall *warn_fn)(png_struct_def *, const char *),
        void *mem_ptr,
        void *(__fastcall *malloc_fn)(png_struct_def *, unsigned __int64),
        void (__fastcall *free_fn)(png_struct_def *, void *))
{
  png_struct_def *v10; // rax
  png_struct_def *v11; // r8
  png_struct_def *p_png_ptr; // rcx
  png_struct_def *v13; // rdx
  __int64 v14; // rax
  _SETJMP_FLOAT128 v15; // xmm0
  _SETJMP_FLOAT128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  png_struct_def *result; // rax
  _SETJMP_FLOAT128 v24; // xmm1
  _SETJMP_FLOAT128 v25; // xmm0
  _SETJMP_FLOAT128 v26; // xmm1
  _SETJMP_FLOAT128 v27; // xmm0
  png_struct_def png_ptr; // [rsp+30h] [rbp-D0h] BYREF
  jmp_buf Buf; // [rsp+580h] [rbp+480h] BYREF

  memset(&png_ptr, 0, sizeof(png_ptr));
  png_ptr.user_width_max = 0x7FFFFFFF;
  png_ptr.user_chunk_malloc_max = 0i64;
  *(_QWORD *)&png_ptr.user_height_max = 0x7FFFFFFFi64;
  png_set_mem_fn(&png_ptr, mem_ptr, malloc_fn, free_fn);
  png_set_error_fn(&png_ptr, error_ptr, error_fn, warn_fn);
  if ( setjmp(Buf) )
    return 0i64;
  png_ptr.jmp_buf_ptr = (_SETJMP_FLOAT128 (*)[16])Buf;
  png_ptr.jmp_buf_size = 0i64;
  png_ptr.longjmp_fn = longjmp;
  if ( !png_user_version_check(&png_ptr, user_png_ver) )
    return 0i64;
  v10 = (png_struct_def *)png_malloc_warn(&png_ptr, 0x550ui64);
  v11 = v10;
  if ( !v10 )
    return 0i64;
  png_ptr.zstream.opaque = v10;
  png_ptr.zstream.zalloc = png_zalloc;
  p_png_ptr = &png_ptr;
  png_ptr.zstream.zfree = png_zfree;
  v13 = v10;
  v14 = 10i64;
  memset(&png_ptr.longjmp_fn, 0, 24);
  do
  {
    v13 = (png_struct_def *)((char *)v13 + 128);
    v15 = p_png_ptr->jmp_buf_local[0];
    v16 = p_png_ptr->jmp_buf_local[1];
    p_png_ptr = (png_struct_def *)((char *)p_png_ptr + 128);
    *(_SETJMP_FLOAT128 *)&v13[-1].big_prev_row = v15;
    v17 = *(_OWORD *)&p_png_ptr[-1].read_filter[3];
    *(_SETJMP_FLOAT128 *)&v13[-1].read_filter[1] = v16;
    v18 = *(_OWORD *)&p_png_ptr[-1].colorspace.end_points_xy.redy;
    *(_OWORD *)&v13[-1].read_filter[3] = v17;
    v19 = *(_OWORD *)&p_png_ptr[-1].colorspace.end_points_xy.bluey;
    *(_OWORD *)&v13[-1].colorspace.end_points_xy.redy = v18;
    v20 = *(_OWORD *)&p_png_ptr[-1].colorspace.end_points_XYZ.red_Y;
    *(_OWORD *)&v13[-1].colorspace.end_points_xy.bluey = v19;
    v21 = *(_OWORD *)&p_png_ptr[-1].colorspace.end_points_XYZ.green_Z;
    *(_OWORD *)&v13[-1].colorspace.end_points_XYZ.red_Y = v20;
    v22 = *(_OWORD *)&p_png_ptr[-1].colorspace.rendering_intent;
    *(_OWORD *)&v13[-1].colorspace.end_points_XYZ.green_Z = v21;
    *(_OWORD *)&v13[-1].colorspace.rendering_intent = v22;
    --v14;
  }
  while ( v14 );
  result = v11;
  v24 = p_png_ptr->jmp_buf_local[1];
  v13->jmp_buf_local[0] = p_png_ptr->jmp_buf_local[0];
  v25 = p_png_ptr->jmp_buf_local[2];
  v13->jmp_buf_local[1] = v24;
  v26 = p_png_ptr->jmp_buf_local[3];
  v13->jmp_buf_local[2] = v25;
  v27 = p_png_ptr->jmp_buf_local[4];
  v13->jmp_buf_local[3] = v26;
  v13->jmp_buf_local[4] = v27;
  return result;
}

void __fastcall png_destroy_gamma_table(png_struct_def *png_ptr)
{
  __int64 v2; // rdi
  int v3; // edx
  __int64 v4; // rsi
  unsigned __int8 *gamma_to_1; // rdx
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // er14

  png_free(png_ptr, png_ptr->gamma_table);
  png_ptr->gamma_table = 0i64;
  if ( png_ptr->gamma_16_table )
  {
    v2 = 0i64;
    v3 = 1 << (8 - LOBYTE(png_ptr->gamma_shift));
    v4 = v3;
    if ( v3 > 0 )
    {
      do
        png_free(png_ptr, png_ptr->gamma_16_table[v2++]);
      while ( v2 < v4 );
    }
    png_free(png_ptr, png_ptr->gamma_16_table);
    png_ptr->gamma_16_table = 0i64;
  }
  png_free(png_ptr, png_ptr->gamma_from_1);
  gamma_to_1 = png_ptr->gamma_to_1;
  png_ptr->gamma_from_1 = 0i64;
  png_free(png_ptr, gamma_to_1);
  png_ptr->gamma_to_1 = 0i64;
  if ( png_ptr->gamma_16_from_1 )
  {
    v6 = 0i64;
    v7 = 1 << (8 - LOBYTE(png_ptr->gamma_shift));
    v8 = v7;
    if ( v7 > 0 )
    {
      do
        png_free(png_ptr, png_ptr->gamma_16_from_1[v6++]);
      while ( v6 < v8 );
    }
    png_free(png_ptr, png_ptr->gamma_16_from_1);
    png_ptr->gamma_16_from_1 = 0i64;
  }
  if ( png_ptr->gamma_16_to_1 )
  {
    v9 = 0i64;
    v10 = 1 << (8 - LOBYTE(png_ptr->gamma_shift));
    if ( v10 > 0 )
    {
      do
        png_free(png_ptr, png_ptr->gamma_16_to_1[v9++]);
      while ( v9 < v10 );
    }
    png_free(png_ptr, png_ptr->gamma_16_to_1);
    png_ptr->gamma_16_to_1 = 0i64;
  }
}

void __fastcall png_destroy_info_struct(const png_struct_def *png_ptr, png_info_def **info_ptr_ptr)
{
  png_info_def *v3; // rbx

  if ( png_ptr && info_ptr_ptr )
  {
    v3 = *info_ptr_ptr;
    if ( *info_ptr_ptr )
    {
      *info_ptr_ptr = 0i64;
      png_free_data(png_ptr, v3, 0x7FFFu, -1);
      memset(v3, 0, sizeof(png_info_def));
      png_free(png_ptr, v3);
    }
  }
}

void __fastcall png_free_data(const png_struct_def *png_ptr, png_info_def *info_ptr, unsigned int mask, int num)
{
  unsigned int v4; // ebp
  int v7; // edi
  png_text_struct *text; // rcx
  __int64 v9; // rdi
  char *key; // rdx
  char **pcal_params; // rcx
  unsigned int v12; // ebp
  __int64 v13; // rdi
  unsigned int pcal_nparams; // eax
  png_sPLT_struct *splt_palettes; // rdx
  unsigned __int64 v16; // rdi
  png_sPLT_struct *v17; // rax
  int splt_palettes_num; // eax
  png_unknown_chunk_t *unknown_chunks; // rdx
  unsigned __int8 **row_pointers; // rcx
  unsigned int i; // ebp
  __int64 v22; // rdi
  unsigned int v23; // eax
  int unknown_chunks_num; // eax
  int v25; // edi

  if ( png_ptr )
  {
    v4 = mask;
    if ( info_ptr )
    {
      v7 = 0;
      if ( ((unsigned __int16)mask & (unsigned __int16)info_ptr->free_me & 0x4000) != 0 )
      {
        if ( num == -1 )
        {
          if ( info_ptr->num_text > 0 )
          {
            do
              png_free_data(png_ptr, info_ptr, 0x4000u, v7++);
            while ( v7 < info_ptr->num_text );
          }
          png_free(png_ptr, info_ptr->text);
          v7 = 0;
          info_ptr->text = 0i64;
          info_ptr->num_text = 0;
        }
        else
        {
          text = info_ptr->text;
          if ( text )
          {
            v9 = num;
            key = text[v9].key;
            if ( key )
            {
              png_free(png_ptr, key);
              info_ptr->text[v9].key = 0i64;
            }
            v7 = 0;
          }
        }
      }
      if ( (v4 & info_ptr->free_me & 0x2000) != 0 )
      {
        png_free(png_ptr, info_ptr->trans_alpha);
        info_ptr->valid &= ~0x10u;
        info_ptr->trans_alpha = 0i64;
      }
      if ( (v4 & info_ptr->free_me & 0x100) != 0 )
      {
        png_free(png_ptr, info_ptr->scal_s_width);
        png_free(png_ptr, info_ptr->scal_s_height);
        info_ptr->valid &= ~0x4000u;
        info_ptr->scal_s_width = 0i64;
        info_ptr->scal_s_height = 0i64;
      }
      if ( (v4 & LOBYTE(info_ptr->free_me) & 0x80u) != 0 )
      {
        png_free(png_ptr, info_ptr->pcal_purpose);
        png_free(png_ptr, info_ptr->pcal_units);
        pcal_params = info_ptr->pcal_params;
        info_ptr->pcal_purpose = 0i64;
        info_ptr->pcal_units = 0i64;
        if ( pcal_params )
        {
          v12 = 0;
          if ( info_ptr->pcal_nparams )
          {
            do
            {
              v13 = v12;
              png_free(png_ptr, pcal_params[v13]);
              pcal_params = info_ptr->pcal_params;
              ++v12;
              pcal_nparams = info_ptr->pcal_nparams;
              pcal_params[v13] = 0i64;
            }
            while ( v12 < pcal_nparams );
            v7 = 0;
          }
          png_free(png_ptr, info_ptr->pcal_params);
          v4 = mask;
          info_ptr->pcal_params = 0i64;
        }
        info_ptr->valid &= ~0x400u;
      }
      if ( ((unsigned __int8)v4 & info_ptr->free_me & 0x10) != 0 )
      {
        png_free(png_ptr, info_ptr->iccp_name);
        png_free(png_ptr, info_ptr->iccp_profile);
        info_ptr->valid &= ~0x1000u;
        info_ptr->iccp_name = 0i64;
        info_ptr->iccp_profile = 0i64;
      }
      if ( ((unsigned __int8)v4 & info_ptr->free_me & 0x20) != 0 )
      {
        if ( num == -1 )
        {
          splt_palettes_num = info_ptr->splt_palettes_num;
          if ( splt_palettes_num )
          {
            if ( splt_palettes_num > 0 )
            {
              do
                png_free_data(png_ptr, info_ptr, 0x20u, v7++);
              while ( v7 < info_ptr->splt_palettes_num );
            }
            png_free(png_ptr, info_ptr->splt_palettes);
            info_ptr->valid &= ~0x2000u;
            info_ptr->splt_palettes = 0i64;
            info_ptr->splt_palettes_num = 0;
          }
          else
          {
            info_ptr->valid &= ~0x2000u;
          }
        }
        else
        {
          splt_palettes = info_ptr->splt_palettes;
          if ( splt_palettes )
          {
            v16 = num;
            png_free(png_ptr, splt_palettes[v16].name);
            png_free(png_ptr, info_ptr->splt_palettes[v16].entries);
            v17 = info_ptr->splt_palettes;
            v17[v16].name = 0i64;
            v17[v16].entries = 0i64;
          }
        }
      }
      if ( (v4 & info_ptr->free_me & 0x200) != 0 )
      {
        if ( num == -1 )
        {
          unknown_chunks_num = info_ptr->unknown_chunks_num;
          if ( unknown_chunks_num )
          {
            v25 = 0;
            if ( unknown_chunks_num > 0 )
            {
              do
                png_free_data(png_ptr, info_ptr, 0x200u, v25++);
              while ( v25 < info_ptr->unknown_chunks_num );
            }
            png_free(png_ptr, info_ptr->unknown_chunks);
            info_ptr->unknown_chunks = 0i64;
            info_ptr->unknown_chunks_num = 0;
          }
        }
        else
        {
          unknown_chunks = info_ptr->unknown_chunks;
          if ( unknown_chunks )
          {
            png_free(png_ptr, unknown_chunks[num].data);
            info_ptr->unknown_chunks[num].data = 0i64;
          }
        }
      }
      if ( ((unsigned __int8)v4 & info_ptr->free_me & 8) != 0 )
      {
        png_free(png_ptr, info_ptr->hist);
        info_ptr->valid &= ~0x40u;
        info_ptr->hist = 0i64;
      }
      if ( (v4 & info_ptr->free_me & 0x1000) != 0 )
      {
        png_free(png_ptr, info_ptr->palette);
        info_ptr->valid &= ~8u;
        info_ptr->palette = 0i64;
        info_ptr->num_palette = 0;
      }
      if ( ((unsigned __int8)v4 & info_ptr->free_me & 0x40) != 0 )
      {
        row_pointers = info_ptr->row_pointers;
        if ( row_pointers )
        {
          for ( i = 0; i < info_ptr->height; row_pointers[v22] = 0i64 )
          {
            v22 = i;
            png_free(png_ptr, row_pointers[v22]);
            row_pointers = info_ptr->row_pointers;
            ++i;
          }
          png_free(png_ptr, info_ptr->row_pointers);
          v4 = mask;
          info_ptr->row_pointers = 0i64;
        }
        info_ptr->valid &= ~0x8000u;
      }
      v23 = v4 & 0xFFFFBDDF;
      if ( num == -1 )
        v23 = v4;
      info_ptr->free_me &= ~v23;
    }
  }
}

__int64 __fastcall png_gamma_8bit_correct(unsigned int value, int gamma_val)
{
  double v2; // xmm0_8

  if ( value - 1 > 0xFD )
    return (unsigned __int8)value;
  v2 = pow((double)(int)value / 255.0, (double)gamma_val * 0.00001);
  return (unsigned int)(int)floor(v2 * 255.0 + 0.5);
}

__int64 __fastcall png_gamma_correct(png_struct_def *png_ptr, unsigned int value, int gamma_val)
{
  unsigned int v3; // eax
  double v4; // xmm0_8
  double v6; // xmm0_8

  v3 = value - 1;
  if ( png_ptr->bit_depth == 8 )
  {
    if ( v3 > 0xFD )
    {
      return (unsigned __int8)value;
    }
    else
    {
      v4 = pow((double)(int)value / 255.0, (double)gamma_val * 0.00001);
      return (unsigned __int8)(int)floor(v4 * 255.0 + 0.5);
    }
  }
  else if ( v3 > 0xFFFD )
  {
    return (unsigned __int16)value;
  }
  else
  {
    v6 = pow((double)(int)value / 65535.0, (double)gamma_val * 0.00001);
    return (unsigned int)(int)floor(v6 * 65535.0 + 0.5);
  }
}

_BOOL8 __fastcall png_gamma_significant(int gamma_val)
{
  return (unsigned int)(gamma_val - 95000) > 0x2710;
}

void *__fastcall png_get_io_ptr(const png_struct_def *png_ptr)
{
  if ( png_ptr )
    return png_ptr->io_ptr;
  else
    return 0i64;
}

__int64 __fastcall png_handle_as_unknown(const png_struct_def *png_ptr, const unsigned __int8 *chunk_name)
{
  unsigned int num_chunk_list; // eax
  unsigned __int8 *chunk_list; // r8
  unsigned __int8 *v4; // rax

  if ( !png_ptr )
    return 0i64;
  if ( !chunk_name )
    return 0i64;
  num_chunk_list = png_ptr->num_chunk_list;
  if ( !num_chunk_list )
    return 0i64;
  chunk_list = png_ptr->chunk_list;
  v4 = &chunk_list[5 * num_chunk_list];
  while ( 1 )
  {
    v4 -= 5;
    if ( *(_DWORD *)chunk_name == *(_DWORD *)v4 )
      break;
    if ( v4 <= chunk_list )
      return 0i64;
  }
  return v4[4];
}

int __fastcall png_icc_check_header(
        const png_struct_def *png_ptr,
        png_colorspace *colorspace,
        const char *name,
        unsigned int profile_length,
        const unsigned __int8 *profile,
        int color_type)
{
  const char *v7; // rdi
  png_colorspace *v8; // rbp
  unsigned int v9; // ecx
  unsigned __int64 v10; // r9
  const char *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  bool v17; // zf
  const char *reason; // rax
  unsigned __int64 v19; // r9
  unsigned int v20; // ecx

  v7 = name;
  v8 = colorspace;
  v9 = profile[3] + ((profile[2] + ((profile[1] + (*profile << 8)) << 8)) << 8);
  if ( v9 == profile_length )
  {
    v12 = profile[131] + ((profile[130] + ((profile[129] + (profile[128] << 8)) << 8)) << 8);
    if ( v12 > 0x1555554A || profile_length < 12 * (v12 + 11) )
    {
      v10 = v12;
      v11 = "tag count too large";
      goto LABEL_40;
    }
    v13 = profile[67] + ((profile[66] + ((profile[65] + (profile[64] << 8)) << 8)) << 8);
    if ( v13 >= 0xFFFF )
    {
      v10 = v13;
      v11 = "invalid rendering intent";
LABEL_40:
      colorspace = v8;
      return png_icc_profile_error(png_ptr, colorspace, name, v10, v11);
    }
    if ( v13 >= 4 )
      png_icc_profile_error(png_ptr, 0i64, name, v13, "intent outside defined range");
    v14 = profile[39] + ((profile[38] + ((profile[37] + (profile[36] << 8)) << 8)) << 8);
    if ( v14 != 1633907568 )
    {
      v10 = v14;
      v11 = "invalid signature";
      name = v7;
      goto LABEL_40;
    }
    if ( *(_QWORD *)(profile + 68) != *(_QWORD *)D50_nCIEXYZ || *((_DWORD *)profile + 19) != *(_DWORD *)&D50_nCIEXYZ[8] )
      png_icc_profile_error(png_ptr, 0i64, v7, 0i64, "PCS illuminant is not D50");
    v15 = profile[19] + ((profile[18] + ((profile[17] + (profile[16] << 8)) << 8)) << 8);
    if ( v15 == 1196573017 )
    {
      if ( (color_type & 2) != 0 )
      {
        v11 = "Gray color space not permitted on RGB PNG";
        v10 = 1196573017i64;
        name = v7;
        goto LABEL_40;
      }
    }
    else
    {
      if ( v15 != 1380401696 )
      {
        v10 = v15;
        v11 = "invalid ICC profile color space";
        name = v7;
        goto LABEL_40;
      }
      if ( (color_type & 2) == 0 )
      {
        v11 = "RGB color space not permitted on grayscale PNG";
        v10 = 1380401696i64;
        name = v7;
        goto LABEL_40;
      }
    }
    v16 = profile[15] + ((profile[14] + ((profile[13] + (profile[12] << 8)) << 8)) << 8);
    if ( v16 > 0x6E6D636C )
    {
      if ( v16 == 1886549106 || v16 == 1935896178 )
        goto LABEL_35;
      v17 = v16 == 1936744803;
    }
    else
    {
      switch ( v16 )
      {
        case 0x6E6D636Cu:
          reason = "unexpected NamedColor ICC profile class";
          v19 = 1852662636i64;
          goto LABEL_34;
        case 0x61627374u:
          v11 = "invalid embedded Abstract ICC profile";
          v10 = 1633842036i64;
          name = v7;
          goto LABEL_40;
        case 0x6C696E6Bu:
          v11 = "unexpected DeviceLink ICC profile class";
          v10 = 1818848875i64;
          name = v7;
          goto LABEL_40;
      }
      v17 = v16 == 1835955314;
    }
    if ( v17 )
      goto LABEL_35;
    v19 = v16;
    reason = "unrecognized ICC profile class";
LABEL_34:
    png_icc_profile_error(png_ptr, 0i64, v7, v19, reason);
LABEL_35:
    v20 = profile[23] + ((profile[22] + ((profile[21] + (profile[20] << 8)) << 8)) << 8);
    if ( v20 == 1281450528 || v20 == 1482250784 )
      return 1;
    v10 = v20;
    v11 = "unexpected ICC PCS encoding";
    name = v7;
    goto LABEL_40;
  }
  v10 = v9;
  v11 = "length does not match profile";
  return png_icc_profile_error(png_ptr, colorspace, name, v10, v11);
}

int __fastcall png_icc_check_length(
        const png_struct_def *png_ptr,
        png_colorspace *colorspace,
        const char *name,
        unsigned int profile_length)
{
  if ( profile_length < 0x84 )
    return png_icc_profile_error(png_ptr, colorspace, name, profile_length, "too short");
  if ( (profile_length & 3) != 0 )
    return png_icc_profile_error(png_ptr, colorspace, name, profile_length, "invalid length");
  return 1;
}

int __fastcall png_icc_check_tag_table(
        const png_struct_def *png_ptr,
        png_colorspace *colorspace,
        const char *name,
        unsigned int profile_length,
        const unsigned __int8 *profile)
{
  unsigned int v7; // esi
  const unsigned __int8 *v8; // rbx
  unsigned int v9; // ebp
  unsigned int v10; // er14
  unsigned int v11; // edi
  unsigned int v12; // er15
  png_struct_def *png_ptra; // [rsp+70h] [rbp+8h]

  png_ptra = (png_struct_def *)png_ptr;
  v7 = 0;
  v8 = profile + 132;
  v9 = profile[131] + ((profile[130] + ((profile[129] + (profile[128] << 8)) << 8)) << 8);
  if ( !v9 )
    return 1;
  while ( 1 )
  {
    v10 = v8[3] + ((v8[2] + ((v8[1] + (*v8 << 8)) << 8)) << 8);
    v11 = v8[7] + ((v8[6] + ((v8[5] + (v8[4] << 8)) << 8)) << 8);
    v12 = v8[11] + ((v8[10] + ((v8[9] + (v8[8] << 8)) << 8)) << 8);
    if ( (v8[7] & 3) != 0 )
    {
      png_icc_profile_error(png_ptr, 0i64, name, v10, "ICC profile tag start not a multiple of 4");
      png_ptr = png_ptra;
    }
    if ( v11 > profile_length || v12 > profile_length - v11 )
      break;
    ++v7;
    v8 += 12;
    if ( v7 >= v9 )
      return 1;
  }
  return png_icc_profile_error(png_ptr, colorspace, name, v10, "ICC profile tag outside profile");
}

__int64 __fastcall png_icc_profile_error(
        const png_struct_def *png_ptr,
        png_colorspace *colorspace,
        const char *name,
        unsigned __int64 value,
        const char *reason)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  char v12; // r9
  char v13; // dl
  char v14; // r8
  char v15; // r8
  unsigned __int64 v16; // rdi
  const char *v17; // rax
  unsigned __int64 v18; // rax
  char start[24]; // [rsp+20h] [rbp-128h] BYREF
  char end[8]; // [rsp+38h] [rbp-110h] BYREF
  char buffer[208]; // [rsp+40h] [rbp-108h] BYREF

  if ( colorspace )
    colorspace->flags |= 0x8000u;
  v9 = png_safecat(buffer, 0xC4ui64, 0i64, "profile '");
  v10 = png_safecat(buffer, v9 + 79, v9, name);
  v11 = png_safecat(buffer, 0xC4ui64, v10, "': ");
  if ( is_ICC_signature(value) )
  {
    v12 = 63;
    buffer[v11] = 39;
    v13 = 63;
    *(_WORD *)&buffer[v11 + 5] = 14887;
    if ( BYTE3(value) - 32 <= 0x5Eu )
      v13 = BYTE3(value);
    v14 = 63;
    buffer[v11 + 1] = v13;
    if ( (unsigned int)BYTE2(value) - 32 <= 0x5E )
      v14 = BYTE2(value);
    buffer[v11 + 2] = v14;
    v15 = 63;
    if ( (unsigned int)BYTE1(value) - 32 <= 0x5E )
      v15 = BYTE1(value);
    buffer[v11 + 3] = v15;
    if ( (unsigned int)(unsigned __int8)value - 32 <= 0x5E )
      v12 = value;
    buffer[v11 + 4] = v12;
    buffer[v11 + 7] = 32;
    v16 = v11 + 8;
  }
  else
  {
    v17 = png_format_number(start, end, 3, value);
    v18 = png_safecat(buffer, 0xC4ui64, v11, v17);
    v16 = png_safecat(buffer, 0xC4ui64, v18, "h: ");
  }
  png_safecat(buffer, 0xC4ui64, v16, reason);
  png_chunk_report(png_ptr, buffer, (colorspace != 0i64) + 1);
  return 0i64;
}

void __fastcall png_icc_set_sRGB(
        const png_struct_def *png_ptr,
        png_colorspace *colorspace,
        const unsigned __int8 *profile,
        unsigned int adler)
{
  if ( (unsigned int)png_compare_ICC_profile_with_sRGB(png_ptr, profile, adler) )
    png_colorspace_set_sRGB(
      png_ptr,
      colorspace,
      profile[67] + (profile[66] << 8) + (profile[65] << 16) + (profile[64] << 24));
}

__int64 __fastcall png_muldiv(int *res, int a, int times, int divisor)
{
  double v5; // xmm0_8

  if ( divisor )
  {
    if ( !a || !times )
    {
      *res = 0;
      return 1i64;
    }
    v5 = floor((double)a * (double)times / (double)divisor + 0.5);
    if ( v5 <= 2147483647.0 && v5 >= -2147483648.0 )
    {
      *res = (int)v5;
      return 1i64;
    }
  }
  return 0i64;
}

__int64 __fastcall png_reciprocal(int a)
{
  double v1; // xmm0_8

  v1 = floor(1.0e10 / (double)a + 0.5);
  if ( v1 > 2147483647.0 || v1 < -2147483648.0 )
    return 0i64;
  else
    return (unsigned int)(int)v1;
}

__int64 __fastcall png_reciprocal2(int a, int b)
{
  double v2; // xmm0_8

  v2 = floor(1.0e15 / (double)a / (double)b + 0.5);
  if ( v2 > 2147483647.0 || v2 < -2147483648.0 )
    return 0i64;
  else
    return (unsigned int)(int)v2;
}

void __fastcall png_reset_crc(png_struct_def *png_ptr)
{
  png_ptr->crc = crc32(0i64, 0i64, 0i64);
}

void __fastcall png_save_int_32(unsigned __int8 *buf, int i)
{
  buf[3] = i;
  *buf = HIBYTE(i);
  buf[1] = BYTE2(i);
  buf[2] = BYTE1(i);
}

void __fastcall png_set_sig_bytes(png_struct_def *png_ptr, int num_bytes)
{
  unsigned __int8 v2; // al

  if ( png_ptr )
  {
    if ( num_bytes > 8 )
      png_error(png_ptr, "Too many bytes for PNG signature");
    v2 = num_bytes;
    if ( num_bytes < 0 )
      v2 = 0;
    png_ptr->sig_bytes = v2;
  }
}

int __fastcall png_sig_cmp(const unsigned __int8 *sig, unsigned __int64 start, unsigned __int64 num_to_check)
{
  unsigned __int64 v3; // r9
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 1196314761;
  v5[1] = 169478669;
  if ( num_to_check <= 8 )
  {
    if ( !num_to_check )
      return -1;
  }
  else
  {
    num_to_check = 8i64;
  }
  if ( start > 7 )
    return -1;
  v3 = 8 - start;
  if ( start + num_to_check <= 8 )
    v3 = num_to_check;
  return memcmp(&sig[start], (char *)v5 + start, v3);
}

__int64 __fastcall png_user_version_check(png_struct_def *png_ptr, const char *user_png_ver)
{
  const char *v4; // rax
  signed __int64 v5; // rdx
  char v6; // cl
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char buffer[128]; // [rsp+20h] [rbp-98h] BYREF

  if ( user_png_ver )
  {
    v4 = "1.6.10";
    v5 = user_png_ver - "1.6.10";
    do
    {
      v6 = *v4;
      if ( v4[v5] != *v4 )
        png_ptr->flags |= 0x20000u;
      ++v4;
    }
    while ( v6 );
  }
  else
  {
    png_ptr->flags |= 0x20000u;
  }
  if ( (png_ptr->flags & 0x20000) == 0
    || user_png_ver && *user_png_ver == 49 && user_png_ver[2] == 54 && user_png_ver[3] == 46 )
  {
    return 1i64;
  }
  v7 = png_safecat(buffer, 0x80ui64, 0i64, "Application built with libpng-");
  v8 = png_safecat(buffer, 0x80ui64, v7, user_png_ver);
  v9 = png_safecat(buffer, 0x80ui64, v8, " but running with ");
  png_safecat(buffer, 0x80ui64, v9, "1.6.10");
  png_warning(png_ptr, buffer);
  return 0i64;
}

__int64 __fastcall png_xy_from_XYZ(png_xy *xy, const png_XYZ *XYZ)
{
  int red_X; // eax
  int v5; // esi
  unsigned int v6; // ebp
  double v7; // xmm0_8
  int red_Y; // eax
  double v9; // xmm0_8
  int green_X; // eax
  int v12; // er12
  int v13; // er15
  int v14; // er14
  double v15; // xmm0_8
  int blue_X; // edx
  int v17; // er12
  int v18; // esi
  int v19; // er15
  int v20; // er14
  int v21; // er15
  int v22; // esi

  red_X = XYZ->red_X;
  v5 = XYZ->red_Y + XYZ->red_X + XYZ->red_Z;
  if ( !v5 )
    return 1i64;
  v6 = 0;
  if ( red_X )
  {
    v7 = floor((double)red_X * 100000.0 / (double)v5 + 0.5);
    if ( v7 > 2147483647.0 || v7 < -2147483648.0 )
      return 1i64;
    xy->redx = (int)v7;
  }
  else
  {
    xy->redx = 0;
  }
  red_Y = XYZ->red_Y;
  if ( red_Y )
  {
    v9 = floor((double)red_Y * 100000.0 / (double)v5 + 0.5);
    if ( v9 <= 2147483647.0 && v9 >= -2147483648.0 )
    {
      xy->redy = (int)v9;
      goto LABEL_13;
    }
    return 1i64;
  }
  xy->redy = 0;
LABEL_13:
  green_X = XYZ->green_X;
  v12 = XYZ->red_X;
  v13 = XYZ->red_Y;
  v14 = green_X + XYZ->green_Y + XYZ->green_Z;
  if ( v14 )
  {
    if ( green_X )
    {
      v15 = floor((double)green_X * 100000.0 / (double)v14 + 0.5);
      if ( v15 > 2147483647.0 || v15 < -2147483648.0 )
        return 1i64;
      xy->greenx = (int)v15;
    }
    else
    {
      xy->greenx = 0;
    }
    if ( (unsigned int)png_muldiv(&xy->greeny, XYZ->green_Y, 100000, v14) )
    {
      blue_X = XYZ->blue_X;
      v17 = XYZ->green_X + v12;
      v18 = v14 + v5;
      v19 = XYZ->green_Y + v13;
      v20 = XYZ->blue_Y + blue_X + XYZ->blue_Z;
      if ( (unsigned int)png_muldiv(&xy->bluex, blue_X, 100000, v20) )
      {
        if ( (unsigned int)png_muldiv(&xy->bluey, XYZ->blue_Y, 100000, v20) )
        {
          v21 = XYZ->blue_Y + v19;
          v22 = v20 + v18;
          if ( (unsigned int)png_muldiv(&xy->whitex, XYZ->blue_X + v17, 100000, v22) )
          {
            LOBYTE(v6) = (unsigned int)png_muldiv(&xy->whitey, v21, 100000, v22) == 0;
            return v6;
          }
        }
      }
    }
  }
  return 1i64;
}

void *__fastcall png_zalloc(void *png_ptr, unsigned int items, unsigned int size)
{
  if ( !png_ptr )
    return 0i64;
  if ( items >= 0xFFFFFFFFFFFFFFFFui64 / size )
  {
    png_warning((const png_struct_def *)png_ptr, "Potential overflow in png_zalloc()");
    return 0i64;
  }
  return png_malloc_warn((const png_struct_def *)png_ptr, size * (unsigned __int64)items);
}

// attributes: thunk
void __fastcall png_zfree(void *png_ptr, void *ptr)
{
  png_free((const png_struct_def *)png_ptr, ptr);
}

void __fastcall png_zstream_error(png_struct_def *png_ptr, int ret)
{
  if ( !png_ptr->zstream.msg )
  {
    switch ( ret )
    {
      case -7:
        png_ptr->zstream.msg = "unexpected zlib return";
        break;
      case -6:
        png_ptr->zstream.msg = "unsupported zlib version";
        break;
      case -5:
        png_ptr->zstream.msg = "truncated";
        break;
      case -4:
        png_ptr->zstream.msg = "insufficient memory";
        break;
      case -3:
        png_ptr->zstream.msg = "damaged LZ stream";
        break;
      case -2:
        png_ptr->zstream.msg = "bad parameters to zlib";
        break;
      case -1:
        png_ptr->zstream.msg = "zlib IO error";
        break;
      case 1:
        png_ptr->zstream.msg = "unexpected end of LZ stream";
        break;
      case 2:
        png_ptr->zstream.msg = "missing LZ dictionary";
        break;
      default:
        png_ptr->zstream.msg = "unexpected zlib return code";
        break;
    }
  }
}

