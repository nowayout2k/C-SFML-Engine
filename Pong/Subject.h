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
	void AddObserver(IObserver* const observer);
	void RemoveObserver(IObserver* const observer);
	void Notify(std::shared_ptr<GameEvent> gameEvent);
private:
	std::vector<IObserver*> observers;
	
};

