#pragma once

struct Collision::HitRect
{
	float x; // 0x0
	float y; // 0x4
	float w; // 0x8
	float h; // 0xC
	bool IsIntersect(const Collision::HitRect &);
	Collision::HitRect GetIntersectRect(const Collision::HitRect &);
	void XFlip();
	void YFlip();
	float GetCenterX();
	float GetCenterY();
	OGLVec3 GetCenter();
};