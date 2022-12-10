#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"

const char * cJSON_GetErrorPtr(); // 0x140669910
char * cJSON_strdup(const char * str); // 0x140669AA0
void cJSON_Delete(cJSON * c); // 0x140669890
const char * parse_number(cJSON * item, const char * num); // 0x140669E90
struct printbuffer
{
	char * buffer; // 0x0
	long length; // 0x8
	long offset; // 0xC
};
const char * ep; // 0x140A8FEC8
void *(*cJSON_malloc)(unsigned long long); // 0x140A293B8
void(*cJSON_free)(void *); // 0x140A293C0
char * ensure(printbuffer * p, long needed); // 0x140669B10
const unsigned char firstByteMark[7]; // 0x140867688
long update(printbuffer * p); // 0x14066B4E0
char * print_number(cJSON * item, printbuffer * p); // 0x14066A920
unsigned long parse_hex4(const char * str); // 0x140669DA0
const char * parse_string(cJSON * item, const char * str); // 0x14066A260
char * print_string_ptr(const char * str, printbuffer * p); // 0x14066B070
cJSON * cJSON_Parse(const char * value); // 0x1406699F0
char * cJSON_Print(cJSON * item); // 0x140669A90
const char * parse_value(cJSON * item, const char * value); // 0x14066A500
char * print_value(cJSON * item, long depth, long fmt, printbuffer * p); // 0x14066B300
const char * parse_array(cJSON * item, const char * value); // 0x140669BF0
char * print_array(cJSON * item, long depth, long fmt, printbuffer * p); // 0x14066A630
const char * parse_object(cJSON * item, const char * value); // 0x140669FF0
char * print_object(cJSON * item, long depth, long fmt, printbuffer * p); // 0x14066AAF0
void cJSON_AddItemToObject(cJSON * object, const char * string, cJSON * item); // 0x140669760
cJSON * cJSON_CreateNumber(double num); // 0x1406697E0
cJSON * cJSON_CreateObject(); // 0x140669840
void cJSON_Minify(char * json); // 0x140669920//decompilation failure at 140A8FEC8!
//decompilation failure at 140A293B8!
//decompilation failure at 140A293C0!
//decompilation failure at 140867688!
void __fastcall cJSON_AddItemToObject(cJSON *object, const char *string, cJSON *item)
{
  char *v5; // rcx
  cJSON *child; // rax

  if ( item )
  {
    v5 = item->string;
    if ( v5 )
      cJSON_free(v5);
    item->string = cJSON_strdup(string);
    child = object->child;
    if ( child )
    {
      while ( child->next )
        child = child->next;
      child->next = item;
      item->prev = child;
    }
    else
    {
      object->child = item;
    }
  }
}

cJSON *__fastcall cJSON_CreateNumber(long double num)
{
  cJSON *result; // rax

  result = (cJSON *)cJSON_malloc(0x40ui64);
  if ( result )
  {
    result->next = 0i64;
    result->prev = 0i64;
    result->child = 0i64;
    *(_QWORD *)&result->type = 0i64;
    result->valuestring = 0i64;
    *(_QWORD *)&result->valueint = 0i64;
    result->string = 0i64;
    result->type = 3;
    result->valuedouble = num;
    result->valueint = (int)num;
  }
  return result;
}

cJSON *__fastcall cJSON_CreateObject()
{
  cJSON *result; // rax

  result = (cJSON *)cJSON_malloc(0x40ui64);
  if ( result )
  {
    result->next = 0i64;
    result->prev = 0i64;
    result->child = 0i64;
    *(_QWORD *)&result->type = 0i64;
    result->valuestring = 0i64;
    *(_QWORD *)&result->valueint = 0i64;
    result->valuedouble = 0.0;
    result->string = 0i64;
    result->type = 6;
  }
  return result;
}

void __fastcall cJSON_Delete(cJSON *c)
{
  cJSON *v1; // rbx
  cJSON *next; // rdi
  cJSON *child; // rcx
  char *valuestring; // rcx
  char *string; // rcx

  if ( c )
  {
    v1 = c;
    do
    {
      next = v1->next;
      if ( (v1->type & 0x100) == 0 )
      {
        child = v1->child;
        if ( child )
          cJSON_Delete(child);
        if ( (v1->type & 0x100) == 0 )
        {
          valuestring = v1->valuestring;
          if ( valuestring )
            cJSON_free(valuestring);
        }
      }
      if ( (v1->type & 0x200) == 0 )
      {
        string = v1->string;
        if ( string )
          cJSON_free(string);
      }
      cJSON_free(v1);
      v1 = next;
    }
    while ( next );
  }
}

const char *__fastcall cJSON_GetErrorPtr()
{
  return ep;
}

void __fastcall cJSON_Minify(char *json)
{
  char v1; // al
  char *v2; // rdx
  char v3; // r8
  char i; // al
  char v5; // al

  v1 = *json;
  v2 = json;
  if ( *json )
  {
    while ( 1 )
    {
      if ( v1 != 32 && v1 != 9 && v1 != 13 && v1 != 10 )
      {
        if ( v1 == 47 )
        {
          v3 = json[1];
          if ( v3 == 47 )
          {
            while ( v1 != 10 )
            {
              v1 = *++json;
              if ( !v1 )
                goto LABEL_26;
            }
            goto LABEL_25;
          }
          if ( v3 == 42 )
          {
            do
            {
              if ( v1 == 42 && json[1] == 47 )
                break;
              v1 = *++json;
            }
            while ( v1 );
            json += 2;
            goto LABEL_25;
          }
        }
        if ( v1 == 34 )
        {
          ++json;
          *v2++ = 34;
          for ( i = *json; *json; i = *json )
          {
            if ( i == 34 )
              break;
            if ( i == 92 )
            {
              *v2++ = 92;
              ++json;
            }
            v5 = *json++;
            *v2++ = v5;
          }
          v1 = *json;
        }
        *v2++ = v1;
      }
      ++json;
LABEL_25:
      v1 = *json;
      if ( !*json )
      {
LABEL_26:
        *v2 = 0;
        return;
      }
    }
  }
  *json = 0;
}

