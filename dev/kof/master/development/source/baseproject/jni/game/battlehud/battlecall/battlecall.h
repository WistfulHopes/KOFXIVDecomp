#pragma once

class BattleCallAnimation :
	BattleCallDefines,
	BattleHudLocalize,
	ErrorChecker
{
protected:
	BattleCallDefines::EAnimationType::Type m_animationType; // 0x14
	bool m_bResoucesActived; // 0x18
	extension::BasicFutureObject<Image,extension::FutureImageOption> * m_pImages; // 0x20
	long m_imageCount; // 0x28
	bool m_bRenderFrame; // 0x2C
	BattleCallDefines::VoiceType m_voiceType; // 0x30
	SoundId m_announcerVoiceSoundID; // 0x34
	bool m_bAnimationPlaying; // 0x38
	bool m_bAnimationFinished; // 0x39
	float m_animationFrame; // 0x3C
	float m_animationFrameOld; // 0x40
	long m_animationPhase; // 0x44
	float m_phaseStartFrame; // 0x48
	float m_drawAnimationFrame; // 0x4C
	SoundId m_waitPlayendSoundID; // 0x50
	SoundId m_nextScneWaitPlayendSoundID; // 0x54
public:
	BattleCallAnimation(const BattleCallAnimation &);
	BattleCallAnimation(BattleCallDefines::EAnimationType::Type);
	virtual ~BattleCallAnimation();
	void clear();
	bool isResourcesActived();
	void setVoiceType(BattleCallDefines::VoiceType);
	float getAnimationFrame();
	BattleCallDefines::AnimationCategory getPlayingAnimationCategory();
	bool isPlayingRoundStartAnimation();
	bool isPlayingKoAnimation();
	bool isPlayingBattleResultAnimation();
	bool isAnimationFinished();
	bool isJustPassedFrame(float);
	void start();
	void update(float);
	void draw();
	void preloadingResources();
	void waitStartAnimation_soundFinish(SoundId);
protected:
	bool createImageDesc(long);
	bool changePhase(long);
	bool changePhase(long, long);
	void playSound(long, const char *);
	void playSound(long, SoundId);
	bool isPlayingSound(SoundId);
	void releaceResources();
	void readResources();
	bool updateAnimations(float);
	void drawAnimations(float);
public:
	BattleCallAnimation & operator=(const BattleCallAnimation &);
};
class BattleCall :
	BattleCallDefines,
	ErrorChecker
{
	struct AnimationParams;
	struct Animation;
private:
	BattleCall::Animation * m_pAnimations; // 0x10
	long m_entryAnimatoinCount; // 0x18
	long m_animationIndex; // 0x1C
	bool m_bActived; // 0x20
	bool m_bAnimationPlaying; // 0x21
	BattleCallDefines::VoiceType m_voiceType; // 0x24
public:
	BattleCall(const BattleCall &);
	BattleCall();
	virtual ~BattleCall();
	bool isAnimationFinished();
	bool isPlayingRoundStartAnimation();
	bool isPlayingKoAnimation();
	bool isPlayingBattleResultAnimation();
	bool isJustPassedFrame(float);
	float getAnimationFrame();
	BattleCallDefines::AnimationCategory getPlayingAnimationCategory();
	void clear();
	void start();
	void update(float);
	void draw();
	void preloadingResources();
	bool isDetermineLoadingFiles();
	void waitStartAnimation_soundFinish(SoundId);
	void setVoiceType(BattleCallDefines::VoiceType);
	void entryAnimation_ReadyGo(STAGE_ID, long);
	void entryAnimation_FinalRoundReadyGo(STAGE_ID);
	void entryAnimation_ExtraRoundReadyGo(STAGE_ID);
	void entryAnimation_ReadyGoOnly(STAGE_ID);
	void entryAnimation_KO(SoundId);
	void entryAnimation_DoubleKO();
	void entryAnimation_TimeUp();
	void entryAnimation_YouWin(bool);
	void entryAnimation_YouLose(bool);
	void entryAnimation_Draw();
	void entryAnimation_PlayerWin(PLAYER_ID, bool);
	void entryAnimation_Perfect();
	void entryAnimation_Complete();
private:
	BattleCallAnimation * getAnimation();
	void entryAnimation(BattleCallDefines::EAnimationType::Type, BattleCall::AnimationParams);
public:
	BattleCall & operator=(const BattleCall &);
};
struct BattleCall::AnimationParams
{
	STAGE_ID stageID; // 0x0
	long battleRound; // 0x4
	SoundId koVoiceSoundID; // 0x8
	PLAYER_ID playerID; // 0xC
	AnimationParams();
	bool isComp(BattleCall::AnimationParams &);
};
struct BattleCall::Animation
{
	BattleCallAnimation * animation; // 0x0
	BattleCallDefines::EAnimationType::Type animationType; // 0x8
	BattleCall::AnimationParams animationParams; // 0xC
	Animation();
};