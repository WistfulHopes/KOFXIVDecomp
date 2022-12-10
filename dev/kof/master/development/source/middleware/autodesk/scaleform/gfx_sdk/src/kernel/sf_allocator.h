#pragma once

void Scaleform::ConstructorMov<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> >::ConstructArray(void * p, unsigned long long count); // 0x1403893A0
void Scaleform::ConstructorMov<Scaleform::Render::HAL::MaskStackEntry>::ConstructArray(void * p, unsigned long long count, const Scaleform::Render::HAL::MaskStackEntry * psource); // 0x140318FF0
void Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper>::Destruct(Scaleform::Render::Text::StyledText::ParagraphPtrWrapper * p); // 0x1402FB240
void Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>::DestructArray(Scaleform::Render::Text::StyledText::HTMLImageTagInfo * p, unsigned long long count); // 0x1402F1A10
void Scaleform::ConstructorMov<Scaleform::String>::DestructArray(Scaleform::String * p, unsigned long long count); // 0x1402EF0A0
void Scaleform::ConstructorMov<Scaleform::GFx::MovieDataDef::FrameLabelInfo>::DestructArray(Scaleform::GFx::MovieDataDef::FrameLabelInfo * p, unsigned long long count); // 0x14033FE80
void Scaleform::ConstructorMov<Scaleform::GFx::MovieDataDef::SceneInfo>::DestructArray(Scaleform::GFx::MovieDataDef::SceneInfo * p, unsigned long long count); // 0x14033FF00
void Scaleform::ConstructorMov<Scaleform::GFx::MovieImpl::IndirectTransPair>::DestructArray(Scaleform::GFx::MovieImpl::IndirectTransPair * p, unsigned long long count); // 0x1402E15A0
void Scaleform::ConstructorMov<Scaleform::GFx::ImportData::Symbol>::DestructArray(Scaleform::GFx::ImportData::Symbol * p, unsigned long long count); // 0x14036E2A0
void Scaleform::ConstructorMov<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > >::DestructArray(Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > * p, unsigned long long count); // 0x1402FB2A0
void Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper>::DestructArray(Scaleform::Render::Text::StyledText::ParagraphPtrWrapper * p, unsigned long long count); // 0x1402FB310
void Scaleform::ConstructorMov<Scaleform::Render::Font::NativeHintingType>::DestructArray(Scaleform::Render::Font::NativeHintingType * p, unsigned long long count); // 0x14033FE80
void Scaleform::ConstructorMov<Scaleform::Render::HAL::RenderTargetEntry>::DestructArray(Scaleform::Render::HAL::RenderTargetEntry * p, unsigned long long count); // 0x140319090
void Scaleform::ConstructorMov<Scaleform::Render::Primitive::MeshEntry>::DestructArray(Scaleform::Render::Primitive::MeshEntry * p, unsigned long long count); // 0x140398C70
void Scaleform::ConstructorMov<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry>::DestructArray(Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry * p, unsigned long long count); // 0x140398C70
void Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::Fence> >::DestructArray(Scaleform::Ptr<Scaleform::Render::Fence> * p, unsigned long long count); // 0x1403963E0
void Scaleform::ConstructorMov<Scaleform::Render::TextMeshLayer>::DestructArray(Scaleform::Render::TextMeshLayer * p, unsigned long long count); // 0x1403FF510
void Scaleform::ConstructorMov<Scaleform::GFx::AS3::VMMethodBodyInfo>::DestructArray(Scaleform::GFx::AS3::VMMethodBodyInfo * p, unsigned long long count); // 0x1404716E0
void Scaleform::ConstructorMov<Scaleform::GFx::AS3::Value>::DestructArray(Scaleform::GFx::AS3::Value * p, unsigned long long count); // 0x140471780
void Scaleform::ConstructorCPP<Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr>::Construct(void * p, const Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr & source); // 0x140576270
void Scaleform::ConstructorCPP<Scaleform::GFx::Value>::Construct(void * p, const Scaleform::GFx::Value & source); // 0x140467180
void Scaleform::ConstructorCPP<Scaleform::GFx::Value>::DestructArray(Scaleform::GFx::Value * p, unsigned long long count); // 0x140471610
class Scaleform::ConstructorPOD<char>
{
public:
	static void Construct(void *, const char &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const char *);
	static void ConstructArray(void *, unsigned long long, const char &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(char *);
	static void DestructArray(char *, unsigned long long);
	static void CopyArrayForward(char *, const char *, unsigned long long);
	static void CopyArrayBackward(char *, const char *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::MsgFormat::fmt_record>
{
public:
	static void Construct(void *, const Scaleform::MsgFormat::fmt_record &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::MsgFormat::fmt_record *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::MsgFormat::fmt_record &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::MsgFormat::fmt_record *);
	static void DestructArray(Scaleform::MsgFormat::fmt_record *, unsigned long long);
	static void CopyArrayForward(Scaleform::MsgFormat::fmt_record *, const Scaleform::MsgFormat::fmt_record *, unsigned long long);
	static void CopyArrayBackward(Scaleform::MsgFormat::fmt_record *, const Scaleform::MsgFormat::fmt_record *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseGH<2>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 2,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::Waitable::HandlerStruct>
{
public:
	static void Construct(void *, const Scaleform::Waitable::HandlerStruct &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Waitable::HandlerStruct *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Waitable::HandlerStruct &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Waitable::HandlerStruct *);
	static void DestructArray(Scaleform::Waitable::HandlerStruct *, unsigned long long);
	static void CopyArrayForward(Scaleform::Waitable::HandlerStruct *, const Scaleform::Waitable::HandlerStruct *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Waitable::HandlerStruct *, const Scaleform::Waitable::HandlerStruct *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<unsigned char>
{
public:
	static void Construct(void *, const unsigned char &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned char *);
	static void ConstructArray(void *, unsigned long long, const unsigned char &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(unsigned char *);
	static void DestructArray(unsigned char *, unsigned long long);
	static void CopyArrayForward(unsigned char *, const unsigned char *, unsigned long long);
	static void CopyArrayBackward(unsigned char *, const unsigned char *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::ImageFileHandler *>
{
public:
	static void Construct(void *, Scaleform::Render::ImageFileHandler * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::ImageFileHandler * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::ImageFileHandler * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::ImageFileHandler * *);
	static void DestructArray(Scaleform::Render::ImageFileHandler * *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::ImageFileHandler * *, Scaleform::Render::ImageFileHandler * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::ImageFileHandler * *, Scaleform::Render::ImageFileHandler * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<short>
{
public:
	static void Construct(void *, const short &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const short *);
	static void ConstructArray(void *, unsigned long long, const short &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(short *);
	static void DestructArray(short *, unsigned long long);
	static void CopyArrayForward(short *, const short *, unsigned long long);
	static void CopyArrayBackward(short *, const short *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<unsigned int>
{
public:
	static void Construct(void *, const unsigned long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned long *);
	static void ConstructArray(void *, unsigned long long, const unsigned long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(unsigned long *);
	static void DestructArray(unsigned long *, unsigned long long);
	static void CopyArrayForward(unsigned long *, const unsigned long *, unsigned long long);
	static void CopyArrayBackward(unsigned long *, const unsigned long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<unsigned long>
{
public:
	static void Construct(void *, const unsigned long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned long *);
	static void ConstructArray(void *, unsigned long long, const unsigned long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(unsigned long *);
	static void DestructArray(unsigned long *, unsigned long long);
	static void CopyArrayForward(unsigned long *, const unsigned long *, unsigned long long);
	static void CopyArrayBackward(unsigned long *, const unsigned long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Text::Style *>
{
public:
	static void Construct(void *, Scaleform::Render::Text::Style * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::Text::Style * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::Text::Style * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Text::Style * *);
	static void DestructArray(Scaleform::Render::Text::Style * *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Text::Style * *, Scaleform::Render::Text::Style * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Text::Style * *, Scaleform::Render::Text::Style * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::Text::CSSToken<wchar_t> >
{
public:
	static void Construct(void *, const Scaleform::GFx::Text::CSSToken<wchar_t> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::Text::CSSToken<wchar_t> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::Text::CSSToken<wchar_t> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::Text::CSSToken<wchar_t> *);
	static void DestructArray(Scaleform::GFx::Text::CSSToken<wchar_t> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::Text::CSSToken<wchar_t> *, const Scaleform::GFx::Text::CSSToken<wchar_t> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::Text::CSSToken<wchar_t> *, const Scaleform::GFx::Text::CSSToken<wchar_t> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> >
{
public:
	static void Construct(void *, const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *);
	static void DestructArray(Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *, unsigned long long);
	static void CopyArrayForward(Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *, const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *, const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::ExecuteTag *>
{
public:
	static void Construct(void *, Scaleform::GFx::ExecuteTag * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::ExecuteTag * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::ExecuteTag * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::ExecuteTag * *);
	static void DestructArray(Scaleform::GFx::ExecuteTag * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::ExecuteTag * *, Scaleform::GFx::ExecuteTag * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::ExecuteTag * *, Scaleform::GFx::ExecuteTag * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::FontCompactor::ContourKeyType>
{
public:
	static void Construct(void *, const Scaleform::GFx::FontCompactor::ContourKeyType &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::FontCompactor::ContourKeyType *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::FontCompactor::ContourKeyType &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::FontCompactor::ContourKeyType *);
	static void DestructArray(Scaleform::GFx::FontCompactor::ContourKeyType *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::FontCompactor::ContourKeyType *, const Scaleform::GFx::FontCompactor::ContourKeyType *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::FontCompactor::ContourKeyType *, const Scaleform::GFx::FontCompactor::ContourKeyType *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::FontGlyphPacker::GlyphInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::FontGlyphPacker::GlyphInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::FontGlyphPacker::GlyphInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::FontGlyphPacker::GlyphInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::FontGlyphPacker::GlyphInfo *);
	static void DestructArray(Scaleform::GFx::FontGlyphPacker::GlyphInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::FontGlyphPacker::GlyphInfo *, const Scaleform::GFx::FontGlyphPacker::GlyphInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::FontGlyphPacker::GlyphInfo *, const Scaleform::GFx::FontGlyphPacker::GlyphInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::MovieDataDef> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *, const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *, const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<void *>
{
public:
	static void Construct(void *, void * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, void * *);
	static void ConstructArray(void *, unsigned long long, void * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(void * *);
	static void DestructArray(void * *, unsigned long long);
	static void CopyArrayForward(void * *, void * *, unsigned long long);
	static void CopyArrayBackward(void * *, void * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::`anonymous namespace'::Range>
{
public:
	static void Construct(void *, const Scaleform::GFx::`anonymous-namespace'::Range &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::`anonymous-namespace'::Range *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::`anonymous-namespace'::Range &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::`anonymous-namespace'::Range *);
	static void DestructArray(Scaleform::GFx::`anonymous-namespace'::Range *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::`anonymous-namespace'::Range *, const Scaleform::GFx::`anonymous-namespace'::Range *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::`anonymous-namespace'::Range *, const Scaleform::GFx::`anonymous-namespace'::Range *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<int>
{
public:
	static void Construct(void *, const long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const long *);
	static void ConstructArray(void *, unsigned long long, const long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(long *);
	static void DestructArray(long *, unsigned long long);
	static void CopyArrayForward(long *, const long *, unsigned long long);
	static void CopyArrayBackward(long *, const long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *, const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *, const Scaleform::Ptr<Scaleform::GFx::MovieDefImpl> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::String>
{
public:
	static void Construct(void *, const Scaleform::String &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::String *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::String &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::String *);
	static void DestructArray(Scaleform::String *, unsigned long long);
	static void CopyArrayForward(Scaleform::String *, const Scaleform::String *, unsigned long long);
	static void CopyArrayBackward(Scaleform::String *, const Scaleform::String *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::FontResource *>
{
public:
	static void Construct(void *, Scaleform::GFx::FontResource * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::FontResource * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::FontResource * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::FontResource * *);
	static void DestructArray(Scaleform::GFx::FontResource * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::FontResource * *, Scaleform::GFx::FontResource * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::FontResource * *, Scaleform::GFx::FontResource * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseGH<264>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 264,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::AllocatorBaseGH<327>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 327,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::MovieImpl::MDKillListEntry>
{
public:
	static void Construct(void *, const Scaleform::GFx::MovieImpl::MDKillListEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieImpl::MDKillListEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieImpl::MDKillListEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::MovieImpl::MDKillListEntry *);
	static void DestructArray(Scaleform::GFx::MovieImpl::MDKillListEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::MovieImpl::MDKillListEntry *, const Scaleform::GFx::MovieImpl::MDKillListEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::MovieImpl::MDKillListEntry *, const Scaleform::GFx::MovieImpl::MDKillListEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::Resource> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::Resource> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::Resource> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::Resource> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::Resource> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::Resource> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::Resource> *, const Scaleform::Ptr<Scaleform::GFx::Resource> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::Resource> *, const Scaleform::Ptr<Scaleform::GFx::Resource> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseGH<259>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 259,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<char>
{
public:
	static void Construct(void *, const char &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const char *);
	static void ConstructArray(void *, unsigned long long, const char &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(char *);
	static void DestructArray(char *, unsigned long long);
	static void CopyArrayForward(char *, const char *, unsigned long long);
	static void CopyArrayBackward(char *, const char *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::Task> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::Task> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::Task> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::Task> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::Task> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::Task> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::Task> *, const Scaleform::Ptr<Scaleform::GFx::Task> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::Task> *, const Scaleform::Ptr<Scaleform::GFx::Task> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::Task *>
{
public:
	static void Construct(void *, Scaleform::GFx::Task * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::Task * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::Task * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::Task * *);
	static void DestructArray(Scaleform::GFx::Task * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::Task * *, Scaleform::GFx::Task * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::Task * *, Scaleform::GFx::Task * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::TaskThreadInPool *>
{
public:
	static void Construct(void *, Scaleform::GFx::TaskThreadInPool * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::TaskThreadInPool * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::TaskThreadInPool * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::TaskThreadInPool * *);
	static void DestructArray(Scaleform::GFx::TaskThreadInPool * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::TaskThreadInPool * *, Scaleform::GFx::TaskThreadInPool * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::TaskThreadInPool * *, Scaleform::GFx::TaskThreadInPool * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::TextKeyMap::KeyMapEntry>
{
public:
	static void Construct(void *, const Scaleform::GFx::TextKeyMap::KeyMapEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::TextKeyMap::KeyMapEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::TextKeyMap::KeyMapEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::TextKeyMap::KeyMapEntry *);
	static void DestructArray(Scaleform::GFx::TextKeyMap::KeyMapEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::TextKeyMap::KeyMapEntry *, const Scaleform::GFx::TextKeyMap::KeyMapEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::TextKeyMap::KeyMapEntry *, const Scaleform::GFx::TextKeyMap::KeyMapEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Font::NativeHintingType>
{
public:
	static void Construct(void *, const Scaleform::Render::Font::NativeHintingType &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Font::NativeHintingType *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Font::NativeHintingType &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Font::NativeHintingType *);
	static void DestructArray(Scaleform::Render::Font::NativeHintingType *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Font::NativeHintingType *, const Scaleform::Render::Font::NativeHintingType *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Font::NativeHintingType *, const Scaleform::Render::Font::NativeHintingType *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<tagKERNINGPAIR>
{
public:
	static void Construct(void *, const tagKERNINGPAIR &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const tagKERNINGPAIR *);
	static void ConstructArray(void *, unsigned long long, const tagKERNINGPAIR &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(tagKERNINGPAIR *);
	static void DestructArray(tagKERNINGPAIR *, unsigned long long);
	static void CopyArrayForward(tagKERNINGPAIR *, const tagKERNINGPAIR *, unsigned long long);
	static void CopyArrayBackward(tagKERNINGPAIR *, const tagKERNINGPAIR *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Point<long> >
{
public:
	static void Construct(void *, const Scaleform::Render::Point<long> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Point<long> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Point<long> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Point<long> *);
	static void DestructArray(Scaleform::Render::Point<long> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Point<long> *, const Scaleform::Render::Point<long> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Point<long> *, const Scaleform::Render::Point<long> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::Filter> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::Render::Filter> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Filter> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Filter> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::Render::Filter> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::Render::Filter> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::Render::Filter> *, const Scaleform::Ptr<Scaleform::Render::Filter> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::Render::Filter> *, const Scaleform::Ptr<Scaleform::Render::Filter> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseGH<328>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 328,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorCPP<Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr *);
	static void DestructArray(Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr *, const Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr *, const Scaleform::GFx::AS3::Instances::fl_display::MovieClip::FrameScript::Descr *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorCPP<Scaleform::GFx::Value>
{
public:
	static void Construct(void *, const Scaleform::GFx::Value &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::Value *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::Value &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::Value *);
	static void DestructArray(Scaleform::GFx::Value *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<unsigned char>
{
public:
	static void Construct(void *, const unsigned char &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned char *);
	static void ConstructArray(void *, unsigned long long, const unsigned char &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(unsigned char *);
	static void DestructArray(unsigned char *, unsigned long long);
	static void CopyArrayForward(unsigned char *, const unsigned char *, unsigned long long);
	static void CopyArrayBackward(unsigned char *, const unsigned char *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<2>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 2,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorPOD<Scaleform::Render::ShapeMeshProvider::DrawLayerType>
{
public:
	static void Construct(void *, const Scaleform::Render::ShapeMeshProvider::DrawLayerType &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::ShapeMeshProvider::DrawLayerType *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::ShapeMeshProvider::DrawLayerType &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::ShapeMeshProvider::DrawLayerType *);
	static void DestructArray(Scaleform::Render::ShapeMeshProvider::DrawLayerType *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::ShapeMeshProvider::DrawLayerType *, const Scaleform::Render::ShapeMeshProvider::DrawLayerType *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::ShapeMeshProvider::DrawLayerType *, const Scaleform::Render::ShapeMeshProvider::DrawLayerType *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<75>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 75,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorPOD<unsigned int>
{
public:
	static void Construct(void *, const unsigned long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned long *);
	static void ConstructArray(void *, unsigned long long, const unsigned long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(unsigned long *);
	static void DestructArray(unsigned long *, unsigned long long);
	static void CopyArrayForward(unsigned long *, const unsigned long *, unsigned long long);
	static void CopyArrayBackward(unsigned long *, const unsigned long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Render::GlyphSlot>
{
public:
	static void Construct(void *, const Scaleform::Render::GlyphSlot &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::GlyphSlot *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::GlyphSlot &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::GlyphSlot *);
	static void DestructArray(Scaleform::Render::GlyphSlot *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::GlyphSlot *, const Scaleform::Render::GlyphSlot *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::GlyphSlot *, const Scaleform::Render::GlyphSlot *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Render::GlyphBand>
{
public:
	static void Construct(void *, const Scaleform::Render::GlyphBand &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::GlyphBand *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::GlyphBand &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::GlyphBand *);
	static void DestructArray(Scaleform::Render::GlyphBand *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::GlyphBand *, const Scaleform::Render::GlyphBand *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::GlyphBand *, const Scaleform::Render::GlyphBand *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Render::Texture::UpdateDesc>
{
public:
	static void Construct(void *, const Scaleform::Render::Texture::UpdateDesc &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Texture::UpdateDesc *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Texture::UpdateDesc &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Texture::UpdateDesc *);
	static void DestructArray(Scaleform::Render::Texture::UpdateDesc *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Texture::UpdateDesc *, const Scaleform::Render::Texture::UpdateDesc *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Texture::UpdateDesc *, const Scaleform::Render::Texture::UpdateDesc *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Render::GlyphNode>
{
public:
	static void Construct(void *, const Scaleform::Render::GlyphNode &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::GlyphNode *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::GlyphNode &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::GlyphNode *);
	static void DestructArray(Scaleform::Render::GlyphNode *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::GlyphNode *, const Scaleform::Render::GlyphNode *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::GlyphNode *, const Scaleform::Render::GlyphNode *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Render::TextNotifier>
{
public:
	static void Construct(void *, const Scaleform::Render::TextNotifier &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::TextNotifier *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::TextNotifier &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::TextNotifier *);
	static void DestructArray(Scaleform::Render::TextNotifier *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::TextNotifier *, const Scaleform::Render::TextNotifier *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::TextNotifier *, const Scaleform::Render::TextNotifier *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<float>
{
public:
	static void Construct(void *, const float &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const float *);
	static void ConstructArray(void *, unsigned long long, const float &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(float *);
	static void DestructArray(float *, unsigned long long);
	static void CopyArrayForward(float *, const float *, unsigned long long);
	static void CopyArrayBackward(float *, const float *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Render::BeginDisplayData>
{
public:
	static void Construct(void *, const Scaleform::Render::BeginDisplayData &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::BeginDisplayData *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::BeginDisplayData &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::BeginDisplayData *);
	static void DestructArray(Scaleform::Render::BeginDisplayData *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::BeginDisplayData *, const Scaleform::Render::BeginDisplayData *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::BeginDisplayData *, const Scaleform::Render::BeginDisplayData *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Render::FenceImpl>
{
public:
	static void Construct(void *, const Scaleform::Render::FenceImpl &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::FenceImpl *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::FenceImpl &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::FenceImpl *);
	static void DestructArray(Scaleform::Render::FenceImpl *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::FenceImpl *, const Scaleform::Render::FenceImpl *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::FenceImpl *, const Scaleform::Render::FenceImpl *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<long>
{
public:
	static void Construct(void *, const long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const long *);
	static void ConstructArray(void *, unsigned long long, const long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(long *);
	static void DestructArray(long *, unsigned long long);
	static void CopyArrayForward(long *, const long *, unsigned long long);
	static void CopyArrayBackward(long *, const long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<unsigned char const *>
{
public:
	static void Construct(void *, const unsigned char * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned char * *);
	static void ConstructArray(void *, unsigned long long, const unsigned char * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(const unsigned char * *);
	static void DestructArray(const unsigned char * *, unsigned long long);
	static void CopyArrayForward(const unsigned char * *, const unsigned char * *, unsigned long long);
	static void CopyArrayBackward(const unsigned char * *, const unsigned char * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Abc::NamespaceSetInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Abc::NamespaceSetInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Abc::NamespaceSetInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Abc::NamespaceSetInfo *);
	static void DestructArray(Scaleform::GFx::AS3::Abc::NamespaceSetInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Abc::NamespaceSetInfo *, const Scaleform::GFx::AS3::Abc::NamespaceSetInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Abc::NamespaceSetInfo *, const Scaleform::GFx::AS3::Abc::NamespaceSetInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<unsigned __int64>
{
public:
	static void Construct(void *, const unsigned long long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned long long *);
	static void ConstructArray(void *, unsigned long long, const unsigned long long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(unsigned long long *);
	static void DestructArray(unsigned long long *, unsigned long long);
	static void CopyArrayForward(unsigned long long *, const unsigned long long *, unsigned long long);
	static void CopyArrayBackward(unsigned long long *, const unsigned long long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<339>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 339,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorPOD<unsigned long>
{
public:
	static void Construct(void *, const unsigned long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned long *);
	static void ConstructArray(void *, unsigned long long, const unsigned long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(unsigned long *);
	static void DestructArray(unsigned long *, unsigned long long);
	static void CopyArrayForward(unsigned long *, const unsigned long *, unsigned long long);
	static void CopyArrayBackward(unsigned long *, const unsigned long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<347>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 347,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorPOD<Scaleform::GFx::AS3::VMAbcFile *>
{
public:
	static void Construct(void *, Scaleform::GFx::AS3::VMAbcFile * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::VMAbcFile * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::VMAbcFile * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::VMAbcFile * *);
	static void DestructArray(Scaleform::GFx::AS3::VMAbcFile * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::VMAbcFile * *, Scaleform::GFx::AS3::VMAbcFile * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::VMAbcFile * *, Scaleform::GFx::AS3::VMAbcFile * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Text::HighlightDesc>
{
public:
	static void Construct(void *, const Scaleform::Render::Text::HighlightDesc &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::HighlightDesc *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::HighlightDesc &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Text::HighlightDesc *);
	static void DestructArray(Scaleform::Render::Text::HighlightDesc *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Text::HighlightDesc *, const Scaleform::Render::Text::HighlightDesc *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Text::HighlightDesc *, const Scaleform::Render::Text::HighlightDesc *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::MatrixPoolImpl::HMatrix>
{
public:
	static void Construct(void *, const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::MatrixPoolImpl::HMatrix *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::MatrixPoolImpl::HMatrix &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::MatrixPoolImpl::HMatrix *);
	static void DestructArray(Scaleform::Render::MatrixPoolImpl::HMatrix *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::MatrixPoolImpl::HMatrix *, const Scaleform::Render::MatrixPoolImpl::HMatrix *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::MatrixPoolImpl::HMatrix *, const Scaleform::Render::MatrixPoolImpl::HMatrix *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Text::DocView::ImageSubstitutor::Element>
{
public:
	static void Construct(void *, const Scaleform::Render::Text::DocView::ImageSubstitutor::Element &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::DocView::ImageSubstitutor::Element *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::DocView::ImageSubstitutor::Element &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Text::DocView::ImageSubstitutor::Element *);
	static void DestructArray(Scaleform::Render::Text::DocView::ImageSubstitutor::Element *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Text::DocView::ImageSubstitutor::Element *, const Scaleform::Render::Text::DocView::ImageSubstitutor::Element *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Text::DocView::ImageSubstitutor::Element *, const Scaleform::Render::Text::DocView::ImageSubstitutor::Element *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::Fence> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::Render::Fence> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Fence> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Fence> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::Render::Fence> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::Render::Fence> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::Render::Fence> *, const Scaleform::Ptr<Scaleform::Render::Fence> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::Render::Fence> *, const Scaleform::Ptr<Scaleform::Render::Fence> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::FillStyleType>
{
public:
	static void Construct(void *, const Scaleform::Render::FillStyleType &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::FillStyleType *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::FillStyleType &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::FillStyleType *);
	static void DestructArray(Scaleform::Render::FillStyleType *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::FillStyleType *, const Scaleform::Render::FillStyleType *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::FillStyleType *, const Scaleform::Render::FillStyleType *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper>
{
public:
	static void Construct(void *, const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *);
	static void DestructArray(Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *, const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *, const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<68>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 68,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *);
	static void DestructArray(Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *, const Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *, const Scaleform::Render::MeshBuffer::MeshBufferUpdateEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<74>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 74,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::Render::StrokeStyleType>
{
public:
	static void Construct(void *, const Scaleform::Render::StrokeStyleType &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::StrokeStyleType *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::StrokeStyleType &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::StrokeStyleType *);
	static void DestructArray(Scaleform::Render::StrokeStyleType *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::StrokeStyleType *, const Scaleform::Render::StrokeStyleType *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::StrokeStyleType *, const Scaleform::Render::StrokeStyleType *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > >
{
public:
	static void Construct(void *, const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *);
	static void DestructArray(Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *, unsigned long long);
	static void CopyArrayForward(Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *, const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *, unsigned long long);
	static void CopyArrayBackward(Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *, const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::BundleEntry *>
{
public:
	static void Construct(void *, Scaleform::Render::BundleEntry * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::BundleEntry * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::BundleEntry * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::BundleEntry * *);
	static void DestructArray(Scaleform::Render::BundleEntry * *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::BundleEntry * *, Scaleform::Render::BundleEntry * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::BundleEntry * *, Scaleform::Render::BundleEntry * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::GL::MeshBuffer *>
{
public:
	static void Construct(void *, Scaleform::Render::GL::MeshBuffer * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::GL::MeshBuffer * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::GL::MeshBuffer * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::GL::MeshBuffer * *);
	static void DestructArray(Scaleform::Render::GL::MeshBuffer * *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::GL::MeshBuffer * *, Scaleform::Render::GL::MeshBuffer * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::GL::MeshBuffer * *, Scaleform::Render::GL::MeshBuffer * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::HAL::MaskStackEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::HAL::MaskStackEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::HAL::MaskStackEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::HAL::MaskStackEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::HAL::MaskStackEntry *);
	static void DestructArray(Scaleform::Render::HAL::MaskStackEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::HAL::MaskStackEntry *, const Scaleform::Render::HAL::MaskStackEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::HAL::MaskStackEntry *, const Scaleform::Render::HAL::MaskStackEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::HAL::BlendModeStackEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::HAL::BlendModeStackEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::HAL::BlendModeStackEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::HAL::BlendModeStackEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::HAL::BlendModeStackEntry *);
	static void DestructArray(Scaleform::Render::HAL::BlendModeStackEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::HAL::BlendModeStackEntry *, const Scaleform::Render::HAL::BlendModeStackEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::HAL::BlendModeStackEntry *, const Scaleform::Render::HAL::BlendModeStackEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::ImportData::Symbol>
{
public:
	static void Construct(void *, const Scaleform::GFx::ImportData::Symbol &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ImportData::Symbol *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ImportData::Symbol &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::ImportData::Symbol *);
	static void DestructArray(Scaleform::GFx::ImportData::Symbol *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::ImportData::Symbol *, const Scaleform::GFx::ImportData::Symbol *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::ImportData::Symbol *, const Scaleform::GFx::ImportData::Symbol *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::RangeData<void *> >
{
public:
	static void Construct(void *, const Scaleform::RangeData<void *> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::RangeData<void *> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::RangeData<void *> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::RangeData<void *> *);
	static void DestructArray(Scaleform::RangeData<void *> *, unsigned long long);
	static void CopyArrayForward(Scaleform::RangeData<void *> *, const Scaleform::RangeData<void *> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::RangeData<void *> *, const Scaleform::RangeData<void *> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::TextureGlyph>
{
public:
	static void Construct(void *, const Scaleform::Render::TextureGlyph &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::TextureGlyph *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::TextureGlyph &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::TextureGlyph *);
	static void DestructArray(Scaleform::Render::TextureGlyph *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::TextureGlyph *, const Scaleform::Render::TextureGlyph *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::TextureGlyph *, const Scaleform::Render::TextureGlyph *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<325>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 325,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::DisplayList::DepthToIndexMapElem>
{
public:
	static void Construct(void *, const Scaleform::GFx::DisplayList::DepthToIndexMapElem &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::DisplayList::DepthToIndexMapElem *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::DisplayList::DepthToIndexMapElem &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::DisplayList::DepthToIndexMapElem *);
	static void DestructArray(Scaleform::GFx::DisplayList::DepthToIndexMapElem *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::DisplayList::DepthToIndexMapElem *, const Scaleform::GFx::DisplayList::DepthToIndexMapElem *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::DisplayList::DepthToIndexMapElem *, const Scaleform::GFx::DisplayList::DepthToIndexMapElem *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::DisplayList::DisplayEntry>
{
public:
	static void Construct(void *, const Scaleform::GFx::DisplayList::DisplayEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::DisplayList::DisplayEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::DisplayList::DisplayEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::DisplayList::DisplayEntry *);
	static void DestructArray(Scaleform::GFx::DisplayList::DisplayEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::DisplayList::DisplayEntry *, const Scaleform::GFx::DisplayList::DisplayEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::DisplayList::DisplayEntry *, const Scaleform::GFx::DisplayList::DisplayEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<323>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 323,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::AllocatorBaseLH<258>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 258,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::Render::Point<float> >
{
public:
	static void Construct(void *, const Scaleform::Render::Point<float> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Point<float> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Point<float> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Point<float> *);
	static void DestructArray(Scaleform::Render::Point<float> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::ASString>
{
public:
	static void Construct(void *, const Scaleform::GFx::ASString &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ASString *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ASString &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::ASString *);
	static void DestructArray(Scaleform::GFx::ASString *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::ASString *, const Scaleform::GFx::ASString *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::ASString *, const Scaleform::GFx::ASString *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::StaticTextRecord *>
{
public:
	static void Construct(void *, Scaleform::GFx::StaticTextRecord * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::StaticTextRecord * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::StaticTextRecord * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::StaticTextRecord * *);
	static void DestructArray(Scaleform::GFx::StaticTextRecord * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::StaticTextRecord * *, Scaleform::GFx::StaticTextRecord * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::StaticTextRecord * *, Scaleform::GFx::StaticTextRecord * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::Button::CharToRec>
{
public:
	static void Construct(void *, const Scaleform::GFx::Button::CharToRec &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::Button::CharToRec *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::Button::CharToRec &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::Button::CharToRec *);
	static void DestructArray(Scaleform::GFx::Button::CharToRec *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::Button::CharToRec *, const Scaleform::GFx::Button::CharToRec *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::Button::CharToRec *, const Scaleform::GFx::Button::CharToRec *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> *, const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> *, const Scaleform::Ptr<Scaleform::GFx::ButtonActionBase> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::ButtonRecord>
{
public:
	static void Construct(void *, const Scaleform::GFx::ButtonRecord &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ButtonRecord *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ButtonRecord &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::ButtonRecord *);
	static void DestructArray(Scaleform::GFx::ButtonRecord *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::ButtonRecord *, const Scaleform::GFx::ButtonRecord *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::ButtonRecord *, const Scaleform::GFx::ButtonRecord *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *, const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *, const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::FontMap::MapEntry>
{
public:
	static void Construct(void *, const Scaleform::GFx::FontMap::MapEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::FontMap::MapEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::FontMap::MapEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::FontMap::MapEntry *);
	static void DestructArray(Scaleform::GFx::FontMap::MapEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::FontMap::MapEntry *, const Scaleform::GFx::FontMap::MapEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::FontMap::MapEntry *, const Scaleform::GFx::FontMap::MapEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::FontData::AdvanceEntry>
{
public:
	static void Construct(void *, const Scaleform::GFx::FontData::AdvanceEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::FontData::AdvanceEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::FontData::AdvanceEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::FontData::AdvanceEntry *);
	static void DestructArray(Scaleform::GFx::FontData::AdvanceEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::FontData::AdvanceEntry *, const Scaleform::GFx::FontData::AdvanceEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::FontData::AdvanceEntry *, const Scaleform::GFx::FontData::AdvanceEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *, const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *, const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> >
{
public:
	static void Construct(void *, const Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *);
	static void DestructArray(Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *, unsigned long long);
	static void CopyArrayForward(Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *, const Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *, const Scaleform::WeakPtr<Scaleform::GFx::InteractiveObject> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *, const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *, const Scaleform::Ptr<Scaleform::GFx::LoaderImpl::HttpFileCache> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::ImagePackerImpl::InputImage>
{
public:
	static void Construct(void *, const Scaleform::GFx::ImagePackerImpl::InputImage &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ImagePackerImpl::InputImage *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ImagePackerImpl::InputImage &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::ImagePackerImpl::InputImage *);
	static void DestructArray(Scaleform::GFx::ImagePackerImpl::InputImage *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::ImagePackerImpl::InputImage *, const Scaleform::GFx::ImagePackerImpl::InputImage *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::ImagePackerImpl::InputImage *, const Scaleform::GFx::ImagePackerImpl::InputImage *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::TimelineDef::Frame>
{
public:
	static void Construct(void *, const Scaleform::GFx::TimelineDef::Frame &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::TimelineDef::Frame *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::TimelineDef::Frame &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::TimelineDef::Frame *);
	static void DestructArray(Scaleform::GFx::TimelineDef::Frame *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::TimelineDef::Frame *, const Scaleform::GFx::TimelineDef::Frame *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::TimelineDef::Frame *, const Scaleform::GFx::TimelineDef::Frame *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::ResourceHandle>
{
public:
	static void Construct(void *, const Scaleform::GFx::ResourceHandle &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ResourceHandle *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::ResourceHandle &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::ResourceHandle *);
	static void DestructArray(Scaleform::GFx::ResourceHandle *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::ResourceHandle *, const Scaleform::GFx::ResourceHandle *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::ResourceHandle *, const Scaleform::GFx::ResourceHandle *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<264>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 264,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::MovieDataDef::SceneInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::MovieDataDef::SceneInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieDataDef::SceneInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieDataDef::SceneInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::MovieDataDef::SceneInfo *);
	static void DestructArray(Scaleform::GFx::MovieDataDef::SceneInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::MovieDataDef::SceneInfo *, const Scaleform::GFx::MovieDataDef::SceneInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::MovieDataDef::SceneInfo *, const Scaleform::GFx::MovieDataDef::SceneInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *, const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *, const Scaleform::Ptr<Scaleform::GFx::ASIntervalTimerIntf> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<324>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 324,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::AllocatorBaseLH<327>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 327,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::MovieImpl::IndirectTransPair>
{
public:
	static void Construct(void *, const Scaleform::GFx::MovieImpl::IndirectTransPair &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieImpl::IndirectTransPair *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieImpl::IndirectTransPair &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::MovieImpl::IndirectTransPair *);
	static void DestructArray(Scaleform::GFx::MovieImpl::IndirectTransPair *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::MovieImpl::IndirectTransPair *, const Scaleform::GFx::MovieImpl::IndirectTransPair *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::MovieImpl::IndirectTransPair *, const Scaleform::GFx::MovieImpl::IndirectTransPair *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::MovieImpl::FontDesc>
{
public:
	static void Construct(void *, const Scaleform::GFx::MovieImpl::FontDesc &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieImpl::FontDesc *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieImpl::FontDesc &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::MovieImpl::FontDesc *);
	static void DestructArray(Scaleform::GFx::MovieImpl::FontDesc *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::MovieImpl::FontDesc *, const Scaleform::GFx::MovieImpl::FontDesc *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::MovieImpl::FontDesc *, const Scaleform::GFx::MovieImpl::FontDesc *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::MovieImpl::LevelInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::MovieImpl::LevelInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieImpl::LevelInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieImpl::LevelInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::MovieImpl::LevelInfo *);
	static void DestructArray(Scaleform::GFx::MovieImpl::LevelInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::MovieImpl::LevelInfo *, const Scaleform::GFx::MovieImpl::LevelInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::MovieImpl::LevelInfo *, const Scaleform::GFx::MovieImpl::LevelInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::StaticTextSnapshotData::CharRef>
{
public:
	static void Construct(void *, const Scaleform::GFx::StaticTextSnapshotData::CharRef &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::StaticTextSnapshotData::CharRef *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::StaticTextSnapshotData::CharRef &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::StaticTextSnapshotData::CharRef *);
	static void DestructArray(Scaleform::GFx::StaticTextSnapshotData::CharRef *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::StaticTextSnapshotData::CharRef *, const Scaleform::GFx::StaticTextSnapshotData::CharRef *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::StaticTextSnapshotData::CharRef *, const Scaleform::GFx::StaticTextSnapshotData::CharRef *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::StaticTextRecord::GlyphEntry>
{
public:
	static void Construct(void *, const Scaleform::GFx::StaticTextRecord::GlyphEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::StaticTextRecord::GlyphEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::StaticTextRecord::GlyphEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::StaticTextRecord::GlyphEntry *);
	static void DestructArray(Scaleform::GFx::StaticTextRecord::GlyphEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::StaticTextRecord::GlyphEntry *, const Scaleform::GFx::StaticTextRecord::GlyphEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::StaticTextRecord::GlyphEntry *, const Scaleform::GFx::StaticTextRecord::GlyphEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *, const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *, const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Text::LineBuffer::Line *>
{
public:
	static void Construct(void *, Scaleform::Render::Text::LineBuffer::Line * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::Text::LineBuffer::Line * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::Text::LineBuffer::Line * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Text::LineBuffer::Line * *);
	static void DestructArray(Scaleform::Render::Text::LineBuffer::Line * *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Text::LineBuffer::Line * *, Scaleform::Render::Text::LineBuffer::Line * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Text::LineBuffer::Line * *, Scaleform::Render::Text::LineBuffer::Line * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::ExternalFontWinAPI::GlyphType>
{
public:
	static void Construct(void *, const Scaleform::Render::ExternalFontWinAPI::GlyphType &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::ExternalFontWinAPI::GlyphType *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::ExternalFontWinAPI::GlyphType &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::ExternalFontWinAPI::GlyphType *);
	static void DestructArray(Scaleform::Render::ExternalFontWinAPI::GlyphType *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::ExternalFontWinAPI::GlyphType *, const Scaleform::Render::ExternalFontWinAPI::GlyphType *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::ExternalFontWinAPI::GlyphType *, const Scaleform::Render::ExternalFontWinAPI::GlyphType *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<wchar_t>
{
public:
	static void Construct(void *, const wchar_t &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const wchar_t *);
	static void ConstructArray(void *, unsigned long long, const wchar_t &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(wchar_t *);
	static void DestructArray(wchar_t *, unsigned long long);
	static void CopyArrayForward(wchar_t *, const wchar_t *, unsigned long long);
	static void CopyArrayBackward(wchar_t *, const wchar_t *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *, const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *, const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::TreeRoot *>
{
public:
	static void Construct(void *, Scaleform::Render::TreeRoot * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::TreeRoot * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::TreeRoot * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::TreeRoot * *);
	static void DestructArray(Scaleform::Render::TreeRoot * *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::TreeRoot * *, Scaleform::Render::TreeRoot * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::TreeRoot * *, Scaleform::Render::TreeRoot * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::UserDataState::Data const *>
{
public:
	static void Construct(void *, const Scaleform::Render::UserDataState::Data * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::UserDataState::Data * *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::UserDataState::Data * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(const Scaleform::Render::UserDataState::Data * *);
	static void DestructArray(const Scaleform::Render::UserDataState::Data * *, unsigned long long);
	static void CopyArrayForward(const Scaleform::Render::UserDataState::Data * *, const Scaleform::Render::UserDataState::Data * *, unsigned long long);
	static void CopyArrayBackward(const Scaleform::Render::UserDataState::Data * *, const Scaleform::Render::UserDataState::Data * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::HAL::FilterStackEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::HAL::FilterStackEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::HAL::FilterStackEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::HAL::FilterStackEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::HAL::FilterStackEntry *);
	static void DestructArray(Scaleform::Render::HAL::FilterStackEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::HAL::FilterStackEntry *, const Scaleform::Render::HAL::FilterStackEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::HAL::FilterStackEntry *, const Scaleform::Render::HAL::FilterStackEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::MemItem> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::MemItem> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::MemItem> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::MemItem> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::MemItem> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::MemItem> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::MemItem> *, const Scaleform::Ptr<Scaleform::MemItem> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::MemItem> *, const Scaleform::Ptr<Scaleform::MemItem> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Matrix3x4<float> >
{
public:
	static void Construct(void *, const Scaleform::Render::Matrix3x4<float> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Matrix3x4<float> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Matrix3x4<float> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Matrix3x4<float> *);
	static void DestructArray(Scaleform::Render::Matrix3x4<float> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Matrix3x4<float> *, const Scaleform::Render::Matrix3x4<float> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Matrix3x4<float> *, const Scaleform::Render::Matrix3x4<float> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Matrix4x4<float> >
{
public:
	static void Construct(void *, const Scaleform::Render::Matrix4x4<float> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Matrix4x4<float> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Matrix4x4<float> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Matrix4x4<float> *);
	static void DestructArray(Scaleform::Render::Matrix4x4<float> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Matrix4x4<float> *, const Scaleform::Render::Matrix4x4<float> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Matrix4x4<float> *, const Scaleform::Render::Matrix4x4<float> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::HAL::RenderTargetEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::HAL::RenderTargetEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::HAL::RenderTargetEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::HAL::RenderTargetEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::HAL::RenderTargetEntry *);
	static void DestructArray(Scaleform::Render::HAL::RenderTargetEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::HAL::RenderTargetEntry *, const Scaleform::Render::HAL::RenderTargetEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::HAL::RenderTargetEntry *, const Scaleform::Render::HAL::RenderTargetEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<72>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 72,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::Render::TextureFormat *>
{
public:
	static void Construct(void *, Scaleform::Render::TextureFormat * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::TextureFormat * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::TextureFormat * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::TextureFormat * *);
	static void DestructArray(Scaleform::Render::TextureFormat * *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::TextureFormat * *, Scaleform::Render::TextureFormat * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::TextureFormat * *, Scaleform::Render::TextureFormat * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<unsigned __int64>
{
public:
	static void Construct(void *, const unsigned long long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned long long *);
	static void ConstructArray(void *, unsigned long long, const unsigned long long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(unsigned long long *);
	static void DestructArray(unsigned long long *, unsigned long long);
	static void CopyArrayForward(unsigned long long *, const unsigned long long *, unsigned long long);
	static void CopyArrayBackward(unsigned long long *, const unsigned long long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::Render::Image> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::Render::Image> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Image> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Image> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::Render::Image> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::Render::Image> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::Render::Image> *, const Scaleform::Ptr<Scaleform::Render::Image> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::Render::Image> *, const Scaleform::Ptr<Scaleform::Render::Image> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Primitive::MeshEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::Primitive::MeshEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Primitive::MeshEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Primitive::MeshEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Primitive::MeshEntry *);
	static void DestructArray(Scaleform::Render::Primitive::MeshEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Primitive::MeshEntry *, const Scaleform::Render::Primitive::MeshEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Primitive::MeshEntry *, const Scaleform::Render::Primitive::MeshEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::ComplexMesh::FillRecord>
{
public:
	static void Construct(void *, const Scaleform::Render::ComplexMesh::FillRecord &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::ComplexMesh::FillRecord *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::ComplexMesh::FillRecord &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::ComplexMesh::FillRecord *);
	static void DestructArray(Scaleform::Render::ComplexMesh::FillRecord *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::ComplexMesh::FillRecord *, const Scaleform::Render::ComplexMesh::FillRecord *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::ComplexMesh::FillRecord *, const Scaleform::Render::ComplexMesh::FillRecord *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Matrix2x4<float> >
{
public:
	static void Construct(void *, const Scaleform::Render::Matrix2x4<float> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Matrix2x4<float> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Matrix2x4<float> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Matrix2x4<float> *);
	static void DestructArray(Scaleform::Render::Matrix2x4<float> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix2x4<float> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix2x4<float> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *);
	static void DestructArray(Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *, const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *, const Scaleform::Render::ComplexPrimitiveBundle::InstanceEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::FenceFrame>
{
public:
	static void Construct(void *, const Scaleform::Render::FenceFrame &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::FenceFrame *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::FenceFrame &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::FenceFrame *);
	static void DestructArray(Scaleform::Render::FenceFrame *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::FenceFrame *, const Scaleform::Render::FenceFrame *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::FenceFrame *, const Scaleform::Render::FenceFrame *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::Fence>
{
public:
	static void Construct(void *, const Scaleform::Render::Fence &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Fence *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Fence &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Fence *);
	static void DestructArray(Scaleform::Render::Fence *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Fence *, const Scaleform::Render::Fence *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Fence *, const Scaleform::Render::Fence *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<341>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 341,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *);
	static void DestructArray(Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *, const Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *, const Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::Listener *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Abc::NamespaceInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Abc::NamespaceInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Abc::NamespaceInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Abc::NamespaceInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Abc::NamespaceInfo *);
	static void DestructArray(Scaleform::GFx::AS3::Abc::NamespaceInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Abc::NamespaceInfo *, const Scaleform::GFx::AS3::Abc::NamespaceInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Abc::NamespaceInfo *, const Scaleform::GFx::AS3::Abc::NamespaceInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Abc::Multiname>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Abc::Multiname &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Abc::Multiname *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Abc::Multiname &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Abc::Multiname *);
	static void DestructArray(Scaleform::GFx::AS3::Abc::Multiname *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Abc::Multiname *, const Scaleform::GFx::AS3::Abc::Multiname *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Abc::Multiname *, const Scaleform::GFx::AS3::Abc::Multiname *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Abc::StringView>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Abc::StringView &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Abc::StringView *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Abc::StringView &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Abc::StringView *);
	static void DestructArray(Scaleform::GFx::AS3::Abc::StringView *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Abc::StringView *, const Scaleform::GFx::AS3::Abc::StringView *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Abc::StringView *, const Scaleform::GFx::AS3::Abc::StringView *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<340>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 340,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Instances::fl::GlobalObject *>
{
public:
	static void Construct(void *, Scaleform::GFx::AS3::Instances::fl::GlobalObject * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::Instances::fl::GlobalObject * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::Instances::fl::GlobalObject * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Instances::fl::GlobalObject * *);
	static void DestructArray(Scaleform::GFx::AS3::Instances::fl::GlobalObject * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Instances::fl::GlobalObject * *, Scaleform::GFx::AS3::Instances::fl::GlobalObject * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Instances::fl::GlobalObject * *, Scaleform::GFx::AS3::Instances::fl::GlobalObject * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> >
{
public:
	static void Construct(void *, const Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> *);
	static void DestructArray(Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> *, unsigned long long);
	static void CopyArrayForward(Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> *, const Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> *, const Scaleform::WeakPtr<Scaleform::GFx::DisplayObject> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Multiname>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Multiname &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Multiname *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Multiname &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Multiname *);
	static void DestructArray(Scaleform::GFx::AS3::Multiname *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Multiname *, const Scaleform::GFx::AS3::Multiname *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Multiname *, const Scaleform::GFx::AS3::Multiname *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Value>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Value &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Value *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Value &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Value *);
	static void DestructArray(Scaleform::GFx::AS3::Value *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Value *, const Scaleform::GFx::AS3::Value *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Value *, const Scaleform::GFx::AS3::Value *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<331>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 331,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XML> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::XMLAttr> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<328>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 328,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::VMExceptionInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::VMExceptionInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::VMExceptionInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::VMExceptionInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::VMExceptionInfo *);
	static void DestructArray(Scaleform::GFx::AS3::VMExceptionInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::VMExceptionInfo *, const Scaleform::GFx::AS3::VMExceptionInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::VMExceptionInfo *, const Scaleform::GFx::AS3::VMExceptionInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext *>
{
public:
	static void Construct(void *, Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * *);
	static void DestructArray(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * *, Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * *, Scaleform::GFx::AS3::Instances::fl_external::ExtensionContext * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::ASStringNode> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<346>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 346,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation *>
{
public:
	static void Construct(void *, Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * *);
	static void DestructArray(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * *, Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * *, Scaleform::GFx::AS3::Instances::fl_sensors::Geolocation * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<344>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 344,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::AllocatorBaseLH<333>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 333,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::AllocatorBaseLH<343>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 343,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::NamespaceSet> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<342>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 342,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer *>
{
public:
	static void Construct(void *, Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * *);
	static void DestructArray(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * *, Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * *, Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAppDomain> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Slots::Pair>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Slots::Pair &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Slots::Pair *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Slots::Pair &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Slots::Pair *);
	static void DestructArray(Scaleform::GFx::AS3::Slots::Pair *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Slots::Pair *, const Scaleform::GFx::AS3::Slots::Pair *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Slots::Pair *, const Scaleform::GFx::AS3::Slots::Pair *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::VMExceptionTypeInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::VMExceptionTypeInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::VMExceptionTypeInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::VMExceptionTypeInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::VMExceptionTypeInfo *);
	static void DestructArray(Scaleform::GFx::AS3::VMExceptionTypeInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::VMExceptionTypeInfo *, const Scaleform::GFx::AS3::VMExceptionTypeInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::VMExceptionTypeInfo *, const Scaleform::GFx::AS3::VMExceptionTypeInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<334>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 334,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::VMMethodBodyInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::VMMethodBodyInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::VMMethodBodyInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::VMMethodBodyInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::VMMethodBodyInfo *);
	static void DestructArray(Scaleform::GFx::AS3::VMMethodBodyInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::VMMethodBodyInfo *, const Scaleform::GFx::AS3::VMMethodBodyInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::VMMethodBodyInfo *, const Scaleform::GFx::AS3::VMMethodBodyInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseLH<67>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 67,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *);
	static void DestructArray(Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *, const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *, const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *>
{
public:
	static void Construct(void *, Scaleform::GFx::TimelineSnapshot::SnapshotElement * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::TimelineSnapshot::SnapshotElement * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::TimelineSnapshot::SnapshotElement * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::TimelineSnapshot::SnapshotElement * *);
	static void DestructArray(Scaleform::GFx::TimelineSnapshot::SnapshotElement * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::TimelineSnapshot::SnapshotElement * *, Scaleform::GFx::TimelineSnapshot::SnapshotElement * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::TimelineSnapshot::SnapshotElement * *, Scaleform::GFx::TimelineSnapshot::SnapshotElement * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Render::TextNotifier *>
{
public:
	static void Construct(void *, Scaleform::Render::TextNotifier * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::TextNotifier * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::Render::TextNotifier * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::TextNotifier * *);
	static void DestructArray(Scaleform::Render::TextNotifier * *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::TextNotifier * *, Scaleform::Render::TextNotifier * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::TextNotifier * *, Scaleform::Render::TextNotifier * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<enum Scaleform::GFx::AS3::XMLParser::Kind>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::XMLParser::Kind &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::XMLParser::Kind *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::XMLParser::Kind &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::XMLParser::Kind *);
	static void DestructArray(Scaleform::GFx::AS3::XMLParser::Kind *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::XMLParser::Kind *, const Scaleform::GFx::AS3::XMLParser::Kind *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::XMLParser::Kind *, const Scaleform::GFx::AS3::XMLParser::Kind *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::Pair<unsigned __int64,unsigned char const *> >
{
public:
	static void Construct(void *, const Scaleform::Pair<unsigned __int64,unsigned char const *> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Pair<unsigned __int64,unsigned char const *> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Pair<unsigned __int64,unsigned char const *> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Pair<unsigned __int64,unsigned char const *> *);
	static void DestructArray(Scaleform::Pair<unsigned __int64,unsigned char const *> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Pair<unsigned __int64,unsigned char const *> *, const Scaleform::Pair<unsigned __int64,unsigned char const *> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Pair<unsigned __int64,unsigned char const *> *, const Scaleform::Pair<unsigned __int64,unsigned char const *> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::GFx::AS3::TR::Def *>
{
public:
	static void Construct(void *, Scaleform::GFx::AS3::TR::Def * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::TR::Def * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::AS3::TR::Def * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::TR::Def * *);
	static void DestructArray(Scaleform::GFx::AS3::TR::Def * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::TR::Def * *, Scaleform::GFx::AS3::TR::Def * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::TR::Def * *, Scaleform::GFx::AS3::TR::Def * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorPOD<Scaleform::GFx::AS3::AbsoluteIndex>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::AbsoluteIndex &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::AbsoluteIndex *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::AbsoluteIndex &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::AbsoluteIndex *);
	static void DestructArray(Scaleform::GFx::AS3::AbsoluteIndex *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::AbsoluteIndex *, const Scaleform::GFx::AS3::AbsoluteIndex *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::AbsoluteIndex *, const Scaleform::GFx::AS3::AbsoluteIndex *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseDH<348>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 348,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::MovieDataDef::FrameLabelInfo>
{
public:
	static void Construct(void *, const Scaleform::GFx::MovieDataDef::FrameLabelInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieDataDef::FrameLabelInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::MovieDataDef::FrameLabelInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::MovieDataDef::FrameLabelInfo *);
	static void DestructArray(Scaleform::GFx::MovieDataDef::FrameLabelInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::MovieDataDef::FrameLabelInfo *, const Scaleform::GFx::MovieDataDef::FrameLabelInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::MovieDataDef::FrameLabelInfo *, const Scaleform::GFx::MovieDataDef::FrameLabelInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseDH<2>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 2,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::AllocatorBaseDH<327>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 327,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::GFx::TimelineSnapshot::SnapshotElement>
{
public:
	static void Construct(void *, const Scaleform::GFx::TimelineSnapshot::SnapshotElement &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::TimelineSnapshot::SnapshotElement &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	static void DestructArray(Scaleform::GFx::TimelineSnapshot::SnapshotElement *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::TimelineSnapshot::SnapshotElement *, const Scaleform::GFx::TimelineSnapshot::SnapshotElement *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::TimelineSnapshot::SnapshotElement *, const Scaleform::GFx::TimelineSnapshot::SnapshotElement *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::InteractiveObject> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *, const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *, const Scaleform::Ptr<Scaleform::GFx::InteractiveObject> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseDH<324>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 324,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>
{
public:
	static void Construct(void *, const Scaleform::Render::Text::StyledText::HTMLImageTagInfo &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::StyledText::HTMLImageTagInfo *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::StyledText::HTMLImageTagInfo &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Text::StyledText::HTMLImageTagInfo *);
	static void DestructArray(Scaleform::Render::Text::StyledText::HTMLImageTagInfo *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Text::StyledText::HTMLImageTagInfo *, const Scaleform::Render::Text::StyledText::HTMLImageTagInfo *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Text::StyledText::HTMLImageTagInfo *, const Scaleform::Render::Text::StyledText::HTMLImageTagInfo *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::DisplayObject *>
{
public:
	static void Construct(void *, Scaleform::GFx::DisplayObject * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::DisplayObject * *);
	static void ConstructArray(void *, unsigned long long, Scaleform::GFx::DisplayObject * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::DisplayObject * *);
	static void DestructArray(Scaleform::GFx::DisplayObject * *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::DisplayObject * *, Scaleform::GFx::DisplayObject * *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::DisplayObject * *, Scaleform::GFx::DisplayObject * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseDH<74>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 74,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};
class Scaleform::ConstructorMov<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> >
{
public:
	static void Construct(void *, const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *);
	static void DestructArray(Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *, const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *, const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::TextMeshLayer>
{
public:
	static void Construct(void *, const Scaleform::Render::TextMeshLayer &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::TextMeshLayer *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::TextMeshLayer &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::TextMeshLayer *);
	static void DestructArray(Scaleform::Render::TextMeshLayer *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::TextMeshLayer *, const Scaleform::Render::TextMeshLayer *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::TextMeshLayer *, const Scaleform::Render::TextMeshLayer *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Render::TextMeshEntry>
{
public:
	static void Construct(void *, const Scaleform::Render::TextMeshEntry &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::TextMeshEntry *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Render::TextMeshEntry &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Render::TextMeshEntry *);
	static void DestructArray(Scaleform::Render::TextMeshEntry *, unsigned long long);
	static void CopyArrayForward(Scaleform::Render::TextMeshEntry *, const Scaleform::Render::TextMeshEntry *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Render::TextMeshEntry *, const Scaleform::Render::TextMeshEntry *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::Sprite> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::Sprite> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::Sprite> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::Sprite> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::Sprite> *, const Scaleform::Ptr<Scaleform::GFx::Sprite> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::Sprite> *, const Scaleform::Ptr<Scaleform::GFx::Sprite> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<double>
{
public:
	static void Construct(void *, const double &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const double *);
	static void ConstructArray(void *, unsigned long long, const double &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(double *);
	static void DestructArray(double *, unsigned long long);
	static void CopyArrayForward(double *, const double *, unsigned long long);
	static void CopyArrayBackward(double *, const double *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::ASStringNode> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::ASStringNode> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::ASStringNode> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::ASStringNode> *, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::ASStringNode> *, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<long>
{
public:
	static void Construct(void *, const long &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const long *);
	static void ConstructArray(void *, unsigned long long, const long &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(long *);
	static void DestructArray(long *, unsigned long long);
	static void CopyArrayForward(long *, const long *, unsigned long long);
	static void CopyArrayBackward(long *, const long *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> >
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> *);
	static void DestructArray(Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> *, const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> *, const Scaleform::Ptr<Scaleform::GFx::DisplayObjectBase> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> *);
	static void DestructArray(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> *, const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Ptr<Scaleform::GFx::ASStringNode> const *>
{
public:
	static void Construct(void *, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * *);
	static void DestructArray(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * *, unsigned long long);
	static void CopyArrayForward(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * *, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * *, unsigned long long);
	static void CopyArrayBackward(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * *, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> >
{
public:
	static void Construct(void *, const Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> *);
	static void DestructArray(Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> *, const Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> *, const Scaleform::Pair<Scaleform::GFx::ASString,unsigned long> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Pair<double,unsigned long> >
{
public:
	static void Construct(void *, const Scaleform::Pair<double,unsigned long> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Pair<double,unsigned long> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Pair<double,unsigned long> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Pair<double,unsigned long> *);
	static void DestructArray(Scaleform::Pair<double,unsigned long> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Pair<double,unsigned long> *, const Scaleform::Pair<double,unsigned long> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Pair<double,unsigned long> *, const Scaleform::Pair<double,unsigned long> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<unsigned long const *>
{
public:
	static void Construct(void *, const unsigned long * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const unsigned long * *);
	static void ConstructArray(void *, unsigned long long, const unsigned long * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(const unsigned long * *);
	static void DestructArray(const unsigned long * *, unsigned long long);
	static void CopyArrayForward(const unsigned long * *, const unsigned long * *, unsigned long long);
	static void CopyArrayBackward(const unsigned long * *, const unsigned long * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<double const *>
{
public:
	static void Construct(void *, const double * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const double * *);
	static void ConstructArray(void *, unsigned long long, const double * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(const double * *);
	static void DestructArray(const double * *, unsigned long long);
	static void CopyArrayForward(const double * *, const double * *, unsigned long long);
	static void CopyArrayBackward(const double * *, const double * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<long const *>
{
public:
	static void Construct(void *, const long * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const long * *);
	static void ConstructArray(void *, unsigned long long, const long * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(const long * *);
	static void DestructArray(const long * *, unsigned long long);
	static void CopyArrayForward(const long * *, const long * *, unsigned long long);
	static void CopyArrayBackward(const long * *, const long * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Value const *>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Value * &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Value * *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Value * &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(const Scaleform::GFx::AS3::Value * *);
	static void DestructArray(const Scaleform::GFx::AS3::Value * *, unsigned long long);
	static void CopyArrayForward(const Scaleform::GFx::AS3::Value * *, const Scaleform::GFx::AS3::Value * *, unsigned long long);
	static void CopyArrayBackward(const Scaleform::GFx::AS3::Value * *, const Scaleform::GFx::AS3::Value * *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *);
	static void DestructArray(Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *, const Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *, const Scaleform::GFx::AS3::Impl::Triple<Scaleform::GFx::ASString,Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> >
{
public:
	static void Construct(void *, const Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *);
	static void DestructArray(Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static void CopyArrayForward(Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *, const Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *, const Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> >
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> *);
	static void DestructArray(Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> *, const Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> *, const Scaleform::GFx::AS3::Impl::Triple<double,Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::ConstructorMov<Scaleform::GFx::AS3::ReadArgs::AlignedStruct>
{
public:
	static void Construct(void *, const Scaleform::GFx::AS3::ReadArgs::AlignedStruct &);
	static void Construct(void *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::ReadArgs::AlignedStruct *);
	static void ConstructArray(void *, unsigned long long, const Scaleform::GFx::AS3::ReadArgs::AlignedStruct &);
	static void ConstructArray(void *, unsigned long long);
	static void Destruct(Scaleform::GFx::AS3::ReadArgs::AlignedStruct *);
	static void DestructArray(Scaleform::GFx::AS3::ReadArgs::AlignedStruct *, unsigned long long);
	static void CopyArrayForward(Scaleform::GFx::AS3::ReadArgs::AlignedStruct *, const Scaleform::GFx::AS3::ReadArgs::AlignedStruct *, unsigned long long);
	static void CopyArrayBackward(Scaleform::GFx::AS3::ReadArgs::AlignedStruct *, const Scaleform::GFx::AS3::ReadArgs::AlignedStruct *, unsigned long long);
	static bool IsMovable();
};
class Scaleform::AllocatorBaseDH<329>
{
	enum <unnamed-enum-StatId>
	{
		StatId = 329,
	};
public:
	static void * Alloc(const void *, unsigned long long, const char *, unsigned long);
	static void * Realloc(void *, unsigned long long, const char *, unsigned long);
	static void Free(void *);
};