#pragma once

enum AgAudioSourceType
{
	AgAudioSourceType_Sample = 0,
	AgAudioSourceType_Stream = 1,
};
enum AgAudioEffectType
{
	AgAudioEffectType_FilterChain = 0,
	AgAudioEffectType_FFT = 1,
	AgAudioEffectType_Reverb = 2,
};
struct AgAudioFilter
{
	AgAudioFilterType type; // 0x0
	float frequency; // 0x4
	float gain; // 0x8
};
struct AgAudioFFT
{
	long numBins; // 0x0
	float * spectrum; // 0x8
	AgAudioFFT();
};