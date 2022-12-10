#pragma once

class EAGLView
{
public:
	float m_FPSValue; // 0x0
	float m_FixTime; // 0x4
	long m_FPSCount; // 0x8
	long m_FPSCount2; // 0xC
	double m_StartTime; // 0x10
	double m_FPSTimer; // 0x18
	double m_FrameTime; // 0x20
};