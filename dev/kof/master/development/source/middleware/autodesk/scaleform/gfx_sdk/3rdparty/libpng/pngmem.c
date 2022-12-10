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

typedef const void * png_const_voidp;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
void png_destroy_png_struct(png_struct_def * png_ptr); // 0x14042CE10
void * png_calloc(const png_struct_def * png_ptr, unsigned long long size); // 0x14042CD80
void * png_malloc_base(const png_struct_def * png_ptr, unsigned long long size); // 0x14042D040
void * png_malloc_array_checked(const png_struct_def * png_ptr, long nelements, unsigned long long element_size); // 0x14042D000
void * png_malloc_array(const png_struct_def * png_ptr, long nelements, unsigned long long element_size); // 0x14042CF90
void * png_realloc_array(const png_struct_def * png_ptr, const void * old_array, long old_elements, long add_elements, unsigned long long element_size); // 0x14042D0C0
void * png_malloc(const png_struct_def * png_ptr, unsigned long long size); // 0x14042CF40
void * png_malloc_warn(const png_struct_def * png_ptr, unsigned long long size); // 0x14042D070
void png_free(const png_struct_def * png_ptr, void * ptr); // 0x14042CF10
void png_set_mem_fn(png_struct_def * png_ptr, void * mem_ptr, void *(*malloc_fn)(png_struct_def *, unsigned long long), void(*free_fn)(png_struct_def *, void *)); // 0x14042D190void *__fastcall png_calloc(const png_struct_def *png_ptr, unsigned __int64 size)
{
  __int64 (*malloc_fn)(void); // rax
  void *v6; // rax
  void *v7; // rbx

  if ( !png_ptr )
    return 0i64;
  if ( !size
    || ((malloc_fn = (__int64 (*)(void))png_ptr->malloc_fn) == 0i64 ? (v6 = malloc(size)) : (v6 = (void *)malloc_fn()),
        (v7 = v6) == 0i64) )
  {
    png_error(png_ptr, "Out of memory");
  }
  memset(v6, 0, size);
  return v7;
}

void __fastcall png_destroy_png_struct(png_struct_def *png_ptr)
{
  png_struct_def *v1; // rbx
  png_struct_def *p_png_ptra; // rax
  __int64 v3; // rdx
  _SETJMP_FLOAT128 v4; // xmm0
  _SETJMP_FLOAT128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _SETJMP_FLOAT128 v12; // xmm1
  _SETJMP_FLOAT128 v13; // xmm0
  _SETJMP_FLOAT128 v14; // xmm1
  _SETJMP_FLOAT128 v15; // xmm0
  png_struct_def png_ptra; // [rsp+20h] [rbp-568h] BYREF

  if ( png_ptr )
  {
    v1 = png_ptr;
    p_png_ptra = &png_ptra;
    v3 = 10i64;
    do
    {
      p_png_ptra = (png_struct_def *)((char *)p_png_ptra + 128);
      v4 = png_ptr->jmp_buf_local[0];
      v5 = png_ptr->jmp_buf_local[1];
      png_ptr = (png_struct_def *)((char *)png_ptr + 128);
      *(_SETJMP_FLOAT128 *)&p_png_ptra[-1].big_prev_row = v4;
      v6 = *(_OWORD *)&png_ptr[-1].read_filter[3];
      *(_SETJMP_FLOAT128 *)&p_png_ptra[-1].read_filter[1] = v5;
      v7 = *(_OWORD *)&png_ptr[-1].colorspace.end_points_xy.redy;
      *(_OWORD *)&p_png_ptra[-1].read_filter[3] = v6;
      v8 = *(_OWORD *)&png_ptr[-1].colorspace.end_points_xy.bluey;
      *(_OWORD *)&p_png_ptra[-1].colorspace.end_points_xy.redy = v7;
      v9 = *(_OWORD *)&png_ptr[-1].colorspace.end_points_XYZ.red_Y;
      *(_OWORD *)&p_png_ptra[-1].colorspace.end_points_xy.bluey = v8;
      v10 = *(_OWORD *)&png_ptr[-1].colorspace.end_points_XYZ.green_Z;
      *(_OWORD *)&p_png_ptra[-1].colorspace.end_points_XYZ.red_Y = v9;
      v11 = *(_OWORD *)&png_ptr[-1].colorspace.rendering_intent;
      *(_OWORD *)&p_png_ptra[-1].colorspace.end_points_XYZ.green_Z = v10;
      *(_OWORD *)&p_png_ptra[-1].colorspace.rendering_intent = v11;
      --v3;
    }
    while ( v3 );
    v12 = png_ptr->jmp_buf_local[1];
    p_png_ptra->jmp_buf_local[0] = png_ptr->jmp_buf_local[0];
    v13 = png_ptr->jmp_buf_local[2];
    p_png_ptra->jmp_buf_local[1] = v12;
    v14 = png_ptr->jmp_buf_local[3];
    p_png_ptra->jmp_buf_local[2] = v13;
    v15 = png_ptr->jmp_buf_local[4];
    p_png_ptra->jmp_buf_local[3] = v14;
    p_png_ptra->jmp_buf_local[4] = v15;
    memset(v1, 0, sizeof(png_struct_def));
    if ( png_ptra.free_fn )
      png_ptra.free_fn(&png_ptra, v1);
    else
      free(v1);
    png_free_jmpbuf(&png_ptra);
  }
}

