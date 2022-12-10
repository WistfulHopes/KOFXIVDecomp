#pragma once

struct Scaleform::GFx::AS3::AMF3Reader
{
private:
	AMF3Reader(const Scaleform::GFx::AS3::AMF3Reader &);
public:
	AMF3Reader(Scaleform::GFx::AS3::Instances::fl::Object &, Scaleform::GFx::AS3::Reader &);
	Scaleform::GFx::AS3::CheckResult Read(char &);
	Scaleform::GFx::AS3::CheckResult Read(unsigned char &);
	Scaleform::GFx::AS3::CheckResult Read(bool &);
	unsigned long Read(void *, unsigned long);
	Scaleform::GFx::AS3::CheckResult ReadUTFBytes(Scaleform::GFx::ASString &, unsigned long);
	unsigned long ReadUInt29();
	unsigned long ReadRef();
	unsigned long DeserializeUInt32();
	double DeserializeDouble();
	Scaleform::GFx::ASString DeserializeStr();
	Scaleform::GFx::AS3::CheckResult DeserializeObjDefault(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult DeserializeArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Array> &);
	void DeserializeByteArray(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> DeserializeDate();
	Scaleform::GFx::AS3::CheckResult DeserializeDictionary(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> DeserializeXML();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_vec::Vector_int> DeserializeVector_int();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_vec::Vector_uint> DeserializeVector_uint();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_vec::Vector_double> DeserializeVector_double();
	Scaleform::GFx::AS3::CheckResult DeserializeVector_object(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult DeserializeValue(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::VM & GetVM();
private:
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetTraitsIExternalizable();
	void StringListAdd(const Scaleform::GFx::ASString &);
	void ObjectListAdd(Scaleform::GFx::AS3::Object *);
	void TraitsListAdd(Scaleform::GFx::AS3::InstanceTraits::Traits *);
	void StringListGet(Scaleform::GFx::ASString &, unsigned long);
	Scaleform::GFx::AS3::CheckResult ObjectListGet(Scaleform::GFx::AS3::Object * &, unsigned long);
	void TraitsListGet(Scaleform::GFx::AS3::InstanceTraits::Traits * &, unsigned long);
	Scaleform::GFx::AS3::AMF3Reader & operator=(const Scaleform::GFx::AS3::AMF3Reader &);
	Scaleform::GFx::AS3::InstanceTraits::Traits * IExternalizableTR; // 0x0
	Scaleform::GFx::AS3::InstanceTraits::fl::Date * DateTR; // 0x8
	Scaleform::GFx::AS3::InstanceTraits::fl::XML * XMLTR; // 0x10
	Scaleform::GFx::AS3::InstanceTraits::fl_utils::Dictionary * DictionaryTR; // 0x18
	Scaleform::GFx::AS3::Instances::fl::Object & SerializerRef; // 0x20
	Scaleform::GFx::AS3::VM & VMRef; // 0x28
	Scaleform::GFx::AS3::Reader & R; // 0x30
	Scaleform::ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> StringList; // 0x38
	Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> ObjectList; // 0x60
	Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> TraitsList; // 0x80
public:
	~AMF3Reader();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl::Date>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Date>);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Date>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Date>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Date>(Scaleform::GFx::AS3::Instances::fl::Date *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl::Date>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Date>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> & operator=(Scaleform::GFx::AS3::Instances::fl::Date *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> & Pick(Scaleform::GFx::AS3::Instances::fl::Date *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Date>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> & SetPtr(Scaleform::GFx::AS3::Instances::fl::Date *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Date> &);
	Scaleform::GFx::AS3::Instances::fl::Date * operator->();
	Scaleform::GFx::AS3::Instances::fl::Date & operator*();
	Scaleform::GFx::AS3::Instances::fl::Date * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl::Date * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl::Date * GetPtr();
	Scaleform::GFx::AS3::Instances::fl::Date * operator class Scaleform::GFx::AS3::Instances::fl::Date *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl::Date * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>);
	SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>(Scaleform::GFx::AS3::Instances::fl_utils::Dictionary *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & operator=(Scaleform::GFx::AS3::Instances::fl_utils::Dictionary *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & Pick(Scaleform::GFx::AS3::Instances::fl_utils::Dictionary *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & SetPtr(Scaleform::GFx::AS3::Instances::fl_utils::Dictionary *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_utils::Dictionary> &);
	Scaleform::GFx::AS3::Instances::fl_utils::Dictionary * operator->();
	Scaleform::GFx::AS3::Instances::fl_utils::Dictionary & operator*();
	Scaleform::GFx::AS3::Instances::fl_utils::Dictionary * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl_utils::Dictionary * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl_utils::Dictionary * GetPtr();
	Scaleform::GFx::AS3::Instances::fl_utils::Dictionary * operator class Scaleform::GFx::AS3::Instances::fl_utils::Dictionary *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl_utils::Dictionary * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
void Scaleform::GFx::AS3::AMF3Reader::ObjectListAdd(Scaleform::GFx::AS3::Object * v); // 0x140494E40
void Scaleform::GFx::AS3::AMF3Reader::TraitsListAdd(Scaleform::GFx::AS3::InstanceTraits::Traits * v); // 0x1404B02C0
class Scaleform::ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDHCC<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::ASString &, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::ASString &, long);
	ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::ASString &);
	const Scaleform::ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >::Add(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & v); // 0x14045B150
void Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString>::Add(const Scaleform::GFx::ASString & v); // 0x14045B210
class Scaleform::HashDH<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,2,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeAltHashF,2,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashDH<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,2,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scale(const Scaleform::HashDH<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,2,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF> > &);
	HashDH<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,2,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scale(void *, long);
	HashDH<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,2,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scale(void *);
	~HashDH<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,2,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scal();
	void operator=(const Scaleform::HashDH<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,2,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF> > &);
};
class Scaleform::HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >::NodeAltHashF,2,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx:(const Scaleform::HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >::NodeHashF> > &);
	HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx:(void *, long);
	HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx:(void *);
	~HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx();
	void operator=(const Scaleform::HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >::NodeHashF> > &);
};
class Scaleform::HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2>,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >::NodeAltHashF,2,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,S(const Scaleform::HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >::NodeHashF> > &);
	HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,S(void *, long);
	HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,S(void *);
	~HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,();
	void operator=(const Scaleform::HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >::NodeHashF> > &);
};
class Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDHCC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &, long);
	ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	const Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDHCC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &, long);
	ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	const Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::AS3::AMF3Writer
{
private:
	AMF3Writer(const Scaleform::GFx::AS3::AMF3Writer &);
public:
	AMF3Writer(Scaleform::GFx::AS3::Instances::fl::Object &, Scaleform::GFx::AS3::Writer &);
	Scaleform::GFx::AS3::CheckResult Write(char);
	Scaleform::GFx::AS3::CheckResult Write(unsigned char);
	Scaleform::GFx::AS3::CheckResult Write(bool);
	Scaleform::GFx::AS3::CheckResult Write(const void *, unsigned long);
	Scaleform::GFx::AS3::CheckResult WriteUInt29(unsigned long);
	Scaleform::GFx::AS3::CheckResult WriteRef(unsigned long);
	Scaleform::GFx::AS3::CheckResult SerializeUInt32(unsigned long);
	Scaleform::GFx::AS3::CheckResult SerializeDouble(double);
	Scaleform::GFx::AS3::CheckResult SerializeStr(const Scaleform::GFx::ASString &);
	Scaleform::GFx::AS3::CheckResult SerializeObj(Scaleform::GFx::AS3::Object &);
	Scaleform::GFx::AS3::CheckResult SerializeObjDefault(Scaleform::GFx::AS3::Object &);
	Scaleform::GFx::AS3::CheckResult SerializeArray(Scaleform::GFx::AS3::Instances::fl::Array &);
	Scaleform::GFx::AS3::CheckResult SerializeDate(Scaleform::GFx::AS3::Instances::fl::Date &);
	Scaleform::GFx::AS3::CheckResult SerializeByteArray(Scaleform::GFx::AS3::Instances::fl_utils::ByteArray &);
	Scaleform::GFx::AS3::CheckResult SerializeDictionary(Scaleform::GFx::AS3::Instances::fl_utils::Dictionary &);
	Scaleform::GFx::AS3::CheckResult SerializeXML(Scaleform::GFx::AS3::Instances::fl::XML &);
	Scaleform::GFx::AS3::CheckResult SerializeVector_int(Scaleform::GFx::AS3::Instances::fl_vec::Vector_int &);
	Scaleform::GFx::AS3::CheckResult SerializeVector_uint(Scaleform::GFx::AS3::Instances::fl_vec::Vector_uint &);
	Scaleform::GFx::AS3::CheckResult SerializeVector_double(Scaleform::GFx::AS3::Instances::fl_vec::Vector_double &);
	Scaleform::GFx::AS3::CheckResult SerializeVector_String(Scaleform::GFx::AS3::Instances::fl_vec::Vector_String &);
	Scaleform::GFx::AS3::CheckResult SerializeVector_object(Scaleform::GFx::AS3::Instances::fl_vec::Vector_object &);
	Scaleform::GFx::AS3::CheckResult SerializeValue(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::VM & GetVM();
private:
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetTraitsIExternalizable();
	long FindInStrTable(const Scaleform::GFx::ASString &);
	long FindInObjTable(Scaleform::GFx::AS3::Object *);
	long FindInTraitsTable(Scaleform::GFx::AS3::InstanceTraits::Traits *);
	void AddToStrTable(const Scaleform::GFx::ASString &);
	void AddToObjTable(Scaleform::GFx::AS3::Object *);
	void AddToTraitsTable(Scaleform::GFx::AS3::InstanceTraits::Traits *);
	Scaleform::GFx::AS3::AMF3Writer & operator=(const Scaleform::GFx::AS3::AMF3Writer &);
	Scaleform::GFx::AS3::Instances::fl::Object & SerializerRef; // 0x0
	Scaleform::GFx::AS3::VM & VMRef; // 0x8
	Scaleform::GFx::AS3::InstanceTraits::Traits * IExternalizableTR; // 0x10
	Scaleform::GFx::AS3::Writer & W; // 0x18
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString> StringTable; // 0x20
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > ObjectTable; // 0x58
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > TraitsTable; // 0x90
public:
	~AMF3Writer();
};
long Scaleform::GFx::AS3::AMF3Writer::FindInObjTable(Scaleform::GFx::AS3::Object * k); // 0x14047DBD0
long Scaleform::GFx::AS3::AMF3Writer::FindInTraitsTable(Scaleform::GFx::AS3::InstanceTraits::Traits * k); // 0x14047DCD0
class Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString>
{
public:
	ArrayHashDH<Scaleform::GFx::ASString>(Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString> &);
	ArrayHashDH<Scaleform::GFx::ASString>(const Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString> &);
	ArrayHashDH<Scaleform::GFx::ASString>(Scaleform::MemoryHeap *, const Scaleform::GFx::ASString &);
	void Add(const Scaleform::GFx::ASString &);
	long Find(const Scaleform::GFx::ASString &);
	void Clear();
	class Collector;
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void ForEachChild_GC_Const(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
private:
	Scaleform::HashDH<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString>,2,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >,Scaleform::HashNode<Scaleform::GFx::ASString,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::ASString> >::NodeHashF> > HashM; // 0x0
	Scaleform::ArrayDH_CC<Scaleform::GFx::ASString,2,Scaleform::ArrayDefaultPolicy> ArrayM; // 0x10
public:
	~ArrayHashDH<Scaleform::GFx::ASString>();
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString> & operator=(Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString> &);
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString> & operator=(const Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::ASString> &);
};
class Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >
{
public:
	ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >(Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > &);
	ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >(const Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > &);
	ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	void Add(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	long Find(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	void Clear();
	class Collector;
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void ForEachChild_GC_Const(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
private:
	Scaleform::HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > >::NodeHashF> > HashM; // 0x0
	Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>,2,Scaleform::ArrayDefaultPolicy> ArrayM; // 0x10
public:
	~ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >();
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > & operator=(Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > &);
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > & operator=(const Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> > &);
};
class Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >
{
public:
	ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >(Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > &);
	ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >(const Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > &);
	ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >(Scaleform::MemoryHeap *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	void Add(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	long Find(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	void Clear();
	class Collector;
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void ForEachChild_GC_Const(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
private:
	Scaleform::HashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >,2,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >,Scaleform::HashNode<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,unsigned __int64,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > >::NodeHashF> > HashM; // 0x0
	Scaleform::ArrayDH_CC<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2,Scaleform::ArrayDefaultPolicy> ArrayM; // 0x10
public:
	~ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >();
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > & operator=(Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > &);
	Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > & operator=(const Scaleform::GFx::AS3::ArrayHashDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> > &);
};