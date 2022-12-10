#pragma once

struct Scaleform::Render::GlyphCacheParams
{
	unsigned long TextureWidth; // 0x0
	unsigned long TextureHeight; // 0x4
	unsigned long NumTextures; // 0x8
	unsigned long MaxSlotHeight; // 0xC
	unsigned long SlotPadding; // 0x10
	unsigned long TexUpdWidth; // 0x14
	unsigned long TexUpdHeight; // 0x18
	float MaxRasterScale; // 0x1C
	unsigned long MaxVectorCacheSize; // 0x20
	float FauxItalicAngle; // 0x24
	float FauxBoldRatio; // 0x28
	float OutlineRatio; // 0x2C
	float ShadowQuality; // 0x30
	bool UseAutoFit; // 0x34
	bool UseVectorOnFullCache; // 0x35
	bool FenceWaitOnFullCache; // 0x36
	GlyphCacheParams(unsigned long, unsigned long, unsigned long, unsigned long);
	void __dflt_ctor_closure();
};
class Scaleform::Render::GlyphCacheConfig
{
public:
	~GlyphCacheConfig();
	bool SetParams(const Scaleform::Render::GlyphCacheParams &);
	const Scaleform::Render::GlyphCacheParams & GetParams();
	void ClearCache();
	GlyphCacheConfig(const Scaleform::Render::GlyphCacheConfig &);
	GlyphCacheConfig();
	Scaleform::Render::GlyphCacheConfig & operator=(const Scaleform::Render::GlyphCacheConfig &);
};