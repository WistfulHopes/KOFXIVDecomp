#pragma once

class Fw::AchievementSystem
{
public:
	static bool Startup(unsigned long, Fw::HeapMemory &);
	static void Update();
	static void Shutdown();
	static bool Register();
	static void Unlock(unsigned long);
	static void CheckPlatinumAchievement();
};