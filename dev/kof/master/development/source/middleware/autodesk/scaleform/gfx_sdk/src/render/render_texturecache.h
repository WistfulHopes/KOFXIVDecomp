#pragma once

class Scaleform::RefCountBase<Scaleform::Render::TextureCache,72> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 72,
	};
public:
	RefCountBase<Scaleform::Render::TextureCache,72>(Scaleform::RefCountBase<Scaleform::Render::TextureCache,72> &);
	RefCountBase<Scaleform::Render::TextureCache,72>(const Scaleform::RefCountBase<Scaleform::Render::TextureCache,72> &);
	RefCountBase<Scaleform::Render::TextureCache,72>();
	virtual ~RefCountBase<Scaleform::Render::TextureCache,72>();
	Scaleform::RefCountBase<Scaleform::Render::TextureCache,72> & operator=(Scaleform::RefCountBase<Scaleform::Render::TextureCache,72> &);
	Scaleform::RefCountBase<Scaleform::Render::TextureCache,72> & operator=(const Scaleform::RefCountBase<Scaleform::Render::TextureCache,72> &);
};
class Scaleform::Render::TextureCache :
	Scaleform::RefCountBase<Scaleform::Render::TextureCache,72>
{
public:
	virtual ~TextureCache();
	void BeginFrame();
	void EndFrame();
	void TextureCreation(Scaleform::Render::Texture *);
	void TextureDestroyed(Scaleform::Render::Texture *);
	void TextureReference(Scaleform::Render::Texture *);
	void TextureEvicted(Scaleform::Render::Texture *);
	void PerformEvictionCheck();
	TextureCache(const Scaleform::Render::TextureCache &);
	TextureCache();
	Scaleform::Render::TextureCache & operator=(const Scaleform::Render::TextureCache &);
};