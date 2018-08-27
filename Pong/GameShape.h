#pragma once
#include "Entity.h"
class GameShape : public Entity
{
 
public:
	/*
	@param filename - name of file to use for texture (ex: image.png) [Passed to base class]*/
	GameShape(std::string& textureName, sf::Shape* const shape);
	virtual ~GameShape();

	// Inherited via Entity
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via Entity
	virtual void Update(const double deltatime) override;

	virtual sf::Shape* const GetShape() const { return shape; }

protected:
	sf::Shape* shape;
	std::unique_ptr<sf::Texture> texture;
};

