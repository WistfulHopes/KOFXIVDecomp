
class Scaleform::ASStrFormatter :
	Scaleform::StrFormatter
{
public:
	ASStrFormatter(Scaleform::ASStrFormatter &);
	ASStrFormatter(const Scaleform::ASStrFormatter &);
	ASStrFormatter(Scaleform::MsgFormat &, const Scaleform::GFx::ASString &);
	ASStrFormatter(Scaleform::MsgFormat &, const Scaleform::GFx::ASStringNode *);
	virtual ~ASStrFormatter();
};
const char * Scaleform::GFx::AS3::AsString(const Scaleform::GFx::AS3::Abc::NamespaceKind kind); // 0x140460E80
Scaleform::GFx::ASString Scaleform::GFx::AS3::AsString(const Scaleform::GFx::AS3::Value & value, Scaleform::GFx::AS3::StringManager & sm); // 0x140460990