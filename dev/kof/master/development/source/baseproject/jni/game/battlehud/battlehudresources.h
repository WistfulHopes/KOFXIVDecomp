#pragma once

class Image :
	OGLTexture
{
public:
	Image(const Image &);
	Image(OGLTexture *);
	Image();
	virtual ~Image();
	static Image * createImage(const char *, long, long, unsigned char *, long);
	static Image * createImageBuf(unsigned char *, long, long, unsigned char *, long);
	static Image * createImageBuf2(unsigned char *, long, long, long, long);
	long loadImage(const char *, long, long, unsigned char *, long);
	long loadImageBuf(unsigned char *, long, long, unsigned char *, long);
	long loadImageBuf2(unsigned char *, long, long, long, long);
	long loadSubImageBuf(unsigned char *, long, long, unsigned char *, long);
	void dispose();
	Image & operator=(const Image &);
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
struct BattleHudResources::EImage
{
	enum Type
	{
		COMMON = 0,
		PLAYER_ID = 1,
		STRINGS = 2,
		FIXED_PHRASE = 3,
		MAX = 4,
	};
};
struct BattleHudResources::ImageResource
{
	long imageID; // 0x0
	extension::BasicFutureObject<Image,extension::FutureImageOption> image; // 0x8
	ImageResource(BattleHudResources::ImageResource &);
	ImageResource(const BattleHudResources::ImageResource &);
	ImageResource();
	~ImageResource();
	BattleHudResources::ImageResource & operator=(BattleHudResources::ImageResource &);
	BattleHudResources::ImageResource & operator=(const BattleHudResources::ImageResource &);
};
BattleHudResources::ImageResource::ImageResource(); // 0x1400CD190
struct BattleHudResources::errorWorkaround
{
	_C_CONV rect; // 0x0
	ImageString string; // 0x10
	errorWorkaround(BattleHudResources::errorWorkaround &);
	errorWorkaround(const BattleHudResources::errorWorkaround &);
	errorWorkaround();
	~errorWorkaround();
	BattleHudResources::errorWorkaround & operator=(BattleHudResources::errorWorkaround &);
	BattleHudResources::errorWorkaround & operator=(const BattleHudResources::errorWorkaround &);
};