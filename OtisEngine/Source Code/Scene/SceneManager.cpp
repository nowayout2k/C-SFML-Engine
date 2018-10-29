
#include "SceneManager.h"

namespace OE
{
	std::unique_ptr<Scene> SceneManager::_currentScene = nullptr;
	void SceneManager::LoadScene(Scene* const scene)
	{
		_currentScene.reset(scene);
	}

	void SceneManager::RenderScenes(sf::RenderWindow & window)
	{
		_currentScene->Render(window);
	}

	void SceneManager::UpdateScenes(double deltaTime)
	{
		_currentScene->Update(deltaTime);
	}
}