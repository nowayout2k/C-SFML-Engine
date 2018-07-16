#include "stdafx.h"
#include "GameShape.h"


GameShape::GameShape(sf::Shape* shape, sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	this->shape = shape;
	this->shape->setPosition(position);
	this->shape->setRotation(rotation);
	this->shape->setScale(scale);
}


GameShape::~GameShape()
{
	
}

sf::Vector2f GameShape::GetPosition() const
{
	return shape->getPosition();
}

void GameShape::SetPosition(const sf::Vector2f & pos)
{
	shape->setPosition(pos);
}

float GameShape::GetRotation() const
{
	return shape->getRotation();
}

void GameShape::SetRotation(const float rotation)
{
	shape->setRotation(rotation);
}

sf::Vector2f GameShape::GetScale() const
{
	return shape->getScale();
}

void GameShape::SetScale(const sf::Vector2f & scale)
{
	shape->setScale(scale);
}

void GameShape::SetTexture(const sf::Texture * const texture)
{
	shape->setTexture(texture);
}

 

void GameShape::Render(sf::RenderWindow & window)
{
	window.draw(*shape);
}
