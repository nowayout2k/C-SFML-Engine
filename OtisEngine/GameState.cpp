#include "GameState.h"
#include "AudioManager.h"
#include "ScoreEvent.h"
#include "Window.h"


GameState::GameState()
{
	playerScore = 0;
	enemyScore = 0;
}


GameState::~GameState()
{
}

void GameState::UpdateGameState(Player* player, Enemy* enemy, Ball* ball, ScoreUI* enemyScoreUI, ScoreUI* playerScoreUI)
{
	if (ball->GetTransform()->getPosition().x + ball->GetShape()->getLocalBounds().width > OE::Window::GetSize().x)
	{
		OE::AudioManager::PlaySoundEffect(OE::AudioManager::ESounds::BubblePop);
		Notify(std::shared_ptr<OE::GameEvent>(new ScoreEvent(player, 1)));
		playerScoreUI->ScoreUpdate(1);
		ball->Respawn();
	}
	else if (ball->GetTransform()->getPosition().x<0)
	{
		OE::AudioManager::PlaySoundEffect(OE::AudioManager::ESounds::BubblePop);
		Notify(std::shared_ptr<OE::GameEvent>(new ScoreEvent(enemy, 1)));
		enemyScoreUI->ScoreUpdate(1);
		ball->Respawn();
	}
}
void GameState::AddScore(OE::Entity* scorer, int points)
{
	ScoreCheck();
}
void GameState::ScoreCheck()
{
	if (playerScore == WIN_SCORE)
	{

	}
	else if (enemyScore == WIN_SCORE)
	{

	}
}

 
