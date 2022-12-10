
Scaleform::GFx::AS3::AvmDisplayObj::AvmDisplayObj(Scaleform::GFx::DisplayObject * pdispObj); // 0x14044E290
Scaleform::GFx::AS3::AvmDisplayObj::~AvmDisplayObj(); // 0x140454290
void Scaleform::GFx::AS3::AvmDisplayObj::ForceShutdown(); // 0x140480D90
void Scaleform::GFx::AS3::AvmButton::OnEventLoad(); // 0x140495CA0
bool Scaleform::GFx::AS3::AvmDisplayObj::OnUnloading(bool m); // 0x1404976A0
void Scaleform::GFx::AS3::AvmDisplayObj::OnEventUnload(); // 0x140495E10
bool Scaleform::GFx::AS3::AvmDisplayObjContainer::ActsAsButton(); // 0x14004BBE0
void Scaleform::GFx::AS3::AvmDisplayObj::PropagateEvent(const Scaleform::GFx::AS3::Instances::fl_events::Event & evtProto, bool __formal); // 0x14049CF80
Scaleform::GFx::AS3::ASVM * Scaleform::GFx::AS3::AvmDisplayObj::GetAVM(); // 0x140483090
void Scaleform::GFx::AS3::AvmDisplayObj::FireEvent(const Scaleform::GFx::EventId & id); // 0x14047F450
void Scaleform::GFx::AS3::AvmDisplayObj::OnAdded(bool byTimeline); // 0x140494F50
void Scaleform::GFx::AS3::AvmDisplayObj::OnRemoved(bool byTimeline); // 0x140497440
bool Scaleform::GFx::AS3::AvmDisplayObj::OnEvent(const Scaleform::GFx::EventId & id); // 0x140495580
void Scaleform::GFx::AS3::AvmDisplayObj::OnDetachFromTimeline(); // 0x140495270
void Scaleform::GFx::AS3::AvmDisplayObj::AssignAS3Obj(Scaleform::GFx::AS3::Instances::fl_display::DisplayObject * pas3obj); // 0x140461370
const char * Scaleform::GFx::AS3::AvmDisplayObj::GetAbsolutePath(Scaleform::String * ppath); // 0x1404831A0
Scaleform::GFx::AS3::MovieRoot * Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Root(); // 0x140482540
Scaleform::String & Scaleform::GFx::AS3::AvmDisplayObj::GetASClassName(Scaleform::String * className); // 0x140482580
unsigned long Scaleform::GFx::AS3::AvmDisplayObj::CreateASInstance(bool execute); // 0x140469BD0
bool Scaleform::GFx::AS3::AvmDisplayObj::CreateASInstanceNoCtor(); // 0x140469C20
unsigned long Scaleform::GFx::AS3::AvmDisplayObj::CallCtor(bool execute); // 0x1404644F0
Scaleform::MemoryHeap * Scaleform::GFx::AS3::AvmDisplayObj::GetHeap(); // 0x140486680
Scaleform::GFx::DisplayObject * Scaleform::GFx::AS3::AvmDisplayObj::GetRoot(); // 0x140489710
Scaleform::GFx::AS3::Stage * Scaleform::GFx::AS3::AvmDisplayObj::GetStage(); // 0x14048AE60
bool Scaleform::GFx::AS3::AvmDisplayObj::IsStageAccessible(); // 0x1404903E0
Scaleform::GFx::AS3::AvmInteractiveObj * Scaleform::GFx::AS3::AvmDisplayObj::GetAvmParent(); // 0x1404837C0
Scaleform::GFx::AS3::Instances::fl_display::DisplayObject * Scaleform::GFx::AS3::AvmDisplayObj::GetAS3Parent(); // 0x1404824C0
void Scaleform::GFx::AS3::AvmDisplayObj::InitClassName(const char * className); // 0x14048D510
void Scaleform::GFx::AS3::AvmDisplayObj::SetAppDomain(Scaleform::GFx::AS3::VMAppDomain & appDomain); // 0x1404A7C20
bool Scaleform::GFx::AS3::AvmDisplayObj::GetObjectsUnderPoint(Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> * destArray, const Scaleform::Render::Point<float> & pt); // 0x140487B00
Scaleform::GFx::AS3::ShapeObject::ShapeObject(Scaleform::GFx::CharacterDef * pdef, Scaleform::GFx::ASMovieRootBase * pasRoot, Scaleform::GFx::InteractiveObject * pparent, Scaleform::GFx::ResourceId id); // 0x140451130
Scaleform::GFx::AS3::ShapeObject::~ShapeObject(); // 0x140455440
Scaleform::GFx::DrawingContext * Scaleform::GFx::AS3::ShapeObject::GetDrawingContext(); // 0x140485B60
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::AS3::ShapeObject::GetTopMostMouseEntity(const Scaleform::Render::Point<float> & pt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr); // 0x14048B8C0
bool Scaleform::GFx::AS3::ShapeObject::PointTestLocal(const Scaleform::Render::Point<float> & pt, unsigned char hitTestMask); // 0x14049AB20
Scaleform::Render::Rect<float> Scaleform::GFx::AS3::ShapeObject::GetBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x140483AD0
Scaleform::Ptr<Scaleform::Render::TreeNode> Scaleform::GFx::AS3::ShapeObject::CreateRenderNode(Scaleform::Render::ContextImpl::Context & context); // 0x14046B470
float Scaleform::GFx::AS3::ShapeObject::GetRatio(); // 0x1404892F0
void Scaleform::GFx::AS3::ShapeObject::SetRatio(float f); // 0x1404A9310