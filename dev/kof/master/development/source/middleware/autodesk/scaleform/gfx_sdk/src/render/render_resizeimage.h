#pragma once

class Scaleform::Render::LinearInterpolator
{
public:
	LinearInterpolator(long, long, long);
	void operator++();
	long y();
private:
	long Cnt; // 0x0
	long Lft; // 0x4
	long Rem; // 0x8
	long Mod; // 0xC
	long m_y; // 0x10
};
enum Scaleform::Render::ImageFilterConstants
{
	ImgSubpixelShift = 8,
	ImgSubpixelShift2 = 16,
	ImgSubpixelScale = 256,
	ImgSubpixelMask = 255,
	ImgSubpixelOffset = 128,
	ImgSubpixelInitial = 32768,
	ImgFilterShift = 14,
	ImgFilterScale = 16384,
	ImgFilterMask = 16383,
	ImgMaxFilterRadius = 8,
};
class Scaleform::Render::ImageFilterLut
{
private:
	ImageFilterLut(const Scaleform::Render::ImageFilterLut &);
public:
	ImageFilterLut();
	float GetRadius();
	unsigned long GetDiameter();
	long GetStart();
	const short * GetWeightArray();
	void Normalize();
private:
	void reallocLut(float);
	const Scaleform::Render::ImageFilterLut & operator=(const Scaleform::Render::ImageFilterLut &);
	float Radius; // 0x0
	unsigned long Diameter; // 0x4
	long Start; // 0x8
	Scaleform::ArrayUnsafe<short,2> WeightArray; // 0x10
public:
	~ImageFilterLut();
};
class Scaleform::ArrayUnsafe<short,2> :
	Scaleform::ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> >
{
	typedef short ValueType;
	struct AllocatorType;
	class BaseType;
	class SelfType;
public:
	ArrayUnsafe<short,2>(const Scaleform::ArrayUnsafe<short,2> &);
	ArrayUnsafe<short,2>(unsigned long long);
	ArrayUnsafe<short,2>();
	const Scaleform::ArrayUnsafe<short,2> & operator=(const Scaleform::ArrayUnsafe<short,2> &);
	~ArrayUnsafe<short,2>();
};
struct Scaleform::Render::ImageFilterBilinear
{
	float GetRadius();
	float GetWeight(float);
};
struct Scaleform::Render::ImageFilterHanning
{
	float GetRadius();
	float GetWeight(float);
};
struct Scaleform::Render::ImageFilterHamming
{
	float GetRadius();
	float GetWeight(float);
};
struct Scaleform::Render::ImageFilterHermite
{
	float GetRadius();
	float GetWeight(float);
};
struct Scaleform::Render::ImageFilterQuadric
{
	float GetRadius();
	float GetWeight(float);
};
struct Scaleform::Render::ImageFilterBicubic
{
	float B; // 0x0
	float C; // 0x4
	ImageFilterBicubic(float, float);
	float GetRadius();
	float GetWeight(float);
	void __dflt_ctor_closure();
};
class Scaleform::Render::ImageFilterKaiser
{
private:
	float a; // 0x0
	float i0a; // 0x4
	float epsilon; // 0x8
public:
	ImageFilterKaiser(float);
	float GetRadius();
	float GetWeight(float);
private:
	float bessel_i0(float);
public:
	void __dflt_ctor_closure();
};
struct Scaleform::Render::ImageFilterCatrom
{
	float GetRadius();
	float GetWeight(float);
};
class Scaleform::Render::ImageFilterMitchell
{
private:
	float p0; // 0x0
	float p2; // 0x4
	float p3; // 0x8
	float q0; // 0xC
	float q1; // 0x10
	float q2; // 0x14
	float q3; // 0x18
public:
	ImageFilterMitchell(float, float);
	float GetRadius();
	float GetWeight(float);
	void __dflt_ctor_closure();
};
struct Scaleform::Render::ImageFilterSpline16
{
	float GetRadius();
	float GetWeight(float);
};
struct Scaleform::Render::ImageFilterSpline36
{
	float GetRadius();
	float GetWeight(float);
};
struct Scaleform::Render::ImageFilterGaussian
{
	float GetRadius();
	float GetWeight(float);
};
struct Scaleform::Render::ImageFilterBessel
{
	float GetRadius();
	float GetWeight(float);
};
class Scaleform::Render::ImageFilterSinc
{
public:
	ImageFilterSinc(float);
	float GetRadius();
	float GetWeight(float);
private:
	float Radius; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::Render::ImageFilterLanczos
{
public:
	ImageFilterLanczos(float);
	float GetRadius();
	float GetWeight(float);
private:
	float Radius; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::Render::ImageFilterBlackman
{
public:
	ImageFilterBlackman(float);
	float GetRadius();
	float GetWeight(float);
private:
	float Radius; // 0x0
public:
	void __dflt_ctor_closure();
};
enum Scaleform::Render::ResizeImageType
{
	ResizeNone = 0,
	ResizeRgbToRgb = 1,
	ResizeRgbaToRgba = 2,
	ResizeRgbToRgba = 3,
	ResizeGray = 4,
};