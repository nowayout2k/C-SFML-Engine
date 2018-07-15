#pragma once
#include "SFML/Graphics.hpp"
#include "Input.h"
#include "Competitor.h"
#include "SceneManager.h"

/*Game Driver*/
class GameManager 
{
public:
	GameManager();
	~GameManager();
	void UpdateObjects(double deltatime);
	void RenderObjects(sf::RenderWindow& window);
private:
	SceneManager sceneManager;
	
};

