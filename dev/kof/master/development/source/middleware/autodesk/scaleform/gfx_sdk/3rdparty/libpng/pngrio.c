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
void png_read_data(png_struct_def * png_ptr, unsigned char * data, unsigned long long length); // 0x140414D90
void png_default_read_data(png_struct_def * png_ptr, unsigned char * data, unsigned long long length); // 0x140414D40
void png_set_read_fn(png_struct_def * png_ptr, void * io_ptr, void(*read_data_fn)(png_struct_def *, unsigned char *, unsigned long long)); // 0x140414DC0void __fastcall png_default_read_data(png_struct_def *png_ptr, unsigned __int8 *data, unsigned __int64 length)
{
  if ( png_ptr )
  {
    if ( fread(data, 1ui64, length, (_iobuf *)png_ptr->io_ptr) != length )
      png_error(png_ptr, "Read Error");
  }
}

void __fastcall png_read_data(png_struct_def *png_ptr, unsigned __int8 *data, unsigned __int64 length)
{
  void (__fastcall *read_data_fn)(png_struct_def *, unsigned __int8 *, unsigned __int64); // rax

  read_data_fn = png_ptr->read_data_fn;
  if ( !read_data_fn )
    png_error(png_ptr, "Call to NULL read function");
  read_data_fn(png_ptr, data, length);
}

void __fastcall png_set_read_fn(
        png_struct_def *png_ptr,
        void *io_ptr,
        void (__fastcall *read_data_fn)(png_struct_def *, unsigned __int8 *, unsigned __int64))
{
  void (__fastcall *v3)(png_struct_def *, unsigned __int8 *, unsigned __int64); // rax
  bool v5; // zf

  if ( png_ptr )
  {
    png_ptr->io_ptr = io_ptr;
    v3 = png_default_read_data;
    if ( read_data_fn )
      v3 = read_data_fn;
    v5 = png_ptr->write_data_fn == 0i64;
    png_ptr->read_data_fn = v3;
    if ( !v5 )
    {
      png_ptr->write_data_fn = 0i64;
      png_warning(png_ptr, "Can't set both read_data_fn and write_data_fn in the same structure");
    }
    png_ptr->output_flush_fn = 0i64;
  }
}

