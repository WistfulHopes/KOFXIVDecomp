#pragma once

class DrawHelperVertexBuffer :
	DrawHelper
{
	struct RenderInfo;
private:
	DrawHelperVertexBuffer::RenderInfo * m_pRenderInfos; // 0x18
	long m_renderInfoCount; // 0x20
	unsigned long * m_pIndexBuffer; // 0x28
	long m_indexBufferSize; // 0x30
	struct <unnamed-type-m_clip>;
	DrawHelperVertexBuffer::<unnamed-type-m_clip> m_clip; // 0x34
	float m_depth; // 0x48
public:
	DrawHelperVertexBuffer(const DrawHelperVertexBuffer &);
	DrawHelperVertexBuffer();
	virtual ~DrawHelperVertexBuffer();
	virtual void changeBufferSize(long, DrawHelper::ERenderMode::Type, long);
private:
	void draw(DrawHelper::ERenderMode::Type, DrawHelperVertexBuffer::RenderInfo &);
public:
	virtual void draw(long, long, long, const _C_CONV &, const DrawHelper::DrawParams &, bool);
	virtual void drawStack();
	virtual void setClip(long, long, long, long);
	virtual void clearClip();
	virtual long getImageID(Image *);
	void drawConv(long, long, long, const _C_CONV &, const DrawHelper::DrawParams &, bool);
protected:
	virtual void releaseImpl();
	virtual DrawHelper::ImageInfo * createImageInfo(long);
	virtual DrawHelper::ImageInfo * getImageInfo(long);
public:
	DrawHelperVertexBuffer & operator=(const DrawHelperVertexBuffer &);
};
struct DrawHelperVertexBuffer::RenderInfo
{
	DrawHelper::ImageInfo image; // 0x0
	struct Buffer;
	DrawHelperVertexBuffer::RenderInfo::Buffer buffers[2]; // 0x8
	struct Stack;
	DrawHelperVertexBuffer::RenderInfo::Stack * pStacks; // 0x48
	long stackCount; // 0x50
	long useStackCount; // 0x54
	RenderInfo();
};
struct DrawHelperVertexBuffer::RenderInfo::Buffer
{
	float * pVertexes; // 0x0
	float * pTextures; // 0x8
	long size; // 0x10
	unsigned long renderColor; // 0x14
	float renderAlpha; // 0x18
	long renderSize; // 0x1C
	Buffer();
};
struct DrawHelperVertexBuffer::RenderInfo::Stack
{
	long rx; // 0x0
	long ry; // 0x4
	DrawHelper::DrawParams drawParans; // 0x8
	_C_CONV rect; // 0x24
	Stack();
};
struct DrawHelperVertexBuffer::<unnamed-type-m_clip>
{
	long sx; // 0x0
	long sy; // 0x4
	long ex; // 0x8
	long ey; // 0xC
	bool bClip; // 0x10
};