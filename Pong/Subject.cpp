#include "stdafx.h"
#include "Subject.h"
#include <algorithm>
#include "Debug.h"
Subject::Subject()
{

}


Subject::~Subject()
{
}

void Subject::AddObserver(IObserver* const observer)
{
	for (auto itr = observers.begin(); itr < observers.end(); ++itr)
	{
		if (*itr == observer)
		{
			Debug::Log("Observer already exists!");
			return;
		}
	}
	observers.push_back(observer);

}

void Subject::RemoveObserver(IObserver* const observer)
{
	for (auto itr = observers.begin(); itr < observers.end(); ++itr)
	{
		if (*itr == observer)
		{
			std::remove(observers.begin(), observers.end(), observer);
			return;
		}
	}
	Debug::Log("Observer does not exist!");
}

void Subject::Notify(std::shared_ptr<GameEvent> gameEvent)
{
	for (auto itr = observers.begin(); itr < observers.end(); ++itr)
	{
		(*itr)->OnNotify(gameEvent);
	}
}
