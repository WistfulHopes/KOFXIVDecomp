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
void png_write_data(png_struct_def * png_ptr, const unsigned char * data, unsigned long long length); // 0x140414D10
void png_default_write_data(png_struct_def * png_ptr, unsigned char * data, unsigned long long length); // 0x140414C50
void png_flush(png_struct_def * png_ptr); // 0x140414CA0
void png_default_flush(png_struct_def * png_ptr); // 0x140414C30
void png_set_write_fn(png_struct_def * png_ptr, void * io_ptr, void(*write_data_fn)(png_struct_def *, unsigned char *, unsigned long long), void(*output_flush_fn)(png_struct_def *)); // 0x140414CB0void __fastcall png_default_flush(png_struct_def *png_ptr)
{
  if ( png_ptr )
    fflush((_iobuf *)png_ptr->io_ptr);
}

void __fastcall png_default_write_data(png_struct_def *png_ptr, unsigned __int8 *data, unsigned __int64 length)
{
  if ( png_ptr )
  {
    if ( fwrite(data, 1ui64, length, (_iobuf *)png_ptr->io_ptr) != length )
      png_error(png_ptr, "Write Error");
  }
}

void __fastcall png_flush(png_struct_def *png_ptr)
{
  void (*output_flush_fn)(void); // rax

  output_flush_fn = (void (*)(void))png_ptr->output_flush_fn;
  if ( output_flush_fn )
    output_flush_fn();
}

void __fastcall png_set_write_fn(
        png_struct_def *png_ptr,
        void *io_ptr,
        void (__fastcall *write_data_fn)(png_struct_def *, unsigned __int8 *, unsigned __int64),
        void (__fastcall *output_flush_fn)(png_struct_def *))
{
  void (__fastcall *v4)(png_struct_def *, unsigned __int8 *, unsigned __int64); // rax
  void (__fastcall *v5)(png_struct_def *); // rax
  bool v6; // zf

  if ( png_ptr )
  {
    png_ptr->io_ptr = io_ptr;
    v4 = png_default_write_data;
    if ( write_data_fn )
      v4 = write_data_fn;
    png_ptr->write_data_fn = v4;
    v5 = png_default_flush;
    if ( output_flush_fn )
      v5 = output_flush_fn;
    v6 = png_ptr->read_data_fn == 0i64;
    png_ptr->output_flush_fn = v5;
    if ( !v6 )
    {
      png_ptr->read_data_fn = 0i64;
      png_warning(png_ptr, "Can't set both read_data_fn and write_data_fn in the same structure");
    }
  }
}

void __fastcall png_write_data(png_struct_def *png_ptr, const unsigned __int8 *data, unsigned __int64 length)
{
  void (__fastcall *write_data_fn)(png_struct_def *, unsigned __int8 *, unsigned __int64); // rax

  write_data_fn = png_ptr->write_data_fn;
  if ( !write_data_fn )
    png_error(png_ptr, "Call to NULL write function");
  write_data_fn(png_ptr, (unsigned __int8 *)data, length);
}

