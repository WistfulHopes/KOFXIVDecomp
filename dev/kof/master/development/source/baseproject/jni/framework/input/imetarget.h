#pragma once

class Fw::ImeTargetBase
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