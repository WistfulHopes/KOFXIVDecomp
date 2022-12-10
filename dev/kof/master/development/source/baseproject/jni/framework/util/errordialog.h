#pragma once

class Fw::ErrorDialog
{
public:
	static bool Startup();
	static bool Update();
	static void Shutdown();
	static void Open(long, long);
	static void Close();
	static bool IsOpen();
	static long GetErrorCode();
private:
	static bool m_OpenFlag; // 0xFFFFFFFFFFFFFFFF
	static long m_ErrorCode; // 0xFFFFFFFFFFFFFFFF
};