#include "stdafx.h"
#include "GameScene.h"
#include "Debug.h"
#include "AudioManager.h"
#include "Window.h"
#include "CollisionEvent.h"
#include "GameShape.h"
#include "Player.h"
#include "Ball.h"

GameScene::GameScene()
{
	enemy = new GameSprite("Paddle.png", new sf::Sprite(), sf::Vector2f(Window::GetSize().x-20, 200), 0.0f, sf::Vector2f(1, 1));
	enemy->GetSprite()->setColor(sf::Color(255, 0, 0));
	enemy->GetTransform()->move(sf::Vector2f(-enemy->GetSprite()->getLocalBounds().width,0));
	player = new Player("Paddle.png", new sf::Sprite(), sf::Vector2f(20, 200), 0.0f, sf::Vector2f(1, 1));
	player->GetSprite()->setColor(sf::Color(0,0,255));
	BG = new GameSprite("DesertBG.jpg", new sf::Sprite(), sf::Vector2f(0, 0), 0.0f, sf::Vector2f(1, 1));
	BG->GetSprite()->setScale(Window::GetSize().x/BG->GetSprite()->getLocalBounds().width, Window::GetSize().y / BG->GetSprite()->getLocalBounds().height);
	ball = new Ball("DesertBG.jpg", new sf::CircleShape(25), sf::Vector2f(Window::GetSize().x/2, Window::GetSize().y/2), 0.0f, sf::Vector2f(1, 1));

 
	AddObserver(ball);
	AddEntity(BG);
	AddEntity(enemy);
	AddEntity(player);
	AddEntity(ball);

	AudioManager::PlayMusic(AudioManager::ESounds::Lounge);
}


GameScene::~GameScene()
{
}

void GameScene::Render(sf::RenderWindow & window)
{
	Scene::Render(window);
}

void GameScene::Update(double deltatime)
{
	if (player->GetSprite()->getGlobalBounds().intersects(ball->GetShape()->getGlobalBounds()))
	{
		Notify(std::shared_ptr<GameEvent>(new CollisionEvent(player, ball)));
	}
	if (enemy->GetSprite()->getGlobalBounds().intersects(ball->GetShape()->getGlobalBounds()))
	{
		Notify(std::shared_ptr<GameEvent>(new CollisionEvent(enemy, ball)));
	}
	Scene::Update(deltatime);
}


