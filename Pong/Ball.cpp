#include "stdafx.h"
#include "Ball.h"
#include "Window.h"
#include "AudioManager.h"


Ball::Ball(std::string textureName, sf::CircleShape* circleShape) : circleShape(circleShape),
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

 
void Ball::Update(double deltatime)
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
	direction = sf::Vector2f(rand() % 10 + 1, rand() % 10 + 1);
}
