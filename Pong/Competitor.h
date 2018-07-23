#pragma once
#include "SFML/Graphics.hpp"
#include "Entity.h"
#include "IObserver.h"

/*an active participate in a game*/
class Competitor : public Entity
{
public:
	/*
	@param filename - name of file to use for texture (ex: image.png) [Passed to base class]
	@param position - positioning of the sprite [Passed to base class]
	@param rotation - angle to rotate sprite [Passed to base class]
	@parma scale - size factor based on inital size of sprite [Passed to base class]*/
	Competitor(std::string textureName, sf::Sprite* sprite, sf::Vector2f pos, float rotation, sf::Vector2f scale);
	virtual ~Competitor();

	// Inherited via Entity
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via Entity
	virtual void Update(double deltatime) override;

	virtual sf::Sprite* const GetSprite() const { return sprite; }

protected:
	sf::Sprite* sprite;
	sf::Texture texture;

};