cJSON *__fastcall cJSON_Parse(const char *value)
{
  cJSON *v2; // rdi

  v2 = (cJSON *)cJSON_malloc(0x40ui64);
  if ( v2 )
  {
    v2->next = 0i64;
    v2->prev = 0i64;
    v2->child = 0i64;
    *(_QWORD *)&v2->type = 0i64;
    v2->valuestring = 0i64;
    *(_QWORD *)&v2->valueint = 0i64;
    v2->valuedouble = 0.0;
    v2->string = 0i64;
  }
  ep = 0i64;
  if ( !v2 )
    return 0i64;
  for ( ; value; ++value )
  {
    if ( !*value )
      break;
    if ( *value > 0x20u )
      break;
  }
  if ( !parse_value(v2, value) )
  {
    cJSON_Delete(v2);
    return 0i64;
  }
  return v2;
}

char *__fastcall cJSON_Print(cJSON *item)
{
  return print_value(item, 0, 1, 0i64);
}

char *__fastcall cJSON_strdup(const char *str)
{
  __int64 v2; // rbx
  char *result; // rax
  char *v5; // rsi

  v2 = -1i64;
  while ( str[++v2] != 0 )
    ;
  result = (char *)cJSON_malloc(v2 + 1);
  v5 = result;
  if ( result )
  {
    memmove(result, str, v2 + 1);
    return v5;
  }
  return result;
}

char *__fastcall ensure(printbuffer *p, int needed)
{
  char *buffer; // rcx
  __int64 offset; // rax
  int v5; // edx
  char *result; // rax
  int v7; // ecx
  int v8; // edi
  char *v9; // rax
  char *v10; // rsi

  if ( !p )
    return 0i64;
  buffer = p->buffer;
  if ( !buffer )
    return 0i64;
  offset = p->offset;
  v5 = offset + needed;
  if ( v5 <= p->length )
    return &buffer[offset];
  v7 = ((((v5 - 1) >> 1) | (v5 - 1)) >> 2) | ((v5 - 1) >> 1) | (v5 - 1);
  v8 = ((((v7 >> 4) | v7) >> 8) | (v7 >> 4) | v7 | (((((v7 >> 4) | v7) >> 8) | (v7 >> 4) | v7) >> 16)) + 1;
  v9 = (char *)cJSON_malloc(v8);
  v10 = v9;
  if ( v9 )
  {
    memmove(v9, p->buffer, p->length);
    cJSON_free(p->buffer);
    result = &v10[p->offset];
    p->length = v8;
    p->buffer = v10;
  }
  else
  {
    cJSON_free(p->buffer);
    result = 0i64;
    p->length = 0;
    p->buffer = 0i64;
  }
  return result;
}

const char *__fastcall parse_array(cJSON *item, const char *value)
{
  const char *v4; // rbx
  cJSON *v5; // rdi
  const char *i; // rbx
  cJSON *v7; // rcx
  const char *v8; // rdx

  if ( *value != 91 )
  {
    ep = value;
    return 0i64;
  }
  v4 = value + 1;
  item->type = 5;
  if ( value != (const char *)-1i64 )
  {
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 > 0x20u )
        break;
      ++v4;
    }
    while ( v4 );
  }
  if ( *v4 == 93 )
    return v4 + 1;
  v5 = (cJSON *)cJSON_malloc(0x40ui64);
  if ( v5 )
  {
    v5->next = 0i64;
    v5->prev = 0i64;
    v5->child = 0i64;
    *(_QWORD *)&v5->type = 0i64;
    v5->valuestring = 0i64;
    *(_QWORD *)&v5->valueint = 0i64;
    v5->valuedouble = 0.0;
    v5->string = 0i64;
  }
  item->child = v5;
  if ( v5 )
  {
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 > 0x20u )
        break;
      ++v4;
    }
    while ( v4 );
    for ( i = parse_value(v5, v4); i; ++i )
    {
      if ( !*i )
        break;
      if ( *i > 0x20u )
        break;
    }
    if ( i )
    {
      if ( *i == 44 )
      {
        while ( 1 )
        {
          v7 = (cJSON *)cJSON_malloc(0x40ui64);
          if ( !v7 )
            break;
          v8 = i + 1;
          v7->next = 0i64;
          v7->child = 0i64;
          *(_QWORD *)&v7->type = 0i64;
          v7->valuestring = 0i64;
          *(_QWORD *)&v7->valueint = 0i64;
          v7->valuedouble = 0.0;
          v7->string = 0i64;
          v5->next = v7;
          v7->prev = v5;
          v5 = v7;
          if ( i != (const char *)-1i64 )
          {
            do
            {
              if ( !*v8 )
                break;
              if ( *v8 > 0x20u )
                break;
              ++v8;
            }
            while ( v8 );
          }
          for ( i = parse_value(v7, v8); i; ++i )
          {
            if ( !*i )
              break;
            if ( *i > 0x20u )
              break;
          }
          if ( !i )
            break;
          if ( *i != 44 )
            goto LABEL_32;
        }
      }
      else
      {
LABEL_32:
        if ( *i == 93 )
          return i + 1;
        ep = i;
      }
    }
  }
  return 0i64;
}

