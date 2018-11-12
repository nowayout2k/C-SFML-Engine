#include "Enemy.h"
#include "InputEvent.h"
#include "Window.h"
#include "InputManager.h"
#include "Ball.h"

Enemy::Enemy(std::string& textureName, sf::Sprite* const sprite)
	: SpriteEntity(textureName, sprite)
{
}


Enemy::~Enemy()
{
}

void Enemy::OnNotify(std::shared_ptr<OE::GameEvent> gameEvent)
{
}

void Enemy::UpdateAI(Ball* ball)
{
	if (GetTransform()->getPosition().y + GetSprite()->getLocalBounds().height< ball->GetTransform()->getPosition().y)
	{
		GetTransform()->move(sf::Vector2f(0, 3));
	}
	else if (GetTransform()->getPosition().y > ball->GetTransform()->getPosition().y)
	{
		GetTransform()->move(sf::Vector2f(0, -3));
	}
}



 


