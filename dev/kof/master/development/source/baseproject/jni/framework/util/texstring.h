#pragma once

struct _TStringData
{
	Font * font; // 0x0
	char * str; // 0x8
	unsigned long col; // 0x10
	long x; // 0x14
	long y; // 0x18
	long w; // 0x1C
	long h; // 0x20
	unsigned char edge; // 0x24
};
struct _StringRequest
{
	long idx; // 0x0
	long strNum; // 0x4
	long dx; // 0x8
	long dy; // 0xC
	long align; // 0x10
	unsigned long col2; // 0x14
	unsigned char drawReq; // 0x18
};
class TexString
{
public:
	TexString(GraphicsOpt *, float);
private:
	TexString(const TexString &);
	TexString & operator=(const TexString &);
	GraphicsOpt * g; // 0x0
	_TStringData m_StrData[256]; // 0x8
	long m_sx; // 0x2808
	long m_sy; // 0x280C
	long m_w; // 0x2810
	long m_h; // 0x2814
	long m_OriginX; // 0x2818
	long m_OriginY; // 0x281C
	long m_ClipX; // 0x2820
	long m_ClipY; // 0x2824
	long m_ClipW; // 0x2828
	long m_ClipH; // 0x282C
	unsigned long m_Color; // 0x2830
	long m_FlipMode; // 0x2834
	long m_Operator; // 0x2838
	long m_SrcRatio; // 0x283C
	long m_DstRatio; // 0x2840
	unsigned char m_ImageChFlg; // 0x2844
	unsigned char m_bResume; // 0x2845
	Image * m_Image; // 0x2848
	float m_fDrawScale; // 0x2850
	long m_sx2; // 0x2854
	long m_sy2; // 0x2858
	long m_maxH; // 0x285C
public:
	unsigned char * strBuffer; // 0x2860
	~TexString();
	void initialize(GraphicsOpt *, float);
	void finalize();
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
	enum <unnamed-enum-OP_REPL>
	{
		OP_REPL = 0,
		OP_ADD = 1,
		OP_SUB = 2,
		OP_ALPHA = 3,
		OP_ADD_NOMASK = 4,
		OP_ALPHA_NOMASK = 5,
		OP_CONST_ADD = 6,
	};
	enum <unnamed-enum-FONT_ALIGN_LEFT>
	{
		FONT_ALIGN_LEFT = 0,
		FONT_ALIGN_CENTER = 1,
		FONT_ALIGN_RIGHT = 2,
		FONT_ALIGN_TOP = 0,
		FONT_ALIGN_MIDDLE = 16,
		FONT_ALIGN_BOTTOM = 32,
		FONT_ALIGN_BASELINE = 64,
	};
	void release();
	void setClip(long, long, long, long);
	void clipRect(long, long, long, long);
	void clearClip();
	void clearString();
	void removeString(long);
	void removeString();
	unsigned char setStringChar(const char *, long *, Font *, unsigned char);
	void setStringChar(const char *, long, long, long, unsigned long, Font *);
	void setStringChar(long, const char *, long, long, unsigned long, unsigned long, Font *, unsigned char);
	void setStringChar(long, const char *, long, long, unsigned long, Font *);
	unsigned char getImageChFlg();
	void drawStringChar(long, long, long, long, long);
	long getWidth(long);
	long getHeight(long);
	void checkCreateTexture();
	long getLineHeight(long);
	long getVirtualW(long);
	long getVirtualH(long);
	long getVirtualLineH(long);
	_C_CONV getConvData(long, unsigned long);
	void drawTexString(long, long, long, long, unsigned long, float);
	void drawImageFont(long, long, long, long, long, long);
	unsigned char createTexture(unsigned char);
	unsigned char createTexture();
	void createTextureFrame();
	void createTextureOrigin();
	void DrawAll();
	void DrawAllEx(long, long, unsigned char);
	void setRenderMode(long, long);
	void setColor(unsigned long);
	Image * getImage();
	void checkNULL(long);
	void suspend();
	unsigned char resume();
	void setResume();
	void setDrawScale(float);
};