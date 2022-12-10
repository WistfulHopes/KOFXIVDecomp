#pragma once

class DrawHelperShaderFX :
	DrawHelper
{
	struct RenderInfo;
private:
	DrawHelperShaderFX::RenderInfo * m_pRenderInfos; // 0x18
	long m_renderInfoCount; // 0x20
	unsigned long * m_pIndexBuffer; // 0x28
	long m_indexBufferSize; // 0x30
	struct <unnamed-type-m_clip>;
	DrawHelperShaderFX::<unnamed-type-m_clip> m_clip; // 0x34
	float m_depth; // 0x48
public:
	DrawHelperShaderFX(const DrawHelperShaderFX &);
	DrawHelperShaderFX();
	virtual ~DrawHelperShaderFX();
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
private:
	unsigned long * setIndexBuffer(unsigned long *, long);
public:
	DrawHelperShaderFX & operator=(const DrawHelperShaderFX &);
};
struct DrawHelperShaderFX::RenderInfo
{
	DrawHelper::ImageInfo image; // 0x0
	struct Buffer;
	DrawHelperShaderFX::RenderInfo::Buffer buffers[2]; // 0x8
	RenderInfo();
};
struct DrawHelperShaderFX::RenderInfo::Buffer
{
	void * pVertexes; // 0x0
	long size; // 0x8
	long renderSize; // 0xC
	Buffer();
};
struct DrawHelperShaderFX::<unnamed-type-m_clip>
{
	long sx; // 0x0
	long sy; // 0x4
	long ex; // 0x8
	long ey; // 0xC
	bool bClip; // 0x10
};