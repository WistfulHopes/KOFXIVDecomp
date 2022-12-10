
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::AS3::AvmDisplayObjContainer::GetTopMostEntity(const Scaleform::Render::Point<float> & localPt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & hitTest); // 0x14048B3E0
void Scaleform::GFx::AS3::AvmDisplayObjContainer::FillTabableArray(Scaleform::GFx::InteractiveObject::FillTabableParams * params); // 0x14047CC80
bool Scaleform::GFx::AS3::AvmDisplayObjContainer::DetachChild(Scaleform::GFx::DisplayObjectBase * ch); // 0x140471BE0
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::AS3::AvmDisplayObjContainer::RemoveChild(Scaleform::GFx::DisplayObjectBase * ch); // 0x1404A1920
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::AS3::AvmDisplayObjContainer::RemoveChildAt(unsigned long index); // 0x1404A1B70
bool Scaleform::GFx::AS3::AvmDisplayObjContainer::SetChildIndex(Scaleform::GFx::DisplayObjectBase * ch, unsigned long index); // 0x1404A7FD0
bool Scaleform::GFx::AS3::AvmDisplayObjContainer::SwapChildren(Scaleform::GFx::DisplayObjectBase * ch1, Scaleform::GFx::DisplayObjectBase * ch2); // 0x1404AEE40
bool Scaleform::GFx::AS3::AvmDisplayObjContainer::SwapChildrenAt(unsigned long i1, unsigned long i2); // 0x1404AEEA0
void Scaleform::GFx::AS3::AvmDisplayObjContainer::AddChild(Scaleform::GFx::DisplayObjectBase * ch); // 0x14045C050
void Scaleform::GFx::AS3::AvmDisplayObjContainer::AddChildAt(Scaleform::GFx::DisplayObjectBase * ch, unsigned long index); // 0x14045C280
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::DisplayObject> Scaleform::GFx::AS3::AvmDisplayObjContainer::GetAS3ChildAt(unsigned long index); // 0x1404823B0
Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl_display::DisplayObject> Scaleform::GFx::AS3::AvmDisplayObjContainer::GetAS3ChildByName(const Scaleform::GFx::ASString & name); // 0x140482430
Scaleform::GFx::InteractiveObject * Scaleform::GFx::AS3::AvmDisplayObjContainer::FindInsertToPlayList(Scaleform::GFx::InteractiveObject * ch); // 0x14047DDD0
void Scaleform::GFx::AS3::AvmDisplayObjContainer::PropagateEvent(const Scaleform::GFx::AS3::Instances::fl_events::Event & evtProto, bool inclChildren); // 0x14049D010
bool Scaleform::GFx::AS3::AvmDisplayObjContainer::GetObjectsUnderPoint(Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> * destArray, const Scaleform::Render::Point<float> & pt); // 0x140487B80