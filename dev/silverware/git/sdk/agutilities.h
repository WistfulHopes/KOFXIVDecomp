#pragma once

class AgUtilities
{
public:
	static long ExecuteShellCommand(const AgString &, const AgString &, const AgString &, const AgString &);
	static long ExecuteShellCommandW(const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
	static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > GetSaveFilename(const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
	static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > GetOpenFilename(const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, const std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
	static void saveRGBAAsPNG(AgString, AgPointer<AgStream>, unsigned long, unsigned long);
	static void captureScreenshot(AgString);
};