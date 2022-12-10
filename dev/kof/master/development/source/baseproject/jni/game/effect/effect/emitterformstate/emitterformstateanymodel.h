#pragma once

class RandomNumbers :
	RandomMT
{
public:
	RandomNumbers(const RandomNumbers &);
	RandomNumbers();
	~RandomNumbers();
	long uniformRandomNumbers();
	OGLVec4 widthUniformrandomNumbers(OGLVec4);
	OGLVec3 widthUniformrandomNumbers(OGLVec3);
	RandomNumbers & operator=(const RandomNumbers &);
};
class EmitterFormStateAnyModel :
	EmitterFormState
{
public:
	EmitterFormStateAnyModel(const EmitterFormStateAnyModel &);
	EmitterFormStateAnyModel();
	virtual ~EmitterFormStateAnyModel();
	void terminate();
	bool LoadFigureData(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *);
	virtual bool LoadFigureData(const char *);
	OGLVec3 GetGenerateParticlePos(OGLVec3 *, OGLVec3 *, long, RandomNumbers *);
	OGLVec3 GetPosOfGenerationTypePoint(RandomNumbers *);
	OGLVec3 GetPosOfGenerationTypeEdge(RandomNumbers *);
	OGLVec3 GetPosOfGenerationTypeFace(RandomNumbers *);
private:
	OGLFigure * m_ModelData; // 0x8
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> m_Figure; // 0x10
public:
	EmitterFormStateAnyModel & operator=(const EmitterFormStateAnyModel &);
};