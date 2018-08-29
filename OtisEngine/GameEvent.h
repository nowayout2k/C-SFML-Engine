#pragma once
#include <string>
namespace OE
{
	/*object sent via an Observer containing info on an Event*/
	class GameEvent
	{
	public:
		GameEvent() {};
		virtual ~GameEvent() {};
		std::string message;
	};

}