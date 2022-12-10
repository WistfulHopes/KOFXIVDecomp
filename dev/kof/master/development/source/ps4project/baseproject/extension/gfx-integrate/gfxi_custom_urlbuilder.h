#pragma once

class extension::gfxi_detail::CustomURLBuilder :
	Scaleform::GFx::URLBuilder
{
public:
	CustomURLBuilder();
private:
	CustomURLBuilder(const extension::gfxi_detail::CustomURLBuilder &);
	extension::gfxi_detail::CustomURLBuilder & operator=(const extension::gfxi_detail::CustomURLBuilder &);
public:
	virtual ~CustomURLBuilder();
	virtual void BuildURL(Scaleform::String *, const Scaleform::GFx::URLBuilder::LocationInfo &);
	static Scaleform::Ptr<Scaleform::GFx::URLBuilder> Create();
};