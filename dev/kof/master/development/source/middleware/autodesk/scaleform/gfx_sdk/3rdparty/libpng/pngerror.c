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

const char png_digit[16]; // 0x140751A20
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
void png_error(const png_struct_def * png_ptr, const char * error_message); // 0x14040FAD0
unsigned long long png_safecat(char * buffer, unsigned long long bufsize, unsigned long long pos, const char * string); // 0x1404101B0
char * png_format_number(const char * start, char * end, long format, unsigned long long number); // 0x14040FD70
void png_warning(const png_struct_def * png_ptr, const char * warning_message); // 0x140410360
void png_warning_parameter(char[32] * p, long number, const char * string); // 0x140410410
void png_warning_parameter_signed(char[32] * p, long number, long format, long value); // 0x140410460
void png_formatted_warning(const png_struct_def * png_ptr, char[32] * p, const char * message); // 0x14040FEE0
void png_benign_error(const png_struct_def * png_ptr, const char * error_message); // 0x14040F7D0
void png_app_warning(const png_struct_def * png_ptr, const char * error_message); // 0x14040F7B0
void png_app_error(const png_struct_def * png_ptr, const char * error_message); // 0x14040F790
void png_format_buffer(const png_struct_def * png_ptr, char * buffer, const char * error_message); // 0x14040FC00
void png_chunk_error(const png_struct_def * png_ptr, const char * error_message); // 0x14040F850
void png_chunk_warning(const png_struct_def * png_ptr, const char * warning_message); // 0x14040F960
void png_chunk_benign_error(const png_struct_def * png_ptr, const char * error_message); // 0x14040F830
void png_chunk_report(const png_struct_def * png_ptr, const char * message, long error); // 0x14040F8F0
void png_fixed_error(const png_struct_def * png_ptr, const char * name); // 0x14040FB00
_SETJMP_FLOAT128[16] * png_set_longjmp_fn(png_struct_def * png_ptr, void(*longjmp_fn)(_SETJMP_FLOAT128 *, long), unsigned long long jmp_buf_size); // 0x140410210
void png_free_jmpbuf(png_struct_def * png_ptr); // 0x1404100A0
void png_default_error(const png_struct_def * png_ptr, const char * error_message); // 0x14040FA50
void png_longjmp(const png_struct_def * png_ptr, long val); // 0x140410180
void png_set_error_fn(png_struct_def * png_ptr, void * error_ptr, void(*error_fn)(png_struct_def *, const char *), void(*warning_fn)(png_struct_def *, const char *)); // 0x1404101F0
void * png_get_error_ptr(const png_struct_def * png_ptr); // 0x140410170//decompilation failure at 140751A20!
void __fastcall png_app_error(const png_struct_def *png_ptr, const char *error_message)
{
  if ( (png_ptr->flags & 0x400000) == 0 )
    png_error(png_ptr, error_message);
  png_warning(png_ptr, error_message);
}

void __fastcall png_app_warning(const png_struct_def *png_ptr, const char *error_message)
{
  if ( (png_ptr->flags & 0x200000) == 0 )
    png_error(png_ptr, error_message);
  png_warning(png_ptr, error_message);
}

void __fastcall png_benign_error(const png_struct_def *png_ptr, const char *error_message)
{
  if ( (png_ptr->flags & 0x100000) == 0 )
  {
    if ( (png_ptr->mode & 0x8000) != 0 && png_ptr->chunk_name )
      png_chunk_error(png_ptr, error_message);
    png_error(png_ptr, error_message);
  }
  if ( (png_ptr->mode & 0x8000) != 0 && png_ptr->chunk_name )
    png_chunk_warning(png_ptr, error_message);
  else
    png_warning(png_ptr, error_message);
}

void __fastcall png_chunk_benign_error(const png_struct_def *png_ptr, const char *error_message)
{
  if ( (png_ptr->flags & 0x100000) == 0 )
    png_chunk_error(png_ptr, error_message);
  png_chunk_warning(png_ptr, error_message);
}

