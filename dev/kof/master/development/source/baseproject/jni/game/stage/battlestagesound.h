#pragma once

class BattleStageSound :
	protected BattleEventHandler::Listener
{
private:
	STAGE_ID m_playingStageId; // 0x8
public:
	BattleStageSound(const BattleStageSound &);
	BattleStageSound();
	~BattleStageSound();
	void changePlayingStage(STAGE_ID);
	void play3DSoundByName(const char *, extension::SoundObject *, bool);
	bool isEndlessLoop(const char *);
	void OnEventEffectStart(const BattleStageEvent *);
private:
	void playSoundByName(const char *);
	virtual void OnEventRoundStartGO(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventRoundEndKO(STAGE_ID, BattleEventHandler::Listener::BattleResult, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventBattleEnd(STAGE_ID, const BattleEventHandler::Listener::CharacterStatus *);
public:
	BattleStageSound & operator=(const BattleStageSound &);
};