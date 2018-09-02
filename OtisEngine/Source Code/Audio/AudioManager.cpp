
#include "AudioManager.h"
#include "Debug.h"

namespace OE
{
	sf::Sound AudioManager::sounds[2];
	sf::SoundBuffer AudioManager::buffers[2];

	AudioManager::AudioManager()
	{

	}


	AudioManager::~AudioManager()
	{
	}

	void AudioManager::PlaySoundEffect(ESounds sound)
	{
		if (buffers[0].loadFromFile("Sounds/" + GetSoundFilename(sound)))
		{
			sounds[0].setBuffer(buffers[0]);
			sounds[0].play();
		}
		else
			Debug::Log("Could not find Audio File!");
	}

	void AudioManager::PlayMusic(ESounds sound)
	{
		if (buffers[1].loadFromFile("Sounds/" + GetSoundFilename(sound)))
		{
			sounds[1].setBuffer(buffers[1]);
			sounds[1].setLoop(true);
			sounds[1].play();
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

