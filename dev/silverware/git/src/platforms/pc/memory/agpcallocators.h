#pragma once

class AgPCAllocators :
	AgAllocators
{
public:
	static AgPCAllocators & getInstance();
	AgPCSystemAllocator & getSystemAllocator();
protected:
	AgPCSystemAllocator m_systemAllocator; // 0x8
public:
	AgPCAllocators(AgPCAllocators &);
	AgPCAllocators(const AgPCAllocators &);
	AgPCAllocators();
	virtual ~AgPCAllocators();
	AgPCAllocators & operator=(AgPCAllocators &);
	AgPCAllocators & operator=(const AgPCAllocators &);
};