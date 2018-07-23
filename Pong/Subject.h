#pragma once
#include "IObserver.h"
#include "GameEvent.h"
#include <vector>
#include <memory>

/*Extendable class for classes that will brodcast events*/
class Subject
{
public:
	Subject();
	virtual ~Subject();

	/*Add a subscriber to Events related to this class*/
	static void AddObserver(IObserver* const observer);

	/*Remove a subscriber to Events related to this class*/
	static void RemoveObserver(IObserver* const observer);

	/*Notify all subscribers of an event*/
	static void Notify(std::shared_ptr<GameEvent> gameEvent);
private:
	static std::vector<IObserver*> observers;
	
};

