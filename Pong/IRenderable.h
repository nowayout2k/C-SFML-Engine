#pragma once
#include "SFML/Graphics.hpp"

class IRenderable
{
	virtual void Render(sf::RenderWindow& window) = 0;
};