
Scaleform::GFx::AS3::AvmSprite::AvmSprite(Scaleform::GFx::Sprite * psprite); // 0x14044E410
Scaleform::GFx::AS3::AvmSprite::~AvmSprite(); // 0x140454370
bool Scaleform::GFx::AS3::AvmSprite::IsLevelMovie(); // 0x14048FBF0
void Scaleform::GFx::AS3::AvmSprite::ForceShutdown(); // 0x140480DF0
bool Scaleform::GFx::AS3::AvmSprite::MustBeInPlaylist(); // 0x140494170
void Scaleform::GFx::AS3::AvmSprite::CreateChildren(); // 0x14046ACC0
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::AS3::AvmSprite::AddDisplayObject(const Scaleform::GFx::CharPosInfo & pos, const Scaleform::GFx::ASString & name, const Scaleform::ArrayLH<Scaleform::GFx::SwfEvent *,260,Scaleform::ArrayDefaultPolicy> * __formal, const void * __formal, unsigned long createFrame, unsigned long addFlags, Scaleform::GFx::CharacterCreateInfo * pcharCreateOverride, Scaleform::GFx::InteractiveObject * origChar); // 0x14045C560
void Scaleform::GFx::AS3::AvmSprite::QueueFrameScript(unsigned long frame); // 0x14049FD20
void Scaleform::GFx::AS3::AvmSprite::ExecuteFrameTags(unsigned long frame); // 0x14047A6C0
void Scaleform::GFx::AS3::AvmSprite::AdvanceFrame(bool nextFrame, float framePos); // 0x1404602D0
bool Scaleform::GFx::AS3::AvmSprite::OnEvent(const Scaleform::GFx::EventId & id); // 0x140495A30
bool Scaleform::GFx::AS3::AvmSprite::ActsAsButton(); // 0x14045A760
bool Scaleform::GFx::AS3::AvmSprite::IsFocusEnabled(Scaleform::GFx::FocusMovedType fmt); // 0x14048FB20
unsigned long Scaleform::GFx::AS3::AvmSprite::GetCursorType(); // 0x140484D30
void Scaleform::GFx::AS3::AvmSprite::ExecuteInitActionFrameTags(unsigned long frame); // 0x14047A710
bool Scaleform::GFx::AS3::AvmSprite::IsTabable(); // 0x1404905A0
bool Scaleform::GFx::AS3::AvmSprite::GetObjectsUnderPoint(Scaleform::ArrayDH<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase>,2,Scaleform::ArrayDefaultPolicy> * destArray, const Scaleform::Render::Point<float> & pt); // 0x140487F70