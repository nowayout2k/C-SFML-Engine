#include "stdafx.h"
#include "SpriteImage.h"


SpriteImage::SpriteImage(sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	sprite.setPosition(position);
	sprite.setRotation(rotation);
}


SpriteImage::~SpriteImage()
{
}

sf::Vector2f SpriteImage::GetPosition() const
{
	return sprite.getPosition();
}

void SpriteImage::SetPosition(const sf::Vector2f & pos)
{
	sprite.setPosition(pos);
}

float SpriteImage::GetRotation() const
{
	return sprite.getRotation();
}

void SpriteImage::SetRotation(const float rotation)
{
	sprite.setRotation(rotation);
}

sf::Vector2f SpriteImage::GetScale() const
{
	return sprite.getScale();
}

void SpriteImage::SetScale(const sf::Vector2f & scale)
{
	sprite.setScale(scale);
}

void SpriteImage::SetTexture(const sf::Texture & texture)
{
	sprite.setTexture(texture);
}

void SpriteImage::Render(sf::RenderWindow & window)
{
	window.draw(sprite);
}
