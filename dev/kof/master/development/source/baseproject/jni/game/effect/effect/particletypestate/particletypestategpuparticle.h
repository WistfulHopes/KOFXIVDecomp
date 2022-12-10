#pragma once

class ParticleTypeStateGPUParticle :
	ParticleTypeState
{
public:
	ParticleTypeStateGPUParticle(const ParticleTypeStateGPUParticle &);
	ParticleTypeStateGPUParticle();
	virtual ~ParticleTypeStateGPUParticle();
	virtual void initialize();
	void InitVertexBuffer(std::vector<ParticleData,std::allocator<ParticleData> > *, EffectData *);
	virtual void loadFigure(const char *);
	virtual void setEmitterAndData(Effect *, EffectData *);
	virtual void UpdateVertexBuffer(EffectUpdateBufferArgument *);
	virtual void Render(EffectRenderArgument *);
	ParticleTypeStateGPUParticle & operator=(const ParticleTypeStateGPUParticle &);
};