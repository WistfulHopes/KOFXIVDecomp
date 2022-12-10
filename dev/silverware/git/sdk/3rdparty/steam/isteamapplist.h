#pragma once

class ISteamAppList
{
public:
	unsigned long GetNumInstalledApps();
	unsigned long GetInstalledApps(unsigned long *, unsigned long);
	long GetAppName(unsigned long, char *, long);
	long GetAppInstallDir(unsigned long, char *, long);
	long GetAppBuildId(unsigned long);
	ISteamAppList(ISteamAppList &);
	ISteamAppList(const ISteamAppList &);
	ISteamAppList();
	ISteamAppList & operator=(ISteamAppList &);
	ISteamAppList & operator=(const ISteamAppList &);
};