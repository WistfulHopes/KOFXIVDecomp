#pragma once

class AgWavUtils
{
	struct chunk;
	struct fmt;
	enum AudioFormat
	{
		AudioFormat_LinearPCM = 1,
		AudioFormat_ATRAC9 = 65534,
	};
public:
	static long startsWith(AgPointer<AgStream>, unsigned long);
	static long findChunk(AgPointer<AgStream>, unsigned long, unsigned long &, unsigned long &);
	static long readChunkData(AgPointer<AgStream>, unsigned char *, unsigned long, unsigned long);
};
struct AgWavUtils::chunk
{
	unsigned long m_chunkID; // 0x0
	unsigned long m_chunkSize; // 0x4
};
struct AgWavUtils::fmt
{
	unsigned short m_audioFormat; // 0x0
	unsigned short m_numChannels; // 0x2
	unsigned long m_sampleRate; // 0x4
	unsigned long m_byteRate; // 0x8
	unsigned short m_blockAlign; // 0xC
	unsigned short m_bitsPerSample; // 0xE
};
long AgWavUtils::startsWith(AgPointer<AgStream> stream, unsigned long fourcc); // 0x14068B460
long AgWavUtils::findChunk(AgPointer<AgStream> stream, unsigned long fourcc, unsigned long & dwChunkSize, unsigned long & dwChunkDataPosition); // 0x14068CEB0
long AgWavUtils::readChunkData(AgPointer<AgStream> file, unsigned char * buffer, unsigned long bufferSize, unsigned long bufferOffset); // 0x14068D110