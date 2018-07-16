#include "stdafx.h"
#include "Debug.h"
#include "InputEvent.h"
#include "SFML/Graphics.hpp"
#include <iostream>

Debug::Debug() :GameText(sf::Vector2f(), 0.0f, sf::Vector2f())
{
	sf::Font font;
	if (!font.loadFromFile("Fonts/arial.ttf"))
	{
		Log("Could not load font!");
	}
	SetFont(font);
	SetText("TEST!!!");
	SetColor(sf::Color::White);
}


Debug::~Debug()
{
}

void Debug::Log(std::string message)
{
	std::cout << message << std::endl;
}

void Debug::LogError(std::string message)
{
	throw std::exception(message.c_str());
}

void Debug::OnNotify(std::shared_ptr<GameEvent> gameEvent)
{
	if (InputEvent* inputEvent = static_cast<InputEvent*>(gameEvent.get()))
	{
		if (inputEvent->HasKey(sf::Keyboard::D))
		{
			Debug::Log("D has been pressed!");
		}
	}
}
 