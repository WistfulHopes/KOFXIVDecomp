#pragma once

enum DiffusionType
{
	DIFFUSION_X_AXIS = 0,
	DIFFUSION_Y_AXIS = 1,
	DIFFUSION_Z_AXIS = 2,
};
enum <unnamed-enum-X_AXIS>
{
	X_AXIS = 0,
	Y_AXIS = 1,
	Z_AXIS = 2,
};
class D3DMath
{
public:
	D3DMath(const D3DMath &);
	D3DMath();
	~D3DMath();
	static void RoundOff(float *, long);
	static OGLVec2 LinearFunction(float, OGLVec2, OGLVec2);
	static OGLVec2 BezierCurveFunction(float, OGLVec2, OGLVec2, OGLVec2, OGLVec2);
	static float LinearFunctionReturnY(float, OGLVec2, OGLVec2);
	static float BezierCurveFunctionReturnY(float, OGLVec2, OGLVec2, OGLVec2, OGLVec2);
	static float GetChartDataY(float, ChartData *);
	static float GetChartDataYtoLifeFit(float, float, ChartData *);
	static OGLVec4 ElipsoidFunction(double, double, double);
	static OGLVec4 ElipseFunction(long, double, double);
	static OGLVec3 SphereLinear(OGLVec3 *, OGLVec3 *, float);
	static OGLVec3 SphereLinear(OGLVec3, OGLVec3, float);
	static OGLVec3 CubicHermiteSpline(OGLEffectVec3 *, OGLEffectVec3 *, OGLEffectVec3 *, OGLEffectVec3 *, float);
	static OGLVec3 CubicHermiteSpline(OGLEffectVec3, OGLEffectVec3, OGLEffectVec3, OGLEffectVec3, float);
	static OGLVec3 catmullrom(OGLEffectVec3 *, OGLEffectVec3 *, OGLEffectVec3 *, OGLEffectVec3 *, float);
	static OGLVec3 catmullrom(OGLEffectVec3, OGLEffectVec3, OGLEffectVec3, OGLEffectVec3, float);
	static OGLVec3 KochanecBartels(OGLEffectVec3 *, OGLEffectVec3 *, OGLEffectVec3 *, OGLEffectVec3 *, float, float, float, float);
	static OGLVec3 KochanecBartels(OGLEffectVec3, OGLEffectVec3, OGLEffectVec3, OGLEffectVec3, float, float, float, float);
	static OGLEffectVec3 CollisionLineAndPlane(OGLEffectVec3 *, OGLEffectVec3 *, OGLEffectVec3 *, OGLEffectVec3 *, bool *);
	D3DMath & operator=(const D3DMath &);
};