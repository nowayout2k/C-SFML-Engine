#pragma once
#include "GameEvent.h"
#include "SFML/Window.hpp"
#include <vector>

class InputEvent : public GameEvent
{
public:
	InputEvent() {};
	virtual ~InputEvent() {};
	void AddKey(sf::Keyboard::Key key) { keys.push_back(key); };
	bool HasKey(sf::Keyboard::Key key) { if (std::find(keys.begin(), keys.end(), key) != keys.end()) return true; else return false; };
private:
	std::vector<sf::Keyboard::Key> keys;
};

