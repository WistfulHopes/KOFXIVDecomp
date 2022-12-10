#pragma once

class OGLPrevAnimationCamera
{
public:
	long m_MirrorType; // 0x0
	OGLVec3 m_vPrevTrans; // 0x4
	OGLVec3 m_vPrevScale; // 0x10
	OGLQuat m_vPrevRot; // 0x1C
	OGLPrevAnimationCamera(const OGLPrevAnimationCamera &);
	OGLPrevAnimationCamera();
	~OGLPrevAnimationCamera();
	void initialize();
	void finalize();
};
class OGLAnimationCamera
{
public:
	float m_fNear; // 0x0
	float m_fFar; // 0x4
	float m_fAspect; // 0x8
	float m_fFovyDegree; // 0xC
	float m_fWidth; // 0x10
	float m_fHeight; // 0x14
	float m_fTotalFrame; // 0x18
	OGLKeyTrans * m_pKeyTrans; // 0x20
	long m_iKeyTransCount; // 0x28
	OGLKeyScale * m_pKeyScale; // 0x30
	long m_iKeyScaleCount; // 0x38
	OGLKeyRot * m_pKeyRot; // 0x40
	long m_iKeyRotCount; // 0x48
	long m_MirrorType; // 0x4C
	unsigned char * m_cMotionName; // 0x50
	_OGLKeyParse * m_pKeyParse; // 0x58
	long m_iKeyParseCount; // 0x60
	OGLPrevAnimationCamera * m_pPrev; // 0x68
	OGLAnimationCamera();
	~OGLAnimationCamera();
	void initialize();
	void finalize();
	float getTotalFrame();
	void getScalMatrix(OGLMatrix *, OGLVec3 *, float);
	void getScalMatrix(OGLMatrix *, float, float);
	void getRotMatrix(OGLMatrix *, OGLQuat *, float);
	void getRotMatrix(OGLMatrix *, float, float);
	void getTransPos(OGLVec3 *, OGLVec3 *, float);
	void getTransPos(OGLVec3 *, float, float);
	void getCameraMatrix(OGLMatrix *, OGLVec3 *, OGLQuat *, OGLVec3 *, float);
	void getCameraMatrix(OGLMatrix *, float, OGLVec3 *, unsigned char, OGLPrevAnimationCamera *, float);
	void getCameraMatrix(OGLMatrix *, float, OGLVec3 *, OGLPrevAnimationCamera *, float);
};
class ICameraTarget
{
public:
	OGLVec3 CameraTarget; // 0x0
	ICameraTarget(ICameraTarget &);
	ICameraTarget(const ICameraTarget &);
	ICameraTarget();
};
class OGLCamera
{
public:
	OGLVec3 position; // 0x0
	OGLVec3 center; // 0xC
	OGLVec3 up; // 0x18
	OGLVec3 walkModeUp; // 0x24
	long cameraMode; // 0x30
	ICameraTarget * targetObj; // 0x38
	OGLMatrix matrix; // 0x40
	OGLPrevAnimationCamera m_pPrev; // 0x80
	OGLAnimationCamera * m_pCameraData; // 0xB0
	unsigned long m_usCameraCount; // 0xB8
	long cFormatType; // 0xBC
	OGLVec3 defaultPos; // 0xC0
	OGLQuat defaultRot; // 0xCC
	OGLVec3 defaultScale; // 0xDC
	enum <unnamed-enum-CAMERA_FREE>
	{
		CAMERA_FREE = 0,
		CAMERA_WALK = 1,
	};
	OGLCamera(const OGLCamera &);
	OGLCamera(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	OGLCamera();
	~OGLCamera();
	void initialize();
	void finalize();
	static OGLCamera * createCamera(unsigned char *, long);
	static OGLCamera * createCamera(const char *);
	long loadOcamData(unsigned char *, long);
	unsigned char loadOcamData(const char *);
	float getTotalFrame(long);
	void getCameraMatrix(OGLMatrix *, OGLMatrix *, OGLMatrix *, OGLVec3 *, long, float, float, float, OGLVec3 *, float, unsigned char, float, float);
	void setCameraMode(long);
	void lookAroundH(float);
	void lookAroundV(float);
	void lookAround(float, OGLVec3 *);
	void rotateH(float);
	void rotateV(float);
	void rotateC(float);
	void rotate(float, OGLVec3 *);
	void zoom(float);
	void translateOnView(float, float, float);
	void translateOnViewWithCenter(float, float, float);
	void translateCenterOnView(float, float, float);
	void translateAt(float, float, float);
	void translateAtWithCenter(float, float, float);
	void translate(float, float, float);
	void translateWithCenter(float, float, float);
	void lookAt(OGLVec3 *, OGLVec3 *, OGLVec3 *);
	void applyView();
	void getHorizontalVectorNormalized(OGLVec3 *);
	void getVerticalVectorNormalized(OGLVec3 *);
	void getDirectionalVectorNormalized(OGLVec3 *);
	void getDirectionalVector(OGLVec3 *);
	float getDistanceFromCenter();
	void getViewMatrix(OGLMatrix *);
	void fixUpVector();
};