__int64 __fastcall parse_hex4(const char *str)
{
  char v1; // dl
  int v2; // edx
  char v3; // r8
  int v4; // edx
  int v5; // er8
  int v6; // er8
  char v7; // dl
  int v8; // er8
  int v9; // er8
  int v10; // eax
  char v11; // dl
  int v12; // er8

  v1 = *str;
  if ( (unsigned __int8)(*str - 48) > 9u )
  {
    if ( (unsigned __int8)(v1 - 65) > 5u )
    {
      if ( (unsigned __int8)(v1 - 97) > 5u )
        return 0i64;
      v2 = v1 - 87;
    }
    else
    {
      v2 = v1 - 55;
    }
  }
  else
  {
    v2 = v1 - 48;
  }
  v3 = str[1];
  v4 = 16 * v2;
  if ( (unsigned __int8)(v3 - 48) > 9u )
  {
    if ( (unsigned __int8)(v3 - 65) > 5u )
    {
      if ( (unsigned __int8)(v3 - 97) > 5u )
        return 0i64;
      v5 = v3 - 87;
    }
    else
    {
      v5 = v3 - 55;
    }
  }
  else
  {
    v5 = v3 - 48;
  }
  v6 = v4 + v5;
  v7 = str[2];
  v8 = 16 * v6;
  if ( (unsigned __int8)(v7 - 48) > 9u )
  {
    if ( (unsigned __int8)(v7 - 65) > 5u )
    {
      if ( (unsigned __int8)(v7 - 97) > 5u )
        return 0i64;
      v9 = v8 - 87;
    }
    else
    {
      v9 = v8 - 55;
    }
  }
  else
  {
    v9 = v8 - 48;
  }
  v10 = v7;
  v11 = str[3];
  v12 = 16 * (v10 + v9);
  if ( (unsigned __int8)(v11 - 48) <= 9u )
    return (unsigned int)(v12 + v11 - 48);
  if ( (unsigned __int8)(v11 - 65) <= 5u )
    return (unsigned int)(v12 + v11 - 55);
  if ( (unsigned __int8)(v11 - 97) <= 5u )
    return (unsigned int)(v12 + v11 - 87);
  return 0i64;
}

const char *__fastcall parse_number(cJSON *item, const char *num)
{
  int v2; // er8
  double v4; // xmm6_8
  double v5; // xmm3_8
  double v6; // xmm7_8
  int v7; // er9
  const char *v8; // rax
  const char *v9; // rbx
  char v10; // al
  __m128i v11; // xmm0
  char v12; // al
  __m128i v13; // xmm0
  char v14; // al
  char i; // al
  double v16; // xmm0_8
  const char *result; // rax
  long double v18; // xmm0_8

  v2 = 0;
  v4 = 0.0;
  v5 = 0.0;
  v6 = DOUBLE_1_0;
  v7 = 1;
  if ( *num == 45 )
  {
    v6 = DOUBLE_N1_0;
    ++num;
  }
  v8 = num + 1;
  if ( *num != 48 )
    v8 = num;
  v9 = v8;
  if ( *v8 >= 49 && *v8 <= 57 )
  {
    v10 = *v8;
    do
    {
      ++v9;
      v11 = _mm_cvtsi32_si128(v10 - 48);
      v10 = *v9;
      v4 = _mm_cvtepi32_pd(v11).m128d_f64[0] + v4 * 10.0;
    }
    while ( *v9 >= 48 && v10 <= 57 );
  }
  if ( *v9 == 46 && (unsigned __int8)(v9[1] - 48) <= 9u )
  {
    v12 = *++v9;
    do
    {
      v5 = v5 + -1.0;
      ++v9;
      v13 = _mm_cvtsi32_si128(v12 - 48);
      v12 = *v9;
      v4 = _mm_cvtepi32_pd(v13).m128d_f64[0] + v4 * 10.0;
    }
    while ( *v9 >= 48 && v12 <= 57 );
  }
  if ( ((*v9 - 69) & 0xDF) == 0 )
  {
    v14 = *++v9;
    if ( v14 != 43 )
    {
      if ( v14 != 45 )
        goto LABEL_20;
      v7 = -1;
    }
    ++v9;
LABEL_20:
    for ( i = *v9; *v9 >= 48; i = *v9 )
    {
      if ( i > 57 )
        break;
      ++v9;
      v2 = i + 2 * (5 * v2 - 24);
    }
  }
  v16 = pow(10.0, (double)(v2 * v7) + v5);
  result = v9;
  item->type = 3;
  v18 = v16 * (v6 * v4);
  item->valuedouble = v18;
  item->valueint = (int)v18;
  return result;
}

