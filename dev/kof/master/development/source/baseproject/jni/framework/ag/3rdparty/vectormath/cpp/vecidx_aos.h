#pragma once

class sce::Vectormath::Simd::Aos::VecIdx
{
private:
	_vec_float4 & ref; // 0x0
	long i; // 0x8
	char padding[4]; // 0xC
public:
	VecIdx(const sce::Vectormath::Simd::Aos::VecIdx &);
	VecIdx(_vec_float4 &, long);
	float getAsFloat();
	sce::Vectormath::Simd::floatInVec operator class sce::Vectormath::Simd::floatInVec();
	float operator float();
	sce::Vectormath::Simd::floatInVec operator=(const sce::Vectormath::Simd::Aos::VecIdx &);
	sce::Vectormath::Simd::floatInVec operator=(const sce::Vectormath::Simd::floatInVec &);
	float operator=(float);
	sce::Vectormath::Simd::floatInVec operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::floatInVec operator*=(float);
	sce::Vectormath::Simd::floatInVec operator/=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::floatInVec operator/=(float);
	sce::Vectormath::Simd::floatInVec operator+=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::floatInVec operator+=(float);
	sce::Vectormath::Simd::floatInVec operator-=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::floatInVec operator-=(float);
};