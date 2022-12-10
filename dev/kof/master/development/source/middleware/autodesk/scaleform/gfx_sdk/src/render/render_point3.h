#pragma once

class Scaleform::Render::Point3<float>
{
public:
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
	Point3<float>(const Scaleform::Render::Point3<float> &);
	Point3<float>(float, float, float);
	Point3<float>(float);
	Point3<float>();
	void SetPoint(const Scaleform::Render::Point3<float> &);
	void SetPoint(float, float, float);
	void SetPoint(float);
	void Clear();
	Scaleform::Render::Point3<float> & Offset(float, float, float);
	Scaleform::Render::Point3<float> & Offset(float);
	Scaleform::Render::Point3<float> & Offset(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> & Mul(float, float, float);
	Scaleform::Render::Point3<float> & Mul(float);
	Scaleform::Render::Point3<float> & Mul(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> & Div(float, float, float);
	Scaleform::Render::Point3<float> & Div(float);
	Scaleform::Render::Point3<float> & Div(const Scaleform::Render::Point3<float> &);
	float DistanceSquared();
	float DistanceSquared(const Scaleform::Render::Point3<float> &);
	float DistanceSquared(float, float, float);
	float Distance();
	float Distance(const Scaleform::Render::Point3<float> &);
	float Distance(float, float, float);
	bool IsZero(float);
	float Magnitude();
	void Normalize();
	float Dot(const Scaleform::Render::Point3<float> &);
	float Dot(float, float, float);
	void Cross(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	float AngleBetween(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> & operator=(float);
	const Scaleform::Render::Point3<float> & operator=(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> operator-(float);
	const Scaleform::Render::Point3<float> operator-(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> operator-();
	const Scaleform::Render::Point3<float> & operator+=(float);
	const Scaleform::Render::Point3<float> & operator+=(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> & operator-=(float);
	const Scaleform::Render::Point3<float> & operator-=(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> & operator*=(float);
	const Scaleform::Render::Point3<float> & operator*=(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> & operator/=(float);
	const Scaleform::Render::Point3<float> & operator/=(const Scaleform::Render::Point3<float> &);
	bool operator==(const Scaleform::Render::Point3<float> &);
	bool operator!=(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> operator+(float);
	const Scaleform::Render::Point3<float> operator+(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> operator*(float);
	const Scaleform::Render::Point3<float> operator*(const Scaleform::Render::Point3<float> &);
	const Scaleform::Render::Point3<float> operator/(float);
	const Scaleform::Render::Point3<float> operator/(const Scaleform::Render::Point3<float> &);
};