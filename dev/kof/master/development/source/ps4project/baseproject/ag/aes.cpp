#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"

struct AESState
{
	unsigned char[4][4] * state; // 0x0
	unsigned char RoundKey[176]; // 0x8
	const unsigned char * Key; // 0xB8
	unsigned char * Iv; // 0xC0
};
const unsigned char sbox[256]; // 0x1408AED20
const unsigned char rsbox[256]; // 0x1408AEE20
const unsigned char Rcon[255]; // 0x1408AEF20
void KeyExpansion(AESState * state); // 0x140242A40
void MixColumns(AESState * state); // 0x140242BF0
void InvMixColumns(AESState * state); // 0x140242CC0
void Cipher(AESState * state); // 0x140242F60
void InvCipher(AESState * state); // 0x1402431E0
void AES128_CBC_encrypt_buffer(unsigned char * output, unsigned char * input, unsigned long length, const unsigned char * key, const unsigned char * iv); // 0x140243470
void AES128_CBC_decrypt_buffer(unsigned char * output, unsigned char * input, unsigned long length, const unsigned char * key, const unsigned char * iv); // 0x1402435E0//decompilation failure at 1408AED20!
//decompilation failure at 1408AEE20!
//decompilation failure at 1408AEF20!
void __fastcall AES128_CBC_decrypt_buffer(
        unsigned __int8 *output,
        unsigned __int8 *input,
        unsigned int length,
        const unsigned __int8 *key,
        const unsigned __int8 *iv)
{
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // r14
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 *v12; // rax
  signed __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 *v15; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // rsi
  AESState state; // [rsp+20h] [rbp-108h] BYREF

  v6 = (unsigned __int64)length >> 4;
  v7 = length & 0xF;
  state.Key = AES128_key;
  KeyExpansion(&state);
  v9 = state.Iv;
  if ( iv )
    v9 = (unsigned __int8 *)iv;
  for ( state.Iv = v9; v6; --v6 )
  {
    v10 = output;
    v11 = 16i64;
    do
    {
      *v10 = v10[input - output];
      ++v10;
      --v11;
    }
    while ( v11 );
    state.state = (unsigned __int8 (*)[4][4])output;
    InvCipher(&state);
    v12 = output;
    v13 = state.Iv - output;
    v14 = 16i64;
    do
    {
      *v12 ^= v12[v13];
      ++v12;
      --v14;
    }
    while ( v14 );
    state.Iv = input;
    output += 16;
    input += 16;
  }
  if ( v7 )
  {
    v15 = output;
    v16 = v7;
    v17 = input - output;
    do
    {
      *v15 = v15[v17];
      ++v15;
      --v16;
    }
    while ( v16 );
    memset(&output[v7], 0, 16 - v7);
    state.state = (unsigned __int8 (*)[4][4])output;
    InvCipher(&state);
  }
}

void __fastcall AES128_CBC_encrypt_buffer(
        unsigned __int8 *output,
        unsigned __int8 *input,
        unsigned int length,
        const unsigned __int8 *key)
{
  unsigned __int64 v5; // r14
  unsigned __int8 v6; // r15
  unsigned __int8 *v8; // rbx
  __int64 v9; // rbp
  unsigned __int8 *v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 *v12; // rax
  signed __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int8 *v15; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // rsi
  unsigned __int8 *v18; // rcx
  signed __int64 v19; // rbx
  AESState state; // [rsp+20h] [rbp-108h] BYREF

  v5 = (unsigned __int64)length >> 4;
  v6 = length & 0xF;
  state.Key = AES128_key;
  KeyExpansion(&state);
  v8 = AES128_iv;
  v9 = 16i64;
  for ( state.Iv = AES128_iv; v5; --v5 )
  {
    v10 = output;
    v11 = 16i64;
    do
    {
      *v10 = v10[input - output];
      ++v10;
      --v11;
    }
    while ( v11 );
    v12 = output;
    v13 = v8 - output;
    v14 = 16i64;
    do
    {
      *v12 ^= v12[v13];
      ++v12;
      --v14;
    }
    while ( v14 );
    state.state = (unsigned __int8 (*)[4][4])output;
    Cipher(&state);
    v8 = output;
    input += 16;
    output += 16;
    state.Iv = v8;
  }
  if ( v6 )
  {
    v15 = output;
    v16 = v6;
    v17 = input - output;
    do
    {
      *v15 = v15[v17];
      ++v15;
      --v16;
    }
    while ( v16 );
    memset(&output[v6], 16 - v6, 16 - v6);
    v18 = output;
    v19 = v8 - output;
    do
    {
      *v18 ^= v18[v19];
      ++v18;
      --v9;
    }
    while ( v9 );
    state.state = (unsigned __int8 (*)[4][4])output;
    Cipher(&state);
  }
}

