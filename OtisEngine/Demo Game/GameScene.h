#pragma once
#include "Scene.h"
#include "SpriteEntity.h"
#include "Subject.h"
#include "SFML/Graphics.hpp"
#include "Ball.h"
#include "SpriteEntity.h"
#include "ShapeEntity.h"
#include "Player.h"
#include "Ball.h"
#include "TextEntity.h"
#include "ScoreUI.h"
#include "Enemy.h"

//Scene for gameplay
class GameScene : public OE::Scene, public OE::Subject
{
public:
	GameScene();
	virtual ~GameScene();

	
	virtual void Render(sf::RenderWindow & window);
	virtual void Update(const double deltatime);
protected:
	Enemy* enemy;
	Player* player;
	Ball* ball;
	ScoreUI* enemyScoreUI;
	ScoreUI* playerScoreUI;
	OE::SpriteEntity* BG;

};

