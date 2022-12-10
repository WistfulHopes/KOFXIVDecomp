#pragma once

class Fw::LiveStreamingSystem
{
public:
	static bool Startup();
	static void Shutdown();
	static void LaunchLiveViewer(const char *, float, float, float, float);
	static void SetPermitFlag(const bool);
	static bool GetPermitFlag();
	static void SetEnable(const bool);
	static bool GetEnable();
	static void SetMaxBitrate(const unsigned long);
	static bool IsOnAir();
	static void SetOnAir(bool);
};