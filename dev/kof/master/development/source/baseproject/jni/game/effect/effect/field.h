#pragma once

class Field :
	Effect
{
public:
	Field(const Field &);
	Field();
	virtual ~Field();
	virtual void mainUpdate(ActionArgument &);
	virtual void ownUpdate(bool, const OGLMatrix &, float);
	void updateForceField(bool, const OGLMatrix &, Effect *, float);
	void updateForceFieldData(bool, const OGLMatrix &, Effect *, float);
	Field & operator=(const Field &);
};