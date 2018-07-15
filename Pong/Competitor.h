#pragma once
#include "SpriteImage.h"
#include "IUpdatable.h"

class Competitor : public SpriteImage, public IUpdatable
{
public:
	Competitor(sf::Vector2f pos, float rotation, sf::Vector2f scale);
	virtual ~Competitor();

	// Inherited via Entity
	virtual void Render(sf::RenderWindow & window) override;
	virtual void Update(double deltatime) override;
};

