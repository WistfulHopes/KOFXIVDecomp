#pragma once

class AgAudioSourceXAudio2 :
	AgAudioSource
{
public:
	AgAudioSourceXAudio2(AgAudioSourceXAudio2 &);
	AgAudioSourceXAudio2(const AgAudioSourceXAudio2 &);
	AgAudioSourceXAudio2(AgAudioSource::RuntimeAudioSource, unsigned long, long, float);
	AgAudioSourceXAudio2(const AgPath &, AgAudioSourceType, long, float);
	AgAudioSourceXAudio2(AgPointer<AgFile>, AgAudioSourceType, long, float);
	AgAudioSourceXAudio2(AgAudioSourceType);
	void _createFromPath(const AgPath &);
	void _createFromFile(AgPointer<AgFile>);
	long _getNumChannels();
	void _destroy();
	void _fillAudioChannelData(AgAudioChannelData &);
	void _createFromStream(unsigned long);
	void _pushStream(AgPointer<AgStream>);
	IXAudio2VoiceCallback * _fetchCallbacks();
	std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> * _pumpRuntimeStream();
	unsigned long getChunkSize();
	unsigned char * getData();
	tWAVEFORMATEX * getWaveFormat();
	const AgPath & getPath();
private:
	void _readFileHeader(AgPointer<AgFile>);
public:
	virtual ~AgAudioSourceXAudio2();
	AgAudioSourceXAudio2 & operator=(AgAudioSourceXAudio2 &);
	AgAudioSourceXAudio2 & operator=(const AgAudioSourceXAudio2 &);
};
struct std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>
{
	struct _Myt;
	class first_type;
	typedef AgXAudio2RuntimeData second_type;
	pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>(std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>(const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> & operator=(const std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> & operator=(std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	AgPointer<AgStream> first; // 0x0
	AgXAudio2RuntimeData * second; // 0x10
	void swap(std::pair<AgPointer<AgStream>,AgXAudio2RuntimeData *> &);
	~pair<AgPointer<AgStream>,AgXAudio2RuntimeData *>();
};