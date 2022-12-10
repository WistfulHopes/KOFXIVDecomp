#pragma once

class Scaleform::Render::ScreenToWorld
{
public:
	ScreenToWorld(Scaleform::Render::ScreenToWorld &);
	ScreenToWorld(const Scaleform::Render::ScreenToWorld &);
	ScreenToWorld();
	void SetNormalizedScreenCoords(float, float);
	void SetView(const Scaleform::Render::Matrix3x4<float> &);
	void SetProjection(const Scaleform::Render::Matrix4x4<float> &);
	void SetWorld(const Scaleform::Render::Matrix3x4<float> &);
	void GetWorldPoint(Scaleform::Render::Point3<float> *);
	void GetWorldPoint(Scaleform::Render::Point<float> *);
	Scaleform::Render::Point<float> GetLastWorldPoint();
private:
	void VectorMult(float *, const float *, const float *);
	void VectorMult(float *, const float *, float, float, float, float);
	void VectorInvHomog(float *);
	float Sx; // 0x0
	float Sy; // 0x4
	float LastX; // 0x8
	float LastY; // 0xC
	Scaleform::Render::Matrix4x4<float> MatProj; // 0x10
	Scaleform::Render::Matrix3x4<float> MatView; // 0x50
	Scaleform::Render::Matrix3x4<float> MatWorld; // 0x80
	Scaleform::Render::Matrix4x4<float> MatInvProj; // 0xB0
public:
	Scaleform::Render::ScreenToWorld & operator=(Scaleform::Render::ScreenToWorld &);
	Scaleform::Render::ScreenToWorld & operator=(const Scaleform::Render::ScreenToWorld &);
};
Scaleform::Render::ScreenToWorld::ScreenToWorld(); // 0x1402DD460