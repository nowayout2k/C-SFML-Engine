#pragma once
#include "IRenderable.h"
#include "IUpdatable.h"

class Entity : public IRenderable, public IUpdatable
{
public:
	Entity() {};
	virtual ~Entity() {};


 

	// Inherited via IUpdatable
	virtual void Update() override = 0;


	// Inherited via IRenderable
	virtual void Render(sf::RenderWindow & window) override = 0;

};

