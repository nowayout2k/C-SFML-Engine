#pragma once
#include "Scene.h"
#include "GameSprite.h"
#include "Subject.h"
#include "SFML/Graphics.hpp"
#include "Ball.h"
#include "GameSprite.h"

//Scene for gameplay
class GameScene : public Scene, public Subject
{
public:
	GameScene();
	virtual ~GameScene();

	
	virtual void Render(sf::RenderWindow & window);
	virtual void Update(double deltatime);
protected:
	GameSprite * enemy;
	GameSprite* player;
	GameSprite* BG;
	Ball* ball;
};