void __fastcall png_free(const png_struct_def *png_ptr, void *ptr)
{
  void (*free_fn)(void); // rax

  if ( png_ptr && ptr )
  {
    free_fn = (void (*)(void))png_ptr->free_fn;
    if ( free_fn )
      free_fn();
    else
      free(ptr);
  }
}

void *__fastcall png_malloc(const png_struct_def *png_ptr, unsigned __int64 size)
{
  void *result; // rax
  __int64 (*malloc_fn)(void); // rax

  if ( !png_ptr )
    return 0i64;
  if ( !size
    || ((malloc_fn = (__int64 (*)(void))png_ptr->malloc_fn) == 0i64 ? (result = malloc(size)) : (result = (void *)malloc_fn()),
        !result) )
  {
    png_error(png_ptr, "Out of memory");
  }
  return result;
}

void *__fastcall png_malloc_array(const png_struct_def *png_ptr, int nelements, unsigned __int64 element_size)
{
  unsigned __int64 v4; // rcx
  void *(__fastcall *malloc_fn)(png_struct_def *, unsigned __int64); // rax

  if ( nelements <= 0 || !element_size )
    png_error(png_ptr, "internal error: array alloc");
  if ( nelements > 0xFFFFFFFFFFFFFFFFui64 / element_size )
    return 0i64;
  v4 = element_size * nelements;
  if ( !v4 )
    return 0i64;
  if ( png_ptr )
  {
    malloc_fn = png_ptr->malloc_fn;
    if ( malloc_fn )
      return malloc_fn((png_struct_def *)png_ptr, v4);
  }
  return malloc(v4);
}

void *__fastcall png_malloc_array_checked(const png_struct_def *png_ptr, int nelements, unsigned __int64 element_size)
{
  unsigned __int64 v4; // rcx
  void *(__fastcall *malloc_fn)(png_struct_def *, unsigned __int64); // rax

  if ( nelements > 0xFFFFFFFFFFFFFFFFui64 / element_size )
    return 0i64;
  v4 = element_size * nelements;
  if ( !v4 )
    return 0i64;
  if ( png_ptr )
  {
    malloc_fn = png_ptr->malloc_fn;
    if ( malloc_fn )
      return malloc_fn((png_struct_def *)png_ptr, v4);
  }
  return malloc(v4);
}

void *__fastcall png_malloc_base(const png_struct_def *png_ptr, unsigned __int64 size)
{
  __int64 (*malloc_fn)(void); // rax

  if ( !size )
    return 0i64;
  if ( png_ptr )
  {
    malloc_fn = (__int64 (*)(void))png_ptr->malloc_fn;
    if ( malloc_fn )
      return (void *)malloc_fn();
  }
  return malloc(size);
}

void *__fastcall png_malloc_warn(const png_struct_def *png_ptr, unsigned __int64 size)
{
  __int64 (*malloc_fn)(void); // rax
  void *result; // rax

  if ( !png_ptr )
    return 0i64;
  if ( !size
    || ((malloc_fn = (__int64 (*)(void))png_ptr->malloc_fn) == 0i64 ? (result = malloc(size)) : (result = (void *)malloc_fn()),
        !result) )
  {
    png_warning(png_ptr, "Out of memory");
    return 0i64;
  }
  return result;
}

char *__fastcall png_realloc_array(
        const png_struct_def *png_ptr,
        const void *old_array,
        int old_elements,
        int add_elements,
        unsigned __int64 element_size)
{
  __int64 v5; // rsi
  __int64 v7; // rbx
  char *v8; // rax
  char *v9; // rbp

  v5 = (unsigned int)add_elements;
  v7 = (unsigned int)old_elements;
  if ( add_elements <= 0 || !element_size || old_elements < 0 || !old_array && old_elements > 0 )
    png_error(png_ptr, "internal error: array realloc");
  if ( add_elements > 0x7FFFFFFF - old_elements )
    return 0i64;
  v8 = (char *)png_malloc_array_checked(png_ptr, old_elements + add_elements, element_size);
  v9 = v8;
  if ( !v8 )
    return 0i64;
  if ( (int)v7 > 0 )
    memmove(v8, old_array, element_size * v7);
  memset(&v9[element_size * v7], 0, element_size * v5);
  return v9;
}

void __fastcall png_set_mem_fn(
        png_struct_def *png_ptr,
        void *mem_ptr,
        void *(__fastcall *malloc_fn)(png_struct_def *, unsigned __int64),
        void (__fastcall *free_fn)(png_struct_def *, void *))
{
  if ( png_ptr )
  {
    png_ptr->mem_ptr = mem_ptr;
    png_ptr->malloc_fn = malloc_fn;
    png_ptr->free_fn = free_fn;
  }
}

