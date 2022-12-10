#pragma once

class CollisionField :
	Field
{
public:
	CollisionField(const CollisionField &);
	CollisionField();
	virtual ~CollisionField();
	virtual void ownInitialize();
	void updateForceFieldData(bool, const OGLMatrix &, ParticleEmitter *, float);
	virtual void updateForceFieldData(bool, const OGLMatrix &, Effect *, float);
	void localCollision(bool, const OGLMatrix &, ParticleEmitter *, float);
	void worldCollision(bool, const OGLMatrix &, ParticleEmitter *, float);
	void collisionBehavior(OGLEffectVec3 *, OGLEffectQuat *, ParticleData *, bool, const OGLMatrix &, ParticleEmitter *, float);
	CollisionField & operator=(const CollisionField &);
};