#pragma once

class extension::exsound_detail::SoundNameRegistry
{
private:
	SoundNameRegistry();
	SoundNameRegistry(const extension::exsound_detail::SoundNameRegistry &);
	extension::exsound_detail::SoundNameRegistry & operator=(const extension::exsound_detail::SoundNameRegistry &);
public:
	~SoundNameRegistry();
	static extension::exsound_detail::SoundNameRegistry & Instance();
	class NameBuffer;
	class BufferSharedPtr_t;
	extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> makeShared(const char *);
	extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> makeSharedIfExist(const char *);
	class BucketNode;
	class WeakEntry;
private:
	static unsigned long long Hash(const char *);
	static extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> CreateNameBuffer(const char *, unsigned long long);
	extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> makeSharedIfExistImpl(const char *, unsigned long long);
	extension::exsound_detail::SoundNameRegistry::BucketNode * bucketEnd(unsigned long long);
	static const unsigned long long Nr_Weak_Bucket; // 0xFFFFFFFFFFFFFFFF
	extension::ExSimpleMutex m_mutex; // 0x0
	extension::exsound_detail::SoundNameRegistry::BucketNode m_weakTable[512]; // 0x28
};
class extension::RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer> :
	extension::RefCountableWeakSupportBase
{
public:
	RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer>(extension::RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer>(const extension::RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer>();
	virtual ~RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer>();
	extension::RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer> & operator=(extension::RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	extension::RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer> & operator=(const extension::RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
};
class extension::exsound_detail::SoundNameRegistry::NameBuffer :
	extension::RefCountableWeakSupport<extension::exsound_detail::SoundNameRegistry::NameBuffer>
{
private:
	NameBuffer();
	NameBuffer(const extension::exsound_detail::SoundNameRegistry::NameBuffer &);
	extension::exsound_detail::SoundNameRegistry::NameBuffer & operator=(const extension::exsound_detail::SoundNameRegistry::NameBuffer &);
	unsigned long long m_hash; // 0x10
	char m_str[1]; // 0x18
public:
	const char * str();
	unsigned long long hashCode();
	virtual ~NameBuffer();
};
class extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>
{
private:
	extension::exsound_detail::SoundNameRegistry::NameBuffer * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>(const extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>(extension::exsound_detail::SoundNameRegistry::NameBuffer *, bool);
	RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>(extension::exsound_detail::SoundNameRegistry::NameBuffer *);
	RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>();
	~RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>();
	void swap(extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> & operator=(const extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	void reset(extension::exsound_detail::SoundNameRegistry::NameBuffer *);
	void resetWithAddRef(extension::exsound_detail::SoundNameRegistry::NameBuffer *);
	extension::exsound_detail::SoundNameRegistry::NameBuffer * get();
	extension::exsound_detail::SoundNameRegistry::NameBuffer & operator*();
	extension::exsound_detail::SoundNameRegistry::NameBuffer * operator->();
	bool isNull();
};
class extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode>
{
private:
	extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> * m_Prev; // 0x0
	extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> * m_Next; // 0x8
	BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode>(extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> &);
public:
	BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode>();
protected:
	~BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode>();
public:
	static extension::exsound_detail::SoundNameRegistry::BucketNode * Prev(const extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> *);
	static extension::exsound_detail::SoundNameRegistry::BucketNode * Next(const extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> *);
	static void Link(extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> *, extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> *);
	static void Isolate(extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> *);
	static bool IsIsolated(extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> *);
private:
	extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> & operator=(extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode> &);
};
class extension::exsound_detail::SoundNameRegistry::BucketNode :
	extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode>
{
public:
	BucketNode();
	~BucketNode();
};
class extension::exsound_detail::SoundNameRegistry::WeakEntry :
	extension::exsound_detail::SoundNameRegistry::BucketNode
{
public:
	extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> m_weak; // 0x10
	WeakEntry(const extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	~WeakEntry();
};
class extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>
{
	class WeakProxy;
private:
	extension::exsound_detail::SoundNameRegistry::NameBuffer * m_ptr; // 0x0
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_proxy; // 0x8
public:
	RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>(const extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>();
	~RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>();
	void swap(extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> & operator=(const extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
	void reset();
	extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> lock();
	bool expired();
};
class extension::SoundHashKey
{
	class BufferSharedPtr_t;
private:
	extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> m_sharedBuffer; // 0x0
public:
	SoundHashKey(const extension::SoundHashKey &);
	SoundHashKey();
	SoundHashKey(const char *);
private:
	SoundHashKey(const extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> &);
public:
	~SoundHashKey();
	bool isNull();
	const char * str();
	unsigned long long hashCode();
	bool operator==(const extension::SoundHashKey &);
	bool operator!=(const extension::SoundHashKey &);
	bool operator bool();
	static extension::SoundHashKey MakeIfExist(const char *);
	struct Hasher;
	extension::SoundHashKey & operator=(const extension::SoundHashKey &);
};
std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >(); // 0x140098470
unsigned long long extension::SoundHashKey::hashCode(); // 0x1402B0FA0
extension::SoundHashKey extension::SoundHashKey::MakeIfExist(const char * name); // 0x1400F5350
struct extension::SoundHashKey::Hasher
{
	unsigned long long operator()(const extension::SoundHashKey &);
};