#pragma once

class Fw::ProfileDialogSystem
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static bool DialogOpen(Fw::ONLINEID);
};