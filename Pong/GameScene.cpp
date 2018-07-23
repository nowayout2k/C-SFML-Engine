#include "stdafx.h"
#include "GameScene.h"
#include "Debug.h"

GameScene::GameScene()
{
	AddEntity(new Competitor("Paddle.png", new sf::Sprite(), sf::Vector2f(0, 50), 0.0f, sf::Vector2f(1,1)));
	
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


