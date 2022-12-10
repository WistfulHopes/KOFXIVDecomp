#pragma once

class EmitterFormStateCurve :
	EmitterFormState
{
public:
	EmitterFormStateCurve(const EmitterFormStateCurve &);
	EmitterFormStateCurve();
	virtual ~EmitterFormStateCurve();
	virtual void cleanup();
	float calcKnot(long, long);
	OGLVec3 GetGenerateParticlePos(OGLVec3 *, OGLVec3 *, long, long);
	OGLVec3 GetGenerateParticlePos(OGLVec3 *, OGLVec3 *);
	OGLVec3 calcParticlePos(OGLVec3 *, OGLVec3 *, float *, float *, float);
	virtual bool LoadFigureData(const char *);
	OGLVec3 NURBSCurve(float);
	float BasisSplineBasisFunction(float, long, long);
	void setStartPosKnot(float);
	void setAddKnot(float);
	void setRepeatFlag(bool);
	void setAge(float);
	void setEmitStartTime(long);
private:
	const OGLCurve * m_CurveData; // 0x8
	extension::BasicFutureObject<OGLCurve,void> m_futureCurve; // 0x10
	bool m_RepeatFlag; // 0x20
	long m_MaxKnot; // 0x24
	long m_MinKnot; // 0x28
	float m_StartKnot; // 0x2C
	float m_PosKnot; // 0x30
	float m_AddKnot; // 0x34
	float m_age; // 0x38
	long m_emitStartTime; // 0x3C
public:
	EmitterFormStateCurve & operator=(const EmitterFormStateCurve &);
};