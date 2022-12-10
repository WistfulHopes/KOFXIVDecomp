#pragma once

class Scaleform::Render::RectData<unsigned long>
{
public:
	unsigned long x1; // 0x0
	unsigned long y1; // 0x4
	unsigned long x2; // 0x8
	unsigned long y2; // 0xC
};
class Scaleform::Render::RectData<int>
{
public:
	long x1; // 0x0
	long y1; // 0x4
	long x2; // 0x8
	long y2; // 0xC
};
class Scaleform::Render::RectData<double>
{
public:
	double x1; // 0x0
	double y1; // 0x8
	double x2; // 0x10
	double y2; // 0x18
};
class Scaleform::Render::RectData<long>
{
public:
	long x1; // 0x0
	long y1; // 0x4
	long x2; // 0x8
	long y2; // 0xC
};
class Scaleform::Render::Size<int>
{
public:
	long Width; // 0x0
	long Height; // 0x4
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Size<int>(Scaleform::Render::Size<int>::BoundsType);
	Size<int>(const Scaleform::Render::Size<int> &);
	Size<int>(long, long);
	Size<int>(long);
	Size<int>();
	void SetSize(const Scaleform::Render::Size<int> &);
	void SetSize(long, long);
	void SetSize(long);
	void SetWidth(long);
	void SetHeight(long);
	void Clear();
	void Swap(Scaleform::Render::Size<int> *);
	void Transpose();
	Scaleform::Render::Size<int> & SetLerp(const Scaleform::Render::Size<int> &, const Scaleform::Render::Size<int> &, long);
	bool IsEmpty();
	bool IsNull();
	Scaleform::Render::Size<int> Center();
	long HCenter();
	long VCenter();
	long Area();
	Scaleform::Render::Size<int> & Expand(long);
	Scaleform::Render::Size<int> & Expand(const Scaleform::Render::Size<int> &);
	Scaleform::Render::Size<int> & Expand(long, long);
	Scaleform::Render::Size<int> & Contract(long, long);
	Scaleform::Render::Size<int> & Contract(const Scaleform::Render::Size<int> &);
	Scaleform::Render::Size<int> & Contract(long);
	Scaleform::Render::Size<int> & Mul(long, long);
	Scaleform::Render::Size<int> & Mul(long);
	Scaleform::Render::Size<int> & Mul(const Scaleform::Render::Size<int> &);
	Scaleform::Render::Size<int> & Div(long, long);
	Scaleform::Render::Size<int> & Div(long);
	Scaleform::Render::Size<int> & Div(const Scaleform::Render::Size<int> &);
	Scaleform::Render::Size<int> & Clamp(long, long);
	Scaleform::Render::Size<int> & Clamp(const Scaleform::Render::Size<int> &);
	Scaleform::Render::Size<int> & ClampWidth(long);
	Scaleform::Render::Size<int> & ClampHeight(long);
	Scaleform::Render::Size<int> ExpandedTo(long, long);
	Scaleform::Render::Size<int> ExpandedTo(const Scaleform::Render::Size<int> &);
	Scaleform::Render::Size<int> ExpandedToWidth(long);
	Scaleform::Render::Size<int> ExpandedToHeight(long);
	Scaleform::Render::Size<int> ClampedTo(long, long);
	Scaleform::Render::Size<int> ClampedTo(const Scaleform::Render::Size<int> &);
	Scaleform::Render::Size<int> ClampedToWidth(long);
	Scaleform::Render::Size<int> ClampedToHeight(long);
	const Scaleform::Render::Size<int> & operator=(Scaleform::Render::Size<int>::BoundsType);
	const Scaleform::Render::Size<int> & operator=(long);
	const Scaleform::Render::Size<int> & operator=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> & operator+=(long);
	const Scaleform::Render::Size<int> & operator+=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> & operator-=(long);
	const Scaleform::Render::Size<int> & operator-=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> & operator*=(long);
	const Scaleform::Render::Size<int> & operator*=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> & operator/=(long);
	const Scaleform::Render::Size<int> & operator/=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> & operator|=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> & operator&=(const Scaleform::Render::Size<int> &);
	bool operator==(const Scaleform::Render::Size<int> &);
	bool operator!=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> operator-(long);
	const Scaleform::Render::Size<int> operator-(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> operator-();
	const Scaleform::Render::Size<int> operator+(long);
	const Scaleform::Render::Size<int> operator+(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> operator*(long);
	const Scaleform::Render::Size<int> operator*(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> operator/(long);
	const Scaleform::Render::Size<int> operator/(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> operator|(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Size<int> operator&(const Scaleform::Render::Size<int> &);
};
class Scaleform::Render::Size<long>
{
public:
	long Width; // 0x0
	long Height; // 0x4
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Size<long>(Scaleform::Render::Size<long>::BoundsType);
	Size<long>(const Scaleform::Render::Size<long> &);
	Size<long>(long, long);
	Size<long>(long);
	Size<long>();
	void SetSize(const Scaleform::Render::Size<long> &);
	void SetSize(long, long);
	void SetSize(long);
	void SetWidth(long);
	void SetHeight(long);
	void Clear();
	void Swap(Scaleform::Render::Size<long> *);
	void Transpose();
	Scaleform::Render::Size<long> & SetLerp(const Scaleform::Render::Size<long> &, const Scaleform::Render::Size<long> &, long);
	bool IsEmpty();
	bool IsNull();
	Scaleform::Render::Size<long> Center();
	long HCenter();
	long VCenter();
	long Area();
	Scaleform::Render::Size<long> & Expand(long);
	Scaleform::Render::Size<long> & Expand(const Scaleform::Render::Size<long> &);
	Scaleform::Render::Size<long> & Expand(long, long);
	Scaleform::Render::Size<long> & Contract(long, long);
	Scaleform::Render::Size<long> & Contract(const Scaleform::Render::Size<long> &);
	Scaleform::Render::Size<long> & Contract(long);
	Scaleform::Render::Size<long> & Mul(long, long);
	Scaleform::Render::Size<long> & Mul(long);
	Scaleform::Render::Size<long> & Mul(const Scaleform::Render::Size<long> &);
	Scaleform::Render::Size<long> & Div(long, long);
	Scaleform::Render::Size<long> & Div(long);
	Scaleform::Render::Size<long> & Div(const Scaleform::Render::Size<long> &);
	Scaleform::Render::Size<long> & Clamp(long, long);
	Scaleform::Render::Size<long> & Clamp(const Scaleform::Render::Size<long> &);
	Scaleform::Render::Size<long> & ClampWidth(long);
	Scaleform::Render::Size<long> & ClampHeight(long);
	Scaleform::Render::Size<long> ExpandedTo(long, long);
	Scaleform::Render::Size<long> ExpandedTo(const Scaleform::Render::Size<long> &);
	Scaleform::Render::Size<long> ExpandedToWidth(long);
	Scaleform::Render::Size<long> ExpandedToHeight(long);
	Scaleform::Render::Size<long> ClampedTo(long, long);
	Scaleform::Render::Size<long> ClampedTo(const Scaleform::Render::Size<long> &);
	Scaleform::Render::Size<long> ClampedToWidth(long);
	Scaleform::Render::Size<long> ClampedToHeight(long);
	const Scaleform::Render::Size<long> & operator=(Scaleform::Render::Size<long>::BoundsType);
	const Scaleform::Render::Size<long> & operator=(long);
	const Scaleform::Render::Size<long> & operator=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> & operator+=(long);
	const Scaleform::Render::Size<long> & operator+=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> & operator-=(long);
	const Scaleform::Render::Size<long> & operator-=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> & operator*=(long);
	const Scaleform::Render::Size<long> & operator*=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> & operator/=(long);
	const Scaleform::Render::Size<long> & operator/=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> & operator|=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> & operator&=(const Scaleform::Render::Size<long> &);
	bool operator==(const Scaleform::Render::Size<long> &);
	bool operator!=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> operator-(long);
	const Scaleform::Render::Size<long> operator-(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> operator-();
	const Scaleform::Render::Size<long> operator+(long);
	const Scaleform::Render::Size<long> operator+(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> operator*(long);
	const Scaleform::Render::Size<long> operator*(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> operator/(long);
	const Scaleform::Render::Size<long> operator/(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> operator|(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Size<long> operator&(const Scaleform::Render::Size<long> &);
};
class Scaleform::Render::Point<int>
{
public:
	long x; // 0x0
	long y; // 0x4
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Point<int>(const Scaleform::Render::Point<int> &);
	Point<int>(long, long);
	Point<int>(long);
	Point<int>();
	void SetPoint(Scaleform::Render::Point<int>::BoundsType);
	void SetPoint(const Scaleform::Render::Point<int> &);
	void SetPoint(long, long);
	void SetPoint(long);
	void Clear();
	void Swap(Scaleform::Render::Point<int> *);
	Scaleform::Render::Point<int> & SetLerp(const Scaleform::Render::Point<int> &, const Scaleform::Render::Point<int> &, long);
	bool IsNull();
	Scaleform::Render::Point<int> & Offset(long, long);
	Scaleform::Render::Point<int> & Offset(long);
	Scaleform::Render::Point<int> & Offset(const Scaleform::Render::Size<int> &);
	Scaleform::Render::Point<int> & Offset(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Point<int> & Mul(long, long);
	Scaleform::Render::Point<int> & Mul(long);
	Scaleform::Render::Point<int> & Mul(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Point<int> & Div(long, long);
	Scaleform::Render::Point<int> & Div(long);
	Scaleform::Render::Point<int> & Div(const Scaleform::Render::Point<int> &);
	long Dot(const Scaleform::Render::Point<int> &);
	long Dot(long, long);
	long Angle(const Scaleform::Render::Point<int> &);
	long Angle(long, long);
	long DistanceSquared();
	long DistanceSquared(const Scaleform::Render::Point<int> &);
	long DistanceSquared(long, long);
	long Distance();
	long Distance(const Scaleform::Render::Point<int> &);
	long Distance(long, long);
	long DistanceL1(const Scaleform::Render::Point<int> &);
	long DistanceL1(long, long);
	long DistanceLn(const Scaleform::Render::Point<int> &);
	long DistanceLn(long, long);
	void Clamp(long, long);
	void ClampMin(long);
	void ClampMax(long);
	Scaleform::Render::Point<int> & Absolute();
	bool BitwiseEqual(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> & operator=(Scaleform::Render::Point<int>::BoundsType);
	const Scaleform::Render::Point<int> & operator=(long);
	const Scaleform::Render::Point<int> & operator=(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> operator-(long);
	const Scaleform::Render::Point<int> operator-(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Point<int> operator-(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> operator-();
	const Scaleform::Render::Point<int> & operator+=(long);
	const Scaleform::Render::Point<int> & operator+=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Point<int> & operator+=(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> & operator-=(long);
	const Scaleform::Render::Point<int> & operator-=(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Point<int> & operator-=(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> & operator*=(long);
	const Scaleform::Render::Point<int> & operator*=(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> & operator/=(long);
	const Scaleform::Render::Point<int> & operator/=(const Scaleform::Render::Point<int> &);
	bool operator==(const Scaleform::Render::Point<int> &);
	bool operator!=(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> operator+(long);
	const Scaleform::Render::Point<int> operator+(const Scaleform::Render::Size<int> &);
	const Scaleform::Render::Point<int> operator+(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> operator*(long);
	const Scaleform::Render::Point<int> operator*(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Point<int> operator/(long);
	const Scaleform::Render::Point<int> operator/(const Scaleform::Render::Point<int> &);
};
bool Scaleform::Render::Rect<float>::IsNull(); // 0x1406F7480
bool Scaleform::Render::Rect<float>::IsEmpty(); // 0x1403CF840
Scaleform::Render::Rect<float> & Scaleform::Render::Rect<float>::Intersect(float left, float top, float right, float bottom); // 0x14035F510
bool Scaleform::Render::Rect<float>::IntersectRect(Scaleform::Render::Rect<float> * pdest, const Scaleform::Render::Rect<float> & r); // 0x140382580
class Scaleform::RefCountBase<Scaleform::Render::Rect<float>,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::Rect<float>,2>(Scaleform::RefCountBase<Scaleform::Render::Rect<float>,2> &);
	RefCountBase<Scaleform::Render::Rect<float>,2>(const Scaleform::RefCountBase<Scaleform::Render::Rect<float>,2> &);
	RefCountBase<Scaleform::Render::Rect<float>,2>();
	virtual ~RefCountBase<Scaleform::Render::Rect<float>,2>();
	Scaleform::RefCountBase<Scaleform::Render::Rect<float>,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::Rect<float>,2> &);
	Scaleform::RefCountBase<Scaleform::Render::Rect<float>,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Rect<float>,2> &);
};
class Scaleform::Render::Point<float>
{
public:
	float x; // 0x0
	float y; // 0x4
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Point<float>(const Scaleform::Render::Point<float> &);
	Point<float>(float, float);
	Point<float>(float);
	Point<float>();
	void SetPoint(Scaleform::Render::Point<float>::BoundsType);
	void SetPoint(const Scaleform::Render::Point<float> &);
	void SetPoint(float, float);
	void SetPoint(float);
	void Clear();
	void Swap(Scaleform::Render::Point<float> *);
	Scaleform::Render::Point<float> & SetLerp(const Scaleform::Render::Point<float> &, const Scaleform::Render::Point<float> &, float);
	bool IsNull();
	Scaleform::Render::Point<float> & Offset(float, float);
	Scaleform::Render::Point<float> & Offset(float);
	Scaleform::Render::Point<float> & Offset(const Scaleform::Render::Size<float> &);
	Scaleform::Render::Point<float> & Offset(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Point<float> & Mul(float, float);
	Scaleform::Render::Point<float> & Mul(float);
	Scaleform::Render::Point<float> & Mul(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Point<float> & Div(float, float);
	Scaleform::Render::Point<float> & Div(float);
	Scaleform::Render::Point<float> & Div(const Scaleform::Render::Point<float> &);
	float Dot(const Scaleform::Render::Point<float> &);
	float Dot(float, float);
	float Angle(const Scaleform::Render::Point<float> &);
	float Angle(float, float);
	float DistanceSquared();
	float DistanceSquared(const Scaleform::Render::Point<float> &);
	float DistanceSquared(float, float);
	float Distance();
	float Distance(const Scaleform::Render::Point<float> &);
	float Distance(float, float);
	float DistanceL1(const Scaleform::Render::Point<float> &);
	float DistanceL1(float, float);
	float DistanceLn(const Scaleform::Render::Point<float> &);
	float DistanceLn(float, float);
	void Clamp(float, float);
	void ClampMin(float);
	void ClampMax(float);
	Scaleform::Render::Point<float> & Absolute();
	bool BitwiseEqual(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> & operator=(Scaleform::Render::Point<float>::BoundsType);
	const Scaleform::Render::Point<float> & operator=(float);
	const Scaleform::Render::Point<float> & operator=(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> operator-(float);
	const Scaleform::Render::Point<float> operator-(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Point<float> operator-(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> operator-();
	const Scaleform::Render::Point<float> & operator+=(float);
	const Scaleform::Render::Point<float> & operator+=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Point<float> & operator+=(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> & operator-=(float);
	const Scaleform::Render::Point<float> & operator-=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Point<float> & operator-=(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> & operator*=(float);
	const Scaleform::Render::Point<float> & operator*=(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> & operator/=(float);
	const Scaleform::Render::Point<float> & operator/=(const Scaleform::Render::Point<float> &);
	bool operator==(const Scaleform::Render::Point<float> &);
	bool operator!=(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> operator+(float);
	const Scaleform::Render::Point<float> operator+(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Point<float> operator+(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> operator*(float);
	const Scaleform::Render::Point<float> operator*(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Point<float> operator/(float);
	const Scaleform::Render::Point<float> operator/(const Scaleform::Render::Point<float> &);
};
class Scaleform::Render::Size<float>
{
public:
	float Width; // 0x0
	float Height; // 0x4
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Size<float>(Scaleform::Render::Size<float>::BoundsType);
	Size<float>(const Scaleform::Render::Size<float> &);
	Size<float>(float, float);
	Size<float>(float);
	Size<float>();
	void SetSize(const Scaleform::Render::Size<float> &);
	void SetSize(float, float);
	void SetSize(float);
	void SetWidth(float);
	void SetHeight(float);
	void Clear();
	void Swap(Scaleform::Render::Size<float> *);
	void Transpose();
	Scaleform::Render::Size<float> & SetLerp(const Scaleform::Render::Size<float> &, const Scaleform::Render::Size<float> &, float);
	bool IsEmpty();
	bool IsNull();
	Scaleform::Render::Size<float> Center();
	float HCenter();
	float VCenter();
	float Area();
	Scaleform::Render::Size<float> & Expand(float);
	Scaleform::Render::Size<float> & Expand(const Scaleform::Render::Size<float> &);
	Scaleform::Render::Size<float> & Expand(float, float);
	Scaleform::Render::Size<float> & Contract(float, float);
	Scaleform::Render::Size<float> & Contract(const Scaleform::Render::Size<float> &);
	Scaleform::Render::Size<float> & Contract(float);
	Scaleform::Render::Size<float> & Mul(float, float);
	Scaleform::Render::Size<float> & Mul(float);
	Scaleform::Render::Size<float> & Mul(const Scaleform::Render::Size<float> &);
	Scaleform::Render::Size<float> & Div(float, float);
	Scaleform::Render::Size<float> & Div(float);
	Scaleform::Render::Size<float> & Div(const Scaleform::Render::Size<float> &);
	Scaleform::Render::Size<float> & Clamp(float, float);
	Scaleform::Render::Size<float> & Clamp(const Scaleform::Render::Size<float> &);
	Scaleform::Render::Size<float> & ClampWidth(float);
	Scaleform::Render::Size<float> & ClampHeight(float);
	Scaleform::Render::Size<float> ExpandedTo(float, float);
	Scaleform::Render::Size<float> ExpandedTo(const Scaleform::Render::Size<float> &);
	Scaleform::Render::Size<float> ExpandedToWidth(float);
	Scaleform::Render::Size<float> ExpandedToHeight(float);
	Scaleform::Render::Size<float> ClampedTo(float, float);
	Scaleform::Render::Size<float> ClampedTo(const Scaleform::Render::Size<float> &);
	Scaleform::Render::Size<float> ClampedToWidth(float);
	Scaleform::Render::Size<float> ClampedToHeight(float);
	const Scaleform::Render::Size<float> & operator=(Scaleform::Render::Size<float>::BoundsType);
	const Scaleform::Render::Size<float> & operator=(float);
	const Scaleform::Render::Size<float> & operator=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> & operator+=(float);
	const Scaleform::Render::Size<float> & operator+=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> & operator-=(float);
	const Scaleform::Render::Size<float> & operator-=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> & operator*=(float);
	const Scaleform::Render::Size<float> & operator*=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> & operator/=(float);
	const Scaleform::Render::Size<float> & operator/=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> & operator|=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> & operator&=(const Scaleform::Render::Size<float> &);
	bool operator==(const Scaleform::Render::Size<float> &);
	bool operator!=(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> operator-(float);
	const Scaleform::Render::Size<float> operator-(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> operator-();
	const Scaleform::Render::Size<float> operator+(float);
	const Scaleform::Render::Size<float> operator+(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> operator*(long);
	const Scaleform::Render::Size<float> operator*(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> operator/(float);
	const Scaleform::Render::Size<float> operator/(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> operator|(const Scaleform::Render::Size<float> &);
	const Scaleform::Render::Size<float> operator&(const Scaleform::Render::Size<float> &);
};
class Scaleform::Render::Rect<float> :
	Scaleform::Render::RectData<float>
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
	Rect<float>(Scaleform::Render::Rect<float>::BoundsType);
	Rect<float>(float, float, float, float);
	Rect<float>(float, float, const Scaleform::Render::Size<float> &);
	Rect<float>(const Scaleform::Render::Point<float> &, const Scaleform::Render::Size<float> &);
	Rect<float>(const Scaleform::Render::Point<float> &, const Scaleform::Render::Point<float> &);
	Rect<float>(float, float);
	Rect<float>(const Scaleform::Render::Size<float> &);
	Rect<float>(const Scaleform::Render::Rect<float> &);
	Rect<float>(float);
	Rect<float>(Scaleform::Render::Rect<float>::NoInitType);
	Rect<float>();
	void SetRect(Scaleform::Render::Rect<float>::BoundsType);
	void SetRect(const Scaleform::Render::Point<float> &, const Scaleform::Render::Size<float> &);
	void SetRect(float, float, const Scaleform::Render::Size<float> &);
	void SetRect(const Scaleform::Render::Point<float> &, const Scaleform::Render::Point<float> &);
	void SetRect(const Scaleform::Render::Rect<float> &);
	void SetRect(float, float);
	void SetRect(const Scaleform::Render::Size<float> &);
	void SetRect(float, float, float, float);
	Scaleform::Render::Rect<float> & SetLerp(const Scaleform::Render::Rect<float> &, const Scaleform::Render::Rect<float> &, float);
	void Clear();
	void Swap(Scaleform::Render::Rect<float> *);
	Scaleform::Render::Rect<float> & FromRectPS(const Scaleform::Render::Rect<float> *);
	void ToRectPS(Scaleform::Render::Rect<float> *);
	bool IsNull();
	bool IsEmpty();
	bool IsNormal();
	float X1();
	float Y1();
	float X2();
	float Y2();
	Scaleform::Render::Point<float> TopLeft();
	Scaleform::Render::Point<float> TopRight();
	Scaleform::Render::Point<float> BottomLeft();
	Scaleform::Render::Point<float> BottomRight();
	void SetTopLeft(const Scaleform::Render::Point<float> &);
	void SetTopRight(const Scaleform::Render::Point<float> &);
	void SetBottomLeft(const Scaleform::Render::Point<float> &);
	void SetBottomRight(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Rect<float> TopSide(float);
	Scaleform::Render::Rect<float> BottomSide(float);
	Scaleform::Render::Rect<float> LeftSide(float);
	Scaleform::Render::Rect<float> RightSide(float);
	Scaleform::Render::Point<float> Center();
	float HCenter();
	float VCenter();
	void SetCenter(float, float);
	void SetCenter(const Scaleform::Render::Point<float> &);
	void SetHCenter(float);
	void SetVCenter(float);
	float Width();
	float Height();
	float CheckedWidth();
	float CheckedHeight();
	Scaleform::Render::Size<float> GetSize();
	Scaleform::Render::Size<float> CheckedSize();
	void SetSize(const Scaleform::Render::Size<float> &);
	void SetSize(float, float);
	void SetWidth(float);
	void SetHeight(float);
	float Area();
	void SetHRange(float, float);
	void SetVRange(float, float);
	Scaleform::Render::Rect<float> & Offset(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Rect<float> & Offset(float, float);
	Scaleform::Render::Rect<float> & OffsetX(float);
	Scaleform::Render::Rect<float> & OffsetY(float);
	Scaleform::Render::Rect<float> & Expand(float, float);
	Scaleform::Render::Rect<float> & Expand(float);
	Scaleform::Render::Rect<float> & Expand(float, float, float, float);
	Scaleform::Render::Rect<float> & HExpand(float, float);
	Scaleform::Render::Rect<float> & HExpand(float);
	Scaleform::Render::Rect<float> & VExpand(float, float);
	Scaleform::Render::Rect<float> & VExpand(float);
	Scaleform::Render::Rect<float> & ExpandToPoint(float, float);
	Scaleform::Render::Rect<float> & ExpandToPoint(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Rect<float> & Contract(float, float);
	Scaleform::Render::Rect<float> & Contract(float);
	Scaleform::Render::Rect<float> & Contract(float, float, float, float);
	Scaleform::Render::Rect<float> & HContract(float, float);
	Scaleform::Render::Rect<float> & HContract(float);
	Scaleform::Render::Rect<float> & VContract(float, float);
	Scaleform::Render::Rect<float> & VContract(float);
	Scaleform::Render::Rect<float> & Clamp(float, float, float, float);
	Scaleform::Render::Rect<float> & Clamp(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> & HClamp(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> & HClamp(float, float);
	Scaleform::Render::Rect<float> & VClamp(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> & VClamp(float, float);
	Scaleform::Render::Rect<float> & Union(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> & Union(float, float, float, float);
	Scaleform::Render::Rect<float> & Intersect(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> & Intersect(float, float, float, float);
	void Normalize();
	void NormalizeX();
	void NormalizeY();
	Scaleform::Render::Rect<float> Normal();
	bool Contains(const Scaleform::Render::Rect<float> &);
	bool Contains(const Scaleform::Render::Point<float> &);
	bool Contains(float, float);
	bool Intersects(const Scaleform::Render::Rect<float> &);
	bool IntersectsEdge(const Scaleform::Render::Rect<float> &, float, float, float, float);
	bool IntersectsEdge(const Scaleform::Render::Rect<float> &, float);
	Scaleform::Render::Point<float> ClampPoint(const Scaleform::Render::Point<float> &);
	bool IntersectRect(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	void UnionRect(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<float> &);
	const Scaleform::Render::Rect<float> & operator=(Scaleform::Render::Rect<float>::BoundsType);
	const Scaleform::Render::Rect<float> & operator=(const Scaleform::Render::Rect<float> &);
	const Scaleform::Render::Rect<float> & operator+=(float);
	const Scaleform::Render::Rect<float> & operator+=(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Rect<float> & operator-=(float);
	Scaleform::Render::Rect<float> & operator-=(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Rect<float> & operator|=(const Scaleform::Render::Rect<float> &);
	const Scaleform::Render::Rect<float> & operator&=(const Scaleform::Render::Rect<float> &);
	bool operator==(const Scaleform::Render::Rect<float> &);
	bool operator!=(const Scaleform::Render::Rect<float> &);
	const Scaleform::Render::Rect<float> operator-(float);
	const Scaleform::Render::Rect<float> operator-(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Rect<float> operator-();
	const Scaleform::Render::Rect<float> operator+(const Scaleform::Render::Rect<float> &);
	const Scaleform::Render::Rect<float> operator+(float);
	const Scaleform::Render::Rect<float> operator+(const Scaleform::Render::Point<float> &);
	const Scaleform::Render::Rect<float> operator|(const Scaleform::Render::Rect<float> &);
	const Scaleform::Render::Rect<float> operator&(const Scaleform::Render::Rect<float> &);
};
class Scaleform::Render::RectRef<float> :
	Scaleform::Render::Rect<float>,
	Scaleform::RefCountBase<Scaleform::Render::Rect<float>,2>
{
public:
	Scaleform::Render::RectRef<float> & operator=(Scaleform::Render::RectRef<float> &);
	Scaleform::Render::RectRef<float> & operator=(const Scaleform::Render::RectRef<float> &);
	void operator=(const Scaleform::Render::Rect<float> &);
	RectRef<float>(Scaleform::Render::RectRef<float> &);
	RectRef<float>(const Scaleform::Render::RectRef<float> &);
	RectRef<float>();
	virtual ~RectRef<float>();
};
class Scaleform::Render::Point<double>
{
public:
	double x; // 0x0
	double y; // 0x8
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Point<double>(const Scaleform::Render::Point<double> &);
	Point<double>(double, double);
	Point<double>(double);
	Point<double>();
	void SetPoint(Scaleform::Render::Point<double>::BoundsType);
	void SetPoint(const Scaleform::Render::Point<double> &);
	void SetPoint(double, double);
	void SetPoint(double);
	void Clear();
	void Swap(Scaleform::Render::Point<double> *);
	Scaleform::Render::Point<double> & SetLerp(const Scaleform::Render::Point<double> &, const Scaleform::Render::Point<double> &, double);
	bool IsNull();
	Scaleform::Render::Point<double> & Offset(double, double);
	Scaleform::Render::Point<double> & Offset(double);
	Scaleform::Render::Point<double> & Offset(const Scaleform::Render::Size<double> &);
	Scaleform::Render::Point<double> & Offset(const Scaleform::Render::Point<double> &);
	Scaleform::Render::Point<double> & Mul(double, double);
	Scaleform::Render::Point<double> & Mul(double);
	Scaleform::Render::Point<double> & Mul(const Scaleform::Render::Point<double> &);
	Scaleform::Render::Point<double> & Div(double, double);
	Scaleform::Render::Point<double> & Div(double);
	Scaleform::Render::Point<double> & Div(const Scaleform::Render::Point<double> &);
	double Dot(const Scaleform::Render::Point<double> &);
	double Dot(double, double);
	double Angle(const Scaleform::Render::Point<double> &);
	double Angle(double, double);
	double DistanceSquared();
	double DistanceSquared(const Scaleform::Render::Point<double> &);
	double DistanceSquared(double, double);
	double Distance();
	double Distance(const Scaleform::Render::Point<double> &);
	double Distance(double, double);
	double DistanceL1(const Scaleform::Render::Point<double> &);
	double DistanceL1(double, double);
	double DistanceLn(const Scaleform::Render::Point<double> &);
	double DistanceLn(double, double);
	void Clamp(double, double);
	void ClampMin(double);
	void ClampMax(double);
	Scaleform::Render::Point<double> & Absolute();
	bool BitwiseEqual(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> & operator=(Scaleform::Render::Point<double>::BoundsType);
	const Scaleform::Render::Point<double> & operator=(double);
	const Scaleform::Render::Point<double> & operator=(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> operator-(double);
	const Scaleform::Render::Point<double> operator-(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Point<double> operator-(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> operator-();
	const Scaleform::Render::Point<double> & operator+=(double);
	const Scaleform::Render::Point<double> & operator+=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Point<double> & operator+=(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> & operator-=(double);
	const Scaleform::Render::Point<double> & operator-=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Point<double> & operator-=(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> & operator*=(double);
	const Scaleform::Render::Point<double> & operator*=(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> & operator/=(double);
	const Scaleform::Render::Point<double> & operator/=(const Scaleform::Render::Point<double> &);
	bool operator==(const Scaleform::Render::Point<double> &);
	bool operator!=(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> operator+(double);
	const Scaleform::Render::Point<double> operator+(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Point<double> operator+(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> operator*(double);
	const Scaleform::Render::Point<double> operator*(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Point<double> operator/(double);
	const Scaleform::Render::Point<double> operator/(const Scaleform::Render::Point<double> &);
};
class Scaleform::Render::Size<double>
{
public:
	double Width; // 0x0
	double Height; // 0x8
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Size<double>(Scaleform::Render::Size<double>::BoundsType);
	Size<double>(const Scaleform::Render::Size<double> &);
	Size<double>(double, double);
	Size<double>(double);
	Size<double>();
	void SetSize(const Scaleform::Render::Size<double> &);
	void SetSize(double, double);
	void SetSize(double);
	void SetWidth(double);
	void SetHeight(double);
	void Clear();
	void Swap(Scaleform::Render::Size<double> *);
	void Transpose();
	Scaleform::Render::Size<double> & SetLerp(const Scaleform::Render::Size<double> &, const Scaleform::Render::Size<double> &, double);
	bool IsEmpty();
	bool IsNull();
	Scaleform::Render::Size<double> Center();
	double HCenter();
	double VCenter();
	double Area();
	Scaleform::Render::Size<double> & Expand(double);
	Scaleform::Render::Size<double> & Expand(const Scaleform::Render::Size<double> &);
	Scaleform::Render::Size<double> & Expand(double, double);
	Scaleform::Render::Size<double> & Contract(double, double);
	Scaleform::Render::Size<double> & Contract(const Scaleform::Render::Size<double> &);
	Scaleform::Render::Size<double> & Contract(double);
	Scaleform::Render::Size<double> & Mul(double, double);
	Scaleform::Render::Size<double> & Mul(double);
	Scaleform::Render::Size<double> & Mul(const Scaleform::Render::Size<double> &);
	Scaleform::Render::Size<double> & Div(double, double);
	Scaleform::Render::Size<double> & Div(double);
	Scaleform::Render::Size<double> & Div(const Scaleform::Render::Size<double> &);
	Scaleform::Render::Size<double> & Clamp(double, double);
	Scaleform::Render::Size<double> & Clamp(const Scaleform::Render::Size<double> &);
	Scaleform::Render::Size<double> & ClampWidth(double);
	Scaleform::Render::Size<double> & ClampHeight(double);
	Scaleform::Render::Size<double> ExpandedTo(double, double);
	Scaleform::Render::Size<double> ExpandedTo(const Scaleform::Render::Size<double> &);
	Scaleform::Render::Size<double> ExpandedToWidth(double);
	Scaleform::Render::Size<double> ExpandedToHeight(double);
	Scaleform::Render::Size<double> ClampedTo(double, double);
	Scaleform::Render::Size<double> ClampedTo(const Scaleform::Render::Size<double> &);
	Scaleform::Render::Size<double> ClampedToWidth(double);
	Scaleform::Render::Size<double> ClampedToHeight(double);
	const Scaleform::Render::Size<double> & operator=(Scaleform::Render::Size<double>::BoundsType);
	const Scaleform::Render::Size<double> & operator=(double);
	const Scaleform::Render::Size<double> & operator=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> & operator+=(double);
	const Scaleform::Render::Size<double> & operator+=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> & operator-=(double);
	const Scaleform::Render::Size<double> & operator-=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> & operator*=(double);
	const Scaleform::Render::Size<double> & operator*=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> & operator/=(double);
	const Scaleform::Render::Size<double> & operator/=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> & operator|=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> & operator&=(const Scaleform::Render::Size<double> &);
	bool operator==(const Scaleform::Render::Size<double> &);
	bool operator!=(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> operator-(double);
	const Scaleform::Render::Size<double> operator-(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> operator-();
	const Scaleform::Render::Size<double> operator+(double);
	const Scaleform::Render::Size<double> operator+(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> operator*(long);
	const Scaleform::Render::Size<double> operator*(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> operator/(double);
	const Scaleform::Render::Size<double> operator/(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> operator|(const Scaleform::Render::Size<double> &);
	const Scaleform::Render::Size<double> operator&(const Scaleform::Render::Size<double> &);
};
class Scaleform::Render::Rect<double> :
	Scaleform::Render::RectData<double>
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
	Rect<double>(Scaleform::Render::Rect<double>::BoundsType);
	Rect<double>(double, double, double, double);
	Rect<double>(double, double, const Scaleform::Render::Size<double> &);
	Rect<double>(const Scaleform::Render::Point<double> &, const Scaleform::Render::Size<double> &);
	Rect<double>(const Scaleform::Render::Point<double> &, const Scaleform::Render::Point<double> &);
	Rect<double>(double, double);
	Rect<double>(const Scaleform::Render::Size<double> &);
	Rect<double>(const Scaleform::Render::Rect<double> &);
	Rect<double>(double);
	Rect<double>(Scaleform::Render::Rect<double>::NoInitType);
	Rect<double>();
	void SetRect(Scaleform::Render::Rect<double>::BoundsType);
	void SetRect(const Scaleform::Render::Point<double> &, const Scaleform::Render::Size<double> &);
	void SetRect(double, double, const Scaleform::Render::Size<double> &);
	void SetRect(const Scaleform::Render::Point<double> &, const Scaleform::Render::Point<double> &);
	void SetRect(const Scaleform::Render::Rect<double> &);
	void SetRect(double, double);
	void SetRect(const Scaleform::Render::Size<double> &);
	void SetRect(double, double, double, double);
	Scaleform::Render::Rect<double> & SetLerp(const Scaleform::Render::Rect<double> &, const Scaleform::Render::Rect<double> &, double);
	void Clear();
	void Swap(Scaleform::Render::Rect<double> *);
	Scaleform::Render::Rect<double> & FromRectPS(const Scaleform::Render::Rect<double> *);
	void ToRectPS(Scaleform::Render::Rect<double> *);
	bool IsNull();
	bool IsEmpty();
	bool IsNormal();
	double X1();
	double Y1();
	double X2();
	double Y2();
	Scaleform::Render::Point<double> TopLeft();
	Scaleform::Render::Point<double> TopRight();
	Scaleform::Render::Point<double> BottomLeft();
	Scaleform::Render::Point<double> BottomRight();
	void SetTopLeft(const Scaleform::Render::Point<double> &);
	void SetTopRight(const Scaleform::Render::Point<double> &);
	void SetBottomLeft(const Scaleform::Render::Point<double> &);
	void SetBottomRight(const Scaleform::Render::Point<double> &);
	Scaleform::Render::Rect<double> TopSide(double);
	Scaleform::Render::Rect<double> BottomSide(double);
	Scaleform::Render::Rect<double> LeftSide(double);
	Scaleform::Render::Rect<double> RightSide(double);
	Scaleform::Render::Point<double> Center();
	double HCenter();
	double VCenter();
	void SetCenter(double, double);
	void SetCenter(const Scaleform::Render::Point<double> &);
	void SetHCenter(double);
	void SetVCenter(double);
	double Width();
	double Height();
	double CheckedWidth();
	double CheckedHeight();
	Scaleform::Render::Size<double> GetSize();
	Scaleform::Render::Size<double> CheckedSize();
	void SetSize(const Scaleform::Render::Size<double> &);
	void SetSize(double, double);
	void SetWidth(double);
	void SetHeight(double);
	double Area();
	void SetHRange(double, double);
	void SetVRange(double, double);
	Scaleform::Render::Rect<double> & Offset(const Scaleform::Render::Point<double> &);
	Scaleform::Render::Rect<double> & Offset(double, double);
	Scaleform::Render::Rect<double> & OffsetX(double);
	Scaleform::Render::Rect<double> & OffsetY(double);
	Scaleform::Render::Rect<double> & Expand(double, double);
	Scaleform::Render::Rect<double> & Expand(double);
	Scaleform::Render::Rect<double> & Expand(double, double, double, double);
	Scaleform::Render::Rect<double> & HExpand(double, double);
	Scaleform::Render::Rect<double> & HExpand(double);
	Scaleform::Render::Rect<double> & VExpand(double, double);
	Scaleform::Render::Rect<double> & VExpand(double);
	Scaleform::Render::Rect<double> & ExpandToPoint(double, double);
	Scaleform::Render::Rect<double> & ExpandToPoint(const Scaleform::Render::Point<double> &);
	Scaleform::Render::Rect<double> & Contract(double, double);
	Scaleform::Render::Rect<double> & Contract(double);
	Scaleform::Render::Rect<double> & Contract(double, double, double, double);
	Scaleform::Render::Rect<double> & HContract(double, double);
	Scaleform::Render::Rect<double> & HContract(double);
	Scaleform::Render::Rect<double> & VContract(double, double);
	Scaleform::Render::Rect<double> & VContract(double);
	Scaleform::Render::Rect<double> & Clamp(double, double, double, double);
	Scaleform::Render::Rect<double> & Clamp(const Scaleform::Render::Rect<double> &);
	Scaleform::Render::Rect<double> & HClamp(const Scaleform::Render::Rect<double> &);
	Scaleform::Render::Rect<double> & HClamp(double, double);
	Scaleform::Render::Rect<double> & VClamp(const Scaleform::Render::Rect<double> &);
	Scaleform::Render::Rect<double> & VClamp(double, double);
	Scaleform::Render::Rect<double> & Union(const Scaleform::Render::Rect<double> &);
	Scaleform::Render::Rect<double> & Union(double, double, double, double);
	Scaleform::Render::Rect<double> & Intersect(const Scaleform::Render::Rect<double> &);
	Scaleform::Render::Rect<double> & Intersect(double, double, double, double);
	void Normalize();
	void NormalizeX();
	void NormalizeY();
	Scaleform::Render::Rect<double> Normal();
	bool Contains(const Scaleform::Render::Rect<double> &);
	bool Contains(const Scaleform::Render::Point<double> &);
	bool Contains(double, double);
	bool Intersects(const Scaleform::Render::Rect<double> &);
	bool IntersectsEdge(const Scaleform::Render::Rect<double> &, double, double, double, double);
	bool IntersectsEdge(const Scaleform::Render::Rect<double> &, double);
	Scaleform::Render::Point<double> ClampPoint(const Scaleform::Render::Point<double> &);
	bool IntersectRect(Scaleform::Render::Rect<double> *, const Scaleform::Render::Rect<double> &);
	void UnionRect(Scaleform::Render::Rect<double> *, const Scaleform::Render::Rect<double> &);
	const Scaleform::Render::Rect<double> & operator=(Scaleform::Render::Rect<double>::BoundsType);
	const Scaleform::Render::Rect<double> & operator=(const Scaleform::Render::Rect<double> &);
	const Scaleform::Render::Rect<double> & operator+=(double);
	const Scaleform::Render::Rect<double> & operator+=(const Scaleform::Render::Point<double> &);
	Scaleform::Render::Rect<double> & operator-=(double);
	Scaleform::Render::Rect<double> & operator-=(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Rect<double> & operator|=(const Scaleform::Render::Rect<double> &);
	const Scaleform::Render::Rect<double> & operator&=(const Scaleform::Render::Rect<double> &);
	bool operator==(const Scaleform::Render::Rect<double> &);
	bool operator!=(const Scaleform::Render::Rect<double> &);
	const Scaleform::Render::Rect<double> operator-(double);
	const Scaleform::Render::Rect<double> operator-(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Rect<double> operator-();
	const Scaleform::Render::Rect<double> operator+(const Scaleform::Render::Rect<double> &);
	const Scaleform::Render::Rect<double> operator+(double);
	const Scaleform::Render::Rect<double> operator+(const Scaleform::Render::Point<double> &);
	const Scaleform::Render::Rect<double> operator|(const Scaleform::Render::Rect<double> &);
	const Scaleform::Render::Rect<double> operator&(const Scaleform::Render::Rect<double> &);
};
class Scaleform::Render::RectData<float>
{
public:
	float x1; // 0x0
	float y1; // 0x4
	float x2; // 0x8
	float y2; // 0xC
};