#pragma once

enum Scaleform::Render::RotationType
{
	RotationType_Unknown = 0,
	RotationType_Euler = 1,
	RotationType_AxisAngle = 2,
	RotationType_Quaternion = 3,
};
class Scaleform::Render::Matrix3x4Data<double>
{
public:
	static const unsigned long Rows; // 0xFFFFFFFFFFFFFFFF
	double M[4][3]; // 0x0
};
class Scaleform::Render::Matrix4x4<float> :
	Scaleform::Render::Matrix4x4Data<float>
{
public:
	static Scaleform::Render::Matrix4x4<float> Identity; // 0xFFFFFFFFFFFFFFFF
	enum NoInitType
	{
		NoInit = 0,
	};
	Matrix4x4<float>(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	Matrix4x4<float>(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	Matrix4x4<float>(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Matrix4x4<float>(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	Matrix4x4<float>(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	Matrix4x4<float>(const Scaleform::Render::Matrix3x4<float> &);
	Matrix4x4<float>(const Scaleform::Render::Matrix2x4<float> &);
	Matrix4x4<float>(const Scaleform::Render::Matrix4x4<float> &);
	Matrix4x4<float>(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);
	Matrix4x4<float>(const float[4] *);
	Matrix4x4<float>(const float *, long);
	Matrix4x4<float>();
	Matrix4x4<float>(Scaleform::Render::Matrix4x4<float>::NoInitType);
	bool IsValid();
	float * operator float *();
	const float * operator const float *();
	Scaleform::Render::Matrix3x4<float> operator class Scaleform::Render::Matrix3x4<float>();
	const float * Data();
	float * Data();
	float operator[](long);
	float operator[](long);
	void GetAsFloat2x4(float[4] *);
	void GetAsFloat4x4(float[4] *);
	void Set(const Scaleform::Render::Matrix4x4<float> &);
	void Set(const float[4] *);
	void Set(const float *, long);
	void Transpose();
	void SetIdentity();
	void Clear();
	float GetXScale();
	float GetYScale();
	float GetZScale();
	void SetXScale(float);
	void SetYScale(float);
	void SetZScale(float);
	void GetScale(float *, float *, float *);
	static Scaleform::Render::Matrix4x4<float> Scaling(float, float, float);
	void GetTranslation(float *, float *, float *);
	const float & Tx();
	float & Tx();
	const float & Ty();
	float & Ty();
	const float & Tz();
	float & Tz();
	static Scaleform::Render::Matrix4x4<float> Translation(float, float, float);
	void MultiplyMatrix(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void Prepend(const Scaleform::Render::Matrix2x4<float> &);
	void Prepend(const Scaleform::Render::Matrix3x4<float> &);
	void Prepend(const Scaleform::Render::Matrix4x4<float> &);
	void Append(const Scaleform::Render::Matrix2x4<float> &);
	void Append(const Scaleform::Render::Matrix3x4<float> &);
	void Append(const Scaleform::Render::Matrix4x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix4x4<float> &);
	const Scaleform::Render::Matrix4x4<float> & operator=(const Scaleform::Render::Matrix4x4<float> &);
	Scaleform::Render::Matrix4x4<float> GetInverse();
	void SetInverse(const Scaleform::Render::Matrix4x4<float> &);
	void Invert();
	Scaleform::Render::Point<float> Transform(const Scaleform::Render::Point<float> &);
	void Transform(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	Scaleform::Render::Point3<float> Transform(const Scaleform::Render::Point3<float> &);
	void Transform(Scaleform::Render::Point3<float> *, const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> TransformVector(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> TransformHomogeneous(const Scaleform::Render::Point3<float> &);
	void TransformHomogeneous(Scaleform::Render::Point3<float> *, const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point<float> TransformByInverse(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Point3<float> TransformByInverse(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> TransformNormal(const Scaleform::Render::Point3<float> &);
	void TransformHomogeneousAndScaleCorners(const Scaleform::Render::Rect<float> &, float, float, float *);
	void TransformHomogeneousAndScaleCorners_NonOpt(const Scaleform::Render::Rect<float> &, float, float, float *);
	Scaleform::Render::Rect<float> EncloseTransform(const Scaleform::Render::Rect<float> &);
	void EncloseTransform(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	void EncloseTransformHomogeneous(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	void EncloseTransformHomogeneous_NonOpt(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	float GetDeterminant();
	void Negate();
	void GetRotation(float *, float *, float *);
	static Scaleform::Render::Matrix4x4<float> RotationX(float);
	static Scaleform::Render::Matrix4x4<float> RotationY(float);
	static Scaleform::Render::Matrix4x4<float> RotationZ(float);
	static Scaleform::Render::Matrix4x4<float> Rotation(float, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	static Scaleform::Render::Matrix4x4<float> Rotation(float, const Scaleform::Render::Point3<float> &);
	void ViewRH(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void ViewLH(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void View(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void PerspectiveRH(float, float, float, float);
	void PerspectiveLH(float, float, float, float);
	void PerspectiveFocalLengthRH(float, float, float, float, float);
	void PerspectiveFocalLengthLH(float, float, float, float, float);
	void PerspectiveViewVolRH(float, float, float, float);
	void PerspectiveViewVolLH(float, float, float, float);
	void PerspectiveOffCenterLH(float, float, float, float, float, float, float);
	void PerspectiveOffCenterRH(float, float, float, float, float, float, float);
	void OrthoRH(float, float, float, float);
	void OrthoLH(float, float, float, float);
	void OrthoOffCenterRH(float, float, float, float, float, float);
	void OrthoOffCenterLH(float, float, float, float, float, float);
	bool Decompose(float[3] &, float[3] &, float[3] &, float[4] &, float[4] &, Scaleform::Render::RotationType);
	void Recompose(const float[3] &, const float[3] &, const float[3] &, const float[4] &, const float[4] &, Scaleform::Render::RotationType);
	void Interpolate(const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Matrix4x4<float> &, float);
private:
	void GetEulerAngles(float *, float *, float *);
	void GetAngles(float *, float *, float *);
	float GetMinor(const Scaleform::Render::Matrix4x4<float> &, const unsigned long long, const unsigned long long, const unsigned long long, const unsigned long long, const unsigned long long, const unsigned long long);
	Scaleform::Render::Matrix4x4<float> Adjoint();
};
Scaleform::Render::Point3<double> Scaleform::Render::Matrix3x4<double>::TransformNormal(const Scaleform::Render::Point3<double> & p); // 0x14052E310
bool Scaleform::Render::Matrix3x4<float>::IsValid(); // 0x1403352D0
bool Scaleform::Render::Matrix3x4<double>::IsValid(); // 0x14052C9A0
void Scaleform::Render::Matrix3x4<double>::MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix3x4<double> & m1, const Scaleform::Render::Matrix3x4<double> & m2); // 0x14052D220
void Scaleform::Render::Matrix3x4<float>::GetEulerAngles(float * eX, float * eY, float * eZ); // 0x140485D50
void Scaleform::Render::Matrix3x4<float>::View(const Scaleform::Render::Point3<float> & eyePt, const Scaleform::Render::Point3<float> & zAxis, const Scaleform::Render::Point3<float> & upVec); // 0x1402ED2D0
void Scaleform::Render::Matrix3x4<float>::EncloseTransform(Scaleform::Render::Rect<float> * pr, const Scaleform::Render::Rect<float> & r); // 0x1402E1610
Scaleform::Render::Matrix3x4<float> Scaleform::Render::Matrix3x4<float>::GetInverse(); // 0x1402E2740
Scaleform::Render::Matrix3x4<double> Scaleform::Render::Matrix3x4<double>::GetInverse(); // 0x14052B500
bool Scaleform::Render::Matrix3x4<double>::Decompose(double[3] & t, double[3] & s, double[3] & k, double[4] & q, Scaleform::Render::RotationType rotType); // 0x14052A670
void Scaleform::Render::GetRotationMatrix<double>(Scaleform::Render::Matrix3x4<double> & m, const Scaleform::Render::Quaternion<double> & q); // 0x1405293C0
class Scaleform::Render::Matrix3x4<float> :
	Scaleform::Render::Matrix3x4Data<float>
{
public:
	static Scaleform::Render::Matrix3x4<float> Identity; // 0xFFFFFFFFFFFFFFFF
	enum NoInitType
	{
		NoInit = 0,
	};
	Matrix3x4<float>(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix4x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix2x4<float> &);
	Matrix3x4<float>(const Scaleform::Render::Matrix3x4<float> &);
	Matrix3x4<float>(float, float, float, float, float, float, float, float, float, float, float, float);
	Matrix3x4<float>(const float[4] *);
	Matrix3x4<float>(const float *, long);
	Matrix3x4<float>();
	Matrix3x4<float>(Scaleform::Render::Matrix3x4<float>::NoInitType);
	bool IsValid();
	float * operator float *();
	const float * operator const float *();
	const float * Data();
	float * Data();
	float operator[](long);
	float operator[](long);
	void Set(const Scaleform::Render::Matrix3x4<float> &);
	void Set(const float[4] *);
	void Set(const float *, long);
	void Transpose(Scaleform::Render::Matrix4x4<float> *);
	void Transpose();
	void SetIdentity();
	void Clear();
	float GetXScale();
	float GetYScale();
	float GetZScale();
	void SetXScale(float);
	void SetYScale(float);
	void SetZScale(float);
	float GetScale();
	void GetScale(float *, float *, float *);
	static Scaleform::Render::Matrix3x4<float> Scaling(float, float, float);
	void GetTranslation(float *, float *, float *);
	const float & Tx();
	float & Tx();
	const float & Ty();
	float & Ty();
	const float & Tz();
	float & Tz();
	static Scaleform::Render::Matrix3x4<float> Translation(float, float, float);
	void MultiplyMatrix(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void MultiplyMatrix(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void MultiplyMatrix_NonOpt(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void Prepend(const Scaleform::Render::Matrix2x4<float> &);
	void Prepend(const Scaleform::Render::Matrix3x4<float> &);
	void Append(const Scaleform::Render::Matrix2x4<float> &);
	void Append(const Scaleform::Render::Matrix3x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToPrepend(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &);
	const Scaleform::Render::Matrix3x4<float> & operator=(const Scaleform::Render::Matrix3x4<float> &);
	Scaleform::Render::Matrix3x4<float> GetInverse();
	void SetInverse(const Scaleform::Render::Matrix3x4<float> &);
	void Invert();
	Scaleform::Render::Point<float> Transform(const Scaleform::Render::Point<float> &);
	void Transform(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	Scaleform::Render::Point3<float> Transform(const Scaleform::Render::Point3<float> &);
	void Transform(Scaleform::Render::Point3<float> *, const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> TransformVector(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point3<float> TransformNormal(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point<float> TransformByInverse(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Rect<float> EncloseTransform(const Scaleform::Render::Rect<float> &);
	void EncloseTransform(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	float GetDeterminant();
	void GetRotation(float *, float *, float *);
	static Scaleform::Render::Matrix3x4<float> RotationX(float);
	static Scaleform::Render::Matrix3x4<float> RotationY(float);
	static Scaleform::Render::Matrix3x4<float> RotationZ(float);
	static Scaleform::Render::Matrix3x4<float> Rotation(float, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	static Scaleform::Render::Matrix3x4<float> Rotation(float, const Scaleform::Render::Point3<float> &);
	void ViewRH(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void ViewLH(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void View(const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &, const Scaleform::Render::Point3<float> &);
	void PerspectiveRH(float, float, float, float);
	void PerspectiveLH(float, float, float, float);
	void PerspectiveViewVolRH(float, float, float, float);
	void PerspectiveViewVolLH(float, float, float, float);
	void PerspectiveOffCenterLH(float, float, float, float, float, float);
	void PerspectiveOffCenterRH(float, float, float, float, float, float);
	void OrthoRH(float, float, float, float);
	void OrthoLH(float, float, float, float);
	void OrthoOffCenterRH(float, float, float, float, float, float);
	void OrthoOffCenterLH(float, float, float, float, float, float);
	bool Decompose(float[3] &, float[3] &, float[3] &, float[4] &, Scaleform::Render::RotationType);
	void Recompose(const float[3] &, const float[3] &, const float[3] &, const float[4] &, Scaleform::Render::RotationType);
	void Interpolate(const Scaleform::Render::Matrix3x4<float> &, const Scaleform::Render::Matrix3x4<float> &, float);
private:
	void GetEulerAngles(float *, float *, float *);
	void GetAngles(float *, float *, float *);
};
class Scaleform::Render::Matrix3x4Ref<float> :
	Scaleform::Render::Matrix3x4<float>,
	Scaleform::RefCountBase<Scaleform::Render::Matrix3x4<float>,2>
{
public:
	Scaleform::Render::Matrix3x4Ref<float> & operator=(Scaleform::Render::Matrix3x4Ref<float> &);
	Scaleform::Render::Matrix3x4Ref<float> & operator=(const Scaleform::Render::Matrix3x4Ref<float> &);
	void operator=(const Scaleform::Render::Matrix3x4<float> &);
	Matrix3x4Ref<float>(Scaleform::Render::Matrix3x4Ref<float> &);
	Matrix3x4Ref<float>(const Scaleform::Render::Matrix3x4Ref<float> &);
	Matrix3x4Ref<float>();
	virtual ~Matrix3x4Ref<float>();
};
class Scaleform::Render::Matrix3x4Data<float>
{
public:
	static const unsigned long Rows; // 0xFFFFFFFFFFFFFFFF
	float M[4][3]; // 0x0
};