#pragma once

class AgRenderTypeConverter
{
public:
	static unsigned long getMultisampleTypeD3D(AgMultisampleType);
	static long getNumMSAASamples(AgMultisampleType);
};