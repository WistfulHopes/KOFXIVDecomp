#pragma once

class OGLVec3
{
public:
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
	OGLVec3(float *);
	OGLVec3(const OGLVec3 &);
	OGLVec3(OGLVec3 *);
	OGLVec3(float, float, float);
	OGLVec3();
	void clear();
	void zero();
	void one();
	unsigned char isOne();
	void set(float *);
	void set(OGLVec3 *);
	void set(float, float, float);
	void add(float *);
	void add(OGLVec3 *, OGLVec3 *);
	void add(OGLVec3 *);
	void add(float, float, float);
	void sub(OGLVec3 *, OGLVec3 *);
	void sub(OGLVec3 *);
	long isTrans();
	void reverse();
	static float dot(OGLVec3 *, OGLVec3 *);
	float dot(float *);
	float dot(OGLVec3 *);
	void cross(OGLVec3 *, OGLVec3 *);
	void cross(OGLVec3 *);
	void crossY(OGLVec3 *);
	long crossCheck(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void rotateV(OGLVec3 *, float);
	void normalize(OGLVec3 *, float);
	void normalize(float);
	void normalize(OGLVec3 *);
	void normalize();
	float length(OGLVec3 *);
	float length();
	float subLength(OGLVec3 *);
	float lengthSq(OGLVec3 *);
	float lengthSq();
	float subLengthSq(OGLVec3 *);
	void transCoord(OGLMatrix *, OGLVec3 *);
	void transCoord(OGLMatrix *);
	void transPoint(OGLMatrix *, OGLVec3 *);
	void transPoint(OGLMatrix *);
	void lerp(OGLVec3 *, OGLVec3 *, float, float);
	void project(OGLMatrix *, OGLMatrix *, float *);
	void project(OGLVec3 *, OGLMatrix *, OGLMatrix *, OGLMatrix *, OGLMatrix *);
	void unproject(OGLMatrix *, OGLMatrix *, float *);
};
class OGLVec4
{
public:
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
	float w; // 0xC
	OGLVec4(OGLVec4 *);
	OGLVec4(float, float, float, float);
	OGLVec4();
	void set(OGLVec4 *);
	void set(float, float, float, float);
	void normalize();
	float length();
	float lengthSq();
	void transCoord(OGLMatrix *, OGLVec4 *);
	void transCoord(OGLMatrix *);
	static float dot(OGLVec4 *, OGLVec4 *);
};
class OGLEffectQuat :
	OGLQuat
{
public:
	OGLEffectQuat(const OGLEffectQuat &);
	OGLEffectQuat(OGLVec3 *, OGLVec3 *);
	OGLEffectQuat(OGLQuat *, OGLQuat *);
	OGLEffectQuat(OGLQuat *);
	OGLEffectQuat(float, float, float, float);
	OGLEffectQuat();
	~OGLEffectQuat();
	void getRotateEuler(float *, float *, float *);
	void setRotateEuler(OGLVec4);
	void setRotateEuler(OGLVec3);
	void setRotateEuler(float, float, float);
	void matrixToQuaternion(OGLMatrix *);
	void multiplyMatrix(OGLMatrix *);
	OGLEffectQuat & operator=(const OGLEffectQuat &);
};