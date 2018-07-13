#pragma once
#include "SFML/Graphics.hpp"
#include "Input.h"
#include "Player.h"

class GameManager 
{
public:
	GameManager();
	~GameManager();
	void UpdateObjects();
	void RenderObjects(sf::RenderWindow& window);
private:
	Player* player;
};

