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

	std::shared_ptr<GameEvent> gameEvent(inputEvent);
	Notify(gameEvent);
}
