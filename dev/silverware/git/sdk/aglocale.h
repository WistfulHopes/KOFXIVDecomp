#pragma once

class AgLocale
{
public:
	enum SystemLanguage
	{
		SystemLanguage_None = 0,
		SystemLanguage_English_GB = 1,
		SystemLanguage_English_US = 2,
		SystemLanguage_French = 3,
		SystemLanguage_Italian = 4,
		SystemLanguage_German = 5,
		SystemLanguage_Spanish = 6,
		SystemLanguage_Spanish_Latin = 7,
		SystemLanguage_Portuguese = 8,
		SystemLanguage_Portuguese_Brazil = 9,
		SystemLanguage_Polish = 10,
		SystemLanguage_Russian = 11,
		SystemLanguage_Japanese = 12,
		SystemLanguage_Korean = 13,
		SystemLanguage_Chinese_Traditional = 14,
		SystemLanguage_Chinese_Simplified = 15,
		SystemLanguage_Finnish = 16,
		SystemLanguage_Swedish = 17,
		SystemLanguage_Danish = 18,
		SystemLanguage_Norwegian = 19,
		SystemLanguage_Turkish = 20,
		SystemLanguage_Dutch = 21,
	};
	static AgLocale::SystemLanguage getCurrentSystemLanguage();
};