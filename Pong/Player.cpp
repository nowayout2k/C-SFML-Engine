#include "stdafx.h"
#include "Player.h"
#include "InputEvent.h"
#include "Window.h"
#include "Input.h"

Player::Player(std::string textureName, sf::Sprite* sprite, sf::Vector2f pos, float rotation, sf::Vector2f scale)
	: Competitor(textureName, sprite, pos, rotation, scale)
{
	Input::AddObserver(this);
}


Player::~Player()
{
}

void Player::Render(sf::RenderWindow & window)
{
	Competitor::Render(window);
}

void Player::Update(double deltatime)
{
	Competitor::Update(deltatime);
}


void Player::OnNotify(std::shared_ptr<GameEvent> gameEvent)
{
	if (auto inputEvent = static_cast<InputEvent*>(gameEvent.get()))
	{
		if (inputEvent->HasKey(sf::Keyboard::Up))
		{
			if (sprite->getPosition().y <= 0)
				sprite->setPosition(sf::Vector2f(sprite->getPosition().x, 0));
			else
				sprite->move(sf::Vector2f(0, -5));
		}
		if (inputEvent->HasKey(sf::Keyboard::Down))
		{
			if (sprite->getPosition().y >= Window::GetSize().y - sprite->getLocalBounds().height)
				sprite->setPosition(sf::Vector2f(sprite->getPosition().x, Window::GetSize().y - sprite->getLocalBounds().height));
			else
				sprite->move(sf::Vector2f(0, 5));

		}

	}
}