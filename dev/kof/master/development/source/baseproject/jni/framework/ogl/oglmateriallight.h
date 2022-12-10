#pragma once

class OGLMaterialLight
{
public:
	unsigned long m_uiAttrFlg; // 0x0
	float m_fAmbient[4]; // 0x4
	float m_fAmbientFactor; // 0x14
	float m_fDiffuse[4]; // 0x18
	float m_fDiffuseFactor; // 0x28
	float m_fSpecular[4]; // 0x2C
	float m_fSpecularFactor; // 0x3C
	float m_fEmission[4]; // 0x40
	float m_fEmissionFactor; // 0x50
	float m_fNormal[4]; // 0x54
	float m_fBump[4]; // 0x64
	float m_fBumpFactor; // 0x74
	float m_fTransparent[4]; // 0x78
	float m_fTransparentFactor; // 0x88
	float m_fShininess; // 0x8C
	float m_fReflection[4]; // 0x90
	float m_fReflectionFactor; // 0xA0
	OGLMaterialLight();
	~OGLMaterialLight();
	void initialize();
	void finalize();
	void set(OGLMaterialLight *);
	void setAmbient(float, float, float, float);
	void setAmbient(float *);
	void setDiffuse(float, float, float, float);
	void setDiffuse(float *);
	void setSpecular(float, float, float, float);
	void setSpecular(float *);
	void setEmission(float, float, float, float);
	void setEmission(float *);
	void setNormal(float, float, float, float);
	void setNormal(float *);
	void setBump(float, float, float, float);
	void setBump(float *);
	void setTransparent(float, float, float, float);
	void setTransparent(float *);
	void setShininess(float);
	void setMaterial(float *, float *, float *, float *, float);
	void setMaterial(float *, float *, float *, float *);
	void update();
};