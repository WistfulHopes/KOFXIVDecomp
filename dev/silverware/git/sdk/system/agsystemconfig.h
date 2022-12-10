#pragma once

class AgSystemConfig
{
public:
	long m_defaultAgeRestriction; // 0x0
	AgSystemConfig(AgSystemConfig &);
	AgSystemConfig(const AgSystemConfig &);
	AgSystemConfig();
	long deserialize();
	const AgJsonObject & getJsonConfig();
protected:
	AgJsonObject m_configJson; // 0x8
public:
	~AgSystemConfig();
	AgSystemConfig & operator=(AgSystemConfig &);
	AgSystemConfig & operator=(const AgSystemConfig &);
};