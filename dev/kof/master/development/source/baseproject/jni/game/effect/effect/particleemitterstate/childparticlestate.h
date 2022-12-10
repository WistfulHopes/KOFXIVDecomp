#pragma once

class ChildParticleState :
	ParticleEmitterState
{
public:
	ChildParticleState(const ChildParticleState &);
	ChildParticleState(ParticleEmitter *);
	ChildParticleState();
	virtual ~ChildParticleState();
	virtual void generateEmitter();
	bool checkGenerateRequirement(float, float *, float, long);
	ParticleData * initGenerateParticle(bool, float, long);
	virtual void generateParticle(EffectUpdateArgument *);
	virtual void generateParticlePos(ParticleData *, float);
	virtual void generateParticleCol(ParticleData *, float);
	virtual void generateParticleRot(ParticleData *, float);
	virtual void generateParticleScale(ParticleData *, float);
	void generateParticlePosChild(ParticleData *, ParticleData *, float);
	virtual void updateParticleScale(ParticleData *, float);
	virtual void calcReferenceMatrix(ParticleData *, float);
	virtual void calcActionMatrix(ParticleData *, float);
	virtual void updateWorldData(ParticleData *, float);
	ChildParticleState & operator=(const ChildParticleState &);
};