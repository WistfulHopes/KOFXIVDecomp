#pragma once

class Scaleform::Render::GL::RenderSync :
	Scaleform::Render::RenderSync
{
public:
	RenderSync();
	virtual bool SetContext(Scaleform::Render::HAL *);
	virtual void KickOffFences(Scaleform::Render::FenceType);
protected:
	virtual unsigned long long SetFence();
	virtual bool IsPending(Scaleform::Render::FenceType, unsigned long long, const Scaleform::Render::FenceFrame &);
	virtual bool WaitFence(Scaleform::Render::FenceType, unsigned long long, const Scaleform::Render::FenceFrame &);
	virtual void ReleaseFence(unsigned long long);
	Scaleform::Render::GL::HAL * GetHAL();
	Scaleform::Render::GL::HAL * pHal; // 0xC8
	bool ProcessingLoseContext; // 0xD0
public:
	virtual ~RenderSync();
};