#pragma once

class ISteamScreenshots
{
public:
	unsigned long WriteScreenshot(void *, unsigned long, long, long);
	unsigned long AddScreenshotToLibrary(const char *, const char *, long, long);
	void TriggerScreenshot();
	void HookScreenshots(bool);
	bool SetLocation(unsigned long, const char *);
	bool TagUser(unsigned long, CSteamID);
	bool TagPublishedFile(unsigned long, unsigned long long);
	bool IsScreenshotsHooked();
	unsigned long AddVRScreenshotToLibrary(EVRScreenshotType, const char *, const char *);
	ISteamScreenshots(ISteamScreenshots &);
	ISteamScreenshots(const ISteamScreenshots &);
	ISteamScreenshots();
	ISteamScreenshots & operator=(ISteamScreenshots &);
	ISteamScreenshots & operator=(const ISteamScreenshots &);
};