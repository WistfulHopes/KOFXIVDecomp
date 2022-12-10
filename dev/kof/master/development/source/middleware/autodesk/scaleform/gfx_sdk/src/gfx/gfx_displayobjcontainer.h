#pragma once

class Scaleform::GFx::AvmDisplayObjContainerBase :
	Scaleform::GFx::AvmInteractiveObjBase
{
	struct TopMostDescr;
	enum TopMostResult
	{
		TopMost_Found = 1,
		TopMost_FoundNothing = 2,
		TopMost_Continue = 3,
	};
public:
	Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	void FillTabableArray(Scaleform::GFx::InteractiveObject::FillTabableParams *);
	AvmDisplayObjContainerBase(Scaleform::GFx::AvmDisplayObjContainerBase &);
	AvmDisplayObjContainerBase(const Scaleform::GFx::AvmDisplayObjContainerBase &);
	AvmDisplayObjContainerBase();
	virtual ~AvmDisplayObjContainerBase();
	Scaleform::GFx::AvmDisplayObjContainerBase & operator=(Scaleform::GFx::AvmDisplayObjContainerBase &);
	Scaleform::GFx::AvmDisplayObjContainerBase & operator=(const Scaleform::GFx::AvmDisplayObjContainerBase &);
};
class Scaleform::GFx::DisplayObjContainer :
	Scaleform::GFx::InteractiveObject
{
protected:
	Scaleform::GFx::DisplayList mDisplayList; // 0xD8
	Scaleform::GFx::MovieDefRootNode * pRootNode; // 0x108
public:
	DisplayObjContainer(const Scaleform::GFx::DisplayObjContainer &);
	DisplayObjContainer(Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~DisplayObjContainer();
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
	virtual void PropagateScale9GridExists();
	virtual void SetScale9Grid(const Scaleform::Render::Rect<float> &);
	virtual Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::GFx::FontManager * GetFontManager();
	Scaleform::GFx::DisplayObjectBase * AddDisplayObject(const Scaleform::GFx::CharPosInfo &, const Scaleform::GFx::ASString &, const Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> *, const void *, unsigned long, unsigned long, Scaleform::GFx::CharacterCreateInfo *, Scaleform::GFx::InteractiveObject *);
	virtual void SetStateChangeFlags(unsigned char);
	void ClearDisplayList();
	bool Contains(Scaleform::GFx::DisplayObjectBase *);
	void ExecuteImportedInitActions(Scaleform::GFx::MovieDef *);
	virtual void ForceShutdown();
	Scaleform::GFx::Sprite * GetHitArea();
	Scaleform::GFx::Sprite * GetHitAreaHolder();
	Scaleform::GFx::DisplayObjectBase * GetCharacterAtDepth(long, bool *);
	Scaleform::GFx::DisplayObjectBase * GetCharacterAtDepth(long);
	Scaleform::GFx::DisplayObjectBase * GetChildAt(unsigned long);
	Scaleform::GFx::DisplayObjectBase * GetChildByName(const Scaleform::GFx::ASString &);
	long long GetChildIndex(Scaleform::GFx::DisplayObjectBase *);
	Scaleform::GFx::ResourceId GetIdAtDepth(long);
	long GetLargestDepthInUse();
	unsigned long GetNumChildren();
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostMouseEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *);
	void OnInsertionAsLevel(long);
	void MoveDisplayObject(const Scaleform::GFx::CharPosInfo &);
	void CreateAndReplaceDisplayObject(const Scaleform::GFx::CharPosInfo &, const Scaleform::GFx::ASString &, Scaleform::GFx::DisplayObjectBase * *);
	virtual bool PointTestLocal(const Scaleform::Render::Point<float> &, unsigned char);
	virtual void PropagateMouseEvent(const Scaleform::GFx::EventId &);
	virtual void PropagateKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual void PropagateFocusGroupMask(unsigned long);
	void ReplaceDisplayObject(const Scaleform::GFx::CharPosInfo &, Scaleform::GFx::DisplayObjectBase *, const Scaleform::GFx::ASString &);
	virtual void RemoveDisplayObject(Scaleform::GFx::DisplayObjectBase *);
	void RemoveDisplayObject();
	void RemoveDisplayObject(long, Scaleform::GFx::ResourceId);
	void VisitChildren(Scaleform::GFx::DisplayList::MemberVisitor *);
	const Scaleform::GFx::DisplayList & GetDisplayList();
	Scaleform::GFx::DisplayList & GetDisplayList();
	void GetChildDescTree(Scaleform::AmpMovieObjectDesc *, Scaleform::MemoryHeap *);
	void FillTabableArray(Scaleform::GFx::InteractiveObject::FillTabableParams *);
	void DumpDisplayList(long, const char *);
	void CalcDisplayListHitTestMaskArray(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::Render::Point<float> &, bool);
	Scaleform::GFx::MovieDefRootNode * FindRootNode();
	virtual bool Has3D();
	virtual void UpdateViewAndPerspective();
protected:
	void AssignRootNode(bool);
private:
	Scaleform::MemoryHeap * GetMovieHeap();
	Scaleform::GFx::AvmDisplayObjContainerBase * GetAvmDispContainer();
public:
	Scaleform::GFx::DisplayObjContainer & operator=(const Scaleform::GFx::DisplayObjContainer &);
};
Scaleform::Render::Rect<float> Scaleform::GFx::DisplayObjContainer::GetBounds(const Scaleform::Render::Matrix2x4<float> & t); // 0x140349150
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::DisplayObjContainer::AddDisplayObject(const Scaleform::GFx::CharPosInfo & pos, const Scaleform::GFx::ASString & name, const Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * peventHandlers, const void * pinitSource, unsigned long createFrame, unsigned long addFlags, Scaleform::GFx::CharacterCreateInfo * pcharCreateOverride, Scaleform::GFx::InteractiveObject * origChar); // 0x1400470F0
Scaleform::Render::Rect<float> Scaleform::GFx::DisplayObjContainer::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & t); // 0x140349370
void Scaleform::GFx::DisplayObjContainer::ExecuteImportedInitActions(Scaleform::GFx::MovieDef * __formal); // 0x14002E7C0