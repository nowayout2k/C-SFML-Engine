#pragma once
#include <string>
#include "IObserver.h"
#include "GameText.h"

class Debug : public IObserver, public GameText
{
public:
	Debug();
	~Debug();

	static void Log(std::string message);
	static void LogError(std::string message);


	// Inherited via IObserver
	virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) override;

};

