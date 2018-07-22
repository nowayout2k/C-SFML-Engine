#pragma once
#include "SFML/Graphics.hpp"
#include "Input.h"
#include "Competitor.h"
#include "SceneManager.h"
#include "Debug.h"
#include <memory>

/*Game Driver*/
class GameManager 
{
public:
	GameManager();
	~GameManager();

	/*Update Game*/
	void UpdateObjects(double deltatime);

	/*Draw Game*/
	void RenderObjects(sf::RenderWindow& window);
private:
	SceneManager sceneManager;
	std::unique_ptr<Debug> debug;
};

