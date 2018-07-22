#pragma once
#include <string>

/*object sent via an Observer containing info on an Event*/
class GameEvent
{
public:
	GameEvent() {};
	virtual ~GameEvent() {};
	std::string message;
};

