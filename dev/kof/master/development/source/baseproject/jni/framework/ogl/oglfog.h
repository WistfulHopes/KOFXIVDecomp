#pragma once

class OGLFog
{
	enum CALC_TYPE
	{
		CALC_ADD = 0,
		CALC_MUL = 1,
	};
public:
	long m_Mode; // 0x0
	float m_Color[4]; // 0x4
	float m_fStart; // 0x14
	float m_fEnd; // 0x18
	unsigned char m_bOn; // 0x1C
	OGLFog::CALC_TYPE m_calcType; // 0x20
	float m_fUpDistance; // 0x24
	float m_fUpDistanceExp; // 0x28
	float m_fUpHeight; // 0x2C
	float m_fUpHeightExp; // 0x30
	float m_fUpStrength; // 0x34
	float m_fDownDistance; // 0x38
	float m_fDownDistanceExp; // 0x3C
	float m_fDownHeight; // 0x40
	float m_fDownHeightExp; // 0x44
	float m_fDownStrength; // 0x48
	float m_UpColour[4]; // 0x4C
	float m_DownColour[4]; // 0x5C
	float m_fShaderDistDivisor; // 0x6C
	float m_fShaderUpDistance; // 0x70
	float m_fShaderUpHeight; // 0x74
	float m_fShaderDownDistance; // 0x78
	float m_fShaderExtraHeightSetting; // 0x7C
	OGLFog();
	~OGLFog();
	void initialize();
	void finalize();
	void clear();
	void set(OGLFog *);
	void setMode(long);
	void setColor(float, float, float, float);
	void setColor(float *);
	void setStart(float);
	void setEnd(float);
	void setLinear(float *, float, float);
	void setLinear(float, float);
	void setParam(long, float *, float, float);
	void setUpDistance(float);
	void setUpDistanceExp(float);
	void setUpHeight(float);
	void setUpHeightExp(float);
	void setUpStrength(float);
	void setUpFog(float, float, float, float, float, float *);
	void setDownDistance(float);
	void setDownDistanceExp(float);
	void setDownHeight(float);
	void setDownHeightExp(float);
	void setDownStrength(float);
	void setDownFog(float, float, float, float, float, float *);
	void setOn(unsigned char);
	void setCalcType(OGLFog::CALC_TYPE);
	unsigned char getOn();
	OGLFog::CALC_TYPE getCalcType();
	void setShaderUniforms(const float, const float, const float, const float, const float);
};
enum OGLFog::CALC_TYPE
{
	CALC_ADD = 0,
	CALC_MUL = 1,
};