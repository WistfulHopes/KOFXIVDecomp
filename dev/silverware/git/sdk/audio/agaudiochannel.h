#pragma once

enum AgSpeakerIndex
{
	AgSpeakerIndex_FrontLeft = 0,
	AgSpeakerIndex_FrontRight = 1,
	AgSpeakerIndex_FrontCenter = 2,
	AgSpeakerIndex_LowFrequency = 3,
	AgSpeakerIndex_BackLeft = 4,
	AgSpeakerIndex_BackRight = 5,
	AgSpeakerIndex_SideLeft = 6,
	AgSpeakerIndex_SideRight = 7,
};
class AgVolumeMatrix
{
public:
	AgVolumeMatrix();
	float get(long, long);
	void set(long, long, float);
	void applyVolume(float);
	const float * getData();
private:
	float m_volumes[8][8]; // 0x0
};
class AgVolumeArray
{
public:
	AgVolumeArray();
	void set(AgSpeakerIndex, float);
	void applyVolume(float);
	const float * getData();
private:
	float m_volumes[8]; // 0x0
};
class AgAudioChannel :
	AgReferencedObject
{
public:
	AgAudioChannel(const AgAudioChannel &);
	AgAudioChannel(const long, AgAudioSourceType);
	~AgAudioChannel();
	void play(unsigned long);
	void stop();
	void pause();
	void resume();
	void flushState();
	long getIsPlaying();
	long getIsFinished();
	long getIsPaused();
	void setVolume(const AgVolumeArray &);
	void setVolume(float);
	const float getVolume();
	void setPitch(float);
	void setDistanceSpread(float);
	void setPan(float);
	void setPosition(const AgVector3);
	void setElapsedTime(float);
	const long is3D();
	void set3D(long);
	const AgVector3 & getPosition();
	float getElapsedTime();
	const AgAudioSourceType getType();
	AgAudioChannelData & getInternalData();
	void update(AgAudioManager &);
	void addEffect(AgPointer<AgAudioEffect>);
	AgPointer<AgAudioEffect> getEffect(AgAudioEffectType);
protected:
	float update3DAudio(AgVolumeMatrix &, AgAudioManager &);
	void addAllEffects(AgAudioChannelData *);
	void updateAllEffects(AgAudioChannelData *);
	void removeAllEffects(AgAudioChannelData *);
	AgAudioChannelData * m_internalData; // 0x10
public:
	AgAudioChannel & operator=(const AgAudioChannel &);
};
class AgPointer<AgAudioEffect>
{
public:
	AgPointer<AgAudioEffect>(const AgReference<AgAudioEffect> &);
	AgPointer<AgAudioEffect>(AgPointer<AgAudioEffect> &);
	AgPointer<AgAudioEffect>(const AgPointer<AgAudioEffect> &);
	AgPointer<AgAudioEffect>(AgAudioEffect *);
	AgPointer<AgAudioEffect>();
	~AgPointer<AgAudioEffect>();
	AgPointer<AgAudioEffect> & operator=(AgPointer<AgAudioEffect> &);
	AgPointer<AgAudioEffect> & operator=(const AgReference<AgAudioEffect> &);
	AgPointer<AgAudioEffect> & operator=(const AgPointer<AgAudioEffect> &);
	AgPointer<AgAudioEffect> & operator=(AgAudioEffect *);
	bool operator<(const AgPointer<AgAudioEffect> &);
	AgAudioEffect * operator->();
	AgAudioEffect & operator*();
	bool operator==(const AgPointer<AgAudioEffect> &);
	bool operator==(AgAudioEffect *);
	bool operator!=(const AgPointer<AgAudioEffect> &);
	bool operator!=(AgAudioEffect *);
	AgAudioEffect * getObject();
	void swap(AgPointer<AgAudioEffect> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgAudioEffect * m_ptr; // 0x8
};