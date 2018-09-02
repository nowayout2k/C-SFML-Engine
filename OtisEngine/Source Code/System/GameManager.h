#pragma once
#include "SFML/Graphics.hpp"
#include "Input.h"
#include "SceneManager.h"
#include "Debug.h"
#include <memory>

namespace OE
{
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
		std::unique_ptr<Debug> debug;

	};

}