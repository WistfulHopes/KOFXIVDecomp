#pragma once

struct EffectFutureTexture
{
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * ColorTexture1; // 0x0
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * ColorTexture2; // 0x8
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * AlphaTexture1; // 0x10
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * AlphaTexture2; // 0x18
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * NormalTexture; // 0x20
};
struct ParticleVertexBuffer
{
	OGLVec3 position; // 0x0
	OGLVec3 normal; // 0xC
	OGLVec3 tangent; // 0x18
	OGLVec4 color; // 0x24
	OGLVec2 uv; // 0x34
	ParticleVertexBuffer(ParticleVertexBuffer &);
	ParticleVertexBuffer(const ParticleVertexBuffer &);
	ParticleVertexBuffer();
};
struct EffectInstancingData
{
	Vector4Unaligned m_color; // 0x0
	Vector2Unaligned m_param; // 0x10
	Vector4Unaligned m_texAnimeNumColor; // 0x18
	Vector4Unaligned m_texAnimeNumAlpha; // 0x28
	Vector2Unaligned m_texAnimeNumNormal; // 0x38
	Vector4Unaligned m_lightingCoefficientOfFake; // 0x40
};
class ParticleTypeState
{
public:
	ParticleTypeState(const ParticleTypeState &);
	ParticleTypeState();
	~ParticleTypeState();
	void initialize();
	void terminate();
	void loadTexture(const char *, EffectTextureType);
	void loadAppTexture();
	void loadFigureToCPUMem(const char *);
	void loadFigureToGPUMem(const char *);
	void loadFigure(const char *);
	void InitVertexBuffer(std::vector<ParticleData *,std::allocator<ParticleData *> > *, EffectData *);
	void calcWorldMat(ParticleData *, EffectData *);
	void calcWorldMatInBT(ParticleData *, EffectData *);
	void UpdateParticleTypeState(EffectUpdateBufferArgument *);
	void UpdateParticleTypeStateInBT(EffectUpdateBufferArgument *);
	void allocateVertexMemory(EffectUpdateArgument *);
	bool UpdateVertexBufferInstancing(EffectUpdateBufferArgument *);
	void UpdateVertexBuffer(EffectUpdateBufferArgument *);
	void UpdateVertexBufferInBT(EffectUpdateBufferArgument *);
	long GetAnimationNum(ParticleData *, EffectData *, EffectTextureType);
	void followCamera(ParticleData *, OGLEffectMatrix *, EffectData *);
	void rotationBillboard(ParticleData *, OGLEffectMatrix *, EffectData *);
	void rotationAxisBillboard(ParticleData *, OGLEffectMatrix *, EffectData *, long);
	bool RenderSettingInSt(EffectData *);
	bool SetRenderDataInSt(EffectData *);
	bool RenderSetting(EffectData *, long *, long *);
	bool SetRenderData(EffectData *, long *, float *, long *);
	bool RenderErrorCheck(EffectData *, long, float);
	void Render(EffectRenderArgument *);
	void setEmitterAndData(Effect *, EffectData *);
	void setTexture(EffectTextureData *, EffectTextureType, OGLTexture *);
	OGLTexture * getTexture(EffectTextureData *, EffectTextureType);
	void setFutureTexture(EffectFutureTexture *, EffectTextureType, extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *);
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * getFutureTexture(EffectFutureTexture *, EffectTextureType);
	void setTexAnimeNum(ParticleData *, EffectData *, EffectInstancingData *);
protected:
	ParticleEmitter * m_pParticleEmitter; // 0x8
	ParticleEmitterData * m_pParticleEmitterData; // 0x10
	long m_VertexMemoryCount[2]; // 0x18
	long m_IndexMemoryCount[2]; // 0x20
	EffectMeshData m_EffectMeshData[2]; // 0x28
	EffectConstantData m_EffectConstData; // 0x178
	EffectTextureData m_TextureData; // 0x298
	EffectFutureTexture m_FutureTexture; // 0x300
	OGLFigure * m_FigureData; // 0x328
	float uvColor1Size[2]; // 0x330
	float uvColor2Size[2]; // 0x338
	float uvAlpha1Size[2]; // 0x340
	float uvAlpha2Size[2]; // 0x348
	float uvNormalSize[2]; // 0x350
	float * uvAnimeNum; // 0x358
	float * vertex; // 0x360
	float * texCoord; // 0x368
	float * color; // 0x370
	float quadVertex[18]; // 0x378
	float quadTexCoord[12]; // 0x3C0
	float quadColor[24]; // 0x3F0
	float quadIndex[6]; // 0x450
	float quadMirrorIndex[6]; // 0x468
	long m_prevBufferNum; // 0x480
	bool m_BillboardFlag; // 0x484
public:
	ParticleTypeState & operator=(const ParticleTypeState &);
};