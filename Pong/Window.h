#pragma once
#include "SFML/Graphics.hpp"

/*Render target*/
class Window
{
public:
	Window() {}
	~Window() {}
	sf::RenderWindow& GetWindow() { return _window; }
	static sf::Vector2f GetSize() { return _window.getView().getSize(); }

	static const int WINDOW_WIDTH = 960;
	static const int WINDOW_HEIGHT = 512;
private:
	static sf::RenderWindow _window;
};
 

