#pragma once

class Fw::UserServiceSystem
{
public:
	static bool Startup();
	static void Shutdown();
	static long GetUserId(long);
	static long GetUserCount();
};