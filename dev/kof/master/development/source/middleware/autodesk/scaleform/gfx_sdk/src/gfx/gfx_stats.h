#pragma once

enum Scaleform::StatGroup
{
	StatGroup_Renderer = 64,
	StatGroup_RenderGen = 128,
	StatGroup_GFxFontCache = 192,
	StatGroup_GFxMovieData = 256,
	StatGroup_GFxMovieView = 320,
	StatGroup_GFxRenderCache = 384,
	StatGroup_GFxPlayer = 448,
	StatGroup_GFxIME = 512,
	StatGroup_GFxAmp = 576,
	Stat_Image_Mem = 3,
	Stat_String_Mem = 4,
	Stat_Debug_Mem = 5,
	Stat_DebugHUD_Mem = 6,
	Stat_DebugTracker_Mem = 7,
	Stat_StatBag_Mem = 8,
};
enum Scaleform::HeapId
{
	HeapId_Global = 1,
	HeapId_MovieDef = 2,
	HeapId_MovieView = 3,
	HeapId_MovieData = 4,
	HeapId_Images = 5,
	HeapId_OtherHeaps = 6,
	HeapId_HUDHeaps = 7,
	HeapId_Video = 8,
};