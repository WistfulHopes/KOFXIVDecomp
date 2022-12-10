#pragma once

struct ConstantBase2DFog
{
	Matrix4Unaligned u_ModelViewProj; // 0x0
	Vector4Unaligned u_color; // 0x40
	Matrix4Unaligned u_ModelView; // 0x50
	Vector4Unaligned u_fogColor; // 0x90
	float u_fogParam1; // 0xA0
	float u_fogParam2; // 0xA4
};