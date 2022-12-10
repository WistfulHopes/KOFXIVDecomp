#pragma once

struct CAMERA_OFFSET
{
	enum ID
	{
		BASE_POS = 0,
		CENTER = 1,
		STAGE = 2,
		NORMAL_CAM = 3,
		CAM_POSITION = 4,
		END_POSITION = 5,
		C_HEAD = 6,
		C_NECK = 7,
		C_CHEST = 8,
		C_HIPS = 9,
		L_ARM1 = 10,
		L_ARM2 = 11,
		L_HAND = 12,
		R_ARM1 = 13,
		R_ARM2 = 14,
		R_HAND = 15,
		L_LEG2 = 16,
		L_FOOT = 17,
		L_TOE = 18,
		R_LEG2 = 19,
		R_FOOT = 20,
		R_TOE = 21,
		C_HIPS_ATTACH = 22,
		L_HAND_ATTACH = 23,
		R_HAND_ATTACH = 24,
		L_FOOT_ATTACH = 25,
		R_FOOT_ATTACH = 26,
		C_HEAD_ATTACH = 27,
	};
};
struct CAMERA_OPTION
{
	enum FLAG
	{
		SHOW_ME = 1,
		NOT_REV_BASE = 2,
		NOT_REV_X = 4,
		TARGET_BASE = 8,
		NOT_FOLLOW_BASE = 16,
		KEEP_CAMERA_ANGLE = 32,
		SET_SUB_CAMERA = 64,
		INVISIBLE_TARGET_EFFECT = 128,
		INVISIBLE_COMMON_EFFECT = 256,
		ONLY_THIS_ACTION_EFFECT = 512,
		NORMAL_CAMERA_X = 1024,
		NORMAL_CAMERA_Y = 2048,
		NORMAL_CAMERA_Z = 4096,
		ONLY_THIS_ACTION_EFFECT_EX = 8192,
	};
};
struct CAMERA_MOVE_CALC_TYPE
{
	enum ID
	{
		LINEAR = 0,
		QUAD_INOUT = 1,
	};
};
struct QUAKE_CAMERA
{
	enum ID
	{
		NONE = 0,
		SMALL_V = 1,
		MIDDLE_V = 2,
		BIG_V = 3,
		SMALL_H = 4,
		MIDDLE_H = 5,
		BIG_H = 6,
		SMALL_VH = 7,
		MIDDLE_VH = 8,
		BIG_VH = 9,
	};
};
struct CameraOffsetData
{
	CAMERA_TYPE type; // 0x0
	OGLVec3 vStart; // 0x4
	OGLVec3 vStartLook; // 0x10
	OGLVec3 vStartUp; // 0x1C
	OGLVec3 vEnd; // 0x28
	OGLVec3 vEndLook; // 0x34
	Fix32 xCount; // 0x40
	Fix32 xMax; // 0x44
	OGLVec3 vOffBase; // 0x48
	OGLVec3 vOffLookBase; // 0x54
	long iFlipCount; // 0x60
	Actor * pActor; // 0x68
	long iCameraID; // 0x70
	long iActMotionID; // 0x74
	long iActMotionFileID; // 0x78
	long iOffsetType; // 0x7C
	long iOptionFlag; // 0x80
	long iMoveCalcType; // 0x84
	OGLMatrix mView; // 0x88
	OGLMatrix mProj; // 0xC8
	OGLMatrix mBillboard; // 0x108
	bool bNonStop; // 0x148
	void Reset();
	CameraOffsetData(CameraOffsetData &);
	CameraOffsetData(const CameraOffsetData &);
	CameraOffsetData();
};
struct QuakeCameraData
{
	OGLVec3 vOff; // 0x0
	OGLVec3 vQuakeBase; // 0xC
	long iFlipCount; // 0x18
	Fix32 xCount; // 0x1C
	Fix32 xMax; // 0x20
	bool bNonStop; // 0x24
	void Reset();
	QuakeCameraData(QuakeCameraData &);
	QuakeCameraData(const QuakeCameraData &);
	QuakeCameraData();
};
class CameraControl
{
private:
	OGLVec3 vBaseLook; // 0x0
	OGLVec3 vBasePos; // 0xC
	OGLVec3 vBaseUp; // 0x18
	OGLVec3 vBaseLookPrev; // 0x24
	OGLVec3 vBasePosPrev; // 0x30
	OGLVec3 vBaseUpPrev; // 0x3C
	OGLVec3 vBaseWallPos; // 0x48
	float fPerseAngle; // 0x54
	float fAngle; // 0x58
	float fDist; // 0x5C
	float fHeight; // 0x60
	float fNear; // 0x64
	float fFar; // 0x68
	float fAspect; // 0x6C
	float fLookDistAdj; // 0x70
	Fix32 xLookAdjCount; // 0x74
	CameraOffsetData offset; // 0x78
	QuakeCameraData quake; // 0x1C8
	OGLVec3 vLook; // 0x1F0
	OGLVec3 vPos; // 0x1FC
	OGLVec3 vUp; // 0x208
	OGLVec3 vLookPrev; // 0x214
	OGLVec3 vPosPrev; // 0x220
	OGLVec3 vUpPrev; // 0x22C
	OGLMatrix mView; // 0x238
	OGLMatrix mProj; // 0x278
	OGLMatrix mBillboard; // 0x2B8
	OGLMatrix mViewPrev; // 0x2F8
	OGLMatrix mProjPrev; // 0x338
	OGLMatrix mBillboardPrev; // 0x378
	float fProjBlendBase; // 0x3B8
	float fProjBlendValue; // 0x3BC
	bool bSubCamera; // 0x3C0
	bool bMoveLimitOff; // 0x3C1
public:
	CameraControl(const CameraControl &);
	CameraControl();
	~CameraControl();
	void CameraInit(float);
	void CameraPrevCalc(ActionSystem &);
	void CameraLateCalc(ActionSystem &);
	enum BATTLE_CAMERA_POS
	{
		LEFT = 0,
		CENTER = 1,
		RIGHT = 2,
	};
	void SetBattleCameraPos(CameraControl::BATTLE_CAMERA_POS);
	void SetAspect(float);
	void SetSubCamera();
	bool IsSubCamera();
	OGLVec3 GetNormalCameraPos();
	OGLVec3 GetNormalCameraWallPos();
	OGLVec3 GetCameraPos();
	OGLVec3 GetCameraLook();
	OGLVec3 GetCameraUp();
	void SetProjBlendBaseScale(float);
	float GetProjBlendBaseScale();
	float GetProjBlendScale();
	void SetMoveLimitOff();
	void GetCameraParam(OGLVec3 &, OGLVec3 &, OGLVec3 &);
	void GetViewTrans(OGLMatrix &);
	void GetViewTrans(OGLMatrix &, OGLMatrix &);
	void GetBillboard(OGLMatrix &);
	void GetPerspectiveFov(OGLMatrix &);
	float GetMotionCameraFrame();
	float GetMotionCameraTotalFrame();
	bool IsInvisibleActor(const Actor *);
	bool IsInvisibleEffectActor(const ActorEffect *);
	bool IsPlayMotionCamera();
	bool IsPlayMotionCameraWithOut();
	bool IsPlayMoveCamera();
	bool IsPlayQuakeCamera();
	void RequestResetCamera();
	void RequestQuakeCamera(const CharaAttackData::HitQuakeCameraData &);
	void RequestQuakeCamera(long, long);
	void RequestQuakeCamera(long, float, float, float);
	void RequestMotionCameraSync(Actor *, const CharaActionData::Camera &);
	void RequestMotionCameraFrame(Actor *, const CharaActionData::Camera &);
	void RequestMotionCameraOut(long);
	void RequestMoveCamera(Actor *, const CharaActionData::Camera &, long);
	void RequestWinnersCamera(Actor *, long);
	void RequestMoveCameraOut(long, long);
	void RequestBattleCameraFixY(Actor *, const CharaActionData::Camera &);
	void RequestCamera(Actor *, const CharaActionData::Camera &);
	void RequestKOCamera(Actor *);
	static float LerpF(float, float, float);
	static OGLVec3 EasingQuad(const OGLVec3 &, const OGLVec3 &, float);
	static OGLVec3 Easing(const OGLVec3 &, const OGLVec3 &, float, long);
private:
	void BattleCameraCheck(ActionSystem &);
	void QuakeCameraCalc(ActionSystem &);
	void MotionCameraOutCalc(ActionSystem &);
	void MotionCameraCheck(ActionSystem &);
	void MoveCameraCalc(ActionSystem &);
	void MoveCameraOutCalc(ActionSystem &);
	void NormalFixYCheck(ActionSystem &);
	OGLVec3 GetOffsetTypePos();
	void _addOffset(OGLVec3 &, const Actor *);
	void _calcCamMatrix();
	void SphereLinear(OGLVec3 &, OGLVec3 &, OGLVec3 &, float);
	void CalcInterPause(OGLMatrix &, OGLMatrix &, OGLMatrix &, float);
};