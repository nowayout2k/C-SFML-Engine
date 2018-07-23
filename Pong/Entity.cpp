#include "stdafx.h"
#include "Entity.h"
#include "Debug.h"
#include "SFML/Graphics.hpp"

int Entity::nextID = 0;

Entity::Entity(sf::Transformable* entity, sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	isAlive = true;
	this->id = nextID++;
	this->gameObject.reset(entity);
	this->gameObject->setPosition(position);
	this->gameObject->setRotation(rotation);
	this->gameObject->setScale(scale);
}


Entity::~Entity()
{
}



void Entity::Kill()
{
	isAlive = false;
}
 

 
