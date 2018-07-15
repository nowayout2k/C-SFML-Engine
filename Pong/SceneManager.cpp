#include "stdafx.h"
#include "SceneManager.h"


SceneManager::SceneManager()
{

}


SceneManager::~SceneManager()
{

}

void SceneManager::LoadScene(const EScenes scene)
{

	switch (scene)
	{
	case EScenes::GameScene:
		currentScene.reset(new GameScene());
	}
}

void SceneManager::RenderScenes(sf::RenderWindow & window)
{
	currentScene->Render(window);
}

void SceneManager::UpdateScenes(double deltaTime)
{
	currentScene->Update(deltaTime);
}
