#pragma once

struct Scaleform::GFx::ASStringNode
{
	const char * pData; // 0x0
	Scaleform::GFx::ASStringManager * pManager; // 0x8
	Scaleform::GFx::ASStringNode * pLower; // 0x10
	Scaleform::GFx::ASStringNode * pNextAlloc; // 0x10
	unsigned long RefCount; // 0x18
	unsigned long HashFlags; // 0x1C
	unsigned long Size; // 0x20
	static const unsigned long UNDEFINED_LENGTH; // 0xFFFFFFFFFFFFFFFF
	unsigned long LastLength; // 0x24
	unsigned long LastIndexAccessed; // 0x28
	const char * LastBufferPosAccessed; // 0x30
	Scaleform::GFx::ASStringManager * GetManager();
	unsigned long GetHashCode();
	void AddRef();
	void Release();
	void ReleaseNode();
	void ResolveLowercase_Impl();
	void ResolveLowercase();
	bool IsNull();
	void ClearCachedAccess();
};
void Scaleform::GFx::ASStringNode::Release(); // 0x140329970
struct Scaleform::GFx::ASStringNodeHolder
{
	ASStringNodeHolder(Scaleform::GFx::ASStringNode *);
	Scaleform::GFx::ASStringNode * pNode; // 0x0
	void __dflt_ctor_closure();
};
class Scaleform::GFx::ASConstString :
	public Scaleform::GFx::ASStringNodeHolder
{
public:
	ASConstString(const Scaleform::GFx::ASConstString &);
	ASConstString(const Scaleform::GFx::ASString &);
	ASConstString(Scaleform::GFx::ASStringNode *);
	enum FlagConstants
	{
		Flag_HashMask = 16777215,
		Flag_FlagMask = -16777216,
		Flag_Builtin = -2147483648,
		Flag_ConstData = 1073741824,
		Flag_StandardMember = 536870912,
		Flag_CaseInsensitive = 268435456,
		Flag_LengthIsSize = 134217728,
		Flag_PathCheck = 67108864,
		Flag_IsNotPath = 33554432,
	};
	const char * ToCStr();
	const char * GetBuffer();
	unsigned long GetSize();
	bool IsEmpty();
	bool IsNull();
	unsigned long GetHashFlags();
	unsigned long GetHash();
	Scaleform::GFx::ASStringNode * GetNode();
	Scaleform::GFx::ASStringManager * GetManager();
	static unsigned long HashFunction(const char *, unsigned long long);
	unsigned long GetLength();
	unsigned long GetCharAt(unsigned long);
	unsigned long GetFirstCharAt(unsigned long long, const char * *);
	unsigned long GetNextChar(const char * *);
	Scaleform::GFx::ASStringNode * AppendCharNode(unsigned long);
	Scaleform::GFx::ASStringNode * AppendStringNode(const Scaleform::GFx::ASConstString &);
	Scaleform::GFx::ASStringNode * AppendStringNode(const char *);
	Scaleform::GFx::ASStringNode * SubstringNode(long, long);
	Scaleform::GFx::ASStringNode * TruncateWhitespaceNode();
	Scaleform::GFx::ASStringNode * ToUpperNode();
	Scaleform::GFx::ASStringNode * ToLowerNode();
	char operator[](unsigned long);
	Scaleform::GFx::ASConstString operator+(const Scaleform::GFx::ASConstString &);
	Scaleform::GFx::ASConstString operator+(const char *);
	bool operator==(const char *);
	bool operator==(const Scaleform::GFx::ASConstString &);
	bool operator!=(const char *);
	bool operator!=(const Scaleform::GFx::ASConstString &);
	bool operator<(const Scaleform::GFx::ASConstString &);
	bool operator<(const char *);
	bool operator>(const Scaleform::GFx::ASConstString &);
	bool operator>(const char *);
	long LocaleCompare_CaseCheck(const Scaleform::GFx::ASConstString &, bool);
	long LocaleCompare_CaseCheck(const char *, unsigned long long, bool);
	long LocaleCompare(const char *, unsigned long long);
	long LocaleCompare_CaseInsensitive(const char *, unsigned long long);
	bool Compare_CaseCheck(const Scaleform::GFx::ASConstString &, bool);
	bool CompareBuiltIn_CaseCheck(const Scaleform::GFx::ASConstString &, bool);
	bool CompareBuiltIn_CaseInsensitive(const Scaleform::GFx::ASConstString &);
	bool Compare_CaseInsensitive_Resolved(const Scaleform::GFx::ASConstString &);
	bool CompareBuiltIn_CaseInsensitive_Unchecked(const Scaleform::GFx::ASConstString &);
	void ResolveLowercase();
	bool IsNotPath();
	void SetPathFlags(unsigned long);
	bool IsBuiltin();
	bool IsStandardMember();
	bool IsCaseInsensitive();
};
class Scaleform::GFx::ASString :
	Scaleform::GFx::ASConstString
{
public:
	ASString(const Scaleform::GFx::ASString &);
	ASString(const Scaleform::GFx::ASConstString &);
	ASString(Scaleform::GFx::ASStringNode *);
	~ASString();
	void Clear();
	void SetNull();
	Scaleform::GFx::ASString AppendChar(unsigned long);
	void Append(const Scaleform::GFx::ASString &);
	void Append(const char *);
	void Append(const char *, unsigned long long);
	Scaleform::GFx::ASString Substring(long, long);
	Scaleform::GFx::ASString TruncateWhitespace();
	Scaleform::GFx::ASString ToUpper();
	Scaleform::GFx::ASString ToLower();
	void operator=(const Scaleform::GFx::ASString &);
	void operator=(const char *);
	void operator+=(const Scaleform::GFx::ASString &);
	void operator+=(const char *);
	Scaleform::GFx::ASString operator+(const Scaleform::GFx::ASString &);
	Scaleform::GFx::ASString operator+(const char *);
	bool operator==(const Scaleform::GFx::ASString::RawCompareKey &);
	bool operator==(const Scaleform::GFx::ASString::NoCaseKey &);
	bool operator==(const char *);
	bool operator==(const Scaleform::GFx::ASString &);
	bool operator!=(const Scaleform::GFx::ASString::RawCompareKey &);
	bool operator!=(const Scaleform::GFx::ASString::NoCaseKey &);
	bool operator!=(const char *);
	bool operator!=(const Scaleform::GFx::ASString &);
	bool operator<(const Scaleform::GFx::ASString &);
	bool operator<(const char *);
	bool operator>(const Scaleform::GFx::ASString &);
	bool operator>(const char *);
	static long LocaleCompare_CaseCheck(const Scaleform::GFx::ASString &, const Scaleform::GFx::ASString &, bool);
	long LocaleCompare_CaseCheck(const Scaleform::GFx::ASString &, bool);
	static long LocaleCompare(const Scaleform::GFx::ASString &, const Scaleform::GFx::ASString &);
	long LocaleCompare(const Scaleform::GFx::ASString &);
	static long LocaleCompare_CaseInsensitive(const Scaleform::GFx::ASString &, const Scaleform::GFx::ASString &);
	long LocaleCompare_CaseInsensitive(const Scaleform::GFx::ASString &);
	void AssignNode(Scaleform::GFx::ASStringNode *);
	bool Compare_CaseCheck(const Scaleform::GFx::ASString &, bool);
	bool CompareBuiltIn_CaseCheck(const Scaleform::GFx::ASString &, bool);
	bool CompareBuiltIn_CaseInsensitive(const Scaleform::GFx::ASString &);
	bool Compare_CaseInsensitive_Resolved(const Scaleform::GFx::ASString &);
	bool CompareBuiltIn_CaseInsensitive_Unchecked(const Scaleform::GFx::ASString &);
	struct NoCaseKey;
	struct RawCompareKey;
};
void Scaleform::GFx::ASString::operator=(const Scaleform::GFx::ASString & src); // 0x140456E40
struct Scaleform::GFx::ASString::NoCaseKey
{
	const Scaleform::GFx::ASString * pStr; // 0x0
	NoCaseKey(const Scaleform::GFx::ASString &);
};
struct Scaleform::GFx::ASString::RawCompareKey
{
	const char * pStr; // 0x0
	unsigned long long Hash; // 0x8
	RawCompareKey(const char *, unsigned long long);
};
struct Scaleform::GFx::ASStringKey
{
	const char * pStr; // 0x0
	unsigned long long HashValue; // 0x8
	unsigned long long Length; // 0x10
	ASStringKey(const char *, unsigned long long, unsigned long long);
};
class Scaleform::HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324> :
	Scaleform::HashSetDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >
{
	class SelfType;
	class BaseType;
	typedef Scaleform::GFx::ASStringNode ValueType;
public:
	HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324>(const Scaleform::HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324> &);
	HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324>(void *, long);
	HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324>(void *);
	~HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324>();
	void operator=(const Scaleform::HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324> &);
};
class Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>
{
	typedef Scaleform::GFx::ASStringNode ValueType;
public:
	unsigned long long operator()(const Scaleform::GFx::ASStringKey &);
	unsigned long long operator()(Scaleform::GFx::ASStringNode * &);
	static unsigned long long GetCachedHash(Scaleform::GFx::ASStringNode * &);
	static void SetCachedHash(Scaleform::GFx::ASStringNode * &, unsigned long long);
	static Scaleform::GFx::ASStringNode * & GetValue(Scaleform::GFx::ASStringNode * &);
	static Scaleform::GFx::ASStringNode * & GetValue(Scaleform::GFx::ASStringNode * &);
};
class Scaleform::GFx::ASStringManager :
	Scaleform::RefCountBase<Scaleform::GFx::ASStringManager,324>
{
private:
	Scaleform::MemoryHeap * pHeap; // 0x10
	Scaleform::HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324> StringSet; // 0x18
	struct StringNodePage;
	struct TextPage;
	Scaleform::GFx::ASStringNode * pFreeStringNodes; // 0x28
	Scaleform::GFx::ASStringManager::StringNodePage * pStringNodePages; // 0x30
	Scaleform::GFx::ASStringManager::TextPage::Entry * pFreeTextBuffers; // 0x38
	Scaleform::GFx::ASStringManager::TextPage * pTextBufferPages; // 0x40
	Scaleform::GFx::ASStringNode EmptyStringNode; // 0x48
	Scaleform::GFx::ASStringNode NullStringNode; // 0x80
	Scaleform::Ptr<Scaleform::GFx::LogState> pLog; // 0xB8
	Scaleform::StringLH FileName; // 0xC0
	void AllocateStringNodes();
	void AllocateTextBuffers();
	Scaleform::GFx::ASStringNode * AllocStringNode();
	void FreeStringNode(Scaleform::GFx::ASStringNode *);
	char * AllocTextBuffer(const char *, unsigned long long);
	char * AllocTextBuffer(unsigned long long);
	void FreeTextBuffer(char *, unsigned long long);
public:
	ASStringManager(const Scaleform::GFx::ASStringManager &);
	ASStringManager(Scaleform::MemoryHeap *);
	virtual ~ASStringManager();
	Scaleform::MemoryHeap * GetHeap();
	void SetLeakReportLog(Scaleform::GFx::LogState *, const char *);
	Scaleform::GFx::ASString CreateEmptyString();
	Scaleform::GFx::ASString CreateString(const wchar_t *, long long);
	Scaleform::GFx::ASString CreateString(const Scaleform::String &);
	Scaleform::GFx::ASString CreateString(const char *, unsigned long long);
	Scaleform::GFx::ASString CreateString(const char *);
	Scaleform::GFx::ASString CreateConstString(const char *);
	Scaleform::GFx::ASString CreateConstString(const char *, unsigned long long, unsigned long);
	Scaleform::GFx::ASStringNode * CreateConstStringNode(const char *, unsigned long long, unsigned long);
	Scaleform::GFx::ASStringNode * CreateStringNode(const wchar_t *, long long);
	Scaleform::GFx::ASStringNode * CreateStringNode(const char *, unsigned long long, const char *, unsigned long long, const char *, unsigned long long);
	Scaleform::GFx::ASStringNode * CreateStringNode(const char *, unsigned long long, const char *, unsigned long long);
	Scaleform::GFx::ASStringNode * CreateStringNode(const char *, unsigned long long);
	Scaleform::GFx::ASStringNode * CreateStringNode(const char *);
	Scaleform::GFx::ASStringNode * GetEmptyStringNode();
	Scaleform::GFx::ASStringNode * GetNullStringNode();
	void InitBuiltinArray(Scaleform::GFx::ASStringNodeHolder *, const char * *, unsigned long);
	void ReleaseBuiltinArray(Scaleform::GFx::ASStringNodeHolder *, unsigned long);
	Scaleform::GFx::ASStringManager & operator=(const Scaleform::GFx::ASStringManager &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ASStringManager,324> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,324>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 324,
	};
public:
	RefCountBase<Scaleform::GFx::ASStringManager,324>(Scaleform::RefCountBase<Scaleform::GFx::ASStringManager,324> &);
	RefCountBase<Scaleform::GFx::ASStringManager,324>(const Scaleform::RefCountBase<Scaleform::GFx::ASStringManager,324> &);
	RefCountBase<Scaleform::GFx::ASStringManager,324>();
	virtual ~RefCountBase<Scaleform::GFx::ASStringManager,324>();
	Scaleform::RefCountBase<Scaleform::GFx::ASStringManager,324> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ASStringManager,324> &);
	Scaleform::RefCountBase<Scaleform::GFx::ASStringManager,324> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ASStringManager,324> &);
};
struct Scaleform::GFx::ASStringManager::StringNodePage
{
	enum <unnamed-enum-StringNodeCount>
	{
		StringNodeCount = 127,
	};
	Scaleform::GFx::ASStringNode Nodes[127]; // 0x0
	Scaleform::GFx::ASStringManager::StringNodePage * pNext; // 0x1BC8
};
struct Scaleform::GFx::ASStringManager::TextPage
{
	enum <unnamed-enum-BuffSize>
	{
		BuffSize = 16,
		BuffCount = 126,
	};
	struct Entry;
	Scaleform::GFx::ASStringManager::TextPage::Entry Entries[126]; // 0x0
	Scaleform::GFx::ASStringManager::TextPage * pNext; // 0x7E0
	void * pMem; // 0x7E8
};
struct Scaleform::GFx::ASStringManager::TextPage::Entry
{
	Scaleform::GFx::ASStringManager::TextPage::Entry * pNextAlloc; // 0x0
	char Buff[16]; // 0x0
};
class Scaleform::Ptr<Scaleform::GFx::LogState>
{
protected:
	Scaleform::GFx::LogState * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::LogState>(const Scaleform::Ptr<Scaleform::GFx::LogState> &);
	Ptr<Scaleform::GFx::LogState>(Scaleform::GFx::LogState *);
	Ptr<Scaleform::GFx::LogState>(Scaleform::Ptr<Scaleform::GFx::LogState> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::LogState>(Scaleform::Pickable<Scaleform::GFx::LogState>);
	Ptr<Scaleform::GFx::LogState>(Scaleform::GFx::LogState &);
	Ptr<Scaleform::GFx::LogState>();
	~Ptr<Scaleform::GFx::LogState>();
	bool operator==(Scaleform::GFx::LogState *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::LogState> &);
	bool operator!=(Scaleform::GFx::LogState *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::LogState> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::LogState> &);
	Scaleform::Ptr<Scaleform::GFx::LogState> & operator=(Scaleform::Pickable<Scaleform::GFx::LogState>);
	const Scaleform::Ptr<Scaleform::GFx::LogState> & operator=(Scaleform::GFx::LogState &);
	const Scaleform::Ptr<Scaleform::GFx::LogState> & operator=(Scaleform::GFx::LogState *);
	const Scaleform::Ptr<Scaleform::GFx::LogState> & operator=(const Scaleform::Ptr<Scaleform::GFx::LogState> &);
	Scaleform::Ptr<Scaleform::GFx::LogState> & SetPtr(Scaleform::Pickable<Scaleform::GFx::LogState>);
	Scaleform::Ptr<Scaleform::GFx::LogState> & SetPtr(Scaleform::GFx::LogState &);
	Scaleform::Ptr<Scaleform::GFx::LogState> & SetPtr(Scaleform::GFx::LogState *);
	Scaleform::Ptr<Scaleform::GFx::LogState> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::LogState> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::LogState * & GetRawRef();
	Scaleform::GFx::LogState * GetPtr();
	Scaleform::GFx::LogState & operator*();
	Scaleform::GFx::LogState * operator->();
	Scaleform::GFx::LogState * operator class Scaleform::GFx::LogState *();
	Scaleform::Ptr<Scaleform::GFx::LogState> & Pick(Scaleform::GFx::LogState *);
	Scaleform::Ptr<Scaleform::GFx::LogState> & Pick(Scaleform::Pickable<Scaleform::GFx::LogState>);
	Scaleform::Ptr<Scaleform::GFx::LogState> & Pick(Scaleform::Ptr<Scaleform::GFx::LogState> &);
};
void Scaleform::GFx::ASStringManager::FreeStringNode(Scaleform::GFx::ASStringNode * pnode); // 0x140329490
class Scaleform::Ptr<Scaleform::GFx::ASStringNode>
{
protected:
	Scaleform::GFx::ASStringNode * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ASStringNode>(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	Ptr<Scaleform::GFx::ASStringNode>(Scaleform::GFx::ASStringNode *);
	Ptr<Scaleform::GFx::ASStringNode>(Scaleform::Ptr<Scaleform::GFx::ASStringNode> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ASStringNode>(Scaleform::Pickable<Scaleform::GFx::ASStringNode>);
	Ptr<Scaleform::GFx::ASStringNode>(Scaleform::GFx::ASStringNode &);
	Ptr<Scaleform::GFx::ASStringNode>();
	~Ptr<Scaleform::GFx::ASStringNode>();
	bool operator==(Scaleform::GFx::ASStringNode *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	bool operator!=(Scaleform::GFx::ASStringNode *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> & operator=(Scaleform::Pickable<Scaleform::GFx::ASStringNode>);
	const Scaleform::Ptr<Scaleform::GFx::ASStringNode> & operator=(Scaleform::GFx::ASStringNode &);
	const Scaleform::Ptr<Scaleform::GFx::ASStringNode> & operator=(Scaleform::GFx::ASStringNode *);
	const Scaleform::Ptr<Scaleform::GFx::ASStringNode> & operator=(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ASStringNode>);
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> & SetPtr(Scaleform::GFx::ASStringNode &);
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> & SetPtr(Scaleform::GFx::ASStringNode *);
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ASStringNode * & GetRawRef();
	Scaleform::GFx::ASStringNode * GetPtr();
	Scaleform::GFx::ASStringNode & operator*();
	Scaleform::GFx::ASStringNode * operator->();
	Scaleform::GFx::ASStringNode * operator struct Scaleform::GFx::ASStringNode *();
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> & Pick(Scaleform::GFx::ASStringNode *);
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> & Pick(Scaleform::Pickable<Scaleform::GFx::ASStringNode>);
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> & Pick(Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
};
struct Scaleform::GFx::ASStringHashFunctor
{
	unsigned long long operator()(const Scaleform::GFx::ASString::RawCompareKey &);
	unsigned long long operator()(const Scaleform::GFx::ASString::NoCaseKey &);
	unsigned long long operator()(const Scaleform::GFx::ASString &);
};
class Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> :
	Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >
{
	class SelfType;
	class BaseType;
public:
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324>(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> &);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324>(long);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324>();
	~HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324>();
	void operator=(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> &);
};
class Scaleform::GFx::ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> > :
	Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324>
{
	class SelfType;
public:
	ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> >(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> > &);
	ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> >(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > &);
	ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> >(long);
	ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> >();
	~ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> >();
	Scaleform::GFx::ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> > & operator=(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324> > &);
	void operator=(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > &);
	Scaleform::GFx::MovieImpl::StickyVarNode * * GetCaseInsensitive(const Scaleform::GFx::ASString &);
	Scaleform::GFx::MovieImpl::StickyVarNode * * GetCaseInsensitive(const Scaleform::GFx::ASString &);
	bool GetCaseInsensitive(const Scaleform::GFx::ASString &, Scaleform::GFx::MovieImpl::StickyVarNode * *);
	Scaleform::GFx::MovieImpl::StickyVarNode * * GetCaseCheck(const Scaleform::GFx::ASString &, bool);
	Scaleform::GFx::MovieImpl::StickyVarNode * * GetCaseCheck(const Scaleform::GFx::ASString &, bool);
	bool GetCaseCheck(const Scaleform::GFx::ASString &, Scaleform::GFx::MovieImpl::StickyVarNode * *, bool);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::GFx::ASString &);
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::MovieImpl::StickyVarNode *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::Iterator FindCaseCheck(const Scaleform::GFx::ASString &, bool);
	void SetCaseCheck(const Scaleform::GFx::ASString &, Scaleform::GFx::MovieImpl::StickyVarNode * &, bool);
	void RemoveCaseInsensitive(const Scaleform::GFx::ASString &);
	void RemoveCaseCheck(const Scaleform::GFx::ASString &, bool);
};
class Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324> :
	Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >
{
	class SelfType;
	class BaseType;
public:
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324>(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324> &);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324>(long);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324>();
	~HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324>();
	void operator=(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324> &);
};
class Scaleform::GFx::ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324> > :
	Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324>
{
	class SelfType;
public:
	ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::Eve(const Scaleform::GFx::ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324> > &);
	ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::Eve(const Scaleform::GFx::ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > &);
	ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::Eve(long);
	ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::Eve();
	~ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::Ev();
	Scaleform::GFx::ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324> > & operator=(const Scaleform::GFx::ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324> > &);
	void operator=(const Scaleform::GFx::ASStringHashBase<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > &);
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> * * GetCaseInsensitive(const Scaleform::GFx::ASString &);
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> * * GetCaseInsensitive(const Scaleform::GFx::ASString &);
	bool GetCaseInsensitive(const Scaleform::GFx::ASString &, Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> * *);
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> * * GetCaseCheck(const Scaleform::GFx::ASString &, bool);
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> * * GetCaseCheck(const Scaleform::GFx::ASString &, bool);
	bool GetCaseCheck(const Scaleform::GFx::ASString &, Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> * *, bool);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::GFx::ASString &);
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> *,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::Iterator FindCaseCheck(const Scaleform::GFx::ASString &, bool);
	void SetCaseCheck(const Scaleform::GFx::ASString &, Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener,2,Scaleform::ArrayDefaultPolicy> * &, bool);
	void RemoveCaseInsensitive(const Scaleform::GFx::ASString &);
	void RemoveCaseCheck(const Scaleform::GFx::ASString &, bool);
};
class Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324> > :
	Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324>
{
	class SelfType;
public:
	ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHash(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324> > &);
	ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHash(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > &);
	ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHash(long);
	ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHash();
	~ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHas();
	Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324> > & operator=(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324> > &);
	void operator=(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject> * GetCaseInsensitive(const Scaleform::GFx::ASString &);
	const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject> * GetCaseInsensitive(const Scaleform::GFx::ASString &);
	bool GetCaseInsensitive(const Scaleform::GFx::ASString &, Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject> *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject> * GetCaseCheck(const Scaleform::GFx::ASString &, bool);
	const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject> * GetCaseCheck(const Scaleform::GFx::ASString &, bool);
	bool GetCaseCheck(const Scaleform::GFx::ASString &, Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject> *, bool);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::GFx::ASString &);
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::Iterator FindCaseCheck(const Scaleform::GFx::ASString &, bool);
	void SetCaseCheck(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject> &, bool);
	void RemoveCaseInsensitive(const Scaleform::GFx::ASString &);
	void RemoveCaseCheck(const Scaleform::GFx::ASString &, bool);
};
class Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324> :
	Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >
{
	class SelfType;
	class BaseType;
public:
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324>(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324> &);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324>(long);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324>();
	~HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324>();
	void operator=(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_net::SharedObject>,Scaleform::GFx::ASStringHashFunctor,324> &);
};
class Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> > :
	Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324>
{
	class SelfType;
public:
	ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> >(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> > &);
	ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> >(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > &);
	ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> >(long);
	ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> >();
	~ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> >();
	Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> > & operator=(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> > &);
	void operator=(const Scaleform::GFx::ASStringHashBase<Scaleform::GFx::AS3::Value,Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> > > &);
	Scaleform::GFx::AS3::Value * GetCaseInsensitive(const Scaleform::GFx::ASString &);
	const Scaleform::GFx::AS3::Value * GetCaseInsensitive(const Scaleform::GFx::ASString &);
	bool GetCaseInsensitive(const Scaleform::GFx::ASString &, Scaleform::GFx::AS3::Value *);
	Scaleform::GFx::AS3::Value * GetCaseCheck(const Scaleform::GFx::ASString &, bool);
	const Scaleform::GFx::AS3::Value * GetCaseCheck(const Scaleform::GFx::ASString &, bool);
	bool GetCaseCheck(const Scaleform::GFx::ASString &, Scaleform::GFx::AS3::Value *, bool);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::GFx::ASString &);
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >::Iterator FindCaseCheck(const Scaleform::GFx::ASString &, bool);
	void SetCaseCheck(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Value &, bool);
	void RemoveCaseInsensitive(const Scaleform::GFx::ASString &);
	void RemoveCaseCheck(const Scaleform::GFx::ASString &, bool);
};
class Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> :
	Scaleform::HashLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor>::NodeHashF> >
{
	class SelfType;
	class BaseType;
public:
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324>(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> &);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324>(long);
	HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324>();
	~HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324>();
	void operator=(const Scaleform::HashUncachedLH<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value,Scaleform::GFx::ASStringHashFunctor,324> &);
};