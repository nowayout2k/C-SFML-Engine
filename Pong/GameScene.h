#pragma once
#include "Scene.h"
#include "GameSprite.h"
#include "Subject.h"
#include "SFML/Graphics.hpp"
#include "Ball.h"
#include "GameSprite.h"
#include "GameShape.h"
#include "Player.h"
#include "Ball.h"
#include "GameText.h"
#include "ScoreUI.h"

//Scene for gameplay
class GameScene : public Scene, public Subject
{
public:
	GameScene();
	virtual ~GameScene();

	
	virtual void Render(sf::RenderWindow & window);
	virtual void Update(const double deltatime);
protected:
	GameSprite * enemy;
	Player* player;
	Ball* ball;
	ScoreUI* enemyScoreUI;
	ScoreUI* playerScoreUI;
	GameSprite* BG;

};

