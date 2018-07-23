#include "stdafx.h"
#include "Input.h"


Input::Input()
{
	
}


Input::~Input()
{
}

void Input::HandleInput()
{
	InputEvent* inputEvent = new InputEvent();


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		inputEvent->AddKey(sf::Keyboard::D);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
	
		inputEvent->AddKey(sf::Keyboard::Up);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		inputEvent->AddKey(sf::Keyboard::Down);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		inputEvent->AddKey(sf::Keyboard::Right);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		inputEvent->AddKey(sf::Keyboard::Left);
	}
 
	std::shared_ptr<GameEvent> gameEvent(inputEvent);

	Notify(gameEvent);
}
