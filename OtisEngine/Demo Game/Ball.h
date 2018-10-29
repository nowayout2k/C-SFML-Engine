#pragma once
#include "ShapeEntity.h"
#include "IObserver.h"
#include "CollisionEvent.h"

class Ball : public OE::ShapeEntity, public OE::IObserver
{
public:
	Ball(std::string& textureName, sf::CircleShape* circleShape);
	virtual ~Ball();

	// Inherited via ShapeEntity
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via ShapeEntity
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

