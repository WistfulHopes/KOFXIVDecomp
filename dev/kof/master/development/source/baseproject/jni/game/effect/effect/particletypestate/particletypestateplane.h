#pragma once

class ParticleTypeStatePlane :
	ParticleTypeState
{
public:
	ParticleTypeStatePlane(const ParticleTypeStatePlane &);
	ParticleTypeStatePlane();
	virtual ~ParticleTypeStatePlane();
	virtual void initialize();
	void InitVertexBuffer(std::vector<ParticleData,std::allocator<ParticleData> > *, EffectData *);
	virtual void loadFigure(const char *);
	virtual void calcWorldMat(ParticleData *, EffectData *);
	virtual void calcWorldMatInBT(ParticleData *, EffectData *);
	void UpdateUVBuffer(EffectUpdateBufferArgument *, unsigned long, float *);
	virtual void UpdateVertexBuffer(EffectUpdateBufferArgument *);
	void calcLightingCoefficientOfFake(ParticleData *, EffectData *);
	ParticleTypeStatePlane & operator=(const ParticleTypeStatePlane &);
};