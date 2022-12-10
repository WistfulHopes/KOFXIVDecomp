#pragma once

#include "agstring.h"
#include "agclock.h"

class AgSilverware
{
public:
	static AgString TitleId; // 0xFFFFFFFFFFFFFFFF
	static AgString ServiceId; // 0xFFFFFFFFFFFFFFFF
	static unsigned long long Systems; // 0xFFFFFFFFFFFFFFFF
	enum SystemFlags
	{
		System_Math = 1,
		System_WorkerPool = 2,
		System_User = 4,
		System_Profile = 8,
		System_Input = 16,
		System_Player = 32,
		System_Mount = 64,
		System_Network = 128,
		System_Services = 256,
		System_Dialogs = 512,
		System_Renderer = 1024,
		System_Resources = 2048,
		System_Audio = 4096,
		System_Steam = 8192,
		System_BusyScreen = 16384,
		System_ExceptionHandler = 32768,
		Defaults = 255,
	};
	static long initialize(AgStringRef, AgStringRef, unsigned long long);
	static long cleanup();
	static void preUpdate();
	static void postUpdate();
	static long steamAvailable();
private:
	static AgClock ms_clock; // 0xFFFFFFFFFFFFFFFF
};