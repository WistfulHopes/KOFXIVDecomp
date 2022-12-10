
class Scaleform::GFx::AS3::XMLSupportImpl :
	Scaleform::GFx::AS3::XMLSupport
{
	class Parent;
protected:
	XMLSupportImpl(Scaleform::GFx::AS3::VM &);
public:
	virtual ~XMLSupportImpl();
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	virtual Scaleform::GFx::AS3::CheckResult EqualsXML(bool &, bool &, Scaleform::GFx::AS3::Instances::fl::XML &, const Scaleform::GFx::AS3::Value &);
	virtual Scaleform::GFx::AS3::CheckResult EqualsXML(bool &, Scaleform::GFx::AS3::Instances::fl::XML &, Scaleform::GFx::AS3::Instances::fl::XML &);
	virtual Scaleform::GFx::AS3::CheckResult EqualsXMLList(bool &, Scaleform::GFx::AS3::Instances::fl::XMLList &, const Scaleform::GFx::AS3::Value &);
	virtual Scaleform::GFx::AS3::CheckResult EqualsQName(bool &, Scaleform::GFx::AS3::Instances::fl::QName &, Scaleform::GFx::AS3::Instances::fl::QName &);
	virtual bool Add(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Object &, Scaleform::GFx::AS3::Object &);
	virtual Scaleform::GFx::AS3::CheckResult ToXMLString(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Value &);
	virtual void DescribeType(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &, const Scaleform::GFx::AS3::Value &);
	virtual const Scaleform::GFx::AS3::ClassTraits::Traits * GetClassTraitsXML();
	virtual Scaleform::GFx::AS3::InstanceTraits::Traits * GetITraitsXML();
	virtual const Scaleform::GFx::AS3::ClassTraits::Traits * GetClassTraitsXMLList();
	virtual Scaleform::GFx::AS3::InstanceTraits::Traits * GetITraitsXMLList();
private:
	Scaleform::GFx::AS3::XMLSupportImpl & operator=(const Scaleform::GFx::AS3::XMLSupportImpl &);
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::XML> MakeXML();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::XMLList> MakeXMLList();
	static Scaleform::GFx::ASString GetQualifiedName(const Scaleform::GFx::AS3::Instances::fl::Namespace &, const Scaleform::GFx::ASString &, Scaleform::GFx::AS3::QNameFormat);
	void DescribeMetaData(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Instances::fl::XMLElement &, const Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::SlotInfo &);
	void DescribeMetaData(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Instances::fl::XMLElement &, const Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::TraitInfo &);
	void DescribeTraits(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Instances::fl::XMLElement &, const Scaleform::GFx::AS3::Traits &);
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::VM & VMRef; // 0x30
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> TraitsXML; // 0x38
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> TraitsXMLList; // 0x40
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::XML>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML>(Scaleform::GFx::AS3::ClassTraits::fl::XML *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::XML>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::XML *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::XML *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::XML>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::XML *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XML> &);
	Scaleform::GFx::AS3::ClassTraits::fl::XML * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::XML & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::XML * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::XML * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::XML * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::XML * operator class Scaleform::GFx::AS3::ClassTraits::fl::XML *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::XML * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>(Scaleform::GFx::AS3::ClassTraits::fl::XMLList *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> & operator=(Scaleform::GFx::AS3::ClassTraits::fl::XMLList *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> & Pick(Scaleform::GFx::AS3::ClassTraits::fl::XMLList *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::fl::XMLList>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> & SetPtr(Scaleform::GFx::AS3::ClassTraits::fl::XMLList *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::fl::XMLList> &);
	Scaleform::GFx::AS3::ClassTraits::fl::XMLList * operator->();
	Scaleform::GFx::AS3::ClassTraits::fl::XMLList & operator*();
	Scaleform::GFx::AS3::ClassTraits::fl::XMLList * & GetRawRef();
	Scaleform::GFx::AS3::ClassTraits::fl::XMLList * * GetRawPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::XMLList * GetPtr();
	Scaleform::GFx::AS3::ClassTraits::fl::XMLList * operator class Scaleform::GFx::AS3::ClassTraits::fl::XMLList *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::ClassTraits::fl::XMLList * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
Scaleform::GFx::AS3::XMLSupportImpl::XMLSupportImpl(Scaleform::GFx::AS3::VM & vm); // 0x140453280
Scaleform::GFx::AS3::XMLSupportImpl::~XMLSupportImpl(); // 0x140456730
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::XMLSupportImpl::EqualsXML(bool & result, Scaleform::GFx::AS3::Instances::fl::XML & l, Scaleform::GFx::AS3::Instances::fl::XML & r); // 0x140475C40
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::XMLSupportImpl::EqualsXML(bool & stop, bool & result, Scaleform::GFx::AS3::Instances::fl::XML & l, const Scaleform::GFx::AS3::Value & r); // 0x140475B10
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::XMLSupportImpl::EqualsXMLList(bool & result, Scaleform::GFx::AS3::Instances::fl::XMLList & l, const Scaleform::GFx::AS3::Value & v); // 0x140475DC0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::XMLSupportImpl::EqualsQName(bool & result, Scaleform::GFx::AS3::Instances::fl::QName & l, Scaleform::GFx::AS3::Instances::fl::QName & r); // 0x140475AA0
bool Scaleform::GFx::AS3::XMLSupportImpl::Add(Scaleform::GFx::AS3::Value & result, Scaleform::GFx::AS3::Object & l, Scaleform::GFx::AS3::Object & r); // 0x14045BE50
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::XMLSupportImpl::ToXMLString(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::Value & v); // 0x1404AFD60
void Scaleform::GFx::AS3::XMLSupportImpl::DescribeMetaData(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::Instances::fl::XMLElement & xml, const Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::Abc::TraitInfo & ti); // 0x14046BEA0
void Scaleform::GFx::AS3::XMLSupportImpl::DescribeMetaData(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::Instances::fl::XMLElement & xml, const Scaleform::GFx::AS3::VMAbcFile & file, const Scaleform::GFx::AS3::SlotInfo & si); // 0x14046BDF0
void Scaleform::GFx::AS3::XMLSupportImpl::DescribeTraits(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::Instances::fl::XMLElement & xml, const Scaleform::GFx::AS3::Traits & tr); // 0x14046C3F0
class Scaleform::GFx::AS3::MultinameHash<bool,2>
{
	struct Key;
	class TContainer;
private:
	Scaleform::HashDH<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor,2,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>,Scaleform::HashNode<Scaleform::GFx::AS3::MultinameHash<bool,2>::Key,bool,Scaleform::GFx::AS3::MultinameHash<bool,2>::Key::HashFunctor>::NodeHashF> > Entries; // 0x0
	typedef bool ValueType;
	class SelfType;
public:
	MultinameHash<bool,2>(const Scaleform::GFx::AS3::MultinameHash<bool,2> &);
	MultinameHash<bool,2>(void *);
	~MultinameHash<bool,2>();
	bool * Get(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	bool * Get(const Scaleform::GFx::AS3::Multiname &);
	bool * Get(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void Add(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, const bool &);
	void Set(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, const bool &);
	void Remove(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void RemoveValue(const bool &);
	void Clear();
	void GetMultinames(Scaleform::Array<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >,2,Scaleform::ArrayDefaultPolicy> &);
	bool IsEmpty();
	Scaleform::GFx::AS3::MultinameHash<bool,2> & operator=(const Scaleform::GFx::AS3::MultinameHash<bool,2> &);
};
void Scaleform::GFx::AS3::XMLSupportImpl::DescribeType(Scaleform::GFx::AS3::VM & vm, Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> & result, const Scaleform::GFx::AS3::Value & value); // 0x14046E900
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::XMLSupportImpl::GetClassTraitsXML(); // 0x1406B4B40
Scaleform::GFx::AS3::InstanceTraits::Traits * Scaleform::GFx::AS3::XMLSupportImpl::GetITraitsXML(); // 0x1404866C0
const Scaleform::GFx::AS3::ClassTraits::Traits * Scaleform::GFx::AS3::XMLSupportImpl::GetClassTraitsXMLList(); // 0x1403D6F90
Scaleform::GFx::AS3::InstanceTraits::Traits * Scaleform::GFx::AS3::XMLSupportImpl::GetITraitsXMLList(); // 0x1404866D0
void Scaleform::GFx::AS3::VM::EnableXMLSupport(); // 0x140475A10