void __fastcall __noreturn png_chunk_error(const png_struct_def *png_ptr, const char *error_message)
{
  void (__fastcall *error_fn)(png_struct_def *, const char *); // rax
  _iobuf *v4; // rax
  _iobuf *v5; // rax
  void (__fastcall *longjmp_fn)(_SETJMP_FLOAT128 *, int); // rax
  _SETJMP_FLOAT128 (*jmp_buf_ptr)[16]; // rcx
  char buffer[232]; // [rsp+20h] [rbp-E8h] BYREF

  if ( !png_ptr )
    png_error(0i64, error_message);
  png_format_buffer(png_ptr, buffer, error_message);
  error_fn = png_ptr->error_fn;
  if ( error_fn )
    error_fn((png_struct_def *)png_ptr, buffer);
  v4 = _acrt_iob_func(2u);
  fprintf(v4, "libpng error: %s", buffer);
  v5 = _acrt_iob_func(2u);
  fprintf(v5, "\n");
  longjmp_fn = png_ptr->longjmp_fn;
  if ( longjmp_fn )
  {
    jmp_buf_ptr = png_ptr->jmp_buf_ptr;
    if ( jmp_buf_ptr )
      longjmp_fn((_SETJMP_FLOAT128 *)jmp_buf_ptr, 1);
  }
  ExitProcess(0);
}

void __fastcall png_chunk_report(const png_struct_def *png_ptr, const char *message, int error)
{
  if ( (png_ptr->mode & 0x8000) != 0 )
  {
    if ( error >= 2 && (png_ptr->flags & 0x100000) == 0 )
      png_chunk_error(png_ptr, message);
    png_chunk_warning(png_ptr, message);
  }
  else
  {
    if ( error >= 1 )
    {
      if ( (png_ptr->flags & 0x400000) == 0 )
        png_error(png_ptr, message);
    }
    else if ( (png_ptr->flags & 0x200000) == 0 )
    {
      png_error(png_ptr, message);
    }
    png_warning(png_ptr, message);
  }
}

void __fastcall png_chunk_warning(const png_struct_def *png_ptr, const char *warning_message)
{
  int v3; // ecx
  __int64 v4; // rax
  void (__fastcall *warning_fn)(png_struct_def *, const char *); // r8
  const char *v6; // rbx
  _iobuf *v7; // rax
  _iobuf *v8; // rax
  char buffer[224]; // [rsp+20h] [rbp-F8h] BYREF

  if ( png_ptr )
  {
    png_format_buffer(png_ptr, buffer, warning_message);
    v3 = 0;
    if ( buffer[0] == 35 )
    {
      v3 = 1;
      v4 = 1i64;
      while ( buffer[v4] != 32 )
      {
        if ( buffer[v4 + 1] == 32 )
        {
          ++v3;
          break;
        }
        v4 += 2i64;
        v3 += 2;
        if ( v4 >= 15 )
          break;
      }
    }
    warning_fn = png_ptr->warning_fn;
    if ( warning_fn )
    {
      warning_fn((png_struct_def *)png_ptr, &buffer[v3]);
    }
    else
    {
      v6 = &buffer[v3];
      v7 = _acrt_iob_func(2u);
      fprintf(v7, "libpng warning: %s", v6);
      v8 = _acrt_iob_func(2u);
      fprintf(v8, "\n");
    }
  }
  else
  {
    png_warning(0i64, warning_message);
  }
}

void __fastcall __noreturn png_default_error(const png_struct_def *png_ptr, const char *error_message)
{
  const char *v2; // rbx
  _iobuf *v4; // rax
  _iobuf *v5; // rax
  void (__fastcall *longjmp_fn)(_SETJMP_FLOAT128 *, int); // rax
  _SETJMP_FLOAT128 (*jmp_buf_ptr)[16]; // rcx

  v2 = "undefined";
  if ( error_message )
    v2 = error_message;
  v4 = _acrt_iob_func(2u);
  fprintf(v4, "libpng error: %s", v2);
  v5 = _acrt_iob_func(2u);
  fprintf(v5, "\n");
  if ( png_ptr )
  {
    longjmp_fn = png_ptr->longjmp_fn;
    if ( longjmp_fn )
    {
      jmp_buf_ptr = png_ptr->jmp_buf_ptr;
      if ( jmp_buf_ptr )
        longjmp_fn((_SETJMP_FLOAT128 *)jmp_buf_ptr, 1);
    }
  }
  ExitProcess(0);
}

void __fastcall __noreturn png_error(const png_struct_def *png_ptr, const char *error_message)
{
  void (*error_fn)(void); // rax

  if ( png_ptr )
  {
    error_fn = (void (*)(void))png_ptr->error_fn;
    if ( error_fn )
      error_fn();
  }
  png_default_error(png_ptr, error_message);
}

