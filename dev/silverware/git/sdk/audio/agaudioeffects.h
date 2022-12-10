#pragma once

class AgAudioEffect :
	AgReferencedObject
{
public:
	AgAudioEffect(const AgAudioEffect &);
	AgAudioEffect(AgAudioEffectType);
	~AgAudioEffect();
	void add(AgAudioChannelData *);
	void update(AgAudioChannelData *);
	void remove(AgAudioChannelData *);
	void markDirty();
	long isDirty();
	AgAudioEffectType getType();
protected:
	AgAudioEffectType m_type; // 0x10
	long m_dirty; // 0x14
public:
	AgAudioEffect & operator=(const AgAudioEffect &);
};
class AgAudioEffectFilterChain :
	AgAudioEffect
{
public:
	AgAudioEffectFilterChain(AgAudioEffectFilterChain &);
	AgAudioEffectFilterChain(const AgAudioEffectFilterChain &);
	AgAudioEffectFilterChain();
	void updateFilter(unsigned long, const AgAudioFilter &);
	AgAudioFilter & getFilter(unsigned long);
	const AgAudioFilter & getFilter(unsigned long);
protected:
	AgAudioFilter m_filters[2]; // 0x18
public:
	virtual ~AgAudioEffectFilterChain();
	AgAudioEffectFilterChain & operator=(AgAudioEffectFilterChain &);
	AgAudioEffectFilterChain & operator=(const AgAudioEffectFilterChain &);
};
class AgAudioEffectFFT :
	AgAudioEffect
{
public:
	AgAudioEffectFFT(AgAudioEffectFFT &);
	AgAudioEffectFFT(const AgAudioEffectFFT &);
	AgAudioEffectFFT();
	const AgAudioFFT & getFFT();
protected:
	AgAudioFFT m_fft; // 0x18
public:
	virtual ~AgAudioEffectFFT();
	AgAudioEffectFFT & operator=(AgAudioEffectFFT &);
	AgAudioEffectFFT & operator=(const AgAudioEffectFFT &);
};
class AgAudioEffectReverb :
	AgAudioEffect
{
public:
	AgAudioEffectReverb(AgAudioEffectReverb &);
	AgAudioEffectReverb(const AgAudioEffectReverb &);
	AgAudioEffectReverb();
	void setParams(float, float, float);
protected:
	float m_attenuation; // 0x18
	float m_attenuationTime; // 0x1C
	float m_reflectionAttenuation; // 0x20
public:
	virtual ~AgAudioEffectReverb();
	AgAudioEffectReverb & operator=(AgAudioEffectReverb &);
	AgAudioEffectReverb & operator=(const AgAudioEffectReverb &);
};