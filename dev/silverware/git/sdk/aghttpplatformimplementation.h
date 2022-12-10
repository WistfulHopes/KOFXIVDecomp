#pragma once

class AgHttpPlatformImplementation
{
public:
	AgHttpPlatformImplementation();
	~AgHttpPlatformImplementation();
	static AgHttpRequest * post(AgHttpRequest *, const AgString &);
	static AgHttpRequest * get(AgHttpRequest *);
private:
	static AgHttpRequest * sendRequest(AgHttpRequest *, const AgString &, const AgString &);
};