void __fastcall Cipher(AESState *state)
{
  unsigned __int8 (*v1)[4][4]; // r11
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r10
  unsigned __int8 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int8 (*v10)[4][4]; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // cl
  unsigned __int8 (*v20)[4][4]; // r11
  __int64 v21; // r10
  __int64 v22; // r9
  unsigned __int8 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r10
  unsigned __int8 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r10
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // cl
  unsigned __int8 *v35; // rcx
  __int64 v36; // rdx

  v1 = state->state;
  v2 = 0i64;
  v4 = 0i64;
  v5 = 4i64;
  do
  {
    v6 = (*v1)[v4];
    v7 = 4i64;
    do
    {
      *v6 ^= v6[(char *)state - (char *)v1 + 8];
      ++v6;
      --v7;
    }
    while ( v7 );
    ++v4;
    --v5;
  }
  while ( v5 );
  v8 = 16i64;
  v9 = 9i64;
  do
  {
    v10 = state->state;
    v11 = 0i64;
    v12 = 4i64;
    do
    {
      v13 = &(*v10)[0][v11];
      v14 = 4i64;
      do
      {
        v15 = *v13;
        v13 += 4;
        *(v13 - 4) = sbox[v15];
        --v14;
      }
      while ( v14 );
      ++v11;
      --v12;
    }
    while ( v12 );
    v16 = (*v10)[0][1];
    (*v10)[0][1] = (*v10)[1][1];
    (*v10)[1][1] = (*v10)[2][1];
    (*v10)[2][1] = (*v10)[3][1];
    (*v10)[3][1] = v16;
    v17 = (*v10)[0][2];
    (*v10)[0][2] = (*v10)[2][2];
    (*v10)[2][2] = v17;
    v18 = (*v10)[1][2];
    (*v10)[1][2] = (*v10)[3][2];
    (*v10)[3][2] = v18;
    v19 = (*v10)[0][3];
    (*v10)[0][3] = (*v10)[3][3];
    (*v10)[3][3] = (*v10)[2][3];
    (*v10)[2][3] = (*v10)[1][3];
    (*v10)[1][3] = v19;
    MixColumns(state);
    v20 = state->state;
    v21 = 4i64;
    v22 = 0i64;
    do
    {
      v23 = (*v20)[v22];
      v24 = 4i64;
      do
      {
        *v23 ^= v23[(_QWORD)state + v8 - (_QWORD)v20 + 8];
        ++v23;
        --v24;
      }
      while ( v24 );
      ++v22;
      --v21;
    }
    while ( v21 );
    v8 += 16i64;
    --v9;
  }
  while ( v9 );
  v25 = 0i64;
  v26 = 4i64;
  do
  {
    v27 = &(*v20)[0][v25];
    v28 = 4i64;
    do
    {
      v29 = *v27;
      v27 += 4;
      *(v27 - 4) = sbox[v29];
      --v28;
    }
    while ( v28 );
    ++v25;
    --v26;
  }
  while ( v26 );
  v30 = 4i64;
  v31 = (*v20)[0][1];
  (*v20)[0][1] = (*v20)[1][1];
  (*v20)[1][1] = (*v20)[2][1];
  (*v20)[2][1] = (*v20)[3][1];
  (*v20)[3][1] = v31;
  v32 = (*v20)[0][2];
  (*v20)[0][2] = (*v20)[2][2];
  (*v20)[2][2] = v32;
  v33 = (*v20)[1][2];
  (*v20)[1][2] = (*v20)[3][2];
  (*v20)[3][2] = v33;
  v34 = (*v20)[0][3];
  (*v20)[0][3] = (*v20)[3][3];
  (*v20)[3][3] = (*v20)[2][3];
  (*v20)[2][3] = (*v20)[1][3];
  (*v20)[1][3] = v34;
  do
  {
    v35 = (*v20)[v2];
    v36 = 4i64;
    do
    {
      *v35 ^= v35[(char *)state - (char *)v20 + 168];
      ++v35;
      --v36;
    }
    while ( v36 );
    ++v2;
    --v30;
  }
  while ( v30 );
}