void __fastcall __noreturn png_fixed_error(const png_struct_def *png_ptr, const char *name)
{
  int v2; // er8
  const png_struct_def *v3; // rbx
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  void (__fastcall *error_fn)(png_struct_def *, const char *); // rax
  _iobuf *v7; // rax
  _iobuf *v8; // rax
  void (__fastcall *longjmp_fn)(_SETJMP_FLOAT128 *, int); // rax
  _SETJMP_FLOAT128 (*jmp_buf_ptr)[16]; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-E8h] BYREF
  char v12; // [rsp+38h] [rbp-D0h] BYREF

  v2 = 0;
  v3 = png_ptr;
  qmemcpy(v11, "fixed point overflow in ", sizeof(v11));
  if ( name )
  {
    png_ptr = (const png_struct_def *)(&v12 - name);
    v4 = -(__int64)name;
    do
    {
      if ( !*name )
        break;
      name[(_QWORD)png_ptr] = *name;
      ++v2;
      ++name;
    }
    while ( (__int64)&name[v4] < 195 );
  }
  v5 = v2 + 24i64;
  if ( v5 < 0xDC )
  {
    v11[v5] = 0;
    if ( v3 )
    {
      error_fn = v3->error_fn;
      if ( error_fn )
        error_fn((png_struct_def *)v3, v11);
    }
    v7 = _acrt_iob_func(2u);
    fprintf(v7, "libpng error: %s", v11);
    v8 = _acrt_iob_func(2u);
    fprintf(v8, "\n");
    if ( v3 )
    {
      longjmp_fn = v3->longjmp_fn;
      if ( longjmp_fn )
      {
        jmp_buf_ptr = v3->jmp_buf_ptr;
        if ( jmp_buf_ptr )
          longjmp_fn((_SETJMP_FLOAT128 *)jmp_buf_ptr, 1);
      }
    }
    ExitProcess(0);
  }
  _report_rangecheckfailure(png_ptr, name);
  JUMPOUT(0x14040FBF8i64);
}

void __fastcall png_format_buffer(const png_struct_def *png_ptr, char *buffer, const char *error_message)
{
  unsigned int chunk_name; // esi
  __int64 v4; // rax
  int v6; // er9
  __int64 v7; // rbx
  int v9; // edi
  unsigned int v10; // er8
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // er9
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // dl
  char v17; // dl
  char v18; // dl
  char v19; // dl
  char v20; // dl

  chunk_name = png_ptr->chunk_name;
  v4 = 0i64;
  v6 = 0;
  v7 = 0i64;
  v9 = 24;
  do
  {
    v10 = chunk_name >> v9;
    v9 -= 8;
    if ( (unsigned int)(unsigned __int8)v10 - 65 > 0x39 || (unsigned int)(unsigned __int8)v10 - 91 <= 5 )
    {
      buffer[v7] = 91;
      buffer[v7 + 1] = png_digit[((__int64)(unsigned __int8)v10 >> 4) & 0xF];
      buffer[v7 + 2] = png_digit[v10 & 0xF];
      v7 += 3i64;
      v11 = 4;
      buffer[v7] = 93;
    }
    else
    {
      buffer[v7] = v10;
      v11 = 1;
    }
    v6 += v11;
    ++v7;
  }
  while ( v9 >= 0 );
  if ( error_message )
  {
    v12 = v6;
    v13 = v6 + 1;
    buffer[v12] = 58;
    v14 = v13;
    v6 = v13 + 1;
    buffer[v14] = 32;
    v15 = v6;
    do
    {
      v16 = error_message[v4];
      if ( !v16 )
        break;
      buffer[v15] = v16;
      v17 = error_message[v4 + 1];
      if ( !v17 )
      {
        ++v6;
        break;
      }
      buffer[v15 + 1] = v17;
      v18 = error_message[v4 + 2];
      if ( !v18 )
      {
        v6 += 2;
        break;
      }
      buffer[v15 + 2] = v18;
      v19 = error_message[v4 + 3];
      if ( !v19 )
      {
        v6 += 3;
        break;
      }
      buffer[v15 + 3] = v19;
      v20 = error_message[v4 + 4];
      if ( !v20 )
      {
        v6 += 4;
        break;
      }
      buffer[v15 + 4] = v20;
      v4 += 5i64;
      v15 += 5i64;
      v6 += 5;
    }
    while ( v4 < 195 );
  }
  buffer[v6] = 0;
}

