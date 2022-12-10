#pragma once

class Image :
	OGLTexture
{
public:
	Image(const Image &);
	Image(OGLTexture *);
	Image();
	virtual ~Image();
	static Image * createImage(const char *, long, long, unsigned char *, long);
	static Image * createImageBuf(unsigned char *, long, long, unsigned char *, long);
	static Image * createImageBuf2(unsigned char *, long, long, long, long);
	long loadImage(const char *, long, long, unsigned char *, long);
	long loadImageBuf(unsigned char *, long, long, unsigned char *, long);
	long loadImageBuf2(unsigned char *, long, long, long, long);
	long loadSubImageBuf(unsigned char *, long, long, unsigned char *, long);
	void dispose();
	Image & operator=(const Image &);
};
class DrawHelper :
	ErrorChecker
{
	struct ERenderMode;
	struct ERenderAlign;
	struct DrawParams;
	struct ImageInfo;
private:
	long m_imageID; // 0x10
public:
	void changeBufferSize(long, DrawHelper::ERenderMode::Type, long);
	void draw(long, long, long);
	void draw(long, long, long, const _C_CONV &);
	void draw(long, long, long, const DrawHelper::DrawParams &);
	void draw(long, long, long, const _C_CONV &, const DrawHelper::DrawParams &, bool);
	void drawStack();
	void setClip(long, long, long, long);
	void clearClip();
	long getImageID(Image *);
protected:
	void releaseImpl();
	DrawHelper::ImageInfo * createImageInfo(long);
	DrawHelper::ImageInfo * getImageInfo(long);
public:
	DrawHelper(const DrawHelper &);
	DrawHelper();
	virtual ~DrawHelper();
	void release();
	long setupImage(Image *);
	static long convertRenderMode(DrawHelper::ERenderMode::Type);
	DrawHelper & operator=(const DrawHelper &);
};
struct DrawHelper::ERenderMode
{
	enum Type
	{
		ALPHA = 0,
		ADD = 1,
		_MAX = 2,
		_START = 0,
		DEFAULT = 0,
	};
};
struct DrawHelper::ERenderAlign
{
	enum Type
	{
		Left = 0,
		Right = 1,
		Center = 2,
	};
};
struct DrawHelper::DrawParams
{
	DrawHelper::ERenderMode::Type renderMode; // 0x0
	DrawHelper::ERenderAlign::Type align; // 0x4
	float scaleW; // 0x8
	float scaleH; // 0xC
	float alpha; // 0x10
	bool bMirror; // 0x14
	unsigned long colorARGB; // 0x18
	DrawParams();
};
struct DrawHelper::ImageInfo
{
	Image * pImage; // 0x0
	ImageInfo();
	void release();
};