#pragma once

class DrawHelper :
	ErrorChecker
{
	struct ERenderMode;
	struct ERenderAlign;
	struct DrawParams;
	struct ImageInfo;
private:
	long m_imageID; // 0x10
public:
	void changeBufferSize(long, DrawHelper::ERenderMode::Type, long);
	void draw(long, long, long);
	void draw(long, long, long, const _C_CONV &);
	void draw(long, long, long, const DrawHelper::DrawParams &);
	void draw(long, long, long, const _C_CONV &, const DrawHelper::DrawParams &, bool);
	void drawStack();
	void setClip(long, long, long, long);
	void clearClip();
	long getImageID(Image *);
protected:
	void releaseImpl();
	DrawHelper::ImageInfo * createImageInfo(long);
	DrawHelper::ImageInfo * getImageInfo(long);
public:
	DrawHelper(const DrawHelper &);
	DrawHelper();
	virtual ~DrawHelper();
	void release();
	long setupImage(Image *);
	static long convertRenderMode(DrawHelper::ERenderMode::Type);
	DrawHelper & operator=(const DrawHelper &);
};
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
struct BattleHudGauge::ActivityScoreParams
{
	bool bVisible; // 0x0
	BattleEventHandler::EActivity::Type type; // 0x4
	long score; // 0x8
	long animationCounter; // 0xC
};
struct BattleHudGauge::MessageInfo
{
	BattleHudGauge::MessageID messageId; // 0x0
	float visibleCounter; // 0x4
	float pos; // 0x8
	float movePos; // 0xC
};
struct BattleHudGauge::ImageResource
{
	long imageID; // 0x0
	extension::BasicFutureObject<Image,extension::FutureImageOption> image; // 0x8
	ImageResource(BattleHudGauge::ImageResource &);
	ImageResource(const BattleHudGauge::ImageResource &);
	ImageResource();
	~ImageResource();
	BattleHudGauge::ImageResource & operator=(BattleHudGauge::ImageResource &);
	BattleHudGauge::ImageResource & operator=(const BattleHudGauge::ImageResource &);
};
struct BattleHudGauge::MemberInfo
{
	CHARACTER_NO characterNo; // 0x0
	bool bAlive; // 0x4
	long orderIndex; // 0x8
	BattleHudGauge::ImageResource imageFace; // 0x10
	struct OnlineParams;
	BattleHudGauge::MemberInfo::OnlineParams * pOnlineParams; // 0x28
	MemberInfo(BattleHudGauge::MemberInfo &);
	MemberInfo(const BattleHudGauge::MemberInfo &);
	MemberInfo();
	~MemberInfo();
	BattleHudGauge::MemberInfo & operator=(BattleHudGauge::MemberInfo &);
	BattleHudGauge::MemberInfo & operator=(const BattleHudGauge::MemberInfo &);
};
struct BattleHudGauge::MemberInfo::OnlineParams
{
	unsigned long long playerOnlineID; // 0x0
	extension::GFXIText * textPlayerID; // 0x8
	ImageString stringChatMessage; // 0x10
	BattleHudGauge::ImageResource imageChatFace; // 0xA8
	extension::BasicFutureObject<Image,extension::FutureImageOption> imageTitle; // 0xC0
	extension::BasicFutureObject<Image,extension::FutureImageOption> imageRank; // 0xD0
	long chatMessageRenderCounter; // 0xE0
	float chatWindowScaleSize; // 0xE4
	long battleWins; // 0xE8
	OnlineParams(BattleHudGauge::MemberInfo::OnlineParams &);
	OnlineParams(const BattleHudGauge::MemberInfo::OnlineParams &);
	OnlineParams();
	~OnlineParams();
	BattleHudGauge::MemberInfo::OnlineParams & operator=(BattleHudGauge::MemberInfo::OnlineParams &);
	BattleHudGauge::MemberInfo::OnlineParams & operator=(const BattleHudGauge::MemberInfo::OnlineParams &);
};
BattleHudGauge::MemberInfo::OnlineParams::OnlineParams(); // 0x1400C04D0
BattleHudGauge::MemberInfo::MemberInfo(); // 0x1400C05D0
struct BattleHudGauge::ComboInfo
{
	long number; // 0x0
	float startFrame; // 0x4
	float eraseFrame; // 0x8
};
struct BattleHudGauge::AppearanceParams
{
	bool bPlaying; // 0x0
	float animationFrame; // 0x4
	float gaugeColorAlpha; // 0x8
	float barColorAlpha; // 0xC
};
struct BattleHudGauge::ActivityStackParams
{
	BattleEventHandler::EActivity::Type type; // 0x0
	long score; // 0x4
};