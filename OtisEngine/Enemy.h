#pragma once
#include "SpriteEntity.h"


class Enemy : public OE::SpriteEntity, public OE::IObserver
{
public:
	Enemy(std::string& textureName, sf::Sprite* const sprite);
	~Enemy();
 
	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<OE::GameEvent> gameEvent) override;

	void UpdateAI(class Ball* ball);
 
};

