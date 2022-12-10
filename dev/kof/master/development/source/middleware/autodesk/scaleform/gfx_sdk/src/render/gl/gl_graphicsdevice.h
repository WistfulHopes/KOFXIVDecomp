#pragma once

class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLBuffer,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLBuffer,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLBuffer,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLBuffer,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLBuffer,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLBuffer,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLBuffer,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLBuffer,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLBuffer,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLBuffer,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLBuffer,67> &);
};
class Scaleform::Render::GL::HALGLBuffer :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLBuffer,67>
{
public:
	bool operator bool();
	HALGLBuffer(Scaleform::Render::GL::HALGLBuffer &);
	HALGLBuffer(const Scaleform::Render::GL::HALGLBuffer &);
	HALGLBuffer(unsigned long);
protected:
	unsigned long Name; // 0x10
	long long Size; // 0x18
	unsigned long Usage; // 0x20
public:
	virtual ~HALGLBuffer();
	Scaleform::Render::GL::HALGLBuffer & operator=(Scaleform::Render::GL::HALGLBuffer &);
	Scaleform::Render::GL::HALGLBuffer & operator=(const Scaleform::Render::GL::HALGLBuffer &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLTexture,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLTexture,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLTexture,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLTexture,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLTexture,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLTexture,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLTexture,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLTexture,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLTexture,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLTexture,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLTexture,67> &);
};
class Scaleform::Render::GL::HALGLTexture :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLTexture,67>
{
public:
	bool operator bool();
	HALGLTexture(Scaleform::Render::GL::HALGLTexture &);
	HALGLTexture(const Scaleform::Render::GL::HALGLTexture &);
	HALGLTexture(unsigned long);
protected:
	unsigned long Name; // 0x10
public:
	virtual ~HALGLTexture();
	Scaleform::Render::GL::HALGLTexture & operator=(Scaleform::Render::GL::HALGLTexture &);
	Scaleform::Render::GL::HALGLTexture & operator=(const Scaleform::Render::GL::HALGLTexture &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67> &);
};
class Scaleform::Render::GL::HALGLRenderbuffer :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLRenderbuffer,67>
{
public:
	bool operator bool();
	HALGLRenderbuffer(Scaleform::Render::GL::HALGLRenderbuffer &);
	HALGLRenderbuffer(const Scaleform::Render::GL::HALGLRenderbuffer &);
	HALGLRenderbuffer(unsigned long, unsigned long, Scaleform::Render::GL::GraphicsDevice &);
	HALGLRenderbuffer();
protected:
	Scaleform::Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > > Parameters; // 0x10
	unsigned long Name; // 0x18
public:
	virtual ~HALGLRenderbuffer();
	Scaleform::Render::GL::HALGLRenderbuffer & operator=(Scaleform::Render::GL::HALGLRenderbuffer &);
	Scaleform::Render::GL::HALGLRenderbuffer & operator=(const Scaleform::Render::GL::HALGLRenderbuffer &);
};
class Scaleform::Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > >
{
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
	typedef long ValueType;
	class SelfType;
	Scaleform::HashSet<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > mHash; // 0x0
	Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scalefo(const Scaleform::Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > > &);
	Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scalefo(void *, long);
	Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scalefo(void *);
	Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scalefo(long);
	Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scalefo();
	~Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scalef();
	void operator=(const Scaleform::Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > > &);
	void Clear();
	bool IsEmpty();
	void Set(const unsigned long &, const long &);
	void Add(const unsigned long &, const long &);
	bool Remove(const unsigned long &);
	const long * Get(const unsigned long &);
	long * Get(const unsigned long &);
	bool Get(const unsigned long &, long *);
	unsigned long long GetSize();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::ConstIterator Begin();
	Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::Iterator Begin();
	Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::ConstIterator End();
	Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::Iterator End();
	Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::ConstIterator Find(const unsigned long &);
	Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::Iterator Find(const unsigned long &);
};
class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67> &);
};
class Scaleform::Render::GL::HALGLFramebuffer :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLFramebuffer,67>
{
public:
	bool operator bool();
	HALGLFramebuffer(Scaleform::Render::GL::HALGLFramebuffer &);
	HALGLFramebuffer(const Scaleform::Render::GL::HALGLFramebuffer &);
	HALGLFramebuffer(unsigned long, unsigned long, Scaleform::Render::GL::GraphicsDevice &);
	HALGLFramebuffer();
	struct FramebufferAttachment;
	const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment * GetAttachment(unsigned long);
protected:
	Scaleform::HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > BindingIndexerAttachments; // 0x10
	unsigned long Name; // 0x18
public:
	virtual ~HALGLFramebuffer();
	Scaleform::Render::GL::HALGLFramebuffer & operator=(Scaleform::Render::GL::HALGLFramebuffer &);
	Scaleform::Render::GL::HALGLFramebuffer & operator=(const Scaleform::Render::GL::HALGLFramebuffer &);
};
struct Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment
{
	Scaleform::Hash<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > > Parameters; // 0x0
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> RenderBuffer; // 0x8
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> Texture; // 0x10
	FramebufferAttachment(Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment &);
	FramebufferAttachment(const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment &);
	FramebufferAttachment();
	~FramebufferAttachment();
	Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment & operator=(Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment &);
	Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment & operator=(const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment &);
};
class Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>
{
protected:
	Scaleform::Render::GL::HALGLRenderbuffer * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::HALGLRenderbuffer>(const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> &);
	Ptr<Scaleform::Render::GL::HALGLRenderbuffer>(Scaleform::Render::GL::HALGLRenderbuffer *);
	Ptr<Scaleform::Render::GL::HALGLRenderbuffer>(Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::HALGLRenderbuffer>(Scaleform::Pickable<Scaleform::Render::GL::HALGLRenderbuffer>);
	Ptr<Scaleform::Render::GL::HALGLRenderbuffer>(Scaleform::Render::GL::HALGLRenderbuffer &);
	Ptr<Scaleform::Render::GL::HALGLRenderbuffer>();
	~Ptr<Scaleform::Render::GL::HALGLRenderbuffer>();
	bool operator==(Scaleform::Render::GL::HALGLRenderbuffer *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> &);
	bool operator!=(Scaleform::Render::GL::HALGLRenderbuffer *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & operator=(Scaleform::Pickable<Scaleform::Render::GL::HALGLRenderbuffer>);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & operator=(Scaleform::Render::GL::HALGLRenderbuffer &);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & operator=(Scaleform::Render::GL::HALGLRenderbuffer *);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::HALGLRenderbuffer>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & SetPtr(Scaleform::Render::GL::HALGLRenderbuffer &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & SetPtr(Scaleform::Render::GL::HALGLRenderbuffer *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::HALGLRenderbuffer * & GetRawRef();
	Scaleform::Render::GL::HALGLRenderbuffer * GetPtr();
	Scaleform::Render::GL::HALGLRenderbuffer & operator*();
	Scaleform::Render::GL::HALGLRenderbuffer * operator->();
	Scaleform::Render::GL::HALGLRenderbuffer * operator class Scaleform::Render::GL::HALGLRenderbuffer *();
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & Pick(Scaleform::Render::GL::HALGLRenderbuffer *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & Pick(Scaleform::Pickable<Scaleform::Render::GL::HALGLRenderbuffer>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> & Pick(Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> &);
};
class Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>
{
protected:
	Scaleform::Render::GL::HALGLTexture * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::HALGLTexture>(const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> &);
	Ptr<Scaleform::Render::GL::HALGLTexture>(Scaleform::Render::GL::HALGLTexture *);
	Ptr<Scaleform::Render::GL::HALGLTexture>(Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::HALGLTexture>(Scaleform::Pickable<Scaleform::Render::GL::HALGLTexture>);
	Ptr<Scaleform::Render::GL::HALGLTexture>(Scaleform::Render::GL::HALGLTexture &);
	Ptr<Scaleform::Render::GL::HALGLTexture>();
	~Ptr<Scaleform::Render::GL::HALGLTexture>();
	bool operator==(Scaleform::Render::GL::HALGLTexture *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> &);
	bool operator!=(Scaleform::Render::GL::HALGLTexture *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & operator=(Scaleform::Pickable<Scaleform::Render::GL::HALGLTexture>);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & operator=(Scaleform::Render::GL::HALGLTexture &);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & operator=(Scaleform::Render::GL::HALGLTexture *);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::HALGLTexture>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & SetPtr(Scaleform::Render::GL::HALGLTexture &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & SetPtr(Scaleform::Render::GL::HALGLTexture *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::HALGLTexture * & GetRawRef();
	Scaleform::Render::GL::HALGLTexture * GetPtr();
	Scaleform::Render::GL::HALGLTexture & operator*();
	Scaleform::Render::GL::HALGLTexture * operator->();
	Scaleform::Render::GL::HALGLTexture * operator class Scaleform::Render::GL::HALGLTexture *();
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & Pick(Scaleform::Render::GL::HALGLTexture *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & Pick(Scaleform::Pickable<Scaleform::Render::GL::HALGLTexture>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> & Pick(Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> &);
};
class Scaleform::HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > :
	Scaleform::Hash<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned in(const Scaleform::HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
	HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned in(long);
	HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned in();
	~HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned i();
	void operator=(const Scaleform::HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
};
class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgram,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLProgram,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgram,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLProgram,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgram,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLProgram,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLProgram,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgram,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgram,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgram,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgram,67> &);
};
class Scaleform::Render::GL::HALGLProgram :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgram,67>
{
public:
	bool operator bool();
	HALGLProgram(Scaleform::Render::GL::HALGLProgram &);
	HALGLProgram(const Scaleform::Render::GL::HALGLProgram &);
	HALGLProgram(unsigned long);
protected:
	unsigned long Name; // 0x10
public:
	virtual ~HALGLProgram();
	Scaleform::Render::GL::HALGLProgram & operator=(Scaleform::Render::GL::HALGLProgram &);
	Scaleform::Render::GL::HALGLProgram & operator=(const Scaleform::Render::GL::HALGLProgram &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67> &);
};
class Scaleform::Render::GL::HALGLProgramPipeline :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLProgramPipeline,67>
{
public:
	bool operator bool();
	HALGLProgramPipeline(Scaleform::Render::GL::HALGLProgramPipeline &);
	HALGLProgramPipeline(const Scaleform::Render::GL::HALGLProgramPipeline &);
	HALGLProgramPipeline(unsigned long);
protected:
	unsigned long Name; // 0x10
public:
	virtual ~HALGLProgramPipeline();
	Scaleform::Render::GL::HALGLProgramPipeline & operator=(Scaleform::Render::GL::HALGLProgramPipeline &);
	Scaleform::Render::GL::HALGLProgramPipeline & operator=(const Scaleform::Render::GL::HALGLProgramPipeline &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLShader,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLShader,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLShader,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLShader,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLShader,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLShader,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLShader,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLShader,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLShader,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLShader,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLShader,67> &);
};
class Scaleform::Render::GL::HALGLShader :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLShader,67>
{
public:
	bool operator bool();
	HALGLShader(Scaleform::Render::GL::HALGLShader &);
	HALGLShader(const Scaleform::Render::GL::HALGLShader &);
	HALGLShader(unsigned long);
protected:
	unsigned long Name; // 0x10
public:
	virtual ~HALGLShader();
	Scaleform::Render::GL::HALGLShader & operator=(Scaleform::Render::GL::HALGLShader &);
	Scaleform::Render::GL::HALGLShader & operator=(const Scaleform::Render::GL::HALGLShader &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67> &);
};
class Scaleform::Render::GL::HALGLUniformLocation :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLUniformLocation,67>
{
public:
	bool operator bool();
	HALGLUniformLocation(Scaleform::Render::GL::HALGLUniformLocation &);
	HALGLUniformLocation(const Scaleform::Render::GL::HALGLUniformLocation &);
	HALGLUniformLocation(long);
protected:
	long Location; // 0x10
public:
	virtual ~HALGLUniformLocation();
	Scaleform::Render::GL::HALGLUniformLocation & operator=(Scaleform::Render::GL::HALGLUniformLocation &);
	Scaleform::Render::GL::HALGLUniformLocation & operator=(const Scaleform::Render::GL::HALGLUniformLocation &);
	void __dflt_ctor_closure();
};
class Scaleform::Render::GL::HALGLVertexArray :
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67>
{
public:
	bool operator bool();
	HALGLVertexArray(Scaleform::Render::GL::HALGLVertexArray &);
	HALGLVertexArray(const Scaleform::Render::GL::HALGLVertexArray &);
	HALGLVertexArray(unsigned long);
protected:
	unsigned long Name; // 0x10
	Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > BindingIndexerBuffers; // 0x18
public:
	virtual ~HALGLVertexArray();
	Scaleform::Render::GL::HALGLVertexArray & operator=(Scaleform::Render::GL::HALGLVertexArray &);
	Scaleform::Render::GL::HALGLVertexArray & operator=(const Scaleform::Render::GL::HALGLVertexArray &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67>(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67>(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67> &);
	RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67>();
	virtual ~RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67>();
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67> & operator=(Scaleform::RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67> &);
	Scaleform::RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GL::HALGLVertexArray,67> &);
};
class Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > :
	Scaleform::Hash<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetC(const Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetC(long);
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetC();
	~HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::Hashset();
	void operator=(const Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
};
class Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>
{
protected:
	Scaleform::Render::GL::HALGLBuffer * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::HALGLBuffer>(const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> &);
	Ptr<Scaleform::Render::GL::HALGLBuffer>(Scaleform::Render::GL::HALGLBuffer *);
	Ptr<Scaleform::Render::GL::HALGLBuffer>(Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::HALGLBuffer>(Scaleform::Pickable<Scaleform::Render::GL::HALGLBuffer>);
	Ptr<Scaleform::Render::GL::HALGLBuffer>(Scaleform::Render::GL::HALGLBuffer &);
	Ptr<Scaleform::Render::GL::HALGLBuffer>();
	~Ptr<Scaleform::Render::GL::HALGLBuffer>();
	bool operator==(Scaleform::Render::GL::HALGLBuffer *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> &);
	bool operator!=(Scaleform::Render::GL::HALGLBuffer *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & operator=(Scaleform::Pickable<Scaleform::Render::GL::HALGLBuffer>);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & operator=(Scaleform::Render::GL::HALGLBuffer &);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & operator=(Scaleform::Render::GL::HALGLBuffer *);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::HALGLBuffer>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & SetPtr(Scaleform::Render::GL::HALGLBuffer &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & SetPtr(Scaleform::Render::GL::HALGLBuffer *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::HALGLBuffer * & GetRawRef();
	Scaleform::Render::GL::HALGLBuffer * GetPtr();
	Scaleform::Render::GL::HALGLBuffer & operator*();
	Scaleform::Render::GL::HALGLBuffer * operator->();
	Scaleform::Render::GL::HALGLBuffer * operator class Scaleform::Render::GL::HALGLBuffer *();
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & Pick(Scaleform::Render::GL::HALGLBuffer *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & Pick(Scaleform::Pickable<Scaleform::Render::GL::HALGLBuffer>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> & Pick(Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer> &);
};
class Scaleform::Render::GL::GraphicsDevice :
	Scaleform::Render::GraphicsDevice,
	Unassignable
{
public:
	GraphicsDevice(const Scaleform::Render::GL::GraphicsDevice &);
	GraphicsDevice();
	Scaleform::Render::GL::GraphicsDevice & operator=(const Scaleform::Render::GL::GraphicsDevice &);
	unsigned long GetCaps();
	bool CheckExtension(Scaleform::Render::GL::GLExtensionType);
	bool CheckGLVersion(unsigned long, unsigned long);
	void glActiveTexture(unsigned long);
	void glAttachShader(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLShader *);
	void glBindAttribLocation(Scaleform::Render::GL::HALGLProgram *, unsigned long, const char *);
	void glBindBuffer(unsigned long, Scaleform::Render::GL::HALGLBuffer *);
	void glBindFragDataLocation(Scaleform::Render::GL::HALGLProgram *, unsigned long, const char *);
	void glBindFramebuffer(unsigned long, Scaleform::Render::GL::HALGLFramebuffer *);
	void glBindProgramPipeline(Scaleform::Render::GL::HALGLProgramPipeline *);
	void glBindRenderbuffer(unsigned long, Scaleform::Render::GL::HALGLRenderbuffer *);
	void glBindTexture(unsigned long, Scaleform::Render::GL::HALGLTexture *);
	void glBindVertexArray(Scaleform::Render::GL::HALGLVertexArray *);
	void glBlendEquation(unsigned long);
	void glBlendEquationSeparate(unsigned long, unsigned long);
	void glBlendFunc(unsigned long, unsigned long);
	void glBlendFuncSeparate(unsigned long, unsigned long, unsigned long, unsigned long);
	void glBufferData(unsigned long, long long, const void *, unsigned long);
	void glBufferSubData(unsigned long, long long, long long, const void *);
	unsigned long glCheckFramebufferStatus(unsigned long);
	void glClear(unsigned long);
	void glClearColor(float, float, float, float);
	unsigned long glClientWaitSync(__GLsync *, unsigned long, unsigned long long);
	void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);
	void glCompileShader(Scaleform::Render::GL::HALGLShader *);
	void glCompressedTexImage2D(unsigned long, long, unsigned long, long, long, long, long, const void *);
	void glCreateProgram(Scaleform::Render::GL::HALGLProgram *);
	void glCreateShader(unsigned long, Scaleform::Render::GL::HALGLShader *);
	void glDebugMessageCallback(void(*)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void *);
	void glDebugMessageControl(unsigned long, unsigned long, unsigned long, long, const unsigned long *, unsigned char);
	void glDeleteBuffers(long, Scaleform::Render::GL::HALGLBuffer * *);
	void glDeleteFramebuffers(long, Scaleform::Render::GL::HALGLFramebuffer * *);
	void glDeleteProgram(Scaleform::Render::GL::HALGLProgram *);
	void glDeleteProgramPipelines(long, Scaleform::Render::GL::HALGLProgramPipeline * *);
	void glDeleteRenderbuffers(long, Scaleform::Render::GL::HALGLRenderbuffer * *);
	void glDeleteShader(Scaleform::Render::GL::HALGLShader *);
	void glDeleteSync(__GLsync *);
	void glDeleteTextures(long, Scaleform::Render::GL::HALGLTexture * *);
	void glDeleteVertexArrays(long, Scaleform::Render::GL::HALGLVertexArray * *);
	void glDepthFunc(unsigned long);
	void glDepthMask(unsigned char);
	void glDisable(unsigned long);
	void glDisableVertexAttribArray(unsigned long);
	void glDrawArrays(unsigned long, long, long);
	void glDrawElements(unsigned long, long, unsigned long, const void *);
	void glDrawElementsInstanced(unsigned long, long, unsigned long, const void *, long);
	void glEnable(unsigned long);
	void glEnableVertexAttribArray(unsigned long);
	__GLsync * glFenceSync(unsigned long, unsigned long);
	void glFlush();
	void glFlushMappedBufferRange(unsigned long, long long, long long);
	void glFramebufferRenderbuffer(unsigned long, unsigned long, unsigned long, Scaleform::Render::GL::HALGLRenderbuffer *);
	void glFramebufferTexture2D(unsigned long, unsigned long, unsigned long, Scaleform::Render::GL::HALGLTexture *, long);
	void glGenBuffers(long, Scaleform::Render::GL::HALGLBuffer * *);
	void glGenFramebuffers(long, Scaleform::Render::GL::HALGLFramebuffer * *);
	void glGenProgramPipelines(long, Scaleform::Render::GL::HALGLProgramPipeline * *);
	void glGenRenderbuffers(long, Scaleform::Render::GL::HALGLRenderbuffer * *);
	void glGenTextures(long, Scaleform::Render::GL::HALGLTexture * *);
	void glGenVertexArrays(long, Scaleform::Render::GL::HALGLVertexArray * *);
	void glGenerateMipmap(unsigned long);
	void glGetActiveUniform(unsigned long, unsigned long, long, long *, long *, unsigned long *, char *);
	unsigned long glGetError();
	void glGetFloatv(unsigned long, float *);
	long glGetFragDataLocation(Scaleform::Render::GL::HALGLProgram *, const char *);
	void glGetFramebufferAttachmentParameteriv(unsigned long, unsigned long, unsigned long, long *);
	void glGetIntegerv(unsigned long, long *);
	void glGetProgramBinary(Scaleform::Render::GL::HALGLProgram *, long, long *, unsigned long *, void *);
	void glGetProgramInfoLog(Scaleform::Render::GL::HALGLProgram *, long, long *, char *);
	void glGetProgramiv(Scaleform::Render::GL::HALGLProgram *, unsigned long, long *);
	void glGetRenderbufferParameteriv(unsigned long, unsigned long, long *);
	void glGetShaderInfoLog(Scaleform::Render::GL::HALGLShader *, long, long *, char *);
	void glGetShaderiv(Scaleform::Render::GL::HALGLShader *, unsigned long, long *);
	const unsigned char * glGetString(unsigned long);
	const unsigned char * glGetStringi(unsigned long, unsigned long);
	void glGetSynciv(__GLsync *, unsigned long, long, long *, long *);
	void glGetTexImage(unsigned long, long, unsigned long, unsigned long, void *);
	void glGetTexLevelParameteriv(unsigned long, long, unsigned long, long *);
	void glGetTexParameteriv(unsigned long, unsigned long, long *);
	void glGetUniformLocation(Scaleform::Render::GL::HALGLProgram *, const char *, Scaleform::Render::GL::HALGLUniformLocation *);
	unsigned char glIsFramebuffer(Scaleform::Render::GL::HALGLFramebuffer *);
	unsigned char glIsProgram(Scaleform::Render::GL::HALGLProgram *);
	unsigned char glIsRenderbuffer(Scaleform::Render::GL::HALGLRenderbuffer *);
	void glLinkProgram(Scaleform::Render::GL::HALGLProgram *);
	void * glMapBuffer(unsigned long, unsigned long);
	void * glMapBufferRange(unsigned long, long long, long long, unsigned long);
	void glPixelStorei(unsigned long, long);
	void glPolygonMode(unsigned long, unsigned long);
	void glPopGroupMarker();
	void glProgramBinary(Scaleform::Render::GL::HALGLProgram *, unsigned long, const void *, long);
	void glProgramParameteri(Scaleform::Render::GL::HALGLProgram *, unsigned long, long);
	void glProgramUniform1fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	void glProgramUniform1iv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const long *);
	void glProgramUniform2fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	void glProgramUniform3fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	void glProgramUniform4fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	void glProgramUniformMatrix4fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, unsigned char, const float *);
	void glPushGroupMarker(long, const char *);
	void glReadPixels(long, long, long, long, unsigned long, unsigned long, void *);
	void glReleaseShaderCompiler();
	void glRenderbufferStorage(unsigned long, unsigned long, long, long);
	void glScissor(long, long, long, long);
	void glShaderSource(Scaleform::Render::GL::HALGLShader *, long, const char * *, const long *);
	void glStencilFunc(unsigned long, long, unsigned long);
	void glStencilMask(unsigned long);
	void glStencilOp(unsigned long, unsigned long, unsigned long);
	void glStringMarker(long, const void *);
	void glTexImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	void glTexParameteri(unsigned long, unsigned long, long);
	void glTexSubImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	void glUniform1f(Scaleform::Render::GL::HALGLUniformLocation *, float);
	void glUniform1fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	void glUniform1i(Scaleform::Render::GL::HALGLUniformLocation *, long);
	void glUniform1iv(Scaleform::Render::GL::HALGLUniformLocation *, long, const long *);
	void glUniform2f(Scaleform::Render::GL::HALGLUniformLocation *, float, float);
	void glUniform2fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	void glUniform3fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	void glUniform4fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	void glUniformMatrix4fv(Scaleform::Render::GL::HALGLUniformLocation *, long, unsigned char, const float *);
	unsigned char glUnmapBuffer(unsigned long);
	void glUseProgram(Scaleform::Render::GL::HALGLProgram *);
	void glUseProgramStages(Scaleform::Render::GL::HALGLProgramPipeline *, unsigned long, Scaleform::Render::GL::HALGLProgram *);
	void glVertexAttribPointer(unsigned long, long, unsigned long, unsigned char, long, const void *);
	void glViewport(long, long, long, long);
	Scaleform::Render::GL::HALGLBuffer * GetBoundBuffer(unsigned long);
	Scaleform::Render::GL::HALGLTexture * GetBoundTexture(unsigned long);
	Scaleform::Render::GL::HALGLFramebuffer * GetBoundFramebuffer(unsigned long);
	Scaleform::Render::GL::HALGLRenderbuffer * GetBoundRenderbuffer(unsigned long);
	Scaleform::Render::GL::HALGLProgramPipeline * GetBoundProgramPipeline();
	Scaleform::Render::GL::HALGLVertexArray * GetBoundVertexArray();
	static const long MaximumGLResourcesPerCall; // 0xFFFFFFFFFFFFFFFF
protected:
	void clearCachedBindings();
	unsigned long MajorVersion; // 0x18
	unsigned long MinorVersion; // 0x1C
	bool ExtensionSupported[609]; // 0x20
	unsigned long Caps; // 0x284
	Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > BindingIndexerBuffers; // 0x288
	unsigned long BindingActiveTexture; // 0x290
	Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > BindingIndexerTextures[5]; // 0x298
	Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > BindingIndexerFramebuffers; // 0x2C0
	Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > BindingIndexerRenderbuffers; // 0x2C8
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> BindingProgramPipeline; // 0x2D0
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> BindingVertexArray; // 0x2D8
public:
	virtual ~GraphicsDevice();
};
class Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > :
	Scaleform::Hash<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::Hashse(const Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::Hashse(long);
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::Hashse();
	~HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::Hashs();
	void operator=(const Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
};
class Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>
{
protected:
	Scaleform::Render::GL::HALGLFramebuffer * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::HALGLFramebuffer>(const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> &);
	Ptr<Scaleform::Render::GL::HALGLFramebuffer>(Scaleform::Render::GL::HALGLFramebuffer *);
	Ptr<Scaleform::Render::GL::HALGLFramebuffer>(Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::HALGLFramebuffer>(Scaleform::Pickable<Scaleform::Render::GL::HALGLFramebuffer>);
	Ptr<Scaleform::Render::GL::HALGLFramebuffer>(Scaleform::Render::GL::HALGLFramebuffer &);
	Ptr<Scaleform::Render::GL::HALGLFramebuffer>();
	~Ptr<Scaleform::Render::GL::HALGLFramebuffer>();
	bool operator==(Scaleform::Render::GL::HALGLFramebuffer *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> &);
	bool operator!=(Scaleform::Render::GL::HALGLFramebuffer *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & operator=(Scaleform::Pickable<Scaleform::Render::GL::HALGLFramebuffer>);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & operator=(Scaleform::Render::GL::HALGLFramebuffer &);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & operator=(Scaleform::Render::GL::HALGLFramebuffer *);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::HALGLFramebuffer>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & SetPtr(Scaleform::Render::GL::HALGLFramebuffer &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & SetPtr(Scaleform::Render::GL::HALGLFramebuffer *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::HALGLFramebuffer * & GetRawRef();
	Scaleform::Render::GL::HALGLFramebuffer * GetPtr();
	Scaleform::Render::GL::HALGLFramebuffer & operator*();
	Scaleform::Render::GL::HALGLFramebuffer * operator->();
	Scaleform::Render::GL::HALGLFramebuffer * operator class Scaleform::Render::GL::HALGLFramebuffer *();
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & Pick(Scaleform::Render::GL::HALGLFramebuffer *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & Pick(Scaleform::Pickable<Scaleform::Render::GL::HALGLFramebuffer>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> & Pick(Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> &);
};
class Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > :
	Scaleform::Hash<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform(const Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform(long);
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform();
	~HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scalefor();
	void operator=(const Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
};
class Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > :
	Scaleform::Hash<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scalefo(const Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scalefo(long);
	HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scalefo();
	~HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scalef();
	void operator=(const Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > &);
};
class Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline>
{
protected:
	Scaleform::Render::GL::HALGLProgramPipeline * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::HALGLProgramPipeline>(const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> &);
	Ptr<Scaleform::Render::GL::HALGLProgramPipeline>(Scaleform::Render::GL::HALGLProgramPipeline *);
	Ptr<Scaleform::Render::GL::HALGLProgramPipeline>(Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::HALGLProgramPipeline>(Scaleform::Pickable<Scaleform::Render::GL::HALGLProgramPipeline>);
	Ptr<Scaleform::Render::GL::HALGLProgramPipeline>(Scaleform::Render::GL::HALGLProgramPipeline &);
	Ptr<Scaleform::Render::GL::HALGLProgramPipeline>();
	~Ptr<Scaleform::Render::GL::HALGLProgramPipeline>();
	bool operator==(Scaleform::Render::GL::HALGLProgramPipeline *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> &);
	bool operator!=(Scaleform::Render::GL::HALGLProgramPipeline *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & operator=(Scaleform::Pickable<Scaleform::Render::GL::HALGLProgramPipeline>);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & operator=(Scaleform::Render::GL::HALGLProgramPipeline &);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & operator=(Scaleform::Render::GL::HALGLProgramPipeline *);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::HALGLProgramPipeline>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & SetPtr(Scaleform::Render::GL::HALGLProgramPipeline &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & SetPtr(Scaleform::Render::GL::HALGLProgramPipeline *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::HALGLProgramPipeline * & GetRawRef();
	Scaleform::Render::GL::HALGLProgramPipeline * GetPtr();
	Scaleform::Render::GL::HALGLProgramPipeline & operator*();
	Scaleform::Render::GL::HALGLProgramPipeline * operator->();
	Scaleform::Render::GL::HALGLProgramPipeline * operator class Scaleform::Render::GL::HALGLProgramPipeline *();
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & Pick(Scaleform::Render::GL::HALGLProgramPipeline *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & Pick(Scaleform::Pickable<Scaleform::Render::GL::HALGLProgramPipeline>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> & Pick(Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> &);
};
class Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray>
{
protected:
	Scaleform::Render::GL::HALGLVertexArray * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::HALGLVertexArray>(const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> &);
	Ptr<Scaleform::Render::GL::HALGLVertexArray>(Scaleform::Render::GL::HALGLVertexArray *);
	Ptr<Scaleform::Render::GL::HALGLVertexArray>(Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::HALGLVertexArray>(Scaleform::Pickable<Scaleform::Render::GL::HALGLVertexArray>);
	Ptr<Scaleform::Render::GL::HALGLVertexArray>(Scaleform::Render::GL::HALGLVertexArray &);
	Ptr<Scaleform::Render::GL::HALGLVertexArray>();
	~Ptr<Scaleform::Render::GL::HALGLVertexArray>();
	bool operator==(Scaleform::Render::GL::HALGLVertexArray *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> &);
	bool operator!=(Scaleform::Render::GL::HALGLVertexArray *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & operator=(Scaleform::Pickable<Scaleform::Render::GL::HALGLVertexArray>);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & operator=(Scaleform::Render::GL::HALGLVertexArray &);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & operator=(Scaleform::Render::GL::HALGLVertexArray *);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::HALGLVertexArray>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & SetPtr(Scaleform::Render::GL::HALGLVertexArray &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & SetPtr(Scaleform::Render::GL::HALGLVertexArray *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::HALGLVertexArray * & GetRawRef();
	Scaleform::Render::GL::HALGLVertexArray * GetPtr();
	Scaleform::Render::GL::HALGLVertexArray & operator*();
	Scaleform::Render::GL::HALGLVertexArray * operator->();
	Scaleform::Render::GL::HALGLVertexArray * operator class Scaleform::Render::GL::HALGLVertexArray *();
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & Pick(Scaleform::Render::GL::HALGLVertexArray *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & Pick(Scaleform::Pickable<Scaleform::Render::GL::HALGLVertexArray>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> & Pick(Scaleform::Ptr<Scaleform::Render::GL::HALGLVertexArray> &);
};
class Scaleform::Render::GL::GraphicsDeviceImmediate :
	Scaleform::Render::GL::GraphicsDevice
{
private:
	long DefaultFramebuffer; // 0x2E0
public:
	GraphicsDeviceImmediate(Scaleform::Render::GL::GraphicsDeviceImmediate &);
	GraphicsDeviceImmediate(const Scaleform::Render::GL::GraphicsDeviceImmediate &);
	GraphicsDeviceImmediate();
	void Initialize(unsigned long);
	virtual void Begin();
	virtual void End();
	virtual void glActiveTexture(unsigned long);
	virtual void glAttachShader(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLShader *);
	virtual void glBindAttribLocation(Scaleform::Render::GL::HALGLProgram *, unsigned long, const char *);
	virtual void glBindBuffer(unsigned long, Scaleform::Render::GL::HALGLBuffer *);
	virtual void glBindFragDataLocation(Scaleform::Render::GL::HALGLProgram *, unsigned long, const char *);
	virtual void glBindFramebuffer(unsigned long, Scaleform::Render::GL::HALGLFramebuffer *);
	virtual void glBindProgramPipeline(Scaleform::Render::GL::HALGLProgramPipeline *);
	virtual void glBindRenderbuffer(unsigned long, Scaleform::Render::GL::HALGLRenderbuffer *);
	virtual void glBindTexture(unsigned long, Scaleform::Render::GL::HALGLTexture *);
	virtual void glBindVertexArray(Scaleform::Render::GL::HALGLVertexArray *);
	virtual void glBlendEquation(unsigned long);
	virtual void glBlendEquationSeparate(unsigned long, unsigned long);
	virtual void glBlendFunc(unsigned long, unsigned long);
	virtual void glBlendFuncSeparate(unsigned long, unsigned long, unsigned long, unsigned long);
	virtual void glBufferData(unsigned long, long long, const void *, unsigned long);
	virtual void glBufferSubData(unsigned long, long long, long long, const void *);
	virtual unsigned long glCheckFramebufferStatus(unsigned long);
	virtual void glClear(unsigned long);
	virtual void glClearColor(float, float, float, float);
	virtual unsigned long glClientWaitSync(__GLsync *, unsigned long, unsigned long long);
	virtual void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);
	virtual void glCompileShader(Scaleform::Render::GL::HALGLShader *);
	virtual void glCompressedTexImage2D(unsigned long, long, unsigned long, long, long, long, long, const void *);
	virtual void glCreateProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual void glCreateShader(unsigned long, Scaleform::Render::GL::HALGLShader *);
	virtual void glDebugMessageCallback(void(*)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void *);
	virtual void glDebugMessageControl(unsigned long, unsigned long, unsigned long, long, const unsigned long *, unsigned char);
	virtual void glDeleteBuffers(long, Scaleform::Render::GL::HALGLBuffer * *);
	virtual void glDeleteFramebuffers(long, Scaleform::Render::GL::HALGLFramebuffer * *);
	virtual void glDeleteProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual void glDeleteProgramPipelines(long, Scaleform::Render::GL::HALGLProgramPipeline * *);
	virtual void glDeleteRenderbuffers(long, Scaleform::Render::GL::HALGLRenderbuffer * *);
	virtual void glDeleteShader(Scaleform::Render::GL::HALGLShader *);
	virtual void glDeleteSync(__GLsync *);
	virtual void glDeleteTextures(long, Scaleform::Render::GL::HALGLTexture * *);
	virtual void glDeleteVertexArrays(long, Scaleform::Render::GL::HALGLVertexArray * *);
	virtual void glDepthFunc(unsigned long);
	virtual void glDepthMask(unsigned char);
	virtual void glDisable(unsigned long);
	virtual void glDisableVertexAttribArray(unsigned long);
	virtual void glDrawArrays(unsigned long, long, long);
	virtual void glDrawElements(unsigned long, long, unsigned long, const void *);
	virtual void glDrawElementsInstanced(unsigned long, long, unsigned long, const void *, long);
	virtual void glEnable(unsigned long);
	virtual void glEnableVertexAttribArray(unsigned long);
	virtual __GLsync * glFenceSync(unsigned long, unsigned long);
	virtual void glFlush();
	virtual void glFlushMappedBufferRange(unsigned long, long long, long long);
	virtual void glFramebufferRenderbuffer(unsigned long, unsigned long, unsigned long, Scaleform::Render::GL::HALGLRenderbuffer *);
	virtual void glFramebufferTexture2D(unsigned long, unsigned long, unsigned long, Scaleform::Render::GL::HALGLTexture *, long);
	virtual void glGenBuffers(long, Scaleform::Render::GL::HALGLBuffer * *);
	virtual void glGenFramebuffers(long, Scaleform::Render::GL::HALGLFramebuffer * *);
	virtual void glGenProgramPipelines(long, Scaleform::Render::GL::HALGLProgramPipeline * *);
	virtual void glGenRenderbuffers(long, Scaleform::Render::GL::HALGLRenderbuffer * *);
	virtual void glGenTextures(long, Scaleform::Render::GL::HALGLTexture * *);
	virtual void glGenVertexArrays(long, Scaleform::Render::GL::HALGLVertexArray * *);
	virtual void glGenerateMipmap(unsigned long);
	virtual void glGetActiveUniform(unsigned long, unsigned long, long, long *, long *, unsigned long *, char *);
	virtual unsigned long glGetError();
	virtual void glGetFloatv(unsigned long, float *);
	virtual long glGetFragDataLocation(Scaleform::Render::GL::HALGLProgram *, const char *);
	virtual void glGetFramebufferAttachmentParameteriv(unsigned long, unsigned long, unsigned long, long *);
	virtual void glGetIntegerv(unsigned long, long *);
	virtual void glGetProgramBinary(Scaleform::Render::GL::HALGLProgram *, long, long *, unsigned long *, void *);
	virtual void glGetProgramInfoLog(Scaleform::Render::GL::HALGLProgram *, long, long *, char *);
	virtual void glGetProgramiv(Scaleform::Render::GL::HALGLProgram *, unsigned long, long *);
	virtual void glGetRenderbufferParameteriv(unsigned long, unsigned long, long *);
	virtual void glGetShaderInfoLog(Scaleform::Render::GL::HALGLShader *, long, long *, char *);
	virtual void glGetShaderiv(Scaleform::Render::GL::HALGLShader *, unsigned long, long *);
	virtual const unsigned char * glGetString(unsigned long);
	virtual const unsigned char * glGetStringi(unsigned long, unsigned long);
	virtual void glGetSynciv(__GLsync *, unsigned long, long, long *, long *);
	virtual void glGetTexImage(unsigned long, long, unsigned long, unsigned long, void *);
	virtual void glGetTexLevelParameteriv(unsigned long, long, unsigned long, long *);
	virtual void glGetTexParameteriv(unsigned long, unsigned long, long *);
	virtual void glGetUniformLocation(Scaleform::Render::GL::HALGLProgram *, const char *, Scaleform::Render::GL::HALGLUniformLocation *);
	virtual unsigned char glIsFramebuffer(Scaleform::Render::GL::HALGLFramebuffer *);
	virtual unsigned char glIsProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual unsigned char glIsRenderbuffer(Scaleform::Render::GL::HALGLRenderbuffer *);
	virtual void glLinkProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual void * glMapBuffer(unsigned long, unsigned long);
	virtual void * glMapBufferRange(unsigned long, long long, long long, unsigned long);
	virtual void glPixelStorei(unsigned long, long);
	virtual void glPolygonMode(unsigned long, unsigned long);
	virtual void glPopGroupMarker();
	virtual void glProgramBinary(Scaleform::Render::GL::HALGLProgram *, unsigned long, const void *, long);
	virtual void glProgramParameteri(Scaleform::Render::GL::HALGLProgram *, unsigned long, long);
	virtual void glProgramUniform1fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glProgramUniform1iv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const long *);
	virtual void glProgramUniform2fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glProgramUniform3fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glProgramUniform4fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glProgramUniformMatrix4fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, unsigned char, const float *);
	virtual void glPushGroupMarker(long, const char *);
	virtual void glReadPixels(long, long, long, long, unsigned long, unsigned long, void *);
	virtual void glReleaseShaderCompiler();
	virtual void glRenderbufferStorage(unsigned long, unsigned long, long, long);
	virtual void glScissor(long, long, long, long);
	virtual void glShaderSource(Scaleform::Render::GL::HALGLShader *, long, const char * *, const long *);
	virtual void glStencilFunc(unsigned long, long, unsigned long);
	virtual void glStencilMask(unsigned long);
	virtual void glStencilOp(unsigned long, unsigned long, unsigned long);
	virtual void glStringMarker(long, const void *);
	virtual void glTexImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	virtual void glTexParameteri(unsigned long, unsigned long, long);
	virtual void glTexSubImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	virtual void glUniform1f(Scaleform::Render::GL::HALGLUniformLocation *, float);
	virtual void glUniform1fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glUniform1i(Scaleform::Render::GL::HALGLUniformLocation *, long);
	virtual void glUniform1iv(Scaleform::Render::GL::HALGLUniformLocation *, long, const long *);
	virtual void glUniform2f(Scaleform::Render::GL::HALGLUniformLocation *, float, float);
	virtual void glUniform2fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glUniform3fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glUniform4fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glUniformMatrix4fv(Scaleform::Render::GL::HALGLUniformLocation *, long, unsigned char, const float *);
	virtual unsigned char glUnmapBuffer(unsigned long);
	virtual void glUseProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual void glUseProgramStages(Scaleform::Render::GL::HALGLProgramPipeline *, unsigned long, Scaleform::Render::GL::HALGLProgram *);
	virtual void glVertexAttribPointer(unsigned long, long, unsigned long, unsigned char, long, const void *);
	virtual void glViewport(long, long, long, long);
protected:
	Scaleform::Render::GL::GLImmediate Device; // 0x2E8
public:
	virtual ~GraphicsDeviceImmediate();
	Scaleform::Render::GL::GraphicsDeviceImmediate & operator=(Scaleform::Render::GL::GraphicsDeviceImmediate &);
	Scaleform::Render::GL::GraphicsDeviceImmediate & operator=(const Scaleform::Render::GL::GraphicsDeviceImmediate &);
};
void Scaleform::Render::GL::GraphicsDeviceRecorder::Begin(); // 0x14002E7C0
class Scaleform::Render::GL::GraphicsDeviceRecorder :
	Scaleform::Render::GL::GraphicsDevice,
	Scaleform::Render::GraphicsDeviceRecorder
{
	enum GLFunctions
	{
		HAL_glActiveTexture = 32770,
		HAL_glAttachShader = 32771,
		HAL_glBindAttribLocation = 32772,
		HAL_glBindBuffer = 32773,
		HAL_glBindFragDataLocation = 32774,
		HAL_glBindFramebuffer = 32775,
		HAL_glBindProgramPipeline = 32776,
		HAL_glBindRenderbuffer = 32777,
		HAL_glBindTexture = 32778,
		HAL_glBindVertexArray = 32779,
		HAL_glBlendEquation = 32780,
		HAL_glBlendEquationSeparate = 32781,
		HAL_glBlendFunc = 32782,
		HAL_glBlendFuncSeparate = 32783,
		HAL_glBufferData = 32784,
		HAL_glBufferSubData = 32785,
		HAL_glCheckFramebufferStatus = 32786,
		HAL_glClear = 32787,
		HAL_glClearColor = 32788,
		HAL_glClientWaitSync = 32789,
		HAL_glColorMask = 32790,
		HAL_glCompileShader = 32791,
		HAL_glCompressedTexImage2D = 32792,
		HAL_glCreateProgram = 32793,
		HAL_glCreateShader = 32794,
		HAL_glDebugMessageCallback = 32795,
		HAL_glDebugMessageControl = 32796,
		HAL_glDeleteBuffers = 32797,
		HAL_glDeleteFramebuffers = 32798,
		HAL_glDeleteProgram = 32799,
		HAL_glDeleteProgramPipelines = 32800,
		HAL_glDeleteRenderbuffers = 32801,
		HAL_glDeleteShader = 32802,
		HAL_glDeleteSync = 32803,
		HAL_glDeleteTextures = 32804,
		HAL_glDeleteVertexArrays = 32805,
		HAL_glDepthFunc = 32806,
		HAL_glDepthMask = 32807,
		HAL_glDisable = 32808,
		HAL_glDisableVertexAttribArray = 32809,
		HAL_glDrawArrays = 32810,
		HAL_glDrawElements = 32811,
		HAL_glDrawElementsInstanced = 32812,
		HAL_glEnable = 32813,
		HAL_glEnableVertexAttribArray = 32814,
		HAL_glFenceSync = 32815,
		HAL_glFlush = 32816,
		HAL_glFlushMappedBufferRange = 32817,
		HAL_glFramebufferRenderbuffer = 32818,
		HAL_glFramebufferTexture2D = 32819,
		HAL_glGenBuffers = 32820,
		HAL_glGenFramebuffers = 32821,
		HAL_glGenProgramPipelines = 32822,
		HAL_glGenRenderbuffers = 32823,
		HAL_glGenTextures = 32824,
		HAL_glGenVertexArrays = 32825,
		HAL_glGenerateMipmap = 32826,
		HAL_glGetActiveUniform = 32827,
		HAL_glGetError = 32828,
		HAL_glGetFloatv = 32829,
		HAL_glGetFragDataLocation = 32830,
		HAL_glGetFramebufferAttachmentParameteriv = 32831,
		HAL_glGetIntegerv = 32832,
		HAL_glGetProgramBinary = 32833,
		HAL_glGetProgramInfoLog = 32834,
		HAL_glGetProgramiv = 32835,
		HAL_glGetRenderbufferParameteriv = 32836,
		HAL_glGetShaderInfoLog = 32837,
		HAL_glGetShaderiv = 32838,
		HAL_glGetString = 32839,
		HAL_glGetStringi = 32840,
		HAL_glGetSynciv = 32841,
		HAL_glGetTexImage = 32842,
		HAL_glGetTexLevelParameteriv = 32843,
		HAL_glGetTexParameteriv = 32844,
		HAL_glGetUniformLocation = 32845,
		HAL_glIsFramebuffer = 32846,
		HAL_glIsProgram = 32847,
		HAL_glIsRenderbuffer = 32848,
		HAL_glLinkProgram = 32849,
		HAL_glMapBuffer = 32850,
		HAL_glMapBufferRange = 32851,
		HAL_glPixelStorei = 32852,
		HAL_glPolygonMode = 32853,
		HAL_glPopGroupMarker = 32854,
		HAL_glProgramBinary = 32855,
		HAL_glProgramParameteri = 32856,
		HAL_glProgramUniform1fv = 32857,
		HAL_glProgramUniform1iv = 32858,
		HAL_glProgramUniform2fv = 32859,
		HAL_glProgramUniform3fv = 32860,
		HAL_glProgramUniform4fv = 32861,
		HAL_glProgramUniformMatrix4fv = 32862,
		HAL_glPushGroupMarker = 32863,
		HAL_glReadPixels = 32864,
		HAL_glReleaseShaderCompiler = 32865,
		HAL_glRenderbufferStorage = 32866,
		HAL_glScissor = 32867,
		HAL_glShaderSource = 32868,
		HAL_glStencilFunc = 32869,
		HAL_glStencilMask = 32870,
		HAL_glStencilOp = 32871,
		HAL_glStringMarker = 32872,
		HAL_glTexImage2D = 32873,
		HAL_glTexParameteri = 32874,
		HAL_glTexSubImage2D = 32875,
		HAL_glUniform1f = 32876,
		HAL_glUniform1fv = 32877,
		HAL_glUniform1i = 32878,
		HAL_glUniform1iv = 32879,
		HAL_glUniform2f = 32880,
		HAL_glUniform2fv = 32881,
		HAL_glUniform3fv = 32882,
		HAL_glUniform4fv = 32883,
		HAL_glUniformMatrix4fv = 32884,
		HAL_glUnmapBuffer = 32885,
		HAL_glUseProgram = 32886,
		HAL_glUseProgramStages = 32887,
		HAL_glVertexAttribPointer = 32888,
		HAL_glViewport = 32889,
	};
public:
	GraphicsDeviceRecorder(Scaleform::Render::GL::GraphicsDeviceRecorder &);
	GraphicsDeviceRecorder(const Scaleform::Render::GL::GraphicsDeviceRecorder &);
	GraphicsDeviceRecorder(Scaleform::Render::GL::GraphicsDeviceImmediate &);
	virtual void Begin();
	virtual void End();
	virtual bool IsDeferred();
	virtual bool ExecuteRecording(Scaleform::Render::GraphicsDevice &);
	virtual void glActiveTexture(unsigned long);
	virtual void glAttachShader(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLShader *);
	virtual void glBindAttribLocation(Scaleform::Render::GL::HALGLProgram *, unsigned long, const char *);
	virtual void glBindBuffer(unsigned long, Scaleform::Render::GL::HALGLBuffer *);
	virtual void glBindFragDataLocation(Scaleform::Render::GL::HALGLProgram *, unsigned long, const char *);
	virtual void glBindFramebuffer(unsigned long, Scaleform::Render::GL::HALGLFramebuffer *);
	virtual void glBindProgramPipeline(Scaleform::Render::GL::HALGLProgramPipeline *);
	virtual void glBindRenderbuffer(unsigned long, Scaleform::Render::GL::HALGLRenderbuffer *);
	virtual void glBindTexture(unsigned long, Scaleform::Render::GL::HALGLTexture *);
	virtual void glBindVertexArray(Scaleform::Render::GL::HALGLVertexArray *);
	virtual void glBlendEquation(unsigned long);
	virtual void glBlendEquationSeparate(unsigned long, unsigned long);
	virtual void glBlendFunc(unsigned long, unsigned long);
	virtual void glBlendFuncSeparate(unsigned long, unsigned long, unsigned long, unsigned long);
	virtual void glBufferData(unsigned long, long long, const void *, unsigned long);
	virtual void glBufferSubData(unsigned long, long long, long long, const void *);
	virtual unsigned long glCheckFramebufferStatus(unsigned long);
	virtual void glClear(unsigned long);
	virtual void glClearColor(float, float, float, float);
	virtual unsigned long glClientWaitSync(__GLsync *, unsigned long, unsigned long long);
	virtual void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);
	virtual void glCompileShader(Scaleform::Render::GL::HALGLShader *);
	virtual void glCompressedTexImage2D(unsigned long, long, unsigned long, long, long, long, long, const void *);
	virtual void glCreateProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual void glCreateShader(unsigned long, Scaleform::Render::GL::HALGLShader *);
	virtual void glDebugMessageCallback(void(*)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void *);
	virtual void glDebugMessageControl(unsigned long, unsigned long, unsigned long, long, const unsigned long *, unsigned char);
	virtual void glDeleteBuffers(long, Scaleform::Render::GL::HALGLBuffer * *);
	virtual void glDeleteFramebuffers(long, Scaleform::Render::GL::HALGLFramebuffer * *);
	virtual void glDeleteProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual void glDeleteProgramPipelines(long, Scaleform::Render::GL::HALGLProgramPipeline * *);
	virtual void glDeleteRenderbuffers(long, Scaleform::Render::GL::HALGLRenderbuffer * *);
	virtual void glDeleteShader(Scaleform::Render::GL::HALGLShader *);
	virtual void glDeleteSync(__GLsync *);
	virtual void glDeleteTextures(long, Scaleform::Render::GL::HALGLTexture * *);
	virtual void glDeleteVertexArrays(long, Scaleform::Render::GL::HALGLVertexArray * *);
	virtual void glDepthFunc(unsigned long);
	virtual void glDepthMask(unsigned char);
	virtual void glDisable(unsigned long);
	virtual void glDisableVertexAttribArray(unsigned long);
	virtual void glDrawArrays(unsigned long, long, long);
	virtual void glDrawElements(unsigned long, long, unsigned long, const void *);
	virtual void glDrawElementsInstanced(unsigned long, long, unsigned long, const void *, long);
	virtual void glEnable(unsigned long);
	virtual void glEnableVertexAttribArray(unsigned long);
	virtual __GLsync * glFenceSync(unsigned long, unsigned long);
	virtual void glFlush();
	virtual void glFlushMappedBufferRange(unsigned long, long long, long long);
	virtual void glFramebufferRenderbuffer(unsigned long, unsigned long, unsigned long, Scaleform::Render::GL::HALGLRenderbuffer *);
	virtual void glFramebufferTexture2D(unsigned long, unsigned long, unsigned long, Scaleform::Render::GL::HALGLTexture *, long);
	virtual void glGenBuffers(long, Scaleform::Render::GL::HALGLBuffer * *);
	virtual void glGenFramebuffers(long, Scaleform::Render::GL::HALGLFramebuffer * *);
	virtual void glGenProgramPipelines(long, Scaleform::Render::GL::HALGLProgramPipeline * *);
	virtual void glGenRenderbuffers(long, Scaleform::Render::GL::HALGLRenderbuffer * *);
	virtual void glGenTextures(long, Scaleform::Render::GL::HALGLTexture * *);
	virtual void glGenVertexArrays(long, Scaleform::Render::GL::HALGLVertexArray * *);
	virtual void glGenerateMipmap(unsigned long);
	virtual void glGetActiveUniform(unsigned long, unsigned long, long, long *, long *, unsigned long *, char *);
	virtual unsigned long glGetError();
	virtual void glGetFloatv(unsigned long, float *);
	virtual long glGetFragDataLocation(Scaleform::Render::GL::HALGLProgram *, const char *);
	virtual void glGetFramebufferAttachmentParameteriv(unsigned long, unsigned long, unsigned long, long *);
	virtual void glGetIntegerv(unsigned long, long *);
	virtual void glGetProgramBinary(Scaleform::Render::GL::HALGLProgram *, long, long *, unsigned long *, void *);
	virtual void glGetProgramInfoLog(Scaleform::Render::GL::HALGLProgram *, long, long *, char *);
	virtual void glGetProgramiv(Scaleform::Render::GL::HALGLProgram *, unsigned long, long *);
	virtual void glGetRenderbufferParameteriv(unsigned long, unsigned long, long *);
	virtual void glGetShaderInfoLog(Scaleform::Render::GL::HALGLShader *, long, long *, char *);
	virtual void glGetShaderiv(Scaleform::Render::GL::HALGLShader *, unsigned long, long *);
	virtual const unsigned char * glGetString(unsigned long);
	virtual const unsigned char * glGetStringi(unsigned long, unsigned long);
	virtual void glGetSynciv(__GLsync *, unsigned long, long, long *, long *);
	virtual void glGetTexImage(unsigned long, long, unsigned long, unsigned long, void *);
	virtual void glGetTexLevelParameteriv(unsigned long, long, unsigned long, long *);
	virtual void glGetTexParameteriv(unsigned long, unsigned long, long *);
	virtual void glGetUniformLocation(Scaleform::Render::GL::HALGLProgram *, const char *, Scaleform::Render::GL::HALGLUniformLocation *);
	virtual unsigned char glIsFramebuffer(Scaleform::Render::GL::HALGLFramebuffer *);
	virtual unsigned char glIsProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual unsigned char glIsRenderbuffer(Scaleform::Render::GL::HALGLRenderbuffer *);
	virtual void glLinkProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual void * glMapBuffer(unsigned long, unsigned long);
	virtual void * glMapBufferRange(unsigned long, long long, long long, unsigned long);
	virtual void glPixelStorei(unsigned long, long);
	virtual void glPolygonMode(unsigned long, unsigned long);
	virtual void glPopGroupMarker();
	virtual void glProgramBinary(Scaleform::Render::GL::HALGLProgram *, unsigned long, const void *, long);
	virtual void glProgramParameteri(Scaleform::Render::GL::HALGLProgram *, unsigned long, long);
	virtual void glProgramUniform1fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glProgramUniform1iv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const long *);
	virtual void glProgramUniform2fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glProgramUniform3fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glProgramUniform4fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glProgramUniformMatrix4fv(Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLUniformLocation *, long, unsigned char, const float *);
	virtual void glPushGroupMarker(long, const char *);
	virtual void glReadPixels(long, long, long, long, unsigned long, unsigned long, void *);
	virtual void glReleaseShaderCompiler();
	virtual void glRenderbufferStorage(unsigned long, unsigned long, long, long);
	virtual void glScissor(long, long, long, long);
	virtual void glShaderSource(Scaleform::Render::GL::HALGLShader *, long, const char * *, const long *);
	virtual void glStencilFunc(unsigned long, long, unsigned long);
	virtual void glStencilMask(unsigned long);
	virtual void glStencilOp(unsigned long, unsigned long, unsigned long);
	virtual void glStringMarker(long, const void *);
	virtual void glTexImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	virtual void glTexParameteri(unsigned long, unsigned long, long);
	virtual void glTexSubImage2D(unsigned long, long, long, long, long, long, unsigned long, unsigned long, const void *);
	virtual void glUniform1f(Scaleform::Render::GL::HALGLUniformLocation *, float);
	virtual void glUniform1fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glUniform1i(Scaleform::Render::GL::HALGLUniformLocation *, long);
	virtual void glUniform1iv(Scaleform::Render::GL::HALGLUniformLocation *, long, const long *);
	virtual void glUniform2f(Scaleform::Render::GL::HALGLUniformLocation *, float, float);
	virtual void glUniform2fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glUniform3fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glUniform4fv(Scaleform::Render::GL::HALGLUniformLocation *, long, const float *);
	virtual void glUniformMatrix4fv(Scaleform::Render::GL::HALGLUniformLocation *, long, unsigned char, const float *);
	virtual unsigned char glUnmapBuffer(unsigned long);
	virtual void glUseProgram(Scaleform::Render::GL::HALGLProgram *);
	virtual void glUseProgramStages(Scaleform::Render::GL::HALGLProgramPipeline *, unsigned long, Scaleform::Render::GL::HALGLProgram *);
	virtual void glVertexAttribPointer(unsigned long, long, unsigned long, unsigned char, long, const void *);
	virtual void glViewport(long, long, long, long);
protected:
	void executeCommand(unsigned long, Scaleform::Render::GL::GraphicsDevice &);
public:
	virtual ~GraphicsDeviceRecorder();
	Scaleform::Render::GL::GraphicsDeviceRecorder & operator=(Scaleform::Render::GL::GraphicsDeviceRecorder &);
	Scaleform::Render::GL::GraphicsDeviceRecorder & operator=(const Scaleform::Render::GL::GraphicsDeviceRecorder &);
};
bool Scaleform::Render::GL::GraphicsDeviceRecorder::IsDeferred(); // 0x1400B8180