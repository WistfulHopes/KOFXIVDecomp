#pragma once

class Scaleform::Locale
{
public:
	Locale(Scaleform::Locale &);
	Locale(const Scaleform::Locale &);
	Locale();
	const Scaleform::String & GetEnglishName();
	const Scaleform::String & GetNativeName();
	const Scaleform::String & GetGrouping();
	unsigned long GetGroupSeparator();
	unsigned long GetDecimalSeparator();
	unsigned long GetPositiveSign();
	unsigned long GetNegativeSign();
	unsigned long GetExponentialSign();
protected:
	void SetEnglishName(const Scaleform::String &);
	void SetNativeName(const Scaleform::String &);
	void SetGrouping(const Scaleform::String &);
	void SetGroupSeparator(unsigned long);
	void SetDecimalSeparator(unsigned long);
	void SetPositiveSign(unsigned long);
	void SetNegativeSign(unsigned long);
	void SetExponentialSign(unsigned long);
private:
	Scaleform::String EnglishName; // 0x0
	Scaleform::String NativeName; // 0x8
	Scaleform::String Grouping; // 0x10
	unsigned long GroupSeparator; // 0x18
	unsigned long DecimalSeparator; // 0x1C
	unsigned long PositiveSign; // 0x20
	unsigned long NegativeSign; // 0x24
	unsigned long ExponentialSign; // 0x28
public:
	~Locale();
	Scaleform::Locale & operator=(Scaleform::Locale &);
	Scaleform::Locale & operator=(const Scaleform::Locale &);
};