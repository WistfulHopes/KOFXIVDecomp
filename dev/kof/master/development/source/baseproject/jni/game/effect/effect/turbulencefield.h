#pragma once

class TurbulenceField :
	Field
{
public:
	TurbulenceField(const TurbulenceField &);
	TurbulenceField();
	virtual ~TurbulenceField();
	virtual void ownInitialize();
	void updateForceFieldData(bool, const OGLMatrix &, ParticleEmitter *, float);
	virtual void updateForceFieldData(bool, const OGLMatrix &, Effect *, float);
	TurbulenceField & operator=(const TurbulenceField &);
};