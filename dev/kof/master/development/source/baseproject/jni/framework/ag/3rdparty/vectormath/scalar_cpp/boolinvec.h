#pragma once

class sce::Vectormath::Scalar::floatInVec
{
private:
	float mData; // 0x0
public:
	floatInVec(float);
	floatInVec(const sce::Vectormath::Scalar::boolInVec);
	floatInVec();
	float getAsFloat();
	float operator float();
	sce::Vectormath::Scalar::floatInVec & operator++();
	const sce::Vectormath::Scalar::floatInVec operator++(long);
	sce::Vectormath::Scalar::floatInVec & operator--();
	const sce::Vectormath::Scalar::floatInVec operator--(long);
	const sce::Vectormath::Scalar::floatInVec operator-();
	sce::Vectormath::Scalar::floatInVec & operator=(const sce::Vectormath::Scalar::floatInVec);
	sce::Vectormath::Scalar::floatInVec & operator*=(const sce::Vectormath::Scalar::floatInVec);
	sce::Vectormath::Scalar::floatInVec & operator/=(const sce::Vectormath::Scalar::floatInVec);
	sce::Vectormath::Scalar::floatInVec & operator+=(const sce::Vectormath::Scalar::floatInVec);
	sce::Vectormath::Scalar::floatInVec & operator-=(const sce::Vectormath::Scalar::floatInVec);
};
class sce::Vectormath::Scalar::boolInVec
{
private:
	unsigned long mData; // 0x0
public:
	boolInVec(bool);
	boolInVec(const sce::Vectormath::Scalar::floatInVec);
	boolInVec();
	bool getAsBool();
	bool operator bool();
	const sce::Vectormath::Scalar::boolInVec operator!();
	sce::Vectormath::Scalar::boolInVec & operator=(const sce::Vectormath::Scalar::boolInVec);
	sce::Vectormath::Scalar::boolInVec & operator&=(const sce::Vectormath::Scalar::boolInVec);
	sce::Vectormath::Scalar::boolInVec & operator^=(const sce::Vectormath::Scalar::boolInVec);
	sce::Vectormath::Scalar::boolInVec & operator|=(const sce::Vectormath::Scalar::boolInVec);
};