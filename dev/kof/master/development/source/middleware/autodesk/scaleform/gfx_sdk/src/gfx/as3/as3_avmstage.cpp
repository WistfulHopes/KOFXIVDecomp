
class Scaleform::GFx::AS3::FrameCounter :
	Scaleform::GFx::InteractiveObject
{
private:
	Scaleform::Ptr<Scaleform::GFx::DisplayObjContainer> pRoot; // 0xD8
public:
	FrameCounter(const Scaleform::GFx::AS3::FrameCounter &);
	FrameCounter(Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~FrameCounter();
	virtual long CheckAdvanceStatus(bool);
	virtual void AdvanceFrame(bool, float);
	virtual unsigned long GetLoadingFrame();
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
	Scaleform::GFx::DisplayObjContainer * GetRoot();
	void SetRoot(Scaleform::GFx::DisplayObjContainer *);
	virtual void ForceShutdown();
	void AddScriptableMovieClip(Scaleform::GFx::Sprite *);
	void QueueFrameActions();
protected:
	void AddChildsFrameExecutionSnapshot(Scaleform::GFx::DisplayObjContainer *);
public:
	Scaleform::GFx::AS3::FrameCounter & operator=(const Scaleform::GFx::AS3::FrameCounter &);
};
void Scaleform::GFx::AS3::FrameCounter::AdvanceFrame(bool nextFrame, float framePos); // 0x1404603D0
void Scaleform::GFx::AS3::FrameCounter::QueueFrameActions(); // 0x14049FBE0
Scaleform::GFx::AS3::Stage::Stage(Scaleform::GFx::MovieDefImpl * pbindingDefImpl, Scaleform::GFx::ASMovieRootBase * pasRoot, Scaleform::GFx::InteractiveObject * pparent, Scaleform::GFx::ResourceId id); // 0x140451290
void Scaleform::GFx::AS3::Stage::OnInsertionAsLevel(long level); // 0x140496950
void Scaleform::GFx::AS3::Stage::ForceShutdown(); // 0x140480E70
void Scaleform::GFx::AS3::Stage::ExecuteFrame0Events(); // 0x14047A190
void Scaleform::GFx::AS3::Stage::PropagateMouseEvent(const Scaleform::GFx::EventId & id); // 0x14049D120
Scaleform::GFx::ASString Scaleform::GFx::AS3::Stage::CreateNewInstanceName(); // 0x14046AF60
void Scaleform::GFx::AS3::Stage::SetOrientation(const Scaleform::GFx::ASString & newOrient); // 0x1404A8D10
unsigned long Scaleform::GFx::AS3::Stage::GetCurrentFrame(); // 0x140484CF0
bool Scaleform::GFx::AS3::Stage::GetLabeledFrame(const char * plabel, unsigned long * frameNumber, bool translateNumbers); // 0x140486BD0
const Scaleform::String * Scaleform::GFx::AS3::Stage::GetFrameLabel(unsigned long fr, unsigned long * pdestfr); // 0x140486000
void Scaleform::GFx::AS3::Stage::GotoFrame(unsigned long targetFrameNumber); // 0x14048CD70
void Scaleform::GFx::AS3::AvmDisplayObjContainer::OnEventUnload(); // 0x140496120
bool Scaleform::GFx::AS3::AvmStage::OnEvent(const Scaleform::GFx::EventId & id); // 0x140495C10