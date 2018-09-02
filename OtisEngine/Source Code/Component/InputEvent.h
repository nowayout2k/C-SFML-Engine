#pragma once
#include "GameEvent.h"
#include "SFML/Window.hpp"
#include <vector>

namespace OE
{
	/*object sent via an Observer containing info on an Input Event*/
	class InputEvent : public GameEvent
	{
	public:
		InputEvent() {};
		virtual ~InputEvent() {};

		/*Add a pressed key*/
		void AddKey(sf::Keyboard::Key key) { keys.push_back(key); };

		/*check for pressed key*/
		bool HasKey(sf::Keyboard::Key key) { if (std::find(keys.begin(), keys.end(), key) != keys.end()) return true; else return false; };
		int KeyCount() { return keys.size(); }
	private:
		std::vector<sf::Keyboard::Key> keys;
	};

}