char *__fastcall png_format_number(const char *start, char *end, int format, unsigned __int64 number)
{
  int v4; // er11
  char *v5; // r10
  int v6; // edi
  int v7; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  char v10; // al

  v4 = 0;
  v5 = end - 1;
  v6 = 0;
  *(end - 1) = 0;
  v7 = 1;
  if ( end - 1 > start )
  {
    while ( 1 )
    {
      if ( !number && v4 >= v7 )
        return v5;
      if ( format == 1 )
        goto LABEL_17;
      if ( format == 2 )
        break;
      switch ( format )
      {
        case 3:
          goto LABEL_15;
        case 4:
          v7 = 2;
LABEL_15:
          --v5;
          v9 = number & 0xF;
          number >>= 4;
          v10 = digits[v9];
          goto LABEL_18;
        case 5:
          v7 = 5;
          if ( v6 || (v8 = number / 0xA, number != 10 * (number / 0xA)) )
          {
            --v5;
            v6 = 1;
            v8 = number / 0xA;
            *v5 = digits[number + -10 * (number / 0xA)];
          }
          number = v8;
          if ( ++v4 == 5 )
          {
            if ( v5 <= start )
              return v5;
            if ( v6 )
            {
              *--v5 = 46;
            }
            else if ( !v8 )
            {
              *--v5 = 48;
            }
          }
          goto LABEL_26;
      }
      number = 0i64;
LABEL_19:
      ++v4;
LABEL_26:
      if ( v5 <= start )
        return v5;
    }
    v7 = 2;
LABEL_17:
    --v5;
    v10 = digits[number + -10 * (number / 0xA)];
    number /= 0xAui64;
LABEL_18:
    *v5 = v10;
    goto LABEL_19;
  }
  return end - 1;
}

void __fastcall png_formatted_warning(const png_struct_def *png_ptr, char (*p)[32], const char *message)
{
  int v3; // edi
  unsigned __int64 v4; // rax
  char (*v6)[32]; // rsi
  const png_struct_def *v7; // rbp
  int v8; // er10
  int v9; // er9
  const char *v10; // r8
  char *v11; // r8
  __int64 v12; // rax
  void (__fastcall *warning_fn)(png_struct_def *, const char *); // r8
  _iobuf *v14; // rax
  _iobuf *v15; // rax
  char v16[192]; // [rsp+20h] [rbp-E8h] BYREF

  v3 = 0;
  v4 = 0i64;
  v6 = p;
  v7 = png_ptr;
  do
  {
    LOBYTE(v8) = *message;
    if ( !*message )
      break;
    if ( !v6 )
      goto LABEL_16;
    if ( (_BYTE)v8 != 64 )
      goto LABEL_16;
    png_ptr = (const png_struct_def *)(message + 1);
    if ( !message[1] )
      goto LABEL_16;
    v8 = SLOBYTE(png_ptr->jmp_buf_local[0].Part[0]);
    ++message;
    v9 = 0;
    if ( v8 == 49 )
      goto LABEL_11;
    (*p)[0] = 49;
    v10 = "123456789";
    do
    {
      if ( !(_BYTE)p )
        break;
      p = (char (*)[32])(unsigned int)*++v10;
      ++v9;
    }
    while ( (_DWORD)p != v8 );
    if ( v9 < 8 )
    {
LABEL_11:
      p = (char (*)[32])v6[v9];
      v11 = &(*p)[32];
      do
      {
        png_ptr = (const png_struct_def *)(*p)[0];
        if ( !(_BYTE)png_ptr )
          break;
        if ( p >= (char (*)[32])v11 )
          break;
        v16[v4] = (char)png_ptr;
        p = (char (*)[32])((char *)p + 1);
        ++v4;
      }
      while ( v4 < 0xBF );
    }
    else
    {
LABEL_16:
      v16[v4++] = v8;
    }
    ++message;
  }
  while ( v4 < 0xBF );
  if ( v4 >= 0xC0 )
  {
    _report_rangecheckfailure(png_ptr, p);
    JUMPOUT(0x14041009Bi64);
  }
  v16[v4] = 0;
  if ( !v7 )
    goto LABEL_29;
  if ( v16[0] == 35 )
  {
    v12 = 1i64;
    v3 = 1;
    while ( v16[v12] != 32 )
    {
      if ( v16[v12 + 1] == 32 )
      {
        ++v3;
        break;
      }
      v12 += 2i64;
      v3 += 2;
      if ( v12 >= 15 )
        break;
    }
  }
  warning_fn = v7->warning_fn;
  if ( warning_fn )
  {
    warning_fn((png_struct_def *)v7, &v16[v3]);
  }
  else
  {
LABEL_29:
    v14 = _acrt_iob_func(2u);
    fprintf(v14, "libpng warning: %s", &v16[v3]);
    v15 = _acrt_iob_func(2u);
    fprintf(v15, "\n");
  }
}

