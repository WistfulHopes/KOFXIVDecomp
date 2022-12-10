#pragma once

class OGLPrevAnimationBone
{
public:
	OGLVec3 m_vPrevTrans; // 0x0
	OGLVec3 m_vPrevScale; // 0xC
	OGLQuat m_vPrevRot; // 0x18
	OGLPrevAnimationBone(const OGLPrevAnimationBone &);
	OGLPrevAnimationBone();
	~OGLPrevAnimationBone();
	void initialize();
	void finalize();
};
class OGLAnimationBone
{
public:
	unsigned long m_uiInfoFlg; // 0x0
	long m_iBoneID; // 0x4
	OGLKeyTrans * m_pKeyTrans; // 0x8
	long m_iKeyTransCount; // 0x10
	OGLKeyScale * m_pKeyScale; // 0x18
	long m_iKeyScaleCount; // 0x20
	OGLKeyRot * m_pKeyRot; // 0x28
	long m_iKeyRotCount; // 0x30
	OGLAnimationBone();
	~OGLAnimationBone();
	void initialize();
	void finalize();
	void getScalMatrix(OGLMatrix *, float, OGLPrevAnimationBone *, OGLPrevAnimationBone *, long, long, float);
	void getScalMatrixBindPose(OGLMatrix *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, long, long, float);
	void getRotMatrix(OGLMatrix *, float, OGLPrevAnimationBone *, OGLPrevAnimationBone *, long, long, float);
	void getRotMatrixBindPose(OGLMatrix *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, long, long, float);
	void getTransPos(OGLVec3 *, float, OGLPrevAnimationBone *, OGLPrevAnimationBone *, long, long, float, float, OGLMatrix *);
	void getTransPosBindPose(OGLVec3 *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, long, long, float);
	void getBoneMatrix(OGLMatrix *, OGLVec3 *, float, unsigned char, OGLPrevAnimationBone *, OGLPrevAnimationBone *, float, OGLMatrix *, long, long, float);
	void getBoneMatrix(OGLMatrix *, OGLVec3 *, float, OGLPrevAnimationBone *, OGLPrevAnimationBone *, float, OGLMatrix *, long, long, float);
	void getBoneMatrixBindPose(OGLMatrix *, OGLVec3 *, unsigned char, OGLPrevAnimationBone *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, long, long, float);
	void getBoneMatrixBindPose(OGLMatrix *, OGLVec3 *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, OGLPrevAnimationBone *, long, long, float);
};