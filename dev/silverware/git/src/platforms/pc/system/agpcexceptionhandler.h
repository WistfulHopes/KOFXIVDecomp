#pragma once

class AgPCExceptionHandler :
	AgExceptionHandler
{
public:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
private:
	AgExceptionHandlerInternalData * m_internalData; // 0x48
public:
	AgPCExceptionHandler();
	virtual ~AgPCExceptionHandler();
};