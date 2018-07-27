#include "stdafx.h"
#include "GameScene.h"
#include "Debug.h"
#include "AudioManager.h"
#include "Window.h"
#include "GameSprite.h"
#include "GameShape.h"
#include "Player.h"
#include "Ball.h"

GameScene::GameScene()
{
	GameSprite* enemy = new GameSprite("Paddle.png", new sf::Sprite(), sf::Vector2f(Window::GetSize().x-20, 200), 0.0f, sf::Vector2f(1, 1));
	enemy->GetSprite()->setColor(sf::Color(255, 0, 0));
	enemy->GetTransform()->move(sf::Vector2f(-enemy->GetSprite()->getLocalBounds().width,0));
	GameSprite* player = new Player("Paddle.png", new sf::Sprite(), sf::Vector2f(20, 200), 0.0f, sf::Vector2f(1, 1));
	player->GetSprite()->setColor(sf::Color(0,0,255));
	GameSprite* BG = new GameSprite("DesertBG.jpg", new sf::Sprite(), sf::Vector2f(0, 0), 0.0f, sf::Vector2f(1, 1));
	BG->GetSprite()->setScale(Window::GetSize().x/BG->GetSprite()->getLocalBounds().width, Window::GetSize().y / BG->GetSprite()->getLocalBounds().height);
	Ball* ball = new Ball("DesertBG.jpg", new sf::CircleShape(25), sf::Vector2f(Window::GetSize().x/2, Window::GetSize().y/2), 0.0f, sf::Vector2f(1, 1));

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
	Scene::Update(deltatime);
}


