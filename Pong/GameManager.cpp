#include "stdafx.h"
#include "GameManager.h"
#include "Debug.h"

GameManager::GameManager()
{
	debug.reset(new Debug("arial.ttf",new sf::Text()));
	Input::AddObserver(debug.get());
	sceneManager.LoadScene(SceneManager::EScenes::GameScene);
}


GameManager::~GameManager()
{
	Input::RemoveObserver(debug.get());
}

void GameManager::UpdateObjects(double deltatime)
{
	sceneManager.UpdateScenes(deltatime);
	debug->Update(deltatime);
}

void GameManager::RenderObjects(sf::RenderWindow& window)
{
	sceneManager.RenderScenes(window);
	debug->Render(window);
}
 

 
