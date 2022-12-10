#pragma once

class ISteamVideo
{
public:
	void GetVideoURL(unsigned long);
	bool IsBroadcasting(long *);
	ISteamVideo(ISteamVideo &);
	ISteamVideo(const ISteamVideo &);
	ISteamVideo();
	ISteamVideo & operator=(ISteamVideo &);
	ISteamVideo & operator=(const ISteamVideo &);
};
struct BroadcastUploadStart_t
{
	struct SteamCallback_t;
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 4604,
	};
};
struct BroadcastUploadStop_t
{
	struct SteamCallback_t;
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 4605,
	};
	EBroadcastUploadResult m_eResult; // 0x0
};