#pragma once

struct Scaleform::Render::Text::TextFilter :
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74>
{
	float BlurX; // 0x10
	float BlurY; // 0x14
	float BlurStrength; // 0x18
	Scaleform::Render::BlurFilterParams ShadowParams; // 0x20
	unsigned long ShadowFlags; // 0x50
	float ShadowAngle; // 0x54
	float ShadowDistance; // 0x58
	unsigned char ShadowAlpha; // 0x5C
	TextFilter(Scaleform::Render::Text::TextFilter &);
	TextFilter(const Scaleform::Render::Text::TextFilter &);
	TextFilter();
	void SetDefaultShadow();
	void UpdateShadowOffset();
	void LoadFilterDesc(const Scaleform::Render::Filter *);
	bool operator==(const Scaleform::Render::Text::TextFilter &);
	virtual ~TextFilter();
	Scaleform::Render::Text::TextFilter & operator=(Scaleform::Render::Text::TextFilter &);
	Scaleform::Render::Text::TextFilter & operator=(const Scaleform::Render::Text::TextFilter &);
};
class Scaleform::RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74>(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74>(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74>();
	virtual ~RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74>();
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74> & operator=(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74> &);
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::TextFilter,74> &);
};