#pragma once

class LightEmitterState :
	ParticleEmitterState
{
public:
	LightEmitterState(const LightEmitterState &);
	LightEmitterState(Emitter *);
	LightEmitterState();
	virtual ~LightEmitterState();
	virtual void generateEmitter();
	virtual void updateEmitter(bool, const OGLMatrix &, float);
	virtual ParticleData * initGenerateParticle(bool, float);
	virtual void generateParticleCol(ParticleData *, float);
	void generateParticleLight(ParticleData *, float);
	virtual void updateAllParticle(EffectUpdateArgument *);
	virtual void updateParticle(bool, ParticleData *, float);
	virtual void updateParticleCol(ParticleData *, float);
	void updateParticleLight(ParticleData *, float);
	LightEmitterState & operator=(const LightEmitterState &);
};