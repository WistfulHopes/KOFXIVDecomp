#pragma once

enum EGamepadTextInputMode
{
	k_EGamepadTextInputModeNormal = 0,
	k_EGamepadTextInputModePassword = 1,
};
enum EGamepadTextInputLineMode
{
	k_EGamepadTextInputLineModeSingleLine = 0,
	k_EGamepadTextInputLineModeMultipleLines = 1,
};
class ISteamUtils
{
public:
	unsigned long GetSecondsSinceAppActive();
	unsigned long GetSecondsSinceComputerActive();
	EUniverse GetConnectedUniverse();
	unsigned long GetServerRealTime();
	const char * GetIPCountry();
	bool GetImageSize(long, unsigned long *, unsigned long *);
	bool GetImageRGBA(long, unsigned char *, long);
	bool GetCSERIPPort(unsigned long *, unsigned short *);
	unsigned char GetCurrentBatteryPower();
	unsigned long GetAppID();
	void SetOverlayNotificationPosition(ENotificationPosition);
	bool IsAPICallCompleted(unsigned long long, bool *);
	ESteamAPICallFailure GetAPICallFailureReason(unsigned long long);
	bool GetAPICallResult(unsigned long long, void *, long, long, bool *);
protected:
	void RunFrame();
public:
	unsigned long GetIPCCallCount();
	void SetWarningMessageHook(void(*)(long, const char *));
	bool IsOverlayEnabled();
	bool BOverlayNeedsPresent();
	unsigned long long CheckFileSignature(const char *);
	bool ShowGamepadTextInput(EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, unsigned long, const char *);
	unsigned long GetEnteredGamepadTextLength();
	bool GetEnteredGamepadTextInput(char *, unsigned long);
	const char * GetSteamUILanguage();
	bool IsSteamRunningInVR();
	void SetOverlayNotificationInset(long, long);
	bool IsSteamInBigPictureMode();
	void StartVRDashboard();
	ISteamUtils(ISteamUtils &);
	ISteamUtils(const ISteamUtils &);
	ISteamUtils();
	ISteamUtils & operator=(ISteamUtils &);
	ISteamUtils & operator=(const ISteamUtils &);
};
struct GamepadTextInputDismissed_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 714,
	};
	bool m_bSubmitted; // 0x0
	unsigned long m_unSubmittedText; // 0x4
};