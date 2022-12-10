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

typedef png_color_8_struct * png_color_8p;
typedef png_time_struct * png_timep;
typedef png_unknown_chunk_t * * png_unknown_chunkpp;
typedef const png_info_def * png_const_inforp;
typedef png_sPLT_struct * * png_sPLT_tpp;
typedef const png_struct_def * png_const_structp;
typedef png_color_16_struct * png_color_16p;
typedef const png_info_def * png_const_infop;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
unsigned long png_get_valid(const png_struct_def * png_ptr, const png_info_def * info_ptr, unsigned long flag); // 0x140414F70
unsigned long long png_get_rowbytes(const png_struct_def * png_ptr, const png_info_def * info_ptr); // 0x140414F50
unsigned long png_get_gAMA(const png_struct_def * png_ptr, const png_info_def * info_ptr, double * file_gamma); // 0x140414F10
unsigned long png_get_IHDR(const png_struct_def * png_ptr, const png_info_def * info_ptr, unsigned long * width, unsigned long * height, long * bit_depth, long * color_type, long * interlace_type, long * compression_type, long * filter_type); // 0x140414E20__int64 __fastcall png_get_IHDR(
        const png_struct_def *png_ptr,
        const png_info_def *info_ptr,
        unsigned int *width,
        unsigned int *height,
        int *bit_depth,
        int *color_type,
        int *interlace_type,
        int *compression_type,
        int *filter_type)
{
  unsigned int v9; // ebx
  unsigned int v10; // er8
  int v11; // er9
  int v12; // edi

  if ( !png_ptr || !info_ptr || !width || !height || !bit_depth || !color_type )
    return 0i64;
  v9 = info_ptr->width;
  *width = info_ptr->width;
  v10 = info_ptr->height;
  *height = v10;
  v11 = info_ptr->bit_depth;
  v12 = info_ptr->color_type;
  *bit_depth = v11;
  *color_type = v12;
  if ( compression_type )
    *compression_type = info_ptr->compression_type;
  if ( filter_type )
    *filter_type = info_ptr->filter_type;
  if ( interlace_type )
    *interlace_type = info_ptr->interlace_type;
  png_check_IHDR(
    png_ptr,
    v9,
    v10,
    v11,
    v12,
    info_ptr->interlace_type,
    info_ptr->compression_type,
    info_ptr->filter_type);
  return 1i64;
}

__int64 __fastcall png_get_gAMA(const png_struct_def *png_ptr, const png_info_def *info_ptr, long double *file_gamma)
{
  __int64 result; // rax

  if ( !png_ptr || !info_ptr || (info_ptr->colorspace.flags & 1) == 0 || !file_gamma )
    return 0i64;
  result = 1i64;
  *file_gamma = (double)info_ptr->colorspace.gamma * 0.00001;
  return result;
}

unsigned __int64 __fastcall png_get_rowbytes(const png_struct_def *png_ptr, const png_info_def *info_ptr)
{
  if ( png_ptr && info_ptr )
    return info_ptr->rowbytes;
  else
    return 0i64;
}

__int64 __fastcall png_get_valid(const png_struct_def *png_ptr, const png_info_def *info_ptr, unsigned int flag)
{
  if ( png_ptr && info_ptr )
    return flag & info_ptr->valid;
  else
    return 0i64;
}

