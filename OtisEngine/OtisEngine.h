#pragma once
#include <iostream>
#include "GameManager.h"
#include "Debug.h"
#include "Window.h"
#include "Scene.h"

namespace OE
{
	class OtisEngine
	{
	public:
		OtisEngine();
		~OtisEngine();
		bool UpdateEngine();
	private:
		//create window
		Window window;

		//tracks time between frames
		sf::Clock deltatime;

		//input handler
		Input input;

		//create game driver
		GameManager* gameManager;
	};
}