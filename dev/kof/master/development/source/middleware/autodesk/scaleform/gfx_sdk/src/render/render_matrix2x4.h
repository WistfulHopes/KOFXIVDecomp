#pragma once

class Scaleform::Render::Matrix2x4Data<double>
{
public:
	static const unsigned long Rows; // 0xFFFFFFFFFFFFFFFF
	double M[4][2]; // 0x0
};
const Scaleform::Render::Matrix2x4<float> Scaleform::Render::operator*(const Scaleform::Render::Matrix2x4<float> & m1, const Scaleform::Render::Matrix2x4<float> & m2); // 0x14039B790
Scaleform::Render::Matrix2x4<float> & Scaleform::Render::Matrix2x4<float>::Invert(); // 0x14034FEF0
Scaleform::Render::Matrix2x4<float> & Scaleform::Render::Matrix2x4<float>::PrependScaling(float sx, float sy); // 0x140326870
Scaleform::Render::Matrix2x4<float> & Scaleform::Render::Matrix2x4<float>::AppendScaling(float sx, float sy); // 0x140460890
Scaleform::Render::Matrix2x4<float> & Scaleform::Render::Matrix2x4<float>::AppendRotation(float radians); // 0x140332820
Scaleform::Render::Matrix2x4<double> & Scaleform::Render::Matrix2x4<double>::AppendRotation(double radians); // 0x14052A540
bool Scaleform::Render::Matrix2x4<float>::IsFreeRotation(float epsilon); // 0x14034FF20
bool Scaleform::Render::Matrix2x4<float>::IsValid(); // 0x140335240
Scaleform::Render::Matrix2x4<float> & Scaleform::Render::Matrix2x4<float>::Prepend(const Scaleform::Render::Matrix2x4<float> & m); // 0x1402E5C50
void Scaleform::Render::Matrix2x4<float>::TransformByInverse(Scaleform::Render::Point<float> * result, const Scaleform::Render::Point<float> & p); // 0x1402EB890
void Scaleform::Render::Matrix2x4<float>::SetInverse(const Scaleform::Render::Matrix2x4<float> & m); // 0x1402EA260
void Scaleform::Render::Matrix2x4<double>::SetInverse(const Scaleform::Render::Matrix2x4<double> & m); // 0x14052E210
Scaleform::Render::Matrix2x4<float> & Scaleform::Render::Matrix2x4<float>::SetParlToParl(const float * src, const float * dst); // 0x1403509A0
class Scaleform::Render::Matrix2x4<float> :
	Scaleform::Render::Matrix2x4Data<float>
{
public:
	static Scaleform::Render::Matrix2x4<float> Identity; // 0xFFFFFFFFFFFFFFFF
	enum NoInitType
	{
		NoInit = 0,
	};
	Matrix2x4<float>(float, float, float, float, float, float);
	Matrix2x4<float>(float, float, float, float, float, float, float, float);
	Matrix2x4<float>(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Matrix2x4<float>(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Matrix2x4<float>(const float *);
	Matrix2x4<float>(const Scaleform::Render::Matrix2x4<float> &);
	Matrix2x4<float>(Scaleform::Render::Matrix2x4<float>::NoInitType);
	Matrix2x4<float>();
	const float & Sx();
	float & Sx();
	const float & Shx();
	float & Shx();
	const float & Tx();
	float & Tx();
	const float & Shy();
	float & Shy();
	const float & Sy();
	float & Sy();
	const float & Ty();
	float & Ty();
	void SetMatrix(const float *);
	void SetMatrix(float, float, float, float, float, float);
	void SetMatrix(float, float, float, float, float, float, float, float);
	void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	void SetIdentity();
	void SetZero();
	void GetAsFloat2x4(float[4] *);
	void SetInverse(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> GetInverse();
	void SetLerp(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, float);
	void Reset();
	void Swap(Scaleform::Render::Matrix2x4<float> *);
	Scaleform::Render::Matrix2x4<float> & Append(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> & Append_NonOpt(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> & Prepend(const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend_NonOpt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetToAppend_NonOpt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> & AppendScaling(Scaleform::Render::Size<float>);
	Scaleform::Render::Matrix2x4<float> & AppendScaling(float, float);
	Scaleform::Render::Matrix2x4<float> & AppendScaling(float);
	Scaleform::Render::Matrix2x4<float> & PrependScaling(Scaleform::Render::Size<float>);
	Scaleform::Render::Matrix2x4<float> & PrependScaling(float, float);
	Scaleform::Render::Matrix2x4<float> & PrependScaling(float);
	Scaleform::Render::Matrix2x4<float> & AppendShearing(float, float);
	Scaleform::Render::Matrix2x4<float> & PrependShearing(float, float);
	Scaleform::Render::Matrix2x4<float> & AppendRotation(float);
	Scaleform::Render::Matrix2x4<float> & PrependRotation(float);
	Scaleform::Render::Matrix2x4<float> & AppendTranslation(Scaleform::Render::Point<float>);
	Scaleform::Render::Matrix2x4<float> & AppendTranslation(float, float);
	Scaleform::Render::Matrix2x4<float> & PrependTranslation(Scaleform::Render::Point<float>);
	Scaleform::Render::Matrix2x4<float> & PrependTranslation(float, float);
	Scaleform::Render::Matrix2x4<float> & SetParlToParl(const float *, const float *);
	Scaleform::Render::Matrix2x4<float> & SetRectToParl(float, float, float, float, const float *);
	Scaleform::Render::Matrix2x4<float> & SetParlToRect(const float *, float, float, float, float);
	Scaleform::Render::Matrix2x4<float> & SetRectToRect(float, float, float, float, float, float, float, float);
	Scaleform::Render::Matrix2x4<float> & Invert();
	bool IsValid();
	bool DoesFlip();
	float GetDeterminant();
	float GetScale();
	float GetMaxScale();
	void SetXScale(float);
	void SetYScale(float);
	float GetXScale();
	float GetYScale();
	float GetRotation();
	double GetXScaleDouble();
	double GetYScaleDouble();
	double GetRotationDouble();
	bool IsFreeRotation(float);
	void Decompose(Scaleform::Render::Point<float> *, Scaleform::Render::Point<float> *, float *, Scaleform::Render::Matrix2x4<float> *);
	void Recompose(const Scaleform::Render::Point<float> &, const Scaleform::Render::Point<float> &, float, const Scaleform::Render::Matrix2x4<float> &);
	void Interpolate(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, float);
	void Transform(float *, float *);
	Scaleform::Render::Point<float> Transform(const Scaleform::Render::Point<float> &);
	void Transform(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	void Transform2x2(float *, float *);
	void TransformVector(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	void TransformByInverse(float *, float *);
	Scaleform::Render::Point<float> TransformByInverse(const Scaleform::Render::Point<float> &);
	void TransformByInverse(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &);
	Scaleform::Render::Rect<float> EncloseTransform(const Scaleform::Render::Rect<float> &);
	void EncloseTransform(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	void EncloseTransform_NonOpt(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	void SetToAppend_Opt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, float *);
	void SetToAppend_Opt(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, float *);
	Scaleform::Render::Matrix2x4<float> & Append_Opt(const Scaleform::Render::Matrix2x4<float> &, float *);
	static Scaleform::Render::Matrix2x4<float> Translation(float, float);
	static Scaleform::Render::Matrix2x4<float> Translation(const Scaleform::Render::Point<float> &);
	static Scaleform::Render::Matrix2x4<float> Scaling(Scaleform::Render::Size<float>);
	static Scaleform::Render::Matrix2x4<float> Scaling(float, float);
	static Scaleform::Render::Matrix2x4<float> Scaling(float);
	static Scaleform::Render::Matrix2x4<float> Shearing(float, float);
	static Scaleform::Render::Matrix2x4<float> Rotation(float);
	const Scaleform::Render::Matrix2x4<float> & operator=(const Scaleform::Render::Matrix2x4<float> &);
	const Scaleform::Render::Matrix2x4<float> & operator*=(const Scaleform::Render::Matrix2x4<float> &);
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
class Scaleform::Render::Matrix2x4Data<float>
{
public:
	static const unsigned long Rows; // 0xFFFFFFFFFFFFFFFF
	float M[4][2]; // 0x0
};