#pragma once

#include "aglanguage.h"
#include "agpointer.h"
#include "agsingleton.h"
#include "agstream.h"
#include <vector>
#include <map>

class AgLocalizationManager :
	AgSingleton<AgLocalizationManager>
{
public:
	AgLocalizationManager(const AgLocalizationManager &);
	AgLocalizationManager();
	virtual ~AgLocalizationManager();
	void loadLocalizationData(AgPointer<AgStream>);
	AgStringRef getStringByIndex(unsigned long, long);
	AgStringRef getStringById(AgStringRef, long);
	unsigned long getStringIndexById(AgStringRef);
	const AgPointer<AgLanguage> getLanguageByIndex(long);
	void setLanguageIndex(long);
	long getCurrentLanguageIndex();
	const long getLanguageIndexForSystemLanguage(AgLocale::SystemLanguage);
	AgLocale::SystemLanguage getSystemLanguageForLanguageIndex(long);
	unsigned long getNumLanguages();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
private:
	unsigned long _lookupStringIndexById(AgStringRef);
	long m_currentLanguage; // 0x8
	unsigned long m_systemDefaultLanguage; // 0xC
	std::vector<AgPointer<AgLanguage>> m_languages; // 0x10
	std::map<AgString,unsigned int> m_localizationIdentifiers; // 0x28
	std::map<enum AgLocale::SystemLanguage,unsigned int> m_systemLanguageLookup; // 0x38
public:
	AgLocalizationManager & operator=(const AgLocalizationManager &);
};