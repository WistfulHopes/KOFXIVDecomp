
Scaleform::GFx::AS3::AvmBitmap::AvmBitmap(Scaleform::GFx::ASMovieRootBase * pasRoot, const Scaleform::GFx::CharacterCreateInfo & ccinfo, Scaleform::GFx::InteractiveObject * pparent, Scaleform::GFx::ResourceId id); // 0x14044E0E0
Scaleform::GFx::AS3::AvmBitmap::~AvmBitmap(); // 0x140454200
unsigned long Scaleform::GFx::AS3::AvmBitmap::CreateASInstance(bool execute); // 0x140469680
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::AS3::AvmBitmap::GetTopMostMouseEntity(const Scaleform::Render::Point<float> & pt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr); // 0x14048B740
bool Scaleform::GFx::AS3::AvmBitmap::PointTestLocal(const Scaleform::Render::Point<float> & pt, unsigned char hitTestMask); // 0x14049AA60
Scaleform::Render::Rect<float> Scaleform::GFx::AS3::AvmBitmap::GetBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x140483920
Scaleform::Render::TreeNode * Scaleform::GFx::AS3::AvmBitmap::RecreateRenderNode(); // 0x1404A06E0
Scaleform::Ptr<Scaleform::Render::TreeNode> Scaleform::GFx::AS3::AvmBitmap::CreateRenderNode(Scaleform::Render::ContextImpl::Context & context); // 0x14046B380
bool Scaleform::GFx::AS3::AvmBitmap::CreateBitmapShape(); // 0x14046A0F0
class Scaleform::Ptr<Scaleform::Render::ShapeDataFloat>
{
protected:
	Scaleform::Render::ShapeDataFloat * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShapeDataFloat>(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat *);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat &);
	Ptr<Scaleform::Render::ShapeDataFloat>();
	~Ptr<Scaleform::Render::ShapeDataFloat>();
	bool operator==(Scaleform::Render::ShapeDataFloat *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	bool operator!=(Scaleform::Render::ShapeDataFloat *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Render::ShapeDataFloat &);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Render::ShapeDataFloat *);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Render::ShapeDataFloat &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Render::ShapeDataFloat *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShapeDataFloat * & GetRawRef();
	Scaleform::Render::ShapeDataFloat * GetPtr();
	Scaleform::Render::ShapeDataFloat & operator*();
	Scaleform::Render::ShapeDataFloat * operator->();
	Scaleform::Render::ShapeDataFloat * operator class Scaleform::Render::ShapeDataFloat *();
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Render::ShapeDataFloat *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
};
void Scaleform::GFx::AS3::AvmBitmap::ForceShutdown(); // 0x140480D40
void Scaleform::GFx::AS3::AvmBitmap::SetResourceMovieDef(Scaleform::GFx::MovieDefImpl * md); // 0x1404A9390