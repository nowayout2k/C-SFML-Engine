#include "stdafx.h"
#include "GameSprite.h"


GameSprite::GameSprite(sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	sprite.setPosition(position);
	sprite.setRotation(rotation);
}


GameSprite::~GameSprite()
{
}

sf::Vector2f GameSprite::GetPosition() const
{
	return sprite.getPosition();
}

void GameSprite::SetPosition(const sf::Vector2f & pos)
{
	sprite.setPosition(pos);
}

float GameSprite::GetRotation() const
{
	return sprite.getRotation();
}

void GameSprite::SetRotation(const float rotation)
{
	sprite.setRotation(rotation);
}

sf::Vector2f GameSprite::GetScale() const
{
	return sprite.getScale();
}

void GameSprite::SetScale(const sf::Vector2f & scale)
{
	sprite.setScale(scale);
}

void GameSprite::SetTexture(const sf::Texture & texture)
{
	sprite.setTexture(texture);
}

void GameSprite::Render(sf::RenderWindow & window)
{
	window.draw(sprite);
}
