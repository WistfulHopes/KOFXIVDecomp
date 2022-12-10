#pragma once

class Scaleform::Render::Text::WordWrapHelper
{
	enum BreakInfoFlags
	{
		CBI_NonStartingChar = 1,
		CBI_NonTerminatingChar = 2,
	};
	enum WordWrappingTypes
	{
		WWT_Default = 0,
		WWT_Asian = 1,
		WWT_Prohibition = 2,
		WWT_NoHangulWrap = 4,
		WWT_Last = 4,
		WWT_All = 7,
	};
	struct CharBreakInfo;
public:
	static Scaleform::Render::Text::WordWrapHelper::CharBreakInfo CharBreakInfoArray[0]; // 0xFFFFFFFFFFFFFFFF
	static bool FindCharWithFlags(unsigned long, wchar_t, unsigned long);
	static bool IsAsianChar(unsigned long, wchar_t);
	static bool IsNonStartingChar(unsigned long, wchar_t);
	static bool IsNonTerminatingChar(unsigned long, wchar_t);
	static bool IsWhiteSpaceChar(wchar_t);
	static bool IsLineFeedChar(wchar_t);
	static bool IsLineBreakOpportunityAt(unsigned long, wchar_t, wchar_t);
	static bool IsLineBreakOpportunityAt(unsigned long, const wchar_t *, unsigned long long);
	static unsigned long long FindNextNonWhiteSpace(const wchar_t *, unsigned long long, unsigned long long);
	static unsigned long long FindPrevNonWhiteSpace(const wchar_t *, unsigned long long);
	static bool IsVowel(wchar_t);
	static unsigned long long FindWordWrapPos(unsigned long, unsigned long long, const wchar_t *, unsigned long long, unsigned long long, unsigned long long);
};
struct Scaleform::Render::Text::WordWrapHelper::CharBreakInfo
{
	wchar_t Char; // 0x0
	unsigned char Flags; // 0x2
};
bool Scaleform::Render::Text::WordWrapHelper::IsAsianChar(unsigned long wwMode, wchar_t c); // 0x140308A90
bool Scaleform::Render::Text::WordWrapHelper::IsLineBreakOpportunityAt(unsigned long wwMode, wchar_t prevChar, wchar_t curChar); // 0x140308B30