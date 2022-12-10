#pragma once

class Fw::ProfileDialogCommon
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static bool DialogOpen(Fw::ONLINEID);
private:
	static bool m_OpenFlag; // 0xFFFFFFFFFFFFFFFF
};