#pragma once

class Scaleform::GFx::FontProviderWin32 :
	Scaleform::GFx::FontProvider
{
	class Font;
private:
	Scaleform::Render::FontProviderWinAPI * getFontProvider();
public:
	FontProviderWin32(Scaleform::GFx::FontProviderWin32 &);
	FontProviderWin32(const Scaleform::GFx::FontProviderWin32 &);
	FontProviderWin32(HDC__ *, Scaleform::MemoryHeap *);
	FontProviderWin32(HDC__ *);
	void SetHintingAllFonts(Scaleform::Render::Font::NativeHintingRange, Scaleform::Render::Font::NativeHintingRange, unsigned long, unsigned long);
	void SetHinting(const char *, Scaleform::Render::Font::NativeHintingRange, Scaleform::Render::Font::NativeHintingRange, unsigned long, unsigned long);
	virtual Scaleform::Render::Font * CreateFont(const char *, unsigned long);
	virtual void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
	virtual ~FontProviderWin32();
	Scaleform::GFx::FontProviderWin32 & operator=(Scaleform::GFx::FontProviderWin32 &);
	Scaleform::GFx::FontProviderWin32 & operator=(const Scaleform::GFx::FontProviderWin32 &);
};