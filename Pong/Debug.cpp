#include "stdafx.h"
#include "Debug.h"
#include "InputEvent.h"
#include "SFML/Graphics.hpp"
#include <iostream>

Debug::Debug() :GameText(sf::Vector2f(0,0), 0.0f, sf::Vector2f(1,1))
{
	SetFont("arial.ttf");
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
			enabled = !enabled;
			FPS.restart();
		}
	}
}

void Debug::Update(double deltatime)
{
	SetText(std::to_string(1/(FPS.restart().asMicroseconds()*.000001)));
}

void Debug::Render(sf::RenderWindow& window)
{
	if (enabled)
	{
		GameText::Render(window);
	}
}


 