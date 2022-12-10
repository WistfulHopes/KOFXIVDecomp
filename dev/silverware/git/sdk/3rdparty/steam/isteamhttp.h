#pragma once

class ISteamHTTP
{
public:
	unsigned long CreateHTTPRequest(EHTTPMethod, const char *);
	bool SetHTTPRequestContextValue(unsigned long, unsigned long long);
	bool SetHTTPRequestNetworkActivityTimeout(unsigned long, unsigned long);
	bool SetHTTPRequestHeaderValue(unsigned long, const char *, const char *);
	bool SetHTTPRequestGetOrPostParameter(unsigned long, const char *, const char *);
	bool SendHTTPRequest(unsigned long, unsigned long long *);
	bool SendHTTPRequestAndStreamResponse(unsigned long, unsigned long long *);
	bool DeferHTTPRequest(unsigned long);
	bool PrioritizeHTTPRequest(unsigned long);
	bool GetHTTPResponseHeaderSize(unsigned long, const char *, unsigned long *);
	bool GetHTTPResponseHeaderValue(unsigned long, const char *, unsigned char *, unsigned long);
	bool GetHTTPResponseBodySize(unsigned long, unsigned long *);
	bool GetHTTPResponseBodyData(unsigned long, unsigned char *, unsigned long);
	bool GetHTTPStreamingResponseBodyData(unsigned long, unsigned long, unsigned char *, unsigned long);
	bool ReleaseHTTPRequest(unsigned long);
	bool GetHTTPDownloadProgressPct(unsigned long, float *);
	bool SetHTTPRequestRawPostBody(unsigned long, const char *, unsigned char *, unsigned long);
	unsigned long CreateCookieContainer(bool);
	bool ReleaseCookieContainer(unsigned long);
	bool SetCookie(unsigned long, const char *, const char *, const char *);
	bool SetHTTPRequestCookieContainer(unsigned long, unsigned long);
	bool SetHTTPRequestUserAgentInfo(unsigned long, const char *);
	bool SetHTTPRequestRequiresVerifiedCertificate(unsigned long, bool);
	bool SetHTTPRequestAbsoluteTimeoutMS(unsigned long, unsigned long);
	bool GetHTTPRequestWasTimedOut(unsigned long, bool *);
	ISteamHTTP(ISteamHTTP &);
	ISteamHTTP(const ISteamHTTP &);
	ISteamHTTP();
	ISteamHTTP & operator=(ISteamHTTP &);
	ISteamHTTP & operator=(const ISteamHTTP &);
};