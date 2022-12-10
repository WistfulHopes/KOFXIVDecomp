#pragma once

class ErrorChecker
{
private:
	bool m_bError; // 0x8
public:
	bool isError();
	ErrorChecker(const ErrorChecker &);
protected:
	ErrorChecker();
	~ErrorChecker();
	void error();
	void clearErrorFlag();
public:
	ErrorChecker & operator=(const ErrorChecker &);
};
bool ErrorChecker::isError(); // 0x14009F600
ErrorChecker::~ErrorChecker(); // 0x14009F610