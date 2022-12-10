#pragma once

class OGLTexture
{
public:
	long m_Width; // 0x8
	long m_Height; // 0xC
	unsigned long m_TexID; // 0x10
	long m_TexParam; // 0x14
	unsigned char m_Transparent; // 0x18
	long m_TexFormat; // 0x1C
	long m_defaultFBO; // 0x20
	ImageDataInfo m_FileInfo; // 0x28
	unsigned char m_bResume; // 0x38
	unsigned char m_bSubTexture; // 0x39
private:
	void loadIndexObmData(unsigned char *, unsigned char *, long);
	void loadDirectObmData(unsigned char *, long);
	void loadCompressedObmData(unsigned char *, long, long);
	long loadObmData(unsigned char *, long, unsigned char *, long);
	long loadBmpData(unsigned char *, long, unsigned char *, long);
	long loadPngData(unsigned char *, long, unsigned char *, long);
	long loadDDSData(unsigned char *, long, unsigned char *, long);
	long loadPvrData(unsigned char *, long, long);
	long loadOstData(unsigned char *, long, unsigned char *, long);
public:
	OGLTexture(const OGLTexture &);
	OGLTexture();
	~OGLTexture();
	void initialize();
	void finalize();
	static OGLTexture * createTexture(const char *, long, long, unsigned char *, long);
	static OGLTexture * createCubeTexture(const char * *, long, long, unsigned char *, long);
	static OGLTexture * createTextureBuf(unsigned char *, long, long, unsigned char *, long);
	static OGLTexture * createTextureBuf2(unsigned char *, long, long, long, long);
	long loadTexture(const char *, long, long, unsigned char *, long);
	long loadTexture2(const char *, long, long, unsigned char *, long);
	long loadCubeTexture(const char * *, long, long, unsigned char *, long);
	long loadTextureBuf(unsigned char *, long, long, unsigned char *, long);
	long loadTextureBuf2(unsigned char *, long, long, long, long);
	long loadSubTextureBuf(unsigned char *, long, long, unsigned char *, long);
	long getWidth();
	long getHeight();
	void release();
	void setTransparentEnabled(unsigned char);
	unsigned char getTransparentEnabled();
	void capture(long, long, long, long, long);
	void setParameter(long, long);
	long getParameter();
	long getID();
	void setFrameBuffer();
	void resetFrameBuffer();
	void releaseFrameBuffer();
	void setFileInfo(const char *, unsigned char, unsigned char, long);
	void setFileInfo(const ImageDataInfo *);
	void clear();
	void suspend();
	unsigned char resume();
	void setResume();
	unsigned char isNeedResume();
	void clearColor(float *);
	void clearColor(float, float, float, float);
	unsigned long m_FrameBufferID; // 0x3C
	unsigned long m_TexID2; // 0x40
	void createSync();
	__GLsync * m_sync; // 0x48
	long createFrameBuffer(long, long, long);
	OGLTexture & operator=(const OGLTexture &);
};
class OGLSprite
{
private:
	OGLRender * m_pRender; // 0x0
	float m_Scale; // 0x8
	long m_Operator; // 0xC
	long m_Color; // 0x10
	enum FLIP
	{
		FLIP_NONE = 0,
		FLIP_HORIZONTAL = 1,
		FLIP_VERTICAL = 2,
		FLIP_ROTATE = 3,
		FLIP_ROTATE_LEFT = 4,
		FLIP_ROTATE_RIGHT = 5,
		FLIP_ROTATE_RIGHT_HORIZONTAL = 6,
		FLIP_ROTATE_RIGHT_VERTICAL = 7,
	};
	enum <unnamed-enum-OP_REPL>
	{
		OP_REPL = 0,
		OP_ADD = 1,
		OP_SUB = 2,
		OP_ALPHA = 3,
	};
public:
	void initialize(OGLRender *);
	void finalize();
	void setScale(float);
	void begin();
	void drawImage(OGLTexture *, float, float, float, float, float, float, float, float, float, long);
	void drawImage(OGLTexture *, float *, float, float, float, float);
	void drawConv(OGLTexture * *, float, float, float, const short *, long, const _C_CONV *, const short *, float, float, float, float, float, float, long);
	void drawConv(OGLTexture * *, float, float, float, const short *, long, const _C_CONV *, float, float, float, float, float, float, long);
	void drawConv(OGLTexture *, float, float, float, const _C_CONV *, float, float, float, float, float, float, long);
	void drawConv(OGLTexture * *, float, float, float, const short *, long, const _C_CONV *, const short *, long);
	void drawConv(OGLTexture * *, float, float, float, const short *, long, const _C_CONV *, long);
	void drawConv(OGLTexture *, float, float, float, const _C_CONV *, long);
	void setRenderMode(long, long);
};