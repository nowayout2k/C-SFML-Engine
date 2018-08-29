#pragma once
#include "GameEvent.h"
#include <memory>
namespace OE
{
	class IObserver
	{

	public:
		virtual ~IObserver() {};
		virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) = 0;
	};
}