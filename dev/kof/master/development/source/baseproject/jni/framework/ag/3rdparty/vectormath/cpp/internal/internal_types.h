#pragma once

union _vec_double1
{
public:
	double f64[1]; // 0x0
	long long v64; // 0x0
};
union _vec_llong1
{
public:
	long long i64[1]; // 0x0
	long long v64; // 0x0
};
union _vec_ullong1
{
public:
	unsigned long long u64[1]; // 0x0
	long long v64; // 0x0
};
union _vec_float2
{
public:
	float f32[2]; // 0x0
	long long v64; // 0x0
};
union _vec_int2
{
public:
	long i32[2]; // 0x0
	long long v64; // 0x0
};
union _vec_uint2
{
public:
	unsigned long u32[2]; // 0x0
	long long v64; // 0x0
};
union _vec_short4
{
public:
	short i16[4]; // 0x0
	long long v64; // 0x0
};
union _vec_ushort4
{
public:
	unsigned short u16[4]; // 0x0
	long long v64; // 0x0
};
union _vec_char8
{
public:
	char i8[8]; // 0x0
	long long v64; // 0x0
};
union _vec_uchar8
{
public:
	unsigned char u8[8]; // 0x0
	long long v64; // 0x0
};
union _vec_double2
{
public:
	double f64[2]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_llong2
{
public:
	long long i64[2]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_ullong2
{
public:
	unsigned long long u64[2]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_float4
{
public:
	float f32[4]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_int4
{
public:
	long i32[4]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_uint4
{
public:
	unsigned long u32[4]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_short8
{
public:
	short i16[8]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_ushort8
{
public:
	unsigned short u16[8]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_char16
{
public:
	char i8[16]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union _vec_uchar16
{
public:
	unsigned char u8[16]; // 0x0
	__m128 f128; // 0x0
	__m128i i128; // 0x0
	__m128d d128; // 0x0
};
union sce_vectormath_union128_t
{
public:
	_vec_double2 vd; // 0x0
	_vec_ullong2 vull; // 0x0
	_vec_llong2 vll; // 0x0
	_vec_float4 vf; // 0x0
	_vec_uint4 vu; // 0x0
	_vec_int4 vi; // 0x0
	_vec_ushort8 vus; // 0x0
	_vec_short8 vis; // 0x0
	_vec_uchar16 vuc; // 0x0
	_vec_char16 vic; // 0x0
	_vec_double1 dd[2]; // 0x0
	_vec_ullong1 dull[2]; // 0x0
	_vec_llong1 dll[2]; // 0x0
	_vec_float2 df[2]; // 0x0
	_vec_uint2 du[2]; // 0x0
	_vec_int2 di[2]; // 0x0
	_vec_ushort4 dus[2]; // 0x0
	_vec_short4 dis[2]; // 0x0
	_vec_uchar8 duc[2]; // 0x0
	_vec_char8 dic[2]; // 0x0
	double f64[2]; // 0x0
	float f[4]; // 0x0
	long long i64[2]; // 0x0
	long i[4]; // 0x0
	short is[8]; // 0x0
	char ic[16]; // 0x0
	unsigned long long u64[2]; // 0x0
	unsigned long u[4]; // 0x0
	unsigned short us[8]; // 0x0
	struct
	{
		unsigned char uc[16]; // 0x0
		sce_vectormath_union128_t(long long);
		sce_vectormath_union128_t(unsigned long long);
		sce_vectormath_union128_t(double);
		sce_vectormath_union128_t(long long, long long);
		sce_vectormath_union128_t(unsigned long long, unsigned long long);
		sce_vectormath_union128_t(double, double);
		sce_vectormath_union128_t(const _vec_char8 &);
		sce_vectormath_union128_t(const _vec_uchar8 &);
		sce_vectormath_union128_t(const _vec_short4 &);
		sce_vectormath_union128_t(const _vec_ushort4 &);
		sce_vectormath_union128_t(const _vec_int2 &);
		sce_vectormath_union128_t(const _vec_uint2 &);
		sce_vectormath_union128_t(const _vec_float2 &);
		sce_vectormath_union128_t(const _vec_llong1 &);
		sce_vectormath_union128_t(const _vec_ullong1 &);
		sce_vectormath_union128_t(const _vec_double1 &);
		sce_vectormath_union128_t(const _vec_char8 &, const _vec_char8 &);
		sce_vectormath_union128_t(const _vec_uchar8 &, const _vec_uchar8 &);
		sce_vectormath_union128_t(const _vec_short4 &, const _vec_short4 &);
		sce_vectormath_union128_t(const _vec_ushort4 &, const _vec_ushort4 &);
		sce_vectormath_union128_t(const _vec_int2 &, const _vec_int2 &);
		sce_vectormath_union128_t(const _vec_uint2 &, const _vec_uint2 &);
		sce_vectormath_union128_t(const _vec_float2 &, const _vec_float2 &);
		sce_vectormath_union128_t(const _vec_llong1 &, const _vec_llong1 &);
		sce_vectormath_union128_t(const _vec_ullong1 &, const _vec_ullong1 &);
		sce_vectormath_union128_t(const _vec_double1 &, const _vec_double1 &);
		sce_vectormath_union128_t(__m128i);
		sce_vectormath_union128_t(__m128d);
		sce_vectormath_union128_t(__m128);
		sce_vectormath_union128_t(const _vec_char16 &);
		sce_vectormath_union128_t(const _vec_uchar16 &);
		sce_vectormath_union128_t(const _vec_short8 &);
		sce_vectormath_union128_t(const _vec_ushort8 &);
		sce_vectormath_union128_t(const _vec_int4 &);
		sce_vectormath_union128_t(const _vec_uint4 &);
		sce_vectormath_union128_t(const _vec_float4 &);
		sce_vectormath_union128_t(const _vec_llong2 &);
		sce_vectormath_union128_t(const _vec_ullong2 &);
		sce_vectormath_union128_t(const _vec_double2 &);
		sce_vectormath_union128_t();
	};
	__m128 vf128; // 0x0
	__m128d vd128; // 0x0
	__m128i vi128; // 0x0
};
union sce_vectormath_union64_t
{
public:
	_vec_double1 vd; // 0x0
	_vec_ullong1 vull; // 0x0
	_vec_llong1 vll; // 0x0
	_vec_float2 vf; // 0x0
	_vec_uint2 vu; // 0x0
	_vec_int2 vi; // 0x0
	_vec_ushort4 vus; // 0x0
	_vec_short4 vis; // 0x0
	_vec_uchar8 vuc; // 0x0
	_vec_char8 vic; // 0x0
	double f64; // 0x0
	float f[2]; // 0x0
	long long i64; // 0x0
	long i[2]; // 0x0
	short is[4]; // 0x0
	char ic[8]; // 0x0
	unsigned long long u64; // 0x0
	unsigned long u[2]; // 0x0
	unsigned short us[4]; // 0x0
	struct
	{
		unsigned char uc[8]; // 0x0
		sce_vectormath_union64_t(char);
		sce_vectormath_union64_t(short);
		sce_vectormath_union64_t(long);
		sce_vectormath_union64_t(long long);
		sce_vectormath_union64_t(unsigned char);
		sce_vectormath_union64_t(unsigned short);
		sce_vectormath_union64_t(unsigned long);
		sce_vectormath_union64_t(unsigned long long);
		sce_vectormath_union64_t(float);
		sce_vectormath_union64_t(double);
		sce_vectormath_union64_t(char, char, char, char, char, char, char, char);
		sce_vectormath_union64_t(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);
		sce_vectormath_union64_t(short, short, short, short);
		sce_vectormath_union64_t(unsigned short, unsigned short, unsigned short, unsigned short);
		sce_vectormath_union64_t(long, long);
		sce_vectormath_union64_t(unsigned long, unsigned long);
		sce_vectormath_union64_t(float, float);
		sce_vectormath_union64_t(const long *, unsigned long);
		sce_vectormath_union64_t(const unsigned long *, unsigned long);
		sce_vectormath_union64_t(const float *, unsigned long);
		sce_vectormath_union64_t(const _vec_char8 &);
		sce_vectormath_union64_t(const _vec_uchar8 &);
		sce_vectormath_union64_t(const _vec_short4 &);
		sce_vectormath_union64_t(const _vec_ushort4 &);
		sce_vectormath_union64_t(const _vec_int2 &);
		sce_vectormath_union64_t(const _vec_uint2 &);
		sce_vectormath_union64_t(const _vec_float2 &);
		sce_vectormath_union64_t(const _vec_llong1 &);
		sce_vectormath_union64_t(const _vec_ullong1 &);
		sce_vectormath_union64_t(const _vec_double1 &);
		sce_vectormath_union64_t(__m128i);
		sce_vectormath_union64_t(__m128d);
		sce_vectormath_union64_t(__m128);
		sce_vectormath_union64_t(const _vec_char16 &);
		sce_vectormath_union64_t(const _vec_uchar16 &);
		sce_vectormath_union64_t(const _vec_short8 &);
		sce_vectormath_union64_t(const _vec_ushort8 &);
		sce_vectormath_union64_t(const _vec_int4 &);
		sce_vectormath_union64_t(const _vec_uint4 &);
		sce_vectormath_union64_t(const _vec_float4 &);
		sce_vectormath_union64_t(const _vec_llong2 &);
		sce_vectormath_union64_t(const _vec_ullong2 &);
		sce_vectormath_union64_t(const _vec_double2 &);
		sce_vectormath_union64_t();
	};
};
union sce_vectormath_union32_t
{
public:
	float f; // 0x0
	long i; // 0x0
	struct
	{
		unsigned long u; // 0x0
		sce_vectormath_union32_t(unsigned long);
		sce_vectormath_union32_t(long);
		sce_vectormath_union32_t(float);
		sce_vectormath_union32_t();
	};
};