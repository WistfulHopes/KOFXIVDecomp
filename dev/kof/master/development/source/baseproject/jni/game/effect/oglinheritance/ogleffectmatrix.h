#pragma once

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
class OGLEffectMatrix :
	OGLMatrix
{
public:
	OGLEffectMatrix(const OGLEffectMatrix &);
	OGLEffectMatrix(float *);
	OGLEffectMatrix(OGLEffectMatrix *, OGLEffectMatrix *);
	OGLEffectMatrix(OGLEffectMatrix *);
	OGLEffectMatrix(const OGLMatrix *);
	OGLEffectMatrix();
	~OGLEffectMatrix();
	void set(const OGLMatrix *);
	void multiplyMatrixToTranslate(OGLMatrix *);
	void multiplyRotateToTranslate(OGLMatrix *);
	void multiplyScalar(float);
	void multiplyRotationWeight(float);
	void multiplyTranslateWeight(OGLVec3 *);
	void multiplyTranslateWeight(float);
	void BlendMatrixIdentity(float, float);
	void BlendMatrixIdentity(float);
	void BlendMatrix(const OGLMatrix *, const OGLMatrix *, float, float);
	void BlendMatrix(const OGLMatrix *, const OGLMatrix *, float);
	void BlendMatrix(const OGLMatrix *, float, float);
	void BlendMatrix(const OGLMatrix *, float);
	void DifferenceMatrix(const OGLMatrix *, const OGLMatrix *);
	void transposeRotate();
	void rotationQuaternion(OGLQuat);
	void rotationQuaternion(float, float, float, float);
	float determinant();
	void inverse();
	OGLEffectMatrix & operator=(const OGLEffectMatrix &);
};