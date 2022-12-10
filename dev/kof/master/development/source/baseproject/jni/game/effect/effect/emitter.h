#pragma once

class Emitter :
	Effect
{
public:
	Emitter(const Emitter &);
	Emitter();
	virtual ~Emitter();
	virtual void ownInitialize();
	virtual void ownTerminate();
	void setD3DDraw(D3DDraw *);
	unsigned long getParticleSize();
	ParticleData * getParticleData(long);
	unsigned long getParentID(long);
	long searchParentNum(long);
	OGLMatrix * getParticleReferenceMat(long);
	OGLMatrix * getParticleDefaultReferenceMat(long);
	OGLMatrix * getParticleActMat(long);
	OGLMatrix * getParticleDefaultActMat(long);
	OGLMatrix * getParentParticleGlobalMat(long);
	ParticleData * getParentParticle(long);
	void changeState(long);
	EmitterFormState * getEmitterFormState();
	void addIDCount();
	unsigned long getIDCount();
	float getAge();
	long getEmitVolume();
	void setIntervalTime(float);
	float getIntervalTime();
	float getaccumulateEmitVolume();
	void setaccumulateEmitVolume(float);
	void setIntervalLimitTime(long);
	long getIntervalLimitTime();
	void setChildSize(long);
	long getChildSize();
	void setChildNumFromNum(long, long);
	void setChildNumFromNum(long);
	void setChildNum(long);
	long getChildNum();
	long getEmitterFormType();
	const OGLMatrix * getEmitterWorldMat();
	const OGLMatrix * getEmitterLocalMat();
	const OGLEffectVec3 * getEmitterWorldPos();
	const OGLEffectQuat * getEmitterWorldRot();
	const OGLEffectVec3 * getEmitterWorldScale();
	const OGLEffectVec3 * getEmitterLocalPos();
	const OGLEffectQuat * getEmitterLocalRot();
	OGLEffectVec3 * getGravity();
	float * getResistance();
	void setCollisionField(CollisionField *);
	CollisionField * getCollisionField();
	virtual void getSurviveParticleFlag(bool *);
	void setRenderFlag(bool);
	std::vector<ParticleData *,std::allocator<ParticleData *> > m_ParticleData; // 0xBB0
protected:
	long m_ChildSize; // 0xBC8
	long m_ChildNum; // 0xBCC
	D3DDraw * m_pD3DDraw; // 0xBD0
	long m_EmitterFormType; // 0xBD8
	long m_ParticleType; // 0xBDC
	long m_IndexNum; // 0xBE0
	long emitVolume; // 0xBE4
	float accumulateEmitVolume; // 0xBE8
	float intervalTime; // 0xBEC
	long intervalLimitTime; // 0xBF0
	EmitterFormState * m_EmitterFormState[6]; // 0xBF8
	EmitterFormState * m_pEmitterFormState; // 0xC28
	OGLEffectVec3 WorldPos; // 0xC30
	OGLEffectQuat WorldRot; // 0xC48
	OGLEffectVec3 WorldScale; // 0xC60
	OGLEffectMatrix WorldMat; // 0xC78
	OGLEffectMatrix LocalMat; // 0xCC0
	OGLEffectMatrix ActMat; // 0xD08
	OGLEffectVec3 LocalPos; // 0xD50
	OGLEffectQuat LocalRot; // 0xD68
	OGLEffectVec3 PosRand; // 0xD80
	OGLEffectVec3 ParticleScale; // 0xD98
	OGLEffectQuat RotQRand; // 0xDB0
	OGLEffectVec3 Gravity; // 0xDC8
	float resistance; // 0xDE0
	unsigned long m_IDCount; // 0xDE4
	long renderFlag; // 0xDE8
	CollisionField * pCollisionField; // 0xDF0
public:
	Emitter & operator=(const Emitter &);
};
void Emitter::changeState(long __formal); // 0x14002E7C0