#pragma once

struct AgPrepareDumpEvent
{
	AgString miniDumpComment; // 0x0
	AgPrepareDumpEvent(AgPrepareDumpEvent &);
	AgPrepareDumpEvent(const AgPrepareDumpEvent &);
	AgPrepareDumpEvent();
	~AgPrepareDumpEvent();
	AgPrepareDumpEvent & operator=(AgPrepareDumpEvent &);
	AgPrepareDumpEvent & operator=(const AgPrepareDumpEvent &);
};
class AgExceptionHandler :
	AgSingleton<AgExceptionHandler>
{
public:
	AgEventDispatcher<AgPrepareDumpEvent> CommentSet; // 0x8
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	static AgExceptionHandler * createSingleton();
	AgExceptionHandler();
	virtual ~AgExceptionHandler();
};
class AgSingleton<AgExceptionHandler>
{
protected:
	~AgSingleton<AgExceptionHandler>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgExceptionHandler & getInstance();
	static long hasInstance();
private:
	static AgExceptionHandler * createSingleton();
	static void destroySingleton(AgExceptionHandler *);
	static AgSingleton<AgExceptionHandler> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgExceptionHandler>(const AgSingleton<AgExceptionHandler> &);
	AgSingleton<AgExceptionHandler>();
	AgSingleton<AgExceptionHandler> & operator=(const AgSingleton<AgExceptionHandler> &);
};
class AgEventDispatcher<AgPrepareDumpEvent> :
	AgEventDispatcherBase<AgPrepareDumpEvent>
{
public:
	void invoke(const AgPrepareDumpEvent &);
	void operator()(const AgPrepareDumpEvent &);
	AgEventDispatcher<AgPrepareDumpEvent>();
	~AgEventDispatcher<AgPrepareDumpEvent>();
};
long AgExceptionHandler::onSingletonExit(); // 0x1400482A0