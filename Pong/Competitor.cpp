#include "stdafx.h"
#include "Competitor.h"
#include "Debug.h"


Competitor::Competitor(std::string textureName, sf::Sprite* sprite, sf::Vector2f pos, float rotation, sf::Vector2f scale)
	: Entity(sprite, pos, rotation, scale)
{

	this->sprite=sprite;
	if (texture.loadFromFile("Textures/" + textureName))
	{
		sprite->setTexture(texture);
	}
	else
		Debug::LogError("Could not find Texture!");
}


Competitor::~Competitor()
{

}

void Competitor::Update(double deltatime)
{

}



void Competitor::Render(sf::RenderWindow & window)
{
	window.draw(*sprite);
}

