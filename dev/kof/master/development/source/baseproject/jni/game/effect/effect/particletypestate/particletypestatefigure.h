#pragma once

class ParticleTypeStateFigure :
	ParticleTypeStatePlane
{
public:
	ParticleTypeStateFigure(const ParticleTypeStateFigure &);
	ParticleTypeStateFigure();
	virtual ~ParticleTypeStateFigure();
	virtual void loadFigure(const char *);
	virtual void calcWorldMat(ParticleData *, EffectData *);
	virtual void calcWorldMatInBT(ParticleData *, EffectData *);
	virtual void UpdateVertexBuffer(EffectUpdateBufferArgument *);
	virtual void Render(EffectRenderArgument *);
	ParticleTypeStateFigure & operator=(const ParticleTypeStateFigure &);
};