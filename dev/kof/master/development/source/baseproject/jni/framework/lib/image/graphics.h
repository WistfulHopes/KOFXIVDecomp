#pragma once

class Font
{
public:
	Font();
private:
	Font(const Font &);
	Font & operator=(const Font &);
public:
	HFONT__ * hFont; // 0x8
	long m_Size; // 0x10
	long m_Type; // 0x14
	wchar_t * m_Name; // 0x18
	static HDC__ * fontHDC; // 0xFFFFFFFFFFFFFFFF
	static HBITMAP__ * fontBMP; // 0xFFFFFFFFFFFFFFFF
	static HBITMAP__ * fontBMPOld; // 0xFFFFFFFFFFFFFFFF
	static long fontCounter; // 0xFFFFFFFFFFFFFFFF
	enum SIZE_KIND
	{
		SMALL = 0,
		MEDIUM = 1,
		LARGE = 2,
		MINIMUM = 3,
		SIZE_KIND_MAX = 4,
	};
	enum <unnamed-enum-TYPE_DEFAULT>
	{
		TYPE_DEFAULT = 0,
		TYPE_HEADING = 1,
		FACE_SYSTEM = 1895825408,
		FACE_MONOSPACE = 1912602624,
		FACE_PROPORTIONAL = 1929379840,
		STYLE_PLAIN = 1880096768,
		STYLE_BOLD = 1880162304,
		STYLE_ITALIC = 1880227840,
		STYLE_BOLDITALIC = 1880293376,
		SIZE_SMALL = 1879048448,
		SIZE_MEDIUM = 1879048704,
		SIZE_LARGE = 1879048960,
		SIZE_TINY = 1879049216,
	};
	~Font();
	static Font * createFont(long, long, float);
	static Font * createFont(long, float);
	static Font * getFont(long);
	static Font * getDefaultFont();
	static void setDefaultFont(Font *);
	HFONT__ * getUIFont();
	long getFontSize();
	long getFontType();
	long getAscent();
	long getDescent();
	long getHeight();
	long getLineHeight();
	long stringWidth(const char *);
};
class Graphics
{
public:
	Graphics(OGLRender *);
	Graphics();
private:
	Graphics(const Graphics &);
	Graphics & operator=(const Graphics &);
	Font * m_pFont; // 0x8
	long m_OriginX; // 0x10
	long m_OriginY; // 0x14
	long m_OriginW; // 0x18
	long m_OriginH; // 0x1C
	long m_ClipX; // 0x20
	long m_ClipY; // 0x24
	long m_ClipW; // 0x28
	long m_ClipH; // 0x2C
	unsigned long m_Color; // 0x30
	unsigned long m_StackColor; // 0x34
	long m_FlipMode; // 0x38
	long m_Operator; // 0x3C
	long m_SrcRatio; // 0x40
	long m_DstRatio; // 0x44
	float m_Scal; // 0x48
	OGLRender * m_pRender; // 0x50
public:
	~Graphics();
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
	enum COLOR
	{
		BLACK = -16777216,
		BLUE = -16776961,
		LIME = -16711936,
		AQUA = -16711681,
		RED = -65536,
		FUCHSIA = -65281,
		YELLOW = -256,
		WHITE = 255,
		GRAY = -8355712,
		NAVY = -16777088,
		GREEN = -16744448,
		TEAL = -16744320,
		MAROON = -8388608,
		PURPLE = -8388480,
		OLIVE = -8355840,
		SILVER = -4144960,
	};
	unsigned char initialize(OGLRender *);
	unsigned char initialize();
	void finalize();
	void lock(long, long, long, long, float);
	void lock(long, long, float);
	void lock(long, long);
	void unlock(unsigned char);
	void setOrigin(long, long);
	static long getColorOfRGB(long, long, long, long);
	static long getColorOfRGB(long, long, long);
	static long getColorOfName(long);
	void setColor(unsigned long);
	void setStackColor(unsigned long);
	void setFont(Font *);
	void clearScreen(long);
	void clearDepth();
	void clearRect(long, long, long, long);
	void drawLine(long, long, long, long);
	void drawRect(long, long, long, long);
	void fillRect(long, long, long, long);
	void fillRectEx(long, long, long, long, long, long, long, long);
	void drawImage(Image *, float, float, float, float, float, float);
	void drawImage(Image *, long, long, long, long, long, long);
	void drawImage(Image *, float, float);
	void drawImage(Image *, long, long);
	void drawImage(Image *, float *, float, float, float, float);
	void drawImage(Image *, long *, long, long, long, long);
	void drawImage(Image *, float *);
	void drawImage(Image *, long *);
	void drawImageFont(Image *, float, float, float, float, float, float, float, float, float, float);
	void drawImageFont(Image *, float, float, float, float, float, float, float);
	void drawImageFontS(Image *, float, float, float, float, float, float, float, float, float, float);
	void drawImageFontS(Image *, float, float, float, float, float, float, float);
	void drawPolyline(long *, long *, long, long);
	void drawPolyline(long *, long *, long);
	void fillPolygon(long *, long *, long, long);
	void fillPolygon(long *, long *, long);
	void setClip(long, long, long, long);
	void clipRect(long, long, long, long);
	void clipRect2(long, long, long, long);
	void clearClip();
	void copyArea(long, long, long, long, long, long);
	void setFlipMode(long);
	void drawScaledImage(Image *, long, long, long, long, long, long, long, long);
	void drawArc(long, long, long, long, long, long);
	void fillArc(long, long, long, long, long, long);
	long getPixel(long, long);
	long getRGBPixel(long, long);
	long * getPixels(long, long, long, long, long *, long);
	long * getRGBPixels(long, long, long, long, long *, long);
	void setPixel(long, long, long);
	void setPixel(long, long);
	void setRGBPixel(long, long, long);
	void setPixels(long, long, long, long, long *, long);
	void setRGBPixels(long, long, long, long, long *, long);
	enum <unnamed-enum-OP_REPL>
	{
		OP_REPL = 0,
		OP_ADD = 1,
		OP_SUB = 2,
		OP_ALPHA = 3,
		OP_NEGA = 4,
		OP_ALPHA_NOMASK = 5,
		OP_CONST_ADD = 6,
	};
	void setRenderMode(long, long);
	Image * getImage(long, long, long, long);
	void drawImageArc(Image *, long, long, long, long, long, long, long, long);
	unsigned char setSpriteFog(float *);
	unsigned char resetSpriteFog();
	Font * getFont();
	long getFontType();
	long getFontSize();
	unsigned long getColor();
	static const long INIT_POLY; // 0xFFFFFFFFFFFFFFFF
	static const float DEPTH_ADD; // 0xFFFFFFFFFFFFFFFF
	GraphicsStack * * m_pStack; // 0x58
	long m_StackMax; // 0x60
	long m_StackCount; // 0x64
	float m_Prio; // 0x68
	unsigned char m_EnableDepthAdd; // 0x6C
	long m_OperatorOld; // 0x70
	long m_SrcRatioOld; // 0x74
	long m_CustomShaderNo2DOld; // 0x78
	long m_ColorOld; // 0x7C
	unsigned char m_bPreDrawMode; // 0x80
	GraphicsStack * addStack();
	GraphicsStack * gatStack(Image *);
	void clearStack(unsigned char);
	void releaseStack();
	void drawStack();
	void clearPreStack();
	void preDrawStack();
	void deferredDrawStack();
	void enableDepthAdd(unsigned char);
	void drawImageS(Image *, float, float, float, float, float, float);
	void drawImageS(Image *, float, float);
	void drawImageS(Image *, float *, float, float, float, float);
	void drawImageS(Image *, float *);
	void drawImageV(Image *, float *, float *);
	void drawImageVS(Image *, float *, float *);
	void drawCapture(Image *, float, float, float, float);
	void drawTexture(unsigned long, float, float, float, float);
};