#pragma once

class ParticleTypeStateDirectionalInstancing :
	ParticleTypeStatePlaneInstancing
{
public:
	ParticleTypeStateDirectionalInstancing(const ParticleTypeStateDirectionalInstancing &);
	ParticleTypeStateDirectionalInstancing();
	virtual ~ParticleTypeStateDirectionalInstancing();
	virtual void initialize();
	virtual void InitVertexBuffer(std::vector<ParticleData,std::allocator<ParticleData> > *, EffectData *);
	virtual void calcWorldMat(ParticleData *, EffectData *);
	virtual void calcWorldMatInBT(ParticleData *, EffectData *);
	ParticleTypeStateDirectionalInstancing & operator=(const ParticleTypeStateDirectionalInstancing &);
};