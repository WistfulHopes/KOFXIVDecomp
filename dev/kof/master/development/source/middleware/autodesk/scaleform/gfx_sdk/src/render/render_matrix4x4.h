#pragma once

class Scaleform::Render::Matrix4x4Data<float>
{
public:
	static const unsigned long Rows; // 0xFFFFFFFFFFFFFFFF
	float M[4][4]; // 0x0
};
class Scaleform::Render::Matrix4x4Data<double>
{
public:
	static const unsigned long Rows; // 0xFFFFFFFFFFFFFFFF
	double M[4][4]; // 0x0
};
class Scaleform::Render::Matrix2x4<double> :
	Scaleform::Render::Matrix2x4Data<double>
{
public:
	static Scaleform::Render::Matrix2x4<double> Identity; // 0xFFFFFFFFFFFFFFFF
	enum NoInitType
	{
		NoInit = 0,
	};
	Matrix2x4<double>(double, double, double, double, double, double);
	Matrix2x4<double>(double, double, double, double, double, double, double, double);
	Matrix2x4<double>(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	Matrix2x4<double>(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	Matrix2x4<double>(const double *);
	Matrix2x4<double>(const Scaleform::Render::Matrix2x4<double> &);
	Matrix2x4<double>(Scaleform::Render::Matrix2x4<double>::NoInitType);
	Matrix2x4<double>();
	const double & Sx();
	double & Sx();
	const double & Shx();
	double & Shx();
	const double & Tx();
	double & Tx();
	const double & Shy();
	double & Shy();
	const double & Sy();
	double & Sy();
	const double & Ty();
	double & Ty();
	void SetMatrix(const double *);
	void SetMatrix(double, double, double, double, double, double);
	void SetMatrix(double, double, double, double, double, double, double, double);
	void SetMatrix(const Scaleform::Render::Matrix2x4<double> &);
	void SetIdentity();
	void SetZero();
	void GetAsFloat2x4(float[4] *);
	void SetInverse(const Scaleform::Render::Matrix2x4<double> &);
	Scaleform::Render::Matrix2x4<double> GetInverse();
	void SetLerp(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &, double);
	void Reset();
	void Swap(Scaleform::Render::Matrix2x4<double> *);
	Scaleform::Render::Matrix2x4<double> & Append(const Scaleform::Render::Matrix2x4<double> &);
	Scaleform::Render::Matrix2x4<double> & Append_NonOpt(const Scaleform::Render::Matrix2x4<double> &);
	Scaleform::Render::Matrix2x4<double> & Prepend(const Scaleform::Render::Matrix2x4<double> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	void SetToAppend_NonOpt(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	void SetToAppend_NonOpt(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	Scaleform::Render::Matrix2x4<double> & AppendScaling(Scaleform::Render::Size<double>);
	Scaleform::Render::Matrix2x4<double> & AppendScaling(double, double);
	Scaleform::Render::Matrix2x4<double> & AppendScaling(double);
	Scaleform::Render::Matrix2x4<double> & PrependScaling(Scaleform::Render::Size<double>);
	Scaleform::Render::Matrix2x4<double> & PrependScaling(double, double);
	Scaleform::Render::Matrix2x4<double> & PrependScaling(double);
	Scaleform::Render::Matrix2x4<double> & AppendShearing(double, double);
	Scaleform::Render::Matrix2x4<double> & PrependShearing(double, double);
	Scaleform::Render::Matrix2x4<double> & AppendRotation(double);
	Scaleform::Render::Matrix2x4<double> & PrependRotation(double);
	Scaleform::Render::Matrix2x4<double> & AppendTranslation(Scaleform::Render::Point<double>);
	Scaleform::Render::Matrix2x4<double> & AppendTranslation(double, double);
	Scaleform::Render::Matrix2x4<double> & PrependTranslation(Scaleform::Render::Point<double>);
	Scaleform::Render::Matrix2x4<double> & PrependTranslation(double, double);
	Scaleform::Render::Matrix2x4<double> & SetParlToParl(const double *, const double *);
	Scaleform::Render::Matrix2x4<double> & SetRectToParl(double, double, double, double, const double *);
	Scaleform::Render::Matrix2x4<double> & SetParlToRect(const double *, double, double, double, double);
	Scaleform::Render::Matrix2x4<double> & SetRectToRect(double, double, double, double, double, double, double, double);
	Scaleform::Render::Matrix2x4<double> & Invert();
	bool IsValid();
	bool DoesFlip();
	double GetDeterminant();
	double GetScale();
	double GetMaxScale();
	void SetXScale(double);
	void SetYScale(double);
	double GetXScale();
	double GetYScale();
	double GetRotation();
	double GetXScaleDouble();
	double GetYScaleDouble();
	double GetRotationDouble();
	bool IsFreeRotation(double);
	void Decompose(Scaleform::Render::Point<double> *, Scaleform::Render::Point<double> *, double *, Scaleform::Render::Matrix2x4<double> *);
	void Recompose(const Scaleform::Render::Point<double> &, const Scaleform::Render::Point<double> &, double, const Scaleform::Render::Matrix2x4<double> &);
	void Interpolate(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &, double);
	void Transform(double *, double *);
	Scaleform::Render::Point<double> Transform(const Scaleform::Render::Point<double> &);
	void Transform(Scaleform::Render::Point<double> *, const Scaleform::Render::Point<double> &);
	void Transform2x2(double *, double *);
	void TransformVector(Scaleform::Render::Point<double> *, const Scaleform::Render::Point<double> &);
	void TransformByInverse(double *, double *);
	Scaleform::Render::Point<double> TransformByInverse(const Scaleform::Render::Point<double> &);
	void TransformByInverse(Scaleform::Render::Point<double> *, const Scaleform::Render::Point<double> &);
	Scaleform::Render::Rect<double> EncloseTransform(const Scaleform::Render::Rect<double> &);
	void EncloseTransform(Scaleform::Render::Rect<double> *, const Scaleform::Render::Rect<double> &);
	void EncloseTransform_NonOpt(Scaleform::Render::Rect<double> *, const Scaleform::Render::Rect<double> &);
	void SetToAppend_Opt(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &, float *);
	void SetToAppend_Opt(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix2x4<double> &, float *);
	Scaleform::Render::Matrix2x4<double> & Append_Opt(const Scaleform::Render::Matrix2x4<double> &, float *);
	static Scaleform::Render::Matrix2x4<double> Translation(double, double);
	static Scaleform::Render::Matrix2x4<double> Translation(const Scaleform::Render::Point<double> &);
	static Scaleform::Render::Matrix2x4<double> Scaling(Scaleform::Render::Size<double>);
	static Scaleform::Render::Matrix2x4<double> Scaling(double, double);
	static Scaleform::Render::Matrix2x4<double> Scaling(double);
	static Scaleform::Render::Matrix2x4<double> Shearing(double, double);
	static Scaleform::Render::Matrix2x4<double> Rotation(double);
	const Scaleform::Render::Matrix2x4<double> & operator=(const Scaleform::Render::Matrix2x4<double> &);
	const Scaleform::Render::Matrix2x4<double> & operator*=(const Scaleform::Render::Matrix2x4<double> &);
private:
	static float _cos(float);
	static double _cos(double);
	static float _sin(float);
	static double _sin(double);
	static float _tan(float);
	static double _tan(double);
	static float _abs(float);
	static double _abs(double);
	static double _atan2(double, double);
	static float _atan2(float, float);
	static double _sqrt(double);
	static float _sqrt(float);
};
class Scaleform::Render::Matrix3x4<double> :
	Scaleform::Render::Matrix3x4Data<double>
{
public:
	static Scaleform::Render::Matrix3x4<double> Identity; // 0xFFFFFFFFFFFFFFFF
	enum NoInitType
	{
		NoInit = 0,
	};
	Matrix3x4<double>(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	Matrix3x4<double>(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	Matrix3x4<double>(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	Matrix3x4<double>(const Scaleform::Render::Matrix4x4<double> &);
	Matrix3x4<double>(const Scaleform::Render::Matrix2x4<double> &);
	Matrix3x4<double>(const Scaleform::Render::Matrix3x4<double> &);
	Matrix3x4<double>(double, double, double, double, double, double, double, double, double, double, double, double);
	Matrix3x4<double>(const double[4] *);
	Matrix3x4<double>(const double *, long);
	Matrix3x4<double>();
	Matrix3x4<double>(Scaleform::Render::Matrix3x4<double>::NoInitType);
	bool IsValid();
	double * operator double *();
	const double * operator const double *();
	const double * Data();
	double * Data();
	double operator[](long);
	double operator[](long);
	void Set(const Scaleform::Render::Matrix3x4<double> &);
	void Set(const double[4] *);
	void Set(const double *, long);
	void Transpose(Scaleform::Render::Matrix4x4<double> *);
	void Transpose();
	void SetIdentity();
	void Clear();
	double GetXScale();
	double GetYScale();
	double GetZScale();
	void SetXScale(double);
	void SetYScale(double);
	void SetZScale(double);
	double GetScale();
	void GetScale(double *, double *, double *);
	static Scaleform::Render::Matrix3x4<double> Scaling(double, double, double);
	void GetTranslation(double *, double *, double *);
	const double & Tx();
	double & Tx();
	const double & Ty();
	double & Ty();
	const double & Tz();
	double & Tz();
	static Scaleform::Render::Matrix3x4<double> Translation(double, double, double);
	void MultiplyMatrix(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	void Prepend(const Scaleform::Render::Matrix2x4<double> &);
	void Prepend(const Scaleform::Render::Matrix3x4<double> &);
	void Append(const Scaleform::Render::Matrix2x4<double> &);
	void Append(const Scaleform::Render::Matrix3x4<double> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	void SetToAppend(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	void SetToAppend(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	void SetToPrepend(const Scaleform::Render::Matrix2x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	void SetToPrepend(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix2x4<double> &);
	void SetToPrepend(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix3x4<double> &);
	const Scaleform::Render::Matrix3x4<double> & operator=(const Scaleform::Render::Matrix3x4<double> &);
	Scaleform::Render::Matrix3x4<double> GetInverse();
	void SetInverse(const Scaleform::Render::Matrix3x4<double> &);
	void Invert();
	Scaleform::Render::Point<double> Transform(const Scaleform::Render::Point<double> &);
	void Transform(Scaleform::Render::Point<double> *, const Scaleform::Render::Point<double> &);
	Scaleform::Render::Point3<double> Transform(const Scaleform::Render::Point3<double> &);
	void Transform(Scaleform::Render::Point3<double> *, const Scaleform::Render::Point3<double> &);
	Scaleform::Render::Point3<double> TransformVector(const Scaleform::Render::Point3<double> &);
	Scaleform::Render::Point3<double> TransformNormal(const Scaleform::Render::Point3<double> &);
	Scaleform::Render::Point<double> TransformByInverse(const Scaleform::Render::Point<double> &);
	Scaleform::Render::Rect<double> EncloseTransform(const Scaleform::Render::Rect<double> &);
	void EncloseTransform(Scaleform::Render::Rect<double> *, const Scaleform::Render::Rect<double> &);
	double GetDeterminant();
	void GetRotation(double *, double *, double *);
	static Scaleform::Render::Matrix3x4<double> RotationX(double);
	static Scaleform::Render::Matrix3x4<double> RotationY(double);
	static Scaleform::Render::Matrix3x4<double> RotationZ(double);
	static Scaleform::Render::Matrix3x4<double> Rotation(double, const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &);
	static Scaleform::Render::Matrix3x4<double> Rotation(double, const Scaleform::Render::Point3<double> &);
	void ViewRH(const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &);
	void ViewLH(const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &);
	void View(const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &);
	void PerspectiveRH(double, double, double, double);
	void PerspectiveLH(double, double, double, double);
	void PerspectiveViewVolRH(double, double, double, double);
	void PerspectiveViewVolLH(double, double, double, double);
	void PerspectiveOffCenterLH(double, double, double, double, double, double);
	void PerspectiveOffCenterRH(double, double, double, double, double, double);
	void OrthoRH(double, double, double, double);
	void OrthoLH(double, double, double, double);
	void OrthoOffCenterRH(double, double, double, double, double, double);
	void OrthoOffCenterLH(double, double, double, double, double, double);
	bool Decompose(double[3] &, double[3] &, double[3] &, double[4] &, Scaleform::Render::RotationType);
	void Recompose(const double[3] &, const double[3] &, const double[3] &, const double[4] &, Scaleform::Render::RotationType);
	void Interpolate(const Scaleform::Render::Matrix3x4<double> &, const Scaleform::Render::Matrix3x4<double> &, double);
private:
	void GetEulerAngles(double *, double *, double *);
	void GetAngles(double *, double *, double *);
};
class Scaleform::Render::Point3<double>
{
public:
	double x; // 0x0
	double y; // 0x8
	double z; // 0x10
	Point3<double>(const Scaleform::Render::Point3<double> &);
	Point3<double>(double, double, double);
	Point3<double>(double);
	Point3<double>();
	void SetPoint(const Scaleform::Render::Point3<double> &);
	void SetPoint(double, double, double);
	void SetPoint(double);
	void Clear();
	Scaleform::Render::Point3<double> & Offset(double, double, double);
	Scaleform::Render::Point3<double> & Offset(double);
	Scaleform::Render::Point3<double> & Offset(const Scaleform::Render::Point3<double> &);
	Scaleform::Render::Point3<double> & Mul(double, double, double);
	Scaleform::Render::Point3<double> & Mul(double);
	Scaleform::Render::Point3<double> & Mul(const Scaleform::Render::Point3<double> &);
	Scaleform::Render::Point3<double> & Div(double, double, double);
	Scaleform::Render::Point3<double> & Div(double);
	Scaleform::Render::Point3<double> & Div(const Scaleform::Render::Point3<double> &);
	double DistanceSquared();
	double DistanceSquared(const Scaleform::Render::Point3<double> &);
	double DistanceSquared(double, double, double);
	double Distance();
	double Distance(const Scaleform::Render::Point3<double> &);
	double Distance(double, double, double);
	bool IsZero(double);
	double Magnitude();
	void Normalize();
	double Dot(const Scaleform::Render::Point3<double> &);
	double Dot(double, double, double);
	void Cross(const Scaleform::Render::Point3<double> &, const Scaleform::Render::Point3<double> &);
	double AngleBetween(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> & operator=(double);
	const Scaleform::Render::Point3<double> & operator=(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> operator-(double);
	const Scaleform::Render::Point3<double> operator-(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> operator-();
	const Scaleform::Render::Point3<double> & operator+=(double);
	const Scaleform::Render::Point3<double> & operator+=(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> & operator-=(double);
	const Scaleform::Render::Point3<double> & operator-=(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> & operator*=(double);
	const Scaleform::Render::Point3<double> & operator*=(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> & operator/=(double);
	const Scaleform::Render::Point3<double> & operator/=(const Scaleform::Render::Point3<double> &);
	bool operator==(const Scaleform::Render::Point3<double> &);
	bool operator!=(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> operator+(double);
	const Scaleform::Render::Point3<double> operator+(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> operator*(double);
	const Scaleform::Render::Point3<double> operator*(const Scaleform::Render::Point3<double> &);
	const Scaleform::Render::Point3<double> operator/(double);
	const Scaleform::Render::Point3<double> operator/(const Scaleform::Render::Point3<double> &);
};
bool Scaleform::Render::Matrix4x4<double>::IsValid(); // 0x14052CAB0
void Scaleform::Render::Matrix4x4<double>::Transpose(); // 0x14052E4A0
void Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix4x4<double> & m1, const Scaleform::Render::Matrix4x4<double> & m2); // 0x14052D450
Scaleform::Render::Matrix4x4<double> Scaleform::Render::Matrix4x4<double>::Rotation(double angle, const Scaleform::Render::Point3<double> & axis); // 0x14052DBA0
Scaleform::Render::Matrix4x4<double> Scaleform::Render::Matrix4x4<double>::Rotation(double angle, const Scaleform::Render::Point3<double> & axis, const Scaleform::Render::Point3<double> & pivot); // 0x14052DA40
void Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterRH(float focalLength, float viewMinX, float viewMaxX, float viewMinY, float viewMaxY, float fNearZ, float fFarZ); // 0x1402E5B50
void Scaleform::Render::Matrix4x4<float>::PerspectiveOffCenterLH(float focalLength, float viewMinX, float viewMaxX, float viewMinY, float viewMaxY, float fNearZ, float fFarZ); // 0x1402E5A60
void Scaleform::Render::Matrix4x4<float>::OrthoOffCenterRH(float viewMinX, float viewMaxX, float viewMinY, float viewMaxY, float fNearZ, float fFarZ); // 0x1402E5980
void Scaleform::Render::Matrix4x4<float>::OrthoOffCenterLH(float viewMinX, float viewMaxX, float viewMinY, float viewMaxY, float fNearZ, float fFarZ); // 0x1402E58A0
double Scaleform::Render::Matrix4x4<double>::GetDeterminant(); // 0x14052B330
Scaleform::Render::Matrix4x4<float> Scaleform::Render::Matrix4x4<float>::GetInverse(); // 0x1403D0CF0
Scaleform::Render::Matrix4x4<double> Scaleform::Render::Matrix4x4<double>::GetInverse(); // 0x14052BA30
bool Scaleform::Render::Matrix4x4<double>::Decompose(double[3] & t, double[3] & s, double[3] & k, double[4] & p, double[4] & q, Scaleform::Render::RotationType rotType); // 0x14052B010
void Scaleform::Render::Matrix4x4<double>::Interpolate(const Scaleform::Render::Matrix4x4<double> & a, const Scaleform::Render::Matrix4x4<double> & b, double t); // 0x14052C280
void Scaleform::Render::GetRotationMatrix<double>(Scaleform::Render::Matrix4x4<double> & m, const Scaleform::Render::Quaternion<double> & q); // 0x140529570
class Scaleform::Render::Matrix4x4Ref<float> :
	Scaleform::Render::Matrix4x4<float>,
	Scaleform::RefCountBase<Scaleform::Render::Matrix4x4<float>,2>
{
public:
	Scaleform::Render::Matrix4x4Ref<float> & operator=(Scaleform::Render::Matrix4x4Ref<float> &);
	Scaleform::Render::Matrix4x4Ref<float> & operator=(const Scaleform::Render::Matrix4x4Ref<float> &);
	void operator=(const Scaleform::Render::Matrix4x4<float> &);
	Matrix4x4Ref<float>(Scaleform::Render::Matrix4x4Ref<float> &);
	Matrix4x4Ref<float>(const Scaleform::Render::Matrix4x4Ref<float> &);
	Matrix4x4Ref<float>();
	virtual ~Matrix4x4Ref<float>();
};