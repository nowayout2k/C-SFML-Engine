#pragma once

#include "OtisEngine.h"
#include "Pong.h"

int main()
{
	OE::OtisEngine* engine = new OE::OtisEngine();
	Pong* pong = new Pong();
	while (engine->UpdateEngine())
	{

	}
	delete engine, pong;
	return 0;
}
  //Defines the entry point for the console application.


//#include <iostream>
//#include "GameManager.h"
//#include "Debug.h"
//#include "Window.h"
//
//
//int main()
//{
//
//
//	//create window
//	OE::Window window;
//
//	//tracks time between frames
//	sf::Clock deltatime;
//	//input handler
//	OE::Input input;
//	//create game driver
//	OE::GameManager gameManager;
//
//
//
//	//set frame limit upper bound
//	window.GetWindow().setFramerateLimit(60);
//
//	//Gameloop
//	while (window.GetWindow().isOpen())
//	{
//		sf::Event event;
//		while (window.GetWindow().pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.GetWindow().close();
//			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
//			{
//				window.GetWindow().close();
//			}
//		}
//		input.HandleInput();
//		gameManager.UpdateObjects(deltatime.restart().asMicroseconds()*.000001);
//		window.GetWindow().clear();
//		gameManager.RenderObjects(window.GetWindow());
//		window.GetWindow().display();
//	}
//
//	return 0;
//}