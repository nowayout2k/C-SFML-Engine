#pragma once
#include "GameSprite.h"
#include "IUpdatable.h"

/*an active participate in a game*/
class Competitor : public GameSprite, public IUpdatable
{
public:
	/*
	@param filename - name of file to use for texture (ex: image.png) [Passed to base class]
	@param position - positioning of the sprite [Passed to base class]
	@param rotation - angle to rotate sprite [Passed to base class]
	@parma scale - size factor based on inital size of sprite [Passed to base class]*/
	Competitor(std::string textureName, sf::Vector2f pos, float rotation, sf::Vector2f scale);
	virtual ~Competitor();

	// Inherited via Entity
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via Entity
	virtual void Update(double deltatime) override;
};

