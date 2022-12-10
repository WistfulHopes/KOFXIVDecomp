#pragma once

struct AgDisplayPlatformData
{
	AgDisplayPlatformData();
	~AgDisplayPlatformData();
	HWND__ * m_windowHandle; // 0x0
	IDirect3D9 * m_direct3d9; // 0x8
	IDirect3DDevice9 * m_direct3dDevice9; // 0x10
	_D3DCAPS9 m_direct3dCaps; // 0x18
	_D3DPRESENT_PARAMETERS_ m_direct3dPresentParams; // 0x148
	IDirect3DSurface9 * m_defaultDepth; // 0x188
	SDL_Window * m_sdlWindow; // 0x190
	void * m_sdlGlContext; // 0x198
	void * * m_sdlLoadContexts; // 0x1A0
	unsigned long m_sdlLoadContextCount; // 0x1A8
	AgMutex m_mutex; // 0x1AC
	AgMutex * m_loadingMutex; // 0x1D8
};
AgDisplayPlatformData::AgDisplayPlatformData(); // 0x140687630