const char *__fastcall parse_object(cJSON *item, const char *value)
{
  const char *v4; // rbx
  cJSON *v5; // rsi
  const char *v6; // rcx
  char *valuestring; // rax
  const char *v8; // rdx
  const char *i; // rbx
  cJSON *v10; // rdi
  const char *v11; // rdx
  const char *v12; // rdx

  if ( *value != 123 )
  {
    ep = value;
    return 0i64;
  }
  v4 = value + 1;
  item->type = 6;
  if ( value != (const char *)-1i64 )
  {
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 > 0x20u )
        break;
      ++v4;
    }
    while ( v4 );
  }
  if ( *v4 == 125 )
    return v4 + 1;
  v5 = (cJSON *)cJSON_malloc(0x40ui64);
  if ( v5 )
  {
    v5->next = 0i64;
    v5->prev = 0i64;
    v5->child = 0i64;
    *(_QWORD *)&v5->type = 0i64;
    v5->valuestring = 0i64;
    *(_QWORD *)&v5->valueint = 0i64;
    v5->valuedouble = 0.0;
    v5->string = 0i64;
  }
  item->child = v5;
  if ( !v5 )
    return 0i64;
  do
  {
    if ( !*v4 )
      break;
    if ( *v4 > 0x20u )
      break;
    ++v4;
  }
  while ( v4 );
  v6 = parse_string(v5, v4);
  if ( !v6 )
    return 0i64;
  while ( *v6 && *v6 <= 0x20u )
  {
    if ( !++v6 )
      return 0i64;
  }
  valuestring = v5->valuestring;
  v5->valuestring = 0i64;
  v5->string = valuestring;
  if ( *v6 != 58 )
  {
LABEL_54:
    ep = v6;
    return 0i64;
  }
  v8 = v6 + 1;
  if ( v6 != (const char *)-1i64 )
  {
    do
    {
      if ( !*v8 )
        break;
      if ( *v8 > 0x20u )
        break;
      ++v8;
    }
    while ( v8 );
  }
  for ( i = parse_value(v5, v8); i; ++i )
  {
    if ( !*i )
      break;
    if ( *i > 0x20u )
      break;
  }
  if ( !i )
    return 0i64;
  while ( *i == 44 )
  {
    v10 = (cJSON *)cJSON_malloc(0x40ui64);
    if ( !v10 )
      return 0i64;
    v11 = i + 1;
    v10->next = 0i64;
    v10->child = 0i64;
    *(_QWORD *)&v10->type = 0i64;
    v10->valuestring = 0i64;
    *(_QWORD *)&v10->valueint = 0i64;
    v10->valuedouble = 0.0;
    v10->string = 0i64;
    v5->next = v10;
    v10->prev = v5;
    v5 = v10;
    if ( i != (const char *)-1i64 )
    {
      do
      {
        if ( !*v11 )
          break;
        if ( *v11 > 0x20u )
          break;
        ++v11;
      }
      while ( v11 );
    }
    v6 = parse_string(v10, v11);
    if ( !v6 )
      return 0i64;
    while ( *v6 && *v6 <= 0x20u )
    {
      if ( !++v6 )
        return 0i64;
    }
    v10->string = v10->valuestring;
    v10->valuestring = 0i64;
    if ( *v6 != 58 )
      goto LABEL_54;
    v12 = v6 + 1;
    if ( v6 != (const char *)-1i64 )
    {
      do
      {
        if ( !*v12 )
          break;
        if ( *v12 > 0x20u )
          break;
        ++v12;
      }
      while ( v12 );
    }
    for ( i = parse_value(v10, v12); i; ++i )
    {
      if ( !*i )
        break;
      if ( *i > 0x20u )
        break;
    }
    if ( !i )
      return 0i64;
  }
  if ( *i != 125 )
  {
    ep = i;
    return 0i64;
  }
  return i + 1;
}

const char *__fastcall parse_string(cJSON *item, const char *str)
{
  int v2; // er9
  const char *v3; // rbx
  const char *v5; // r8
  const char *result; // rax
  const char *v7; // rax
  char *v8; // rax
  char *v9; // r11
  char *i; // r9
  char v11; // al
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // er10
  int v15; // eax
  __int16 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v19; // r9
  char v20; // al
  char v21; // al
  char v22; // al
  char *v23; // r9
  bool v24; // zf

  v2 = 0;
  v3 = str + 1;
  v5 = str + 1;
  if ( *str != 34 )
  {
    ep = str;
    return 0i64;
  }
  if ( *v3 != 34 )
  {
    do
    {
      if ( !*v5 )
        break;
      if ( !++v2 )
        break;
      v7 = v5 + 1;
      if ( *v5 != 92 )
        v7 = v5;
      v5 = v7 + 1;
    }
    while ( v7[1] != 34 );
  }
  v8 = (char *)cJSON_malloc(v2 + 1);
  v9 = v8;
  if ( !v8 )
    return 0i64;
  for ( i = v8; *v3 != 34; ++v3 )
  {
    v11 = *v3;
    if ( !*v3 )
      break;
    if ( v11 == 92 )
    {
      v12 = *++v3;
      switch ( v12 )
      {
        case 'b':
          *i = 8;
          goto LABEL_43;
        case 'f':
          *i = 12;
          goto LABEL_43;
        case 'n':
          *i = 10;
          goto LABEL_43;
        case 'r':
          *i = 13;
          goto LABEL_43;
        case 't':
          *i = 9;
          goto LABEL_43;
        case 'u':
          v13 = parse_hex4(v3 + 1);
          v3 += 4;
          v14 = v13;
          if ( v13 - 1 > 0xDBFE && v13 < 0xE000 )
            continue;
          if ( v13 - 55296 > 0x3FF )
            goto LABEL_28;
          if ( v3[1] != 92 )
            continue;
          if ( v3[2] != 117 )
            continue;
          v15 = parse_hex4(v3 + 3);
          v3 += 6;
          if ( (unsigned int)(v15 - 56320) > 0x3FF )
            continue;
          v14 = (v15 & 0x3FF | ((v16 & 0x3FF) << 10)) + 0x10000;
LABEL_28:
          LODWORD(v17) = 4;
          v18 = 4i64;
          if ( v14 >= 0x80 )
          {
            if ( v14 >= 0x800 )
            {
              if ( v14 >= 0x10000 )
                goto LABEL_35;
              v17 = 3i64;
            }
            else
            {
              v17 = 2i64;
            }
          }
          else
          {
            v17 = 1i64;
          }
          v18 = v17;
LABEL_35:
          v19 = &i[v18];
          if ( (_DWORD)v17 != 1 )
          {
            if ( (_DWORD)v17 != 2 )
            {
              if ( (_DWORD)v17 != 3 )
              {
                --v19;
                v20 = v14 & 0x3F | 0x80;
                v14 >>= 6;
                *v19 = v20;
              }
              --v19;
              v21 = v14 & 0x3F | 0x80;
              v14 >>= 6;
              *v19 = v21;
            }
            --v19;
            v22 = v14 & 0x3F | 0x80;
            v14 >>= 6;
            *v19 = v22;
          }
          v23 = v19 - 1;
          *v23 = v14 | firstByteMark[v18];
          i = &v23[(unsigned int)v17];
          break;
        default:
          *i = v12;
          goto LABEL_43;
      }
    }
    else
    {
      *i = v11;
LABEL_43:
      ++i;
    }
  }
  *i = 0;
  result = v3 + 1;
  v24 = *v3 == 34;
  item->valuestring = v9;
  if ( !v24 )
    result = v3;
  item->type = 4;
  return result;
}

