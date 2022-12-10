#pragma once

class Scaleform::GFx::AS3::ClassTraits::fl::Array :
	Scaleform::GFx::AS3::ClassTraits::fl::Object
{
	class ClassType;
	class InstanceTraitsType;
	class InstanceType;
public:
	Array(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &);
	static Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits> MakeClassTraits(Scaleform::GFx::AS3::VM &);
	enum <unnamed-enum-MemberInfoNum>
	{
		MemberInfoNum = 5,
	};
	static const Scaleform::GFx::AS3::MemberInfo mi[30]; // 0xFFFFFFFFFFFFFFFF
	virtual ~Array();
};
class Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector :
	Scaleform::GFx::AS3::ClassTraits::fl::Object
{
	class ClassType;
	class InstanceTraitsType;
	class InstanceType;
public:
	Vector(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &);
	static Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits> MakeClassTraits(Scaleform::GFx::AS3::VM &);
	virtual ~Vector();
};
class Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray :
	Scaleform::GFx::AS3::ClassTraits::fl::Object
{
	class ClassType;
	class InstanceTraitsType;
	class InstanceType;
public:
	ByteArray(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &);
	static Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits> MakeClassTraits(Scaleform::GFx::AS3::VM &);
	enum <unnamed-enum-ThunkInfoNum>
	{
		ThunkInfoNum = 3,
	};
	static const Scaleform::GFx::AS3::ThunkInfo tim[36]; // 0xFFFFFFFFFFFFFFFF
	static const Scaleform::GFx::AS3::TypeInfo * tit[5]; // 0xFFFFFFFFFFFFFFFF
	virtual ~ByteArray();
};
class Scaleform::ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned __int64,Scaleform::AllocatorLH_POD<unsigned __int64,347>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned long long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key
{
	Scaleform::GFx::ASString Name; // 0x0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > pNs; // 0x8
	Key(const Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key &);
	Key(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace *);
	bool operator==(const Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key &);
	struct HashFunctor;
	~Key();
	Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key & operator=(const Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key &);
};
struct Scaleform::GFx::AS3::MultinameHash<bool,2>::Key
{
	Scaleform::GFx::ASString Name; // 0x0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > pNs; // 0x8
	Key(const Scaleform::GFx::AS3::MultinameHash<bool,2>::Key &);
	Key(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace *);
	bool operator==(const Scaleform::GFx::AS3::MultinameHash<bool,2>::Key &);
	struct HashFunctor;
	~Key();
	Scaleform::GFx::AS3::MultinameHash<bool,2>::Key & operator=(const Scaleform::GFx::AS3::MultinameHash<bool,2>::Key &);
};
struct Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor
{
	unsigned long long operator()(const Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key &);
};
struct Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor
{
	unsigned long long operator()(const Scaleform::GFx::AS3::MultinameHash<bool,2>::Key &);
};
class Scaleform::HashDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,329,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,Scaleform::AllocatorDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,329>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>::NodeAltHashF,329,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,329,Scaleform::Ha(const Scaleform::HashDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,329,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>::NodeHashF> > &);
	HashDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,329,Scaleform::Ha(void *, long);
	HashDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,329,Scaleform::Ha(void *);
	~HashDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,329,Scaleform::H();
	void operator=(const Scaleform::HashDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,329,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>::NodeHashF> > &);
};
class Scaleform::HashDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,2,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,Scaleform::AllocatorDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,2>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>::NodeAltHashF,2,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,2,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor(const Scaleform::HashDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,2,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>::NodeHashF> > &);
	HashDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,2,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor(void *, long);
	HashDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,2,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor(void *);
	~HashDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,2,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFuncto();
	void operator=(const Scaleform::HashDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,2,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>::NodeHashF> > &);
};
Scaleform::GFx::AS3::ClassTraits::Traits * * Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits * __ptr64,329>::Get(const Scaleform::GFx::ASString & name, const Scaleform::GFx::AS3::Instances::fl::Namespace & ns); // 0x140482270
Scaleform::GFx::AS3::ClassTraits::Traits * * Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits * __ptr64,329>::Get(const Scaleform::GFx::AS3::Multiname & mn); // 0x1404821A0
void Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits * __ptr64,329>::Add(const Scaleform::GFx::ASString & name, const Scaleform::GFx::AS3::Instances::fl::Namespace & ns, Scaleform::GFx::AS3::ClassTraits::Traits * & val); // 0x14045B2C0
void Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits * __ptr64,329>::RemoveValue(Scaleform::GFx::AS3::ClassTraits::Traits * & v); // 0x1404A24C0
class Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key
{
	unsigned long long NsInd; // 0x0
	long long NextMnInd; // 0x8
	Key(const Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key &);
	Key(unsigned long long, long);
	bool operator==(const Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key &);
};
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> * Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Get(unsigned long long ind, long next_ind); // 0x140481FF0
void Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x14047FAF0
class Scaleform::HashLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key>,342,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,342>,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,342>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultin(const Scaleform::HashLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key>,342,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >::NodeHashF> > &);
	HashLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultin(long);
	HashLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultin();
	~HashLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMulti();
	void operator=(const Scaleform::HashLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key>,342,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >::NodeHashF> > &);
};
class Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key>
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key &);
};
class Scaleform::GFx::AS3::VMFile :
	Scaleform::GFx::AS3::GASRefCountBase
{
public:
	VMFile(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::VMAppDomain &);
	virtual ~VMFile();
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetInternedNamespace(unsigned long long);
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetInternedNamespace(const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::GFx::AS3::NamespaceSet & GetInternedNamespaceSet(unsigned long long);
	Scaleform::GFx::ASString GetInternedString(unsigned long long);
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetActivationInstanceTraits(const Scaleform::GFx::AS3::Abc::MbiInd);
	const Scaleform::GFx::AS3::Abc::Multiname & GetMultiname(unsigned long long);
	void RegisterLoadedClass(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> &);
	unsigned long long GetNumOfLoadedClasses();
	Scaleform::GFx::AS3::VMAppDomain & GetAppDomain();
	Scaleform::GFx::AS3::VM & GetVM();
protected:
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(unsigned long long);
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet> MakeInternedNamespaceSet(unsigned long long);
	Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits> MakeActivationInstanceTraits(const Scaleform::GFx::AS3::Abc::MbiInd);
	Scaleform::GFx::ASString MakeInternedString(unsigned long long);
	void Clear();
	void AddClassTrait(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::ClassTraits::Traits *);
	void RemoveClassTrait(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void RemoveClassTraitValue(Scaleform::GFx::AS3::ClassTraits::Traits *);
	Scaleform::GFx::AS3::ClassTraits::Traits * GetLoadedClass(unsigned long long);
	void ClearLoadedClasses();
	class TActivationTraitsCache;
	class TASStringNodeSet;
	class TIntNamespaces;
	class TIntNamespaceSets;
	class TIntStrings;
	class TLoadedClasses;
private:
	Scaleform::GFx::AS3::VM & VMRef; // 0x28
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> AppDomain; // 0x30
	Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342> IntNamespaces; // 0x38
	Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy> IntNamespaceSets; // 0x40
	Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy> IntStrings; // 0x58
	Scaleform::HashLH<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,341,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >::NodeHashF> > ActivationTraitsCache; // 0x70
	Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy> LoadedClasses; // 0x78
	Scaleform::HashSetUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,341> ASStringNodeSet; // 0x90
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>(Scaleform::GFx::AS3::ClassTraits::Traits *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> & operator=(Scaleform::GFx::AS3::ClassTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> & Pick(Scaleform::GFx::AS3::ClassTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> & SetPtr(Scaleform::GFx::AS3::ClassTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> &);
	Scaleform::GFx::AS3::ClassTraits::Traits * operator->();
	Scaleform::GFx::AS3::ClassTraits::Traits & operator*();
	Scaleform::GFx::AS3::ClassTraits::Traits * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::Traits * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::Traits * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::Traits * operator class Scaleform::GFx::AS3::ClassTraits::Traits *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::Traits * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet>
{
public:
	Pickable<Scaleform::GFx::AS3::NamespaceSet>(Scaleform::GFx::AS3::NamespaceSet *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::NamespaceSet>(Scaleform::GFx::AS3::NamespaceSet *);
	Pickable<Scaleform::GFx::AS3::NamespaceSet>();
	Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet> &);
	Scaleform::GFx::AS3::NamespaceSet * GetPtr();
	Scaleform::GFx::AS3::NamespaceSet * operator->();
	Scaleform::GFx::AS3::NamespaceSet & operator*();
private:
	Scaleform::GFx::AS3::NamespaceSet * pV; // 0x0
};
class Scaleform::HashLH<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,341,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::MbiInd,341>,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::MbiInd,341>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,341,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Sca(const Scaleform::HashLH<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,341,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >::NodeHashF> > &);
	HashLH<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,341,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Sca(long);
	HashLH<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,341,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Sca();
	~HashLH<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,341,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Sc();
	void operator=(const Scaleform::HashLH<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>,341,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >,Scaleform::HashNode<Scaleform::GFx::AS3::Abc::MbiInd,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd> >::NodeHashF> > &);
};
class Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Abc::MbiInd>
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const Scaleform::GFx::AS3::Abc::MbiInd &);
};
class Scaleform::HashSetUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,341> :
	Scaleform::HashSet<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,341>,Scaleform::HashsetEntry<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc> >
{
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,341>(const Scaleform::HashSetUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,341> &);
	HashSetUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,341>(long);
	HashSetUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,341>();
	~HashSetUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,341>();
	void operator=(const Scaleform::HashSetUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,341> &);
};
class Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>
{
	struct Key;
	class ValueType;
	class SelfType;
public:
	~AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> * Get(const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> * Get(unsigned long long, long);
	void Add(const Scaleform::GFx::AS3::Abc::Multiname &, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	void Add(unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	void Clear();
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	class ContainerType;
private:
	Scaleform::HashLH<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key>,342,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >,Scaleform::HashNode<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>::Key> >::NodeHashF> > Entries; // 0x0
public:
	AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>(const Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342> &);
	AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342>();
	Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342> & operator=(const Scaleform::GFx::AS3::AbcMultinameHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,342> &);
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>,343,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::NamespaceSet>(Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet>);
	SPtr<Scaleform::GFx::AS3::NamespaceSet>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::NamespaceSet>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> &);
	SPtr<Scaleform::GFx::AS3::NamespaceSet>(Scaleform::GFx::AS3::NamespaceSet *);
	~SPtr<Scaleform::GFx::AS3::NamespaceSet>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> & operator=(Scaleform::GFx::AS3::NamespaceSet *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> & Pick(Scaleform::GFx::AS3::NamespaceSet *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> & SetPtr(Scaleform::GFx::AS3::NamespaceSet *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> &);
	Scaleform::GFx::AS3::NamespaceSet * operator->();
	Scaleform::GFx::AS3::NamespaceSet & operator*();
	Scaleform::GFx::AS3::NamespaceSet * & GetRawRef();
	Scaleform::GFx::AS3::NamespaceSet * * GetRawPtr();
	Scaleform::GFx::AS3::NamespaceSet * GetPtr();
	Scaleform::GFx::AS3::NamespaceSet * operator class Scaleform::GFx::AS3::NamespaceSet *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::NamespaceSet * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>,344,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode>
{
	struct ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::ASStringNode>(Scaleform::Pickable<Scaleform::GFx::ASStringNode>);
	SPtr<Scaleform::GFx::ASStringNode>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::ASStringNode>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> &);
	SPtr<Scaleform::GFx::ASStringNode>(Scaleform::GFx::ASStringNode *);
	~SPtr<Scaleform::GFx::ASStringNode>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> & operator=(Scaleform::Pickable<Scaleform::GFx::ASStringNode>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> & operator=(Scaleform::GFx::ASStringNode *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> & Pick(Scaleform::GFx::ASStringNode *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> & Pick(Scaleform::Pickable<Scaleform::GFx::ASStringNode>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> & SetPtr(Scaleform::GFx::ASStringNode *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> &);
	Scaleform::GFx::ASStringNode * operator->();
	Scaleform::GFx::ASStringNode & operator*();
	Scaleform::GFx::ASStringNode * & GetRawRef();
	Scaleform::GFx::ASStringNode * * GetRawPtr();
	Scaleform::GFx::ASStringNode * GetPtr();
	Scaleform::GFx::ASStringNode * operator struct Scaleform::GFx::ASStringNode *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::ASStringNode * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits>,341,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::VMAppDomain>(Scaleform::Pickable<Scaleform::GFx::AS3::VMAppDomain>);
	SPtr<Scaleform::GFx::AS3::VMAppDomain>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::VMAppDomain>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> &);
	SPtr<Scaleform::GFx::AS3::VMAppDomain>(Scaleform::GFx::AS3::VMAppDomain *);
	~SPtr<Scaleform::GFx::AS3::VMAppDomain>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::VMAppDomain>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> & operator=(Scaleform::GFx::AS3::VMAppDomain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> & Pick(Scaleform::GFx::AS3::VMAppDomain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::VMAppDomain>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> & SetPtr(Scaleform::GFx::AS3::VMAppDomain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> &);
	Scaleform::GFx::AS3::VMAppDomain * operator->();
	Scaleform::GFx::AS3::VMAppDomain & operator*();
	Scaleform::GFx::AS3::VMAppDomain * & GetRawRef();
	Scaleform::GFx::AS3::VMAppDomain * * GetRawPtr();
	Scaleform::GFx::AS3::VMAppDomain * GetPtr();
	Scaleform::GFx::AS3::VMAppDomain * operator class Scaleform::GFx::AS3::VMAppDomain *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::VMAppDomain * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::TypeBarrier
{
private:
	TypeBarrier(const Scaleform::GFx::AS3::TypeBarrier &);
protected:
	TypeBarrier();
private:
	Scaleform::GFx::AS3::TypeBarrier & operator=(const Scaleform::GFx::AS3::TypeBarrier &);
public:
	unsigned long N; // 0x0
};
class Scaleform::GFx::AS3::TypeBarrier1 :
	Scaleform::GFx::AS3::TypeBarrier
{
private:
	TypeBarrier1(const Scaleform::GFx::AS3::TypeBarrier1 &);
public:
	TypeBarrier1(const Scaleform::GFx::AS3::Traits *, Scaleform::GFx::AS3::TypeBarrier1 *);
	const Scaleform::GFx::AS3::Traits * GetTraits();
	void SetTraits(const Scaleform::GFx::AS3::Traits *);
	Scaleform::GFx::AS3::TypeBarrier1 * GetNext();
	void SetNext(Scaleform::GFx::AS3::TypeBarrier1 *);
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
private:
	Scaleform::GFx::AS3::TypeBarrier1 & operator=(const Scaleform::GFx::AS3::TypeBarrier1 &);
	const Scaleform::GFx::AS3::Traits * T; // 0x8
	Scaleform::GFx::AS3::TypeBarrier1 * Next; // 0x10
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::TypeBarrier2 :
	Scaleform::GFx::AS3::TypeBarrier
{
private:
	TypeBarrier2(const Scaleform::GFx::AS3::TypeBarrier2 &);
public:
	TypeBarrier2();
	const Scaleform::GFx::AS3::Traits * GetLT();
	const Scaleform::GFx::AS3::Traits * GetRT();
	Scaleform::GFx::AS3::TypeBarrier2 * GetNext();
	static bool IsValidOpCode(Scaleform::GFx::AS3::Abc::Code::OpCode);
	bool IsDefault();
private:
	Scaleform::GFx::AS3::TypeBarrier2 & operator=(const Scaleform::GFx::AS3::TypeBarrier2 &);
	const Scaleform::GFx::AS3::Traits * LT; // 0x8
	const Scaleform::GFx::AS3::Traits * RT; // 0x10
	Scaleform::GFx::AS3::TypeBarrier2 * Next; // 0x18
};
struct Scaleform::GFx::AS3::VMMethodBodyInfo :
	Scaleform::GFx::AS3::Abc::HasTraits
{
	VMMethodBodyInfo(Scaleform::GFx::AS3::VMMethodBodyInfo &);
	VMMethodBodyInfo(const Scaleform::GFx::AS3::VMMethodBodyInfo &);
	VMMethodBodyInfo();
	unsigned long MaxOpStackSize; // 0x10
	unsigned long MaxLocalRegisterInd; // 0x14
	unsigned long MaxScopeDepth; // 0x18
	unsigned long ParamNum; // 0x1C
	unsigned long VMExcOffset; // 0x20
	unsigned long VMExcNum; // 0x24
	unsigned long VMExcTypeOffset; // 0x28
	unsigned char Flags; // 0x2C
	unsigned char NumOfUses; // 0x2D
	bool Recompile; // 0x2E
	class TNodeTypeCache;
	Scaleform::HashLH<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > NodeTypeCache; // 0x30
	Scaleform::ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy> OpCode; // 0x38
	void SetRecompile(bool);
	bool FindExceptionInfo(const Scaleform::GFx::AS3::VMAbcFile &, unsigned long long, unsigned long long &);
private:
	void SetTraitsNum(unsigned long);
	void SetTraitsOffset(const unsigned char *);
public:
	~VMMethodBodyInfo();
	Scaleform::GFx::AS3::VMMethodBodyInfo & operator=(Scaleform::GFx::AS3::VMMethodBodyInfo &);
	Scaleform::GFx::AS3::VMMethodBodyInfo & operator=(const Scaleform::GFx::AS3::VMMethodBodyInfo &);
};
class Scaleform::HashLH<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > :
	Scaleform::Hash<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,Scaleform::AllocatorLH<unsigned long,341>,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned long,341>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::(const Scaleform::HashLH<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > &);
	HashLH<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::(long);
	HashLH<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::();
	~HashLH<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform:();
	void operator=(const Scaleform::HashLH<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::TypeBarrier *,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > &);
};
class Scaleform::FixedSizeHash<unsigned long>
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const unsigned long &);
};
struct Scaleform::GFx::AS3::VMExceptionTypeInfo
{
	class Collector;
	VMExceptionTypeInfo(Scaleform::GFx::AS3::VMExceptionTypeInfo &);
	VMExceptionTypeInfo(const Scaleform::GFx::AS3::VMExceptionTypeInfo &);
	VMExceptionTypeInfo(unsigned long, unsigned long);
	unsigned long GetExceptionTypeInd();
	unsigned long GetVariableNameInd();
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	Scaleform::GFx::AS3::InstanceTraits::fl::Catch * GetCatchTR(Scaleform::GFx::AS3::VMAbcFile &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetTypeTR(Scaleform::GFx::AS3::VMAbcFile &);
private:
	unsigned long exc_type_ind; // 0x0
	unsigned long var_name_ind; // 0x4
	const Scaleform::GFx::AS3::ClassTraits::Traits * TypeTR; // 0x8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> CatchTR; // 0x10
public:
	~VMExceptionTypeInfo();
	Scaleform::GFx::AS3::VMExceptionTypeInfo & operator=(Scaleform::GFx::AS3::VMExceptionTypeInfo &);
	Scaleform::GFx::AS3::VMExceptionTypeInfo & operator=(const Scaleform::GFx::AS3::VMExceptionTypeInfo &);
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> &);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>(Scaleform::GFx::AS3::InstanceTraits::fl::Catch *);
	~SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> & operator=(Scaleform::GFx::AS3::InstanceTraits::fl::Catch *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> & Pick(Scaleform::GFx::AS3::InstanceTraits::fl::Catch *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::Catch>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> & SetPtr(Scaleform::GFx::AS3::InstanceTraits::fl::Catch *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Catch> &);
	Scaleform::GFx::AS3::InstanceTraits::fl::Catch * operator->();
	Scaleform::GFx::AS3::InstanceTraits::fl::Catch & operator*();
	Scaleform::GFx::AS3::InstanceTraits::fl::Catch * & GetRawRef();
	Scaleform::GFx::AS3::InstanceTraits::fl::Catch * * GetRawPtr();
	Scaleform::GFx::AS3::InstanceTraits::fl::Catch * GetPtr();
	Scaleform::GFx::AS3::InstanceTraits::fl::Catch * operator class Scaleform::GFx::AS3::InstanceTraits::fl::Catch *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::InstanceTraits::fl::Catch * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::AS3::VMExceptionInfo
{
	VMExceptionInfo(unsigned long, unsigned long, unsigned long, unsigned long long);
	unsigned long GetFrom();
	unsigned long GetTo();
	unsigned long GetTargetPos();
	unsigned long long GetTypeInfoInd();
private:
	unsigned long From; // 0x0
	unsigned long To; // 0x4
	unsigned long target; // 0x8
	unsigned long long TypeInfoInd; // 0x10
};
class Scaleform::GFx::AS3::VMAbcFile :
	Scaleform::GFx::AS3::VMFile
{
	class TGlobalObjectScriptSet;
public:
	VMAbcFile(Scaleform::GFx::AS3::VM &, const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &, Scaleform::GFx::AS3::VMAppDomain &);
	virtual ~VMAbcFile();
	Scaleform::GFx::AS3::Value GetDetailValue(const Scaleform::GFx::AS3::Abc::ValueDetail &);
	Scaleform::GFx::AS3::InstanceTraits::fl::Function & GetFunctionInstanceTraits(Scaleform::GFx::AS3::Abc::MbiInd);
	virtual const Scaleform::GFx::AS3::Abc::Multiname & GetMultiname(unsigned long long);
	const Scaleform::GFx::AS3::Abc::File & GetAbcFile();
	const Scaleform::GFx::AS3::Abc::ConstPool & GetConstPool();
	Scaleform::GFx::AS3::Abc::MbiInd GetMethodBodyInfoInd(Scaleform::GFx::AS3::Abc::MiInd);
	Scaleform::GFx::AS3::VMMethodBodyInfo & GetOpCode(const Scaleform::GFx::AS3::CallFrame &);
	const Scaleform::GFx::AS3::VMExceptionInfo & GetVMExceptionInfo(unsigned long long);
	const Scaleform::GFx::AS3::VMExceptionInfo & GetVMExceptionInfo(Scaleform::GFx::AS3::Abc::MbiInd, unsigned long long);
	const Scaleform::GFx::AS3::VMExceptionTypeInfo & GetVMExceptionTypeInfo(unsigned long long);
	const Scaleform::GFx::AS3::VMExceptionTypeInfo & GetVMExceptionTypeInfo(Scaleform::GFx::AS3::Abc::MbiInd, unsigned long long);
	unsigned long long GetVMExceptionTypeInfoInd(Scaleform::GFx::AS3::Abc::MbiInd, unsigned long long);
private:
	Scaleform::GFx::AS3::VMMethodBodyInfo & GetVMMbi(Scaleform::GFx::AS3::Abc::MiInd);
	Scaleform::GFx::AS3::VMMethodBodyInfo & GetVMMbi(Scaleform::GFx::AS3::Abc::MbiInd);
public:
	const Scaleform::GFx::AS3::VMMethodBodyInfo & GetVMMbi(Scaleform::GFx::AS3::Abc::MiInd);
	const Scaleform::GFx::AS3::VMMethodBodyInfo & GetVMMbi(Scaleform::GFx::AS3::Abc::MbiInd);
	const Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> > > > & GetGOScripts();
	Scaleform::GFx::AS3::Bubble & GetAllocator();
	Scaleform::GFx::AS3::TypeBarrier1 * MakeTypeBarrier1(const Scaleform::GFx::AS3::Traits *, Scaleform::GFx::AS3::TypeBarrier1 *);
private:
	virtual Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(unsigned long long);
	virtual Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(const Scaleform::GFx::AS3::Abc::Multiname &);
	virtual Scaleform::Pickable<Scaleform::GFx::AS3::NamespaceSet> MakeInternedNamespaceSet(unsigned long long);
	virtual Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits> MakeActivationInstanceTraits(const Scaleform::GFx::AS3::Abc::MbiInd);
	virtual Scaleform::GFx::ASString MakeInternedString(unsigned long long);
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	virtual void Finalize_GC();
	bool HasFinalize_GC();
	bool RegisterUserDefinedClassTraits();
	void UnregisterUserDefinedClassTraits();
	bool RegisterScrips(bool);
	Scaleform::GFx::AS3::CheckResult Load(bool);
public:
	void UnRegister();
private:
	Scaleform::GFx::AS3::VMAbcFile & operator=(const Scaleform::GFx::AS3::VMAbcFile &);
	class TFunctionTraitsCache;
	class TAliasClass;
	class TAbsObjects;
	class TChildren;
	class TExceptionTypes;
	class TExceptions;
	class TMBIArray;
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> File; // 0x98
	Scaleform::GFx::AS3::Bubble Allocator; // 0xA0
	Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > > AbsObjects; // 0xC8
	Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> > > > GlobalObjects; // 0xD0
	Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy> Children; // 0xD8
	Scaleform::HashLH<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > FunctionTraitsCache; // 0xF0
	Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy> ExceptionTypes; // 0xF8
	Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy> Exceptions; // 0x110
	Scaleform::ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy> MBIArray; // 0x128
	Scaleform::HashSetUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,341> AliasClass; // 0x140
};
class Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> > > > :
	Scaleform::HashSet<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,341>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> > > >
{
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scal(const Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> > > > &);
	HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scal(long);
	HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scal();
	~HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Sca();
	void operator=(const Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> > > > &);
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>);
	SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>(Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> & operator=(Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> & Pick(Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> & SetPtr(Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> &);
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * operator->();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript & operator*();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * GetPtr();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * operator class Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> >
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript> &);
};
class Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File>
{
protected:
	Scaleform::GFx::AS3::Abc::File * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::Abc::File>(const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &);
	Ptr<Scaleform::GFx::AS3::Abc::File>(Scaleform::GFx::AS3::Abc::File *);
	Ptr<Scaleform::GFx::AS3::Abc::File>(Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::Abc::File>(Scaleform::Pickable<Scaleform::GFx::AS3::Abc::File>);
	Ptr<Scaleform::GFx::AS3::Abc::File>(Scaleform::GFx::AS3::Abc::File &);
	Ptr<Scaleform::GFx::AS3::Abc::File>();
	~Ptr<Scaleform::GFx::AS3::Abc::File>();
	bool operator==(Scaleform::GFx::AS3::Abc::File *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &);
	bool operator!=(Scaleform::GFx::AS3::Abc::File *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Abc::File>);
	const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & operator=(Scaleform::GFx::AS3::Abc::File &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & operator=(Scaleform::GFx::AS3::Abc::File *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::Abc::File>);
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & SetPtr(Scaleform::GFx::AS3::Abc::File &);
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & SetPtr(Scaleform::GFx::AS3::Abc::File *);
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::Abc::File * & GetRawRef();
	Scaleform::GFx::AS3::Abc::File * GetPtr();
	Scaleform::GFx::AS3::Abc::File & operator*();
	Scaleform::GFx::AS3::Abc::File * operator->();
	Scaleform::GFx::AS3::Abc::File * operator class Scaleform::GFx::AS3::Abc::File *();
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & Pick(Scaleform::GFx::AS3::Abc::File *);
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Abc::File>);
	Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &);
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::Function>);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> &);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>(Scaleform::GFx::AS3::InstanceTraits::fl::Function *);
	~SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::Function>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> & operator=(Scaleform::GFx::AS3::InstanceTraits::fl::Function *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> & Pick(Scaleform::GFx::AS3::InstanceTraits::fl::Function *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::Function>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> & SetPtr(Scaleform::GFx::AS3::InstanceTraits::fl::Function *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> &);
	Scaleform::GFx::AS3::InstanceTraits::fl::Function * operator->();
	Scaleform::GFx::AS3::InstanceTraits::fl::Function & operator*();
	Scaleform::GFx::AS3::InstanceTraits::fl::Function * & GetRawRef();
	Scaleform::GFx::AS3::InstanceTraits::fl::Function * * GetRawPtr();
	Scaleform::GFx::AS3::InstanceTraits::fl::Function * GetPtr();
	Scaleform::GFx::AS3::InstanceTraits::fl::Function * operator class Scaleform::GFx::AS3::InstanceTraits::fl::Function *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::InstanceTraits::fl::Function * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::HashLH<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > :
	Scaleform::Hash<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,Scaleform::AllocatorLH<unsigned long,341>,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned long,341>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Sca(const Scaleform::HashLH<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > &);
	HashLH<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Sca(long);
	HashLH<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Sca();
	~HashLH<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Sc();
	void operator=(const Scaleform::HashLH<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long>,341,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >,Scaleform::HashNode<unsigned long,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function>,Scaleform::FixedSizeHash<unsigned long> >::NodeHashF> > &);
};
class Scaleform::HashSetUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,341> :
	Scaleform::HashSet<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::AllocatorLH<Scaleform::GFx::ASString,341>,Scaleform::HashsetEntry<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc> >
{
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,341>(const Scaleform::HashSetUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,341> &);
	HashSetUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,341>(long);
	HashSetUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,341>();
	~HashSetUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,341>();
	void operator=(const Scaleform::HashSetUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::ASStringNodeHashFunc,Scaleform::GFx::AS3::ASStringNodeHashFunc,341> &);
};
class Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > > :
	Scaleform::HashSet<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,341>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > >
{
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,(const Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > > &);
	HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,(long);
	HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,();
	~HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >();
	void operator=(const Scaleform::HashSetLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,341,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > > &);
};
class Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> &);
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,341,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMExceptionTypeInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::VMExceptionTypeInfo,341,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMExceptionInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::VMExceptionInfo,341>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::VMExceptionInfo,341,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMMethodBodyInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::VMMethodBodyInfo,346,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::AS3::ClassTraits::Traits * * Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits * __ptr64,329>::Get(Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x1404820D0
class Scaleform::GFx::AS3::CallFrame
{
public:
	void Init(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::Abc::MbiInd, Scaleform::GFx::AS3::Value *, Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript *, const Scaleform::GFx::AS3::VSBase &, const Scaleform::GFx::AS3::Traits &);
	CallFrame(const Scaleform::GFx::AS3::CallFrame &);
	CallFrame();
	~CallFrame();
	Scaleform::GFx::AS3::Abc::MbiInd GetMethodBodyInd();
	Scaleform::GFx::AS3::Abc::MiInd GetMiInd();
	const Scaleform::GFx::AS3::VMExceptionInfo & GetVMExceptionInfo(unsigned long long);
	const Scaleform::GFx::AS3::VMExceptionTypeInfo & GetVMExceptionTypeInfo(unsigned long long);
	unsigned long long GetVMExceptionTypeInfoInd(unsigned long long);
	bool FindExceptionInfo(unsigned long long, unsigned long long &);
	const Scaleform::ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy> & GetCode();
	const unsigned long long * GetCP();
	const Scaleform::GFx::AS3::VSBase & GetSavedScope();
	bool NeedToDiscardResult();
	const Scaleform::GFx::AS3::Traits & GetOriginationTraits();
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::VMAbcFile & GetFile();
	const Scaleform::GFx::AS3::Value & GetInvoker();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript & GetGlobalObject();
	Scaleform::GFx::AS3::Instances::fl::Namespace * GetDefXMLNamespace();
	Scaleform::GFx::AS3::Value & GetResult();
	void ClearOpStack();
	void ClearScopeStack();
private:
	void SetCP(const unsigned long long *);
	Scaleform::GFx::AS3::CheckResult SetupRegisters(const Scaleform::GFx::AS3::Value &, unsigned long &, const unsigned long, Scaleform::GFx::AS3::Value *, bool, const Scaleform::GFx::AS3::VMMethodBodyInfo &);
	void ReserveStack(Scaleform::GFx::AS3::VMMethodBodyInfo &);
	bool Initialized; // 0x0
	const unsigned long long * CP; // 0x8
	const Scaleform::ArrayLH_POD<unsigned __int64,347,Scaleform::ArrayDefaultPolicy> * OCPtr; // 0x10
	Scaleform::GFx::AS3::VMAbcFile * pFile; // 0x18
	Scaleform::GFx::AS3::Abc::MbiInd MBIIndex; // 0x20
	const Scaleform::GFx::AS3::Traits * OriginationTraits; // 0x28
	const Scaleform::GFx::AS3::VSBase * pSavedScope; // 0x30
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * pGO; // 0x38
	Scaleform::GFx::AS3::Value * pResult; // 0x40
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> DefXMLNamespace; // 0x48
	Scaleform::GFx::AS3::VRFBase PrevRegisters; // 0x50
	Scaleform::GFx::AS3::VSBase PrevOpStack; // 0x60
	Scaleform::GFx::AS3::VSBase PrevScopeStack; // 0x70
	Scaleform::GFx::AS3::Value Invoker; // 0x80
public:
	Scaleform::GFx::AS3::CallFrame & operator=(const Scaleform::GFx::AS3::CallFrame &);
};
struct Scaleform::GFx::AS3::CallArgs
{
private:
	CallArgs(const Scaleform::GFx::AS3::CallArgs &);
public:
	CallArgs(Scaleform::GFx::AS3::StackWindow &, const Scaleform::GFx::AS3::OpStackLayout &);
	CallArgs(const Scaleform::GFx::AS3::Value *, unsigned long, const Scaleform::GFx::AS3::Value *);
	const unsigned long argc; // 0x0
	const Scaleform::GFx::AS3::Value * argv; // 0x8
	const Scaleform::GFx::AS3::Value * _this; // 0x10
private:
	Scaleform::GFx::AS3::CallArgs & operator=(const Scaleform::GFx::AS3::CallArgs &);
};
class Scaleform::GFx::AS3::FileLoader
{
public:
	~FileLoader();
	unsigned long long GetSize();
	const Scaleform::GFx::AS3::Abc::File * GetFile(const Scaleform::GFx::ASString &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> & GetFile(unsigned long long);
	void AddFile(Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &);
	FileLoader(const Scaleform::GFx::AS3::FileLoader &);
	FileLoader();
	Scaleform::GFx::AS3::FileLoader & operator=(const Scaleform::GFx::AS3::FileLoader &);
};
class Scaleform::GFx::AS3::XMLSupport :
	Scaleform::GFx::AS3::GASRefCountBase
{
protected:
	XMLSupport(Scaleform::GFx::AS3::VM &, bool);
public:
	virtual ~XMLSupport();
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	bool IsEnabled();
	Scaleform::GFx::AS3::CheckResult EqualsXML(bool &, bool &, Scaleform::GFx::AS3::Instances::fl::XML &, const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult EqualsXML(bool &, Scaleform::GFx::AS3::Instances::fl::XML &, Scaleform::GFx::AS3::Instances::fl::XML &);
	Scaleform::GFx::AS3::CheckResult EqualsXMLList(bool &, Scaleform::GFx::AS3::Instances::fl::XMLList &, const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult EqualsQName(bool &, Scaleform::GFx::AS3::Instances::fl::QName &, Scaleform::GFx::AS3::Instances::fl::QName &);
	bool Add(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Object &, Scaleform::GFx::AS3::Object &);
	Scaleform::GFx::AS3::CheckResult ToXMLString(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Value &);
	void DescribeType(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &, const Scaleform::GFx::AS3::Value &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetClassTraitsXML();
	Scaleform::GFx::AS3::InstanceTraits::Traits * GetITraitsXML();
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetClassTraitsXMLList();
	Scaleform::GFx::AS3::InstanceTraits::Traits * GetITraitsXMLList();
private:
	bool Enabled; // 0x28
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl::XML>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::XML>);
	SPtr<Scaleform::GFx::AS3::Instances::fl::XML>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl::XML>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl::XML>(Scaleform::GFx::AS3::Instances::fl::XML *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl::XML>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::XML>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & operator=(Scaleform::GFx::AS3::Instances::fl::XML *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & Pick(Scaleform::GFx::AS3::Instances::fl::XML *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::XML>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & SetPtr(Scaleform::GFx::AS3::Instances::fl::XML *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &);
	Scaleform::GFx::AS3::Instances::fl::XML * operator->();
	Scaleform::GFx::AS3::Instances::fl::XML & operator*();
	Scaleform::GFx::AS3::Instances::fl::XML * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl::XML * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl::XML * GetPtr();
	Scaleform::GFx::AS3::Instances::fl::XML * operator class Scaleform::GFx::AS3::Instances::fl::XML *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl::XML * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>
{
	struct Key;
	class TContainer;
private:
	Scaleform::HashDH<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor,329,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key,Scaleform::GFx::AS3::ClassTraits::Traits *,Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>::Key::HashFunctor>::NodeHashF> > Entries; // 0x0
	typedef Scaleform::GFx::AS3::ClassTraits::Traits ValueType;
	class SelfType;
public:
	MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>(const Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329> &);
	MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>(void *);
	~MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329>();
	Scaleform::GFx::AS3::ClassTraits::Traits * * Get(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::GFx::AS3::ClassTraits::Traits * * Get(const Scaleform::GFx::AS3::Multiname &);
	Scaleform::GFx::AS3::ClassTraits::Traits * * Get(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void Add(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::ClassTraits::Traits * &);
	void Set(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::ClassTraits::Traits * &);
	void Remove(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void RemoveValue(Scaleform::GFx::AS3::ClassTraits::Traits * &);
	void Clear();
	void GetMultinames(Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy> &);
	bool IsEmpty();
	Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329> & operator=(const Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329> &);
};
class Scaleform::GFx::AS3::VMAppDomain :
	Scaleform::GFx::AS3::GASRefCountBase
{
public:
	VMAppDomain(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::VMAppDomain *);
	virtual ~VMAppDomain();
	void AddChild(Scaleform::GFx::AS3::VMAppDomain &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> AddNewChild(Scaleform::GFx::AS3::VM &);
	Scaleform::GFx::AS3::VMAppDomain * GetParent();
	bool RemoveChild(Scaleform::GFx::AS3::VMAppDomain &);
	Scaleform::GFx::AS3::ClassTraits::Traits * * GetClassTrait(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::GFx::AS3::ClassTraits::Traits * * GetClassTrait(const Scaleform::GFx::AS3::Multiname &);
	Scaleform::GFx::AS3::ClassTraits::Traits * * GetClassTrait(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	Scaleform::GFx::AS3::ClassTraits::Traits * * GetClassTraitNoParent(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void AddClassTrait(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::ClassTraits::Traits *);
	void SetClassTrait(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::ClassTraits::Traits *);
	void RemoveClassTrait(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void RemoveClassTraitValue(Scaleform::GFx::AS3::ClassTraits::Traits *);
	void GetMultinames(Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy> &);
	bool IsEmpty();
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	static void SetEnabled(bool);
	static bool IsEnabled();
	class TChildDomains;
private:
	Scaleform::GFx::AS3::VMAppDomain * ParentDomain; // 0x28
	Scaleform::GFx::AS3::MultinameHash<Scaleform::GFx::AS3::ClassTraits::Traits *,329> ClassTraitsSet; // 0x30
	Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy> ChildDomains; // 0x40
	static bool Enabled; // 0xFFFFFFFFFFFFFFFF
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain>,329,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::VM :
	Scaleform::NewOverrideBase<329>
{
public:
	VM(Scaleform::GFx::AS3::FlashUI &, Scaleform::GFx::AS3::StringManager &, Scaleform::GFx::AS3::ASRefCountCollector &);
	~VM();
	enum ErrorID
	{
		eOutOfMemoryError = 1000,
		eNotImplementedError = 1001,
		eInvalidPrecisionError = 1002,
		eInvalidRadixError = 1003,
		eInvokeOnIncompatibleObjectError = 1004,
		eArrayIndexNotIntegerError = 1005,
		eCallOfNonFunctionError = 1006,
		eConstructOfNonFunctionError = 1007,
		eAmbiguousBindingError = 1008,
		eConvertNullToObjectError = 1009,
		eConvertUndefinedToObjectError = 1010,
		eIllegalOpcodeError = 1011,
		eLastInstExceedsCodeSizeError = 1012,
		eFindVarWithNoScopeError = 1013,
		eClassNotFoundError = 1014,
		eIllegalSetDxns = 1015,
		eDescendentsError = 1016,
		eScopeStackOverflowError = 1017,
		eScopeStackUnderflowError = 1018,
		eGetScopeObjectBoundsError = 1019,
		eCannotFallOffMethodError = 1020,
		eInvalidBranchTargetError = 1021,
		eIllegalVoidError = 1022,
		eStackOverflowError = 1023,
		eStackUnderflowError = 1024,
		eInvalidRegisterError = 1025,
		eSlotExceedsCountError = 1026,
		eMethodInfoExceedsCountError = 1027,
		eDispIdExceedsCountError = 1028,
		eDispIdUndefinedError = 1029,
		eStackDepthUnbalancedError = 1030,
		eScopeDepthUnbalancedError = 1031,
		eCpoolIndexRangeError = 1032,
		eCpoolEntryWrongTypeError = 1033,
		eCheckTypeFailedError = 1034,
		eIllegalSuperCallError = 1035,
		eCannotAssignToMethodError = 1037,
		eRedefinedError = 1038,
		eCannotVerifyUntilReferencedError = 1039,
		eCantUseInstanceofOnNonObjectError = 1040,
		eIsTypeMustBeClassError = 1041,
		eInvalidMagicError = 1042,
		eInvalidCodeLengthError = 1043,
		eInvalidMethodInfoFlagsError = 1044,
		eUnsupportedTraitsKindError = 1045,
		eMethodInfoOrderError = 1046,
		eMissingEntryPointError = 1047,
		ePrototypeTypeError = 1049,
		eConvertToPrimitiveError = 1050,
		eIllegalEarlyBindingError = 1051,
		eInvalidURIError = 1052,
		eIllegalOverrideError = 1053,
		eIllegalExceptionHandlerError = 1054,
		eWriteSealedError = 1056,
		eIllegalSlotError = 1057,
		eIllegalOperandTypeError = 1058,
		eClassInfoOrderError = 1059,
		eClassInfoExceedsCountError = 1060,
		eNumberOutOfRangeError = 1061,
		eWrongArgumentCountError = 1063,
		eCannotCallMethodAsConstructor = 1064,
		eUndefinedVarError = 1065,
		eFunctionConstructorError = 1066,
		eIllegalNativeMethodBodyError = 1067,
		eCannotMergeTypesError = 1068,
		eReadSealedError = 1069,
		ePropertyNotFoundError = 1069,
		eCallNotFoundError = 1070,
		eAlreadyBoundError = 1071,
		eZeroDispIdError = 1072,
		eDuplicateDispIdError = 1073,
		eConstWriteError = 1074,
		eMathNotFunctionError = 1075,
		eMathNotConstructorError = 1076,
		eWriteOnlyError = 1077,
		eIllegalOpMultinameError = 1078,
		eIllegalNativeMethodError = 1079,
		eIllegalNamespaceError = 1080,
		eReadSealedErrorNs = 1081,
		eNoDefaultNamespaceError = 1082,
		eXMLPrefixNotBound = 1083,
		eXMLBadQName = 1084,
		eXMLUnterminatedElementTag = 1085,
		eXMLOnlyWorksWithOneItemLists = 1086,
		eXMLAssignmentToIndexedXMLNotAllowed = 1087,
		eXMLMarkupMustBeWellFormed = 1088,
		eXMLAssigmentOneItemLists = 1089,
		eXMLMalformedElement = 1090,
		eXMLUnterminatedCData = 1091,
		eXMLUnterminatedXMLDecl = 1092,
		eXMLUnterminatedDocTypeDecl = 1093,
		eXMLUnterminatedComment = 1094,
		eXMLUnterminatedAttribute = 1095,
		eXMLUnterminatedElement = 1096,
		eXMLUnterminatedProcessingInstruction = 1097,
		eXMLNamespaceWithPrefixAndNoURI = 1098,
		eRegExpFlagsArgumentError = 1100,
		eNoScopeError = 1101,
		eIllegalDefaultValue = 1102,
		eCannotExtendFinalClass = 1103,
		eXMLDuplicateAttribute = 1104,
		eCorruptABCError = 1107,
		eInvalidBaseClassError = 1108,
		eDanglingFunctionError = 1109,
		eCannotExtendError = 1110,
		eCannotImplementError = 1111,
		eCoerceArgumentCountError = 1112,
		eInvalidNewActivationError = 1113,
		eNoGlobalScopeError = 1114,
		eNotConstructorError = 1115,
		eApplyError = 1116,
		eXMLInvalidName = 1117,
		eXMLIllegalCyclicalLoop = 1118,
		eDeleteTypeError = 1119,
		eDeleteSealedError = 1120,
		eDuplicateMethodBodyError = 1121,
		eIllegalInterfaceMethodBodyError = 1122,
		eFilterError = 1123,
		eInvalidHasNextError = 1124,
		eOutOfRangeError = 1125,
		eVectorFixedError = 1126,
		eTypeAppOfNonParamType = 1127,
		eWrongTypeArgCountError = 1128,
		eFileOpenError = 1500,
		eFileWriteError = 1501,
		eScriptTimeoutError = 1502,
		eScriptTerminatedError = 1503,
		eEndOfFileError = 1504,
		eStringIndexOutOfBoundsError = 1505,
		eInvalidRangeError = 1506,
		eNullArgumentError = 1507,
		eInvalidArgumentError = 1508,
		eShellCompressedDataError = 1509,
		eArrayFilterNonNullObjectError = 1510,
		eParamRangeError = 2006,
		eNullPointerError = 2007,
		eInvalidEnumError = 2008,
		eCannotInstantiateError = 2012,
		eArgumentError = 2015,
		eAddObjectItselfError = 2024,
		eMustBeChildError = 2025,
		eMustBeNonNegative = 2027,
		eEOFError = 2030,
		eCompressedDataError = 2058,
		eIllegalOperationError = 2077,
		eProxyGetPropertyError = 2088,
		eProxySetPropertyError = 2089,
		eProxyCallPropertyError = 2090,
		eProxyHasPropertyError = 2091,
		eProxyDeletePropertyError = 2092,
		eProxyGetDescendantsError = 2093,
		eProxyNextNameIndexError = 2105,
		eProxyNextNameError = 2106,
		eProxyNextValueError = 2107,
		eSceneNotFound = 2108,
		eFrameLabelNotFoundInScene = 2109,
		eSWFHasInvalidData = 2136,
		eFileDoesNotExist = 3003,
	};
	bool CheckObject(const Scaleform::GFx::AS3::Value &);
	static void exec_nop();
	long exec_throw(const unsigned long long *, Scaleform::GFx::AS3::CallFrame &);
	void exec_getsuper(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Traits &, const Scaleform::GFx::AS3::Abc::Multiname &);
	void exec_setsuper(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Traits &, const Scaleform::GFx::AS3::Abc::Multiname &);
	void exec_dxns(Scaleform::GFx::AS3::VMFile &, unsigned long);
	void exec_dxnslate();
	void exec_kill(unsigned long);
	void exec_exception(const unsigned long long *);
	long exec_ifnlt(unsigned long long, long);
	long exec_ifnle(unsigned long long, long);
	long exec_ifngt(unsigned long long, long);
	long exec_ifnge(unsigned long long, long);
	static long exec_jump(long);
	long exec_iftrue(long);
	long exec_iftrue_tb(long);
	long exec_iffalse(long);
	long exec_iffalse_tb(long);
	long exec_ifeq(unsigned long long, long);
	long exec_ifne(unsigned long long, long);
	long exec_iflt(unsigned long long, long);
	long exec_ifle(unsigned long long, long);
	long exec_ifgt(unsigned long long, long);
	long exec_ifge(unsigned long long, long);
	long exec_ifstricteq(long);
	long exec_ifstrictne(long);
	long exec_lookupswitch();
	void exec_pushwith();
	void exec_popscope();
	void exec_nextname();
	void exec_hasnext();
	void exec_pushnull();
	void exec_pushundefined();
	void exec_nextvalue();
	void exec_pushbyte(long);
	void exec_pushshort(long);
	void exec_pushtrue();
	void exec_pushfalse();
	void exec_pushnan();
	void exec_pop();
	void exec_dup();
	void exec_pop_nrc();
	void exec_dup_nrc();
	void exec_swap();
	void exec_pushstring(const unsigned long long);
	void exec_pushint(long);
	void exec_pushuint(long);
	void exec_pushdouble(double);
	void exec_pushscope();
	void exec_pushnamespace(unsigned long long);
	void exec_hasnext2(unsigned long, unsigned long long);
	void exec_newfunction(const Scaleform::GFx::AS3::CallFrame &, unsigned long);
	void exec_call(unsigned long);
	void exec_callobject(unsigned long);
	void exec_construct(unsigned long);
	void exec_construct_strict(unsigned long);
	void exec_callmethod(unsigned long, unsigned long long, unsigned long long);
	void exec_callsupermethod(const Scaleform::GFx::AS3::Traits &, unsigned long, unsigned long long, unsigned long long);
	void exec_callgetter(unsigned long, unsigned long long);
	void exec_callsupergetter(const Scaleform::GFx::AS3::Traits &, unsigned long, unsigned long long);
	void exec_callsuper(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Traits &, const Scaleform::GFx::AS3::Abc::Multiname &, unsigned long long);
	void exec_callproperty(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &, unsigned long long);
	void exec_typebarrier_reg(Scaleform::GFx::AS3::CallFrame &, unsigned long long, unsigned long long);
	void exec_typebarrier();
	void exec_returnvoid(Scaleform::GFx::AS3::CallFrame &);
	void exec_returnvalue(Scaleform::GFx::AS3::CallFrame &);
	void exec_constructsuper(const Scaleform::GFx::AS3::Traits &, unsigned long);
	void exec_constructprop(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &, unsigned long long);
	void exec_callproplex(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &, unsigned long long);
	void exec_callsupervoid(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Traits &, const Scaleform::GFx::AS3::Abc::Multiname &, unsigned long long);
	void exec_callpropvoid(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &, unsigned long long);
	long exec_iftype(unsigned long long, unsigned long);
	void exec_applytype(unsigned long);
	void exec_newobject(unsigned long);
	void exec_newarray(unsigned long);
	void exec_newactivation(unsigned long long);
	void exec_newclass(Scaleform::GFx::AS3::VMAbcFile &, unsigned long);
	void exec_getdescendants(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	void exec_newcatch(unsigned long long);
	void exec_findpropstrict(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &, const Scaleform::GFx::AS3::VSBase &);
	void exec_findproperty(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &, const Scaleform::GFx::AS3::VSBase &, Scaleform::GFx::AS3::Object &);
	void exec_getlex(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &, const Scaleform::GFx::AS3::VSBase &);
	void exec_setproperty(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	void exec_getlocal(unsigned long);
	void exec_setlocal(unsigned long);
	void exec_getglobalscope();
	void exec_getscopeobject(long);
	void exec_getproperty(const unsigned long long *, Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
	void exec_getproperty_ind();
	void exec_getouterscope(Scaleform::GFx::AS3::CallFrame &, unsigned long);
	void exec_initproperty(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	void exec_deleteproperty(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	void exec_getslot(unsigned long);
	void exec_setslot(unsigned long);
	void exec_getglobalslot(unsigned long);
	void exec_setglobalslot(unsigned long);
	void exec_convert_s();
	void exec_esc_xelem();
	void exec_esc_xattr();
	void exec_convert_i(long);
	void exec_convert_u(long);
	void exec_convert_d(long);
	void exec_convert_b(long);
	void exec_convert_o();
	void exec_checkfilter();
	void exec_coerce(unsigned long long, unsigned long long);
	void exec_coerce_s(long);
	void exec_astype(unsigned long long);
	void exec_astypelate();
	void exec_typeof();
	void exec_not();
	void exec_not_tb();
	void exec_bitnot();
	void exec_modulo();
	void exec_lshift();
	void exec_rshift();
	void exec_urshift();
	void exec_bitand();
	void exec_bitor();
	void exec_bitxor();
	bool exec_equals(unsigned long long);
	void exec_strictequals(unsigned long long);
	bool exec_lessthan(unsigned long long);
	bool exec_lessequals(unsigned long long);
	bool exec_greaterthan(unsigned long long);
	bool exec_greaterequals(unsigned long long);
	void exec_instanceof();
	void exec_istype(unsigned long long);
	void exec_istypelate();
	void exec_in();
	void exec_getabsobject(unsigned long long);
	void exec_getabsslot(unsigned long long);
	void exec_setabsslot(unsigned long long);
	void exec_initabsslot(unsigned long long);
	void exec_increment();
	void exec_increment_i();
	void exec_increment_ti();
	void exec_increment_td();
	void exec_decrement();
	void exec_decrement_i();
	void exec_decrement_ti();
	void exec_decrement_td();
	void exec_inclocal(unsigned long);
	void exec_inclocal_i(unsigned long);
	void exec_inclocal_u(unsigned long);
	void exec_inclocal_ti(unsigned long);
	void exec_inclocal_tu(unsigned long);
	void exec_inclocal_td(unsigned long);
	void exec_declocal(unsigned long);
	void exec_declocal_i(unsigned long);
	void exec_declocal_u(unsigned long);
	void exec_declocal_ti(unsigned long);
	void exec_declocal_tu(unsigned long);
	void exec_declocal_td(unsigned long);
	void exec_negate();
	void exec_negate_i();
	void exec_negate_ti();
	void exec_negate_td();
	void exec_add();
	void exec_add_d();
	void exec_add_i();
	void exec_add_ti();
	void exec_add_td();
	void exec_subtract();
	void exec_subtract_i();
	void exec_subtract_ti();
	void exec_subtract_td();
	void exec_multiply();
	void exec_multiply_i();
	void exec_multiply_ti();
	void exec_multiply_td();
	void exec_divide();
	void exec_divide_td();
	void exec_getlocal_0();
	void exec_getlocal_1();
	void exec_getlocal_2();
	void exec_getlocal_3();
	void exec_setlocal_1();
	void exec_setlocal_2();
	void exec_setlocal_3();
	void exec_needargs(Scaleform::GFx::AS3::CallFrame &, unsigned long long, unsigned long long);
	void exec_debug();
	void exec_debugline(Scaleform::GFx::AS3::CallFrame &, unsigned long);
	void exec_debugfile(Scaleform::GFx::AS3::CallFrame &, unsigned long);
	Scaleform::GFx::ASString GetTypeOf(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> LoadFile(const Scaleform::Ptr<Scaleform::GFx::AS3::Abc::File> &, Scaleform::GFx::AS3::VMAppDomain &, bool);
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetRegisteredClassTraits(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetRegisteredClassTraits(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::VMAppDomain &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetRegisteredClassTraits(const Scaleform::GFx::AS3::Multiname &, Scaleform::GFx::AS3::VMAppDomain &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * Resolve2ClassTraits(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * Resolve2ClassTraits(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::VMAppDomain &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * Resolve2ClassTraits(const Scaleform::GFx::AS3::Multiname &, Scaleform::GFx::AS3::VMAppDomain &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * Resolve2ClassTraits(const Scaleform::GFx::AS3::TypeInfo &);
private:
	void RegisterClassTraits(Scaleform::GFx::AS3::ClassTraits::Traits &, Scaleform::GFx::AS3::VMAppDomain &);
public:
	void RegisterClassTraits(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::ClassTraits::Traits &, Scaleform::GFx::AS3::VMAppDomain &);
	void RegisterGlobalObject(Scaleform::GFx::AS3::Instances::fl::GlobalObject &);
	void UnregisterGlobalObject(Scaleform::GFx::AS3::Instances::fl::GlobalObject &);
	Scaleform::GFx::ASString GetAliasByClass(Scaleform::GFx::AS3::Class &);
	Scaleform::GFx::AS3::Class * GetClassByAlias(const Scaleform::GFx::ASString &);
	void SetClassAlias(const Scaleform::GFx::ASString &, Scaleform::GFx::AS3::Class &);
	bool IsOfType(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::ClassTraits::Traits &);
	bool IsOfType(const Scaleform::GFx::AS3::Value &, const char *, Scaleform::GFx::AS3::VMAppDomain &);
	class Error;
private:
	long ExecuteCode(unsigned long);
	bool HasFinished();
	Scaleform::GFx::AS3::CheckResult AddFrame(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::Abc::MbiInd, Scaleform::GFx::AS3::Value *, Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript *, const Scaleform::GFx::AS3::PrimitiveVS &, const Scaleform::GFx::AS3::Traits &, const Scaleform::GFx::AS3::Value &, unsigned long &, const unsigned long, Scaleform::GFx::AS3::Value *, bool, bool);
public:
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Object> MakeObject();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Array> MakeArray();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_utils::ByteArray> MakeByteArray();
	struct OpStackType;
	class CallStackType;
private:
	Scaleform::GFx::AS3::ClassTraits::Traits * GetClassTraits(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::VMAppDomain &);
public:
	const Scaleform::GFx::AS3::ClassTraits::Traits & GetClassTraits(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetInstanceTraits(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::Traits & GetValueTraits(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::StringManager & GetStringManager();
	Scaleform::GFx::ASString AsString(const Scaleform::GFx::AS3::Value &);
	const Scaleform::GFx::AS3::ValueStack & GetOpStack();
	const Scaleform::GFx::AS3::CallFrame & GetCurrCallFrame();
	const Scaleform::ArrayPagedCC<Scaleform::GFx::AS3::CallFrame,6,64,329> & GetCallStack();
	bool IsInitialized();
	void GetStackTraceASString(Scaleform::GFx::ASString &, const char *);
	void GetCodeFileName(Scaleform::GFx::ASString &);
	Scaleform::GFx::ASString describeTypeEx(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::ASString GetASString(const Scaleform::String &);
	Scaleform::GFx::ASString GetASString(const char *, unsigned long long);
	Scaleform::GFx::ASString GetASString(const char *);
private:
	Scaleform::GFx::AS3::ValueRegisterFile & GetRegisters();
public:
	const Scaleform::GFx::AS3::ValueRegisterFile & GetRegisters();
	const Scaleform::GFx::AS3::Value & GetThis();
private:
	Scaleform::GFx::AS3::Value & GetRegister(unsigned long long);
public:
	const Scaleform::GFx::AS3::Value & GetRegister(unsigned long long);
private:
	Scaleform::GFx::AS3::ValueStack & GetScopeStack();
public:
	const Scaleform::GFx::AS3::ValueStack & GetScopeStack();
private:
	void SetThis(const Scaleform::GFx::AS3::Value &);
	void SetThisPickUnsafe(Scaleform::GFx::AS3::Value &);
	void SetRegister(unsigned long long, const Scaleform::GFx::AS3::Value &);
	void SetRegisterPickUnsafe(unsigned long long, Scaleform::GFx::AS3::Value &);
	void SwapRegister(unsigned long long, Scaleform::GFx::AS3::Value &);
public:
	Scaleform::GFx::AS3::FlashUI & GetUI();
	Scaleform::GFx::AS3::ASRefCountCollector & GetGC();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy> & GetGlobalObjects();
	Scaleform::MemoryHeap * GetMemoryHeap();
	bool IsInAS3VMDestructor();
	bool IsClassClass(const Scaleform::GFx::AS3::ClassTraits::Traits &);
	bool IsObject(const Scaleform::GFx::AS3::ClassTraits::Traits &);
	Scaleform::GFx::AS3::Classes::ClassClass & GetClassClass();
	const Scaleform::GFx::AS3::ClassTraits::ClassClass & GetClassTraitsClassClass();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsClass();
	Scaleform::GFx::AS3::Classes::fl::Object & GetClassObject();
	Scaleform::GFx::AS3::ClassTraits::fl::Object & GetClassTraitsObject();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsObject();
	Scaleform::GFx::AS3::Classes::fl::Namespace & GetClassNamespace();
	const Scaleform::GFx::AS3::ClassTraits::fl::Namespace & GetClassTraitsNamespace();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsNamespace();
	Scaleform::GFx::AS3::Classes::fl::Function & GetClassFunction();
	const Scaleform::GFx::AS3::ClassTraits::fl::Function & GetClassTraitsFunction();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsFunction();
	Scaleform::GFx::AS3::Classes::fl::Boolean & GetClassBoolean();
	const Scaleform::GFx::AS3::ClassTraits::fl::Boolean & GetClassTraitsBoolean();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsBoolean();
	Scaleform::GFx::AS3::Classes::fl::Number & GetClassNumber();
	const Scaleform::GFx::AS3::ClassTraits::fl::Number & GetClassTraitsNumber();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsNumber();
	Scaleform::GFx::AS3::Classes::fl::int_ & GetClassSInt();
	const Scaleform::GFx::AS3::ClassTraits::fl::int_ & GetClassTraitsSInt();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsSInt();
	Scaleform::GFx::AS3::Classes::fl::uint & GetClassUInt();
	const Scaleform::GFx::AS3::ClassTraits::fl::uint & GetClassTraitsUInt();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsUInt();
	Scaleform::GFx::AS3::Classes::fl::String & GetClassString();
	const Scaleform::GFx::AS3::ClassTraits::fl::String & GetClassTraitsString();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsString();
	Scaleform::GFx::AS3::Classes::fl::Array & GetClassArray();
	const Scaleform::GFx::AS3::ClassTraits::fl::Array & GetClassTraitsArray();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsArray();
	Scaleform::GFx::AS3::Classes::fl_utils::ByteArray & GetClassByteArray();
	const Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray & GetClassTraitsByteArray();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsByteArray();
	Scaleform::GFx::AS3::Classes::fl::QName & GetClassQName();
	const Scaleform::GFx::AS3::ClassTraits::fl::QName & GetClassTraitsQName();
	const Scaleform::GFx::AS3::ClassTraits::fl::Catch & GetClassTraitsCatch();
	Scaleform::GFx::AS3::Classes::fl_vec::Vector & GetClassVector();
	const Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector & GetClassTraitsVector();
	Scaleform::GFx::AS3::Classes::fl_vec::Vector_int & GetClassVectorSInt();
	const Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int & GetClassTraitsVectorSInt();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsVectorSInt();
	Scaleform::GFx::AS3::Classes::fl_vec::Vector_uint & GetClassVectorUInt();
	const Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint & GetClassTraitsVectorUInt();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsVectorUInt();
	Scaleform::GFx::AS3::Classes::fl_vec::Vector_double & GetClassVectorNumber();
	const Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double & GetClassTraitsVectorNumber();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsVectorNumber();
	Scaleform::GFx::AS3::Classes::fl_vec::Vector_String & GetClassVectorString();
	const Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String & GetClassTraitsVectorString();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsVectorString();
	const Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain & GetClassApplicationDomain();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsApplicationDomain();
	const Scaleform::GFx::AS3::ClassTraits::fl::Domain & GetClassDomain();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsDomain();
	Scaleform::GFx::AS3::Classes::fl::void_ & GetClassVoid();
	const Scaleform::GFx::AS3::ClassTraits::fl::void_ & GetClassTraitsVoid();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetITraitsVoid();
	static bool IsFixedNumType(const Scaleform::GFx::AS3::Traits &);
	static bool IsNumericType(const Scaleform::GFx::AS3::Traits &);
	static bool IsPrimitiveType(const Scaleform::GFx::AS3::Traits &);
	bool IsVMCachedType(const Scaleform::GFx::AS3::Traits &);
	bool IsVMCachedType(const Scaleform::GFx::AS3::ClassTraits::Traits &);
	bool IsVMCachedType(const Scaleform::GFx::AS3::InstanceTraits::Traits &);
	Scaleform::GFx::AS3::Value GetDefaultValue(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::GFx::AS3::Value GetDefaultValue(const Scaleform::GFx::AS3::ClassTraits::Traits &);
	const Scaleform::GFx::AS3::Traits * GetFunctReturnType(const Scaleform::GFx::AS3::TR::Type *);
	Scaleform::GFx::AS3::InstanceTraits::Traits * GetFunctReturnType(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::InstanceTraits::Traits * GetFunctReturnType(const Scaleform::GFx::AS3::ThunkInfo &);
	void Throw(const Scaleform::GFx::AS3::Value &);
	void OutputError(const Scaleform::GFx::AS3::Value &);
	void ThrowError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowEvalError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowRangeError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowReferenceError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowSecurityError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowSyntaxError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowTypeError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowURIError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowVerifyError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowUninitializedError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowArgumentError(const Scaleform::GFx::AS3::VM::Error &);
	void ThrowMemoryError(const Scaleform::GFx::AS3::VM::Error &);
	bool IsException();
	const Scaleform::GFx::AS3::Value & GetExceptionValue();
	void IgnoreException();
	void OutputAndIgnoreException();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind, const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Value &);
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind);
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(const Scaleform::GFx::AS3::AOT::NamespaceInfo &);
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(const Scaleform::GFx::AS3::Abc::NamespaceInfo &);
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind, const Scaleform::GFx::ASString &);
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind, const Scaleform::StringDataPtr &);
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakeInternedNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind, const char *);
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetInternedNamespace(const Scaleform::GFx::AS3::Abc::NamespaceInfo &);
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetInternedNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind, const Scaleform::StringDataPtr &);
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetInternedNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind, const Scaleform::GFx::ASString &);
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetInternedNamespace(Scaleform::GFx::AS3::Abc::NamespaceKind, const char *);
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetPublicNamespace();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace> MakePublicNamespace();
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetAS3Namespace();
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetVectorNamespace();
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetProxyNamespace();
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetXMLNamespace();
	Scaleform::GFx::AS3::Instances::fl::Namespace * GetDefXMLNamespace();
	void SetDefXMLNamespace(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * GetGlobalObject();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP & GetGlobalObjectCPP();
	const Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP & GetGlobalObjectCPP();
	Scaleform::GFx::AS3::Class * GetClass(const Scaleform::StringDataPtr &, Scaleform::GFx::AS3::VMAppDomain &);
	bool GetClassUnsafe(const Scaleform::StringDataPtr &, Scaleform::GFx::AS3::VMAppDomain &, Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult CreateObject(const char *, Scaleform::GFx::AS3::VMAppDomain &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	Scaleform::GFx::AS3::CheckResult ConstructBuiltinValue(Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::TypeInfo &, unsigned long, Scaleform::GFx::AS3::Value *);
	Scaleform::GFx::AS3::CheckResult ConstructBuiltinValue(Scaleform::GFx::AS3::Value &, const char *, unsigned long, Scaleform::GFx::AS3::Value *);
	void RegisterClassInfoTable(const Scaleform::GFx::AS3::ClassInfo * *);
private:
	bool Construct(Scaleform::GFx::AS3::Class &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *, bool);
	bool Construct(const char *, Scaleform::GFx::AS3::VMAppDomain &, Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *);
	Scaleform::GFx::AS3::CheckResult constructBuiltinObject(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &, const char *, unsigned long, Scaleform::GFx::AS3::Value *);
	void ThrowErrorInternal(const Scaleform::GFx::AS3::VM::Error &, const Scaleform::GFx::AS3::TypeInfo &);
public:
	bool IsInInitializer();
private:
	const Scaleform::GFx::AS3::Value & GetGlobalObjectCPPValue();
	void EnterInitializer();
	void LeaveInitializer();
	enum State
	{
		sExecute = 0,
		sStepInto = 1,
		sReturn = 2,
	};
	bool ProcessException(const unsigned long long * &, Scaleform::GFx::AS3::CallFrame &, Scaleform::GFx::AS3::VM::State &);
	bool ProcessThrow(const unsigned long long * &, Scaleform::GFx::AS3::CallFrame &, Scaleform::GFx::AS3::VM::State &);
	bool NeedToStepInto(unsigned long long, Scaleform::GFx::AS3::VM::State &);
	long OnException(unsigned long long, Scaleform::GFx::AS3::CallFrame &);
	void DropCallFrame();
	void PushResult(Scaleform::GFx::AS3::Value &);
	void PickPushResult(Scaleform::GFx::AS3::Value &);
	void PickResult(Scaleform::GFx::AS3::Value &);
	void PickResultUnsafe(Scaleform::GFx::AS3::Value &);
	void ExecuteVTableInd(unsigned long, const Scaleform::GFx::AS3::Traits &, Scaleform::GFx::AS3::ReadArgsThisRef &, unsigned long long);
	void ExecuteThunk(const Scaleform::GFx::AS3::ThunkInfo &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool);
	void ExecuteThunkResolved(const Scaleform::GFx::AS3::ThunkInfo &, Scaleform::GFx::AS3::ReadArgsThisRef &, bool);
	void ExecuteMethodInd(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool);
	void ExecuteInternal(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool, bool);
	void Coerce2ReturnType(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &);
	void FindProperty(Scaleform::GFx::AS3::PropRef &, const Scaleform::GFx::AS3::Multiname &, const Scaleform::GFx::AS3::VSBase &, Scaleform::GFx::AS3::VMAppDomain &);
public:
	void ExecuteUnsafe(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	void Execute(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	void ExecuteFunction(const Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	void ExecuteFunction(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	void Execute_IgnoreExceptionUnsafe(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
private:
	Scaleform::GFx::AS3::VM & GetSelf();
	class GCGuard;
	Scaleform::GFx::AS3::ClassTraits::UserDefined & GetUserDefinedTraits(Scaleform::GFx::AS3::VMFile &, unsigned long);
	void RegisterClassTraitsVector(Scaleform::GFx::AS3::ClassTraits::Traits &, Scaleform::GFx::AS3::VMAppDomain &);
public:
	void AddVMAbcFileWeak(Scaleform::GFx::AS3::VMAbcFile *);
	bool RemoveVMAbcFileWeak(Scaleform::GFx::AS3::VMAbcFile *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> FindVMAbcFileWeak(const char *, Scaleform::GFx::AS3::VMAppDomain &);
	unsigned long long GetAllLoadedAbcFiles(Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> *);
	void UnregisterAllAbcFiles();
	void EnableXMLSupport();
	const Scaleform::GFx::AS3::XMLSupport & GetXMLSupport();
	Scaleform::GFx::AS3::VMAppDomain & GetCurrentAppDomain();
	Scaleform::GFx::AS3::VMAppDomain & GetSystemAppDomain();
	Scaleform::GFx::AS3::VMAppDomain & GetFrameAppDomain();
	bool RemoveAppDomain(Scaleform::GFx::AS3::VMAppDomain &);
	class AliasClassType;
	class ClassAliasType;
	enum <unnamed-enum-MaxCallStackSize>
	{
		MaxCallStackSize = 1024,
	};
private:
	bool Initialized; // 0x8
	bool InDestructor; // 0x9
	bool LoadingAbcFile; // 0xA
	Scaleform::GFx::AS3::StringManager & StringManagerRef; // 0x10
	Scaleform::GFx::AS3::VM::GCGuard GC; // 0x18
	Scaleform::GFx::AS3::FlashUI & UI; // 0x20
	long InInitializer; // 0x28
	Scaleform::MemoryHeap * MHeap; // 0x30
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> XMLSupport_; // 0x38
	Scaleform::GFx::AS3::ValueStack OpStack; // 0x40
	Scaleform::GFx::AS3::ValueRegisterFile RegisterFile; // 0x60
	Scaleform::GFx::AS3::ValueStack ScopeStack; // 0x80
	bool HandleException; // 0xA0
	Scaleform::GFx::AS3::Value ExceptionObj; // 0xA8
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy> GlobalObjects; // 0xC8
	Scaleform::ArrayPagedCC<Scaleform::GFx::AS3::CallFrame,6,64,329> CallStack; // 0xE0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> SystemDomain; // 0x1A8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> CurrentDomain; // 0x1B0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> PublicNamespace; // 0x1B8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> AS3Namespace; // 0x1C0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> VectorNamespace; // 0x1C8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> ProxyNamespace; // 0x1D0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> XMLNamespace; // 0x1D8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> TraitsClassClass; // 0x1E0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> TraitsObject; // 0x1E8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> TraitsNamespace; // 0x1F0
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> TraitsFunction; // 0x1F8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> TraitsBoolean; // 0x200
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> TraitsNumber; // 0x208
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> TraitsInt; // 0x210
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> TraitsUint; // 0x218
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> TraitsString; // 0x220
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> TraitsArray; // 0x228
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> TraitsQName; // 0x230
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> TraitsCatch; // 0x238
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> TraitsVector; // 0x240
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> TraitsVector_int; // 0x248
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> TraitsVector_uint; // 0x250
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> TraitsVector_Number; // 0x258
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> TraitsVector_String; // 0x260
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> TraitsApplicationDomain; // 0x268
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> TraitsDomain; // 0x270
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> TraitsVoid; // 0x278
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> TraitsNull; // 0x280
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::Function> NoFunctionTraits; // 0x288
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> DefXMLNamespace; // 0x290
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> TraitaGlobalObject; // 0x298
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> GlobalObject; // 0x2A0
	Scaleform::GFx::AS3::Value GlobalObjectValue; // 0x2A8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> TraitsByteArray; // 0x2C8
	Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329> AliasClass; // 0x2D0
	Scaleform::HashLH<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,329,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >::NodeHashF> > ClassAlias; // 0x2D8
	Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy> VMAbcFilesWeak; // 0x2E0
};
class Scaleform::NewOverrideBase<329>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 329,
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
void Scaleform::GFx::AS3::VM::RegisterGlobalObject(Scaleform::GFx::AS3::Instances::fl::GlobalObject & go); // 0x1404A0B00
class Scaleform::GFx::AS3::VM::Error
{
public:
	Error(Scaleform::GFx::AS3::VM::Error &);
	Error(const Scaleform::GFx::AS3::VM::Error &);
	Error(Scaleform::GFx::AS3::VM::ErrorID, Scaleform::GFx::AS3::VM &);
	const Scaleform::GFx::ASString & GetMessageA();
	Scaleform::GFx::AS3::VM::ErrorID GetErrorID();
private:
	Scaleform::GFx::AS3::VM::ErrorID ID; // 0x0
	Scaleform::GFx::ASString Message; // 0x8
public:
	~Error();
	Scaleform::GFx::AS3::VM::Error & operator=(Scaleform::GFx::AS3::VM::Error &);
	Scaleform::GFx::AS3::VM::Error & operator=(const Scaleform::GFx::AS3::VM::Error &);
};
class Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Array>
{
public:
	Pickable<Scaleform::GFx::AS3::Instances::fl::Array>(Scaleform::GFx::AS3::Instances::fl::Array *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::Instances::fl::Array>(Scaleform::GFx::AS3::Instances::fl::Array *);
	Pickable<Scaleform::GFx::AS3::Instances::fl::Array>();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Array> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Array> &);
	Scaleform::GFx::AS3::Instances::fl::Array * GetPtr();
	Scaleform::GFx::AS3::Instances::fl::Array * operator->();
	Scaleform::GFx::AS3::Instances::fl::Array & operator*();
private:
	Scaleform::GFx::AS3::Instances::fl::Array * pV; // 0x0
};
class Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_utils::ByteArray>
{
public:
	Pickable<Scaleform::GFx::AS3::Instances::fl_utils::ByteArray>(Scaleform::GFx::AS3::Instances::fl_utils::ByteArray *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::Instances::fl_utils::ByteArray>(Scaleform::GFx::AS3::Instances::fl_utils::ByteArray *);
	Pickable<Scaleform::GFx::AS3::Instances::fl_utils::ByteArray>();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_utils::ByteArray> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_utils::ByteArray> &);
	Scaleform::GFx::AS3::Instances::fl_utils::ByteArray * GetPtr();
	Scaleform::GFx::AS3::Instances::fl_utils::ByteArray * operator->();
	Scaleform::GFx::AS3::Instances::fl_utils::ByteArray & operator*();
private:
	Scaleform::GFx::AS3::Instances::fl_utils::ByteArray * pV; // 0x0
};
class Scaleform::ArrayPagedCC<Scaleform::GFx::AS3::CallFrame,6,64,329> :
	Scaleform::ArrayPagedBase<Scaleform::GFx::AS3::CallFrame,6,64,Scaleform::AllocatorPagedCC<Scaleform::GFx::AS3::CallFrame,329> >
{
	class SelfType;
	class ValueType;
	struct AllocatorType;
public:
	ArrayPagedCC<Scaleform::GFx::AS3::CallFrame,6,64,329>(const Scaleform::GFx::AS3::CallFrame &);
	const Scaleform::GFx::AS3::CallFrame & GetDefaultValue();
private:
	Scaleform::GFx::AS3::CallFrame DefaultValue; // 0x28
public:
	~ArrayPagedCC<Scaleform::GFx::AS3::CallFrame,6,64,329>();
};
Scaleform::GFx::AS3::Classes::fl::Object & Scaleform::GFx::AS3::VM::GetClassObject(); // 0x140484090
void Scaleform::GFx::AS3::VM::OutputAndIgnoreException(); // 0x140499620
class Scaleform::GFx::AS3::VM::GCGuard
{
public:
	GCGuard(Scaleform::GFx::AS3::ASRefCountCollector &);
	~GCGuard();
	Scaleform::GFx::AS3::ASRefCountCollector & GetGC();
	void ForceCollect();
private:
	Scaleform::GFx::AS3::VM::GCGuard & operator=(const Scaleform::GFx::AS3::VM::GCGuard &);
	Scaleform::GFx::AS3::ASRefCountCollector & GC; // 0x0
};
class Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329> :
	Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc>::NodeHashF> >
{
	class SelfType;
	class BaseType;
public:
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329>(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329> &);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329>(long);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329>();
	~HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329>();
	void operator=(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Class *,Scaleform::GFx::AS3::ASStringNodeHashFunc,329> &);
};
class Scaleform::HashLH<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,329,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Class *,329>,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Class *,329>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,329,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scale(const Scaleform::HashLH<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,329,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >::NodeHashF> > &);
	HashLH<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,329,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scale(long);
	HashLH<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,329,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scale();
	~HashLH<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,329,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scal();
	void operator=(const Scaleform::HashLH<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>,329,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >,Scaleform::HashNode<Scaleform::GFx::AS3::Class *,Scaleform::GFx::ASString,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *> >::NodeHashF> > &);
};
class Scaleform::FixedSizeHash<Scaleform::GFx::AS3::Class *>
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(Scaleform::GFx::AS3::Class * &);
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::XMLSupport>(Scaleform::Pickable<Scaleform::GFx::AS3::XMLSupport>);
	SPtr<Scaleform::GFx::AS3::XMLSupport>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::XMLSupport>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> &);
	SPtr<Scaleform::GFx::AS3::XMLSupport>(Scaleform::GFx::AS3::XMLSupport *);
	~SPtr<Scaleform::GFx::AS3::XMLSupport>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::XMLSupport>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> & operator=(Scaleform::GFx::AS3::XMLSupport *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> & Pick(Scaleform::GFx::AS3::XMLSupport *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::XMLSupport>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> & SetPtr(Scaleform::GFx::AS3::XMLSupport *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::XMLSupport> &);
	Scaleform::GFx::AS3::XMLSupport * operator->();
	Scaleform::GFx::AS3::XMLSupport & operator*();
	Scaleform::GFx::AS3::XMLSupport * & GetRawRef();
	Scaleform::GFx::AS3::XMLSupport * * GetRawPtr();
	Scaleform::GFx::AS3::XMLSupport * GetPtr();
	Scaleform::GFx::AS3::XMLSupport * operator class Scaleform::GFx::AS3::XMLSupport *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::XMLSupport * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::ClassClass>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass>(Scaleform::GFx::AS3::ClassTraits::ClassClass *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::ClassClass>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> & operator=(Scaleform::GFx::AS3::ClassTraits::ClassClass *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> & Pick(Scaleform::GFx::AS3::ClassTraits::ClassClass *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::ClassClass>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> & SetPtr(Scaleform::GFx::AS3::ClassTraits::ClassClass *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::ClassClass> &);
	Scaleform::GFx::AS3::ClassTraits::ClassClass * operator->();
	Scaleform::GFx::AS3::ClassTraits::ClassClass & operator*();
	Scaleform::GFx::AS3::ClassTraits::ClassClass * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::ClassClass * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::ClassClass * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::ClassClass * operator class Scaleform::GFx::AS3::ClassTraits::ClassClass *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::ClassClass * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Object>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object>(Scaleform::GFx::AS3::ClassTraits::fl::Object *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Object>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::Object *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::Object *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Object>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::Object *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Object> &);
	Scaleform::GFx::AS3::ClassTraits::fl::Object * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::Object & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::Object * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::Object * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Object * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Object * operator class Scaleform::GFx::AS3::ClassTraits::fl::Object *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::Object * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>(Scaleform::GFx::AS3::ClassTraits::fl::Namespace *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Namespace>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Namespace> &);
	Scaleform::GFx::AS3::ClassTraits::fl::Namespace * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::Namespace & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::Namespace * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::Namespace * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Namespace * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Namespace * operator class Scaleform::GFx::AS3::ClassTraits::fl::Namespace *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::Namespace * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Function>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function>(Scaleform::GFx::AS3::ClassTraits::fl::Function *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Function>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::Function *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::Function *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Function>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::Function *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Function> &);
	Scaleform::GFx::AS3::ClassTraits::fl::Function * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::Function & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::Function * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::Function * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Function * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Function * operator class Scaleform::GFx::AS3::ClassTraits::fl::Function *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::Function * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>(Scaleform::GFx::AS3::ClassTraits::fl::Boolean *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::Boolean *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::Boolean *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Boolean>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::Boolean *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Boolean> &);
	Scaleform::GFx::AS3::ClassTraits::fl::Boolean * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::Boolean & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::Boolean * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::Boolean * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Boolean * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Boolean * operator class Scaleform::GFx::AS3::ClassTraits::fl::Boolean *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::Boolean * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Number>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number>(Scaleform::GFx::AS3::ClassTraits::fl::Number *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Number>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::Number *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::Number *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Number>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::Number *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Number> &);
	Scaleform::GFx::AS3::ClassTraits::fl::Number * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::Number & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::Number * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::Number * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Number * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Number * operator class Scaleform::GFx::AS3::ClassTraits::fl::Number *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::Number * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::int_>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_>(Scaleform::GFx::AS3::ClassTraits::fl::int_ *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::int_>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::int_ *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::int_ *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::int_>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::int_ *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::int_> &);
	Scaleform::GFx::AS3::ClassTraits::fl::int_ * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::int_ & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::int_ * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::int_ * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::int_ * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::int_ * operator class Scaleform::GFx::AS3::ClassTraits::fl::int_ *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::int_ * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::uint>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint>(Scaleform::GFx::AS3::ClassTraits::fl::uint *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::uint>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::uint *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::uint *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::uint>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::uint *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::uint> &);
	Scaleform::GFx::AS3::ClassTraits::fl::uint * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::uint & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::uint * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::uint * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::uint * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::uint * operator class Scaleform::GFx::AS3::ClassTraits::fl::uint *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::uint * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::String>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String>(Scaleform::GFx::AS3::ClassTraits::fl::String *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::String>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::String *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::String *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::String>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::String *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::String> &);
	Scaleform::GFx::AS3::ClassTraits::fl::String * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::String & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::String * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::String * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::String * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::String * operator class Scaleform::GFx::AS3::ClassTraits::fl::String *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::String * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Array>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array>(Scaleform::GFx::AS3::ClassTraits::fl::Array *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Array>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::Array *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::Array *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Array>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::Array *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Array> &);
	Scaleform::GFx::AS3::ClassTraits::fl::Array * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::Array & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::Array * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::Array * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Array * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Array * operator class Scaleform::GFx::AS3::ClassTraits::fl::Array *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::Array * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::QName>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName>(Scaleform::GFx::AS3::ClassTraits::fl::QName *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::QName>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::QName *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::QName *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::QName>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::QName *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::QName> &);
	Scaleform::GFx::AS3::ClassTraits::fl::QName * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::QName & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::QName * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::QName * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::QName * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::QName * operator class Scaleform::GFx::AS3::ClassTraits::fl::QName *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::QName * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Catch>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch>(Scaleform::GFx::AS3::ClassTraits::fl::Catch *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Catch>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::Catch *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::Catch *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Catch>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::Catch *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Catch> &);
	Scaleform::GFx::AS3::ClassTraits::fl::Catch * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::Catch & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::Catch * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::Catch * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Catch * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Catch * operator class Scaleform::GFx::AS3::ClassTraits::fl::Catch *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::Catch * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> & operator=(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> & Pick(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector> &);
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector * operator class Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> & operator=(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> & Pick(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int> &);
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int * operator class Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_int * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> & operator=(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> & Pick(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint> &);
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint * operator class Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_uint * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> & operator=(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> & Pick(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double> &);
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double * operator class Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_double * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> & operator=(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> & Pick(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String> &);
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String * operator class Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl_vec::Vector_String * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>(Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> & operator=(Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> & Pick(Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain> &);
	Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain * operator class Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl_system::ApplicationDomain * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Domain>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain>(Scaleform::GFx::AS3::ClassTraits::fl::Domain *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Domain>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::Domain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::Domain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::Domain>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::Domain *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::Domain> &);
	Scaleform::GFx::AS3::ClassTraits::fl::Domain * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::Domain & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::Domain * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::Domain * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Domain * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::Domain * operator class Scaleform::GFx::AS3::ClassTraits::fl::Domain *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::Domain * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::void_>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_>(Scaleform::GFx::AS3::ClassTraits::fl::void_ *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::void_>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::void_ *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::void_ *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::void_>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::void_ *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::void_> &);
	Scaleform::GFx::AS3::ClassTraits::fl::void_ * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::void_ & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::void_ * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::void_ * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::void_ * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::void_ * operator class Scaleform::GFx::AS3::ClassTraits::fl::void_ *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::void_ * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> &);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>(Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject *);
	~SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> & operator=(Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> & Pick(Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> & SetPtr(Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject> &);
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject * operator->();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject & operator*();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject * & GetRawRef();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject * * GetRawPtr();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject * GetPtr();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject * operator class Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::InstanceTraits::fl::GlobalObject * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>);
	SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>(Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> & operator=(Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> & Pick(Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> & SetPtr(Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP> &);
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP * operator->();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP & operator*();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP * GetPtr();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP * operator class Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>(Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> & operator=(Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> & Pick(Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray> &);
	Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray * operator class Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl_utils::ByteArray * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::VMAbcFile *,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::AS3::VMAbcFile ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<Scaleform::GFx::AS3::VMAbcFile *,329,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::InitializerGuard
{
public:
	InitializerGuard(Scaleform::GFx::AS3::VM &);
	~InitializerGuard();
private:
	Scaleform::GFx::AS3::InitializerGuard & operator=(const Scaleform::GFx::AS3::InitializerGuard &);
	Scaleform::GFx::AS3::VM & Resource; // 0x0
};
void Scaleform::GFx::AS3::Object::AddDynamicFunc(const Scaleform::GFx::AS3::ThunkInfo & func); // 0x1404FBC90
const Scaleform::GFx::AS3::SlotInfo * Scaleform::GFx::AS3::Traits::FindSlotInfo(Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::Multiname & mn); // 0x14047F090
bool Scaleform::GFx::AS3::InstanceTraits::CTraits::VisitInterfaces<Scaleform::GFx::AS3::IsTmpBitF>(Scaleform::GFx::AS3::IsTmpBitF & f); // 0x1404483A0
bool Scaleform::GFx::AS3::InstanceTraits::CTraits::VisitInterfaces<Scaleform::GFx::AS3::SetTmpBitF>(Scaleform::GFx::AS3::SetTmpBitF & f); // 0x1404485F0