void __fastcall InvCipher(AESState *state)
{
  unsigned __int8 (*v1)[4][4]; // r11
  __int64 v2; // rsi
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int8 *v6; // rdx
  __int64 v7; // r8
  char v8; // bp
  __int64 v9; // rdi
  unsigned __int8 (*v10)[4][4]; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  unsigned __int8 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r11
  unsigned __int8 *v22; // rax
  __int64 v23; // rdx
  unsigned __int8 (*v24)[4][4]; // r9
  __int64 v25; // r8
  __int64 v26; // r10
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // cl
  unsigned __int8 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r10
  unsigned __int8 *v35; // rcx
  __int64 v36; // rdx

  v1 = state->state;
  v2 = 0i64;
  v4 = 0i64;
  v5 = 4i64;
  do
  {
    v6 = (*v1)[v4];
    v7 = 4i64;
    do
    {
      *v6 ^= v6[(char *)state - (char *)v1 + 168];
      ++v6;
      --v7;
    }
    while ( v7 );
    ++v4;
    --v5;
  }
  while ( v5 );
  v8 = 9;
  v9 = 144i64;
  do
  {
    v10 = state->state;
    v11 = 0i64;
    v12 = 4i64;
    v13 = (*state->state)[3][1];
    (*v10)[3][1] = (*state->state)[2][1];
    (*v10)[2][1] = (*v10)[1][1];
    (*v10)[1][1] = (*v10)[0][1];
    (*v10)[0][1] = v13;
    v14 = (*v10)[0][2];
    (*v10)[0][2] = (*v10)[2][2];
    (*v10)[2][2] = v14;
    v15 = (*v10)[1][2];
    (*v10)[1][2] = (*v10)[3][2];
    (*v10)[3][2] = v15;
    v16 = (*v10)[0][3];
    (*v10)[0][3] = (*v10)[1][3];
    (*v10)[1][3] = (*v10)[2][3];
    (*v10)[2][3] = (*v10)[3][3];
    (*v10)[3][3] = v16;
    do
    {
      v17 = &(*v10)[0][v11];
      v18 = 4i64;
      do
      {
        v19 = *v17;
        v17 += 4;
        *(v17 - 4) = rsbox[v19];
        --v18;
      }
      while ( v18 );
      ++v11;
      --v12;
    }
    while ( v12 );
    v20 = 0i64;
    v21 = 4i64;
    do
    {
      v22 = (*v10)[v20];
      v23 = 4i64;
      do
      {
        *v22 ^= v22[(_QWORD)state + v9 - (_QWORD)v10 + 8];
        ++v22;
        --v23;
      }
      while ( v23 );
      ++v20;
      --v21;
    }
    while ( v21 );
    InvMixColumns(state);
    v9 -= 16i64;
    --v8;
  }
  while ( v8 );
  v24 = state->state;
  v25 = 0i64;
  v26 = 4i64;
  v27 = (*state->state)[3][1];
  (*v24)[3][1] = (*state->state)[2][1];
  (*v24)[2][1] = (*v24)[1][1];
  (*v24)[1][1] = (*v24)[0][1];
  (*v24)[0][1] = v27;
  v28 = (*v24)[0][2];
  (*v24)[0][2] = (*v24)[2][2];
  (*v24)[2][2] = v28;
  v29 = (*v24)[1][2];
  (*v24)[1][2] = (*v24)[3][2];
  (*v24)[3][2] = v29;
  v30 = (*v24)[0][3];
  (*v24)[0][3] = (*v24)[1][3];
  (*v24)[1][3] = (*v24)[2][3];
  (*v24)[2][3] = (*v24)[3][3];
  (*v24)[3][3] = v30;
  do
  {
    v31 = &(*v24)[0][v25];
    v32 = 4i64;
    do
    {
      v33 = *v31;
      v31 += 4;
      *(v31 - 4) = rsbox[v33];
      --v32;
    }
    while ( v32 );
    ++v25;
    --v26;
  }
  while ( v26 );
  v34 = 4i64;
  do
  {
    v35 = (*v24)[v2];
    v36 = 4i64;
    do
    {
      *v35 ^= v35[(char *)state - (char *)v24 + 8];
      ++v35;
      --v36;
    }
    while ( v36 );
    ++v2;
    --v34;
  }
  while ( v34 );
}

