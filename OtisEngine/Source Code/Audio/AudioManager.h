#pragma once
#include "SFML/Audio.hpp"
#include <string>

namespace OE
{
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
		static std::string GetSoundFilename(ESounds sound);
	private:
		static sf::Sound _sounds[];
		static sf::SoundBuffer _buffers[];
	};

}