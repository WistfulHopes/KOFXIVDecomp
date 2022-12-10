#pragma once

struct Scaleform::Render::ToleranceParams
{
	float Epsilon; // 0x0
	float CurveTolerance; // 0x4
	float CollinearityTolerance; // 0x8
	float IntersectionEpsilon; // 0xC
	float FillLowerScale; // 0x10
	float FillUpperScale; // 0x14
	float FillAliasedLowerScale; // 0x18
	float FillAliasedUpperScale; // 0x1C
	float StrokeLowerScale; // 0x20
	float StrokeUpperScale; // 0x24
	float HintedStrokeLowerScale; // 0x28
	float HintedStrokeUpperScale; // 0x2C
	float Scale9LowerScale; // 0x30
	float Scale9UpperScale; // 0x34
	float EdgeAAScale; // 0x38
	float MorphTolerance; // 0x3C
	float MinDet3D; // 0x40
	float MinScale3D; // 0x44
	unsigned long CurveRecursionLimit; // 0x48
	ToleranceParams();
};