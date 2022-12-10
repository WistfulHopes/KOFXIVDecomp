#pragma once

class ISteamHTMLSurface
{
public:
	~ISteamHTMLSurface();
	bool Init();
	bool Shutdown();
	unsigned long long CreateBrowser(const char *, const char *);
	void RemoveBrowser(unsigned long);
	void LoadURL(unsigned long, const char *, const char *);
	void SetSize(unsigned long, unsigned long, unsigned long);
	void StopLoad(unsigned long);
	void Reload(unsigned long);
	void GoBack(unsigned long);
	void GoForward(unsigned long);
	void AddHeader(unsigned long, const char *, const char *);
	void ExecuteJavascript(unsigned long, const char *);
	enum EHTMLMouseButton
	{
		eHTMLMouseButton_Left = 0,
		eHTMLMouseButton_Right = 1,
		eHTMLMouseButton_Middle = 2,
	};
	void MouseUp(unsigned long, ISteamHTMLSurface::EHTMLMouseButton);
	void MouseDown(unsigned long, ISteamHTMLSurface::EHTMLMouseButton);
	void MouseDoubleClick(unsigned long, ISteamHTMLSurface::EHTMLMouseButton);
	void MouseMove(unsigned long, long, long);
	void MouseWheel(unsigned long, long);
	enum EMouseCursor
	{
		dc_user = 0,
		dc_none = 1,
		dc_arrow = 2,
		dc_ibeam = 3,
		dc_hourglass = 4,
		dc_waitarrow = 5,
		dc_crosshair = 6,
		dc_up = 7,
		dc_sizenw = 8,
		dc_sizese = 9,
		dc_sizene = 10,
		dc_sizesw = 11,
		dc_sizew = 12,
		dc_sizee = 13,
		dc_sizen = 14,
		dc_sizes = 15,
		dc_sizewe = 16,
		dc_sizens = 17,
		dc_sizeall = 18,
		dc_no = 19,
		dc_hand = 20,
		dc_blank = 21,
		dc_middle_pan = 22,
		dc_north_pan = 23,
		dc_north_east_pan = 24,
		dc_east_pan = 25,
		dc_south_east_pan = 26,
		dc_south_pan = 27,
		dc_south_west_pan = 28,
		dc_west_pan = 29,
		dc_north_west_pan = 30,
		dc_alias = 31,
		dc_cell = 32,
		dc_colresize = 33,
		dc_copycur = 34,
		dc_verticaltext = 35,
		dc_rowresize = 36,
		dc_zoomin = 37,
		dc_zoomout = 38,
		dc_help = 39,
		dc_custom = 40,
		dc_last = 41,
	};
	enum EHTMLKeyModifiers
	{
		k_eHTMLKeyModifier_None = 0,
		k_eHTMLKeyModifier_AltDown = 1,
		k_eHTMLKeyModifier_CtrlDown = 2,
		k_eHTMLKeyModifier_ShiftDown = 4,
	};
	void KeyDown(unsigned long, unsigned long, ISteamHTMLSurface::EHTMLKeyModifiers);
	void KeyUp(unsigned long, unsigned long, ISteamHTMLSurface::EHTMLKeyModifiers);
	void KeyChar(unsigned long, unsigned long, ISteamHTMLSurface::EHTMLKeyModifiers);
	void SetHorizontalScroll(unsigned long, unsigned long);
	void SetVerticalScroll(unsigned long, unsigned long);
	void SetKeyFocus(unsigned long, bool);
	void ViewSource(unsigned long);
	void CopyToClipboard(unsigned long);
	void PasteFromClipboard(unsigned long);
	void Find(unsigned long, const char *, bool, bool);
	void StopFind(unsigned long);
	void GetLinkAtPosition(unsigned long, long, long);
	void SetCookie(const char *, const char *, const char *, const char *, unsigned long, bool, bool);
	void SetPageScaleFactor(unsigned long, float, long, long);
	void SetBackgroundMode(unsigned long, bool);
	void AllowStartRequest(unsigned long, bool);
	void JSDialogResponse(unsigned long, bool);
	void FileLoadDialogResponse(unsigned long, const char * *);
	ISteamHTMLSurface(const ISteamHTMLSurface &);
	ISteamHTMLSurface();
	ISteamHTMLSurface & operator=(const ISteamHTMLSurface &);
};