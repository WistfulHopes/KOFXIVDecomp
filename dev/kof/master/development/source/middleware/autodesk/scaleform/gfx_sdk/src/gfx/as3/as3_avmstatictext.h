#pragma once

class Scaleform::GFx::AS3::AvmStaticText :
	Scaleform::GFx::AS3::AvmDisplayObj
{
public:
	AvmStaticText(const Scaleform::GFx::AS3::AvmStaticText &);
	AvmStaticText(Scaleform::GFx::StaticTextCharacter *);
	virtual ~AvmStaticText();
	virtual const char * GetDefaultASClassName();
	virtual Scaleform::String & GetASClassName(Scaleform::String *);
	Scaleform::GFx::AS3::AvmStaticText & operator=(const Scaleform::GFx::AS3::AvmStaticText &);
};
const char * Scaleform::GFx::AS3::AvmStaticText::GetDefaultASClassName(); // 0x140484FC0
Scaleform::String & Scaleform::GFx::AS3::AvmStaticText::GetASClassName(Scaleform::String * className); // 0x140482630