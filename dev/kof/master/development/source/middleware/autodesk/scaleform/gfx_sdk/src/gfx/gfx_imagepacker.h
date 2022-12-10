#pragma once

class Scaleform::GFx::ImagePacker :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::ImagePacker,2>
{
public:
	void SetBindData(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	void AddImageFromResource(Scaleform::GFx::ImageResource *, const char *);
	void AddResource(Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ImageResource *);
	Scaleform::GFx::ResourceDataNode * GetResourceDataNode(Scaleform::GFx::Resource *);
	void Finish();
	ImagePacker(Scaleform::GFx::ImagePacker &);
	ImagePacker(const Scaleform::GFx::ImagePacker &);
	ImagePacker();
	virtual ~ImagePacker();
	Scaleform::GFx::ImagePacker & operator=(Scaleform::GFx::ImagePacker &);
	Scaleform::GFx::ImagePacker & operator=(const Scaleform::GFx::ImagePacker &);
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::ImagePacker,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::ImagePacker,2>(Scaleform::RefCountBaseNTS<Scaleform::GFx::ImagePacker,2> &);
	RefCountBaseNTS<Scaleform::GFx::ImagePacker,2>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::ImagePacker,2> &);
	RefCountBaseNTS<Scaleform::GFx::ImagePacker,2>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::ImagePacker,2>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::ImagePacker,2> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::ImagePacker,2> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::ImagePacker,2> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::ImagePacker,2> &);
};
class Scaleform::GFx::ImagePackerImpl :
	Scaleform::GFx::ImagePacker
{
	struct InputImage;
private:
	Scaleform::HashLH<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,2,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >::NodeHashF> > InputResources; // 0x10
	Scaleform::ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy> InputImages; // 0x18
	const Scaleform::GFx::ImagePackParams * pImpl; // 0x30
	Scaleform::GFx::ResourceId * pIdGen; // 0x38
	Scaleform::Render::RectPacker Packer; // 0x40
	Scaleform::GFx::ImageCreator * pImageCreator; // 0x120
	Scaleform::GFx::ImageCreateInfo mImageCreateInfo; // 0x128
	Scaleform::GFx::MovieDefImpl::BindTaskData * pBindData; // 0x160
	void CopyImage(Scaleform::Render::ImageFormat, Scaleform::Render::ImagePlane *, const Scaleform::Render::ImagePlane *, Scaleform::Render::RectPacker::RectType);
public:
	ImagePackerImpl(const Scaleform::GFx::ImagePackParams *, Scaleform::GFx::ResourceId *, Scaleform::GFx::ImageCreator *, Scaleform::GFx::ImageCreateInfo *);
	virtual void SetBindData(Scaleform::GFx::MovieDefImpl::BindTaskData *);
	virtual void AddImageFromResource(Scaleform::GFx::ImageResource *, const char *);
	virtual void AddResource(Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ImageResource *);
	virtual Scaleform::GFx::ResourceDataNode * GetResourceDataNode(Scaleform::GFx::Resource *);
	virtual void Finish();
	virtual ~ImagePackerImpl();
};
struct Scaleform::GFx::ImagePackerImpl::InputImage
{
	Scaleform::GFx::ResourceDataNode * pResNode; // 0x0
	Scaleform::Render::ImageBase * pImage; // 0x8
	Scaleform::Ptr<Scaleform::Render::RawImage> pRawImage; // 0x10
	InputImage(Scaleform::GFx::ImagePackerImpl::InputImage &);
	InputImage(const Scaleform::GFx::ImagePackerImpl::InputImage &);
	InputImage();
	~InputImage();
	Scaleform::GFx::ImagePackerImpl::InputImage & operator=(Scaleform::GFx::ImagePackerImpl::InputImage &);
	Scaleform::GFx::ImagePackerImpl::InputImage & operator=(const Scaleform::GFx::ImagePackerImpl::InputImage &);
};
class Scaleform::HashLH<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,2,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,Scaleform::AllocatorLH<Scaleform::GFx::Resource *,2>,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,2,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource (const Scaleform::HashLH<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,2,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >::NodeHashF> > &);
	HashLH<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,2,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource (long);
	HashLH<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,2,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource ();
	~HashLH<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,2,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource();
	void operator=(const Scaleform::HashLH<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *>,2,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >,Scaleform::HashNode<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceDataNode *,Scaleform::FixedSizeHash<Scaleform::GFx::Resource *> >::NodeHashF> > &);
};
class Scaleform::ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::ImagePackerImpl::InputImage,Scaleform::AllocatorLH<Scaleform::GFx::ImagePackerImpl::InputImage,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::ImagePackerImpl::InputImage,2,Scaleform::ArrayDefaultPolicy>();
};