#pragma once
#include <string>
#include "IObserver.h"
#include "Entity.h"

/*Display Debugging information*/
class Debug : public IObserver, public Entity
{
public:
	Debug(std::string fontname, sf::Text* text);
	~Debug();

	/*output a message to the console
	@param message - text to display*/
	static void Log(std::string message);

	/*output a message to the console and raise exception
	@param message - text to display*/
	static void LogError(std::string message);


	/* Inherited via IObserver
	Callback for GameEvent
	@param gameEvent - Event info*/
	virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) override;
 
 
	/* Update Debug display*/
	virtual void Update(double deltatime);

	/*draw Debug text
	@param window - where to draw*/
	virtual void Render(sf::RenderWindow& window);
private:
	sf::Clock FPS;
	bool enabled;
	sf::Text* text;
	sf::Font font;
 
};

