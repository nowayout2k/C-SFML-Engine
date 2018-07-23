#include "stdafx.h"
#include "Entity.h"
#include "Debug.h"
#include "SFML/Graphics.hpp"

int Entity::nextID = 0;

Entity::Entity(sf::Transformable* entity, sf::Vector2f position, float rotation, sf::Vector2f scale)
{
	isAlive = true;
	this->id = nextID++;
	this->transform.reset(entity);
	this->transform->setPosition(position);
	this->transform->setRotation(rotation);
	this->transform->setScale(scale);
}


Entity::~Entity()
{
}



void Entity::Kill()
{
	isAlive = false;
}
 

 
