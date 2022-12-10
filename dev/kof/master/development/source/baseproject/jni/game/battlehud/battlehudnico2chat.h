#pragma once

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
struct BattleHudNico2Chat::Message
{
	bool bActive; // 0x0
	ImageString stringPlayerID; // 0x8
	ImageString stringMessage; // 0xA0
	unsigned long color; // 0x138
	long x; // 0x13C
	long y; // 0x140
	long width; // 0x144
	Message(BattleHudNico2Chat::Message &);
	Message(const BattleHudNico2Chat::Message &);
	Message();
	~Message();
	BattleHudNico2Chat::Message & operator=(BattleHudNico2Chat::Message &);
	BattleHudNico2Chat::Message & operator=(const BattleHudNico2Chat::Message &);
};
BattleHudNico2Chat::Message::Message(); // 0x1400C28F0
struct BattleHudNico2Chat::Stack
{
	char * pPlayerID; // 0x0
	char * pMessage; // 0x8
	unsigned long color; // 0x10
	Stack();
};