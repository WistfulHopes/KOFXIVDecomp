#pragma once

struct AgAudioSourceDataBase
{
	AgAudioSourceDataBase();
	unsigned char * m_data; // 0x0
	AgAudioSourceType m_type; // 0x8
	long m_is3D; // 0xC
	long m_isRuntime; // 0x10
	float m_volume; // 0x14
	float m_sampleRate; // 0x18
	float m_totalTime; // 0x1C
};