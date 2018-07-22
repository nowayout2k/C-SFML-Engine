#pragma once
#include "Scene.h"
#include "GameScene.h"
#include <memory>


class SceneManager
{
public:
	/*All scenes available to load*/
	enum class EScenes
	{
		GameScene = 0
	};

	SceneManager();
	~SceneManager();

	/*returns currently displaying scene*/
	Scene& GetCurrentScene() { return *currentScene; }

	/*Load a new scene
	@param scene - new scene to load*/
	void LoadScene(const EScenes scene);

	/*Draw scene objects
	@param window - surface to draw onto*/
	void RenderScenes(sf::RenderWindow& window);

	/*update scene objects
	@param deltaTime - time between frames*/
	void UpdateScenes(double deltaTime);
private:
	std::unique_ptr<Scene> currentScene;
};

