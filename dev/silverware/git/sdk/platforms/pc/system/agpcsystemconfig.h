#pragma once

class AgPCSystemConfig :
	AgSystemConfig
{
public:
	AgString m_directory; // 0x20
	unsigned long m_numGlLoadingContexts; // 0x30
	AgPCSystemConfig(AgPCSystemConfig &);
	AgPCSystemConfig(const AgPCSystemConfig &);
	AgPCSystemConfig();
	long deserialize();
	~AgPCSystemConfig();
	AgPCSystemConfig & operator=(AgPCSystemConfig &);
	AgPCSystemConfig & operator=(const AgPCSystemConfig &);
};