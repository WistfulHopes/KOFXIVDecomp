#pragma once

class CAMERA_MOTION_PREVIEW_SETTINGS
{
	enum PREVIEW_SIDE
	{
		PREVIEW_SIDE_NONE = 255,
		PREVIEW_SIDE_1P = 0,
		PREVIEW_SIDE_2P = 1,
	};
	enum PLAY_MODE
	{
		PLAY_MODE_STOP = 0,
		PLAY_MODE_PLAY = 1,
		PLAY_MODE_FRAME = 2,
	};
	struct CharaParam;
public:
	CAMERA_MOTION_PREVIEW_SETTINGS::CharaParam charaParam[2]; // 0x0
	long iPreviewSide; // 0x30
	long iPlayMode; // 0x34
	void Init();
	bool Update();
	void PreviewSet(long);
	void PreviewEnd();
	void CameraPlay();
	void CameraStop();
	void CameraNextFrame();
	bool IsCameraPlay();
	bool IsActive();
	void ModelMotionChange(long, long);
	void CameraMotionChange(long, long);
	void CameraFrameChange(long, float);
	void ModelFaceUpMotionChange(long, long);
	void ModelFaceDownMotionChange(long, long);
	const char * GetModelMotionName(long);
	const char * GetCameraMotionName(long);
	const char * GetModelFaceUpMotionName(long);
	const char * GetModelFaceDownMotionName(long);
	float GetCameraFrame();
	float GetCameraTotalFrame();
	CAMERA_MOTION_PREVIEW_SETTINGS();
	~CAMERA_MOTION_PREVIEW_SETTINGS();
};
struct CAMERA_MOTION_PREVIEW_SETTINGS::CharaParam
{
	long iModelMotionNo; // 0x0
	long iCameraMotionNo; // 0x4
	float fMotionFrame; // 0x8
	long iModelFaceUpNo; // 0xC
	long iModelFaceDownNo; // 0x10
	long iSpecialLightID; // 0x14
};