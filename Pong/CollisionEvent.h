#pragma once
#include "GameEvent.h"
#include "Entity.h"
#include "SFML/Window.hpp"
#include <vector>

/*object sent via an Observer containing info on an Input Event*/
class CollisionEvent : public GameEvent
{
public:
	CollisionEvent(Entity* const collider, Entity* const collidee) : collider(collider), collidee(collidee) {};
	virtual ~CollisionEvent() {};
	Entity* collider;
	Entity* collidee;
};
