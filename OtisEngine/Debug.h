#pragma once
#include <string>
#include "IObserver.h"
#include "Entity.h"

namespace OE
{
	/*Display Debugging information*/
	class Debug : public IObserver, public Entity
	{
	public:
		Debug(const std::string& fontname, sf::Text* const text);
		~Debug();

		/*output a message to the console
		@param message - text to display*/
		static void Log(const std::string& message);

		/*output a message to the console and raise exception
		@param message - text to display*/
		static void LogError(const std::string& message);


		/* Inherited via IObserver
		Callback for GameEvent
		@param gameEvent - Event info*/
		virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) override;


		/* Update Debug display*/
		virtual void Update(const double deltatime);

		/*draw Debug text
		@param window - where to draw*/
		virtual void Render(sf::RenderWindow& window);
	private:
		sf::Clock FPS;
		bool enabled;
		sf::Text* text;
		sf::Font font;

	};

}