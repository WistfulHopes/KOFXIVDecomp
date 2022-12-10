#pragma once

class Scaleform::Render::GraphicsDevice :
	Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69>
{
public:
	GraphicsDevice(const Scaleform::Render::GraphicsDevice &);
	GraphicsDevice();
	virtual ~GraphicsDevice();
	void Begin();
	void End();
	bool IsDeferred();
protected:
	unsigned long RenderThreadID; // 0x10
public:
	Scaleform::Render::GraphicsDevice & operator=(const Scaleform::Render::GraphicsDevice &);
};
class Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 69,
	};
public:
	RefCountBase<Scaleform::Render::GraphicsDevice,69>(Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69> &);
	RefCountBase<Scaleform::Render::GraphicsDevice,69>(const Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69> &);
	RefCountBase<Scaleform::Render::GraphicsDevice,69>();
	virtual ~RefCountBase<Scaleform::Render::GraphicsDevice,69>();
	Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69> & operator=(Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69> &);
	Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69> &);
};
bool Scaleform::Render::GraphicsDevice::IsDeferred(); // 0x14004BBE0
class Scaleform::Render::GraphicsDeviceRecorder
{
	enum DrawingCommands
	{
		FinishedDraw = 32769,
		PlatformCommands_Start = 32770,
	};
public:
	GraphicsDeviceRecorder(const Scaleform::Render::GraphicsDeviceRecorder &);
	GraphicsDeviceRecorder();
	~GraphicsDeviceRecorder();
	bool ExecuteRecording(Scaleform::Render::GraphicsDevice &);
protected:
	unsigned long CommandBufferSize; // 0x8
	unsigned long ResourceBufferSize; // 0xC
	unsigned char * CommandBuffer; // 0x10
	unsigned char * CommandReadPointer; // 0x18
	unsigned char * CommandWritePointer; // 0x20
	unsigned char * ResourceBuffer; // 0x28
	unsigned char * ResourceWritePointer; // 0x30
	static const unsigned long MaxStaleResourceBuffers; // 0xFFFFFFFFFFFFFFFF
	unsigned char * StaleResourceBuffers[8]; // 0x38
	Scaleform::Lock BufferLock; // 0x78
	unsigned char * alloc(unsigned long long);
	void free(const void *);
public:
	Scaleform::Render::GraphicsDeviceRecorder & operator=(const Scaleform::Render::GraphicsDeviceRecorder &);
};
void Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(const unsigned char & v); // 0x1405DC450
void Scaleform::Render::GraphicsDeviceRecorder::write<int>(const long & v); // 0x1405DC4F0
void Scaleform::Render::GraphicsDeviceRecorder::write<void (__cdecl*)(unsigned int,unsigned int,unsigned int,unsigned int,int,char const * __ptr64,void const * __ptr64)>(void(*)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *) & v); // 0x1405DC590
void Scaleform::Render::GraphicsDeviceRecorder::read<unsigned char>(unsigned char & v); // 0x1405DC320
void Scaleform::Render::GraphicsDeviceRecorder::read<int>(long & v); // 0x1405DC380
void Scaleform::Render::GraphicsDeviceRecorder::read<char * __ptr64>(char * & v); // 0x1405DC3E0