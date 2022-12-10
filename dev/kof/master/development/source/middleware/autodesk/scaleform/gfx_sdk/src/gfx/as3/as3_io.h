#pragma once

struct Scaleform::GFx::AS3::Reader
{
	Scaleform::GFx::AS3::CheckResult Read(char &);
	Scaleform::GFx::AS3::CheckResult Read(unsigned char &);
	Scaleform::GFx::AS3::CheckResult Read(bool &);
	unsigned long Read(void *, unsigned long);
	Scaleform::GFx::AS3::CheckResult ReadUTFBytes(Scaleform::GFx::ASString &, unsigned long);
	Reader(Scaleform::GFx::AS3::Reader &);
	Reader(const Scaleform::GFx::AS3::Reader &);
	Reader();
	Scaleform::GFx::AS3::Reader & operator=(Scaleform::GFx::AS3::Reader &);
	Scaleform::GFx::AS3::Reader & operator=(const Scaleform::GFx::AS3::Reader &);
};
struct Scaleform::GFx::AS3::Writer
{
	Scaleform::GFx::AS3::CheckResult Write(char);
	Scaleform::GFx::AS3::CheckResult Write(unsigned char);
	Scaleform::GFx::AS3::CheckResult Write(bool);
	Scaleform::GFx::AS3::CheckResult Write(const void *, unsigned long);
	Writer(Scaleform::GFx::AS3::Writer &);
	Writer(const Scaleform::GFx::AS3::Writer &);
	Writer();
	Scaleform::GFx::AS3::Writer & operator=(Scaleform::GFx::AS3::Writer &);
	Scaleform::GFx::AS3::Writer & operator=(const Scaleform::GFx::AS3::Writer &);
};