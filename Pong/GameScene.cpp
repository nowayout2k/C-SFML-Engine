#include "stdafx.h"
#include "GameScene.h"
#include "Debug.h"

GameScene::GameScene()
{
	player.reset(new Competitor("Paddle.png", sf::Vector2f(0, 50), 0.0f, sf::Vector2f()));
 
}


GameScene::~GameScene()
{
}

void GameScene::Render(sf::RenderWindow & window)
{
	player->Render(window);
}

void GameScene::Update(double deltatime)
{
	player->Update(deltatime);
}
