#pragma once

class OGLEffectVec4 :
	OGLVec4
{
public:
	OGLEffectVec4(const OGLEffectVec4 &);
	OGLEffectVec4(OGLVec4 *);
	OGLEffectVec4(float, float, float, float);
	OGLEffectVec4();
	~OGLEffectVec4();
	OGLEffectVec4 operator+(const OGLVec4 &);
	OGLEffectVec4 operator-(const OGLVec4 &);
	void add(const OGLVec3 &);
	void add(const OGLVec4 &);
	void set(const OGLVec3);
	void set(const OGLVec4);
	void scale(const float &);
	void rotateQuat(OGLQuat *);
	OGLEffectVec4 & operator=(const OGLEffectVec4 &);
};
OGLEffectVec3 OGLEffectVec3::operator*<double>(const double & scaleFactor); // 0x140121AE0