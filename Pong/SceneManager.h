#pragma once
#include "Scene.h"
#include "GameScene.h"
#include <memory>


class SceneManager
{
public:
	enum class EScenes
	{
		GameScene = 0
	};
	SceneManager();
	~SceneManager();
	Scene& GetCurrentScene() { return *currentScene; }
	void LoadScene(const EScenes scene);
	void RenderScenes(sf::RenderWindow& window);
	void UpdateScenes(double deltaTime);
private:
	std::unique_ptr<Scene> currentScene;
};

