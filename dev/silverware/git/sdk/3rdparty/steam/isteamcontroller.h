#pragma once

struct ControllerAnalogActionData_t
{
	EControllerSourceMode eMode; // 0x0
	float x; // 0x4
	float y; // 0x8
	bool bActive; // 0xC
};
struct ControllerDigitalActionData_t
{
	bool bState; // 0x0
	bool bActive; // 0x1
};
struct ControllerMotionData_t
{
	float rotQuatX; // 0x0
	float rotQuatY; // 0x4
	float rotQuatZ; // 0x8
	float rotQuatW; // 0xC
	float posAccelX; // 0x10
	float posAccelY; // 0x14
	float posAccelZ; // 0x18
	float rotVelX; // 0x1C
	float rotVelY; // 0x20
	float rotVelZ; // 0x24
};
class ISteamController
{
public:
	bool Init();
	bool Shutdown();
	void RunFrame();
	long GetConnectedControllers(unsigned long long *);
	bool ShowBindingPanel(unsigned long long);
	unsigned long long GetActionSetHandle(const char *);
	void ActivateActionSet(unsigned long long, unsigned long long);
	unsigned long long GetCurrentActionSet(unsigned long long);
	unsigned long long GetDigitalActionHandle(const char *);
	ControllerDigitalActionData_t GetDigitalActionData(unsigned long long, unsigned long long);
	long GetDigitalActionOrigins(unsigned long long, unsigned long long, unsigned long long, EControllerActionOrigin *);
	unsigned long long GetAnalogActionHandle(const char *);
	ControllerAnalogActionData_t GetAnalogActionData(unsigned long long, unsigned long long);
	long GetAnalogActionOrigins(unsigned long long, unsigned long long, unsigned long long, EControllerActionOrigin *);
	void StopAnalogActionMomentum(unsigned long long, unsigned long long);
	void TriggerHapticPulse(unsigned long long, ESteamControllerPad, unsigned short);
	void TriggerRepeatedHapticPulse(unsigned long long, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned long);
	long GetGamepadIndexForController(unsigned long long);
	unsigned long long GetControllerForGamepadIndex(long);
	ControllerMotionData_t GetMotionData(unsigned long long);
	bool ShowDigitalActionOrigins(unsigned long long, unsigned long long, float, float, float);
	bool ShowAnalogActionOrigins(unsigned long long, unsigned long long, float, float, float);
	ISteamController(ISteamController &);
	ISteamController(const ISteamController &);
	ISteamController();
	ISteamController & operator=(ISteamController &);
	ISteamController & operator=(const ISteamController &);
};