const char *__fastcall parse_value(cJSON *item, const char *value)
{
  const char *result; // rax
  char v5; // cl

  if ( !value )
    return 0i64;
  if ( !strncmp(value, "null", 4ui64) )
  {
    item->type = 2;
    return value + 4;
  }
  if ( !strncmp(value, "false", 5ui64) )
  {
    item->type = 0;
    return value + 5;
  }
  if ( !strncmp(value, "true", 4ui64) )
  {
    item->type = 1;
    result = value + 4;
    item->valueint = 1;
    return result;
  }
  v5 = *value;
  if ( *value == 34 )
    return parse_string(item, value);
  if ( v5 != 45 && (unsigned __int8)(v5 - 48) > 9u )
  {
    if ( v5 == 91 )
      return parse_array(item, value);
    if ( v5 == 123 )
      return parse_object(item, value);
    ep = value;
    return 0i64;
  }
  return parse_number(item, value);
}

char *__fastcall print_array(cJSON *item, int depth, int fmt, printbuffer *p)
{
  cJSON *child; // rax
  __int64 v5; // rsi
  int v10; // er14
  int v11; // edi
  __int64 offset; // r12
  char *v13; // rax
  cJSON *i; // rdi
  char *v15; // rax
  _BYTE *v16; // rax
  char *v17; // rax
  char *result; // rax
  __int64 v19; // r13
  char **v20; // rax
  char **v21; // r12
  cJSON *v22; // rbx
  char **v23; // rbp
  char *v24; // rax
  __int64 v25; // rcx
  char *v26; // rax
  char *v27; // rcx
  _BYTE *v28; // rdi
  __int64 v29; // rbp
  int v30; // er14
  char *v31; // rdx
  size_t v32; // rbx
  char *v33; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+70h] [rbp+8h]

  child = item->child;
  v5 = 0i64;
  v33 = 0i64;
  v34 = 5;
  v10 = 0;
  v11 = 0;
  if ( !child )
    goto LABEL_47;
  do
  {
    child = child->next;
    ++v10;
  }
  while ( child );
  if ( !v10 )
  {
LABEL_47:
    if ( p )
      result = ensure(p, 3);
    else
      result = (char *)cJSON_malloc(3ui64);
    if ( result )
      strcpy(result, "[]");
    return result;
  }
  if ( p )
  {
    offset = p->offset;
    v13 = ensure(p, 1);
    if ( v13 )
    {
      *v13 = 91;
      ++p->offset;
      for ( i = item->child; i; i = i->next )
      {
        print_value(i, depth + 1, fmt, p);
        p->offset = update(p);
        if ( i->next )
        {
          v15 = ensure(p, (unsigned int)(fmt != 0) + 2);
          if ( !v15 )
            return 0i64;
          *v15 = 44;
          v16 = v15 + 1;
          if ( fmt )
            *v16++ = 32;
          *v16 = 0;
          p->offset += (fmt != 0) + 1;
        }
      }
      v17 = ensure(p, 2);
      if ( v17 )
      {
        *(_WORD *)v17 = 93;
        return &p->buffer[offset];
      }
    }
    return 0i64;
  }
  v19 = v10;
  v20 = (char **)cJSON_malloc(8i64 * v10);
  v21 = v20;
  if ( !v20 )
    return 0i64;
  memset(v20, 0, 8i64 * v10);
  v22 = item->child;
  if ( v22 )
  {
    v23 = v21;
    while ( !v11 )
    {
      v24 = print_value(v22, depth + 1, fmt, 0i64);
      *v23++ = v24;
      if ( v24 )
      {
        v25 = -1i64;
        do
          ++v25;
        while ( v24[v25] );
        v34 += v25 + (fmt != 0) + 2;
      }
      else
      {
        v11 = 1;
      }
      v22 = v22->next;
      if ( !v22 )
      {
        if ( !v11 )
          goto LABEL_26;
        break;
      }
    }
    v26 = 0i64;
    goto LABEL_29;
  }
LABEL_26:
  v26 = (char *)cJSON_malloc(v34);
  v33 = v26;
  if ( !v26 )
