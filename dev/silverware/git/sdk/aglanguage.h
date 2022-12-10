#pragma once

#include "aglocale.h"
#include "agpointer.h"
#include "agreferencedobject.h"
#include "agstream.h"
#include "agstring.h"
#include "agstringref.h"

class AgLanguage :
	AgReferencedObject
{
public:
	AgLanguage(const AgLanguage &);
	AgLanguage(unsigned long, const AgString &, AgLocale::SystemLanguage);
	~AgLanguage();
	AgStringRef getStringByIndex(unsigned long);
	const AgString & getName();
	unsigned long getId();
	AgLocale::SystemLanguage getSystemLanguage();
	unsigned long getStringCount();
protected:
	void loadFromStream(AgPointer<AgStream>);
private:
	unsigned long m_id; // 0x8
	AgString m_name; // 0x10
	unsigned long m_stringCount; // 0x20
	unsigned long m_stringPoolSize; // 0x24
	unsigned char * m_stringPool; // 0x28
	AgStringRef * m_strings; // 0x30
	AgLocale::SystemLanguage m_systemLanguage; // 0x38
public:
	AgLanguage & operator=(const AgLanguage &);
};