#include "stdafx.h"
#include "Ball.h"
#include "Window.h"
#include "AudioManager.h"
#include "RandomNumber.h"

Ball::Ball(std::string& textureName, sf::CircleShape* circleShape) : circleShape(circleShape),
	GameShape(textureName, circleShape)
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

 
void Ball::Update(const double deltatime)
{

	transform->move(direction);
	if (transform->getPosition().y + circleShape->getLocalBounds().height > Window::GetSize().y || transform->getPosition().y<0)
	{
		AudioManager::PlaySoundEffect(AudioManager::ESounds::BubblePop);
		direction = sf::Vector2<float>(direction.x, -direction.y);
	}

	
	GameShape::Update(deltatime);
}

void Ball::OnNotify(std::shared_ptr<GameEvent> gameEvent)
{
	if (CollisionEvent* collisionEvent = dynamic_cast<CollisionEvent*>(gameEvent.get()))
	{
		Collision(collisionEvent);
	}
}
void Ball::Collision(CollisionEvent* collisionEvent)
{
	if (this == collisionEvent->collider)
	{
		AudioManager::PlaySoundEffect(AudioManager::ESounds::BubblePop);
		direction = sf::Vector2<float>(-direction.x, direction.y);
	}
	if (this == collisionEvent->collidee)
	{
		AudioManager::PlaySoundEffect(AudioManager::ESounds::BubblePop);
		direction = sf::Vector2<float>(-direction.x, direction.y);
	}
}

void Ball::Respawn()
{
	transform->setPosition(sf::Vector2f(Window::GetSize().x / 2, Window::GetSize().y / 2));
	float randomX = RandomNumber::GetRandomNumber(1.0f, 10.0f);
	float randomY = RandomNumber::GetRandomNumber(1.0f, 5.0f);
	direction = sf::Vector2f(RandomNumber::IsNegative()? -randomX : randomX, RandomNumber::IsNegative() ? -randomY : randomY);
}