void __fastcall png_free_jmpbuf(png_struct_def *png_ptr)
{
  png_struct_def *jmp_buf_ptr; // rax
  png_struct_def *v2; // rbx
  png_struct_def *ptr; // [rsp+28h] [rbp-120h]
  jmp_buf Buf; // [rsp+30h] [rbp-118h] BYREF

  if ( png_ptr )
  {
    jmp_buf_ptr = (png_struct_def *)png_ptr->jmp_buf_ptr;
    v2 = png_ptr;
    ptr = jmp_buf_ptr;
    if ( jmp_buf_ptr && png_ptr->jmp_buf_size && jmp_buf_ptr != png_ptr )
    {
      v2 = png_ptr;
      if ( !setjmp(Buf) )
      {
        png_ptr->jmp_buf_ptr = (_SETJMP_FLOAT128 (*)[16])Buf;
        png_ptr->jmp_buf_size = 0i64;
        png_ptr->longjmp_fn = longjmp;
        png_free(png_ptr, ptr);
      }
    }
    v2->jmp_buf_size = 0i64;
    v2->jmp_buf_ptr = 0i64;
    v2->longjmp_fn = 0i64;
  }
}

void *__fastcall png_get_error_ptr(const png_struct_def *png_ptr)
{
  if ( png_ptr )
    return png_ptr->error_ptr;
  else
    return 0i64;
}

void __fastcall __noreturn png_longjmp(const png_struct_def *png_ptr, __int64 val)
{
  void (__fastcall *longjmp_fn)(_SETJMP_FLOAT128 *, int); // rax
  _SETJMP_FLOAT128 (*jmp_buf_ptr)[16]; // rcx

  if ( png_ptr )
  {
    longjmp_fn = png_ptr->longjmp_fn;
    if ( longjmp_fn )
    {
      jmp_buf_ptr = png_ptr->jmp_buf_ptr;
      if ( jmp_buf_ptr )
        longjmp_fn((_SETJMP_FLOAT128 *)jmp_buf_ptr, val);
    }
  }
  ExitProcess(0);
}

unsigned __int64 __fastcall png_safecat(
        char *buffer,
        unsigned __int64 bufsize,
        unsigned __int64 pos,
        const char *string)
{
  char v4; // al
  unsigned __int64 v5; // rdx
  const char *v6; // r9

  if ( buffer && pos < bufsize )
  {
    if ( string )
    {
      v4 = *string;
      if ( *string )
      {
        v5 = bufsize - 1;
        v6 = &string[-pos];
        do
        {
          if ( pos >= v5 )
            break;
          buffer[pos++] = v4;
          v4 = v6[pos];
        }
        while ( v4 );
      }
    }
    buffer[pos] = 0;
  }
  return pos;
}

void __fastcall png_set_error_fn(
        png_struct_def *png_ptr,
        void *error_ptr,
        void (__fastcall *error_fn)(png_struct_def *, const char *),
        void (__fastcall *warning_fn)(png_struct_def *, const char *))
{
  if ( png_ptr )
  {
    png_ptr->error_ptr = error_ptr;
    png_ptr->error_fn = error_fn;
    png_ptr->warning_fn = warning_fn;
  }
}

