#pragma once

class GPUParticleEmitter :
	ParticleEmitter
{
public:
	GPUParticleEmitter(const GPUParticleEmitter &);
	GPUParticleEmitter();
	virtual ~GPUParticleEmitter();
	virtual void ownInitialize();
	virtual void ownTerminate();
	virtual void changeState(long);
	virtual void changeParticleTypeState(long);
	virtual void ownUpdate(bool, const OGLMatrix &, float);
	virtual void ownPostUpdate(bool, float);
	virtual void sortParticle();
	virtual void ownUpdateVertexBuffer();
	virtual void ownRender(long, float, long, EffectRenderArgument *);
	GPUParticleEmitter & operator=(const GPUParticleEmitter &);
};