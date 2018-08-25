#include "stdafx.h"
#include "Debug.h"
#include "InputEvent.h"
#include "SFML/Graphics.hpp"
#include <iostream>

Debug::Debug(std::string fontname, sf::Text* text) : Entity(text)
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
	if (InputEvent* inputEvent = dynamic_cast<InputEvent*>(gameEvent.get()))
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
	text->setString(std::to_string(1/(FPS.restart().asMicroseconds()*.000001)));
}

void Debug::Render(sf::RenderWindow& window)
{
	if (enabled)
	{
		window.draw(*text, sf::RenderStates::Default);
	}
}


 