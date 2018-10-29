
#include "GameManager.h"
#include "Debug.h"
namespace OE
{
	GameManager::GameManager()
	{
		debug.reset(new Debug("arial.ttf", new sf::Text()));
		InputManager::GetInstance()->AddObserver(debug.get());

	}


	GameManager::~GameManager()
	{
		InputManager::GetInstance()->RemoveObserver(debug.get());
	}

	void GameManager::UpdateObjects(const double deltatime)
	{
		SceneManager::UpdateScenes(deltatime);
		debug->Update(deltatime);
	}

	void GameManager::RenderObjects(sf::RenderWindow& window)
	{
		SceneManager::RenderScenes(window);
		debug->Render(window);
	}
}

 
