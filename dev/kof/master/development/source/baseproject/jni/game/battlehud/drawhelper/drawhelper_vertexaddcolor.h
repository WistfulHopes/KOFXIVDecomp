#pragma once

class MeshVertexInfo2D
{
public:
	Vector3Unaligned m_position; // 0x0
	Vector3Unaligned m_normal; // 0xC
	Vector4Unaligned m_tangent; // 0x18
	Vector4Unaligned m_color; // 0x28
	Vector2Unaligned m_texture; // 0x38
};
class DrawHelperVertexAddColor :
	DrawHelper
{
	struct RenderInfo;
private:
	DrawHelperVertexAddColor::RenderInfo * m_pRenderInfos; // 0x18
	long m_renderInfoCount; // 0x20
	unsigned long * m_pIndexces; // 0x28
	long m_indexSize; // 0x30
	struct <unnamed-type-m_clip>;
	DrawHelperVertexAddColor::<unnamed-type-m_clip> m_clip; // 0x34
	float m_depth; // 0x48
public:
	DrawHelperVertexAddColor(const DrawHelperVertexAddColor &);
	DrawHelperVertexAddColor();
	virtual ~DrawHelperVertexAddColor();
	virtual void changeBufferSize(long, DrawHelper::ERenderMode::Type, long);
	virtual void draw(long, long, long, const _C_CONV &, const DrawHelper::DrawParams &, bool);
	virtual void drawStack();
	virtual void setClip(long, long, long, long);
	virtual void clearClip();
	virtual long getImageID(Image *);
protected:
	virtual void releaseImpl();
	virtual DrawHelper::ImageInfo * createImageInfo(long);
	virtual DrawHelper::ImageInfo * getImageInfo(long);
	void drawImage(OGLTexture *, MeshVertexInfo2D *, unsigned long *, long, long, const float *);
public:
	DrawHelperVertexAddColor & operator=(const DrawHelperVertexAddColor &);
};
struct DrawHelperVertexAddColor::RenderInfo
{
	DrawHelper::ImageInfo image; // 0x0
	struct Buffer;
	DrawHelperVertexAddColor::RenderInfo::Buffer buffers[2]; // 0x8
	RenderInfo();
};
struct DrawHelperVertexAddColor::RenderInfo::Buffer
{
	MeshVertexInfo2D * pVertices; // 0x0
	long size; // 0x8
	long stackCount; // 0xC
	long shortageSize; // 0x10
	Buffer();
};
struct DrawHelperVertexAddColor::<unnamed-type-m_clip>
{
	long sx; // 0x0
	long sy; // 0x4
	long ex; // 0x8
	long ey; // 0xC
	bool bClip; // 0x10
};