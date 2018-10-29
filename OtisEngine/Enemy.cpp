#include "Enemy.h"
#include "InputEvent.h"
#include "Window.h"
#include "InputManager.h"


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

void Enemy::Render(sf::RenderWindow & window)
{
	SpriteEntity::Render(window);
}

void Enemy::Update(const double deltatime)
{
	SpriteEntity::Update(deltatime);
}

 


