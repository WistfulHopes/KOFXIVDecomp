#pragma once

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
enum Scaleform::Render::ImageTarget
{
	ImageTarget_Any = 0,
	ImageTarget_X360 = 8192,
	ImageTarget_PS3 = 12288,
	ImageTarget_Wii = 16384,
	ImageTarget_3DS = 20480,
	ImageTarget_PSVita = 24576,
	ImageTarget_WiiU = 28672,
	ImageTarget_Adreno = 32768,
	ImageTarget_DX11 = 36864,
	ImageTarget_Orbis = 40960,
	ImageTarget_Mask = 61440,
};
enum Scaleform::Render::ImageStorage
{
	ImageStorage_Linear = 0,
	ImageStorage_Swizzle = 65536,
	ImageStorage_Tile = 131072,
	ImageStorage_Mask = 196608,
};
enum Scaleform::Render::ImageFormat
{
	Image_None = 0,
	Image_R8G8B8A8 = 1,
	Image_B8G8R8A8 = 2,
	Image_R8G8B8 = 3,
	Image_B8G8R8 = 4,
	Image_A8 = 9,
	Image_R4G4B4A4 = 20,
	Image_B5G5R5A1 = 21,
	Image_DXT1 = 50,
	Image_DXT3 = 51,
	Image_DXT5 = 52,
	Image_BC1 = 50,
	Image_BC2 = 51,
	Image_BC3 = 52,
	Image_BC7 = 53,
	Image_PVRTC_RGB_4BPP = 54,
	Image_PVRTC_RGBA_4BPP = 55,
	Image_PVRTC_RGB_2BPP = 56,
	Image_PVRTC_RGBA_2BPP = 57,
	Image_ETC1_RGB_4BPP = 58,
	Image_ETC1_RGBA_8BPP = 59,
	Image_ETC2_RGB = 60,
	Image_ETC2_RGBA = 61,
	Image_ETC2_RGBA1 = 62,
	Image_ATCIC = 63,
	Image_ATCICA = 64,
	Image_ATCICI = 65,
	Image_ETC1A_RGBA_4BPP = 66,
	Image_Compressed_Start = 50,
	Image_Compressed_End = 99,
	Image_P8 = 100,
	Image_G8 = 101,
	Image_VideoFormat_Start = 200,
	Image_Y8_U2_V2 = 200,
	Image_Y8_U2_V2_A8 = 201,
	Image_Y4_U2_V2 = 202,
	Image_VideoFormat_End = 202,
	ImageFormat_Mask = 4095,
	Image_Begin_HWSpecific = 4096,
	Image_X360_R8G8B8A8 = 139265,
	Image_X360_A8 = 139273,
	Image_X360_DXT1 = 139314,
	Image_X360_DXT3 = 139315,
	Image_X360_DXT5 = 139316,
	Image_PS3_R8G8B8A8_SZ = 77825,
	Image_PS3_A8_SZ = 77833,
	Image_PS3_A8R8G8B8 = 12289,
	Image_PS3_R8G8B8 = 12291,
	Image_PS3_A8 = 12297,
	Image_PS3_DXT1 = 12338,
	Image_PS3_DXT3 = 12339,
	Image_PS3_DXT5 = 12340,
	Image_Wii_R8G8B8A8 = 147457,
	Image_Wii_A8 = 147465,
	Image_Wii_DXT1 = 16434,
	Image_3DS_R8G8B8A8 = 86017,
	Image_3DS_R8G8B8 = 86020,
	Image_3DS_A8 = 86025,
	Image_3DS_ETC1 = 151610,
	Image_3DS_ETC1_RGBA = 151611,
	Image_PSVita_DXT1 = 90162,
	Image_PSVita_DXT3 = 90163,
	Image_PSVita_DXT5 = 90164,
	Image_WiiU_DXT1 = 94258,
	Image_WiiU_DXT3 = 94259,
	Image_WiiU_DXT5 = 94260,
	Image_Orbis_BC1 = 172082,
	Image_Orbis_BC2 = 172083,
	Image_Orbis_BC3 = 172084,
	Image_Orbis_BC7 = 172085,
	ImageFormat_Convertible = 1048576,
	Image_Conv_R8G8B8A8 = 1048577,
	Image_Conv_B8G8R8A8 = 1048578,
	Image_Conv_A8 = 1048585,
};
enum Scaleform::Render::ImageFormatSupport
{
	ImageFormats_Standard = 0,
	ImageFormats_DXT = 1,
	ImageFormats_PVR = 8,
	ImageFormats_ATITC = 16,
	ImageFormats_ETC = 32,
	ImageFormats_ETC1A = 64,
	ImageFormats_YUV = 256,
	ImageFormats_GXT = 4096,
	ImageFormats_GTX = 8192,
};
class Scaleform::Render::Size<unsigned long>
{
public:
	unsigned long Width; // 0x0
	unsigned long Height; // 0x4
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Size<unsigned long>(Scaleform::Render::Size<unsigned long>::BoundsType);
	Size<unsigned long>(const Scaleform::Render::Size<unsigned long> &);
	Size<unsigned long>(unsigned long, unsigned long);
	Size<unsigned long>(unsigned long);
	Size<unsigned long>();
	void SetSize(const Scaleform::Render::Size<unsigned long> &);
	void SetSize(unsigned long, unsigned long);
	void SetSize(unsigned long);
	void SetWidth(unsigned long);
	void SetHeight(unsigned long);
	void Clear();
	void Swap(Scaleform::Render::Size<unsigned long> *);
	void Transpose();
	Scaleform::Render::Size<unsigned long> & SetLerp(const Scaleform::Render::Size<unsigned long> &, const Scaleform::Render::Size<unsigned long> &, unsigned long);
	bool IsEmpty();
	bool IsNull();
	Scaleform::Render::Size<unsigned long> Center();
	unsigned long HCenter();
	unsigned long VCenter();
	unsigned long Area();
	Scaleform::Render::Size<unsigned long> & Expand(unsigned long);
	Scaleform::Render::Size<unsigned long> & Expand(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::Size<unsigned long> & Expand(unsigned long, unsigned long);
	Scaleform::Render::Size<unsigned long> & Contract(unsigned long, unsigned long);
	Scaleform::Render::Size<unsigned long> & Contract(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::Size<unsigned long> & Contract(unsigned long);
	Scaleform::Render::Size<unsigned long> & Mul(unsigned long, unsigned long);
	Scaleform::Render::Size<unsigned long> & Mul(unsigned long);
	Scaleform::Render::Size<unsigned long> & Mul(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::Size<unsigned long> & Div(unsigned long, unsigned long);
	Scaleform::Render::Size<unsigned long> & Div(unsigned long);
	Scaleform::Render::Size<unsigned long> & Div(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::Size<unsigned long> & Clamp(unsigned long, unsigned long);
	Scaleform::Render::Size<unsigned long> & Clamp(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::Size<unsigned long> & ClampWidth(unsigned long);
	Scaleform::Render::Size<unsigned long> & ClampHeight(unsigned long);
	Scaleform::Render::Size<unsigned long> ExpandedTo(unsigned long, unsigned long);
	Scaleform::Render::Size<unsigned long> ExpandedTo(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::Size<unsigned long> ExpandedToWidth(unsigned long);
	Scaleform::Render::Size<unsigned long> ExpandedToHeight(unsigned long);
	Scaleform::Render::Size<unsigned long> ClampedTo(unsigned long, unsigned long);
	Scaleform::Render::Size<unsigned long> ClampedTo(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::Size<unsigned long> ClampedToWidth(unsigned long);
	Scaleform::Render::Size<unsigned long> ClampedToHeight(unsigned long);
	const Scaleform::Render::Size<unsigned long> & operator=(Scaleform::Render::Size<unsigned long>::BoundsType);
	const Scaleform::Render::Size<unsigned long> & operator=(unsigned long);
	const Scaleform::Render::Size<unsigned long> & operator=(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> & operator+=(unsigned long);
	const Scaleform::Render::Size<unsigned long> & operator+=(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> & operator-=(unsigned long);
	const Scaleform::Render::Size<unsigned long> & operator-=(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> & operator*=(unsigned long);
	const Scaleform::Render::Size<unsigned long> & operator*=(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> & operator/=(unsigned long);
	const Scaleform::Render::Size<unsigned long> & operator/=(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> & operator|=(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> & operator&=(const Scaleform::Render::Size<unsigned long> &);
	bool operator==(const Scaleform::Render::Size<unsigned long> &);
	bool operator!=(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> operator-(unsigned long);
	const Scaleform::Render::Size<unsigned long> operator-(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> operator-();
	const Scaleform::Render::Size<unsigned long> operator+(unsigned long);
	const Scaleform::Render::Size<unsigned long> operator+(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> operator*(long);
	const Scaleform::Render::Size<unsigned long> operator*(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> operator/(unsigned long);
	const Scaleform::Render::Size<unsigned long> operator/(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> operator|(const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Size<unsigned long> operator&(const Scaleform::Render::Size<unsigned long> &);
};
class Scaleform::Render::Rect<unsigned long> :
	Scaleform::Render::RectData<unsigned long>
{
	enum NoInitType
	{
		NoInit = 0,
	};
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
public:
	Rect<unsigned long>(Scaleform::Render::Rect<unsigned long>::BoundsType);
	Rect<unsigned long>(unsigned long, unsigned long, unsigned long, unsigned long);
	Rect<unsigned long>(unsigned long, unsigned long, const Scaleform::Render::Size<unsigned long> &);
	Rect<unsigned long>(const Scaleform::Render::Point<unsigned long> &, const Scaleform::Render::Size<unsigned long> &);
	Rect<unsigned long>(const Scaleform::Render::Point<unsigned long> &, const Scaleform::Render::Point<unsigned long> &);
	Rect<unsigned long>(unsigned long, unsigned long);
	Rect<unsigned long>(const Scaleform::Render::Size<unsigned long> &);
	Rect<unsigned long>(const Scaleform::Render::Rect<unsigned long> &);
	Rect<unsigned long>(unsigned long);
	Rect<unsigned long>(Scaleform::Render::Rect<unsigned long>::NoInitType);
	Rect<unsigned long>();
	void SetRect(Scaleform::Render::Rect<unsigned long>::BoundsType);
	void SetRect(const Scaleform::Render::Point<unsigned long> &, const Scaleform::Render::Size<unsigned long> &);
	void SetRect(unsigned long, unsigned long, const Scaleform::Render::Size<unsigned long> &);
	void SetRect(const Scaleform::Render::Point<unsigned long> &, const Scaleform::Render::Point<unsigned long> &);
	void SetRect(const Scaleform::Render::Rect<unsigned long> &);
	void SetRect(unsigned long, unsigned long);
	void SetRect(const Scaleform::Render::Size<unsigned long> &);
	void SetRect(unsigned long, unsigned long, unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & SetLerp(const Scaleform::Render::Rect<unsigned long> &, const Scaleform::Render::Rect<unsigned long> &, unsigned long);
	void Clear();
	void Swap(Scaleform::Render::Rect<unsigned long> *);
	Scaleform::Render::Rect<unsigned long> & FromRectPS(const Scaleform::Render::Rect<unsigned long> *);
	void ToRectPS(Scaleform::Render::Rect<unsigned long> *);
	bool IsNull();
	bool IsEmpty();
	bool IsNormal();
	unsigned long X1();
	unsigned long Y1();
	unsigned long X2();
	unsigned long Y2();
	Scaleform::Render::Point<unsigned long> TopLeft();
	Scaleform::Render::Point<unsigned long> TopRight();
	Scaleform::Render::Point<unsigned long> BottomLeft();
	Scaleform::Render::Point<unsigned long> BottomRight();
	void SetTopLeft(const Scaleform::Render::Point<unsigned long> &);
	void SetTopRight(const Scaleform::Render::Point<unsigned long> &);
	void SetBottomLeft(const Scaleform::Render::Point<unsigned long> &);
	void SetBottomRight(const Scaleform::Render::Point<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> TopSide(unsigned long);
	Scaleform::Render::Rect<unsigned long> BottomSide(unsigned long);
	Scaleform::Render::Rect<unsigned long> LeftSide(unsigned long);
	Scaleform::Render::Rect<unsigned long> RightSide(unsigned long);
	Scaleform::Render::Point<unsigned long> Center();
	unsigned long HCenter();
	unsigned long VCenter();
	void SetCenter(unsigned long, unsigned long);
	void SetCenter(const Scaleform::Render::Point<unsigned long> &);
	void SetHCenter(unsigned long);
	void SetVCenter(unsigned long);
	unsigned long Width();
	unsigned long Height();
	unsigned long CheckedWidth();
	unsigned long CheckedHeight();
	Scaleform::Render::Size<unsigned long> GetSize();
	Scaleform::Render::Size<unsigned long> CheckedSize();
	void SetSize(const Scaleform::Render::Size<unsigned long> &);
	void SetSize(unsigned long, unsigned long);
	void SetWidth(unsigned long);
	void SetHeight(unsigned long);
	unsigned long Area();
	void SetHRange(unsigned long, unsigned long);
	void SetVRange(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & Offset(const Scaleform::Render::Point<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> & Offset(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & OffsetX(unsigned long);
	Scaleform::Render::Rect<unsigned long> & OffsetY(unsigned long);
	Scaleform::Render::Rect<unsigned long> & Expand(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & Expand(unsigned long);
	Scaleform::Render::Rect<unsigned long> & Expand(unsigned long, unsigned long, unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & HExpand(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & HExpand(unsigned long);
	Scaleform::Render::Rect<unsigned long> & VExpand(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & VExpand(unsigned long);
	Scaleform::Render::Rect<unsigned long> & ExpandToPoint(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & ExpandToPoint(const Scaleform::Render::Point<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> & Contract(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & Contract(unsigned long);
	Scaleform::Render::Rect<unsigned long> & Contract(unsigned long, unsigned long, unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & HContract(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & HContract(unsigned long);
	Scaleform::Render::Rect<unsigned long> & VContract(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & VContract(unsigned long);
	Scaleform::Render::Rect<unsigned long> & Clamp(unsigned long, unsigned long, unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & Clamp(const Scaleform::Render::Rect<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> & HClamp(const Scaleform::Render::Rect<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> & HClamp(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & VClamp(const Scaleform::Render::Rect<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> & VClamp(unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & Union(const Scaleform::Render::Rect<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> & Union(unsigned long, unsigned long, unsigned long, unsigned long);
	Scaleform::Render::Rect<unsigned long> & Intersect(const Scaleform::Render::Rect<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> & Intersect(unsigned long, unsigned long, unsigned long, unsigned long);
	void Normalize();
	void NormalizeX();
	void NormalizeY();
	Scaleform::Render::Rect<unsigned long> Normal();
	bool Contains(const Scaleform::Render::Rect<unsigned long> &);
	bool Contains(const Scaleform::Render::Point<unsigned long> &);
	bool Contains(unsigned long, unsigned long);
	bool Intersects(const Scaleform::Render::Rect<unsigned long> &);
	bool IntersectsEdge(const Scaleform::Render::Rect<unsigned long> &, unsigned long, unsigned long, unsigned long, unsigned long);
	bool IntersectsEdge(const Scaleform::Render::Rect<unsigned long> &, unsigned long);
	Scaleform::Render::Point<unsigned long> ClampPoint(const Scaleform::Render::Point<unsigned long> &);
	bool IntersectRect(Scaleform::Render::Rect<unsigned long> *, const Scaleform::Render::Rect<unsigned long> &);
	void UnionRect(Scaleform::Render::Rect<unsigned long> *, const Scaleform::Render::Rect<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> & operator=(Scaleform::Render::Rect<unsigned long>::BoundsType);
	const Scaleform::Render::Rect<unsigned long> & operator=(const Scaleform::Render::Rect<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> & operator+=(unsigned long);
	const Scaleform::Render::Rect<unsigned long> & operator+=(const Scaleform::Render::Point<unsigned long> &);
	Scaleform::Render::Rect<unsigned long> & operator-=(unsigned long);
	Scaleform::Render::Rect<unsigned long> & operator-=(const Scaleform::Render::Point<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> & operator|=(const Scaleform::Render::Rect<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> & operator&=(const Scaleform::Render::Rect<unsigned long> &);
	bool operator==(const Scaleform::Render::Rect<unsigned long> &);
	bool operator!=(const Scaleform::Render::Rect<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> operator-(unsigned long);
	const Scaleform::Render::Rect<unsigned long> operator-(const Scaleform::Render::Point<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> operator-();
	const Scaleform::Render::Rect<unsigned long> operator+(const Scaleform::Render::Rect<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> operator+(unsigned long);
	const Scaleform::Render::Rect<unsigned long> operator+(const Scaleform::Render::Point<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> operator|(const Scaleform::Render::Rect<unsigned long> &);
	const Scaleform::Render::Rect<unsigned long> operator&(const Scaleform::Render::Rect<unsigned long> &);
};
struct Scaleform::Render::ImagePlane
{
	unsigned long Width; // 0x0
	unsigned long Height; // 0x4
	unsigned long long Pitch; // 0x8
	unsigned long long DataSize; // 0x10
	unsigned char * pData; // 0x18
	ImagePlane(const Scaleform::Render::ImagePlane &);
	ImagePlane(const Scaleform::Render::Size<unsigned long> &, unsigned long long, unsigned long long, unsigned char *);
	ImagePlane(unsigned long, unsigned long, unsigned long long, unsigned long long, unsigned char *);
	ImagePlane();
	void SetData(const Scaleform::Render::Size<unsigned long> &, unsigned long long, unsigned long long, unsigned char *);
	void SetData(unsigned long, unsigned long, unsigned long long, unsigned long long, unsigned char *);
	Scaleform::Render::Size<unsigned long> GetSize();
	void SetSize(unsigned long, unsigned long);
	void SetSize(const Scaleform::Render::Size<unsigned long> &);
	void SetNextMipSize();
	void operator=(const Scaleform::Render::ImagePlane &);
	bool MatchSizes(const Scaleform::Render::ImagePlane &);
	void GetMipLevel(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImagePlane *, unsigned long);
	const unsigned char * GetScanline(unsigned long);
	unsigned char * GetScanline(unsigned long);
};
enum Scaleform::Render::ImageUse
{
	ImageUse_Wrap = 1,
	ImageUse_GenMipmaps = 2,
	ImageUse_Update = 16,
	ImageUse_PartialUpdate = 32,
	ImageUse_MapSimThread = 64,
	ImageUse_MapRenderThread = 128,
	ImageUse_Map_Mask = 192,
	ImageUse_ReadOnly_Mask = 240,
	ImageUse_InitOnly = 256,
	ImageUse_NoDataLoss = 256,
	ImageUse_RenderTarget = 1024,
};
class Scaleform::Render::Palette
{
private:
	Scaleform::AtomicInt<int> RefCount; // 0x0
protected:
	unsigned short ColorCount; // 0x4
	bool HasAlphaFlag; // 0x6
	Scaleform::Render::Color Colors[1]; // 0x8
public:
	bool HasAlpha();
	unsigned long GetColorCount();
	const Scaleform::Render::Color * GetColors();
	const Scaleform::Render::Color & operator[](unsigned long);
	Scaleform::Render::Color & operator[](unsigned long);
	void AddRef();
	void Release();
	bool operator==(const Scaleform::Render::Palette &);
	bool operator!=(const Scaleform::Render::Palette &);
	static Scaleform::Render::Palette * Create(unsigned long, bool, Scaleform::MemoryHeap *);
	Palette(Scaleform::Render::Palette &);
	Palette(const Scaleform::Render::Palette &);
	Palette();
	Scaleform::Render::Palette & operator=(Scaleform::Render::Palette &);
	Scaleform::Render::Palette & operator=(const Scaleform::Render::Palette &);
};
class Scaleform::AtomicInt<int> :
	Scaleform::AtomicValueBase<int>
{
	class Ops;
public:
	AtomicInt<int>(Scaleform::AtomicInt<int> &);
	AtomicInt<int>(const Scaleform::AtomicInt<int> &);
	AtomicInt<int>(long);
	AtomicInt<int>();
	long ExchangeAdd_Sync(long);
	long ExchangeAdd_Release(long);
	long ExchangeAdd_Acquire(long);
	long ExchangeAdd_NoSync(long);
	void Increment_Sync();
	void Increment_Release();
	void Increment_Acquire();
	void Increment_NoSync();
	Scaleform::AtomicInt<int> & operator=(Scaleform::AtomicInt<int> &);
	Scaleform::AtomicInt<int> & operator=(const Scaleform::AtomicInt<int> &);
	long operator=(long);
	long operator+=(long);
	long operator-=(long);
	long operator++(long);
	long operator++();
	long operator--(long);
	long operator--();
	long operator&=(long);
	long operator|=(long);
	long operator^=(long);
	long operator*=(long);
	long operator/=(long);
	long operator>>=(unsigned long);
	long operator<<=(unsigned long);
};
class Scaleform::Render::ImageData
{
public:
	Scaleform::Render::ImageFormat Format; // 0x0
	unsigned long Use; // 0x4
	unsigned char Flags; // 0x8
	unsigned char LevelCount; // 0x9
	unsigned short RawPlaneCount; // 0xA
	Scaleform::Render::ImagePlane * pPlanes; // 0x10
	Scaleform::Ptr<Scaleform::Render::Palette> pPalette; // 0x18
	enum <unnamed-enum-Flag_SeparateMipmaps>
	{
		Flag_SeparateMipmaps = 1,
		Flag_AllocPlanes = 2,
		Flag_LocalHeap = 4,
		Flag_ImageMapped = 16,
	};
private:
	Scaleform::Render::ImagePlane Plane0; // 0x20
	bool allocPlanes(Scaleform::Render::ImageFormat, unsigned long, bool);
	void freePlanes();
public:
	ImageData(Scaleform::Render::ImageFormat, unsigned long, unsigned long, unsigned long long, unsigned char *);
	ImageData(Scaleform::Render::ImageFormat, unsigned long, bool);
	ImageData(const Scaleform::Render::ImageData &);
	ImageData();
	~ImageData();
	Scaleform::Render::ImageData & operator=(const Scaleform::Render::ImageData &);
	void Clear();
	bool Initialize(const Scaleform::Render::ImageData &, unsigned long, unsigned long);
	void Initialize(Scaleform::Render::ImageFormat, unsigned long, unsigned long, unsigned long long, unsigned char *);
	void Initialize(Scaleform::Render::ImageFormat, unsigned long, unsigned long, unsigned long long, unsigned long long, unsigned char *);
	void Initialize(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImagePlane *, unsigned long, bool);
	bool Initialize(Scaleform::Render::ImageFormat, unsigned long, bool);
	Scaleform::Render::Palette * GetColorMap();
	void SetPlane(unsigned long, const Scaleform::Render::Size<unsigned long> &, unsigned long long, unsigned long long, unsigned char *);
	void SetPlane(unsigned long, const Scaleform::Render::ImagePlane &);
	unsigned long GetPlaneCount();
	void GetPlane(unsigned long, Scaleform::Render::ImagePlane *);
	const Scaleform::Render::ImagePlane & GetPlaneRef(unsigned long);
	Scaleform::Render::ImagePlane & GetPlaneRef(unsigned long);
	unsigned long GetMipLevelCount();
	void GetMipLevelPlane(unsigned long, unsigned long, Scaleform::Render::ImagePlane *);
	Scaleform::Render::ImageFormat GetFormat();
	Scaleform::Render::ImageFormat GetFormatNoConv();
	bool IsCompressed();
	bool IsHWSpecific();
	bool HasSeparateMipmaps();
	unsigned long GetBitsPerPixel();
	unsigned long long GetPitch();
	unsigned long GetWidth();
	unsigned long GetHeight();
	Scaleform::Render::Size<unsigned long> GetSize();
	unsigned char * GetDataPtr();
	const unsigned char * GetScanline(unsigned long);
	unsigned char * GetScanline(unsigned long);
	unsigned long long ComputeHash();
	bool operator==(const Scaleform::Render::ImageData &);
	void SetPixelAlpha(unsigned long, unsigned long, unsigned char);
	void SetPixelARGB(unsigned long, unsigned long, unsigned long);
	void SetPixelInScanline(unsigned char *, unsigned long, unsigned long);
	void SetPixelRGBA(unsigned long, unsigned long, unsigned char, unsigned char, unsigned char, unsigned char);
	Scaleform::Render::Color GetPixel(unsigned long, unsigned long);
	Scaleform::Render::Color GetPixelInScanline(const unsigned char *, unsigned long);
	void Read(Scaleform::File &, unsigned long);
	void Write(Scaleform::File &, unsigned long);
	static bool IsFormatCompressed(Scaleform::Render::ImageFormat);
	static unsigned long GetFormatPlaneCount(Scaleform::Render::ImageFormat);
	static unsigned long GetFormatBitsPerPixel(Scaleform::Render::ImageFormat, unsigned long);
	static unsigned long long GetFormatPitch(Scaleform::Render::ImageFormat, unsigned long, unsigned long);
	static unsigned long long GetFormatScanlineCount(Scaleform::Render::ImageFormat, unsigned long, unsigned long);
	static Scaleform::Render::Size<unsigned long> GetFormatPlaneSize(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long);
	static unsigned long long GetMipLevelSize(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long);
	static unsigned long long GetMipLevelsSize(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long, unsigned long);
};
class Scaleform::Ptr<Scaleform::Render::Palette>
{
protected:
	Scaleform::Render::Palette * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Palette>(const Scaleform::Ptr<Scaleform::Render::Palette> &);
	Ptr<Scaleform::Render::Palette>(Scaleform::Render::Palette *);
	Ptr<Scaleform::Render::Palette>(Scaleform::Ptr<Scaleform::Render::Palette> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Palette>(Scaleform::Pickable<Scaleform::Render::Palette>);
	Ptr<Scaleform::Render::Palette>(Scaleform::Render::Palette &);
	Ptr<Scaleform::Render::Palette>();
	~Ptr<Scaleform::Render::Palette>();
	bool operator==(Scaleform::Render::Palette *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Palette> &);
	bool operator!=(Scaleform::Render::Palette *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Palette> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Palette> &);
	Scaleform::Ptr<Scaleform::Render::Palette> & operator=(Scaleform::Pickable<Scaleform::Render::Palette>);
	const Scaleform::Ptr<Scaleform::Render::Palette> & operator=(Scaleform::Render::Palette &);
	const Scaleform::Ptr<Scaleform::Render::Palette> & operator=(Scaleform::Render::Palette *);
	const Scaleform::Ptr<Scaleform::Render::Palette> & operator=(const Scaleform::Ptr<Scaleform::Render::Palette> &);
	Scaleform::Ptr<Scaleform::Render::Palette> & SetPtr(Scaleform::Pickable<Scaleform::Render::Palette>);
	Scaleform::Ptr<Scaleform::Render::Palette> & SetPtr(Scaleform::Render::Palette &);
	Scaleform::Ptr<Scaleform::Render::Palette> & SetPtr(Scaleform::Render::Palette *);
	Scaleform::Ptr<Scaleform::Render::Palette> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Palette> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Palette * & GetRawRef();
	Scaleform::Render::Palette * GetPtr();
	Scaleform::Render::Palette & operator*();
	Scaleform::Render::Palette * operator->();
	Scaleform::Render::Palette * operator class Scaleform::Render::Palette *();
	Scaleform::Ptr<Scaleform::Render::Palette> & Pick(Scaleform::Render::Palette *);
	Scaleform::Ptr<Scaleform::Render::Palette> & Pick(Scaleform::Pickable<Scaleform::Render::Palette>);
	Scaleform::Ptr<Scaleform::Render::Palette> & Pick(Scaleform::Ptr<Scaleform::Render::Palette> &);
};
void Scaleform::Render::ImageData::Initialize(Scaleform::Render::ImageFormat format, unsigned long mipLevels, Scaleform::Render::ImagePlane * pplanes, unsigned long planeCount, bool separateMipmaps); // 0x1403263B0
void Scaleform::Render::ImageData::GetMipLevelPlane(unsigned long mipLevel, unsigned long plane, Scaleform::Render::ImagePlane * pplane); // 0x140325AF0
class Scaleform::Render::ImageSwizzler
{
public:
	~ImageSwizzler();
	void Initialize(Scaleform::Render::ImageSwizzlerContext &);
	void CacheScanline(Scaleform::Render::ImageSwizzlerContext &, unsigned long);
	void SetPixelInScanline(Scaleform::Render::ImageSwizzlerContext &, unsigned long, unsigned long);
	void SetPixelInScanline(Scaleform::Render::ImageSwizzlerContext &, unsigned long, Scaleform::Render::Color);
	Scaleform::Render::Color GetPixelInScanline(Scaleform::Render::ImageSwizzlerContext &, unsigned long);
	ImageSwizzler(const Scaleform::Render::ImageSwizzler &);
	ImageSwizzler();
	Scaleform::Render::ImageSwizzler & operator=(const Scaleform::Render::ImageSwizzler &);
};
void Scaleform::Render::TextureManager::BeginScene(); // 0x14002E7C0
struct Scaleform::Render::ImageSwizzlerContext :
	Unassignable
{
	ImageSwizzlerContext(Scaleform::Render::ImageSwizzler &, Scaleform::Render::ImageData *);
	Scaleform::Render::ImageSwizzler & Swizzler; // 0x0
	unsigned char * pCurrentScanline; // 0x8
	Scaleform::Render::ImageData * pImage; // 0x10
	unsigned long CachedBlockY; // 0x18
	const long * CachedBlockLine; // 0x20
	Scaleform::Render::ImagePlane * pPlane; // 0x28
	void CacheScanline(unsigned long);
	void SetPixelInScanline(unsigned long, unsigned long);
	void SetPixelInScanline(unsigned long, Scaleform::Render::Color);
	Scaleform::Render::Color GetPixelInScanline(unsigned long);
};
class Scaleform::Render::TextureManagerLocks :
	Scaleform::RefCountBase<Scaleform::Render::TextureManagerLocks,72>
{
public:
	Scaleform::Render::TextureManager * pManager; // 0x10
	Scaleform::Lock ImageLock; // 0x18
	Scaleform::Mutex TextureMutex; // 0x48
	Scaleform::WaitCondition TextureInitWC; // 0x70
	TextureManagerLocks(const Scaleform::Render::TextureManagerLocks &);
	TextureManagerLocks(Scaleform::Render::TextureManager *);
	virtual ~TextureManagerLocks();
	Scaleform::Render::TextureManagerLocks & operator=(const Scaleform::Render::TextureManagerLocks &);
};
class Scaleform::RefCountBase<Scaleform::Render::TextureManagerLocks,72> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 72,
	};
public:
	RefCountBase<Scaleform::Render::TextureManagerLocks,72>(Scaleform::RefCountBase<Scaleform::Render::TextureManagerLocks,72> &);
	RefCountBase<Scaleform::Render::TextureManagerLocks,72>(const Scaleform::RefCountBase<Scaleform::Render::TextureManagerLocks,72> &);
	RefCountBase<Scaleform::Render::TextureManagerLocks,72>();
	virtual ~RefCountBase<Scaleform::Render::TextureManagerLocks,72>();
	Scaleform::RefCountBase<Scaleform::Render::TextureManagerLocks,72> & operator=(Scaleform::RefCountBase<Scaleform::Render::TextureManagerLocks,72> &);
	Scaleform::RefCountBase<Scaleform::Render::TextureManagerLocks,72> & operator=(const Scaleform::RefCountBase<Scaleform::Render::TextureManagerLocks,72> &);
};
class Scaleform::Render::MappedTextureBase :
	Scaleform::NewOverrideBase<72>
{
public:
	MappedTextureBase(const Scaleform::Render::MappedTextureBase &);
	MappedTextureBase();
	~MappedTextureBase();
	bool Reserve();
	bool IsMapped();
	bool Map(Scaleform::Render::Texture *, unsigned long, unsigned long);
	void Unmap(bool);
	Scaleform::Render::Texture * pTexture; // 0x8
	unsigned long StartMipLevel; // 0x10
	long LevelCount; // 0x14
	Scaleform::Render::ImageData Data; // 0x18
	enum <unnamed-enum-PlaneReserveSize>
	{
		PlaneReserveSize = 4,
	};
	Scaleform::Render::ImagePlane Planes[4]; // 0x58
	Scaleform::Render::MappedTextureBase & operator=(const Scaleform::Render::MappedTextureBase &);
};
class Scaleform::NewOverrideBase<72>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 72,
	};
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
};
Scaleform::Render::MappedTextureBase::MappedTextureBase(); // 0x1405F4640
struct Scaleform::ListNodeSafe<Scaleform::Render::Texture,Scaleform::Render::Texture>
{
	ListNodeSafe<Scaleform::Render::Texture,Scaleform::Render::Texture>();
	Scaleform::Render::Texture * GetPrev();
	Scaleform::Render::Texture * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::Texture *);
	void InsertNodeAfter(Scaleform::Render::Texture *);
	void InsertNodeBefore(Scaleform::Render::Texture *);
private:
	void RemoveNodeUnsafe();
	void ReplaceNodeWithUnsafe(Scaleform::Render::Texture *);
	void InsertNodeAfterUnsafe(Scaleform::Render::Texture *);
	void InsertNodeBeforeUnsafe(Scaleform::Render::Texture *);
	Scaleform::Render::Texture * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::Texture * pNext; // 0x8
	void * pVoidNext; // 0x8
};
class Scaleform::RefCountBase<Scaleform::Render::Texture,72> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 72,
	};
public:
	RefCountBase<Scaleform::Render::Texture,72>(Scaleform::RefCountBase<Scaleform::Render::Texture,72> &);
	RefCountBase<Scaleform::Render::Texture,72>(const Scaleform::RefCountBase<Scaleform::Render::Texture,72> &);
	RefCountBase<Scaleform::Render::Texture,72>();
	virtual ~RefCountBase<Scaleform::Render::Texture,72>();
	Scaleform::RefCountBase<Scaleform::Render::Texture,72> & operator=(Scaleform::RefCountBase<Scaleform::Render::Texture,72> &);
	Scaleform::RefCountBase<Scaleform::Render::Texture,72> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Texture,72> &);
};
class Scaleform::Render::Texture :
	Scaleform::RefCountBase<Scaleform::Render::Texture,72>,
	Scaleform::ListNodeSafe<Scaleform::Render::Texture,Scaleform::Render::Texture>,
	Scaleform::Render::FenceResource
{
	enum CreateState
	{
		State_InitPending = 0,
		State_InitFailed = 1,
		State_Valid = 2,
		State_Lost = 3,
		State_Dead = 4,
		State_Disposed = 5,
	};
	enum TextureFlagBits
	{
		TF_Rescale = 1,
		TF_SWMipGen = 2,
		TF_UserAlloc = 4,
		TF_NoRefCount = 8,
		TF_DoNotDelete = 16,
	};
public:
	Texture(const Scaleform::Render::Texture &);
	Texture(Scaleform::Render::TextureManagerLocks *, const Scaleform::Render::Size<unsigned long> &, unsigned char, unsigned short, Scaleform::Render::ImageBase *, const Scaleform::Render::TextureFormat *);
	virtual ~Texture();
	Scaleform::Render::TextureManager * GetTextureManager();
	bool Initialize();
	bool IsValid();
	Scaleform::Render::Image * GetImage();
	Scaleform::Render::ImageFormat GetFormat();
	Scaleform::Render::ImageFormat GetImageFormat();
	Scaleform::Render::Size<unsigned long> GetTextureSize(unsigned long);
	Scaleform::Render::Size<unsigned long> GetSize();
	unsigned long GetMipmapCount();
	unsigned long GetPlaneCount();
	unsigned long GetTextureStageCount();
	void GetUVGenMatrix(Scaleform::Render::Matrix2x4<float> *);
	void ImageLost();
	void LoseManager();
	void LoseTextureData();
	void DisposeTextureData();
	void ReleaseHWTextures(bool);
	void ApplyTexture(unsigned long, const Scaleform::Render::ImageFillMode &);
	bool Map(Scaleform::Render::ImageData *, unsigned long, unsigned long);
	bool Unmap();
	bool UpdateRenderTargetData(Scaleform::Render::RenderTargetData *, Scaleform::Render::HAL *);
	bool UpdateStagingData(Scaleform::Render::RenderTargetData *);
	struct UpdateDesc;
	bool Update();
	bool Update(const Scaleform::Render::Texture::UpdateDesc *, unsigned long, unsigned long);
	unsigned long long GetBytes(long *);
protected:
	void computeUpdateConvertRescaleFlags(bool, bool, Scaleform::Render::ImageFormat, Scaleform::Render::ResizeImageType &, Scaleform::Render::ImageFormat &, bool &);
	void uploadImage(Scaleform::Render::ImageData *);
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> pManagerLocks; // 0x28
public:
	Scaleform::Render::ImageBase * pImage; // 0x30
	Scaleform::Render::Size<unsigned long> ImgSize; // 0x38
	Scaleform::Render::Texture::CreateState State; // 0x40
	unsigned char MipLevels; // 0x44
	unsigned char TextureCount; // 0x45
	unsigned short Use; // 0x46
	unsigned char TextureFlags; // 0x48
	Scaleform::Render::MappedTextureBase * pMap; // 0x50
	const Scaleform::Render::TextureFormat * pFormat; // 0x58
	Scaleform::Render::Texture & operator=(const Scaleform::Render::Texture &);
};
Scaleform::Render::Texture::Texture(Scaleform::Render::TextureManagerLocks * pmanagerLocks, const Scaleform::Render::Size<unsigned long> & size, unsigned char mipLevels, unsigned short use, Scaleform::Render::ImageBase * pimage, const Scaleform::Render::TextureFormat * pformat); // 0x1405F4D20
unsigned long Scaleform::Render::Texture::GetMipmapCount(); // 0x1405F5F50
void Scaleform::Render::Texture::ImageLost(); // 0x1405F60C0
bool Scaleform::Render::Texture::UpdateRenderTargetData(Scaleform::Render::RenderTargetData * __formal, Scaleform::Render::HAL * __formal); // 0x14004BBE0
struct Scaleform::Render::Texture::UpdateDesc
{
	Scaleform::Render::ImagePlane SourcePlane; // 0x0
	Scaleform::Render::Rect<unsigned long> DestRect; // 0x20
	unsigned long PlaneIndex; // 0x30
	UpdateDesc(Scaleform::Render::Texture::UpdateDesc &);
	UpdateDesc(const Scaleform::Render::Texture::UpdateDesc &);
	UpdateDesc();
	Scaleform::Render::Texture::UpdateDesc & operator=(Scaleform::Render::Texture::UpdateDesc &);
	Scaleform::Render::Texture::UpdateDesc & operator=(const Scaleform::Render::Texture::UpdateDesc &);
};
void Scaleform::Render::Texture::uploadImage(Scaleform::Render::ImageData * __formal); // 0x14002E7C0
class Scaleform::Ptr<Scaleform::Render::TextureManagerLocks>
{
protected:
	Scaleform::Render::TextureManagerLocks * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextureManagerLocks>(const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> &);
	Ptr<Scaleform::Render::TextureManagerLocks>(Scaleform::Render::TextureManagerLocks *);
	Ptr<Scaleform::Render::TextureManagerLocks>(Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextureManagerLocks>(Scaleform::Pickable<Scaleform::Render::TextureManagerLocks>);
	Ptr<Scaleform::Render::TextureManagerLocks>(Scaleform::Render::TextureManagerLocks &);
	Ptr<Scaleform::Render::TextureManagerLocks>();
	~Ptr<Scaleform::Render::TextureManagerLocks>();
	bool operator==(Scaleform::Render::TextureManagerLocks *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> &);
	bool operator!=(Scaleform::Render::TextureManagerLocks *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> &);
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & operator=(Scaleform::Pickable<Scaleform::Render::TextureManagerLocks>);
	const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & operator=(Scaleform::Render::TextureManagerLocks &);
	const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & operator=(Scaleform::Render::TextureManagerLocks *);
	const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & operator=(const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> &);
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextureManagerLocks>);
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & SetPtr(Scaleform::Render::TextureManagerLocks &);
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & SetPtr(Scaleform::Render::TextureManagerLocks *);
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextureManagerLocks * & GetRawRef();
	Scaleform::Render::TextureManagerLocks * GetPtr();
	Scaleform::Render::TextureManagerLocks & operator*();
	Scaleform::Render::TextureManagerLocks * operator->();
	Scaleform::Render::TextureManagerLocks * operator class Scaleform::Render::TextureManagerLocks *();
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & Pick(Scaleform::Render::TextureManagerLocks *);
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & Pick(Scaleform::Pickable<Scaleform::Render::TextureManagerLocks>);
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> & Pick(Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> &);
};
class Scaleform::RefCountBase<Scaleform::Render::DepthStencilSurface,72> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 72,
	};
public:
	RefCountBase<Scaleform::Render::DepthStencilSurface,72>(Scaleform::RefCountBase<Scaleform::Render::DepthStencilSurface,72> &);
	RefCountBase<Scaleform::Render::DepthStencilSurface,72>(const Scaleform::RefCountBase<Scaleform::Render::DepthStencilSurface,72> &);
	RefCountBase<Scaleform::Render::DepthStencilSurface,72>();
	virtual ~RefCountBase<Scaleform::Render::DepthStencilSurface,72>();
	Scaleform::RefCountBase<Scaleform::Render::DepthStencilSurface,72> & operator=(Scaleform::RefCountBase<Scaleform::Render::DepthStencilSurface,72> &);
	Scaleform::RefCountBase<Scaleform::Render::DepthStencilSurface,72> & operator=(const Scaleform::RefCountBase<Scaleform::Render::DepthStencilSurface,72> &);
};
struct Scaleform::ListNodeSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface>
{
	ListNodeSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface>();
	Scaleform::Render::DepthStencilSurface * GetPrev();
	Scaleform::Render::DepthStencilSurface * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::DepthStencilSurface *);
	void InsertNodeAfter(Scaleform::Render::DepthStencilSurface *);
	void InsertNodeBefore(Scaleform::Render::DepthStencilSurface *);
private:
	void RemoveNodeUnsafe();
	void ReplaceNodeWithUnsafe(Scaleform::Render::DepthStencilSurface *);
	void InsertNodeAfterUnsafe(Scaleform::Render::DepthStencilSurface *);
	void InsertNodeBeforeUnsafe(Scaleform::Render::DepthStencilSurface *);
	Scaleform::Render::DepthStencilSurface * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::DepthStencilSurface * pNext; // 0x8
	void * pVoidNext; // 0x8
};
class Scaleform::Render::DepthStencilSurface :
	Scaleform::RefCountBase<Scaleform::Render::DepthStencilSurface,72>,
	Scaleform::ListNodeSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface>,
	Scaleform::Render::FenceResource
{
public:
	DepthStencilSurface(Scaleform::Render::DepthStencilSurface &);
	DepthStencilSurface(const Scaleform::Render::DepthStencilSurface &);
	DepthStencilSurface(Scaleform::Render::TextureManagerLocks *, const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::MemoryManager *);
	Scaleform::Render::TextureManager * GetTextureManager();
	Scaleform::Render::Size<unsigned long> GetSize();
	bool Initialize();
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> pManagerLocks; // 0x28
	Scaleform::Render::Texture::CreateState State; // 0x30
	Scaleform::Render::Size<unsigned long> Size; // 0x34
	Scaleform::Ptr<Scaleform::Render::MemoryManager> pMemoryManager; // 0x40
	virtual ~DepthStencilSurface();
	Scaleform::Render::DepthStencilSurface & operator=(Scaleform::Render::DepthStencilSurface &);
	Scaleform::Render::DepthStencilSurface & operator=(const Scaleform::Render::DepthStencilSurface &);
};
Scaleform::Render::TextureManager * Scaleform::Render::DepthStencilSurface::GetTextureManager(); // 0x1405F6020
Scaleform::Render::Size<unsigned long> Scaleform::Render::DepthStencilSurface::GetSize(); // 0x1405F5F80
class Scaleform::Ptr<Scaleform::Render::MemoryManager>
{
protected:
	Scaleform::Render::MemoryManager * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MemoryManager>(const Scaleform::Ptr<Scaleform::Render::MemoryManager> &);
	Ptr<Scaleform::Render::MemoryManager>(Scaleform::Render::MemoryManager *);
	Ptr<Scaleform::Render::MemoryManager>(Scaleform::Ptr<Scaleform::Render::MemoryManager> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MemoryManager>(Scaleform::Pickable<Scaleform::Render::MemoryManager>);
	Ptr<Scaleform::Render::MemoryManager>(Scaleform::Render::MemoryManager &);
	Ptr<Scaleform::Render::MemoryManager>();
	~Ptr<Scaleform::Render::MemoryManager>();
	bool operator==(Scaleform::Render::MemoryManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MemoryManager> &);
	bool operator!=(Scaleform::Render::MemoryManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MemoryManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MemoryManager> &);
	Scaleform::Ptr<Scaleform::Render::MemoryManager> & operator=(Scaleform::Pickable<Scaleform::Render::MemoryManager>);
	const Scaleform::Ptr<Scaleform::Render::MemoryManager> & operator=(Scaleform::Render::MemoryManager &);
	const Scaleform::Ptr<Scaleform::Render::MemoryManager> & operator=(Scaleform::Render::MemoryManager *);
	const Scaleform::Ptr<Scaleform::Render::MemoryManager> & operator=(const Scaleform::Ptr<Scaleform::Render::MemoryManager> &);
	Scaleform::Ptr<Scaleform::Render::MemoryManager> & SetPtr(Scaleform::Pickable<Scaleform::Render::MemoryManager>);
	Scaleform::Ptr<Scaleform::Render::MemoryManager> & SetPtr(Scaleform::Render::MemoryManager &);
	Scaleform::Ptr<Scaleform::Render::MemoryManager> & SetPtr(Scaleform::Render::MemoryManager *);
	Scaleform::Ptr<Scaleform::Render::MemoryManager> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MemoryManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MemoryManager * & GetRawRef();
	Scaleform::Render::MemoryManager * GetPtr();
	Scaleform::Render::MemoryManager & operator*();
	Scaleform::Render::MemoryManager * operator->();
	Scaleform::Render::MemoryManager * operator class Scaleform::Render::MemoryManager *();
	Scaleform::Ptr<Scaleform::Render::MemoryManager> & Pick(Scaleform::Render::MemoryManager *);
	Scaleform::Ptr<Scaleform::Render::MemoryManager> & Pick(Scaleform::Pickable<Scaleform::Render::MemoryManager>);
	Scaleform::Ptr<Scaleform::Render::MemoryManager> & Pick(Scaleform::Ptr<Scaleform::Render::MemoryManager> &);
};
class Scaleform::Render::ImageUpdateSync
{
public:
	~ImageUpdateSync();
	void UpdateImage(Scaleform::Render::ImageUpdate *);
	void UpdateImage(Scaleform::Render::Image *);
	ImageUpdateSync(const Scaleform::Render::ImageUpdateSync &);
	ImageUpdateSync();
	Scaleform::Render::ImageUpdateSync & operator=(const Scaleform::Render::ImageUpdateSync &);
};
class Scaleform::Render::ImageUpdate :
	Scaleform::RefCountBase<Scaleform::Render::ImageUpdate,2>
{
protected:
	Scaleform::Ptr<Scaleform::Render::Image> pImage; // 0x10
public:
	ImageUpdate(Scaleform::Render::ImageUpdate &);
	ImageUpdate(const Scaleform::Render::ImageUpdate &);
	ImageUpdate(Scaleform::Render::Image *);
	Scaleform::Render::Image * GetImage();
	void HandleUpdate(Scaleform::Render::TextureManager *);
	virtual ~ImageUpdate();
	Scaleform::Render::ImageUpdate & operator=(Scaleform::Render::ImageUpdate &);
	Scaleform::Render::ImageUpdate & operator=(const Scaleform::Render::ImageUpdate &);
};
class Scaleform::RefCountBase<Scaleform::Render::ImageUpdate,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::ImageUpdate,2>(Scaleform::RefCountBase<Scaleform::Render::ImageUpdate,2> &);
	RefCountBase<Scaleform::Render::ImageUpdate,2>(const Scaleform::RefCountBase<Scaleform::Render::ImageUpdate,2> &);
	RefCountBase<Scaleform::Render::ImageUpdate,2>();
	virtual ~RefCountBase<Scaleform::Render::ImageUpdate,2>();
	Scaleform::RefCountBase<Scaleform::Render::ImageUpdate,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::ImageUpdate,2> &);
	Scaleform::RefCountBase<Scaleform::Render::ImageUpdate,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ImageUpdate,2> &);
};
class Scaleform::Ptr<Scaleform::Render::Image>
{
protected:
	Scaleform::Render::Image * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Image>(const Scaleform::Ptr<Scaleform::Render::Image> &);
	Ptr<Scaleform::Render::Image>(Scaleform::Render::Image *);
	Ptr<Scaleform::Render::Image>(Scaleform::Ptr<Scaleform::Render::Image> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Image>(Scaleform::Pickable<Scaleform::Render::Image>);
	Ptr<Scaleform::Render::Image>(Scaleform::Render::Image &);
	Ptr<Scaleform::Render::Image>();
	~Ptr<Scaleform::Render::Image>();
	bool operator==(Scaleform::Render::Image *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Image> &);
	bool operator!=(Scaleform::Render::Image *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Image> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Image> &);
	Scaleform::Ptr<Scaleform::Render::Image> & operator=(Scaleform::Pickable<Scaleform::Render::Image>);
	const Scaleform::Ptr<Scaleform::Render::Image> & operator=(Scaleform::Render::Image &);
	const Scaleform::Ptr<Scaleform::Render::Image> & operator=(Scaleform::Render::Image *);
	const Scaleform::Ptr<Scaleform::Render::Image> & operator=(const Scaleform::Ptr<Scaleform::Render::Image> &);
	Scaleform::Ptr<Scaleform::Render::Image> & SetPtr(Scaleform::Pickable<Scaleform::Render::Image>);
	Scaleform::Ptr<Scaleform::Render::Image> & SetPtr(Scaleform::Render::Image &);
	Scaleform::Ptr<Scaleform::Render::Image> & SetPtr(Scaleform::Render::Image *);
	Scaleform::Ptr<Scaleform::Render::Image> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Image> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Image * & GetRawRef();
	Scaleform::Render::Image * GetPtr();
	Scaleform::Render::Image & operator*();
	Scaleform::Render::Image * operator->();
	Scaleform::Render::Image * operator class Scaleform::Render::Image *();
	Scaleform::Ptr<Scaleform::Render::Image> & Pick(Scaleform::Render::Image *);
	Scaleform::Ptr<Scaleform::Render::Image> & Pick(Scaleform::Pickable<Scaleform::Render::Image>);
	Scaleform::Ptr<Scaleform::Render::Image> & Pick(Scaleform::Ptr<Scaleform::Render::Image> &);
};
struct Scaleform::Render::ImageUpdateQueue
{
	struct UpdateShrinkPolicy;
	typedef unsigned long long UpdateRef;
	Scaleform::ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> > Queue; // 0x0
	void Add(Scaleform::Render::ImageUpdate *);
	void Add(Scaleform::Render::Image *);
	~ImageUpdateQueue();
	void ProcessUpdates(Scaleform::Render::TextureManager *);
	ImageUpdateQueue(const Scaleform::Render::ImageUpdateQueue &);
	ImageUpdateQueue();
	Scaleform::Render::ImageUpdateQueue & operator=(const Scaleform::Render::ImageUpdateQueue &);
};
struct Scaleform::ArrayConstPolicy<4,4,0>
{
	struct SelfType;
	ArrayConstPolicy<4,4,0>(const Scaleform::ArrayConstPolicy<4,4,0> &);
	ArrayConstPolicy<4,4,0>();
	unsigned long long GetMinCapacity();
	unsigned long long GetGranularity();
	bool NeverShrinking();
	unsigned long long GetCapacity();
	void SetCapacity(unsigned long long);
private:
	unsigned long long Capacity; // 0x0
};
class Scaleform::ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned __int64,Scaleform::AllocatorLH<unsigned __int64,72>,Scaleform::ArrayConstPolicy<4,4,0> > >
{
	typedef unsigned long long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> >(const Scaleform::ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> > &);
	ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> >(const Scaleform::ArrayConstPolicy<4,4,0> &);
	ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> >(long);
	ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> >();
	const Scaleform::ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> > & operator=(const Scaleform::ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> > &);
	~ArrayLH<unsigned __int64,72,Scaleform::ArrayConstPolicy<4,4,0> >();
};
class Scaleform::RefCountBase<Scaleform::Render::TextureManager,72> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 72,
	};
public:
	RefCountBase<Scaleform::Render::TextureManager,72>(Scaleform::RefCountBase<Scaleform::Render::TextureManager,72> &);
	RefCountBase<Scaleform::Render::TextureManager,72>(const Scaleform::RefCountBase<Scaleform::Render::TextureManager,72> &);
	RefCountBase<Scaleform::Render::TextureManager,72>();
	virtual ~RefCountBase<Scaleform::Render::TextureManager,72>();
	Scaleform::RefCountBase<Scaleform::Render::TextureManager,72> & operator=(Scaleform::RefCountBase<Scaleform::Render::TextureManager,72> &);
	Scaleform::RefCountBase<Scaleform::Render::TextureManager,72> & operator=(const Scaleform::RefCountBase<Scaleform::Render::TextureManager,72> &);
};
class Scaleform::Render::TextureManager :
	Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>,
	Scaleform::Render::ImageUpdateSync
{
public:
	TextureManager(const Scaleform::Render::TextureManager &);
	TextureManager(unsigned long, Scaleform::Render::ThreadCommandQueue *, Scaleform::Render::TextureCache *);
	virtual ~TextureManager();
	void SetRenderSync(Scaleform::Render::RenderSync *);
	Scaleform::Render::RenderSync * GetRenderSync();
	Scaleform::Render::MemoryManager * GetMemoryManager();
	Scaleform::Render::Texture * CreateTexture(Scaleform::Render::ImageFormat, unsigned long, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageBase *, Scaleform::Render::MemoryManager *);
	unsigned long GetTextureFormatSupport();
	unsigned long GetTextureUseCaps(Scaleform::Render::ImageFormat);
	bool IsNonPow2Supported(Scaleform::Render::ImageFormat, unsigned short);
	Scaleform::Render::DepthStencilSurface * CreateDepthStencilSurface(const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::MemoryManager *);
	Scaleform::Render::DepthStencilBuffer * CreateDSBuffer(const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::MemoryManager *);
	bool CanCreateTextureCurrentThread();
	void ProcessQueues();
	void Reset();
	void BeginFrame();
	void EndFrame();
	void BeginScene();
	void EndScene();
	virtual void UpdateImage(Scaleform::Render::ImageUpdate *);
	virtual void UpdateImage(Scaleform::Render::Image *);
	Scaleform::Render::ImageFormat GetDrawableImageFormat();
	bool IsDrawableImageFormat(Scaleform::Render::ImageFormat);
	Scaleform::Render::ImageSwizzler & GetImageSwizzler();
	Scaleform::Render::TextureCache * GetTextureCache();
	class ServiceCommand;
protected:
	Scaleform::Render::TextureManager * getThis();
	void processImageUpdates();
	void processTextureKillList();
	void processInitTextures();
	const Scaleform::Render::TextureFormat * getTextureFormat(Scaleform::Render::ImageFormat);
	const Scaleform::Render::TextureFormat * precreateTexture(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageBase *);
	Scaleform::Render::Texture * postCreateTexture(Scaleform::Render::Texture *, unsigned long);
	Scaleform::Render::DepthStencilSurface * postCreateDepthStencilSurface(Scaleform::Render::DepthStencilSurface *);
	bool isScanlineCompatible(const Scaleform::Render::TextureFormat *);
	Scaleform::Render::MappedTextureBase * mapTexture(Scaleform::Render::Texture *);
	Scaleform::Render::MappedTextureBase * mapTexture(Scaleform::Render::Texture *, unsigned long, unsigned long);
	void unmapTexture(Scaleform::Render::Texture *, bool);
	Scaleform::Render::MappedTextureBase & getDefaultMappedTexture();
	Scaleform::Render::MappedTextureBase * createMappedTexture();
	class TextureList;
	class DepthStencilList;
	Scaleform::Render::TextureManager::ServiceCommand ServiceCommandInstance; // 0x18
	unsigned long RenderThreadId; // 0x30
	Scaleform::Render::ThreadCommandQueue * pRTCommandQueue; // 0x38
	Scaleform::Ptr<Scaleform::Render::TextureCache> pTextureCache; // 0x40
	Scaleform::Ptr<Scaleform::Render::RenderSync> pRenderSync; // 0x48
	Scaleform::Ptr<Scaleform::Render::MemoryManager> pMemoryManager; // 0x50
	Scaleform::Ptr<Scaleform::Render::TextureManagerLocks> pLocks; // 0x58
	Scaleform::Render::ImageUpdateQueue ImageUpdates; // 0x60
	Scaleform::ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy> TextureFormats; // 0x78
	Scaleform::ListSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> Textures; // 0x90
	Scaleform::ListSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> TextureInitQueue; // 0xA0
	Scaleform::ListSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface> DepthStencilInitQueue; // 0xB0
public:
	Scaleform::Render::TextureManager & operator=(const Scaleform::Render::TextureManager &);
	void __dflt_ctor_closure();
};
Scaleform::Render::DepthStencilBuffer * Scaleform::Render::TextureManager::CreateDSBuffer(const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::MemoryManager * manager); // 0x1400470F0
bool Scaleform::Render::TextureManager::CanCreateTextureCurrentThread(); // 0x1403245E0
Scaleform::Render::ImageFormat Scaleform::Render::TextureManager::GetDrawableImageFormat(); // 0x1400482A0
bool Scaleform::Render::TextureManager::IsDrawableImageFormat(Scaleform::Render::ImageFormat format); // 0x140326620
class Scaleform::Render::TextureManager::ServiceCommand :
	Scaleform::Render::ThreadCommand
{
private:
	Scaleform::Render::TextureManager * pManager; // 0x10
public:
	ServiceCommand(Scaleform::Render::TextureManager::ServiceCommand &);
	ServiceCommand(const Scaleform::Render::TextureManager::ServiceCommand &);
	ServiceCommand(Scaleform::Render::TextureManager *);
	virtual void Execute();
	virtual ~ServiceCommand();
	Scaleform::Render::TextureManager::ServiceCommand & operator=(Scaleform::Render::TextureManager::ServiceCommand &);
	Scaleform::Render::TextureManager::ServiceCommand & operator=(const Scaleform::Render::TextureManager::ServiceCommand &);
};
void Scaleform::Render::TextureManager::ServiceCommand::Execute(); // 0x1402EE860
bool Scaleform::Render::TextureManager::IsNonPow2Supported(Scaleform::Render::ImageFormat __formal, unsigned short __formal); // 0x1400B8180
Scaleform::Render::MappedTextureBase * Scaleform::Render::TextureManager::mapTexture(Scaleform::Render::Texture * p); // 0x140327B30
class Scaleform::ListSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> :
	Scaleform::List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNodeSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> >
{
public:
	ListSafe<Scaleform::Render::Texture,Scaleform::Render::Texture>();
};
class Scaleform::ListSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface> :
	Scaleform::List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNodeSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface> >
{
public:
	ListSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface>();
};
class Scaleform::Ptr<Scaleform::Render::TextureCache>
{
protected:
	Scaleform::Render::TextureCache * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextureCache>(const Scaleform::Ptr<Scaleform::Render::TextureCache> &);
	Ptr<Scaleform::Render::TextureCache>(Scaleform::Render::TextureCache *);
	Ptr<Scaleform::Render::TextureCache>(Scaleform::Ptr<Scaleform::Render::TextureCache> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextureCache>(Scaleform::Pickable<Scaleform::Render::TextureCache>);
	Ptr<Scaleform::Render::TextureCache>(Scaleform::Render::TextureCache &);
	Ptr<Scaleform::Render::TextureCache>();
	~Ptr<Scaleform::Render::TextureCache>();
	bool operator==(Scaleform::Render::TextureCache *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextureCache> &);
	bool operator!=(Scaleform::Render::TextureCache *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextureCache> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextureCache> &);
	Scaleform::Ptr<Scaleform::Render::TextureCache> & operator=(Scaleform::Pickable<Scaleform::Render::TextureCache>);
	const Scaleform::Ptr<Scaleform::Render::TextureCache> & operator=(Scaleform::Render::TextureCache &);
	const Scaleform::Ptr<Scaleform::Render::TextureCache> & operator=(Scaleform::Render::TextureCache *);
	const Scaleform::Ptr<Scaleform::Render::TextureCache> & operator=(const Scaleform::Ptr<Scaleform::Render::TextureCache> &);
	Scaleform::Ptr<Scaleform::Render::TextureCache> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextureCache>);
	Scaleform::Ptr<Scaleform::Render::TextureCache> & SetPtr(Scaleform::Render::TextureCache &);
	Scaleform::Ptr<Scaleform::Render::TextureCache> & SetPtr(Scaleform::Render::TextureCache *);
	Scaleform::Ptr<Scaleform::Render::TextureCache> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextureCache> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextureCache * & GetRawRef();
	Scaleform::Render::TextureCache * GetPtr();
	Scaleform::Render::TextureCache & operator*();
	Scaleform::Render::TextureCache * operator->();
	Scaleform::Render::TextureCache * operator class Scaleform::Render::TextureCache *();
	Scaleform::Ptr<Scaleform::Render::TextureCache> & Pick(Scaleform::Render::TextureCache *);
	Scaleform::Ptr<Scaleform::Render::TextureCache> & Pick(Scaleform::Pickable<Scaleform::Render::TextureCache>);
	Scaleform::Ptr<Scaleform::Render::TextureCache> & Pick(Scaleform::Ptr<Scaleform::Render::TextureCache> &);
};
class Scaleform::Ptr<Scaleform::Render::RenderSync>
{
protected:
	Scaleform::Render::RenderSync * pObject; // 0x0
public:
	Ptr<Scaleform::Render::RenderSync>(const Scaleform::Ptr<Scaleform::Render::RenderSync> &);
	Ptr<Scaleform::Render::RenderSync>(Scaleform::Render::RenderSync *);
	Ptr<Scaleform::Render::RenderSync>(Scaleform::Ptr<Scaleform::Render::RenderSync> &, Scaleform::PickType);
	Ptr<Scaleform::Render::RenderSync>(Scaleform::Pickable<Scaleform::Render::RenderSync>);
	Ptr<Scaleform::Render::RenderSync>(Scaleform::Render::RenderSync &);
	Ptr<Scaleform::Render::RenderSync>();
	~Ptr<Scaleform::Render::RenderSync>();
	bool operator==(Scaleform::Render::RenderSync *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::RenderSync> &);
	bool operator!=(Scaleform::Render::RenderSync *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::RenderSync> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::RenderSync> &);
	Scaleform::Ptr<Scaleform::Render::RenderSync> & operator=(Scaleform::Pickable<Scaleform::Render::RenderSync>);
	const Scaleform::Ptr<Scaleform::Render::RenderSync> & operator=(Scaleform::Render::RenderSync &);
	const Scaleform::Ptr<Scaleform::Render::RenderSync> & operator=(Scaleform::Render::RenderSync *);
	const Scaleform::Ptr<Scaleform::Render::RenderSync> & operator=(const Scaleform::Ptr<Scaleform::Render::RenderSync> &);
	Scaleform::Ptr<Scaleform::Render::RenderSync> & SetPtr(Scaleform::Pickable<Scaleform::Render::RenderSync>);
	Scaleform::Ptr<Scaleform::Render::RenderSync> & SetPtr(Scaleform::Render::RenderSync &);
	Scaleform::Ptr<Scaleform::Render::RenderSync> & SetPtr(Scaleform::Render::RenderSync *);
	Scaleform::Ptr<Scaleform::Render::RenderSync> & SetPtr(const Scaleform::Ptr<Scaleform::Render::RenderSync> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::RenderSync * & GetRawRef();
	Scaleform::Render::RenderSync * GetPtr();
	Scaleform::Render::RenderSync & operator*();
	Scaleform::Render::RenderSync * operator->();
	Scaleform::Render::RenderSync * operator class Scaleform::Render::RenderSync *();
	Scaleform::Ptr<Scaleform::Render::RenderSync> & Pick(Scaleform::Render::RenderSync *);
	Scaleform::Ptr<Scaleform::Render::RenderSync> & Pick(Scaleform::Pickable<Scaleform::Render::RenderSync>);
	Scaleform::Ptr<Scaleform::Render::RenderSync> & Pick(Scaleform::Ptr<Scaleform::Render::RenderSync> &);
};
class Scaleform::ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::Render::TextureFormat ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::TextureFormat *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::RefCountBaseV<Scaleform::Render::Image,3> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountVImpl,3>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 3,
	};
public:
	RefCountBaseV<Scaleform::Render::Image,3>(Scaleform::RefCountBaseV<Scaleform::Render::Image,3> &);
	RefCountBaseV<Scaleform::Render::Image,3>(const Scaleform::RefCountBaseV<Scaleform::Render::Image,3> &);
	RefCountBaseV<Scaleform::Render::Image,3>();
	virtual ~RefCountBaseV<Scaleform::Render::Image,3>();
	Scaleform::RefCountBaseV<Scaleform::Render::Image,3> & operator=(Scaleform::RefCountBaseV<Scaleform::Render::Image,3> &);
	Scaleform::RefCountBaseV<Scaleform::Render::Image,3> & operator=(const Scaleform::RefCountBaseV<Scaleform::Render::Image,3> &);
};
class Scaleform::Render::ImageBase :
	Scaleform::RefCountBaseV<Scaleform::Render::Image,3>
{
	enum ImageType
	{
		Type_ImageBase = 0,
		Type_Image = 1,
		Type_RawImage = 2,
		Type_GradientImage = 3,
		Type_TextureImage = 4,
		Type_SubImage = 5,
		Type_DrawableImage = 6,
		Type_Other = 7,
	};
public:
	Scaleform::Render::ImageBase::ImageType GetImageType();
	Scaleform::Render::ImageFormat GetFormat();
	Scaleform::Render::Size<unsigned long> GetSize();
	Scaleform::Render::Rect<unsigned long> GetRect();
	unsigned long GetMipmapCount();
	Scaleform::Render::ImageFormat GetFormatNoConv();
	typedef void(*CopyScanlineFunc)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *);
	static void CopyScanlineDefault(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *);
	bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	Scaleform::Render::Image * GetAsImage();
	bool IsDelegate();
	ImageBase(Scaleform::Render::ImageBase &);
	ImageBase(const Scaleform::Render::ImageBase &);
	ImageBase();
	virtual ~ImageBase();
	Scaleform::Render::ImageBase & operator=(Scaleform::Render::ImageBase &);
	Scaleform::Render::ImageBase & operator=(const Scaleform::Render::ImageBase &);
};
class Scaleform::Render::Image :
	Scaleform::Render::ImageBase
{
protected:
	Scaleform::AtomicPtr<Scaleform::Render::Texture> pTexture; // 0x10
	Scaleform::Render::ImageUpdateSync * pUpdateSync; // 0x18
	Scaleform::Render::Matrix2x4<float> * pInverseMatrix; // 0x20
	void releaseTexture();
	void initTexture_NoAddRef(Scaleform::Render::Texture *);
public:
	Image(const Scaleform::Render::Image &);
	Image(Scaleform::Render::Texture *, Scaleform::Render::ImageUpdateSync *);
	virtual ~Image();
	static Scaleform::Render::Image * Create(Scaleform::Render::ImageFormat, unsigned long, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::MemoryHeap *, Scaleform::Render::TextureManager *, Scaleform::Render::ImageUpdateSync *);
	Scaleform::Render::Image * CreateSubImage(const Scaleform::Render::Rect<unsigned long> &, Scaleform::MemoryHeap *);
	virtual Scaleform::Render::ImageBase::ImageType GetImageType();
	Scaleform::Render::ImageFormat GetFormat() = 0;
	unsigned long GetUse();
	Scaleform::Render::Size<unsigned long> GetSize() = 0;
	virtual Scaleform::Render::Rect<unsigned long> GetRect();
	void SetMatrix(const Scaleform::Render::Matrix2x4<float> &, Scaleform::MemoryHeap *);
	void GetMatrix(Scaleform::Render::Matrix2x4<float> *);
	void SetMatrixInverse(const Scaleform::Render::Matrix2x4<float> &, Scaleform::MemoryHeap *);
	bool GetMatrixInverse(Scaleform::Render::Matrix2x4<float> *);
	bool Map(Scaleform::Render::ImageData *, unsigned long, unsigned long);
	bool Unmap();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	bool Update(Scaleform::Render::ImageUpdate *);
	bool Update();
	Scaleform::Render::Texture * GetTexture(Scaleform::Render::TextureManager *);
	void GetUVGenMatrix(Scaleform::Render::Matrix2x4<float> *, Scaleform::Render::TextureManager *);
	void GetUVNormMatrix(Scaleform::Render::Matrix2x4<float> *, Scaleform::Render::TextureManager *);
	enum TextureLossReason
	{
		TLR_ManagerDestroyed = 0,
		TLR_DeviceLost = 1,
		TLR_SwappedOut = 2,
	};
	void TextureLost(Scaleform::Render::Image::TextureLossReason);
	Scaleform::Render::MemoryBufferImage * GetAsMemoryImage();
	Scaleform::Render::Image & operator=(const Scaleform::Render::Image &);
	void __dflt_ctor_closure();
};
class Scaleform::AtomicPtr<Scaleform::Render::Texture> :
	Scaleform::AtomicValueBase<Scaleform::Render::Texture *>
{
	class Ops;
public:
	AtomicPtr<Scaleform::Render::Texture>(Scaleform::AtomicPtr<Scaleform::Render::Texture> &);
	AtomicPtr<Scaleform::Render::Texture>(const Scaleform::AtomicPtr<Scaleform::Render::Texture> &);
	AtomicPtr<Scaleform::Render::Texture>(Scaleform::Render::Texture *);
	AtomicPtr<Scaleform::Render::Texture>();
	Scaleform::Render::Texture * operator->();
	Scaleform::Render::Texture * operator class Scaleform::Render::Texture *();
	Scaleform::AtomicPtr<Scaleform::Render::Texture> & operator=(Scaleform::AtomicPtr<Scaleform::Render::Texture> &);
	Scaleform::AtomicPtr<Scaleform::Render::Texture> & operator=(const Scaleform::AtomicPtr<Scaleform::Render::Texture> &);
	Scaleform::Render::Texture * operator=(Scaleform::Render::Texture *);
	Scaleform::Render::Texture * operator++(long);
	Scaleform::Render::Texture * operator++();
	Scaleform::Render::Texture * operator--(long);
	Scaleform::Render::Texture * operator--();
};
Scaleform::Render::ImageBase::ImageType Scaleform::Render::Image::GetImageType(); // 0x1400482A0
Scaleform::Render::Rect<unsigned long> Scaleform::Render::Image::GetRect(); // 0x1402E2EB0
bool Scaleform::Render::Image::Update(); // 0x1402EC320
bool Scaleform::Render::Image::Update(Scaleform::Render::ImageUpdate * pupdate); // 0x1402EC2F0
Scaleform::Render::Texture * Scaleform::Render::Image::GetTexture(Scaleform::Render::TextureManager * pmanager); // 0x1402E32E0
void Scaleform::Render::Image::TextureLost(Scaleform::Render::Image::TextureLossReason reason); // 0x1402EB640
class Scaleform::Render::ImageDelegate :
	Scaleform::Render::Image
{
public:
	Scaleform::Ptr<Scaleform::Render::Image> pImage; // 0x28
	ImageDelegate(Scaleform::Render::ImageDelegate &);
	ImageDelegate(const Scaleform::Render::ImageDelegate &);
	ImageDelegate(Scaleform::Render::Image *);
	ImageDelegate();
	virtual Scaleform::Render::ImageBase::ImageType GetImageType();
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual Scaleform::Render::Rect<unsigned long> GetRect();
	virtual unsigned long GetMipmapCount();
	virtual void SetMatrix(const Scaleform::Render::Matrix2x4<float> &, Scaleform::MemoryHeap *);
	virtual void GetMatrix(Scaleform::Render::Matrix2x4<float> *);
	virtual void SetMatrixInverse(const Scaleform::Render::Matrix2x4<float> &, Scaleform::MemoryHeap *);
	virtual bool GetMatrixInverse(Scaleform::Render::Matrix2x4<float> *);
	virtual void GetUVGenMatrix(Scaleform::Render::Matrix2x4<float> *, Scaleform::Render::TextureManager *);
	virtual void GetUVNormMatrix(Scaleform::Render::Matrix2x4<float> *, Scaleform::Render::TextureManager *);
	Scaleform::Render::ImageFormat GetFormatNoConv();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual unsigned long GetUse();
	virtual Scaleform::Render::Image * CreateSubImage(const Scaleform::Render::Rect<unsigned long> &, Scaleform::MemoryHeap *);
	virtual bool Map(Scaleform::Render::ImageData *, unsigned long, unsigned long);
	virtual bool Unmap();
	virtual Scaleform::Render::Texture * GetTexture(Scaleform::Render::TextureManager *);
	virtual void TextureLost(Scaleform::Render::Image::TextureLossReason);
	virtual bool Update(Scaleform::Render::ImageUpdate *);
	virtual bool Update();
	virtual Scaleform::Render::Image * GetAsImage();
	virtual Scaleform::Render::MemoryBufferImage * GetAsMemoryImage();
	virtual bool IsDelegate();
	virtual ~ImageDelegate();
	Scaleform::Render::ImageDelegate & operator=(Scaleform::Render::ImageDelegate &);
	Scaleform::Render::ImageDelegate & operator=(const Scaleform::Render::ImageDelegate &);
};
Scaleform::Render::ImageBase::ImageType Scaleform::Render::ImageDelegate::GetImageType(); // 0x1402E2730
Scaleform::Render::ImageFormat Scaleform::Render::ImageDelegate::GetFormat(); // 0x1403253A0
Scaleform::Render::Size<unsigned long> Scaleform::Render::ImageDelegate::GetSize(); // 0x140325FA0
Scaleform::Render::Rect<unsigned long> Scaleform::Render::ImageDelegate::GetRect(); // 0x1402E2EE0
unsigned long Scaleform::Render::ImageDelegate::GetMipmapCount(); // 0x1402E2D40
void Scaleform::Render::ImageDelegate::SetMatrix(const Scaleform::Render::Matrix2x4<float> & mat, Scaleform::MemoryHeap * heap); // 0x1402EA860
void Scaleform::Render::ImageDelegate::GetMatrix(Scaleform::Render::Matrix2x4<float> * mat); // 0x1403E3350
void Scaleform::Render::ImageDelegate::SetMatrixInverse(const Scaleform::Render::Matrix2x4<float> & mat, Scaleform::MemoryHeap * heap); // 0x1402EA870
bool Scaleform::Render::ImageDelegate::GetMatrixInverse(Scaleform::Render::Matrix2x4<float> * mat); // 0x1402E2CE0
void Scaleform::Render::ImageDelegate::GetUVGenMatrix(Scaleform::Render::Matrix2x4<float> * mat, Scaleform::Render::TextureManager * manager); // 0x1402E3600
void Scaleform::Render::ImageDelegate::GetUVNormMatrix(Scaleform::Render::Matrix2x4<float> * mat, Scaleform::Render::TextureManager * manager); // 0x1402E3610
bool Scaleform::Render::ImageDelegate::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x1402E1580
unsigned long Scaleform::Render::ImageDelegate::GetUse(); // 0x1402E3620
Scaleform::Render::Image * Scaleform::Render::ImageDelegate::CreateSubImage(const Scaleform::Render::Rect<unsigned long> & rect, Scaleform::MemoryHeap * pheap); // 0x1402E1570
bool Scaleform::Render::ImageDelegate::Map(Scaleform::Render::ImageData * pdata, unsigned long levelIndex, unsigned long levelCount); // 0x1402E5580
bool Scaleform::Render::ImageDelegate::Unmap(); // 0x1402EC170
Scaleform::Render::Texture * Scaleform::Render::ImageDelegate::GetTexture(Scaleform::Render::TextureManager * pmanager); // 0x1402E3300
void Scaleform::Render::ImageDelegate::TextureLost(Scaleform::Render::Image::TextureLossReason reason); // 0x140326E90
bool Scaleform::Render::ImageDelegate::Update(); // 0x1402EC360
bool Scaleform::Render::ImageDelegate::Update(Scaleform::Render::ImageUpdate * pupdate); // 0x1402EC350
Scaleform::Render::MemoryBufferImage * Scaleform::Render::ImageDelegate::GetAsMemoryImage(); // 0x1402E2090
struct Scaleform::Render::ImageCreateArgs
{
	unsigned long Use; // 0x0
	Scaleform::MemoryHeap * pHeap; // 0x8
	Scaleform::Render::TextureManager * pManager; // 0x10
	Scaleform::Render::ImageUpdateSync * pUpdateSync; // 0x18
	Scaleform::Render::ImageFormat Format; // 0x20
	ImageCreateArgs(Scaleform::Render::TextureManager *);
	ImageCreateArgs(Scaleform::Render::ImageFormat, unsigned long, Scaleform::MemoryHeap *, Scaleform::Render::TextureManager *, Scaleform::Render::ImageUpdateSync *);
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::Render::ImageUpdateSync * GetUpdateSync();
	void __dflt_ctor_closure();
};
class Scaleform::Render::ImageSource :
	Scaleform::Render::ImageBase
{
public:
	bool IsDecodeOnlyImageCompatible(const Scaleform::Render::ImageCreateArgs &);
	Scaleform::Render::Image * CreateCompatibleImage(const Scaleform::Render::ImageCreateArgs &);
	ImageSource(Scaleform::Render::ImageSource &);
	ImageSource(const Scaleform::Render::ImageSource &);
	ImageSource();
	virtual ~ImageSource();
	Scaleform::Render::ImageSource & operator=(Scaleform::Render::ImageSource &);
	Scaleform::Render::ImageSource & operator=(const Scaleform::Render::ImageSource &);
};
class Scaleform::Render::WrapperImageSource :
	Scaleform::Render::ImageSource
{
protected:
	Scaleform::Ptr<Scaleform::Render::Image> pDelegate; // 0x10
public:
	WrapperImageSource(Scaleform::Render::WrapperImageSource &);
	WrapperImageSource(const Scaleform::Render::WrapperImageSource &);
	WrapperImageSource(Scaleform::Render::Image *);
	virtual Scaleform::Render::ImageBase::ImageType GetImageType();
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual unsigned long GetMipmapCount();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual Scaleform::Render::Image * CreateCompatibleImage(const Scaleform::Render::ImageCreateArgs &);
	virtual Scaleform::Render::Image * GetAsImage();
	virtual ~WrapperImageSource();
	Scaleform::Render::WrapperImageSource & operator=(Scaleform::Render::WrapperImageSource &);
	Scaleform::Render::WrapperImageSource & operator=(const Scaleform::Render::WrapperImageSource &);
};
Scaleform::Render::WrapperImageSource::WrapperImageSource(Scaleform::Render::Image * pdelegate); // 0x140345C50
Scaleform::Render::ImageBase::ImageType Scaleform::Render::WrapperImageSource::GetImageType(); // 0x14034FC20
Scaleform::Render::ImageFormat Scaleform::Render::WrapperImageSource::GetFormat(); // 0x1403477E0
Scaleform::Render::Size<unsigned long> Scaleform::Render::WrapperImageSource::GetSize(); // 0x140347830
unsigned long Scaleform::Render::WrapperImageSource::GetMipmapCount(); // 0x140347820
bool Scaleform::Render::WrapperImageSource::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x1403477B0
Scaleform::Render::Image * Scaleform::Render::WrapperImageSource::CreateCompatibleImage(const Scaleform::Render::ImageCreateArgs & args); // 0x140346CD0
Scaleform::Render::Image * Scaleform::Render::WrapperImageSource::GetAsImage(); // 0x14065ED30
class Scaleform::Render::RawImage :
	Scaleform::Render::Image
{
private:
	Scaleform::Render::ImageData Data; // 0x28
public:
	RawImage(const Scaleform::Render::RawImage &);
protected:
	RawImage();
public:
	virtual ~RawImage();
	void freeData();
	bool hasData();
	static Scaleform::Render::RawImage * Create(Scaleform::Render::ImageFormat, unsigned long, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::MemoryHeap *, Scaleform::Render::ImageUpdateSync *);
	bool GetImageData(Scaleform::Render::ImageData *);
	void SetImageData(Scaleform::Render::ImageData *);
	virtual Scaleform::Render::ImageBase::ImageType GetImageType();
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual unsigned long GetUse();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual unsigned long GetMipmapCount();
	virtual bool Map(Scaleform::Render::ImageData *, unsigned long, unsigned long);
	virtual bool Unmap();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual Scaleform::Render::Texture * GetTexture(Scaleform::Render::TextureManager *);
	virtual Scaleform::Render::Image * GetAsImage();
	Scaleform::Render::RawImage & operator=(const Scaleform::Render::RawImage &);
};
Scaleform::Render::ImageBase::ImageType Scaleform::Render::RawImage::GetImageType(); // 0x1400BB920
Scaleform::Render::ImageFormat Scaleform::Render::RawImage::GetFormat(); // 0x14035A420
unsigned long Scaleform::Render::RawImage::GetUse(); // 0x1403696E0
Scaleform::Render::Size<unsigned long> Scaleform::Render::RawImage::GetSize(); // 0x140325F80
unsigned long Scaleform::Render::RawImage::GetMipmapCount(); // 0x140325D40
class Scaleform::Render::TextureImage :
	Scaleform::Render::Image
{
private:
	Scaleform::Render::ImageFormat Format; // 0x28
	Scaleform::Render::Size<unsigned long> Size; // 0x2C
	unsigned long Use; // 0x34
public:
	TextureImage(Scaleform::Render::TextureImage &);
	TextureImage(const Scaleform::Render::TextureImage &);
	TextureImage(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::Texture *, Scaleform::Render::ImageUpdateSync *);
	void RefreshCachedFormat();
	virtual Scaleform::Render::ImageBase::ImageType GetImageType();
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual unsigned long GetUse();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual unsigned long GetMipmapCount();
	virtual bool Map(Scaleform::Render::ImageData *, unsigned long, unsigned long);
	virtual bool Unmap();
	virtual void TextureLost(Scaleform::Render::Image::TextureLossReason);
	virtual Scaleform::Render::Image * GetAsImage();
	virtual ~TextureImage();
	Scaleform::Render::TextureImage & operator=(Scaleform::Render::TextureImage &);
	Scaleform::Render::TextureImage & operator=(const Scaleform::Render::TextureImage &);
};
Scaleform::Render::TextureImage::TextureImage(Scaleform::Render::ImageFormat format, const Scaleform::Render::Size<unsigned long> & size, unsigned long use, Scaleform::Render::Texture * ptexture, Scaleform::Render::ImageUpdateSync * psync); // 0x140323AC0
Scaleform::Render::ImageBase::ImageType Scaleform::Render::TextureImage::GetImageType(); // 0x14002DEF0
unsigned long Scaleform::Render::TextureImage::GetUse(); // 0x1403DD110
Scaleform::Render::Size<unsigned long> Scaleform::Render::TextureImage::GetSize(); // 0x140325FC0
unsigned long Scaleform::Render::TextureImage::GetMipmapCount(); // 0x140325D50
Scaleform::Render::Image * Scaleform::Render::RawImage::GetAsImage(); // 0x14004EB00
class Scaleform::Render::SubImage :
	Scaleform::Render::Image
{
private:
	Scaleform::Ptr<Scaleform::Render::Image> pImage; // 0x28
	Scaleform::Render::Rect<unsigned long> SubRect; // 0x30
public:
	SubImage(Scaleform::Render::SubImage &);
	SubImage(const Scaleform::Render::SubImage &);
	SubImage(Scaleform::Render::Image *, const Scaleform::Render::Rect<unsigned long> &);
	virtual Scaleform::Render::ImageBase::ImageType GetImageType();
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual unsigned long GetUse();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual unsigned long GetMipmapCount();
	virtual Scaleform::Render::Rect<unsigned long> GetRect();
	virtual bool GetMatrixInverse(Scaleform::Render::Matrix2x4<float> *);
	virtual bool Map(Scaleform::Render::ImageData *, unsigned long, unsigned long);
	virtual bool Unmap();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual Scaleform::Render::Texture * GetTexture(Scaleform::Render::TextureManager *);
	virtual void TextureLost(Scaleform::Render::Image::TextureLossReason);
	Scaleform::Render::Image * GetBaseImage();
	virtual Scaleform::Render::Image * GetAsImage();
	virtual ~SubImage();
	Scaleform::Render::SubImage & operator=(Scaleform::Render::SubImage &);
	Scaleform::Render::SubImage & operator=(const Scaleform::Render::SubImage &);
};
Scaleform::Render::SubImage::SubImage(Scaleform::Render::Image * pimage, const Scaleform::Render::Rect<unsigned long> & rect); // 0x140323A30
Scaleform::Render::ImageBase::ImageType Scaleform::Render::SubImage::GetImageType(); // 0x1403EF7A0
Scaleform::Render::ImageFormat Scaleform::Render::SubImage::GetFormat(); // 0x1403253A0
unsigned long Scaleform::Render::SubImage::GetUse(); // 0x1402E3620
Scaleform::Render::Size<unsigned long> Scaleform::Render::SubImage::GetSize(); // 0x140325FA0
unsigned long Scaleform::Render::SubImage::GetMipmapCount(); // 0x1402E2D40
Scaleform::Render::Rect<unsigned long> Scaleform::Render::SubImage::GetRect(); // 0x140325F60
bool Scaleform::Render::SubImage::Map(Scaleform::Render::ImageData * __formal, unsigned long __formal, unsigned long __formal); // 0x14004BBE0
bool Scaleform::Render::SubImage::Decode(Scaleform::Render::ImageData * pdest, void(*csf)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x1402E1580
Scaleform::Render::Texture * Scaleform::Render::SubImage::GetTexture(Scaleform::Render::TextureManager * pm); // 0x1402E3300
void Scaleform::Render::SubImage::TextureLost(Scaleform::Render::Image::TextureLossReason reason); // 0x140326E90
enum Scaleform::Render::WrapMode
{
	Wrap_Repeat = 0,
	Wrap_Clamp = 1,
	Wrap_Mask = 1,
	Wrap_Count = 2,
};
enum Scaleform::Render::SampleMode
{
	Sample_Point = 0,
	Sample_Linear = 2,
	Sample_Mask = 2,
	Sample_Count = 2,
	Sample_Shift = 1,
};
enum Scaleform::Render::MipmapMode
{
	Mipmap_None = 0,
	Mipmap_2D = 4,
	Mipmap_Count = 2,
	Mipmap_Shift = 2,
};
struct Scaleform::Render::ImageFillMode
{
	unsigned char Fill; // 0x0
	ImageFillMode(const Scaleform::Render::ImageFillMode &);
	ImageFillMode(Scaleform::Render::WrapMode, Scaleform::Render::SampleMode);
	ImageFillMode();
	void operator=(const Scaleform::Render::ImageFillMode &);
	bool operator==(const Scaleform::Render::ImageFillMode &);
	bool operator!=(const Scaleform::Render::ImageFillMode &);
	void Set(Scaleform::Render::WrapMode, Scaleform::Render::SampleMode);
	Scaleform::Render::WrapMode GetWrapMode();
	void SetWrapMode(Scaleform::Render::WrapMode);
	Scaleform::Render::SampleMode GetSampleMode();
	void SetSampleMode(Scaleform::Render::SampleMode);
};
struct Scaleform::Render::TextureFormat :
	Scaleform::NewOverrideBase<72>
{
	~TextureFormat();
	Scaleform::Render::ImageFormat GetImageFormat();
	void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *) GetScanlineCopyFn();
	void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *) GetScanlineUncopyFn();
	unsigned long GetPlaneCount();
	TextureFormat(const Scaleform::Render::TextureFormat &);
	TextureFormat();
	Scaleform::Render::TextureFormat & operator=(const Scaleform::Render::TextureFormat &);
};
void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *) Scaleform::Render::TextureFormat::GetScanlineUncopyFn(); // 0x1400470F0
unsigned long Scaleform::Render::Texture::GetPlaneCount(); // 0x1405BF3E0
Scaleform::Render::ImageFormat Scaleform::Render::Texture::GetImageFormat(); // 0x1405F5F20