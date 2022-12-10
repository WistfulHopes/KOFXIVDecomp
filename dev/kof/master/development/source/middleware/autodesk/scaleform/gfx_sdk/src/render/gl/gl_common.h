#pragma once

enum Scaleform::Render::GL::CapFlags
{
	Cap_Align = 3,
	Cap_NoBatching = 16,
	Cap_MapBuffer = 32,
	Cap_MapBufferRange = 64,
	Cap_BufferUpdate = 128,
	Cap_UseMeshBuffers = 224,
	Cap_NoDynamicLoops = 256,
	Cap_BinaryShaders = 512,
	Cap_NoDerivatives = 1024,
	Cap_Instancing = 2048,
	Cap_NoVAO = 4096,
	Cap_Sync = 8192,
	Cap_FBORedundancy = 16384,
	Cap_MaxUniforms = -65536,
	Cap_MaxUniforms_Shift = 16,
};