LABEL_29:
    v11 = 1;
  if ( v11 )
  {
    if ( v10 > 0 )
    {
      do
      {
        v27 = v21[v5];
        if ( v27 )
          cJSON_free(v27);
        ++v5;
      }
      while ( v5 < v10 );
    }
    cJSON_free(v21);
    return 0i64;
  }
  *v26 = 91;
  v28 = v26 + 1;
  v26[1] = 0;
  v29 = 0i64;
  if ( v10 > 0 )
  {
    v30 = v10 - 1;
    do
    {
      v31 = v21[v29];
      v32 = -1i64;
      do
        ++v32;
      while ( v31[v32] );
      memmove(v28, v31, v32);
      v28 += v32;
      if ( (_DWORD)v5 != v30 )
      {
        *v28++ = 44;
        if ( fmt )
          *v28++ = 32;
        *v28 = 0;
      }
      cJSON_free(v21[v29]);
      LODWORD(v5) = v5 + 1;
      ++v29;
    }
    while ( v29 < v19 );
  }
  cJSON_free(v21);
  result = v33;
  *(_WORD *)v28 = 93;
  return result;
}

char *__fastcall print_number(cJSON *item, printbuffer *p)
{
  __m128d v2; // xmm6
  char *result; // rax
  char *v5; // rax
  char *v6; // rbx
  char *v7; // rax
  int v8; // ecx
  double v9; // xmm0_8
  const char *v10; // rdx

  v2 = (__m128d)*(unsigned __int64 *)&item->valuedouble;
  if ( v2.m128d_f64[0] == 0.0 )
  {
    if ( p )
      result = ensure(p, 2);
    else
      result = (char *)cJSON_malloc(2ui64);
    if ( result )
      *(_WORD *)result = 48;
  }
  else
  {
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)item->valueint - v2.m128d_f64[0]) & _xmm) > 2.220446049250313e-16
      || v2.m128d_f64[0] > 2147483647.0
      || v2.m128d_f64[0] < -2147483648.0 )
    {
      if ( p )
        v7 = ensure(p, 64);
      else
        v7 = (char *)cJSON_malloc(0x40ui64);
      v6 = v7;
      if ( v7 )
      {
        v8 = (int)v2.m128d_f64[0];
        v9 = v2.m128d_f64[0];
        if ( (double)v8 != v2.m128d_f64[0] )
          v9 = (double)(v8 - (_mm_movemask_pd(_mm_unpacklo_pd(v2, v2)) & 1));
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9 - v2.m128d_f64[0]) & _xmm) > 2.220446049250313e-16
          || COERCE_DOUBLE(*(_QWORD *)&v2.m128d_f64[0] & _xmm) >= 9.999999999999999e59 )
        {
          if ( COERCE_DOUBLE(*(_QWORD *)&v2.m128d_f64[0] & _xmm) < 0.000001
            || (v10 = "%f", COERCE_DOUBLE(*(_QWORD *)&v2.m128d_f64[0] & _xmm) > 1000000000.0) )
          {
            v10 = "%e";
          }
        }
        else
        {
          v10 = "%.0f";
        }
        sprintf(v7, v10, v2.m128d_f64[0]);
      }
    }
    else
    {
      if ( p )
        v5 = ensure(p, 21);
      else
        v5 = (char *)cJSON_malloc(0x15ui64);
      v6 = v5;
      if ( v5 )
        sprintf(v5, "%d", (unsigned int)item->valueint);
    }
    return v6;
  }
  return result;
}

