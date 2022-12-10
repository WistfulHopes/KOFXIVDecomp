#pragma once

class ActionBlackout
{
	enum BLACKOUT_ATTR
	{
		NONE = 0,
		SINGLE_EX = 1,
		FADE_OUT = 2,
		SINGLE = 3,
		MY_STOP = 4,
		NORMAL = 5,
		SUPER = 6,
		CLIMAX = 7,
		CLIMAX_NOW = 8,
		TOP = 9,
	};
	enum BLACKOUT_TYPE
	{
		NONE = 0,
		STAGE_BLACK = 1,
		STAGE_WHITE = 2,
		SCREEN_BLACK = 3,
		SCREEN_WHITE = 4,
		STAGE_RGBA = 5,
		IORI_YATAGARASU = 6,
		AKEBONO_SUPER = 7,
		AKEBONO_CLIMAX = 8,
	};
	struct BlackoutData;
	struct BlackoutReq;
	struct TARGET_ID;
public:
	ActionBlackout();
	~ActionBlackout();
	void Init();
	void Main(Fix32);
	const ActionBlackout::BlackoutData & GetBlackoutData();
	const ActionBlackout::BlackoutData & GetBlackoutData(long);
	const ActionBlackout::BlackoutReq & GetBlackoutReq(long);
	ActionBlackout::BLACKOUT_TYPE GetBlackoutType();
	bool IsBattleTimerStop();
	bool IsStageDraw();
	bool IsCharaDraw();
	bool IsAkebonoDraw();
	bool IsNeedBufferColorChange();
	bool IsNeedBGColorChange();
	ColorHolder GetScreenColor();
	bool IsNeedCharaColorChange();
	ColorHolder GetCharaColor();
	bool IsNeedEffectColorChange();
	ColorHolder GetEffectColor();
	bool IsStopTime(long);
	bool IsStopTimePlayer(long);
	bool IsStopTimeEffect(long);
	bool IsRequest(long);
	bool IsAllTimeStop();
	bool IsRequestPlayer(long);
	void RequestBlackout(const Actor &, const CharaActionData::Blackout &);
	void RequestBlackout(long, const ActionBlackout::BlackoutReq &);
	void RequestBlackout(long, ActionBlackout::BLACKOUT_ATTR, ActionBlackout::BLACKOUT_TYPE, long);
	void RequestBlackoutPlayer(long, const ActionBlackout::BlackoutReq &);
	void RequestBlackoutPlayer(long, ActionBlackout::BLACKOUT_ATTR, ActionBlackout::BLACKOUT_TYPE, long);
	void ResetRequest(long, long);
	void ResetRequestPlayer(long, long);
	void RequestCancel(long);
	void RequestCancelPlayer(long);
	void RequestAkebono(ActionBlackout::BLACKOUT_TYPE);
	void RequestCancelAkebono();
	void RequestAllTimeStop(long);
private:
	ActionBlackout::BlackoutData data[6]; // 0x0
	ActionBlackout::BlackoutReq reqData[6]; // 0x120
	long iPriTarget; // 0x1F8
};
enum ActionBlackout::BLACKOUT_TYPE
{
	NONE = 0,
	STAGE_BLACK = 1,
	STAGE_WHITE = 2,
	SCREEN_BLACK = 3,
	SCREEN_WHITE = 4,
	STAGE_RGBA = 5,
	IORI_YATAGARASU = 6,
	AKEBONO_SUPER = 7,
	AKEBONO_CLIMAX = 8,
};
struct ActionBlackout::BlackoutData
{
	ActionBlackout::BLACKOUT_ATTR attr; // 0x0
	ActionBlackout::BLACKOUT_TYPE type; // 0x4
	Fix32 xMaxFrame; // 0x8
	Fix32 xNowFrame; // 0xC
	Fix32 xMaxFadeFrame; // 0x10
	Fix32 xNowFadeFrame; // 0x14
	ColorHolder color; // 0x18
	float fFadeAlpha; // 0x28
	bool bStop; // 0x2C
	bool bFadeOut; // 0x2D
	BlackoutData();
};
struct ActionBlackout::BlackoutReq
{
	ActionBlackout::BLACKOUT_ATTR attr; // 0x0
	ActionBlackout::BLACKOUT_TYPE type; // 0x4
	long frame; // 0x8
	ColorHolder color; // 0xC
	long fadeFrame; // 0x1C
	bool bFadeOut; // 0x20
	BlackoutReq();
};
struct ActionBlackout::TARGET_ID
{
	enum ID
	{
		SYSTEM = 0,
		EFFECT_1P = 1,
		EFFECT_2P = 2,
		PLAYER_1 = 3,
		PLAYER_2 = 4,
		TIME_STOP = 5,
		MAX = 6,
	};
};
ActionBlackout::ActionBlackout(); // 0x1400BBBB0