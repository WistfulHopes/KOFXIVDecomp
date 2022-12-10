#pragma once

class ImageString :
	ErrorChecker
{
	struct EMessageType;
	struct CombinationSetupParams;
	struct CombinationGlyph;
private:
	ImageString::EMessageType::Type m_type; // 0x10
	long m_width; // 0x14
	long m_height; // 0x18
	Image * m_pImage; // 0x20
	long m_imageIndex; // 0x28
	DrawHelper * m_pDrawHelper; // 0x30
	struct FreeMessage;
	ImageString::FreeMessage m_freeMessage; // 0x38
	struct FixedPhrase;
	ImageString::FixedPhrase m_fixedPhrase; // 0x60
	struct Combination;
	ImageString::Combination m_combination; // 0x70
public:
	ImageString(const ImageString &);
	ImageString();
	virtual ~ImageString();
	long getWidth();
	long getHeight();
	void dispose();
	void reset();
	long draw(long, long, const DrawHelper::DrawParams &, bool);
	void setDrawHelper(DrawHelper *);
	bool createFreeMessage(const char *, long, void *, unsigned long);
private:
	void releaseFreeMessage();
	void drawFreeMessage(DrawHelper &, long, long, const DrawHelper::DrawParams &, bool);
public:
	bool createFixedPhrase(Image *, const _C_CONV &);
private:
	void releaseFixedPhrase();
	void drawFixedPhrase(long, long, const DrawHelper::DrawParams &, bool);
public:
	bool createCombination(const char *, Image *, const _C_CONV *, ImageString::CombinationSetupParams &);
	bool createCombination(const char *, Image *, const _C_CONV *, const ImageString::CombinationGlyph *, ImageString::CombinationSetupParams &);
private:
	static const long MAX_MEMBER_NAME_LENGTH; // 0xFFFFFFFFFFFFFFFF
	void releaseCombination();
	void createCombinationSetImageID(short *, const char *, long, ImageString::CombinationSetupParams &);
	void drawCombination(long, long, const DrawHelper::DrawParams &, bool);
public:
	ImageString & operator=(const ImageString &);
};
struct ImageString::EMessageType
{
	enum Type
	{
		None = 0,
		FreeMessage = 1,
		FixedPhrase = 2,
		Combination = 3,
	};
};
struct ImageString::CombinationSetupParams
{
	long imageID_0; // 0x0
	long imageID_A; // 0x4
	long imageID_a; // 0x8
	long imageID_underscore; // 0xC
	long imageID_hyphen; // 0x10
	CombinationSetupParams();
	bool isEnable();
};
struct ImageString::CombinationGlyph
{
	long upperMarginSX; // 0x0
	long upperMarginEX; // 0x4
	long lowerMarginSX; // 0x8
	long lowerMarginEX; // 0xC
	long centerMarginSX; // 0x10
	long centerMarginEX; // 0x14
};
struct ImageString::FreeMessage
{
	char * pMessage; // 0x0
	long messageLength; // 0x8
	long fontSize; // 0xC
	Image * pImage; // 0x10
	void * pTexuteBuffer; // 0x18
	unsigned long textureBufferSize; // 0x20
	FreeMessage();
};
struct ImageString::FixedPhrase
{
	_C_CONV rect; // 0x0
	FixedPhrase();
};
struct ImageString::Combination
{
	const _C_CONV * pRects; // 0x0
	const ImageString::CombinationGlyph * pGlyphs; // 0x8
	short * pImageIndexes; // 0x10
	short * pImageRenderPos; // 0x18
	short imageIndexCount; // 0x20
	Combination();
};