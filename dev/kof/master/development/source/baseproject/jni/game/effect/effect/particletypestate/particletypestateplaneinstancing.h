#pragma once

class ParticleTypeStatePlaneInstancing :
	ParticleTypeStatePlane
{
public:
	ParticleTypeStatePlaneInstancing(const ParticleTypeStatePlaneInstancing &);
	ParticleTypeStatePlaneInstancing();
	virtual ~ParticleTypeStatePlaneInstancing();
	virtual void initialize();
	virtual void InitVertexBuffer(std::vector<ParticleData,std::allocator<ParticleData> > *, EffectData *);
	virtual void loadFigure(const char *);
	virtual void UpdateVertexBuffer(EffectUpdateBufferArgument *);
	virtual void Render(EffectRenderArgument *);
	ParticleTypeStatePlaneInstancing & operator=(const ParticleTypeStatePlaneInstancing &);
};