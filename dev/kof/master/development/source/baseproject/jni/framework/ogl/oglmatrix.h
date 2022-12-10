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
class OGLQuat
{
public:
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
	float w; // 0xC
	OGLQuat(OGLVec3 *, OGLVec3 *);
	OGLQuat(OGLQuat *, OGLQuat *);
	OGLQuat(OGLQuat *);
	OGLQuat(float, float, float, float);
	OGLQuat();
	unsigned char set(OGLVec3 *, OGLVec3 *);
	void set(OGLQuat *);
	void set(float, float, float, float);
	void setIdentity();
	float isIdentity();
	void add(OGLQuat *);
	void sub(OGLQuat *);
	void multiply(OGLQuat *, OGLQuat *);
	void multiply(OGLQuat *);
	void rotateX(float);
	void rotateY(float);
	void rotateZ(float);
	void normalize();
	float length();
	float lengthSq();
	void conjugate();
	void inverse();
	void log();
	void exp();
	void slerp(OGLQuat *, OGLQuat *, float, float);
	void matrixToQuaternion(OGLMatrix *);
	float getAngle();
	OGLVec3 getAxis();
	void setRotationAxis(OGLVec3 *, float);
	void getRotationAxis(OGLVec3 *, float *);
	void setRotateEuler(float, float, float);
	void getRotateEuler(float *, float *, float *);
	void getRotateEulerFast(float *, float *, float *);
};
class OGLMatrix
{
public:
	float m[16]; // 0x0
	OGLMatrix(float *);
	OGLMatrix(OGLMatrix *, OGLMatrix *);
	OGLMatrix(OGLMatrix *);
	OGLMatrix();
	void setIdentity();
	void set(OGLMatrix *);
	void set(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);
	void setArray(float *);
	unsigned char isIdentity();
	unsigned char isTrans();
	unsigned char isScale();
	unsigned char isRot();
	unsigned char isZero();
	unsigned char equal(OGLMatrix *);
	void normalize();
	void add(OGLMatrix *, OGLMatrix *);
	void add(OGLMatrix *);
	void sub(OGLMatrix *, OGLMatrix *);
	void sub(OGLMatrix *);
	void multiply(OGLMatrix *, OGLMatrix *);
	void multiply(OGLMatrix *);
	void multiply2(OGLMatrix *, OGLMatrix *);
	void multiplyFast(OGLMatrix *, OGLMatrix *);
	void multiplyFast(OGLMatrix *);
	void multiplyFast2(OGLMatrix *, OGLMatrix *);
	void convertDXGL(OGLMatrix *);
	void convertDXGL();
	void multiplyDXGL(OGLMatrix *, OGLMatrix *);
	void multiplyRotate(OGLMatrix *, OGLMatrix *);
	void multiplyRotate(OGLMatrix *);
	void multiplyFastRotate(OGLMatrix *, OGLMatrix *);
	void multiplyOnlyRotate(OGLMatrix *, OGLMatrix *);
	void setTranslate(OGLVec3 *);
	void multiplyTranslate(OGLMatrix *);
	void multiplyTranslate(OGLVec3 *);
	void subTranslate(OGLMatrix *);
	void multiplyBoneRotate(OGLMatrix *);
	void rotateX(float);
	void rotateY(float);
	void rotateZ(float);
	void rotateV(OGLVec3 *, float);
	void scaling(OGLVec3 *);
	void scaling(float, float, float);
	void translation(OGLVec3 *);
	void translation(float, float, float);
	void rotationQuaternion(OGLQuat *);
	void rotationQuaternion(float, float, float, float);
	void transCoord(OGLVec3 *);
	void transCoord(OGLVec3 *, OGLVec3 *);
	void transPoint(OGLVec3 *, OGLVec3 *);
	void transformL12toR16(OGLVec3 *, OGLVec3 *);
	void transpose(OGLMatrix *);
	void transpose();
	void transposeRotate(OGLMatrix *);
	void inverse();
	void setViewTrans(OGLMatrix *, OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void lookAt(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void billboard(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void perspectiveFov(float, float, float, float, float, float, float);
	void perspectiveFov(float, float, float, float);
	void ortho(float, float, float, float, float, float);
	void orthoZ(float, float, float, float, float);
	void viewport(float, float, float, float);
	void posture(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void postureFast(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void getPosture(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void shadow(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void shadow(OGLVec3 *, OGLVec3 *);
};