char *__fastcall print_object(cJSON *item, int depth, int fmt, printbuffer *p)
{
  cJSON *child; // rax
  int v5; // edi
  int v11; // ebp
  int v12; // er13
  int offset; // ebp
  int v14; // er13
  char *v15; // rax
  _BYTE *v16; // rax
  int v17; // er15
  cJSON *i; // rsi
  char *v19; // rax
  char *v20; // rax
  int v21; // edi
  char *v22; // rax
  int v23; // esi
  char *v24; // rax
  char *result; // rax
  char **v26; // r12
  char **v27; // rcx
  cJSON *v28; // rbx
  int v29; // er15
  int v30; // eax
  int v31; // ebp
  char *v32; // rdi
  char *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  _BYTE *v38; // rsi
  __int64 v39; // rsi
  void **v40; // rdi
  void *v41; // rcx
  char *v42; // rbx
  int v43; // edi
  __int64 v44; // r13
  int v45; // er12
  const char **v46; // rsi
  int v47; // eax
  signed __int64 v48; // rbp
  _BYTE *v49; // rdx
  size_t v50; // rdi
  char *v51; // rbx
  char *v52; // rbx
  __int64 v53; // rax
  int v54; // eax
  char *v55; // r8
  int v56; // er15
  int v57; // [rsp+20h] [rbp-58h]
  void *block; // [rsp+28h] [rbp-50h]
  char **v60; // [rsp+30h] [rbp-48h]
  _BYTE *v61; // [rsp+38h] [rbp-40h]
  __int64 v62; // [rsp+40h] [rbp-38h]
  int v63; // [rsp+80h] [rbp+8h]
  int v64; // [rsp+80h] [rbp+8h]

  child = item->child;
  v5 = 0;
  v61 = 0i64;
  v11 = 0;
  v12 = 0;
  if ( !child )
    goto LABEL_87;
  do
  {
    child = child->next;
    ++v11;
  }
  while ( child );
  v57 = v11;
  if ( !v11 )
  {
LABEL_87:
    v54 = depth + 4;
    if ( p )
    {
      if ( !fmt )
        v54 = 3;
      result = ensure(p, v54);
    }
    else
    {
      if ( !fmt )
        v54 = 3;
      result = (char *)cJSON_malloc(v54);
    }
    if ( !result )
      return 0i64;
    *result = 123;
    v55 = result + 1;
    if ( fmt )
    {
      *v55 = 10;
      v55 = result + 2;
      v56 = depth - 1;
      if ( v56 > 0 )
      {
        memset(v55, 9, (unsigned int)v56);
        v55 += (unsigned int)v56;
      }
    }
    *(_WORD *)v55 = 125;
    return result;
  }
  if ( p )
  {
    offset = p->offset;
    LOBYTE(v12) = fmt != 0;
    v14 = v12 + 1;
    v15 = ensure(p, v14 + 1);
    if ( v15 )
    {
      *v15 = 123;
      v16 = v15 + 1;
      if ( fmt )
        *v16++ = 10;
      *v16 = 0;
      v17 = depth + 1;
      p->offset += v14;
      for ( i = item->child; i; i = i->next )
      {
        if ( fmt )
        {
          v19 = ensure(p, v17);
          if ( !v19 )
            return 0i64;
          if ( v17 > 0 )
          {
            memset(v19, 9, (unsigned int)v17);
            v5 = 0;
          }
          p->offset += v17;
        }
        print_string_ptr(i->string, p);
        p->offset = update(p);
        v20 = ensure(p, v14);
        if ( !v20 )
          return 0i64;
        *v20 = 58;
        if ( fmt )
          v20[1] = 9;
        p->offset += v14;
        print_value(i, v17, fmt, p);
        p->offset = update(p);
        LOBYTE(v5) = i->next != 0i64;
        v21 = (fmt != 0) + v5;
        v22 = ensure(p, v21 + 1);
        if ( !v22 )
          return 0i64;
        if ( i->next )
          *v22++ = 44;
        if ( fmt )
          *v22++ = 10;
        *v22 = 0;
        p->offset += v21;
        v5 = 0;
      }
      v23 = v17 + 1;
      if ( !fmt )
        v23 = 2;
      v24 = ensure(p, v23);
      if ( v24 )
      {
        if ( fmt )
        {
          for ( offset = 0; offset < depth; ++v24 )
          {
            *v24 = 9;
            ++offset;
          }
        }
        *(_WORD *)v24 = 125;
        return &p->buffer[offset];
      }
    }
    return 0i64;
  }
  v62 = v11;
  v60 = (char **)cJSON_malloc(8i64 * v11);
  v26 = v60;
  if ( !v60 )
    return 0i64;
  block = cJSON_malloc(8i64 * v11);
  v27 = v60;
  if ( !block )
  {
LABEL_62:
    cJSON_free(v27);
    return 0i64;
  }
  memset(v60, 0, 8i64 * v11);
  memset(block, 0, 8i64 * v11);
  v28 = item->child;
  v29 = depth + 1;
  v30 = v29 + 7;
  if ( !fmt )
    v30 = 7;
  if ( v28 )
  {
    v31 = v30;
    do
    {
      v32 = print_string_ptr(v28->string, 0i64);
      *(char **)((char *)v26 + (_BYTE *)block - (_BYTE *)v60) = v32;
      v33 = print_value(v28, v29, fmt, 0i64);
      *v26++ = v33;
      if ( v32 && v33 )
      {
        v34 = -1i64;
        do
          ++v34;
        while ( v33[v34] );
        v35 = -1i64;
        do
          ++v35;
        while ( v32[v35] );
        v36 = v35 + v34;
        v37 = v29 + 4;
        if ( !fmt )
          v37 = 2;
        v31 += v36 + v37;
      }
      else
      {
        v12 = 1;
      }
      v28 = v28->next;
    }
    while ( v28 );
    v63 = v31;
    v11 = v57;
    if ( v12 )
    {
      v38 = 0i64;
LABEL_52:
      v12 = 1;
      goto LABEL_53;
    }
    v30 = v63;
  }
  v61 = cJSON_malloc(v30);
  v38 = v61;
  if ( !v61 )
    goto LABEL_52;
LABEL_53:
  if ( v12 )
  {
    v39 = v62;
    if ( v62 > 0 )
    {
      v40 = (void **)v60;
      do
      {
        v41 = *(void **)((char *)v40 + (_BYTE *)block - (_BYTE *)v60);
        if ( v41 )
          cJSON_free(v41);
        if ( *v40 )
          cJSON_free(*v40);
        ++v40;
        --v39;
      }
      while ( v39 );
    }
    cJSON_free(block);
    v27 = v60;
    goto LABEL_62;
  }
  *v38 = 123;
  v42 = v38 + 1;
  if ( fmt )
  {
    *v42 = 10;
    v42 = v38 + 2;
  }
  v43 = 0;
  *v42 = 0;
  v44 = v11;
  v45 = 0;
  if ( v11 > 0 )
  {
    v46 = (const char **)v60;
    v47 = v11 - 1;
    v48 = (_BYTE *)block - (_BYTE *)v60;
    v64 = v47;
    do
    {
      if ( fmt && v29 > 0 )
      {
        memset(v42, 9, (unsigned int)v29);
        v42 += (unsigned int)v29;
      }
      v49 = *(const char **)((char *)v46 + v48);
      v50 = -1i64;
      do
        ++v50;
      while ( v49[v50] );
      memmove(v42, v49, v50);
      v51 = &v42[v50];
      *v51 = 58;
      v52 = v51 + 1;
      if ( fmt )
        *v52++ = 9;
      strcpy(v52, *v46);
      v53 = -1i64;
      do
        ++v53;
      while ( (*v46)[v53] );
      v42 = &v52[v53];
      if ( v45 != v64 )
        *v42++ = 44;
      if ( fmt )
        *v42++ = 10;
      *v42 = 0;
      cJSON_free(*(void **)((char *)v46 + v48));
      cJSON_free((void *)*v46);
      ++v45;
      ++v46;
      --v44;
    }
    while ( v44 );
    v38 = v61;
    v43 = 0;
  }
  cJSON_free(block);
  cJSON_free(v60);
  if ( fmt && depth > 0 )
  {
    do
    {
      *v42 = 9;
      ++v43;
      ++v42;
    }
    while ( v43 < depth );
  }
  *(_WORD *)v42 = 125;
  return v38;
}

