#pragma once

void extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>::release(); // 0x140278E50
void extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>::release(); // 0x1402BB090
extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >::~RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >(); // 0x14009E040
extension::RefCountablePtr<extension::AsyncContent<Image> >::~RefCountablePtr<extension::AsyncContent<Image> >(); // 0x14009DFC0
extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >::~RefCountablePtr<extension::AsyncContent<OGLFigure> >(); // 0x14009DFF0
extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>::~RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>(); // 0x140098480
extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(); // 0x1400BFED0
extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >::~RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >(); // 0x1400FAD70
extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::~RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>(); // 0x140098480
extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >::~RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >(); // 0x14011C790
extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>::~RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>(); // 0x140098480
extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >::~RefCountablePtr<extension::AsyncContent<OGLCurve> >(); // 0x140127870
extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >::~RefCountablePtr<extension::AsyncContent<OGLTexture> >(); // 0x14009DFC0
extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body>::~RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body>(); // 0x140098480
extension::RefCountablePtr<extension::AsyncContent<OGLMirror> >::~RefCountablePtr<extension::AsyncContent<OGLMirror> >(); // 0x1401A85D0
extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >::~RefCountablePtr<extension::AsyncContent<OGLMotion> >(); // 0x1401A8620
extension::RefCountablePtr<extension::AsyncContent<StageResources> >::~RefCountablePtr<extension::AsyncContent<StageResources> >(); // 0x140216FD0
extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>::~RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>(); // 0x140098480
extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >::~RefCountablePtr<extension::AsyncContent<OGLCamera> >(); // 0x140251060
extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >::~RefCountablePtr<extension::AsyncContent<OGLSecondary> >(); // 0x140250FE0
extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>::~RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>(); // 0x140277030
extension::RefCountablePtr<extension::gfxi_detail::FunctionTable>::~RefCountablePtr<extension::gfxi_detail::FunctionTable>(); // 0x140278BA0
extension::RefCountablePtr<extension::GFXIKeyMapping::MapImpl>::~RefCountablePtr<extension::GFXIKeyMapping::MapImpl>(); // 0x14027CBA0
extension::RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const >::~RefCountablePtr<extension::exsound_detail::SoundBankElementDefinition const >(); // 0x1402B9AD0
extension::RefCountablePtr<extension::AsyncContent<CMediaSound> >::~RefCountablePtr<extension::AsyncContent<CMediaSound> >(); // 0x1402B9740
extension::RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >::~RefCountablePtr<extension::AsyncContent<extension::exsound_detail::SoundBankImpl> >(); // 0x1402B9930
extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>::~RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(); // 0x140098480
extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>::~RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>(); // 0x1402B9AC0
extension::RefCountablePtr<extension::SoundList::PreloadedSound>::~RefCountablePtr<extension::SoundList::PreloadedSound>(); // 0x1402B9450
extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>::operator=(const extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet> & other); // 0x1402B9A30
extension::RefCountablePtr<extension::SoundList::PreloadedSound> & extension::RefCountablePtr<extension::SoundList::PreloadedSound>::operator=(const extension::RefCountablePtr<extension::SoundList::PreloadedSound> & other); // 0x1402B93C0
extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> & extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::operator=(const extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> & other); // 0x1402B96B0
void extension::RefCountablePtr<extension::SoundList::PreloadedSound>::reset(extension::SoundList::PreloadedSound * p); // 0x1402B9350
void extension::RefCountablePtr<extension::exsound_detail::PreloadedAudioSet>::resetWithAddRef(extension::exsound_detail::PreloadedAudioSet * p); // 0x1402B99B0
void extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(); // 0x140277550
void extension::RefCountable<extension::gfxi_detail::FunctionTable>::release(); // 0x1402794B0
class extension::RefCountableWeakSupportBase
{
	class WeakProxy;
protected:
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> m_refCount; // 0x8
	void addRef();
	void release();
	RefCountableWeakSupportBase(const extension::RefCountableWeakSupportBase &);
	RefCountableWeakSupportBase();
	~RefCountableWeakSupportBase();
	extension::RefCountableWeakSupportBase & operator=(const extension::RefCountableWeakSupportBase &);
};
class extension::RefCountableWeakSupportBase::WeakProxy :
	extension::RefCountable<extension::RefCountableWeakSupportBase::WeakProxy>
{
private:
	extension::RefCountableWeakSupportBase * m_principal; // 0x8
	extension::AtomicInt m_sharedCount; // 0x10
	WeakProxy(extension::RefCountableWeakSupportBase *);
	WeakProxy(const extension::RefCountableWeakSupportBase::WeakProxy &);
	extension::RefCountableWeakSupportBase::WeakProxy & operator=(const extension::RefCountableWeakSupportBase::WeakProxy &);
	~WeakProxy();
public:
	extension::RefCountableWeakSupportBase * addRefSharedIfNotZero();
	long long sharedCount();
};
class extension::RefCountable<extension::RefCountableWeakSupportBase::WeakProxy>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::RefCountableWeakSupportBase::WeakProxy>(const extension::RefCountable<extension::RefCountableWeakSupportBase::WeakProxy> &);
public:
	RefCountable<extension::RefCountableWeakSupportBase::WeakProxy>();
protected:
	extension::RefCountable<extension::RefCountableWeakSupportBase::WeakProxy> & operator=(const extension::RefCountable<extension::RefCountableWeakSupportBase::WeakProxy> &);
	~RefCountable<extension::RefCountableWeakSupportBase::WeakProxy>();
};
class extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy>
{
private:
	extension::RefCountableWeakSupportBase::WeakProxy * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy>(const extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> &);
	RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy>(extension::RefCountableWeakSupportBase::WeakProxy *, bool);
	RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy>(extension::RefCountableWeakSupportBase::WeakProxy *);
	RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy>();
	~RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy>();
	void swap(extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> &);
	extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> & operator=(const extension::RefCountablePtr<extension::RefCountableWeakSupportBase::WeakProxy> &);
	void reset(extension::RefCountableWeakSupportBase::WeakProxy *);
	void resetWithAddRef(extension::RefCountableWeakSupportBase::WeakProxy *);
	extension::RefCountableWeakSupportBase::WeakProxy * get();
	extension::RefCountableWeakSupportBase::WeakProxy & operator*();
	extension::RefCountableWeakSupportBase::WeakProxy * operator->();
	bool isNull();
};
extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>::lock(); // 0x1400A38E0
extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(); // 0x1400A38E0
extension::RefCountablePtr<extension::BasicFutureObject<OGLCurve,void>::Body> extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>::lock(); // 0x1400A38E0
extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>::lock(); // 0x1400A38E0
extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>::lock(); // 0x1400A38E0
extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>::lock(); // 0x1400A38E0
extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body>::lock(); // 0x1400A38E0
extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>::lock(); // 0x1400A38E0
extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer>::lock(); // 0x1400A38E0