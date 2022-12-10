#pragma once

class std::allocator<EffectListNodeData>
{
	typedef void _Not_user_specialized;
	struct value_type;
	typedef EffectListNodeData pointer;
	typedef const EffectListNodeData const_pointer;
	typedef EffectListNodeData reference;
	typedef const EffectListNodeData const_reference;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	struct propagate_on_container_move_assignment;
	struct is_always_equal;
public:
	const EffectListNodeData * address(const EffectListNodeData &);
	EffectListNodeData * address(EffectListNodeData &);
	allocator<EffectListNodeData>(const std::allocator<EffectListNodeData> &);
	allocator<EffectListNodeData>();
	void deallocate(EffectListNodeData *, unsigned long long);
	EffectListNodeData * allocate(unsigned long long, const void *);
	EffectListNodeData * allocate(unsigned long long);
	unsigned long long max_size();
};
struct StlAllocator<EffectListNodeData,&g_EffectHeap0>::rebind<EffectListNodeData>
{
	struct other;
};
enum BlendBufferType
{
	ALPHA_BLEND_BUFFER = 0,
	EFFECT_OUTPUT_BUFFER = 1,
	ALL_BLEND_BUFFER_TYPE = 2,
};
enum EffectRenderPriority
{
	EFFECT_PRIORITY_OPACITY = 0,
	EFFECT_PRIORITY_BLOOM = 1,
	EFFECT_PRIORITY_DISTORTION = 2,
	EFFECT_PRIORITY_TRANSLUCENT_BACK_HUD = 3,
	EFFECT_PRIORITY_TRANSLUCENT_FRONT_HUD = 4,
	ALL_EFFECT_PRIORITY = 5,
};
struct BlendProjData
{
	bool blendProjectionFlag; // 0x0
	OGLVec3 blendProjectionCenterPos; // 0x4
	float projNormalAngLightOffset; // 0x10
	bool fixBlendRatioFlag; // 0x14
	float fixBlendRatio; // 0x18
	OGLMatrix orthoView; // 0x1C
	OGLMatrix orthoProj; // 0x5C
	BlendProjData(BlendProjData &);
	BlendProjData(const BlendProjData &);
	BlendProjData();
};
BlendProjData::BlendProjData(); // 0x14012E7E0
struct EffectTextureData
{
	OGLTexture * ColorTexture1; // 0x0
	OGLTexture * ColorTexture2; // 0x8
	OGLTexture * AlphaTexture1; // 0x10
	OGLTexture * AlphaTexture2; // 0x18
	OGLTexture * NormalTexture; // 0x20
	OGLTexture * CharasDepthTex; // 0x28
	OGLTexture * Chara1DepthTex; // 0x30
	OGLTexture * Chara2DepthTex; // 0x38
	OGLTexture * StageDepthTex; // 0x40
	OGLTexture * DistortionChara1Tex; // 0x48
	OGLTexture * DistortionChara2Tex; // 0x50
	OGLTexture * DistortionStageTex; // 0x58
	OGLTexture * CharaBlurTex; // 0x60
};
class MeshVertexInfoEffectInstancing
{
public:
	Vector4Unaligned m_color; // 0x0
	Vector2Unaligned m_param; // 0x10
	Vector4Unaligned m_texAnimeNumColor; // 0x18
	Vector4Unaligned m_texAnimeNumAlpha; // 0x28
	Vector2Unaligned m_texAnimeNumNormal; // 0x38
	Vector4Unaligned m_lightingCoefficientOfFake; // 0x40
	Matrix4Unaligned m_worldMat; // 0x50
};
struct EffectMeshData
{
	unsigned long primitiveType; // 0x0
	MeshVertexInfoComp * vertexCompBuffer; // 0x8
	float * vColor; // 0x10
	float * vTexCoord; // 0x18
	MeshVertexInfo2D * vertexBuffer; // 0x20
	MeshVertexInfo2D * crossBuffer; // 0x28
	OGLMatrix worldMat; // 0x30
	float * color; // 0x70
	float * uvAnimeNum; // 0x78
	MeshVertexInfoEffectInstancing * instancingBuffer; // 0x80
	unsigned long instanceNum; // 0x88
	unsigned long vertexCount; // 0x8C
	unsigned long renderVertexCount; // 0x90
	unsigned long indexCount; // 0x94
	unsigned long renderIndexCount; // 0x98
	unsigned long * index; // 0xA0
	EffectMeshData();
};
struct EffectConstantData
{
	float actionZOffset; // 0x0
	float zOffset; // 0x4
	float posOffset[3]; // 0x8
	float fillColor[4]; // 0x14
	float distortionScale[2]; // 0x24
	float falloffParam; // 0x2C
	float blurUV[4]; // 0x30
	unsigned long playerNum; // 0x40
	long renderOpt; // 0x44
	long particleType; // 0x48
	float cameraPos[3]; // 0x4C
	float color1TexCoord[4]; // 0x58
	float color2TexCoord[4]; // 0x68
	float alpha1TexCoord[4]; // 0x78
	float alpha2TexCoord[4]; // 0x88
	float normalTexCoord[4]; // 0x98
	float * uvColor1Size; // 0xA8
	float * uvColor2Size; // 0xB0
	float * uvAlpha1Size; // 0xB8
	float * uvAlpha2Size; // 0xC0
	float * uvNormalSize; // 0xC8
	float lightDiffuse[4]; // 0xD0
	float lightPosition[4]; // 0xE0
	float lightAttenuation[4]; // 0xF0
	float lightIntensity[4]; // 0x100
	float bufferscale; // 0x110
	float influenceOfLight; // 0x114
	float ignoreUvMirror; // 0x118
	EffectConstantData();
};