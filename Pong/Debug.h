#pragma once
#include <string>
#include "IObserver.h"
#include "GameText.h"
#include "IUpdatable.h"

class Debug : public IObserver, public GameText, public IUpdatable
{
public:
	Debug();
	~Debug();

	static void Log(std::string message);
	static void LogError(std::string message);


	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) override;
 
	// Inherited via IUpdatable
	virtual void Update(double deltatime) override;

	virtual void Render(sf::RenderWindow& window) override;
private:
	sf::Clock FPS;
	bool enabled;
 
};

