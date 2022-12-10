#pragma once

enum Scaleform::Render::FilterType
{
	Filter_Blur = 0,
	Filter_Shadow = 1,
	Filter_Glow = 2,
	Filter_Bevel = 3,
	Filter_GradientGlow = 4,
	Filter_GradientBevel = 5,
	Filter_Blur_End = 5,
	Filter_ColorMatrix = 8,
	Filter_Convolution = 9,
	Filter_DisplacementMap = 10,
	Filter_CacheAsBitmap = 11,
};
struct Scaleform::Render::BlurFilterParams
{
	enum ModeConstants
	{
		Mode_FilterMask = 7,
		Mode_Knockout = 16,
		Mode_Inner = 32,
		Mode_HideObject = 64,
		Mode_Highlight = 128,
		Mode_FlagsMask = 240,
	};
	unsigned long Mode; // 0x0
	unsigned long Passes; // 0x4
	float BlurX; // 0x8
	float BlurY; // 0xC
	Scaleform::Render::Point<float> Offset; // 0x10
	float Strength; // 0x18
	Scaleform::Render::Color Colors[2]; // 0x1C
	Scaleform::Ptr<Scaleform::Render::GradientData> Gradient; // 0x28
	BlurFilterParams(Scaleform::Render::BlurFilterParams &);
	BlurFilterParams(const Scaleform::Render::BlurFilterParams &);
	BlurFilterParams(unsigned long, float, float, unsigned long, float);
	BlurFilterParams(unsigned long, float, float, unsigned long, Scaleform::Render::Point<float>, Scaleform::Render::Color, float);
	BlurFilterParams();
	bool operator==(const Scaleform::Render::BlurFilterParams &);
	bool EqualsAll(const Scaleform::Render::BlurFilterParams &);
	Scaleform::Render::FilterType GetFilterType();
	Scaleform::Render::BlurFilterParams & Scale(float, float);
	static Scaleform::Render::Point<float> CalcOffsetByAngleDistance(float, float);
	~BlurFilterParams();
	Scaleform::Render::BlurFilterParams & operator=(Scaleform::Render::BlurFilterParams &);
	Scaleform::Render::BlurFilterParams & operator=(const Scaleform::Render::BlurFilterParams &);
};
bool Scaleform::Render::BlurFilterParams::EqualsAll(const Scaleform::Render::BlurFilterParams & b); // 0x1402F33D0