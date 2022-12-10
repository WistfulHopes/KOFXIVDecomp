#pragma once

struct _stb_vorbis_alloc
{
	char * alloc_buffer; // 0x0
	long alloc_buffer_length_in_bytes; // 0x8
};
struct stb_vorbis_info
{
	unsigned long sample_rate; // 0x0
	long channels; // 0x4
	unsigned long setup_memory_required; // 0x8
	unsigned long setup_temp_memory_required; // 0xC
	unsigned long temp_memory_required; // 0x10
	long max_frame_size; // 0x14
};
class AgPointer<AgSharedInstance<AgMutex> >
{
public:
	AgPointer<AgSharedInstance<AgMutex> >(const AgReference<AgSharedInstance<AgMutex> > &);
	AgPointer<AgSharedInstance<AgMutex> >(AgPointer<AgSharedInstance<AgMutex> > &);
	AgPointer<AgSharedInstance<AgMutex> >(const AgPointer<AgSharedInstance<AgMutex> > &);
	AgPointer<AgSharedInstance<AgMutex> >(AgSharedInstance<AgMutex> *);
	AgPointer<AgSharedInstance<AgMutex> >();
	~AgPointer<AgSharedInstance<AgMutex> >();
	AgPointer<AgSharedInstance<AgMutex> > & operator=(AgPointer<AgSharedInstance<AgMutex> > &);
	AgPointer<AgSharedInstance<AgMutex> > & operator=(const AgReference<AgSharedInstance<AgMutex> > &);
	AgPointer<AgSharedInstance<AgMutex> > & operator=(const AgPointer<AgSharedInstance<AgMutex> > &);
	AgPointer<AgSharedInstance<AgMutex> > & operator=(AgSharedInstance<AgMutex> *);
	bool operator<(const AgPointer<AgSharedInstance<AgMutex> > &);
	AgSharedInstance<AgMutex> * operator->();
	AgSharedInstance<AgMutex> & operator*();
	bool operator==(const AgPointer<AgSharedInstance<AgMutex> > &);
	bool operator==(AgSharedInstance<AgMutex> *);
	bool operator!=(const AgPointer<AgSharedInstance<AgMutex> > &);
	bool operator!=(AgSharedInstance<AgMutex> *);
	AgSharedInstance<AgMutex> * getObject();
	void swap(AgPointer<AgSharedInstance<AgMutex> > &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgSharedInstance<AgMutex> * m_ptr; // 0x8
};
class AgSharedInstance<AgMutex> :
	AgReferencedObject
{
public:
	AgMutex * operator->();
	AgMutex & operator*();
protected:
	AgMutex m_object; // 0x8
public:
	AgSharedInstance<AgMutex>();
	~AgSharedInstance<AgMutex>();
};
enum STBVorbisError
{
	VORBIS__no_error = 0,
	VORBIS_need_more_data = 1,
	VORBIS_invalid_api_mixing = 2,
	VORBIS_outofmem = 3,
	VORBIS_feature_not_supported = 4,
	VORBIS_too_many_channels = 5,
	VORBIS_file_open_failure = 6,
	VORBIS_seek_without_length = 7,
	VORBIS_unexpected_eof = 10,
	VORBIS_seek_invalid = 11,
	VORBIS_invalid_setup = 20,
	VORBIS_invalid_stream = 21,
	VORBIS_missing_capture_pattern = 30,
	VORBIS_invalid_stream_structure_version = 31,
	VORBIS_continued_packet_flag_invalid = 32,
	VORBIS_incorrect_stream_serial_number = 33,
	VORBIS_invalid_first_page = 34,
	VORBIS_bad_packet_type = 35,
	VORBIS_cant_find_last_page = 36,
	VORBIS_seek_failed = 37,
};