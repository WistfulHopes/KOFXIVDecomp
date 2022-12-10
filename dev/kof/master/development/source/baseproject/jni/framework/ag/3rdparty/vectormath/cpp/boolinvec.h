#pragma once

class sce::Vectormath::Simd::floatInVec
{
private:
	_vec_float4 mData; // 0x0
public:
	floatInVec(float);
	floatInVec(const _vec_float4 &);
	floatInVec(const _vec_float2 &);
	floatInVec(const _vec_float4 &, long);
	floatInVec(const _vec_float2 &, long);
	floatInVec(const sce::Vectormath::Simd::boolInVec &);
	floatInVec();
	float getAsFloat();
	float operator float();
	_vec_float4 get128();
	void set128(const _vec_float4 &);
	_vec_float2 get64();
	void set64(const _vec_float2 &);
	_vec_float4 getFastVectorType();
	void setFastVectorType(const _vec_float4 &);
	sce::Vectormath::Simd::floatInVec & operator++();
	const sce::Vectormath::Simd::floatInVec operator++(long);
	sce::Vectormath::Simd::floatInVec & operator--();
	const sce::Vectormath::Simd::floatInVec operator--(long);
	const sce::Vectormath::Simd::floatInVec operator-();
	sce::Vectormath::Simd::floatInVec & operator=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::floatInVec & operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::floatInVec & operator/=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::floatInVec & operator+=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::floatInVec & operator-=(const sce::Vectormath::Simd::floatInVec &);
};
class sce::Vectormath::Simd::boolInVec
{
private:
	_vec_uint4 mData; // 0x0
public:
	boolInVec(const _vec_uint4 &);
	boolInVec(const _vec_uint2 &);
	boolInVec(const _vec_uint4 &, long);
	boolInVec(const _vec_uint2 &, long);
	boolInVec(bool);
	boolInVec(const sce::Vectormath::Simd::floatInVec &);
	boolInVec();
	bool getAsBool();
	bool operator bool();
	_vec_uint4 get128();
	void set128(const _vec_uint4 &);
	_vec_uint2 get64();
	void set64(const _vec_uint2 &);
	_vec_uint4 getFastVectorType();
	void setFastVectorType(const _vec_uint4 &);
	const sce::Vectormath::Simd::boolInVec operator!();
	sce::Vectormath::Simd::boolInVec & operator=(const sce::Vectormath::Simd::boolInVec &);
	sce::Vectormath::Simd::boolInVec & operator&=(const sce::Vectormath::Simd::boolInVec &);
	sce::Vectormath::Simd::boolInVec & operator^=(const sce::Vectormath::Simd::boolInVec &);
	sce::Vectormath::Simd::boolInVec & operator|=(const sce::Vectormath::Simd::boolInVec &);
};