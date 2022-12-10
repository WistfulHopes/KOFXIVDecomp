#pragma once

struct Scaleform::GFx::Scale9Grid :
	Scaleform::NewOverrideBase<258>
{
	Scaleform::Render::Rect<float> Rect; // 0x0
	Scale9Grid(Scaleform::GFx::Scale9Grid &);
	Scale9Grid(const Scaleform::GFx::Scale9Grid &);
	Scale9Grid(const Scaleform::Render::Rect<float> &);
	Scale9Grid();
	Scaleform::GFx::Scale9Grid & operator=(Scaleform::GFx::Scale9Grid &);
	Scaleform::GFx::Scale9Grid & operator=(const Scaleform::GFx::Scale9Grid &);
	Scaleform::GFx::Scale9Grid & operator=(const Scaleform::Render::Rect<float> &);
};
class Scaleform::NewOverrideBase<258>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 258,
	};
public:
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
};
class Scaleform::GFx::CharacterDef :
	Scaleform::GFx::Resource
{
private:
	Scaleform::GFx::ResourceId Id; // 0x18
	enum CharacterDefType
	{
		Unknown = 0,
		Shape = 1,
		MovieData = 2,
		Sprite = 3,
		TextField = 4,
		StaticText = 5,
		Button = 6,
		Video = 7,
		Bitmap = 8,
		EmptySprite = 9,
	};
	enum <unnamed-enum-CharId_EmptyMovieClip>
	{
		CharId_EmptyMovieClip = 65537,
		CharId_EmptyTextField = 65538,
		CharId_EmptyButton = 65539,
		CharId_EmptyShape = 65540,
		CharId_EmptyVideo = 65541,
		CharId_ImageMovieDef_ImageResource = 0,
		CharId_ImageMovieDef_ShapeDef = 1,
	};
public:
	CharacterDef(const Scaleform::GFx::CharacterDef &);
	CharacterDef();
	virtual ~CharacterDef();
	Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	void Display(Scaleform::GFx::DisplayContext &, Scaleform::GFx::DisplayObjectBase *);
	bool DefPointTestLocal(const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::DisplayObjectBase *);
	Scaleform::Render::Rect<float> GetBoundsLocal(float);
	Scaleform::Render::Rect<float> GetRectBoundsLocal(float);
	unsigned long GetVersion();
	Scaleform::GFx::ResourceId GetId();
	void SetId(Scaleform::GFx::ResourceId);
	Scaleform::GFx::CharacterDef & operator=(const Scaleform::GFx::CharacterDef &);
};
bool Scaleform::GFx::CharacterDef::DefPointTestLocal(const Scaleform::Render::Point<float> & pt, bool testShape, const Scaleform::GFx::DisplayObjectBase * pinst); // 0x14004BBE0
Scaleform::Render::Rect<float> Scaleform::GFx::CharacterDef::GetBoundsLocal(float morphRatio); // 0x140047540
const char * Scaleform::GFx::ResourceKey::KeyInterface::GetFileURL(void * __formal); // 0x1400470F0
class Scaleform::GFx::TimelineDef :
	Scaleform::GFx::CharacterDef
{
	struct Frame;
public:
	unsigned long GetFrameCount();
	const Scaleform::GFx::TimelineDef::Frame GetPlaylist(long);
	bool GetInitActions(Scaleform::GFx::TimelineDef::Frame *, long);
	bool GetLabeledFrame(const char *, unsigned long *, bool);
	const Scaleform::String * GetFrameLabel(unsigned long, unsigned long *);
	Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * GetFrameLabels(unsigned long, Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *);
	TimelineDef(Scaleform::GFx::TimelineDef &);
	TimelineDef(const Scaleform::GFx::TimelineDef &);
	TimelineDef();
	virtual ~TimelineDef();
	Scaleform::GFx::TimelineDef & operator=(Scaleform::GFx::TimelineDef &);
	Scaleform::GFx::TimelineDef & operator=(const Scaleform::GFx::TimelineDef &);
};
struct Scaleform::GFx::TimelineDef::Frame
{
	Scaleform::GFx::ExecuteTag * * pTagPtrList; // 0x0
	unsigned long TagCount; // 0x8
	Frame(const Scaleform::GFx::TimelineDef::Frame &);
	Frame();
	Scaleform::GFx::TimelineDef::Frame & operator=(const Scaleform::GFx::TimelineDef::Frame &);
	void DestroyTags();
	unsigned long GetTagCount();
	Scaleform::GFx::ExecuteTag * GetTag(unsigned long);
};
class Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::TimelineIODef :
	Scaleform::GFx::TimelineDef
{
public:
	void SetLoadingPlaylistFrame(const Scaleform::GFx::TimelineDef::Frame &, Scaleform::GFx::LogState *);
	void AddFrameName(const Scaleform::String &, Scaleform::GFx::LogState *);
	TimelineIODef(Scaleform::GFx::TimelineIODef &);
	TimelineIODef(const Scaleform::GFx::TimelineIODef &);
	TimelineIODef();
	virtual ~TimelineIODef();
	Scaleform::GFx::TimelineIODef & operator=(Scaleform::GFx::TimelineIODef &);
	Scaleform::GFx::TimelineIODef & operator=(const Scaleform::GFx::TimelineIODef &);
};