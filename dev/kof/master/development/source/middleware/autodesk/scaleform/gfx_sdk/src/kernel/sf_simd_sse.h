#pragma once

class Scaleform::SIMD::SSE::InstructionSet
{
public:
	static bool HasSSE2Support();
	static bool SupportsIntegerIntrinsics();
	static __m128i LoadAligned(const __m128i *);
	static __m128 LoadAligned(const float *);
	static void StoreAligned(float *, __m128);
	static void StreamAligned(__m128i *, __m128i);
	static __m128i Set1(unsigned short);
	static __m128 UnpackLo(__m128, __m128);
	static __m128 UnpackHi(__m128, __m128);
	static __m128 Multiply(__m128, __m128);
	static __m128 Divide(__m128, __m128);
	static __m128 Dot3(__m128, __m128);
	static __m128 Add(__m128, __m128);
	static __m128i Add16(__m128i, __m128i);
	static __m128 MultiplyAdd(__m128, __m128, __m128);
	static __m128 Min(__m128, __m128);
	static __m128 Max(__m128, __m128);
	static __m128 And(__m128, __m128);
	static __m128 Or(__m128, __m128);
	static __m128 CompareGE(__m128, __m128);
	static bool CompareEQ_Any(__m128, __m128);
	static bool CompareEQ_All(__m128, __m128);
	static __m128 ReciprocalSqrt(__m128);
	static __m128 Reciprocal(__m128);
	static __m128 Subtract(__m128, __m128);
	static __m128 Abs(__m128);
	static __m128 Select(__m128, __m128, __m128);
	static void Prefetch(const void *, long);
};
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,4294967295>(); // 0x140329F40
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,4294967295>(); // 0x140329FB0
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,4294967295,4294967295>(); // 0x14032A300
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<1056964608,1056964608,1056964608,1056964608>(); // 0x1403CD880
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,1065353216,1065353216,1065353216>(); // 0x1403CD8F0
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<1065353216,3212836864,1065353216,3212836864>(); // 0x1403CD960
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<2147483647,2147483647,2147483647,2147483647>(); // 0x14039CBC0
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,0,0,0>(); // 0x14039CC30
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<0,0,0,0>(); // 0x140380170
__m128 Scaleform::SIMD::SSE::InstructionSet::Constant<4294967295,4294967295,0,0>(); // 0x1403801E0