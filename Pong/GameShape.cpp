#include "stdafx.h"
#include "GameShape.h"
#include "Debug.h"


GameShape::GameShape(std::string textureName, sf::Shape* shape)
	: Entity(shape)
{
	this->texture.reset(new sf::Texture());
	this->shape = shape;
	if (texture->loadFromFile("Textures/" + textureName))
	{
		shape->setTexture(texture.get());
	}
	else
		Debug::LogError("Could not find Texture!");
}


GameShape::~GameShape()
{

}

void GameShape::Update(double deltatime)
{

}



void GameShape::Render(sf::RenderWindow & window)
{
	window.draw(*shape);
}