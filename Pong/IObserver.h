#pragma once
#include "GameEvent.h"
#include "IEntity.h"
#include <memory>

class IObserver
{

public:
	virtual ~IObserver() {};
	virtual void OnNotify(std::shared_ptr<GameEvent> gameEvent) = 0;
};