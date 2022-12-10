#pragma once

class Scaleform::GFx::RemoveObjectTag :
	Scaleform::GFx::RemoveObject2Tag
{
public:
	unsigned short Id; // 0x10
	virtual void Read(Scaleform::GFx::LoadProcess *);
	virtual void Execute(Scaleform::GFx::DisplayObjContainer *);
	virtual void Trace(const char *);
	RemoveObjectTag(Scaleform::GFx::RemoveObjectTag &);
	RemoveObjectTag(const Scaleform::GFx::RemoveObjectTag &);
	RemoveObjectTag();
	virtual ~RemoveObjectTag();
	Scaleform::GFx::RemoveObjectTag & operator=(Scaleform::GFx::RemoveObjectTag &);
	Scaleform::GFx::RemoveObjectTag & operator=(const Scaleform::GFx::RemoveObjectTag &);
};
class Scaleform::GFx::AS3Support :
	Scaleform::GFx::ASSupport
{
public:
	AS3Support(Scaleform::GFx::AS3Support &);
	AS3Support(const Scaleform::GFx::AS3Support &);
	AS3Support();
	virtual Scaleform::GFx::MovieImpl * CreateMovie(Scaleform::GFx::MemoryContext *);
	virtual Scaleform::GFx::MemoryContext * CreateMemoryContext(const char *, const Scaleform::GFx::MemoryParams &, bool);
	virtual Scaleform::Ptr<Scaleform::GFx::ASIMEManager> CreateASIMEManager();
	virtual Scaleform::GFx::DisplayObjectBase * CreateCharacterInstance(Scaleform::GFx::MovieImpl *, const Scaleform::GFx::CharacterCreateInfo &, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId, Scaleform::GFx::CharacterDef::CharacterDefType);
	virtual void DoActions();
	virtual unsigned char GetAVMVersion();
	virtual Scaleform::GFx::PlaceObject2Tag * AllocPlaceObject2Tag(Scaleform::GFx::LoadProcess *, unsigned long long, unsigned char);
	virtual Scaleform::GFx::PlaceObject3Tag * AllocPlaceObject3Tag(Scaleform::GFx::LoadProcess *, unsigned long long);
	virtual Scaleform::GFx::RemoveObjectTag * AllocRemoveObjectTag(Scaleform::GFx::LoadProcess *);
	virtual Scaleform::GFx::RemoveObject2Tag * AllocRemoveObject2Tag(Scaleform::GFx::LoadProcess *);
	virtual void DoActionLoader(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
	virtual void DoInitActionLoader(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
	virtual void ReadButtonActions(Scaleform::GFx::LoadProcess *, Scaleform::GFx::ButtonDef *, Scaleform::GFx::TagType);
	virtual void ReadButton2ActionConditions(Scaleform::GFx::LoadProcess *, Scaleform::GFx::ButtonDef *, Scaleform::GFx::TagType);
	virtual ~AS3Support();
	Scaleform::GFx::AS3Support & operator=(Scaleform::GFx::AS3Support &);
	Scaleform::GFx::AS3Support & operator=(const Scaleform::GFx::AS3Support &);
};
unsigned char Scaleform::GFx::AS3Support::GetAVMVersion(); // 0x1404C4780