#pragma once

class Scaleform::Render::Color
{
	enum StandardColors
	{
		Black = 0,
		White = 16777215,
		VeryLightGray = 14737632,
		LightGray = 12632256,
		Gray = 8421504,
		DarkGray = 4210752,
		VeryDarkGray = 2105376,
		Red = 16711680,
		LightRed = 16744576,
		DarkRed = 8388608,
		VeryDarkRed = 4194304,
		Green = 65280,
		LightGreen = 8454016,
		DarkGreen = 32768,
		VeryDarkGreen = 16384,
		Blue = 255,
		LightBlue = 8421631,
		DarkBlue = 128,
		VeryDarkBlue = 64,
		Cyan = 65535,
		LightCyan = 8454143,
		DarkCyan = 32896,
		Magenta = 16711935,
		LightMagenta = 16744703,
		DarkMagenta = 8388736,
		Yellow = 16776960,
		LightYellow = 16777088,
		DarkYellow = 8421376,
		Purple = 16711935,
		DarkPurple = 8388736,
		Pink = 16761024,
		DarkPink = 12615808,
		Beige = 16760960,
		LightBeige = 16769216,
		DarkBeige = 12615744,
		Orange = 16744448,
		Brown = 8404992,
		LightBrown = 12607488,
		DarkBrown = 4202496,
	};
	enum StandardAlphas
	{
		Alpha0 = 0,
		Alpha25 = 1073741824,
		Alpha50 = 2130706432,
		Alpha75 = -1090519040,
		Alpha100 = -16777216,
	};
	struct Rgb32;
public:
	Scaleform::Render::Color::Rgb32 Channels; // 0x0
	unsigned long Raw; // 0x0
	Color(unsigned char, unsigned char, unsigned char, unsigned char);
	Color(unsigned long, unsigned char);
	Color(unsigned long);
	Color(const Scaleform::Render::Color &, Scaleform::Render::Color);
	Color(const Scaleform::Render::Color &, unsigned char);
	Color(const Scaleform::Render::Color &);
	Color();
	void SetColor(unsigned char, unsigned char, unsigned char, unsigned char);
	void SetColor(unsigned long, unsigned char);
	void SetColor(unsigned long);
	void SetColor(const Scaleform::Render::Color &, Scaleform::Render::Color);
	void SetColor(const Scaleform::Render::Color &, unsigned char);
	void SetColor(const Scaleform::Render::Color &);
	void SetColorRGB(const Scaleform::Render::Color &);
	void SetColorAlpha(const Scaleform::Render::Color &);
	Scaleform::Render::Color GetColorRGB();
	Scaleform::Render::Color GetColorAlpha();
	Scaleform::Render::Color GetColorGray();
	unsigned long ToColor32();
	static Scaleform::Render::Color FromColor32(const unsigned long);
	static Scaleform::Render::Color FromRed(unsigned char);
	static Scaleform::Render::Color FromGreen(unsigned char);
	static Scaleform::Render::Color FromBlue(unsigned char);
	static Scaleform::Render::Color FromAlpha(unsigned char);
	void SetRGB(unsigned char, unsigned char, unsigned char);
	void GetRGB(unsigned char *, unsigned char *, unsigned char *);
	void SetRGBA(unsigned char, unsigned char, unsigned char, unsigned char);
	void GetRGBA(unsigned char *, unsigned char *, unsigned char *, unsigned char *);
	void SetRGBFloat(float, float, float);
	void GetRGBFloat(float *);
	void GetRGBFloat(float *, float *, float *);
	void SetRGBAFloat(float, float, float, float);
	void GetRGBAFloat(float *);
	void GetRGBAFloat(float *, float *, float *, float *);
	void SetAlphaFloat(float);
	void GetAlphaFloat(float *);
	unsigned char GetAlpha();
	unsigned char GetRed();
	unsigned char GetGreen();
	unsigned char GetBlue();
	void SetAlpha(unsigned char);
	void SetRed(unsigned char);
	void SetGreen(unsigned char);
	void SetBlue(unsigned char);
	unsigned char GetGray();
	void SetGray(unsigned char);
	static unsigned char XOrCh(unsigned long, unsigned long);
	Scaleform::Render::Color & XOr(Scaleform::Render::Color);
	static Scaleform::Render::Color XOr(Scaleform::Render::Color, Scaleform::Render::Color);
	Scaleform::Render::Color & XOrRGB(Scaleform::Render::Color);
	static Scaleform::Render::Color XOrRGB(Scaleform::Render::Color, Scaleform::Render::Color);
	static unsigned char OrCh(unsigned long, unsigned long);
	Scaleform::Render::Color & Or(Scaleform::Render::Color);
	static Scaleform::Render::Color Or(Scaleform::Render::Color, Scaleform::Render::Color);
	Scaleform::Render::Color & OrRGB(Scaleform::Render::Color);
	static Scaleform::Render::Color OrRGB(Scaleform::Render::Color, Scaleform::Render::Color);
	static unsigned char AndCh(unsigned long, unsigned long);
	Scaleform::Render::Color & And(Scaleform::Render::Color);
	static Scaleform::Render::Color And(Scaleform::Render::Color, Scaleform::Render::Color);
	Scaleform::Render::Color & AndRGB(Scaleform::Render::Color);
	static Scaleform::Render::Color AndRGB(Scaleform::Render::Color, Scaleform::Render::Color);
	static unsigned char ModulateCh(unsigned long, unsigned long);
	Scaleform::Render::Color & Modulate(Scaleform::Render::Color);
	static Scaleform::Render::Color Modulate(Scaleform::Render::Color, Scaleform::Render::Color);
	Scaleform::Render::Color & ModulateRGB(Scaleform::Render::Color);
	static Scaleform::Render::Color ModulateRGB(Scaleform::Render::Color, Scaleform::Render::Color);
	static unsigned char ModulateFactorCh(unsigned long, unsigned char);
	Scaleform::Render::Color & ModulateFactor(unsigned char);
	static Scaleform::Render::Color ModulateFactor(Scaleform::Render::Color, unsigned char);
	Scaleform::Render::Color & ModulateFactorRGB(unsigned char);
	static Scaleform::Render::Color ModulateFactorRGB(Scaleform::Render::Color, unsigned char);
	static unsigned char AddCh(unsigned long, unsigned long);
	Scaleform::Render::Color & Add(Scaleform::Render::Color);
	static Scaleform::Render::Color Add(Scaleform::Render::Color, Scaleform::Render::Color);
	Scaleform::Render::Color & AddRGB(Scaleform::Render::Color);
	static Scaleform::Render::Color AddRGB(Scaleform::Render::Color, Scaleform::Render::Color);
	static unsigned char SubtractCh(unsigned long, unsigned long);
	Scaleform::Render::Color & Subtract(Scaleform::Render::Color);
	static Scaleform::Render::Color Subtract(Scaleform::Render::Color, Scaleform::Render::Color);
	Scaleform::Render::Color & SubtractRGB(Scaleform::Render::Color);
	static Scaleform::Render::Color SubtractRGB(Scaleform::Render::Color, Scaleform::Render::Color);
	static unsigned char BlendCh(unsigned long, unsigned long, unsigned char);
	static Scaleform::Render::Color Blend(Scaleform::Render::Color, Scaleform::Render::Color, float);
	Scaleform::Render::Color & Blend(Scaleform::Render::Color, unsigned char);
	static Scaleform::Render::Color Blend(Scaleform::Render::Color, Scaleform::Render::Color, unsigned char);
	Scaleform::Render::Color & BlendRGB(Scaleform::Render::Color, unsigned char);
	static Scaleform::Render::Color BlendRGB(Scaleform::Render::Color, Scaleform::Render::Color, unsigned char);
	static unsigned char InverseCh(unsigned long);
	Scaleform::Render::Color & Inverse();
	static Scaleform::Render::Color Inverse(Scaleform::Render::Color);
	Scaleform::Render::Color & InverseRGB();
	static Scaleform::Render::Color InverseRGB(Scaleform::Render::Color);
	bool operator==(Scaleform::Render::Color);
	bool operator!=(Scaleform::Render::Color);
	operator~();
	const Scaleform::Render::Color & operator=(const Scaleform::Render::Color &);
	const Scaleform::Render::Color & operator^=(Scaleform::Render::Color);
	const Scaleform::Render::Color & operator|=(Scaleform::Render::Color);
	const Scaleform::Render::Color & operator&=(Scaleform::Render::Color);
	const Scaleform::Render::Color & operator+=(Scaleform::Render::Color);
	const Scaleform::Render::Color & operator-=(Scaleform::Render::Color);
	const Scaleform::Render::Color & operator*=(unsigned char);
	const Scaleform::Render::Color & operator*=(Scaleform::Render::Color);
	long DistanceSquared(Scaleform::Render::Color);
	unsigned long IIntensity();
	float FIntensity();
	void SetHSV(float, float, float);
	void SetHSV(long, long, long);
	void GetHSV(float *, float *, float *);
	void GetHSV(long *, long *, long *);
	void SetHSI(float, float, float);
	void SetHSI(long, long, long);
	void GetHSI(float *, float *, float *);
	void GetHSI(long *, long *, long *);
	static void ConvertHSIToRGB(double, double, double, double *, double *, double *);
	static void ConvertRGBToHSI(double, double, double, double *, double *, double *);
};
struct Scaleform::Render::Color::Rgb32
{
	unsigned char Blue; // 0x0
	unsigned char Green; // 0x1
	unsigned char Red; // 0x2
	unsigned char Alpha; // 0x3
};
void Scaleform::Render::Color::GetRGBAFloat(float * pr, float * pg, float * pb, float * pa); // 0x140386250