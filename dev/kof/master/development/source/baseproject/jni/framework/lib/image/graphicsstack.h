#pragma once

class GraphicsStack
{
public:
	float * pVerCoord; // 0x8
	float * pTexCoord; // 0x10
	unsigned long * pIndex; // 0x18
	long thisID; // 0x20
	Image * image; // 0x28
	long blend; // 0x30
	unsigned char alpha; // 0x34
	long count; // 0x38
	long countMax; // 0x3C
	unsigned long color; // 0x40
	unsigned char enable; // 0x44
	GraphicsStack(const GraphicsStack &);
	GraphicsStack(long);
	GraphicsStack();
	~GraphicsStack();
	void add(long);
	GraphicsStack & operator=(const GraphicsStack &);
};