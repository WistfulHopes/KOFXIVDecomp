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