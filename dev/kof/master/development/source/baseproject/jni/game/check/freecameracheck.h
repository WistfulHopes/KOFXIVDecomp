#pragma once

class FreeCameraControl
{
private:
	float fPerseAngle; // 0x0
	float fCameraAngle; // 0x4
	float fCamElevation; // 0x8
	float fDist; // 0xC
	OGLVec3 vLook; // 0x10
	OGLVec3 vPos; // 0x1C
	OGLVec3 vUp; // 0x28
	OGLVec3 vMove; // 0x34
	float fAccScale; // 0x40
	bool bAbsMove; // 0x44
	bool bNoUpdate; // 0x45
	float fProjBlendBase; // 0x48
	OGLMatrix mView; // 0x4C
	OGLMatrix mProj; // 0x8C
	OGLMatrix mBillboard; // 0xCC
public:
	FreeCameraControl(const FreeCameraControl &);
	FreeCameraControl();
	~FreeCameraControl();
	void Init();
	void Update();
	void SetAcceleration(bool);
	void SetAbsMove(bool);
	void AddCameraAngle(float);
	void SetCameraAngle(float);
	void AddCameraElevation(float);
	void SetCameraElevation(float);
	void MoveCameraPos(float, float);
	void MoveCameraHeight(float);
	void SetCameraPos(float, float, float);
	OGLVec3 GetCameraPos();
	OGLVec3 GetCameraLook();
	OGLVec3 GetCameraUp();
	float GetCameraAngle();
	float GetCameraElevation();
	void GetViewTrans(OGLMatrix &);
	void GetViewTrans(OGLMatrix &, OGLMatrix &);
	void GetPerspectiveFov(OGLMatrix &);
	void GetBillboard(OGLMatrix &);
	void SetProjBlendScale(float);
	float GetProjBlendScale();
	void SetCameraMatrix(const OGLMatrix &, const OGLMatrix &, const OGLMatrix &);
	void SetNoUpdate(bool);
};