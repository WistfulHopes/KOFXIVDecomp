#pragma once

class GraphicsOpt
{
protected:
	Graphics * g; // 0x8
	long m_iAlignX; // 0x10
	long m_iAlignY; // 0x14
	float m_DrawScale; // 0x18
	float m_PosScale; // 0x1C
	float m_FontDrawScale; // 0x20
	float m_FontPosScale; // 0x24
	unsigned char m_FogFlg; // 0x28
	enum <unnamed-enum-DRAW_NORMAL>
	{
		DRAW_NORMAL = 0,
		DRAW_MIRROR = 1,
		DRAW_H_MIRROR = 1,
		DRAW_V_MIRROR = 2,
		DRAW_R90 = 5,
		DRAW_R180 = 3,
		DRAW_R270 = 4,
	};
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
public:
	long m_iDisplayX; // 0x2C
	long m_iDisplayY; // 0x30
	long m_iDisplayW; // 0x34
	long m_iDisplayH; // 0x38
	GraphicsOpt(const GraphicsOpt &);
	GraphicsOpt(Graphics *);
	GraphicsOpt();
	~GraphicsOpt();
	unsigned char initialize(Graphics *, long, long, long, long, float, float);
	unsigned char initialize(long, long, long, long, float, float);
	void initialize();
	void finalize();
	Graphics * getGraphics();
	float getAlignX();
	float getAlignY();
	float getPosScale();
	float getDrawScale();
	float getFontDrawScale();
	float getFontPosScale();
	void setPosScale(float, float);
	void setPosScale(float);
	void setDrawScale(float);
	void setFontScale(float, float);
	void lock(long, long, long, long);
	void lock(long, long);
	void lock();
	void unlock();
	void clearScreen(long);
	void clearDepth();
	void setClip(long, long, long, long);
	void clipRect(long, long, long, long);
	void clipRect2(long, long, long, long);
	void clearClip();
	void drawLine(long, long, long, long, unsigned long);
	void drawRect(long, long, long, long, unsigned long);
	void fillRect(long, long, long, long, unsigned long, unsigned char);
	void fillRectEx(long, long, long, long, long, long, long, long, unsigned long);
	void setFont(Font *);
	void drawImage(Image * *, float, float, const _C_CONV *, float, float, float, float, float, long);
	void drawImage(Image *, float, float, const _C_CONV *, float, float, float, float, float, long);
	void drawImage(Image * *, float, float, const _C_CONV *, float, float, float, long);
	void drawImage(Image *, float, float, const _C_CONV *, float, float, float, long);
	void drawImage(Image * *, float, float, const _C_CONV *, long);
	void drawImage(Image *, float, float, const _C_CONV *, long);
	void drawImage(Image *, float, float, float, float, float, float, float, float, float, long);
	void drawImage(Image *, float, float, float, float, float, float, long);
	void drawImage(Image *, float, float);
	void drawImageV(Image *, float, float, float *, float, float, float, float, float, long);
	void drawImageV(Image *, float, float, float *, float, float, float, long);
	void drawConv(Image * *, long, long, _C_CONV &, long);
	void drawConv(Image *, long, long, _C_CONV &, long);
	void drawConv(Image * *, long, long, _C_CONV &);
	void drawConv(Image *, long, long, _C_CONV &);
	void drawConv(Image * *, float, float, const _C_CONV *, const short *, float, float, float, long);
	void drawConv(Image * *, float, float, const _C_CONV *, const short *, long);
	void drawConv(Image *, float, float, const _C_CONV *, const short *, float, float, float, long);
	void drawConv(Image *, float, float, const _C_CONV *, const short *, long);
	void drawConv(Image * *, float, float, const _C_CONV *, float, float, float, float, float, long);
	void drawConv(Image *, float, float, const _C_CONV *, float, float, float, float, float, long);
	void drawConv(Image * *, float, float, const _C_CONV *, float, float, float, long);
	void drawConv(Image *, float, float, const _C_CONV *, float, float, float, long);
	void drawConv(Image * *, float, float, const _C_CONV *, long);
	void drawConv(Image *, float, float, const _C_CONV *, long);
	void drawConvB(Image * *, float, float, const _C_CONV *, const short *, float, float, float, float, unsigned long, long);
	void drawConvShadow(Image * *, float, float, const _C_CONV *, const short *, float, float, float, float, long);
	void drawConvShadow(Image * *, float, float, const _C_CONV *, float, float, float, float, long);
	void drawConv2(Image * *, float, float, const _C_CONV *, float, float, float, float, float, long);
	void drawConv2(Image *, float, float, const _C_CONV *, float, float, float, float, float, long);
	void drawConv2(Image * *, float, float, const _C_CONV *, float, float, float, long);
	void drawConv2(Image *, float, float, const _C_CONV *, float, float, float, long);
	void drawConvArc(Image * *, long, long, _C_CONV &, long, long);
	void drawConvArc(Image * *, long, long, const _C_CONV *, long, long);
	void drawConvArc(Image *, long, long, const _C_CONV *, long, long);
	void drawScaledImage(Image *, long, long, long, long, long, long, long, long, long);
	void drawImageFont(Image *, float, float, _C_CONV *, float, long, float);
	void drawImageFont(Image *, float, float, float, float, float, float, long, float);
	void setRenderMode(long, long);
	void setSpriteFog(float *);
	void setSpriteFog(float, float, float, float);
	void resetFog();
	void clearPreStack();
	void drawStack();
	void releaseStack();
	void setPreStackMode(unsigned char);
	void deferredDrawStack();
	void drawCapture(Image *, float, float, float, float);
	void drawTexture(unsigned long, float, float, float, float);
	void drawPicture(Image * *, long, long, _C_CONV *, long *, long);
	void drawPicture(Image * *, long, long, _C_CONV *, long *);
	void drawConvFlip(Image * *, long, long, _C_CONV &, long, long, long);
	void drawConvFlip(Image * *, long, long, _C_CONV &, long);
	void drawConvFlip(Image *, long, long, _C_CONV &, long);
	void drawPictureFlip(Image * *, long, long, _C_CONV *, long *, long, long, long);
	void drawPictureFlip(Image * *, long, long, _C_CONV *, long *, long);
	GraphicsOpt & operator=(const GraphicsOpt &);
};