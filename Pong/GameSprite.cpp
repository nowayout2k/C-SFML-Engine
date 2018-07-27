#include "stdafx.h"
#include "GameSprite.h"
#include "Debug.h"


GameSprite::GameSprite(std::string textureName, sf::Sprite* sprite, sf::Vector2f pos, float rotation, sf::Vector2f scale)
	: Entity(sprite, pos, rotation, scale)
{
	this->texture.reset(new sf::Texture());
	this->sprite=sprite;
	if (texture->loadFromFile("Textures/" + textureName))
	{
		sprite->setTexture(*texture);
	}
	else
		Debug::LogError("Could not find Texture!");
}


GameSprite::~GameSprite()
{

}

void GameSprite::Update(double deltatime)
{

}



void GameSprite::Render(sf::RenderWindow & window)
{
	window.draw(*sprite);
}

