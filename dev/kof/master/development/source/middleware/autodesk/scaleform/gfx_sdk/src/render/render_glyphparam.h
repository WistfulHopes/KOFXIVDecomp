#pragma once

enum Scaleform::Render::TextLayerType
{
	TextLayer_Background = 0,
	TextLayer_Selection = 1,
	TextLayer_Shadow = 2,
	TextLayer_ShadowText = 3,
	TextLayer_RasterText = 4,
	TextLayer_PackedText = 5,
	TextLayer_PackedDFAText = 6,
	TextLayer_Images = 7,
	TextLayer_Shapes = 8,
	TextLayer_Underline = 9,
	TextLayer_Cursor = 10,
	TextLayer_Mask = 11,
	TextLayer_Shapes_Masked = 12,
	TextLayer_Underline_Masked = 13,
};
enum Scaleform::Render::TextUnderlineStyle
{
	TextUnderline_Single = 0,
	TextUnderline_Thick = 1,
	TextUnderline_Dotted = 2,
	TextUnderline_DottedThick = 3,
	TextUnderline_Dithered = 4,
	TextUnderline_DitheredThick = 5,
};
class Scaleform::RefCountBase<Scaleform::Render::TextureGlyph,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::TextureGlyph,2>(Scaleform::RefCountBase<Scaleform::Render::TextureGlyph,2> &);
	RefCountBase<Scaleform::Render::TextureGlyph,2>(const Scaleform::RefCountBase<Scaleform::Render::TextureGlyph,2> &);
	RefCountBase<Scaleform::Render::TextureGlyph,2>();
	virtual ~RefCountBase<Scaleform::Render::TextureGlyph,2>();
	Scaleform::RefCountBase<Scaleform::Render::TextureGlyph,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::TextureGlyph,2> &);
	Scaleform::RefCountBase<Scaleform::Render::TextureGlyph,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::TextureGlyph,2> &);
};
struct Scaleform::Render::TextureGlyph :
	Scaleform::RefCountBase<Scaleform::Render::TextureGlyph,2>
{
	Scaleform::Ptr<Scaleform::Render::Image> pImage; // 0x10
	Scaleform::Render::Rect<float> UvBounds; // 0x20
	Scaleform::Render::Point<float> UvOrigin; // 0x30
	unsigned long BindIndex; // 0x38
	TextureGlyph(Scaleform::Render::TextureGlyph &);
	TextureGlyph(const Scaleform::Render::TextureGlyph &);
	TextureGlyph();
	virtual ~TextureGlyph();
	Scaleform::Render::TextureGlyph & operator=(Scaleform::Render::TextureGlyph &);
	Scaleform::Render::TextureGlyph & operator=(const Scaleform::Render::TextureGlyph &);
};
struct Scaleform::Render::GlyphParam
{
	Scaleform::Render::FontCacheHandle * pFont; // 0x0
	unsigned short GlyphIndex; // 0x8
	unsigned short FontSize; // 0xA
	unsigned short Flags; // 0xC
	unsigned short BlurX; // 0xE
	unsigned short BlurY; // 0x10
	unsigned short BlurStrength; // 0x12
	enum FlagsType
	{
		OptRead = 1,
		AutoFit = 2,
		Stretch = 4,
		FauxBold = 8,
		FauxItalic = 16,
		KnockOut = 32,
		HideObject = 64,
		FineBlur = 128,
		BitmapFont = 256,
		UseRaster = 512,
		ForceVector = 1024,
		OutlineMask = 61440,
	};
	void Clear();
	float GetFontSize();
	bool IsOptRead();
	bool IsAutoFit();
	bool IsBitmapFont();
	float GetStretch();
	bool GetUseRaster();
	bool IsFauxBold();
	bool IsFauxItalic();
	bool IsForceVector();
	bool IsKnockOut();
	bool IsHiddenObject();
	bool IsFineBlur();
	float GetBlurX();
	float GetBlurY();
	float GetBlurStrength();
	unsigned long GetOutline();
	void SetFontSize(float);
	void SetOptRead(bool);
	void SetAutoFit(bool);
	void SetStretch(bool);
	void SetUseRaster(bool);
	void SetFauxBold(bool);
	void SetFauxItalic(bool);
	void SetForceVector(bool);
	void SetKnockOut(bool);
	void SetHideObject(bool);
	void SetFineBlur(bool);
	void SetBlurX(float);
	void SetBlurY(float);
	void SetBlurStrength(float);
	void SetBitmapFont(bool);
	void SetOutline(unsigned long);
};
struct Scaleform::Render::TextFieldParam
{
	enum <unnamed-enum-ShadowDisabled>
	{
		ShadowDisabled = 1,
	};
	Scaleform::Render::GlyphParam TextParam; // 0x0
	Scaleform::Render::GlyphParam ShadowParam; // 0x18
	unsigned long ShadowColor; // 0x30
	float ShadowOffsetX; // 0x34
	float ShadowOffsetY; // 0x38
	void Clear();
	TextFieldParam();
};