#pragma once
#include "Scene.h"
#include "Subject.h"
#include "SFML/Graphics.hpp"
#include "Ball.h"
#include "Enemy.h"
#include "Player.h"
#include "ScoreUI.h"

/*Scene for gameplay
Manages scene Objects*/
class GameScene : public OE::Scene, public OE::Subject
{
public:
	GameScene();
	virtual ~GameScene();
	/*Draw Scene Objects*/
	virtual void Render(sf::RenderWindow & window);

	/*Update scene objects*/
	virtual void Update(const double deltatime);
 

	// Inherited via Scene
	/*Create scene objects here*/
	virtual void SetUpScene() override;

protected:
	Enemy* enemy;
	Player* player;
	Ball* ball;
	ScoreUI* enemyScoreUI;
	ScoreUI* playerScoreUI;
	class OE::SpriteEntity* BG;
	class GameState* gameState;




};

