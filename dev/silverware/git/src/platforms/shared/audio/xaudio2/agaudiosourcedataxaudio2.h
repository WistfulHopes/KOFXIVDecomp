#pragma once

struct AgAudioSourceData :
	AgAudioSourceDataBase
{
	AgAudioSourceData(AgAudioSourceData &);
	AgAudioSourceData(const AgAudioSourceData &);
	AgAudioSourceData();
	AgXAudio2RuntimeData * m_runtimeData; // 0x20
	AgPath m_path; // 0x28
	WAVEFORMATEXTENSIBLE m_waveFormat; // 0x38
	unsigned long m_chunkSize; // 0x60
	~AgAudioSourceData();
	AgAudioSourceData & operator=(AgAudioSourceData &);
	AgAudioSourceData & operator=(const AgAudioSourceData &);
};
AgAudioSourceData::AgAudioSourceData(); // 0x14065E540