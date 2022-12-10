#pragma once

class InputKeyRecord
{
	struct RecordKey;
private:
	std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > pKeyBuffer; // 0x0
	unsigned long uiPlayCount; // 0x8
	unsigned long uiMaxRecordFrame; // 0xC
	enum <unnamed-enum-KEY_BUFFER_SIZE>
	{
		KEY_BUFFER_SIZE = 13,
		DEFAULT_KEY_RECORD_MAX_FRAME = 6000,
	};
	long CheckAngleKey(const InputKeyRecord::RecordKey &, const long);
public:
	InputKeyRecord();
	~InputKeyRecord();
	void ClearBuffer();
	void SetMaxRecordFrame(unsigned long);
	void AddKey(const long, const long);
	long GetKey(const long);
	long GetKey(unsigned long, const long);
	InputKeyRecord::RecordKey GetRecordKey(unsigned long);
	unsigned long GetTotalRecordFrame();
	unsigned long GetRemainderFrame();
	bool IsEmpty();
	void ClearPlayCount();
	unsigned long GetPlayCount();
	bool IsPlayEnd();
};
struct InputKeyRecord::RecordKey
{
	long iKey; // 0x0
	long iCAngle; // 0x4
};
class std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > :
	std::_Unique_ptr_base<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >
{
	class _Myt;
	class _Mybase;
	typedef RestrictRingBuffer<InputKeyRecord::RecordKey> pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >(const std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > &);
	unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >(std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > &);
	unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >(RestrictRingBuffer<InputKeyRecord::RecordKey> *, std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > &);
	unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >(RestrictRingBuffer<InputKeyRecord::RecordKey> *, const std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > &);
	unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >(RestrictRingBuffer<InputKeyRecord::RecordKey> *);
	unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >(void *);
	unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >();
	std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > & operator=(const std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > &);
	std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > & operator=(std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > &);
	std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > & operator=(void *);
	void swap(std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > > &);
	~unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >();
	RestrictRingBuffer<InputKeyRecord::RecordKey> & operator*();
	RestrictRingBuffer<InputKeyRecord::RecordKey> * operator->();
	RestrictRingBuffer<InputKeyRecord::RecordKey> * get();
	bool operator bool();
	RestrictRingBuffer<InputKeyRecord::RecordKey> * release();
	void reset(RestrictRingBuffer<InputKeyRecord::RecordKey> *);
};
class RestrictRingBuffer<InputKeyRecord::RecordKey>
{
private:
	RestrictRingBuffer<InputKeyRecord::RecordKey> & operator=(const RestrictRingBuffer<InputKeyRecord::RecordKey> &);
	unsigned long uiBufferSize; // 0x8
	unsigned long uiBufferMask; // 0xC
	unsigned long uiDataSize; // 0x10
	InputKeyRecord::RecordKey * pBuffer; // 0x18
	unsigned long uiBeginIndex; // 0x20
	unsigned long uiEndIndex; // 0x24
	unsigned long uiDelay; // 0x28
public:
	RestrictRingBuffer<InputKeyRecord::RecordKey>(const RestrictRingBuffer<InputKeyRecord::RecordKey> &);
	RestrictRingBuffer<InputKeyRecord::RecordKey>(unsigned long);
	~RestrictRingBuffer<InputKeyRecord::RecordKey>();
	void Clear();
	void Add(const InputKeyRecord::RecordKey &);
	void SetDelay(unsigned long);
	InputKeyRecord::RecordKey * Get(unsigned long);
	InputKeyRecord::RecordKey * GetRev(unsigned long);
	InputKeyRecord::RecordKey * GetBegin();
	InputKeyRecord::RecordKey * GetEnd();
	InputKeyRecord::RecordKey * GetDelayRev(unsigned long);
	bool IsEmpty();
	bool IsFull();
	unsigned long GetBufferSize();
	unsigned long GetDataSize();
	unsigned long GetValidDelayDataSize();
	unsigned long GetDelay();
};
InputKeyRecord::InputKeyRecord(); // 0x1400BC220
std::unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >::~unique_ptr<RestrictRingBuffer<InputKeyRecord::RecordKey>,std::default_delete<RestrictRingBuffer<InputKeyRecord::RecordKey> > >(); // 0x1400983B0