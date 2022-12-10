#pragma once

class AppMain::ScaleformResult
{
	struct EValue;
private:
	long m_containValueBits; // 0x0
	const char * m_pValueString1; // 0x8
public:
	ScaleformResult();
	~ScaleformResult();
	void clear();
	void setValueString1(const char *);
	bool checkValueType(AppMain::ScaleformResult::EValue::Type);
	const char * getValueString1();
};
struct AppMain::ScaleformResult::EValue
{
	enum Type
	{
		String1 = 2,
	};
};
struct AppMain::EWatchingOperation
{
	enum Type
	{
		None = 0,
		Normal = 1,
		FixedPhrase = 2,
		SESelect = 3,
	};
};
struct AppMain::WatchingParams
{
	bool bEnableUserOperation; // 0x0
	long totalFrame; // 0x4
	AppMain::EWatchingOperation::Type operationType; // 0x8
	BattleHudCommonNumbers::ESESelectorPage::Type selectSEPage; // 0xC
	BattleHudCommonNumbers::ESESelectorSelectKey::Type selectSEKey; // 0x10
	BattleHudCommonNumbers::EOperateDescription::Type descriptionType; // 0x14
	bool bOpenGFxMenu; // 0x18
	float stopTimerSendMessage; // 0x1C
	float stopTimerSE; // 0x20
	long * pTinpanFrame; // 0x28
	long tinpanFrameIndex; // 0x30
	long playSEFrame[16]; // 0x34
	WatchingParams();
};