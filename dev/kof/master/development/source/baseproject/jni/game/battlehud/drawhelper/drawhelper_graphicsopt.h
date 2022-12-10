#pragma once

class DrawHelperGraphicsOpt :
	DrawHelper
{
private:
	DrawHelper::ImageInfo * m_pImages; // 0x18
	long m_imageCount; // 0x20
	unsigned long m_colorARGB; // 0x24
public:
	DrawHelperGraphicsOpt(const DrawHelperGraphicsOpt &);
	DrawHelperGraphicsOpt();
	virtual ~DrawHelperGraphicsOpt();
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
public:
	DrawHelperGraphicsOpt & operator=(const DrawHelperGraphicsOpt &);
};