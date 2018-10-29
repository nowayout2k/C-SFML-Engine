
#include "AudioManager.h"
#include "Debug.h"

namespace OE
{
	sf::Sound AudioManager::_sounds[2];
	sf::SoundBuffer AudioManager::_buffers[2];

	AudioManager::AudioManager()
	{

	}


	AudioManager::~AudioManager()
	{
	}

	void AudioManager::PlaySoundEffect(ESounds sound)
	{
		if (_buffers[0].loadFromFile("Sounds/" + GetSoundFilename(sound)))
		{
			_sounds[0].setBuffer(_buffers[0]);
			_sounds[0].play();
		}
		else
			Debug::Log("Could not find Audio File!");
	}

	void AudioManager::PlayMusic(ESounds sound)
	{
		if (_buffers[1].loadFromFile("Sounds/" + GetSoundFilename(sound)))
		{
			_sounds[1].setBuffer(_buffers[1]);
			_sounds[1].setLoop(true);
			_sounds[1].play();
		}
		else
			Debug::Log("Could not find Audio File!");
	}

	std::string AudioManager::GetSoundFilename(ESounds sound)
	{
		switch (sound)
		{
		case ESounds::African:
			return "African.wav";
		case ESounds::BubblePop:
			return "BubblePop.wav";
		case ESounds::Lounge:
			return "Lounge.wav";
		default:
			Debug::Log("Could not find filename from Enum");
			return "";
		}
	}
}

