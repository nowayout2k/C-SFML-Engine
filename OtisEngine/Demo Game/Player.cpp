#include "stdafx.h"
#include "Player.h"
#include "InputEvent.h"
#include "Window.h"
#include "InputManager.h"

Player::Player(std::string& textureName, sf::Sprite* const sprite)
	: SpriteEntity(textureName, sprite)
{
	OE::InputManager::GetInstance()->AddObserver(this);
}


Player::~Player()
{
}

void Player::Render(sf::RenderWindow & window)
{
	SpriteEntity::Render(window);
}

void Player::Update(const double deltatime)
{
	SpriteEntity::Update(deltatime);
}


void Player::OnNotify(std::shared_ptr<OE::GameEvent> gameEvent)
{
	if (auto inputEvent = dynamic_cast<OE::InputEvent*>(gameEvent.get()))
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
			if (sprite->getPosition().y >= OE::Window::GetSize().y - sprite->getLocalBounds().height)
				sprite->setPosition(sf::Vector2f(sprite->getPosition().x, OE::Window::GetSize().y - sprite->getLocalBounds().height));
			else
				sprite->move(sf::Vector2f(0, 5));

		}

	}
}