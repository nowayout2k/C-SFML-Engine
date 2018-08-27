#include "stdafx.h"
#include "Debug.h"
#include "InputEvent.h"
#include "SFML/Graphics.hpp"
#include <iostream>

Debug::Debug(const std::string& fontname, sf::Text* const text) : Entity(text)
{
	this->text=text;
	if (font.loadFromFile("Fonts/" + fontname))
		text->setFont(font);
	else
		LogError("Could not find font!");

	text->setFillColor(sf::Color::White);
}


Debug::~Debug()
{
}

void Debug::Log(const std::string& message)
{
	std::cout << message << std::endl;
}

void Debug::LogError(const std::string& message)
{
	throw std::exception(message.c_str());
}

void Debug::OnNotify(std::shared_ptr<GameEvent> gameEvent)
{
	if (InputEvent* inputEvent = dynamic_cast<InputEvent*>(gameEvent.get()))
	{
		if (inputEvent->HasKey(sf::Keyboard::D))
		{
			enabled = !enabled;
			FPS.restart();
		}
	}
}

void Debug::Update(const double deltatime)
{
	text->setString(std::to_string(1/(FPS.restart().asMicroseconds()*.000001)));
}

void Debug::Render(sf::RenderWindow& window)
{
	if (enabled)
	{
		window.draw(*text, sf::RenderStates::Default);
	}
}


 