_SETJMP_FLOAT128 (*__fastcall png_set_longjmp_fn(
        png_struct_def *png_ptr,
        void (__fastcall *longjmp_fn)(_SETJMP_FLOAT128 *, int),
        unsigned __int64 jmp_buf_size))[16]
{
  png_struct_def *jmp_buf_ptr; // rcx
  _SETJMP_FLOAT128 (*v8)[16]; // rax
  unsigned __int64 v9; // rax
  void (__fastcall *error_fn)(png_struct_def *, const char *); // rax
  _iobuf *v11; // rax
  _iobuf *v12; // rax
  void (__fastcall *v13)(_SETJMP_FLOAT128 *, int); // rax
  _SETJMP_FLOAT128 (*v14)[16]; // rcx

  if ( png_ptr )
  {
    jmp_buf_ptr = (png_struct_def *)png_ptr->jmp_buf_ptr;
    if ( jmp_buf_ptr )
    {
      v9 = png_ptr->jmp_buf_size;
      if ( !v9 )
      {
        v9 = 256i64;
        if ( jmp_buf_ptr != png_ptr )
        {
          error_fn = png_ptr->error_fn;
          if ( error_fn )
            error_fn(png_ptr, "Libpng jmp_buf still allocated");
          v11 = _acrt_iob_func(2u);
          fprintf(v11, "libpng error: %s", "Libpng jmp_buf still allocated");
          v12 = _acrt_iob_func(2u);
          fprintf(v12, "\n");
          v13 = png_ptr->longjmp_fn;
          if ( v13 )
          {
            v14 = png_ptr->jmp_buf_ptr;
            if ( v14 )
              v13((_SETJMP_FLOAT128 *)v14, 1);
          }
          ExitProcess(0);
        }
      }
      if ( v9 == jmp_buf_size )
        goto LABEL_5;
      png_warning(png_ptr, "Application jmp_buf size changed");
    }
    else
    {
      png_ptr->jmp_buf_size = 0i64;
      if ( jmp_buf_size <= 0x100 )
      {
        png_ptr->jmp_buf_ptr = (_SETJMP_FLOAT128 (*)[16])png_ptr;
LABEL_5:
        png_ptr->longjmp_fn = longjmp_fn;
        return png_ptr->jmp_buf_ptr;
      }
      v8 = (_SETJMP_FLOAT128 (*)[16])png_malloc_warn(png_ptr, jmp_buf_size);
      png_ptr->jmp_buf_ptr = v8;
      if ( v8 )
      {
        png_ptr->jmp_buf_size = jmp_buf_size;
        goto LABEL_5;
      }
    }
  }
  return 0i64;
}

void __fastcall png_warning(const png_struct_def *png_ptr, const char *warning_message)
{
  int v2; // er8
  __int64 v3; // rax
  void (__fastcall *warning_fn)(png_struct_def *, const char *); // rax
  const char *v5; // rbx
  _iobuf *v6; // rax
  _iobuf *v7; // rax

  v2 = 0;
  if ( !png_ptr )
    goto LABEL_11;
  if ( *warning_message == 35 )
  {
    v2 = 1;
    v3 = 1i64;
    while ( warning_message[v3] != 32 )
    {
      if ( warning_message[v3 + 1] == 32 )
      {
        ++v2;
        break;
      }
      v3 += 2i64;
      v2 += 2;
      if ( v3 >= 15 )
        break;
    }
  }
  warning_fn = png_ptr->warning_fn;
  if ( warning_fn )
  {
    warning_fn((png_struct_def *)png_ptr, &warning_message[v2]);
  }
  else
  {
LABEL_11:
    v5 = &warning_message[v2];
    v6 = _acrt_iob_func(2u);
    fprintf(v6, "libpng warning: %s", v5);
    v7 = _acrt_iob_func(2u);
    fprintf(v7, "\n");
  }
}

void __fastcall png_warning_parameter(char (*p)[32], int number, const char *string)
{
  int v3; // eax
  unsigned __int64 v4; // rdx
  char *v5; // r9
  signed __int64 v6; // rcx

  v3 = number - 1;
  if ( (unsigned int)(number - 1) <= 7 )
  {
    v4 = 0i64;
    v5 = &(*p)[32 * v3];
    if ( v5 )
    {
      if ( string && *string )
      {
        v6 = v5 - string;
        do
        {
          if ( v4 >= 0x1F )
            break;
          ++v4;
          string[v6] = *string;
          ++string;
        }
        while ( *string );
      }
      v5[v4] = 0;
    }
  }
}

void __fastcall png_warning_parameter_signed(char (*p)[32], int number, int format, int value)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // r9
  char *v8; // rax
  unsigned __int64 v9; // rdx
  char *v10; // r9
  signed __int64 v11; // r8
  char start[24]; // [rsp+20h] [rbp-38h] BYREF
  char end[8]; // [rsp+38h] [rbp-20h] BYREF

  v4 = value;
  v7 = v4;
  if ( (v4 & 0x80000000) != 0i64 )
    v7 = -(__int64)v4;
  v8 = png_format_number(start, end, format, v7);
  if ( (v4 & 0x80000000) != 0i64 && v8 > start )
    *--v8 = 45;
  if ( (unsigned int)(number - 1) <= 7 )
  {
    v9 = 0i64;
    v10 = &(*p)[32 * number - 32];
    if ( v10 )
    {
      if ( v8 && *v8 )
      {
        v11 = v10 - v8;
        do
        {
          if ( v9 >= 0x1F )
            break;
          ++v9;
          v8[v11] = *v8;
          ++v8;
        }
        while ( *v8 );
      }
      v10[v9] = 0;
    }
  }
}

