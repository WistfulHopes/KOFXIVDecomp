#pragma once

#include "agreferencedobject.h"
#include "agstringref.h"
#include "agpointer.h"

class AgStream :
	AgReferencedObject
{
public:
	~AgStream() = default;
	AgStringRef getName() 
	{
		return AgStringRef("Unknown");
	}
	unsigned long read(unsigned char *, unsigned long);
	unsigned long write(const unsigned char *, unsigned long);
	unsigned long long getSize();
	void setPosition(unsigned long long);
	unsigned long long getPosition();
	long isValid();
	long isResident() { return 1; }
	unsigned char * getResidentData() { return nullptr; }
	long getResidentType();
	AgPointer<AgStream> clone();
	AgStream(const AgStream &);
	AgStream();
	AgStream & operator=(const AgStream &);
};