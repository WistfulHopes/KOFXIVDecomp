#pragma once

class EffectPs4System
{
public:
	EffectPs4System(const EffectPs4System &);
	EffectPs4System();
	~EffectPs4System();
	void initialize();
	void terminate();
	void setRenderTarget();
	void upSample();
	void bilinearUpSampling();
	void downSample();
	void toneMapping();
	void bloomEffect();
	void combineBlendBuffer(bool);
	void combineBlendBufferCompute();
	void combineBlendBufferPixcel(long, OGLTexture *, OGLTexture *);
	void renderEffectBuffer();
	void renderEffectFrontHud();
	void debugDraw();
	void setBufferDownScale(float);
	float getBufferDownScale();
private:
	float m_bufferDownScale; // 0x8
	float blendTexWidth; // 0xC
	float blendTexHeight; // 0x10
	MeshVertexInfo2D * ppVertexInfo; // 0x18
public:
	EffectPs4System & operator=(const EffectPs4System &);
};