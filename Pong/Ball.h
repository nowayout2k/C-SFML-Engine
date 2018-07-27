#pragma once
#include "GameShape.h"
class Ball : public GameShape
{
public:
	Ball(std::string textureName, sf::CircleShape* circleShape, sf::Vector2f pos, float rotation, sf::Vector2f scale);
	virtual ~Ball();

	// Inherited via GameShape
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via GameShape
	virtual void Update(double deltatime) override;

	virtual sf::CircleShape* const GetShape() const { return circleShape; }

protected:
	sf::CircleShape* circleShape;
};

