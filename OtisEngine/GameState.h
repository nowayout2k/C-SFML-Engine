#pragma once
#include "Ball.h"
#include "Enemy.h"
#include "Player.h"
#include "ScoreUI.h"
#include "Subject.h"
#include "Entity.h"

class GameState: public OE::Subject
{
public:
	GameState();
	~GameState();
	void UpdateGameState(Player* player, Enemy* enemy, Ball* ball, ScoreUI* enemyScoreUI, ScoreUI* playerScoreUI);


private:
	void AddScore(OE::Entity* scorer, int points);
	void ScoreCheck();

private:
	const int WIN_SCORE = 5;
	int playerScore;
	int enemyScore;
	class ScoreUI* enemyScoreUI;
	class ScoreUI* playerScoreUI;
};

