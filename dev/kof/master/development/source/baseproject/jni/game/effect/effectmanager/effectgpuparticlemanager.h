#pragma once

class EffectGpuParticleManager
{
public:
	EffectGpuParticleManager(const EffectGpuParticleManager &);
	EffectGpuParticleManager();
	~EffectGpuParticleManager();
	void initialize();
	void terminate();
	void update();
	void render(long);
	ParticleData * newParticlePtr(long);
	void deleteParticlePtr(ParticleData *);
	void createRandomTexture();
private:
	EffectMeshData m_EffectMeshData; // 0x8
	EffectConstantData m_EffectConstData; // 0xB0
	EffectTextureData m_TextureData; // 0x1D0
	BlendProjData m_BlendProjData; // 0x238
	void * DefaultTex; // 0x2D8
	void * DefaultFig; // 0x2E0
public:
	EffectGpuParticleManager & operator=(const EffectGpuParticleManager &);
};