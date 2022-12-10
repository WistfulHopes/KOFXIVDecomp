#pragma once

class ParticleTypeStateFigureInstancing :
	ParticleTypeStateFigure
{
public:
	ParticleTypeStateFigureInstancing(const ParticleTypeStateFigureInstancing &);
	ParticleTypeStateFigureInstancing();
	virtual ~ParticleTypeStateFigureInstancing();
	virtual void loadFigure(const char *);
	virtual void UpdateVertexBuffer(EffectUpdateBufferArgument *);
	virtual void Render(EffectRenderArgument *);
	ParticleTypeStateFigureInstancing & operator=(const ParticleTypeStateFigureInstancing &);
};