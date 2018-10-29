#include "stdafx.h"
#include "Ball.h"
#include "Window.h"
#include "AudioManager.h"
#include "RandomNumber.h"

Ball::Ball(std::string& textureName, sf::CircleShape* circleShape) : circleShape(circleShape),
	ShapeEntity(textureName, circleShape)
{

	direction = sf::Vector2<float>(2.0f, 2.0f);
}


Ball::~Ball()
{
}

void Ball::Render(sf::RenderWindow & window)
{
	ShapeEntity::Render(window);
}

 
void Ball::Update(const double deltatime)
{

	transform->move(direction);
	if (transform->getPosition().y + circleShape->getLocalBounds().height > OE::Window::GetSize().y || transform->getPosition().y<0)
	{
		OE::AudioManager::PlaySoundEffect(OE::AudioManager::ESounds::BubblePop);
		direction = sf::Vector2<float>(direction.x, -direction.y);
	}

	
	ShapeEntity::Update(deltatime);
}

void Ball::OnNotify(std::shared_ptr<OE::GameEvent> gameEvent)
{
	if (OE::CollisionEvent* collisionEvent = dynamic_cast<OE::CollisionEvent*>(gameEvent.get()))
	{
		Collision(collisionEvent);
	}
}
void Ball::Collision(OE::CollisionEvent* collisionEvent)
{
	if (this == collisionEvent->collider)
	{
		OE::AudioManager::PlaySoundEffect(OE::AudioManager::ESounds::BubblePop);
		direction = sf::Vector2<float>(-direction.x, direction.y);
	}
	if (this == collisionEvent->collidee)
	{
		OE::AudioManager::PlaySoundEffect(OE::AudioManager::ESounds::BubblePop);
		direction = sf::Vector2<float>(-direction.x, direction.y);
	}
}

void Ball::Respawn()
{
	transform->setPosition(sf::Vector2f(OE::Window::GetSize().x / 2, OE::Window::GetSize().y / 2));
	float randomX = OE::RandomNumber::GetRandomNumber(1.0f, 10.0f);
	float randomY = OE::RandomNumber::GetRandomNumber(1.0f, 5.0f);
	direction = sf::Vector2f(OE::RandomNumber::IsNegative()? -randomX : randomX, OE::RandomNumber::IsNegative() ? -randomY : randomY);
}
