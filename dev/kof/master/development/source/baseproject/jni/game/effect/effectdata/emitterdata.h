#pragma once

class EmitterData :
	EffectData
{
public:
	EmitterData(const EmitterData &);
	EmitterData();
	virtual ~EmitterData();
protected:
	OGLFigure * m_ModelData; // 0x88
public:
	EmitterData & operator=(const EmitterData &);
};