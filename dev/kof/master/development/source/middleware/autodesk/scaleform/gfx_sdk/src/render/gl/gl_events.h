#pragma once

class Scaleform::Render::GL::RenderEvents :
	Scaleform::Render::RenderEvents
{
public:
	RenderEvents(const Scaleform::Render::GL::RenderEvents &);
	RenderEvents(Scaleform::Render::GL::HAL *);
	virtual ~RenderEvents();
protected:
	virtual void beginImpl(const char *);
	virtual void endImpl();
	Scaleform::Render::GL::HAL * pHAL; // 0x70
	Scaleform::Render::GL::HAL * GetHAL();
public:
	Scaleform::Render::GL::RenderEvents & operator=(const Scaleform::Render::GL::RenderEvents &);
};