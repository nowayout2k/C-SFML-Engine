 #pragma once
#include "SpriteEntity.h"


class Player : public OE::SpriteEntity, public OE::IObserver
{
public:
	Player(std::string& textureName, sf::Sprite* const sprite);
	virtual ~Player();


	// Inherited via SpriteEntity
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via SpriteEntity
	virtual void Update(const double deltatime) override;


	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<OE::GameEvent> gameEvent) override;
};

