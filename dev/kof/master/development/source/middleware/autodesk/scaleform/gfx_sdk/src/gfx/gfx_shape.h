#pragma once

class Scaleform::GFx::PathAllocator :
	Scaleform::NewOverrideBase<258>
{
	struct Page;
private:
	Scaleform::GFx::PathAllocator::Page * pFirstPage; // 0x0
	Scaleform::GFx::PathAllocator::Page * pLastPage; // 0x8
	unsigned short FreeBytes; // 0x10
	unsigned short DefaultPageSize; // 0x12
	enum <unnamed-enum-Default_PageBufferSize>
	{
		Default_PageBufferSize = 8192,
	};
public:
	PathAllocator(unsigned long);
	~PathAllocator();
	void Clear();
	unsigned char * AllocPath(unsigned long, unsigned long, unsigned long);
	unsigned char * AllocRawPath(unsigned long);
	unsigned char * AllocMemoryBlock(unsigned long, unsigned long);
	bool ReallocLastBlock(unsigned char *, unsigned long, unsigned long);
	void SetDefaultPageSize(unsigned long);
	static unsigned short GetPageOffset(const void *, const unsigned char *);
	unsigned short GetPageOffset(const unsigned char *);
	static const void * GetPagePtr(const unsigned char *, unsigned short);
	static bool IsInPage(const void *, const unsigned char *);
	static const void * GetNextPage(const void *, const unsigned char * *);
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::PathAllocator::Page
{
	Scaleform::GFx::PathAllocator::Page * pNext; // 0x0
	unsigned long PageSize; // 0x8
	const unsigned char * GetBufferPtr(unsigned long);
	const unsigned char * GetBufferPtr();
	unsigned char * GetBufferPtr(unsigned long);
	unsigned char * GetBufferPtr();
};
class Scaleform::GFx::ShapeBaseCharacterDef :
	Scaleform::GFx::CharacterDef
{
public:
	ShapeBaseCharacterDef(const Scaleform::GFx::ShapeBaseCharacterDef &);
	ShapeBaseCharacterDef();
	virtual ~ShapeBaseCharacterDef();
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	Scaleform::Render::Rect<float> GetBoundsLocal(float) = 0;
	Scaleform::Render::Rect<float> GetRectBoundsLocal(float) = 0;
	unsigned long ComputeGeometryHash();
	bool IsEqualGeometry(const Scaleform::GFx::ShapeBaseCharacterDef &);
	virtual unsigned long GetResourceTypeCode();
	Scaleform::Render::ShapeDataInterface * GetShape();
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> BindResourcesInStyles(const Scaleform::GFx::ResourceBinding &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> CreateTreeShape(Scaleform::Render::ContextImpl::Context &, Scaleform::GFx::MovieDefImpl *);
	bool NeedsResolving();
protected:
	Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> pShapeMeshProvider; // 0x20
public:
	Scaleform::GFx::ShapeBaseCharacterDef & operator=(const Scaleform::GFx::ShapeBaseCharacterDef &);
};
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::ShapeBaseCharacterDef::GetType(); // 0x1400482A0
unsigned long Scaleform::GFx::ShapeBaseCharacterDef::GetResourceTypeCode(); // 0x1403E0620
Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> Scaleform::GFx::ShapeBaseCharacterDef::BindResourcesInStyles(const Scaleform::GFx::ResourceBinding & __formal); // 0x1403DFE40
class Scaleform::Ptr<Scaleform::Render::TreeNode>
{
protected:
	Scaleform::Render::TreeNode * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeNode>(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode *);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Ptr<Scaleform::Render::TreeNode> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode &);
	Ptr<Scaleform::Render::TreeNode>();
	~Ptr<Scaleform::Render::TreeNode>();
	bool operator==(Scaleform::Render::TreeNode *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	bool operator!=(Scaleform::Render::TreeNode *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Render::TreeNode &);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Render::TreeNode *);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Render::TreeNode &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Render::TreeNode *);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeNode * & GetRawRef();
	Scaleform::Render::TreeNode * GetPtr();
	Scaleform::Render::TreeNode & operator*();
	Scaleform::Render::TreeNode * operator->();
	Scaleform::Render::TreeNode * operator class Scaleform::Render::TreeNode *();
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Render::TreeNode *);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Ptr<Scaleform::Render::TreeNode> &);
};
bool Scaleform::GFx::ImageShapeCharacterDef::IsEqualGeometry(const Scaleform::GFx::ShapeBaseCharacterDef & __formal); // 0x14004BBE0