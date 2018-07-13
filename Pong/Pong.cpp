//  Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "GameManager.h"
#include "Debug.h"



int main()
{
	sf::RenderWindow window(sf::VideoMode(960, 512), "Template", sf::Style::Titlebar);

	GameManager gameManager;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{
				window.close();
			}
		}
		window.clear();
		gameManager.UpdateObjects();
		gameManager.RenderObjects(window);
		window.display();
	}

	return 0;
}