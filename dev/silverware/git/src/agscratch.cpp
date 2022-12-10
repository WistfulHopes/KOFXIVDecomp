#include "dev/silverware/git/sdk/agscratch.h"

thread_local unsigned char * AgScratch::m_buffer; // 0x140B3A020
thread_local unsigned long AgScratch::m_index; // 0x140B3A018
thread_local unsigned long AgScratch::m_capacity; // 0x140B3A01C
long AgScratch::init(unsigned long size); // 0x14066B510//decompilation failure at 140B3A020!
//decompilation failure at 140B3A018!
//decompilation failure at 140B3A01C!
_BOOL8 __fastcall AgScratch::init(unsigned int size)
{
  __int64 v1; // rbx
  void *v2; // rax

  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 28) = size;
  v2 = operator new[](size);
  *(_QWORD *)(v1 + 32) = v2;
  return v2 != 0i64;
}

