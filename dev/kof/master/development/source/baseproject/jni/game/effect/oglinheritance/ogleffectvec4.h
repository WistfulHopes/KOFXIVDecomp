#pragma once

class OGLEffectVec3 :
	OGLVec3
{
public:
	OGLEffectVec3(const OGLEffectVec3 &);
	OGLEffectVec3(const OGLVec3 *);
	OGLEffectVec3(OGLVec3 *);
	OGLEffectVec3(float, float, float);
	OGLEffectVec3();
	~OGLEffectVec3();
	OGLEffectVec3 & operator=(const OGLEffectVec3 &);
	void operator=(const OGLVec3);
	OGLEffectVec3 operator+(const OGLVec3);
	OGLEffectVec3 operator-(const OGLVec3);
	OGLEffectVec3 operator*(const long);
	OGLEffectVec3 operator*(const float);
	OGLEffectVec3 operator*(const OGLEffectVec3);
	OGLEffectVec3 operator*(const OGLVec3);
	OGLEffectVec3 operator/(const long);
	OGLEffectVec3 operator/(const float);
	OGLEffectVec3 operator/(const OGLVec3);
	void operator+=(OGLVec3);
	void operator-=(OGLVec3);
	OGLEffectVec4 storeVec4();
	void add(OGLVec4);
	void add(const OGLVec3 &);
	void sub(float, float, float);
	void set(OGLVec4);
	void set(const OGLVec3 &);
	void scale(const OGLVec3 *);
	void scale(const OGLVec3 &);
	void scale(const float &);
	void rotateQuat(OGLQuat *);
	void setRotateQuat(OGLQuat *);
	bool parallelDecision(OGLVec3 *);
	static float getAngleBetweenVectors(const OGLVec3 &, const OGLVec3 &);
};
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
OGLEffectVec4 OGLEffectVec4::operator*<int>(const long & scaleFactor); // 0x1401542D0
OGLEffectVec4 OGLEffectVec4::operator/<int>(const long & scaleFactor); // 0x140154340
OGLEffectVec4 OGLEffectVec4::operator/<float>(const float & scaleFactor); // 0x140154270