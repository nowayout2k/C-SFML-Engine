#pragma once
#include "IObserver.h"
#include "IEntity.h"
#include "GameEvent.h"
#include <vector>
#include <memory>

class Subject
{
public:
	Subject();
	virtual ~Subject();
	static void AddObserver(IObserver* const observer);
	static void RemoveObserver(IObserver* const observer);
	static void Notify(std::shared_ptr<GameEvent> gameEvent);
private:
	static std::vector<IObserver*> observers;
	
};

