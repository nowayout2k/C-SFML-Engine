#pragma once
#include "Scene.h"
#include <memory>

namespace OE
{
	class SceneManager
	{
	public:
		/*returns currently displaying scene*/
		static Scene& GetCurrentScene() { return *_currentScene; }

		/*Load a new scene
		@param scene - new scene to load*/
		static void LoadScene(Scene* const scene);

		/*Draw scene objects
		@param window - surface to draw onto*/
		static void RenderScenes(sf::RenderWindow& window);

		/*update scene objects
		@param deltaTime - time between frames*/
		static void UpdateScenes(double deltaTime);
	private:
		static std::unique_ptr<Scene> _currentScene;
	};
}
