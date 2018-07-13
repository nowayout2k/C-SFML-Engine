#include "stdafx.h"
#include "GameManager.h"
#include "Debug.h"

GameManager::GameManager() : player(new Player())
{
	Debug::Log("Player Created");
}


GameManager::~GameManager()
{
}

void GameManager::UpdateObjects()
{
}

void GameManager::RenderObjects(sf::RenderWindow& window)
{
	player->Render(window);

}

 
