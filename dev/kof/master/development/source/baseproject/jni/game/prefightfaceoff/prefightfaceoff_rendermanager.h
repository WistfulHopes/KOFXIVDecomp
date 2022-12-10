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
class PreFightFaceOff::UI :
	ErrorChecker
{
private:
	extension::BasicFutureObject<Image,extension::FutureImageOption> m_image; // 0x10
	bool m_bResourcesCreated; // 0x20
public:
	UI(const PreFightFaceOff::UI &);
	UI();
	virtual ~UI();
	void release();
	bool isResoucesCreated();
	bool create();
	void update(float);
	void draw();
	PreFightFaceOff::UI & operator=(const PreFightFaceOff::UI &);
};
class PreFightFaceOff::RenderManager :
	ErrorChecker
{
private:
	bool m_bInitialize; // 0x10
	OGLTexture * m_pTextureCameraViewP1; // 0x18
	OGLTexture * m_pTextureCameraViewP2; // 0x20
	PreFightFaceOff::MessageInfo m_messageInfo; // 0x28
	bool m_bMessageRefresh; // 0x40
	bool m_updateStageViewTextures; // 0x41
	extension::GFXIText * m_pGfxText; // 0x48
	float m_textAnimationTimer; // 0x50
	OGLVec3 m_cameraPos; // 0x54
	bool m_bRenderPlayer1Screen; // 0x60
	bool m_bRenderScreen[2]; // 0x61
	OGLMatrix m_originalProjections[5]; // 0x64
	long m_originalDislpayX; // 0x1A4
	long m_originalDislpayWidth; // 0x1A8
	bool m_bResourcesLoaded; // 0x1AC
	extension::BasicFutureObject<Image,extension::FutureImageOption> m_imageHeart; // 0x1B0
	extension::BasicFutureObject<Image,extension::FutureImageOption> m_imageNote; // 0x1C0
	struct EUseIcon;
	PreFightFaceOff::RenderManager::EUseIcon::Type m_useIconType; // 0x1D0
	long m_useIconPosX; // 0x1D4
	long m_useIconPosY; // 0x1D8
	float m_useIconAlpha; // 0x1DC
	PreFightFaceOff::UI * m_pUI; // 0x1E0
public:
	RenderManager(const PreFightFaceOff::RenderManager &);
	RenderManager();
	virtual ~RenderManager();
	void initialize();
	bool isInitialized();
	void update();
	void draw();
	void changeMessage(const PreFightFaceOff::MessageInfo &);
	void skipScene();
private:
	void release();
	bool isActived();
	void renderTextureByCamerView();
	void saveViewAndProjectionParams();
	void loadViewAndProjectionParams();
	void setMessage(const char *, const char *);
	void renderMessageIcons();
public:
	PreFightFaceOff::RenderManager & operator=(const PreFightFaceOff::RenderManager &);
};
struct PreFightFaceOff::RenderManager::EUseIcon
{
	enum Type
	{
		None = 0,
		Heart = 1,
		Note = 2,
	};
};