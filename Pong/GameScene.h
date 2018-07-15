#pragma once
#include "Scene.h"
#include "Competitor.h"

class GameScene : public Scene
{
public:
	GameScene();
	virtual ~GameScene();

	// Inherited via Scene
	virtual void Render(sf::RenderWindow & window) override;
	virtual void Update(double deltatime) override;

private:
	Competitor player;
};

