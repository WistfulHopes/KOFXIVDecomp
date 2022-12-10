#pragma once

class AttractionField :
	Field
{
public:
	AttractionField(const AttractionField &);
	AttractionField();
	virtual ~AttractionField();
	virtual void ownInitialize();
	void updateForceFieldData(bool, const OGLMatrix &, ParticleEmitter *, float);
	virtual void updateForceFieldData(bool, const OGLMatrix &, Effect *, float);
	AttractionField & operator=(const AttractionField &);
};