#pragma once

class Scaleform::RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2>(Scaleform::RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2> &);
	RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2> &);
	RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2> &);
};
class Scaleform::GFx::SharedObjectVisitor :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::SharedObjectVisitor,2>
{
public:
	void Begin();
	void PushObject(const Scaleform::String &);
	void PushArray(const Scaleform::String &);
	void AddProperty(const Scaleform::String &, const Scaleform::String &, Scaleform::GFx::Value::ValueType);
	void PopObject();
	void PopArray();
	void End();
	SharedObjectVisitor(Scaleform::GFx::SharedObjectVisitor &);
	SharedObjectVisitor(const Scaleform::GFx::SharedObjectVisitor &);
	SharedObjectVisitor();
	virtual ~SharedObjectVisitor();
	Scaleform::GFx::SharedObjectVisitor & operator=(Scaleform::GFx::SharedObjectVisitor &);
	Scaleform::GFx::SharedObjectVisitor & operator=(const Scaleform::GFx::SharedObjectVisitor &);
};
class Scaleform::GFx::SharedObjectManagerBase :
	Scaleform::GFx::State
{
public:
	SharedObjectManagerBase(Scaleform::GFx::SharedObjectManagerBase &);
	SharedObjectManagerBase(const Scaleform::GFx::SharedObjectManagerBase &);
	SharedObjectManagerBase();
	bool LoadSharedObject(const Scaleform::String &, const Scaleform::String &, Scaleform::GFx::SharedObjectVisitor *, Scaleform::GFx::FileOpenerBase *);
	Scaleform::GFx::SharedObjectVisitor * CreateWriter(const Scaleform::String &, const Scaleform::String &, Scaleform::GFx::FileOpenerBase *);
	virtual ~SharedObjectManagerBase();
	Scaleform::GFx::SharedObjectManagerBase & operator=(Scaleform::GFx::SharedObjectManagerBase &);
	Scaleform::GFx::SharedObjectManagerBase & operator=(const Scaleform::GFx::SharedObjectManagerBase &);
};
class Scaleform::GFx::SharedObject3ManagerBase :
	Scaleform::GFx::State
{
public:
	SharedObject3ManagerBase(Scaleform::GFx::SharedObject3ManagerBase &);
	SharedObject3ManagerBase(const Scaleform::GFx::SharedObject3ManagerBase &);
	SharedObject3ManagerBase();
	bool Read(const Scaleform::String &, const Scaleform::String &, Scaleform::GFx::FileOpenerBase *, Scaleform::StringBuffer &);
	bool Write(const Scaleform::String &, const Scaleform::String &, Scaleform::GFx::FileOpenerBase *, const Scaleform::StringBuffer &);
	virtual ~SharedObject3ManagerBase();
	Scaleform::GFx::SharedObject3ManagerBase & operator=(Scaleform::GFx::SharedObject3ManagerBase &);
	Scaleform::GFx::SharedObject3ManagerBase & operator=(const Scaleform::GFx::SharedObject3ManagerBase &);
};