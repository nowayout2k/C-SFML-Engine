#include "stdafx.h"
#include "ShapeImage.h"


ShapeImage::ShapeImage(sf::Shape* shape, sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	this->shape = shape;
	this->shape->setPosition(position);
	this->shape->setRotation(rotation);
	this->shape->setScale(scale);
}


ShapeImage::~ShapeImage()
{
	
}

sf::Vector2f ShapeImage::GetPosition() const
{
	return shape->getPosition();
}

void ShapeImage::SetPosition(const sf::Vector2f & pos)
{
	shape->setPosition(pos);
}

float ShapeImage::GetRotation() const
{
	return shape->getRotation();
}

void ShapeImage::SetRotation(const float rotation)
{
	shape->setRotation(rotation);
}

sf::Vector2f ShapeImage::GetScale() const
{
	return shape->getScale();
}

void ShapeImage::SetScale(const sf::Vector2f & scale)
{
	shape->setScale(scale);
}

void ShapeImage::SetTexture(const sf::Texture * const texture)
{
	shape->setTexture(texture);
}

 

void ShapeImage::Render(sf::RenderWindow & window)
{
	window.draw(*shape);
}
