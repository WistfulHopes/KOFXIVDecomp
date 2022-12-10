#pragma once

enum sce::Vectormath::Simd::RotationOrder
{
	kXYZ = 0,
	kYZX = 1,
	kZXY = 2,
	kXZY = 3,
	kYXZ = 4,
	kZYX = 5,
};
class sce::Vectormath::Simd::Aos::Vector2
{
private:
	_vec_float2 mVec64; // 0x0
public:
	Vector2(const _vec_float2 &);
	Vector2(const sce::Vectormath::Simd::floatInVec &);
	Vector2(float);
	Vector2(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	Vector2(float, float);
	Vector2();
	_vec_float2 get64();
	_vec_float4 getFastVectorType();
	void set64(const _vec_float2 &);
	void setFastVectorType(const _vec_float4 &);
protected:
	_vec_float2 & get64Ref();
public:
	sce::Vectormath::Simd::Aos::Vector2 & operator=(const sce::Vectormath::Simd::Aos::Vector2 &);
	sce::Vectormath::Simd::Aos::Vector2 & setX(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector2 & setX(float);
	sce::Vectormath::Simd::Aos::Vector2 & setY(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector2 & setY(float);
	const sce::Vectormath::Simd::floatInVec getX();
	const sce::Vectormath::Simd::floatInVec getY();
	sce::Vectormath::Simd::Aos::Vector2 & setElem(long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector2 & setElem(long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long);
	const sce::Vectormath::Simd::floatInVec operator[](long);
	const sce::Vectormath::Simd::Aos::Vector2 operator+(const sce::Vectormath::Simd::Aos::Vector2 &);
	const sce::Vectormath::Simd::Aos::Vector2 operator-();
	const sce::Vectormath::Simd::Aos::Vector2 operator-(const sce::Vectormath::Simd::Aos::Vector2 &);
	const sce::Vectormath::Simd::Aos::Vector2 operator*(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Vector2 operator*(float);
	const sce::Vectormath::Simd::Aos::Vector2 operator/(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Vector2 operator/(float);
	sce::Vectormath::Simd::Aos::Vector2 & operator+=(const sce::Vectormath::Simd::Aos::Vector2 &);
	sce::Vectormath::Simd::Aos::Vector2 & operator-=(const sce::Vectormath::Simd::Aos::Vector2 &);
	sce::Vectormath::Simd::Aos::Vector2 & operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector2 & operator*=(float);
	sce::Vectormath::Simd::Aos::Vector2 & operator/=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector2 & operator/=(float);
	static const sce::Vectormath::Simd::Aos::Vector2 xAxis();
	static const sce::Vectormath::Simd::Aos::Vector2 yAxis();
	static const sce::Vectormath::Simd::Aos::Vector2 zero();
};
class sce::Vectormath::Simd::Aos::Vector3
{
private:
	_vec_float4 mVec128; // 0x0
public:
	Vector3(const _vec_float4 &);
	Vector3(const sce::Vectormath::Simd::floatInVec &);
	Vector3(float);
	Vector3(const sce::Vectormath::Simd::Aos::Point3 &);
	Vector3(const sce::Vectormath::Simd::Aos::Vector2 &, const sce::Vectormath::Simd::floatInVec &);
	Vector3(const sce::Vectormath::Simd::Aos::Vector2 &, float);
	Vector3(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	Vector3(float, float, float);
	Vector3();
	_vec_float4 get128();
	void set128(const _vec_float4 &);
protected:
	_vec_float4 & get128Ref();
public:
	sce::Vectormath::Simd::Aos::Vector3 & operator=(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Vector3 & setXY(const sce::Vectormath::Simd::Aos::Vector2 &);
	const sce::Vectormath::Simd::Aos::Vector2 getXY();
	sce::Vectormath::Simd::Aos::Vector3 & setX(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector3 & setX(float);
	sce::Vectormath::Simd::Aos::Vector3 & setY(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector3 & setY(float);
	sce::Vectormath::Simd::Aos::Vector3 & setZ(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector3 & setZ(float);
	const sce::Vectormath::Simd::floatInVec getX();
	const sce::Vectormath::Simd::floatInVec getY();
	const sce::Vectormath::Simd::floatInVec getZ();
	sce::Vectormath::Simd::Aos::Vector3 & setElem(long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector3 & setElem(long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long);
	const sce::Vectormath::Simd::floatInVec operator[](long);
	sce::Vectormath::Simd::Aos::VecIdx operator[](long);
	const sce::Vectormath::Simd::Aos::Point3 operator+(const sce::Vectormath::Simd::Aos::Point3 &);
	const sce::Vectormath::Simd::Aos::Vector3 operator+(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector3 operator-();
	const sce::Vectormath::Simd::Aos::Vector3 operator-(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector3 operator*(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Vector3 operator*(float);
	const sce::Vectormath::Simd::Aos::Vector3 operator/(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Vector3 operator/(float);
	sce::Vectormath::Simd::Aos::Vector3 & operator+=(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Vector3 & operator-=(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Vector3 & operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector3 & operator*=(float);
	sce::Vectormath::Simd::Aos::Vector3 & operator/=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector3 & operator/=(float);
	static const sce::Vectormath::Simd::Aos::Vector3 xAxis();
	static const sce::Vectormath::Simd::Aos::Vector3 yAxis();
	static const sce::Vectormath::Simd::Aos::Vector3 zAxis();
	static const sce::Vectormath::Simd::Aos::Vector3 zero();
};
class sce::Vectormath::Simd::Aos::Vector4
{
private:
	_vec_float4 mVec128; // 0x0
public:
	Vector4(const _vec_float4 &);
	Vector4(const sce::Vectormath::Simd::floatInVec &);
	Vector4(float);
	Vector4(const sce::Vectormath::Simd::Aos::Quat &);
	Vector4(const sce::Vectormath::Simd::Aos::Point3 &);
	Vector4(const sce::Vectormath::Simd::Aos::Vector3 &);
	Vector4(const sce::Vectormath::Simd::Aos::Vector3 &, const sce::Vectormath::Simd::floatInVec &);
	Vector4(const sce::Vectormath::Simd::Aos::Vector3 &, float);
	Vector4(const sce::Vectormath::Simd::Aos::Vector2 &, const sce::Vectormath::Simd::Aos::Vector2 &);
	Vector4(const sce::Vectormath::Simd::Aos::Vector2 &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	Vector4(const sce::Vectormath::Simd::Aos::Vector2 &, float, float);
	Vector4(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	Vector4(float, float, float, float);
	Vector4();
	_vec_float4 get128();
	void set128(const _vec_float4 &);
protected:
	_vec_float4 & get128Ref();
public:
	sce::Vectormath::Simd::Aos::Vector4 & operator=(const sce::Vectormath::Simd::Aos::Vector4 &);
	sce::Vectormath::Simd::Aos::Vector4 & setXY(const sce::Vectormath::Simd::Aos::Vector2 &);
	sce::Vectormath::Simd::Aos::Vector4 & setXYZ(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector2 getXY();
	const sce::Vectormath::Simd::Aos::Vector3 getXYZ();
	sce::Vectormath::Simd::Aos::Vector4 & setX(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector4 & setX(float);
	sce::Vectormath::Simd::Aos::Vector4 & setY(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector4 & setY(float);
	sce::Vectormath::Simd::Aos::Vector4 & setZ(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector4 & setZ(float);
	sce::Vectormath::Simd::Aos::Vector4 & setW(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector4 & setW(float);
	const sce::Vectormath::Simd::floatInVec getX();
	const sce::Vectormath::Simd::floatInVec getY();
	const sce::Vectormath::Simd::floatInVec getZ();
	const sce::Vectormath::Simd::floatInVec getW();
	sce::Vectormath::Simd::Aos::Vector4 & setElem(long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector4 & setElem(long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long);
	const sce::Vectormath::Simd::floatInVec operator[](long);
	sce::Vectormath::Simd::Aos::VecIdx operator[](long);
	const sce::Vectormath::Simd::Aos::Vector4 operator+(const sce::Vectormath::Simd::Aos::Vector4 &);
	const sce::Vectormath::Simd::Aos::Vector4 operator-();
	const sce::Vectormath::Simd::Aos::Vector4 operator-(const sce::Vectormath::Simd::Aos::Vector4 &);
	const sce::Vectormath::Simd::Aos::Vector4 operator*(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Vector4 operator*(float);
	const sce::Vectormath::Simd::Aos::Vector4 operator/(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Vector4 operator/(float);
	sce::Vectormath::Simd::Aos::Vector4 & operator+=(const sce::Vectormath::Simd::Aos::Vector4 &);
	sce::Vectormath::Simd::Aos::Vector4 & operator-=(const sce::Vectormath::Simd::Aos::Vector4 &);
	sce::Vectormath::Simd::Aos::Vector4 & operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector4 & operator*=(float);
	sce::Vectormath::Simd::Aos::Vector4 & operator/=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Vector4 & operator/=(float);
	static const sce::Vectormath::Simd::Aos::Vector4 xAxis();
	static const sce::Vectormath::Simd::Aos::Vector4 yAxis();
	static const sce::Vectormath::Simd::Aos::Vector4 zAxis();
	static const sce::Vectormath::Simd::Aos::Vector4 wAxis();
	static const sce::Vectormath::Simd::Aos::Vector4 zero();
};
class sce::Vectormath::Simd::Aos::Point3
{
private:
	_vec_float4 mVec128; // 0x0
public:
	Point3(const _vec_float4 &);
	Point3(const sce::Vectormath::Simd::floatInVec &);
	Point3(float);
	Point3(const sce::Vectormath::Simd::Aos::Vector3 &);
	Point3(const sce::Vectormath::Simd::Aos::Vector2 &, const sce::Vectormath::Simd::floatInVec &);
	Point3(const sce::Vectormath::Simd::Aos::Vector2 &, float);
	Point3(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	Point3(float, float, float);
	Point3();
	_vec_float4 get128();
	void set128(const _vec_float4 &);
protected:
	_vec_float4 & get128Ref();
public:
	sce::Vectormath::Simd::Aos::Point3 & operator=(const sce::Vectormath::Simd::Aos::Point3 &);
	sce::Vectormath::Simd::Aos::Point3 & setXY(const sce::Vectormath::Simd::Aos::Vector2 &);
	const sce::Vectormath::Simd::Aos::Vector2 getXY();
	sce::Vectormath::Simd::Aos::Point3 & setX(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Point3 & setX(float);
	sce::Vectormath::Simd::Aos::Point3 & setY(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Point3 & setY(float);
	sce::Vectormath::Simd::Aos::Point3 & setZ(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Point3 & setZ(float);
	const sce::Vectormath::Simd::floatInVec getX();
	const sce::Vectormath::Simd::floatInVec getY();
	const sce::Vectormath::Simd::floatInVec getZ();
	sce::Vectormath::Simd::Aos::Point3 & setElem(long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Point3 & setElem(long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long);
	const sce::Vectormath::Simd::floatInVec operator[](long);
	sce::Vectormath::Simd::Aos::VecIdx operator[](long);
	const sce::Vectormath::Simd::Aos::Point3 operator-(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector3 operator-(const sce::Vectormath::Simd::Aos::Point3 &);
	const sce::Vectormath::Simd::Aos::Point3 operator+(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Point3 & operator+=(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Point3 & operator-=(const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Point3 origin();
};
class sce::Vectormath::Simd::Aos::Quat
{
private:
	_vec_float4 mVec128; // 0x0
public:
	Quat(const _vec_float4 &);
	Quat(const sce::Vectormath::Simd::floatInVec &);
	Quat(float);
	Quat(const sce::Vectormath::Simd::Aos::Matrix3 &);
	Quat(const sce::Vectormath::Simd::Aos::Vector4 &);
	Quat(const sce::Vectormath::Simd::Aos::Vector3 &, const sce::Vectormath::Simd::floatInVec &);
	Quat(const sce::Vectormath::Simd::Aos::Vector3 &, float);
	Quat(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	Quat(float, float, float, float);
	Quat();
	_vec_float4 get128();
	void set128(const _vec_float4 &);
protected:
	_vec_float4 & get128Ref();
public:
	sce::Vectormath::Simd::Aos::Quat & operator=(const sce::Vectormath::Simd::Aos::Quat &);
	sce::Vectormath::Simd::Aos::Quat & setXY(const sce::Vectormath::Simd::Aos::Vector2 &);
	sce::Vectormath::Simd::Aos::Quat & setXYZ(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector2 getXY();
	const sce::Vectormath::Simd::Aos::Vector3 getXYZ();
	sce::Vectormath::Simd::Aos::Quat & setX(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Quat & setX(float);
	sce::Vectormath::Simd::Aos::Quat & setY(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Quat & setY(float);
	sce::Vectormath::Simd::Aos::Quat & setZ(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Quat & setZ(float);
	sce::Vectormath::Simd::Aos::Quat & setW(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Quat & setW(float);
	const sce::Vectormath::Simd::floatInVec getX();
	const sce::Vectormath::Simd::floatInVec getY();
	const sce::Vectormath::Simd::floatInVec getZ();
	const sce::Vectormath::Simd::floatInVec getW();
	sce::Vectormath::Simd::Aos::Quat & setElem(long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Quat & setElem(long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long);
	const sce::Vectormath::Simd::floatInVec operator[](long);
	sce::Vectormath::Simd::Aos::VecIdx operator[](long);
	const sce::Vectormath::Simd::Aos::Quat operator+(const sce::Vectormath::Simd::Aos::Quat &);
	const sce::Vectormath::Simd::Aos::Quat operator-();
	const sce::Vectormath::Simd::Aos::Quat operator-(const sce::Vectormath::Simd::Aos::Quat &);
	const sce::Vectormath::Simd::Aos::Quat operator*(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Quat operator*(float);
	const sce::Vectormath::Simd::Aos::Quat operator*(const sce::Vectormath::Simd::Aos::Quat &);
	const sce::Vectormath::Simd::Aos::Quat operator/(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Quat operator/(float);
	sce::Vectormath::Simd::Aos::Quat & operator+=(const sce::Vectormath::Simd::Aos::Quat &);
	sce::Vectormath::Simd::Aos::Quat & operator-=(const sce::Vectormath::Simd::Aos::Quat &);
	sce::Vectormath::Simd::Aos::Quat & operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Quat & operator*=(float);
	sce::Vectormath::Simd::Aos::Quat & operator*=(const sce::Vectormath::Simd::Aos::Quat &);
	sce::Vectormath::Simd::Aos::Quat & operator/=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Quat & operator/=(float);
	static const sce::Vectormath::Simd::Aos::Quat identity();
	static const sce::Vectormath::Simd::Aos::Quat zero();
	static const sce::Vectormath::Simd::Aos::Vector3 euler(const sce::Vectormath::Simd::Aos::Quat &, sce::Vectormath::Simd::RotationOrder);
	static const sce::Vectormath::Simd::Aos::Vector4 axisAngle(const sce::Vectormath::Simd::Aos::Quat &);
	static const sce::Vectormath::Simd::Aos::Quat rotation(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Quat rotation(float, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Quat rotation(const sce::Vectormath::Simd::Aos::Vector3 &, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Quat rotation(const sce::Vectormath::Simd::Aos::Vector3 &, sce::Vectormath::Simd::RotationOrder);
	static const sce::Vectormath::Simd::Aos::Quat rotationX(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Quat rotationX(float);
	static const sce::Vectormath::Simd::Aos::Quat rotationY(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Quat rotationY(float);
	static const sce::Vectormath::Simd::Aos::Quat rotationZ(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Quat rotationZ(float);
};
class sce::Vectormath::Simd::Aos::Matrix2
{
private:
	sce::Vectormath::Simd::Aos::Vector4 mMat; // 0x0
public:
	Matrix2(const sce::Vectormath::Simd::Aos::Vector4 &);
	Matrix2(const _vec_float4 &);
	Matrix2(const sce::Vectormath::Simd::floatInVec &);
	Matrix2(float);
	Matrix2(const sce::Vectormath::Simd::Aos::Vector2 &, const sce::Vectormath::Simd::Aos::Vector2 &);
	Matrix2();
	_vec_float4 get128();
	sce::Vectormath::Simd::Aos::Matrix2 & operator=(const sce::Vectormath::Simd::Aos::Matrix2 &);
	sce::Vectormath::Simd::Aos::Matrix2 & setCol0(const sce::Vectormath::Simd::Aos::Vector2 &);
	sce::Vectormath::Simd::Aos::Matrix2 & setCol1(const sce::Vectormath::Simd::Aos::Vector2 &);
	const sce::Vectormath::Simd::Aos::Vector2 getCol0();
	const sce::Vectormath::Simd::Aos::Vector2 getCol1();
	sce::Vectormath::Simd::Aos::Matrix2 & setCol(long, const sce::Vectormath::Simd::Aos::Vector2 &);
	sce::Vectormath::Simd::Aos::Matrix2 & setRow(long, const sce::Vectormath::Simd::Aos::Vector2 &);
	const sce::Vectormath::Simd::Aos::Vector2 getCol(long);
	const sce::Vectormath::Simd::Aos::Vector2 getRow(long);
	const sce::Vectormath::Simd::Aos::Vector2 operator[](long);
	sce::Vectormath::Simd::Aos::Matrix2 & setElem(long, long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Matrix2 & setElem(long, long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long, long);
	const sce::Vectormath::Simd::Aos::Matrix2 operator+(const sce::Vectormath::Simd::Aos::Matrix2 &);
	const sce::Vectormath::Simd::Aos::Matrix2 operator-();
	const sce::Vectormath::Simd::Aos::Matrix2 operator-(const sce::Vectormath::Simd::Aos::Matrix2 &);
	const sce::Vectormath::Simd::Aos::Matrix2 operator*(const sce::Vectormath::Simd::Aos::Matrix2 &);
	const sce::Vectormath::Simd::Aos::Vector2 operator*(const sce::Vectormath::Simd::Aos::Vector2 &);
	const sce::Vectormath::Simd::Aos::Matrix2 operator*(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Matrix2 operator*(float);
	sce::Vectormath::Simd::Aos::Matrix2 & operator+=(const sce::Vectormath::Simd::Aos::Matrix2 &);
	sce::Vectormath::Simd::Aos::Matrix2 & operator-=(const sce::Vectormath::Simd::Aos::Matrix2 &);
	sce::Vectormath::Simd::Aos::Matrix2 & operator*=(const sce::Vectormath::Simd::Aos::Matrix2 &);
	sce::Vectormath::Simd::Aos::Matrix2 & operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Matrix2 & operator*=(float);
	static const sce::Vectormath::Simd::Aos::Matrix2 identity();
	static const sce::Vectormath::Simd::Aos::Matrix2 zero();
	static const sce::Vectormath::Simd::Aos::Matrix2 rotation(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix2 rotation(float);
	static const sce::Vectormath::Simd::Aos::Matrix2 scale(const sce::Vectormath::Simd::Aos::Vector2 &);
};
class sce::Vectormath::Simd::Aos::Matrix3
{
private:
	sce::Vectormath::Simd::Aos::Vector3 mCol0; // 0x0
	sce::Vectormath::Simd::Aos::Vector3 mCol1; // 0x10
	sce::Vectormath::Simd::Aos::Vector3 mCol2; // 0x20
public:
	Matrix3(const sce::Vectormath::Simd::floatInVec &);
	Matrix3(float);
	Matrix3(const sce::Vectormath::Simd::Aos::Quat &);
	Matrix3(const sce::Vectormath::Simd::Aos::Vector3 &, const sce::Vectormath::Simd::Aos::Vector3 &, const sce::Vectormath::Simd::Aos::Vector3 &);
	Matrix3();
	sce::Vectormath::Simd::Aos::Matrix3 & operator=(const sce::Vectormath::Simd::Aos::Matrix3 &);
	sce::Vectormath::Simd::Aos::Matrix3 & setCol0(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Matrix3 & setCol1(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Matrix3 & setCol2(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector3 getCol0();
	const sce::Vectormath::Simd::Aos::Vector3 getCol1();
	const sce::Vectormath::Simd::Aos::Vector3 getCol2();
	sce::Vectormath::Simd::Aos::Matrix3 & setCol(long, const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Matrix3 & setRow(long, const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector3 getCol(long);
	const sce::Vectormath::Simd::Aos::Vector3 getRow(long);
	const sce::Vectormath::Simd::Aos::Vector3 operator[](long);
	sce::Vectormath::Simd::Aos::Vector3 & operator[](long);
	sce::Vectormath::Simd::Aos::Matrix3 & setElem(long, long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Matrix3 & setElem(long, long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long, long);
	const sce::Vectormath::Simd::Aos::Matrix3 operator+(const sce::Vectormath::Simd::Aos::Matrix3 &);
	const sce::Vectormath::Simd::Aos::Matrix3 operator-();
	const sce::Vectormath::Simd::Aos::Matrix3 operator-(const sce::Vectormath::Simd::Aos::Matrix3 &);
	const sce::Vectormath::Simd::Aos::Matrix3 operator*(const sce::Vectormath::Simd::Aos::Matrix3 &);
	const sce::Vectormath::Simd::Aos::Vector3 operator*(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Matrix3 operator*(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Matrix3 operator*(float);
	sce::Vectormath::Simd::Aos::Matrix3 & operator+=(const sce::Vectormath::Simd::Aos::Matrix3 &);
	sce::Vectormath::Simd::Aos::Matrix3 & operator-=(const sce::Vectormath::Simd::Aos::Matrix3 &);
	sce::Vectormath::Simd::Aos::Matrix3 & operator*=(const sce::Vectormath::Simd::Aos::Matrix3 &);
	sce::Vectormath::Simd::Aos::Matrix3 & operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Matrix3 & operator*=(float);
	static const sce::Vectormath::Simd::Aos::Matrix3 identity();
	static const sce::Vectormath::Simd::Aos::Matrix3 zero();
	static const sce::Vectormath::Simd::Aos::Matrix3 rotationX(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotationX(float);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotationY(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotationY(float);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotationZ(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotationZ(float);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotationZYX(const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotation(const sce::Vectormath::Simd::Aos::Quat &);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotation(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix3 rotation(float, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix3 scale(const sce::Vectormath::Simd::Aos::Vector3 &);
};
class sce::Vectormath::Simd::Aos::Matrix4
{
private:
	sce::Vectormath::Simd::Aos::Vector4 mCol0; // 0x0
	sce::Vectormath::Simd::Aos::Vector4 mCol1; // 0x10
	sce::Vectormath::Simd::Aos::Vector4 mCol2; // 0x20
	sce::Vectormath::Simd::Aos::Vector4 mCol3; // 0x30
public:
	Matrix4(const sce::Vectormath::Simd::floatInVec &);
	Matrix4(float);
	Matrix4(const sce::Vectormath::Simd::Aos::Quat &, const sce::Vectormath::Simd::Aos::Vector3 &);
	Matrix4(const sce::Vectormath::Simd::Aos::Matrix3 &, const sce::Vectormath::Simd::Aos::Vector3 &);
	Matrix4(const sce::Vectormath::Simd::Aos::Transform3 &);
	Matrix4(const sce::Vectormath::Simd::Aos::Vector4 &, const sce::Vectormath::Simd::Aos::Vector4 &, const sce::Vectormath::Simd::Aos::Vector4 &, const sce::Vectormath::Simd::Aos::Vector4 &);
	Matrix4();
	sce::Vectormath::Simd::Aos::Matrix4 & operator=(const sce::Vectormath::Simd::Aos::Matrix4 &);
	sce::Vectormath::Simd::Aos::Matrix4 & setUpper3x3(const sce::Vectormath::Simd::Aos::Matrix3 &);
	const sce::Vectormath::Simd::Aos::Matrix3 getUpper3x3();
	sce::Vectormath::Simd::Aos::Matrix4 & setTranslation(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector3 getTranslation();
	sce::Vectormath::Simd::Aos::Matrix4 & setCol0(const sce::Vectormath::Simd::Aos::Vector4 &);
	sce::Vectormath::Simd::Aos::Matrix4 & setCol1(const sce::Vectormath::Simd::Aos::Vector4 &);
	sce::Vectormath::Simd::Aos::Matrix4 & setCol2(const sce::Vectormath::Simd::Aos::Vector4 &);
	sce::Vectormath::Simd::Aos::Matrix4 & setCol3(const sce::Vectormath::Simd::Aos::Vector4 &);
	const sce::Vectormath::Simd::Aos::Vector4 getCol0();
	const sce::Vectormath::Simd::Aos::Vector4 getCol1();
	const sce::Vectormath::Simd::Aos::Vector4 getCol2();
	const sce::Vectormath::Simd::Aos::Vector4 getCol3();
	sce::Vectormath::Simd::Aos::Matrix4 & setCol(long, const sce::Vectormath::Simd::Aos::Vector4 &);
	sce::Vectormath::Simd::Aos::Matrix4 & setRow(long, const sce::Vectormath::Simd::Aos::Vector4 &);
	const sce::Vectormath::Simd::Aos::Vector4 getCol(long);
	const sce::Vectormath::Simd::Aos::Vector4 getRow(long);
	const sce::Vectormath::Simd::Aos::Vector4 operator[](long);
	sce::Vectormath::Simd::Aos::Vector4 & operator[](long);
	sce::Vectormath::Simd::Aos::Matrix4 & setElem(long, long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Matrix4 & setElem(long, long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long, long);
	const sce::Vectormath::Simd::Aos::Matrix4 operator+(const sce::Vectormath::Simd::Aos::Matrix4 &);
	const sce::Vectormath::Simd::Aos::Matrix4 operator-();
	const sce::Vectormath::Simd::Aos::Matrix4 operator-(const sce::Vectormath::Simd::Aos::Matrix4 &);
	const sce::Vectormath::Simd::Aos::Matrix4 operator*(const sce::Vectormath::Simd::Aos::Transform3 &);
	const sce::Vectormath::Simd::Aos::Matrix4 operator*(const sce::Vectormath::Simd::Aos::Matrix4 &);
	const sce::Vectormath::Simd::Aos::Vector4 operator*(const sce::Vectormath::Simd::Aos::Point3 &);
	const sce::Vectormath::Simd::Aos::Vector4 operator*(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector4 operator*(const sce::Vectormath::Simd::Aos::Vector4 &);
	const sce::Vectormath::Simd::Aos::Matrix4 operator*(const sce::Vectormath::Simd::floatInVec &);
	const sce::Vectormath::Simd::Aos::Matrix4 operator*(float);
	sce::Vectormath::Simd::Aos::Matrix4 & operator+=(const sce::Vectormath::Simd::Aos::Matrix4 &);
	sce::Vectormath::Simd::Aos::Matrix4 & operator-=(const sce::Vectormath::Simd::Aos::Matrix4 &);
	sce::Vectormath::Simd::Aos::Matrix4 & operator*=(const sce::Vectormath::Simd::Aos::Transform3 &);
	sce::Vectormath::Simd::Aos::Matrix4 & operator*=(const sce::Vectormath::Simd::Aos::Matrix4 &);
	sce::Vectormath::Simd::Aos::Matrix4 & operator*=(const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Matrix4 & operator*=(float);
	static const sce::Vectormath::Simd::Aos::Matrix4 identity();
	static const sce::Vectormath::Simd::Aos::Matrix4 zero();
	static const sce::Vectormath::Simd::Aos::Matrix4 rotationX(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotationX(float);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotationY(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotationY(float);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotationZ(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotationZ(float);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotationZYX(const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotation(const sce::Vectormath::Simd::Aos::Quat &);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotation(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix4 rotation(float, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix4 scale(const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix4 translation(const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix4 lookAt(const sce::Vectormath::Simd::Aos::Point3 &, const sce::Vectormath::Simd::Aos::Point3 &, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Matrix4 perspective(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix4 perspective(float, float, float, float);
	static const sce::Vectormath::Simd::Aos::Matrix4 frustum(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix4 frustum(float, float, float, float, float, float);
	static const sce::Vectormath::Simd::Aos::Matrix4 orthographic(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Matrix4 orthographic(float, float, float, float, float, float);
};
class sce::Vectormath::Simd::Aos::Transform3
{
private:
	sce::Vectormath::Simd::Aos::Vector3 mCol0; // 0x0
	sce::Vectormath::Simd::Aos::Vector3 mCol1; // 0x10
	sce::Vectormath::Simd::Aos::Vector3 mCol2; // 0x20
	sce::Vectormath::Simd::Aos::Vector3 mCol3; // 0x30
public:
	Transform3(const sce::Vectormath::Simd::floatInVec &);
	Transform3(float);
	Transform3(const sce::Vectormath::Simd::Aos::Quat &, const sce::Vectormath::Simd::Aos::Vector3 &);
	Transform3(const sce::Vectormath::Simd::Aos::Matrix3 &, const sce::Vectormath::Simd::Aos::Vector3 &);
	Transform3(const sce::Vectormath::Simd::Aos::Vector3 &, const sce::Vectormath::Simd::Aos::Vector3 &, const sce::Vectormath::Simd::Aos::Vector3 &, const sce::Vectormath::Simd::Aos::Vector3 &);
	Transform3();
	sce::Vectormath::Simd::Aos::Transform3 & operator=(const sce::Vectormath::Simd::Aos::Transform3 &);
	sce::Vectormath::Simd::Aos::Transform3 & setUpper3x3(const sce::Vectormath::Simd::Aos::Matrix3 &);
	const sce::Vectormath::Simd::Aos::Matrix3 getUpper3x3();
	sce::Vectormath::Simd::Aos::Transform3 & setTranslation(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector3 getTranslation();
	sce::Vectormath::Simd::Aos::Transform3 & setCol0(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Transform3 & setCol1(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Transform3 & setCol2(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Transform3 & setCol3(const sce::Vectormath::Simd::Aos::Vector3 &);
	const sce::Vectormath::Simd::Aos::Vector3 getCol0();
	const sce::Vectormath::Simd::Aos::Vector3 getCol1();
	const sce::Vectormath::Simd::Aos::Vector3 getCol2();
	const sce::Vectormath::Simd::Aos::Vector3 getCol3();
	sce::Vectormath::Simd::Aos::Transform3 & setCol(long, const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Transform3 & setRow(long, const sce::Vectormath::Simd::Aos::Vector4 &);
	const sce::Vectormath::Simd::Aos::Vector3 getCol(long);
	const sce::Vectormath::Simd::Aos::Vector4 getRow(long);
	const sce::Vectormath::Simd::Aos::Vector3 operator[](long);
	sce::Vectormath::Simd::Aos::Vector3 & operator[](long);
	sce::Vectormath::Simd::Aos::Transform3 & setElem(long, long, const sce::Vectormath::Simd::floatInVec &);
	sce::Vectormath::Simd::Aos::Transform3 & setElem(long, long, float);
	const sce::Vectormath::Simd::floatInVec getElem(long, long);
	const sce::Vectormath::Simd::Aos::Transform3 operator*(const sce::Vectormath::Simd::Aos::Transform3 &);
	const sce::Vectormath::Simd::Aos::Point3 operator*(const sce::Vectormath::Simd::Aos::Point3 &);
	const sce::Vectormath::Simd::Aos::Vector3 operator*(const sce::Vectormath::Simd::Aos::Vector3 &);
	sce::Vectormath::Simd::Aos::Transform3 & operator*=(const sce::Vectormath::Simd::Aos::Transform3 &);
	static const sce::Vectormath::Simd::Aos::Transform3 identity();
	static const sce::Vectormath::Simd::Aos::Transform3 rotationX(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Transform3 rotationX(float);
	static const sce::Vectormath::Simd::Aos::Transform3 rotationY(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Transform3 rotationY(float);
	static const sce::Vectormath::Simd::Aos::Transform3 rotationZ(const sce::Vectormath::Simd::floatInVec &);
	static const sce::Vectormath::Simd::Aos::Transform3 rotationZ(float);
	static const sce::Vectormath::Simd::Aos::Transform3 rotationZYX(const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Transform3 rotation(const sce::Vectormath::Simd::Aos::Quat &);
	static const sce::Vectormath::Simd::Aos::Transform3 rotation(const sce::Vectormath::Simd::floatInVec &, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Transform3 rotation(float, const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Transform3 scale(const sce::Vectormath::Simd::Aos::Vector3 &);
	static const sce::Vectormath::Simd::Aos::Transform3 translation(const sce::Vectormath::Simd::Aos::Vector3 &);
};