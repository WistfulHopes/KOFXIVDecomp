#pragma once

enum Fw::IME_TYPE
{
	IME_TYPE_DEFAULT = 0,
	IME_TYPE_BASIC_LATIN = 1,
};
enum Fw::<unnamed-enum-IME_STATUS_BEGIN>
{
	IME_STATUS_BEGIN = 0,
	IME_STATUS_START = 1,
	IME_STATUS_FINISH = 2,
	IME_STATUS_ERROR = 3,
};
class Fw::cImeOption
{
public:
	long maxTextLength; // 0x0
	long userId; // 0x4
	Fw::IME_TYPE type; // 0x8
	float posx; // 0xC
	float posy; // 0x10
	char title[128]; // 0x14
	char input[256]; // 0x94
	unsigned long option; // 0x194
	Fw::HeapMemory * m_pHeap; // 0x198
	cImeOption();
};
class Fw::cImeResult
{
public:
	char input[256]; // 0x0
	unsigned long long size; // 0x100
};
class Fw::ImeSystem
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static bool Show(Fw::cImeOption &);
	static void Abort();
	static long GetStatus();
	static bool GetResult(Fw::cImeResult *);
};