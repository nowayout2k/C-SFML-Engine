#pragma once
#include "Scene.h"
#include "Competitor.h"

//Scene for gameplay
class GameScene : public Scene
{
public:
	GameScene();
	virtual ~GameScene();

	// Inherited via Scene
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via Scene
	virtual void Update(double deltatime) override;

private:
	std::unique_ptr<Competitor> player;
};

