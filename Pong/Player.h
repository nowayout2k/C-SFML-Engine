#pragma once
#include "GameSprite.h"


class Player :  public GameSprite, public IObserver
{
public:
	Player(std::string textureName, sf::Sprite* sprite, sf::Vector2f pos, float rotation, sf::Vector2f scale);
	virtual ~Player();


	// Inherited via GameSprite
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via GameSprite
	virtual void Update(double deltatime) override;


	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) override;
};

