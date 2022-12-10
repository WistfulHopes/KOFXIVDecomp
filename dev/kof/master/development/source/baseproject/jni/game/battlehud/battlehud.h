#pragma once

class BattleHudGauge
{
	enum MessageID
	{
		SYSTEM_MES_NONE = 0,
		SYSTEM_MES_ADVANCED_CANCEL = 1,
		SYSTEM_MES_COUNTER = 2,
		SYSTEM_MES_GUARD_CRASH = 3,
		SYSTEM_MES_REVERSAL = 4,
		SYSTEM_MES_STUN = 5,
		SYSTEM_MES_SUPER_CANCEL = 6,
		SYSTEM_MES_CLIMAX_CANCEL = 7,
		SYSTEM_MES_MAX = 8,
	};
	enum ClimaxPowerSize
	{
		CLIMAX_GAUGE_SIZE_S = 0,
		CLIMAX_GAUGE_SIZE_M = 1,
		CLIMAX_GAUGE_SIZE_L = 2,
	};
	enum HpRedBarState
	{
		STATE_HPREDBAR_NONE = 0,
		STATE_HPREDBAR_STOP = 1,
		STATE_HPREDBAR_PLAY = 2,
	};
	enum VoiceType
	{
		VOICETYPE_SYSTEM = 0,
		VOICETYPE_MALE = 1,
		VOICETYPE_FEMALE = 2,
	};
	struct ActivityScoreParams;
	struct MessageInfo;
	struct ImageResource;
	struct MemberInfo;
	struct ComboInfo;
private:
	BattleHudResources * m_pResources; // 0x0
	BattleHudRenderer * m_pRenderer; // 0x8
	bool m_bLoading; // 0x10
	PLAYER_ID m_playerID; // 0x14
	BattleHudGauge::MemberInfo m_memberInfos[3]; // 0x18
	long m_topOrderIndex; // 0xA8
	bool m_bPartyBattle; // 0xAC
	bool m_bPlaySoundFlag; // 0xAD
	BattleHudGauge::VoiceType m_voiceType; // 0xB0
	float m_animationCounter; // 0xB4
	float m_hpRate; // 0xB8
	float m_hpRateRedStart; // 0xBC
	float m_hpRateRed; // 0xC0
	float m_hpRedSpeed; // 0xC4
	float m_hpLostAnimationCounter; // 0xC8
	BattleHudGauge::HpRedBarState m_hpRedState; // 0xCC
	float m_hpGuardDamageTimer; // 0xD0
	float m_guardRate; // 0xD4
	bool m_bGuardDanger; // 0xD8
	float m_guardAnimationFrame; // 0xDC
	float m_powerRate; // 0xE0
	long m_powerStock; // 0xE4
	bool m_bPowerMax; // 0xE8
	float m_powerStockAnimationCounter; // 0xEC
	float m_powerMaxStockAnimationCounter; // 0xF0
	float m_maxModeStartAnimationCounter; // 0xF4
	long m_powerMax; // 0xF8
	long m_power; // 0xFC
	long m_comboCount; // 0x100
	bool m_bComboVisible; // 0x104
	float m_comboAnimationCounter; // 0x108
	float m_comboEraseFrame; // 0x10C
	float m_comboChangeFrame; // 0x110
	BattleHudGauge::MessageInfo m_messageInfo[10]; // 0x114
	long m_messageInfoIndexTop; // 0x1B4
	long m_messageInfoIndexBottom; // 0x1B8
	bool m_bVisibleClimaxGauge; // 0x1BC
	float m_climaxRate; // 0x1C0
	long m_climaxAnimationCounter; // 0x1C4
	BattleHudGauge::ClimaxPowerSize m_climaxGaugeSize; // 0x1C8
	bool m_bStunDanger; // 0x1CC
	bool m_bStunEnableAnimation; // 0x1CD
	float m_stunAnimationCounter; // 0x1D0
	long m_drinkCount; // 0x1D4
	long m_setCount; // 0x1D8
	long m_setWinCount; // 0x1DC
	long m_oldRenderTime; // 0x1E0
	float m_timerAnimationCounter; // 0x1E4
	struct AppearanceParams;
	BattleHudGauge::AppearanceParams m_appearanceParams; // 0x1E8
	bool m_bEnabledSpEffects; // 0x1F8
	BattleHudGauge::ActivityScoreParams * m_pActivites; // 0x200
	struct ActivityStackParams;
	BattleHudGauge::ActivityStackParams * m_pActivityStacks; // 0x208
	long m_activityStackCount; // 0x210
	long m_activityStackIndex; // 0x214
	BattleHudGauge::MemberInfo m_errorMember; // 0x218
public:
	BattleHudGauge(const BattleHudGauge &);
	BattleHudGauge(BattleHudResources *, BattleHudRenderer *, PLAYER_ID, BattleHudGauge::VoiceType);
	~BattleHudGauge();
	void initialize();
	void setMember(long, CHARACTER_NO);
	void setupOnlineParams(unsigned long long, long, long, long);
	void setupMemberOnlineParams(long, unsigned long long, long, long, long);
	void HideName();
	const BattleHudGauge::MemberInfo * getMember(long);
	BattleHudGauge::MemberInfo * getMember(long);
	bool isDetermineLoadingFiles();
	void updateResources(DrawHelper *);
	void setTopMemberOrderIndex(long);
	void roundInit();
	void update(float);
	void setPlaySoundSwitch(bool);
	void changeHp(long, long, bool);
	void setHp(long, long);
	void changeGuard(long, long);
	void setGuard(long, long);
	void changePower(long, long);
	void setPower(long, long, bool);
	void changeComboCount(long);
	void clearComboCount();
	void setBattleMessage(BattleHudGauge::MessageID);
	void setClimax(long, long);
	void visibleClimaxGauge(bool);
	void setStun(long, long);
	void comboFinish();
	void setDrinkCount(long);
	void setRoundCount(long, long);
	bool isMaxMode();
	CHARACTER_NO getMemberCharacterNo(long);
	void stopSpEffects();
	void startSpEffects();
	void setActivityBonus(BattleEventHandler::EActivity::Type, long);
	void drawUpperGauge(BattleHudRenderer::RenderParams &);
	void drawUpperGaugeCharacterFace(BattleHudRenderer::RenderParams &);
	void drawUpperGaugeTeamMembers(BattleHudRenderer::RenderParams &);
	void drawUpperGaugeSetCount(BattleHudRenderer::RenderParams &);
	void drawUpperGaugeActivityBonus(BattleHudRenderer::RenderParams &);
	void drawLowerGauge(BattleHudRenderer::RenderParams &);
	bool setChatMessageByFreeMessage(const char *, const char *, long);
	bool setChatMessageByFixedPhrase(unsigned long long, const char *);
private:
	void clearParams();
	void playHpRedGaugeAction();
	SoundId getBattleMessageSoundID(BattleHudGauge::VoiceType, BattleHudGauge::MessageID);
	void playSound(SoundId);
	BattleHudGauge::MemberInfo * findMemberByOnlineID(unsigned long long);
public:
	long getActivityScoreCount();
	const BattleHudGauge::ActivityScoreParams * getActivityScore(long);
private:
	void activity_initParams();
	void activity_clearParams();
	void activity_disposeParams();
	void activity_setVisible(bool);
	void activity_update(float);
	bool activity_setMessage(BattleEventHandler::EActivity::Type, long, bool);
public:
	BattleHudGauge & operator=(const BattleHudGauge &);
};
class BattleHudKeyHistory
{
private:
	bool m_bError; // 0x8
	bool m_bImageLoading; // 0x9
	extension::BasicFutureObject<Image,extension::FutureImageOption> * m_pImage; // 0x10
public:
	BattleHudKeyHistory(const BattleHudKeyHistory &);
	BattleHudKeyHistory();
	~BattleHudKeyHistory();
	void setupResources();
	bool isResouceLoading();
	bool isError();
	void draw(long, long, InputKeyHistory *, bool);
private:
	void dataClear();
public:
	BattleHudKeyHistory & operator=(const BattleHudKeyHistory &);
};
class BattleHudRenderer :
	DrawHelperVertexBuffer,
	BattleHudLocalize,
	BattleHudCommonNumbers
{
	struct RenderParams;
private:
	BattleHudResources * m_pResources; // 0x58
	_C_CONV m_errorRect; // 0x60
public:
	BattleHudRenderer(const BattleHudRenderer &);
	BattleHudRenderer();
	virtual ~BattleHudRenderer();
	void dispose();
	void setCommonResources(BattleHudResources *);
	void renderHpGauge(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderGuardGauge(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderSetCount(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderCharacterFace(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderMemberInfo(BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderActivityBonus(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
private:
	long renderMemberNameWindow(const BattleHudGauge &, long, long, long, const BattleHudRenderer::RenderParams &);
	void renderMemberName(const BattleHudGauge &, long, long, long, const BattleHudRenderer::RenderParams &);
public:
	void renderPowerGauge(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderMaxmodeGauge(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderSakeCount(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderComboCount(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
	void renderMessage(const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
private:
	void renderComboNumber(long, long, long, const DrawHelper::DrawParams &);
public:
	void renderTimer(long, float, float, const BattleHudRenderer::RenderParams &);
	void renderStageNo(long, const BattleHudRenderer::RenderParams &);
	void renderUserInfoStoryMode(long, const BattleHudRenderer::RenderParams &);
	void renderUserInfoVersus(long, long, bool, bool, const BattleHudRenderer::RenderParams &);
	void renderUserInfoTimeattackMode(unsigned long, const BattleHudRenderer::RenderParams &);
	void renderUserInfoSurvivalMode(long, const BattleHudRenderer::RenderParams &);
	void renderUserInfoTrainingMode(const BattleHudRenderer::RenderParams &);
	void renderUserInfoTrialMode(const BattleHudRenderer::RenderParams &);
	void renderUserInfoOnlineMode(const BattleHudGauge &, const BattleHudGauge &, const BattleHudRenderer::RenderParams &);
private:
	void renderUserInfoPlayerSymbol(const BattleHudRenderer::RenderParams &);
public:
	void renderAttackData(PLAYER_ID, long, long, long, long);
	void renderKeyRecording(long, long, const BattleHudRenderer::RenderParams &);
	void renderKeyPlaying(long, long, long, const BattleHudRenderer::RenderParams &);
	void renderKeyReady(long, long, long, const BattleHudRenderer::RenderParams &);
	void renderEntering(const BattleHudRenderer::RenderParams &);
	void renderReversalReplay(const BattleHudRenderer::RenderParams &, long);
	void renderReplayDescription(long, long, float);
	void renderReplayOperateIcon(long, long, BattleHudCommonNumbers::EReplayIcon::Type);
	void renderRoomMemberInfo(BattleHudRoomMember &, long, long, float);
	void renderSEShortcutKey(long, long, BattleHudCommonNumbers::ESESelectorPage::Type, BattleHudCommonNumbers::ESESelectorSelectKey::Type, float);
	void renderOperateDescription(long, BattleHudCommonNumbers::EOperateDescription::Type, float);
	void renderOperateCharacterSymbol(PLAYER_ID, long, long, float);
private:
	void renderOnlineWindow(long, long, long, long, float);
	long renderMemberChatLog(BattleHudGauge &, long, long, long, const BattleHudRenderer::RenderParams &);
	long renderMemberChatLogWindow(PLAYER_ID, long, long, float, float);
	long renderImage(long, long, long, long, const DrawHelper::DrawParams &);
	long renderImage(Image *, long, long, const DrawHelper::DrawParams &);
	long renderImageConv(long, long, long, long, const DrawHelper::DrawParams &);
	long getDigit(long);
	long renderImageNmber(long, long, long, long, const DrawHelper::DrawParams &);
	long renderImageNmber(long, long, long, long, const DrawHelper::DrawParams &, BattleHudResources::EImage::Type);
	long renderImageNmber(long, long, long, long, long, const DrawHelper::DrawParams &);
	long renderImageNmber(long, long, long, long, long, const DrawHelper::DrawParams &, BattleHudResources::EImage::Type);
	long renderImageConvNmber(long, long, long, long, const DrawHelper::DrawParams &);
	long renderImageConvNmber(long, long, long, long, const DrawHelper::DrawParams &, BattleHudResources::EImage::Type);
	long renderImageConvNmber(long, long, long, long, long, const DrawHelper::DrawParams &);
	long renderImageConvNmber(long, long, long, long, long, const DrawHelper::DrawParams &, BattleHudResources::EImage::Type);
	long renderImageTitle(Image *, long, long, const DrawHelper::DrawParams &);
public:
	BattleHudRenderer & operator=(const BattleHudRenderer &);
};
class BattleHudResources :
	BattleHudLocalize,
	ErrorChecker
{
	struct EImage;
	struct ImageResource;
private:
	bool m_bLoading; // 0x10
	BattleHudResources::ImageResource * m_pCommons; // 0x18
	ImageString::CombinationGlyph * m_pImageFontGlypsPlayerID; // 0x20
	ImageString::CombinationGlyph * m_pImageFontGlypsChatPlayerID; // 0x28
	struct errorWorkaround;
	BattleHudResources::errorWorkaround m_errorWorkaround; // 0x30
public:
	BattleHudResources(const BattleHudResources &);
	BattleHudResources();
	virtual ~BattleHudResources();
	void dispose();
	bool isActived();
	void readCommonsImages();
	void readCharacterFaceImage(extension::BasicFutureObject<Image,extension::FutureImageOption> *, PLAYER_ID, CHARACTER_NO);
	void readChatFaceImage(extension::BasicFutureObject<Image,extension::FutureImageOption> *, PLAYER_ID, CHARACTER_NO);
	void readOnlineCommonsImages();
	void readPlayerTitleImage(extension::BasicFutureObject<Image,extension::FutureImageOption> *, long);
	void readPlayerRankImage(extension::BasicFutureObject<Image,extension::FutureImageOption> *, long);
	bool isDetermineLoadingFiles();
	void strationImagesByDrawHelper(DrawHelper *);
	Image * getImage(BattleHudResources::EImage::Type);
	long getImageID(BattleHudResources::EImage::Type);
	const _C_CONV * getImageRect(BattleHudResources::EImage::Type, long);
	bool createStringByOnlineID(ImageString &, const char *);
	bool createStringByChatPlayerID(ImageString &, const char *);
	bool createStringFixedPhrase(ImageString &, const char *);
	BattleHudResources & operator=(const BattleHudResources &);
};
class BattleHudNico2Chat :
	ErrorChecker
{
public:
	BattleHudResources * m_pResources; // 0x10
	DrawHelperVertexAddColor * m_pDrawHelper; // 0x18
	struct Message;
	BattleHudNico2Chat::Message * m_pMessages; // 0x20
	long m_messageUseCount; // 0x28
	struct Stack;
	BattleHudNico2Chat::Stack * m_pStacks; // 0x30
	long m_stackUseCount; // 0x38
	long m_stackTopIndex; // 0x3C
	BattleHudNico2Chat(const BattleHudNico2Chat &);
	BattleHudNico2Chat(BattleHudResources *);
	virtual ~BattleHudNico2Chat();
	void clear();
	long getMessageBufferSize();
	long getMessageCount();
	void update(float);
	void draw();
	void entryMessage(const char *, const char *, unsigned long);
	BattleHudNico2Chat & operator=(const BattleHudNico2Chat &);
};
class BattleHud :
	protected BattleEventHandler::Listener,
	ErrorChecker,
	BattleHudCommonNumbers
{
	enum VisibleFlags
	{
		VISIBLEFLAG_UPPER_GAUGE = 1,
		VISIBLEFLAG_LOWER_GAUGE = 2,
		VISIBLEFLAG_COMBO_COUNT = 4,
		VISIBLEFLAG_SYSTEM_MESSAGE = 8,
		VISIBLEFLAG_OFF = 0,
		VISIBLEFLAG_ON = 255,
		VISIBLEFLAG_GAUGE = 3,
	};
	struct EOnlineVisibleFlag;
	struct EPlayerInfoType;
	struct AttackData;
private:
	BattleHud::EPlayerInfoType::Type m_playerInfoType; // 0x18
	bool m_bInitialize; // 0x1C
	bool m_bResoucesActived; // 0x1D
	struct PlayerStatusPrev;
	BattleHud::PlayerStatusPrev m_playerStatusPrev[2]; // 0x20
	BattleHudGauge * m_pGauges[2]; // 0x80
	long m_timer; // 0x90
	float m_timerAnimationFrame; // 0x94
	long m_stageNo; // 0x98
	float m_animationFrame; // 0x9C
	long m_visibleFlags; // 0xA0
	long m_onlineVisibleFlags; // 0xA4
	struct AppearanceAnimationParams;
	BattleHud::AppearanceAnimationParams m_appearanceAnimationParams; // 0xA8
	struct RenderParams;
	BattleHud::RenderParams m_gaugeRenderParams; // 0xBC
	BattleHudKeyHistory * m_pKeyHistory; // 0xD8
	BattleHudNico2Chat * m_pNico2Chat; // 0xE0
	BattleHudRenderer * m_pRenderer; // 0xE8
	BattleHudResources * m_pResources; // 0xF0
	EasingNumber m_fadeAnimRoomID; // 0xF8
	EasingNumber m_fadeAnimSESelector; // 0x10C
	BattleHudCommonNumbers::ESESelectorPage::Type m_seSelectorPage; // 0x120
	BattleHudCommonNumbers::ESESelectorSelectKey::Type m_seSelectorKey; // 0x124
	float m_descriptVisibleCount; // 0x128
	EasingNumber m_fadeAnimReplaySystem; // 0x12C
	EasingNumber m_fadeAnimReplayUser; // 0x140
	bool m_bReplayDescriptionVisibled; // 0x154
	struct UserCharacterSymbol;
	BattleHud::UserCharacterSymbol m_userCharacterSymbol; // 0x158
	struct PlayerInfo;
	BattleHud::PlayerInfo m_playerInfo; // 0x17C
public:
	BattleHud(const BattleHud &);
	BattleHud();
	virtual ~BattleHud();
	void dispose();
	void initialize();
	bool isDetermineLoadingFiles();
	void setupBattleParams(ActionSystem *);
	void update(ActionSystem *, float);
	void drawUpperGauge();
	void drawLowerGauge();
	void drawComboCount();
	void drawKeyHistory(PLAYER_ID, InputKeyHistory *, bool);
	void drawAttackData(BattleHud::AttackData *, BattleHud::AttackData *);
	void drawKeyRecordingFrame(long, long);
	void drawKeyPlayingFrame(long, long, long);
	void drawKeyReadyFrame(long, long, long);
	void drawEntering();
	void drawReversalReplay();
	void setVisibleFlags(long);
	void setOnlineVisibleFlag(BattleHud::EOnlineVisibleFlag::Type, bool);
	void setRenderPositionUpperGauge(long);
	void setRenderPositionLowerGauge(long);
	void setRenderPositionComboAndSystemMessage(long, long);
	void setTimerCount(long);
	void setTimerCountInfinity();
	void setStageNo(long);
	void HideNames();
	bool HasFlags(long);
private:
	void drawUserInfo();
public:
	void startAppearanceAnimation();
private:
	void updateAppearanceAnimation(float);
public:
	void setupReplayParams();
	void fadeReplayDecription();
	void renderReplayDescription(float, float);
	void renderReplayOperateIcon(long, long, BattleHudCommonNumbers::EReplayIcon::Type);
private:
	void systemFadeReplayDecription(bool);
public:
	void initializeOnlineParams();
	void setupOnlineParamsByGameStart();
	bool isOnlineUserCharacterSymbolVisibled();
	void setOnlineUserCharacterSymbol(PLAYER_ID);
	void setOnlineUserCharacterSymbolPos(long, long);
	void setupOnlineTeamMember(long, PLAYER_ID, long, unsigned long long, long, long, long);
	void setupOnlineTeamMember(long, PLAYER_ID, unsigned long long, long, long, long);
	void entryOnlineChatMessage(unsigned long long, const char *, unsigned long);
	void visibleOperateDescription(BattleHudCommonNumbers::EOperateDescription::Type);
	void visibleOperateDescriptionBattleStart();
	void visibleOnlineUserInfo(bool);
	void visibleOnlineSEShortcutKey(bool);
	void setOnlieSEShortcutKey(BattleHudCommonNumbers::ESESelectorPage::Type, BattleHudCommonNumbers::ESESelectorSelectKey::Type);
	PLAYER_ID findOnlineBattlePlayerByOnlineID(unsigned long long);
	void drawOnline();
	void drawOnlineOperateDescription(BattleHudCommonNumbers::EOperateDescription::Type);
	void drawOnlineNico2ChatMessages();
	void hideUsernames();
private:
	void updateOnline(float);
	void fadeOutOnlineUserCharacterSymbol();
	virtual void OnEventRoundStartReady(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventCharacterActivity(PLAYER_ID, BattleEventHandler::EActivity::Type, long);
	virtual void OnEventRoundStartGO(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventRoundEndKO(STAGE_ID, BattleEventHandler::Listener::BattleResult, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventRoundStartFadeIn(STAGE_ID, long);
	virtual void OnEventRoundStartRound(STAGE_ID, long, const BattleEventHandler::Listener::CharacterStatus *);
	virtual void OnEventCharacterDamage(BattleEventHandler::Listener::SkillType, PLAYER_ID, long, long, long, long, const BattleEventHandler::Listener::CharacterStatus *);
public:
	void Debug_setSystemMessage(long, long);
	long Debug_getSystemMessageMax();
	void Debug_dummyOnlineOperation(bool);
private:
	void Debug_initialize();
	void Debug_release();
	void Debug_setupResources();
	void Debug_update();
public:
	bool Debug_isDummyOnlineOperation();
	void Debug_entryOnlineMembers();
	void Debug_entryOnlineChatMessage(const char *);
	BattleHud & operator=(const BattleHud &);
};
struct BattleHud::EOnlineVisibleFlag
{
	enum Type
	{
		RoomMember = 1,
		SEKey = 2,
		Nico2Log = 4,
		All = 255,
	};
};
struct BattleHud::EPlayerInfoType
{
	enum Type
	{
		Offline = 0,
		Online = 1,
	};
};
struct BattleHud::AttackData
{
	long oneHitDamage; // 0x0
	long comboDamage; // 0x4
	long oneHitStun; // 0x8
	long totalStun; // 0xC
	AttackData();
};
struct BattleHud::PlayerStatusPrev
{
	long iVital; // 0x0
	long iExPower; // 0x4
	long iExPowerMax; // 0x8
	long iClimaxTime; // 0xC
	long iGuardPower; // 0x10
	long iStunPower; // 0x14
	long iCombo; // 0x18
	long iDrink; // 0x1C
	bool bClimaxMode; // 0x20
	bool bCounter; // 0x21
	bool bGuardCrash; // 0x22
	bool bStun; // 0x23
	bool bSuperCancel; // 0x24
	bool bAdvancedCancel; // 0x25
	bool bClimaxCancel; // 0x26
	bool bReversal; // 0x27
	bool bComboDamage; // 0x28
	bool bDamage; // 0x29
	bool bBoundDamage; // 0x2A
	CharaAttackData::SKILL_TYPE::ID damageSkillType; // 0x2C
};
struct BattleHud::AppearanceAnimationParams
{
	bool bPlaying; // 0x0
	float animationFrame; // 0x4
	unsigned long gaugeColor; // 0x8
	unsigned long barColor; // 0xC
	float barLength; // 0x10
};
struct BattleHud::RenderParams
{
	long upperGaugePositionPlusY; // 0x0
	long lowerGaugePositionPlusY; // 0x4
	long systemMessagePositionPlusX; // 0x8
	long systemMessagePositionPlusY; // 0xC
	unsigned long gaugeRenderColor; // 0x10
	unsigned long barRenderColor; // 0x14
	float barLengthRate; // 0x18
	RenderParams();
	void setDefaultParam();
};
struct BattleHud::UserCharacterSymbol
{
	bool bEnabled; // 0x0
	bool bUsed; // 0x1
	PLAYER_ID playerID; // 0x4
	long x; // 0x8
	long y; // 0xC
	EasingNumber alpha; // 0x10
	UserCharacterSymbol();
	~UserCharacterSymbol();
};
struct BattleHud::PlayerInfo
{
	struct <unnamed-type-versus>;
	BattleHud::PlayerInfo::<unnamed-type-versus> versus; // 0x0
	struct <unnamed-type-suvival>;
	BattleHud::PlayerInfo::<unnamed-type-suvival> suvival; // 0xC
};
struct BattleHud::PlayerInfo::<unnamed-type-versus>
{
	bool bPlayerCpu[2]; // 0x0
	long winCount[2]; // 0x4
};
struct BattleHud::PlayerInfo::<unnamed-type-suvival>
{
	long winCount; // 0x0
};