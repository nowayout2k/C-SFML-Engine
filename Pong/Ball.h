#pragma once
#include "GameShape.h"
#include "IObserver.h"
#include "CollisionEvent.h"

class Ball : public GameShape, public IObserver
{
public:
	Ball(std::string textureName, sf::CircleShape* circleShape, sf::Vector2f pos, float rotation, sf::Vector2f scale);
	virtual ~Ball();

	// Inherited via GameShape
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via GameShape
	virtual void Update(double deltatime) override;

	virtual sf::CircleShape* const GetShape() const { return circleShape; }
	void Collision(CollisionEvent* collisionEvent);

protected:
	sf::CircleShape* circleShape;
	sf::Vector2<float> direction;

	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) override;
};

