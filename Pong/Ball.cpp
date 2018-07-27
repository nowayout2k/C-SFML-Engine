#include "stdafx.h"
#include "Ball.h"


Ball::Ball(std::string textureName, sf::CircleShape* circleShape, sf::Vector2f pos, float rotation, sf::Vector2f scale)
	:GameShape(textureName, circleShape, pos, rotation, scale)
{
}


Ball::~Ball()
{
}

void Ball::Render(sf::RenderWindow & window)
{
	GameShape::Render(window);
}

void Ball::Update(double deltatime)
{

	transform->move(.1, .2);
	
	GameShape::Update(deltatime);
}
