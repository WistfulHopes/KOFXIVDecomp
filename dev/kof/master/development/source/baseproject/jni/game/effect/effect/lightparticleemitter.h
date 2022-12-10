#pragma once

class LightParticleEmitter :
	Emitter
{
public:
	LightParticleEmitter(const LightParticleEmitter &);
	LightParticleEmitter();
	virtual ~LightParticleEmitter();
	void createSettingData();
	virtual void ownInitialize();
	virtual void ownTerminate();
	virtual void changeState(long);
	virtual void ownCleanup(float, bool);
	void clearLocalData();
	virtual void ownUpdate(bool, const OGLMatrix &, float);
	virtual void ownPostUpdate(bool, float);
	void updateEmitter(bool, const OGLMatrix &, float);
	void generateEmitter();
	void sortParticle();
	void getParticleTypeState();
	virtual void ownUpdateVertexBuffer();
	virtual void ownPostUpdateVertexBuffer();
	virtual void setEffectData(EffectData *);
private:
	ParticleEmitterState * pStateArray[6]; // 0xDF8
	ParticleEmitterState * pState; // 0xE28
public:
	LightParticleEmitter & operator=(const LightParticleEmitter &);
};