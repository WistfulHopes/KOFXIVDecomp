#pragma once

class ParticleEmitterState
{
public:
	ParticleEmitterState(const ParticleEmitterState &);
	ParticleEmitterState(Emitter *);
	ParticleEmitterState();
	~ParticleEmitterState();
	void initialize(Emitter *);
	void generateEmitter();
	void updateEmitter(bool, const OGLMatrix &, float);
	OGLEffectVec3 GetGenerateParticlePos(long, OGLEffectVec3 *, OGLEffectVec3 *);
	bool checkGenerateRequirement(float, float *);
	ParticleData * initGenerateParticle(bool, float);
	void generateParticle(EffectUpdateArgument *);
	void generateParticlePos(ParticleData *, float);
	void generateParticleCol(ParticleData *, float);
	void generateParticleRot(ParticleData *, float);
	void generateParticleScale(ParticleData *, float);
	void generateWorldData(ParticleData *, float);
	void updateAllParticle(EffectUpdateArgument *);
	void updateParticle(bool, ParticleData *, float);
	void updateParticlePos(ParticleData *, float);
	void updateParticleCol(ParticleData *, float);
	void updateParticleRot(ParticleData *, float);
	void updateParticleScale(ParticleData *, float);
	void calcParticleVel(ParticleData *, float);
	void calcParticleAcc(ParticleData *, float);
	void calcParticleRotVel(ParticleData *, float);
	void calcReferenceMatrix(ParticleData *, float);
	void calcActionMatrix(ParticleData *, float);
	void calcLocalMatrix(ParticleData *, float);
	void updateWorldData(ParticleData *, float);
	void updateForceField(ParticleData *, float);
	void setEffectData(EffectData *);
	void getBonePos(ParticleData *, OGLVec3 *, OGLVec3 *, long, long);
	void calcLocalData(ParticleData *, OGLVec3 *, OGLVec3 *);
protected:
	EffectData * pSettingData; // 0x8
	RandomNumbers * pRandomNumbers; // 0x10
	Emitter * pParticleEmitter; // 0x18
	long m_AllGenerateNum; // 0x20
	long m_AlreadyGenerateNum; // 0x24
public:
	ParticleEmitterState & operator=(const ParticleEmitterState &);
};