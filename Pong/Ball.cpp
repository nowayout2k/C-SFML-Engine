#include "stdafx.h"
#include "Ball.h"
#include "Window.h"
 

Ball::Ball(std::string textureName, sf::CircleShape* circleShape, sf::Vector2f pos, float rotation, sf::Vector2f scale) : circleShape(circleShape),
	GameShape(textureName, circleShape, pos, rotation, scale)
{

	direction = sf::Vector2<float>(2.0f, 2.0f);
}


Ball::~Ball()
{
}

void Ball::Render(sf::RenderWindow & window)
{
	GameShape::Render(window);
}

 
void Ball::Update(double deltatime)
{

	transform->move(direction);
	if (transform->getPosition().x + circleShape->getLocalBounds().width > Window::GetSize().x || transform->getPosition().x<0)
	{
		direction = sf::Vector2<float>(-direction.x, direction.y);
	}
	if (transform->getPosition().y + circleShape->getLocalBounds().height > Window::GetSize().y || transform->getPosition().y<0)
	{
		direction = sf::Vector2<float>(direction.x, -direction.y);
	}

	
	GameShape::Update(deltatime);
}

void Ball::OnNotify(std::shared_ptr<GameEvent> gameEvent)
{
	if (CollisionEvent* collisionEvent = static_cast<CollisionEvent*>(gameEvent.get()))
	{
		Collision(collisionEvent);
	}
}
void Ball::Collision(CollisionEvent* collisionEvent)
{
	if (this == collisionEvent->collider)
	{
		direction = sf::Vector2<float>(-direction.x, direction.y);
	}
	if (this == collisionEvent->collidee)
	{
		direction = sf::Vector2<float>(-direction.x, direction.y);
	}
}
