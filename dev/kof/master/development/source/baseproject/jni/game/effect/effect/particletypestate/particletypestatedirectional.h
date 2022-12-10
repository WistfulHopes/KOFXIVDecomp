#pragma once

class ParticleTypeStateDirectional :
	ParticleTypeStatePlane
{
public:
	ParticleTypeStateDirectional(const ParticleTypeStateDirectional &);
	ParticleTypeStateDirectional();
	virtual ~ParticleTypeStateDirectional();
	virtual void initialize();
	virtual void InitVertexBuffer(std::vector<ParticleData,std::allocator<ParticleData> > *, EffectData *);
	virtual void calcWorldMat(ParticleData *, EffectData *);
	virtual void calcWorldMatInBT(ParticleData *, EffectData *);
	ParticleTypeStateDirectional & operator=(const ParticleTypeStateDirectional &);
};