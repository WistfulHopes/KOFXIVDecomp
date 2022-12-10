#pragma once

class Scaleform::GFx::AS3::AvmBitmap :
	Scaleform::GFx::DisplayObject,
	Scaleform::GFx::AS3::AvmDisplayObj
{
private:
	Scaleform::GFx::AS3::AvmBitmap * GetThis();
protected:
	Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> pDefImpl; // 0xC8
	Scaleform::Ptr<Scaleform::GFx::ImageResource> pImage; // 0xD0
public:
	AvmBitmap(const Scaleform::GFx::AS3::AvmBitmap &);
	AvmBitmap(Scaleform::GFx::ASMovieRootBase *, const Scaleform::GFx::CharacterCreateInfo &, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~AvmBitmap();
	virtual unsigned long CreateASInstance(bool);
	virtual const char * GetDefaultASClassName();
	virtual Scaleform::String & GetASClassName(Scaleform::String *);
	virtual Scaleform::GFx::MovieDefImpl * GetResourceMovieDef();
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual bool PointTestLocal(const Scaleform::Render::Point<float> &, unsigned char);
	virtual void ForceShutdown();
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostMouseEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *);
	void SetResourceMovieDef(Scaleform::GFx::MovieDefImpl *);
	Scaleform::GFx::AS3::Instances::fl_display::Bitmap * GetAS3Bitmap();
	Scaleform::GFx::AS3::Instances::fl_display::BitmapData * GetBitmapData();
	void SetImage(Scaleform::GFx::ImageResource *);
	Scaleform::Render::TreeNode * RecreateRenderNode();
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
protected:
	virtual Scaleform::Ptr<Scaleform::Render::TreeNode> CreateRenderNode(Scaleform::Render::ContextImpl::Context &);
	bool CreateBitmapShape();
public:
	Scaleform::GFx::AS3::AvmBitmap & operator=(const Scaleform::GFx::AS3::AvmBitmap &);
};
const char * Scaleform::GFx::AS3::AvmBitmap::GetDefaultASClassName(); // 0x140484F40
Scaleform::String & Scaleform::GFx::AS3::AvmBitmap::GetASClassName(Scaleform::String * className); // 0x140482550
Scaleform::GFx::CharacterDef * Scaleform::GFx::AS3::ShapeObject::GetCharacterDef(); // 0x140489700
Scaleform::Render::Rect<float> Scaleform::GFx::AS3::AvmBitmap::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x140489380
void Scaleform::GFx::AS3::AvmBitmap::SetImage(Scaleform::GFx::ImageResource * img); // 0x1404A8340