#pragma once

class OGLCurveData
{
public:
	long curveType; // 0x0
	long dimension; // 0x4
	long order; // 0x8
	long stepCount; // 0xC
	long KnotCount; // 0x10
	long * KnotPoints; // 0x18
	long CtrlCount; // 0x20
	float * CtrlPoints; // 0x28
	OGLCurveData();
	~OGLCurveData();
};
OGLCurveData::OGLCurveData(); // 0x140055C10
OGLCurveData::~OGLCurveData(); // 0x140055C20
class OGLCurve
{
public:
	OGLCurveData * m_CurveData; // 0x0
	long m_CurveCount; // 0x8
	long cFormatType; // 0xC
	OGLCurve();
	~OGLCurve();
	void initialize();
	void finalize();
	static OGLCurve * createCurve(unsigned char *, long);
	static OGLCurve * createCurve(const char *);
	bool loadOncData(unsigned char *, long);
	bool loadOncData(const char *);
};