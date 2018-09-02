
#include "SceneManager.h"

namespace OE
{
	std::unique_ptr<Scene> SceneManager::currentScene = nullptr;
	void SceneManager::LoadScene(Scene* scene)
	{
		currentScene.reset(scene);
	}

	void SceneManager::RenderScenes(sf::RenderWindow & window)
	{
		currentScene->Render(window);
	}

	void SceneManager::UpdateScenes(double deltaTime)
	{
		currentScene->Update(deltaTime);
	}
}