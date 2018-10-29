
#include "InputManager.h"


namespace OE
{
	InputManager* InputManager::_instance = nullptr;

	InputManager::InputManager()
	{
		_instance = this;
	}


	InputManager::~InputManager()
	{
	}

	void InputManager::HandleInput()
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

		if (inputEvent->KeyCount() > 0)
		{
			std::shared_ptr<GameEvent> gameEvent(inputEvent);
			Notify(gameEvent);
		}
	}
}