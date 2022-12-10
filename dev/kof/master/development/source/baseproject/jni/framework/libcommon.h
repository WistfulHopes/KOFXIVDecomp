#pragma once

struct IUnknown
{
	HRESULT QueryInterface(const _GUID &, void * *);
	unsigned long AddRef();
	unsigned long Release();
	IUnknown(IUnknown &);
	IUnknown(const IUnknown &);
	IUnknown();
	IUnknown & operator=(IUnknown &);
	IUnknown & operator=(const IUnknown &);
};
struct _C_CONV
{
	short sx; // 0x0
	short sy; // 0x2
	short w; // 0x4
	short h; // 0x6
	short cx; // 0x8
	short cy; // 0xA
	short Flip; // 0xC
	short Image; // 0xE
};
struct ImageDataInfo
{
	const char * fileName; // 0x0
	unsigned char transparent; // 0x8
	unsigned char filter; // 0x9
	long option; // 0xC
};
struct _CGPoint
{
	float x; // 0x0
	float y; // 0x4
};
struct _CGSize
{
	float width; // 0x0
	float height; // 0x4
};
struct _CGRect
{
	_CGPoint origin; // 0x0
	_CGSize size; // 0x8
};