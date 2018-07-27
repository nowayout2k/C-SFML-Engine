#pragma once
#include "Scene.h"
#include "SFML/Graphics.hpp"

//Scene for gameplay
class GameScene : public Scene
{
public:
	GameScene();
	virtual ~GameScene();

	
	virtual void Render(sf::RenderWindow & window);
	virtual void Update(double deltatime);
};

