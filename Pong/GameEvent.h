#pragma once
#include <string>

class GameEvent
{
public:
	GameEvent() {};
	virtual ~GameEvent() {};
	std::string message;
};

