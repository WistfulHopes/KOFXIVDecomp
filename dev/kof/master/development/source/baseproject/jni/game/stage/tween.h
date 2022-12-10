#pragma once

class Tween
{
	enum EasingType
	{
		Linear = 0,
		InQuad = 1,
		OutQuad = 2,
		InOutQuad = 3,
		InCubic = 4,
		OutCubic = 5,
		InOutCubic = 6,
		InQuart = 7,
		OutQuart = 8,
		InOutQuart = 9,
		InQuint = 10,
		OutQuint = 11,
		InOutQuint = 12,
		InSine = 13,
		OutSine = 14,
		InOutSine = 15,
		InCirc = 16,
		OutCirc = 17,
		InOutCirc = 18,
		InBack = 19,
		OutBack = 20,
		InOutBack = 21,
		None = 22,
	};
public:
	static float easing(float, float, float, Tween::EasingType);
	enum EaseInType
	{
		QUAD = 0,
		CUBIC = 1,
		QUART = 2,
		QUINT = 3,
		SINE = 4,
		EXPO = 5,
		CIRC = 6,
		BACK = 7,
		ELASTIC = 8,
		BOUNCE = 9,
	};
private:
	static float easeIn(float, Tween::EaseInType);
	static float easeOut(float, Tween::EaseInType);
	static float easeInOut(float, Tween::EaseInType);
};
enum Tween::EasingType
{
	Linear = 0,
	InQuad = 1,
	OutQuad = 2,
	InOutQuad = 3,
	InCubic = 4,
	OutCubic = 5,
	InOutCubic = 6,
	InQuart = 7,
	OutQuart = 8,
	InOutQuart = 9,
	InQuint = 10,
	OutQuint = 11,
	InOutQuint = 12,
	InSine = 13,
	OutSine = 14,
	InOutSine = 15,
	InCirc = 16,
	OutCirc = 17,
	InOutCirc = 18,
	InBack = 19,
	OutBack = 20,
	InOutBack = 21,
	None = 22,
};
float Tween::easing(float startNum, float endNum, float t, Tween::EasingType type); // 0x1400A12C0