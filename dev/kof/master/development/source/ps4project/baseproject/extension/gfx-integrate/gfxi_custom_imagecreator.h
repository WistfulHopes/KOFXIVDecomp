#pragma once

class extension::gfxi_detail::CustomImageCreator :
	Scaleform::GFx::ImageCreator
{
	class Base_t;
	class TextureManager;
	class Image;
	class ImageSource;
	class ImageCreateInfo;
	struct ImageCreateExportInfo;
private:
	CustomImageCreator(Scaleform::Render::TextureManager *);
	CustomImageCreator(const extension::gfxi_detail::CustomImageCreator &);
	extension::gfxi_detail::CustomImageCreator & operator=(const extension::gfxi_detail::CustomImageCreator &);
public:
	virtual ~CustomImageCreator();
	static Scaleform::Ptr<Scaleform::GFx::ImageCreator> Create(Scaleform::Render::TextureManager *);
	virtual Scaleform::Render::Image * LoadProtocolImage(const Scaleform::GFx::ImageCreateInfo &, const Scaleform::String &);
	virtual Scaleform::Render::Image * LoadImageFile(const Scaleform::GFx::ImageCreateInfo &, const Scaleform::String &);
	virtual Scaleform::Render::Image * LoadExportedImage(const Scaleform::GFx::ImageCreateExportInfo &, const Scaleform::String &);
	virtual Scaleform::Render::Image * CreateImage(const Scaleform::GFx::ImageCreateInfo &, Scaleform::Render::ImageSource *);
};