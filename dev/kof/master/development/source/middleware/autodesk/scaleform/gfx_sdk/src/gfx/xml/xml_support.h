#pragma once

class Scaleform::GFx::XML::Parser :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::XML::Parser,2>
{
public:
	virtual ~Parser();
	bool ParseFile(const char *, Scaleform::GFx::FileOpenerBase *, Scaleform::GFx::XML::ParserHandler *);
	bool ParseString(const char *, unsigned long long, Scaleform::GFx::XML::ParserHandler *);
	Parser(const Scaleform::GFx::XML::Parser &);
	Parser();
	Scaleform::GFx::XML::Parser & operator=(const Scaleform::GFx::XML::Parser &);
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::XML::Parser,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::XML::Parser,2>(Scaleform::RefCountBaseNTS<Scaleform::GFx::XML::Parser,2> &);
	RefCountBaseNTS<Scaleform::GFx::XML::Parser,2>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::XML::Parser,2> &);
	RefCountBaseNTS<Scaleform::GFx::XML::Parser,2>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::XML::Parser,2>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::XML::Parser,2> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::XML::Parser,2> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::XML::Parser,2> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::XML::Parser,2> &);
};
class Scaleform::GFx::XML::SupportBase :
	Scaleform::GFx::State
{
public:
	SupportBase(const Scaleform::GFx::XML::SupportBase &);
	SupportBase();
	virtual ~SupportBase();
	bool ParseFile(const char *, Scaleform::GFx::FileOpenerBase *, Scaleform::GFx::XML::ParserHandler *);
	bool ParseString(const char *, unsigned long long, Scaleform::GFx::XML::ParserHandler *);
	Scaleform::GFx::XML::SupportBase & operator=(const Scaleform::GFx::XML::SupportBase &);
};
class Scaleform::GFx::XML::Support :
	Scaleform::GFx::XML::SupportBase
{
private:
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> pParser; // 0x18
public:
	Support(const Scaleform::GFx::XML::Support &);
	Support(Scaleform::Ptr<Scaleform::GFx::XML::Parser>);
	virtual ~Support();
	virtual bool ParseFile(const char *, Scaleform::GFx::FileOpenerBase *, Scaleform::GFx::XML::ParserHandler *);
	virtual bool ParseString(const char *, unsigned long long, Scaleform::GFx::XML::ParserHandler *);
	Scaleform::GFx::XML::Support & operator=(const Scaleform::GFx::XML::Support &);
};
class Scaleform::Ptr<Scaleform::GFx::XML::Parser>
{
protected:
	Scaleform::GFx::XML::Parser * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::XML::Parser>(const Scaleform::Ptr<Scaleform::GFx::XML::Parser> &);
	Ptr<Scaleform::GFx::XML::Parser>(Scaleform::GFx::XML::Parser *);
	Ptr<Scaleform::GFx::XML::Parser>(Scaleform::Ptr<Scaleform::GFx::XML::Parser> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::XML::Parser>(Scaleform::Pickable<Scaleform::GFx::XML::Parser>);
	Ptr<Scaleform::GFx::XML::Parser>(Scaleform::GFx::XML::Parser &);
	Ptr<Scaleform::GFx::XML::Parser>();
	~Ptr<Scaleform::GFx::XML::Parser>();
	bool operator==(Scaleform::GFx::XML::Parser *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::XML::Parser> &);
	bool operator!=(Scaleform::GFx::XML::Parser *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::XML::Parser> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::XML::Parser> &);
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> & operator=(Scaleform::Pickable<Scaleform::GFx::XML::Parser>);
	const Scaleform::Ptr<Scaleform::GFx::XML::Parser> & operator=(Scaleform::GFx::XML::Parser &);
	const Scaleform::Ptr<Scaleform::GFx::XML::Parser> & operator=(Scaleform::GFx::XML::Parser *);
	const Scaleform::Ptr<Scaleform::GFx::XML::Parser> & operator=(const Scaleform::Ptr<Scaleform::GFx::XML::Parser> &);
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> & SetPtr(Scaleform::Pickable<Scaleform::GFx::XML::Parser>);
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> & SetPtr(Scaleform::GFx::XML::Parser &);
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> & SetPtr(Scaleform::GFx::XML::Parser *);
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::XML::Parser> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::XML::Parser * & GetRawRef();
	Scaleform::GFx::XML::Parser * GetPtr();
	Scaleform::GFx::XML::Parser & operator*();
	Scaleform::GFx::XML::Parser * operator->();
	Scaleform::GFx::XML::Parser * operator class Scaleform::GFx::XML::Parser *();
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> & Pick(Scaleform::GFx::XML::Parser *);
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> & Pick(Scaleform::Pickable<Scaleform::GFx::XML::Parser>);
	Scaleform::Ptr<Scaleform::GFx::XML::Parser> & Pick(Scaleform::Ptr<Scaleform::GFx::XML::Parser> &);
};