#pragma once

enum Scaleform::GStatRenderer
{
	StatRender_Default = 64,
	StatRender_Mem = 65,
	StatRender_MeshStaging_Mem = 66,
	StatRender_RenderPipeline_Mem = 67,
	StatRender_MeshCacheMgmt_Mem = 68,
	StatRender_Context_Mem = 69,
	StatRender_NodeData_Mem = 70,
	StatRender_TreeCache_Mem = 71,
	StatRender_TextureManager_Mem = 72,
	StatRender_MatrixPool_Mem = 73,
	StatRender_Text_Mem = 74,
	StatRender_Font_Mem = 75,
};