#pragma once

enum Fw::<unnamed-enum-WORD_FILTER_OK>
{
	WORD_FILTER_OK = 0,
	WORD_FILTER_ILLIGAL = 1,
	WORD_FILTER_ERROR = 2,
};
enum Fw::<unnamed-enum-WORD_FILTER_FINISH>
{
	WORD_FILTER_FINISH = 0,
	WORD_FILTER_RUNNING = 1,
};
class Fw::WordFilterSystem
{
private:
	static Fw::WordFilterSystem * instance_; // 0xFFFFFFFFFFFFFFFF
public:
	static Fw::WordFilterSystem * GetInstance();
	bool CheckFilterSync(const char *);
	long CheckFilterWait(long *, char *, long, const char *);
	void EndFilter();
};