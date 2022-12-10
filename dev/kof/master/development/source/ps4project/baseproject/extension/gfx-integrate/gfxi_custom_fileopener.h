#pragma once

class extension::gfxi_detail::CustomFileOpener :
	Scaleform::GFx::FileOpener
{
public:
	CustomFileOpener(const extension::gfxi_detail::CustomFileOpener &);
private:
	CustomFileOpener();
	virtual ~CustomFileOpener();
public:
	virtual Scaleform::File * OpenFile(const char *, long, long);
	static Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> Create();
	extension::gfxi_detail::CustomFileOpener & operator=(const extension::gfxi_detail::CustomFileOpener &);
};