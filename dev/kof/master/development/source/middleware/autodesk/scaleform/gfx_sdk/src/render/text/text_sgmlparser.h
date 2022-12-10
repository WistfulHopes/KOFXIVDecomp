#pragma once

enum Scaleform::Render::Text::SGMLParserState
{
	SGMLPS_NONE = 0,
	SGMLPS_ERROR = 1,
	SGMLPS_START_ELEMENT = 2,
	SGMLPS_CONTENT = 3,
	SGMLPS_END_ELEMENT = 4,
	SGMLPS_EMPTY_ELEMENT = 5,
	SGMLPS_EMPTY_ELEMENT_NAME_END = 6,
	SGMLPS_START_ELEMENT_ATTR = 7,
	SGMLPS_START_ELEMENT_ATTR_VALUE = 8,
	SGMLPS_START_ELEMENT_END_OF_ATTRS = 9,
	SGMLPS_FINISHED = 32768,
	SGMLPS_EMPTY_ELEMENT_FINISHED = 32773,
	SGMLPS_START_ELEMENT_FINISHED = 32770,
	SGMLPS_END_ELEMENT_FINISHED = 32772,
};
void Scaleform::Render::Text::SGMLCharIter<wchar_t>::operator++(); // 0x140389210
bool Scaleform::Render::Text::SGMLCharIter<wchar_t>::IsSpace(unsigned long c); // 0x140389FB0
unsigned long Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(); // 0x140389420
long Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(const wchar_t * wstr, const char * str, unsigned long long len); // 0x14038AFF0
long Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(const wchar_t * dst, unsigned long long dstlen, const wchar_t * src, unsigned long long srclen); // 0x14038B0B0
class Scaleform::Render::Text::SGMLCharIter<wchar_t>
{
private:
	const wchar_t * pCurChar; // 0x0
	const wchar_t * pNextChar; // 0x8
	const wchar_t * pEnd; // 0x10
	unsigned long CurChar; // 0x18
	bool DoContentParsing; // 0x1C
	unsigned long DecodeCurrentChar();
	unsigned long DecodeEscapedChar();
public:
	SGMLCharIter<wchar_t>(const wchar_t *, unsigned long long);
	bool IsFinished();
	unsigned long operator*();
	void operator++();
	const wchar_t * GetCurCharPtr();
	unsigned long GetCurCharLength();
	bool IsEscapedChar();
	void StartContentParsing();
	void EndContentParsing();
	static long EncodeCharTo(unsigned long, wchar_t *, unsigned long long);
	static bool IsSpace(unsigned long);
	static bool IsAlpha(unsigned long);
	static bool IsAlphaNum(unsigned long);
	static bool IsDigit(unsigned long);
	static bool IsXDigit(unsigned long);
	static unsigned long ToLower(unsigned long);
	static long StrCompare(const wchar_t *, unsigned long long, const wchar_t *, unsigned long long);
	static long StrCompare(const wchar_t *, const char *, unsigned long long);
};
class Scaleform::Render::Text::SGMLCharIter<char>
{
private:
	const char * pCurChar; // 0x0
	const char * pNextChar; // 0x8
	const char * pEnd; // 0x10
	unsigned long CurChar; // 0x18
	bool DoContentParsing; // 0x1C
	unsigned long DecodeCurrentChar();
	unsigned long DecodeEscapedChar();
public:
	SGMLCharIter<char>(const char *, unsigned long long);
	bool IsFinished();
	unsigned long operator*();
	void operator++();
	const char * GetCurCharPtr();
	unsigned long GetCurCharLength();
	bool IsEscapedChar();
	void StartContentParsing();
	void EndContentParsing();
	static long EncodeCharTo(unsigned long, char *, unsigned long long);
	static bool IsSpace(unsigned long);
	static bool IsAlpha(unsigned long);
	static bool IsAlphaNum(unsigned long);
	static bool IsDigit(unsigned long);
	static bool IsXDigit(unsigned long);
	static unsigned long ToLower(unsigned long);
	static long StrCompare(const char *, unsigned long long, const char *, unsigned long long);
	static long StrCompare(const char *, const char *, unsigned long long);
};
void Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(const wchar_t * pstr, unsigned long long sz); // 0x140389310
long Scaleform::Render::Text::SGMLParser<wchar_t>::GetNext(); // 0x140389850
bool Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(const wchar_t * * ppattrName, unsigned long long * pattrNameSz); // 0x140389B80
bool Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttributeValue(const wchar_t * * ppattrValue, unsigned long long * pattrValueSz); // 0x140389D10
void Scaleform::Render::Text::SGMLParser<wchar_t>::ParseName(const wchar_t * * ppname, unsigned long long * plen); // 0x14038A6C0
bool Scaleform::Render::Text::SGMLParser<wchar_t>::ParseContent(const wchar_t * * ppContent, unsigned long long * pcontentSize); // 0x14038A000
void Scaleform::Render::Text::SGMLParser<wchar_t>::SkipName(); // 0x14038AE50
void Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(); // 0x14038AF30
void Scaleform::Render::Text::SGMLParser<wchar_t>::SkipAttribute(); // 0x14038AB00
void Scaleform::Render::Text::SGMLParser<wchar_t>::SkipComment(); // 0x14038AD50
bool Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(long * pdestVal, const wchar_t * pstr, unsigned long long len); // 0x14038A610
bool Scaleform::Render::Text::SGMLParser<wchar_t>::ParseHexInt(unsigned long * pdestVal, const wchar_t * pstr, unsigned long long len); // 0x14038A450
bool Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(float * pdestVal, const wchar_t * pstr, unsigned long long len); // 0x14038A2E0