#pragma once

#include "../agstring.h"
#include "../agsingleton.h"

struct AgHttpPlatformData;

struct AgHttpRequest
{
	long id; // 0x0
	AgString url; // 0x8
	void(*callback)(AgHttpRequest *); // 0x18
	void * callbackData; // 0x20
	AgString response; // 0x28
	long status; // 0x38
	long code; // 0x3C
	AgHttpPlatformData * platformData; // 0x40
	AgHttpRequest(AgHttpRequest &);
	AgHttpRequest(const AgHttpRequest &);
	AgHttpRequest();
	~AgHttpRequest();
	AgHttpRequest & operator=(AgHttpRequest &);
	AgHttpRequest & operator=(const AgHttpRequest &);
};
class AgHttp :
	AgSingleton<AgHttp>
{
public:
	AgHttp(const AgHttp &);
	AgHttp();
	virtual ~AgHttp();
	AgHttpRequest * post(const AgString &, const AgString &, void(*)(AgHttpRequest *), void *);
	AgHttpRequest * get(const AgString &, void(*)(AgHttpRequest *), void *);
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
private:
	long m_id; // 0x8
public:
	AgHttp & operator=(const AgHttp &);
};
class AgSingleton<AgHttp>
{
protected:
	~AgSingleton<AgHttp>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgHttp & getInstance();
	static long hasInstance();
private:
	static AgHttp * createSingleton();
	static void destroySingleton(AgHttp *);
	static AgSingleton<AgHttp> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgHttp>(const AgSingleton<AgHttp> &);
	AgSingleton<AgHttp>();
	AgSingleton<AgHttp> & operator=(const AgSingleton<AgHttp> &);
};