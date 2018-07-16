#include "stdafx.h"
#include "GameShape.h"
#include "Debug.h"

GameShape::GameShape(sf::Shape* shape, sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	this->shape.reset(shape);
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

void GameShape::SetTexture(std::string filename)
{
	if (this->texture->loadFromFile("Textures/" + filename))
		shape->setTexture(this->texture.get());
	else
		Debug::Log("Could not find file " + filename);
}

 

void GameShape::Render(sf::RenderWindow & window)
{
	window.draw(*shape);
}
