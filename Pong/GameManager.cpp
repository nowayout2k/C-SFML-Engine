#include "stdafx.h"
#include "GameManager.h"
#include "Debug.h"

GameManager::GameManager()
{
	sceneManager.LoadScene(SceneManager::EScenes::GameScene);
}


GameManager::~GameManager()
{

}

void GameManager::UpdateObjects(double deltatime)
{
	sceneManager.UpdateScenes(deltatime);
}

void GameManager::RenderObjects(sf::RenderWindow& window)
{
	sceneManager.RenderScenes(window);
}
 

 
