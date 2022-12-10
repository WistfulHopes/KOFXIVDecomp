#pragma once

struct AgDetail::Win32::CONDITION_VARIABLE
{
	unsigned char data[8]; // 0x0
};
enum AgDetail::Win32::<unnamed-enum-Infinite>
{
	Infinite = 255,
};
struct AgDetail::Win32::CRITICAL_SECTION
{
	unsigned char data[40]; // 0x0
};
struct IDirect3D9 :
	IUnknown
{
	HRESULT QueryInterface(const _GUID &, void * *) = 0;
	unsigned long AddRef() = 0;
	unsigned long Release() = 0;
	HRESULT RegisterSoftwareDevice(void *);
	unsigned long GetAdapterCount();
	HRESULT GetAdapterIdentifier(unsigned long, unsigned long, _D3DADAPTER_IDENTIFIER9 *);
	unsigned long GetAdapterModeCount(unsigned long, _D3DFORMAT);
	HRESULT EnumAdapterModes(unsigned long, _D3DFORMAT, unsigned long, _D3DDISPLAYMODE *);
	HRESULT GetAdapterDisplayMode(unsigned long, _D3DDISPLAYMODE *);
	HRESULT CheckDeviceType(unsigned long, _D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT, long);
	HRESULT CheckDeviceFormat(unsigned long, _D3DDEVTYPE, _D3DFORMAT, unsigned long, _D3DRESOURCETYPE, _D3DFORMAT);
	HRESULT CheckDeviceMultiSampleType(unsigned long, _D3DDEVTYPE, _D3DFORMAT, long, _D3DMULTISAMPLE_TYPE, unsigned long *);
	HRESULT CheckDepthStencilMatch(unsigned long, _D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT, _D3DFORMAT);
	HRESULT CheckDeviceFormatConversion(unsigned long, _D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT);
	HRESULT GetDeviceCaps(unsigned long, _D3DDEVTYPE, _D3DCAPS9 *);
	HMONITOR__ * GetAdapterMonitor(unsigned long);
	HRESULT CreateDevice(unsigned long, _D3DDEVTYPE, HWND__ *, unsigned long, _D3DPRESENT_PARAMETERS_ *, IDirect3DDevice9 * *);
	IDirect3D9(IDirect3D9 &);
	IDirect3D9(const IDirect3D9 &);
	IDirect3D9();
	IDirect3D9 & operator=(IDirect3D9 &);
	IDirect3D9 & operator=(const IDirect3D9 &);
};
struct IDirect3D9Ex :
	IDirect3D9
{
	HRESULT QueryInterface(const _GUID &, void * *) = 0;
	unsigned long AddRef() = 0;
	unsigned long Release() = 0;
	unsigned long GetAdapterCount() = 0;
	HRESULT GetAdapterIdentifier(unsigned long, unsigned long, _D3DADAPTER_IDENTIFIER9 *) = 0;
	unsigned long GetAdapterModeCount(unsigned long, _D3DFORMAT) = 0;
	HRESULT EnumAdapterModes(unsigned long, _D3DFORMAT, unsigned long, _D3DDISPLAYMODE *) = 0;
	HRESULT GetAdapterDisplayMode(unsigned long, _D3DDISPLAYMODE *) = 0;
	HRESULT CheckDeviceType(unsigned long, _D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT, long) = 0;
	HRESULT CheckDeviceFormat(unsigned long, _D3DDEVTYPE, _D3DFORMAT, unsigned long, _D3DRESOURCETYPE, _D3DFORMAT) = 0;
	HRESULT CheckDeviceMultiSampleType(unsigned long, _D3DDEVTYPE, _D3DFORMAT, long, _D3DMULTISAMPLE_TYPE, unsigned long *) = 0;
	HRESULT CheckDepthStencilMatch(unsigned long, _D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT, _D3DFORMAT) = 0;
	HRESULT CheckDeviceFormatConversion(unsigned long, _D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT) = 0;
	HRESULT GetDeviceCaps(unsigned long, _D3DDEVTYPE, _D3DCAPS9 *) = 0;
	HMONITOR__ * GetAdapterMonitor(unsigned long) = 0;
	HRESULT CreateDevice(unsigned long, _D3DDEVTYPE, HWND__ *, unsigned long, _D3DPRESENT_PARAMETERS_ *, IDirect3DDevice9 * *) = 0;
	unsigned long GetAdapterModeCountEx(unsigned long, const D3DDISPLAYMODEFILTER *);
	HRESULT EnumAdapterModesEx(unsigned long, const D3DDISPLAYMODEFILTER *, unsigned long, D3DDISPLAYMODEEX *);
	HRESULT GetAdapterDisplayModeEx(unsigned long, D3DDISPLAYMODEEX *, D3DDISPLAYROTATION *);
	HRESULT CreateDeviceEx(unsigned long, _D3DDEVTYPE, HWND__ *, unsigned long, _D3DPRESENT_PARAMETERS_ *, D3DDISPLAYMODEEX *, IDirect3DDevice9Ex * *);
	HRESULT GetAdapterLUID(unsigned long, _LUID *);
	IDirect3D9Ex(IDirect3D9Ex &);
	IDirect3D9Ex(const IDirect3D9Ex &);
	IDirect3D9Ex();
	IDirect3D9Ex & operator=(IDirect3D9Ex &);
	IDirect3D9Ex & operator=(const IDirect3D9Ex &);
};
class AgPCSystemInfo :
	AgSystemInfo
{
public:
	static AgPCSystemInfo & getInstance();
private:
	void onInit();
};