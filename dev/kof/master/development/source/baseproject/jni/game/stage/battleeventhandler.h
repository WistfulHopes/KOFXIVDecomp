#pragma once

class BattleEventHandler
{
	struct EActivity;
	class Listener;
private:
	BattleListenerList * m_pListenerList; // 0x0
public:
	static BattleEventHandler & getInstance();
private:
	BattleEventHandler(const BattleEventHandler &);
	BattleEventHandler();
	~BattleEventHandler();
	BattleEventHandler & operator=(const BattleEventHandler &);
public:
	void addListener(BattleEventHandler::Listener *);
	void removeListener(BattleEventHandler::Listener *);
	void CallEvent_CharacterDamage(BattleEventHandler::Listener::SkillType, PLAYER_ID, long, long, long, long, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_CharacterStun(PLAYER_ID, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_CharacterBound(PLAYER_ID, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_RoundStartRound(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_RoundStartReady(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_RoundStartGO(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_RoundStartFadeIn(STAGE_ID, long);
	void CallEvent_FadeOut();
	void CallEvent_RoundStartTalkStart(STAGE_ID, long);
	void CallEvent_RoundStartTalkOut(STAGE_ID, long);
	void CallEvent_RoundEndKO(STAGE_ID, BattleEventHandler::Listener::BattleResult, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_RoundEnd(BattleEventHandler::Listener::BattleResult, long, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_TimeUp(const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_ScreenShake(const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_BattleStart(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_BattleEnd(STAGE_ID, const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_EventWallHit(const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_EventGroundHit(const BattleEventHandler::Listener::CharacterStatus *);
	void CallEvent_CharacterActivity(PLAYER_ID, BattleEventHandler::EActivity::Type, long);
	void CallEvent_AkebonoKO();
};
struct BattleEventHandler::EActivity
{
	enum Type
	{
		NONE = 0,
		COUNTER_HIT = 1,
		GUARD_CRASH = 2,
		REVERSAL = 3,
		SUPER_CANCEL = 4,
		ADVANCED_CANCEL = 5,
		CLIMAX_CANCEL = 6,
		THROW_ESCAPE = 7,
		GUARD_CANCEL = 8,
		JUST_GUARD = 9,
		STUN = 10,
		SUPER_MOVE_FINISH = 11,
		MAX_MOVE_FINISH = 12,
		CLIMAX_MOVE_FINISH = 13,
		COMBO = 14,
		TECHNICAL = 15,
	};
};
class BattleEventHandler::Listener
{
	struct CharacterStatus;
	enum SkillType
	{
		SKILLTYPE_NORMAL = 0,
		SKILLTYPE_SPECIAL = 1,
		SKILLTYPE_EX_SPECIAL = 2,
		SKILLTYPE_SUPER_SP = 3,
		SKILLTYPE_MAX_SUPER_SP = 4,
		SKILLTYPE_CLIMAX_SP = 5,
		SKILLTYPE_NONE = 255,
	};
	enum BattleResult
	{
		BATTLERESULT_YOU_WIN = 0,
		BATTLERESULT_YOU_LOSE = 1,
		BATTLERESULT_DRAW_GAME = 2,
		BATTLERESULT_P1_WIN = 3,
		BATTLERESULT_P2_WIN = 4,
		BATTLERESULT_NONE = 255,
	};
private:
	void OnEventCharacterDamage(BattleEventHandler::Listener::SkillType, PLAYER_ID, long, long, long, long, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventCharacterStun(PLAYER_ID, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventCharacterBound(PLAYER_ID, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventRoundStartRound(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventRoundStartReady(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventRoundStartGO(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventRoundStartFadeIn(STAGE_ID, long);
	void OnEventFadeOut();
	void OnEventRoundStartTalkStart(STAGE_ID, long);
	void OnEventRoundStartTalkOut(STAGE_ID, long);
	void OnEventRoundEndKO(STAGE_ID, BattleEventHandler::Listener::BattleResult, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventRoundEnd(BattleEventHandler::Listener::BattleResult, long, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventTimeup(const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventScreenShake(const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventBattleStart(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventBattleEnd(STAGE_ID, const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventWallHit(const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventGroundHit(const BattleEventHandler::Listener::CharacterStatus *);
	void OnEventCharacterActivity(PLAYER_ID, BattleEventHandler::EActivity::Type, long);
	void OnEventAkebonoKO();
public:
	Listener(BattleEventHandler::Listener &);
	Listener(const BattleEventHandler::Listener &);
	Listener();
	BattleEventHandler::Listener & operator=(BattleEventHandler::Listener &);
	BattleEventHandler::Listener & operator=(const BattleEventHandler::Listener &);
};
struct BattleEventHandler::Listener::CharacterStatus
{
	CHARACTER_NO characterNo; // 0x0
	float characterPositionX; // 0x4
	CHARACTER_NO pairCharacterNo; // 0x8
	float pairCharacterPositionX; // 0xC
};
enum BattleEventHandler::Listener::BattleResult
{
	BATTLERESULT_YOU_WIN = 0,
	BATTLERESULT_YOU_LOSE = 1,
	BATTLERESULT_DRAW_GAME = 2,
	BATTLERESULT_P1_WIN = 3,
	BATTLERESULT_P2_WIN = 4,
	BATTLERESULT_NONE = 255,
};