#pragma once

Scaleform::Render::Quaternion<double> Scaleform::Render::Quaternion<double>::operator*(const Scaleform::Render::Quaternion<double> & rhs); // 0x140529A20
void Scaleform::Render::Quaternion<double>::Set(const Scaleform::Render::Point3<double> & from, const Scaleform::Render::Point3<double> & to); // 0x14052DD20
void Scaleform::Render::Quaternion<double>::Normalize(); // 0x14052D820
Scaleform::Render::Quaternion<double> & Scaleform::Render::Quaternion<double>::slerp(Scaleform::Render::Quaternion<double> q1, Scaleform::Render::Quaternion<double> q2, double t); // 0x140537A80
void Scaleform::Render::Quaternion<double>::SetFromAngleAxis(double angle, const Scaleform::Render::Point3<double> & axis); // 0x14052E0C0
class Scaleform::Render::Quaternion<double>
{
public:
	Quaternion<double>(const Scaleform::Render::Point3<double> &);
	Quaternion<double>(double, double, double);
	Quaternion<double>(const double *);
	Quaternion<double>(double, double, double, double);
	Quaternion<double>();
	double GetX();
	double GetY();
	double GetZ();
	double GetW();
	void SetX(double);
	void SetY(double);
	void SetZ(double);
	void SetW(double);
	void GetAngleAxis(double &, Scaleform::Render::Point3<double> &);
	void GetEulerAngles(Scaleform::Render::Point3<double> &);
	double DotProduct(const Scaleform::Render::Quaternion<double> &);
	double Magnitude();
	double MagnitudeD();
	double MagnitudeSquared();
	bool IsZero(double);
	bool IsIdentity(double);
	Scaleform::Render::Quaternion<double> & operator=(const Scaleform::Render::Quaternion<double> &);
	bool operator==(const Scaleform::Render::Quaternion<double> &);
	bool Equals(const Scaleform::Render::Quaternion<double> &, double);
	bool operator!=(const Scaleform::Render::Quaternion<double> &);
	Scaleform::Render::Quaternion<double> operator+(const Scaleform::Render::Quaternion<double> &);
	Scaleform::Render::Quaternion<double> operator*(double);
	Scaleform::Render::Point3<double> operator*(const Scaleform::Render::Point3<double> &);
	Scaleform::Render::Quaternion<double> operator*(const Scaleform::Render::Quaternion<double> &);
	Scaleform::Render::Quaternion<double> & operator*=(const Scaleform::Render::Quaternion<double> &);
	Scaleform::Render::Quaternion<double> & operator*=(double);
	void Set(const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &);
	void Set(const Scaleform::Render::Point3<double> &);
	void Set(double, double, double);
	void Set(double, double, double, double);
	void Normalize();
	void Invert();
	void SetIdentity();
	Scaleform::Render::Quaternion<double> & nlerp(Scaleform::Render::Quaternion<double>, Scaleform::Render::Quaternion<double>, double);
	Scaleform::Render::Quaternion<double> & slerp(Scaleform::Render::Quaternion<double>, Scaleform::Render::Quaternion<double>, double);
	void SetFromAngleAxis(double, const Scaleform::Render::Point3<double> &);
private:
	double X; // 0x0
	double Y; // 0x8
	double Z; // 0x10
	double W; // 0x18
};