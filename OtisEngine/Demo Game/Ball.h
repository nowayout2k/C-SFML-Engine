#pragma once
#include "GameShape.h"
#include "IObserver.h"
#include "CollisionEvent.h"

class Ball : public OE::GameShape, public OE::IObserver
{
public:
	Ball(std::string& textureName, sf::CircleShape* circleShape);
	virtual ~Ball();

	// Inherited via GameShape
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via GameShape
	virtual void Update(const double deltatime) override;

	virtual sf::CircleShape* const GetShape() const { return circleShape; }
	void Collision(OE::CollisionEvent* collisionEvent);
	void Respawn();

	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<OE::GameEvent> gameEvent) override;
protected:
	sf::CircleShape* circleShape;
	sf::Vector2<float> direction;


};

