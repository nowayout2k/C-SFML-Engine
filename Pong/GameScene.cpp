#include "stdafx.h"
#include "GameScene.h"
#include "Debug.h"
#include "AudioManager.h"
#include "Window.h"
#include "CollisionEvent.h"


GameScene::GameScene()
{
	std::string desertBGTextureName = "DesertBG.jpg";
	std::string paddleTextureName = "Paddle.png";

	enemy = new GameSprite(paddleTextureName, new sf::Sprite());
	enemy->GetTransform()->setPosition(sf::Vector2f(Window::GetSize().x - 20, 200));
	enemy->GetSprite()->setColor(sf::Color(255, 0, 0));
	enemy->GetTransform()->move(sf::Vector2f(-enemy->GetSprite()->getLocalBounds().width,0));

	player = new Player(paddleTextureName, new sf::Sprite());
	player->GetTransform()->setPosition(sf::Vector2f(20, 200));
	player->GetSprite()->setColor(sf::Color(0,0,255));

	BG = new GameSprite(desertBGTextureName, new sf::Sprite());
	BG->GetSprite()->setScale(Window::GetSize().x/BG->GetSprite()->getLocalBounds().width, Window::GetSize().y / BG->GetSprite()->getLocalBounds().height);

	ball = new Ball(desertBGTextureName, new sf::CircleShape(15));
	ball->Respawn();

	
	playerScoreUI = new ScoreUI("Player: ","arial.ttf", new sf::Text());
	playerScoreUI->GetTransform()->setPosition(sf::Vector2f(Window::GetSize().x / 2 - 50, 20));
	playerScoreUI->GetTransform()->setScale(sf::Vector2f(.5, .5));
	playerScoreUI->GetText()->setString("Player:  0");

	enemyScoreUI = new ScoreUI("Enemy: ","arial.ttf", new sf::Text());
	enemyScoreUI->GetTransform()->setPosition(sf::Vector2f(Window::GetSize().x / 2 + 50, 20));
	enemyScoreUI->GetTransform()->setScale(sf::Vector2f(.5, .5));
	enemyScoreUI->GetText()->setString("Enemy:  0");


	AddObserver(ball);

	AddEntity(BG);
	AddEntity(enemy);
	AddEntity(player);
	AddEntity(ball);
	AddEntity(enemyScoreUI);
	AddEntity(playerScoreUI);

	AudioManager::PlayMusic(AudioManager::ESounds::Lounge);
}


GameScene::~GameScene()
{
}

void GameScene::Render(sf::RenderWindow & window)
{
	Scene::Render(window);
}
void WinCondition()
{

}
void LossCondition()
{

}
void GameScene::Update(const double deltatime)
{
	if (player->GetSprite()->getGlobalBounds().intersects(ball->GetShape()->getGlobalBounds()))
	{
		Notify(std::shared_ptr<GameEvent>(new CollisionEvent(player, ball)));
	}
	if (enemy->GetSprite()->getGlobalBounds().intersects(ball->GetShape()->getGlobalBounds()))
	{
		Notify(std::shared_ptr<GameEvent>(new CollisionEvent(enemy, ball)));
	}
	if (ball->GetTransform()->getPosition().x + ball->GetShape()->getLocalBounds().width > Window::GetSize().x )
	{
		AudioManager::PlaySoundEffect(AudioManager::ESounds::BubblePop);
		Notify(std::shared_ptr<GameEvent>(new ScoreEvent(player, 1)));
		playerScoreUI->ScoreUpdate(1);
		ball->Respawn();
	}
	else if (ball->GetTransform()->getPosition().x<0)
	{
		AudioManager::PlaySoundEffect(AudioManager::ESounds::BubblePop);
		Notify(std::shared_ptr<GameEvent>(new ScoreEvent(enemy, 1)));
		enemyScoreUI->ScoreUpdate(1);
		ball->Respawn();
	}
	
	Scene::Update(deltatime);
}


