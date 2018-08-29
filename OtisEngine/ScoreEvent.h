#pragma once
#include "GameEvent.h"
#include "Entity.h"
#include "SFML/Window.hpp"
#include <vector>

/*object sent via an Observer containing info on an Input Event*/
class ScoreEvent : public OE::GameEvent
{
public:
	ScoreEvent(const OE::Entity* const scorer, int score) : scorer(scorer), score(score) {};
	virtual ~ScoreEvent() {};
	const OE::Entity* const scorer;
	int score;
};
