#pragma once
#include "Competitor.h"


class Player :  public Competitor, public IObserver
{
public:
	Player(std::string textureName, sf::Sprite* sprite, sf::Vector2f pos, float rotation, sf::Vector2f scale);
	virtual ~Player();


	// Inherited via Competitor
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via Competitor
	virtual void Update(double deltatime) override;


	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) override;
};

