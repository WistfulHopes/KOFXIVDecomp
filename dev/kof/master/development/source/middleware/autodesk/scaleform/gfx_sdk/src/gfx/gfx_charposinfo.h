#pragma once

struct Scaleform::GFx::CharPosInfoFlags
{
	enum <unnamed-enum-Flags_HasDepth>
	{
		Flags_HasDepth = 1,
		Flags_HasCharacterId = 2,
		Flags_HasMatrix = 4,
		Flags_HasCxform = 8,
		Flags_HasRatio = 16,
		Flags_HasFilters = 32,
		Flags_HasClipDepth = 64,
		Flags_HasBlendMode = 128,
		Flags_HasClassName = 256,
		Flags_HasVisibility = 512,
	};
	unsigned short Flags; // 0x0
	CharPosInfoFlags(unsigned short);
	CharPosInfoFlags();
	void SetMatrixFlag();
	void SetCxFormFlag();
	void SetBlendModeFlag();
	void SetFiltersFlag();
	void SetDepthFlag();
	void SetClipDepthFlag();
	void SetRatioFlag();
	void SetCharacterIdFlag();
	void SetClassNameFlag();
	void SetVisibilityFlag();
	bool HasMatrix();
	bool HasCxform();
	bool HasBlendMode();
	bool HasFilters();
	bool HasDepth();
	bool HasClipDepth();
	bool HasRatio();
	bool HasCharacterId();
	bool HasClassName();
	bool HasVisibility();
};
class Scaleform::GFx::CharPosInfo
{
public:
	Scaleform::Render::Cxform ColorTransform; // 0x0
	Scaleform::Render::Matrix2x4<float> Matrix_1; // 0x20
	Scaleform::Ptr<Scaleform::Render::FilterSet> pFilters; // 0x40
	float Ratio; // 0x48
	long Depth; // 0x4C
	Scaleform::GFx::ResourceId CharacterId; // 0x50
	const char * ClassName; // 0x58
	unsigned short ClipDepth; // 0x60
	Scaleform::GFx::CharPosInfoFlags Flags; // 0x62
	unsigned char BlendMode; // 0x64
	unsigned char Visible; // 0x65
	CharPosInfo(Scaleform::GFx::CharPosInfo &);
	CharPosInfo(const Scaleform::GFx::CharPosInfo &);
	CharPosInfo(Scaleform::GFx::ResourceId, long, bool, const Scaleform::Render::Cxform &, bool, const Scaleform::Render::Matrix2x4<float> &, const char *, float, unsigned short, bool, Scaleform::Render::BlendMode);
	CharPosInfo();
	void SetMatrixFlag();
	void SetCxFormFlag();
	void SetBlendModeFlag();
	void SetFiltersFlag();
	void SetDepthFlag();
	void SetClipDepthFlag();
	void SetRatioFlag();
	void SetCharacterIdFlag();
	void SetClassNameFlag();
	void SetVisibilityFlag();
	bool HasMatrix();
	bool HasCxform();
	bool HasBlendMode();
	bool HasFilters();
	bool HasDepth();
	bool HasClipDepth();
	bool HasRatio();
	bool HasCharacterId();
	bool HasClassName();
	bool HasVisibility();
	~CharPosInfo();
	Scaleform::GFx::CharPosInfo & operator=(Scaleform::GFx::CharPosInfo &);
	Scaleform::GFx::CharPosInfo & operator=(const Scaleform::GFx::CharPosInfo &);
};