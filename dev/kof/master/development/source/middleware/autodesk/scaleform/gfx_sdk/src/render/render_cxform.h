#pragma once

class Scaleform::Render::Cxform
{
public:
	float M[4][2]; // 0x0
	enum NoInitType
	{
		NoInit = 0,
	};
	Cxform(Scaleform::Render::Color);
	Cxform(Scaleform::Render::Cxform::NoInitType);
	Cxform();
	void Append(const Scaleform::Render::Cxform &);
	void Append_NonOpt(const Scaleform::Render::Cxform &);
	void Prepend(const Scaleform::Render::Cxform &);
	void Prepend_NonOpt(const Scaleform::Render::Cxform &);
	Scaleform::Render::Color Transform(const Scaleform::Render::Color);
	void SetToAppend(const Scaleform::Render::Cxform &, const Scaleform::Render::Cxform &);
	void SetToAppend_NonOpt(const Scaleform::Render::Cxform &, const Scaleform::Render::Cxform &);
	void Normalize();
	void Normalize_NonOpt();
	void GetAsFloat2x4(float[4] *);
	void GetAsFloat2x4Aligned(float[4] *);
	void GetAsFloat2x4Aligned_NonOpt(float[4] *);
	void SetIdentity();
	bool IsIdentity();
	bool operator==(const Scaleform::Render::Cxform &);
	bool operator!=(const Scaleform::Render::Cxform &);
	bool RequiresBlend();
	static Scaleform::Render::Cxform Identity; // 0xFFFFFFFFFFFFFFFF
};