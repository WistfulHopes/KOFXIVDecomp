#pragma once

class ParticleEmitter :
	Emitter
{
public:
	ParticleEmitter(const ParticleEmitter &);
	ParticleEmitter();
	virtual ~ParticleEmitter();
	virtual void ownInitialize();
	virtual void ownTerminate();
	void initAllEmitterState();
	virtual void ownCleanup(float, bool);
	void clearLocalData();
	virtual void changeState(long);
	void changeParticleTypeState(long);
	virtual void ownUpdate(bool, const OGLMatrix &, float);
	virtual void ownPostUpdate(bool, float);
	void updateEmitter(bool, const OGLMatrix &, float);
	void generateEmitter();
	void sortParticle();
	ParticleData * getParticleData(long);
	virtual void setEffectData(EffectData *);
	virtual void ownUpdateVertexBuffer();
	virtual void ownPostUpdateVertexBuffer();
	virtual void ownMainUpdateVertexBufferInBT();
	virtual void ownPostUpdateVertexBufferInBT();
	virtual void ownRenderSetting();
	virtual void ownRender(long, float, long, EffectRenderArgument *);
protected:
	ParticleEmitterState * pStateArray[6]; // 0xDF8
	ParticleEmitterState * pState; // 0xE28
	ParticleTypeState * pParticleTypeStateArray[8]; // 0xE30
	ParticleTypeState * pParticleTypeState; // 0xE70
public:
	ParticleEmitter & operator=(const ParticleEmitter &);
};