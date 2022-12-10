#pragma once

class GPUParticleEmitterState :
	ParticleEmitterState
{
public:
	GPUParticleEmitterState(const GPUParticleEmitterState &);
	GPUParticleEmitterState(Emitter *);
	GPUParticleEmitterState();
	virtual ~GPUParticleEmitterState();
	void initialize(Emitter *);
	virtual void generateEmitter();
	virtual void updateEmitter(bool, const OGLMatrix &, float);
	virtual void generateParticle(EffectUpdateArgument *);
	virtual void updateAllParticle(EffectUpdateArgument *);
	void updateGPUParticle(EffectUpdateArgument *);
	GPUParticleEmitterState & operator=(const GPUParticleEmitterState &);
};