#pragma once
#include "Entity.h"
class GameShape : public Entity
{
 
public:
	/*
	@param filename - name of file to use for texture (ex: image.png) [Passed to base class]
	@param position - positioning of the sprite [Passed to base class]
	@param rotation - angle to rotate sprite [Passed to base class]
	@parma scale - size factor based on inital size of sprite [Passed to base class]*/
	GameShape(std::string textureName, sf::Shape* shape, sf::Vector2f pos, float rotation, sf::Vector2f scale);
	virtual ~GameShape();

	// Inherited via Entity
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via Entity
	virtual void Update(double deltatime) override;

	virtual sf::Shape* const GetShape() const { return shape; }

protected:
	sf::Shape* shape;
	std::unique_ptr<sf::Texture> texture;
};

