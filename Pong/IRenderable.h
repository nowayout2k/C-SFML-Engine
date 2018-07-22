#pragma once
#include "SFML/Graphics.hpp"

//For classes that can render an object to a surface
class IRenderable
{
	//Draw to surface
	//@param window - surface to draw onto
	virtual void Render(sf::RenderWindow& window) = 0;
};