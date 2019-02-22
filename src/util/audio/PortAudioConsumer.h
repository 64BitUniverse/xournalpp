/*
 * Xournal++
 *
 * Class to play audio using libportaudio
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <XournalType.h>

#include "DeviceInfo.h"
#include "AudioQueue.h"

#include <control/settings/Settings.h>

#include <portaudiocpp/PortAudioCpp.hxx>

#include <list>

class PortAudioConsumer
{
public:
	explicit PortAudioConsumer(Settings* settings, AudioQueue<int>* audioQueue);
	~PortAudioConsumer();

public:
	std::list<DeviceInfo> getOutputDevices();
	const DeviceInfo getSelectedOutputDevice();
	bool isPlaying();
	bool startPlaying();
	int playCallback(const void* inputBuffer, void* outputBuffer, unsigned long framesPerBuffer, const PaStreamCallbackTimeInfo* timeInfo, PaStreamCallbackFlags statusFlags);
	void stopPlaying();

private:
	XOJ_TYPE_ATTRIB;

protected:
	const unsigned long framesPerBuffer = 64;

	portaudio::AutoSystem autoSys;
	portaudio::System& sys;
	Settings* settings = nullptr;
	AudioQueue<int>* audioQueue = nullptr;

	int outputChannels = 0;

	portaudio::MemFunCallbackStream<PortAudioConsumer>* outputStream = nullptr;
};
