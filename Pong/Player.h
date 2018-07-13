#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	virtual ~Player();

	// Inherited via Entity
	virtual void Render(sf::RenderWindow & window) override;
	virtual void Update() override;
};