void __fastcall InvMixColumns(AESState *state)
{
  unsigned __int8 *v1; // rbp
  unsigned __int8 v2; // dl
  __int16 v3; // kr00_2
  unsigned __int8 v4; // si
  char v5; // r15
  unsigned __int8 v6; // bl
  __int16 v7; // kr02_2
  unsigned __int8 v8; // r10
  unsigned __int8 v9; // r8
  char v10; // r9
  char v11; // bp
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // cl
  char v14; // al
  unsigned __int8 v15; // r13
  char v16; // di
  char v17; // r13
  bool v18; // zf
  unsigned __int8 v19; // [rsp+0h] [rbp-68h]
  char v20; // [rsp+1h] [rbp-67h]
  char v21; // [rsp+8h] [rbp-60h]
  unsigned __int8 *v22; // [rsp+10h] [rbp-58h]
  char v23; // [rsp+18h] [rbp-50h]
  char v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+28h] [rbp-40h]
  unsigned __int8 v26; // [rsp+78h] [rbp+10h]
  unsigned __int8 v27; // [rsp+80h] [rbp+18h]
  unsigned __int8 v28; // [rsp+88h] [rbp+20h]

  v1 = &(*state->state)[0][2];
  v25 = 4i64;
  v22 = v1;
  do
  {
    v26 = *(v1 - 1);
    v19 = *(v1 - 2);
    v27 = *v1;
    v28 = v1[1];
    v2 = (27 * (v19 >> 7)) ^ (2 * v19);
    v21 = 27 * (v19 >> 7);
    v3 = 2 * v2;
    v4 = (27 * HIBYTE(v3)) ^ v3;
    v5 = 27 * (v26 >> 7);
    v6 = v5 ^ (2 * v26);
    v7 = 2 * v6;
    v8 = (27 * HIBYTE(v7)) ^ v7;
    v23 = 27 * (*v1 >> 7);
    v9 = (27 * (v27 >> 7)) ^ (2 * v27);
    v10 = v2 ^ v9;
    v11 = 27 * (v9 >> 7);
    v12 = v11 ^ (2 * v9);
    v13 = (27 * (v28 >> 7)) ^ (2 * v28);
    v24 = 27 * (v28 >> 7);
    v14 = v13 >> 7;
    v15 = (27 * v14) ^ (2 * v13);
    v16 = 27 * (v15 >> 7);
    v20 = v4 ^ v8 ^ v12 ^ v15 ^ v10;
    v17 = v4 ^ v6 ^ v8 ^ v12 ^ v13 ^ v15;
    *(v22 - 2) = v26 ^ v27 ^ v28 ^ v21 ^ (27 * HIBYTE(v3)) ^ v5 ^ v11 ^ v16 ^ (27 * (v12 >> 7)) ^ (27 * (v8 >> 7)) ^ (27 * (v4 >> 7)) ^ (2 * (v19 ^ v26 ^ v20));
    *(v22 - 1) = v19 ^ v27 ^ v28 ^ v5 ^ (27 * HIBYTE(v7)) ^ v23 ^ (27 * v14) ^ v16 ^ (27 * (v12 >> 7)) ^ (27 * (v8 >> 7)) ^ (27 * (v4 >> 7)) ^ (2 * (v26 ^ v27 ^ v17));
    *v22 = v19 ^ v26 ^ v28 ^ (27 * HIBYTE(v3)) ^ v23 ^ v11 ^ v24 ^ v16 ^ (27 * (v12 >> 7)) ^ (27 * (v8 >> 7)) ^ (27 * (v4 >> 7)) ^ (2 * (v27 ^ v28 ^ v20));
    v22[1] = v19 ^ v26 ^ v27 ^ v21 ^ (27 * HIBYTE(v7)) ^ v24 ^ (27 * v14) ^ v16 ^ (27 * (v12 >> 7)) ^ (27 * (v8 >> 7)) ^ (27 * (v4 >> 7)) ^ (2 * (v19 ^ v28 ^ v17));
    v1 = v22 + 4;
    v18 = v25-- == 1;
    v22 += 4;
  }
  while ( !v18 );
}

