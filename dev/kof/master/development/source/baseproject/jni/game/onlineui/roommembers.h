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
class RoomMembers :
	ErrorChecker
{
	struct EVoiceChat;
	struct Member;
private:
	bool m_bInitialize; // 0x10
	bool m_bResourcesEnabled; // 0x11
	DrawHelperVertexAddColor * m_pDrawHelper; // 0x18
	extension::BasicFutureObject<Image,extension::FutureImageOption> m_image; // 0x20
	long m_imageIndex; // 0x30
	RoomMembers::Member m_members[12]; // 0x38
	EasingNumber m_alpha; // 0x9F8
	ImageString::CombinationGlyph * m_pImageFontGlyps; // 0xA10
	struct ErrorParam;
	RoomMembers::ErrorParam m_errorParam; // 0xA18
public:
	RoomMembers(const RoomMembers &);
	RoomMembers();
	virtual ~RoomMembers();
	void dispose();
	void readResources();
	void update(float);
	void draw(long, long);
	void setMember(long, unsigned long long, RANKMATCH_DISCONNECT_MARKER);
	void setMember(long, unsigned long long, PLAYER_ID, RANKMATCH_DISCONNECT_MARKER);
	void clearMember(long);
	void clearMembersAll();
	void setMemberParamVoiceChat(long, RoomMembers::EVoiceChat::Type);
	void setMemberParamCheckSymbol(long, bool);
	long getMemberCount();
	const RoomMembers::Member * getMember(long);
	const RoomMembers::Member * findMemberByOnlineID(unsigned long long);
	void setVisible(bool);
	void switchingVisible(bool);
	void switchingVisible();
private:
	bool isDetermineLoadingFiles();
	RoomMembers::Member & getMemberDirect(long);
	void renderWindow(long, long, long, long, float);
	void Debug_init();
public:
	void Debug_entryMembers();
	RoomMembers & operator=(const RoomMembers &);
};
struct RoomMembers::EVoiceChat
{
	enum Type
	{
		ACTIVE = 0,
		ON = 1,
		OFF = 2,
	};
};
enum RoomMembers::EVoiceChat::Type
{
	ACTIVE = 0,
	ON = 1,
	OFF = 2,
};
struct RoomMembers::Member
{
	bool bActive; // 0x0
	unsigned long long onlineID; // 0x8
	ImageString strOnlineID; // 0x10
	unsigned long color; // 0xA8
	RoomMembers::EVoiceChat::Type voiceChatType; // 0xAC
	bool bCheckSymbol; // 0xB0
	long roomIndex; // 0xB4
	PLAYER_ID playerID; // 0xB8
	long battleOrderIndex; // 0xBC
	long titleID; // 0xC0
	long gradeID; // 0xC4
	RANKMATCH_DISCONNECT_MARKER rankMatchDisconnectMarker; // 0xC8
	Member(RoomMembers::Member &);
	Member(const RoomMembers::Member &);
	Member();
	~Member();
	RoomMembers::Member & operator=(RoomMembers::Member &);
	RoomMembers::Member & operator=(const RoomMembers::Member &);
};
RoomMembers::Member::Member(); // 0x140170FD0
struct RoomMembers::ErrorParam
{
	RoomMembers::Member member; // 0x0
	ErrorParam(RoomMembers::ErrorParam &);
	ErrorParam(const RoomMembers::ErrorParam &);
	ErrorParam();
	~ErrorParam();
	RoomMembers::ErrorParam & operator=(RoomMembers::ErrorParam &);
	RoomMembers::ErrorParam & operator=(const RoomMembers::ErrorParam &);
};