char *__fastcall print_string_ptr(const char *str, printbuffer *p)
{
  unsigned __int8 v2; // si
  int v3; // ebx
  const char *v5; // rdi
  int v6; // er8
  const char *v7; // r14
  char v8; // cl
  int v9; // eax
  const char *v10; // r14
  char *v11; // rax
  char *v12; // rsi
  char *v13; // rbx
  char v14; // al
  unsigned int v15; // eax
  char *result; // rax
  int v17; // er14
  char *v18; // rax
  char *v19; // rdx
  signed __int64 v20; // rcx
  char v21; // al

  v2 = *str;
  v3 = 0;
  v5 = str;
  v6 = 0;
  v7 = str;
  if ( !*str )
    goto LABEL_36;
  v8 = *str;
  do
  {
    if ( (unsigned __int8)(v8 - 1) <= 0x1Eu || v8 == 34 || (v9 = 0, v8 == 92) )
      v9 = 1;
    v8 = *++v7;
    v6 |= v9;
  }
  while ( v8 );
  if ( !v6 )
  {
LABEL_36:
    v17 = (_DWORD)v7 - (_DWORD)v5;
    if ( p )
      v18 = ensure(p, v17 + 3);
    else
      v18 = (char *)cJSON_malloc(v17 + 3);
    v19 = v18;
    if ( v18 )
    {
      *v18 = 34;
      v20 = v18 + 1 - v5;
      do
      {
        v21 = *v5;
        v5[v20] = *v5;
        ++v5;
      }
      while ( v21 );
      v19[v17 + 1] = 34;
      result = v19;
      v19[v17 + 2] = 0;
      return result;
    }
    return 0i64;
  }
  v10 = v5;
  do
  {
    if ( !++v3 )
      break;
    if ( strchr(asc_140867690, v2) )
    {
      ++v3;
    }
    else if ( v2 < 0x20u )
    {
      v3 += 5;
    }
    v2 = *++v10;
  }
  while ( v2 );
  if ( p )
    v11 = ensure(p, v3 + 3);
  else
    v11 = (char *)cJSON_malloc(v3 + 3);
  v12 = v11;
  if ( !v11 )
    return 0i64;
  *v11 = 34;
  v13 = v11 + 1;
  while ( *v5 )
  {
    v14 = *v5;
    if ( *v5 <= 0x1Fu || v14 == 34 || v14 == 92 )
    {
      *v13 = 92;
      v15 = *(unsigned __int8 *)v5++;
      switch ( v15 )
      {
        case 8u:
          v13[1] = 98;
          v13 += 2;
          break;
        case 9u:
          v13[1] = 116;
          v13 += 2;
          break;
        case 0xAu:
          v13[1] = 110;
          v13 += 2;
          break;
        case 0xCu:
          v13[1] = 102;
          v13 += 2;
          break;
        case 0xDu:
          v13[1] = 114;
          v13 += 2;
          break;
        case 0x22u:
          v13[1] = 34;
          v13 += 2;
          break;
        case 0x5Cu:
          v13[1] = 92;
          v13 += 2;
          break;
        default:
          sprintf(v13 + 1, "u%04x", v15);
          v13 += 6;
          break;
      }
    }
    else
    {
      *v13++ = v14;
      ++v5;
    }
  }
  *(_WORD *)v13 = 34;
  return v12;
}

char *__fastcall print_value(cJSON *item, int depth, int fmt, printbuffer *p)
{
  char *v4; // r10
  char *result; // rax

  v4 = 0i64;
  if ( !item )
    return 0i64;
  if ( p )
  {
    switch ( (unsigned __int8)item->type )
    {
      case 0u:
        result = ensure(p, 6);
        v4 = result;
        if ( !result )
          goto LABEL_23;
        strcpy(result, "false");
        break;
      case 1u:
        result = ensure(p, 5);
        v4 = result;
        if ( !result )
          goto LABEL_23;
        strcpy(result, "true");
        break;
      case 2u:
        result = ensure(p, 5);
        v4 = result;
        if ( !result )
          goto LABEL_23;
        strcpy(result, "null");
        break;
      case 3u:
        result = print_number(item, p);
        break;
      case 4u:
        result = print_string_ptr(item->valuestring, p);
        break;
      case 5u:
        goto $LN17_98;
      case 6u:
        goto $LN18_95;
      default:
        goto LABEL_23;
    }
  }
  else
  {
    switch ( (unsigned __int8)item->type )
    {
      case 0u:
        result = cJSON_strdup("false");
        break;
      case 1u:
        result = cJSON_strdup("true");
        break;
      case 2u:
        result = cJSON_strdup("null");
        break;
      case 3u:
        result = print_number(item, 0i64);
        break;
      case 4u:
        result = print_string_ptr(item->valuestring, 0i64);
        break;
      case 5u:
        p = 0i64;
$LN17_98:
        result = print_array(item, depth, fmt, p);
        break;
      case 6u:
        p = 0i64;
$LN18_95:
        v4 = print_object(item, depth, fmt, p);
        goto LABEL_23;
      default:
LABEL_23:
        result = v4;
        break;
    }
  }
  return result;
}

__int64 __fastcall update(printbuffer *p)
{
  __int64 offset; // rdx
  char *v2; // rcx
  __int64 v3; // rax

  if ( !p || !p->buffer )
    return 0i64;
  offset = p->offset;
  v2 = &p->buffer[offset];
  v3 = -1i64;
  do
    ++v3;
  while ( v2[v3] );
  return offset + v3;
}

