#pragma once

class Scaleform::GFx::DrawTextManager :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>,
	Scaleform::GFx::StateBag
{
	class Viewport;
	struct TextParams;
protected:
	Scaleform::GFx::DrawTextManagerImpl * pImpl; // 0x18
	Scaleform::MemoryHeap * pHeap; // 0x20
	virtual Scaleform::GFx::StateBag * GetStateBagImpl();
	Scaleform::Render::Text::Allocator * GetTextAllocator();
	Scaleform::GFx::FontManager * GetFontManager();
	Scaleform::GFx::FontManagerStates * GetFontManagerStates();
	void CheckFontStatesChange();
	void SetBeginDisplayInvokedFlag(bool);
	void ClearBeginDisplayInvokedFlag();
	bool IsBeginDisplayInvokedFlagSet();
public:
	DrawTextManager(const Scaleform::GFx::DrawTextManager &);
	DrawTextManager(Scaleform::GFx::Loader *);
	DrawTextManager(Scaleform::GFx::MovieDef *);
	virtual ~DrawTextManager();
	void SetDefaultTextParams(const Scaleform::GFx::DrawTextManager::TextParams &);
	const Scaleform::GFx::DrawTextManager::TextParams & GetDefaultTextParams();
	Scaleform::GFx::DrawText * CreateText(const Scaleform::String &, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateText(const wchar_t *, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateText(const char *, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateText();
	Scaleform::GFx::DrawText * CreateHtmlText(const Scaleform::String &, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateHtmlText(const wchar_t *, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateHtmlText(const char *, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::Render::Size<float> GetTextExtent(const Scaleform::String &, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetTextExtent(const wchar_t *, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetTextExtent(const char *, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetHtmlTextExtent(const Scaleform::String &, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetHtmlTextExtent(const wchar_t *, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetHtmlTextExtent(const char *, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	void SwapDepths(Scaleform::GFx::DrawText *, Scaleform::GFx::DrawText *);
	void SetViewport(const Scaleform::Render::Viewport &);
	void Capture(bool);
	const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> & GetDisplayHandle();
	void SetCaptureThread(unsigned long);
	void ShutdownRendering(bool);
	bool IsShutdownRenderingComplete();
protected:
	void SetTextParams(Scaleform::Render::Text::DocView *, const Scaleform::GFx::DrawTextManager::TextParams &, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	Scaleform::Render::Text::DocView * CreateTempDoc(const Scaleform::GFx::DrawTextManager::TextParams &, Scaleform::Render::Text::TextFormat *, Scaleform::Render::Text::ParagraphFormat *, float, float);
	Scaleform::Render::ContextImpl::Context & GetRenderContext();
	Scaleform::Render::TreeRoot * GetRenderRoot();
public:
	Scaleform::GFx::DrawTextManager & operator=(const Scaleform::GFx::DrawTextManager &);
	void __dflt_ctor_closure();
};
class extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::gfxi_detail::LanguageConfigImpl>(const extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> &);
public:
	RefCountable<extension::gfxi_detail::LanguageConfigImpl>();
protected:
	extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> & operator=(const extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> &);
	~RefCountable<extension::gfxi_detail::LanguageConfigImpl>();
};
class extension::gfxi_detail::LanguageConfigImpl :
	extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>
{
public:
	LanguageConfigImpl();
private:
	LanguageConfigImpl(const extension::gfxi_detail::LanguageConfigImpl &);
	extension::gfxi_detail::LanguageConfigImpl & operator=(const extension::gfxi_detail::LanguageConfigImpl &);
	~LanguageConfigImpl();
public:
	bool addFontFileName(const char *);
	bool addFontMap(const char *, const char *, Scaleform::GFx::FontMap::MapFontFlags, float);
	class FileNameVec_t;
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_fontFileNames; // 0x8
	Scaleform::Ptr<Scaleform::GFx::FontMap> m_fontMap; // 0x20
};
class std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > :
	std::_Vector_alloc<std::_Vec_base_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > pointer;
	typedef const std::basic_string<char,std::char_traits<char>,std::allocator<char> > const_pointer;
	typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > reference;
	typedef const std::basic_string<char,std::char_traits<char>,std::allocator<char> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long, const std::string &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long, const std::string &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >();
	void _Construct_n(unsigned long long, const std::string *);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, std::integral_constant<bool,1>);
	void push_back(const std::string &);
	void push_back(std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, unsigned long long, const std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, const std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::string &);
	void assign(unsigned long long, const std::string &);
	void assign(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const std::string &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > get_allocator();
	std::string & at(unsigned long long);
	const std::string & at(unsigned long long);
	std::string & operator[](unsigned long long);
	const std::string & operator[](unsigned long long);
	const std::string * data();
	std::string * data();
	const std::string & front();
	std::string & front();
	const std::string & back();
	std::string & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(std::string *, std::string *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const std::string *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, unsigned long long, const std::string &);
	std::string * _Ufill(std::string *, unsigned long long, const std::string *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(std::string *, std::string *);
};
class extension::gfxi_detail::TranslatorImpl :
	Scaleform::GFx::Translator
{
public:
	TranslatorImpl(const extension::gfxi_detail::TranslatorImpl &);
private:
	TranslatorImpl();
public:
	virtual ~TranslatorImpl();
	virtual unsigned long GetCaps();
	virtual void Translate(Scaleform::GFx::Translator::TranslateInfo *);
	virtual bool OnWordWrapping(Scaleform::GFx::Translator::LineFormatDesc *);
	virtual bool OnBidirectionalText(const wchar_t *, unsigned long long, wchar_t *, unsigned long *, bool *);
	bool IsKeyHtml(char *);
	bool GetTextInHtml(char *, char *, long *, long *);
	void TranlateMultiKey(char *, char *);
	void setExchangedUserData(const char *, const char *);
	void clearExchangedUserData();
	bool ExchangeImageTag(char *);
	bool ExeExchangeImageTag(char *, const char *, const char *);
	bool ExeExchangeImageTag_ID(char *, const char *, AgGamepadButton);
	void SetTranslateLangName(const std::string &);
	static Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> Create();
private:
	long m_translateLanguage; // 0x20
	long m_exchangedUserDataLength; // 0x24
	char m_exchangedUserDataBase[64][32]; // 0x28
	char m_exchangedUserDataChange[256][32]; // 0x828
public:
	extension::gfxi_detail::TranslatorImpl & operator=(const extension::gfxi_detail::TranslatorImpl &);
};
void extension::gfxi_detail::TranslatorImpl::setExchangedUserData(const char * base, const char * change); // 0x140257CA0
class Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl>
{
protected:
	extension::gfxi_detail::TranslatorImpl * pObject; // 0x0
public:
	Ptr<extension::gfxi_detail::TranslatorImpl>(const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> &);
	Ptr<extension::gfxi_detail::TranslatorImpl>(extension::gfxi_detail::TranslatorImpl *);
	Ptr<extension::gfxi_detail::TranslatorImpl>(Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> &, Scaleform::PickType);
	Ptr<extension::gfxi_detail::TranslatorImpl>(Scaleform::Pickable<extension::gfxi_detail::TranslatorImpl>);
	Ptr<extension::gfxi_detail::TranslatorImpl>(extension::gfxi_detail::TranslatorImpl &);
	Ptr<extension::gfxi_detail::TranslatorImpl>();
	~Ptr<extension::gfxi_detail::TranslatorImpl>();
	bool operator==(extension::gfxi_detail::TranslatorImpl *);
	bool operator==(const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> &);
	bool operator!=(extension::gfxi_detail::TranslatorImpl *);
	bool operator!=(const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> &);
	bool operator<(const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> &);
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & operator=(Scaleform::Pickable<extension::gfxi_detail::TranslatorImpl>);
	const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & operator=(extension::gfxi_detail::TranslatorImpl &);
	const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & operator=(extension::gfxi_detail::TranslatorImpl *);
	const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & operator=(const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> &);
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & SetPtr(Scaleform::Pickable<extension::gfxi_detail::TranslatorImpl>);
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & SetPtr(extension::gfxi_detail::TranslatorImpl &);
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & SetPtr(extension::gfxi_detail::TranslatorImpl *);
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & SetPtr(const Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> &);
	void NullWithoutRelease();
	void Clear();
	extension::gfxi_detail::TranslatorImpl * & GetRawRef();
	extension::gfxi_detail::TranslatorImpl * GetPtr();
	extension::gfxi_detail::TranslatorImpl & operator*();
	extension::gfxi_detail::TranslatorImpl * operator->();
	extension::gfxi_detail::TranslatorImpl * operator class extension::gfxi_detail::TranslatorImpl *();
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & Pick(extension::gfxi_detail::TranslatorImpl *);
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & Pick(Scaleform::Pickable<extension::gfxi_detail::TranslatorImpl>);
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> & Pick(Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> &);
};
class extension::ExLockable<extension::GFXIFontManager> :
	protected extension::lockable_detail::LockableBase
{
public:
	ExLockable<extension::GFXIFontManager>();
private:
	ExLockable<extension::GFXIFontManager>(const extension::ExLockable<extension::GFXIFontManager> &);
	extension::ExLockable<extension::GFXIFontManager> & operator=(const extension::ExLockable<extension::GFXIFontManager> &);
	class ScopedLock_t;
protected:
	~ExLockable<extension::GFXIFontManager>();
};
class extension::GFXIFontManager :
	protected extension::GFXISystem,
	protected extension::ExLockable<extension::GFXIFontManager>
{
private:
	GFXIFontManager();
	GFXIFontManager(const extension::GFXIFontManager &);
	extension::GFXIFontManager & operator=(const extension::GFXIFontManager &);
	class LanguageConfig;
public:
	~GFXIFontManager();
	static extension::GFXIFontManager & Instance();
	void setFontFileLocation(const char *);
	const char * fontFileLocation();
	void registerLanguage(const char *, const extension::GFXIFontManager::LanguageConfig &);
	bool setLanguage(const char *);
	void setSaveDataTracking(bool);
	bool isSaveDataTracking();
	bool isFontLoadPending();
	const char * getCurrentFontLibFileName(unsigned long);
	void setFontStates(Scaleform::GFx::StateBag &);
	void setTranslator(Scaleform::GFx::StateBag &);
	static const char * GetDeviceFontSymbolName();
	Scaleform::GFx::DrawTextManager & getDrawTextManager();
	static Scaleform::GFx::DrawTextManager & GetDrawTextManager();
	void renderDrawText(Scaleform::Render::HAL &);
	void renderDrawTextImmediate(Scaleform::Render::HAL &, long);
	void setExchangedUserData(const char *, const char *);
	void clearExchangedUserData();
	void update();
	void waitForPendingFontLib();
private:
	void loadStartFontLib(const std::string &, const extension::gfxi_detail::LanguageConfigImpl &);
	bool checkPendingFontLib();
	void trackSaveDataLanguage();
	class FontStates;
	class LangConfigMap_t;
	Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> m_translatorImpl; // 0x40
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> m_fontProvider; // 0x48
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> m_drawTextManager; // 0x50
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > m_langConfigMap; // 0x58
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fontFileLocation; // 0x68
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_currentLangName; // 0x88
	long m_currentLanguage; // 0xA8
	extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl> m_currentLanguageConfig; // 0xB0
	extension::GFXIFontManager::FontStates m_currentFontStates; // 0xB8
	extension::GFXIFontManager::FontStates m_pendingFontStates; // 0x100
	bool m_isSaveDataTracking; // 0x148
	static const char s_deviceFontSymbolName[0]; // 0xFFFFFFFFFFFFFFFF
};
class extension::GFXIFontManager::LanguageConfig
{
public:
	LanguageConfig(const extension::GFXIFontManager::LanguageConfig &);
	LanguageConfig();
	~LanguageConfig();
	bool addFontFile(const char *);
	bool addFontMap(const char *, const char *, Scaleform::GFx::FontMap::MapFontFlags, float);
	class Impl;
private:
	extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl> m_impl; // 0x0
public:
	extension::GFXIFontManager::LanguageConfig & operator=(const extension::GFXIFontManager::LanguageConfig &);
};
class extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>
{
private:
	extension::gfxi_detail::LanguageConfigImpl * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>(const extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl> &);
	RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>(extension::gfxi_detail::LanguageConfigImpl *, bool);
	RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>(extension::gfxi_detail::LanguageConfigImpl *);
	RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>();
	~RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>();
	void swap(extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl> &);
	extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl> & operator=(const extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl> &);
	void reset(extension::gfxi_detail::LanguageConfigImpl *);
	void resetWithAddRef(extension::gfxi_detail::LanguageConfigImpl *);
	extension::gfxi_detail::LanguageConfigImpl * get();
	extension::gfxi_detail::LanguageConfigImpl & operator*();
	extension::gfxi_detail::LanguageConfigImpl * operator->();
	bool isNull();
};
class extension::GFXIFontManager::FontStates
{
public:
	FontStates();
private:
	FontStates(const extension::GFXIFontManager::FontStates &);
	extension::GFXIFontManager::FontStates & operator=(const extension::GFXIFontManager::FontStates &);
public:
	Scaleform::Ptr<Scaleform::GFx::FontLib> m_fontLib; // 0x0
	Scaleform::Ptr<Scaleform::GFx::FontMap> m_fontMap; // 0x8
	std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > m_fontFiles; // 0x10
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_translateLangName; // 0x28
	void moveFrom(extension::GFXIFontManager::FontStates &);
	~FontStates();
};
class std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<extension::GFXIMovieData,void> pointer;
	typedef const extension::BasicFutureObject<extension::GFXIMovieData,void> const_pointer;
	typedef extension::BasicFutureObject<extension::GFXIMovieData,void> reference;
	typedef const extension::BasicFutureObject<extension::GFXIMovieData,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(std::initializer_list<extension::BasicFutureObject<extension::GFXIMovieData,void> >, const std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > &);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &, const std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > &);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(const std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &, const std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > &);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(const std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(unsigned long long, const extension::BasicFutureObject<extension::GFXIMovieData,void> &, const std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > &);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(unsigned long long, const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(unsigned long long);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >(const std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > &);
	vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<extension::GFXIMovieData,void> *);
	std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > & operator=(const std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &);
	std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > & operator=(std::initializer_list<extension::BasicFutureObject<extension::GFXIMovieData,void> >);
	std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > & operator=(std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	void push_back(extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >, unsigned long long, const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >, const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >, std::initializer_list<extension::BasicFutureObject<extension::GFXIMovieData,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >, extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	void assign(unsigned long long, const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	void assign(std::initializer_list<extension::BasicFutureObject<extension::GFXIMovieData,void> >);
	~vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > get_allocator();
	extension::BasicFutureObject<extension::GFXIMovieData,void> & at(unsigned long long);
	const extension::BasicFutureObject<extension::GFXIMovieData,void> & at(unsigned long long);
	extension::BasicFutureObject<extension::GFXIMovieData,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<extension::GFXIMovieData,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<extension::GFXIMovieData,void> * data();
	extension::BasicFutureObject<extension::GFXIMovieData,void> * data();
	const extension::BasicFutureObject<extension::GFXIMovieData,void> & front();
	extension::BasicFutureObject<extension::GFXIMovieData,void> & front();
	const extension::BasicFutureObject<extension::GFXIMovieData,void> & back();
	extension::BasicFutureObject<extension::GFXIMovieData,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>,std::allocator<extension::BasicFutureObject<extension::GFXIMovieData,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<extension::GFXIMovieData,void> *, extension::BasicFutureObject<extension::GFXIMovieData,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<extension::GFXIMovieData,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::GFXIMovieData,void> > > >, unsigned long long, const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	extension::BasicFutureObject<extension::GFXIMovieData,void> * _Ufill(extension::BasicFutureObject<extension::GFXIMovieData,void> *, unsigned long long, const extension::BasicFutureObject<extension::GFXIMovieData,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<extension::GFXIMovieData,void> *, extension::BasicFutureObject<extension::GFXIMovieData,void> *);
};
extension::GFXIFontManager::FontStates::FontStates(); // 0x1402743F0
void extension::GFXIFontManager::FontStates::moveFrom(extension::GFXIFontManager::FontStates & o); // 0x140274460
class std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > :
	std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> >, const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> >, const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> >);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_t();
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> >);
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > & operator=(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > &);
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > & operator=(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > &);
	extension::GFXIFontManager::LanguageConfig & operator[](const std::string &);
	extension::GFXIFontManager::LanguageConfig & operator[](std::string &);
	void swap(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > > &);
	const extension::GFXIFontManager::LanguageConfig & at(const std::string &);
	extension::GFXIFontManager::LanguageConfig & at(const std::string &);
	~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_();
};
class Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider>
{
protected:
	extension::gfxi_detail::CustomFontProvider * pObject; // 0x0
public:
	Ptr<extension::gfxi_detail::CustomFontProvider>(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	Ptr<extension::gfxi_detail::CustomFontProvider>(extension::gfxi_detail::CustomFontProvider *);
	Ptr<extension::gfxi_detail::CustomFontProvider>(Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &, Scaleform::PickType);
	Ptr<extension::gfxi_detail::CustomFontProvider>(Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>);
	Ptr<extension::gfxi_detail::CustomFontProvider>(extension::gfxi_detail::CustomFontProvider &);
	Ptr<extension::gfxi_detail::CustomFontProvider>();
	~Ptr<extension::gfxi_detail::CustomFontProvider>();
	bool operator==(extension::gfxi_detail::CustomFontProvider *);
	bool operator==(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	bool operator!=(extension::gfxi_detail::CustomFontProvider *);
	bool operator!=(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	bool operator<(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & operator=(Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>);
	const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & operator=(extension::gfxi_detail::CustomFontProvider &);
	const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & operator=(extension::gfxi_detail::CustomFontProvider *);
	const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & operator=(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & SetPtr(Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & SetPtr(extension::gfxi_detail::CustomFontProvider &);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & SetPtr(extension::gfxi_detail::CustomFontProvider *);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & SetPtr(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	void NullWithoutRelease();
	void Clear();
	extension::gfxi_detail::CustomFontProvider * & GetRawRef();
	extension::gfxi_detail::CustomFontProvider * GetPtr();
	extension::gfxi_detail::CustomFontProvider & operator*();
	extension::gfxi_detail::CustomFontProvider * operator->();
	extension::gfxi_detail::CustomFontProvider * operator class extension::gfxi_detail::CustomFontProvider *();
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & Pick(extension::gfxi_detail::CustomFontProvider *);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & Pick(Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & Pick(Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
};
class Scaleform::Ptr<Scaleform::GFx::DrawTextManager>
{
protected:
	Scaleform::GFx::DrawTextManager * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DrawTextManager>(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	Ptr<Scaleform::GFx::DrawTextManager>(Scaleform::GFx::DrawTextManager *);
	Ptr<Scaleform::GFx::DrawTextManager>(Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DrawTextManager>(Scaleform::Pickable<Scaleform::GFx::DrawTextManager>);
	Ptr<Scaleform::GFx::DrawTextManager>(Scaleform::GFx::DrawTextManager &);
	Ptr<Scaleform::GFx::DrawTextManager>();
	~Ptr<Scaleform::GFx::DrawTextManager>();
	bool operator==(Scaleform::GFx::DrawTextManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	bool operator!=(Scaleform::GFx::DrawTextManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & operator=(Scaleform::Pickable<Scaleform::GFx::DrawTextManager>);
	const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & operator=(Scaleform::GFx::DrawTextManager &);
	const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & operator=(Scaleform::GFx::DrawTextManager *);
	const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & operator=(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DrawTextManager>);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & SetPtr(Scaleform::GFx::DrawTextManager &);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & SetPtr(Scaleform::GFx::DrawTextManager *);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DrawTextManager * & GetRawRef();
	Scaleform::GFx::DrawTextManager * GetPtr();
	Scaleform::GFx::DrawTextManager & operator*();
	Scaleform::GFx::DrawTextManager * operator->();
	Scaleform::GFx::DrawTextManager * operator class Scaleform::GFx::DrawTextManager *();
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & Pick(Scaleform::GFx::DrawTextManager *);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & Pick(Scaleform::Pickable<Scaleform::GFx::DrawTextManager>);
	Scaleform::Ptr<Scaleform::GFx::DrawTextManager> & Pick(Scaleform::Ptr<Scaleform::GFx::DrawTextManager> &);
};