#pragma once

class ParticleTypeStateStripeInstancing :
	ParticleTypeStateStripe
{
public:
	ParticleTypeStateStripeInstancing(const ParticleTypeStateStripeInstancing &);
	ParticleTypeStateStripeInstancing();
	virtual ~ParticleTypeStateStripeInstancing();
	virtual void initialize();
	virtual void allocateVertexMemory(EffectUpdateArgument *);
	virtual void UpdateVertexBuffer(EffectUpdateBufferArgument *);
	void UpdataInstancingBuffer(EffectUpdateBufferArgument *);
	virtual void Render(EffectRenderArgument *);
	ParticleTypeStateStripeInstancing & operator=(const ParticleTypeStateStripeInstancing &);
};