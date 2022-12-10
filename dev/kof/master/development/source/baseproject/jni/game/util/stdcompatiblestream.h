#pragma once

class StdCompatMemStreamBuf :
	std::basic_streambuf<char,std::char_traits<char> >
{
public:
	StdCompatMemStreamBuf(const char *, const char *);
	StdCompatMemStreamBuf();
private:
	StdCompatMemStreamBuf(const StdCompatMemStreamBuf &);
	StdCompatMemStreamBuf & operator=(const StdCompatMemStreamBuf &);
public:
	virtual ~StdCompatMemStreamBuf();
	bool readOpen(const char *, const char *);
	void close();
	bool isOpen();
protected:
	virtual std::fpos<_Mbstatet> seekoff(long long, long, long);
	virtual std::fpos<_Mbstatet> seekpos(std::fpos<_Mbstatet>, long);
};
class StdCompatMemoryIStream :
	std::basic_istream<char,std::char_traits<char> >,
	virtual std::basic_ios<char,std::char_traits<char> >
{
	class Base_t;
public:
	StdCompatMemoryIStream(const char *, const char *);
	StdCompatMemoryIStream();
	void open(const char *, const char *);
	void close();
	bool isOpen();
private:
	StdCompatMemStreamBuf m_membuf; // 0x10
public:
	virtual ~StdCompatMemoryIStream();
};