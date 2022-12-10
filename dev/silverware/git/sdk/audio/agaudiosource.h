#pragma once

class AgAudioSource :
	AgReferencedObject
{
	enum RuntimeAudioSource
	{
		Runtime = 0,
	};
public:
	AgAudioSource(const AgAudioSource &);
	AgAudioSource(AgAudioSource::RuntimeAudioSource, unsigned long, long, float);
	AgAudioSource(const AgPath &, AgAudioSourceType, long, float);
	AgAudioSource(AgPointer<AgFile>, AgAudioSourceType, long, float);
	AgAudioSource(AgAudioSourceType);
	~AgAudioSource();
	AgPointer<AgAudioChannel> createChannel();
	AgPointer<AgAudioChannel> play(unsigned long);
	void bindToChannel(const AgPointer<AgAudioChannel> &);
	void unbindFromChannel(const AgPointer<AgAudioChannel> &);
	void pushRuntimeStream(AgPointer<AgStream>);
	long isRuntime();
	float getVolume();
	long getNumChannels();
	float getSampleRate();
	float getTotalTime();
	AgAudioSourceType getType();
	void setLoopRegion(long, long);
	std::pair<int,int> getLoopRegion();
protected:
	AgAudioSourceData * m_internalData; // 0x10
	long m_loopStart; // 0x18
	long m_loopEnd; // 0x1C
private:
	void _createFromPath(const AgPath &);
	void _fillAudioChannelData(AgAudioChannelData &);
public:
	AgAudioSource & operator=(const AgAudioSource &);
};
class AgPointer<AgFile>
{
public:
	AgPointer<AgFile>(const AgReference<AgFile> &);
	AgPointer<AgFile>(AgPointer<AgFile> &);
	AgPointer<AgFile>(const AgPointer<AgFile> &);
	AgPointer<AgFile>(AgFile *);
	AgPointer<AgFile>();
	~AgPointer<AgFile>();
	AgPointer<AgFile> & operator=(AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(const AgReference<AgFile> &);
	AgPointer<AgFile> & operator=(const AgPointer<AgFile> &);
	AgPointer<AgFile> & operator=(AgFile *);
	bool operator<(const AgPointer<AgFile> &);
	AgFile * operator->();
	AgFile & operator*();
	bool operator==(const AgPointer<AgFile> &);
	bool operator==(AgFile *);
	bool operator!=(const AgPointer<AgFile> &);
	bool operator!=(AgFile *);
	AgFile * getObject();
	void swap(AgPointer<AgFile> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgFile * m_ptr; // 0x8
};
class AgPointer<AgAudioChannel>
{
public:
	AgPointer<AgAudioChannel>(const AgReference<AgAudioChannel> &);
	AgPointer<AgAudioChannel>(AgPointer<AgAudioChannel> &);
	AgPointer<AgAudioChannel>(const AgPointer<AgAudioChannel> &);
	AgPointer<AgAudioChannel>(AgAudioChannel *);
	AgPointer<AgAudioChannel>();
	~AgPointer<AgAudioChannel>();
	AgPointer<AgAudioChannel> & operator=(AgPointer<AgAudioChannel> &);
	AgPointer<AgAudioChannel> & operator=(const AgReference<AgAudioChannel> &);
	AgPointer<AgAudioChannel> & operator=(const AgPointer<AgAudioChannel> &);
	AgPointer<AgAudioChannel> & operator=(AgAudioChannel *);
	bool operator<(const AgPointer<AgAudioChannel> &);
	AgAudioChannel * operator->();
	AgAudioChannel & operator*();
	bool operator==(const AgPointer<AgAudioChannel> &);
	bool operator==(AgAudioChannel *);
	bool operator!=(const AgPointer<AgAudioChannel> &);
	bool operator!=(AgAudioChannel *);
	AgAudioChannel * getObject();
	void swap(AgPointer<AgAudioChannel> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgAudioChannel * m_ptr; // 0x8
};
class AgPointer<AgStream>
{
public:
	AgPointer<AgStream>(const AgReference<AgStream> &);
	AgPointer<AgStream>(AgPointer<AgStream> &);
	AgPointer<AgStream>(const AgPointer<AgStream> &);
	AgPointer<AgStream>(AgStream *);
	AgPointer<AgStream>();
	~AgPointer<AgStream>();
	AgPointer<AgStream> & operator=(AgPointer<AgStream> &);
	AgPointer<AgStream> & operator=(const AgReference<AgStream> &);
	AgPointer<AgStream> & operator=(const AgPointer<AgStream> &);
	AgPointer<AgStream> & operator=(AgStream *);
	bool operator<(const AgPointer<AgStream> &);
	AgStream * operator->();
	AgStream & operator*();
	bool operator==(const AgPointer<AgStream> &);
	bool operator==(AgStream *);
	bool operator!=(const AgPointer<AgStream> &);
	bool operator!=(AgStream *);
	AgStream * getObject();
	void swap(AgPointer<AgStream> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgStream * m_ptr; // 0x8
};
struct std::pair<int,int>
{
	struct _Myt;
	typedef long first_type;
	typedef long second_type;
	pair<int,int>(std::pair<int,int> &);
	std::pair<int,int> & operator=(const std::pair<int,int> &);
	std::pair<int,int> & operator=(std::pair<int,int> &);
	long first; // 0x0
	long second; // 0x4
	void swap(std::pair<int,int> &);
};