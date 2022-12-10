#pragma once

class Scaleform::Render::Viewport
{
public:
	long BufferWidth; // 0x0
	long BufferHeight; // 0x4
	long Left; // 0x8
	long Top; // 0xC
	long Width; // 0x10
	long Height; // 0x14
	long ScissorLeft; // 0x18
	long ScissorTop; // 0x1C
	long ScissorWidth; // 0x20
	long ScissorHeight; // 0x24
	unsigned long Flags; // 0x28
	enum <unnamed-enum-View_IsRenderTexture>
	{
		View_IsRenderTexture = 1,
		View_AlphaComposite = 2,
		View_UseScissorRect = 4,
		View_NoSetState = 8,
		View_Orientation_Normal = 0,
		View_Orientation_R90 = 16,
		View_Orientation_180 = 32,
		View_Orientation_L90 = 48,
		View_Orientation_Mask = 48,
		View_Stereo_SplitV = 64,
		View_Stereo_SplitH = 128,
		View_Stereo_AnySplit = 192,
		View_RenderTextureAlpha = 3,
		View_HalfPixelOffset = 256,
		View_NoClear = 512,
	};
	Viewport(const Scaleform::Render::Viewport &);
	Viewport(Scaleform::Render::Size<int>, Scaleform::Render::Rect<int>, unsigned long);
	Viewport(long, long, long, long, long, long, unsigned long);
	Viewport(long, long, long, long, long, long, long, long, long, long, unsigned long);
	Viewport();
	void SetScissorRect(long, long, long, long);
	bool IsValid();
	bool GetCullRectF(Scaleform::Render::Rect<float> *, bool);
	static float scaleX(long, long, float);
	static float scaleY(long, long, float);
	bool operator==(const Scaleform::Render::Viewport &);
	bool operator!=(const Scaleform::Render::Viewport &);
	void SetStereoViewport(unsigned long);
};
class Scaleform::Render::Rect<int> :
	Scaleform::Render::RectData<int>
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
	Rect<int>(Scaleform::Render::Rect<int>::BoundsType);
	Rect<int>(long, long, long, long);
	Rect<int>(long, long, const Scaleform::Render::Size<int> &);
	Rect<int>(const Scaleform::Render::Point<int> &, const Scaleform::Render::Size<int> &);
	Rect<int>(const Scaleform::Render::Point<int> &, const Scaleform::Render::Point<int> &);
	Rect<int>(long, long);
	Rect<int>(const Scaleform::Render::Size<int> &);
	Rect<int>(const Scaleform::Render::Rect<int> &);
	Rect<int>(long);
	Rect<int>(Scaleform::Render::Rect<int>::NoInitType);
	Rect<int>();
	void SetRect(Scaleform::Render::Rect<int>::BoundsType);
	void SetRect(const Scaleform::Render::Point<int> &, const Scaleform::Render::Size<int> &);
	void SetRect(long, long, const Scaleform::Render::Size<int> &);
	void SetRect(const Scaleform::Render::Point<int> &, const Scaleform::Render::Point<int> &);
	void SetRect(const Scaleform::Render::Rect<int> &);
	void SetRect(long, long);
	void SetRect(const Scaleform::Render::Size<int> &);
	void SetRect(long, long, long, long);
	Scaleform::Render::Rect<int> & SetLerp(const Scaleform::Render::Rect<int> &, const Scaleform::Render::Rect<int> &, long);
	void Clear();
	void Swap(Scaleform::Render::Rect<int> *);
	Scaleform::Render::Rect<int> & FromRectPS(const Scaleform::Render::Rect<int> *);
	void ToRectPS(Scaleform::Render::Rect<int> *);
	bool IsNull();
	bool IsEmpty();
	bool IsNormal();
	long X1();
	long Y1();
	long X2();
	long Y2();
	Scaleform::Render::Point<int> TopLeft();
	Scaleform::Render::Point<int> TopRight();
	Scaleform::Render::Point<int> BottomLeft();
	Scaleform::Render::Point<int> BottomRight();
	void SetTopLeft(const Scaleform::Render::Point<int> &);
	void SetTopRight(const Scaleform::Render::Point<int> &);
	void SetBottomLeft(const Scaleform::Render::Point<int> &);
	void SetBottomRight(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Rect<int> TopSide(long);
	Scaleform::Render::Rect<int> BottomSide(long);
	Scaleform::Render::Rect<int> LeftSide(long);
	Scaleform::Render::Rect<int> RightSide(long);
	Scaleform::Render::Point<int> Center();
	long HCenter();
	long VCenter();
	void SetCenter(long, long);
	void SetCenter(const Scaleform::Render::Point<int> &);
	void SetHCenter(long);
	void SetVCenter(long);
	long Width();
	long Height();
	long CheckedWidth();
	long CheckedHeight();
	Scaleform::Render::Size<int> GetSize();
	Scaleform::Render::Size<int> CheckedSize();
	void SetSize(const Scaleform::Render::Size<int> &);
	void SetSize(long, long);
	void SetWidth(long);
	void SetHeight(long);
	long Area();
	void SetHRange(long, long);
	void SetVRange(long, long);
	Scaleform::Render::Rect<int> & Offset(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Rect<int> & Offset(long, long);
	Scaleform::Render::Rect<int> & OffsetX(long);
	Scaleform::Render::Rect<int> & OffsetY(long);
	Scaleform::Render::Rect<int> & Expand(long, long);
	Scaleform::Render::Rect<int> & Expand(long);
	Scaleform::Render::Rect<int> & Expand(long, long, long, long);
	Scaleform::Render::Rect<int> & HExpand(long, long);
	Scaleform::Render::Rect<int> & HExpand(long);
	Scaleform::Render::Rect<int> & VExpand(long, long);
	Scaleform::Render::Rect<int> & VExpand(long);
	Scaleform::Render::Rect<int> & ExpandToPoint(long, long);
	Scaleform::Render::Rect<int> & ExpandToPoint(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Rect<int> & Contract(long, long);
	Scaleform::Render::Rect<int> & Contract(long);
	Scaleform::Render::Rect<int> & Contract(long, long, long, long);
	Scaleform::Render::Rect<int> & HContract(long, long);
	Scaleform::Render::Rect<int> & HContract(long);
	Scaleform::Render::Rect<int> & VContract(long, long);
	Scaleform::Render::Rect<int> & VContract(long);
	Scaleform::Render::Rect<int> & Clamp(long, long, long, long);
	Scaleform::Render::Rect<int> & Clamp(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & HClamp(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & HClamp(long, long);
	Scaleform::Render::Rect<int> & VClamp(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & VClamp(long, long);
	Scaleform::Render::Rect<int> & Union(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & Union(long, long, long, long);
	Scaleform::Render::Rect<int> & Intersect(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & Intersect(long, long, long, long);
	void Normalize();
	void NormalizeX();
	void NormalizeY();
	Scaleform::Render::Rect<int> Normal();
	bool Contains(const Scaleform::Render::Rect<int> &);
	bool Contains(const Scaleform::Render::Point<int> &);
	bool Contains(long, long);
	bool Intersects(const Scaleform::Render::Rect<int> &);
	bool IntersectsEdge(const Scaleform::Render::Rect<int> &, long, long, long, long);
	bool IntersectsEdge(const Scaleform::Render::Rect<int> &, long);
	Scaleform::Render::Point<int> ClampPoint(const Scaleform::Render::Point<int> &);
	bool IntersectRect(Scaleform::Render::Rect<int> *, const Scaleform::Render::Rect<int> &);
	void UnionRect(Scaleform::Render::Rect<int> *, const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> & operator=(Scaleform::Render::Rect<int>::BoundsType);
	const Scaleform::Render::Rect<int> & operator=(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> & operator+=(long);
	const Scaleform::Render::Rect<int> & operator+=(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Rect<int> & operator-=(long);
	Scaleform::Render::Rect<int> & operator-=(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Rect<int> & operator|=(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> & operator&=(const Scaleform::Render::Rect<int> &);
	bool operator==(const Scaleform::Render::Rect<int> &);
	bool operator!=(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> operator-(long);
	const Scaleform::Render::Rect<int> operator-(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Rect<int> operator-();
	const Scaleform::Render::Rect<int> operator+(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> operator+(long);
	const Scaleform::Render::Rect<int> operator+(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Rect<int> operator|(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> operator&(const Scaleform::Render::Rect<int> &);
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
bool Scaleform::Render::Viewport::GetClippedRect<int>(Scaleform::Render::Rect<int> * prect, bool orient); // 0x1403171A0
bool Scaleform::Render::Viewport::GetCullRectF(Scaleform::Render::Rect<float> * prect, bool orient); // 0x1403819D0