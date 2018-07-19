#include "stdafx.h"
#include "Competitor.h"


Competitor::Competitor(std::string textureName, sf::Vector2f pos, float rotation, sf::Vector2f scale)
	: GameSprite(textureName, pos, rotation, scale)
{

}


Competitor::~Competitor()
{
}

void Competitor::Update(double deltatime)
{

}

void Competitor::Render(sf::RenderWindow & window)
{
	GameSprite::Render(window);
}