void __fastcall KeyExpansion(AESState *state)
{
  unsigned __int8 *v1; // r8
  __int64 v2; // r9
  unsigned int v3; // er11
  unsigned __int8 *v4; // rdx
  __int64 v5; // r8
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // di
  unsigned __int8 v9; // si
  __int64 v10; // rdx
  unsigned __int8 v11; // bl
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int8 v14; // dl
  __int64 v15; // r10

  v1 = &state->RoundKey[2];
  v2 = 4i64;
  v3 = 4;
  do
  {
    *(v1 - 2) = v1[-2i64 - (_QWORD)state->RoundKey + (unsigned __int64)state->Key];
    *(v1 - 1) = v1[-1i64 - (_QWORD)state->RoundKey + (unsigned __int64)state->Key];
    *v1 = state->Key[v1 - state->RoundKey];
    v4 = &v1[1i64 - (_QWORD)state->RoundKey];
    v1 += 4;
    *(v1 - 3) = v4[(unsigned __int64)state->Key];
    --v2;
  }
  while ( v2 );
  do
  {
    v5 = 4 * v3 - 4;
    v6 = state->RoundKey[v5];
    v7 = state->RoundKey[(unsigned int)(v5 + 1)];
    v8 = state->RoundKey[(unsigned int)(v5 + 2)];
    v9 = state->RoundKey[(unsigned int)(v5 + 3)];
    if ( (v3 & 3) == 0 )
    {
      v10 = v6;
      v11 = sbox[v7];
      v7 = sbox[v8];
      v12 = v9;
      v9 = sbox[v10];
      v8 = sbox[v12];
      v6 = Rcon[(unsigned __int64)v3 >> 2] ^ v11;
    }
    v13 = 4 * v3 - 16;
    v14 = state->RoundKey[v13];
    v15 = 4 * v3;
    state->RoundKey[(unsigned int)(v15 + 1)] = v7 ^ state->RoundKey[(unsigned int)(v13 + 1)];
    state->RoundKey[v15] = v6 ^ v14;
    ++v3;
    state->RoundKey[(unsigned int)(v15 + 2)] = v8 ^ state->RoundKey[(unsigned int)(v13 + 2)];
    state->RoundKey[(unsigned int)(v15 + 3)] = v9 ^ state->RoundKey[(unsigned int)(v13 + 3)];
  }
  while ( v3 < 0x2C );
}

void __fastcall MixColumns(AESState *state)
{
  __int64 v1; // rbx
  unsigned __int8 *v2; // rax
  char v3; // r11
  char v4; // r10
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // cl

  v1 = 4i64;
  v2 = &(*state->state)[0][2];
  do
  {
    v3 = *(v2 - 2);
    v2 += 4;
    v4 = *(v2 - 4) ^ *(v2 - 3) ^ *(v2 - 5) ^ v3;
    *(v2 - 6) = v4 ^ v3 ^ (2 * (*(v2 - 5) ^ v3)) ^ (27 * ((unsigned __int8)(*(v2 - 5) ^ v3) >> 7));
    v5 = *(v2 - 4) ^ *(v2 - 5);
    *(v2 - 5) ^= v4 ^ (2 * v5) ^ (27 * (v5 >> 7));
    v6 = *(v2 - 3) ^ *(v2 - 4);
    *(v2 - 4) ^= v4 ^ (2 * v6) ^ (27 * (v6 >> 7));
    *(v2 - 3) ^= v4 ^ (2 * (*(v2 - 3) ^ v3)) ^ (27 * ((unsigned __int8)(*(v2 - 3) ^ v3) >> 7));
    --v1;
  }
  while ( v1 );
}

