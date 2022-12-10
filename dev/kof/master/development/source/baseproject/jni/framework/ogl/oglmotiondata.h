#pragma once

class OGLMotionData
{
public:
	float m_fTotalFrame; // 0x0
	OGLAnimationBone * m_pAnimBone; // 0x8
	long m_iAnimBoneCount; // 0x10
	unsigned long m_uiInfoFlg; // 0x14
	unsigned char * m_cMotionName; // 0x18
	OGLKeyUV * m_pKeyUv; // 0x20
	long m_iKeyUvCount; // 0x28
	OGLMotionData();
	~OGLMotionData();
	void initialize();
	void finalize();
	float getTotalFrame();
	unsigned char * getMotionName();
};