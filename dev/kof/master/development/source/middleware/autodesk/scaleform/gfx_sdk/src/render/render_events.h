#pragma once

enum Scaleform::Render::EventType
{
	Event_InitHAL = 0,
	Event_Frame = 1,
	Event_Scene = 2,
	Event_BeginScene = 3,
	Event_Display = 4,
	Event_Clear = 5,
	Event_Mask = 6,
	Event_PopMask = 7,
	Event_MaskClear = 8,
	Event_DrawPrimitive = 9,
	Event_DrawComplex = 10,
	Event_RenderTarget = 11,
	Event_Filter = 12,
	Event_ApplyBlend = 13,
	Event_ApplyDepthStencil = 14,
	Event_BlendMode = 15,
	Event_DrawableImage = 16,
	Event_DICxform = 17,
	Event_DICompare = 18,
	Event_DICopyPixels = 19,
	Event_DIMerge = 20,
	Event_DIPaletteMap = 21,
	Event_DIThreshold = 22,
	Event_DICopyback = 23,
	Event_Count = 24,
};
class Scaleform::Render::RenderEvents
{
public:
	RenderEvents(const Scaleform::Render::RenderEvents &);
	RenderEvents();
	~RenderEvents();
	void SetDisabled(bool);
	void Begin(Scaleform::Render::EventType, const char *);
	void End(Scaleform::Render::EventType);
	unsigned long GetOpenCount(Scaleform::Render::EventType);
	void EndFrame();
protected:
	void beginImpl(const char *);
	void endImpl();
private:
	long OpenCount[24]; // 0x8
	bool Disabled; // 0x68
public:
	Scaleform::Render::RenderEvents & operator=(const Scaleform::Render::RenderEvents &);
};
class Scaleform::Render::ScopedRenderEvent :
	Unassignable
{
public:
	ScopedRenderEvent(Scaleform::Render::RenderEvents &, Scaleform::Render::EventType, const char *, bool);
	~ScopedRenderEvent();
private:
	Scaleform::Render::EventType Type; // 0x0
	Scaleform::Render::RenderEvents & EventObj; // 0x8
};