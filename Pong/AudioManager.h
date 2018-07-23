#pragma once
#include "SFML/Audio.hpp"
#include <string>

/*Playback and manipulate audio*/
class AudioManager
{
public:
	//available sounds to play
	enum class ESounds
	{
		African,
		BubblePop,
		Lounge
	};


	AudioManager();
	virtual ~AudioManager();

	//Start playing a one-shot sound
	static void PlaySoundEffect(ESounds sound);

	//Start playing a looped sound
	static void PlayMusic(ESounds sound);

private:
	static sf::Sound sounds[];
	static sf::SoundBuffer buffers[];
	static std::string GetSoundFilename(ESounds sound);
	
};

