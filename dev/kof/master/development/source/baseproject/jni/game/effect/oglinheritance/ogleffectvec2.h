#pragma once

class OGLEffectVec2 :
	OGLVec2
{
public:
	OGLEffectVec2(const OGLEffectVec2 &);
	OGLEffectVec2(OGLVec2 *);
	OGLEffectVec2(float, float);
	OGLEffectVec2();
	~OGLEffectVec2();
	OGLEffectVec2 operator+(const OGLEffectVec2 &);
	OGLEffectVec2 operator-(const OGLEffectVec2 &);
	void scale(const float &);
	OGLEffectVec2 & operator=(const OGLEffectVec2 &);
};