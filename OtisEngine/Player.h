 #pragma once
#include "GameSprite.h"


class Player : public OE::GameSprite, public OE::IObserver
{
public:
	Player(std::string& textureName, sf::Sprite* const sprite);
	virtual ~Player();


	// Inherited via GameSprite
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via GameSprite
	virtual void Update(const double deltatime) override;


	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<OE::GameEvent> gameEvent) override;
};

